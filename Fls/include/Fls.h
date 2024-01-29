/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls.h                                                       */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, FLS type definitions, structure data types and  */
/* API function prototypes of FLS Driver                                      */
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
 * V1.1.0:  21-Mar-2013    : As per SCR 092 and 108 for Mantis issues #8321 and
 *                           #9461, following changes are made:
 *                           1. DET error codes 'FLS_E_READ_CELL_BLANK' and
 *                              'FLS_E_READ_CELL_CORRUPTED' are added.
 *                           2. Software version macros are updated to get the
 *                              version from BSWMDT file.
 *                           3. The code is partitioned for possibility to have
 *                              code that handles data flash or code flash.
 *
 * V1.1.1:  29-Apr-2013    : As per SCR 147, the file name is changed from
 *                           'r_fcl_descriptor.h' to 'fcl_descriptor.h' in
 *                           include section.
 *
 * V1.2.0:  30-Jul-2013    : As per CR 215 for Mantis issue #11707, code is made
 *                           available for supporting both code flash and data
 *                           flash use case.
 *
 * V1.2.1:  08-Aug-2013    : As per CR 225, Device name is updated as part of
 *                           merge activity.
 *
 * V1.2.2:  03-Oct-2013    : As per CR 242 for Mantis issues #12354 and #12123,
 *                           following changes are made:
 *                           1. The enum value MEMIF_JOB_CANCELLED is defined
 *                              with MEMIF_JOB_CANCELED.
 *                           2. Unused DET error codes are removed.
 *                           3. Backslashes are removed for ANSI C code.
 *
 * V1.2.3:  09-Jan-2014    : As per CR 066 for Mantis issue #18704, following
 *                           changes are made:
 *                           1. The typedef 'Fls_LengthType' is extended to
 *                              uint32.
 *                           2. The Copyright information is updated.
 *                           3. Include section is updated to include Fls_Cfg.h
 *                              file.
 *
 * V1.2.4:  17-Feb-2014    : As per CR 397 for Mantis issue #19288, file is
 *                           updated for merge activity.
 *
 * V1.3.0:  01-Apr-2014    : As per CR 426 for Mantis issues #9452 and #19538,
 *                           following changes are made:
 *                           1. New API service Id macros are added.
 *                           2. Function prototypes for new API's Fls_BlankCheck
 *                              Fls_ReadImmediate are added.
 *
 * V1.3.1:  13-Jun-2014    : As per CR 494 for Mantis issue #20875, function
 *                           prototypes and service id macros for new API's
 *                           Fls_Suspend and Fls_Resume are added.
 *
 * V1.3.2:  11-Jul-2014    : As per CR546 extern declaration of "Fls_SetMode"
 *                           API is put under precompile option
 *                           "FLS_SET_MODE_API".
 *
 * V1.3.3:  25-Sep-2014    : As per CR 608 for Mantis issue #22252, file is
 *                           updated for providing justifications.
 *
 * V1.3.4:  10-Feb-2015   : As part of merging activity(mantis #26024), the
 *                           following changes are made:
 *                           1. The FLS_E_PARAM_POINTER macro is removed.
 * V1.3.5:  10-Feb-2015   : As Per mantis #26320 external declaration for
 *                          Fls_GetVersionInfo removed.
 *
 ******************************************************************************/
#ifndef FLS_H
#define FLS_H

/*******************************************************************************
**      To support different AUTOSAR releases in a single package             **
*******************************************************************************/
#define FLS_AR_FOUR_ZERO_THREE    403
#define FLS_AR_THREE_TWO_TWO      322

#define FLS_AR_HIGHER_VERSION     FLS_AR_FOUR_ZERO_THREE
#define FLS_AR_LOWER_VERSION      FLS_AR_THREE_TWO_TWO

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* To publish the standard types */
#include "Std_Types.h"
/* Included for pre-compile time parameters */
#include "Fls_Cfg.h"
/* To publish the type Fls_ConfigType */
#include "Fls_Types.h"
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* Only in case of DET enabled, Debug variables will be available externally */
#include "Fls_Debug.h"
#endif
#endif
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#include "fcl_descriptor.h"
#endif
#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#include "fdl_descriptor.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* Version identification */
#define FLS_VENDOR_ID              FLS_VENDOR_ID_VALUE
#define FLS_MODULE_ID              FLS_MODULE_ID_VALUE
#define FLS_INSTANCE_ID            FLS_INSTANCE_ID_VALUE

#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION) /* START of FLS_AR_VERSION */
/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_AR_RELEASE_MAJOR_VERSION    4
#define FLS_AR_RELEASE_MINOR_VERSION    0
#define FLS_AR_RELEASE_REVISION_VERSION 3

#elif(FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
/* AUTOSAR release version information */
#define FLS_AR_MAJOR_VERSION    2
#define FLS_AR_MINOR_VERSION    4
#define FLS_AR_PATCH_VERSION    0

#endif
/* Module Software version information */
#define FLS_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE
#define FLS_SW_PATCH_VERSION    FLS_SW_PATCH_VERSION_VALUE
/*******************************************************************************
**                      API Service Id Macros                                 **
*******************************************************************************/
/* Service Id of Fls_Init */
#define FLS_INIT_SID                        (uint8)0x00
/* Service Id of Fls_Erase */
#define FLS_ERASE_SID                       (uint8)0x01
/* Service Id of Fls_Write */
#define FLS_WRITE_SID                       (uint8)0x02
/* Service Id of Fls_Cancel */
#define FLS_CANCEL_SID                      (uint8)0x03
/* Service Id of Fls_GetStatus */
#define FLS_GET_STATUS_SID                  (uint8)0x04
/* Service Id of Fls_GetJobResult */
#define FLS_GET_JOB_RESULT_SID              (uint8)0x05
/* Service Id of Fls_MainFunction */
#define FLS_MAINFUNCTION_SID                (uint8)0x06
/* Service Id of Fls_Read */
#define FLS_READ_SID                        (uint8)0x07
/* Service Id of Fls_Compare */
#define FLS_COMPARE_SID                     (uint8)0x08
/* Service Id of Fls_SetMode */
#define FLS_SET_MODE_SID                    (uint8)0x09
/* Service Id of Fls_GetVersionInfo */
#define FLS_GET_VERSION_INFO_SID            (uint8)0x10
/* Service Id of Fls_ReadImmediate */
#define FLS_READ_IMM_SID                    (uint8)0x11
/* Service Id of Fls_BlankCheck */
#define FLS_BLANK_CHECK_SID                 (uint8)0x12
/* Service Id of Fls_Suspend */
#define FLS_SUSPEND_SID                     (uint8)0x13
/* Service Id of Fls_Resume */
#define FLS_RESUME_SID                      (uint8)0x14
/*******************************************************************************
**                      DET Error Codes                                       **
*******************************************************************************/

/* A wrong parameter passed to Fls_Init API. */
#define FLS_E_PARAM_CONFIG                  (uint8)0x01

/* A wrong address passed to the APIs */
#define FLS_E_PARAM_ADDRESS                 (uint8)0x02

/* A wrong length of the address passed to the APIs */
#define FLS_E_PARAM_LENGTH                  (uint8)0x03

/* A null buffer address passed to the APIs */
#define FLS_E_PARAM_DATA                    (uint8)0x04

/* API service is used without driver initialization */
#define FLS_E_UNINIT                        (uint8)0x05

/* API service used when the driver is busy */
#define FLS_E_BUSY                          (uint8)0x06

/* DET error code to report that the erase job has failed */
#define FLS_E_VERIFY_ERASE_FAILED           (uint8)0x07

/* DET error code to report that the block is not erased for a write job */
#define FLS_E_VERIFY_WRITE_FAILED           (uint8)0x08

/*
 * DET error code to report when timeout supervision of a read, write, erase or
 * compare job failed
 */
#define FLS_E_TIMEOUT                       (uint8)0x09

/* When valid Database is not available */
#define FLS_E_INVALID_DATABASE              (uint8)0xEF

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3684) Array declared with unknown size.                 */
/* Rule          : MISRA-C:2004 Rule 8.12                                     */
/* Justification : Config array used is verified in the file which is only    */
/*                 declaration and size is configuration dependent.           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3684)-1 and                           */
/*                 END Msg(4:3684)-1 tags in the code.                        */

