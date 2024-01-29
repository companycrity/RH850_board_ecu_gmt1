/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi.c                                                       */
/*============================================================================*/
/*                               COPYRIGHT                                    */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the implementations AUTOSAR specified APIs for SPI      */
/* handler.                                                                   */
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
 * V1.0.0:  29-Aug-2012  : Initial Version
 *
 * V1.0.1:  19-Oct-2012  : As per SCR 029, In API Spi_ReadIB pre-compile
 *                         condition SPI_EXTENDED_DATA_LENGTH is added.
 *
 * V1.0.2:  27-Nov-2012  : As per SCR 042, macro SPI_HWUNIT_ASYNCHRONOUS check
 *                         is added for APIs Spi_AsyncTransmit and
 *                         Spi_MainFunction_Handling.
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, the following changes are made
 *                         1. Version macros are updated.
 *                         2. APIs Spi_Init, Spi_AsyncTransmit are updated for
 *                            Hardware priority handling functionality.
 *                         3. Type casting of Spi_DataType is removed in APIs
 *                            Spi_ReadIB, Spi_SetupEB for byte alignment
 *                            implementation.
 *                         4. Copyright information is updated.
 *
 * V1.1.1:  18-Mar-2013  : As per SCR 113 for Mantis issue 5420, the following
 *                         changes are made
 *                         1. Spi_Init() - The configuration registers are
 *                            updated for the jobs in high priority sequences.
 *                         2. Spi_AsyncTransmit() - Enable transmit cancel
 *                            interrupt when there is a request for high
 *                            priority sequence communication.
 *                         3. In SPI Spi_Init, condition check of DET error
 *                            'SPI_E_ALREADY_INITIALIZED' is put under
 *                            pre-compile option 'SPI_ALREADY_INIT_DET_CHECK'.
 *                         4. File version information is updated with the new
 *                            macro 'SPI_C_SW_PATCH_VERSION'.
 *
 * V1.1.2:  22-Apr-2013  : As per SCR 145, following change is made:
 *                         Software Patch version macro SPI_C_SW_PATCH_VERSION
 *                         is removed in Version Information header.
 *
 * V1.1.3:  13-Jun-2013  : As per SCR 181, following changes are made:
 *                         In SPI Spi_AsyncTransmit() conditional check
 *                         for SPI_HW_PRIORITY_ENABLED is added.
 *
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 following changes are made:
 *                         1. Spi_Init() function is updated to support
 *                            configurable static HW unit configuration where
 *                            all common HW unit registers are initialized
 *                            during Spi_Init() function and not during each
 *                            transmission.
 *                         2. 'SPI_SEQ_STARTNOTIFICATION_ENABLED' pre-compile
 *                            check is added for asynchronous mode.
 *                         3. SPI_C_SW_MINOR_VERSION macro is updated.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.2.2:  03-Sep-2013  : As per CR 243 for the mantis issues #13806 and #8421,
 *                         the following changes are made:
 *                         1. Spi_Cancel() Api is updated.
 *                         2. Sequence start notification functionality part is
 *                            updated in Api Spi_AsyncTransmit().
 *                         3. Sequence start notification  and  synchronous
 *                            end notification sequence functionality part are
 *                            updated in Api Spi_SyncTransmit().
 *
 * V1.3.0:  15-Jan-2014  : As per CR 330 for the mantis issues #12397, following
 *                         changes are made:
 *                         1. APIs Spi_AsyncTransmit(), Spi_Cancel() are
 *                            updated.
 *                         2. Pre-compile condition
 *                            SPI_LEVEL_DELIVERED == SPI_ZERO is added for
 *                            boolean variable 'Spi_GblSyncTx'.
 *                         3. Copyright information is updated.
 *                         4. Updated as per C coding guideline.
 *
 * V1.4.0:  21-Mar-2014  : As per CR 424 for the mantis issues #19537, following
 *                         changes are made:
 *                         1. Function headers are updated for Global Variable
 *                            in the following APIs: Spi_Init, Spi_WriteIB,
 *                            Spi_AsyncTransmit, Spi_ReadIB, Spi_SyncTransmit
 *                            and Spi_Cancel.
 *                         2. Critical Section Protection is updated for
 *                            'Spi_GaaSeqCancel' in the APIs Spi_AsyncTransmit
 *                            and Spi_Cancel.
 *                         3. SPI_C_SW_MINOR_VERSION macro is updated.
 *
 * V1.5.0:  02-Jun-2014  : As per CR 507, for the mantis issue #21647 following
 *                         changes are made:
 *                         1. API Spi_Init is updated for the
 *                            'SPI_PERSISTENT_HW_CONFIGURATION_ENABLED'
 *                            pre-compile check and Spi_LoopBackSelfTest.
 *                         2. In API Spi_WriteIB pre-compile check is updated
 *                            for SPI_IB_CONFIGURED == STD_ON.
 *                         3. MISRA C RULE VIOLATION section updated.
 *                         4. MISRA rules violation messages are updated.
 *                         5. Comments are updated.
 *                         6. SPI_C_SW_MINOR_VERSION macro is updated.
 *                         7. The variable 'Spi_GucAllQueueSts' is renamed to
 *                            'Spi_GusAllQueueSts' as per C coding guideline.
 *
 * V1.5.1: 08-Jul-2014   : As per CR 550 for mantis #22312, #22324, #22213,
 *                         #21502, #22328, #21877, #22212 and #22066 following
 *                         changes are made:
 *                         1. New macros 'SPI_CSIG_CLR_STS_FLAGS' and
 *                            'SPI_CSIH_CLR_STS_FLAGS' are added to clear status
 *                            registers for CSIG and CISH individually.
 *                         2. API Spi_SyncTransmit is updated for the following:
 *                             1. To support multiple Async and sync HW units at
 *                                the same time.
 *                             2. Det check is updated for the following DETs:
 *                                'SPI_E_PARAM_SEQ' and 'SPI_E_SEQ_IN_PROCESS'.
 *                         3. All function headers are updated.
 *                         4. Pre-compile check is updated for the following
 *                            APIs: Spi_SyncTransmit(), Spi_AsyncTransmit(),
 *                            and Spi_MainFunction_Handling().
 *                         5. Comments are updated for #endif
 *
 * V1.5.2: 01-Aug-2014   : As per CR 581 for mantis #20712 and #22858,
 *                         file is updated after spell check.
 *
 * V1.5.3  09-Sep-2014   : As per CR 601, following changes are made:
 *                         1. MISRA C RULE VIOLATION section is updated.
 *                         2. MISRA rules violation messages are updated.
 *                         3. Spi_GetJobResult(), Spi_GetSequenceResult() and
 *                            Spi_GetHWUnitStatus() APIs are updated to avoid
 *                            MISRA warnings for redundant assignment of
 *                            variabes and redundant updation of same variable
 *                            multiple times with same value.
 *                         4. In Spi_ReadIB() Api type casting is done for
 *                            "LpTxOnlyData" variable to avoid MISRA warnings.
 *
 * V1.5.4: 07-Jan-2015   : Following changes are done
 *                         1. As per mantis #25125 compilation error is fixed
 *                         2. As per mantis #25111 definition for
 *                            SPI_RAM_DATA_PROTECTION is added
 *                         3. MISRA warning message (4:3138) is added.
 *                         4. Copyright information is updated.
 *                         5. As per mantis #25125, condition check of switch
 *                            for declaration and assignment of "LpJobConfig"
 *                            has been updated.
 *
 * V1.5.5:  10-Feb-2015  : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. File is updated for C coding guidelines.
 *                         3. As per CR 01, for mantis #14360 API Spi_ReadIB()
 *                            is updated to perform shift operation for received
 *                            data before saving it into software buffer when
 *                            SPI_TX_ONLY_MODE_CONFIGURED and blEDLEnabled are
 *                            true.
 *
 * V1.5.6:  28-Mar-2015  : Software Minor Version has been updated.
 *
 ******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/* TRACE [R3, SPI092][R4, SPI092] */
#include "Spi.h"
#include "Spi_Scheduler.h"
#include "Spi_Ram.h"
#include "Spi_Driver.h"
#include "Dem.h"

#if (SPI_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION */

/* AUTOSAR release version information */
#define SPI_C_AR_RELEASE_MAJOR_VERSION \
                                  SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_C_AR_RELEASE_MINOR_VERSION \
                                  SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_C_AR_RELEASE_REVISION_VERSION \
                               SPI_AR_RELEASE_REVISION_VERSION_VALUE

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_VERSION  */

/* AUTOSAR specification version information */
#define SPI_C_AR_MAJOR_VERSION    SPI_AR_MAJOR_VERSION_VALUE
#define SPI_C_AR_MINOR_VERSION    SPI_AR_MINOR_VERSION_VALUE
#define SPI_C_AR_PATCH_VERSION    SPI_AR_PATCH_VERSION_VALUE

#endif /*END of SPI_AR_VERSION */

/* File version information */
#define SPI_C_SW_MAJOR_VERSION    1
#define SPI_C_SW_MINOR_VERSION    6

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/* START of SPI_AR_VERSION*/
#if (SPI_AR_RELEASE_MAJOR_VERSION != SPI_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Major Version"
#endif

#if (SPI_AR_RELEASE_MINOR_VERSION != SPI_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Minor Version"
#endif

#if (SPI_AR_RELEASE_REVISION_VERSION != SPI_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Revision Version"
#endif

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/* SPI_AR_LOWER_VERSION  */
#if (SPI_AR_MAJOR_VERSION != SPI_C_AR_MAJOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Major Version"
#endif

#if (SPI_AR_MINOR_VERSION != SPI_C_AR_MINOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Minor Version"
#endif

#if (SPI_AR_PATCH_VERSION != SPI_C_AR_PATCH_VERSION)
  #error "Spi_Version.c : Mismatch in Patch Version"
#endif
#endif /* END of SPI_AR_VERSION */

#if (SPI_SW_MAJOR_VERSION != SPI_C_SW_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Major Version"
#endif /* END of SPI_SW_MAJOR_VERSION */

#if (SPI_SW_MINOR_VERSION != SPI_C_SW_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Minor Version"
#endif /* END of SPI_SW_MINOR_VERSION */

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message      : (4:0489) Increment or decrement operation performed         */
/*                on pointer                                                  */
/* Rule         : MISRA-C:2004 Rule 17.4                                      */
/* Justification: To access these pointers in optimized                       */
/*                way in this function                                        */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(4:0489)-1 and                            */
/*                END Msg(4:0489)-1 tags in the code.                         */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/*                 pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : Pointer arithmetic is used to achieve better throughput.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-2 and                           */
/*                 END Msg(4:0488)-2 tags in the code.                        */
/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4397) Bitwise operations on signed data will give       */
/*                 implementation defined results.                            */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : Though the bitwise operation is performed on unsigned      */
/*                 data, this warning is generated by the QAC tool V6.2.1 as  */
/*                 an indirect result of integral promotion in complex bitwise*/
/*                 operations.                                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4397)-3  and                          */
/*                 END Msg(4:4397)-3  tags in the code.                       */
/******************************************************************************/

/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0759) An object of union type has been defined.         */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : To access only the lower byte of the converted values      */
/*                 from the conversion register.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0759)-4 and                           */
/*                 END Msg(4:0759)-4 tags in the code.                        */
/******************************************************************************/

/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2842) An apparent anomaly has been detected.            */
/*                 Preceding operations imply that this expression will       */
/*                 sometimes result in an access outside the bounds of an     */
/*                 array.                                                     */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : This index/offset is validated by generation tool.         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2842)-5 and                           */
/*                 END Msg(4:2842)-5 tags in the code.                        */
/******************************************************************************/

/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2962) An apparent anomaly has been detected. Preceding  */
/*                 operations imply that this object will sometimes be        */
/*                 uninitialized and its value may therefore be undefined.    */
/* Rule          : MISRA-C:2004 Rule 9.1                                      */
/* Justification : This variable is initialized at two places under different */
/*                 pre-compile options                                        */
/* Verification  : However, part of the code is verified manually             */
/*                 and it is not having any impact.                           */
/* Reference     : Look for START Msg(4:2962)-6  and                          */
/*                 END Msg(4:2962)-6  tags in the code.                       */
/******************************************************************************/

/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4491) A composite expression of essentially unsigned    */
/*                 type undergoes an assigning conversion to a wider unsigned */
/*                 integer type                                               */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4491)-7 and                           */
/*                 END Msg(4:4491)-7 tags in the code.                        */
/******************************************************************************/

