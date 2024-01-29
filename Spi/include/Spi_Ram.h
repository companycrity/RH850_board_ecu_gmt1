/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Ram.h                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the extern declarations of global RAM variables of SPI  */
/* Driver                                                                     */
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
 * V1.1.0:  16-Jan-2013  : As per SCR 072, the following changes are made:
 *                         1. Extern declaration of pointer GpDmaData is
 *                            replaced with variable GddDmaData.
 *                         2. Pre-compile condition SPI_HW_PRIORITY_ENABLED is
 *                            added for variables Spi_CurrentHWPriorityJobList
 *                            Spi_GddNoHWPriorityJobs,
 *                            Spi_GaaHighPrioritySequence and copyright
 *                            information is updated.
 * V1.1.1:  18-Mar-2013  : As per SCR 113 for Mantis issue 5420, the following
 *                         change is made:
 *                         Extern declaration of the new variable
 *                         Spi_GblHighPrioritySequenceOn is added.
 *
 * V1.2.0:  26-Jul-2013  : As per CR 219 for mantis issue #8821, #1290 and
 *                         #12397 following changes are made:
 *                          1. Pre-compile condition
 *                             SPI_DUAL_BUFFER_MODE and SPI_TX_ONLY_MODE  are
 *                             added for variable Spi_GucHwUnitStatus.
 *                          2. Global variable Spi_GucDmabit is removed.
 *                          3. Pre-compile condition SPI_HW_PRIORITY_ENABLED is
 *                             added for variables Spi_GaaHighPriorityCommActive
 *                             Spi_GaaHighPriorityCommRequest and
 *                             Spi_GaaHighPrioritySequence.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.2.2:  29-Aug-2013  : As per CR 243 for the mantis #12996, memory class is
 *                         changed for the second parameter of the P2CONST from
 *                         SPI_CONST to SPI_VAR.
 *
 * V1.2.3:  23-Oct-2013  : As per CR 256 for the mantis #14560, backslashes are
 *                         are removed except for MACRO definitions.
 *
 * V1.2.4:  15-Jan-2014  : As per CR 330 for the mantis #9799, following
 *                         changes are made:
 *                          1. Pre-compile condition
 *                             SPI_LEVEL_DELIVERED == SPI_ZERO is added for
 *                             boolean variable 'Spi_GblSyncTx'.
 *                          2. Copyright information is updated.
 *                          3. Updated as per C coding guideline.
 *
 * V1.2.5:  28-May-2014  : As per CR 507 for mantis #21647, following changes
 *                         are made:
 *                         1. The following variables:
 *                            Spi_GblQueueStatus, Spi_GblInitiateJobTx,
 *                            Spi_GaaHighPriorityCommRequest,
 *                            Spi_GaaHighPriorityCommActive,
 *                            Spi_GaaHighPriorityCommRequestAtIdle and
 *                            Spi_GaaHighPrioritySequence are moved to
 *                            'SPI_START_SEC_VAR_NOINIT_BOOLEAN' section.
 *                         2. The variables Spi_GusAllQueueSts and
 *                            and Spi_GddQueueIndex are moved to
 *                            'SPI_START_SEC_VAR_NOINIT_16' section.
 *                         3. The variable Spi_GucHwUnitStatus is moved to
 *                            'SPI_START_SEC_VAR_NOINIT_8' section.
 *                         4. The variable 'Spi_GucAllQueueSts' is renamed to
 *                            'Spi_GusAllQueueSts' as per C coding guideline.
 *
 * V1.2.6:  08-Jun-2014  : As per CR 550 for mantis #22328 and #22212 following
 *                         changes are made:
 *                         1. Extern of Enum "Spi_GddSyncDriverStatus" is added
 *                            to hold the status of the driver in sync mode.
 *                         2. Spi_GaaHighPrioritySequence is moved to
 *                            'SPI_START_SEC_VAR_NOINIT_8' section.
 *
 * V1.2.7:  24-Aug-2014  : As per CR 601 for mantis #22289, following changes
 *                         are made:
 *                         1. extern declaration of array
 *                            'Spi_GucHWFifoBufferSts' is added.
 *                         2. MISRA C RULE VIOLATION section is added.
 *                         3. MISRA rules violation messages are added.
 *
 * V1.2.8:  28-Mar-2015  : As part of fix for Mantis#26660, memory mapping of
 *                         Spi_GddDmaRxData, Spi_GpDmaUnitConfig and
 *                         Spi_GddDmaData have been changes to
 *                         local CPU RAM area.
 */
