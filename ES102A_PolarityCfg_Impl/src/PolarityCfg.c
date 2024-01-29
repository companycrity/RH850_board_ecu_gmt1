/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PolarityCfg.c
 *     SW-C Type:  PolarityCfg
 *  Generated at:  Tue Jun  2 14:35:26 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <PolarityCfg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : PolarityCfg.c
* Module Description: Implementation of Polarity Configuration FDD ES102A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/22/15  1        SV        Initial Version                                                                 EA4#271
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_PolarityCfg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define HWAG0POL_CNT_U32          0x00000001U
#define HWAG1POL_CNT_U32          0x00000002U
#define HWAG2POL_CNT_U32          0x00000004U
#define HWAG3POL_CNT_U32          0x00000008U
#define HWAG4POL_CNT_U32          0x00000010U
#define HWAG5POL_CNT_U32          0x00000020U
#define HWAG6POL_CNT_U32          0x00000040U
#define HWAG7POL_CNT_U32          0x00000080U

#define HWTQ0POL_CNT_U32          0x00000100U
#define HWTQ1POL_CNT_U32          0x00000200U
#define HWTQ2POL_CNT_U32          0x00000400U
#define HWTQ3POL_CNT_U32          0x00000800U
#define HWTQ4POL_CNT_U32          0x00001000U
#define HWTQ5POL_CNT_U32          0x00002000U
#define HWTQ6POL_CNT_U32          0x00004000U
#define HWTQ7POL_CNT_U32          0x00008000U

#define MOTAGMECL0POL_CNT_U32     0x00010000U
#define MOTAGMECL1POL_CNT_U32     0x00020000U
#define MOTAGMECL2POL_CNT_U32     0x00040000U
#define MOTAGMECL3POL_CNT_U32     0x00080000U
#define MOTAGMECL4POL_CNT_U32     0x00100000U
#define MOTAGMECL5POL_CNT_U32     0x00200000U
#define MOTAGMECL6POL_CNT_U32     0x00400000U
#define MOTAGMECL7POL_CNT_U32     0x00800000U

#define MOTELECMECLPOL_CNT_U32    0x01000000U
#define ASSIMECHPOL_CNT_U32       0x02000000U
/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/
STATIC FUNC(sint8, PolarityCfg_CODE) GetPolarity(uint32 Polarity_Cnt_T_u32,
                                                 uint32 PolarityMask_Cnt_T_u32);

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
 * Boolean: Boolean
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_PolarityCfgSaved(void)
 *
 *********************************************************************************************************************/


#define PolarityCfg_START_SEC_CODE
#include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechPolarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwAg7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_HwTq7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl0Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl1Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl2Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl3Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl4Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl5Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl6Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotAgMecl7Polarity_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotElecMeclPolarity_Val(sint8 data)
 *
 *********************************************************************************************************************/