/* 8. MISRA C RULE VIOLATION:                                                 */
/* Message       : (6:0306) Cast between a pointer to object and an integral  */
/*                  type.                                                     */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/*                 REFERENCE - ISO-6.3.4 Semantics                            */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(6:0306)-8 and                           */
/*                 END Msg(6:0306)-8 tags in the code.                        */
/******************************************************************************/

/* 9. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2877) This loop will only be executed once and so the   */
/*                 loop mechanism is redundant.                               */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : This operation appears to be redundant because only one    */
/*                 controller is configured.                                  */
/*                 However, when two or more controllers are configured       */
/*                 this warning ceases to exist.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2877)-9 and                           */
/*                 END Msg(4:2877)-9 tags in the code.                        */
/******************************************************************************/

/* 10. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2984) This operation appears to be redundant because a  */
/*                 given constant value can always be used instead.           */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : This operation appears to be redundant because only one    */
/*                 controller is configured.                                  */
/*                 However, when two or more controllers are configured       */
/*                 this warning ceases to exist.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2984)-10 and                          */
/*                 END Msg(4:2984)-10 tags in the code.                       */
/******************************************************************************/

/* 11. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0316) Cast from a pointer to void to a pointer to       */
/*                  object.                                                   */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : Cast is performed between a pointer to void to pointer to  */
/*                 object type to prevent publishing of internal structure.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0316)-11 and                          */
/*                 END Msg(4:0316)-11 tags in the code.                       */
/******************************************************************************/

/* 12. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:4397) An expression which is the result of a ~ or <<    */
/*                 operation has not been cast to its essential type.         */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4397)-12 and                          */
/*                 END Msg(4:4397)-12 tags in the code.                       */
/******************************************************************************/

/* 13. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:3138) Null statement is located close to other code     */
/*                  or comments                                               */
/* Rule          : MISRA-C:2004 Rule 14.3                                     */
/* Justification : An additional semi-colon is added to the critical          */
/*                 section macro to avoid static analysis warning             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3138)-13 and                          */
/*                 END Msg(4:3138)-13 tags in the code.                       */
/******************************************************************************/

/* 14. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2991) The value of this 'if' controlling expression is  */
/*                  always 'true'.                                            */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is true because  */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for false value  */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2991)-14 and                          */
/*                 END Msg(4:2991)-14 tags in the code.                       */
/******************************************************************************/

/* 15. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2995) The result of this logical operation is always    */
/*                 'true'..                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is true because  */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for false value  */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2995)-15 and                          */
/*                 END Msg(4:2995)-15 tags in the code.                       */
/******************************************************************************/

/* 16. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2995) The value of this 'if' controlling expression is  */
/*                 always 'false'.                                            */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is false because */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for true value   */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2992)-16 and                          */
/*                 END Msg(4:2992)-16 tags in the code.                       */
/******************************************************************************/

/* 17. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2996) The result of this logical operation is always    */
/*                 'false'.                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is false because */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for true value   */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2996)-17 and                          */
/*                 END Msg(4:2996)-17 tags in the code.                       */
/******************************************************************************/

