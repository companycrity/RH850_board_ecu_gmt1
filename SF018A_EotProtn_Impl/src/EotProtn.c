/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  EotProtn.c
 *     SW-C Type:  EotProtn
 *  Generated at:  Wed Jul  6 15:21:07 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <EotProtn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : EotProtn.c
* Module Description: Implementation of End of Travel Protection function that specifies performance attributes 
            as the steering system approaches the mechanical end of travel of the steering gear. 
* Project           : CBD 
* Author            : Sarika Natu (KPIT Technologies)
************************************************************************************************************************ 
* Version Control:
* %version:           8 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 09/29/15  1        SN(KPIT)  Initial implementation  of SF018A                                                EA4#1020
* 11/05/15  2        CP        Anomaly 2258 fix -  Incorrect bilinear interpolation calls                       EA4#2394  
* 06/22/16  4        SB        SF018A_EOTProtn_Design version 1.5.0 implementation                              EA4#6395 
* 08/25/16  5        Rijvi     Updated per design rev. 1.6.0                                                    EA4#7029  
* 08/25/16  6        Rijvi     Updated per design rev. 1.6.0                                                    EA4#7029       
*                              [ Note: Rev 5 of source file was checked in mistakenly ]                    
* 09/15/16  7        KK        Updated per design rev. 1.7.0                                                    EA4#7583
* 09/29/16  8        KK        Fix for anomaly EA4#7771                                                    		EA4#7846
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u12p4
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u1p15
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u4p12
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u9p7
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_EotProtn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrFil.h"
#include "ArchGlbPrm.h"
#include "SysGlbPrm.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"
#include "NxtrIntrpn.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1]: Declaration appears after statements in a compound statement. This rule is violated 
                            to calculate size of local arrays */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their array 
                            type for code readability and to allow use of "sizeof" */                                     
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for 
                                              Rte_Call_FltInj_f32_Oper(), Rte_Call_GetRefTmr100MicroSec32bit_Oper(), 
                                              Rte_Call_GetTiSpan100MicroSec32bit_Oper(), Rte_Call_SetNtcSts_Oper() */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/********************************************* Embedded Local Constants **********************************************/
#define DISTLPFILFRQ_HZ_F32         5.0F
#define ZEROMOTTQCMD_MOTNWTMTR_F32  0.0F
#define EOTGAINHILIM_ULS_F32        1.0F
#define EOTGAINLOLIM_ULS_F32        0.0F
#define SOFTENDSTOPSTDI_CNT_U08     1U
#define SOFTENDSTOPSTNORM_CNT_U08   2U
#define SOFTENDSTOPSTENTR_CNT_U08   3U
#define SOFTENDSTOPSTEXIT_CNT_U08   4U
#define EOTDAMPGLOLIM_MOTNWTMTR_F32 0.0F
#define LASTPTGAIN_CNT_U08          3U
#define FIRSTPTDAMPG_CNT_U08        0U
#define DAMPGPTSIZE_CNT_U08         2U
#define DAMPGVEHSPDSIZE_CNT_U08     4U
#define GAINVEHSPDSIZE_CNT_U08      5U

#define PrmEotProtnMotSpdIncptY_u12p4  (*(const Ary1D_u12p4_2 *) Rte_Prm_EotProtnMotSpdIncptY_Ary1D())
#define PrmEotProtnEntrGainVehSpdTbl_u9p7 (*(const Ary1D_u9p7_5 *) Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D())
#define PrmEotProtnEntrGainX_u12p4 (*(const Ary2D_u12p4_5_4 *) Rte_Prm_EotProtnEntrGainX_Ary2D())
#define PrmEotProtnEntrGainY_u1p15 (*(const Ary2D_u1p15_5_4 *) Rte_Prm_EotProtnEntrGainY_Ary2D())
#define PrmEotProtnHwTqScaX_u4p12 (*(const Ary1D_u4p12_2 *) Rte_Prm_EotProtnHwTqScaX_Ary1D())
#define PrmEotProtnHwDegDampgX_u12p4 (*(const Ary2D_u12p4_4_2 *) Rte_Prm_EotProtnHwDegDampgX_Ary2D())
#define PrmEotProtnDampgVehSpdTbl_u9p7 (*(const Ary1D_u9p7_4 *) Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D())
#define PrmEotProtnMotSpdIncptX_u12p4 (*(const Ary1D_u12p4_2 *) Rte_Prm_EotProtnMotSpdIncptX_Ary1D())

/******************************************** Local Function Prototypes **********************************************/
static FUNC(float32, EotProtn_CODE) EotVelImpct(float32 HwAgEotCw_HwDeg_T_f32, float32 HwAgEotCcw_HwDeg_T_f32, 
                                            float32 HwAg_HwDeg_T_f32, float32 VehSpd_Kph_T_f32, 
                                            float32 HwAgAuthy_Uls_T_f32, float32 MotVelCrf_MotRadPerSec_T_f32);

static FUNC(float32, EotProtn_CODE) LimPosnDetd(boolean RackTrvlLimrRngEna_Cnt_T_logl, float32 HwAgEotCw_HwDeg_T_f32, float32 HwAgEotCcw_HwDeg_T_f32,
                                                float32 HwAg_HwDeg_T_f32);
                                            
static FUNC(float32, EotProtn_CODE) CalcEntrGain(float32 HwAg_HwDeg_T_f32, float32 VehSpd_Kph_T_f32, float32 LimPosn_HwDeg_T_f32);
                                                
static FUNC(float32, EotProtn_CODE) CalcExitGain(float32 HwTq_HwNwtMtr_T_f32);

static FUNC(float32, EotProtn_CODE) CalcEotGain(float32 EntrGain_Uls_T_f32, float32 ExitGain_Uls_T_f32);

static FUNC(float32, EotProtn_CODE) FildEotGain(float32 EotGain_Uls_T_f32); 

static FUNC(float32, EotProtn_CODE) CalcEotDampg(float32 HwAg_HwDeg_T_f32, float32 VehSpd_Kph_T_f32, float32 HwAgEotCw_HwDeg_T_f32,
                                                    float32 HwAgEotCcw_HwDeg_T_f32, float32 MotVelCrf_MotRadPerSec_T_f32);      

static FUNC(float32, EotProtn_CODE) EotActvCmdCalc(boolean RackTrvlLimrDi_Cnt_T_logl, float32 HwAgAuthy_Uls_T_f32, float32 VehSpd_Kph_T_f32, float32 HwAg_HwDeg_T_f32,
                                                float32 MotVelCrf_MotRadPerSec_T_f32, float32 LimPosn_HwDeg_T_f32);

