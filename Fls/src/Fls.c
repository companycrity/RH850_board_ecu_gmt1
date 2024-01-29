/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls.c                                                       */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains API implementations of Fls Driver Component.            */
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
 * V1.0.0:  30-Oct-2012    : Initial Version
 *
 * V1.1.0:  21-Mar-2013    : As per SCR 092 and 108 for Mantis issues #8321,
 *                           #8506 and #9461, following changes are made:
 *                           1. The code is partitioned for possibility to have
 *                              code that handles data flash or code flash.
 *                           2. Removal of unused variable 'Fls_AccessType' and
 *                              proper comments are updated.
 *                           3. The Fls_Read API is updated to handle misaligned
 *                              read requests.
 *                           4. The Fls_Read API is updated to perform blank
 *                              check operation when ECC error is generated
 *                              after data flash reading.
 *                           5. Type Casting is removed in Fls_Read and
 *                              Fls_Compare API's while getting the address of
 *                              'Fls_GucTempBuffer'.
 *
 * V1.1.1:  29-Apr-2013    : As per SCR 147 for Mantis issues #10221 and #10824,
 *                           following changes are made:
 *                           1. The API Fls_Erase is updated to make the Erase
 *                              operation asynchronous.
 *                           2. Unused macro for software patch version
 *                              is removed.
 *                           3. The file name is changed from 'r_fcl_cfg.h' to
 *                              'fcl_cfg.h' in include section.
 *                           4. The virtual addresses are mapped to physical
 *                              addresses by adding data flash base address.
 *                           5. The Fls_Init API is updated for calculating
 *                              RAM addresses of FCL library functions.
 *
 * V1.1.2:  30-May-2013    : As per SCR 169 for Mantis issues #10192 and #10174,
 *                           following changes are made:
 *                           1. The API's Fls_Init, Fls_Read are updated to
 *                              handle read requests with misaligned address.
 *                           2. The API's Fls_Compare, Fls_MainFunction are
 *                              updated to make compare job to be available for
 *                              code flash.
 *
 * V1.2.0:  30-Jul-2013    : As per CR 186 and 215 for Mantis issues #12066,
 *                           #12214 and #11707, following changes are made:
 *                           1. The Fls_Read API is updated for removal of
 *                              unused global variable
 *                              'Fls_GVar.Fls_GulSrcDestAddress'.
 *                           2. MEMIF_BUSY_INTERNAL is replaced with MEMIF_BUSY.
 *                           3. Code is made available for supporting both code
 *                              flash and data flash use case.
 *
 * V1.2.1:  08-Aug-2013    : As per CR 225, Device name is updated as part of
 *                           merge activity.
 *
 * V1.2.2:  03-Oct-2013    : As per CR 242 for Mantis issues #13692, #13694,
 *                           #12123, #12110, #14270, #14146 and #8421, following
 *                           changes are made:
 *                           1. Volatile keyword is removed for local variables.
 *                           2. ASM_NOP() is added in for loop to wait for the
 *                              level to set in Fls_Init API.
 *                           3. Backslashes are removed for ANSI C code.
 *                           4. The Fls_MainFunction is updated for reporting
 *                              DET error FLS_E_TIMEOUT and for removal of local
 *                              status variables.
 *                           5. 'g_fcl_Config_enu' is renamed with
 *                              'sampleApp_fclConfig_enu' as per new FCL library
 *                              V1.00.
 *                           6. Type Casting is provided in Fls_Read and
 *                              Fls_Compare API's while getting the address of
 *                              'Fls_GulTempBuffer'.
 *                           7. Inclusion of 'Fls_LTTypes.h' is removed.
 *                           8. Job end and error notifications function call is
 *                              updated.
 *
 * V1.2.3:  17-Nov-2013    : As per CR 026, statements used to enable and
 *                           disable the self programing mode are placed under
 *                           precompile switch "FLS_FLMD_REGS".
 *
 * V1.2.4:  09-Jan-2014    : As per CR 066, following changes are made:
 *                           1. Length is rounded up for erase operation when
 *                              DET is disabled in case length is not aligned
 *                              to flash sector boundary.
 *                           2. The Copyright information is updated.
 *                           3. 'eelApp_fdlConfig_enu' is renamed with
 *                              'sampleApp_fdlConfig_enu' as per new FDL library
 *                              V1.00.
 *                           4. The length with zero condition check is added
 *                              for Erase, Write, Read and Compare operations
 *                              when DET is OFF.
 *                           5. Updated as per coding guidelines.
 *
 * V1.2.5:   17-Feb-2014   : As per CR 397 for Mantis issue #19288, file is
 *                           updated for merge activity.
 *
 * V1.3.0:   01-Apr-2014   : As per CR 426 for Mantis issues #10221, #9452,
 *                           #19538, #20028 and #19629, following changes are
 *                           made:
 *                           1. Fls_Erase, Fls_Write, Fls_MainFunction API's are
 *                              modified to avoid the timing issues.
 *                           2. Fls_Cancel API is modified to include FDL
 *                              initialization and switch mode functions.
 *                           3. New vendor specific API's Fls_BlankCheck and
 *                              Fls_ReadImmediate are added.
 *                           4. Fls_MainFunction is updated to include function
 *                              call Fls_DFProcessReadImmCommand and to include
 *                              pre compile option 'FLS_INTERRUPT_MODE'.
 *                           5. Enabling the interrupt processing is done in
 *                              Fls_Init API.
 *                           6. Removal of request structure 'GstfdlNewRequest'
 *                              in all API's.
 *                           7. The variable 'Fls_GVar.Fls_GenVerifyContents' is
 *                              removed in order to do write verify right after
 *                              write job is finished.
 *                           8. The Fls_Compare API is updated to handle
 *                              misaligned address and length requests.
 *                           9. In Fls_Init and Fls_MainFunction API's the
 *                              global variable 'Fls_GVar.Fls_GblTimeOutMonitor'
 *                              is used.
 *
 * V1.3.1:   13-Jun-2014   : As per CR 494 for Mantis issues #20801, #20137,
 *                           #20639, #20875, #21368 and #21665, following
 *                           changes are made:
 *                           1. "Det_ReportError" introduced in "Fls_Init" API
 *                              for handling of flash library initialization
 *                              failure.
 *                           2. Implementation of enable the interrupt is done
 *                              by using macro "RH850_SV_MODE_IMR_AND" in
 *                              "Fls_Erase" and "Fls_Write".
 *                           3. Implementation of disable the interrupt is done
 *                              by using macro "RH850_SV_MODE_IMR_OR" in
 *                              "Fls_Cancel".
 *                           4. The API's  Fls_Init and 'Fls_ReadImmediate' are
 *                              updated for supporting word data read in case
 *                              addresses are aligned.
 *                           5. New vendor specific API's Fls_Suspend and
 *                              Fls_Resume are added.
 *                           6. The Fls_Init API is updated for using the global
 *                              variables 'Fls_GVar.Fls_MutexFlag' and
 *                              'Fls_GVar.Fls_GenBackUpCmd'.
 *                           7. Usage of request structure 'GstfdlNewRequest'
 *                              in Fls_Write API is done.
 *                           8. Fls_Cancel API is updated for including function
 *                              call 'R_FDL_FCUFct_Reset'.
 *                           9. As per C coding guidelines constant values are
 *                              put at the left side in 'if' conditions.
 *                           10. Erase, Write, Normal Read, Fast read, Compare,
 *                               and Blank Check functionalities
 *                               are updated for data flash total size and start
 *                               address values.
 *
 * V1.3.2:  25-Sep-2014    : As per CR 608 for Mantis issue #22252, following
 *                           changes are made:
 *                           1. File is updated for avoiding the QAC misra
 *                              warning and for providing justifications.
 *                           2. File is updated as per Renesas coding
 *                              guidelines.
 *
 * V1.3.3:   05-Nov-2014   : As per CR 643 for Mantis issue #24449, following
 *                           changes are made:
 *                           1. "Fls_Cancel" and "Fls_Init" API's are updated as
 *                              per changes in FDL V2.00 library.
 *                           2. "Fls_Init" API is updated for initializing the
 *                              variable 'Fls_GstVar.GstfdlRequest.status_enu'.
 *                           3. File is updated for providing QAC justification.
 *
 * V1.3.4:   19-Nov-2014   : As per CR 652 for Mantis issue #24328, following
 *                           changes are made:
 *                           1. "Fls_Cancel", "Fls_Init" and "Fls_MainFunction"
 *                              API's are updated as per changes in FCL V2.00
 *                              library.
 *                           2. 'Fls_CFProcessEraseCommand', is invoked in
 *                              "Fls_Erase", and "Fls_Write" API.
 *                           3. Functions 'R_FCL_Handler', 'R_FCL_CancelRequest'
 *                               are invoked in "Fls_Cancel" API.
 *                           4. Global variables
 *                              'Fls_GstVar.GstfdlRequest.status_enu', and
 *                              'Fls_GstVar.GstfclRequest.status_enu'
 *                               are added in "Fls_Cancel" API.
 *                           5. Global variables
 *                              'Fls_GVar.Fls_GblCommandInitiated', has been
 *                              removed from "Fls_MainFunction" function.
 *                           6. 'Fls_GpRFclHandler' is invoked in
 *                              "Fls_MainFunction".
 *
 * V1.3.5:   26-Dec-2014   : As per Mantis issue #24118 fixes, following
 *                           changes are made:
 *                           1. Added initialization of Fls_GulTimeout.
 *                           2. Version updated.
 *
 * V1.3.6:   27-Jan-2015   : As part acceptance of 3.3.8 following changes
 *                           are made:
 *                            1.Mantis 25627 'LucOffset' is added to hold the
 *                              offset of target address in "Fls_ReadImmediate".
 *                            2. As per Mantis issue #24418 Fls_GstVar
 *                               initialization updated.
 *                            3. QAC warning added.
 *
 * V1.3.7:   25-Mar-2015   : As part of merging activity(mantis #26024), the
 *                           following changes are made:
 *                           1. The Fls_Resume API is updated to disable Flash
 *                              Memory Protection.
 *                           2. File is updated for providing QAC justification.
 *                           3. Global variable Fls_GVar.Fls_GblFlashEnable is
 *                              removed from the function header of Fls_Cancel
 *                              API.
 *                           4. Global variable Fls_GVar.Fls_GblFlashEnable is
 *                              added in the function header of Fls_Resume API.
 *
 * V1.3.8:   09-Apr-2015   : As part of fixing MO comments, the following
 *                           changes were made :
 *                           1. Comment for end of Fls_BlankCheck API and
 *                              Fls_BlankCheck API updated
 * V1.3.9:   15-May-2015   : As part of P1x V4.00.04 release, following changes
 *                           are made:
 *                           1. As per mantis #28186, section
 *                              DRIVERSTATE_DATA_PROTECTION is renamed to
 *                              FLS_DRIVERSTATE_DATA_PROTECTION.
 *                           2. Updated file version.
 *                                                                            */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for module version information and other types declarations */
#include "Fls.h"
/* Included for the macro declaration of supervisor mode(SV) write enabled
    Registers IMR */
#include "rh850_Types.h"
#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/* Included for  function prototype, error codes and status codes  */
#include "r_fdl.h"
#include "r_fdl_global.h"
#endif
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
/* Included for  function prototype, error codes and status codes  */
#include "r_fcl.h"
/* Included for pre-compile time parameters */
#include "fcl_cfg.h"
#include "r_fcl_env.h"
#endif
/* Included prototypes for internal functions of Flash Wrapper Component */
#include "Fls_Internal.h"
/* Included for RAM variable declarations */
#include "Fls_Ram.h"
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
/* Included for declaration of the function Dem_ReportErrorStatus() */
#include "Dem.h"
/* Included for Prototype Declaration for Callback Notification functions */
#include "Fls_Cbk.h"
#if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
/* Included for the declaration of the critical section protection functions */
#include "SchM_Fls.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_C_AR_RELEASE_MAJOR_VERSION     FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_C_AR_RELEASE_MINOR_VERSION     FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_C_AR_RELEASE_REVISION_VERSION  FLS_AR_RELEASE_REVISION_VERSION_VALUE
#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
/* AUTOSAR release version information */
#define FLS_C_AR_MAJOR_VERSION     FLS_AR_MAJOR_VERSION_VALUE
#define FLS_C_AR_MINOR_VERSION     FLS_AR_MINOR_VERSION_VALUE
#define FLS_C_AR_PATCH_VERSION     FLS_AR_PATCH_VERSION_VALUE
#endif

/* File version information */
#define FLS_C_SW_MAJOR_VERSION      1
#define FLS_C_SW_MINOR_VERSION      3

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
#if (FLS_AR_RELEASE_MAJOR_VERSION != FLS_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls.c : Mismatch in Release Major Version"
#endif

#if (FLS_AR_RELEASE_MINOR_VERSION != FLS_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls.c : Mismatch in Release Minor Version"
#endif

#if (FLS_AR_RELEASE_REVISION_VERSION != FLS_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls.c : Mismatch in Release Revision Version"
#endif

#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#if (FLS_AR_MAJOR_VERSION != FLS_C_AR_MAJOR_VERSION)
  #error "Fls.c : Mismatch in Specification Major Version"
#endif

#if (FLS_AR_MINOR_VERSION != FLS_C_AR_MINOR_VERSION)
  #error "Fls.c : Mismatch in Specification Minor Version"
#endif

#if (FLS_AR_PATCH_VERSION != FLS_C_AR_PATCH_VERSION)
  #error "Fls.c : Mismatch in Specification Patch Version"
#endif
#endif

#if (FLS_SW_MAJOR_VERSION != FLS_C_SW_MAJOR_VERSION)
  #error "Fls.c : Mismatch in Software Major Version"
#endif

#if (FLS_SW_MINOR_VERSION != FLS_C_SW_MINOR_VERSION)
  #error "Fls.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/

/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4397) An expression which is the result of a ~ or <<    */
/*                 operation has not been cast to its essential type.         */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4397)-1 and                           */
/*                 END Msg(4:4397)-1 tags in the code.                        */