/* 18. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2880) This code is unreachable.                         */
/* Rule          : MISRA-C:2004 Rule 14.1                                     */
/* Justification : The code can be accessed if the logical conditional check  */
/*                 in which this is found is true. Code may or may not be     */
/*                 accessible depending on the pre compile value used in the  */
/*                 logical condition.                                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2880)-18 and                          */
/*                 END Msg(4:2880)-18 tags in the code.                       */
/******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name       : Spi_Init
**
** Service ID          : 0x00
**
** Description         : This service performs initialization of the SPI Driver
**                       component
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : const Spi_ConfigType *ConfigPtr
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : None
**
** Preconditions       : None
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaChannelEBData,
**                       Spi_GpConfigPtr, Spi_GpFirstChannel, Spi_GpFirstJob
**                       Spi_GpFirstSeq, Spi_GaaJobResult, Spi_GaaSeqResult
**                       Spi_GddAsyncMode, Spi_GaaSeqCancel, Spi_GstHWUnitInfo,
**                       Spi_GpFirstJobList, Spi_GblQueueStatus,
**                       Spi_GddQueueIndex, Spi_GusAllQueueSts
**
** Function Invoked    : Det_ReportError, Spi_InternalWriteIB, Spi_HWInit
**
** Registers Used      : None
*******************************************************************************/
#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI175][R4, SPI175] */
/* TRACE [R4, SPI298] */
/* TRACE [R4, SPI299] */
FUNC(void, SPI_PUBLIC_CODE) Spi_Init
/* TRACE [R3, SPI013][R4, SPI013] */
/* TRACE [R3, SPI082][R4, SPI082] */
(P2CONST(Spi_ConfigType, AUTOMATIC, SPI_APPL_CONST) ConfigPtr)
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) || \
                                             (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /* Declare a local pointer to point to the Sequence Config Data */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Declare a local pointer to point to the Configured chipselect of job */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;
  P2VAR(Spi_CsihOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihOsBaseAddr;
  #endif /*END of SPI_CSIH_CONFIGURED */
  Spi_JobType LddJobIndex;
  Spi_HWUnitType LddHWUnit;
  #endif /*END of SPI_PERSISTENT_HW_CONFIGURATION_ENABLED */

  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON)
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;
  P2VAR(Spi_MainOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainOsBaseAddr;

  #if (SPI_CSIG_CONFIGURED == STD_ON)
  P2VAR(Spi_CsigOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigOsBaseAddr;
  #endif /*END of SPI_CSIG_CONFIGURED */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfigCSConfig;
  Spi_HWUnitType LddHWUnitNumber;
  Spi_JobType LddJobIndexCSConfig;
  Spi_JobType LddNoOfJobs;
  uint32 LulBRSRegIndex;
  #endif /*END of SPI_CSIH_CONFIGURED */

  /* MISRA Violation: START Msg(4:0759)-4 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-4 */

  uint8 LucHWMemoryMode;
  #endif /* #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) */

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  boolean LblErrorFlag;
  #endif /*END of SPI_DEV_ERROR_DETECT */

  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Defining a local pointer for the status byte */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStatusPtr;
  #endif /*
          * END of ((SPI_LEVEL_DELIVERED == SPI_ONE) ||
          *        (SPI_LEVEL_DELIVERED == SPI_TWO))
          */

  #if (SPI_CANCEL_API == STD_ON) || (SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                        (SPI_LEVEL_DELIVERED == SPI_TWO)
  uint8 LucVar;
  #elif ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) || \
                                       (SPI_HW_PRIORITY_ENABLED == STD_ON))
  uint8 LucVar;
  #endif
  #if (SPI_EB_CONFIGURED == STD_ON)
  Spi_NumberOfDataType LddNoOfBuffers;
  #endif

  Spi_JobType LddNumJobs;
  Spi_SequenceType LddNumSeq;
  Spi_ChannelType LddNumChannel;

  /* Loop back self test for configured HW units */
  #if (SPI_LOOPBACK_SELFTEST == STD_ON)
  Spi_LoopBackSelfTest();
  #endif

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  LblErrorFlag = SPI_FALSE;

  /* Check if SPI configuration pointer is a NULL Pointer */
  if (NULL_PTR == ConfigPtr)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                           SPI_INIT_SID, SPI_E_PARAM_CONFIG);
    LblErrorFlag = SPI_TRUE;
  }
  else
  {
    /* No action required */
  }
  #if (SPI_ALREADY_INIT_DET_CHECK == STD_ON)
  if (SPI_UNINIT != Spi_GddDriverStatus)
  {
    /* TRACE [R3, SPI233][R4, SPI233] */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_INIT_SID, SPI_E_ALREADY_INITIALIZED);
    LblErrorFlag = SPI_TRUE;
  }
  else
  {
    /* No action required */
  }
  #endif /* #if (SPI_ALREADY_INIT_DET_CHECK == STD_ON) */
  /* If no DET errors, continue */
  if (SPI_FALSE == LblErrorFlag)

  #endif /* (SPI_DEV_ERROR_DETECT == STD_ON) */
  {
    /* Initialize the module only if Database is present */
    if (SPI_DBTOC_VALUE != ConfigPtr->ulStartOfDbToc)
    {
      #if (SPI_DEV_ERROR_DETECT == STD_ON)
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_INIT_SID, SPI_E_INVALID_DATABASE);
      #endif /* (SPI_DEV_ERROR_DETECT == STD_ON) */
    }
    else /* ConfigPtr->ulStartOfDbToc != SPI_DBTOC_VALUE */
    {
      /* Load ConfigPtr to Global pointer variable  */
      Spi_GpConfigPtr = ConfigPtr;
      /* MISRA Violation: START Msg(4:0316)-11 */
      /* Load first channel to Global pointer variable */
      Spi_GpFirstChannel =
       (P2CONST(Spi_ChannelPBConfigType, SPI_DATA, SPI_PRIVATE_CONST))
                                                 Spi_GpConfigPtr->pFirstChannel;

      /* Load first job to Global pointer variable*/
      Spi_GpFirstJob =
       (P2CONST(Spi_JobConfigType, SPI_DATA, SPI_PRIVATE_CONST))
                                                 Spi_GpConfigPtr->pFirstJob;

      /*  Load first sequence to Global pointer variable */
      Spi_GpFirstSeq =
        (P2CONST(Spi_SequenceConfigType, SPI_DATA, SPI_PRIVATE_CONST))
                                                 Spi_GpConfigPtr->pFirstSeq;

      /*  Load first job to Global pointer variable */
      Spi_GpFirstJobList =
        (P2CONST(Spi_JobListType, SPI_DATA, SPI_PRIVATE_CONST))
                                                 Spi_GpConfigPtr->pJobList;
      /* END Msg(4:0316)-11 */

      /* Load the number of jobs configured as zero */
      LddNumJobs = SPI_ZERO;

      /* MISRA Violation: START Msg(4:2877)-9 */
      while (SPI_MAX_JOB > LddNumJobs)
      /* END Msg(4:2877)-9 */
      {
        /* TRACE [R3, SPI015][R4, SPI015] */
        /* Update contents of Job result pointer */
        Spi_GaaJobResult[LddNumJobs] = SPI_JOB_OK;
        /* MISRA Violation: START Msg(4:2984)-10 */
        /* Increment number of jobs configured */
        LddNumJobs++;
        /* END Msg(4:2984)-10 */
      }

      /* Load the number of sequence configured as zero */
      LddNumSeq = SPI_ZERO ;

      /* MISRA Violation: START Msg(4:2877)-9 */
      while (SPI_MAX_SEQUENCE > LddNumSeq)
      /* END Msg(4:2877)-9 */
      {
        /* TRACE [R3, SPI015][R4, SPI015] */
        /* Update contents of Sequence result pointer */
        Spi_GaaSeqResult[LddNumSeq] = SPI_SEQ_OK;

        #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) && \
                                       (SPI_HW_PRIORITY_ENABLED == STD_ON))
        /* MISRA Violation: START Msg(4:0488)-2 */
        LpSeqConfig = Spi_GpFirstSeq + LddNumSeq;
        /* END Msg(4:0488)-2 */
        if (SPI_TRUE == LpSeqConfig->blIsHighPriority)
        {
          /* MISRA Violation: START Msg(4:0488)-2 */
          /* Get the pointer to the job list */
          LpJobList = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
          /* END Msg(4:0488)-2 */

          /* Get the index of the job and sequence */
          LddJobIndex = LpJobList->ddJobIndex;

          /* MISRA Violation: START Msg(4:0488)-2 */
          /* Get the pointer of the first job linked to this sequence */
          LpJobConfig = Spi_GpFirstJob + LddJobIndex;
          /* END Msg(4:0488)-2 */

          LddHWUnit = LpJobConfig->ddHWUnitIndex;

          /* Get the pointer to the structure of HW Unit information */
          LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

          #if ((SPI_CSIG_CONFIGURED == STD_ON) && \
                                           (SPI_CSIH_CONFIGURED == STD_ON))
          if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
          #endif /*
                  * (SPI_CSIG_CONFIGURED == STD_ON) && \
                  *                       (SPI_CSIH_CONFIGURED == STD_ON)
                  */
          {
            #if (SPI_CSIH_CONFIGURED == STD_ON)
            /* Get the CSIH base address */
            LpCsihOsBaseAddr =
                           (Spi_CsihOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;

            /* MISRA Violation: START Msg(4:0488)-2 */
            /* Get the value for multiple chip selects configured */
            LpChipSelect =
                    (Spi_GpConfigPtr->pCSArray) + (LpJobConfig->ucCSArrayIndex);
            /* END Msg(4:0488)-2 */

            /* Initialize CSIH configuration register */
            LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect] =
                                                 LpJobConfig->ulConfigRegValue;
            #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
          }
          #if ((SPI_CSIG_CONFIGURED == STD_ON) && \
                                         (SPI_CSIH_CONFIGURED == STD_ON))
          else
          #endif /*
                  * (SPI_CSIG_CONFIGURED == STD_ON) && \
                  *                       (SPI_CSIH_CONFIGURED == STD_ON)
                  */
          {
            /* No Action Required */
          }
        }
        else
        {
          /* No action required */
        }
        #endif /*
                * (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) && \
                *                       (SPI_HW_PRIORITY_ENABLED == STD_ON)
                */
        /* MISRA Violation: START Msg(4:2984)-10 */
        /* Increment number of sequences configured */
        LddNumSeq++;
        /* END Msg(4:2984)-10 */
      }

      /* Get the number of channels configured */
      LddNumChannel = SPI_ZERO;

      /* Get the pointer to the post-build structure of channel */
      LpPBChannelConfig = Spi_GpFirstChannel;

      while (SPI_MAX_CHANNEL > LddNumChannel)
      {
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
        #endif
        {
          #if (SPI_EB_CONFIGURED == STD_ON)

          LddNoOfBuffers = LpPBChannelConfig->ddBufferIndex;

          /* Length of external buffer in RAM area of EB */
          Spi_GaaChannelEBData[LddNoOfBuffers].ddEBLength =
                                         (LpPBChannelConfig->ddNoOfBuffers);

          /*
           * Copy the source pointer to RAM area allocated for the external
           * buffer attributes of the channel
           */
          Spi_GaaChannelEBData[LddNoOfBuffers].pSrcPtr = NULL_PTR;
          /*
           * Copy the destination pointer value to a local pointer
           * variable
           */
          Spi_GaaChannelEBData[LddNoOfBuffers].pDestPtr = NULL_PTR;

          #endif /* (SPI_EB_CONFIGURED == STD_ON) */
        }
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        else
        #endif /* (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */
        {
          #if (SPI_IB_CONFIGURED == STD_ON)
          Spi_InternalWriteIB(LddNumChannel, NULL_PTR);
          #endif /* (SPI_IB_CONFIGURED == STD_ON) */
        }

        /* MISRA Violation: START Msg(4:0489)-1 */
        LpPBChannelConfig++;
        /* END Msg(4:0489)-1 */

        /* Increment the number of channels */
        LddNumChannel++;
      } /* End of while (LddNumChannel < SPI_MAX_CHANNEL) */

      /* TRACE [R3, SPI154][R4, SPI154] */
      /* TRACE [R3, SPI151][R4, SPI151] */
      #if (SPI_LEVEL_DELIVERED == SPI_TWO)
      /*Global variable for asynchronous mode is polling mode */
      Spi_GddAsyncMode = SPI_POLLING_MODE;
      #else
      /* Set default asynchronous transmit mode as interrupt mode */
      Spi_GddAsyncMode = SPI_INTERRUPT_MODE;
      #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */

      #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
      Spi_HWInit();
      #endif

      #if (SPI_CANCEL_API == STD_ON)
      /* Initialize the counter as zero */
      LucVar = SPI_ZERO;
      /* MISRA Violation: START Msg(4:2877)-9 */
      while ((uint8)SPI_MAX_CANCEL_BYTES > LucVar)
      /* END Msg  (4:2877)-9 */
      {
        /* Initialize the cancel status byte as zero */
        Spi_GaaSeqCancel[LucVar] = SPI_ZERO;
        /* MISRA Violation: START Msg(4:2984)-10 */
        /* Increment number of cancel status bytes */
        LucVar++;
        /* END Msg  (4:2984)-10 */
      }
      #endif /* (SPI_CANCEL_API == STD_ON) */

      #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
      /* Initialize the counter as zero */
      LucVar = SPI_ZERO;
      LpStatusPtr = Spi_GpConfigPtr->pStatusArray;

      while (LucVar < Spi_GpConfigPtr->ucNoofStatusByte)
      {
        /* Initialize the status byte as zero */
        *LpStatusPtr = SPI_ZERO;

        /* MISRA Violation: START Msg(4:0489)-1 */
        /* Increment the pointer to status byte */
        LpStatusPtr++;
        /* END Msg (4:0489)-1 */

        /* Increment the counter */
        LucVar++;
      }

      /* Initialize the queue elements with zero */
      /* Initialize the counter as zero */
      LucVar = SPI_ZERO;

      while (SPI_MAX_QUEUE > LucVar)
      {
        Spi_GblQueueStatus[LucVar] = SPI_QUEUE_EMPTY;
        Spi_GddQueueIndex[LucVar] = SPI_ZERO;

        /* Increment number of jobs configured */
        LucVar++;
      }
      #endif /*
              * #if ((SPI_LEVEL_DELIVERED == SPI_ONE) ||
              *                         (SPI_LEVEL_DELIVERED == SPI_TWO))
              */

      #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
      Spi_GucHwUnitStatus = SPI_ZERO;
      #endif

      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      /* Initialize the queue elements with zero */
      /* Initialize the counter as zero */
      LucVar = SPI_ZERO;
      /* MISRA Violation: START Msg(4:2877)-9 */
      while ((uint8)SPI_MAX_CSIH_HW_INDEX > LucVar)
      /* END Msg(4:2877)-9 */
      {
        Spi_GaaHighPriorityCommRequest[LucVar] = SPI_FALSE;
        Spi_GaaHighPriorityCommActive[LucVar] = SPI_FALSE;
        Spi_GaaHighPriorityCommRequestAtIdle[LucVar] = SPI_FALSE;
        Spi_GaaHighPrioritySequence[LucVar] = SPI_NO_SEQ;
        #if (SPI_MAX_CSIH_HW_INDEX != SPI_ONE)
        /* Increment number of jobs configured */
        LucVar++;
        #endif
      }
      #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */

      #if ((SPI_LEVEL_DELIVERED == SPI_TWO) || \
                                            (SPI_LEVEL_DELIVERED == SPI_ZERO))
      Spi_GblSyncTx = SPI_FALSE;
      #endif

      #if(SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
      Spi_GusHwStatus = SPI_ZERO;
      #endif
      Spi_GusAllQueueSts = SPI_ZERO;
      /* TRACE [R3, SPI128][R4, SPI128] */
      /* TRACE [R3, SPI015][R4, SPI015] */
      /* TRACE [R4, SPI283] */
      /* Global Status variable is SPI_IDLE */
      Spi_GddDriverStatus = SPI_IDLE;
    } /* Else of ConfigPtr->ulStartOfDbToc != SPI_DBTOC_VALUE */

    #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON)
    /* Load the number of sequence configured as zero */
    LddNumSeq = SPI_ZERO;
    while (SPI_MAX_SEQUENCE > LddNumSeq)
    {
      /* MISRA Violation: START Msg(4:0488)-2 */
      LpSeqConfig = Spi_GpFirstSeq + LddNumSeq;
      /* Get the pointer to the job list */
      LpJobList = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
      /* Get the index of the job and sequence */
      LddJobIndex = LpJobList->ddJobIndex;
      /* Get the pointer of the first job linked to this sequence */
      LpJobConfig = Spi_GpFirstJob + LddJobIndex;

      LddHWUnit = LpJobConfig->ddHWUnitIndex;
      /* Get the pointer to the structure of HW Unit information */
      LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];
      /* Increment number of sequences configured */
      LddNumSeq++;

      LpPBChannelConfig = Spi_GpFirstChannel + (*(LpJobConfig->pChannelList));
      /* END Msg(4:0488)-2 */
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
      #endif

      #if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO))
      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
      #else
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
      #endif /*
              * ((SPI_CSIH_CONFIGURED == STD_ON) &&
              *                               (SPI_LEVEL_DELIVERED != SPI_ZERO))
              */

      /* Get the main user base address */
      LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;
      /* Get the main OS base address */
      LpMainOsBaseAddr = LpHWUnitInfo->pHwMainOsBaseAddress;

      /* Reset the PWR bit since other registers need to be written */
      LpMainUserBaseAddr->ucMainCTL0 =
                                LpMainUserBaseAddr->ucMainCTL0 & SPI_RESET_PWR;

      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* Clear the status register */
        LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIG_CLR_STS_FLAGS;

        /* MISRA Violation: START Msg(4:0316)-11 */
        /* Get the OS base address of the HW Unit */
        LpCsigOsBaseAddr = (Spi_CsigOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
        /* END Msg(4:0316)-11 */

        /* Load the control register 1 with Ctl1 reg value of current Job */
        LpMainOsBaseAddr->ulMainCTL1 =
              (LpJobConfig->ulMainCtl1Value) & SPI_CSRI_AND_MASK;

        /* Set the SLIT bit */
        LpMainOsBaseAddr->ulMainCTL1 =
                                LpMainOsBaseAddr->ulMainCTL1 | SPI_SET_SLIT;

        /* Update the Baud rate and Pre-scalar values from control register2 */
        LpMainOsBaseAddr->usMainCTL2 = LpJobConfig->usCtl2Value;

        /*
         * To load configuration register, read the existing communication
         * type values  to a local union variable
         */
        /* MISRA Violation: START Msg(6:0306)-8 */
        LunDataAccess1.ulRegData = LpJobConfig->ulConfigRegValue;
        /* END Msg(6:0306)-8 */

        /* Load the local variable with data width */
        LunDataAccess1.ucRegData4[3] =
                                LunDataAccess1.ucRegData4[3] & SPI_DLS_MASK;
        LunDataAccess1.ucRegData4[3] =
                LunDataAccess1.ucRegData4[3] | LpPBChannelConfig->ucDLSSetting;
        /* Load the local variable with configured direction */
        if (SPI_TRUE == LpPBChannelConfig->blDirection)
        {
          /* Direction is LSB, set DIR bit */
          LunDataAccess1.ucRegData4[2] =
                                LunDataAccess1.ucRegData4[2] | SPI_SET_DIR_LSB;
        }
        else
        {
          /* Direction is MSB, reset DIR bit */
          LunDataAccess1.ucRegData4[2] =
                            LunDataAccess1.ucRegData4[2] & SPI_RESET_DIR_LSB;
        }

        /* Load back the value to configuration register */
        LpCsigOsBaseAddr->ulCSIGCFG0 = LunDataAccess1.ulRegData;
        #endif /* #if (SPI_CSIG_CONFIGURED == STD_ON) */
      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* Clear the status register */
        LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIH_CLR_STS_FLAGS;

        LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
        /* MISRA Violation: START Msg(4:0316)-11 */
        /* Get the OS base address of the HW Unit */
        LpCsihOsBaseAddr = (Spi_CsihOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
        /* END Msg(4:0316)-11 */

        /* Load the local union variable with Ctl1 reg value of current Job */
        LunDataAccess1.ulRegData = LpJobConfig->ulMainCtl1Value;

        /* Write the value with configured polarity of all chip selects */
        LunDataAccess1.ucRegData4[1] =
                            Spi_GpConfigPtr->aaChipSelect[LddHWUnitNumber];

        /* Load the control register 1 with the value of local union variable */
        LpMainOsBaseAddr->ulMainCTL1 = LunDataAccess1.ulRegData;

        #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
        if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
        {
          /* Set the SLIT bit */
          LpMainOsBaseAddr->ulMainCTL1 =
                                LpMainOsBaseAddr->ulMainCTL1 | SPI_SET_SLIT;
        }
        else
        {
          /* No action required */
        }
        #endif /* (SPI_DIRECT_ACCESS_MODE == STD_ON) */
        /* Update the Pre-scalar value from control register2 */
        LpMainOsBaseAddr->usMainCTL2 = (LpJobConfig->usCtl2Value) &
                                                             SPI_CSIH_PRE_MASK;

        #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
            (SPI_TX_ONLY_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
        if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
        {
          /* Initialize CSIH memory register */
          LpCsihOsBaseAddr->usCSIHMCTL0 = LpJobConfig->usMCtl0Value;
        }
        else
        {
          /* No action required */
        }
        #endif /*
                * ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
                *  (SPI_TX_ONLY_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
                */

        #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        if ((SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode) ||
                              (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode))
        {
          /* Get the number of jobs */
          LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
        }
        else
        #endif /*
                * ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
                *                                (SPI_TX_ONLY_MODE == STD_ON))
                */
        {
          LddNoOfJobs = SPI_ONE;
        }

        do
        {
          LddJobIndexCSConfig = LpJobList->ddJobIndex;
          /* MISRA Violation: START Msg(4:0488)-2 */
          LpJobConfigCSConfig = Spi_GpFirstJob + LddJobIndexCSConfig;

          /* Get the value for multiple chip selects configured */
          LpChipSelect = (Spi_GpConfigPtr->pCSArray) +
                                        (LpJobConfigCSConfig->ucCSArrayIndex);
          /* END Msg(4:0488)-2 */
          #if ((SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) \
                                             || (SPI_TX_ONLY_MODE == STD_ON))
          if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
          {
            /* MISRA Violation: START Msg(4:0488)-2 */
            /* Get the pointer to the post-build structure of the channel */
            LpPBChannelConfig = Spi_GpFirstChannel +
                                        (*LpJobConfigCSConfig->pChannelList);
            /* END Msg(4:0488)-2 */
          }
          else
          {
            /* No action required */
          }
          #endif /*
                  * ((SPI_FIFO_MODE == STD_ON) || \
                  *         (SPI_DUAL_BUFFER_MODE == STD_ON) || \
                  *                               (SPI_TX_ONLY_MODE == STD_ON))
                  */

          /*
           * To load configuration register, read the existing communication
           * type values  to a local union variable
           */
          LunDataAccess1.ulRegData = LpJobConfigCSConfig->ulConfigRegValue;
          /* Load the local variable with data width */
          LunDataAccess1.ucRegData4[3] =
                              LunDataAccess1.ucRegData4[3] & SPI_DLS_MASK;
          LunDataAccess1.ucRegData4[3] =
              LunDataAccess1.ucRegData4[3] | LpPBChannelConfig->ucDLSSetting;

          /* Load the local variable with configured direction */
          if (SPI_TRUE == LpPBChannelConfig->blDirection)
          {
            /* Direction is LSB, set DIR bit */
            LunDataAccess1.ucRegData4[2] =
                          LunDataAccess1.ucRegData4[2] | SPI_SET_DIR_LSB;
          }
          else
          {
            /* Direction is MSB, reset DIR bit */
            LunDataAccess1.ucRegData4[2] =
                          LunDataAccess1.ucRegData4[2] & SPI_RESET_DIR_LSB;
          }

          /* Get the index of the baud rate register */
          LulBRSRegIndex =
                    (((LpJobConfigCSConfig->ulConfigRegValue) &
                                    SPI_CSIH_BRS_SELECT_MASK) >> SPI_THIRTY);

          /* MISRA Violation: START Msg(4:4491)-7 */
          /* Update the Baud rate value from control register2 */
          LpCsihOsBaseAddr->usCSIHBRS[LulBRSRegIndex] =
                      (LpJobConfigCSConfig->usCtl2Value) & SPI_CSIH_BRS_MASK;
          /* END Msg(4:4491)-7 */

          #if( SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
          if (SPI_PERIPHERAL_ENGINE_CS == LpJobConfig->ddCSType)
          #endif
          {
            /* Load the number of chip selects */
            LucVar = LpJobConfigCSConfig->ucNoOfCS;

            do
            {
              /* Initialize CSIH configuration register */
              LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect] =
                                                  LunDataAccess1.ulRegData;
              /* Decrement number of chip selects */
              LucVar--;

              /* MISRA Violation: START Msg(4:0489)-1 */
              LpChipSelect++;

            }while (SPI_ZERO < LucVar);
          }
          #if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
          else
          {
            /* No action required */
          }
          #endif /* (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION) */

          LpJobList--;

          /* END Msg(4:0489)-1 */
          LddNoOfJobs--;

        /* MISRA Violation: START Msg(4:2877)-9 */
        }while (SPI_ZERO < LddNoOfJobs);
        /* End Msg(4:2877)-9 */
        #endif /* #if (SPI_CSIH_CONFIGURED == STD_ON) */
      }
      if (SPI_ZERO < LucHWMemoryMode)
      {
        /* Load Main CTL0 register, without setting PWR bit */
        LpMainUserBaseAddr->ucMainCTL0 = SPI_SET_MEMORY_ACCESS;
      }
      else
      {
        /* Load Main CTL0 register, setting PWR bit at the same time */
        LpMainUserBaseAddr->ucMainCTL0 = SPI_SET_DIRECT_ACCESS;
      }
    } /*   while (LddNumSeq < SPI_MAX_SEQUENCE) */
  #endif /* #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) */


  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_DeInit
