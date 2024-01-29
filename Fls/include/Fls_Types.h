/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Types.h                                                 */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Flash Wrapper Component specific types used within the module.*/
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
 * V1.1.0:  21-Mar-2013  : As per SCR 092 for Mantis issues #8968, #8321 and
 *                         #8506, following changes are made:
 *                         1. The code is partitioned for possibility to have
 *                            code that handles data flash or code flash.
 *                         2. The variables of structure 'Fls_GVarProperties'
 *                            are moved to INIT_ section instead of
 *                            NO_INIT_ section.
 *                         3. Unused variable 'Fls_AccessType' is removed.
 *                         4. Pre compile definition for variable
 *                            'pTempBufferAddress' is removed to make it as
 *                            the general variable.
 *
 * V1.1.1:  29-Apr-2013  : As per SCR 147 for Mantis issue #10221, following
 *                         changes are made:
 *                         1. Element 'ulFlsMaxEraseBytes' is added to
 *                            Fls_ConfigType structure.
 *                         2. Unused variable 'Fls_Status' is removed.
 *
 * V1.1.2:  30-May-2013  : As per SCR 169 for Mantis issue #10192, variable
 *                         'Fls_GucOffset' is added.
 *
 * V1.2.0:  30-Jul-2013  : As per CR 215 for Mantis issue #11707, following
 *                         changes are made:
 *                         1. Variable 'Fls_AccessType' is added.
 *                         2. Code is made available for supporting both code
 *                            flash and data flash usecase.
 *
 * V1.2.1:  08-Aug-2013  : As per CR 225, Device name is updated as part of
 *                         merge activity.
 *
 * V1.2.2:  03-Oct-2013  : As per CR 242 for Mantis issues #8421 and #12110,
 *                         following changes are made:
 *                         1. pJobEndNotificationPointer and
 *                            pJobErrorNotificationPointer are added in
 *                            structure 'Fls_ConfigType'.
 *                         2. The elements 'ulFlsMaxEraseBytes',
 *                            'ulFlsMaxWriteBytes', 'ulFlsMaxReadBytes',
 *                            'ulFlsWriteTimeoutValue', 'ulFlsReadTimeoutValue',
 *                            and 'ulFlsEraseTimeoutValue' are made separate to
 *                            address code flash and data flash respectively.
 *                         3. The elements 'ulFlsDFBlankCheckEraseTimeoutValue'
 *                            and 'ulFlsDFBlankCheckReadTimeoutValue' are added
 *                            structure 'Fls_ConfigType'.
 *
 * V1.2.3:  01-Jan-2014  : As per CR 341 for Mantis issue #15566, following
 *                         changes are made:
 *                         1. Call back function pointers for single bit and
 *                            double bit error 'pEccSEDNotificationPointer' and
 *                            'pEccDEDNotificationPointer' are added in
 *                            structure 'Fls_ConfigType'.
 *                         2. The Copyright information is updated.
 *                         3. Element 'ulFlsCFMaxEraseBytes' is added to
 *                            Fls_ConfigType structure.
 *
 * V1.2.4:  17-Feb-2014  : As per CR 397 for Mantis issue #19288, file is
 *                         updated for merge activity.
 *
 * V1.3.0:  01-Apr-2014  : As per CR 426 for Mantis issues #19629 and #19685,
 *                         following changes are made:
 *                         1. IMR address and mask variables are added in
 *                            config structure.
 *                         2. The global variables 'GucPreviousJobState',
 *                            'GstfdlNewRequest' from Fls_GstVar structure and
 *                            macros 'FLS_JOB_INPROG', 'FLS_JOB_COMPLETED'
 *                            are removed.
 *                         3. The Fls_GVar structure is updated for removing the
 *                            global variable 'Fls_GenVerifyContents' and for
 *                            adding global variable 'Fls_GblTimeOutMonitor'.
 *                         4. Include files 'Fls_Cfg.h' and 'MemIf.h' are
 *                            removed from include section.
 *
 * V1.3.1:  13-Jun-2014  : As per CR 494 for mantis issues #20137, #20639 and
 *                         #20875, following changes are made:
 *                         1. 'Fls_ConfigType' structure is updated for adding
 *                            variable 'ulFlsDFSuspendTimeoutValue' and for
 *                            removing the variables 'usFlErrImrMask',
 *                            'ulFlsDFMaxWriteBytes', 'ulFlsDFMaxEraseBytes',
 *                            'ulFlsDFWriteTimeoutValue',
 *                            'ulFlsDFEraseTimeoutValue' and
 *                            'ulFlsDFBlankCheckEraseTimeoutValue'.
 *                         2. The global variables 'Fls_ReadType',
 *                            'Fls_MutexFlag' and 'Fls_GenBackUpCmd' are added
 *                            in Fls_GVar structure and 'GstfdlNewRequest' is
 *                            added in Fls_GstVar structure.
 *
 * V1.3.2:  25-Sep-2014    : As per CR 608 for Mantis issue #21508, the
 *                           'Fls_ConfigType' structure is updated for including
 *                           parameter types for single bit and double bit error
 *                           notification functions.
 *
 * V1.3.3:  04-Nov-2014   : As per CR 643 for Mantis issue #24449, the
 *                          'Fls_ConfigType' structure is updated for adding the
 *                          variable 'ulFlsDFCancelTimeoutValue' and for adding
 *                          pre compile option for 'ulFlsDFSuspendTimeoutValue'.
 *
 * V1.3.4:   19-Nov-2014   : As per CR 652 for Mantis issue #24328, following
 *                           changes are made:
 *                           1. "ulFlsCFCancelTimeoutValue" is added as per
 *                               changes in FCL V2.00 library.
 *                           2. "ulFlsCFMaxWriteBytes", "ulFlsCFMaxEraseBytes",
 *                              "ulFlsCFWriteTimeoutValue" and
 *                              "ulFlsCFEraseTimeoutValue" are removed from
 *                              'Fls_ConfigType' structure.
 * V1.3.5:  13-Jan-2015    : As per Mantis issue #24418 Fls_GstVar 
 *                            initialization updated
 */
