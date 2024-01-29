/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Internal.c                                              */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Internal functions implementation of Flash              */
/* Wrapper Component.                                                         */
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
 * V1.0.0:  30-Oct-2012    : Initial Version
 *
 * V1.1.0:  21-Mar-2013    : As per SCR 092 and 108 for Mantis issues #8321,
 *                           #8506 and #9461, following changes are made:
 *                           1. The code is partitioned for possibility to have
 *                              code that handles data flash or code flash.
 *                           2. Removal of unused variable 'Fls_AccessType' and
 *                              proper comments are updated.
 *                           3. The Fls_DFProcessReadCommand, Fls_EndJobProcess
 *                              API's are updated to handle misaligned read
 *                              requests.
 *                           4. The Fls_EndJobProcess API is updated to report
 *                              DET errors to distinguish whether flash cell
 *                              is blank or corrupted when ECC error is
 *                              generated after data flash reading.
 *                           5. Type Casting is removed in Fls_EndJobProcess API
 *                              while comparing the content of application
 *                              buffer.
 *
 * V1.1.1:  29-Apr-2013    : As per SCR 147 for Mantis issue #10221, following
 *                           changes are made:
 *                           1. The API's Fls_DFProcessEraseCommand and
 *                              Fls_EndJobProcess are updated to make the Erase
 *                              operation asynchronous.
 *                           2. The API's Fls_DFProcessBlankCheckCommand and
 *                              Fls_EndJobProcess are updated to make the blank
 *                              check operation asynchronous.
 *                           3. The file name is changed from 'r_fcl_cfg.h' to
 *                              'fcl_cfg.h' in include section.
 *
 * V1.1.2:  30-May-2013    : As per SCR 169 for Mantis issues #10192, #10174 and
 *                           #11295, following changes are made:
 *                           1. The Fls_DFProcessReadCommand, Fls_EndJobProcess
 *                              API's are updated to handle read requests with
 *                              misaligned address.
 *                           2. The API's Fls_CFProcessCompareCommand is added,
 *                              Fls_EndJobProcess is updated to make compare job
 *                              to be available for code flash.
 *                           3. The API Fls_CFProcessEraseCommand is updated
 *                              for the correct calculation of block number.
 *
 * V1.2.0: 30-Jul-2013     : As per CR 186 and 215 for Mantis issues #12066,
 *                          #12214 and #11707, following changes are made:
 *                          1. The Fls_EndJobProcess, Fls_DFProcessReadCommand
 *                             API's are updated to make blank check operation
 *                             always to perform before read operation.
 *                          2. Include Section is updated for inclusion of
 *                             'r_fdl_global.h' file.
 *                          3. MEMIF_BUSY_INTERNAL is replaced with MEMIF_BUSY.
 *                          4. Code is made available for supporting both code
 *                             flash and data flash use case.
 *
 * V1.2.1:  08-Aug-2013    : As per CR 225, Device name is updated as part of
 *                           merge activity.
 *
 * V1.2.2:  03-Oct-2013    : As per CR 242 for Mantis issues #13841, #12123,
 *                           #12110 and #8421, following changes are made:
 *                           1. The read processing in Fls_EndJobProcess API is
 *                              updated to handle single byte read of last byte
 *                              of page.
 *                           2. Backslashes are removed for ANSI C code.
 *                           3. Safety exit mechanism is provided for while
 *                              loops of processing erase, write, read and
 *                              compare API's.
 *                           4. The elements 'ulFlsMaxEraseBytes',
 *                              'ulFlsMaxWriteBytes' and 'ulFlsMaxReadBytes' are
 *                              made separate to address code flash and
 *                              data flash respectively.
 *                           5. Inclusion of 'Fls_LTTypes.h' is removed.
 *                           6. Job end and error notifications function call is
 *                              updated.
 *
 * V1.2.3:  17-Oct-2013    : As per Mantis issue #16111, following changes are
 *                           made:
 *                           1. Private function Fls_SetFHVE is added to enable
 *                              and disable software protection of flash memory.
 *                           2. Function Fls_SetFHVE is called in erase and
 *                               write functions of FCL and FDL to disable the
 *                               software protection of flash memory.
 *                           3. Function Fls_SetFHVE called to enable software
 *                               protection of flash in EndJobProcessfunctions.
 *                           4. Delay is added before calling Fls_SetFHVE
 *                               function to Wait until the FLMD pin level set.
 *
 * V1.2.4:  17-Nov-2013    : As per CR 026, statements used to enable and
 *                           disable the self programing mode are placed under
 *                           precompile switch "FLS_FLMD_REGS".
 *
 * V1.2.5:  09-Jan-2014    : As per CR 066 for Mantis issues #17930 and #15601,
 *                           following changes are made:
 *                           1. Call back function calls are implemented for
 *                              single bit and double bit errors in case of
 *                              data flash read operation.
 *                           2. The DEM error report in case of single bit error
 *                              is avoided since ECC correction logic activates
 *                              in case of single bit error.
 *                           3. The API's Fls_CFProcessEraseCommand and
 *                              Fls_EndJobProcess are updated to make the Erase
 *                              operation asynchronous.
 *                           4. The Copyright information is updated.
 *                           5. The function definition 'Fls_CF_read_memory_u08'
 *                              is added and used in 'Fls_CFProcessReadCommand'
 *                              function.
 *                           6. Updated as per coding guidelines.
 *                           7. Function Fls_SetFHVE is called in
 *                              Fls_DFProcessReadCommand to disable the
 *                              software protection of flash memory.
 *                           8. In function Fls_EndJobProcess Sequence of
 *                              enabling the software protection of flash memory
 *                              is changed in function.
 *
 * V1.2.6:   17-Feb-2014   : As per CR 397 for Mantis issue #19288, file is
 *                           updated for merge activity.
 *
 * V1.3.0:   01-Apr-2014   : As per CR 426 for Mantis issues #10221, #19538,
 *                           #20028, #19629, following changes are made:
 *                           1. The API Fls_EndJobProcess is modified and the
 *                              API's Fls_DFProcessEraseCommand,
 *                              Fls_DFProcessWriteCommand and
 *                              Fls_DFProcessBlankCheckCommand are removed to
 *                              avoid the timing issues.
 *                           2. New API Fls_DFProcessReadImmCommand is added.
 *                           3. Fls_EndJobProcess is updated for including
 *                              Fls_ReadImmediate API functionality.
 *                           4. Request structure 'GstfdlNewRequest' in all
 *                              API's is removed.
 *                           5. The variable 'Fls_GVar.Fls_GenVerifyContents' is
 *                              removed from all functions in order to do the
 *                              verification of programmed flash content is
 *                              right after write job is finished.
 *                           6. The function definitions
 *                              Fls_CF_read_memory_u32, Fls_CF_write_memory_u08,
 *                              Fls_DF_read_memory_u08 and
 *                              Fls_DF_write_memory_u08 are added and used in
 *                              Fls_CFProcessReadCommand,
 *                              Fls_CFProcessCompareCommand and
 *                              Fls_DFProcessReadImmCommand functions.
 *                           7. The Fls_DFProcessCompareCommand and
 *                              Fls_EndJobProcess API's are updated to handle
 *                              misaligned address and length requests.
 *                           8. In the file the global variable
 *                              'Fls_GVar.Fls_GblTimeOutMonitor' is used.
 *
 * V1.3.1:   13-Jun-2014   : As per CR 494 for Mantis issues #20875, #20639 and
 *                           #19696, following changes are made:
 *                           1. The global variable
 *                              'Fls_GstVar.GstfdlRequest.status_enu' is used
 *                              in 'Fls_DFProcessReadCommand' API to support
 *                              suspend functionality.
 *                           2. The API's Fls_DF_read_memory_u16,
 *                              Fls_DF_write_memory_u16, Fls_DF_read_memory_u32
 *                              and Fls_DF_write_memory_u32 are added.
 *                           3. The function 'Fls_DFProcessReadImmCommand' is
 *                              updated for supporting word data read in case
 *                              addresses are aligned.
 *                           4. As per c coding guidelines constant values are
 *                              put at the left side in 'if' conditions.
 *                           5. The function Fls_EndJobProcess is updated for
 *                              flash status mapping with FLS module status and
 *                              job result.
 *
 * V1.3.2:   25-Jun-2014   : As per CR 539, file is updated after running
 *                           C coding tool.
 *
 * V1.3.3:   25-Sep-2014   : As per CR 608 for Mantis issues #21508 and #22252,
 *                           following changes are made:
 *                           1. The functions 'Fls_DFProcessReadCommand' and
 *                              'Fls_DFProcessReadImmediateCommand' and
 *                              'Fls_EndJobProcess' are modified to report SEC
 *                              and DED errors to upper layer with the ECC error
 *                              occurred address.
 *                           2. File is updated for avoiding the QAC misra
 *                              warning and for providing justifications.
 *                           3. File is updated as per Renesas coding
 *                              guidelines.
 *
 * V1.3.4:   05-Nov-2014   : As per CR 643 for Mantis issue #24449, following
 *                           changes are made:
 *                           1. The function 'Fls_DFProcessReadImmCommand' is
 *                              updated for reading of word data using
 *                              "Fls_DF_read_memory_u32" as per changes in FDL
 *                              V2.00 library.
 *                           2. File is updated for providing QAC
 *                              justifications.
 *
 * V1.3.5:   19-Nov-2014   : As per CR 652 for Mantis issue #24328, following
 *                           changes are made:
 *                           1. "Fls_CFProcessEraseCommand" API is updated as
 *                               per changes in FCL V2.00 library.
 *                           2. In API "Fls_CFProcessEraseCommand" invoked
 *                              function "Fls_GpRFclHandler" has been removed.
 *                           3. In API "Fls_CFProcessEraseCommand" global
 *                              variables 'Fls_GVar.Fls_GblCommandInitiated',
 *                              'Fls_GulTimeout',
 *                              'Fls_GVar.Fls_GblProcessContinue',
 *                              'Fls_GpConfigPtr',
 *                              'Fls_GVar.Fls_GblTimeOutMonitor' have been
 *                               removed.
 *                           4. Return type of API "Fls_CFProcessEraseCommand"
 *                              has been changed to as 'void'.
 *                           5. "Fls_CFProcessWriteCommand" API is updated as
 *                               per changes in FCL V2.00 library.
 *                           6. In API "Fls_CFProcessWriteCommand" invoked
 *                              function "Fls_GpRFclHandler" has been removed.
 *                           7. In API "Fls_CFProcessWriteCommand" global
 *                              variables 'Fls_GVar.Fls_GblCommandInitiated',
 *                              'Fls_GulTimeout',
 *                              'Fls_GVar.Fls_GblProcessContinue',
 *                              'Fls_GpConfigPtr',
 *                              'Fls_GVar.Fls_GblTimeOutMonitor' have been
 *                               removed.
 *                           8. Return type of API "Fls_CFProcessWriteCommand"
 *                              has been changed to as 'void'.
 *
 * V1.3.6:   26-Dec-2014   : As per Mantis issue #19696 fixes, following
 *                           changes are made:
 *                           1. Added mapping for as per the ticket.
 *                           2. Version updated
 *
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for macro definitions and API prototypes */
#include "Fls.h"
/* Included for prototypes for internal functions of Flash Wrapper Component */
#include "Fls_Internal.h"
/* Included for Flash Wrapper Component specific types used within the module */
#include "Fls_Types.h"
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/* Included for pre-compile time parameters */
#include "fcl_cfg.h"
#endif
/* Included for RAM variable declarations */
#include "Fls_Ram.h"
/* Included for Prototype Declarations for FLS callback Notification FUNCTIONS*/
#include "Fls_Cbk.h"
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
/* Included for declaration of the function Dem_ReportErrorStatus() */
#include "Dem.h"
#include "r_typedefs.h"
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#include "r_fcl_env.h"
#include "r_fcl_global.h"
#endif
#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#include "r_fdl_global.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_INTERNAL_C_AR_RELEASE_MAJOR_VERSION \
                                        FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_INTERNAL_C_AR_RELEASE_MINOR_VERSION \
                                        FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_INTERNAL_C_AR_RELEASE_REVISION_VERSION \
                                     FLS_AR_RELEASE_REVISION_VERSION_VALUE
