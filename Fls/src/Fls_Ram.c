/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Ram.c                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Global variable definitions for Flash Wrapper Component.      */
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
 * V1.0.0:  02-Nov-2012    : Initial Version
 *
 * V1.1.0:  21-Mar-2013    : As per SCR 092 for Mantis issues #8968 and #8321,
 *                           following changes are made:
 *                           1. The variable Fls_GVar is moved to INIT_ section
 *                              instead of NO_INIT_ section and initialized.
 *                           2. The code is partitioned for possibility to have
 *                              code that handles data flash or code flash.
 *
 * V1.1.1:  29-Apr-2013    : As per SCR 147 for Mantis issue #8968, variables
 *                           Fls_GVar and Fls_GulTimeout are kept under proper
 *                           sections.
 *
 * V1.1.2:  30-May-2013    : As per SCR 169 for Mantis issue #10174, variable
 *                           'Fls_GulTimeout' is made available for all the use
 *                           cases by removing the pre compile option.
 *
 * V1.2.0:  30-Jul-2013    : As per CR 215 for Mantis issue #11707 and #12996,
 *                           following changes are made:
 *                           1. Code is made available for supporting both code
 *                              flash and data flash use case.
 *                           2. The compiler macro P2CONST memclass is changed
 *                              from FLS_CONST to FLS_VAR.
 *
 * V1.2.1:  08-Aug-2013    : As per CR 225, Device name is updated as part of
 *                           merge activity.
 *
 * V1.2.2:  03-Oct-2013    : As per CR 242 for Mantis issues #12123 and #14270,
 *                           following changes are made:
 *                           1. Backslashes are removed for ANSI C code.
 *                           2. Declaration for 'Fls_GucTempBuffer' is removed.
 *
 * V1.2.3:  01-Jan-2014    : As per CR 341, following changes are made:
 *                           1. Updated as per coding guidelines.
 *                           2. The Copyright information is updated.
 *
 * V1.2.4:  25-Sep-2014    : As per CR 608 for Mantis issue #22252, file is
 *                           updated for avoiding the QAC misra warning and for
 *                           providing justifications.
 * V1.2.5:  13-Jan-2015    : As per Mantis issue #24418 Fls_GstVar 
 *                            initialization updated
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for macro definitions and API prototypes */
#include "Fls.h"
/* Included for RAM variable declarations */
#include "Fls_Ram.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* AUTOSAR Release version information */
#define FLS_RAM_C_AR_RELEASE_MAJOR_VERSION    FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_RAM_C_AR_RELEASE_MINOR_VERSION    FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_RAM_C_AR_RELEASE_REVISION_VERSION \
                                           FLS_AR_RELEASE_REVISION_VERSION_VALUE
#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* AUTOSAR specification version information */
#define FLS_RAM_C_AR_MAJOR_VERSION    FLS_AR_MAJOR_VERSION_VALUE
#define FLS_RAM_C_AR_MINOR_VERSION    FLS_AR_MINOR_VERSION_VALUE
#define FLS_RAM_C_AR_PATCH_VERSION    FLS_AR_PATCH_VERSION_VALUE
#endif

/* File version information */
#define FLS_RAM_C_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_RAM_C_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
#if (FLS_RAM_AR_RELEASE_MAJOR_VERSION != FLS_RAM_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Release Major Version"
#endif

#if (FLS_RAM_AR_RELEASE_MINOR_VERSION != FLS_RAM_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Release Minor Version"
#endif

#if (FLS_RAM_AR_RELEASE_REVISION_VERSION != \
                                          FLS_RAM_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls_Ram.c : Mismatch in Release Revision Version"
#endif

#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
#if (FLS_RAM_AR_MAJOR_VERSION != FLS_RAM_C_AR_MAJOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Specification Major Version"
#endif

#if (FLS_RAM_AR_MINOR_VERSION != FLS_RAM_C_AR_MINOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Specification Minor Version"
#endif

#if (FLS_RAM_AR_PATCH_VERSION != FLS_RAM_C_AR_PATCH_VERSION)
  #error "Fls_Ram.c : Mismatch in Specification Patch Version"
#endif
#endif

#if (FLS_RAM_SW_MAJOR_VERSION != FLS_RAM_C_SW_MAJOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Software Major Version"
#endif

#if (FLS_RAM_SW_MINOR_VERSION != FLS_RAM_C_SW_MINOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/

/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0674) [C] Initializer for pointer is of incompatible    */
/*                 type.                                                      */
/* Rule          : MISRA-C:2004 Rule 1.1                                      */
/* Justification : Pointer is checked and verified.                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0674)-1 and                           */
/*                 END Msg(4:0674)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:1336) Parameter identifiers missing in declaration of   */
/*                 a function type.                                           */
/* Rule          : MISRA-C:2004 Rule 16.3                                     */
/* Justification : Coding requirement                                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:1336)-2 and                           */
/*                 END Msg(4:1336)-2 tags in the code.                        */

/******************************************************************************/
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
#define FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

P2CONST(Fls_ConfigType, FLS_VAR, FLS_CONFIG_CONST) Fls_GpConfigPtr;

#define FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define FLS_START_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

/* Structure variable that contains FLS Global variables */
VAR(Fls_GstVariable, FLS_INIT_DATA) Fls_GstVar;

/* MISRA Violation: START Msg(4:0674)-1 */
VAR(Fls_GVarProperties, FLS_INIT_DATA) Fls_GVar = {FLS_ZERO};
/* END Msg(4:0674)-1 */
#define FLS_STOP_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

#if (FLS_DEV_ERROR_DETECT == STD_ON)
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_BOOLEAN
#include "MemMap.h"
#elif(FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#define FLS_START_SEC_VAR_1BIT
#include "MemMap.h"
#endif

/* Variable to store the module initialization status */
VAR(boolean, FLS_INIT_DATA) Fls_GblInitStatus = FLS_UNINITIALIZED;

#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_BOOLEAN
#include "MemMap.h"
#elif(FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#define FLS_STOP_SEC_VAR_1BIT
#include "MemMap.h"
#endif

#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_NOINIT_32
#include "MemMap.h"
#elif(FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#define FLS_START_SEC_VAR_NOINIT_32BIT
#include "MemMap.h"
#endif

/* Variable to store the Timeout value */
VAR(uint32, FLS_NOINIT_DATA) Fls_GulTimeout;

#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_NOINIT_32
#include "MemMap.h"
#elif(FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#define FLS_STOP_SEC_VAR_NOINIT_32BIT
#include "MemMap.h"
#endif

#endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */

#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                         (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#define FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
/* MISRA Violation: START Msg(4:1336)-2 */
#if (R_FCL_COMMAND_EXECUTION_MODE == R_FCL_HANDLER_CALL_USER)
P2FUNC(void, AUTOMATIC, Fls_GpRFclExecute) (r_fcl_request_t *);
P2FUNC(void, AUTOMATIC, Fls_GpRFclHandler) (void);
/* END Msg(4:1336)- */
#endif

#define FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
#endif /* end of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