/******************************************************************************/

#ifndef SPI_RAM_H
#define SPI_RAM_H

#include "Spi_LTTypes.h"
#include "Spi_PBTypes.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)

/* AUTOSAR release version information */
#define SPI_RAM_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_RAM_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_RAM_AR_RELEASE_REVISION_VERSION SPI_AR_RELEASE_REVISION_VERSION

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_VERSION  */

/* AUTOSAR specification version information */
#define SPI_RAM_AR_MAJOR_VERSION  SPI_AR_MAJOR_VERSION_VALUE
#define SPI_RAM_AR_MINOR_VERSION  SPI_AR_MINOR_VERSION_VALUE
#define SPI_RAM_AR_PATCH_VERSION  SPI_AR_PATCH_VERSION_VALUE

#endif /*END of SPI_AR_VERSION */

/* File version information */
#define SPI_RAM_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_RAM_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3684) Array declared with unknown size.                 */
/* Rule          : MISRA-C:2004 Rule 8.12                                     */
/* Justification : Arrays used are verified in the file which are only        */
/*                 declarations and size is configuration dependent.          */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3684)-1 and                           */
/*                 END Msg(4:3684)-1 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
#define SPI_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))

/* Global RAM array for current status of SPI Communication for Direct Access */
extern VAR(Spi_CurrentCommData, SPI_NOINIT_DATA)
            Spi_GstCurrentCommData[SPI_MAX_CSIH_HW_INDEX + SPI_ONE];
#endif

#if (SPI_TX_ONLY_MODE == STD_ON)
/* Global RAM array for current status of SPI Communication for Tx-Only */
extern VAR(Spi_TxOnlyCurrentCommData, SPI_NOINIT_DATA)
                    Spi_GstTxOnlyCurrentCommData[SPI_MAX_NUM_OF_TX_ONLY_CSIH];
#endif

#if (SPI_DUAL_BUFFER_MODE == STD_ON)
/* Global RAM array for current status of SPI Communication for Tx-Only */
extern VAR(Spi_DualBufferCurrentCommData, SPI_NOINIT_DATA)
            Spi_GstDualBufferCurrentCommData[SPI_MAX_NUM_OF_DUAL_BUFFER_CSIH];
#endif

#if (SPI_FIFO_MODE == STD_ON)
extern VAR(Spi_FifoCurrentCommData, SPI_NOINIT_DATA) Spi_GstFifoCurrentCommData;
#endif

/* Global variable to store the asynchronous transmission mechanism */
extern VAR(Spi_AsyncModeType, SPI_NOINIT_DATA) Spi_GddAsyncMode;