#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
/* AUTOSAR release version information */
#define FLS_INTERNAL_C_AR_MAJOR_VERSION     FLS_AR_MAJOR_VERSION_VALUE
#define FLS_INTERNAL_C_AR_MINOR_VERSION     FLS_AR_MINOR_VERSION_VALUE
#define FLS_INTERNAL_C_AR_PATCH_VERSION     FLS_AR_PATCH_VERSION_VALUE
#endif
/* File version information */
#define FLS_INTERNAL_C_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_INTERNAL_C_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
#if (FLS_INTERNAL_AR_RELEASE_MAJOR_VERSION != \
                                       FLS_INTERNAL_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls_Internal.c : Mismatch in Release Major Version"
#endif
#if (FLS_INTERNAL_AR_RELEASE_MINOR_VERSION != \
                                       FLS_INTERNAL_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls_Internal.c : Mismatch in Release Minor Version"
#endif
#if (FLS_INTERNAL_AR_RELEASE_REVISION_VERSION != \
                                    FLS_INTERNAL_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls_Internal.c : Mismatch in Release Revision Version"
#endif
#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#if (FLS_INTERNAL_AR_MAJOR_VERSION != FLS_INTERNAL_C_AR_MAJOR_VERSION)
  #error "Fls_Internal.c : Mismatch in Specification Major Version"
#endif

#if (FLS_INTERNAL_AR_MINOR_VERSION != FLS_INTERNAL_C_AR_MINOR_VERSION)
  #error "Fls_Internal.c : Mismatch in Specification Minor Version"
#endif

#if (FLS_INTERNAL_AR_PATCH_VERSION != FLS_INTERNAL_C_AR_PATCH_VERSION)
  #error "Fls_Internal.c : Mismatch in Specification Patch Version"
#endif
#endif
#if (FLS_INTERNAL_SW_MAJOR_VERSION != FLS_INTERNAL_C_SW_MAJOR_VERSION)
  #error "Fls_Internal.c : Mismatch in Software Major Version"
#endif
#if (FLS_INTERNAL_SW_MINOR_VERSION != FLS_INTERNAL_C_SW_MINOR_VERSION)
  #error "Fls_Internal.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

/*******************************************************************************
**                  MISRA C Rule Violations                                   **
*******************************************************************************/

/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0310) Casting to different object pointer type.         */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : This is to get the value to pointer.                       */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(4:0310)-1 and                           */
/*                 END Msg(4:0310)-1 tags in the code.                        */

/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0311) Dangerous pointer cast results in loss of const   */
/*                 qualification.                                             */
/* Rule          : MISRA-C:2004 Rule 11.5                                     */
/* Justification : This is to get the value from pointer.                     */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(4:0311)-2 and                           */
/*                 END Msg(4:0311)-2 tags in the code.                        */

/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) [I] Cast between a pointer to object and an       */
/*                 integral type.                                             */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : This is to access the memory address.                      */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0306)-3 and                           */
/*                 END Msg(4:0306)-3 tags in the code.                        */

/******************************************************************************/

/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing Pointer arithmetic.                    */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : This is to get the address by adding value to the pointers.*/
/* Verification  : However, part of code is verified manually and it is not   */
/*                 having any impact.                                         */
/* Reference     : Look for START Msg(4:0488)-4 and                           */
/*                 END Msg(4:0488)-4 tags in the code.                        */

/******************************************************************************/

/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0489) The integer value 1 is being added or subtracted  */
/*                 from a pointer.                                            */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : This is to get the next address value by incrementing      */
/*                 the pointers.                                              */
/* Verification  : However, part of code is verified manually and it is not   */
/*                 having any impact.                                         */
/* Reference     : Look for START Msg(4:0489)-5 and                           */
/*                 END Msg(4:0489)-5 tags in the code.                        */

/******************************************************************************/

/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0303) [I] Cast between a pointer to volatile object     */
/*                 and an integral type.                                      */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : This is for getting value to the hardware registers.       */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0303)-6 and                           */
/*                 END Msg(4:0303)-6 tags in the code.                        */

/******************************************************************************/

/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:1840) The left-hand operand is constant, 'essentially   */
/*                 signed' (signed char) and non-negative but will be         */
/*                 implicitly converted to an unsigned type (unsigned int)    */
/*                 in this arithmetic operation.                              */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The used macro is defined in library file and can not be   */
/*                 defined to unsigned.                                       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:1840)-7 and                           */
/*                 END Msg(4:1840)-7 tags in the code.                        */

/******************************************************************************/

/* 8. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2995) The result of this logical operation is always    */
/*                 'true'.                                                    */
/* Rule          : MISRA-C:2004 13.7                                          */
/* Justification : This if condition is required in case of any single bit or */
/*                 double bit errors occurred during data flash read.         */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:2995)-8 and                           */
/*                 END Msg(4:2995)-8 tags in the code.                        */

/******************************************************************************/

/* 9. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2982) [I] This operation is redundant. The value of the */
/*                 object is never used before being modified.                */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The object is to get the value of address and that value   */
/*                 is used in end job process.                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2982)-9 and                           */
/*                 END Msg(4:2982)-9 tags in the code.                        */