/******************************************************************************/
#ifndef FLS_TYPES_H
#define FLS_TYPES_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Included for Type definitions */
#include "Std_Types.h"
/* Included for pre-compile options */
#include "Fls_PBTypes.h"
#include "r_typedefs.h"
#if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#include "r_fcl_types.h"
#endif
#if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
#include "r_fdl_types.h"
#endif
/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
#if (FLS_AR_VERSION == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_TYPES_AR_RELEASE_MAJOR_VERSION    FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_TYPES_AR_RELEASE_MINOR_VERSION    FLS_AR_RELEASE_MINOR_VERSION
#define FLS_TYPES_AR_RELEASE_REVISION_VERSION \
                                     FLS_AR_RELEASE_REVISION_VERSION

#elif (FLS_AR_VERSION == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#define FLS_TYPES_AR_MAJOR_VERSION  FLS_AR_MAJOR_VERSION_VALUE
#define FLS_TYPES_AR_MINOR_VERSION  FLS_AR_MINOR_VERSION_VALUE
#define FLS_TYPES_AR_PATCH_VERSION  FLS_AR_PATCH_VERSION_VALUE
#endif

/* Module Software version information */
#define FLS_TYPES_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION
#define FLS_TYPES_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION

/*******************************************************************************
**                      GLOBAL DATA TYPES                                     **
*******************************************************************************/
/* Structure for Fls Init Configuration */
/* Overall Module Configuration Data Structure */
typedef struct STag_Fls_ConfigType
{
  /* Database start value - 0x0EDF0400 */
  uint32 ulStartOfDbToc;
  /* Pointer to job end callback notification */
  P2FUNC (void, FLS_APPL_CODE, pJobEndNotificationPointer)(void);
  /* Pointer to job error callback notification */
  P2FUNC (void, FLS_APPL_CODE, pJobErrorNotificationPointer)(void);
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Pointer to ECC SED callback notification */
  P2FUNC (void, FLS_APPL_CODE, pEccSEDNotificationPointer)(uint32);
  /* Pointer to ECC DED callback notification */
  P2FUNC (void, FLS_APPL_CODE, pEccDEDNotificationPointer)(uint32);
  /* Maximum number of Read bytes */
  uint32 ulFlsDFMaxReadBytes;
  /* Timeout counter value for Read operation */
  uint32 ulFlsDFReadTimeoutValue;
  /* Timeout counter value for blank check operation before read operation */
  uint32 ulFlsDFBlankCheckReadTimeoutValue;
  #if (FLS_SUSPEND_API == STD_ON)
  /* Timeout counter value for suspend operation */
  uint32 ulFlsDFSuspendTimeoutValue;
  #endif /* end of #if (FLS_SUSPEND_API == STD_ON) */
  #if (FLS_CANCEL_API == STD_ON)
  /* Timeout counter value for cancel operation for data flash */
  uint32 ulFlsDFCancelTimeoutValue;
  #endif /* end of #if (FLS_CANCEL_API == STD_ON) */
  #if (FLS_INTERRUPT_MODE == STD_ON)
  /* Address for error IMR registers */
  P2VAR(uint16, AUTOMATIC, FLS_CONFIG_DATA)pFlEndImrAddress;
  /* Mask for IMR register */
  uint16 usFlEndImrMask;
  #endif /* end of #if (FLS_INTERRUPT_MODE == STD_ON) */
  #endif /* end of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                      (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Maximum number of Read bytes */
  uint32 ulFlsCFMaxReadBytes;
  /* Timeout counter value for Read operation */
  uint32 ulFlsCFReadTimeoutValue;
  /* Timeout counter value for cancel operation for code flash */
  uint32 ulFlsCFCancelTimeoutValue;
  #endif
} Fls_ConfigType;

