/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Scheduler.h                                             */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the prototype declarations of internal functions for    */
/* the implementation of queue.                                               */
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
 * V1.1.0:  16-Jan-2013  : As per SCR 072, pre-compile condition
 *                         SPI_HW_PRIORITY_ENABLED is added for API
 *                         Spi_PopFromHWPriorityQueue and copyright information
 *                         is updated.
 *
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 following changes are made:
 *                          1. Extern declaration Spi_PopFromHWPriorityQueue is
 *                             removed.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.2.2:  23-Oct-2013  : As per CR 256 for the mantis #14560, backslashes are
 *                         are removed except for MACRO definitions.
 *
 * V1.2.3:  15-Jan-2014  : As per CR 330, following changes are made:
 *                          1. Updated as per C coding guideline.
 *                          2. Copyright is updated.
 *
 * V1.2.4:  17-Jul-2014  : As per CR 550, pre-compile check is added for API
 *                         Spi_PopFromQueue and Spi_PushToQueue.
 */
/******************************************************************************/
#ifndef SPI_SCHEDULER_H
#define SPI_SCHEDULER_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi_Driver.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION*/
#define SPI_SCHEDULER_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_SCHEDULER_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_SCHEDULER_AR_RELEASE_REVISION_VERSION \
                                              SPI_AR_RELEASE_REVISION_VERSION

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)
/* AUTOSAR specification version information */
#define SPI_SCHEDULER_AR_MAJOR_VERSION  SPI_AR_MAJOR_VERSION_VALUE
#define SPI_SCHEDULER_AR_MINOR_VERSION  SPI_AR_MINOR_VERSION_VALUE
#define SPI_SCHEDULER_AR_PATCH_VERSION  SPI_AR_PATCH_VERSION_VALUE
#endif /*END of SPI_AR_VERSION*/

/* File version information */
#define SPI_SCHEDULER_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_SCHEDULER_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION


/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Declarations                                   **
*******************************************************************************/

/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_PushToQueue
                    (Spi_SequenceType Sequence, uint8 LucHWMemoryMode);
extern FUNC(void, SPI_PRIVATE_CODE) Spi_PopFromQueue
                            (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* SPI_SCHEDULER_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