static FUNC(void, EotProtn_CODE) SoftEndStopStCtrl(float32 VehSpd_Kph_T_f32, float32 HwAgAuthy_Uls_T_f32, boolean EotProtnDi_Cnt_T_logl,
                                                    boolean EotDetd_Cnt_T_logl, float32 HwAg_HwDeg_T_f32,
                                                    float32 FildHwTq_HwNwtMtr_T_f32, float32 SysMotTqCmdSca_Uls_T_f32, float32 LimPosn_HwDeg_T_f32);
                                                    
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
 * u0p16: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_2: Array with 2 element(s) of type u0p16
 * Ary1D_u12p4_2: Array with 2 element(s) of type u12p4
 * Ary1D_u12p4_4: Array with 4 element(s) of type u12p4
 * Ary1D_u1p15_4: Array with 4 element(s) of type u1p15
 * Ary1D_u4p12_2: Array with 2 element(s) of type u4p12
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 * Ary2D_u0p16_4_2: Array with 4 element(s) of type Ary1D_u0p16_2
 * Ary2D_u12p4_4_2: Array with 4 element(s) of type Ary1D_u12p4_2
 * Ary2D_u12p4_5_4: Array with 5 element(s) of type Ary1D_u12p4_4
 * Ary2D_u1p15_5_4: Array with 5 element(s) of type Ary1D_u1p15_4
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevEotAssiSca(void)
 *   float32 *Rte_Pim_PrevEotDampg(void)
 *   float32 *Rte_Pim_PrevImpctPosn(void)
 *   float32 *Rte_Pim_dEotProtnDampg(void)
 *   float32 *Rte_Pim_dEotProtnEntrGain(void)
 *   float32 *Rte_Pim_dEotProtnEotAssiSca(void)
 *   float32 *Rte_Pim_dEotProtnEotGain(void)
 *   float32 *Rte_Pim_dEotProtnExitGain(void)
 *   float32 *Rte_Pim_dEotProtnLimPosn(void)
 *   uint8 *Rte_Pim_NewSoftEndStopSt(void)
 *   uint8 *Rte_Pim_PrevSoftEndStopSt(void)
 *   boolean *Rte_Pim_PrevRackTrvlLimrEna(void)
 *   boolean *Rte_Pim_PrevRackTrvlLimrInin(void)
 *   boolean *Rte_Pim_dEotProtnDetd(void)
 *   boolean *Rte_Pim_dEotProtnRackTrvlLimrDi(void)
 *   FilLpRec1 *Rte_Pim_EotAssiScaLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EotProtnActvRegnBypMaxThd_Val(void)
 *   float32 Rte_Prm_EotProtnDampgSlew_Val(void)
 *   float32 Rte_Prm_EotProtnDeltaTqThd_Val(void)
 *   float32 Rte_Prm_EotProtnDftPosn_Val(void)
 *   float32 Rte_Prm_EotProtnEntrStLpFilFrq_Val(void)
 *   float32 Rte_Prm_EotProtnExitStLpFilFrq_Val(void)
 *   float32 Rte_Prm_EotProtnHwAgGain_Val(void)
 *   float32 Rte_Prm_EotProtnHwAgMax_Val(void)
 *   float32 Rte_Prm_EotProtnHwAgMin_Val(void)
 *   float32 Rte_Prm_EotProtnHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_EotProtnMotSpdIncptSca_Val(void)
 *   float32 Rte_Prm_EotProtnMotVelGain_Val(void)
 *   float32 Rte_Prm_EotProtnPosnRampStep_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrAuthyThdLimd_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrRng_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrVehSpdThd_Val(void)
 *   float32 Rte_Prm_EotProtnSoftEndStopAuthyThd_Val(void)
 *   float32 Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val(void)
 *   boolean Rte_Prm_EotProtnRackTrvlLimrEna_Logl(void)
 *   boolean Rte_Prm_EotProtnRunEotVelImpctAndSoftEndStop_Logl(void)
 *   boolean Rte_Prm_EotProtnSoftEndStopEna_Logl(void)
 *   u9p7 *Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D(void)
 *   u9p7 *Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D(void)
 *   u12p4 *Rte_Prm_EotProtnEntrGainX_Ary2D(void)
 *   u1p15 *Rte_Prm_EotProtnEntrGainY_Ary2D(void)
 *   u0p16 *Rte_Prm_EotProtnExitDampgY_Ary2D(void)
 *   u12p4 *Rte_Prm_EotProtnHwDegDampgX_Ary2D(void)
 *   u4p12 *Rte_Prm_EotProtnHwTqScaX_Ary1D(void)
 *   u12p4 *Rte_Prm_EotProtnMotSpdIncptX_Ary1D(void)
 *   u12p4 *Rte_Prm_EotProtnMotSpdIncptY_Ary1D(void)
 *   u0p16 *Rte_Prm_EotProtnNormDampgY_Ary2D(void)
 *
 *********************************************************************************************************************/


