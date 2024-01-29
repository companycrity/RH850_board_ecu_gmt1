/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi.h                                                       */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, SPI type definitions, structure data types and  */
/* API function prototypes of SPI Driver                                      */
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
 * V1.1.0:  16-Jan-2013  : As per SCR 072, version information and include
 *                         section is updated.
 *
 * V1.1.1:  20-May-2013  : As per SCR 168, header file Spi_Debug is removed.
 *
 * V1.1.2:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.1.3:  15-Jul-2014  : As per CR 550, for mantis issue #22328, following
 *                         changes are made:
 *                         1. Pre-compile checks are updated for the following
 *                            APIs: Spi_AsyncTransmit(), Spi_SyncTransmit(), and
 *                            Spi_MainFunction_Handling().
 *                         2. Copyright information is updated.
 *
 * V1.1.4: 26-Aug-2014   : As per CR 601, following changes are made:
 *                         1. File is updated after spell check.
 *                         2. MISRA C RULE VIOLATION section is updated.
 *                         3. MISRA rules violation messages are updated.
 *
 * V1.1.5:   10-Feb-2015 : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. Copyright Information is Updated.
 */
/******************************************************************************/
#ifndef SPI_H
#define SPI_H

#define SPI_AR_FOUR_ZERO_THREE    403
#define SPI_AR_THREE_TWO_TWO      322
#define SPI_AR_HIGHER_VERSION     SPI_AR_FOUR_ZERO_THREE
#define SPI_AR_LOWER_VERSION      SPI_AR_THREE_TWO_TWO
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* TRACE [R3, SPI092][R4, SPI273] */
#include "Spi_Cfg.h"
#include "Spi_Types.h"      /* Included for Spi Type declaration */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)
#if (SPI_DEV_ERROR_DETECT == STD_ON)
/*
 * Only in case of DET enabled, Debug variables will be available externally
 */

#endif
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* TRACE [R3, SPI089][R4, SPI089] */
#define SPI_INSTANCE_ID           SPI_INSTANCE_ID_VALUE

/* Version identification */
#define SPI_VENDOR_ID              SPI_VENDOR_ID_VALUE
#define SPI_MODULE_ID              SPI_MODULE_ID_VALUE

/* AUTOSAR specification version information */
/* TRACE [R4, SPI369] */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION) /* START of SPI_AR_VERSION */
#define SPI_AR_RELEASE_MAJOR_VERSION       4
#define SPI_AR_RELEASE_MINOR_VERSION       0
#define SPI_AR_RELEASE_REVISION_VERSION    3
#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)
#define SPI_AR_MAJOR_VERSION       2
#define SPI_AR_MINOR_VERSION       4
#define SPI_AR_PATCH_VERSION       0
#endif /* END of SPI_AR_VERSION */

/* File version information */
#define SPI_SW_MAJOR_VERSION       SPI_SW_MAJOR_VERSION_VALUE
#define SPI_SW_MINOR_VERSION       SPI_SW_MINOR_VERSION_VALUE
#define SPI_SW_PATCH_VERSION       SPI_SW_PATCH_VERSION_VALUE