FUNC(void, PolarityCfg_CODE) PolarityCfgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgInit1
 *********************************************************************************************************************/
    /* REQ: ES102A #77 I */
    /* REQ: ES102A #80 I */
    /* REQ: ES102A #120 I */
    /* REQ: ES102A #121 I */
    (void)Rte_Write_HwAg0Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG0POL_CNT_U32));    /* REQ: ES102A #103 I */
    (void)Rte_Write_HwAg1Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG1POL_CNT_U32));    /* REQ: ES102A #104 I */
    (void)Rte_Write_HwAg2Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG2POL_CNT_U32));    /* REQ: ES102A #105 I */
    (void)Rte_Write_HwAg3Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG3POL_CNT_U32));    /* REQ: ES102A #106 I */
    (void)Rte_Write_HwAg4Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG4POL_CNT_U32));    /* REQ: ES102A #107 I */
    (void)Rte_Write_HwAg5Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG5POL_CNT_U32));    /* REQ: ES102A #108 I */
    (void)Rte_Write_HwAg6Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG6POL_CNT_U32));    /* REQ: ES102A #109 I */
    (void)Rte_Write_HwAg7Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWAG7POL_CNT_U32));    /* REQ: ES102A #110 I */
     
    (void)Rte_Write_HwTq0Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ0POL_CNT_U32));    /* REQ: ES102A #51 I */
    (void)Rte_Write_HwTq1Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ1POL_CNT_U32));    /* REQ: ES102A #96 I */
    (void)Rte_Write_HwTq2Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ2POL_CNT_U32));    /* REQ: ES102A #97 I */
    (void)Rte_Write_HwTq3Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ3POL_CNT_U32));    /* REQ: ES102A #98 I */
    (void)Rte_Write_HwTq4Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ4POL_CNT_U32));    /* REQ: ES102A #99 I */
    (void)Rte_Write_HwTq5Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ5POL_CNT_U32));    /* REQ: ES102A #100 I */
    (void)Rte_Write_HwTq6Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ6POL_CNT_U32));    /* REQ: ES102A #101 I */
    (void)Rte_Write_HwTq7Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), HWTQ7POL_CNT_U32));    /* REQ: ES102A #102 I */
     
    (void)Rte_Write_MotAgMecl0Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL0POL_CNT_U32));  /* REQ: ES102A #111 I */
    (void)Rte_Write_MotAgMecl1Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL1POL_CNT_U32));  /* REQ: ES102A #112 I */
    (void)Rte_Write_MotAgMecl2Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL2POL_CNT_U32));  /* REQ: ES102A #113 I */
    (void)Rte_Write_MotAgMecl3Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL3POL_CNT_U32));  /* REQ: ES102A #114 I */
    (void)Rte_Write_MotAgMecl4Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL4POL_CNT_U32));  /* REQ: ES102A #115 I */
    (void)Rte_Write_MotAgMecl5Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL5POL_CNT_U32));  /* REQ: ES102A #116 I */
    (void)Rte_Write_MotAgMecl6Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL6POL_CNT_U32));  /* REQ: ES102A #117 I */
    (void)Rte_Write_MotAgMecl7Polarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTAGMECL7POL_CNT_U32));  /* REQ: ES102A #118 I */
     
    (void)Rte_Write_MotElecMeclPolarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), MOTELECMECLPOL_CNT_U32));    /* REQ: ES102A #119 I */
    (void)Rte_Write_AssiMechPolarity_Val(GetPolarity(*Rte_Pim_PolarityCfgSaved(), ASSIMECHPOL_CNT_U32));  /* REQ: ES102A #124 I */
    /* ENDREQ: ES102A #77 */
    /* ENDREQ: ES102A #80 */
    /* ENDREQ: ES102A #120 */
    /* ENDREQ: ES102A #121 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PolarityCfgRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PolarityCfgRead_Oper(uint32 *PolarityCfgSaved)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PolarityCfgRead1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgRead_Oper(P2VAR(uint32, AUTOMATIC, RTE_POLARITYCFG_APPL_VAR) PolarityCfgSaved) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgRead_Oper (returns application error)
 *********************************************************************************************************************/
    /* REQ: ES102A #32 I */
    /* REQ: ES102A #77 I */
    *PolarityCfgSaved = *Rte_Pim_PolarityCfgSaved();
    return RTE_E_OK;
    /* ENDREQ: ES102A #32 */
    /* ENDREQ: ES102A #77 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PolarityCfgWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PolarityCfgWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PolarityCfgSaved_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType PolarityCfgWr_Oper(uint32 PolarityCfgSaved)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_PolarityCfgWr1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgWr_Oper(uint32 PolarityCfgSaved) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PolarityCfgWr_Oper (returns application error)
 *********************************************************************************************************************/
	/* REQ: ES102A #77 I */
    /* REQ: ES102A #122 I */
    /* REQ: ES102A #123 I */
    *Rte_Pim_PolarityCfgSaved() = PolarityCfgSaved;
    (void)Rte_Call_PolarityCfgSaved_SetRamBlockStatus(TRUE);		
    return RTE_E_OK;
    /* ENDREQ: ES102A #77 */
    /* ENDREQ: ES102A #122 */
    /* ENDREQ: ES102A #123 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PolarityCfg_STOP_SEC_CODE
#include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*****************************************************************************************************************
  * Name		:	GetPolarity
  * Description	:	Return Polarity as '1' if the corresponding bit in polarity configuration is set, else return '-1'
  * Inputs		:	Polarity_Cnt_T_u32 - Polarity configuration (Ram copy) 
                    PolarityMask_Cnt_T_u32 - Mask
  * Returns     :   Polarity_Cnt_T_s08 - Polarity (1 or -1)
  * Usage Notes :   None
  ****************************************************************************************************************/
 STATIC FUNC(sint8, PolarityCfg_CODE) GetPolarity(uint32 Polarity_Cnt_T_u32,
                                                  uint32 PolarityMask_Cnt_T_u32)
{
    VAR(sint8, AUTOMATIC) Polarity_Cnt_T_s08;
    
    if ( (Polarity_Cnt_T_u32 & PolarityMask_Cnt_T_u32) == PolarityMask_Cnt_T_u32 )
    {
        Polarity_Cnt_T_s08 = 1;  
    }
    else
    {
        Polarity_Cnt_T_s08 = -1;
    }

    return(Polarity_Cnt_T_s08);
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