**
** Service ID          : 0x01
**
** Description         : This service is used for de-initialization of this
**                       module.
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : None
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : None
**
** Global Variable     : Spi_GddDriverStatus
**
** Function invoked    : Det_ReportError, Spi_HWDeInit
**
** Registers Used      : None
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI021][R4, SPI021] */
/* TRACE [R4, SPI300] */
/* TRACE [R4, SPI301] */
/* TRACE [R4, SPI302] */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_DeInit(void)
{
  Std_ReturnType LenReturnValue;

  LenReturnValue = E_NOT_OK;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* TRACE [R3, SPI046][R4, SPI046] */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_DEINIT_SID, SPI_E_UNINIT);
  }

  else
  #endif
  {
    /* Check if Global status variable is SPI_BUSY */
    /* TRACE [R4, SPI252] */
    /* TRACE [R4, SPI253] */
    if (SPI_BUSY != Spi_GddDriverStatus)
    {
      Spi_HWDeInit();
      LenReturnValue = E_OK;

      /* TRACE [R3, SPI022][R4, SPI022] */
      /* Update the SPI driver status as uninitialized */
      Spi_GddDriverStatus = SPI_UNINIT;
    }
    else
    {
      /* No action required */
    }
  }

  /* Return the value */
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_WriteIB
**
** Service ID          : 0x02
**
** Description         : This service for writing one or more data to an
**                       IB SPI Handler/Driver channel specified
**                       by parameter.
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Channel - Channel ID
**                       DataBufferPtr - Pointer to source data buffer
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GpFirstChannel
**
** Function invoked    : Det_ReportError, Spi_InternalWriteIB
**
** Registers Used      : None
*******************************************************************************/

/* TRACE [R4, SPI304] */
#if (((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)) && (SPI_IB_CONFIGURED == STD_ON))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI177][R4, SPI177] */
/* TRACE [R3, SPI018][R4, SPI018] */

FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_WriteIB(Spi_ChannelType Channel,
           P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) DataBufferPtr)
{
  #if ((SPI_DEV_ERROR_DETECT == STD_ON) && \
       (SPI_CHANNEL_BUFFERS_ALLOWED != SPI_ZERO))
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #endif
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;


  /* TRACE [R4, SPI306] */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_WRITEIB_SID,
                                                          SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check if the channel ID passed, is valid */
  if (SPI_MAX_CHANNEL <= Channel)
  {
    /* TRACE [R3, SPI004][R4, SPI004] */
    /* TRACE [R3, SPI031][R4, SPI031] */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_WRITEIB_SID, SPI_E_PARAM_CHANNEL);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  /* TRACE [R4, SPI305] */
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  /* Check for no DET errors */
  if (E_OK == LenReturnValue)
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the post-build structure of the requested channel */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(4:0488)-2 */

    /* Check if the channel is configured with external buffer */
    if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
    {
      /* TRACE [R3, SPI004][R4, SPI004] */
      /* TRACE [R3, SPI031][R4, SPI031] */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_WRITEIB_SID, SPI_E_PARAM_CHANNEL);
      LenReturnValue = E_NOT_OK;
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
  #endif /* End of (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */

  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* End of (SPI_DEV_ERROR_DETECT == STD_ON) */

   /* TRACE [R3, SPI024][R4, SPI024] */
  {
    #if (SPI_IB_CONFIGURED == STD_ON)
    Spi_InternalWriteIB(Channel, DataBufferPtr);
    #endif /* End of (SPI_IB_CONFIGURED == STD_ON) */
  } /* End of all operations if there is no DET error */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /*
        * End of ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) ||
        * (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
        */