/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3458) Macro defines a braced code statement block.      */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Since GetVersionInfo API is implemented as macro braces    */
/*                 cannot be avoided.                                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3458)-1 and                           */
/*                 END Msg(4:3458)-1 tags in the code.                        */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3684) Array declared with unknown size.                 */
/* Rule          : MISRA-C:2004 Rule 8.12                                     */
/* Justification : Arrays used are verified in the file which are only        */
/*                 declarations and size is configuration dependent.          */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3684)-2 and                           */
/*                 END Msg(4:3684)-2 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/


/*******************************************************************************
**                     Service IDs                                            **
*******************************************************************************/
/* Service ID for Spi_Init() */
#define SPI_INIT_SID                  (uint8)0x00
/* Service ID for Spi_DeInit() */
#define SPI_DEINIT_SID                (uint8)0x01
/* Service ID for Spi_WriteIB() */
#define SPI_WRITEIB_SID               (uint8)0x02
/* Service ID for Spi_AsyncTransmit() */
#define SPI_ASYNCTRANSMIT_SID         (uint8)0x03
/* Service ID for Spi_ReadIB() */
#define SPI_READIB_SID                (uint8)0x04
/* Service ID for Spi_SetupEB() */
#define SPI_SETUPEB_SID               (uint8)0x05
/* Service ID for Spi_GetStatus() */
#define SPI_GETSTATUS_SID             (uint8)0x06
/* Service ID for Spi_GetJobResult() */
#define SPI_GETJOBRESULT_SID          (uint8)0x07
/* Service ID for Spi_GetSequenceResult() */
#define SPI_GETSEQUENCERESULT_SID     (uint8)0x08
/* Service ID for Spi_GetVersionInfo() */
#define SPI_GETVERSIONINFO_SID        (uint8)0x09
/* Service ID for Spi_SyncTransmit() */
#define SPI_SYNCTRANSMIT_SID          (uint8)0x0A
/* Service ID for Spi_GetHWUnitStatus() */
#define SPI_GETHWUNITSTATUS_SID       (uint8)0x0B
/* Service ID for Spi_Cancel() */
#define SPI_CANCEL_SID                (uint8)0x0C
/* Service ID for Spi_SetAyncMode() */
#define SPI_SETAYNCMODE_SID           (uint8)0x0D
/* Service ID for Spi_MainFunction_Driving() */
#define SPI_MAINFUNCTION_HANDLING_SID (uint8)0x10

/*******************************************************************************
**                      DET Error Codes                                       **
*******************************************************************************/
/* TRACE [R3, SPI098][R4, SPI098] */
/* TRACE [R3, SPI004][R4, SPI004] */
/* API services invoked with invalid channel ID */
/* TRACE [R3, SPI031][R4, SPI031] */
#define SPI_E_PARAM_CHANNEL           (uint8)0x0A
/* API services invoked with invalid job ID */
/* TRACE [R4, SPI237] */
#define SPI_E_PARAM_JOB               (uint8)0x0B
/* API services invoked with invalid sequence ID */
/* TRACE [R4, SPI238] */
#define SPI_E_PARAM_SEQ               (uint8)0x0C
/* Spi_SetupEB API invoked with length greater than configured length */
/* TRACE [R4, SPI240] */
#define SPI_E_PARAM_LENGTH            (uint8)0x0D
/* Spi_GetHWUnitStatus API invoked with invalid hardware unit ID */
/* TRACE [R4, SPI241] */
#define SPI_E_PARAM_UNIT              (uint8)0x0E
/* API services invoked before the initialization of SPI Driver */
/* TRACE [R4, SPI242] */
#define SPI_E_UNINIT                  (uint8)0x1A
/* API services invoked in a wrong sequence */
/* TRACE [R4, SPI243] */
#define SPI_E_SEQ_PENDING             (uint8)0x2A
/* Spi_SyncTransmit API invoked at wrong time */
/* TRACE [R4, SPI245] */
#define SPI_E_SEQ_IN_PROCESS          (uint8)0x3A
/* Spi_init API service called while the Spi driver has already been
 * initialized
 */
/* TRACE [R4, SPI246] */
#define SPI_E_ALREADY_INITIALIZED     (uint8)0x4A
/* Spi_Init API service invoked with null config pointer */
#define SPI_E_PARAM_CONFIG            (uint8)0xEE
/* Spi_Init API invoked with pointer to invalid database */
#define SPI_E_INVALID_DATABASE        (uint8)0xEF

/* Spi_GetVersionInfo API invoked with invalid pointer */
#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_E_PARAM_POINTER           (uint8)0x10
#endif

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

extern FUNC(void, SPI_PUBLIC_CODE) Spi_Init
(P2CONST(Spi_ConfigType, AUTOMATIC, SPI_APPL_CONST) ConfigPtr);

/* API to get the version information */
/* TRACE [R4, SPI326]*/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)
/* MISRA Violation: START Msg(4:3458)-1 */
/* TRACE [R4, SPI102]*/
#if (SPI_VERSION_INFO_API == STD_ON)
#define Spi_GetVersionInfo(versioninfo)\
  {\
    (versioninfo)->vendorID = (uint16)SPI_VENDOR_ID; \
    (versioninfo)->moduleID = (uint16)SPI_MODULE_ID; \
    (versioninfo)->sw_major_version = SPI_SW_MAJOR_VERSION; \
    (versioninfo)->sw_minor_version = SPI_SW_MINOR_VERSION; \
    (versioninfo)->sw_patch_version = SPI_SW_PATCH_VERSION; \
  }