/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/*******************************************************************************
** Function Name         : Fls_CFProcessEraseCommand
**
** Service ID            : NA
**
** Description           : This API processes the Erase command for code flash.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GblFlashEnable,
**                         Fls_GVar.Fls_EraseStartAddress,
**                         Fls_GVar.Fls_EraseEndAddress
**
** Function(s) invoked   : Fls_GpRFclExecute, Fls_SetFLMD0, Fls_SetFHVE
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_CFProcessEraseCommand(void)
{
  /* Pointer to the FCL command Structure */
  P2VAR(r_fcl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFclReqCmd;
  /* Local variable to hold start block and Total number of blocks */
  uint32 LulStartBlock;
  uint32 LulTotalBlocks;
  if (FLS_CF_NORMALBLOCK_BASE_ADDRESS > Fls_GVar.Fls_EraseStartAddress)
  {
    /* Compute the start block number to be erased */
    LulStartBlock = (Fls_GVar.Fls_EraseStartAddress / FLS_CF_SMALLBLOCK_SIZE);
    if (FLS_CF_NORMALBLOCK_BASE_ADDRESS > Fls_GVar.Fls_EraseEndAddress)
    {
      /* Compute the total block numbers to be erased */
      LulTotalBlocks = (((Fls_GVar.Fls_EraseEndAddress -
                          Fls_GVar.Fls_EraseStartAddress) + FLS_ONE)
                                     / FLS_CF_SMALLBLOCK_SIZE);
    }
    else
    {
      /* Compute the total block numbers to be erased */
      LulTotalBlocks = ((((Fls_GVar.Fls_EraseEndAddress -
                       FLS_CF_NORMALBLOCK_BASE_ADDRESS) + FLS_ONE) /
                       FLS_CF_NORMALBLOCK_SIZE) +
                     ((FLS_CF_NORMALBLOCK_BASE_ADDRESS -
                    Fls_GVar.Fls_EraseStartAddress) / FLS_CF_SMALLBLOCK_SIZE));
    }
  }
  else
  {
    /* Compute the start block number to be erased */
    LulStartBlock = ((Fls_GVar.Fls_EraseStartAddress -
                      FLS_CF_NORMALBLOCK_BASE_ADDRESS) /
                      FLS_CF_NORMALBLOCK_SIZE) + FLS_CF_TOTAL_SMALLBLOCKS;
    /* Compute the total block numbers to be erased */
    LulTotalBlocks = (((Fls_GVar.Fls_EraseEndAddress -
                        Fls_GVar.Fls_EraseStartAddress) + FLS_ONE)
                        / FLS_CF_NORMALBLOCK_SIZE);
  }
  if (FLS_FALSE == Fls_GVar.Fls_GblFlashEnable)
  {
    #if (FLS_FLMD_REGS == SUPPORTED)
    /* Pull FLMD0 pin to VDD */
    Fls_SetFLMD0(FLS_FLMD0_PROTECTION_OFF);
    #endif /* End of #if (FLS_FLMD_REGS == SUPPORTED) */
    #if (FLS_FHVE_REGS == SUPPORTED)
    /* Disable the flash memory software protection */
    Fls_SetFHVE(FLS_FLASH_PROTECTION_OFF);
    #endif /* End of #if (FLS_FHVE_REGS == SUPPORTED) */
    Fls_GVar.Fls_GblFlashEnable = FLS_TRUE;
  }
  else
  {
    /* No action required */
  }
  /* Prepare the Structure by assigning the variables */
  LpFclReqCmd = &Fls_GstVar.GstfclRequest;
  LpFclReqCmd->command_enu = R_FCL_CMD_ERASE;
  LpFclReqCmd->idx_u32 = LulStartBlock;
  LpFclReqCmd->cnt_u16 = (uint16)LulTotalBlocks;
  /* Invoking the Library Fls_GpRFclExecute API */
  Fls_GpRFclExecute (LpFclReqCmd);
} /* End of API Fls_CFProcessEraseCommand */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/*******************************************************************************
** Function Name         : Fls_CFProcessWriteCommand
**
** Service ID            : NA
**
** Description           : This API processes the write command for code flash.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GblFlashEnable,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.pBufferAddress,
**                         Fls_GVar.Fls_GulSrcDestAddress
**
** Function(s) invoked   : Fls_GpRFclExecute, Fls_SetFLMD0, Fls_SetFHVE
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_CFProcessWriteCommand(void)
{
  /* Pointer to the FCL command Structure */
  P2VAR(r_fcl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFclReqCmd;
  if (FLS_FALSE == Fls_GVar.Fls_GblFlashEnable)
  {
    #if (FLS_FLMD_REGS == SUPPORTED)
    /* Pull FLMD0 pin to VDD */
    Fls_SetFLMD0(FLS_FLMD0_PROTECTION_OFF);
    #endif /* End of #if (FLS_FLMD_REGS == SUPPORTED) */
    #if (FLS_FHVE_REGS == SUPPORTED)
    /* Disable the flash memory software protection */
    Fls_SetFHVE(FLS_FLASH_PROTECTION_OFF);
    #endif /* End of #if (FLS_FHVE_REGS == SUPPORTED) */
    Fls_GVar.Fls_GblFlashEnable = FLS_TRUE;
  }
  else
  {
    /* No action required */
  }
  /* Prepare the Structure by assigning the variables */
  LpFclReqCmd = &Fls_GstVar.GstfclRequest;
  LpFclReqCmd->command_enu = R_FCL_CMD_WRITE;
  /* MISRA Violation: START Msg (4:0306)-3 */
  LpFclReqCmd->bufferAdd_u32 = (uint32)Fls_GVar.pBufferAddress;
  /* END Msg(4:0306)-3 */
  LpFclReqCmd->idx_u32 = Fls_GVar.Fls_GulSrcDestAddress;
  LpFclReqCmd->cnt_u16 = (uint16)(Fls_GVar.Fls_GulCurrentLength /
                                                       R_FLI_MIN_WRITESIZE);
  /* Invoking the Library Fls_GpRFclExecute API */
  Fls_GpRFclExecute (LpFclReqCmd);
  /* Set the command initiated to TRUE */
  Fls_GVar.Fls_GblCommandInitiated = FLS_TRUE;
} /* End of API Fls_CFProcessWriteCommand */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/*******************************************************************************
** Function Name         : Fls_CFProcessReadCommand
**
** Service ID            : NA
**
** Description           : This API processes the read command for code flash.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : LenFCLStatus : The status of the FCL function
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GulCurrentLength, Fls_GpConfigPtr,
**                         Fls_GVar.Fls_GulReadAddress,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GVar.pBufferAddress,
**                         Fls_GVar.Fls_GblFlashEnable, Fls_GulTimeout
**
** Function(s) invoked   : Fls_CF_read_memory_u08, Fls_CF_write_memory_u08,
**                         Fls_CF_read_memory_u32
**
** Registers Used        : R_FPSYS_REGBIT_FSTATR_RESET,
**                         R_FPSYS_REGBIT_FSTATR_ERSERR,
**                         R_FPSYS_REGBIT_FSTATR_PRGERR,
**                         R_FPSYS_REGBIT_FSTATR_ILGERR,
**                         R_FPSYS_FLASH_ACCESS_AREA_BASE,
**                         R_FPSYS_REGADD_FSTATR_U32
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(r_fcl_status_t, FLS_PRIVATE_CODE)Fls_CFProcessReadCommand(void)
{
  /* Local variable to hold the status of the FCL API call */
  r_fcl_status_t LenFCLStatus;
  /* Local variable to hold the word length and read data */
  uint32 LulFCLLength ;
  uint8 LucReadData;
  /* Local variable to hold the status of read operation */
  uint32 LulReadStatus;
  /* Local variable to hold the read start and end addresses */
  uint32 LulReadStartAddress;
  uint32 LulReadEndAddress;
  /* Local variable to hold the maximum read bytes */
  uint32 LulMaxReadBytes;
  LulMaxReadBytes = Fls_GpConfigPtr->ulFlsCFMaxReadBytes;
  /* Check whether the length exceeds the maximum number of read bytes */
  if (Fls_GVar.Fls_GulCurrentLength > LulMaxReadBytes)
  {
    /* Set the variable length to read Maximum number of bytes*/
    LulFCLLength = LulMaxReadBytes;
    /* Calculate Remaining bytes of the length */
    Fls_GVar.Fls_GulCurrentLength = Fls_GVar.Fls_GulCurrentLength -
                                    LulMaxReadBytes;
    /* Set the read process continue variable to true */
    Fls_GVar.Fls_GblProcessContinue = FLS_TRUE;
  }
  else
  {
    /* Calculate the length for remaining bytes */
    LulFCLLength = Fls_GVar.Fls_GulCurrentLength;
    /* Set the read process continue variable to false */
    Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
  }
  #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
  /* Time out value for read operation */
  Fls_GulTimeout = Fls_GpConfigPtr->ulFlsCFReadTimeoutValue;
  #endif
  /* Get the read start and end addresses */
  LulReadStartAddress = Fls_GVar.Fls_GulReadAddress;
  LulReadEndAddress = (LulReadStartAddress + LulFCLLength) - FLS_ONE;
  do
  {
    /* Reading the data from source address */
    LucReadData = Fls_CF_read_memory_u08(LulReadStartAddress);
    /* MISRA Violation: START Msg (4:0306)-3 */
    /* Writing the data to application buffer */
    Fls_CF_write_memory_u08((uint32)Fls_GVar.pBufferAddress, LucReadData);
    /* END Msg(4:0306)-3 */
    /* Incrementing the address pointers */
    LulReadStartAddress++;
    /* MISRA Violation: START Msg (4:0489)-5 */
    Fls_GVar.pBufferAddress++;
    /* END Msg(4:0489)-5 */
    /* Check for the Read address reached the End address */
  } while (LulReadStartAddress <= LulReadEndAddress);
  LulReadStatus = Fls_CF_read_memory_u32(R_FPSYS_REGADD_FSTATR_U32);
  /* Get the status of the operation performed */
  if (R_FPSYS_REGBIT_FSTATR_RESET != (LulReadStatus &
     (R_FPSYS_REGBIT_FSTATR_ERSERR + R_FPSYS_REGBIT_FSTATR_PRGERR +
      R_FPSYS_REGBIT_FSTATR_ILGERR)))
  {
    Fls_CF_write_memory_u08(R_FPSYS_FLASH_ACCESS_AREA_BASE,
                                       R_FPSYS_FLASH_ACCESS_CMD_CLEARSTAT);
    LenFCLStatus = R_FCL_ERR_INTERNAL;
  }
  else
  {
    LenFCLStatus = R_FCL_OK;
  }
  /* Set the command initiated to TRUE */
  Fls_GVar.Fls_GblCommandInitiated = FLS_TRUE;
  /* Return the FCL status */
  return(LenFCLStatus);
} /* End of API Fls_CFProcessReadCommand */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/*******************************************************************************
** Function Name         : Fls_DFProcessReadCommand
**
** Service ID            : NA
**
** Description           : This API processes the read command for data flash.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : LenFDLStatus
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GulReadAddress,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GVar.pTempBufferAddress, Fls_GpConfigPtr,
**                         Fls_GulTimeout, Fls_GVar.Fls_GblFlashEnable,
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_GucOffset,
**                         Fls_GVar.Fls_GblTimeOutMonitor,
**                         Fls_GstVar.GstfdlRequest.status_enu,
**                         Fls_GVar.Fls_GulSrcDestAddress
**
** Function(s) invoked   : R_FDL_Handler, R_FDL_Execute,
**                         R_FDL_FCUFct_ReadOperation, Fls_SetFHVE,
**                         Fls_GpConfigPtr->pEccSEDNotificationPointer
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(r_fdl_status_t, FLS_PRIVATE_CODE)Fls_DFProcessReadCommand(void)
{
  /* Pointer to the FDL command Structure */
  P2VAR(r_fdl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFdlReqCmd;
  /* Pointer to the Read address */
  P2VAR(volatile uint32, AUTOMATIC, FLS_APPL_DATA) LpReadAddress;
  /* Local variable to hold the status of the FDL API call */
  r_fdl_status_t LenFDLStatus;
  /* Local variable to hold the SEC error occurrence status */
  boolean LblSECError ;
  /* Local variable to hold the length */
  uint32 LulFDLLength ;
  /* Local variable to hold one word length */
  uint32 LulWordCnt;
  /* Local variable to hold the maximum read bytes */
  uint32 LulMaxReadBytes;
  /* Initialize the local variable of SEC error occurrence status to false */
  LblSECError = FLS_FALSE;
  /* Initialize the local variable to one word length */
  LulWordCnt = (R_FDL_WRITE_SIZE / FLS_FOUR);
  LulMaxReadBytes = Fls_GpConfigPtr->ulFlsDFMaxReadBytes;
  /* Check whether the length exceeds the maximum number of read bytes */
  if (Fls_GVar.Fls_GulCurrentLength > LulMaxReadBytes)
  {
    /* Set the variable length to read Maximum number of bytes */
    LulFDLLength = (LulMaxReadBytes / FLS_FOUR);
    /* Calculate Remaining bytes of the length */
    Fls_GVar.Fls_GulCurrentLength = Fls_GVar.Fls_GulCurrentLength -
                                                               LulMaxReadBytes;
    Fls_GVar.Fls_GulRequestedLength = Fls_GVar.Fls_GulRequestedLength -
                                    (LulMaxReadBytes - Fls_GVar.Fls_GucOffset);
    /* Set the read process continue variable to true */
    Fls_GVar.Fls_GblProcessContinue = FLS_TRUE;
  }
  else
  {
    /* Calculate the length for remaining bytes */
    LulFDLLength = (Fls_GVar.Fls_GulCurrentLength / FLS_FOUR);
    /* Set the read process continue variable to false */
    Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
  }
  #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
  /* Time out value for blank check Operation */
  Fls_GulTimeout = Fls_GpConfigPtr->ulFlsDFBlankCheckReadTimeoutValue;
  /* Initialize the global variable Time out monitor to True */
  Fls_GVar.Fls_GblTimeOutMonitor = FLS_TRUE;
  #endif
  if (R_FDL_SUSPENDED == Fls_GstVar.GstfdlRequest.status_enu)
  {
    /* Get the address of the structure to local pointer */
    LpFdlReqCmd = &Fls_GstVar.GstfdlNewRequest;
  }
  else
  {
    /* Get the address of the structure to local pointer */
    LpFdlReqCmd = &Fls_GstVar.GstfdlRequest;
  }
  #if (FLS_FHVE_REGS == SUPPORTED)
  if (FLS_FALSE == Fls_GVar.Fls_GblFlashEnable)
  {
    /* Disable the flash memory software protection */
    Fls_SetFHVE(FLS_FLASH_PROTECTION_OFF);
    Fls_GVar.Fls_GblFlashEnable = FLS_TRUE;
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if (FLS_FHVE_REGS == SUPPORTED) */
  /* BLANK CHECK OPERATION */
  do
  {
    /* Prepare the Structure by assigning the variables */
    LpFdlReqCmd->command_enu = R_FDL_CMD_BLANKCHECK;
    LpFdlReqCmd->idx_u32 = Fls_GVar.Fls_GulReadAddress - FLS_DF_BASE_ADDRESS;
    LpFdlReqCmd->cnt_u16 = (uint16)LulWordCnt;
    LpFdlReqCmd->accessType_enu = R_FDL_ACCESS_USER;
    /* Invoking the Library R_FDL_Execute API */
    R_FDL_Execute (LpFdlReqCmd);
    /* Check for the Status is Busy */
    do
    {
      /* Initiate blank check job by invoking handler API */
      R_FDL_Handler();
      #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                           (FLS_TIMEOUT_MONITORING == STD_ON))
      Fls_GulTimeout--;
      #endif
    }
    #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
    while ((LpFdlReqCmd->status_enu == R_FDL_BUSY) &&
                              (Fls_GulTimeout > FLS_ZERO));
    #else
    while (LpFdlReqCmd->status_enu == R_FDL_BUSY);
    #endif
    LenFDLStatus = LpFdlReqCmd->status_enu;
    if (R_FDL_OK == LenFDLStatus)
    {
      /* MISRA Violation: START Msg(4:0310)-1 */
      /* MISRA Violation: START Msg(4:0311)-2 */
      /* Writing the fixed pattern data to application buffer */
      *((uint32 *) Fls_GVar.pTempBufferAddress) = FLS_ERASED_VALUE;
      /* END Msg(4:0311)-2 */
      /* END Msg(4:0310)-1 */
    }
    else if (R_FDL_ERR_BLANKCHECK == LenFDLStatus)
    {
      LpReadAddress = (volatile uint32 *)(&(LpFdlReqCmd->idx_u32));
      /* MISRA Violation: START Msg (4:0306)-3 */
      LenFDLStatus = R_FDL_FCUFct_ReadOperation (LpReadAddress,
                     (uint32)Fls_GVar.pTempBufferAddress, LulWordCnt);
      /* END Msg(4:0306)-3 */
      /* Check if the single bit error occurred from Data Flash read */
      if (R_FDL_ERR_ECC_SED == LenFDLStatus)
      {
        /* Global variable to hold the ECC error occurrence address */
        Fls_GVar.Fls_GulSrcDestAddress = Fls_GVar.Fls_GulReadAddress;
        /* Set the local variable of SEC error occurrence status to true */
        LblSECError = FLS_TRUE;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* No action required */
    }
    /* MISRA Violation: START Msg(4:0488)-4 */
    Fls_GVar.pTempBufferAddress = Fls_GVar.pTempBufferAddress +
                                                    R_FDL_WRITE_SIZE;
    /* END Msg(4:0488)-4 */
    LulFDLLength--;
    Fls_GVar.Fls_GulReadAddress = Fls_GVar.Fls_GulReadAddress +
                                                    R_FDL_WRITE_SIZE;
  } while ((LulFDLLength > FLS_ZERO) &&
          ((LenFDLStatus == R_FDL_OK) || (LenFDLStatus == R_FDL_ERR_ECC_SED)));
  /* Check for double bit error and capture the error occurrence address */
  if (R_FDL_ERR_ECC_DED == LenFDLStatus)
  {
    /* Global variable to hold the ECC error occurrence address */
    Fls_GVar.Fls_GulSrcDestAddress = Fls_GVar.Fls_GulReadAddress -
                                                           R_FDL_WRITE_SIZE;
  }
  else if (FLS_TRUE == LblSECError)
  {
    LenFDLStatus = R_FDL_ERR_ECC_SED;
  }
  else
  {
    /* No action required */
  }
  /* Set the command initiated to TRUE */
  Fls_GVar.Fls_GblCommandInitiated = FLS_TRUE;
  /* Return the FDL status */
  return(LenFDLStatus);
} /* End of API Fls_DFProcessReadCommand */
#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_READIMMEDIATE_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_DFProcessReadImmCommand
**
** Service ID            : NA
**
** Description           : This API processes the read immediate command for
**                         data flash.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : LenFDLStatus
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GulReadAddress, Fls_GVar.Fls_ReadType,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GVar.pTempBufferAddress, Fls_GpConfigPtr,
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_GucOffset,
**                         Fls_GVar.Fls_GulSrcDestAddress
**
** Function(s) invoked   : Fls_DF_write_memory_u32, Fls_DF_read_memory_u32,
**                         Fls_DF_write_memory_u16, Fls_DF_read_memory_u16,
**                         Fls_DF_write_memory_u08, Fls_DF_read_memory_u08
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(r_fdl_status_t, FLS_PRIVATE_CODE)Fls_DFProcessReadImmCommand(void)
{
  /* Local variable to hold the status of the FDL API call */
  r_fdl_status_t LenFDLStatus;
  /* Local variable to hold the length */
  uint32 LulFDLLength ;
  /* Local variable to hold the maximum read bytes */
  uint32 LulMaxReadBytes;
  /* Local variable to hold the read start and end addresses */
  uint32 LulReadStartAddress;
  uint32 LulReadEndAddress;
  /* Local variable to hold the value of Data Flash error status register */
  uint32 LulDFERStatus;
  /* Local variable to hold the backup of ECC error interrupt value */
  uint8 LucDFERInt;
  uint8 LucReadData;
  uint16 LusReadData;
  uint32 LulReadData;
  uint8 LucLenOffset = FLS_ZERO;
  /* Local variable to hold the value of Data Flash error status register */
  uint32 LulErrorStatus = FLS_ZERO;
  /* Local variable to hold the value of Data Flash error type */
  uint8 LucErrorType = FLS_ZERO;
  LulMaxReadBytes = Fls_GpConfigPtr->ulFlsDFMaxReadBytes;
  /* Check whether the length exceeds the maximum number of read bytes */
  if (Fls_GVar.Fls_GulCurrentLength > LulMaxReadBytes)
  {
    /* Set the variable length to read Maximum number of bytes */
    LulFDLLength = LulMaxReadBytes;
    /* Calculate Remaining bytes of the length */
    Fls_GVar.Fls_GulCurrentLength = Fls_GVar.Fls_GulCurrentLength -
                                                             LulMaxReadBytes;
    if (FLS_MISALIGNED_READ == Fls_GVar.Fls_ReadType)
    {
      Fls_GVar.Fls_GulRequestedLength = Fls_GVar.Fls_GulRequestedLength -
                                    (LulMaxReadBytes - Fls_GVar.Fls_GucOffset);
    }
    else
    {
      /* No Action Required */
    }
    /* Set the read process continue variable to true */
    Fls_GVar.Fls_GblProcessContinue = FLS_TRUE;
  }
  else
  {
    if (FLS_MISALIGNED_READ != Fls_GVar.Fls_ReadType)
    {
      LucLenOffset = (uint8)Fls_GVar.Fls_GulCurrentLength &
                                             (FLS_PAGE_SIZE - FLS_ONE);
      /* Calculate the length for remaining bytes */
      LulFDLLength = Fls_GVar.Fls_GulCurrentLength - LucLenOffset;
    }
    else
    {
      /* Calculate the length for remaining bytes */
      LulFDLLength = Fls_GVar.Fls_GulCurrentLength;
    }
    /* Set the read process continue variable to false */
    Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
  }
  /* Get the read start and end addresses */
  LulReadStartAddress = Fls_GVar.Fls_GulReadAddress;
  LulReadEndAddress = (LulReadStartAddress + LulFDLLength) - FLS_ONE;
  /* Clear ECC errors */
  Fls_DF_write_memory_u08 (R_FCU_REGADD_DFERSTC_U08,
                                              R_FCU_REGBIT_DFERSTC_ERRCLR);
  /* Backup and Disable ECC error interrupts */
  LucDFERInt = Fls_DF_read_memory_u08 (R_FCU_REGADD_DFERINT_U08);
  Fls_DF_write_memory_u08(R_FCU_REGADD_DFERINT_U08, R_FCU_REGVAL_DFERINT_NOINT);
  if (FLS_MISALIGNED_READ == Fls_GVar.Fls_ReadType)
  {
    do
    {
      /* Reading the data from source address */
      LulReadData = Fls_DF_read_memory_u32(LulReadStartAddress);
      /* MISRA Violation: START Msg (4:0306)-3 */
      /* Writing the data to application buffer */
      Fls_DF_write_memory_u32((uint32)Fls_GVar.pTempBufferAddress, LulReadData);
      /* END Msg(4:0306)-3 */
      /* Get the Data Flash error status register value */
      LulDFERStatus = Fls_DF_read_memory_u32 (R_FCU_REGADD_DFERSTR_U32);
      if (R_FCU_REGVAL_DFERSTR_NOERR != LulDFERStatus)
      {
        if (R_FCU_REGBIT_DFERSTR_DEDF ==
                                   (R_FCU_REGBIT_DFERSTR_DEDF & LulDFERStatus))
        {
          LucErrorType = FLS_ONE;
          LenFDLStatus = R_FDL_ERR_ECC_DED;
        }
        else
        {
          LenFDLStatus = R_FDL_ERR_ECC_SED;
        }
        /* MISRA Violation: START Msg(4:2995)-8 */
        if ((R_FDL_ERR_ECC_DED == LenFDLStatus) ||
           ((R_FDL_ERR_ECC_SED == LenFDLStatus) && (FLS_ZERO == LucErrorType)))
        /* END Msg(4:2995)-8 */
        {
          /* MISRA Violation: START Msg(4:2982)-9 */
          /* Global variable to hold the ECC error occurrence address */
          Fls_GVar.Fls_GulSrcDestAddress = LulReadStartAddress;
          /* END Msg(4:2982)-9 */
          LulErrorStatus = LulDFERStatus;
        }
        else
        {
          /* No Action Required */
        }
        /* Clear ECC errors */
        Fls_DF_write_memory_u08(R_FCU_REGADD_DFERSTC_U08,
                                             R_FCU_REGBIT_DFERSTC_ERRCLR);
      }
      else
      {
        /* No Action Required */
      }
      /* Incrementing the address pointers */
      LulReadStartAddress = LulReadStartAddress + R_FDL_WRITE_SIZE;
      /* MISRA Violation: START Msg (4:0488)-4 */
      Fls_GVar.pTempBufferAddress = Fls_GVar.pTempBufferAddress +
                                                          R_FDL_WRITE_SIZE;
      /* END Msg(4:0488)-4 */
      /* Check for the read address reached the end address */
    } while (LulReadStartAddress <= LulReadEndAddress);
    /* Global variable to hold the ECC error occurrence address */
    Fls_GVar.Fls_GulSrcDestAddress = LulReadStartAddress - R_FDL_WRITE_SIZE;
  }
  else
  {
    /* Check for the read address reached the end address */
    while (LulReadStartAddress <= LulReadEndAddress)
    {
      /* Reading the data from source address */
      LulReadData = Fls_DF_read_memory_u32(LulReadStartAddress);
      /* MISRA Violation: START Msg (4:0306)-3 */
      /* Writing the data to application buffer */
      Fls_DF_write_memory_u32((uint32)Fls_GVar.pBufferAddress, LulReadData);
      /* END Msg(4:0306)-3 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      Fls_GVar.pBufferAddress = Fls_GVar.pBufferAddress + R_FDL_WRITE_SIZE;
      /* END Msg(4:0488)-4 */
      /* Get the Data Flash error status register value */
      LulDFERStatus = Fls_DF_read_memory_u32 (R_FCU_REGADD_DFERSTR_U32);
      if (R_FCU_REGVAL_DFERSTR_NOERR != LulDFERStatus)
      {
        if (R_FCU_REGBIT_DFERSTR_DEDF ==
                                   (R_FCU_REGBIT_DFERSTR_DEDF & LulDFERStatus))
        {
          LucErrorType = FLS_ONE;
          LenFDLStatus = R_FDL_ERR_ECC_DED;
        }
        else
        {
          LenFDLStatus = R_FDL_ERR_ECC_SED;
        }
        /* MISRA Violation: START Msg(4:2995)-8 */
        if ((R_FDL_ERR_ECC_DED == LenFDLStatus) ||
           ((R_FDL_ERR_ECC_SED == LenFDLStatus) && (FLS_ZERO == LucErrorType)))
        /* END Msg(4:2995)-8 */
        {
          /* Global variable to hold the ECC error occurrence address */
          Fls_GVar.Fls_GulSrcDestAddress = LulReadStartAddress;
          LulErrorStatus = LulDFERStatus;
        }
        else
        {
          /* No Action Required */
        }
        /* Clear ECC errors */
        Fls_DF_write_memory_u08(R_FCU_REGADD_DFERSTC_U08,
                                             R_FCU_REGBIT_DFERSTC_ERRCLR);
      }
      else
      {
        /* No Action Required */
      }
      LulReadStartAddress = LulReadStartAddress + R_FDL_WRITE_SIZE;
    }
    switch (LucLenOffset)
    {
      case FLS_ONE:
        /* Reading the data from source address */
        LucReadData = Fls_DF_read_memory_u08(LulReadStartAddress);
        /* MISRA Violation: START Msg (4:0306)-3 */
        /* Writing the data to application buffer */
        Fls_DF_write_memory_u08((uint32)Fls_GVar.pBufferAddress, LucReadData);
        /* END Msg(4:0306)-3 */
      break;
      case FLS_TWO:
        /* Reading the data from source address */
        LusReadData = Fls_DF_read_memory_u16(LulReadStartAddress);
        /* MISRA Violation: START Msg (4:0306)-3 */
        /* Writing the data to application buffer */
        Fls_DF_write_memory_u16((uint32)Fls_GVar.pBufferAddress, LusReadData);
        /* END Msg(4:0306)-3 */
      break;
      case FLS_THREE:
        /* Reading the data from source address */
        LusReadData = Fls_DF_read_memory_u16(LulReadStartAddress);
        /* MISRA Violation: START Msg (4:0306)-3 */
        /* Writing the data to application buffer */
        Fls_DF_write_memory_u16((uint32)Fls_GVar.pBufferAddress, LusReadData);
        /* END Msg(4:0306)-3 */
        /* MISRA Violation: START Msg(4:0488)-4 */
        Fls_GVar.pBufferAddress = Fls_GVar.pBufferAddress + FLS_TWO;
        /* END Msg(4:0488)-4 */
        LulReadStartAddress = LulReadStartAddress + FLS_TWO;
        /* Reading the data from source address */
        LucReadData = Fls_DF_read_memory_u08(LulReadStartAddress);
        /* MISRA Violation: START Msg (4:0306)-3 */
        /* Writing the data to application buffer */
        Fls_DF_write_memory_u08((uint32)Fls_GVar.pBufferAddress, LucReadData);
        /* END Msg(4:0306)-3 */
        LucLenOffset = FLS_ONE;
      break;
      default:
      break;
    }
    /* MISRA Violation: START Msg(4:0488)-4 */
    Fls_GVar.pBufferAddress = Fls_GVar.pBufferAddress + LucLenOffset;
    /* END Msg(4:0488)-4 */
    LulReadStartAddress = LulReadStartAddress + LucLenOffset;
  }
  /* Get the updated read start address value to the global variable  */
  Fls_GVar.Fls_GulReadAddress = LulReadStartAddress;
  if (R_FCU_REGVAL_DFERSTR_NOERR != LulErrorStatus)
  {
    if (R_FCU_REGBIT_DFERSTR_DEDF ==
                              (R_FCU_REGBIT_DFERSTR_DEDF & LulErrorStatus))
    {
      LenFDLStatus = R_FDL_ERR_ECC_DED;
    }
    else
    {
      LenFDLStatus = R_FDL_ERR_ECC_SED;
    }
  }
  else
  {
    LenFDLStatus = R_FDL_OK;
  }
  /* Restore the ECC error interrupts */
  Fls_DF_write_memory_u08 (R_FCU_REGADD_DFERINT_U08, LucDFERInt);
  /* Set the command initiated to TRUE */
  Fls_GVar.Fls_GblCommandInitiated = FLS_TRUE;
  /* Return the FDL status */
  return(LenFDLStatus);
} /* End of API Fls_DFProcessReadImmCommand */
#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_READIMMEDIATE_API == STD_ON) */
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                         (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_COMPARE_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_CFProcessCompareCommand
**
** Service ID            : NA
**
** Description           : This API processes the compare command for code
**                         flash.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : LenFCLStatus : The status of the FCL function
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GulCurrentLength, Fls_GpConfigPtr,
**                         Fls_GVar.Fls_GulSrcDestAddress,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GVar.pTempBufferAddress,
**                         Fls_GVar.Fls_GblFlashEnable, Fls_GulTimeout
**
** Function(s) invoked   : Fls_CF_read_memory_u08, Fls_CF_write_memory_u08,
**                         Fls_CF_read_memory_u32
**
** Registers Used        : R_FPSYS_REGBIT_FSTATR_RESET,
**                         R_FPSYS_REGBIT_FSTATR_ERSERR,
**                         R_FPSYS_REGBIT_FSTATR_PRGERR,
**                         R_FPSYS_REGBIT_FSTATR_ILGERR,
**                         R_FPSYS_FLASH_ACCESS_AREA_BASE,
**                         R_FPSYS_REGADD_FSTATR_U32
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(r_fcl_status_t, FLS_PRIVATE_CODE)Fls_CFProcessCompareCommand(void)
{
  /* Local variable to hold the status of the FCL API call */
  r_fcl_status_t LenFCLStatus;
  /* Local variable to hold the word length and read data */
  uint32 LulFCLLength ;
  uint8 LucReadData;
  /* Local variable to hold the status of read operation */
  uint32 LulReadStatus;
  /* Local variable to hold the read start and end addresses */
  uint32 LulReadStartAddress;
  uint32 LulReadEndAddress;
  /* Local variable to hold the maximum read bytes */
  uint32 LulMaxReadBytes;
  LulMaxReadBytes = Fls_GpConfigPtr->ulFlsCFMaxReadBytes;
  /* Check whether the length exceeds the maximum number of read bytes */
  if (Fls_GVar.Fls_GulCurrentLength > LulMaxReadBytes)
  {
    /* Set the variable length to read maximum number of bytes */
    LulFCLLength = LulMaxReadBytes;
    /* Calculate Remaining bytes of the length */
    Fls_GVar.Fls_GulCurrentLength = Fls_GVar.Fls_GulCurrentLength -
                                                             LulMaxReadBytes;
    /* Set the compare process continue variable to true */
    Fls_GVar.Fls_GblProcessContinue = FLS_TRUE;
  }
  else
  {
    /* Calculate the length for remaining bytes */
    LulFCLLength = Fls_GVar.Fls_GulCurrentLength;
    /* Set the compare process continue variable to false */
    Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
  }
  #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
  /* Time out value for read operation */
  Fls_GulTimeout = Fls_GpConfigPtr->ulFlsCFReadTimeoutValue;
  #endif
  /* Get the read start and end addresses */
  LulReadStartAddress = Fls_GVar.Fls_GulSrcDestAddress;
  LulReadEndAddress = (LulReadStartAddress + LulFCLLength) - FLS_ONE;
  do
  {
    /* Reading the data from source address */
    LucReadData = Fls_CF_read_memory_u08(LulReadStartAddress);
    /* MISRA Violation: START Msg (4:0306)-3 */
    /* Writing the data to application buffer */
    Fls_CF_write_memory_u08((uint32)Fls_GVar.pTempBufferAddress, LucReadData);
    /* END Msg(4:0306)-3 */
    /* Incrementing the address pointers */
    LulReadStartAddress++;
    /* MISRA Violation: START Msg (4:0489)-5 */
    Fls_GVar.pTempBufferAddress++;
    /* END Msg(4:0489)-5 */
    /* Check for the read address reached the end address */
  } while (LulReadStartAddress <= LulReadEndAddress);
  /* Get the updated start address value to the global variable  */
  Fls_GVar.Fls_GulSrcDestAddress = LulReadStartAddress;
  LulReadStatus = Fls_CF_read_memory_u32(R_FPSYS_REGADD_FSTATR_U32);
  /* Get the status of the operation performed */
  if (R_FPSYS_REGBIT_FSTATR_RESET != (LulReadStatus &
     (R_FPSYS_REGBIT_FSTATR_ERSERR + R_FPSYS_REGBIT_FSTATR_PRGERR +
      R_FPSYS_REGBIT_FSTATR_ILGERR)))
  {
    Fls_CF_write_memory_u08(R_FPSYS_FLASH_ACCESS_AREA_BASE,
                                       R_FPSYS_FLASH_ACCESS_CMD_CLEARSTAT);
    LenFCLStatus = R_FCL_ERR_INTERNAL;
  }
  else
  {
    LenFCLStatus = R_FCL_OK;
  }
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Reset the buffer pointer by number of bytes it processes */
  Fls_GVar.pTempBufferAddress = Fls_GVar.pTempBufferAddress - LulFCLLength;
  /* END Msg(4:0488)-4 */
  /* Set the command initiated to TRUE */
  Fls_GVar.Fls_GblCommandInitiated = FLS_TRUE;
  /* Return the FCL status */
  return(LenFCLStatus);
} /* End of API Fls_CFProcessCompareCommand */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_COMPARE_API == STD_ON) */
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_COMPARE_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_DFProcessCompareCommand
**
** Service ID            : NA
**
** Description           : This API processes the compare command for data
**                         flash.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : LpFdlReqCmd->status_enu
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GpConfigPtr, Fls_GVar.Fls_GucOffset,
**                         Fls_GVar.Fls_GulSrcDestAddress,
**                         Fls_GVar.pTempBufferAddress,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GVar.Fls_GblCommandInitiated, Fls_GulTimeout,
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_GblTimeOutMonitor
**
** Function(s) invoked   : R_FDL_Handler, R_FDL_Execute
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(r_fdl_status_t, FLS_PRIVATE_CODE)Fls_DFProcessCompareCommand(void)
{
  /* Pointer to the FDL command Structure */
  P2VAR(r_fdl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFdlReqCmd;
  /* Local variable to hold the length */
  uint32 LulFDLLength ;
  /* Local variable to hold the maximum read bytes */
  uint32 LulMaxReadBytes;
  LulMaxReadBytes = Fls_GpConfigPtr->ulFlsDFMaxReadBytes;
  /* Check whether the length exceeds the maximum number of read bytes */
  if (Fls_GVar.Fls_GulCurrentLength > LulMaxReadBytes)
  {
    /* Set the word length to read maximum number of bytes */
    LulFDLLength = (LulMaxReadBytes / FLS_FOUR);
    /* Calculate Remaining bytes of the length */
    Fls_GVar.Fls_GulCurrentLength = Fls_GVar.Fls_GulCurrentLength -
                                                               LulMaxReadBytes;
    Fls_GVar.Fls_GulRequestedLength = Fls_GVar.Fls_GulRequestedLength -
                                    (LulMaxReadBytes - Fls_GVar.Fls_GucOffset);
    /* Set the compare process continue variable to true */
    Fls_GVar.Fls_GblProcessContinue = FLS_TRUE;
  }
  else
  {
    /* Calculate the length for remaining bytes */
     LulFDLLength = (Fls_GVar.Fls_GulCurrentLength / FLS_FOUR);
    /* Set the compare process continue variable to false */
     Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
  }
  #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
  /* Time out value for Compare Operation */
  Fls_GulTimeout = Fls_GpConfigPtr->ulFlsDFReadTimeoutValue;
  /* Initialize the global variable Time out monitor to True */
  Fls_GVar.Fls_GblTimeOutMonitor = FLS_TRUE;
  #endif
  /* Prepare the Structure by assigning the variables */
  LpFdlReqCmd = &Fls_GstVar.GstfdlRequest;
  LpFdlReqCmd->command_enu = R_FDL_CMD_READ;
  /* MISRA Violation: START Msg (4:0306)-3 */
  LpFdlReqCmd->bufAddr_u32 = (uint32)Fls_GVar.pTempBufferAddress;
  /* END Msg(4:0306)-3 */
  LpFdlReqCmd->idx_u32 = (Fls_GVar.Fls_GulSrcDestAddress - FLS_DF_BASE_ADDRESS);
  LpFdlReqCmd->cnt_u16 = (uint16)LulFDLLength;
  LpFdlReqCmd->accessType_enu = R_FDL_ACCESS_USER;
  /* Invoking the Library R_FDL_Execute API */
  R_FDL_Execute (LpFdlReqCmd);
  /* Check for the Status is Busy */
  do
  {
    /* Initiate read job by invoking handler API */
    R_FDL_Handler();
    #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
    Fls_GulTimeout--;
    #endif
  }
  #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
  while ((LpFdlReqCmd->status_enu == R_FDL_BUSY) &&
                              (Fls_GulTimeout > FLS_ZERO));
  #else
  while (LpFdlReqCmd->status_enu == R_FDL_BUSY);
  #endif
  /* Set the command initiated to TRUE */
  Fls_GVar.Fls_GblCommandInitiated = FLS_TRUE;
  /*Return the FDL status*/
  return(LpFdlReqCmd->status_enu);
} /* End of API Fls_DFProcessCompareCommand */
#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_COMPARE_API == STD_ON) */
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

/*******************************************************************************
** Function Name         : Fls_EndJobProcess
**
** Service ID            : NA
**
** Description           : This API end the current job processing. It reset the
**                        driver state to idle, requested command as none and
**                        job result with the current completed job status.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : MemIf_JobResultType
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_GulSrcDestAddress,
**                         Fls_GVar.pBufferAddress, Fls_GVar.Fls_GulReadAddress,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.pTempBufferAddress, Fls_GVar.Fls_GenState,
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_GblFlashEnable, Fls_GpConfigPtr,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GstVar.GucDFStatus, Fls_GstVar.GucCFStatus,
**                         Fls_GVar.Fls_EraseStartAddress,
**                         Fls_GVar.Fls_GucOffset, Fls_GVar.Fls_AccessType,
**                         Fls_GVar.Fls_GblTimeOutMonitor
**
** Function(s) invoked   : Det_ReportError, Dem_ReportErrorStatus, Fls_SetFLMD0,
**                         Fls_GpConfigPtr->pJobErrorNotificationPointer,
**                         Fls_GpConfigPtr->pJobEndNotificationPointer,
**                         Fls_GpConfigPtr->pEccDEDNotificationPointer,
**                         Fls_SetFHVE
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
FUNC(void, FLS_PRIVATE_CODE)Fls_EndJobProcess(void)
{
  /* Local variable to store the processed bytes count */
  uint32 LulBytesProcessed;
  /* Loop count variable */
  uint32 LddLoopCount;
  /* Local variable used for job notification functions */
  boolean LblJobNotification;
  boolean LblFlashStatus;
  /* Local variable to hold the maximum read bytes */
  uint32 LulMaxReadBytes;
  #if (FLS_COMPARE_API == STD_ON)
  /* Local variable to hold the return value of the function */
  Std_ReturnType LddReturnValue;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #if (FLS_TIMEOUT_MONITORING == STD_ON)
  /* Initialize the global variable Time out monitor to False */
  Fls_GVar.Fls_GblTimeOutMonitor = FLS_FALSE;
  #endif
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
  LulMaxReadBytes = Fls_GpConfigPtr->ulFlsDFMaxReadBytes;
  #elif (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
  LulMaxReadBytes = Fls_GpConfigPtr->ulFlsCFMaxReadBytes;
  #else
  if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
  {
    LulMaxReadBytes = Fls_GpConfigPtr->ulFlsDFMaxReadBytes;
  }
  else
  {
    LulMaxReadBytes = Fls_GpConfigPtr->ulFlsCFMaxReadBytes;
  }
  #endif
  #if (FLS_COMPARE_API == STD_ON)
  LddReturnValue = E_OK;
  #endif
  LddLoopCount = FLS_ZERO;
  /* Set the variable job notification to False */
  LblJobNotification = FLS_FALSE;
  /* When initiated command is ERASE */
  if (FLS_COMMAND_ERASE == Fls_GVar.Fls_GenCommand)
  {
    if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
    {
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      if (R_FDL_OK == Fls_GstVar.GucDFStatus)
      {
        #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
             (FLS_BLANK_CHECK == FDL_SUPPORTED))
        /* Set the Command to Blank check */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_BLANKCHECK;
        /* Set the command initiated to TRUE */
        Fls_GVar.Fls_GblCommandInitiated = FLS_TRUE;
        /* Set the global variable process continue to True */
        Fls_GVar.Fls_GblProcessContinue = FLS_TRUE;
        /* Set the driver State to busy */
        Fls_GVar.Fls_GenState = MEMIF_BUSY;
        /* Set the variable job notification to False */
        LblJobNotification = FLS_FALSE;
        #else
        /* Set the command to None */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Set the job Result to OK */
        Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
        /* Set the driver state to idle */
        Fls_GVar.Fls_GenState = MEMIF_IDLE;
        /* Set the variable job notification to True */
        LblJobNotification = FLS_TRUE;
        #endif /* End of #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                       (FLS_BLANK_CHECK == FDL_SUPPORTED)) */
      }
      else
      {
        Dem_ReportErrorStatus(FLS_E_ERASE_FAILED, DEM_EVENT_STATUS_FAILED);
        /* Set the job result to failed */
        Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
        /* Set the command to none */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Check for the status is R_FDL_ERR_INTERNAL */
        if (R_FDL_ERR_INTERNAL == Fls_GstVar.GucDFStatus)
        {
          /* Set the driver state to un-initialized */
          Fls_GVar.Fls_GenState = MEMIF_UNINIT;
        }
        else
        {
          /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
        }
        /* Set the variable job notification to True */
        LblJobNotification = FLS_TRUE;
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    }
    else
    {
      #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      if (R_FCL_OK == Fls_GstVar.GucCFStatus)
      {
        /* Set the command to None */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Set the job Result to OK */
        Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
        /* Set the driver state to idle */
        Fls_GVar.Fls_GenState = MEMIF_IDLE;
        /* Set the variable job notification to True */
        LblJobNotification = FLS_TRUE;
      }
      else /* if erase is not done properly */
      {
        Dem_ReportErrorStatus(FLS_E_ERASE_FAILED, DEM_EVENT_STATUS_FAILED);
        /* Set the job result to failed */
        Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
        /* Set the command to none */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Set the variable job notification to True */
        LblJobNotification = FLS_TRUE;
        if (R_FCL_ERR_INTERNAL == Fls_GstVar.GucCFStatus)
        {
          /* Set the driver state to un-initialized */
          Fls_GVar.Fls_GenState = MEMIF_UNINIT;
        }
        else
        {
            /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
        }
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    }
  } /* End of ERASE command */
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  #if ((FLS_BLANKCHECK_API == STD_ON) || ((FLS_DEV_ERROR_DETECT == STD_ON) \
                                 && (FLS_BLANK_CHECK == FDL_SUPPORTED)))
  /* When initiated command is BLANK CHECK */
  else if (FLS_COMMAND_BLANKCHECK == Fls_GVar.Fls_GenCommand)
  {
    /* Check if the flash status is OK */
    if (R_FDL_OK == Fls_GstVar.GucDFStatus)
    {
      /* Set to command to None */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
      /* Set the job result as job is OK */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
      /* Set the driver state to idle */
      Fls_GVar.Fls_GenState = MEMIF_IDLE;
      /* Set the job notification to true since job is completed */
      LblJobNotification = FLS_TRUE;
    }
    else /* If blank check fails */
    {
      #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                  (FLS_BLANK_CHECK == FDL_SUPPORTED))
      if (FLS_TRUE == Fls_GVar.Fls_GblCommandInitiated)
      {
        /* Report to DET that Erase verify operation failed */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                          FLS_MAINFUNCTION_SID, FLS_E_VERIFY_ERASE_FAILED);
      }
      else
      {
        /* No action required */
      }
      #endif
      switch (Fls_GstVar.GucDFStatus)
      {
        /* Check for the status is R_FDL_ERR_INTERNAL */
        case R_FDL_ERR_INTERNAL:
             /* Set the driver state to un-initialized */
             Fls_GVar.Fls_GenState = MEMIF_UNINIT;
             /* Set the job result to failed */
             Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
        break;
        /* Check for the status is R_FDL_ERR_BLANKCHECK */
        case R_FDL_ERR_BLANKCHECK:
             /* Set the driver state to idle */
             Fls_GVar.Fls_GenState = MEMIF_IDLE;
             if (FLS_TRUE == Fls_GVar.Fls_GblCommandInitiated)
             {
               /* Set the job result to failed */
               Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
             }
             else
             {
               /* Set the job result to Block Inconsistent */
               Fls_GVar.Fls_GenJobResult = MEMIF_BLOCK_INCONSISTENT;
             }
        break;
        default:
             /* Set the driver state to idle */
             Fls_GVar.Fls_GenState = MEMIF_IDLE;
             /* Set the job result to failed */
             Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
        break;
      }
      /* Set the command to None */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
      /* Set the job notification to true since job is failed */
      LblJobNotification = FLS_TRUE;
    }
    /* Set the command initiated to FALSE */
    Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
  } /* End of Blank check command */
  #endif /* End of #if ((FLS_BLANKCHECK_API == STD_ON) || \
    ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_BLANK_CHECK == FDL_SUPPORTED))) */

  #if (FLS_READIMMEDIATE_API == STD_ON)
  /* When initiated command is Read Immediate */
  else if (FLS_COMMAND_READ_IMM == Fls_GVar.Fls_GenCommand)
  {
    /* Check for the flash status */
    if ((R_FDL_OK == Fls_GstVar.GucDFStatus) ||
             (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus))
    {
      if (FLS_MISALIGNED_READ == Fls_GVar.Fls_ReadType)
      {
        /* Check if the process continue is True */
        if (FLS_TRUE == Fls_GVar.Fls_GblProcessContinue)
        {
          /* Set the bytes to be processed to maximum read bytes per cycle */
          LulBytesProcessed = LulMaxReadBytes;
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Reset the buffer pointer with number of bytes it processed */
          Fls_GVar.pTempBufferAddress = (Fls_GVar.pTempBufferAddress +
                                   Fls_GVar.Fls_GucOffset) - LulBytesProcessed;
          /* END Msg(4:0488)-4 */
        }
        else
        {
          /* Set the bytes to be processed to remaining read bytes */
          LulBytesProcessed = Fls_GVar.Fls_GulCurrentLength;
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Reset the buffer pointer with number of bytes it processed */
          Fls_GVar.pTempBufferAddress = (Fls_GVar.pTempBufferAddress +
                                   Fls_GVar.Fls_GucOffset) - LulBytesProcessed;
          /* END Msg(4:0488)-4 */
          LulBytesProcessed = Fls_GVar.Fls_GulRequestedLength;
          /* Set the global variable offset to zero */
          Fls_GVar.Fls_GucOffset = FLS_ZERO;
        }
        /* Loop until the number of bytes read in one cycle */
        while (LddLoopCount < (LulBytesProcessed - Fls_GVar.Fls_GucOffset))
        {
          /* MISRA Violation: START Msg(4:0311)-2 */
          *((uint8 *) Fls_GVar.pBufferAddress) =
                                   *((uint8 *)Fls_GVar.pTempBufferAddress);
          /* END Msg(4:0311)-2 */
          LddLoopCount++;
          /* MISRA Violation: START Msg (4:0489)-5 */
          Fls_GVar.pBufferAddress++;
          /* END Msg(4:0489)-5 */
          /* MISRA Violation: START Msg (4:0489)-5 */
          Fls_GVar.pTempBufferAddress++;
          /* END Msg(4:0489)-5 */
        }
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Increment the buffer pointer with number of bytes it processed */
        Fls_GVar.pTempBufferAddress = Fls_GVar.pTempBufferAddress -
                                                           LulBytesProcessed;
        /* END Msg(4:0488)-4 */
        /* Set the global variable offset to zero */
        Fls_GVar.Fls_GucOffset = FLS_ZERO;
      }
      else
      {
        /* No action required */
      }
      /* Check if the single bit error occurred from Data Flash read */
      if (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus)
      {
        /* Check for ECC SED notification pointer is configured as null */
        if (NULL_PTR != Fls_GpConfigPtr->pEccSEDNotificationPointer)
        {
          /* ECC single bit error notification to the upper layer */
          Fls_GpConfigPtr->pEccSEDNotificationPointer
                                             (Fls_GVar.Fls_GulSrcDestAddress);
        }
        else
        {
          /* No action required */
        }
      }
      else
      {
        /* No action required */
      }
      /* Check if remaining number of bytes exceeds the maximum read bytes */
      if (FLS_TRUE != Fls_GVar.Fls_GblProcessContinue)
      {
        /* Set the job result to ok */
        Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
        /* Set the command to none */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Set the driver state to idle */
        Fls_GVar.Fls_GenState = MEMIF_IDLE;
        /* Set the job notification to true since job is completed */
        LblJobNotification = FLS_TRUE;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      if (R_FDL_ERR_ECC_DED == Fls_GstVar.GucDFStatus)
      {
        /* Report error to DEM that read job failed due to double bit error */
        Dem_ReportErrorStatus(FLS_E_READ_FAILED_DED, DEM_EVENT_STATUS_FAILED);
        /* Check for ECC DED notification pointer is configured as null */
        if (NULL_PTR != Fls_GpConfigPtr->pEccDEDNotificationPointer)
        {
          /* ECC double bit error notification to the upper layer */
          Fls_GpConfigPtr->pEccDEDNotificationPointer
                                               (Fls_GVar.Fls_GulSrcDestAddress);
        }
        else
        {
          /* No action required */
        }
      }
      else
      {
        /* Report error to DEM that read job failed */
        Dem_ReportErrorStatus(FLS_E_READ_FAILED, DEM_EVENT_STATUS_FAILED);
      }
      /* Set the job result to failed */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
      /* Set the command to none */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
      /* Set the driver state to idle */
      Fls_GVar.Fls_GenState = MEMIF_IDLE;
      /* Set the job notification to true */
      LblJobNotification = FLS_TRUE;
    }
  } /* End of Read Immediate Command */
  #endif /* End of #if (FLS_READIMMEDIATE_API == STD_ON) */
  #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
  /* When initiated command is READ */
  else if (FLS_COMMAND_READ == Fls_GVar.Fls_GenCommand)
  {
    #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
    /* Check if the Data Flash status is OK */
    if ((R_FDL_OK == Fls_GstVar.GucDFStatus) ||
                                (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus))
    #elif (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
    /* Check if the Code Flash status is OK */
    if (R_FCL_OK == Fls_GstVar.GucCFStatus)
    #else
    /* Check if the data flash status or code flash status is OK */
    if (((R_FDL_OK == Fls_GstVar.GucDFStatus) ||
           (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus)) ||
                                   (R_FCL_OK == Fls_GstVar.GucCFStatus))
    #endif
    {
      LblFlashStatus = FLS_TRUE;
    }
    else
    {
      LblFlashStatus = FLS_FALSE;
    }
    if (FLS_TRUE == LblFlashStatus)
    {
      /* Check for the process continue to True */
      if (FLS_TRUE == Fls_GVar.Fls_GblProcessContinue)
      {
        /* Set the bytes to be processed to maximum read bytes per cycle */
        LulBytesProcessed = LulMaxReadBytes;
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          /* Set the bytes to be processed to maximum read bytes per cycle */
          LulBytesProcessed = (LulBytesProcessed - Fls_GVar.Fls_GucOffset);
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Reset the buffer pointer with number of bytes it processed */
          Fls_GVar.pTempBufferAddress = (Fls_GVar.pTempBufferAddress -
                                                            LulBytesProcessed);
          /* END Msg(4:0488)-4 */
        }
        else
        {
          /* No action required */
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        /* Set the bytes to be processed to remaining read bytes */
        LulBytesProcessed = Fls_GVar.Fls_GulCurrentLength;
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Reset the buffer pointer with number of bytes it processed */
          Fls_GVar.pTempBufferAddress = (Fls_GVar.pTempBufferAddress +
                                   Fls_GVar.Fls_GucOffset) - LulBytesProcessed;
          /* END Msg(4:0488)-4 */
          LulBytesProcessed = Fls_GVar.Fls_GulRequestedLength;
        }
        else
        {
          /* No action required */
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        /* Loop until the number of bytes read in one cycle */
        while (LddLoopCount < LulBytesProcessed)
        {
          /* MISRA Violation: START Msg(4:0311)-2 */
          *((uint8 *) Fls_GVar.pBufferAddress) =
                                   *((uint8 *)Fls_GVar.pTempBufferAddress);
          /* END Msg(4:0311)-2 */
          LddLoopCount++;
          /* MISRA Violation: START Msg (4:0489)-5 */
          Fls_GVar.pBufferAddress++;
          /* END Msg(4:0489)-5 */
          /* MISRA Violation: START Msg (4:0489)-5 */
          Fls_GVar.pTempBufferAddress++;
          /* END Msg(4:0489)-5 */
        }
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Increment the buffer pointer with number of bytes it processed */
        Fls_GVar.pTempBufferAddress = Fls_GVar.pTempBufferAddress -
                                   (Fls_GVar.Fls_GucOffset + LulBytesProcessed);
        /* END Msg(4:0488)-4 */
        /* Set the global variable offset to zero */
        Fls_GVar.Fls_GucOffset = FLS_ZERO;
        /* Check if the single bit error occurred from Data Flash read */
        if (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus)
        {
          /* Check for ECC SED notification pointer is configured as null */
          if (NULL_PTR != Fls_GpConfigPtr->pEccSEDNotificationPointer)
          {
            /* ECC single bit error notification to the upper layer */
            Fls_GpConfigPtr->pEccSEDNotificationPointer
                                               (Fls_GVar.Fls_GulSrcDestAddress);
          }
          else
          {
            /* No action required */
          }
        }
        else
        {
          /* No action required */
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        /* Increment the read address with number of bytes it processed */
        Fls_GVar.Fls_GulReadAddress = Fls_GVar.Fls_GulReadAddress +
                                                       LulBytesProcessed;
        #endif
      }
      /* Check if remaining number of bytes exceeds the maximum read bytes */
      if (FLS_TRUE != Fls_GVar.Fls_GblProcessContinue)
      {
        /* Set the job result to ok */
        Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
        /* Set the command to none */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Set the driver state to idle */
        Fls_GVar.Fls_GenState = MEMIF_IDLE;
        /* Set the job notification to true since job is completed */
        LblJobNotification = FLS_TRUE;
      }
      else
      {
        /* No action required */
      }
    }
    else /* Read failed */
    {
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        if (R_FDL_ERR_ECC_DED == Fls_GstVar.GucDFStatus)
        {
          /* Report error to DEM that read job failed due to double bit error */
          Dem_ReportErrorStatus(FLS_E_READ_FAILED_DED, DEM_EVENT_STATUS_FAILED);
          /* Check for ECC DED notification pointer is configured as null */
          if (NULL_PTR != Fls_GpConfigPtr->pEccDEDNotificationPointer)
          {
            /* ECC double bit error notification to the upper layer */
            Fls_GpConfigPtr->pEccDEDNotificationPointer
                                               (Fls_GVar.Fls_GulSrcDestAddress);
          }
          else
          {
            /* No action required */
          }
        }
        else
        {
          /* Report error to DEM that read job failed */
          Dem_ReportErrorStatus(FLS_E_READ_FAILED, DEM_EVENT_STATUS_FAILED);
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        /* Report error to DEM that read job failed */
        Dem_ReportErrorStatus(FLS_E_READ_FAILED, DEM_EVENT_STATUS_FAILED);
      }

      /* Set the job result to failed */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
      /* Set the command to none */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        /* Check for the status is R_FDL_ERR_INTERNAL */
        if (R_FDL_ERR_INTERNAL == Fls_GstVar.GucDFStatus)
        {
          /* Set the driver state to un-initialized */
          Fls_GVar.Fls_GenState = MEMIF_UNINIT;
        }
        else
        {
          /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
        }
        #endif
      }
      else
      {
        #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
          if ((FLS_CF_ACCESS == Fls_GVar.Fls_AccessType) && (R_FCL_ERR_INTERNAL == Fls_GstVar.GucCFStatus))
          {
            /* Set the driver state to uninit */
            Fls_GVar.Fls_GenState = MEMIF_UNINIT;
          }
          else
          {
            /* Set the driver state to idle */
            Fls_GVar.Fls_GenState = MEMIF_IDLE;
          }
        #else
            /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
        #endif
      }
      /* Set the job notification to true */
      LblJobNotification = FLS_TRUE;
    }
  } /* End of Read Command */
  /* When initiated command is COMPARE */
  #if (FLS_COMPARE_API == STD_ON)
  else if (FLS_COMMAND_COMPARE == Fls_GVar.Fls_GenCommand)
  {
    #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
    /* Check if the Data Flash status is OK */
    if ((R_FDL_OK == Fls_GstVar.GucDFStatus) ||
           (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus))
    #elif (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
    /* Check if the Code Flash status is OK */
    if (R_FCL_OK == Fls_GstVar.GucCFStatus)
    #else
    /* Check if the data flash status or code flash status is OK */
    if (((R_FDL_OK == Fls_GstVar.GucDFStatus) ||
           (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus)) ||
                                       (R_FCL_OK == Fls_GstVar.GucCFStatus))
    #endif
    {
      LblFlashStatus = FLS_TRUE;
    }
    else
    {
      LblFlashStatus = FLS_FALSE;
    }
    if (FLS_TRUE == LblFlashStatus)
    {
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      /* Check if the single bit error occurred from Data Flash read */
      if ((FLS_DF_ACCESS == Fls_GVar.Fls_AccessType) &&
                         (R_FDL_ERR_ECC_SED == Fls_GstVar.GucDFStatus))
      {
        /* Check for ECC SED notification pointer is configured as null */
        if (NULL_PTR != Fls_GpConfigPtr->pEccSEDNotificationPointer)
        {
          /* ECC single bit error notification to the upper layer */
          Fls_GpConfigPtr->pEccSEDNotificationPointer(FLS_ZERO);
        }
        else
        {
          /* No action required */
        }
      }
      else
      {
        /* No action required */
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      /* Check for the process continue to true */
      if (FLS_TRUE == Fls_GVar.Fls_GblProcessContinue)
      {
        /* Set the bytes to be processed to maximum read bytes per cycle */
        LulBytesProcessed = LulMaxReadBytes;
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          /* Set the bytes to be processed to maximum read bytes per cycle */
          LulBytesProcessed = (LulBytesProcessed - Fls_GVar.Fls_GucOffset);
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Reset the buffer pointer with number of bytes it processed */
          Fls_GVar.pTempBufferAddress = (Fls_GVar.pTempBufferAddress +
                                                       Fls_GVar.Fls_GucOffset);
          /* END Msg(4:0488)-4 */
        }
        else
        {
          /* No action required */
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        /* Set the bytes to be processed to remaining read bytes */
        LulBytesProcessed = Fls_GVar.Fls_GulCurrentLength;
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Reset the buffer pointer with number of bytes it processed */
          Fls_GVar.pTempBufferAddress = (Fls_GVar.pTempBufferAddress +
                                                     Fls_GVar.Fls_GucOffset);
          /* END Msg(4:0488)-4 */
          LulBytesProcessed = Fls_GVar.Fls_GulRequestedLength;
        }
        else
        {
          /* No action required */
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      /* Loop until the number of bytes read in one cycle */
      while (LddLoopCount < LulBytesProcessed)
      {
        /* Check if read data and buffer data are same */
        if (*(Fls_GVar.pBufferAddress) !=
                                    *(Fls_GVar.pTempBufferAddress))
        {
          /* Set the loop count to maximum number of bytes processed */
          LddLoopCount = LulBytesProcessed;
          LddReturnValue = E_NOT_OK;
        }
        else
        {
          /* No action required */
        }
        /* Increment the loop count, buffer address and temp buffer address */
        LddLoopCount++;
        /* MISRA Violation: START Msg (4:0489)-5 */
        Fls_GVar.pBufferAddress++;
        /* END Msg(4:0489)-5 */
        /* MISRA Violation: START Msg (4:0489)-5 */
        Fls_GVar.pTempBufferAddress++;
        /* END Msg(4:0489)-5 */
      } /* end of while */
      if (E_OK == LddReturnValue)
      {
        /* Check for the process continue to True */
        if (FLS_TRUE == Fls_GVar.Fls_GblProcessContinue)
        {
          if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
          {
            #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Reset the buffer pointer by number of bytes it processes */
            Fls_GVar.pTempBufferAddress = Fls_GVar.pTempBufferAddress -
                                   (Fls_GVar.Fls_GucOffset + LulBytesProcessed);
            /* END Msg(4:0488)-4 */
            /* Increment the source address with number of bytes it processed */
            Fls_GVar.Fls_GulSrcDestAddress = Fls_GVar.Fls_GulSrcDestAddress +
                                   (Fls_GVar.Fls_GucOffset + LulBytesProcessed);
            /* Set the global variable offset to zero */
            Fls_GVar.Fls_GucOffset = FLS_ZERO;
            #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
          }
          else
          {
            #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Reset the buffer pointer by number of bytes it processes */
            Fls_GVar.pTempBufferAddress = Fls_GVar.pTempBufferAddress -
                                                             LulBytesProcessed;
            /* END Msg(4:0488)-4 */
            #endif
          }
        }
        else /* Compare done successfully  */
        {
          /* Set the job result */
          Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
          /* Set the command to none. */
          Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
          /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
          /* Set the job notification to true since job is completed */
          LblJobNotification = FLS_TRUE;
        }
      }
      else /* compare mismatches */
      {
        /* Set the job result to Block Inconsistent */
        Fls_GVar.Fls_GenJobResult = MEMIF_BLOCK_INCONSISTENT;
        /* Set the command to none */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Set the driver state to idle */
        Fls_GVar.Fls_GenState = MEMIF_IDLE;
        /* Set the job notification to true since job is completed with error */
        LblJobNotification = FLS_TRUE;
      }
    }
    else /* If read is unsuccessful  */
    {
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        if (R_FDL_ERR_ECC_DED == Fls_GstVar.GucDFStatus)
        {
          /* Report error to DEM that read job failed due to double bit error */
          Dem_ReportErrorStatus(FLS_E_READ_FAILED_DED, DEM_EVENT_STATUS_FAILED);
          /* Check for ECC DED notification pointer is configured as null */
          if (NULL_PTR != Fls_GpConfigPtr->pEccDEDNotificationPointer)
          {
            /* ECC double bit error notification to the upper layer */
            Fls_GpConfigPtr->pEccDEDNotificationPointer(FLS_ZERO);
          }
          else
          {
            /* No action required */
          }
        }
        else
        {
          /* Report error to DEM that compare job has failed */
          Dem_ReportErrorStatus(FLS_E_COMPARE_FAILED, DEM_EVENT_STATUS_FAILED);
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        /* Report error to DEM that compare job has failed */
        Dem_ReportErrorStatus(FLS_E_COMPARE_FAILED, DEM_EVENT_STATUS_FAILED);
      }
      /* Set the job result to job failed */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
      /* Set the driver state to idle */
      Fls_GVar.Fls_GenState = MEMIF_IDLE;
      /* Set the command to none */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
      /* Set the job notification to true since job is completed with error */
      LblJobNotification = FLS_TRUE;
    }
  } /* end of compare */
  #endif /* End of #if (FLS_COMPARE_API == STD_ON) */
  /* When the command initiated is WRITE */
  else if (FLS_COMMAND_WRITE == Fls_GVar.Fls_GenCommand)
  {
    #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
    /* Check if the Data Flash status is OK */
    if (R_FDL_OK == Fls_GstVar.GucDFStatus)
    #elif (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
    /* Check if the Code Flash status is OK */
    if (R_FCL_OK == Fls_GstVar.GucCFStatus)
    #else
    /* Check if the data flash status or code flash status is OK */
    if ((R_FDL_OK == Fls_GstVar.GucDFStatus) ||
                                       (R_FCL_OK == Fls_GstVar.GucCFStatus))
    #endif
    {
      LblFlashStatus = FLS_TRUE;
    }
    else
    {
      LblFlashStatus = FLS_FALSE;
    }
    if (FLS_TRUE == LblFlashStatus)
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Set the command initiated to false */
      Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
      /* END Msg(4:0488)-4 */
      Fls_GVar.Fls_GulCurrentLength = FLS_ZERO;
      #else /* Job ended successfully  */
      /* Set the job result to ok */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
      /* set the command to none */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
      /* Set the driver state to idle */
      Fls_GVar.Fls_GenState = MEMIF_IDLE;
      /* Set the job notification to true since job is completed */
      LblJobNotification = FLS_TRUE;
      #endif
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      if (FLS_TRUE != Fls_GVar.Fls_GblCommandInitiated)
      {
        while (Fls_GVar.Fls_GulCurrentLength < Fls_GVar.Fls_GulRequestedLength)
        {
          /* MISRA Violation: START Msg (4:0306)-3 */
          /* Check if the target memory matches with the application buffer */
          if (*(Fls_GVar.pBufferAddress) !=
                                     *((uint8 *)Fls_GVar.Fls_GulSrcDestAddress))
          /* END Msg(4:0306)-3 */
          {
            Fls_GVar.Fls_GulCurrentLength = Fls_GVar.Fls_GulRequestedLength;
            /* Report error to DET */
            (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                               FLS_MAINFUNCTION_SID, FLS_E_VERIFY_WRITE_FAILED);
            /* Set Return Value as E_NOT_OK */
            LenReturnValue = E_NOT_OK;
          }
          else /* Target memory value matches with the application buffer */
          {
            /* MISRA Violation: START Msg (4:0489)-5 */
            /* Increment the pointers to point to the next locations */
            Fls_GVar.pBufferAddress++;
            /* END Msg(4:0489)-5 */
            Fls_GVar.Fls_GulSrcDestAddress++;
            /*
             * Increment the number of bytes and the total number of bytes
             * processing in this cycle.
             */
            Fls_GVar.Fls_GulCurrentLength++;
          }
        }
        /* If verify write is Successful */
        if (E_OK == LenReturnValue)
        {
          /* Set the job result with ok */
          Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
          /* Set the command to none */
          Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
          /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
          /* Set the job notification to true since job is completed */
          LblJobNotification = FLS_TRUE;
        }
        else /* If verify write is unsuccessful  */
        {
          /* Set the job result to failed */
          Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
          /* Set the command to none */
          Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
          /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
          /* Set the job notification to true since job is failed */
          LblJobNotification = FLS_TRUE;
        }
      }
      else
      {
        /* No action required */
      }
      #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
    }
    else
    {
      /* Report DEM that Write has failed */
      Dem_ReportErrorStatus(FLS_E_WRITE_FAILED, DEM_EVENT_STATUS_FAILED);
      /* Set the job result to failed */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
      /* Set the command to none */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
         /* Check for the status is R_FDL_ERR_INTERNAL */
         if (R_FDL_ERR_INTERNAL == Fls_GstVar.GucDFStatus)
         {
           /* Set the driver state to un-initialized */
           Fls_GVar.Fls_GenState = MEMIF_UNINIT;
         }
         else
         {
           /* Set the driver state to idle */
           Fls_GVar.Fls_GenState = MEMIF_IDLE;
         }
        #endif
      }
      else if (FLS_CF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
         if (R_FCL_ERR_INTERNAL == Fls_GstVar.GucCFStatus)
         {
           /* Set the driver state to un-initialized */
           Fls_GVar.Fls_GenState = MEMIF_UNINIT;
         }
         else
         {
           /* Set the driver state to idle */
           Fls_GVar.Fls_GenState = MEMIF_IDLE;
         }
        #endif
      }
      else
      {
        /* Set the driver state to idle */
        Fls_GVar.Fls_GenState = MEMIF_IDLE;
      }
      /* Set the job notification to true since job is completed with error */
      LblJobNotification = FLS_TRUE;
    }
  }
  else
  {
    /* No action required */
  }
  /* Check for the job notification to true since job is completed */
  if (FLS_TRUE == LblJobNotification)
  {
    if (FLS_CF_ACCESS == Fls_GVar.Fls_AccessType)
    {
      #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                           (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      if (FLS_TRUE == Fls_GVar.Fls_GblFlashEnable)
      {
        #if (FLS_FLMD_REGS == SUPPORTED)
        /* Pull FLMD0 pin to VSS */
        Fls_SetFLMD0(FLS_FLMD0_PROTECTION_ON);
        #endif /* end of #if (FLS_FLMD_REGS == SUPPORTED) */
        #if (FLS_FHVE_REGS == SUPPORTED)
        /* Enable the flash memory software protection */
        Fls_SetFHVE(FLS_FLASH_PROTECTION_ON);
        #endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */
        Fls_GVar.Fls_GblFlashEnable = FLS_FALSE;
      }
      else
      {
        /* No action required */
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    }
    else
    {
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      #if (FLS_FHVE_REGS == SUPPORTED)
      if (FLS_TRUE == Fls_GVar.Fls_GblFlashEnable)
      {
        /* Enable the flash memory software protection */
        Fls_SetFHVE(FLS_FLASH_PROTECTION_ON);
        Fls_GVar.Fls_GblFlashEnable = FLS_FALSE;
      }
      else
      {
        /* No action required */
      }
      #endif /* End of #if (FLS_FHVE_REGS == SUPPORTED) */
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    }
    #if (FLS_JOB_NOTIF_CONFIG == STD_ON)
    if (MEMIF_JOB_OK == Fls_GVar.Fls_GenJobResult)
    {
      /* If job ended with success and call the job end call back function */
      Fls_GpConfigPtr->pJobEndNotificationPointer();
    }
    else /* Job ended with an error */
    {
      /* If job ended with error and call the job error call back function */
      Fls_GpConfigPtr->pJobErrorNotificationPointer();
    }
    #endif /* End of #if(FLS_JOB_NOTIF_CONFIG == STD_ON) */
  }
  else
  {
    /* No action required */
  }
} /* End of API Fls_EndJobProcess */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#if (FLS_FLMD_REGS == SUPPORTED)
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/*******************************************************************************
** Function Name         : Fls_SetFLMD0
**
** Service ID            : NA
**
** Description           : Pull FLMD0 pin to VDD or VSS to Enable or to Disable
**                         the self programing mode.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : value
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : FLMDCNT, FLMDPCMD
*******************************************************************************/

#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_SetFLMD0(uint8 value)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  FLS_FLMDPCMD = FLS_FLMD0_PCMD_CONSTANT;
  /* END Msg(4:0303)-6 */
  /* MISRA Violation: START Msg(4:0303)-6 */
  FLS_FLMDCNT = value;
  /* END Msg(4:0303)-6 */
  /* MISRA Violation: START Msg(4:0303)-6 */
  FLS_FLMDCNT = ~value;
  /* END Msg(4:0303)-6 */
  /* MISRA Violation: START Msg(4:0303)-6 */
  FLS_FLMDCNT = value;
  /* END Msg(4:0303)-6 */
} /* End of API Fls_SetFLMD0 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
#endif /* End of #if (FLS_FLMD_REGS == SUPPORTED) */

