/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmFctDiArbn.c
 *     SW-C Type:  GmFctDiArbn
 *  Generated at:  Thu Jun 30 10:59:25 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmFctDiArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GmFctDiArbn.c
* Module Description: Implementation of GM Function Disable Arbitration
* Project           : CBD 
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : mzjphh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/27/16  1        NS        Initial Version                                                                 EA4#6058
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
  GmFctDiArbnSts1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  LoaSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_GmFctDiArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define MICROSECTOSEC_ULS_F32   (0.0001F)
#define ZEROHWAG_HWDEG_F32      (0.0F)

static FUNC(float32, GMFCTDIARBN_CODE) GetElpdTi(boolean FctDi_Cnt_T_logl,
                                                 uint32 FctDiStrtTi_Cnt_T_u32);
                                                 
static FUNC(GmFctDiArbnSts1, GMFCTDIARBN_CODE) ChkEotPosInRng(boolean FctDi_Cnt_T_logl, 
                                                              float32 HwAgFinal_HwDeg_T_f32, 
                                                              float32 CwEot_HwDeg_T_f32, 
                                                              float32 CcwEot_HwDeg_T_f32);
                                                              
static FUNC(boolean, GMFCTDIARBN_CODE) ChkHwTqZeroAndHwAgZero(float32 HwAgFinal_HwDeg_T_f32, 
                                                              float32 HwTq_HwNwtMtr_T_f32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * GmFctDiArbnSts1: Enumeration of integer in interval [0...255] with enumerators
 *   GMFCTDIARBNSTS_WAIT (0U)
 *   GMFCTDIARBNSTS_INPROC (1U)
 *   GMFCTDIARBNSTS_PASSD (2U)
 *   GMFCTDIARBNSTS_SWBASDMTGTNFAIL (3U)
 *   GMFCTDIARBNSTS_TIMEOUTFAIL (4U)
 * LoaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   LOAST_NORM (0U)
 *   LOAST_LIMD (1U)
 *   LOAST_SWBASDMTGTN (2U)
 *   LOAST_FADEOUT (3U)
 *   LOAST_CTRLDSHTDWNREQD (4U)
 *   LOAST_IMDTSHTDWNREQD (5U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_InCcwEotRngElpdTi(void)
 *   uint32 *Rte_Pim_InCwEotRngElpdTi(void)
 *   uint32 *Rte_Pim_OnCentrElpdTi(void)
 *   boolean *Rte_Pim_CcwEotEnad(void)
 *   boolean *Rte_Pim_CwEotEnad(void)
 *   boolean *Rte_Pim_FctDiLtch(void)
 *   boolean *Rte_Pim_InCcwEotRng(void)
 *   boolean *Rte_Pim_InCwEotRng(void)
 *   boolean *Rte_Pim_InOnCentrRng(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmFctDiArbnEotHwAgThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnEotTi_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnOnCentrTi_Val(void)
 *   float32 Rte_Prm_GmFctDiArbnSrvTi_Val(void)
 *
 *********************************************************************************************************************/


#define GmFctDiArbn_START_SEC_CODE
#include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiArbnInit1
 *********************************************************************************************************************/
    /* Do nothing */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiArbnPer1
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
 *   Std_ReturnType Rte_Read_ApaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EscEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LkaEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApaEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EscEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_GmFctDiSts_Val(GmFctDiArbnSts1 data)
 *   Std_ReturnType Rte_Write_InertiaCmpDecelGainDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LkaEnaArbn_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PullCmpActvDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TunSetRtDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WhlImbRejctnDi_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_GmFctDiArbnPer1_FctDiReq(void)
 *   uint32 Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, GmFctDiArbn_CODE) GmFctDiArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiArbnPer1
 *********************************************************************************************************************/
    /* Inputs */
    VAR(boolean, AUTOMATIC) ApaEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) EscEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgEotCcw_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgEotCw_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) LkaEna_Cnt_T_logl;
    VAR(LoaSt1, AUTOMATIC)  LoaSt_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) FctDiReq_Cnt_T_logl;
    VAR(uint32, AUTOMATIC)  FctDiStrtTi_Cnt_T_u32;
    
    /* Outputs */
    VAR(boolean, AUTOMATIC)         ApaEnaArbn_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)         EscEnaArbn_Cnt_T_logl;
    VAR(GmFctDiArbnSts1, AUTOMATIC) GmFctDiSts_Cnt_T_enum;
    VAR(boolean, AUTOMATIC)         InertiaCmpDecelGainDi_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)         LkaEnaArbn_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)         PullCmpActvDi_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)         TunSetRtDi_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)         WhlImbRejctnDi_Cnt_T_logl;
    
    
    VAR(float32, AUTOMATIC)         ElpdTi_Sec_T_f32;
    VAR(boolean, AUTOMATIC)         OnCenterEna_Cnt_T_logl;
    
    
    /*** Read inputs ***/
    (void)Rte_Read_ApaEna_Logl(&ApaEna_Cnt_T_logl);
    (void)Rte_Read_EscEna_Logl(&EscEna_Cnt_T_logl);
    (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
    (void)Rte_Read_HwAgEotCcw_Val(&HwAgEotCcw_HwDeg_T_f32);
    (void)Rte_Read_HwAgEotCw_Val(&HwAgEotCw_HwDeg_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    (void)Rte_Read_LkaEna_Logl(&LkaEna_Cnt_T_logl);
    (void)Rte_Read_LoaSt_Val(&LoaSt_Cnt_T_enum);
    FctDiReq_Cnt_T_logl = Rte_IrvRead_GmFctDiArbnPer1_FctDiReq();
    FctDiStrtTi_Cnt_T_u32 = Rte_IrvRead_GmFctDiArbnPer1_FctDiStrtTi();
    
    /*** LoaSt_equals_SwBasdMtgtn ***/
    if (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN)
    {
        WhlImbRejctnDi_Cnt_T_logl           = TRUE;
        PullCmpActvDi_Cnt_T_logl            = TRUE;
        InertiaCmpDecelGainDi_Cnt_T_logl    = TRUE;
        TunSetRtDi_Cnt_T_logl               = TRUE;
        ApaEnaArbn_Cnt_T_logl               = FALSE;
        LkaEnaArbn_Cnt_T_logl               = FALSE;
        EscEnaArbn_Cnt_T_logl               = FALSE;
        GmFctDiSts_Cnt_T_enum               = GMFCTDIARBNSTS_SWBASDMTGTNFAIL;
    }
    /*** LoaSt_doesnt_equal_SwBasdMtgtn ***/
    else
    {
        /*** FcnDi_ElpdTi ***/
        ElpdTi_Sec_T_f32 = GetElpdTi(FctDiReq_Cnt_T_logl, FctDiStrtTi_Cnt_T_u32);
        
        /*** CheckEotPosInRange ***/
        GmFctDiSts_Cnt_T_enum = ChkEotPosInRng(FctDiReq_Cnt_T_logl, HwAg_HwDeg_T_f32, HwAgEotCw_HwDeg_T_f32, HwAgEotCcw_HwDeg_T_f32);
        
        /*** CheckHwTqZeroAndHwAgZero ***/
        OnCenterEna_Cnt_T_logl = ChkHwTqZeroAndHwAgZero(HwAg_HwDeg_T_f32, HwTq_HwNwtMtr_T_f32);
        
        /*** ComponentDisable ***/
        if ( (ElpdTi_Sec_T_f32 >= Rte_Prm_GmFctDiArbnSrvTi_Val()) && (*Rte_Pim_FctDiLtch() == FALSE) )
        {
            /*** TimeOut ***/
            WhlImbRejctnDi_Cnt_T_logl           = FALSE;
            PullCmpActvDi_Cnt_T_logl            = FALSE;
            InertiaCmpDecelGainDi_Cnt_T_logl    = FALSE;
            GmFctDiSts_Cnt_T_enum               = GMFCTDIARBNSTS_TIMEOUTFAIL;
            *Rte_Pim_CcwEotEnad()               = FALSE;
            *Rte_Pim_CwEotEnad()                = FALSE;
        }
        else if ( ( (ElpdTi_Sec_T_f32 < Rte_Prm_GmFctDiArbnSrvTi_Val()) && (OnCenterEna_Cnt_T_logl == TRUE) ) ||
                  (*Rte_Pim_FctDiLtch() == TRUE) )
        {
            /*** Disabled ***/
            *Rte_Pim_FctDiLtch() = TRUE;    /* Latch stays in effect for the remainder of the key cycle */
            
            WhlImbRejctnDi_Cnt_T_logl           = TRUE;
            PullCmpActvDi_Cnt_T_logl            = TRUE;
            InertiaCmpDecelGainDi_Cnt_T_logl    = TRUE;
            GmFctDiSts_Cnt_T_enum               = GMFCTDIARBNSTS_PASSD;
        }
        else
        {
            /*** NoDisable ***/
            WhlImbRejctnDi_Cnt_T_logl           = FALSE;
            PullCmpActvDi_Cnt_T_logl            = FALSE;
            InertiaCmpDecelGainDi_Cnt_T_logl    = FALSE;
            /* GmFctDiSts_Cnt_T_enum set outside of the conditional and does not need to be updated here */
        }
        
        ApaEnaArbn_Cnt_T_logl = ApaEna_Cnt_T_logl;
        LkaEnaArbn_Cnt_T_logl = LkaEna_Cnt_T_logl;
        EscEnaArbn_Cnt_T_logl = EscEna_Cnt_T_logl;
        TunSetRtDi_Cnt_T_logl = FALSE;
    }
    
    /*** Write outputs ***/
    (void)Rte_Write_ApaEnaArbn_Logl(ApaEnaArbn_Cnt_T_logl);
    (void)Rte_Write_EscEnaArbn_Logl(EscEnaArbn_Cnt_T_logl);
    (void)Rte_Write_GmFctDiSts_Val(GmFctDiSts_Cnt_T_enum);
    (void)Rte_Write_InertiaCmpDecelGainDi_Logl(InertiaCmpDecelGainDi_Cnt_T_logl);
    (void)Rte_Write_LkaEnaArbn_Logl(LkaEnaArbn_Cnt_T_logl);
    (void)Rte_Write_PullCmpActvDi_Logl(PullCmpActvDi_Cnt_T_logl);
    (void)Rte_Write_TunSetRtDi_Logl(TunSetRtDi_Cnt_T_logl);
    (void)Rte_Write_WhlImbRejctnDi_Logl(WhlImbRejctnDi_Cnt_T_logl);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmFctDiReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GmFctDiReq>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(boolean data)
 *   void Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(uint32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GmFctDiReq_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, GmFctDiArbn_CODE) GmFctDiReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmFctDiReq_Oper
 *********************************************************************************************************************/
    VAR(boolean, AUTOMATIC) FctDiReq_Cnt_T_logl;
    VAR(uint32, AUTOMATIC)  FctDiStrtTi_Cnt_T_u32;

	FctDiReq_Cnt_T_logl = TRUE;
    
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&FctDiStrtTi_Cnt_T_u32);
    
    *Rte_Pim_CcwEotEnad()   = FALSE;
    *Rte_Pim_CwEotEnad()    = FALSE;
    *Rte_Pim_InOnCentrRng() = FALSE;
    *Rte_Pim_InCwEotRng()   = FALSE;
    *Rte_Pim_InCcwEotRng()  = FALSE;

	(void)Rte_IrvWrite_GmFctDiReq_Oper_FctDiReq(FctDiReq_Cnt_T_logl);
	(void)Rte_IrvWrite_GmFctDiReq_Oper_FctDiStrtTi(FctDiStrtTi_Cnt_T_u32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmFctDiArbn_STOP_SEC_CODE
#include "GmFctDiArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/****************************************************************************************************
* Name          :   GetElpdTi
* Description   :   Implementation of 'FcnDi_ElpdTi' block in the model.            
* Inputs        :   FctDi_Cnt_T_logl, FctDiStrtTi_Cnt_T_u32
* Outputs       :   ElpdTi_Sec_T_f32
* Usage Notes   :
****************************************************************************************************/
static FUNC(float32, GMFCTDIARBN_CODE) GetElpdTi(boolean FctDi_Cnt_T_logl,
                                                 uint32 FctDiStrtTi_Cnt_T_u32)
{
    VAR(uint32, AUTOMATIC)  ElpdTi_Cnt_T_u32;
    VAR(float32, AUTOMATIC) ElpdTi_Sec_T_f32;
    
    if (FctDi_Cnt_T_logl == TRUE)
    {
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(FctDiStrtTi_Cnt_T_u32, &ElpdTi_Cnt_T_u32);
        ElpdTi_Sec_T_f32 = FixdToFloat_f32_u32(ElpdTi_Cnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * MICROSECTOSEC_ULS_F32;
    }
    else
    {
        ElpdTi_Sec_T_f32 = 0.0F;
    }
    
    return ElpdTi_Sec_T_f32;
}
         
/****************************************************************************************************
* Name          :   ChkEotPosInRng
* Description   :   Implementation of 'CheckEotPosInRng' block in the model.            
* Inputs        :   FctDi_Cnt_T_logl, HwAgFinal_HwDeg_T_f32, CwEot_HwDeg_T_f32, CcwEot_HwDeg_T_f32
* Outputs       :   GmFctDiSts_Cnt_T_enum
* Usage Notes   :
****************************************************************************************************/         
static FUNC(GmFctDiArbnSts1, GMFCTDIARBN_CODE) ChkEotPosInRng(boolean FctDi_Cnt_T_logl, 
                                                              float32 HwAgFinal_HwDeg_T_f32, 
                                                              float32 CwEot_HwDeg_T_f32, 
                                                              float32 CcwEot_HwDeg_T_f32)
{
    VAR(GmFctDiArbnSts1, AUTOMATIC) GmFctDiSts_Cnt_T_enum;
    VAR(boolean, AUTOMATIC)         InCwEotRng_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)         InCcwEotRng_Cnt_T_logl;
    VAR(uint32, AUTOMATIC)          TiSpan_Cnt_T_u32;
    VAR(float32, AUTOMATIC)         ElpdTi_Sec_T_f32;
    
    if (FctDi_Cnt_T_logl == TRUE)
    {
        if (HwAgFinal_HwDeg_T_f32 > ZEROHWAG_HWDEG_F32)
        {
            /*** InRangeCwDirection ***/
            if ( (CwEot_HwDeg_T_f32 - Rte_Prm_GmFctDiArbnEotHwAgThd_Val()) <= HwAgFinal_HwDeg_T_f32 )
            {
                InCwEotRng_Cnt_T_logl = TRUE;
            }
            else
            {
                InCwEotRng_Cnt_T_logl = FALSE;
            }
            
            /*** InCwEotElpdTi ***/
            if (InCwEotRng_Cnt_T_logl == FALSE)
            {
                ElpdTi_Sec_T_f32 = 0.0F;
                *Rte_Pim_InCwEotRng() = FALSE;
            }
            else if (*Rte_Pim_InCwEotRng() == FALSE)
            {
                ElpdTi_Sec_T_f32 = 0.0F;
                (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_InCwEotRngElpdTi());
                *Rte_Pim_InCwEotRng() = TRUE;
            }
            else
            {
                (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_InCwEotRngElpdTi(), &TiSpan_Cnt_T_u32);
                ElpdTi_Sec_T_f32 = FixdToFloat_f32_u32(TiSpan_Cnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * MICROSECTOSEC_ULS_F32;
                *Rte_Pim_InCwEotRng() = TRUE;
            }
            
            if (ElpdTi_Sec_T_f32 >= Rte_Prm_GmFctDiArbnEotTi_Val())
            {
                *Rte_Pim_CwEotEnad() = TRUE;
            }
        }
        else
        {
            /*** InRangeCcwDirection ***/
            if ( (CcwEot_HwDeg_T_f32 + Rte_Prm_GmFctDiArbnEotHwAgThd_Val()) >= HwAgFinal_HwDeg_T_f32 )
            {
                InCcwEotRng_Cnt_T_logl = TRUE;
            }
            else
            {
                InCcwEotRng_Cnt_T_logl = FALSE;
            }
            
            /*** InCcwEotElpdTi ***/
            if (InCcwEotRng_Cnt_T_logl == FALSE)
            {
                ElpdTi_Sec_T_f32 = 0.0F;
                *Rte_Pim_InCcwEotRng() = FALSE;
            }
            else if (*Rte_Pim_InCcwEotRng() == FALSE)
            {
                ElpdTi_Sec_T_f32 = 0.0F;
                (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_InCcwEotRngElpdTi());
                *Rte_Pim_InCcwEotRng() = TRUE;
            }
            else
            {
                (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_InCcwEotRngElpdTi(), &TiSpan_Cnt_T_u32);
                ElpdTi_Sec_T_f32 = FixdToFloat_f32_u32(TiSpan_Cnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * MICROSECTOSEC_ULS_F32;
                *Rte_Pim_InCcwEotRng() = TRUE;
            }
            
            if (ElpdTi_Sec_T_f32 >= Rte_Prm_GmFctDiArbnEotTi_Val())
            {
                *Rte_Pim_CcwEotEnad() = TRUE;
            }
        }
        
        GmFctDiSts_Cnt_T_enum = GMFCTDIARBNSTS_INPROC;
    }
    else
    {
        *Rte_Pim_CcwEotEnad()   = FALSE;
        *Rte_Pim_CwEotEnad()    = FALSE;
        GmFctDiSts_Cnt_T_enum   = GMFCTDIARBNSTS_WAIT;
    }
    
    return GmFctDiSts_Cnt_T_enum;
}
            
/****************************************************************************************************
* Name          :   ChkHwTqZeroAndHwAgZero
* Description   :   Implementation of 'CheckHwTqZeroAndHwAgZero' block in the model.            
* Inputs        :   HwAgFinal_HwDeg_T_f32, HwTq_HwNwtMtr_T_f32
* Outputs       :   OnCenterEna_Cnt_T_logl
* Usage Notes   :
****************************************************************************************************/                
static FUNC(boolean, GMFCTDIARBN_CODE) ChkHwTqZeroAndHwAgZero(float32 HwAgFinal_HwDeg_T_f32, 
                                                              float32 HwTq_HwNwtMtr_T_f32)
{
    VAR(boolean, AUTOMATIC) InOnCentrRng_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) ElpdTi_Sec_T_f32;
    VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
    VAR(boolean, AUTOMATIC) OnCenterEna_Cnt_T_logl = FALSE;
    
    if ( (*Rte_Pim_CcwEotEnad() == TRUE) && (*Rte_Pim_CwEotEnad() == TRUE) )
    {
        /*** IfBothEotElpdTimeMet ***/
        if ( (Abslt_f32_f32(HwAgFinal_HwDeg_T_f32) <= Rte_Prm_GmFctDiArbnOnCentrHwAgThd_Val()) &&
             (Abslt_f32_f32(HwTq_HwNwtMtr_T_f32) <= Rte_Prm_GmFctDiArbnOnCentrHwTqThd_Val()) )
        {
            InOnCentrRng_Cnt_T_logl = TRUE;
        }
        
        if (InOnCentrRng_Cnt_T_logl == FALSE)
        {
            ElpdTi_Sec_T_f32 = 0.0F;
            *Rte_Pim_InOnCentrRng() = FALSE;
        }
        else if (*Rte_Pim_InOnCentrRng() == FALSE)
        {
            ElpdTi_Sec_T_f32 = 0.0F;
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_OnCentrElpdTi());
            *Rte_Pim_InOnCentrRng() = TRUE;
        }
        else
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_OnCentrElpdTi(), &TiSpan_Cnt_T_u32);
            ElpdTi_Sec_T_f32 = FixdToFloat_f32_u32(TiSpan_Cnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * MICROSECTOSEC_ULS_F32;
            *Rte_Pim_InOnCentrRng() = TRUE;
        }
        
        if (ElpdTi_Sec_T_f32 > Rte_Prm_GmFctDiArbnOnCentrTi_Val())
        {
            OnCenterEna_Cnt_T_logl = TRUE;
        }
    }
    
    return OnCenterEna_Cnt_T_logl;
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