#define EotProtn_START_SEC_CODE
#include "EotProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotProtnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, EotProtn_CODE) EotProtnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: EotProtnInit1
 *********************************************************************************************************************/
    /*Low Pass Filter initialization*/
    FilLpInit(0.0F, Rte_Prm_EotProtnHwTqLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqLpFil()); /* REQ: SF018A #111 I */
    FilLpInit(0.0F, DISTLPFILFRQ_HZ_F32, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_EotAssiScaLpFil());
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotProtnPer1
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
 *   Std_ReturnType Rte_Read_EotProtnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgCcwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgCwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EotActvCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotAssiSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotDampgCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, EotProtn_CODE) EotProtnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: EotProtnPer1
 *********************************************************************************************************************/
    VAR(boolean, AUTOMATIC) EotProtnDi_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgAuthy_Uls_T_f32;
    VAR(boolean, AUTOMATIC) HwAgCcwDetd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwAgCwDetd_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwAgEotCcw_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgEotCw_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) SysMotTqCmdSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) EotDetd_Cnt_T_logl;
    VAR(float32, AUTOMATIC) EotMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) FildHwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotDampgCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotActvCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotAssiSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) EntrGain_Uls_T_f32;
    VAR(float32, AUTOMATIC) ExitGain_Uls_T_f32;
    VAR(float32, AUTOMATIC) EotGain_Uls_T_f32;
    VAR(float32, AUTOMATIC) LimPosn_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTqLpFil_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) RackTrvlLimrDi_Cnt_T_logl; 
    VAR(boolean, AUTOMATIC) RackTrvlLimrRngEna_Cnt_T_logl; 
    
    /*Reading inputs from RTE*/
    (void)Rte_Read_EotProtnDi_Logl(&EotProtnDi_Cnt_T_logl);         /* REQ: SF018A #40 I */
    (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);                     /* REQ: SF018A #41 I */
    (void)Rte_Read_HwAgAuthy_Val(&HwAgAuthy_Uls_T_f32);             /* REQ: SF018A #42 I */
    (void)Rte_Read_HwAgCcwDetd_Logl(&HwAgCcwDetd_Cnt_T_logl);       /* REQ: SF018A #80 I */
    (void)Rte_Read_HwAgCwDetd_Logl(&HwAgCwDetd_Cnt_T_logl);         /* REQ: SF018A #43 I */
    (void)Rte_Read_HwAgEotCcw_Val(&HwAgEotCcw_HwDeg_T_f32);         /* REQ: SF018A #82 I */
    (void)Rte_Read_HwAgEotCw_Val(&HwAgEotCw_HwDeg_T_f32);           /* REQ: SF018A #81 I */
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);                  /* REQ: SF018A #18 I */
    (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);    /* REQ: SF018A #38 I */
    (void)Rte_Read_SysMotTqCmdSca_Val(&SysMotTqCmdSca_Uls_T_f32);   /* REQ: SF018A #156 I */
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);                   /* REQ: SF018A #39 I */
    
    /*'EotDetd' Subsystem Implementation*/
    /* REQ: SF018A #101 I */
    /* REQ: SF018A #102 I */
    if((FALSE != HwAgCcwDetd_Cnt_T_logl) && (FALSE != HwAgCwDetd_Cnt_T_logl) && (FALSE != Rte_Prm_EotProtnSoftEndStopEna_Logl()))
    {
        EotDetd_Cnt_T_logl = TRUE;
    }
    else 
    {
        EotDetd_Cnt_T_logl = FALSE;
    }
    *Rte_Pim_dEotProtnDetd() = EotDetd_Cnt_T_logl;
    /* ENDREQ: SF018A #101 I */
    /* ENDREQ: SF018A #102 I */
    
    /*'EotMotTqLim' Output calculation*/
    if(((FALSE != EotDetd_Cnt_T_logl) && (SOFTENDSTOPSTDI_CNT_U08 != *Rte_Pim_PrevSoftEndStopSt()) &&           /* REQ: SF018A #101 I */    /* REQ: SF018A #102 I */
        (FALSE == Rte_Prm_EotProtnRunEotVelImpctAndSoftEndStop_Logl())) || (FALSE != EotProtnDi_Cnt_T_logl))    /* REQ: SF018A #104 I */    /* REQ: SF018A #103 I */
    {
        EotMotTqLim_MotNwtMtr_T_f32 = SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32;    /* REQ: SF018A #98 I */
    }
    else
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        EotMotTqLim_MotNwtMtr_T_f32 = EotVelImpct(HwAgEotCw_HwDeg_T_f32, HwAgEotCcw_HwDeg_T_f32, HwAg_HwDeg_T_f32,
                                                VehSpd_Kph_T_f32, HwAgAuthy_Uls_T_f32, MotVelCrf_MotRadPerSec_T_f32);   /* REQ: SF018A #98 I */
    }
    
    /*'SoftEndStop' Subsystem Implementation*/
	/*'RackTrvlLimrDi' subsystem implementation*/
    /* REQ: SF018A #118 I */
    /* REQ: SF018A #119 I */
    /* REQ: SF018A #120 I */
        if((HwAgAuthy_Uls_T_f32 < Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val()) || (FALSE == Rte_Prm_EotProtnRackTrvlLimrEna_Logl()) ||
        (VehSpd_Kph_T_f32 > Rte_Prm_EotProtnRackTrvlLimrVehSpdThd_Val()) || (*Rte_Pim_PrevSoftEndStopSt() == SOFTENDSTOPSTDI_CNT_U08))
    {
        RackTrvlLimrDi_Cnt_T_logl = TRUE;
    }
    else
    {
        RackTrvlLimrDi_Cnt_T_logl = FALSE;
    }
    /* ENDREQ: SF018A #118 I */
    /* ENDREQ: SF018A #119 I */
    /* ENDREQ: SF018A #120 I */
    
    *Rte_Pim_dEotProtnRackTrvlLimrDi() = RackTrvlLimrDi_Cnt_T_logl;
    /* REQ: SF018A #171 I */
    if((HwAgAuthy_Uls_T_f32 < Rte_Prm_EotProtnRackTrvlLimrAuthyThdLimd_Val()) && 
       (HwAgAuthy_Uls_T_f32 > Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val()) )
    {
        RackTrvlLimrRngEna_Cnt_T_logl = TRUE;
    }
    else
    {
        RackTrvlLimrRngEna_Cnt_T_logl = FALSE;
    }    
    /* ENDREQ: SF018A #171 I */
    LimPosn_HwDeg_T_f32 = LimPosnDetd(RackTrvlLimrRngEna_Cnt_T_logl, HwAgEotCw_HwDeg_T_f32, HwAgEotCcw_HwDeg_T_f32, HwAg_HwDeg_T_f32);
    EntrGain_Uls_T_f32 = CalcEntrGain(HwAg_HwDeg_T_f32, VehSpd_Kph_T_f32, LimPosn_HwDeg_T_f32);
    ExitGain_Uls_T_f32 = CalcExitGain(HwTq_HwNwtMtr_T_f32);

    /*Calculate Filtered Hw torque */
    HwTqLpFil_HwNwtMtr_T_f32 = (float32)Sign_s08_f32(HwAg_HwDeg_T_f32) * HwTq_HwNwtMtr_T_f32;
    FildHwTq_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(HwTqLpFil_HwNwtMtr_T_f32, Rte_Pim_HwTqLpFil());
    
    EotGain_Uls_T_f32 = CalcEotGain(EntrGain_Uls_T_f32, ExitGain_Uls_T_f32);
    EotAssiSca_Uls_T_f32 = FildEotGain(EotGain_Uls_T_f32);
    
    EotDampgCmd_MotNwtMtr_T_f32 = CalcEotDampg(HwAg_HwDeg_T_f32, VehSpd_Kph_T_f32, HwAgEotCw_HwDeg_T_f32, 
                                                HwAgEotCcw_HwDeg_T_f32, MotVelCrf_MotRadPerSec_T_f32);
                                        
    EotActvCmd_MotNwtMtr_T_f32 = EotActvCmdCalc(RackTrvlLimrDi_Cnt_T_logl, HwAgAuthy_Uls_T_f32, VehSpd_Kph_T_f32, HwAg_HwDeg_T_f32,
                                                    MotVelCrf_MotRadPerSec_T_f32, LimPosn_HwDeg_T_f32);
    
    /*'SoftEndStopStCtrl' Subsystem Implementation*/
    SoftEndStopStCtrl(VehSpd_Kph_T_f32, HwAgAuthy_Uls_T_f32, EotProtnDi_Cnt_T_logl, EotDetd_Cnt_T_logl,
                        HwAg_HwDeg_T_f32, FildHwTq_HwNwtMtr_T_f32, SysMotTqCmdSca_Uls_T_f32, LimPosn_HwDeg_T_f32);
    
    /*Writing outputs to RTE*/
    (void)Rte_Write_EotActvCmd_Val(EotActvCmd_MotNwtMtr_T_f32);     /* REQ: SF018A #83 I */
    (void)Rte_Write_EotAssiSca_Val(EotAssiSca_Uls_T_f32);           /* REQ: SF018A #44 I */
    (void)Rte_Write_EotDampgCmd_Val(EotDampgCmd_MotNwtMtr_T_f32);   /* REQ: SF018A #45 I */
    (void)Rte_Write_EotMotTqLim_Val(EotMotTqLim_MotNwtMtr_T_f32);   /* REQ: SF018A #20 I */
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define EotProtn_STOP_SEC_CODE
#include "EotProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*****************************************************************************************************************
  * Name            :   EotVelImpct
  * Description     :   Implementation of 'EotVelImpct' subsystem. 
  *             This function performs original End Of Travel Impact Routine
  * Inputs          :   HwAgEotCw_HwDeg_T_f32, HwAgEotCcw_HwDeg_T_f32, HwAg_HwDeg_T_f32, VehSpd_Kph_T_f32, 
  *             HwAgAuthy_Uls_T_f32, MotVelCrf_MotRadPerSec_T_f32
  * Outputs      :   None
  * Returns      :   EotMotTqLim_MotNwtMtr_T_f32
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) EotVelImpct(float32 HwAgEotCw_HwDeg_T_f32, float32 HwAgEotCcw_HwDeg_T_f32, 
                                            float32 HwAg_HwDeg_T_f32, float32 VehSpd_Kph_T_f32, 
                                            float32 HwAgAuthy_Uls_T_f32, float32 MotVelCrf_MotRadPerSec_T_f32)
                                            