typedef struct STag_Fls_GVarProperties
{
  /* Variable to store the source address */
  P2CONST(uint8, AUTOMATIC, FLS_INIT_DATA) pBufferAddress;
  /* Variable to store the source address */
  P2CONST(uint8, AUTOMATIC, FLS_INIT_DATA) pTempBufferAddress;
  /* Variable to store the target address */
  uint32 Fls_GulSrcDestAddress;
  /* Variable to store the read address */
  uint32 Fls_GulReadAddress;
  /* Variable to hold the erase start address */
  uint32 Fls_EraseStartAddress;
  /* Variable to hold the erase end address */
  uint32 Fls_EraseEndAddress;
  /* Variable to hold the length */
  uint32 Fls_GulCurrentLength;
  /* Variable to store the requested number of bytes to be processed */
  uint32 Fls_GulRequestedLength;
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Variable to hold offset by masking the source address with page size */
  uint8 Fls_GucOffset;
  /* Variable to store the Flash read type */
  Fls_FlashReadType Fls_ReadType;
  /* Variable to hold mutex flag for suspend operation */
  uint8 Fls_MutexFlag;
  /* Variable to store the back up of command */
  Fls_CommandType Fls_GenBackUpCmd;
  #endif
  /* Variable to store the requested commands */
  Fls_CommandType Fls_GenCommand;
  Fls_FlashType Fls_AccessType;
  /* Variable to store the job result */
  MemIf_JobResultType Fls_GenJobResult;
  /* Variable to store the driver state */
  MemIf_StatusType Fls_GenState;
  /* Variable to store command initiation status */
  boolean Fls_GblCommandInitiated;
  #if (FLS_FHVE_REGS == SUPPORTED)
  /* Variable to store the flash enable / protection off status */
  boolean Fls_GblFlashEnable;
  #else
  #if (FLS_FLMD_REGS == SUPPORTED)
  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                           (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Variable to store the flash enable / protection off status */
  boolean Fls_GblFlashEnable;
  #endif /* end of #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                        (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS) */
  #endif /* end of #if (FLS_FLMD_REGS == SUPPORTED) */
  #endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */
  /* Variable to store the internal process continuation status */
  boolean Fls_GblProcessContinue;
  #if ((FLS_DEV_ERROR_DETECT == STD_ON) && (FLS_TIMEOUT_MONITORING == STD_ON))
  /* Variable to store the Time out monitor status */
  boolean Fls_GblTimeOutMonitor;
  #endif
} Fls_GVarProperties;

/* Global Structure to handle the Global Variables */
typedef struct STag_Fls_GstVar
{
  #if (FLS_FLASH_ACCESS == FLS_CODEFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Variable to hold the Normal command */
  VAR(r_fcl_request_t, FLS_INIT_DATA) GstfclRequest;

  /* Variable to hold the state of FLS software component */
  VAR(r_fcl_status_t, FLS_INIT_DATA) GucCFStatus;
  #endif
  #if (FLS_FLASH_ACCESS == FLS_DATAFLASH_ACCESS) || \
                                          (FLS_FLASH_ACCESS == FLS_CFDF_ACCESS)
  /* Variable to hold the Normal command */
  VAR(r_fdl_request_t, FLS_INIT_DATA) GstfdlRequest;

  /* Variable to hold the Backup command */
  VAR(r_fdl_request_t, FLS_INIT_DATA) GstfdlNewRequest;

  /* Variable to hold the state of FLS software component */
  VAR(r_fdl_status_t, FLS_INIT_DATA) GucDFStatus;
  #endif

} Fls_GstVariable;
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif  /* FLS_TYPES_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