#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/*******************************************************************************
** Function Name         : Fls_CF_read_memory_u32
**
** Service ID            : NA
**
** Description           : To read the word data from code flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : data at address
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(uint32, FLS_PRIVATE_CODE)Fls_CF_read_memory_u32(const uint32 address)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  return (*((volatile uint32 *)(address)));
  /* END Msg(4:0303)-6 */
} /* End of API Fls_CF_read_memory_u32 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_CF_read_memory_u08
**
** Service ID            : NA
**
** Description           : To read the byte data from code flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : data at address
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(uint8, FLS_PRIVATE_CODE)Fls_CF_read_memory_u08(const uint32 address)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  return (*((volatile uint8 *)(address)));
  /* END Msg(4:0303)-6 */
} /* End of API Fls_CF_read_memory_u08 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_CF_write_memory_u08
**
** Service ID            : NA
**
** Description           : To write the byte data to code flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address, value
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_CF_write_memory_u08(const uint32 address,
const uint8 value)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  (*((volatile uint8 *)(address))) = value;
  /* END Msg(4:0303)-6 */
} /* End of API Fls_CF_write_memory_u08 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
#if (FLS_FHVE_REGS == SUPPORTED)
/*******************************************************************************
** Function Name         : Fls_SetFHVE
**
** Service ID            : NA
**
** Description           : Pull FHVE3 and FHVE15 registers pin to VDD or VSS to
**                         Enable or to Disable the flash memory software
**                         protection.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : value
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : FHVE3, FHVE15
*******************************************************************************/