/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2984) This operation is redundant. The value of the     */
/*                 result is always 'name'.                                   */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : Condition check is for all use cases and the warning is    */
/*                 for particular configuration.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2984)-2 and                           */
/*                 END Msg(4:2984)-2 tags in the code.                        */

/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2991) The value of this 'if' controlling expression is  */
/*                 always 'true'.                                             */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : This if condition is required in case of both code flash   */
/*                 and data flash enabled usecase to perform the operations.  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2991)-3 and                           */
/*                 END Msg(4:2991)-3 tags in the code.                        */
/******************************************************************************/

/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2995) The result of this logical operation is always    */
/*                 'true'.                                                    */
/* Rule          : MISRA-C:2004 13.7                                          */
/* Justification : This if condition is required in case of both code flash   */
/*                 and data flash enabled usecase to perform the operations.  */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:2995)-4 and                           */
/*                 END Msg(4:2995)-4 tags in the code.                        */

/******************************************************************************/

/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0310) Casting to different object pointer type.         */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : This is to get the value to pointer.                       */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(4:0310)-5 and                           */
/*                 END Msg(4:0310)-5 tags in the code.                        */

/******************************************************************************/

/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2996) The result of this logical operation is always    */
/*                 'false'.                                                   */
/* Rule          : MISRA-C:2004 13.7                                          */
/* Justification : Condition check is for all use cases and the warning is    */
/*                 for only particular configuration.                         */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:2996)-6 and                           */
/*                 END Msg(4:2996)-6 tags in the code.                        */

/******************************************************************************/

/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0305) [I] Cast between a pointer to function and an     */
/*                 integral type.                                             */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : This is performed to get the address of copied function.   */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0305)-7 and                           */
/*                 END Msg(4:0305)-7 tags in the code.                        */

/******************************************************************************/

/* 8. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) [I] Cast between a pointer to object and an       */
/*                 integral type.                                             */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : This is to access the memory address.                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-8 and                           */
/*                 END Msg(4:0306)-8 tags in the code.                        */

/******************************************************************************/

/* 9. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0307) [u] Cast between a pointer to object and a        */
/*                 pointer to function.                                       */
/* Rule          : MISRA-C:2004 Rule 1.2 and 11.1                             */
/* Justification : This is performed to get the address of copied function.   */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0307)-9 and                           */
/*                 END Msg(4:0307)-9 tags in the code.                        */

/******************************************************************************/

/* 10. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:3635) Function identifier used as a pointer without a   */
/*                 preceding & operator.                                      */
/* Rule          : MISRA-C:2004 Rule 16.9                                     */
/* Justification : This is performed to get the address of copied function.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3635)-10 and                          */
/*                 END Msg(4:3635)-10 tags in the code.                       */

/******************************************************************************/

/* 11. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2985) [I] This operation is redundant. The value of the */
/*                 result is always that of the left-hand operand.            */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : Condition check is for all use cases and the warning is    */
/*                 for only particular configuration.                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2985)-11 and                          */
/*                 END Msg(4:2985)-11 tags in the code.                       */

/******************************************************************************/

/* 12. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:1840) The left-hand operand is constant, 'essentially   */
/*                 signed' (signed char) and non-negative but will be         */
/*                 implicitly converted to an unsigned type (unsigned int)    */
/*                 in this arithmetic operation.                              */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The used macro is defined in library file and can not be   */
/*                 defined to unsigned.                                       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:1840)-12 and                          */
/*                 END Msg(4:1840)-12 tags in the code.                       */

/******************************************************************************/

/* 13. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:1336) Parameter identifiers missing in declaration of a */
/*                 function type.                                             */
/* Rule          : MISRA-C:2004 Rule 16.3                                     */
/* Justification : This operation is performed is to execute the library      */
/*                 functions from RAM.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:1336)-13 and                          */
/*                 END Msg(4:1336)-13 tags in the code.                       */

/******************************************************************************/

/* 14. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0303) [I] Cast between a pointer to volatile object     */
/*                 and an integral type.                                      */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : This is for getting value to the hardware registers.       */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0303)-14 and                          */
/*                 END Msg(4:0303)-14 tags in the code.                       */

/******************************************************************************/

/*15.MISRA C RULE VIOLATION:                                                  */
/*Rule           : MISRA-C:2004 Rule 14.3                                     */
/*Justification  : An additional semi-colon is added to the critical section  */
/*                   macro to avoid static analysis warning.                  */
/*Verification   : However, part of the code is verified manually and it is   */
/*                   not having any impact.                                   */
/*Reference      : Look for START Msg(4:3138)-7 and END Msg(4:3138)-7 tags in */
/*                    the code.                                               */

/******************************************************************************/

/*16.MISRA C RULE VIOLATION:                                                  */
/* Message       : Msg(5:2872) This loop, if entered, will never terminate.   */
/*Justification  : This is due to the use of global variable. The global      */
/*                 variable will be updated by other functions.               */
/*Verification   : It is functionally verified that the loop is not infinite  */
/*                 and there is no impact                                     */
/*Reference      : Look for START Msg(5:2872)-16 and END Msg(5:2872)-16 tags  */
/*                 in the code.                                               */