/* Global variable to store config pointer */
extern P2CONST(Spi_ConfigType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpConfigPtr;

/* Global variable to store first channel structure */
extern P2CONST(Spi_ChannelPBConfigType, SPI_VAR, SPI_CONFIG_CONST)
                                                       Spi_GpFirstChannel;

/* Global variable to store first job structure */
extern P2CONST(Spi_JobConfigType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpFirstJob;

/* Global variable to store first sequence structure */
extern P2CONST(Spi_SequenceConfigType, SPI_VAR, SPI_CONFIG_CONST)
                                                             Spi_GpFirstSeq;

/* Global variable to store first sequence structure */
extern P2CONST(Spi_JobListType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpFirstJobList;

#define SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_BOOLEAN
#elif (SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_1BIT
#endif
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
                                            (SPI_LEVEL_DELIVERED == SPI_TWO))
/* Status for on-going synchronous transmission */
extern VAR(boolean, SPI_NOINIT_DATA) Spi_GblSyncTx;
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* Stores the current status of queue */
extern VAR(boolean, SPI_NOINIT_DATA) Spi_GblQueueStatus[SPI_MAX_QUEUE];

/* Stores whether new job transmission is initiated */
extern VAR(boolean, SPI_NOINIT_DATA) Spi_GblInitiateJobTx;
#endif

#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
extern VAR(boolean, SPI_NOINIT_DATA)
                        Spi_GaaHighPriorityCommRequest[SPI_MAX_CSIH_HW_INDEX];
extern VAR(boolean, SPI_NOINIT_DATA)
                        Spi_GaaHighPriorityCommActive[SPI_MAX_CSIH_HW_INDEX];
extern VAR(boolean, SPI_NOINIT_DATA)
                    Spi_GaaHighPriorityCommRequestAtIdle[SPI_MAX_CSIH_HW_INDEX];
#endif

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_BOOLEAN
#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_1BIT
#endif
#include "MemMap.h"

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_8
#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_8BIT
#endif
#include "MemMap.h"

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Global RAM Variable To Check HWUnit Status of CSIH hardware units*/
extern VAR(uint8, SPI_NOINIT_DATA) Spi_GucHwUnitStatus;
#endif

#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
extern VAR(Spi_SequenceType, SPI_NOINIT_DATA)
                        Spi_GaaHighPrioritySequence[SPI_MAX_CSIH_HW_INDEX];
#endif

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_8
#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_8BIT
#endif
#include "MemMap.h"

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_16
#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_16BIT
#endif
#include "MemMap.h"

/* Global variable to store the status of all queues */
extern VAR(uint16, SPI_NOINIT_DATA) Spi_GusAllQueueSts;

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_LEVEL_DELIVERED == SPI_ZERO) \
      || (SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
      (SPI_TX_ONLY_MODE == STD_ON))
extern VAR(uint16, SPI_NOINIT_DATA) Spi_GusDataAccess;
#endif

#if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
/* Global RAM Variable To Check HWUnit Status*/
extern VAR(uint16, SPI_NOINIT_DATA) Spi_GusHwStatus;
#endif

/* Stores the index of the queue */
extern VAR(Spi_JobType, SPI_NOINIT_DATA) Spi_GddQueueIndex[SPI_MAX_QUEUE];

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_16
#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_16BIT
#endif
#include "MemMap.h"

#define SPI_START_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

/* Global variable to store the status of SPI Driver */
extern VAR(Spi_StatusType, SPI_INIT_DATA) Spi_GddDriverStatus;
extern VAR(Spi_StatusType, SPI_INIT_DATA) Spi_GddSyncDriverStatus;

/* MISRA Violation: START Msg(4:3864)-1 */
extern VAR(uint8, SPI_NOINIT_DATA) Spi_GucHWFifoBufferSts[];
/* END Msg (4:3864)-1 */

#define SPI_STOP_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_DATA_LOC_RAM1
#include "MemMap.h"

#if (SPI_DMA_MODE_ENABLE == STD_ON)
extern VAR(uint16, SPI_NOINIT_DATA) Spi_GddDmaRxData;
#endif

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* Global pointer variable for HW group configuration */
extern P2CONST(Spi_DmaUnitConfig, SPI_VAR, SPI_CONFIG_CONST)
                                                           Spi_GpDmaUnitConfig;
extern VAR(Spi_DataType, SPI_NOINIT_DATA) Spi_GddDmaData;
#endif
#define SPI_STOP_DATA_LOC_RAM1
#include "MemMap.h"
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* SPI_RAM_H */
/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