/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3458) Macro defines a braced code statement block.      */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Macro definition is verified in the file and is            */
/*                 implemented as per requirement.                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3458)-2 and                           */
/*                 END Msg(4:3458)-2 tags in the code.                        */

/******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/* Address offset from the configured flash base address to access a certain
 * flash memory area
 */
typedef uint32 Fls_AddressType;

/* Specifies the number of bytes to read/write/erase/compare */
typedef uint32 Fls_LengthType;

#if (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
#define MEMIF_JOB_CANCELED MEMIF_JOB_CANCELLED
#endif
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

extern FUNC(void, FLS_PUBLIC_CODE) Fls_Init
(P2CONST(Fls_ConfigType, AUTOMATIC, FLS_APPL_CONST) ConfigPtr);

extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Erase
(Fls_AddressType TargetAddress, Fls_LengthType Length);

extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Write
(Fls_AddressType TargetAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_DATA) SourceAddressPtr,
Fls_LengthType Length);

#if (FLS_CANCEL_API == STD_ON)
extern FUNC(void, FLS_PUBLIC_CODE) Fls_Cancel(void);
#endif /* #if (FLS_CANCEL_API == STD_ON) */

#if (FLS_GET_STATUS_API == STD_ON)
extern FUNC(MemIf_StatusType, FLS_PUBLIC_CODE) Fls_GetStatus(void);
#endif /* #if (FLS_GET_STATUS_API == STD_ON) */