/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name         : Fls_Init
**
** Service ID            : 0x00
**
** Description           : This API performs the initialization of the FLS
**                         Driver Component.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : ConfigPtr
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Fls_GVar.Fls_GenState, Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_GenCommand, Fls_GpConfigPtr,
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GVar.Fls_GblFlashEnable, Fls_GblInitStatus,
**                         Fls_GVar.Fls_GucOffset, Fls_GVar.Fls_AccessType,
**                         Fls_GVar.Fls_GblTimeOutMonitor, Fls_GVar.Fls_ReadType
**                         Fls_GVar.Fls_MutexFlag, Fls_GVar.Fls_GenBackUpCmd,
**                         Fls_GstVar.GstfdlRequest.status_enu
**
** Function(s) invoked   : Det_ReportError, R_FCL_Init, R_FCL_CopySections
**                         R_FCL_CalcFctAddr, Fls_SetFLMD0, R_FDL_Init,
**                         Fls_GpRFclExecute, Fls_GpRFclHandler,
**                         R_FDL_Execute, R_FDL_Handler
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(void, FLS_PUBLIC_CODE) Fls_Init
(P2CONST(Fls_ConfigType, AUTOMATIC, FLS_APPL_CONST) ConfigPtr)
{
  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Pointer to the FCL command Structure */
  P2VAR(r_fcl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFclReqCmd;
  /* Local variable to hold the FCL status */
  r_fcl_status_t LenFCLStatus;
  #if (FLS_FLMD_REGS == SUPPORTED)
  uint32 Luldelay;
  #endif /* End of #if (FLS_FLMD_REGS == SUPPORTED) */
  boolean LblCFAccessFlag;
  #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) */
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Pointer to the FDL command Structure */
  P2VAR(r_fdl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFdlReqCmd;
  /* Local variable to hold the FDL status */
  r_fdl_status_t LenFDLStatus;
  boolean LblDFAccessFlag;
  #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) */
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  LenReturnValue = E_OK;
   #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  Fls_GstVar.GstfdlRequest.status_enu = R_FDL_ERR_REJECTED; /* default value */
  Fls_GstVar.GucDFStatus = R_FDL_ERR_REJECTED; /* default value */
  /* default value */
  Fls_GstVar.GstfdlNewRequest.status_enu = R_FDL_ERR_REJECTED;
  #endif

  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  Fls_GstVar.GstfclRequest.status_enu = R_FCL_ERR_FLOW; /* default value */
  Fls_GstVar.GucCFStatus = R_FCL_ERR_FLOW; /* default value */
  #endif

  /* Initialize the Fls_GulTimeout for avoiding read before init*/
  Fls_GulTimeout = FLS_ISR_TIMEOUT_VALUE;
  /* Check if the Configuration pointer is NULL pointer */
  if (NULL_PTR == ConfigPtr)
  {
    /* Report Error to Det */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_INIT_SID, FLS_E_PARAM_CONFIG);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  if (E_OK == LenReturnValue)
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  {
    /* MISRA Violation: START Msg(4:4397)-1 */
    if (FLS_DBTOC_VALUE == (ConfigPtr->ulStartOfDbToc))
    /* END Msg(4:4397)-1 */
    {
      /* Assign the config pointer value to global pointer */
      Fls_GpConfigPtr = ConfigPtr;
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*check that the module state is currently not busy    */
      if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
      {
        /* Report to DET that the driver is currently busy */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                     FLS_INIT_SID, FLS_E_BUSY);
      }
      else
      #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
      {
        #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        /* Initialize the code flash access flag to false */
        LblCFAccessFlag = FLS_FALSE;
        /* MISRA Violation: START Msg(4:0303)-14 */
        /* Some older devices like F1L WS2.0 need Flash authentication prior
         * to switch mode.
         */
        R_FCL_DEVICE_SPECIFIC_INIT
        /* END Msg(4::0303)-14 */
        /* Invoke FCL Initialization API */
        LenFCLStatus = R_FCL_Init(&sampleApp_fclConfig_enu);
        if (R_FCL_OK == LenFCLStatus)
        {
          /* Copy FCL functions from ROM to a specified address in RAM */
          LenFCLStatus = R_FCL_CopySections();
        }
        else
        {
          #if (FLS_DEV_ERROR_DETECT == STD_ON)
          /* Report error to DET if the component is not initialized */
          (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_INIT_SID, FLS_E_UNINIT);
          #endif
        }
        /* Check if the status of the FCL function is OK */
        if (R_FCL_OK == LenFCLStatus)
        {
          /* Get the RAM addresses of FCL library functions and initialize */
          #if (R_FCL_COMMAND_EXECUTION_MODE == R_FCL_HANDLER_CALL_USER)
          /* MISRA Violation: START Msg(4:1336)-13 */
          /* MISRA Violation: START Msg(4:3635)-10 */
          /* MISRA Violation: START Msg(4:0305)-7 */
          /* MISRA Violation: START Msg(4:0306)-8 */
          /* MISRA Violation: START Msg(4:0307)-9 */
          /* Calculate RAM address of copied function */
          Fls_GpRFclExecute = (void(*)(r_fcl_request_t *))
                            R_FCL_CalcFctAddr((uint32_t)(void *)R_FCL_Execute);
          /* END Msg(4:0307)-9 */
          /* END Msg(4:0306)-8 */
          /* END Msg(4:0305)-7 */
          /* END Msg(4:3635)-10 */
          /* END Msg(4:1336)-13 */
          /* MISRA Violation: START Msg(4:3635)-10 */
          /* MISRA Violation: START Msg(4:0305)-7 */
          /* MISRA Violation: START Msg(4:0306)-8 */
          /* MISRA Violation: START Msg(4:0307)-9 */
          /* Calculate RAM address of copied function */
          Fls_GpRFclHandler = (void(*)(void))
                            R_FCL_CalcFctAddr((uint32_t)(void *)R_FCL_Handler);
          /* END Msg(4:0307)-9 */
          /* END Msg(4:0306)-8 */
          /* END Msg(4:0305)-7 */
          /* END Msg(4:3635)-10 */
          #endif
          #if (FLS_FLMD_REGS == SUPPORTED)
          /* Pull FLMD0 pin to VDD */
          Fls_SetFLMD0(FLS_FLMD0_PROTECTION_OFF);
          /* Wait until the pin level is set */
          for (Luldelay = FLS_ZERO; Luldelay < FLS_FLMD0_P_OFF_WAIT_CONSTANT;
                                                                  Luldelay++)
          {
            ASM_NOP();
          }
          #endif /* end of #if (FLS_FLMD_REGS == SUPPORTED) */
          LpFclReqCmd = &Fls_GstVar.GstfclRequest;
          LpFclReqCmd->command_enu = R_FCL_CMD_PREPARE_ENV;
          /* Invoking the Library R_FCL_Execute API */
          Fls_GpRFclExecute (LpFclReqCmd);
          #if (R_FCL_COMMAND_EXECUTION_MODE == R_FCL_HANDLER_CALL_USER)
          /* Check for the Status is Busy */
          while (R_FCL_BUSY == LpFclReqCmd->status_enu)
          {
            /* Initiate Write job by invoking handler API */
            Fls_GpRFclHandler();
          }
          #endif
          LenFCLStatus = LpFclReqCmd->status_enu;
          #if (FLS_FLMD_REGS == SUPPORTED)
          /* Pull FLMD0 pin to VSS */
          Fls_SetFLMD0(FLS_FLMD0_PROTECTION_ON);
          /* Wait until the pin level is set */
          for (Luldelay = FLS_ZERO; Luldelay < FLS_FLMD0_P_ON_WAIT_CONSTANT;
                                                                 Luldelay++)
          {
            ASM_NOP();
          }
          #endif /* end of #if (FLS_FLMD_REGS == SUPPORTED) */
        }
        else
        {
          /* No action required */
        }
        if (R_FCL_OK == LenFCLStatus)
        {
          #if (FLS_FLMD_REGS == SUPPORTED)
          /* Initialize the global variable flash enable to False */
          Fls_GVar.Fls_GblFlashEnable = FLS_FALSE;
          #endif
          /* Set the code flash access flag to true */
          LblCFAccessFlag = FLS_TRUE;
        }
        else
        {
          /* No action required */
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)*/
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        /* Initialize the data flash access flag to false */
        LblDFAccessFlag = FLS_FALSE;
        /* MISRA Violation: START Msg(4:0303)-14 */
        /* Some older devices like F1L WS2.0 need Flash authentication prior
         * to switch mode.
         */
        R_FDL_DEVICE_SPECIFIC_INIT
        /* END Msg(4::0303)-14 */
        /* Data flash initialization */
        LenFDLStatus = R_FDL_Init(&sampleApp_fdlConfig_enu);
        if (R_FDL_OK == LenFDLStatus)
        {
          /* Prepare the environment as per V2.00 FDL library */
          LpFdlReqCmd = &Fls_GstVar.GstfdlRequest;
          LpFdlReqCmd->command_enu = R_FDL_CMD_PREPARE_ENV;
          LpFdlReqCmd->idx_u32 = FLS_ZERO;
          LpFdlReqCmd->cnt_u16 = FLS_ZERO;
          LpFdlReqCmd->accessType_enu = R_FDL_ACCESS_NONE;
          R_FDL_Execute(LpFdlReqCmd);
          while (R_FDL_BUSY == LpFdlReqCmd->status_enu)
          {
            R_FDL_Handler();
          }
          if (R_FDL_OK == LpFdlReqCmd->status_enu)
          {
            /* Initialize the global variable offset to zero */
            Fls_GVar.Fls_GucOffset = FLS_ZERO;
            Fls_GVar.Fls_ReadType = FLS_MISALIGNED_READ;
            /* Set the data flash access flag to true */
            LblDFAccessFlag = FLS_TRUE;
            /* Set the mutex flag to zero */
            Fls_GVar.Fls_MutexFlag = FLS_ZERO;
            /* Set the back up command to none */
            Fls_GVar.Fls_GenBackUpCmd = FLS_COMMAND_NONE;
          }
          else
          {
            #if (FLS_DEV_ERROR_DETECT == STD_ON)
            /* Report error to DET if the component is not initialized */
            (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_INIT_SID, FLS_E_UNINIT);
            #endif
          }
        }
        else
        {
          #if (FLS_DEV_ERROR_DETECT == STD_ON)
          /* Report error to DET if the component is not initialized */
          (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_INIT_SID, FLS_E_UNINIT);
          #endif
        }
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)*/
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
        if (FLS_TRUE == LblDFAccessFlag)
        #elif (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
        if (FLS_TRUE == LblCFAccessFlag)
        #else
        if ((FLS_TRUE == LblCFAccessFlag) && (FLS_TRUE == LblDFAccessFlag))
        #endif
        {
          /* Set the driver status to idle */
          Fls_GVar.Fls_GenState = MEMIF_IDLE;
          /* set the job result as OK */
          Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
          /* Initialize the global variable general command to None */
          Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
          /*
           * Initialize the global variable requested length and current length
           * to zero.
           */
          Fls_GVar.Fls_GulRequestedLength = FLS_ZERO;
          Fls_GVar.Fls_GulCurrentLength = FLS_ZERO;
          /*
           * Initialize the global variable command initiated and process
           * continue to False.
           */
          Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
          Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
          /*
           * Initialize the global variable flash access type to data flash
           * access.
           */
          Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
          #if (FLS_FHVE_REGS == SUPPORTED)
          /* Initialize the global variable flash enable to False */
          Fls_GVar.Fls_GblFlashEnable = FLS_FALSE;
          #endif
          #if (FLS_DEV_ERROR_DETECT == STD_ON)
          #if (FLS_TIMEOUT_MONITORING == STD_ON)
          /* Initialize the global variable Time out monitor to False */
          Fls_GVar.Fls_GblTimeOutMonitor = FLS_FALSE;
          #endif
          /*
           * Set the driver initialization status as completed.
           * This initialization is required only when DET is enabled.
           */
          Fls_GblInitStatus = FLS_INITIALIZED;
          #endif
        }
        else
        {
          /* No action required */
        }
      }
    }
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* Report Error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                   FLS_INIT_SID, FLS_E_INVALID_DATABASE);
    }
    #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  }
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
} /* End of API Fls_Init */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_Erase
**
** Service ID            : 0x01
**
** Description           : This API will erase the one or more complete flash
**                         sectors.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : TargetAddress, Length
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Std_ReturnType
**                         E_OK: If Erase command has been accepted.
**                         E_NOT_OK: If Erase command has not been accepted.
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GenState,
**                         Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_EraseStartAddress,
**                         Fls_GVar.Fls_EraseEndAddress,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_AccessType, Fls_GVar.Fls_GblFlashEnable,
**                         Fls_GVar.Fls_GblProcessContinue
**
** Function(s) invoked   : Det_ReportError, R_FDL_Execute, Fls_SetFHVE,
**                         FLS_ENTER_CRITICAL_SECTION,
**                         FLS_EXIT_CRITICAL_SECTION, Fls_CFProcessEraseCommand
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Erase
(Fls_AddressType TargetAddress, Fls_LengthType Length)
{
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Pointer to the FDL command Structure */
  P2VAR(r_fdl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFdlReqCmd;
  /* Local variable to hold start block and Total number of blocks */
  uint32 LulStartBlock;
  uint32 LulTotalBlocks;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /*
   * Local variables to hold the base address, block size and total size
   * of flash.
   */
  uint32 LulFlsBaseAddress;
  uint32 LulFlsTotalSize;
  #endif
  uint32 LulFlsBlockSize;
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET if the component is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                FLS_ERASE_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  #endif /* (FLS_DEV_ERROR_DETECT == STD_ON) */
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  /* Check if the driver state is not Idle */
  if (MEMIF_IDLE != Fls_GVar.Fls_GenState)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Check if the driver is busy by servicing another request */
    if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
    {
      /* Report to DET if the driver is currently busy */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_ERASE_SID, FLS_E_BUSY);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  #if (FLS_DEV_ERROR_DETECT == STD_OFF)
  else if (FLS_ZERO == Length)
  {
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  #endif /* FLS_DEV_ERROR_DETECT == STD_OFF */
  else
  {
    #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
    /* Virtual address is mapped to physical address */
    TargetAddress = TargetAddress - FLS_CF_OFFSET_VALUE;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Code Flash base address,
     * Code Flash Total size and Code Flash Block Size.
     */
    LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
    LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
    #endif
    if (TargetAddress < FLS_CF_NORMALBLOCK_BASE_ADDRESS)
    {
      LulFlsBlockSize = FLS_CF_SMALLBLOCK_SIZE;
    }
    else
    {
      LulFlsBlockSize = FLS_CF_NORMALBLOCK_SIZE;
    }
    /* Set the global variable which indicates code flash access */
    Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    #elif (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Data Flash base address,
     * Data Flash Total size and Data Flash Block Size.
     */
    LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
    LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
    #endif
    LulFlsBlockSize = FLS_DF_BLOCK_SIZE;
    /* Virtual address is mapped to physical address */
    TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;
    /* Set the global variable which indicates data flash access */
    Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    #else
    if (FLS_CF_OFFSET_VALUE > TargetAddress)
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with data flash base address,
       * data flash total size and data flash block size.
       */
      LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
      LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
      #endif
      LulFlsBlockSize = FLS_DF_BLOCK_SIZE;
      /* Virtual address is mapped to physical address */
      TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;
      /* Set the global variable which indicates data flash access */
      Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    }
    else
    {
      /* Virtual address is mapped to physical address */
      TargetAddress = TargetAddress - FLS_CF_OFFSET_VALUE;
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with code flash base address,
       * code flash total size and code flash block size.
       */
      LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
      LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
      #endif
      if (FLS_CF_NORMALBLOCK_BASE_ADDRESS > TargetAddress)
      {
        LulFlsBlockSize = FLS_CF_SMALLBLOCK_SIZE;
      }
      else
      {
        LulFlsBlockSize = FLS_CF_NORMALBLOCK_SIZE;
      }
      /* Set the global variable which indicates code flash access */
      Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    }
    #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) */
    /* Calculate the erase start and end addresses */
    Fls_GVar.Fls_EraseStartAddress = TargetAddress;
    Fls_GVar.Fls_EraseEndAddress = (TargetAddress + Length) - FLS_ONE;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Set the default value */
    LenReturnValue = E_OK;
    /* MISRA Violation: START Msg(4:2985)-11 */
    /* MISRA Violation: START Msg(4:2984)-2 */
    /* MISRA Violation: START Msg(4:2996)-6 */
    /* Check if the erase start address is aligned to a flash sector boundary,
     * and that is lies between specified flash upper and lower boundaries.
     */
    if ((FLS_ZERO !=
       (Fls_GVar.Fls_EraseStartAddress & (LulFlsBlockSize - FLS_ONE))) ||
       (Fls_GVar.Fls_EraseStartAddress < LulFlsBaseAddress) ||
           ((Fls_GVar.Fls_EraseStartAddress - LulFlsBaseAddress) >
           (LulFlsTotalSize - FLS_ONE)))
    /* END Msg(4:2996)-6 */
    /* END Msg(4:2984)-2 */
    /* END Msg(4:2985)-11 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                        FLS_ERASE_SID, FLS_E_PARAM_ADDRESS);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
    if (FLS_CF_ACCESS == Fls_GVar.Fls_AccessType)
    {
      if (FLS_CF_NORMALBLOCK_BASE_ADDRESS > Fls_GVar.Fls_EraseEndAddress)
      {
        LulFlsBlockSize = FLS_CF_SMALLBLOCK_SIZE;
      }
      else
      {
        LulFlsBlockSize = FLS_CF_NORMALBLOCK_SIZE;
      }
    }
    else
    {
      /* No action required */
    }
    #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    /* MISRA Violation: START Msg(4:2985)-11 */
    /* MISRA Violation: START Msg(4:2984)-2 */
    /* Check if the erase length is greater than 0 and the erase end address
     * (erase start address + length) is aligned to a flash sector boundary
     * and that it lies within the specified upper flash address boundary.
     */
    if ((FLS_ZERO == Length) || ((Fls_GVar.Fls_EraseEndAddress &
          (LulFlsBlockSize - FLS_ONE)) != (LulFlsBlockSize - FLS_ONE)) ||
          ((Fls_GVar.Fls_EraseEndAddress - LulFlsBaseAddress)
          > LulFlsTotalSize))
    /* END Msg(4:2984)-2 */
    /* END Msg(4:2985)-11 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_ERASE_SID, FLS_E_PARAM_LENGTH);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether any error is reported to DET */
    if (E_OK == LenReturnValue)
    #endif  /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
    {
      #if (FLS_DEV_ERROR_DETECT == STD_OFF)
      /* MISRA Violation: START Msg(4:2984)-2 */
      if (FLS_ZERO != (Length & (LulFlsBlockSize - FLS_ONE)))
      /* END Msg(4:2984)-2 */
      {
        /* MISRA Violation: START Msg(4:2984)-2 */
        Length = (Length + (LulFlsBlockSize - FLS_ONE)) &
                                (~(LulFlsBlockSize - FLS_ONE));
        /* END Msg(4:2984)-2 */
        Fls_GVar.Fls_EraseEndAddress = (TargetAddress + Length) - FLS_ONE;
      }
      else
      {
        /* No action required */
      }
      #endif  /* End of #if (FLS_DEV_ERROR_DETECT == STD_OFF) */
      /* MISRA Violation: START Msg(4:2991)-3 */
      /* MISRA Violation: START Msg(4:2995)-4 */
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        /* END Msg(4:2995)-4 */
        /* END Msg(4:2991)-3 */
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        /* Compute the start block number to be erased */
        LulStartBlock = ((TargetAddress - FLS_DF_BASE_ADDRESS)
                                                   / FLS_DF_BLOCK_SIZE);
        /* Compute the Total block numbers to be erased */
        LulTotalBlocks = (Length / FLS_DF_BLOCK_SIZE);
        #if (FLS_INTERRUPT_MODE == STD_ON)
        /* Enable interrupt processing */
        RH850_SV_MODE_IMR_AND(16, (Fls_GpConfigPtr->pFlEndImrAddress),
                                   (Fls_GpConfigPtr->usFlEndImrMask));
        #endif
        /* Prepare the Structure by assigning the variables */
        LpFdlReqCmd = &Fls_GstVar.GstfdlRequest;
        LpFdlReqCmd->command_enu = R_FDL_CMD_ERASE;
        LpFdlReqCmd->idx_u32 = LulStartBlock;
        LpFdlReqCmd->cnt_u16 = (uint16)LulTotalBlocks;
        LpFdlReqCmd->accessType_enu = R_FDL_ACCESS_USER;
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
        /* Invoking the Library R_FDL_Execute API */
        R_FDL_Execute (LpFdlReqCmd);
        /* Set the global variable with length */
        Fls_GVar.Fls_GulCurrentLength = Length;
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        Fls_CFProcessEraseCommand();
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      /*
       * Initialize global variable command initiated and process continue to
       * False.
       */
      Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
      Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
      /* Set the job result to Job pending */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_PENDING;
      /* Set the driver state as Busy */
      Fls_GVar.Fls_GenState = MEMIF_BUSY;
      /* Set the command as Erase command */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_ERASE;
    } /* End of  if (LenReturnValue == E_OK) */
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif  /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  }
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  return(LenReturnValue);
} /* End of API Fls_Erase */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name         : Fls_Write
**
** Service ID            : 0x02
**
** Description           : This API performs programming of one or more complete
**                         flash pages of the flash device. The data from input
**                         buffer (source address) is written to the flash
**                         pointed by the target offset. The target address must
**                         be aligned to flash page boundary.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : TargetAddress, SourceAddressPtr, Length
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Std_ReturnType
**                         E_OK: if Write command has been accepted.
**                         E_NOT_OK: if Write command has not been accepted.
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_GenState,
**                         Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GulSrcDestAddress,
**                         Fls_GVar.pBufferAddress,
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_AccessType, Fls_GVar.Fls_GblFlashEnable
**
** Function(s) invoked   : Det_ReportError, R_FDL_Execute, Fls_SetFHVE,
**                         FLS_ENTER_CRITICAL_SECTION,
**                         FLS_EXIT_CRITICAL_SECTION, Fls_CFProcessWriteCommand
**
** Registers Used        : None
*******************************************************************************/