#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_SetFHVE(uint8 value)
{
  #if (FLS_FLMD_REGS == SUPPORTED)
  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                           (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)

  uint32 Luldelay;
  /* Wait until the FLMD pin level is set */
  for (Luldelay = FLS_ZERO; Luldelay < FLS_FLMD0_P_OFF_WAIT_CONSTANT;
                                                          Luldelay++)
  {
    ASM_NOP();
  }
  #endif /* #if (FLS_FLMD_REGS == SUPPORTED) */
  #endif /* end of  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
  /* MISRA Violation: START Msg(4:0303)-6 */
  FLS_FHVE3 = value;
  FLS_FHVE15 = value;
  /* END Msg(4:0303)-6 */
} /* End of API Fls_SetFHVE */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */


#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/*******************************************************************************
** Function Name         : Fls_DF_read_memory_u08
**
** Service ID            : NA
**
** Description           : To read the byte data from data flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : data at address
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(uint8, FLS_PRIVATE_CODE)Fls_DF_read_memory_u08(uint32 address)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  return (*((volatile uint8 *)(address)));
  /* END Msg(4:0303)-6 */
} /* End of API Fls_DF_read_memory_u08 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_DF_write_memory_u08
**
** Service ID            : NA
**
** Description           : To write the byte data to data flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address, value
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_DF_write_memory_u08(uint32 address,
uint8 value)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  (*((volatile uint8 *)(address))) = value;
  /* END Msg(4:0303)-6 */
} /* End of API Fls_DF_write_memory_u08 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_DF_read_memory_u16
**
** Service ID            : NA
**
** Description           : To read the half word data from data flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : data at address
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(uint16, FLS_PRIVATE_CODE)Fls_DF_read_memory_u16(uint32 address)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  return (*((volatile uint16 *)(address)));
  /* END Msg(4:0303)-6 */
} /* End of API Fls_DF_read_memory_u16 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_DF_write_memory_u16
**
** Service ID            : NA
**
** Description           : To write the half word data to data flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address, value
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_DF_write_memory_u16(uint32 address,
uint16 value)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  (*((volatile uint16 *)(address))) = value;
  /* END Msg(4:0303)-6 */
} /* End of API Fls_DF_write_memory_u16 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_DF_read_memory_u32
**
** Service ID            : NA
**
** Description           : To read the word data from data flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : data at address
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(uint32, FLS_PRIVATE_CODE)Fls_DF_read_memory_u32(uint32 address)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  return (*((volatile uint32 *)(address)));
  /* END Msg(4:0303)-6 */
} /* End of API Fls_DF_read_memory_u32 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_DF_write_memory_u32
**
** Service ID            : NA
**
** Description           : To write the word data to data flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : NA
**
** Input Parameters      : address, value
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variable(s)    : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, FLS_PRIVATE_CODE)Fls_DF_write_memory_u32(uint32 address,
uint32 value)
{
  /* MISRA Violation: START Msg(4:0303)-6 */
  (*((volatile uint32 *)(address))) = value;
  /* END Msg(4:0303)-6 */
} /* End of API Fls_DF_write_memory_u32 */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