/*******************************************************************************
** Function Name       : Spi_AsyncTransmit
**
** Service ID          : 0x03
**
** Description         : This service for transmitting data asynchronously
**
** Sync/Async          : Asynchronous.
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaSeqResult
**                       Spi_GpFirstSeq, Spi_GpFirstJob, Spi_GaaJobResult,
**                       Spi_GaaSeqCancel, Spi_GaaSeqQueue,
**                       Spi_GaaJobQueue, Spi_GpFirstJobList,
**                       Spi_GblQueueStatus, Spi_GaaJobCount,
**                       Spi_GddQueueIndex, Spi_GusAllQueueSts,
**                       Spi_GstHWUnitInfo
**
** Function invoked    : Det_ReportError, Spi_InitiateJobTx, Spi_PushToQueue
**                       SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used      : None
*******************************************************************************/

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI178][R4, SPI178] */
/* TRACE [R3, SPI086][R4, SPI086] */
/* TRACE [R4, SPI308] */
/* TRACE [R4, SPI310] */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_AsyncTransmit
                                               (Spi_SequenceType Sequence)
{
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;

  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #if ((SPI_CSIH_CONFIGURED == STD_ON) || ((SPI_DEV_ERROR_DETECT == STD_ON) && \
                                          (SPI_LEVEL_DELIVERED == SPI_TWO)))
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  #endif
  /*
   * Declare a local pointer to point to status bytes ROM value for the
   * sequence
   */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  /* Declare a local pointer to point to the start byte of RAM area */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;

  Std_ReturnType LenReturnValue;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnit;
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  Spi_JobType LddJobListIndex;
  Spi_JobType LddReqJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddLowestQueueIndex;

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  Spi_JobType LddCntrForJobsReq;
  Spi_JobType LddJob;
  #endif

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_JobType LddSeqCounterBottom;
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  boolean LblInitiateTx;
  #endif
  uint8 LucHWMemoryMode;
  uint8 LucVar;
  uint8 LucMask;
  uint8 LucQueueIndex;

  LenReturnValue = E_OK;
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  LddJob = SPI_ZERO;
  #endif

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_ASYNCTRANSMIT_SID, SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* TRACE [R3, SPI032][R4, SPI032] */
  /* Check if the sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_ASYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check if any DET error has occurred to check other DET errors */
  if (E_OK == LenReturnValue)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /* END Msg(4:0488)-2 */

    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the job list */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* END Msg(4:0488)-2 */

    #if (((SPI_DEV_ERROR_DETECT == STD_ON) && \
                                          (SPI_LEVEL_DELIVERED == SPI_TWO)) || \
                                          (SPI_CSIH_CONFIGURED == STD_ON))
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* TRACE [R3, SPI055][R4, SPI055] */
    /* Get the pointer of the last job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + (LpJobList->ddJobIndex);
    /* END Msg(4:0488)-2 */
    #endif

    #if (SPI_DEV_ERROR_DETECT == STD_ON)
    /* TRACE [R4, SPI266] */
    /* Check if the requested sequence already pending */
    if (SPI_SEQ_PENDING == Spi_GaaSeqResult[Sequence])
    {
      /* Report to DET */
      /* TRACE [R3, SPI081][R4, SPI081] */
      /* TRACE [R4, SPI243] */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_ASYNCTRANSMIT_SID, SPI_E_SEQ_PENDING);
      LenReturnValue = E_NOT_OK;
    }

    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    /*
     * Check if the HW Unit of the job is configured for synchronous
     * transmission
     */
    else if (SPI_TRUE ==
               (Spi_GstHWUnitInfo[LpJobConfig->ddHWUnitIndex].blIsSynchronous))
    {
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                               SPI_ASYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
      LenReturnValue = E_NOT_OK;
    }
    #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */
    else
    {
      /* No action required */
    }
    #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }

  /* TRACE [R4, SPI309] */
  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /* Get the status byte mask for the requested sequence */
    LucMask = LpSeqConfig->ucStsByteMask;

    if (SPI_ZERO != LucMask)
    {
      /* MISRA Violation: START Msg(4:0488)-2 */
      LucVar =
        *((Spi_GpConfigPtr->pStatusArray) + (LpSeqConfig->usStsCheckByteIdx));
      /* END Msg(4:0488)-2 */

      LucVar = LucVar & LucMask;
    }
    else
    {
      /* No action required */
    }

    /*
     * Check if status byte mask is zero. This is to check if the requested
     * sequence shares any job with on - going sequence. If status byte mask
     * zero, check if any sequence with shared job in progress
     */
    if ((SPI_ZERO != LucMask) && (SPI_ZERO != LucVar))
    {
      #if (SPI_DEV_ERROR_DETECT == STD_ON)
      /*
       * The sequence sharing job with requested sequence is in progress
       * so, report to DET
       */
      /* TRACE [R3, SPI081][R4, SPI081] */
      /* TRACE [R4, SPI243] */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                  SPI_ASYNCTRANSMIT_SID, SPI_E_SEQ_PENDING);
      #endif
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      #if (SPI_CANCEL_API == STD_ON)
      /* Get the cancel byte offset for the requested sequence  */
      LucVar = Spi_GstSeqProcess[Sequence].ucCancelOffset;
      /* Get the cancel byte mask */
      LucMask = Spi_GstSeqProcess[Sequence].ucCancelMask;

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif
      /* MISRA Violation: START Msg(4:4397)-12 */
      /* Reset the cancel bit array for this sequence */
      Spi_GaaSeqCancel[LucVar] = Spi_GaaSeqCancel[LucVar] & (~LucMask);
      /* END Msg(4:4397)-12 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif
      #endif /* End loop of (SPI_CANCEL_API == STD_ON) */

      /* MISRA Violation: START Msg(4:0488)-2 */
      /* Get the pointer to status bytes ROM value for the sequence */
      LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                        (LpSeqConfig->usStsValueStartByteIdx);
      /* END Msg(4:0488)-2 */
      /* Get the number of status byte ROM value */
      LucVar = LpSeqConfig->ucNoOfStsByteValue;
      /* MISRA Violation: START Msg(4:0488)-2 */
      /* Get the pointer to the start byte of RAM area */
      LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                        (LpSeqConfig->usStsUpdateStartByteIdx);
      /* END Msg(4:0488)-2 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif
      /* TRACE [R3, SPI020][R4, SPI020] */
      /* Update driver status as busy */
      Spi_GddDriverStatus = SPI_BUSY;

      /*
       * Since no errors are reported, accept the sequence for transmission
       * Update the sequence result as SPI_SEQ_PENDING
       */
      Spi_GaaSeqResult[Sequence] = SPI_SEQ_PENDING;

      while (SPI_ZERO < LucVar)
      {
        /*
         * Update the status bit of the requested sequence and the sequences
         * that have jobs shared with the requested sequence
         */
        (*LpStsByte) = (*LpStsByte) | *LpStsByteValue;

        /* MISRA Violation: START Msg(4:0489)-1 */
        LpStsByte++;
        LpStsByteValue++;
        /* END Msg(4:0489)-1 */

        LucVar--;
      }

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif

      /* Get the job list index of the last job of the sequence */
      LddJobListIndex = LpSeqConfig->ddJobListIndex;

      /* MISRA Violation: START Msg(4:0488)-2 */
      /* Get the pointer to the job list */
      LpJobList = Spi_GpFirstJobList + LddJobListIndex;
      /* END Msg(4:0488)-2 */

      /* Get the number of jobs configured for the requested sequence */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      /* Get the index of the job list for the first job of the sequence */
      LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

      #if (SPI_CSIH_CONFIGURED == STD_ON)
      /* Get the HW Unit index of the any of the job in the sequence */
      LddHWUnit = LpJobConfig->ddHWUnitIndex;

      #if (SPI_CSIG_CONFIGURED == STD_ON)
      /* Check if the HW Unit is CSIH */
      if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

        /* Get the configured memory mode for this HW Unit */
        LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
        #endif
      }
      #if (SPI_CSIG_CONFIGURED == STD_ON)
      else
      #endif
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* Since HW Unit is CSIG, memory mode is DIRECT ACCESS by default */
        LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
        #endif
      }

      /* Check if Start sequence macro is enabled*/
      #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
      /* Check if the notification function is configured */
      if (NULL_PTR != LpSeqConfig->pSpiSeqStartNotification)
      {
        /* Invoke the start sequence notification function */
        LpSeqConfig->pSpiSeqStartNotification();
      }
      else
      {
        /* No action required */
      }
      #endif/* #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */

      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      if ((SPI_TWO > LucHWMemoryMode) ||
                               (SPI_TRUE == LpSeqConfig->blIsHighPriority))
      #else
      /* MISRA Violation: START Msg(4:2991)-14 */
      /* MISRA Violation: START Msg(4:2995)-15 */
      if (SPI_TWO > LucHWMemoryMode)
      /* END Msg(4:2991)-14 */
      /* END Msg(4:2995)-15 */
      #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */
      {
        #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON)\
                                         || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        /* MISRA Violation: START Msg(4:2991)-14 */
        /* MISRA Violation: START Msg(4:2995)-15 */
        if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
        /* END Msg(4:2991)-14 */
        /* END Msg(4:2995)-15 */
        {
          LddLowestQueueIndex = SPI_ZERO;
        }
        else
        {
          #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
          LddLowestQueueIndex =
             Spi_GpConfigPtr->aaHighprioirtyJobQueueIndex[LddHWUnitNumber];
          #endif
        }
        /* MISRA Violation: START Msg(4:2992)-16 */
        /* MISRA Violation: START Msg(4:2996)-17 */
        if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
        /* END Msg(4:2992)-16 */
        /* END Msg(4:2996)-17 */
        {
          /* MISRA Violation: START Msg(4:2880)-18 */
          LddLowestQueueIndex = Spi_GpConfigPtr->ddDirectAccessQueueSize;
          /* END Msg(4:2880)-18 */
        }
        else
        {
          /* No Action Required */
        }

        /* Copy a counter with number of jobs in the requested sequence */
        LddCntrForJobsReq = LddNoOfJobs;

        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        if (SPI_FALSE == LpSeqConfig->blIsHighPriority)
        #endif
        {
          LucQueueIndex = LucHWMemoryMode;
        }
        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        else
        {
          /* MISRA Violation: START Msg(4:2962)-6 */
          LucQueueIndex = (uint8)LddHWUnitNumber +
                                            SPI_MAX_CSIH_HW_INDEX + SPI_TWO;
          /* END Msg(4:2962)-6 */
        }
        #endif

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-13 */
        /* Disable relevant interrupts */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-13 */
        #endif

        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        if (SPI_FALSE == LpSeqConfig->blIsHighPriority)
        #endif
        {
          if ((SPI_QUEUE_EMPTY == (Spi_GblQueueStatus[LucQueueIndex])) ||
               ((SPI_QUEUE_FILLED == (Spi_GblQueueStatus[LucQueueIndex])) &&
                  (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex)))
          {
            /* Proceed with the communication */
            LblInitiateTx = SPI_TRUE;
          }
          else
          {
            /* Do not Proceed with the communication */
            LblInitiateTx = SPI_FALSE;
          }

        }
        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        else
        {
          /* MISRA Violation: START Msg(4:4397)-3 */
          if (SPI_ZERO == (Spi_GucHwUnitStatus & (SPI_ONE << LddHWUnitNumber)))
          {
            /* Updating the status of the hardware */
            Spi_GucHwUnitStatus = (Spi_GucHwUnitStatus |
                                                (SPI_ONE << LddHWUnitNumber));
            /* END Msg(4:4397)-3 */
            Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber] = SPI_TRUE;
            Spi_GaaHighPriorityCommActive[LddHWUnitNumber] = SPI_TRUE;
            Spi_GaaHighPriorityCommRequest[LddHWUnitNumber] = SPI_TRUE;
            /* Proceed with the communication */
            LblInitiateTx = SPI_TRUE;
          }
          else
          {
            if ((SPI_FALSE == Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
               && (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber]))
            {
              Spi_GaaHighPriorityCommRequest[LddHWUnitNumber] = SPI_TRUE;
              Spi_GaaHighPrioritySequence[LddHWUnitNumber] = Sequence;
              Spi_HWCancel(LddHWUnit);

              /* MISRA Violation: START Msg(4:2842)-5 */
              Spi_GddQueueIndex[LucQueueIndex] = LddLowestQueueIndex;
              /* END Msg(4:2842)-5 */
            }
            else
            {
              /* No action required */
            }
            /* Do not Proceed with the communication */
            LblInitiateTx = SPI_FALSE;
          }
        }
        #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */

        /* Check if the job queue is empty */
        if (SPI_TRUE == LblInitiateTx)
        {
          Spi_GddQueueIndex[LucQueueIndex] = LddLowestQueueIndex;

          if (SPI_QUEUE_EMPTY != Spi_GblQueueStatus[LucQueueIndex])
          {
            LddJob = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];
          }
          else
          {
            /* No action required */
          }
          do
          {
            /* Push the job list index into the queue */
            Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] =
                                                           LddJobListIndex;
            #if(SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
            /* Set the Job status as SPI_JOB_QUEUED*/
            /*Trace [R4, SPI194]*/
            Spi_GaaJobResult[LpJobList->ddJobIndex] = SPI_JOB_QUEUED;
            #endif
            /* Push the job count into RAM */
            Spi_GaaJobCount[LpJobList->ddJobIndex] = LpJobList->ucJobCount;
            /* Increment the job list index */
            LddJobListIndex++;

            /* MISRA Violation: START Msg(4:0489)-1 */
            /*Increment the job list*/
            LpJobList++;
            /* END Msg(4:0489)-1 */

            Spi_GddQueueIndex[LucQueueIndex]++;
            /* Decrement the number of jobs */
            LddCntrForJobsReq--;
          }while (SPI_ZERO < LddCntrForJobsReq);

          if (SPI_QUEUE_EMPTY != Spi_GblQueueStatus[LucQueueIndex])
          {
            Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] = LddJob;
          }
          else
          {
            Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_FILLED;
            /* MISRA Violation: START Msg(4:4397)-12 */
            /* MISRA Violation: START Msg(4:1891)-11 */
            /* MISRA Violation: START Msg(4:2984)-10 */
            Spi_GusAllQueueSts = Spi_GusAllQueueSts |
                                                   (SPI_ONE << LucQueueIndex);
            /* END Msg(4:1891)-11 */
            /* END Msg(4:4397)-12 */
            /* END Msg(4:2984)-10 */
            /* Point to the index of the last job pushed to the queue */
            Spi_GddQueueIndex[LucQueueIndex]--;
            /* Initiate the transmission for that sequence */
            Spi_InitiateJobTx(LddReqJobListIndex);
          }
        } /* End of queue is empty */
        else
        {
          #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
          if (SPI_FALSE == LpSeqConfig->blIsHighPriority)
          #endif
          {
            Spi_PushToQueue(Sequence, LucHWMemoryMode);
          }
          #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
          else
          {
            Spi_PushToQueue(Sequence, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
            /* Change the queue status as FILLED */
            Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_FILLED;
          }
          #endif
        } /* End of Queue is not empty */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-13 */
        /* Enable relevant interrupts */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-13 */
        #endif
        #endif /*
                * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                *           (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                *                   (SPI_FIFO_MODE == STD_ON) || \
                *                           (SPI_HW_PRIORITY_ENABLED == STD_ON))
                */
      }
      else
      {
        #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        /* MISRA Violation: START Msg(4:4397)-3 */
        /* Check the value of Global variable for Hardware status */
        if (SPI_ZERO == (Spi_GucHwUnitStatus & (SPI_ONE << LddHWUnitNumber)))
        /* END Msg(4:4397)-3 */
        {
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /* MISRA Violation: START Msg(4:3138)-13 */
          /* Disable relevant interrupts */
          SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
          /* END Msg(4:3138)-13 */
          #endif

          LucQueueIndex = LddHWUnitNumber + SPI_TWO;
          /* MISRA Violation: START Msg(4:4397)-3 */
          /* Updating the status of the hardware */
          Spi_GucHwUnitStatus = (Spi_GucHwUnitStatus |
                                                (SPI_ONE << LddHWUnitNumber));
          /* END Msg(4:4397)-3 */

          Spi_GddQueueIndex[LucQueueIndex] =
                   Spi_GpConfigPtr->aaHWUnitQueueIndex[LddHWUnit];

          /* Change the queue status as FILLED */
          Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_FILLED;

          /* MISRA Violation: START Msg(4:1891)-11 */
          /* MISRA Violation: START Msg(4:4397)-3 */
          Spi_GusAllQueueSts = (Spi_GusAllQueueSts |
                                                (SPI_ONE << (LucQueueIndex)));
          /* END Msg(4:4397)-3 */
          /* END Msg(4:1891)-11 */

          /* Put the sequence in the queue */
          Spi_GaaSeqQueue[Spi_GddQueueIndex[LucQueueIndex]] = Sequence;

          /* Initiate the transmission for that sequence */
          Spi_InitiateJobTx(LddReqJobListIndex);

          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /* MISRA Violation: START Msg(4:3138)-13 */
          /* Enable relevant interrupts */
          SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
          /* END Msg(4:3138)-13 */
          #endif
        }
        else
        {
          LucQueueIndex = LddHWUnitNumber + SPI_TWO;

          LddLowestQueueIndex = Spi_GpConfigPtr->aaHWUnitQueueIndex[LddHWUnit];

          /* Check if critical section protection is required */
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /* MISRA Violation: START Msg(4:3138)-13 */
          /*
           * Disable relevant interrupts to protect this critical
           * section
           */
          SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
          /* END Msg(4:3138)-13 */
          #endif
          /*
           * Place the sequence at the bottom of the queue by shifting
           * the sequences already in the queue by one position
           */
          LddSeqCounterBottom = Spi_GddQueueIndex[LucQueueIndex] + SPI_ONE;

          /* Load back the queue index to the bottom most element */
          Spi_GddQueueIndex[LucQueueIndex] = LddSeqCounterBottom;

          do
          {
            /* Move the sequence entry one up in the queue */
            Spi_GaaSeqQueue[LddSeqCounterBottom] =
                            Spi_GaaSeqQueue[LddSeqCounterBottom - SPI_ONE];
            /* Decrement the pointer */
            LddSeqCounterBottom--;
          }while (LddSeqCounterBottom > LddLowestQueueIndex);

          /* Place the requested sequence index at the top */
          Spi_GaaSeqQueue[LddSeqCounterBottom] = Sequence;

          /* Check if critical section protection is required */
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /* MISRA Violation: START Msg(4:3138)-13 */
          /* Disable relevant interrupts to protect this critical section */
          SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
          /* END Msg(4:3138)-13 */
          #endif
        }
        #endif /*
                * End of ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
                *                           (SPI_TX_ONLY_MODE == STD_ON))
                */
      } /* End of else loop of checking if the job queue is empty */
    } /* End of else loop of checking for sequences sharing jobs */
  } /* End of the check if any DET error has occurred */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        *   (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name       : Spi_ReadIB
**
** Service ID          : 0x04
**
** Description         : This service for reading one or more data from an
**                       IB SPI Handler/Driver channel specified by
**                       parameter
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Channel - Channel ID
**                       DataBufferPointer - Pointer to destination data
**                       buffer
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus
**
** Function invoked    : Det_ReportError, Spi_HWReadIB
**
** Registers Used      : None
*******************************************************************************/
/* TRACE [R3, SPI138][R4, SPI138] */
/* TRACE [R4, SPI312] */
/* TRACE [R4, SPI313] */
/* TRACE [R4, SPI314] */
#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI179][R4, SPI179] */
/* TRACE [R3, SPI027][R4, SPI027] */
/* TRACE [R3, SPI016][R4, SPI016] */
/* TRACE [R4, SPI315] */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_ReadIB
               (Spi_ChannelType Channel, P2VAR(Spi_DataType, AUTOMATIC,
                                          SPI_APPL_DATA) DataBufferPointer)
{
  #if(((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) && \
                                    (SPI_DEV_ERROR_DETECT == STD_ON)) || \
       ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
       ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
        (SPI_LEVEL_DELIVERED == SPI_ZERO))) || \
      ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO)))

  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #endif

  #if (((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
      ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
       (SPI_LEVEL_DELIVERED == SPI_ZERO))) || (SPI_TX_ONLY_MODE == STD_ON))
  /* Defining a local pointer variable to hold the destination data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpDesPtr;
  Spi_NumberOfDataType LddNoOfBuffers;
  #endif

  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
     ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
      (SPI_LEVEL_DELIVERED == SPI_ZERO)))
  /*
   * Defining a local pointer variable to point to internal buffer of the
   * requested channel
   */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpChannelIB;
  #endif

  #if (SPI_TX_ONLY_MODE == STD_ON)
  /* Defining a local pointer variable to hold the Tx data of requested IB */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpTxOnlyData;
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* MISRA Violation: START Msg(4:0759)-4 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-4 */
  #endif
  Spi_DataType LddData;
  #endif /* #if (SPI_TX_ONLY_MODE == STD_ON) */
  #if (((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
      ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
      (SPI_LEVEL_DELIVERED == SPI_ZERO))) || ((SPI_CSIH_CONFIGURED == STD_ON)\
       && (SPI_LEVEL_DELIVERED != SPI_ZERO)))
  uint8 LucChannelBufferType;
  #endif

  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_READIB_SID,
                                                         SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  /* Check if the channel ID passed, is valid */
  if (SPI_MAX_CHANNEL <= Channel)
  {
    /* TRACE [R3, SPI004][R4, SPI004] */
    /* TRACE [R3, SPI031][R4, SPI031] */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_READIB_SID, SPI_E_PARAM_CHANNEL);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  /* Check if the data buffer pointer passed, is NULL pointer */
  #if(SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
  if (NULL_PTR == DataBufferPointer)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_READIB_SID, SPI_E_PARAM_POINTER);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  #endif /* End of (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION) */
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  /* Check for no DET errors */
  if (E_OK == LenReturnValue)
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the post-build structure of the requested channel */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(4:0488)-2 */

    /* Check if the channel is configured with external buffer */
    if (SPI_ONE == (LpPBChannelConfig->ucChannelBufferType))
    {
      /* TRACE [R3, SPI004][R4, SPI004] */
      /* TRACE [R3, SPI031][R4, SPI031] */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_READIB_SID, SPI_E_PARAM_CHANNEL);
      LenReturnValue = E_NOT_OK;
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
  #endif /* End of (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */

  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* End of SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    #if(((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
       ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
        (SPI_LEVEL_DELIVERED == SPI_ZERO))) || \
      ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO)))
    /* Get the pointer to the post-build structure of the channel */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(4:0488)-2 */
    #endif

    #if (((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
        ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
        (SPI_LEVEL_DELIVERED == SPI_ZERO))) || \
        ((SPI_CSIH_CONFIGURED == STD_ON)  && (SPI_LEVEL_DELIVERED != SPI_ZERO)))
    /* Get the the type of the channel */
    LucChannelBufferType = LpPBChannelConfig->ucChannelBufferType;
    #endif

    #if (((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
         ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
         (SPI_LEVEL_DELIVERED == SPI_ZERO))) || (SPI_TX_ONLY_MODE == STD_ON))
    /* Copy the destination pointer value to a local pointer variable */
    LpDesPtr = DataBufferPointer;
    /* Get the number of buffers configured for the requested channel */
    LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
    #endif

    #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
         ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
         (SPI_LEVEL_DELIVERED == SPI_ZERO)))
    /* Check if the buffer type is internal buffer and not hardware buffer */
    if (SPI_TWO > LucChannelBufferType)
    {
      /* MISRA Violation: START Msg(4:0488)-2 */
      /* Get the pointer to the internal buffer of the requested channel */
      LpChannelIB = Spi_GpConfigPtr->pChannelIBRead;
      LpChannelIB = LpChannelIB + LpPBChannelConfig->ddBufferIndex;
      /* END Msg(4:0488)-2 */

      do
      {
        /*
         * Copy the data from the internal buffer to the destination data
         * buffer
         */
        /* Data width is maximum 8-bit */
        *LpDesPtr = *LpChannelIB;

        /* MISRA Violation: START Msg(4:0489)-1*/
        /* Increment the internal buffer pointer */
        LpChannelIB++;
        /* END Msg(4:0489)-1*/

        /* MISRA Violation: START Msg(4:0489)-1*/
        /* Increment the destination pointer */
        LpDesPtr++;
        /* END Msg(4:0489)-1*/

        /* Decrement the counter for number of buffers */
        LddNoOfBuffers--;
      } while (LddNoOfBuffers > SPI_ZERO);
    } /* End of operations if the buffer type is 'internal buffer' */
    else
    #endif /*
            * End of ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
            * ((SPI_DIRECT_ACCESS_MODE == STD_ON) || \
            * (SPI_FIFO_MODE == STD_ON) || (SPI_LEVEL_DELIVERED == SPI_ZERO)))
            */
    {
      #if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO))
      if (SPI_TX_ONLY_MODE_CONFIGURED ==
             (Spi_GpConfigPtr->aaHWMemoryMode[LucChannelBufferType - SPI_TWO]))
      {
        #if (SPI_TX_ONLY_MODE == STD_ON)
        /* Get the pointer to the internal buffer of the requested channel */
        /* MISRA Violation: START Msg(4:0488)-2 */
        LpTxOnlyData = Spi_GpConfigPtr->pChannelIBRead +
                     ((LpPBChannelConfig->ddBufferIndex) + SPI_RX_BUFFER_START);
        /* END Msg(4:0488)-2 */
        do
        {
          #if(SPI_8BIT_DATA_WIDTH == STD_ON)
          /*
           * Data width is maximum 8-bit. Hence, Receive the data from the Rx
           * register to local union variable
           */
          LddData = (uint8)(*LpTxOnlyData);

          #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
          LddData = *LpTxOnlyData;

          #else
          /*
           * Data width is maximum 32-bit, check if the the data width of
           * requested channel is more than 16 bits
           */
          LddData = *LpTxOnlyData;

          if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
          {
            /* MISRA Violation: START Msg(4:0489)-1 */
            LpTxOnlyData++;
            /* END Msg(4:0489)-1 */

            LddNoOfBuffers--;
            /* Check if the configured data direction is LSB first */
            if (SPI_TRUE == LpPBChannelConfig->blDirection)
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
              LddData = ((LddData) >> (SPI_SIXTEEN ));
              LunDataAccess1.usRegData5[0] = (uint16)LddData;
              (*LpTxOnlyData ) = ((*LpTxOnlyData) >> (SPI_SIXTEEN));
              LunDataAccess1.usRegData5[1] = (uint16)(*LpTxOnlyData);
            }
            else
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
               if (SPI_ZERO != LpPBChannelConfig->ucDLSSetting)
               {
                 LunDataAccess1.usRegData5[1] = (uint16)LddData;
                 LunDataAccess1.usRegData5[0] = (uint16)*LpTxOnlyData;
                 LunDataAccess1.usRegData5[0] = LunDataAccess1.usRegData5[0] <<
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
                 LunDataAccess1.ulRegData  = LunDataAccess1.ulRegData >>
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
               }
               else
               {
                 LunDataAccess1.usRegData5[1] = (uint16)LddData;
                 LunDataAccess1.usRegData5[0] = (uint16)*LpTxOnlyData;
               }
            } /* End of if(SPI_TRUE == LpPBChannelConfig->blDirection) */
            LddData = LunDataAccess1.ulRegData;
          }
          else
          {
            /* No action required */
          }
          #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON)*/

          *LpDesPtr = LddData;
          /* MISRA Violation: START Msg(4:0489)-1 */
          LpTxOnlyData++;
          /* Increment the destination pointer */
          LpDesPtr++;
          /* END Msg(4:0489)-1 */

          /* Decrement the counter for number of buffers */
          LddNoOfBuffers--;
        } while (SPI_ZERO < LddNoOfBuffers);
        #endif /* (SPI_TX_ONLY_MODE == STD_ON) */
      } /*
         *#if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED !=
         * SPI_ZERO))
         */
      #if (SPI_DUAL_BUFFER_MODE == STD_ON)
      else
      {
        /* Memory mode is 'Dual Buffer Mode' */
        Spi_HWReadIB(Channel, DataBufferPointer);
      }
      #endif /* (SPI_DUAL_BUFFER_MODE == STD_ON) */
      #endif /* End of ((SPI_CSIH_CONFIGURED == STD_ON) &&
                                      (SPI_LEVEL_DELIVERED != SPI_ZERO))*/
    }
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
                     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)) */

