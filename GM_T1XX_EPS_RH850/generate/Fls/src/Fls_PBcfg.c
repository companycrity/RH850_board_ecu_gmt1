/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_PBcfg.c                                                 */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains post-build time parameters.                             */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  05-Dec-2012 : Initial Version
 *
 * V1.0.1:  19-Mar-2013 : As per SCR 092, BswPbSrcTpl::Template_Hash and
 *                        BswPbSrcTpl::PbCfg_Details hash are updated.
 * V1.0.2:  26-Apr-2013 : As per SCR 147 for the mantis issue #10221, element
 *                        ulFlsMaxEraseBytes is added in Fls_GstConfiguration
 *                        structure. This element is generated only for 
 *                        Data Flash.
 * V1.0.3:  08-Aug-2013 : As per CR 225, F1x is renamed to X1x.            
 * V1.0.4:  26-Sep-2013 : As per CR 242, for the mantis issue #14270
 *                        1. BswPbSrcTpl::Template hash is updated.
 *                        2. BswPbSrcTpl::PbCfg_Details hash is updated.
 * V1.0.5:  10-Jan-2014 : As per CR 066 for the mantis issue #15601, following
 *                        changes are made:
 *                        1. Elements pEccSEDNotificationPointer and 
 *                        pEccDEDNotificationPointer are added in 
 *                        Fls_GstConfiguration structure.
 *                        2. COPYRIGHT information is updated.
 * V1.1.0:  23-Jun-2014 : As per CR 107 for mantis issues #19850, #20064, #14806
 *                        and #20084, following changes are made:
 *                        1. Elements pFlEndImrAddress, usFlEndImrMask , 
 *                        and ulFlsDFSuspendTimeoutValue are added in  
 *                        Fls_GstConfiguration.
 *                        2. Elements ulFlsDFMaxWriteBytes, 
 *                        ulFlsDFWriteTimeoutValue, ulFlsDFEraseTimeoutValue, 
 *                        ulFlsDFBlankCheckEraseTimeoutValue and 
 *                        ulFlsDFMaxEraseBytes are removed.
 * V1.1.1:  28-Aug-2014 : As per CR 594 and mantis #22252, following changes
 *                        are made:
 *                        1. Changes are made at all relevant places
 *                        accordingly to append U or UL after numeric values.
 *                        2. MISRA C Rule Violation is added.
 * V1.1.2:  03-Nov-2014 : As per CR 641 for mantis #24316, element
 *                        ulFlsDFCancelTimeoutValue is added in 
 *                        Fls_GstConfiguration structure.
 * V1.1.3:  17-Nov-2014 : As per CR 652 for mantis #24328, following changes
 *                        are made:
 *                        1. Element ulFlsCFCancelTimeoutValue is added in
 *                        Fls_GstConfiguration structure.
 *                        2. Elements ulFlsCFMaxWriteBytes, ulFlsCFMaxEraseBytes
 *                        ,ulFlsCFWriteTimeoutValue and ulFlsCFEraseTimeoutValue
 *                        are removed from Fls_GstConfiguration structure.
 *                        
 */
/******************************************************************************/
/*******************************************************************************
**                       Generation Tool Version                              **
*******************************************************************************/
/*
 * TOOL VERSION:    1.3.6
 */ 
/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    C:\Hari\Work\SynergyProjects\T1xx_Synergy\WorkingProject_Synergy\Fls\generate\R403_FLS_P1x_BSWMDT.arxml
 *                C:\Users\nz2654\AppData\Local\Temp\DaVinci\Cfg-3747693\Generation\Cfg_Gen-1481733754247-0\AutosarFiles_ValGen-1481734289264-0\Fls_ECUC_1699074946993045946.arxml
 * GENERATED ON:  14 Dec 2016 - 11:52:16
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Fls.h"
#include "Fls_PBTypes.h"
#include "Fls_Cbk.h"

/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) Cast between a pointer to object and an integral  */
/*                 type.                                                      */
/* Rule          : MISRA-C:2004 Rule                                          */
/* Justification : Void pointer is used inorder to typecast to different      */
/*                 channel structures later.                                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-1 and                           */
/*                 END Msg(4:0306)-1 tags in the code.                        */

/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3635) Function identifier used as a pointer without     */
/*                  a preceding & operator                                    */
/* Rule          : MISRA-C:2004 Rule                                          */
/* Justification : Function pointer is used as pointer without a preceding &  */
/*                 operator since this function will be invoked during        */
/*                 notification                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3635)-2 and                           */
/*                 END Msg(4:3635)-2 tags in the code.                        */

/******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR release version information */
#define FLS_PBCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define FLS_PBCFG_C_AR_RELEASE_MINOR_VERSION  0U
#define FLS_PBCFG_C_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define FLS_PBCFG_C_SW_MAJOR_VERSION  1U
#define FLS_PBCFG_C_SW_MINOR_VERSION  3U

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (FLS_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
      FLS_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
 #error "Fls_PBcfg.c : Mismatch in Release Major Version"
#endif

#if (FLS_PBTYPES_AR_RELEASE_MINOR_VERSION != \
      FLS_PBCFG_C_AR_RELEASE_MINOR_VERSION)
 #error "Fls_PBcfg.c : Mismatch in Release Minor Version"
#endif

#if (FLS_PBTYPES_AR_RELEASE_REVISION_VERSION != \
      FLS_PBCFG_C_AR_RELEASE_REVISION_VERSION)
 #error "Fls_PBcfg.c : Mismatch in Release Revision Version"
#endif

#if (FLS_PBTYPES_SW_MAJOR_VERSION != FLS_PBCFG_C_SW_MAJOR_VERSION)
  #error "Fls_PBcfg.c : Mismatch in Software Major Version"
#endif

#if (FLS_PBTYPES_SW_MINOR_VERSION != FLS_PBCFG_C_SW_MINOR_VERSION)
  #error "Fls_PBcfg.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
#define FLS_START_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

/* Structure for each Config Set */
CONST(Fls_ConfigType, FLS_CONST) Fls_GstConfiguration[] =
{
  /* Index: 0 - FlsConfigSet */
  {
    /* ulStartOfDbToc */
    0x0ED70118UL,

    /* pJobEndNotificationPointer */
    /* MISRA Violation: START Msg(4:3635)-2 */
    NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* pJobErrorNotificationPointer */
    /* MISRA Violation: START Msg(4:3635)-2 */
    NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* pEccSEDNotificationPointer */
    /* MISRA Violation: START Msg(4:3635)-2 */
    NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* pEccDEDNotificationPointer */
    /* MISRA Violation: START Msg(4:3635)-2 */
    NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ulFlsDFMaxReadBytes */
    0x00000020UL,

    /* ulFlsDFReadTimeoutValue */
    0x0000FA01UL,

    /* ulFlsDFBlankCheckReadTimeoutValue */
    0x00008521UL,

    /* ulFlsDFCancelTimeoutValue */
    0x00001F41UL
  }
};



#define FLS_STOP_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

#define FLS_START_SEC_BUFFER_CODE
#include "MemMap.h"
/* Global array with max buffer size */
 VAR(uint32, AUTOMATIC) Fls_GulTempBuffer[8];
#define FLS_STOP_SEC_BUFFER_CODE
#include "MemMap.h"

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