#if (FLS_GET_JOB_RESULT_API == STD_ON)
extern FUNC(MemIf_JobResultType, FLS_PUBLIC_CODE) Fls_GetJobResult(void);
#endif /* #if (FLS_GET_JOB_RESULT_API == STD_ON) */

extern FUNC(void, FLS_PUBLIC_CODE) Fls_MainFunction(void);

extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Read
(Fls_AddressType SourceAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_DATA) TargetAddressPtr,
Fls_LengthType Length);

#if (FLS_COMPARE_API == STD_ON)
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Compare
(Fls_AddressType SourceAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_DATA) TargetAddressPtr,
Fls_LengthType Length);
#endif /* #if (FLS_COMPARE_API == STD_ON) */

#if (FLS_SET_MODE_API == STD_ON)
extern FUNC(void, FLS_PUBLIC_CODE) Fls_SetMode (MemIf_ModeType Mode);
#endif

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_READIMMEDIATE_API == STD_ON)
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_ReadImmediate
(Fls_AddressType SourceAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_DATA) TargetAddressPtr,
Fls_LengthType Length);
#endif /* #if (FLS_READIMMEDIATE_API == STD_ON) */
#if (FLS_BLANKCHECK_API == STD_ON)
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_BlankCheck
(Fls_AddressType TargetAddress, Fls_LengthType Length);
#endif /* #if (FLS_BLANKCHECK_API == STD_ON) */

#if (FLS_SUSPEND_API == STD_ON)
extern FUNC(void, FLS_PUBLIC_CODE) Fls_Suspend(void);
#endif /* #if (FLS_SUSPEND_API == STD_ON) */

#if (FLS_RESUME_API == STD_ON)
extern FUNC(void, FLS_PUBLIC_CODE) Fls_Resume(void);
#endif /* #if (FLS_RESUME_API == STD_ON) */

#endif /* #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_VERSION_INFO_API == STD_ON)
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* MISRA Violation: START Msg(4:3458)-2 */

#define Fls_GetVersionInfo(VersioninfoPtr)\
 { \
   (VersioninfoPtr)->vendorID = (uint16)FLS_VENDOR_ID; \
   (VersioninfoPtr)->moduleID = (uint16)FLS_MODULE_ID; \
   (VersioninfoPtr)->sw_major_version = FLS_SW_MAJOR_VERSION; \
   (VersioninfoPtr)->sw_minor_version = FLS_SW_MINOR_VERSION; \
   (VersioninfoPtr)->sw_patch_version = FLS_SW_PATCH_VERSION; \
 }
#else
#define Fls_GetVersionInfo(VersioninfoPtr)\
 { \
   (VersioninfoPtr)->vendorID = (uint16)FLS_VENDOR_ID; \
   (VersioninfoPtr)->moduleID = (uint16)FLS_MODULE_ID; \
   (VersioninfoPtr)->instanceID = (uint8)FLS_INSTANCE_ID; \
   (VersioninfoPtr)->sw_major_version = FLS_SW_MAJOR_VERSION; \
   (VersioninfoPtr)->sw_minor_version = FLS_SW_MINOR_VERSION; \
   (VersioninfoPtr)->sw_patch_version = FLS_SW_PATCH_VERSION; \
 }
/* END Msg(4:3458)-2 */
 #endif /* (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)  */
#endif /*(FLS_VERSION_INFO_API == STD_ON)*/

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#define FLS_START_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

/* MISRA Violation: START Msg(4:3684)-1 */
/* Declaration for FLS Database */
extern CONST(Fls_ConfigType, FLS_CONST) Fls_GstConfiguration[];
/* END Msg(4:3684)-1 */
#define FLS_STOP_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

#endif /* FLS_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