{
    VAR(uint16, AUTOMATIC) HwAgEotCw_HwDeg_T_u12p4;
    VAR(uint16, AUTOMATIC) AbsHwAgEotCcw_HwDeg_T_u12p4;
    VAR(float32, AUTOMATIC) HwPosnDif_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) EotImpctPosn_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) EotProtnImpctPosn_HwDeg_T_f32;
    VAR(uint16, AUTOMATIC) MotSpdIncptXTbl_HwDeg_T_u12p4[2];
    VAR(uint16, AUTOMATIC) EotProtnImpctPosn_HwDeg_T_u12p4;
    VAR(uint16, AUTOMATIC) MotSpdIntcpt_HwDeg_T_u12p4;
    VAR(float32, AUTOMATIC) MotSpdIntcpt_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) EotAssiLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotMotTqLim_MotNwtMtr_T_f32;
    
    HwAgEotCw_HwDeg_T_u12p4 = FloatToFixd_u16_f32(HwAgEotCw_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
    
    AbsHwAgEotCcw_HwDeg_T_u12p4 = FloatToFixd_u16_f32(Abslt_f32_f32(HwAgEotCcw_HwDeg_T_f32), NXTRFIXDPT_FLOATTOP4_ULS_F32);
    
    /*'Ramp' Subsystem Implementation*/
    /* REQ: SF018A #99 I */
    HwPosnDif_HwDeg_T_f32 = Abslt_f32_f32(HwAg_HwDeg_T_f32) - (*Rte_Pim_PrevImpctPosn());
    
    if(Rte_Prm_EotProtnPosnRampStep_Val() < Abslt_f32_f32(HwPosnDif_HwDeg_T_f32))
    {
        EotImpctPosn_HwDeg_T_f32 = *Rte_Pim_PrevImpctPosn() + ((float32)Sign_s08_f32(HwPosnDif_HwDeg_T_f32) * Rte_Prm_EotProtnPosnRampStep_Val());
    }
    else
    {
        EotImpctPosn_HwDeg_T_f32 = Abslt_f32_f32(HwAg_HwDeg_T_f32);
    }
    
    /*Input calc for Linear interpolation*/
    if(1.0F <= HwAgAuthy_Uls_T_f32)
    {
        EotProtnImpctPosn_HwDeg_T_f32 = EotImpctPosn_HwDeg_T_f32;
    }
    else
    {
        EotProtnImpctPosn_HwDeg_T_f32 = Rte_Prm_EotProtnDftPosn_Val();
    }
    /* ENDREQ: SF018A #99 I */
    *Rte_Pim_PrevImpctPosn() = EotProtnImpctPosn_HwDeg_T_f32;
    
    /* XTbl calc for Linear interpolation*/
    /* REQ: SF018A #100 I */
    if(0.0F > HwAg_HwDeg_T_f32)
    {
        MotSpdIncptXTbl_HwDeg_T_u12p4[0] =  AbsHwAgEotCcw_HwDeg_T_u12p4 - PrmEotProtnMotSpdIncptX_u12p4[0];
        MotSpdIncptXTbl_HwDeg_T_u12p4[1] =  AbsHwAgEotCcw_HwDeg_T_u12p4 - PrmEotProtnMotSpdIncptX_u12p4[1];
    }
    else
    {
        MotSpdIncptXTbl_HwDeg_T_u12p4[0] =  HwAgEotCw_HwDeg_T_u12p4 - PrmEotProtnMotSpdIncptX_u12p4[0];
        MotSpdIncptXTbl_HwDeg_T_u12p4[1] =  HwAgEotCw_HwDeg_T_u12p4 - PrmEotProtnMotSpdIncptX_u12p4[1];     
    }
    
    /*Linear interpolation of calculated tables*/
    EotProtnImpctPosn_HwDeg_T_u12p4 = FloatToFixd_u16_f32(EotProtnImpctPosn_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
    MotSpdIntcpt_HwDeg_T_u12p4 = LnrIntrpn_u16_u16VariXu16VariY(MotSpdIncptXTbl_HwDeg_T_u12p4, 
                                                                PrmEotProtnMotSpdIncptY_u12p4,
                                                                (uint16)TblSize_m(MotSpdIncptXTbl_HwDeg_T_u12p4),
                                                                EotProtnImpctPosn_HwDeg_T_u12p4);       /* REQ: SF018A #99 I */
    
    MotSpdIntcpt_HwDeg_T_f32 = FixdToFloat_f32_u16(MotSpdIntcpt_HwDeg_T_u12p4, NXTRFIXDPT_P4TOFLOAT_ULS_F32);
    
    EotAssiLim_MotNwtMtr_T_f32 = Max_f32((MotSpdIntcpt_HwDeg_T_f32 - Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32)), 0.0F);   /* REQ: SF018A #99 I */
    /* ENDREQ: SF018A #100 I */
    
    /*'EotMotTqLim' output calculation*/
    /* REQ: SF018A #98 I */
    if((TRUE == *Rte_Pim_PrevRackTrvlLimrEna()) || (VehSpd_Kph_T_f32 > Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val())) /* REQ: SF018A #101 I */    /* REQ: SF018A #103 I */
    {
        EotMotTqLim_MotNwtMtr_T_f32 = SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32;
    }
    else
    {
        EotMotTqLim_MotNwtMtr_T_f32 = EotAssiLim_MotNwtMtr_T_f32 * Rte_Prm_EotProtnMotSpdIncptSca_Val();    /* REQ: SF018A #100 I */
    }
    
    /*Limiting the output*/
    EotMotTqLim_MotNwtMtr_T_f32 = Lim_f32(EotMotTqLim_MotNwtMtr_T_f32, ZEROMOTTQCMD_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    /* ENDREQ: SF018A #98 I */
    
    return EotMotTqLim_MotNwtMtr_T_f32;
}

 /*****************************************************************************************************************
  * Name            :   LimPosnDetd
  * Description     :   Implementation of 'LimPosnDetd' subsystem.
  * Inputs          :   RackTrvlLimrRngEna_Cnt_T_logl, HwAgEotCw_HwDeg_T_f32, HwAgEotCcw_HwDeg_T_f32, HwAg_HwDeg_T_f32
  * Outputs      :   None
  * Returns      :   None
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) LimPosnDetd(boolean RackTrvlLimrRngEna_Cnt_T_logl, float32 HwAgEotCw_HwDeg_T_f32, float32 HwAgEotCcw_HwDeg_T_f32,
                                                float32 HwAg_HwDeg_T_f32)
{
    VAR(float32, AUTOMATIC) EotCwPosn_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) EotCcwPosn_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) LimPosn_HwDeg_T_f32; 
    VAR(float32, AUTOMATIC) EotProtnRackTrvlLimr_HwDeg_T_f32; 
    
    
    
    /*'LimPosnDetd' Subsystem Implementation*/
    if((HwAgEotCw_HwDeg_T_f32 < Rte_Prm_EotProtnHwAgMin_Val())  || (HwAgEotCw_HwDeg_T_f32 > Rte_Prm_EotProtnHwAgMax_Val()))
    {
        EotCwPosn_HwDeg_T_f32 = Rte_Prm_EotProtnHwAgMin_Val();
    }
    else
    {
        EotCwPosn_HwDeg_T_f32 = HwAgEotCw_HwDeg_T_f32;
    }
    
    if((HwAgEotCcw_HwDeg_T_f32 < (-Rte_Prm_EotProtnHwAgMax_Val())) || (HwAgEotCcw_HwDeg_T_f32 > (-Rte_Prm_EotProtnHwAgMin_Val())))
    {
        EotCcwPosn_HwDeg_T_f32 = (-Rte_Prm_EotProtnHwAgMin_Val());
    }
    else
    {
        EotCcwPosn_HwDeg_T_f32 = HwAgEotCcw_HwDeg_T_f32;
    }
   /* REQ: SF018A #171 I */
   if(RackTrvlLimrRngEna_Cnt_T_logl == TRUE)
    {
        EotProtnRackTrvlLimr_HwDeg_T_f32 = Rte_Prm_EotProtnRackTrvlLimrRng_Val();
    }
    else
    {
        EotProtnRackTrvlLimr_HwDeg_T_f32 = Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val();
    }   
    /* ENDREQ: SF018A #171 I */
    if(0.0F <= HwAg_HwDeg_T_f32)
    {
        LimPosn_HwDeg_T_f32 = EotCwPosn_HwDeg_T_f32 - EotProtnRackTrvlLimr_HwDeg_T_f32;
    }
    else
    {
        LimPosn_HwDeg_T_f32 = EotCcwPosn_HwDeg_T_f32 + EotProtnRackTrvlLimr_HwDeg_T_f32;
    }
    *Rte_Pim_dEotProtnLimPosn() = LimPosn_HwDeg_T_f32;
    
    return LimPosn_HwDeg_T_f32;
}

 /*****************************************************************************************************************
  * Name            :   CalcEntrGain
  * Description     :   Implementation of 'CalcEntrGain' subsystem.
  * Inputs          :   HwAg_HwDeg_T_f32, VehSpd_Kph_T_f32
  * Outputs      :   None
  * Returns      :   None
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) CalcEntrGain(float32 HwAg_HwDeg_T_f32, float32 VehSpd_Kph_T_f32, float32 LimPosn_HwDeg_T_f32)
{
    VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
    VAR(uint16, AUTOMATIC) EntrGain_Uls_T_u1p15;
    VAR(float32, AUTOMATIC) EntrGain_Uls_T_f32;
    VAR(float32, AUTOMATIC) PosnInp_HwDeg_T_f32;
    VAR(uint16, AUTOMATIC) PosnInp_HwDeg_T_u12p4;
    
    /*'CalcEntrGain' Subsystem Implementation*/
    /* REQ: SF018A #110 I */
    if(*Rte_Pim_PrevSoftEndStopSt() != SOFTENDSTOPSTDI_CNT_U08) 
    {
        /*Input calculation for bilinear interpolation*/
        PosnInp_HwDeg_T_f32 = Max_f32(0.0F,(Abslt_f32_f32(LimPosn_HwDeg_T_f32) - Abslt_f32_f32(HwAg_HwDeg_T_f32))); /* REQ: SF018A #106 I */
        
        PosnInp_HwDeg_T_u12p4 = FloatToFixd_u16_f32(PosnInp_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
        VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
        
        EntrGain_Uls_T_u1p15 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                      PosnInp_HwDeg_T_u12p4, 
                                                                      PrmEotProtnEntrGainVehSpdTbl_u9p7,
                                                                      (uint16)TblSize_m(PrmEotProtnEntrGainVehSpdTbl_u9p7),
                                                                      Rte_Prm_EotProtnEntrGainX_Ary2D(),
                                                                      Rte_Prm_EotProtnEntrGainY_Ary2D(), 
                                                                      (uint16)TblSize_m(PrmEotProtnEntrGainX_u12p4[0]));    /* REQ: SF018A #106 I */
        
        EntrGain_Uls_T_f32 = FixdToFloat_f32_u16(EntrGain_Uls_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);
    }
    else
    {
        EntrGain_Uls_T_f32 = EOTGAINHILIM_ULS_F32;
    }
    /* ENDREQ: SF018A #110 I */
    
    *Rte_Pim_dEotProtnEntrGain() = EntrGain_Uls_T_f32;

    return EntrGain_Uls_T_f32; 
}
 /*****************************************************************************************************************
  * Name            :   CalcExitGain
  * Description     :   Implementation of 'CalcExitGain' subsystem.
  * Inputs          :   HwTq_HwNwtMtr_T_f32
  * Outputs      :   None
  * Returns      :   ExitGain_Uls_T_f32
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) CalcExitGain(float32 HwTq_HwNwtMtr_T_f32)
{
    VAR(uint16, AUTOMATIC) HwTq_HwNwtMtr_T_u4p12;
    VAR(float32, AUTOMATIC) ExitGain_Uls_T_f32;
    VAR(uint16, AUTOMATIC) ExitGain_Uls_T_u8p8;
    CONST(uint16, AUTOMATIC) HWTQSCAY_ULS_U8P8[2] = {0U, 256U};
    
    /*'CalcExitGain' Subsystem Implementation*/
    HwTq_HwNwtMtr_T_u4p12 = FloatToFixd_u16_f32(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32), NXTRFIXDPT_FLOATTOP12_ULS_F32);
    ExitGain_Uls_T_u8p8 = LnrIntrpn_u16_u16VariXu16VariY(PrmEotProtnHwTqScaX_u4p12, 
                                                        HWTQSCAY_ULS_U8P8,
                                                        (uint16)TblSize_m(PrmEotProtnHwTqScaX_u4p12),
                                                        HwTq_HwNwtMtr_T_u4p12);                 /* REQ: SF018A #106 I */            
    ExitGain_Uls_T_f32 = FixdToFloat_f32_u16(ExitGain_Uls_T_u8p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
    
    ExitGain_Uls_T_f32 = Max_f32(*Rte_Pim_PrevEotAssiSca(), ExitGain_Uls_T_f32);
    *Rte_Pim_dEotProtnExitGain() = ExitGain_Uls_T_f32;
    
    return ExitGain_Uls_T_f32;
}       
 /*****************************************************************************************************************
  * Name            :   CalcEotGain
  * Description     :   Implementation of 'CalcEotGain' subsystem.
  * Inputs          :   None
  * Outputs      :   None
  * Returns      :   None
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) CalcEotGain(float32 EntrGain_Uls_T_f32, float32 ExitGain_Uls_T_f32)
{
    VAR(float32, AUTOMATIC) EotGain_Uls_T_f32;
    
    /*'CalcEotGain' Subsystem Implementation*/
    switch((uint8)*Rte_Pim_PrevSoftEndStopSt())
    {
        case SOFTENDSTOPSTDI_CNT_U08: 
            EotGain_Uls_T_f32 = EOTGAINHILIM_ULS_F32;   /* REQ: SF018A #110 I */
            break;
            
        case SOFTENDSTOPSTEXIT_CNT_U08:
            EotGain_Uls_T_f32 = ExitGain_Uls_T_f32;
            break;
        
        default:
            EotGain_Uls_T_f32 = EntrGain_Uls_T_f32;
            break;
    }
    *Rte_Pim_dEotProtnEotGain() = EotGain_Uls_T_f32;
    
    return EotGain_Uls_T_f32;
}   
 /*****************************************************************************************************************
  * Name            :   FildEotGain
  * Description     :   Implementation of 'FildEotGain' subsystem.
  * Inputs          :   None
  * Outputs      :   None
  * Returns      :   None
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) FildEotGain(float32 EotGain_Uls_T_f32)
{
    /*'FildEotGain' Subsystem Implementation*/
    VAR(float32, AUTOMATIC) EotGainFil_Uls_T_f32;
    VAR(float32, AUTOMATIC) EotAssiSca_Uls_T_f32;
    
    /* REQ: SF018A #111 I */
    switch(*Rte_Pim_PrevSoftEndStopSt())    
    {
        case SOFTENDSTOPSTDI_CNT_U08: 
            EotGainFil_Uls_T_f32 = DISTLPFILFRQ_HZ_F32;
            break;
            
        case SOFTENDSTOPSTEXIT_CNT_U08:
            EotGainFil_Uls_T_f32 = Rte_Prm_EotProtnExitStLpFilFrq_Val();
            break;
        
        default:
            EotGainFil_Uls_T_f32 = Rte_Prm_EotProtnEntrStLpFilFrq_Val();
            break;
    }
    
    /*Low Pass filter Update gain and Update output*/
    FilLpUpdGain(EotGainFil_Uls_T_f32, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_EotAssiScaLpFil());
    EotAssiSca_Uls_T_f32 = FilLpUpdOutp_f32(EotGain_Uls_T_f32, Rte_Pim_EotAssiScaLpFil());
    /* ENDREQ: SF018A #111 I */
    
    *Rte_Pim_dEotProtnEotAssiSca() = EotAssiSca_Uls_T_f32;  
    
    /*Limiting the output*/
    EotAssiSca_Uls_T_f32 = Lim_f32(EotAssiSca_Uls_T_f32, EOTGAINLOLIM_ULS_F32, EOTGAINHILIM_ULS_F32);   /* REQ: SF018A #106 I */    /* REQ: SF018A #109 I */
    *Rte_Pim_PrevEotAssiSca() = EotAssiSca_Uls_T_f32;
    
    return EotAssiSca_Uls_T_f32;
    
}   
 /*****************************************************************************************************************
  * Name            :   CalcEotDampg
  * Description     :   Implementation of 'CalcEotDampg' subsystem.
  * Inputs          :   HwAg_HwDeg_T_f32, VehSpd_Kph_T_f32, HwAgEotCw_HwDeg_T_f32, 
  *             HwAgEotCcw_HwDeg_T_f32, MotVelCrf_MotRadPerSec_T_f32
  * Outputs      :   None
  * Returns      :   EotDampgCmd_MotNwtMtr_T_f32
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) CalcEotDampg(float32 HwAg_HwDeg_T_f32, float32 VehSpd_Kph_T_f32, float32 HwAgEotCw_HwDeg_T_f32,
                                                    float32 HwAgEotCcw_HwDeg_T_f32, float32 MotVelCrf_MotRadPerSec_T_f32)
{
    VAR(uint16, AUTOMATIC) AbsHwAgEotCcw_HwDeg_T_u12p4;
    VAR(uint16, AUTOMATIC) HwAgEotCw_HwDeg_T_u12p4;
    VAR(uint16, AUTOMATIC) HwAg_HwDeg_T_u12p4;
    VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
    VAR(uint16, AUTOMATIC) EotDampgCmd_MotNwtMtr_T_u0p16;
    VAR(float32, AUTOMATIC) EotDampgCmdLo_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotDampgCmdHi_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotDampgCmd_MotNwtMtr_T_f32 = 0.0F;
    VAR(uint8, AUTOMATIC) RowNo_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) ColNo_Cnt_T_u08;
    VAR(uint16, AUTOMATIC) NewHwDegDampgX_HwDeg_T_u12p4[DAMPGVEHSPDSIZE_CNT_U08][DAMPGPTSIZE_CNT_U08];
    
    /*'CalcEotDampg' Subsystem Implementation*/
    /*X table calculation of Bilinear interpolation*/
    /* REQ: SF018A #112 I */
    if(0.0F > HwAg_HwDeg_T_f32)
    {
        AbsHwAgEotCcw_HwDeg_T_u12p4 = FloatToFixd_u16_f32(Abslt_f32_f32(HwAgEotCcw_HwDeg_T_f32), NXTRFIXDPT_FLOATTOP4_ULS_F32);
        
        for(RowNo_Cnt_T_u08 = 0U; RowNo_Cnt_T_u08 < DAMPGVEHSPDSIZE_CNT_U08; RowNo_Cnt_T_u08++)
        {
            for(ColNo_Cnt_T_u08 = 0U; ColNo_Cnt_T_u08 < DAMPGPTSIZE_CNT_U08; ColNo_Cnt_T_u08++)
            {
                NewHwDegDampgX_HwDeg_T_u12p4[RowNo_Cnt_T_u08][ColNo_Cnt_T_u08] = AbsHwAgEotCcw_HwDeg_T_u12p4 - 
                                    PrmEotProtnHwDegDampgX_u12p4[RowNo_Cnt_T_u08][ColNo_Cnt_T_u08];
            }
        }
    }
    else
    {
        HwAgEotCw_HwDeg_T_u12p4 = FloatToFixd_u16_f32(HwAgEotCw_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
        
        for(RowNo_Cnt_T_u08 = 0U; RowNo_Cnt_T_u08 < DAMPGVEHSPDSIZE_CNT_U08; RowNo_Cnt_T_u08++)
        {
            for(ColNo_Cnt_T_u08 = 0U; ColNo_Cnt_T_u08 < DAMPGPTSIZE_CNT_U08; ColNo_Cnt_T_u08++)
            {
                NewHwDegDampgX_HwDeg_T_u12p4[RowNo_Cnt_T_u08][ColNo_Cnt_T_u08] = HwAgEotCw_HwDeg_T_u12p4 - 
                                    PrmEotProtnHwDegDampgX_u12p4[RowNo_Cnt_T_u08][ColNo_Cnt_T_u08];
            }
        }
    }
    
    HwAg_HwDeg_T_u12p4 = FloatToFixd_u16_f32(Abslt_f32_f32(HwAg_HwDeg_T_f32), NXTRFIXDPT_FLOATTOP4_ULS_F32);
    VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
    
    /*'EotDampgCmd' Output calculation*/
    switch(*Rte_Pim_PrevSoftEndStopSt())
    {
        case SOFTENDSTOPSTDI_CNT_U08: 
            EotDampgCmd_MotNwtMtr_T_f32 = EOTDAMPGLOLIM_MOTNWTMTR_F32;
            break;
            
        case SOFTENDSTOPSTNORM_CNT_U08:
        case SOFTENDSTOPSTENTR_CNT_U08:
            EotDampgCmd_MotNwtMtr_T_u0p16 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                        HwAg_HwDeg_T_u12p4, 
                                                                      PrmEotProtnDampgVehSpdTbl_u9p7,
                                                                      (uint16)TblSize_m(PrmEotProtnDampgVehSpdTbl_u9p7),
                                                                      (P2CONST(uint16, AUTOMATIC, AUTOMATIC))NewHwDegDampgX_HwDeg_T_u12p4,
                                                                      Rte_Prm_EotProtnNormDampgY_Ary2D(), 
                                                                      (uint16)TblSize_m(NewHwDegDampgX_HwDeg_T_u12p4[0]));
                                                                      
            EotDampgCmd_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(EotDampgCmd_MotNwtMtr_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);
            break;
            
        case SOFTENDSTOPSTEXIT_CNT_U08:
            EotDampgCmd_MotNwtMtr_T_u0p16 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                        HwAg_HwDeg_T_u12p4, 
                                                                      PrmEotProtnDampgVehSpdTbl_u9p7,
                                                                      (uint16)TblSize_m(PrmEotProtnDampgVehSpdTbl_u9p7),
                                                                      (P2CONST(uint16, AUTOMATIC, AUTOMATIC))NewHwDegDampgX_HwDeg_T_u12p4,
                                                                      Rte_Prm_EotProtnExitDampgY_Ary2D(), 
                                                                      (uint16)TblSize_m(NewHwDegDampgX_HwDeg_T_u12p4[0]));
                                                                      
            EotDampgCmd_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(EotDampgCmd_MotNwtMtr_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);
            break;  

            default:
            break;
    }
    EotDampgCmd_MotNwtMtr_T_f32 = EotDampgCmd_MotNwtMtr_T_f32 * MotVelCrf_MotRadPerSec_T_f32;
    /* ENDREQ: SF018A #112 I */
    
    *Rte_Pim_dEotProtnDampg() = EotDampgCmd_MotNwtMtr_T_f32;
    
    /*'DampgRateLim' Library Implementation*/
    /* REQ: SF018A #107 I */
    /* REQ: SF018A #108 I */
    EotDampgCmdLo_MotNwtMtr_T_f32 = (-Rte_Prm_EotProtnDampgSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32) + (*Rte_Pim_PrevEotDampg());
    EotDampgCmdHi_MotNwtMtr_T_f32 = (Rte_Prm_EotProtnDampgSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32) + (*Rte_Pim_PrevEotDampg());
    EotDampgCmd_MotNwtMtr_T_f32 = Lim_f32(EotDampgCmd_MotNwtMtr_T_f32,EotDampgCmdLo_MotNwtMtr_T_f32,EotDampgCmdHi_MotNwtMtr_T_f32);
    *Rte_Pim_PrevEotDampg() = EotDampgCmd_MotNwtMtr_T_f32;
    /* ENDREQ: SF018A #107 I */
    /* ENDREQ: SF018A #108 I */
    
    /*Limiting the output*/
    EotDampgCmd_MotNwtMtr_T_f32 = Lim_f32(EotDampgCmd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32); /* REQ: SF018A #113 I */

    
    return EotDampgCmd_MotNwtMtr_T_f32;
}
 /*****************************************************************************************************************
  * Name            :   EotActvCmdCalc
  * Description     :   Calculation of 'EotActvCmd' signal.
  * Inputs          :   RackTrvlLimrDi_Cnt_T_logl, HwAgAuthy_Uls_T_f32, VehSpd_Kph_T_f32, HwAg_HwDeg_T_f32, 
  *                     MotVelCrf_MotRadPerSec_T_f32, LimPosn_HwDeg_T_f32
  * Outputs      :   None
  * Returns      :   EotActvCmd_MotNwtMtr_T_f32
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(float32, EotProtn_CODE) EotActvCmdCalc(boolean RackTrvlLimrDi_Cnt_T_logl, float32 HwAgAuthy_Uls_T_f32, float32 VehSpd_Kph_T_f32, float32 HwAg_HwDeg_T_f32,
                                                float32 MotVelCrf_MotRadPerSec_T_f32, float32 LimPosn_HwDeg_T_f32)
{
    
    VAR(float32, AUTOMATIC) AbsHwAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) AbsLimPosn_HwDeg_T_f32;
    VAR(boolean, AUTOMATIC) RackTrvlLimrInin_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwPosnTq_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelTq_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotActvCmd_MotNwtMtr_T_f32; 
	
    /*'RackTrvlLimrInin' subsystem implementation*/
    AbsHwAg_HwDeg_T_f32 = Abslt_f32_f32(HwAg_HwDeg_T_f32);
    AbsLimPosn_HwDeg_T_f32 = Abslt_f32_f32(LimPosn_HwDeg_T_f32);
    
    /* REQ: SF018A #126 I */
    if(AbsHwAg_HwDeg_T_f32 <= AbsLimPosn_HwDeg_T_f32) /* REQ: SF018A #124 I */ /* REQ: SF018A #129 I */ /* REQ: SF018A #130 I */ /* REQ: SF018A #153 I */
    {
        RackTrvlLimrInin_Cnt_T_logl = TRUE; /* REQ: SF018A #129 I */
    }
    else if( TRUE == RackTrvlLimrDi_Cnt_T_logl ) /* REQ: SF018A #155 I */
    {
        RackTrvlLimrInin_Cnt_T_logl = FALSE; /* REQ: SF018A #124 I */
    }
    else
    {
        RackTrvlLimrInin_Cnt_T_logl = *Rte_Pim_PrevRackTrvlLimrInin();  /* REQ: SF018A #152 I */
    }
    /* ENDREQ: SF018A #126 I */
    
    *Rte_Pim_PrevRackTrvlLimrInin() = RackTrvlLimrInin_Cnt_T_logl;
    
    /*'EotActvCmd' output implementation*/
    /* REQ: SF018A #123 I */
    if((FALSE == RackTrvlLimrDi_Cnt_T_logl) && (TRUE == RackTrvlLimrInin_Cnt_T_logl))
    {
        *Rte_Pim_PrevRackTrvlLimrEna() = TRUE;
        
        /*'PosnCtrl' subsystem implementation*/
        /* REQ: SF018A #118 I */
        if(AbsHwAg_HwDeg_T_f32 <= AbsLimPosn_HwDeg_T_f32)   
        {
            EotActvCmd_MotNwtMtr_T_f32 = ZEROMOTTQCMD_MOTNWTMTR_F32;
        }
        else
        {
            HwPosnTq_MotNwtMtr_T_f32 = (HwAg_HwDeg_T_f32 - LimPosn_HwDeg_T_f32) * (Rte_Prm_EotProtnHwAgGain_Val()); /* REQ: SF018A #115 I */
            MotVelTq_MotNwtMtr_T_f32 = MotVelCrf_MotRadPerSec_T_f32 * Rte_Prm_EotProtnMotVelGain_Val(); /* REQ: SF018A #115 I */
            EotActvCmd_MotNwtMtr_T_f32 = -(MotVelTq_MotNwtMtr_T_f32 + HwPosnTq_MotNwtMtr_T_f32);   /* REQ: SF018A #116I */ /* REQ: SF018A #117 I */
        }
        /* ENDREQ: SF018A #118 I */
        
        EotActvCmd_MotNwtMtr_T_f32 = Lim_f32(EotActvCmd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32); /* REQ: SF018A #115 I */
    }
    else
    {
        *Rte_Pim_PrevRackTrvlLimrEna() = FALSE;
        EotActvCmd_MotNwtMtr_T_f32 = ZEROMOTTQCMD_MOTNWTMTR_F32;
    }
    /* ENDREQ: SF018A #123 I */
    return EotActvCmd_MotNwtMtr_T_f32;
}
 /*****************************************************************************************************************
  * Name            :   SoftEndStopStCtrl
  * Description     :   Implementation of 'SoftEndStopStCtrl' subsystem.
  * Inputs          :   VehSpd_Kph_T_f32, HwAgAuthy_Uls_T_f32, EotProtnDi_Cnt_T_logl, EotDetd_Cnt_T_logl, 
  *              HwAg_HwDeg_T_f32, FildHwTq_HwNwtMtr_T_f32, SysMotTqCmdSca_Uls_T_f32
  * Outputs      :   None
  * Returns      :   EotActvCmd_MotNwtMtr_T_f32
  * Usage Notes      :   None
  ****************************************************************************************************************/