/*******************************************************************************
** Function Name       : Spi_SetupEB
**
** Service ID          : 0x05
**
** Description         : This service for setting the buffers and the length
**                       of data for the external buffer of the channel
**                       specified.
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Channel - Channel ID
**                       SrcDataBufferPtr - Pointer to source data buffer
**                       DesDataBufferPtr - Pointer to destination data
**                       buffer in RAM Length - Length of the data
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GpConfigPtr,
**                       Spi_GaaChannelEBData, Spi_GpFirstChannel
**
* Function invoked     : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/

/* TRACE [R3, SPI139][R4, SPI139] */
/* TRACE [R3, SPI067][R4, SPI067] */
#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI180][R4, SPI180] */
/* TRACE [R3, SPI028][R4, SPI028] */
/* TRACE [R3, SPI058][R4, SPI058] */
/* TRACE [R3, SPI030][R4, SPI030] */
/* TRACE [R4, SPI317] */
/* TRACE [R4, SPI316] */
/* TRACE [R4, SPI318] */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SetupEB
    (Spi_ChannelType Channel,
     P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_DATA) SrcDataBufferPtr,
     P2VAR(Spi_DataType, AUTOMATIC, SPI_APPL_DATA) DesDataBufferPtr,
     Spi_NumberOfDataType Length)
{
  #if ((SPI_DEV_ERROR_DETECT == STD_ON) || \
      ((SPI_EB_CONFIGURED == STD_ON) && (SPI_DEV_ERROR_DETECT == STD_OFF)))
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #endif

  #if (SPI_EB_CONFIGURED == STD_ON)
  /*
   * Defining a local pointer variable to point to buffer of the
   * requested channel
   */
  P2VAR(Spi_EBData, AUTOMATIC, SPI_CONFIG_DATA) LpChannelEB;
  #endif

  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_SETUPEB_SID,
                                                            SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the channel link-time structure */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(4:0488)-2 */

    /*
     * Check if the 'length' parameter is greater than configured length and if
     * length is equal to zero
     */
    /* TRACE [R3, SPI004][R4, SPI004] */
    /* TRACE [R3, SPI060][R4, SPI060] */
    /* TRACE [R4, SPI258] */
    if ((SPI_ZERO == Length) || (Length > (LpPBChannelConfig->ddNoOfBuffers)))
    {
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_SETUPEB_SID, SPI_E_PARAM_LENGTH);
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
  }
  /* Check if the channel ID passed, is valid */
  if (SPI_MAX_CHANNEL <= Channel)
  {
    /* TRACE [R3, SPI004][R4, SPI004] */
    /* TRACE [R3, SPI031][R4, SPI031] */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                      SPI_SETUPEB_SID, SPI_E_PARAM_CHANNEL);
    LenReturnValue = E_NOT_OK;
  }
  /* If it is valid channel ID, check if the length passed is valid */
  else
  {
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    if (E_OK == LenReturnValue)
    {
      /* Check if the requested channel is configured for internal buffer */
      if (SPI_ONE != (LpPBChannelConfig->ucChannelBufferType))
      {
        /* TRACE [R3, SPI004][R4, SPI004] */
        /* TRACE [R3, SPI031][R4, SPI031] */
        /* Report to DET */
        (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_SETUPEB_SID, SPI_E_PARAM_CHANNEL);
        LenReturnValue = E_NOT_OK;
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
    #endif /* (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */
  }

  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    #if (SPI_EB_CONFIGURED == STD_ON)
    #if (SPI_DEV_ERROR_DETECT == STD_OFF)
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the requested structure */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(4:0488)-2 */
    #endif
    /* Get the pointer to the buffer of the requested channel */
    LpChannelEB = &Spi_GaaChannelEBData[LpPBChannelConfig->ddBufferIndex];
    /*
     * Copy the source pointer to RAM area allocated for the external
     * buffer attributes of the channel
     */
    LpChannelEB->pSrcPtr = SrcDataBufferPtr;
    /* Copy the destination pointer value to a local pointer variable */
    LpChannelEB->pDestPtr = DesDataBufferPtr;
    /* Copy length for that channel */
    LpChannelEB->ddEBLength = Length;
    #endif  /* End of (SPI_EB_CONFIGURED == STD_ON) */
  } /* End of all operations if there is no DET error */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE ||
                    SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */

/*******************************************************************************
** Function Name       : Spi_GetStatus
**
** Service ID          : 0x06
**
** Description         : This service is for getting the status of SPI
**                       Driver Component
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : None
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_StatusType (SPI_UNINIT/SPI_IDLE/SPI_BUSY)
**
** Preconditions       : None
**
** Global Variable     : Spi_GddDriverStatus
**
** Function Invoked    : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI181][R4, SPI181] */
/* TRACE [R3, SPI025][R4, SPI025] */
/* TRACE [R4, SPI319] */
/* TRACE [R4, SPI345] */
/* TRACE [R4, SPI320] */
/* TRACE [R4, SPI347] */
FUNC(Spi_StatusType, SPI_PUBLIC_CODE) Spi_GetStatus(void)
{
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                 SPI_GETSTATUS_SID, SPI_E_UNINIT);
  }
  else
  {
    /* No action required */
  }
  #endif /* (SPI_DEV_ERROR_DETECT == STD_ON) */
  return(Spi_GddDriverStatus);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_GetJobResult