#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Write
(Fls_AddressType TargetAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) SourceAddressPtr,
Fls_LengthType Length)
{
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Pointer to the FDL command Structure */
  P2VAR(r_fdl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFdlReqCmd;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Local variables to hold the base address and size of flash */
  uint32 LulFlsBaseAddress;
  uint32 LulFlsTotalSize;
  #endif
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_WRITE_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  /* Check if the driver state is not Idle */
  if (MEMIF_IDLE != Fls_GVar.Fls_GenState)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Check if the driver is busy by servicing another request */
    if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
    {
      /* Report to DET if the driver is currently busy */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_WRITE_SID, FLS_E_BUSY);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  }
  #if (FLS_DEV_ERROR_DETECT == STD_OFF)
  else if (FLS_ZERO == Length)
  {
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_OFF) */
  else
  {
    #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Code Flash base address and
     * Code Flash Total size.
     */
    LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
    LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
    #endif
    /* Virtual address is mapped to physical address */
    TargetAddress = TargetAddress - FLS_CF_OFFSET_VALUE;
    /* Set the global variable which indicates code flash access */
    Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    #elif (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Data Flash base address and
     * Data Flash Total size.
     */
    LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
    LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
    #endif
    /* Virtual address is mapped to physical address */
    TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;
    /* Set the global variable which indicates data flash access */
    Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    #else
    if (FLS_CF_OFFSET_VALUE > TargetAddress)
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with data flash base address,
       * data flash total size and data flash block size.
       */
      LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
      LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
      #endif
      /* Virtual address is mapped to physical address */
      TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;
      /* Set the global variable which indicates data flash access */
      Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    }
    else
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with code flash base address,
       * code flash total size and code flash block size.
       */
      LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
      LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
      #endif
      /* Virtual address is mapped to physical address */
      TargetAddress = TargetAddress - FLS_CF_OFFSET_VALUE;
      /* Set the global variable which indicates code flash access */
      Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    }
    #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) */
    /* Get the write start address */
    Fls_GVar.Fls_GulSrcDestAddress = TargetAddress;
    /* Set the global variables with length */
    Fls_GVar.Fls_GulRequestedLength = Length;
    Fls_GVar.Fls_GulCurrentLength = Length;
    /* Set the global variable with application buffer pointer */
    Fls_GVar.pBufferAddress = SourceAddressPtr;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    LenReturnValue = E_OK;
    /* MISRA Violation: START Msg(4:2985)-11 */
    /* MISRA Violation: START Msg(4:2984)-2 */
    /* MISRA Violation: START Msg(4:2996)-6 */
    /* Check if the write start address is aligned to a flash page boundary
     * and lies within the specified lower and upper flash address boundaries.
     */
    if ((FLS_ZERO != (TargetAddress & (FLS_PAGE_SIZE - FLS_ONE))) ||
         (TargetAddress < LulFlsBaseAddress) ||
         ((TargetAddress - LulFlsBaseAddress) > (LulFlsTotalSize - FLS_ONE)))
    /* END Msg(4:2996)-6 */
    /* END Msg(4:2984)-2 */
    /* END Msg(4:2985)-11 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                         FLS_WRITE_SID, FLS_E_PARAM_ADDRESS);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
    {
      /* MISRA Violation: START Msg(4:2985)-11 */
      if ((Length == FLS_ZERO) || (((TargetAddress + Length)
           & (FLS_PAGE_SIZE - FLS_ONE)) != FLS_ZERO) ||
             (((TargetAddress - LulFlsBaseAddress) + Length) > LulFlsTotalSize))
      /* END Msg(4:2985)-11 */
      {
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                         FLS_WRITE_SID, FLS_E_PARAM_LENGTH);
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)

      /* MISRA Violation: START Msg(4:2985)-11 */
      /* MISRA Violation: START Msg(4:1840)-12 */
      /*
       * Check if the write length is not zero, write end address is aligned to
       * the flash page boundary and not greater than the flash total size.
       */
      if ((FLS_ZERO == Length) || (((TargetAddress + Length)
           & (FLS_PAGE_SIZE - FLS_ONE)) != FLS_ZERO) ||
         (((TargetAddress - LulFlsBaseAddress) + Length) > LulFlsTotalSize) ||
         (((TargetAddress + Length) & (R_FLI_MIN_WRITESIZE - FLS_ONE))
           != FLS_ZERO))
      /* END Msg(4:1840)-12 */
      /* END Msg(4:2985)-11 */
      {
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_WRITE_SID, FLS_E_PARAM_LENGTH);
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    }
    /* Check whether the application buffer is a null pointer */
    if (NULL_PTR == SourceAddressPtr)
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_WRITE_SID, FLS_E_PARAM_DATA);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether any error is reported to DET */
    if (E_OK == LenReturnValue)
    #endif  /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
    {
      /* MISRA Violation: START Msg(4:2991)-3 */
      /* MISRA Violation: START Msg(4:2995)-4 */
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        /* END Msg(4:2995)-4 */
        /* END Msg(4:2991)-3 */
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        #if (FLS_INTERRUPT_MODE == STD_ON)
        /* Enable interrupt processing */
        RH850_SV_MODE_IMR_AND(16, (Fls_GpConfigPtr->pFlEndImrAddress),
                                   (Fls_GpConfigPtr->usFlEndImrMask));
        #endif
        if (R_FDL_SUSPENDED == Fls_GstVar.GstfdlRequest.status_enu)
        {
          /* Prepare the Structure by assigning the variables */
          LpFdlReqCmd = &Fls_GstVar.GstfdlNewRequest;
        }
        else
        {
          /* Prepare the Structure by assigning the variables */
          LpFdlReqCmd = &Fls_GstVar.GstfdlRequest;
        }
        LpFdlReqCmd->command_enu = R_FDL_CMD_WRITE;
        /* MISRA Violation: START Msg(4:0306)-8 */
        LpFdlReqCmd->bufAddr_u32 = (uint32)SourceAddressPtr;
        /* END Msg(4:0306)-8 */
        LpFdlReqCmd->idx_u32 = (TargetAddress - FLS_DF_BASE_ADDRESS);
        LpFdlReqCmd->cnt_u16 = (uint16)(Length / FLS_FOUR);
        LpFdlReqCmd->accessType_enu = R_FDL_ACCESS_USER;
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
        /* Invoking the Library R_FDL_Execute API */
        R_FDL_Execute (LpFdlReqCmd);
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        Fls_CFProcessWriteCommand();
        #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      /* Initialize the global variable with command is not initiated */
      Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
      /* Set the job result to Job pending */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_PENDING;
      /* Set the driver state as Busy */
      Fls_GVar.Fls_GenState = MEMIF_BUSY;
      /* Set the command as write command */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_WRITE;
    } /* End of  if (LenReturnValue == E_OK) */
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  return(LenReturnValue);
} /* End of API Fls_Write */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#if (FLS_CANCEL_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_Cancel
**
** Service ID            : 0x03
**
** Description           : This API cancels the on going job. The driver state
**                         is set to MEMIF_IDLE and the job result to
**                         MEMIF_JOB_CANCELED if a job is currently
**                         being processed.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_AccessType,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GenCommand,
**                         Fls_GVar.Fls_GenJobResult, Fls_GulTimeout,
**                         Fls_GVar.Fls_GenState, Fls_GpConfigPtr,
**                         Fls_GstVar.GstfdlRequest.status_enu,
**                         Fls_GstVar.GstfclRequest.status_enu
**
** Function(s) invoked   : Det_ReportError, R_FDL_CancelRequest, R_FDL_Handler,
**                         Fls_GpConfigPtr->pJobErrorNotificationPointer,
**                         Fls_SetFLMD0, Fls_SetFHVE, R_FCL_Handler,
**                         R_FCL_CancelRequest, FLS_ENTER_CRITICAL_SECTION,
**                         FLS_EXIT_CRITICAL_SECTION
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
FUNC(void, FLS_PUBLIC_CODE)Fls_Cancel(void)
{
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Local variable to hold the FDL status */
  volatile r_fdl_status_t LenFDLStatus;
  #endif

  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Local variable to hold the FCL status */
  volatile r_fcl_status_t LenFCLStatus;
 #endif

  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenReturnValue;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Set the default DET return value */
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                 FLS_CANCEL_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  {
    /* Enter Critical Section */
    /* MISRA Violation: START Msg(4:3138)-15 */
    #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
    FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
    #endif
    /*END Msg(4:3138)-15 */
    #if (FLS_INTERRUPT_MODE == STD_ON)
    #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
    Fls_GulTimeout = FLS_ISR_TIMEOUT_VALUE;
    /* Check whether ISR is locked the flag */
    while ((Fls_GVar.Fls_MutexFlag == FLS_ONE) && (Fls_GulTimeout > FLS_ZERO))
    #else
    /* Check whether ISR is locked the flag */
    /* MISRA Violation: START Msg(5:2872)-16 */
    while (Fls_GVar.Fls_MutexFlag == FLS_ONE)
    #endif
    {
      #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                        (FLS_TIMEOUT_MONITORING == STD_ON))
      Fls_GulTimeout--;
      #endif
    }
    /*END Msg(5:2872)-16 */
    #endif
    /* Cancel Job only if the job is on going */
    if (MEMIF_JOB_PENDING == Fls_GVar.Fls_GenJobResult)
    {
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        #if (FLS_INTERRUPT_MODE == STD_ON)
        /* MISRA Violation: START Msg(4:4397)-1 */
        /* Disable interrupt processing */
        RH850_SV_MODE_IMR_OR(16, (Fls_GpConfigPtr->pFlEndImrAddress),
                                   ~(Fls_GpConfigPtr->usFlEndImrMask));
        /* END Msg(4:4397)-1 */
        #endif
        switch (Fls_GVar.Fls_GenCommand)
        {
          case FLS_COMMAND_ERASE:
          case FLS_COMMAND_WRITE:
          case FLS_COMMAND_BLANKCHECK:
               LenFDLStatus = R_FDL_CancelRequest();
               if (R_FDL_OK == LenFDLStatus)
               {
                 #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                        (FLS_TIMEOUT_MONITORING == STD_ON))
                 /* Time out value for Cancel Operation */
                 Fls_GulTimeout = Fls_GpConfigPtr->ulFlsDFCancelTimeoutValue;
                 #endif
                 do
                 {
                   R_FDL_Handler();
                   #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                           (FLS_TIMEOUT_MONITORING == STD_ON))
                   Fls_GulTimeout--;
                   #endif
                 }
                 #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                           (FLS_TIMEOUT_MONITORING == STD_ON))
                 while ((R_FDL_CANCELLED != Fls_GstVar.GstfdlRequest.status_enu)
                                            && (Fls_GulTimeout > FLS_ZERO));
                 #else
                 while (R_FDL_CANCELLED != Fls_GstVar.GstfdlRequest.status_enu);
                 #endif
                 #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                        (FLS_TIMEOUT_MONITORING == STD_ON))
                 if (FLS_ZERO == Fls_GulTimeout)
                 {
                   /* Report error to DET */
                   (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_CANCEL_SID, FLS_E_TIMEOUT);
                 }
                 else
                 {
                   /* No action required */
                 }
                 #endif
                 if (Fls_GstVar.GstfdlRequest.status_enu == R_FDL_CANCELLED)
                 {
                   /* Reset internal job processing variables */
                   Fls_GVar.Fls_GenJobResult = MEMIF_JOB_CANCELED;
                   Fls_GVar.Fls_GenState = MEMIF_IDLE;
                   Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;

                   Fls_GstVar.GucDFStatus= R_FDL_CANCELLED;
                   /* Reset command initiated flag */
                   Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
                   #if (FLS_JOB_NOTIF_CONFIG == STD_ON)
                   /* If job ended with error and call the JOB end call
                                              back function */
                   Fls_GpConfigPtr->pJobErrorNotificationPointer();
                   #endif
                 }
                 else
                 {
                   /* No Action */
                 }
               }
               else
               {
                 /* No action required */
               }
          break;
          case FLS_COMMAND_READ:
          case FLS_COMMAND_COMPARE:
          case FLS_COMMAND_READ_IMM:
               /* Reset internal job processing variables */
               Fls_GVar.Fls_GenJobResult = MEMIF_JOB_CANCELED;
               Fls_GVar.Fls_GenState = MEMIF_IDLE;
               Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;

               Fls_GstVar.GucDFStatus= R_FDL_CANCELLED;
               /* Reset command initiated flag */
               Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
               #if (FLS_JOB_NOTIF_CONFIG == STD_ON)
               /* If job ended with error and call the JOB end call
                                         back function */
               Fls_GpConfigPtr->pJobErrorNotificationPointer();
               #endif
          break;
          default:
               /* No action required */
          break;
        }
        #endif /* #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      }
      else
      {
        #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
        switch (Fls_GVar.Fls_GenCommand)
        {
          case FLS_COMMAND_ERASE:
          case FLS_COMMAND_WRITE:
          LenFCLStatus = R_FCL_CancelRequest();
          if (R_FCL_OK == LenFCLStatus)
          {
            #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                  (FLS_TIMEOUT_MONITORING == STD_ON))
              /* Time out value for Cancel Operation */
              Fls_GulTimeout = Fls_GpConfigPtr->ulFlsCFCancelTimeoutValue;
              #endif
              do
              {
                R_FCL_Handler();
                #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                         (FLS_TIMEOUT_MONITORING == STD_ON))
                Fls_GulTimeout--;
                #endif
              }
              #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                      (FLS_TIMEOUT_MONITORING == STD_ON))
              while ((R_FCL_CANCELLED != Fls_GstVar.GstfclRequest.status_enu)
                                        && (Fls_GulTimeout > FLS_ZERO));
              #else
              while (R_FCL_CANCELLED != Fls_GstVar.GstfclRequest.status_enu);
              #endif
              #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                        (FLS_TIMEOUT_MONITORING == STD_ON))
               if (FLS_ZERO == Fls_GulTimeout)
               {
                 /* Report error to DET */
                 (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                       FLS_CANCEL_SID, FLS_E_TIMEOUT);
               }
               else
               {
                 /* No action required */
               }
               #endif
               if (Fls_GstVar.GstfclRequest.status_enu == R_FCL_CANCELLED)
               {
                   /* Reset internal job processing variables */
                   Fls_GVar.Fls_GenJobResult = MEMIF_JOB_CANCELED;
                   Fls_GVar.Fls_GenState = MEMIF_IDLE;
                   Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;

                   Fls_GstVar.GucCFStatus= R_FCL_CANCELLED;
                   /* Reset command initiated flag */
                   Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
                   #if (FLS_JOB_NOTIF_CONFIG == STD_ON)
                   /* If job ended with error and call the JOB end call
                                              back function */
                   Fls_GpConfigPtr->pJobErrorNotificationPointer();
                   #endif
                }
                else
                {
                  /* No Action */
                }
          }
          else
          {
            /* No action required */
          }
          break;
          case FLS_COMMAND_READ:
          case FLS_COMMAND_COMPARE:
               /* Reset internal job processing variables */
               Fls_GVar.Fls_GenJobResult = MEMIF_JOB_CANCELED;
               Fls_GVar.Fls_GenState = MEMIF_IDLE;
               Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;

               Fls_GstVar.GucCFStatus= R_FCL_CANCELLED;
               /* Reset command initiated flag */
               Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
               #if (FLS_JOB_NOTIF_CONFIG == STD_ON)
               /* If job ended with error and call the JOB end call
                                         back function */
               Fls_GpConfigPtr->pJobErrorNotificationPointer();
               #endif
          break;
          default:
               /* No action required */
          break;
        }
        #endif /* #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

      }
    }
    else
    {
      /* No action required */
    }
    /* Exit Critical Section */
    /* MISRA Violation: START Msg(4:3138)-15 */
    #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
    FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
    #endif
    /*END Msg(4:3138)-15 */
  }
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
} /* End of API Fls_Cancel */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_CANCEL_API == STD_ON) */

