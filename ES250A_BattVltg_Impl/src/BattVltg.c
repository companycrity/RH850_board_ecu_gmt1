/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  BattVltg.c
 *     SW-C Type:  BattVltg
 *  Generated at:  Fri Jun  3 08:11:04 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <BattVltg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: BattVltg.c
* Module Description: Implementation of Battery or Switched Battery Voltage Arbitration FDD ES250A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       mzjphh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/13/15  1        SB       Initial Version																	EA4#158
* 04/09/15  2        SB       Re-Imported the StdDef and added new Req tags										EA4#444
* 06/02/16  3        NS       Updated for FDD v2.0.0                                                           EA4#5830
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_BattVltg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define BRDGFLTVLTG_VOLT_F32    18.0F

#define BATTVLTGCORRLNSTSSWD2FLT_CNT_T_U08        3U
#define BATTVLTGCORRLNSTSSWD1FLT_CNT_T_U08        5U
#define BATTVLTGCORRLNSTSBATTVLTGFLT_CNT_T_U08    6U
#define BATTVLTGCORRLNSTSNOFLT_CNT_T_U08          7U
  
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
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_BattVltgCorrlnSysMinVltg_Val(void)
 *   float32 Rte_Prm_BattVltgSwdMax_Val(void)
 *   float32 Rte_Prm_BrdgVltgMax_Val(void)
 *
 *********************************************************************************************************************/


#define BattVltg_START_SEC_CODE
#include "BattVltg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BattVltgPer1
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
 *   Std_ReturnType Rte_Read_BattSwdVltgCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattVltgSwd1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattVltgSwd2_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BrdgVltg_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, BattVltg_CODE) BattVltgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BattVltgPer1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) BattVltg_Volt_T_f32;
    VAR(float32, AUTOMATIC) BattVltgSwd1_Volt_T_f32;
    VAR(float32, AUTOMATIC) BattVltgSwd2_Volt_T_f32;
    VAR(uint8, AUTOMATIC) BattSwdVltgCorrlnSts_Cnt_T_u08;
    VAR(float32, AUTOMATIC) BattVltgSwd_Volt_T_f32; 
    VAR(float32, AUTOMATIC) BrdgVltg_Volt_T_f32; 

    (void) Rte_Read_BattVltg_Val(&BattVltg_Volt_T_f32); /* REQ: ES250A #48 I */
    (void) Rte_Read_BattVltgSwd1_Val(&BattVltgSwd1_Volt_T_f32); /* REQ: ES250A #49 I */
    (void) Rte_Read_BattVltgSwd2_Val(&BattVltgSwd2_Volt_T_f32); /* REQ: ES250A #60 I */
    (void) Rte_Read_BattSwdVltgCorrlnSts_Val(&BattSwdVltgCorrlnSts_Cnt_T_u08); /* REQ: ES250A #59 I */

    BattVltgSwd_Volt_T_f32 = Max_f32(BattVltgSwd1_Volt_T_f32, BattVltgSwd2_Volt_T_f32);

    switch (BattSwdVltgCorrlnSts_Cnt_T_u08)
    {
        /* REQ: ES250A #71 I */ /* REQ: ES250A #72 I */
        case(BATTVLTGCORRLNSTSNOFLT_CNT_T_U08):
            /* REQ: ES250A #71 I */ 
            if(BattVltg_Volt_T_f32 >= Rte_Prm_BattVltgSwdMax_Val())
            {
                BrdgVltg_Volt_T_f32 = BattVltg_Volt_T_f32;
            }
            /* ENDREQ: ES250A #71 I */
            /* REQ: ES250A #72 I */
            else
            {
                BrdgVltg_Volt_T_f32 = BattVltgSwd_Volt_T_f32;
            }
            /* ENDREQ: ES250A #72 I */			
        break;
        /* ENDREQ: ES250A #71 I */ /* ENDREQ: ES250A #72 I */

        /* REQ: ES250A #71 I */ /* REQ: ES250A #73 I */
        case(BATTVLTGCORRLNSTSSWD2FLT_CNT_T_U08):
            /* REQ: ES250A #71 I */
            if(BattVltg_Volt_T_f32 >= Rte_Prm_BattVltgSwdMax_Val())
            {
                BrdgVltg_Volt_T_f32 = BattVltg_Volt_T_f32;
            }
            /* ENDREQ: ES250A #71 I */
            /* REQ: ES250A #73 I */
            else
            {
                BrdgVltg_Volt_T_f32 = BattVltgSwd1_Volt_T_f32;
            }	
            /* ENDREQ: ES250A #73 I */			
        break;
        /* ENDREQ: ES250A #71 I */ /* ENDREQ: ES250A #73 I */		

        /* REQ: ES250A #71 I */ /* REQ: ES250A #74 I */	
        case(BATTVLTGCORRLNSTSSWD1FLT_CNT_T_U08):
            /* REQ: ES250A #71 I */
            if(BattVltg_Volt_T_f32 >= Rte_Prm_BattVltgSwdMax_Val())
            {
                BrdgVltg_Volt_T_f32 = BattVltg_Volt_T_f32;
            }
            /* ENDREQ: ES250A #71 I */
            /* REQ: ES250A #74 I */
            else
            {
                BrdgVltg_Volt_T_f32 = BattVltgSwd2_Volt_T_f32;
            }	
            /* REQ: ES250A #74 I */			
        break;
        /* ENDREQ: ES250A #71 I */ /* ENDREQ: ES250A #74 I */

        /* REQ: ES250A #70 I */
        case(BATTVLTGCORRLNSTSBATTVLTGFLT_CNT_T_U08):
            BrdgVltg_Volt_T_f32 = BattVltgSwd_Volt_T_f32;
        break;
        /* ENDREQ: ES250A #70 I */

        /* REQ: ES250A #69 I */
        default:
            BrdgVltg_Volt_T_f32 = BRDGFLTVLTG_VOLT_F32;
        break;
        /* ENDREQ: ES250A #69 I */		
    }

    BrdgVltg_Volt_T_f32 = Lim_f32(BrdgVltg_Volt_T_f32, Rte_Prm_BattVltgCorrlnSysMinVltg_Val(), Rte_Prm_BrdgVltgMax_Val());	/* REQ: ES250A #77 I */

    (void) Rte_Write_BrdgVltg_Val(BrdgVltg_Volt_T_f32); /* REQ: ES250A #51 I */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define BattVltg_STOP_SEC_CODE
#include "BattVltg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