**
** Service ID          : 0x07
**
** Description         : This service is for getting result of the
**                       specified job
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Job - Job ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_JobResultType
**                       (SPI_JOB_OK/SPI_JOB_PENDING/SPI_JOB_FAILED)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaJobResult
**
** Function invoked    : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI026][R4, SPI026] */
/* TRACE [R3, SPI038][R4, SPI038] */
/* TRACE [R3, SPI182][R4, SPI182] */
/* TRACE [R4, SPI321] */
/* TRACE [R4, SPI322] */
FUNC(Spi_JobResultType, SPI_PUBLIC_CODE)
                       Spi_GetJobResult(Spi_JobType Job)
{
  Spi_JobResultType LddJobResult;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_GETJOBRESULT_SID, SPI_E_UNINIT);
    LddJobResult = SPI_JOB_FAILED;
  }
  else
  {
    LddJobResult = SPI_JOB_OK;
  }
  /* TRACE [R3, SPI032][R4, SPI032] */
  /* Check if the job ID passed, is valid */
  if (SPI_MAX_JOB <= Job)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_GETJOBRESULT_SID, SPI_E_PARAM_JOB);
    if (SPI_JOB_OK == LddJobResult)
    {
      LddJobResult = SPI_JOB_FAILED;
    }
    else
    {
      /* No Action Required */
    }
  }
  else
  {
    /* No Action Required */
  }


  /* TRACE [R4, SPI350] */
  if (SPI_JOB_OK == LddJobResult)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    LddJobResult = Spi_GaaJobResult[Job];
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LddJobResult);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_GetSequenceResult
**
** Service ID          : 0x08
**
** Description         : This service is for getting result of the specified
**                       sequence
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_SeqResultType
**                       (SPI_SEQ_OK/SPI_SEQ_PENDING/SPI_SEQ_FAILED/
**                        SPI_SEQ_CANCELLED)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaSeqResult
**
** Function invoked    : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI183][R4, SPI183] */
/* TRACE [R3, SPI042][R4, SPI042] */
/* TRACE [R4, SPI324] */
/* TRACE [R4, SPI353] */
/* TRACE [R4, SPI354] */
/* TRACE [R4, SPI251] */
/* TRACE [R4, SPI323] */
FUNC(Spi_SeqResultType, SPI_PUBLIC_CODE)
                       Spi_GetSequenceResult(Spi_SequenceType Sequence)
{
  Spi_SeqResultType LddSeqResult;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                  SPI_GETSEQUENCERESULT_SID, SPI_E_UNINIT);
    LddSeqResult = SPI_SEQ_FAILED;
  }
  else
  {
    LddSeqResult = SPI_SEQ_OK;
  }
  /* TRACE [R3, SPI032][R4, SPI032] */
  /* Check if the Sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                  SPI_GETSEQUENCERESULT_SID, SPI_E_PARAM_SEQ);
    if (SPI_SEQ_OK == LddSeqResult)
    {
      LddSeqResult = SPI_SEQ_FAILED;
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

  /* TRACE [R3, SPI039][R4, SPI039] */
  if (SPI_SEQ_OK == LddSeqResult)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    LddSeqResult = Spi_GaaSeqResult[Sequence];
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LddSeqResult);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_SyncTransmit
**
** Service ID          : 0x0A
**
** Description         : This service is for transmitting data synchronously
**
** Sync/Async          : Synchronous.
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GpFirstSeq,
**                       Spi_GaaSeqResult, Spi_GpFirstJob, Spi_GaaJobResult,
**                       Spi_GstHWUnitInfo, Spi_GpFirstJobList,
**                       Spi_GaaJobResult
**
** Function invoked    : Det_ReportError, Dem_ReportErrorStatus,
**                       Spi_HWTransmitSyncJob, SPI_EXIT_CRITICAL_SECTION,
**                       SPI_ENTER_CRITICAL_SECTION
**
** Registers Used      : None
*******************************************************************************/

#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI185][R4, SPI185] */
/* TRACE [R4, SPI327] */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SyncTransmit
                                                (Spi_SequenceType Sequence)
{
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddJobIndex;
  Spi_JobType LddJobListIndex;

  Std_ReturnType LenReturnValue;
  uint8 LucVar;

  /* TRACE [R4, SPI329] */
  LenReturnValue = E_OK;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_SYNCTRANSMIT_SID, SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* TRACE [R3, SPI032][R4, SPI032] */
  /* Check if the sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_SYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  if (E_OK == LenReturnValue)
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;

    LpJobList = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
    /* END Msg(4:0488)-2 */

    LddJobIndex = LpJobList->ddJobIndex;

    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer of the first job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + LddJobIndex;
    /* END Msg(4:0488)-2 */

    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    if (SPI_FALSE ==
                (Spi_GstHWUnitInfo[LpJobConfig->ddHWUnitIndex].blIsSynchronous))
    {
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                       SPI_SYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */
  }
  else
  {
    /* No action required */
  }

  if (E_OK == LenReturnValue)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /* Check if the concurrent sync transmit is enabled */
    #if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)

    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /* END Msg(4:0488)-2 */

    /* Check the value of Global variable for Hardware status */
    if (SPI_ZERO == (Spi_GusHwStatus & (LpSeqConfig->usHWListIndex)))
    {
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif

      /* Updating the status of the hardware */
      Spi_GusHwStatus = (Spi_GusHwStatus | (LpSeqConfig->usHWListIndex));

      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif
    }
    else
    {
      /* TRACE [R3, SPI135][R4, SPI135] */
      /* Report to DET */
      #if (SPI_DEV_ERROR_DETECT == STD_ON)
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_SYNCTRANSMIT_SID, SPI_E_SEQ_IN_PROCESS);
      #endif

      LenReturnValue = E_NOT_OK;
    }
    #else
    /* Check if the SPI Driver is transmitting a sequence */
    if (SPI_BUSY == Spi_GddSyncDriverStatus)
    {
      #if (SPI_DEV_ERROR_DETECT == STD_ON)
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_SYNCTRANSMIT_SID, SPI_E_SEQ_IN_PROCESS);
      #endif

      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON) */
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }

  if (E_OK == LenReturnValue)
  {
    #if (SPI_DEV_ERROR_DETECT == STD_OFF)
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the requested structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /* END Msg(4:0488)-2 */
    #endif

    /* TRACE [R3, SPI134][R4, SPI134] */
    /* Update the Global status variable */
    Spi_GddSyncDriverStatus = SPI_BUSY;
    #if ((SPI_LEVEL_DELIVERED == SPI_TWO) || \
                                            (SPI_LEVEL_DELIVERED == SPI_ZERO))
    /*
     * Global boolean variable to avoid copy of properties repeatedly if
     * properties of all channels are same. This boolean allows copying channel
     * properties once. This boolean will be reset immediately after its use
     */
    Spi_GblSyncTx = SPI_TRUE;
    #endif

    /* TRACE [R3, SPI134][R4, SPI285] */
    /* Update the sequence result variable to SPI_SEQ_PENDING */
    Spi_GaaSeqResult[Sequence] = SPI_SEQ_PENDING;

    /* Get the number of jobs */
    LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

    /* Get the index of the job list for the requested sequence */
    LddJobListIndex = (LpSeqConfig->ddJobListIndex) + (LddNoOfJobs - SPI_ONE);

    /* MISRA Violation: START Msg(4:0488)-2 */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* END Msg(4:0488)-2 */

    #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
    /* Check if the notification function is configured */
    if (NULL_PTR != LpSeqConfig->pSpiSeqStartNotification)
    {
      /* Invoke the start sequence notification function */
      LpSeqConfig->pSpiSeqStartNotification();
    }
    else
    {
      /* No action required */
    }
    #endif /* #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */

    while (SPI_ZERO < LddNoOfJobs)
    {
      LddJobIndex = LpJobList->ddJobIndex;

      LucVar = LpJobList->ucJobCount;
      LucVar++;

      /* MISRA Violation: START Msg(4:0488)-2 */
      /* Get the pointer to the job of the sequence */
      LpJobConfig = Spi_GpFirstJob + LddJobIndex;
      /* END Msg(4:0488)-2 */

      /* TRACE [R3, SPI134][R4, SPI286] */
      /* Update the job result variable */
      Spi_GaaJobResult[LddJobIndex] = SPI_JOB_PENDING;

      do
      {
        /* Invoke the lower layer function to synchronously transmit */
        LenReturnValue = Spi_HWTransmitSyncJob(LpJobConfig);

        if (E_OK != LenReturnValue)
        {
          /* Update the job result variable */
          Spi_GaaJobResult[LddJobIndex] = SPI_JOB_FAILED;
          /* Break the loops */
          LucVar = SPI_ZERO;
          LddNoOfJobs = SPI_ONE;
        }
        else
        {
          /* Decrement the job count */
          LucVar--;
        }
      }while (SPI_ZERO < LucVar);

      if (SPI_JOB_FAILED != Spi_GaaJobResult[LddJobIndex])
      {
        /* Update the job result variable */
        Spi_GaaJobResult[LddJobIndex] = SPI_JOB_OK;
      }
      else
      {
        /* No action required */
      }

      /* MISRA Violation: START Msg(4:0489)-1 */
      /* Increment the pointer to the job list */
      LpJobList--;
      /* END Msg(4:0489)-1 */

      /* Decrement the number of jobs */
      LddNoOfJobs--;
    }

    /* TRACE [R4, SPI328] */
    if (E_OK == LenReturnValue)
    {
      /* Update the sequence result variable to SPI_SEQ_OK */
      Spi_GaaSeqResult[Sequence] = SPI_SEQ_OK;
      #if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
         /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif

      /*
       * Changing the hardware status after completing the sequence
       * transmission
       */
      Spi_GusHwStatus = (Spi_GusHwStatus ^ (LpSeqConfig->usHWListIndex));

      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-13 */
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-13 */
      #endif
      #endif /* (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON) */
    }
    else
    {
      /* TRACE [R3, SPI083] */
      /* TRACE [R3, SPI254] */
      /* Update the sequence result variable to SPI_SEQ_FAILED */
      Spi_GaaSeqResult[Sequence] = SPI_SEQ_FAILED;

      /* TRACE [R3, SPI191][R4, SPI191] */
      /* TRACE [R3, SPI006][R4, SPI006] */
      /* Raise production error */
      /* Report error to DEM    */
      Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED);
    }
    /* TRACE [R3, SPI114][R4, SPI114] */
    #if(SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
    if (SPI_ZERO == Spi_GusHwStatus)
    #endif
    {
      Spi_GddSyncDriverStatus = SPI_IDLE;
    }
    #if(SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
    else
    #endif
    {
      /* No action required */
    }

    #if ((SPI_LEVEL_DELIVERED == SPI_TWO) || \
                                            (SPI_LEVEL_DELIVERED == SPI_ZERO))
    /* Reset the Synchronous transmit flag */
    Spi_GblSyncTx = SPI_FALSE;
    #endif

    #if ((SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED == STD_ON) && \
                           ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
                                 (SPI_LEVEL_DELIVERED == SPI_TWO)))
    /* TRACE [R3, SPI073][R4, SPI073] */
    /* TRACE [R3, SPI054][R4, SPI054] */
    /* TRACE [R4, SPI281] */
    /* TRACE [R4, SPI264] */
    /* Check if the notification function is configured */
    if (NULL_PTR != LpSeqConfig->pSpiSyncSeqEndNotification)
    {
      /* Invoke the notification function */
      LpSeqConfig->pSpiSyncSeqEndNotification();
    }
    else
    {
      /* No action required */
    }
    #endif /*
            * ((SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED == STD_ON) && \
            *                       ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
            *                                (SPI_LEVEL_DELIVERED == SPI_TWO)))
            */
  }
  else
  {
    /* No action required */
  }

   return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
        * ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        *                                 (SPI_DIRECT_ACCESS_MODE == STD_ON)))
        */

