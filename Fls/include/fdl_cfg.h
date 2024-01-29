#ifdef ENABLE_QAC_TEST
    #pragma PRQA_MESSAGES_OFF 0292
#endif
/*********************************************************************************************************************
 * File Name     : $Source: fdl_cfg.h $
 * Mod. Revision : $Revision: 1.12 $
 * Mod. Date     : $Date: 2014/08/11 17:43:36MESZ $
 * Device(s)     : RV40 Flash based RH850 microcontroller
 * Description   : FDL pre-compile definitions
 *********************************************************************************************************************/

/*********************************************************************************************************************
 * DISCLAIMER 
 * This software is supplied by Renesas Electronics Corporation and is only  intended for use with Renesas products. 
 * No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all 
 * applicable laws, including copyright laws. 
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED 
 * OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 * NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. 
 * TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS 
 * AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY 
 * REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH 
 * DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of 
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link: 
 * http://www.renesas.com/disclaimer 
 * 
 * Copyright (C) 2014 Renesas Electronics Corporation. All rights reserved.     
 *********************************************************************************************************************/

#ifdef ENABLE_QAC_TEST
    #pragma PRQA_MESSAGES_ON 0292 
#endif

/*********************************************************************************************************************
 * MISRA Rule:   MISRA-C 2004 rule 3.1 (QAC message 0292)
 * Reason:       To support automatic insertion of revision, module name etc. by the source revision control system 
 *               it is necessary to violate the rule, because the system uses non basic characters as placeholders.
 * Verification: The placeholders are used in commentars only. Therefore rule violation cannot influency code 
 *               compilation.
 *********************************************************************************************************************/

#ifndef FDL_CFG_H
#define FDL_CFG_H

/* ---------------------------------------------------------------------------------------------- *\
    device specific define
\* ---------------------------------------------------------------------------------------------- */
#include "Fls.h"
#include "SchM_Fls.h"
/*********************************************************************************************************************
 * device specific define
 *********************************************************************************************************************/

    /******************************************************************************************************************
    * Callback defines to disable interrupts during execution of critical code sections in the 
    * function R_FDL_Init.
    * All possibly occurring exceptions must be disabled because during execution of the critical 
    * sections the Flash is not accessible
    ******************************************************************************************************************/
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
    #define FDL_CRITICAL_SECTION_BEGIN     FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION); /* PRQA S 3412 */
    #define FDL_CRITICAL_SECTION_END       FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);  /* PRQA S 3412 */
  #endif
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_OFF)
    #define FDL_CRITICAL_SECTION_BEGIN
    #define FDL_CRITICAL_SECTION_END
  #endif
    /******************************************************************************************************************
    * Optional configuration
    ******************************************************************************************************************/
    /* Enable compatibility mode */
    /* #define R_FDL_LIB_V1_COMPATIBILITY */
    /* F1L WS2.0 needs Flash authentication prior to switch mode */
    #define R_FDL_DEVICE_SPECIFIC_INIT                              \
            *(volatile uint32_t *)0xFFA08000UL = 0xFFFFFFFFUL;          \
            *(volatile uint32_t *)0xFFA08004UL = 0xFFFFFFFFUL;          \
            *(volatile uint32_t *)0xFFA08008UL = 0xFFFFFFFFUL;          \
            *(volatile uint32_t *)0xFFA0800CUL = 0xFFFFFFFFUL;

#define R_FDL_F1L_PATCH_DF_OVERSIZE
/*********************************************************************************************************************/
#endif /* #ifndef FDL_CFG_H */