#if (FLS_GET_STATUS_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_GetStatus
**
** Service ID            : 0x04
**
** Description           : This API Returns the FLS module state synchronously.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : MemIf_StatusType
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GenState
**
** Function(s) invoked   : Det_ReportError
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(MemIf_StatusType, FLS_PUBLIC_CODE)Fls_GetStatus(void)
{
  /* Local variable to hold the driver status */
  MemIf_StatusType LenStatus;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Set local variable with the default return value */
  LenStatus = MEMIF_UNINIT;
  /* Set local variable with the default DET return value */
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_GET_STATUS_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (LenReturnValue == E_OK)
  #endif  /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  {
    /* Read the current state of the driver */
    LenStatus = Fls_GVar.Fls_GenState;
  }
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  /* return the current state of the driver */
  return(LenStatus);
} /* End of API Fls_GetStatus */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* #if (FLS_GET_STATUS_API == STD_ON) */

#if (FLS_GET_JOB_RESULT_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_GetJobResult
**
** Service ID            : 0x05
**
** Description           : This API returns the result of the last job.
**                         All erase, write, read and compare jobs share the
**                         same job result. Every new job accepted by the flash
**                         driver  overwrites the job result with
**                         MEMIF_JOB_PENDING.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : MemIf_JobResultType
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GenJobResult
**
** Function(s) invoked   : Det_ReportError
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(MemIf_JobResultType, FLS_PUBLIC_CODE)Fls_GetJobResult(void)
{
  /* Local variable to hold the job result */
  MemIf_JobResultType LenJobResult;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Set local variable with the default value */
  LenJobResult = MEMIF_JOB_FAILED;
  /* Set the default DET return value */
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                         FLS_GET_JOB_RESULT_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  {
    /* Read the job status */
    LenJobResult = Fls_GVar.Fls_GenJobResult;
  }
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  /* Return the job result */
  return(LenJobResult);
} /* End of API Fls_GetJobResult */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_GET_JOB_RESULT_API == STD_ON)*/