/*******************************************************************************
** Function Name       : Spi_GetHWUnitStatus
**
** Service ID          : 0x0B
**
** Description         : This service is getting the status of the SPI
**                       Hardware micro-controller peripheral
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : HWUnit - ID of CSIG/CSIH Hardware Unit
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_StatusType (SPI_UNINIT/SPI_IDLE/SPI_BUSY)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus
**
** Function invoked    : Det_ReportError, Spi_HWUnitStatus
**
** Registers Used      : None
*******************************************************************************/

#if (SPI_HW_STATUS_API == STD_ON)

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI186][R4, SPI186] */
/* TRACE [R3, SPI141][R4, SPI141] */
/* TRACE [R4, SPI288] */
/* TRACE [R4, SPI331] */
/* TRACE [R4, SPI332] */
/* TRACE [R4, SPI287] */
FUNC(Spi_StatusType, SPI_PUBLIC_CODE) Spi_GetHWUnitStatus
                                                 (Spi_HWUnitType HWUnit)
{
  Spi_StatusType LddHWUnitSts;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_GETHWUNITSTATUS_SID, SPI_E_UNINIT);
    LddHWUnitSts = SPI_UNINIT;
  }
  else
  {
    LddHWUnitSts = SPI_IDLE;
  }

  if (SPI_MAX_HW_DETAILS <= HWUnit)
  {
    /* TRACE [R3, SPI143][R4, SPI143] */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_GETHWUNITSTATUS_SID, SPI_E_PARAM_UNIT);
    if (SPI_IDLE == LddHWUnitSts)
    {
      LddHWUnitSts = SPI_UNINIT;
    }
    else
    {
      /* No Action Required */
    }
  }
  else
  {
    /* No Action Required */
  }
  if (SPI_IDLE == LddHWUnitSts)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    LddHWUnitSts = Spi_HWUnitStatus(HWUnit);
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LddHWUnitSts);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of (SPI_HW_STATUS_API == STD_ON) */

/*******************************************************************************
** Function Name       : Spi_Cancel
**
** Service ID          : 0x0C
**
** Description         : This service is for cancelling a on-going sequence
**
** Sync/Async          : Asynchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : None
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaSeqCancel,
**                       Spi_GpFirstSeq, Spi_GpFirstJob, Spi_GstHWUnitInfo,
**                       Spi_GpFirstJobList
**
** Function invoked    : Det_ReportError, Spi_HWCancel
**
** Registers Used      : None
*******************************************************************************/

#if (SPI_CANCEL_API == STD_ON)

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI145][R4, SPI145] */
/* TRACE [R3, SPI187][R4, SPI187] */
/* TRACE [R4, SPI333] */
/* TRACE [R4, SPI334] */
FUNC(void, SPI_PUBLIC_CODE) Spi_Cancel(Spi_SequenceType Sequence)
{
  #if ((SPI_LEVEL_DELIVERED == SPI_TWO) && (SPI_DEV_ERROR_DETECT == STD_ON))
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobListIndex;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_TWO) && (SPI_DEV_ERROR_DETECT == STD_ON))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #endif

  uint8 LucStatusOffset;
  uint8 LucStatusMask;


  #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON))
  uint8 LucIndex;
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  boolean LblErrorValue;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_TWO) && (SPI_DEV_ERROR_DETECT == STD_ON))
  /* MISRA Violation: START Msg(4:0488)-2 */
  /* TRACE [R3, SPI144][R4, SPI144] */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(4:0488)-2 */
  #endif

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  LblErrorValue = SPI_FALSE;

  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_CANCEL_SID, SPI_E_UNINIT);
    LblErrorValue = SPI_TRUE;
  }
  else
  {
    /* No action required */
  }
  /* TRACE [R3, SPI032][R4, SPI032] */
  /* Check if the sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_CANCEL_SID, SPI_E_PARAM_SEQ);
    LblErrorValue = SPI_TRUE;
  }
  else
  {
    /* No action required */
  }

  #if (SPI_LEVEL_DELIVERED == SPI_TWO)
  if (SPI_FALSE == LblErrorValue)
  {
    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;

    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer to the job list */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* END Msg(4:0488)-2 */

    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Get the pointer of the last job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + (LpJobList->ddJobIndex);
    /* END Msg(4:0488)-2 */

    /*
     * Check if the HW Unit of the job is configured for synchronous
     * transmission
     */
    if (SPI_TRUE ==
                (Spi_GstHWUnitInfo[LpJobConfig->ddHWUnitIndex].blIsSynchronous))
    {
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                               SPI_CANCEL_SID, SPI_E_PARAM_SEQ);

      LblErrorValue = SPI_TRUE;
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
  #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */

  if (SPI_FALSE == LblErrorValue)
  #endif /* End of SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /* Get the cancel byte offset for the requested sequence */
    LucStatusOffset = Spi_GstSeqProcess[Sequence].ucCancelOffset;

    /* Get the cancel byte mask */
    LucStatusMask = Spi_GstSeqProcess[Sequence].ucCancelMask;

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-13 */
    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-13 */
    #endif

    /* Update the cancel bit array for this sequence */
    Spi_GaaSeqCancel[LucStatusOffset] =
                            Spi_GaaSeqCancel[LucStatusOffset] | LucStatusMask;

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-13 */
    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-13 */
    #endif

    #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON))
    LucIndex = Spi_GaaSeqCurrentHWUnit[Sequence];
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    if (SPI_MAX_NUM_OF_CSIG <= LucIndex)
    #endif
    {
      LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LucIndex];

      if (SPI_ONE < Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber])
      {
        Spi_HWCancel(LucIndex);
      }
      else
      {
        /* No action required */
      }
    }
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    else
    #endif
    {
      /* No action required */
    }
    #endif /*
            * (((SPI_DUAL_BUFFER_MODE == STD_ON) || \
            *                   (SPI_TX_ONLY_MODE == STD_ON)) && \
            *                                     (SPI_CANCEL_API == STD_ON))
            */
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif  /* End of (SPI_CANCEL_API == STD_ON) */

/*******************************************************************************
** Function Name       : Spi_SetAsyncMode
**
** Service ID          : 0x0D
**
** Description         : This service is for setting the asynchronous mode
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : Mode - New Mode Required
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GddDriverStatus, Spi_GddAsyncMode
**
** Function invoked    : Det_ReportError, Spi_HWDisableInterrupts
**
** Registers Used      : None
*******************************************************************************/

/*TRACE [R3, SPI150][R4, SPI150]*/
/*TRACE [R3, SPI170][R4, SPI170]*/
/*TRACE [R3, SPI172][R4, SPI172]*/
/*TRACE [R4, SPI337]*/
/*TRACE [R4, SPI335]*/
/*TRACE [R4, SPI336]*/
#if (SPI_LEVEL_DELIVERED == SPI_TWO)

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*TRACE [R3, SPI156][R4, SPI156]*/
/*TRACE [R3, SPI188][R4, SPI188]*/
/*TRACE [R3, SPI152][R4, SPI152]*/
/*TRACE [R4, SPI360]*/
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SetAsyncMode
                                                  (Spi_AsyncModeType Mode)
{
  Std_ReturnType LenReturnValue;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_SETAYNCMODE_SID,
                                                            SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /*TRACE [R3, SPI171][R4, SPI171]*/
    /*TRACE [R3, SPI155][R4, SPI155]*/
    if ((SPI_BUSY == Spi_GddDriverStatus) && (SPI_FALSE == Spi_GblSyncTx))
    {
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      Spi_GddAsyncMode = Mode;
      LenReturnValue = E_OK;
      if (SPI_POLLING_MODE == Mode)
      {
        Spi_HWDisableInterrupts();
      }
      else
      {
        /* No action required */
      }
    }
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif  /* End of (SPI_LEVEL_DELIVERED == SPI_TWO) */

/*******************************************************************************
** Function Name       : Spi_MainFunction_Handling
**
** Service ID          : 0x10
**
** Description         : This function is to be invoked in the scheduler
**                       loop for asynchronous transmission in polling mode
**
** Sync/Async          : NA
**
** Re-entrancy         : Non Reentrant
**
** Input Parameters    : None
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : None
**
** Preconditions       : This function should be invoked only when polling
**                       mechanism is selected by Spi_SetAsyncMode API
**
** Global Variable     : Spi_GddDriverStatus
**
** Function Invoked    : Det_ReportError, Spi_HWMainFunction_Handling
**
** Registers Used      : None
*******************************************************************************/

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
            (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* TRACE [R3, SPI189][R4, SPI189] */
FUNC(void, SPI_PUBLIC_CODE) Spi_MainFunction_Handling (void)
{
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  /* TRACE [R3, SPI046][R4, SPI046] */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                          SPI_MAINFUNCTION_HANDLING_SID, SPI_E_UNINIT);
  }
  else
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    Spi_HWMainFunction_Handling();
  }
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /*
        * ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
        * (((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        *  (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        *    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
        *      (SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) \
        *                                   || (SPI_TX_ONLY_MODE == STD_ON))))
        */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