/* END Msg(4:3458)-1 */
#endif /* END of SPI_VERSION_INFO_API */
#endif /* END of SPI_AR_VERSION */

/* API to get the version information */
#if (SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)
/* TRACE [R3, SPI184]*/
/* TRACE [R3, SPI101]*/
/* TRACE [R3, SPI196]*/
/* TRACE [R3, SPI102]*/
#if (SPI_VERSION_INFO_API == STD_ON)
/* MISRA Violation: START Msg(4:3458)-1 */
#define Spi_GetVersionInfo(versioninfo)\
  {\
    (versioninfo)->vendorID = (uint16)SPI_VENDOR_ID; \
    (versioninfo)->moduleID = (uint16)SPI_MODULE_ID; \
    (versioninfo)->instanceID = (uint16)SPI_INSTANCE_ID;\
    (versioninfo)->sw_major_version = SPI_SW_MAJOR_VERSION; \
    (versioninfo)->sw_minor_version = SPI_SW_MINOR_VERSION; \
    (versioninfo)->sw_patch_version = SPI_SW_PATCH_VERSION; \
  }
/* END Msg(4:3458)-1 */
#endif /* END of SPI_VERSION_INFO_API */
#endif /* END of SPI_AR_VERSION */

extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_DeInit(void);

#if (((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)) && (SPI_IB_CONFIGURED == STD_ON))
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_WriteIB
               (Spi_ChannelType Channel, P2CONST(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_CONST) DataBufferPtr);
#endif /* (((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
          (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)) && \
          (SPI_IB_CONFIGURED == STD_ON)) */

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_AsyncTransmit
                                               (Spi_SequenceType Sequence);
#endif /* (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_ReadIB
               (Spi_ChannelType Channel, P2VAR(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_DATA) DataBufferPointer);
#endif /* SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO ||
          SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO */

#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SetupEB
    (Spi_ChannelType Channel,
     P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_DATA) SrcDataBufferPtr,
     P2VAR(Spi_DataType, AUTOMATIC, SPI_APPL_DATA) DesDataBufferPtr,
     Spi_NumberOfDataType Length);
#endif /* SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE ||
          SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO */


/* TRACE [R4, SPI259] */
extern FUNC(Spi_StatusType, SPI_PUBLIC_CODE) Spi_GetStatus(void);

extern FUNC(Spi_JobResultType, SPI_PUBLIC_CODE)
                       Spi_GetJobResult(Spi_JobType Job);

extern FUNC(Spi_SeqResultType, SPI_PUBLIC_CODE)
                       Spi_GetSequenceResult(Spi_SequenceType Sequence);

#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SyncTransmit
                                                  (Spi_SequenceType Sequence);
#endif

#if (SPI_HW_STATUS_API == STD_ON)
extern FUNC(Spi_StatusType, SPI_PUBLIC_CODE) Spi_GetHWUnitStatus
                                                 (Spi_HWUnitType HWUnit);
#endif

#if (SPI_CANCEL_API == STD_ON)
extern FUNC(void, SPI_PUBLIC_CODE) Spi_Cancel(Spi_SequenceType Sequence);
#endif

#if (SPI_LEVEL_DELIVERED == SPI_TWO)
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SetAsyncMode
                                                  (Spi_AsyncModeType Mode);
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
            (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))))
extern FUNC(void, SPI_PUBLIC_CODE) Spi_MainFunction_Handling(void);
#endif

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
#define SPI_START_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

/* MISRA Violation: START Msg(4:3684)-2 */
/* TRACE [R3, SPI091][R4, SPI091_Conf] */
/* TRACE [R4, SPI103_Conf] */
/* Structure for SPI Init configuration */
extern CONST(Spi_ConfigType, SPI_CONST) Spi_GstConfiguration[];
/* END Msg(4:3684)-2 */
#define SPI_STOP_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"
#endif /* SPI_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