/*******************************************************************************
** Function Name         : Fls_MainFunction
**
** Service ID            : 0x06
**
** Description           : This API performs the job processing of erase, write,
**                         read and compare jobs. This API is called cyclically
**                         until the job is processed completely.
**
** Sync/Async            : NA
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GulTimeout,
**                         Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_AccessType,
**                         Fls_GVar.Fls_GenJobResult, Fls_GVar.Fls_GenState,
**                         Fls_GstVar.GucCFStatus, Fls_GstVar.GucDFStatus,
**                         Fls_GVar.Fls_EraseStartAddress,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GstVar.GstfdlRequest.status_enu,
**                         Fls_GVar.Fls_GblTimeOutMonitor,
**                         Fls_GVar.Fls_GblProcessContinue,
**                         Fls_GstVar.GstfdlNewRequest.status_enu
**
** Function(s) invoked   : Det_ReportError, Fls_DFProcessReadImmCommand,
**                         Fls_CFProcessEraseCommand, Fls_CFProcessWriteCommand,
**                         Fls_DFProcessReadCommand, Fls_CFProcessReadCommand,
**                         Fls_DFProcessCompareCommand,
**                         Fls_CFProcessCompareCommand,
**                         Fls_EndJobProcess, Fls_GpRFclHandler,
**                         Fls_GpConfigPtr->pJobErrorNotificationPointer
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_SCHEDULER_CODE
#include "MemMap.h"

FUNC(void, FLS_PUBLIC_CODE)Fls_MainFunction(void)
{
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  #if ((FLS_BLANKCHECK_API == STD_ON) || ((FLS_DEV_ERROR_DETECT == STD_ON) \
                                 && (FLS_BLANK_CHECK == FDL_SUPPORTED)))
  /* Pointer to the FDL command Structure */
  P2VAR(r_fdl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFdlReqCmd;
  #endif
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #endif  /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Set the default value */
  Fls_GstVar.GucCFStatus = R_FCL_ERR_REJECTED;
  #endif
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Set the default value */
  Fls_GstVar.GucDFStatus = R_FDL_ERR_REJECTED;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_MAINFUNCTION_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  if (E_OK == LenReturnValue)
  #endif  /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  {
    /* Check if any job is being processed */
    if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
    {
      /* Check if the current job is erase */
      if (FLS_COMMAND_ERASE == Fls_GVar.Fls_GenCommand)
      {
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
          #if (FLS_INTERRUPT_MODE == STD_OFF)
          /* Initiate Erase job by invoking handler API */
          R_FDL_Handler();
          Fls_GstVar.GucDFStatus = Fls_GstVar.GstfdlRequest.status_enu;
          #endif
          #endif
        }
        else
        {
          #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
          /* Process the erase job for Code Flash */
          Fls_GpRFclHandler();
          Fls_GstVar.GucCFStatus = Fls_GstVar.GstfclRequest.status_enu;
          #endif
        }
      }
      /* Check if the current job is write */
      else if (FLS_COMMAND_WRITE == Fls_GVar.Fls_GenCommand)
      {
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
          #if (FLS_INTERRUPT_MODE == STD_OFF)
          /* Initiate Write job by invoking handler API */
          R_FDL_Handler();
          if (R_FDL_SUSPENDED == Fls_GstVar.GstfdlRequest.status_enu)
          {
            /* Get the FDL status */
            Fls_GstVar.GucDFStatus = Fls_GstVar.GstfdlNewRequest.status_enu;
          }
          else
          {
            /* Get the FDL status */
            Fls_GstVar.GucDFStatus = Fls_GstVar.GstfdlRequest.status_enu;
          }
          #endif
          #endif
        }
        else
        {
          #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
          /* Process the erase job for Code Flash */
          Fls_GpRFclHandler();
          Fls_GstVar.GucCFStatus = Fls_GstVar.GstfclRequest.status_enu;
          #endif
        }
      }
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      /* Check if the current job is Blank check */
      else if (FLS_COMMAND_BLANKCHECK == Fls_GVar.Fls_GenCommand)
      {
        #if ((FLS_BLANKCHECK_API == STD_ON) || \
        ((FLS_DEV_ERROR_DETECT == STD_ON) \
        && (FLS_BLANK_CHECK == FDL_SUPPORTED)))
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          if (FLS_TRUE == Fls_GVar.Fls_GblProcessContinue)
          {
            /* Prepare the Structure by assigning the variables */
            LpFdlReqCmd = &Fls_GstVar.GstfdlRequest;
            LpFdlReqCmd->command_enu = R_FDL_CMD_BLANKCHECK;
            LpFdlReqCmd->idx_u32 = Fls_GVar.Fls_EraseStartAddress -
                                                      FLS_DF_BASE_ADDRESS;
            LpFdlReqCmd->cnt_u16 = (uint16)(Fls_GVar.Fls_GulCurrentLength
                                                                 / FLS_FOUR);
            LpFdlReqCmd->accessType_enu = R_FDL_ACCESS_USER;
            /* Invoking the Library R_FDL_Execute API */
            R_FDL_Execute (LpFdlReqCmd);
            /* Set the global variable process continue to False */
            Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
          }
          else
          {
            /* No action required */
          }
          /* Initiate blank check job by invoking handler API */
          R_FDL_Handler();
          Fls_GstVar.GucDFStatus = Fls_GstVar.GstfdlRequest.status_enu;
        }
        else
        {
          /* No action required */
        }
        #endif
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      /* Check if the current job is read */
      else if (FLS_COMMAND_READ == Fls_GVar.Fls_GenCommand)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
        /* Process the read job for Data Flash */
        Fls_GstVar.GucDFStatus = Fls_DFProcessReadCommand();
        #elif (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
        /* Process the read job for Code Flash */
        Fls_GstVar.GucCFStatus = Fls_CFProcessReadCommand();
        #else
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          /* Process the read job for Data Flash */
          Fls_GstVar.GucDFStatus = Fls_DFProcessReadCommand();
        }
        else
        {
          /* Process the read job for Code Flash */
          Fls_GstVar.GucCFStatus = Fls_CFProcessReadCommand();
        }
        #endif
      }
      #if (FLS_COMPARE_API == STD_ON)
      /* Check if the current job is compare */
      else if (FLS_COMMAND_COMPARE == Fls_GVar.Fls_GenCommand)
      {
        #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
        /* Process the compare job for Data Flash */
        Fls_GstVar.GucDFStatus = Fls_DFProcessCompareCommand();
        #elif (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
        /* Process the compare job for Code Flash */
        Fls_GstVar.GucCFStatus = Fls_CFProcessCompareCommand();
        #else
        if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
        {
          /* Process the compare job for Data Flash */
          Fls_GstVar.GucDFStatus = Fls_DFProcessCompareCommand();
        }
        else
        {
          /* Process the compare job for Code Flash */
          Fls_GstVar.GucCFStatus = Fls_CFProcessCompareCommand();
        }
        #endif
      }
      #endif /* End of #if (FLS_COMPARE_API == STD_ON) */
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      #if (FLS_READIMMEDIATE_API == STD_ON)
      else if (FLS_COMMAND_READ_IMM == Fls_GVar.Fls_GenCommand)
      {
        /* Process the read job for Data Flash */
        Fls_GstVar.GucDFStatus = Fls_DFProcessReadImmCommand();
      }
      #endif /* End of #if (FLS_READIMMEDIATE_API == STD_ON) */
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                      (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      else
      {
        /* No action required */
      }
      #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                     (FLS_TIMEOUT_MONITORING == STD_ON))
      /* Check  time out value is not equal to Zero*/
      if ((FLS_ZERO == Fls_GulTimeout) &&
                                  (FLS_TRUE == Fls_GVar.Fls_GblTimeOutMonitor))
      {
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_MAINFUNCTION_SID, FLS_E_TIMEOUT);
        /* Set the JOB result as failed */
        Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
        /* Set the command to none. */
        Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
        /* Set the driver state to IDLE */
        Fls_GVar.Fls_GenState = MEMIF_IDLE;
        /* Initialize the global variable Time out monitor to False */
        Fls_GVar.Fls_GblTimeOutMonitor = FLS_FALSE;
        #if (FLS_JOB_NOTIF_CONFIG == STD_ON)
        /* Job ended with error and call the job error call back function */
        Fls_GpConfigPtr->pJobErrorNotificationPointer();
        #endif /* End of #if(FLS_JOB_NOTIF_CONFIG == STD_ON) */
      }
      else
      {
        /* No action required */
      }
      #endif /* End of #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                     (FLS_TIMEOUT_MONITORING == STD_ON)) */
    }
    else
    {
      /* No action required */
    }
    if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
    {
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                         (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      switch (Fls_GVar.Fls_GenCommand)
      {
        case FLS_COMMAND_READ:
        case FLS_COMMAND_COMPARE:
        case FLS_COMMAND_BLANKCHECK:
        case FLS_COMMAND_READ_IMM:
        #if (FLS_INTERRUPT_MODE == STD_OFF)
        case FLS_COMMAND_ERASE:
        case FLS_COMMAND_WRITE:
        #endif
             /* End Job if the command requested is serviced */
             if ((R_FDL_BUSY != Fls_GstVar.GucDFStatus) &&
                                (MEMIF_IDLE != Fls_GVar.Fls_GenState))
             {
               /* Return value could be FDL_OK or FDL Error */
               Fls_EndJobProcess();
             }
             else
             {
               /* No action required */
             }
        break;
        #if (FLS_INTERRUPT_MODE == STD_ON)
        case FLS_COMMAND_ERASE:
        case FLS_COMMAND_WRITE:
        #endif
        case FLS_COMMAND_NONE:
        default:
              /* No action required */
        break;
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                 (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    }
    else
    {
      #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      /* End Job if the command requested is serviced */
      if ((R_FCL_BUSY != Fls_GstVar.GucCFStatus) &&
                                        (MEMIF_IDLE != Fls_GVar.Fls_GenState))
      {
        /* Return value could be FCL_OK or FCL Error */
        Fls_EndJobProcess();
      }
      else
      {
        /* No action required */
      }
      #endif /* End of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) ||
                                 (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
    }
  }
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
} /* End of API Fls_MainFunction */

#define FLS_STOP_SEC_SCHEDULER_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name         : Fls_Read
**
** Service ID            : 0x07
**
** Description           : This API performs the reading of the flash memory.
**                         The data from flash memory (source address) is read
**                         to the data buffer (Target address) of the
**                         application.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : SourceAddress, Length
**
** InOut Parameters      : None
**
** Output Parameters     : TargetAddressPtr
**
** Return parameter      : Std_ReturnType
**                         E_OK: if Read command has been accepted.
**                         E_NOT_OK: if Read command has not been accepted.
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.pTempBufferAddress,
**                         Fls_GVar.Fls_GulReadAddress,
**                         Fls_GVar.pBufferAddress, Fls_GulTempBuffer
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_GenState,
**                         Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_GucOffset, Fls_GVar.Fls_AccessType
**
**  Function(s) invoked  : Det_ReportError,
**                         FLS_ENTER_CRITICAL_SECTION,
**                         FLS_EXIT_CRITICAL_SECTION
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Read
(Fls_AddressType SourceAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) TargetAddressPtr,
Fls_LengthType Length)
{
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Local variables to hold the base address and size of flash */
  uint32 LulFlsBaseAddress;
  uint32 LulFlsTotalSize;
  #endif
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_READ_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  #endif /* (FLS_DEV_ERROR_DETECT == STD_ON) */
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  /* Check if the driver state is not Idle */
  if (MEMIF_IDLE != Fls_GVar.Fls_GenState)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Check if the driver is busy by servicing another request */
    if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
    {
      /* Report to DET if the driver is currently busy */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_READ_SID, FLS_E_BUSY);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  #if (FLS_DEV_ERROR_DETECT == STD_OFF)
  else if (FLS_ZERO == Length)
  {
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  #endif /* FLS_DEV_ERROR_DETECT == STD_OFF */
  else
  {
    #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Code Flash base address and
     * Code Flash Total size.
     */
    LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
    LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
    #endif
    /* Virtual address is mapped to physical address */
    SourceAddress = SourceAddress - FLS_CF_OFFSET_VALUE;
    /* Set the global variable which indicates code flash access */
    Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    #elif (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
    /* Virtual address is mapped to physical address */
    SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Data Flash base address and
     * Data Flash Total size.
     */
    LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
    LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
    #endif
    /* Set the global variable which indicates data flash access */
    Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    #else
    if (FLS_CF_OFFSET_VALUE > SourceAddress)
    {
      /* Virtual address is mapped to physical address */
      SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with data flash base address,
       * data flash total size and data flash block size.
       */
      LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
      LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
      #endif
      /* Set the global variable which indicates data flash access */
      Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    }
    else
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with code flash base address,
       * code flash total size and code flash block size.
       */
      LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
      LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
      #endif
      /* Virtual address is mapped to physical address */
      SourceAddress = SourceAddress - FLS_CF_OFFSET_VALUE;
      /* Set the global variable which indicates code flash access */
      Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    }
    #endif /* end of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) */
    /* Local variable to hold the read start address */
    Fls_GVar.Fls_GulReadAddress = SourceAddress;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* MISRA Violation: START Msg(4:2985)-11 */
    /* MISRA Violation: START Msg(4:2984)-2 */
    /* MISRA Violation: START Msg(4:2996)-6 */
    /* Check if the read start address is lies within the specified lower and
     * upper flash address boundaries.
     */
    if ((SourceAddress < LulFlsBaseAddress) ||
          ((SourceAddress - LulFlsBaseAddress) > (LulFlsTotalSize - FLS_ONE)))
    /* END Msg(4:2996)-6 */
    /* END Msg(4:2984)-2 */
    /* END Msg(4:2985)-11 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_READ_SID, FLS_E_PARAM_ADDRESS);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check if the read length is greater than 0 and that the read end address
     * (read start address + length) lies within the specified upper flash
     * address boundary.
     */
    /* MISRA Violation: START Msg(4:2985)-11 */
    if ((FLS_ZERO == Length) ||
          (((Fls_GVar.Fls_GulReadAddress - LulFlsBaseAddress) + Length)
          > LulFlsTotalSize))
    /* END Msg(4:2985)-11 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                             FLS_READ_SID, FLS_E_PARAM_LENGTH);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether the target address pointer is a null pointer */
    if (NULL_PTR == TargetAddressPtr)
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_READ_SID, FLS_E_PARAM_DATA);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether any error is reported to DET */
    if (E_OK == LenReturnValue)
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
      /* Set the global variable with length of bytes to be processed */
      Fls_GVar.Fls_GulRequestedLength = Length;
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                         (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      /* MISRA Violation: START Msg(4:2991)-3 */
      /* MISRA Violation: START Msg(4:2995)-4 */
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        /* END Msg(4:2995)-4 */
        /* END Msg(4:2991)-3 */
        /* Get the offset value by masking the source address with page size */
        Fls_GVar.Fls_GucOffset = (uint8)(SourceAddress &
                                          (FLS_PAGE_SIZE - FLS_ONE));
        /* Check whether offset value is not zero */
        if (FLS_ZERO != Fls_GVar.Fls_GucOffset)
        {
          /*
           * Round off the source address value to the page boundary by
           * subtracting the offset value.
           */
          Fls_GVar.Fls_GulReadAddress = SourceAddress - Fls_GVar.Fls_GucOffset;
          /* Increment the length with offset value */
          Length = Length + Fls_GVar.Fls_GucOffset;
        }
        else
        {
          /* No action required */
        }
        /* Check whether length is not aligned to the page boundary */
        if (FLS_ZERO != (Length & (FLS_PAGE_SIZE - FLS_ONE)))
        {
          /* Round off the length value to the page boundary */
          Length = Length + (FLS_PAGE_SIZE -
                             (Length & (FLS_PAGE_SIZE - FLS_ONE)));
        }
        else
        {
          /* No action required */
        }
        /* MISRA Violation: START Msg(4:0310)-5 */
        Fls_GVar.pTempBufferAddress = (const uint8 *) &
                                             Fls_GulTempBuffer[FLS_ZERO];
        /* END Msg(4:0310)-5 */
      }
      else
      {
        /* No action required */
      }
      #endif /* end of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      /* Initialize the global variable with target address and length */
      Fls_GVar.pBufferAddress = TargetAddressPtr;
      /* Set the current length of bytes to be processed */
      Fls_GVar.Fls_GulCurrentLength = Length;
      /* Initiate a read job to Read */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_READ;
      /* set the driver state to busy */
      Fls_GVar.Fls_GenState = MEMIF_BUSY;
      /* set the job result as pending */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_PENDING;
      /* set the default value */
      Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
    }
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  return(LenReturnValue);
} /* End of API Fls_Read */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#if (FLS_COMPARE_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_Compare
**
** Service ID            : 0x08
**
** Description           : This API Fls_Compare shall compare the contents of an
**                         area of flash memory with that of an application
**                         data buffer.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : SourceAddress, TargetAddressPtr, Length
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Std_ReturnType
**                         E_OK: if Compare command has been accepted.
**                         E_NOT_OK: if Compare command has not been accepted.
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GenState,
**                         Fls_GVar.Fls_GulSrcDestAddress,
**                         Fls_GVar.pBufferAddress, Fls_GulTempBuffer,
**                         Fls_GVar.Fls_GulRequestedLength,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GenCommand,
**                         Fls_GVar.Fls_GenJobResult, Fls_GVar.Fls_GucOffset,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.pTempBufferAddress, Fls_GVar.Fls_AccessType
**
** Function(s) invoked   : Det_ReportError,
**                         FLS_ENTER_CRITICAL_SECTION,
**                         FLS_EXIT_CRITICAL_SECTION
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Compare
(Fls_AddressType SourceAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) TargetAddressPtr,
Fls_LengthType Length)
{
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Local variables to hold the base address and size of flash */
  uint32 LulFlsBaseAddress;
  uint32 LulFlsTotalSize;
  #endif /* (FLS_DEV_ERROR_DETECT == STD_ON) */
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_COMPARE_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  #endif /* (FLS_DEV_ERROR_DETECT == STD_ON) */
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  /* Check if the driver state is not Idle */
  if (MEMIF_IDLE != Fls_GVar.Fls_GenState)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Check if the driver is busy by servicing another request */
    if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
    {
      /* Report to DET if the driver is currently busy */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_COMPARE_SID, FLS_E_BUSY);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  #if (FLS_DEV_ERROR_DETECT == STD_OFF)
  else if (FLS_ZERO == Length)
  {
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  #endif /* FLS_DEV_ERROR_DETECT == STD_OFF */
  else
  {
    #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS)
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the local variables with code flash base address and
     * code flash total size.
     */
    LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
    LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
    #endif
    /* Virtual address is mapped to physical address */
    SourceAddress = SourceAddress - FLS_CF_OFFSET_VALUE;
    /* Set the global variable which indicates code flash access */
    Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    #elif (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS)
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the local variables with data flash base address and
     * data flash total size.
     */
    LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
    LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
    #endif /* FLS_DEV_ERROR_DETECT == STD_ON */
    /* Virtual address is mapped to physical address */
    SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
    /* Set the global variable which indicates data flash access */
    Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    #else
    if (FLS_CF_OFFSET_VALUE > SourceAddress)
    {
      /* Virtual address is mapped to physical address */
      SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with data flash base address,
       * data flash total size and data flash block size.
       */
      LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
      LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
      #endif
      /* Set the global variable which indicates data flash access */
      Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    }
    else
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /*
       * Initialize the local variables with code flash base address,
       * code flash total size and code flash block size.
       */
      LulFlsBaseAddress = FLS_CF_SMALLBLOCK_BASE_ADDRESS;
      LulFlsTotalSize = FLS_CF_TOTAL_SIZE;
      #endif
      /* Virtual address is mapped to physical address */
      SourceAddress = SourceAddress - FLS_CF_OFFSET_VALUE;
      /* Set the global variable which indicates code flash access */
      Fls_GVar.Fls_AccessType = FLS_CF_ACCESS;
    }
    #endif /* end of #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) */
    /* Initialize the global variable with the source address */
    Fls_GVar.Fls_GulSrcDestAddress = SourceAddress;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* MISRA Violation: START Msg(4:2985)-11 */
    /* MISRA Violation: START Msg(4:2984)-2 */
    /* MISRA Violation: START Msg(4:2996)-6 */
    /*
     * Check if the compare start address lies within the specified lower
     * and upper flash address boundaries.
     */
    if ((SourceAddress < LulFlsBaseAddress) ||
         ((SourceAddress - LulFlsBaseAddress) > (LulFlsTotalSize - FLS_ONE)))
    /* END Msg(4:2996)-6 */
    /* END Msg(4:2984)-2 */
    /* END Msg(4:2985)-11 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                         FLS_COMPARE_SID, FLS_E_PARAM_ADDRESS);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /*
     * Check if the compare length is greater than zero and that the
     * compare end address (compare start address + length) lies
     * within the specified upper flash address boundary.
     */
    /* MISRA Violation: START Msg(4:2985)-11 */
    if ((FLS_ZERO == Length) ||
          (((SourceAddress - LulFlsBaseAddress) + Length) > LulFlsTotalSize))
    /* END Msg(4:2985)-11 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                          FLS_COMPARE_SID, FLS_E_PARAM_LENGTH);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether the application buffer is a null pointer */
    if (NULL_PTR == TargetAddressPtr)
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_COMPARE_SID, FLS_E_PARAM_DATA);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether any error is reported to DET */
    if (E_OK == LenReturnValue)
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
      /* Set the global variable with length of bytes to be processed */
      Fls_GVar.Fls_GulRequestedLength = Length;
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                         (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      /* MISRA Violation: START Msg(4:2991)-3 */
      /* MISRA Violation: START Msg(4:2995)-4 */
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        /* END Msg(4:2995)-4 */
        /* END Msg(4:2991)-3 */
        /* Get the offset value by masking the source address with page size */
        Fls_GVar.Fls_GucOffset = (uint8)(SourceAddress &
                                          (FLS_PAGE_SIZE - FLS_ONE));
        /* Check whether offset value is not zero */
        if (FLS_ZERO != Fls_GVar.Fls_GucOffset)
        {
          /*
           * Round off the source address value to the page boundary by
           * subtracting the offset value.
           */
          Fls_GVar.Fls_GulSrcDestAddress = SourceAddress -
                                                    Fls_GVar.Fls_GucOffset;
          /* Increment the length with offset value */
          Length = Length + Fls_GVar.Fls_GucOffset;
        }
        else
        {
          /* No action required */
        }
        /* Check whether length is not aligned to the page boundary */
        if (FLS_ZERO != (Length & (FLS_PAGE_SIZE - FLS_ONE)))
        {
          /* Round off the length value to the page boundary */
          Length = Length + (FLS_PAGE_SIZE -
                             (Length & (FLS_PAGE_SIZE - FLS_ONE)));
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
      #endif /* end of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
      /* MISRA Violation: START Msg(4:0310)-5 */
      /* Initialize the global variable with temporary buffer address */
      Fls_GVar.pTempBufferAddress = (const uint8 *) &
                                             Fls_GulTempBuffer[FLS_ZERO];
      /* END Msg(4:0310)-5 */
      /*
       * Initialize the global variables with target address and length
       * of bytes to be compared.
       */
      Fls_GVar.pBufferAddress = TargetAddressPtr;
      /* Set the current length of bytes to be processed */
      Fls_GVar.Fls_GulCurrentLength = Length;
      /* Set the command as compare command */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_COMPARE;
      /* Set the driver state as busy */
      Fls_GVar.Fls_GenState = MEMIF_BUSY;
      /* Set the job result as pending */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_PENDING;
      /* Set the Global variable command initiated to default value */
      Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
    }
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  return(LenReturnValue);
} /* End of API Fls_Compare */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* #if (FLS_COMPARE_API == STD_ON) */

#if (FLS_SET_MODE_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_SetMode
**
** Service ID            : 0x09
**
** Description           : This API does not provide any functionality. The API
**                         is provided just to maintain continuity with the
**                         specification and for integration with the upper
**                         layers.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : MemIf_ModeType
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Function(s) invoked   : None
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(void, FLS_PUBLIC_CODE) Fls_SetMode (MemIf_ModeType Mode)
{
  /* This API does not provide any functionality to the user as there is no
   * support from the underlying device.
   */
}

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* #if (FLS_SET_MODE_API == STD_ON) */

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_READIMMEDIATE_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_ReadImmediate
**
** Service ID            : 0x11
**
** Description           : This API performs the reading of the flash memory.
**                         The data from flash memory (source address) is read
**                         to the data buffer (Target address) of application
**                         without performing blank check before read.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : SourceAddress, Length
**
** InOut Parameters      : None
**
** Output Parameters     : TargetAddressPtr
**
** Return parameter      : Std_ReturnType
**                         E_OK: if Read command has been accepted.
**                         E_NOT_OK: if Read command has not been accepted.
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GulReadAddress,
**                         Fls_GVar.pBufferAddress,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_GenState,
**                         Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_AccessType, Fls_GVar.Fls_ReadType
**
**  Function(s) invoked  : Det_ReportError,
**                         FLS_ENTER_CRITICAL_SECTION,
**                         FLS_EXIT_CRITICAL_SECTION
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_ReadImmediate
(Fls_AddressType SourceAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) TargetAddressPtr,
Fls_LengthType Length)
{
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Local variables to hold the base address and size of flash */
  uint32 LulFlsBaseAddress;
  uint32 LulFlsTotalSize;
  #endif
  /* Local variable to hold offset of target address when not word-aligned */
  uint8 LucOffset;
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_READ_IMM_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  #endif /* (FLS_DEV_ERROR_DETECT == STD_ON) */
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  /* Check if the driver state is not Idle */
  if (MEMIF_IDLE != Fls_GVar.Fls_GenState)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Check if the driver is busy by servicing another request */
    if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
    {
      /* Report to DET if the driver is currently busy */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_READ_IMM_SID, FLS_E_BUSY);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  else
  {
    /* Set the global variable which indicates data flash access */
    Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    /* Virtual address is mapped to physical address */
    SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Data Flash base address and
     * Data Flash Total size.
     */
    LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
    LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
    #endif
    /* Local variable to hold the read start address */
    Fls_GVar.Fls_GulReadAddress = SourceAddress;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* MISRA Violation: START Msg(4:2984)-2 */
    /* Check if the read start address is lies within the specified lower and
     * upper flash address boundaries.
     */
    if ((SourceAddress < LulFlsBaseAddress) ||
          ((SourceAddress - LulFlsBaseAddress) > (LulFlsTotalSize - FLS_ONE)))
    /* END Msg(4:2984)-2 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                        FLS_READ_IMM_SID, FLS_E_PARAM_ADDRESS);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check if the read length is greater than 0 and that the read end address
     * (read start address + length) lies within the specified upper flash
     * address boundary.
     */
    if ((FLS_ZERO == Length) ||
          (((Fls_GVar.Fls_GulReadAddress - LulFlsBaseAddress) + Length)
          > LulFlsTotalSize))
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                        FLS_READ_IMM_SID, FLS_E_PARAM_LENGTH);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether the target address pointer is a null pointer */
    if (NULL_PTR == TargetAddressPtr)
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                          FLS_READ_IMM_SID, FLS_E_PARAM_DATA);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether any error is reported to DET */
    if (E_OK == LenReturnValue)
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
      /* MISRA Violation: START Msg(4:2991)-3 */
      /* MISRA Violation: START Msg(4:2995)-4 */
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        /* END Msg(4:2995)-4 */
        /* END Msg(4:2991)-3 */
        Fls_GVar.Fls_ReadType = FLS_MISALIGNED_READ;
        /* Get the offset value by masking the source address with page size */
        Fls_GVar.Fls_GucOffset = (uint8)(SourceAddress &
                                          (FLS_PAGE_SIZE - FLS_ONE));
        /* Check whether offset value is not zero */
        if (FLS_ZERO != Fls_GVar.Fls_GucOffset)
        {
          /* Set the global variable with length of bytes to be processed */
          Fls_GVar.Fls_GulRequestedLength = Length;
          /*
           * Round off the source address value to the page boundary by
           * subtracting the offset value.
           */
          Fls_GVar.Fls_GulReadAddress = SourceAddress - Fls_GVar.Fls_GucOffset;
          /* Increment the length with offset value */
          Length = Length + Fls_GVar.Fls_GucOffset;
          /* Check whether length is not aligned to the page boundary */
          if (FLS_ZERO != (Length & (FLS_PAGE_SIZE - FLS_ONE)))
          {
            /* Round off the length value to the page boundary */
            Length = Length + (FLS_PAGE_SIZE -
                             (Length & (FLS_PAGE_SIZE - FLS_ONE)));
          }
          else
          {
            /* No action required */
          }
          /* MISRA Violation: START Msg(4:0310)-5 */
          Fls_GVar.pTempBufferAddress = (const uint8 *) &
                                             Fls_GulTempBuffer[FLS_ZERO];
          /* END Msg(4:0310)-5 */
        }
        else
        {
          /* MISRA Violation: START Msg(4:0306)-8 */
          /* Get offset value by masking the target address with page size */
          LucOffset = (uint8)((uint32)TargetAddressPtr &
                                          (FLS_PAGE_SIZE - FLS_ONE));
          /* END Msg(4:0306)-8 */
          /* Check whether offset value is not zero */
          if (FLS_ZERO == LucOffset)
          {
            Fls_GVar.Fls_ReadType = FLS_ALIGNED_READ;
          }
          else
          {
            /* StartAddress is aligned but TargetAddress is not aligned */
            /* Set the global variable with length of bytes to be processed */
            Fls_GVar.Fls_GulRequestedLength = Length;
            /* MISRA Violation: START Msg(4:0310)-5 */
            Fls_GVar.pTempBufferAddress = (const uint8 *) &
                                             Fls_GulTempBuffer[FLS_ZERO];
            /* END Msg(4:0310)-5 */
            /* Check whether length is not aligned to the page boundary */
            if (FLS_ZERO != (Length & (FLS_PAGE_SIZE - FLS_ONE)))
            {
              /* Round off the length value to the page boundary */
              Length = Length + (FLS_PAGE_SIZE -
                             (Length & (FLS_PAGE_SIZE - FLS_ONE)));
            }
            else
            {
              /* No action required */
            }
          }
        }
      }
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
      else
      {
        /* No action required */
      }
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
      /* Initialize the global variable with target address and length */
      Fls_GVar.pBufferAddress = TargetAddressPtr;
      /* Set the current length of bytes to be processed */
      Fls_GVar.Fls_GulCurrentLength = Length;
      /* Initiate a read job to Read */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_READ_IMM;
      /* set the driver state to busy */
      Fls_GVar.Fls_GenState = MEMIF_BUSY;
      /* set the job result as pending */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_PENDING;
      /* set the default value */
      Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
    }
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  return(LenReturnValue);
} /* End of API Fls_ReadImmediate */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_READIMMEDIATE_API == STD_ON) */
#endif /* #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_BLANKCHECK_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_BlankCheck
**
** Service ID            : 0x12
**
** Description           : This API performs the blank check of flash memory.
**
** Sync/Async            : Asynchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : TargetAddress, Length
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Std_ReturnType
**                         E_OK: if Read command has been accepted.
**                         E_NOT_OK: if Read command has not been accepted.
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GulSrcDestAddress,
**                         Fls_GVar.Fls_GulCurrentLength,
**                         Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_GenState,
**                         Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_GblCommandInitiated,
**                         Fls_GVar.Fls_AccessType, Fls_GVar.Fls_GblFlashEnable,
**                         Fls_GVar.Fls_GblProcessContinue
**
**  Function(s) invoked  : Det_ReportError, R_FDL_Execute, Fls_SetFHVE,
**                         FLS_ENTER_CRITICAL_SECTION,
**                         FLS_EXIT_CRITICAL_SECTION
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_BlankCheck
(Fls_AddressType TargetAddress, Fls_LengthType Length)
{
  /* Pointer to the FDL command Structure */
  P2VAR(r_fdl_request_t,  AUTOMATIC, FLS_APPL_DATA) LpFdlReqCmd;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Local variables to hold the base address and size of flash */
  uint32 LulFlsBaseAddress;
  uint32 LulFlsTotalSize;
  #endif
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_BLANK_CHECK_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  #endif /* (FLS_DEV_ERROR_DETECT == STD_ON) */
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  /* Check if the driver state is not Idle */
  if (MEMIF_IDLE != Fls_GVar.Fls_GenState)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Check if the driver is busy by servicing another request */
    if (MEMIF_BUSY == Fls_GVar.Fls_GenState)
    {
      /* Report to DET if the driver is currently busy */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_BLANK_CHECK_SID, FLS_E_BUSY);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  else
  {
    /* Set the global variable which indicates data flash access */
    Fls_GVar.Fls_AccessType = FLS_DF_ACCESS;
    /* Virtual address is mapped to physical address */
    TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /*
     * Initialize the Local variables with Data Flash base address and
     * Data Flash Total size.
     */
    LulFlsBaseAddress = FLS_DF_SECTOR_START_ADDRESS;
    LulFlsTotalSize = FLS_DF_TOTAL_SIZE;
    #endif
    /* Local variable to hold the blank check start address */
    Fls_GVar.Fls_GulSrcDestAddress = TargetAddress;
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* MISRA Violation: START Msg(4:2984)-2 */
    /* Check if the start address is lies within the specified lower and
     * upper flash address boundaries.
     */
    if ((TargetAddress < LulFlsBaseAddress) ||
          ((TargetAddress - LulFlsBaseAddress) > (LulFlsTotalSize - FLS_ONE)))
    /* END Msg(4:2984)-2 */
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                    FLS_BLANK_CHECK_SID, FLS_E_PARAM_ADDRESS);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check if the length is greater than 0 and that the end address
     * (start address + length) lies within the specified upper flash
     * address boundary.
     */
    if ((FLS_ZERO == Length) ||
          (((Fls_GVar.Fls_GulSrcDestAddress - LulFlsBaseAddress) + Length)
          > LulFlsTotalSize))
    {
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                    FLS_BLANK_CHECK_SID, FLS_E_PARAM_LENGTH);
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether any error is reported to DET */
    if (E_OK == LenReturnValue)
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
      /* Set the current length of bytes to be processed */
      Fls_GVar.Fls_GulCurrentLength = Length;
      /* Prepare the Structure by assigning the variables */
      LpFdlReqCmd = &Fls_GstVar.GstfdlRequest;
      LpFdlReqCmd->command_enu = R_FDL_CMD_BLANKCHECK;
      LpFdlReqCmd->idx_u32 = Fls_GVar.Fls_GulSrcDestAddress -
                                                        FLS_DF_BASE_ADDRESS;
      LpFdlReqCmd->cnt_u16 = (uint16)(Fls_GVar.Fls_GulCurrentLength / FLS_FOUR);
      LpFdlReqCmd->accessType_enu = R_FDL_ACCESS_USER;
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
      #endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */
      /* Invoking the Library R_FDL_Execute API */
      R_FDL_Execute (LpFdlReqCmd);
      /* Initiate a read job to Read */
      Fls_GVar.Fls_GenCommand = FLS_COMMAND_BLANKCHECK;
      /* set the driver state to busy */
      Fls_GVar.Fls_GenState = MEMIF_BUSY;
      /* set the job result as pending */
      Fls_GVar.Fls_GenJobResult = MEMIF_JOB_PENDING;
      /* set the default value */
      Fls_GVar.Fls_GblCommandInitiated = FLS_FALSE;
      /* Set the global process continue variable to False */
      Fls_GVar.Fls_GblProcessContinue = FLS_FALSE;
    }
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  }
  /* MISRA Violation: START Msg(4:3138)-15 */
  #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
  #endif
  /*END Msg(4:3138)-15 */
  return(LenReturnValue);
} /* End of API Fls_BlankCheck */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_BLANKCHECK_API == STD_ON) */
#endif /* #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_SUSPEND_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_Suspend
**
** Service ID            : 0x13
**
** Description           : This API performs the suspend of the on going job.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GenCommand,
**                         Fls_GVar.Fls_GenState, Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_AccessType, Fls_GVar.Fls_MutexFlag,
**                         Fls_GstVar.GstfdlRequest.status_enu, Fls_GpConfigPtr,
**                         Fls_GVar.Fls_GenBackUpCmd, Fls_GulTimeout
**
**  Function(s) invoked  : Det_ReportError, R_FDL_SuspendRequest, R_FDL_Handler,
**                         FLS_ENTER_CRITICAL_SECTION, FLS_EXIT_CRITICAL_SECTION
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(void, FLS_PUBLIC_CODE) Fls_Suspend(void)
{
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Local variable to hold the FDL status */
  volatile r_fdl_status_t LenFDLStatus;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenReturnValue;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Set the default DET return value */
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                 FLS_SUSPEND_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  {
    /* Enter Critical Section */
    /* MISRA Violation: START Msg(4:3138)-15 */
    #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
    FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
    #endif
    /*END Msg(4:3138)-15 */
    #if (FLS_INTERRUPT_MODE == STD_ON)
    #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
    Fls_GulTimeout = FLS_ISR_TIMEOUT_VALUE;
    /* Check whether ISR is locked the flag */
    while ((Fls_GVar.Fls_MutexFlag == FLS_ONE) && (Fls_GulTimeout > FLS_ZERO))
    #else
    /* Check whether ISR is locked the flag */
    while (Fls_GVar.Fls_MutexFlag == FLS_ONE)
    #endif
    {
      #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                        (FLS_TIMEOUT_MONITORING == STD_ON))
      Fls_GulTimeout--;
      #endif
    }
    #endif
    /* Check if the driver state is not Idle */
    if (MEMIF_IDLE != Fls_GVar.Fls_GenState)
    {
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        if (R_FDL_SUSPENDED != Fls_GstVar.GstfdlRequest.status_enu)
        {
          #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                        (FLS_TIMEOUT_MONITORING == STD_ON))
          /* Time out value for Suspend Operation */
          Fls_GulTimeout = Fls_GpConfigPtr->ulFlsDFSuspendTimeoutValue;
          #endif
          #if (FLS_INTERRUPT_MODE == STD_ON)
          /* Set the mutex flag by means the suspend operation is in progress */
          Fls_GVar.Fls_MutexFlag = FLS_ONE;
          #endif
          LenFDLStatus = R_FDL_SuspendRequest();
          if (R_FDL_OK == LenFDLStatus)
          {
            do
            {
              R_FDL_Handler();
              #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                   (FLS_TIMEOUT_MONITORING == STD_ON))
              Fls_GulTimeout--;
              #endif
            }
            #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                         (FLS_TIMEOUT_MONITORING == STD_ON))
            while ((Fls_GstVar.GstfdlRequest.status_enu == R_FDL_BUSY) &&
                                                 (Fls_GulTimeout > FLS_ZERO));
            #else
            while (Fls_GstVar.GstfdlRequest.status_enu == R_FDL_BUSY);
            #endif
            #if (FLS_INTERRUPT_MODE == STD_ON)
            /* MISRA Violation: START Msg(4:4397)-1 */
            /* Disable interrupt processing */
            RH850_SV_MODE_IMR_OR(16, (Fls_GpConfigPtr->pFlEndImrAddress),
                                   ~(Fls_GpConfigPtr->usFlEndImrMask));
            /* END Msg(4:4397)-1 */
            #endif
            /* Set the back up command with previous command */
            Fls_GVar.Fls_GenBackUpCmd = Fls_GVar.Fls_GenCommand;
            /* Set the command to none */
            Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
            /* Set the driver state to idle */
            Fls_GVar.Fls_GenState = MEMIF_IDLE;
            /* Set the job Result to OK */
            Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
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
        #if (FLS_INTERRUPT_MODE == STD_ON)
        /* Reset the mutex flag by means the suspend operation is completed */
        Fls_GVar.Fls_MutexFlag = FLS_ZERO;
        #endif
      }
      else
      {
        /* No action required */
      }
      #endif

    }
    else
    {
      /* No action required */
    }
    /* Exit Critical Section */
    #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
    FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
    #endif
  }
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
} /* End of API Fls_Suspend */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_SUSPEND_API == STD_ON) */
#endif /* #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#if (FLS_RESUME_API == STD_ON)
/*******************************************************************************
** Function Name         : Fls_Resume
**
** Service ID            : 0x14
**
** Description           : This API performs the resume of the previous
**                         suspended job.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : Component must be initialized using Fls_Init().
**
** Global Variables Used : Fls_GblInitStatus, Fls_GVar.Fls_GenCommand,
**                         Fls_GVar.Fls_GenState, Fls_GVar.Fls_GenJobResult,
**                         Fls_GVar.Fls_AccessType, Fls_GVar.Fls_GenBackUpCmd,
**                         Fls_GVar.Fls_MutexFlag, Fls_GpConfigPtr,
**                         Fls_GVar.Fls_GblFlashEnable
**
**  Function(s) invoked  : Det_ReportError, R_FDL_ResumeRequest, R_FDL_Handler,
**                         FLS_ENTER_CRITICAL_SECTION, FLS_EXIT_CRITICAL_SECTION
**
** Registers Used        : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(void, FLS_PUBLIC_CODE) Fls_Resume(void)
{
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Local variable to hold the FDL status */
  volatile r_fdl_status_t LenFDLStatus;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenReturnValue;
  #endif
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  /* Set the default DET return value */
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                 FLS_RESUME_SID, FLS_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  #endif  /* FLS_DEV_ERROR_DETECT == STD_ON */
  {
    /* Enter Critical Section */
    /* MISRA Violation: START Msg(4:3138)-15 */
    #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
    FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
    #endif
    /*END Msg(4:3138)-15 */
    #if (FLS_INTERRUPT_MODE == STD_ON)
    #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
    Fls_GulTimeout = FLS_ISR_TIMEOUT_VALUE;
    /* Check whether ISR is locked the flag */
    while ((Fls_GVar.Fls_MutexFlag == FLS_ONE) && (Fls_GulTimeout > FLS_ZERO))
    #else
    /* Check whether ISR is locked the flag */
    while (Fls_GVar.Fls_MutexFlag == FLS_ONE)
    #endif
    {
      #if ((FLS_DEV_ERROR_DETECT == STD_ON) && \
                                        (FLS_TIMEOUT_MONITORING == STD_ON))
      Fls_GulTimeout--;
      #endif
    }
    #endif
    /* Check if the driver state is not Idle */
    if (MEMIF_IDLE == Fls_GVar.Fls_GenState)
    {
      #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
      if (FLS_DF_ACCESS == Fls_GVar.Fls_AccessType)
      {
        LenFDLStatus = R_FDL_ResumeRequest();
        if (R_FDL_OK == LenFDLStatus)
        {
          #if (FLS_INTERRUPT_MODE == STD_ON)
          /* Enable interrupt processing */
          RH850_SV_MODE_IMR_AND(16, (Fls_GpConfigPtr->pFlEndImrAddress),
                                     (Fls_GpConfigPtr->usFlEndImrMask));
          #endif
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

          R_FDL_Handler();
          /* Set the command to back up command data */
          Fls_GVar.Fls_GenCommand = Fls_GVar.Fls_GenBackUpCmd;
          /* Set the command to none */
          Fls_GVar.Fls_GenBackUpCmd = FLS_COMMAND_NONE;
          /* Set the driver state to idle */
          Fls_GVar.Fls_GenState = MEMIF_BUSY;
          /* Set the job Result to OK */
          Fls_GVar.Fls_GenJobResult = MEMIF_JOB_PENDING;
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
      #endif
    }
    else
    {
      /* No action required */
    }
    /* Exit Critical Section */
    #if(FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
    FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
    #endif
  }
  #if (FLS_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
} /* End of API Fls_Resume */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_RESUME_API == STD_ON) */
#endif /* #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) ||
                                       (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
