/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Internal.h                                              */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of prototypes for internal functions of Flash Wrapper Component. */
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
 * V1.1.0:  21-Mar-2013  : As per SCR 092 for Mantis issue #8321, code is
 *                         partitioned for possibility to have code that
 *                         handles data flash or code flash.
 *
 * V1.1.1:  30-May-2013  : As per SCR 169 for Mantis issue #10174, external
 *                         declaration for internal function of compare job
 *                         processing for code flash is added.
 *
 * V1.2.0:  30-Jul-2013  : As per CR 215 for Mantis issue #11707, code is made
 *                         available for supporting both code flash and data
 *                         flash use case.
 *
 * V1.2.1:  08-Aug-2013  : As per CR 225, Device name is updated as part of
 *                         merge activity.
 *
 * V1.2.2:  03-Oct-2013  : As per CR 242 for Mantis issue #12123, backslashes
 *                         are removed for ANSI C code.
 *
 * V1.2.3:  17-Oct-2013  : As per Mantis issue #16111, extern declaration is
 *                         added for private function 'Fls_SetFHVE'.
 *
 * V1.2.4:  17-Nov-2013  : As per CR 026, extern declaration for private
 *                         function 'Fls_SetFLMD0' is placed under precompile
 *                         switch "FLS_FLMD_REGS".
 *
 * V1.2.5:  09-Jan-2014  : As per CR 066, following changes are made:
 *                         1. The Copyright information is updated.
 *                         2. External function declaration for
 *                            'Fls_CF_read_memory_u08' is added.
 *
 * V1.2.6:  17-Feb-2014  : As per CR 397 for Mantis issue #19288, file is
 *                         updated for merge activity.
 *
 * V1.3.0:  01-Apr-2014  : As per CR 426 for Mantis issues #10221, #19538 and
 *                         #19629, following changes are made:
 *                         1. External function declarations for the API's
 *                            Fls_DFProcessEraseCommand,
 *                            Fls_DFProcessWriteCommand and
 *                            Fls_DFProcessBlankCheckCommand are removed.
 *                         2. Function prototype for new API's
 *                            Fls_DF_read_memory_u08, Fls_DF_write_memory_u08,
 *                            Fls_CF_write_memory_u08, Fls_CF_read_memory_u32
 *                            and Fls_DFProcessReadImmCommand are added.
 *
 * V1.3.1:  13-Jun-2014  : As per CR 494 for Mantis issue #20639, function
 *                         prototype for 'Fls_DF_read_memory_u16',
 *                         'Fls_DF_write_memory_u16', 'Fls_DF_read_memory_u32'
 *                         and 'Fls_DF_write_memory_u32' API's are added.
 *
 * V1.3.2:  19-Nov-2014  : As per CR 652 for Mantis issue #24328, following
 *                         changes are made:
 *                         1. The return type for 'Fls_CFProcessEraseCommand'
 *                            and 'Fls_CFProcessWriteCommand' API's is changed.
 */
/******************************************************************************/
#ifndef FLS_INTERNAL_H
#define FLS_INTERNAL_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for version information macros */
#include "Fls.h"
#include "Fls_Types.h"
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/* Included for  function prototype, error codes and status codes  */
#include "r_fcl.h"
#endif
#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/* Included for  function prototype, error codes and status codes  */
#include "r_fdl.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_INTERNAL_AR_RELEASE_MAJOR_VERSION    FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_INTERNAL_AR_RELEASE_MINOR_VERSION    FLS_AR_RELEASE_MINOR_VERSION
#define FLS_INTERNAL_AR_RELEASE_REVISION_VERSION \
                                     FLS_AR_RELEASE_REVISION_VERSION

#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#define FLS_INTERNAL_AR_MAJOR_VERSION  FLS_AR_MAJOR_VERSION_VALUE
#define FLS_INTERNAL_AR_MINOR_VERSION  FLS_AR_MINOR_VERSION_VALUE
#define FLS_INTERNAL_AR_PATCH_VERSION  FLS_AR_PATCH_VERSION_VALUE
#endif

/* Module Software version information */
#define FLS_INTERNAL_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION
#define FLS_INTERNAL_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_COMPARE_API == STD_ON)
extern FUNC(r_fdl_status_t, FLS_PRIVATE_CODE)Fls_DFProcessCompareCommand(void);
#endif
extern FUNC(r_fdl_status_t, FLS_PRIVATE_CODE)Fls_DFProcessReadCommand(void);
#if (FLS_READIMMEDIATE_API == STD_ON)
extern FUNC(r_fdl_status_t, FLS_PRIVATE_CODE) Fls_DFProcessReadImmCommand(void);
#endif

extern FUNC(uint32, FLS_PRIVATE_CODE)Fls_DF_read_memory_u32(uint32 address);
extern FUNC(void, FLS_PRIVATE_CODE)Fls_DF_write_memory_u32(uint32 address,
                                                                uint32 value);

extern FUNC(uint16, FLS_PRIVATE_CODE)Fls_DF_read_memory_u16(uint32 address);
extern FUNC(void, FLS_PRIVATE_CODE)Fls_DF_write_memory_u16(uint32 address,
uint16 value);
extern FUNC(uint8, FLS_PRIVATE_CODE)Fls_DF_read_memory_u08(uint32 address);
extern FUNC(void, FLS_PRIVATE_CODE)Fls_DF_write_memory_u08(uint32 address,
uint8 value);
#endif /* end of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_COMPARE_API == STD_ON)
extern FUNC(r_fcl_status_t, FLS_PRIVATE_CODE)Fls_CFProcessCompareCommand(void);
#endif
extern FUNC(void, FLS_PRIVATE_CODE)Fls_CFProcessEraseCommand(void);
extern FUNC(r_fcl_status_t, FLS_PRIVATE_CODE)Fls_CFProcessReadCommand(void);
extern FUNC(void, FLS_PRIVATE_CODE)Fls_CFProcessWriteCommand(void);
#if (FLS_FLMD_REGS == SUPPORTED)
extern FUNC(void, FLS_PRIVATE_CODE)Fls_SetFLMD0(uint8 value);
#endif /* end of #if (FLS_FLMD_REGS == SUPPORTED) */
extern FUNC(uint8, FLS_PRIVATE_CODE)
                                 Fls_CF_read_memory_u08(const uint32 address);
extern FUNC(uint32, FLS_PRIVATE_CODE)
                                 Fls_CF_read_memory_u32(const uint32 address);
extern FUNC(void, FLS_PRIVATE_CODE)Fls_CF_write_memory_u08(const uint32 address,
const uint8 value);
#endif /* end of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
#if (FLS_FHVE_REGS == SUPPORTED)
extern FUNC(void, FLS_PRIVATE_CODE)Fls_SetFHVE(uint8 value);
#endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */

extern FUNC(void, FLS_PRIVATE_CODE)Fls_EndJobProcess(void);

#endif  /* FLS_INTERNAL_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
