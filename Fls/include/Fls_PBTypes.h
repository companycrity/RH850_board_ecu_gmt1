/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_PBTypes.h                                               */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions of Post Build time Parameters      */
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
 * V1.0.0:  02-Nov-2012  : Initial Version
 *
 * V1.1.0:  21-Mar-2013  : As per SCR 092 and 112 for Mantis issues #8321 and
 *                         #8315, following changes are made:
 *                         1. Unused macros and enum variables are removed.
 *                         2. The value for the macro
 *                            'FLS_FLMD0_PCMD_CONSTANT' is changed from
 *                            8 bit to 32 bit value.
 *                         3. The values are defined for the macros
 *                            'FLS_CODEFLASH_ACCESS' and
 *                            'FLS_DATAFLASH_ACCESS'.
 *                         4. Type Casting is done for FLS_ZERO, FLS_ONE,
 *                            FLS_FOUR, FLS_EIGHT and FLS_BUFFER_SIZE macros.
 *
 * V1.2.0:  30-Jul-2013  : As per CR 215 for Mantis issue #11707, Used enum
 *                         variable 'Fls_FlashType' is added for supporting
 *                         both code flash and data flash usecase.
 *
 * V1.2.1:  08-Aug-2013  : As per CR 225, Device name is updated as part of
 *                         merge activity.
 *
 * V1.2.2:  03-Oct-2013  : As per CR 242 for Mantis issues #14270, following
 *                         changes are made:
 *                         1. The hardcoded define FLS_BUFFER_SIZE is removed.
 *                         2. External declaration for 'Fls_GulTempBuffer' is
 *                            provided.
 *
 * V1.3.0:  17-Oct-2013  : As per Mantis issue #16111, macros required to enable
 *                         and disable software protection of flash are added.
 *
 * V1.4.0:  17-Nov-2013  : As per CR 026, macros required to enable and disable
 *                         the self programing mode are placed under precompile
 *                         switch "FLS_FLMD_REGS".
 *
 * V1.4.1:  17-Feb-2014  : As per CR 397 for Mantis issue #19288, file is
 *                         updated for merge activity and Copyright year.
 *
 * V1.5.0:  01-Apr-2014  : As per CR 426 for Mantis issue #19538 and #19629,
 *                         following changes are made:
 *                         1. Type definition 'Fls_CommandType' is updated to
 *                            add enum variable 'FLS_COMMAND_READ_IMM'.
 *                         2. Type definition 'Fls_VerifyType' is removed.
 *
 * V1.5.1:  13-Jun-2014  : As per CR 494 for Mantis issues #20802, #20639 and
 *                         #20875, following changes are made:
 *                         1. The macro "FLS_DF_ACCESS" is defined as zero.
 *                         2. Type definition 'Fls_FlashReadType' is added.
 *                         3. The macros 'FLS_EIGHT' is removed and 'FLS_TWO',
 *                            'FLS_ISR_TIMEOUT_VALUE' are added.
 *
 * V1.5.2:  25-Sep-2014    : As per CR 608 for Mantis issue #22252, file is
 *                           updated for avoiding the QAC misra warning and for
 *                           providing justifications.
 * V1.5.3:  05-Dec-2014   : As per Mantis#24187 Added semicolon after
 *                          CRITICAL_SECTION macro.
 */
/******************************************************************************/
#ifndef FLS_PBTYPES_H
#define FLS_PBTYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for module version information */
#include "Fls.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_PBTYPES_AR_RELEASE_MAJOR_VERSION  FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_PBTYPES_AR_RELEASE_MINOR_VERSION  FLS_AR_RELEASE_MINOR_VERSION
#define FLS_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                            FLS_AR_RELEASE_REVISION_VERSION

#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#define FLS_PBTYPES_AR_MAJOR_VERSION  FLS_AR_MAJOR_VERSION_VALUE
#define FLS_PBTYPES_AR_MINOR_VERSION  FLS_AR_MINOR_VERSION_VALUE
#define FLS_PBTYPES_AR_PATCH_VERSION  FLS_AR_PATCH_VERSION_VALUE
#endif
/* File version information */
#define FLS_PBTYPES_SW_MAJOR_VERSION  FLS_SW_MAJOR_VERSION
#define FLS_PBTYPES_SW_MINOR_VERSION  FLS_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* General defines */
#define FLS_DBTOC_VALUE                 ((FLS_VENDOR_ID_VALUE << 22) | \
                                          (FLS_MODULE_ID_VALUE << 14) | \
                                          (FLS_SW_MAJOR_VERSION_VALUE << 8) | \
                                          (FLS_SW_MINOR_VERSION_VALUE << 3))