static FUNC(void, EotProtn_CODE) SoftEndStopStCtrl(float32 VehSpd_Kph_T_f32, float32 HwAgAuthy_Uls_T_f32, boolean EotProtnDi_Cnt_T_logl,
                                                    boolean EotDetd_Cnt_T_logl, float32 HwAg_HwDeg_T_f32, 
                                                    float32 FildHwTq_HwNwtMtr_T_f32, float32 SysMotTqCmdSca_Uls_T_f32, float32 LimPosn_HwDeg_T_f32)
{
    VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
    VAR(uint16, AUTOMATIC) EotEntrGainIncpt_Kph_T_u12p4;
    VAR(uint16, AUTOMATIC) EotDampgIncpt_Kph_T_u12p4;
    VAR(uint16, AUTOMATIC) EotIncpt_Kph_T_u12p4;
    VAR(float32, AUTOMATIC) EotIncpt_Kph_T_f32;
    VAR(uint16, AUTOMATIC) EntrGainVehSpdYTbl_Kph_T_u12p4[GAINVEHSPDSIZE_CNT_U08];
    VAR(uint16, AUTOMATIC) DampgVehSpdYTbl_Kph_T_u12p4[DAMPGVEHSPDSIZE_CNT_U08];
    VAR(uint8, AUTOMATIC) RowNo_Cnt_T_u08;
    
    /*'SoftEndStopStCtrl' Subsystem Implementation*/
    
    /*EotProtnEntrGainX_u12p4 is 5 by 4 elements */
    for(RowNo_Cnt_T_u08 = 0U; RowNo_Cnt_T_u08 < GAINVEHSPDSIZE_CNT_U08; RowNo_Cnt_T_u08++)
    {
        EntrGainVehSpdYTbl_Kph_T_u12p4[RowNo_Cnt_T_u08] = PrmEotProtnEntrGainX_u12p4[RowNo_Cnt_T_u08][LASTPTGAIN_CNT_U08];
    }
    
    /*EotProtnHwDegDampgX is 2D array of 4 by 2 elements */
    for(RowNo_Cnt_T_u08 = 0U; RowNo_Cnt_T_u08 < DAMPGVEHSPDSIZE_CNT_U08; RowNo_Cnt_T_u08++)
    {
        DampgVehSpdYTbl_Kph_T_u12p4[RowNo_Cnt_T_u08] = PrmEotProtnHwDegDampgX_u12p4[RowNo_Cnt_T_u08][FIRSTPTDAMPG_CNT_U08];
    }
    
    /*Linear interpolation of calculated tables*/
    VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
    EotEntrGainIncpt_Kph_T_u12p4 = LnrIntrpn_u16_u16VariXu16VariY(PrmEotProtnEntrGainVehSpdTbl_u9p7, 
                                                                EntrGainVehSpdYTbl_Kph_T_u12p4,
                                                                (uint16)TblSize_m(PrmEotProtnEntrGainVehSpdTbl_u9p7),
                                                                VehSpd_Kph_T_u9p7);
    
    EotDampgIncpt_Kph_T_u12p4 = LnrIntrpn_u16_u16VariXu16VariY(PrmEotProtnDampgVehSpdTbl_u9p7, 
                                                                DampgVehSpdYTbl_Kph_T_u12p4,
                                                                (uint16)TblSize_m(PrmEotProtnDampgVehSpdTbl_u9p7),
                                                                VehSpd_Kph_T_u9p7);
    
    EotIncpt_Kph_T_u12p4 = Max_u16(EotEntrGainIncpt_Kph_T_u12p4, EotDampgIncpt_Kph_T_u12p4);
    EotIncpt_Kph_T_f32 = FixdToFloat_f32_u16(EotIncpt_Kph_T_u12p4, NXTRFIXDPT_P4TOFLOAT_ULS_F32);
    
    /*NewSoftEndStopSt claculation */
    if((HwAgAuthy_Uls_T_f32 < Rte_Prm_EotProtnSoftEndStopAuthyThd_Val()) || (VehSpd_Kph_T_f32 >= Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val()) ||
        (FALSE == EotDetd_Cnt_T_logl) || (TRUE == EotProtnDi_Cnt_T_logl))
    {
        *Rte_Pim_NewSoftEndStopSt() = SOFTENDSTOPSTDI_CNT_U08;
    }
    else if(((*Rte_Pim_NewSoftEndStopSt() == SOFTENDSTOPSTDI_CNT_U08) && (SysMotTqCmdSca_Uls_T_f32 <= Rte_Prm_EotProtnActvRegnBypMaxThd_Val())) ||
            (Abslt_f32_f32(HwAg_HwDeg_T_f32) <= (Abslt_f32_f32(LimPosn_HwDeg_T_f32) - EotIncpt_Kph_T_f32)))
    {
        *Rte_Pim_NewSoftEndStopSt() = SOFTENDSTOPSTNORM_CNT_U08;
    }
    else if((FildHwTq_HwNwtMtr_T_f32 > Rte_Prm_EotProtnDeltaTqThd_Val()) && (*Rte_Pim_NewSoftEndStopSt() != SOFTENDSTOPSTDI_CNT_U08))
    {
        *Rte_Pim_NewSoftEndStopSt() = SOFTENDSTOPSTENTR_CNT_U08;
    }
    else if((FildHwTq_HwNwtMtr_T_f32 < (-Rte_Prm_EotProtnDeltaTqThd_Val())) && (*Rte_Pim_NewSoftEndStopSt() != SOFTENDSTOPSTDI_CNT_U08))
    {
        *Rte_Pim_NewSoftEndStopSt() = SOFTENDSTOPSTEXIT_CNT_U08;
    }
    else
    {
        /*No update required, value is unaltered*/
    }
    *Rte_Pim_PrevSoftEndStopSt() = *Rte_Pim_NewSoftEndStopSt();
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
