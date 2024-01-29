/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_SinVltgGenn.c
 *     SW-C Type:  CDD_SinVltgGenn
 *  Generated at:  Sun Mar 20 15:47:33 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_SinVltgGenn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015,2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_SinVltgGenn.c
* Module Description: Implementation of Sine Voltage Generation FDD ES300A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 3 %
* %derived_by       : pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/11/15  1        SV        Initial Version                                                                 EA4#462
* 07/14/15  2        SV        Polarity logic is reversed                                                      EA4#1085   
* 03/20/16  3        Selva     Updated for FDD 1.3.0 and v1.4.0                                                EA4#4471                                                               
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_SinVltgGenn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "ElecGlbPrm.h"
#include "CDD_SinVltgGenn_private.h"
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/********************************************* Embedded Local Constants **********************************************/
#define SINVLTGGENN60DEG_MOTREVELEC_F32     0.1666666666F
#define SINVLTGGENNSEEDINI_ULS_F32          0.00015259F
#define SINVLTGGENNZERODEG_MOTREVELEC_F32   0.0F
/******************************************** Module Specific Variables **********************************************/
/******************************************** Local Function Prototypes **********************************************/
/*********************************************** Function Definitions ************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_Fil1OutpPrev(void)
 *   float32 *Rte_Pim_Fil2OutpPrev(void)
 *   float32 *Rte_Pim_PhaDptOffsA(void)
 *   float32 *Rte_Pim_PhaDptOffsB(void)
 *   float32 *Rte_Pim_PhaDptOffsC(void)
 *   float32 *Rte_Pim_RndNrPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumAPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumBPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiSumCPrev(void)
 *   uint32 *Rte_Pim_PwmPerdRng(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SinVltgGennDthrLpFilCoeff_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_SinVltgGenn_START_SEC_CODE
#include "CDD_SinVltgGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SinVltgGennInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotElecMeclPolarity_Val(sint8 *data)
 *
 *********************************************************************************************************************/

FUNC(void, CDD_SinVltgGenn_CODE) SinVltgGennInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SinVltgGennInit1
 *********************************************************************************************************************/


    VAR(sint8,   AUTOMATIC) MotElecMeclPolarity_Uls_T_s08;
    VAR(float32, AUTOMATIC) PhaDptOffsA_MotRevElec_T_f32;
    VAR(float32, AUTOMATIC) PhaDptOffsB_MotRevElec_T_f32;
    VAR(float32, AUTOMATIC) PhaDptOffsC_MotRevElec_T_f32;
    VAR(uint32,  AUTOMATIC) PwmPerdRng_NanoSec_T_u32;
    
    (void) Rte_Read_MotElecMeclPolarity_Val(&MotElecMeclPolarity_Uls_T_s08); /* REQ: ES300A #101 I */
    
    /* ApplyPWMMtrElecMechPol */
    
    /* REQ: ES300A #273 I */
    if( MotElecMeclPolarity_Uls_T_s08 < 0 )
    {
        PhaDptOffsA_MotRevElec_T_f32 = SINVLTGGENN60DEG_MOTREVELEC_F32;
        PhaDptOffsB_MotRevElec_T_f32 = SINVLTGGENN60DEG_MOTREVELEC_F32 + SINVLTGGENN120DEG_MOTREVELEC_F32;
        PhaDptOffsC_MotRevElec_T_f32 = SINVLTGGENN60DEG_MOTREVELEC_F32 - SINVLTGGENN120DEG_MOTREVELEC_F32;
    }
    else
    {
        PhaDptOffsA_MotRevElec_T_f32 = SINVLTGGENNZERODEG_MOTREVELEC_F32;
        PhaDptOffsB_MotRevElec_T_f32 = SINVLTGGENNZERODEG_MOTREVELEC_F32 - SINVLTGGENN120DEG_MOTREVELEC_F32;
        PhaDptOffsC_MotRevElec_T_f32 = SINVLTGGENNZERODEG_MOTREVELEC_F32 + SINVLTGGENN120DEG_MOTREVELEC_F32;
    }
    /* ENDREQ: ES300A #273 I */
    
    
    PwmPerdRng_NanoSec_T_u32 = ELECGLBPRM_PWMPERDMAX_NANOSEC_U32 - ELECGLBPRM_PWMPERDMIN_NANOSEC_U32; /* REQ: ES300A #219 I */
    
    
    (*Rte_Pim_PhaDptOffsA()) = PhaDptOffsA_MotRevElec_T_f32; /* REQ: ES300A #207 I */
    (*Rte_Pim_PhaDptOffsB()) = PhaDptOffsB_MotRevElec_T_f32; /* REQ: ES300A #271 I */
    (*Rte_Pim_PhaDptOffsC()) = PhaDptOffsC_MotRevElec_T_f32; /* REQ: ES300A #270 I */
    (*Rte_Pim_PwmPerdRng()) = PwmPerdRng_NanoSec_T_u32; /* REQ: ES300A #269 I */
    (*Rte_Pim_RndNrPrev()) = SINVLTGGENNSEEDINI_ULS_F32;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_SinVltgGenn_STOP_SEC_CODE
#include "CDD_SinVltgGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