/* Driver status Macros */
#define FLS_INITIALIZED               (boolean)1
#define FLS_UNINITIALIZED             (boolean)0

/* Macros to avoid direct numbers */
#define FLS_ZERO                               (uint8)0
#define FLS_ONE                                (uint8)1
#define FLS_TWO                                (uint8)2
#define FLS_THREE                              (uint8)3
#define FLS_FOUR                               (uint8)4

/* Macros for boolean variables */
#define FLS_FALSE                             (boolean)0
#define FLS_TRUE                              (boolean)1

/* Macros for Flash protection Support */
#define SUPPORTED                              0
#define NOT_SUPPORTED                          1

#if (FLS_FLMD_REGS == SUPPORTED)
/* Hardware protection ON / Flash Disable */
#define FLS_FLMD0_PROTECTION_ON                (uint8)0
/* Hardware protection OFF / Flash Enable */
#define FLS_FLMD0_PROTECTION_OFF               (uint8)1
/* Macro for error clear value */
#define FLS_FLMD0_PCMD_CONSTANT                (uint8)0xa5
#endif /* end of #if (FLS_FLMD_REGS == SUPPORTED) */

#if (FLS_FHVE_REGS == SUPPORTED)
/* Macro to enable flash memory software protection */
#define FLS_FLASH_PROTECTION_ON                (uint8)0
/* Macro to disable flash memory software protection */
#define FLS_FLASH_PROTECTION_OFF               (uint8)1
#endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */

/* Macros for FDL Support */
#define FDL_SUPPORTED                          0
#define FDL_NOT_SUPPORTED                      1

#define FLS_DATAFLASH_ACCESS                   0
#define FLS_CODEFLASH_ACCESS                   1
#define FLS_CFDF_ACCESS                        2
#define FLS_ISR_TIMEOUT_VALUE                  0x000000FFUL

/*******************************************************************************
**               SchM Critical Section Protection Macros                      **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)

#define FLS_ENTER_CRITICAL_SECTION(Exclusive_Area) \
                                   SchM_Enter_Fls_##Exclusive_Area();
#define FLS_EXIT_CRITICAL_SECTION(Exclusive_Area) \
                                   SchM_Exit_Fls_##Exclusive_Area();

#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* MISRA Violation: START Msg(4:3453)-2 */
#define FLS_ENTER_CRITICAL_SECTION(Exclusive_Area) \
                                                  SchM_Enter_Fls(Exclusive_Area);
#define FLS_EXIT_CRITICAL_SECTION(Exclusive_Area) SchM_Exit_Fls(Exclusive_Area);
/* END Msg(4:3453)-2 */
#endif

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3684) Array declared with unknown                       */
/*                 size.                                                      */
/* Rule          : MISRA-C:2004 Rule 8.12                                     */
/* Justification : All operations are checked and it is necessary to perform. */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3684)-1 and                           */
/*                 END Msg(4:3684)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3453) A function could probably be used instead of this */
/*                 function-like macro.                                       */
/* Rule          : MISRA-C:2004 Rule 19.7                                     */
/* Justification : The macros are used to differentiate the SchM functions    */
/*                 for common Autosar R3.2 implementation.                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3453)-2 and                           */
/*                 END Msg(4:3453)-2 tags in the code.                        */

/******************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* Enumeration for accessing flash type */
typedef enum ETag_Fls_FlashType
{
  FLS_DF_ACCESS = 0,
  FLS_CF_ACCESS
} Fls_FlashType;

/* Enumeration for flash read type */
typedef enum ETag_Fls_FlashReadType
{
  FLS_MISALIGNED_READ = 0,
  FLS_ALIGNED_READ
} Fls_FlashReadType;

/* Enumeration for driver commands */
typedef enum ETag_Fls_CommandType
{
  FLS_COMMAND_NONE = 0,
  FLS_COMMAND_ERASE,
  FLS_COMMAND_WRITE,
  FLS_COMMAND_READ,
  FLS_COMMAND_COMPARE,
  FLS_COMMAND_BLANKCHECK,
  FLS_COMMAND_READ_IMM
} Fls_CommandType;

/*******************************************************************************
**             Extern declarations for Global Arrays Of Structures            **
*******************************************************************************/
#define FLS_START_SEC_BUFFER_CODE
#include "MemMap.h"
/* MISRA Violation: START Msg(4:3684)-1 */
/* Temporary Buffer used for read/compare functionality */
extern VAR(uint32, AUTOMATIC)Fls_GulTempBuffer[];
/* END Msg(4:3684)-1 */
#define FLS_STOP_SEC_BUFFER_CODE
#include "MemMap.h"

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* FLS_PBTYPES_H  */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
