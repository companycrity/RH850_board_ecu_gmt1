/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Driver.c                                                */
/*============================================================================*/
/*                               COPYRIGHT                                    */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Low level driver function definitions of the SPI        */
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
 * V1.0.1:  1-Oct-2012  : As per SCR 021, Following changes are made
 *                        1.Variables ucRxImrMask, ucTxImrMask, ucErrorImrMask,
 *                          ucTxCancelImrMask, ucDmaImrMask, changed to
 *                          usRxImrMask, usTxImrMask, usErrorImrMask,
 *                          usTxCancelImrMask and usDmaImrMask.
 *
 *                        2.Data type of LpIntCntlAddress is changed to uint16.
 *                        3.Pre-compile options are changed in APIs
 *                          Spi_HWDeInit, Spi_InternalWriteIB, Spi_HWActivateCS,
 *                          Spi_HWDeActivateCS, Spi_ProcessSequence.
 *
 *                        4.Typecasting for the pointers LpChannelIB32Bit.
 *                          LpChannelIB16Bit in API Spi_InternalWriteIB is
 *                          changed.
 *
 *                        5.Typecasting for the pointers LpReadPtr32Bit,
 *                          LpReadPtr16Bit in API Spi_HWTransmitSyncJob is
 *                          changed.
 *
 * V1.0.2   19-Oct-2012  : As per SCR 029, following changes are made:
 *                         1.MISRA C RULE VIOLATION(4:0277) is added.
 *                         2.Comments are updated.
 *                         3.Spi_ComErrorISR API data
 *                           consistency, parity, overflow and overrun bit
 *                           settings are changed.
 *
 *                         4.Check for whether hardware unit is CSIH before
 *                           updating Pre-scalar and baud rate is added.
 *                         5.Macro SPI_RELOC_INTR_VECT_MASK added
 *                           for relocating interrupt vector table.
 *
 * V1.0.3   27-Nov-2012  : As per SCR 042, following changes are made:
 *                         1. MISRA C RULE VIOLATION section updated.
 *                         2. MISRA rules violation messages are updated.
 *                         3. Macro SPI_HWUNIT_ASYNCHRONOUS check added.
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, the following changes are made
 *                         1. APIs Spi_HWInit, Spi_HWInitiateTx,
 *                            Spi_ProcessSequence, Spi_TxDmaConfig, Spi_DmaISR
 *                            are updated for Hardware priority handling
 *                            functionality.
 *                         3. Type casting of Spi_DataType is removed in APIs
 *                            Spi_InternalWriteIB, Spi_HWWriteIB, Spi_HWReadIB,
 *                            Spi_HWTransmitSyncJob, Spi_ProcessChannel,
 *                            Spi_TransmitISR and Spi_ReceiveISR for byte
 *                            alignment implementation.
 *                         4. Copyright information is updated.
 *
 * V1.1.1:  18-Mar-2013  : As per SCR 113 for Mantis issue 5420, the following
 *                         changes are made
 *                         1. Spi_InternalWriteIB() - The internal buffers are
 *                            updated when SPI_HW_PRIORITY_ENABLED is ON as the
 *                            high priority communication works with direct
 *                            access memory mode.
 *                         2. Spi_ProcessChannel() - Take data from the internal
 *                            buffer when high priority sequence is getting
 *                            transmitted.
 *                         3. Spi_ProcessChannel() and Spi_ProcessSequence() -
 *                            Do not update ucMainCTL0 register when the high
 *                            priority communication is under progress.
 *                         4. Spi_ProcessChannel() and Spi_TransmitISR()
 *                            EOJ bit is set only for the last job of the
 *                            sequence which is high priority.
 *                         5. Spi_DmaISR: Spi_ProcessSequence() is called when
 *                            all the transmission of all the channels of the
 *                            current job is completed.
 *                         6. Spi_HWMainFunction_Handling() - LddHWUnit is
 *                            initialised based on the configured H/W units.
 *                         7. New function Spi_HWInitiateHighPrioCommnTx() is
 *                            added to initiate communication of the high
 *                            priority sequence.
 *
 * V1.1.2:  20-May-2013  : As Per SCR 168 for the mantis issue #9319 and #11575,
 *                         following changes are made:
 *                         1.For CSIH, accessing baud rate register usCSIHBRS
 *                           is updated in Api Spi_HWTransmitSyncJob() and
 *                           Spi_HWInitiateTx().
 *                         2.Tx interrupt is enabled when SPI_DMA_MODE_ENABLE is
 *                           STD_ON in Api Spi_ProcessChannel() and the function
 *                           Spi_ProcessSequence() is called when DmaChannel of
 *                           DMA configuration is SPI_ONE in Api Spi_DmaISR().
 *                         3.HW Unit checking is added for CSIH configuration
 *                           register update in Api Spi_HWInitiateTx().
 *
 * V1.1.3:  13-Jun-2013  : As per SCR 181, following changes are made:
 *                         1.For SPI_FIFO_MODE, SPI_DMA_MODE_ENABLE pre-compile
 *                           check is added to clear the interrupts in
 *                           Api Spi_ProcessChannel().
 *                         2.In API Spi_HWActivateCS() CSIG_Check is updated
 *                           to CSIG_Check1
 *                           for SPI_AR_VERSION == SPI_AR_HIGHER_VERSION
 *                         3.In API Spi_HWDeActivateCS() CSIG_Check  is updated
 *                           to CSIG_Check 2
 *                           for SPI_AR_VERSION == SPI_AR_HIGHER_VERSION
 *
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 all APIs are updated.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, Following changes are made:
 *                         1. As part of SVN merge activity the project name and
 *                            environment section is updated.
 *                         2. API Spi_HWTransmitSyncJob() is updated to support
 *                            memory mode.
 *
 * V1.2.2:  03-Sep-2013  : As per CR 243 for the mantis issues #8421 and #12110,
 *                         the following changes are made:
 *                         1. Exit mechanism is added for all hardware while
 *                            loop in Api Spi_HWTransmitSyncJob().
 *                         2. Job end notification functionality section is
 *                            updated in Api Spi_TransmitISR() and Api
 *                            Spi_ReceiveISR().
 *                         3. Job end notification, Sequence end notification
 *                            and Start sequence notification functionalities
 *                            are updated in Api Spi_ProcessSequence().
 *
 * V1.2.3:  23-Oct-2013  : As per CR 256 for the mantis issues #16631, #14088
 *                         and #13117, following changes are made:
 *                         1. In Api Spi_ProcessSequence() pre-compile check is
 *                         added for High Priority functionality and
 *                         also pre-Compile check for LpJobConfig is modified.
 *                         2. All ISR function declaration and definitions
 *                            are modified to SPI_START_SEC_CODE_FAST.
 *
 * V1.2.4:  19-Nov-2013  : As per CR 321 for the mantis issues #16636, in
 *                         Api Spi_TransmitCancelISR() pre-compile check is
 *                         updated.
 *
 * V1.3.0:  15-Jan-2014  : As per CR 330 for the mantis issues #9799, #12397
 *                         1. APIs Spi_TransmitISR() and Spi_ReceiveISR() are
 *                            updated as per 'SLIT' functionality.
 *                         2. API Spi_HWTransmitSyncJob() is updated to support
 *                            'SLIT' functionality.
 *                         3. APIs Spi_TransmitCancelISR(), Spi_ProcessSequence,
 *                            and Spi_HWMainFunction_Handling are updated.
 *                         4. Copyright information is updated.
 *                         5. MISRA C RULE VIOLATION section updated.
 *                         6. MISRA rules violation messages are updated.
 *                         7. Updated as per C coding guideline.
 *
 * V1.3.1:  04-Feb-2014  : As per CR 398 for the mantis issue #19208,
 *                         Source file updated as part of merge activity.
 *
 * V1.3.2:  21-Mar-2014  : As per CR 424 for the mantis issue #19537 and #18651
 *                         following changes are made:
 *                         1. Function headers are updated for Global Variable
 *                            in the following APIs: Spi_HWWriteIB,
 *                            Spi_HWReadIB, Spi_HWUnitStatus,
 *                            Spi_HWTransmitSyncJob, Spi_InitiateJobTx,
 *                            Spi_ProcessChannel, Spi_TransmitISR,
 *                            Spi_TransmitCancelISR, Spi_ReceiveISR,
 *                            Spi_ProcessSequence, Spi_RxDmaConfig,
 *                            Spi_HWMainFunction_Handling and Spi_ComErrorISR.
 *                         2. In API Spi_ProcessSequence critical section
 *                            protection is updated.
 *                         3. In the APIs Spi_ProcessChannel, Spi_TxDmaConfig,
 *                            Spi_RxDmaConfig and Spi_HWCancel, access to
 *                            ICxxx.TBxxx bit of interrupt control register is
 *                            removed.
 *                         4. Pre-compile check is updated for the following
 *                            APIs: Spi_InitiateJobTx, Spi_ReceiveISR,
 *                            Spi_TransmitISR and Spi_ComErrorISR.
 *
 * V1.3.3:  28-Mar-2014  : As per CR 446 for the mantis issue #19104 and #19635,
 *                         following changes are made:
 *                         1. In API 'Spi_HWTransmitSyncJob' software delay is
 *                            added to wait till Chip Select becomes IDLE.
 *                         2. In API 'Spi_InitiateJobTx', critical section
 *                            protection is updated.
 *                         3. Updated as per C coding guideline.
 *
 * V1.3.4: 15-Apr-2014   : As per CR 486 for mantis #19635, software delay to
 *                         wait till Chip Select becomes "IDLE" is removed from
 *                         API "Spi_HWTransmitSyncJob'.
 *
 * V1.3.5: 28-Apr-2014   : As per CR 498 following changes are made:
 *                          1. For mantis #20999 and #21004, API
 *                             Spi_HWTransmitSyncJob() is updated.
 *                          2. Macros RH850_SV_MODE_ICR_AND,
 *                             RH850_SV_MODE_IMR_OR and RH850_SV_MODE_IMR_AND
 *                             are added to write enable/clear registers IMR &
 *                             ICxxx as part of OS merge activity.
 *
 * V1.3.6:  02-Jun-2014  : As per CR 507, following changes are made:
 *                         1. API Spi_LoopBackSelfTest() is added for data
 *                            transmission self test using loop back mode.
 *                         2. For mantis #9799, API Spi_HWTransmitSyncJob()
 *                            is updated to reset 'PWR' bit on job completion.
 *                         3. Exit loop condition is updated to avoid resulting
 *                            of infinite loop.
 *                         4. Description for the following APIs:
 *                            Spi_TransmitISR, Spi_TransmitCancelISR and
 *                            Spi_ReceiveISR are updated.
 *                         5. The macros 'SPI_SELCSIHDMA_ADDR' and
 *                            'SPI_SELCSIHDMA_REG_VAL' are renamed to
 *                             'SPI_SELECT_CSIH_DMA_ADDR' and
 *                             'SPI_SELECT_CSIH_DMA_REG_VAL' respectively.
 *                         6. The variable 'Spi_GucAllQueueSts' is renamed to
 *                            'Spi_GusAllQueueSts' as per C coding guideline.
 *                         7. MISRA C RULE VIOLATION section updated.
 *                         8. MISRA rules violation messages are updated.
 *
 * V1.3.7: 17-Jun-2014   : As per CR 532 for mantis #16991, following changes
 *                         are made:
 *                          1. Spi_ProcessChannel API updated to use "syncp"
 *                             command for access to ICxxx register.
 *                          2. Spi_TxDmaConfig API updated to use "syncp"
 *                             command for access to ICxxx register.
 *                          3. Spi_RxDmaConfig API updated to use "syncp"
 *                             command for access to ICxxx register.
 *                          4. Spi_HWCancel API updated to use "syncp"
 *                             command for access to ICxxx register.
 *                          5. Updated as per C coding guideline.
 *                          6. Memory class for the following APIs are changed
 *                             Spi_HWMainFunction_Handling,
 *                             Spi_HWDisableInterrupts and Spi_HWCancel.
 *
 * V1.3.8: 08-Jul-2014   : As per CR 550 for mantis #22312, #22324, #22213,
 *                         #21502, #22328, #21877, #22212 and #22066 following
 *                         changes are made:
 *                         1. The volatile qualifier is added for pointers
 *                            LpIntCntlAddress and LpDmaTrigFactor.
 *                         2. New macros 'SPI_CSIG_CLR_STS_FLAGS' and
 *                            'SPI_CSIH_CLR_STS_FLAGS' are added to clear status
 *                            registers for CSIG and CISH individually.
 *                         3. Pre-compile check is updated for the following
 *                            APIs: Spi_HWTransmitSyncJob(), Spi_InitiateJobTx()
 *                            Spi_ProcessChannel(), Spi_TransmitISR(),
 *                            Spi_ReceiveISR(), Spi_ProcessSequence(),
 *                            Spi_HWMainFunction_Handling(), Spi_ComErrorISR()
 *                            and Spi_HWReadIB().
 *                         4. Function headers are updated.
 *                         5. Api Spi_LoopBackSelfTest() is updated to perform
 *                            self-test in Direct Access Mode.
 *
 * V1.3.9: 01-Aug-2014   : As per CR 581 for mantis #20712 and #22858, following
 *                         changes are made:
 *                         1. File is updated after spell check.
 *                         2. APIs Spi_RxDmaConfig and Spi_TxDmaConfig are
 *                            updated for declaration of local variable
 *                            "LulDTCTVal".
 *
 * V1.4.0: 24-Aug-2014   : As per CR601 for mantis #21639, #22289 and #22862
 *                         following changes are made:
 *                         1. API Spi_ProcessChannel() is updated for the
 *                            sequence of invoking Spi_RxDmaConfig prior to
 *                            Spi_TxDmaConfig.
 *                         2. API Spi_ProcessChannel() is updated to support
 *                            transmission of more than 128 words in FIFO mode.
 *                         3. API Spi_ProcessSequence(), is updated to reset
 *                            'Spi_GucHWFifoBufferSts' to 'UNINT' before
 *                            transmission of new job starts in FIFO mode.
 *                         4. API Spi_DmaISR(), is updated as per the structure
 *                            'Spi_FifoCurrentCommData' to have separate RX and
 *                            TX pointers.
 *                         5. Spi_TransmitISR() is updated to load the value of
 *                            "ucChipSelect" to Tx0W register for every 16 bit
 *                            transmission in case extended data is transferred.
 *                         6. MISRA C RULE VIOLATION section is updated.
 *                         7. MISRA rules violation messages are updated.
 *
 * V1.4.1: 05-Jan-2015   : Following changes are made
 *                         1. As per mantis #25126 Wrong condition check,
 *                            (SPI_ZERO < LddNoOfChannels) of the do while loop
                              in Spi_HWTransmitSyncJob API is removed.
 *                         2. As per mantis #25111 definition for
 *                            SPI_CHIP_SELECT_PROTECTION and
 *                            SPI_RAM_DATA_PROTECTION are added
 *                         3. As per mantis #25251 critical section is added.
 *                         4. As per mantis #25047 unreachable code removed from
 *                            Spi_ReceiveISR function.
 *                         5. MISRA warning message (4:3138) is added.
 *                         6. Copyright information is updated
 *                         7. As per mantis #22981 LpJobConfig is initialised.
 *                         8. As per mantis #25333, DTCT register is loaded
 *                            with SPI_DMA_32BIT_RX_SETTINGS and
 *                            SPI_DMA_32BIT_TX_SETTINGS for Spidatawidth 32 bit
 *
 * V1.4.2:  10-Feb-2015  : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. File is updated for C coding guidelines.
 *                         3. As per CR 01, for mantis #14360 API
 *                            Spi_HWTransmitSyncJob() is updated to perform
 *                            shift operation for received data before saving
 *                            the data to software buffer when 'blDirection' is
 *                            false.
 *                         4. As per CR 01, for mantis #14360 API Spi_HWReadIB()
 *                            is updated to perform shift operation for received
 *                            data before saving it into software buffer when
 *                            'blDirection' is false.
 * V1.4.3:  18-Mar-2015  : As part of issue fix for mantis #24305
 *                         SPI_SELCSIHDMA_ENABLED check has been added in
 *                         Spi_HWInit function to isolate
 *                         SPI_SELECT_CSIH_DMA_ADDR access to P1x devices only.
 *
 * V1.4.4:  07-May-2015  : Following changes are made
 *                         1. As per mantis #27771, Spi_ReceiveISR API is
 *                            updated to remove compilation warning.
 *                         2. As per mantis #27772, Spi_HwInit API is updated
 *                            for 32 bit DMA settings.
 *
 ******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Spi_Scheduler.h"
#include "rh850_Types.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION */
/* AUTOSAR release version information */
#define SPI_DRIVER_C_AR_RELEASE_MAJOR_VERSION \
                                  SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_DRIVER_C_AR_RELEASE_MINOR_VERSION \
                                  SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_DRIVER_C_AR_RELEASE_REVISION_VERSION \
                               SPI_AR_RELEASE_REVISION_VERSION_VALUE

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_VERSION  */

/* AUTOSAR specification version information */
#define SPI_DRIVER_C_AR_MAJOR_VERSION    SPI_AR_MAJOR_VERSION_VALUE
#define SPI_DRIVER_C_AR_MINOR_VERSION    SPI_AR_MINOR_VERSION_VALUE
#define SPI_DRIVER_C_AR_PATCH_VERSION    SPI_AR_PATCH_VERSION_VALUE

#endif /*END of SPI_AR_VERSION */

/* File version information */
#define SPI_DRIVER_C_SW_MAJOR_VERSION    SPI_SW_MAJOR_VERSION_VALUE
#define SPI_DRIVER_C_SW_MINOR_VERSION    SPI_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION*/
#if (SPI_DRIVER_AR_RELEASE_MAJOR_VERSION != \
                                       SPI_DRIVER_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Major Version"
#endif

#if (SPI_DRIVER_AR_RELEASE_MINOR_VERSION != \
                                       SPI_DRIVER_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Minor Version"
#endif

#if (SPI_DRIVER_AR_RELEASE_REVISION_VERSION != \
                                       SPI_DRIVER_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Revision Version"
#endif

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_LOWER_VERSION  */
#if (SPI_DRIVER_AR_MAJOR_VERSION != \
                                         SPI_DRIVER_C_AR_MAJOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Major Version"
#endif

#if (SPI_DRIVER_AR_MINOR_VERSION != \
                                         SPI_DRIVER_C_AR_MINOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Minor Version"
#endif

#if (SPI_DRIVER_AR_PATCH_VERSION != \
                                      SPI_DRIVER_C_AR_PATCH_VERSION)
  #error "Spi_Version.c : Mismatch in Release Revision Version"
#endif
#endif /*END of SPI_AR_VERSION */

#if (SPI_DRIVER_SW_MAJOR_VERSION != SPI_DRIVER_C_SW_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Major Version"
#endif /*END of SPI_DRIVER_SW_MAJOR_VERSION */

#if (SPI_DRIVER_SW_MINOR_VERSION != SPI_DRIVER_C_SW_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Minor Version"
#endif /*END of SPI_DRIVER_SW_MINOR_VERSION */

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0759) An object of union type has been defined.         */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : To access only the lower byte of the converted values      */
/*                 from the conversion register.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0759)-1 and                           */
/*                 END Msg(4:0759)-1 tags in the code.                        */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4397) Bitwise operations on signed data will give       */
/*                 implementation defined results.                            */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : Though the bitwise operation is performed on unsigned      */
/*                 data, this warning is generated by the QAC tool V6.2.1 as  */
/*                 an indirect result of integral promotion in complex bitwise*/
/*                 operations.                                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4397)-2 and                           */
/*                 END Msg(4:4397)-2 tags in the code.                        */
/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0489) Increment or decrement operation performed on     */
/*               : pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0489)-3 and                           */
/*                 END Msg(4:0489)-3 tags in the code.                        */
/******************************************************************************/

/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-4 and                           */
/*                 END Msg(4:0488)-4 tags in the code.                        */
/******************************************************************************/

/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0491) An array subscript operator is being used to      */
/*                 subscript an expression which is not of array type.        */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : This pointer addresses an array element                    */
/* Verification  : It is verified manually and by generation tool             */
/* Reference     : Look for START Msg(4:0491)-5 and END Msg(4:0491)-5         */
/*                 tags in the code.                                          */
/******************************************************************************/

/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2841) A definite anomaly has been detected. Examination */
/*                 of the context indicates that this expression will always  */
/*                 result in an access outside the bounds of an array.        */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The index will vary based on the configuration             */
/* Verification  : It is verified by generation tool that the index will not  */
/*                 go out of bounds at any condition                          */
/* Reference     : Look for START Msg(4:2841)-6 and                           */
/*                 END Msg(4:2841)-6 tags in the code.                        */
/******************************************************************************/

/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0317) An expression of type 'pointer-to-void' is being  */
/*                 implicitly converted to a 'pointer-to-object' type.        */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : Implicit conversion is performed between a pointer to void */
/*                 to pointer to prevent publishing of internal structure.    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (4:0317)-7  and                         */
/*                 END Msg (4:0317)-7  tags in the code.                      */
/******************************************************************************/

/* 8. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2812) An apparent anomaly has been detected. Preceding  */
/*                 operations imply that this pointer value will sometimes be */
/*                 NULL                                                       */
/* Rule          : MISRA-C:2004 Rule 20.3 and 21.1                            */
/* Justification : Pointers are assigned under different pre-compile check.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2812)-8 and                           */
/*                 END Msg(4:2812)-8  tags in the code.                       */
/******************************************************************************/

/* 9. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2996) The result of this logical operation is always    */
/*                 'false'.                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The result of this logical operation is always false since */
/*                 only one job is configured. However, when two or more jobs */
/*                 are configured this warning ceases to exist.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2996)-9 and                           */
/*                 END Msg(4:2996)-9 tags in the code.                        */
/******************************************************************************/

/* 10. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0303) [I] A cast should not be performed between a      */
/*                 pointer type and an integral type.                         */
/* Rule          : MISRA-C:2004 Rule 11.3                                     */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0303)-10 and                          */
/*                 END Msg(4:0303)-10 tags in the code.                       */
/******************************************************************************/

/* 11. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2993) The value of this 'do - while' loop controlling   */
/*                 expression is always 'false'. The loop will only be        */
/*                 executed once.                                             */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : The result of this logical operation is always false since */
/*                 only one job is configured. However, when two or more jobs */
/*                 are configured this warning ceases to exist.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2993)-11 and                          */
/*                 END Msg(4:2993)-11 tags in the code.                       */
/******************************************************************************/

/* 12. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0715)Nesting of control structures (statements)         */
/*                 exceeds 15 - program is non-conforming.                    */
/* Rule          : MISRA-C:2004 Rule 1.1                                      */
/* Justification : It is used to achieve better throughput instead of         */
/*                 invoking a function call.                                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0715)-12 and                          */
/*                 END Msg(4:0715)-12 tags in the code.                       */
/******************************************************************************/

/* 13. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0306) Cast between a pointer to object and an integral  */
/*                  type.                                                     */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/*                 REFERENCE - ISO-6.3.4 Semantics                            */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-13 and                          */
/*                 END Msg(4:0306)-13 tags in the code.                       */
/******************************************************************************/

/* 14. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2983) Assignment is redundant. The value of this object */
/*                 is never subsequently used.                                */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The object is used under different pre-compile sections.   */
/*                 However, for different configurations this warning ceases  */
/*                 to exist.                                                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2983)-14 and                          */
/*                 END Msg(4:2983)-14 tags in the code.                       */
/******************************************************************************/

/* 15. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0316) Cast from a pointer to void to a pointer to       */
/*                  object.                                                   */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : Cast is performed between a pointer to void to pointer to  */
/*                 object type to prevent publishing of internal structure.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0316)-15 and                          */
/*                 END Msg(4:0316)-15 tags in the code.                       */
/******************************************************************************/

/* 16. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2984) This operation is redundant. The value of the     */
/*                 result is always '0'.                                      */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The value of the object is based on the user configuration.*/
/*                 Hence this warning ceases to exist in case multiple        */
/*                 sequence/job/channels are configured.                      */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2984)-16 and                          */
/*                 END Msg(4:2984)-16 tags in the code.                       */
/******************************************************************************/

/* 17. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:4491) Composite expression of 'essentially unsigned'    */
/*                 type (unsigned short) is being converted to wider unsigned */
/*                 type, 'unsigned long' on assignment.                       */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4491)-17 and                          */
/*                 END Msg(4:4491)-17 tags in the code.                       */
/******************************************************************************/

/* 18. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2962) Using value of uninitialized automatic object.    */
/* Rule          : MISRA-C:2004 Rule 9.1                                      */
/* Justification : The object is initialized under pre-compile section, and   */
/*                 the pre-compile macros are generated by generation tool    */
/*                 based on user configuration.                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2962)-18 and                          */
/*                 END Msg(4:2962)-18 tags in the code.                       */
/******************************************************************************/

/* 19. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2961) Using value of uninitialized automatic object.    */
/* Rule          : MISRA-C:2004 Rule 9.1                                      */
/* Justification : The object is initialized and macros are generated by      */
/*                 generation tool based on user configuration.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2961)-19 and                          */
/*                 END Msg(4:2961)-19 tags in the code.                       */
/******************************************************************************/

/* 20. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2982) Assignment is redundant. The value of this object */
/*                 is never subsequently used.                                */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The object is used under different pre-compile sections.   */
/*                 However, for different configurations this warning ceases  */
/*                 to exist.                                                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2982)-20 and                          */
/*                 END Msg(4:2982)-20 tags in the code.                       */
/******************************************************************************/
/* 21. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:3138) Null statement is located close to other code     */
/*                  or comments                                               */
/* Rule          : MISRA-C:2004 Rule 14.3                                     */
/* Justification : An additional semi-colon is added to the critical          */
/*                 section macro to avoid static analysis warning             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3138)-21 and                          */
/*                 END Msg(4:3138)-21 tags in the code.                       */
/******************************************************************************/

/* 22. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2877) This loop will only be executed once and so the   */
/*                 loop mechanism is redundant.                               */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : This operation appears to be redundant because only one    */
/*                 controller is configured.                                  */
/*                 However, when two or more controllers are configured       */
/*                 this warning ceases to exist.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2877)-22 and                          */
/*                 END Msg(4:2877)-22 tags in the code.                       */
/******************************************************************************/
/* 23. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2991) The value of this 'if' controlling expression is  */
/*                  always 'true'.                                            */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is true because  */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for false value  */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2991)-23 and                          */
/*                 END Msg(4:2991)-23 tags in the code.                       */
/******************************************************************************/

/* 24. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2995) The result of this logical operation is always    */
/*                 'true'..                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is true because  */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for false value  */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2995)-24 and                          */
/*                 END Msg(4:2995)-24 tags in the code.                       */
/******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name      : Spi_HWInit
**
** Service ID         : Not Applicable
**
** Description        : This service initializes the HW Unit
**
** Sync/Async         : Synchronous.
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variable    : Spi_GpDmaUnitConfig, Spi_GstHWUnitInfo
**
** Function invoked   : None
**
** Registers Used     : CSIGnCTL0, CSIHnCTL0, DTSn, DTCTn, DNTCn, DNDAnH, DDCn,
**                      DDAn, DNSAnH, DSCn, DSAn, CSIGnCTL1, CSIHnCTL1,
**                      ICCSIHnIJC
*******************************************************************************/
#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWInit(void)
{
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpIntCntlAddress;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;
  P2VAR(Spi_MainOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainOsBaseAddr;
  #endif

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_ONE)
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpDmaTrigFactor;
  #endif
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  Spi_HWUnitType LddHWUnit;

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  uint8 LucLoopCount;
  uint8 LucMaxDmaChannels;
  #endif

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* MISRA Violation: START Msg(4:0317)-7 */
  Spi_GpDmaUnitConfig = Spi_GpConfigPtr->pDMAConfiguration;
  /* END Msg(4:0317)-7 */


  LucMaxDmaChannels = Spi_GpConfigPtr->ucMaxDmaChannels;
  for (LucLoopCount = SPI_ZERO; LucLoopCount <
                           LucMaxDmaChannels; LucLoopCount++)
  {
    /* MISRA Violation: START Msg(4:0491)-5 */
    LpDmaConfig = &Spi_GpDmaUnitConfig[LucLoopCount];
    /* END Msg(4:0491)-5 */

    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;
    /* Clear the DTS bit */
     #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    /* Disable channel operation */
    LpDmaRegisters->ulDCSTCn = LpDmaRegisters->ulDCSTCn | SPI_DMA_STR_CLEAR;
    LpDmaRegisters->ulDCENn = SPI_DMA_DCEN_DISABLE;

    if (SPI_ONE == LpDmaConfig->blComDmaChannel)
    {
      /* DMA channel for reception. Hence load the source address register */
      LpDmaRegisters->ulDSAn = LpDmaConfig->ulTxRxRegAddress;
      #if (SPI_8BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->ulDTCTn = SPI_DMA_8BIT_RX_SETTINGS;
      #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->ulDTCTn = SPI_DMA_16BIT_RX_SETTINGS;
      #else
      /* Load the transfer control register */
      LpDmaRegisters->ulDTCTn = SPI_DMA_32BIT_RX_SETTINGS;
      #endif /* (SPI_8BIT_DATA_WIDTH == STD_ON) */
    }
    else
    {
      /* DMA channel for transmission. Hence load the destination address */
      /* register */
      LpDmaRegisters->ulDDAn = LpDmaConfig->ulTxRxRegAddress;
      #if (SPI_8BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->ulDTCTn = SPI_DMA_8BIT_TX_SETTINGS;
      #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->ulDTCTn = SPI_DMA_16BIT_TX_SETTINGS;
      #else
      /* Load the transfer control register */
      LpDmaRegisters->ulDTCTn = SPI_DMA_32BIT_TX_SETTINGS;
      #endif /* (SPI_8BIT_DATA_WIDTH == STD_ON) */
    }
    #else
    LpDmaRegisters->ucDTSn = LpDmaRegisters->ucDTSn & SPI_DMA_DISABLE;
    if (SPI_ONE == LpDmaConfig->blComDmaChannel)
    {
      /* DMA channel for reception. Hence load the source address register */
      LpDmaRegisters->ulDSAn = LpDmaConfig->ulTxRxRegAddress;
      #if (SPI_8BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->usDTCTn = SPI_DMA_8BIT_RX_SETTINGS;
      #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->usDTCTn = SPI_DMA_16BIT_RX_SETTINGS;
      #else
      /* Load the transfer control register */
      LpDmaRegisters->usDTCTn = SPI_DMA_32BIT_RX_SETTINGS;
      #endif /* (SPI_8BIT_DATA_WIDTH == STD_ON) */
    }
    else
    {
      /* DMA channel for transmission. Hence load the destination address */
      /* register */
      LpDmaRegisters->ulDDAn = LpDmaConfig->ulTxRxRegAddress;
      #if (SPI_8BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->usDTCTn = SPI_DMA_8BIT_TX_SETTINGS;
      #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
      /* Load the transfer control register */
      LpDmaRegisters->usDTCTn = SPI_DMA_16BIT_TX_SETTINGS;
      #else
      /* Load the transfer control register */
      LpDmaRegisters->usDTCTn = SPI_DMA_32BIT_TX_SETTINGS;
      #endif /* (SPI_8BIT_DATA_WIDTH == STD_ON) */
    }
    #endif /* End of (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    /* Load the trigger factor configured */
    LpDmaRegisters->ulDTFRn = (uint32)(LpDmaConfig->usDmaDtfrRegValue);
    #else
    LpDmaTrigFactor = LpDmaConfig->pDmaDTFRRegAddr;
    /* Load the trigger factor configured */
    *LpDmaTrigFactor = LpDmaConfig->usDmaDtfrRegValue;
    #endif /* (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */

  }
  /* MISRA Violation: START Msg(4:0303)-10 */
  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
  #if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_SELCSIHDMA_ENABLED==STD_ON))
  SPI_SELECT_CSIH_DMA_ADDR = SPI_SELECT_CSIH_DMA_REG_VAL;
  #endif
  #endif
  #endif /* End of #if (SPI_DMA_MODE_ENABLE == STD_ON) */
  /* END Msg(4:0303)-10 */

  /* Initialize number of HW Unit as zero */
  LddHWUnit = SPI_ZERO;
  /* Check for maximum HW Unit configured */
  /* MISRA Violation: START Msg(4:2877)-22 */
  while (SPI_MAX_HW_DETAILS > LddHWUnit)
  /* END Msg(4:2877)-22 */
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    /* Check if the HW Unit is CSIH */
    if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
    #endif
    {
      LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

      /* Get the pointer to the structure of HW Unit information */
      LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

      /* Get the main user base address */
      LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;
      /* Get the main OS base address */
      LpMainOsBaseAddr = LpHWUnitInfo->pHwMainOsBaseAddress;

      /* Reset the PWR bit in main control register 0 */
      LpMainUserBaseAddr->ucMainCTL0 = SPI_ZERO;

      LunDataAccess1.ulRegData = SPI_ZERO;

      LunDataAccess1.ucRegData4[1] =
                            Spi_GpConfigPtr->aaChipSelect[LddHWUnitNumber];

      /* Configure all chip selects with configured polarity */
      LpMainOsBaseAddr->ulMainCTL1 = LunDataAccess1.ulRegData;
    }
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    else
    #endif
    {
      /* No action required */
    }
    #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxImrAddress;
    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usRxImrMask)));
    /* END Msg(4:4397)-2 */
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usTxImrMask)));
    /* END Msg(4:4397)-2 */

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pErrorImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usErrorImrMask)));
    /* END Msg(4:4397)-2 */

    #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) \
          && (SPI_CANCEL_API == STD_ON))
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxCancelImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usTxCancelImrMask)));
    /* END Msg(4:4397)-2 */
    #endif /*
            * (((SPI_DUAL_BUFFER_MODE == STD_ON) || \
            *      (SPI_TX_ONLY_MODE == STD_ON)) && (SPI_CANCEL_API == STD_ON))
            */

    /* Increment HW Unit index */
    /* MISRA Violation: START Msg(4:2984)-16 */
    LddHWUnit++;
    /* END Msg(4:2984)-16 */
  } /* End of while (LddHWUnit < SPI_MAX_HW_DETAILS) */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* #if ((SPI_LEVEL_DELIVERED == SPI_ONE)
            || (SPI_LEVEL_DELIVERED == SPI_TWO)) */

/*******************************************************************************
** Function Name      : Spi_HWDeInit
**
** Service ID         : Not Applicable
**
** Description        : This service de-initializes the HW Unit
**
** Sync/Async         : Synchronous.
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : Spi_Init should have been invoked.
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpDmaUnitConfig
**
** Function invoked   : Spi_HWDeActivateCS
**
** Registers Used     : CSIGnCTL0, CSIHnCTL0, DTSn
*******************************************************************************/
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
FUNC(void, SPI_PRIVATE_CODE) Spi_HWDeInit(void)
{
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  #endif

  #if ((SPI_CSIG_CONFIGURED == STD_ON) || \
       ((SPI_CSIH_CONFIGURED == STD_ON) && \
        (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  Spi_JobType LddNumJobs;
  boolean LblCsAction;
  #endif

  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpHwMainUserBaseAddress;

  Spi_HWUnitType LddHWUnit;

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  uint8 LucLoopCount;
  uint8 LucMaxDmaChannels;
  #endif

  /* Set the maximum number of zero */
  LddHWUnit = SPI_ZERO;

  /* Initialize each HW Unit */
  /* MISRA Violation: START Msg(4:2877)-22 */
  while (SPI_MAX_HW_DETAILS > LddHWUnit)
  /* END Msg(4:2877)-22 */
  {
    LpHwMainUserBaseAddress =
                         Spi_GstHWUnitInfo[LddHWUnit].pHwMainUserBaseAddress;
    /* Initialize control register 0 to zero */
    LpHwMainUserBaseAddress->ucMainCTL0 = SPI_ZERO;
    /* MISRA Violation: START Msg(4:2984)-16 */
    LddHWUnit++;
    /* END Msg(4:2984)-16 */
  } /* (LddHWUnit < SPI_MAX_HW_DETAILS) */

  /* Deactivate chip select */
  #if ((SPI_CSIG_CONFIGURED == STD_ON) || \
       ((SPI_CSIH_CONFIGURED == STD_ON) && \
        (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
  LddNumJobs = SPI_ZERO;
  /* Get the pointer of the first job linked to this sequence */
  LpJobConfig = Spi_GpFirstJob;

  while (SPI_MAX_JOB > LddNumJobs)
  {
    /* MISRA Violation: START Msg(4:2983)-14 */
    LddHWUnit = LpJobConfig->ddHWUnitIndex;
    /* END Msg(4:2983)-14 */
    LblCsAction = SPI_FALSE;

    #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
    if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
    #endif
    {
      #if (SPI_CSIG_CONFIGURED == STD_ON)
      if (NULL_PTR != LpJobConfig->pPortGrpRegAddress)
      {
        LblCsAction = SPI_TRUE;
      }
      else
      {
        /* No action required */
      }
      #endif
    }
    #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
    else
    #endif
    {
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      #if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)
      if ((SPI_GPIO_CS == LpJobConfig->ddCSType) &&
                         (NULL_PTR != LpJobConfig->pPortGrpRegAddress))
      {
        LblCsAction = SPI_TRUE;
      }
      else
      {
        /* No action required */
      }

      #endif /* (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION) */
      #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
    }

    if (SPI_TRUE == LblCsAction)
    {
      Spi_HWDeActivateCS(LpJobConfig);
    }
    else
    {
      /* No action required */
    }
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpJobConfig++;
    /* END Msg (4:0489)-3 */
    LddNumJobs++;

  }/* (LddNumJobs < SPI_MAX_JOB) */
  #endif /*
          * ((SPI_CSIG_CONFIGURED == STD_ON) || \
          *          ((SPI_CSIH_CONFIGURED == STD_ON) && \
          *                       (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
          */

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* MISRA Violation: START Msg(4:0317)-7 */
  Spi_GpDmaUnitConfig = Spi_GpConfigPtr->pDMAConfiguration;
  /* END Msg(4:0317)-7 */

  LucMaxDmaChannels = Spi_GpConfigPtr->ucMaxDmaChannels;
  for (LucLoopCount = SPI_ZERO; LucLoopCount <
                                          LucMaxDmaChannels; LucLoopCount++)
  {
    /* MISRA Violation: START Msg(4:0491)-5 */
    LpDmaConfig = &Spi_GpDmaUnitConfig[LucLoopCount];
    /* END Msg(4:0491)-5 */

    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;
    /* Clear the DTS and TC bit */
    #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    /* Disable channel operation */
    LpDmaRegisters->ulDCENn = SPI_DMA_DCEN_DISABLE;
    /* Clear DMA Transfer Request */
    LpDmaRegisters->ulDTFRRQCn = SPI_DMA_DRQ_CLEAR;
    /* Clear Software request flag */
    LpDmaRegisters->ulDCSTCn = LpDmaRegisters->ulDCSTCn | SPI_DMA_STR_CLEAR;
    #else
    LpDmaRegisters->ucDTSn = LpDmaRegisters->ucDTSn & SPI_DMA_DISABLE;
    #endif /* (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
  }
  #endif /* #if (SPI_DMA_MODE_ENABLE == STD_ON) */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name      : Spi_InternalWriteIB
**
** Service ID         : Not Applicable
**
** Description        : This service writes the data into HW Buffer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Channel - Channel ID
**                      DataBufferPtr - Pointer to source data buffer
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstChannel,
**
** Function Invoked   : Spi_HWWriteIB
**
** Registers Used     : None
*******************************************************************************/
#if (SPI_IB_CONFIGURED == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_InternalWriteIB(Spi_ChannelType Channel,
           P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr)
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;

  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
       ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
       (SPI_LEVEL_DELIVERED == SPI_ZERO)))
  /* Defining a local pointer to point to the source buffer */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpSrcPtr;
  /*
   * Defining a local pointer variable to point to internal buffer of the
   * requested channel
   */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpChannelIB;
  Spi_NumberOfDataType LddNoOfBuffers;
  #endif

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + Channel;
  /* END Msg (4:0488)-4 */

  /* Check if the buffer type is internal buffer (not hardware buffer) */
  if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      || (SPI_ONE < LpPBChannelConfig->ucChannelBufferType)
      #endif
      )
  {
    #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
         ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
         (SPI_LEVEL_DELIVERED == SPI_ZERO)))

    /* Get the local reference to the source buffer */
    LpSrcPtr = LpDataBufferPtr;

    LpChannelIB = Spi_GpConfigPtr->pChannelIBWrite;
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpChannelIB = LpChannelIB + LpPBChannelConfig->ddBufferIndex;
    /* END Msg (4:0488)-4 */
    LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;

    /* TRACE [R3, SPI023][R4, SPI023] */
    do
    {
      if (NULL_PTR != LpSrcPtr)
      {
        /* Copy the data from the source buffer to the internal buffer */
        *LpChannelIB = *LpSrcPtr;
        /* MISRA Violation: START Msg(4:0489)-3*/
        /* Increment the source pointer */
        LpSrcPtr++;
        /* END Msg (4:0489)-3 */
      }
      /* TRACE [R3, SPI035][R4, SPI035] */
      else
      {
        *LpChannelIB = LpPBChannelConfig->ddDefaultData;
      }

      /* MISRA Violation: START Msg(4:0489)-3*/
      /* Increment the buffer pointer */
      LpChannelIB++;
      /* END Msg (4:0489)-3 */

      /* Decrement the counter for number of buffers */
      LddNoOfBuffers--;
    } while (SPI_ZERO < LddNoOfBuffers);
    #endif /*
            * ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
            * ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) \
            * || (SPI_LEVEL_DELIVERED == SPI_ZERO)))
            */

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_ONE < LpPBChannelConfig->ucChannelBufferType)
    {
      /* Buffer type is 'hardware buffer' */
      Spi_HWWriteIB(Channel, LpDataBufferPtr);
    }
    else
    {
      /* No action required */
    }
    #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */
  } /* End of operations if the buffer type is 'internal buffer' */
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  else
  {
    /* Buffer type is 'hardware buffer' */
    Spi_HWWriteIB(Channel, LpDataBufferPtr);
  }
  #endif
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name      : Spi_HWWriteIB
**
** Service ID         : Not Applicable
**
** Description        : This service writes the data into HW Buffer
**
** Sync/Async         : Synchronous.
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Channel - Channel ID
**                      DataBufferPtr - Pointer to source data buffer
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GaaChannelEBData, Spi_GstHWUnitInfo
**
** Function Invoked   : None
**
** Registers Used     : CSIHnMRWP0, CSIHnTX0W
*******************************************************************************/
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWWriteIB(Spi_ChannelType Channel,
           P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr)
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  /* Defining a local pointer to point to structure of HW Unit information */
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;
  P2VAR(Spi_CsihUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihUserBaseAddr;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  #if((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  Spi_DataAccess LunDataAccess2;
  #endif
  /* END Msg(4:0759)-1 */
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  uint32 LulShiftData;
  #endif

  Spi_NumberOfDataType LddNoOfBuffers;
  Spi_HWUnitType LddHWUnit;
  Spi_DataType LddData;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + Channel;
  /* END Msg (4:0488)-4 */

  /* Get the index of the HW Unit */
  LddHWUnit = (Spi_HWUnitType)
   ((LpPBChannelConfig->ucChannelBufferType - SPI_TWO) + SPI_MAX_NUM_OF_CSIG);

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  /* MISRA Violation: START Msg(4:0316)-15 */
  /* Get the base address of the HW Unit */
  LpCsihUserBaseAddr = (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
  /* END Msg(4:0316)-15 */

  /* Read the existing value from the Read-Write pointer register to */
  /* a local variable */
  LunDataAccess1.ulRegData = LpCsihUserBaseAddr->ulCSIHMRWP0;

  /* Load the local variable with the value of Tx-Buffer Read/Write Pointer */
  LunDataAccess1.usRegData5[0] = LpPBChannelConfig->ddBufferIndex;

  /* Load back the value of the local variable to Read-Write pointer register */
  LpCsihUserBaseAddr->ulCSIHMRWP0 = LunDataAccess1.ulRegData;

  /* Get the number of buffers configured for the requested channel */
  LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;

  do
  {
    /* Take a local union variable to construct the value for TX0W register */
    LunDataAccess1.ulRegData = SPI_ZERO;

    LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpPBChannelConfig->ucCSInfo;
    /* Check if the source pointer is NULL pointer */
    if (NULL_PTR == LpDataBufferPtr)
    {
      /* get the configured default value */
      LddData = LpPBChannelConfig->ddDefaultData;
    }
    else
    {
      /* Get the value from the source pointer */
      LddData = *LpDataBufferPtr;
      /* MISRA Violation: START Msg(4:0489)-3*/
      LpDataBufferPtr++;
      /* END Msg (4:0489)-3 */
    }
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /* Data width is maximum 8-bit. Hence, load Tx data portion of the local
     * variable with the 8-bit data to be transmitted
     */
    LunDataAccess1.ucRegData4[0] = LddData;

    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /* Data width is maximum 16-bit. Hence, load Tx data portion of the local
     * variable with the 16-bit data to be transmitted
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;

    #else
    if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                  (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                  (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                  (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
    {
      LulShiftData = (uint32)LddData;
      LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                        (LpPBChannelConfig->ucDLSSetting)));
      LunDataAccess2.ulRegData = LulShiftData;
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
      LunDataAccess2.usRegData5[0] >> (SPI_SIXTEEN -
                                         (LpPBChannelConfig->ucDLSSetting));
      LunDataAccess2.usRegData5[0] =
                                   LunDataAccess1.Tst_ByteAccess.usRegData1;
    }
    else
    {
      /* Data width is maximum 32-bit. Tx data needs to be split to
       * LS Byte and MS Byte. Hence, load the Tx data to local union variable
       */
      LunDataAccess2.ulRegData = LddData;
    }
    /* Since data width is maximum 32-bit, check if the the data width of
     * requested channel is more than 16 bits
     */
    if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    {
      /* Data width is maximum 16-bit. Hence, load LSB portion of the
       * local variable with the 16-bit data to be transmitted
       */
      LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[0];
    }
    else
    {
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Load Tx data portion of the local variable with LSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[0];
      }
      else
      {
        /* Load Tx data portion of the local variable with MSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[1];
      }

      /* MISRA Violation: START Msg(4:2984)-16 */
      /* Set the EDL bit in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                      LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EDL;
      /* END Msg(4:2984)-16 */

      /* Load the value of the local union variable to TX0W register */
      LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
      /* Decrement the counter for number of buffers */
      LddNoOfBuffers--;
      /* MISRA Violation: START Msg(4:2984)-16 */
      /* Reset the EDL bit in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                    LunDataAccess1.Tst_ByteAccess.ucRegData3 & SPI_RESET_EDL;
      /* END Msg(4:2984)-16 */

      /* Check the data direction again to load other part of data */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Load Tx data portion of the local variable with MSB */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[1];
      }
      else
      {
        /* Load Tx data portion of the local variable with LSB */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[0];
      }
    } /* End of !if(SPI_TRUE != LpPBChannelConfig->blEDLEnabled)*/
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON) */
    /* Check if the buffer is last buffer of the channel */
    if (SPI_ONE == LddNoOfBuffers)
    {
      /* Check if it is last channel in the job */
      if (SPI_ONE == LpPBChannelConfig->ucChannelInfo)
      {
        /* MISRA Violation: START Msg(4:2984)-16 */
        /*
         * Since buffer is last buffer of the job and not last buffer of
         * the sequence, set only EOJ
         */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                        LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EOJ;
        /* END Msg(4:2984)-16 */
      }
      else if (SPI_TWO == LpPBChannelConfig->ucChannelInfo)
      {
        /* MISRA Violation: START Msg(4:2984)-16 */
        /* Since last buffer of sequence, set both CIRE and EOJ */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                    LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_CIREEOJ;
        /* END Msg(4:2984)-16 */
      }
      else
      {
        /* No action Required */
      }
    } /* End of if (SPI_ONE == LddNoOfBuffers) */
    else
    {
      /* No action required */
    }
    /* Load the value of the local union variable to TX0W register */
    LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
    /* Decrement the counter for number of buffers */
    LddNoOfBuffers--;

  }while (SPI_ZERO < LddNoOfBuffers);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of ((SPI_DUAL_BUFFER_MODE == STD_ON) ||
        * (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_HWReadIB
**
** Service ID         : Not Applicable
**
** Description        : This service reads the data from HW Buffer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Channel - Channel ID
**                      DataBufferPtr - Pointer to destination data buffer
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstChannel, Spi_GstHWUnitInfo
**
** Function Invoked   : None
**
** Registers Used     : CSIHnRX0W, CSIHnRX0H, CSIHnMRWP0, CSIHRX0H
*******************************************************************************/
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWReadIB(Spi_ChannelType Channel,
           P2VAR(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr)
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;
  P2VAR(Spi_CsihUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihUserBaseAddr;

  /* Defining a local pointer variable to hold the destination data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpDesPtr;
  Spi_NumberOfDataType LddNoOfBuffers;
  Spi_DataType LddData;

  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  Spi_DataAccess LunDataAccess2;
  /* END Msg(4:0759)-1 */

  Spi_HWUnitType LddHWUnit;

  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  uint32 LulShiftData;
  uint32 LulShiftDataLow;
  uint32 LulShiftDataHigh;
  #endif /* (SPI_EXTENDED_DATA_LENGTH == STD_ON) */

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + Channel;
  /* END Msg (4:0488)-4 */

  /* Get the index of the HW Unit */
  LddHWUnit = (Spi_HWUnitType)
    ((LpPBChannelConfig->ucChannelBufferType - SPI_TWO) + SPI_MAX_NUM_OF_CSIG);

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  /* MISRA Violation: START Msg(4:0316)-15 */
  /* Get the base address of the HW Unit */
  LpCsihUserBaseAddr = (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
  /* END Msg(4:0316)-15 */

  /*
   * Read the existing value from the Read-Write pointer register to
   * a local variable
   */
  LunDataAccess1.ulRegData = LpCsihUserBaseAddr->ulCSIHMRWP0;

  /* Load the local variable with the value of Tx-Buffer Read/Write Pointer */
  LunDataAccess1.usRegData5[1] = LpPBChannelConfig->ddBufferIndex;

  /* Load back the value of the local variable to Read-Write pointer register */
  LpCsihUserBaseAddr->ulCSIHMRWP0 = LunDataAccess1.ulRegData;

  /* Copy the destination pointer value to a local pointer variable */
  LpDesPtr = LpDataBufferPtr;

  /* Get the number of buffers configured for the requested channel */
  LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;

  do
  {
    LunDataAccess2.ulRegData = LpCsihUserBaseAddr->ulCSIHRX0W;
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */

    LddData = LunDataAccess2.ucRegData4[0];
    /*
     * Data width is maximum 16-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */
    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /* Load data from union variable to local variable */
    LddData = LunDataAccess2.usRegData5[0];

    #else
    /* Load data from union variable to local variable */

    /*
     * Data width is maximum 32-bit, Check if the the data width of
     * requested channel is more than 16 bits
     */
    if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                  (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                  (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                  (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
    {
      LulShiftData =  LunDataAccess1.ulRegData;
      LulShiftDataHigh = LulShiftData & SPI_HIGH_DATA_MASK;
      LulShiftDataLow = LulShiftData & SPI_LOW_DATA_MASK;
      LulShiftDataLow = LulShiftDataLow << (SPI_SIXTEEN -
                                     (LpPBChannelConfig->ucDLSSetting));
      LulShiftData = LulShiftDataHigh | LulShiftDataLow;
      LulShiftData = LulShiftData >> (SPI_SIXTEEN -
                               (LpPBChannelConfig->ucDLSSetting));
      /* MISRA Violation: START Msg(4:2982)-20 */
      LddData  = LulShiftData;
      /* END Msg(4:2982)-20 */
    }
    /*
     * Data width is maximum 32-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */
    else
    {
      /* MISRA Violation: START Msg(4:2982)-20 */
      LddData = LunDataAccess1.ulRegData;
      /* END Msg(4:2982)-20 */
    }
    LddData = LunDataAccess2.usRegData5[0];

    if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
    {
      LddNoOfBuffers--;
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /*
         * Take a local union variable to construct the value from RX0W
         * register
         */
        LunDataAccess2.usRegData5[0] = (uint16)LddData;
        LunDataAccess2.usRegData5[1] = LpCsihUserBaseAddr->usCSIHRX0H;
      }
      else
      {
        /*
         * Take a local union variable to construct the value from RX0W
         * register
         */
         if (SPI_ZERO != LpPBChannelConfig->ucDLSSetting)
         {
           LunDataAccess2.usRegData5[1] = (uint16)LddData;
           LunDataAccess2.usRegData5[0] = LpCsihUserBaseAddr->usCSIHRX0H;
           LunDataAccess2.usRegData5[0] = ((LunDataAccess2.usRegData5[0]) <<
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting)));
           LunDataAccess2.ulRegData = ((LunDataAccess2.ulRegData) >>
                         (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting)));
         }
         else
         {
           LunDataAccess2.usRegData5[1] = (uint16)LddData;
           LunDataAccess2.usRegData5[0] = LpCsihUserBaseAddr->usCSIHRX0H;
         }
      }
      /* Load data from union variable to local variable */
      LddData = LunDataAccess2.ulRegData;
    }
    else
    {
      /* No action required */
    }
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON)*/

    *LpDesPtr = LddData;
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpDesPtr++;
    /* END Msg (4:0489)-3 */

    /* Decrement the counter for number of buffers */
    LddNoOfBuffers--;
  }while (SPI_ZERO < LddNoOfBuffers);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
        * (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_HWActivateCS
**
** Service ID         : Not Applicable
**
** Description        : This service performs activation of the Chip Select pin
**
** Sync/Async         : Synchronous.
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_JobConfigType *LpJobConfiguration
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION,
**                      SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : None
*******************************************************************************/
#if ((SPI_CSIG_CONFIGURED == STD_ON) || \
     ((SPI_CSIH_CONFIGURED == STD_ON) && \
      (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWActivateCS
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST)
                             LpJobConfiguration, uint8 LucLoopCount)
{
  /* Defining a local pointer variable to the port group address */
  P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA) LpPortGpAdd;
  uint32 LulPinMskVal;

  /* Get the port group address */
  LpPortGpAdd = LpJobConfiguration->pPortGrpRegAddress;
  /* Get the pin mask value */
  LulPinMskVal = LpJobConfiguration->ulPortPinMask;

  /* Wait till counter reaches zero */
  while (SPI_ZERO < LucLoopCount)
  {
    LucLoopCount--;
  }

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* MISRA Violation: START Msg(4:3138)-21 */
  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_CHIP_SELECT_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif

  /* If Chip select polarity is configured as active High */
  if (SPI_ONE == LpJobConfiguration->blCsPolarity)
  {
    /* Load the port register */
    *LpPortGpAdd = LulPinMskVal;
  }
  else /* If Chip select polarity is configured as active Low */
  {
    /* Load the port register */
    *LpPortGpAdd = LulPinMskVal & SPI_PORT_REG_MASK;
  }

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts */
  /* MISRA Violation: START Msg(4:3138)-21 */
  SPI_EXIT_CRITICAL_SECTION(SPI_CHIP_SELECT_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of ((SPI_CSIG_CONFIGURED == STD_ON) || \
        *                ((SPI_CSIH_CONFIGURED == STD_ON) && \
        *                    (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
            */

/*******************************************************************************
** Function Name      : Spi_HWDeActivateCS
**
** Service ID         : Not Applicable
**
** Description        : This service performs de-activation of the Chip Select
**                      pin.
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_JobConfigType *LpJobConfiguration
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION,
**                      SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : None
*******************************************************************************/
#if ((SPI_CSIG_CONFIGURED == STD_ON) || \
     ((SPI_CSIH_CONFIGURED == STD_ON) && \
      (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWDeActivateCS
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfiguration)
{
  P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA) LpPortGpAdd;
  uint32 LulPinMskVal;

  /* Get the port group address */
  LpPortGpAdd = LpJobConfiguration->pPortGrpRegAddress;
  /* Get the pin mask value */
  LulPinMskVal = LpJobConfiguration->ulPortPinMask;

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* MISRA Violation: START Msg(4:3138)-21 */
  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_CHIP_SELECT_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif

  /* If Chip select polarity is configured as active High */
  if (SPI_ONE == LpJobConfiguration->blCsPolarity)
  {
    /* Load the port register */
    *LpPortGpAdd = LulPinMskVal & SPI_PORT_REG_MASK;
  }
  /* If Chip select polarity is configured as active Low */
  else
  {
    /* Load the port register */
    *LpPortGpAdd = LulPinMskVal;
  }

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* MISRA Violation: START Msg(4:3138)-21 */
  /* Enable relevant interrupts */
  SPI_EXIT_CRITICAL_SECTION(SPI_CHIP_SELECT_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((SPI_CSIG_CONFIGURED == STD_ON) || \
        *               ((SPI_CSIH_CONFIGURED == STD_ON) && \
        *                       (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
        */

/*******************************************************************************
** Function Name      : Spi_HWUnitStatus
**
** Service ID         : Not Applicable
**
** Description        : This service gets the Hardware unit status
**
** Sync/Async         : Synchronous.
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType HWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Spi_StatusType (SPI_IDLE/SPI_BUSY)
**
** Preconditions      : Spi_Init should have been invoked.
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function invoked   : None
**
** Registers Used     : CSIGnSTR0, CSIHnSTR0
*******************************************************************************/

#if (SPI_HW_STATUS_API == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(Spi_StatusType, SPI_PRIVATE_CODE) Spi_HWUnitStatus
                                                     (Spi_HWUnitType HWUnit)
{
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;

  Spi_StatusType LddHWUnitSts;

  LpMainUserBaseAddr = (Spi_GstHWUnitInfo[HWUnit]).pHwMainUserBaseAddress;

  /* TRACE [R4, SPI349] */
  /* Is bit TSF = 1 */
  if (SPI_CSIG_CSIH_BUSY ==
                        ((LpMainUserBaseAddr->ulMainSTR0) & SPI_CSIG_CSIH_BUSY))
  {
    LddHWUnitSts = SPI_BUSY;
  }
  else /* Is bit TSF = 0 */
  {
    LddHWUnitSts = SPI_IDLE;
  }

  return(LddHWUnitSts);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_HW_STATUS_API == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_HWTransmitSyncJob
**
** Service ID         : Not Applicable
**
** Description        : This service is used for transmitting the sequences
**                      synchronously
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_JobConfigType *LpJobConfiguration
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions      : None
**
** Global Variables   : Spi_GstHWUnitInfo, Spi_GpFirstChannel, Spi_GpConfigPtr,
**                      Spi_GaaChannelEBData
**
** Function Invoked   : Spi_HWActivateCS
**                      Spi_HWDeActivateCS
**
** Registers Used     : CSIHnMCTL0, CSIGnCTL0, CSIHnRX0H, CSIGnCFG0, CSIHnCTL0
**                      CSIGnSTR0, CSIHnSTR0, CSIGnSTCR0, CSIGnTX0W, CSIHnSTCR0
**                      CSIGnCTL1, CSIHnCTL1, CSIGnCTL2, CSIHnCTL2, CSIHnTX0W,
**                      CSIHnCFG, CSIGnRX0, CSIHnBRS0, CSIHnBRS0, CSIHnBRS0,
**                      CSIHnBRS0
*******************************************************************************/
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_HWTransmitSyncJob
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig)
{
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;
  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  P2VAR(Spi_MainOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainOsBaseAddr;
  #if (SPI_CSIG_CONFIGURED == STD_ON)
  /* Defining a local pointer variable to hold the OS base address of CSIG */
  P2VAR(Spi_CsigOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigOsBaseAddr;
  #endif /* (SPI_CSIG_CONFIGURED == STD_ON) */
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Defining a local pointer variable to hold the OS base address of CSIH */
  P2VAR(Spi_CsihOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihOsBaseAddr;
  /* Declare a local pointer to point to the Configured chipselect of job */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;
  Spi_HWUnitType LddHWUnitNumber;
  uint8 LucVar;
  uint32 LulBRSRegIndex;
  #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
  #endif /* (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) */

  #if (SPI_CSIG_CONFIGURED == STD_ON)
  /* Defining a local pointer variable to hold the user address of CSIG */
  P2VAR(Spi_CsigUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigUserBaseAddr;
  #endif /* (SPI_CSIG_CONFIGURED == STD_ON) */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2VAR(Spi_CsihUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihUserBaseAddr;
  #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */

  /* Declare a local pointer to point to the channel Config Data */
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  /* Declare a local pointer to point to the channel list */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_PRIVATE_CONST) LpChannelList;

  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  Spi_NumberOfDataType LddBufferIndex;
  #endif /* ((SPI_INTERNAL_RW_BUFFERS == STD_ON) ||
          *  (SPI_EB_CONFIGURED == STD_ON))
          */
  Spi_NumberOfDataType LddNoOfTxBuffers;
  Spi_NumberOfDataType LddNoOfRxBuffers;
  Spi_ChannelType LddNoOfChannels;
  Std_ReturnType LenReturnValue;
  Spi_HWUnitType LddHWUnit;
  Spi_DataType LddData;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  #if((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  Spi_DataAccess LunDataAccess2;
  #endif /* ((SPI_8BIT_DATA_WIDTH == STD_OFF) &&
          * (SPI_16BIT_DATA_WIDTH == STD_OFF))
          */
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  Spi_DataAccess LunDataAccess3;
  uint32 LulShiftData;
  #endif /* (SPI_EXTENDED_DATA_LENGTH == STD_ON) */
  /* END Msg (4:0759)-1 */
  uint16 LusIndex;
  boolean LblDemReported;
  LblDemReported = SPI_FALSE;
  LenReturnValue = E_OK;

  /* Get the HW Unit index */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;

  /* Get the number of channels */
  LddNoOfChannels = LpJobConfig->ddNoOfChannels;
  LpChannelList = LpJobConfig->pChannelList;

  /* Get the base address of the HW Unit */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];
  /* Get the main user base address */
  LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;

  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  /* Get the main OS base address */
  LpMainOsBaseAddr = LpHWUnitInfo->pHwMainOsBaseAddress;
  /* Reset the PWR bit since other registers need to be written */
  LpMainUserBaseAddr->ucMainCTL0 =
                                LpMainUserBaseAddr->ucMainCTL0 & SPI_RESET_PWR;

  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
  #endif /* ((SPI_CSIG_CONFIGURED == STD_ON) &&
          * (SPI_CSIH_CONFIGURED == STD_ON))
          */
  {
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    /* Clear the status register */
    LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIG_CLR_STS_FLAGS;

    /* MISRA Violation: START Msg(4:0316)-15 */
    LpCsigOsBaseAddr = (Spi_CsigOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
    /* END Msg (4:0316)-15 */

    /*Load the control register 1 with Ctl1 register value of current Job */
    LpMainOsBaseAddr->ulMainCTL1 =
                        (LpJobConfig->ulMainCtl1Value) & SPI_CSRI_AND_MASK;
    /* Set the SLIT bit */
           LpMainOsBaseAddr->ulMainCTL1 =
                                 LpMainOsBaseAddr->ulMainCTL1 | SPI_SET_SLIT;
    /* Update the Baud rate and Pre-scalar values from control register2 */
    LpMainOsBaseAddr->usMainCTL2 = LpJobConfig->usCtl2Value;

    /* Load the values for configuring chip select */
    LpCsigOsBaseAddr->ulCSIGCFG0 = LpJobConfig->ulConfigRegValue;

    /* Load the control register 0 value, setting PWR bit at the same time */
    LpMainUserBaseAddr->ucMainCTL0 = SPI_SET_DIRECT_ACCESS;
    #endif /* (SPI_CSIG_CONFIGURED == STD_ON) */
  }
  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  else
  #endif /* ((SPI_CSIG_CONFIGURED == STD_ON) &&
          *  (SPI_CSIH_CONFIGURED == STD_ON))
          */
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    /* Clear the status register */
    LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIH_CLR_STS_FLAGS;

    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    /* MISRA Violation: START Msg(4:0316)-15 */
    /* Get the CSIH base address */
    LpCsihOsBaseAddr = (Spi_CsihOsRegs *)(LpHWUnitInfo->pHwOsBufferAddress);
    /* END Msg (4:0316)-15 */

    /*
     * Load the local union variable with Ctl1 register value of current Job
     * with CSRI bit masked
     */
    LunDataAccess1.ulRegData = LpJobConfig->ulMainCtl1Value & SPI_CSRI_AND_MASK;

    /* Write the value with configured polarity of all chip selects */
    LunDataAccess1.ucRegData4[1] =
                            Spi_GpConfigPtr->aaChipSelect[LddHWUnitNumber];

    /* Load the control register 1 with the value of local union variable */
    LpMainOsBaseAddr->ulMainCTL1 = LunDataAccess1.ulRegData;

    /* Set the SLIT bit */
           LpMainOsBaseAddr->ulMainCTL1 =
                                 LpMainOsBaseAddr->ulMainCTL1 | SPI_SET_SLIT;

    /* Update the Pre-scalar value from control register2 */
    LpMainOsBaseAddr->usMainCTL2 = (LpJobConfig->usCtl2Value) &
                                                        SPI_CSIH_PRE_MASK;
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
                                                      (SPI_FIFO_MODE == STD_ON))
    /* Initialize CSIH memory register */
    LpCsihOsBaseAddr->usCSIHMCTL0 = LpJobConfig->usMCtl0Value;
    #endif
    LulBRSRegIndex = (((LpJobConfig->ulConfigRegValue) &
                                SPI_CSIH_BRS_SELECT_MASK) >> SPI_THIRTY);

    /* MISRA Violation: START Msg(4:4491)-17 */
    /* Update the Baud rate value from control register2 */
    LpCsihOsBaseAddr->usCSIHBRS[LulBRSRegIndex] =
                               (LpJobConfig->usCtl2Value) & SPI_CSIH_BRS_MASK;
    /* END Msg (4:4491)-17 */

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Get the value for multiple chip selects configured  */
    LpChipSelect = (Spi_GpConfigPtr->pCSArray) + (LpJobConfig->ucCSArrayIndex);
    /* END Msg (4:0488)-4 */

    #if( SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
    if (SPI_PERIPHERAL_ENGINE_CS == LpJobConfig->ddCSType)
    #endif
    {
      /* Load the number of chip selects */
      LucVar = LpJobConfig->ucNoOfCS;
      do
      {
        /* Initialize CSIH configuration register */
        LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect] =
                                             LpJobConfig->ulConfigRegValue;
        /* Decrement the number of chip selects */
        LucVar--;

        /* MISRA Violation: START Msg(4:0489)-3 */
        LpChipSelect++;
        /* END Msg (4:0489)-3 */
      }while (SPI_ZERO < LucVar);
    }
    #if( SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
    else
    {
      /* No action required */
    }
    #endif

    /* Load Main CTL0 register, setting PWR bit at the same time */
    LpMainUserBaseAddr->ucMainCTL0 = SPI_SET_DIRECT_ACCESS;
    #endif /*#if (SPI_CSIH_CONFIGURED == STD_ON)*/
  }
  #endif /* #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED) */

  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
  #endif
  {
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    /* Activate the chip select */
    Spi_HWActivateCS(LpJobConfig, (LpJobConfig->ucClk2CsLoopCnt));
    #endif
  }
  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  else
  #endif
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    #if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
    if (SPI_GPIO_CS == LpJobConfig->ddCSType)
    {
      /* Activate the chip select */
      Spi_HWActivateCS(LpJobConfig, (LpJobConfig->ucClk2CsLoopCnt));
    }
    else
    {
      /* No action required */
    }
    #endif
    #endif
  }
  /* Clear Interrupt flags */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                        (SPI_CLR_INT_REQ));
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                        (SPI_CLR_INT_REQ));
  /* Initialize the local buffers */
  LddNoOfRxBuffers = SPI_ZERO;
  LddNoOfTxBuffers = SPI_ZERO;

  do
  {
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Get the pointer to the channel linked to the job */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpChannelList);
    /* END Msg (4:0488)-4 */

    #if ((SPI_EB_CONFIGURED == STD_ON) || (SPI_INTERNAL_RW_BUFFERS == STD_ON))
    /* Get the buffer index value */
    LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
    #endif

    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    /* Check if the buffer type is internal buffer */
    if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
    #endif
    {
      #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Update the RAM variable for Tx pointer with channel IB index */
      LpNextTxData = Spi_GpConfigPtr->pChannelIBWrite;
      LpNextTxData = LpNextTxData + LddBufferIndex;
      /* END Msg (4:0488)-4 */

      /* Update the RAM variable for number of buffers of the channel */
      LddNoOfTxBuffers = LpPBChannelConfig->ddNoOfBuffers;
      #endif
    }
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
    #endif
    {
      #if (SPI_EB_CONFIGURED == STD_ON)
      /*
       * Update the RAM variable for Tx pointer with channel EB
       * source pointer
       */
      LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;
      /* Update the local counter with number of buffers of the channel */
      LddNoOfTxBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
      #endif
    }
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    else
    {
      /* No Action Required */
    }
    #endif

    #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
    if (((SPI_TRUE == Spi_GblSyncTx) ||
                            (SPI_FALSE == LpJobConfig->blIsChannelPropSame)))
    {
        Spi_GblSyncTx = SPI_FALSE;
        /* Clear pending interrupts when channel properties not same */
         RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                 (SPI_CLR_INT_REQ));
         RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                 (SPI_CLR_INT_REQ));
        #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
        if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
        #endif
        {
          #if (SPI_CSIG_CONFIGURED == STD_ON)
          /* MISRA Violation: START Msg(4:0316)-15 */
          /* Get the base address of the HW Unit */
          LpCsigOsBaseAddr = (Spi_CsigOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
          /* END Msg(4:0316)-15 */

          /*
           * To load configuration register, read the existing value to
           * local union variable
           */
          LunDataAccess1.ulRegData = LpCsigOsBaseAddr->ulCSIGCFG0;

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

          /* Reset the PWR bit since CFG register needs to be written */
          LpMainUserBaseAddr->ucMainCTL0 =
                                LpMainUserBaseAddr->ucMainCTL0 & SPI_RESET_PWR;

          /* Load back the value to configuration register */
          LpCsigOsBaseAddr->ulCSIGCFG0 = LunDataAccess1.ulRegData;

          /* Set the HW unit */
          LpMainUserBaseAddr->ucMainCTL0 =
                                LpMainUserBaseAddr->ucMainCTL0 | SPI_SET_PWR;
          /* Set the HW unit */
          LpMainUserBaseAddr->ucMainCTL0 = SPI_SET_DIRECT_ACCESS;
          #endif
        }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the OS base address of the HW Unit */
        LpCsihOsBaseAddr = (Spi_CsihOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
        /* END Msg(4:0316)-15 */

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the value for multiple chip selects configured  */
        LpChipSelect = (Spi_GpConfigPtr->pCSArray) +
                                              (LpJobConfig->ucCSArrayIndex);
        /* END Msg(4:0488)-4 */

        /* MISRA Violation: START Msg(4:0488)-4 */
        /*
         * To load configuration register, read the existing value to
         * local union variable
         */
        LunDataAccess1.ulRegData = LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect];
        /* END Msg (4:0488)-4 */

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

        /* Load the number of chip selects */
        LucVar = LpJobConfig->ucNoOfCS;

        /* Reset the PWR bit since CFG register needs to be written */
        LpMainUserBaseAddr->ucMainCTL0 =
                                LpMainUserBaseAddr->ucMainCTL0 & SPI_RESET_PWR;

        do
        {
          /* Initialize CSIH configuration register */
          LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect] = LunDataAccess1.ulRegData;
          /* Decrement number of chip selects */
          LucVar--;
          /* MISRA Violation: START Msg(4:0489)-3 */
          LpChipSelect++;
          /* END Msg (4:0489)-3 */
        }while (SPI_ZERO < LucVar);

        LpMainUserBaseAddr->ucMainCTL0 =
                                LpMainUserBaseAddr->ucMainCTL0 | SPI_SET_PWR;

        #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
      }
    }
    else
    {
      /* No action required */
    }
    #endif /* #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF ) */

    /* Check if the source pointer is NULL pointer */
    do
    {
      /*
       * Take a local union variable to construct the value for TX0W
       * register
       */
      LunDataAccess1.ulRegData = SPI_ZERO;
      #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))
      if (NULL_PTR == LpNextTxData)
      #endif /* ((SPI_INTERNAL_RW_BUFFERS == STD_ON) ||
              *  (SPI_EB_CONFIGURED == STD_ON))
              */
      {
        /* Get the configured default value */
        LddData = LpPBChannelConfig->ddDefaultData;
      }
      #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))
      else
      {
        /* Get the value from the source pointer */
        LddData = *LpNextTxData;
        /* MISRA Violation: START Msg(4:0489)-3*/
        LpNextTxData++;
        /* END Msg (4:0489)-3 */
      }
      #endif
      /* Set the EOJ bit if the buffer is last buffer of the Job */
      if ((SPI_ONE == LddNoOfTxBuffers) && (SPI_ONE == LddNoOfChannels))
      {
        LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;
      }
      else
      {
        /* No action required */
      }
      #if(SPI_8BIT_DATA_WIDTH == STD_ON)
      /*
       * Data width is maximum 8-bit. Hence, load Tx data portion of the
       * local variable with the 8-bit data to be transmitted
       */
      LunDataAccess1.Tst_ByteAccess.usRegData1 = (uint16)LddData;
      #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
      /*
       * Data width is maximum 16-bit. Hence, load Tx data portion of the
       * local variable with the 16-bit data to be transmitted
       */
      LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;
      #else
      if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                         (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                         (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                         (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
      {
        LulShiftData = (uint32)LddData;
        LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                          (LpPBChannelConfig->ucDLSSetting)));
        LunDataAccess2.ulRegData = LulShiftData;
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
        LunDataAccess2.usRegData5[0] >> (SPI_SIXTEEN -
                                           (LpPBChannelConfig->ucDLSSetting));
        LunDataAccess2.usRegData5[0] =
                                     LunDataAccess1.Tst_ByteAccess.usRegData1;
      }
      else
      {
        /*
         * Data width is maximum 32-bit. Tx data needs to be split to
         * LS Byte and MS Byte. Hence, load the Tx data to local union variable
         */
        LunDataAccess2.ulRegData = LddData;
      }

      /*
       * Since data width is maximum 32-bit, check if the the data width of
       * requested channel is more than 16 bits
       */
      if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
      {
        /*
         * Data width is maximum 16-bit. Hence, load LSB portion of the
         * local variable with the 16-bit data to be transmitted
         */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[0];
      }
      else
      {
        /* Check if the configured data direction is LSB first */
        if (SPI_TRUE == LpPBChannelConfig->blDirection)
        {
          /* Load Tx data portion of the local variable with LSB first */
          LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                                   LunDataAccess2.usRegData5[0];
        }
        else
        {
          /* Load Tx data portion of the local variable with MSB first */
          LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                                   LunDataAccess2.usRegData5[1];
        }

        /* Set the EDL bit in the local union variable */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EDL;
        LunDataAccess3.ulRegData = LunDataAccess1.ulRegData;

        /*
         * Check the configured data direction again to load other
         * part of data
         */
        if (SPI_TRUE == LpPBChannelConfig->blDirection)
        {
          /* Load Tx data portion of the local variable with MSB */
          LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                                  LunDataAccess2.usRegData5[1];
        }
        else
        {
          /* Load Tx data portion of the local variable with LSB */
          LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                                  LunDataAccess2.usRegData5[0];
        }
        /* MISRA Violation: START Msg(4:2984)-16 */
        /* Reset the EDL bit in the local union variable */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                      LunDataAccess1.Tst_ByteAccess.ucRegData3 & SPI_RESET_EDL;
        /* END Msg(4:2984)-16 */
      } /* End of !if( SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
      #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON) */

      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the user base address of the HW Unit */
        LpCsigUserBaseAddr =
                        (Spi_CsigUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
        /* END Msg (4:0316)-15 */

        #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
        /*
         * Since data width is maximum 32-bit, check if the the data width of
         * requested channel is more than 16 bits
         */
        if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
        {
          if (SPI_ZERO < LddNoOfTxBuffers)
            {
              /* Clear pending Tx interrupt */
              RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                      (SPI_CLR_INT_REQ));
              /* Load the value of the local union variable to TX0W register */
              LpCsigUserBaseAddr->ulCSIGTX0W = LunDataAccess3.ulRegData;
            }
            else
            {
              /* No action required */
            }
            LusIndex = SPI_ZERO;
            /* Wait for Tx0 register to get empty */
            while ((SPI_INT_FLAG_MASK != (*(LpHWUnitInfo->pTxIntCntlAddress) &
                                SPI_INT_FLAG_MASK)) &&
                                                  (SPI_FALSE == LblDemReported))
            {
              LusIndex++;
              /* TRACE [R3, SPI191][R4, SPI191] */
              /* TRACE [R3, SPI006][R4, SPI006] */
              /* Raise production error */
              /* Report error to DEM    */
              if (LusIndex >= SPI_LOOP_TIMEOUT)
              {
                Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                      DEM_EVENT_STATUS_FAILED);
                LblDemReported = SPI_TRUE;
              }
              else
              {
                /* No action required */
              }
            }
            if (SPI_FALSE == LblDemReported)
            {
              if (SPI_ZERO < LddNoOfTxBuffers)
                {
                  LusIndex = SPI_ZERO;
                  /* Wait till Rx0 register is full */
                  while ((SPI_INT_FLAG_MASK !=
                      (*(LpHWUnitInfo->pRxIntCntlAddress) & SPI_INT_FLAG_MASK))
                                               && (SPI_FALSE == LblDemReported))
                  {
                    LusIndex++;
                    /* TRACE [R3, SPI191][R4, SPI191] */
                    /* TRACE [R3, SPI006][R4, SPI006] */
                    /* Raise production error */
                    /* MISRA Violation: START Msg(4:0715)-12*/
                    if (SPI_LOOP_TIMEOUT <= LusIndex)
                    {
                       /* END Msg (4:0715)-12*/
                      Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                      DEM_EVENT_STATUS_FAILED);
                      LblDemReported = SPI_TRUE;
                    }
                    /* MISRA Violation: START Msg(4:0715)-12*/
                    else
                    {
                       /* END Msg (4:0715)-12*/
                      /* No action required */
                    }
                  }
                  /* Clear pending Rx interrupt */
                  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                          (SPI_CLR_INT_REQ));
                }
                else
                {
                  /* No action required */
                }
                /* Save the received data to a variable */
                Spi_GusDataAccess = LpCsigUserBaseAddr->usCSIGRX0;
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
        #endif /* End of #if (SPI_EXTENDED_DATA_LENGTH == STD_ON) */
        if (SPI_FALSE == LblDemReported)
        {
          if (SPI_ZERO < LddNoOfTxBuffers)
          {
            /* Clear pending Tx interrupt */
            RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                    (SPI_CLR_INT_REQ));
            /* Load the value of the local union variable to TX0W register */
            LpCsigUserBaseAddr->ulCSIGTX0W = LunDataAccess1.ulRegData;
            LddNoOfTxBuffers--;
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
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* Set chip select in the local union variable */
        LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;

        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the user base address of the HW Unit */
        LpCsihUserBaseAddr =
                (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
        /* END Msg(4:0316)-15 */

        #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
        /*
         * Since data width is maximum 32-bit, check if the the data width of
         * requested channel is more than 16 bits
         */
        if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
        {
            /* Set chip select in the local union variable */
            LunDataAccess3.Tst_ByteAccess.ucRegData2 =
                                                    LpJobConfig->ucChipSelect;
            if (SPI_ZERO < LddNoOfTxBuffers)
            {
              /* Clear pending Tx interrupt */
              RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                      (SPI_CLR_INT_REQ));
              LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess3.ulRegData;
            }
            else
            {
              /* No action required */
            }
            LusIndex = SPI_ZERO;
            /* Wait for Tx0 register to get empty */
            while ((SPI_INT_FLAG_MASK != (*(LpHWUnitInfo->pTxIntCntlAddress) &
                              SPI_INT_FLAG_MASK)) &&
                                                  (SPI_FALSE == LblDemReported))
            {
              LusIndex++;
              /* TRACE [R3, SPI191][R4, SPI191] */
              /* TRACE [R3, SPI006][R4, SPI006] */
              /* Report error to DEM */
              if (SPI_LOOP_TIMEOUT <= LusIndex)
              {
                Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                      DEM_EVENT_STATUS_FAILED);
                LblDemReported = SPI_TRUE;
              }
              else
              {
                /* No action required */
              }
            }
            if (SPI_FALSE == LblDemReported)
            {
              if (SPI_ZERO < LddNoOfTxBuffers)
              {
                LusIndex = SPI_ZERO;
                /* Wait till Rx0 register is full */
                while ((SPI_INT_FLAG_MASK !=
                  (*(LpHWUnitInfo->pRxIntCntlAddress) & SPI_INT_FLAG_MASK)) &&
                                                  (SPI_FALSE == LblDemReported))
                {
                  LusIndex++;
                  /* TRACE [R3, SPI191][R4, SPI191] */
                  /* TRACE [R3, SPI006][R4, SPI006] */
                  /* Raise production error */
                  /* Report error to DEM    */
                  /* MISRA Violation: START Msg(4:0715)-12*/
                  if (SPI_LOOP_TIMEOUT <= LusIndex)
                  {
                     /* END Msg (4:0715)-12*/
                    Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                      DEM_EVENT_STATUS_FAILED);
                    LblDemReported = SPI_TRUE;
                  }
                  /* MISRA Violation: START Msg(4:0715)-12*/
                  else
                  {
                     /* END Msg (4:0715)-12*/
                    /* No action required */
                  }
                }
                /* Clear pending Rx interrupt */
                RH850_SV_MODE_ICR_AND(16,(LpHWUnitInfo->pRxIntCntlAddress),
                                                        (SPI_CLR_INT_REQ));
              }
              else
              {
                /* No action required */
              }
              /* Save the received data to a variable */
              Spi_GusDataAccess = LpCsihUserBaseAddr->usCSIHRX0H;
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
        #endif /* End of #if (SPI_EXTENDED_DATA_LENGTH == STD_ON) */
        if (SPI_FALSE == LblDemReported)
        {
          if (SPI_ZERO < LddNoOfTxBuffers)
          {
            /* Clear pending Tx interrupt */
            RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                   (SPI_CLR_INT_REQ));
            /* Load the value of the local union variable to TX0W register */
            LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
            /* Decrement the number of buffers to be transmitted  */
            LddNoOfTxBuffers--;
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
        #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON)*/
      }
      LusIndex = SPI_ZERO;
      /* Wait for Tx0 register to get empty */
      while ((SPI_INT_FLAG_MASK != (*(LpHWUnitInfo->pTxIntCntlAddress) &
                                SPI_INT_FLAG_MASK)) &&
                                                  (SPI_FALSE == LblDemReported))
      {
        LusIndex++;
        /* TRACE [R3, SPI191][R4, SPI191] */
        /* TRACE [R3, SPI006][R4, SPI006] */
        /* Raise production error */
        /* Report error to DEM    */
        if (SPI_LOOP_TIMEOUT <= LusIndex)
        {
          Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                      DEM_EVENT_STATUS_FAILED);
          LblDemReported = SPI_TRUE;
        }
        else
        {
          /* No action required */
        }
      }
      if (SPI_ZERO != ((LpMainUserBaseAddr->ulMainSTR0) & SPI_ERROR_MASK))
      {
        LenReturnValue = E_NOT_OK;
        /* To break the loop */
        LddNoOfTxBuffers = SPI_ZERO;
      }
      else
      {
        /* No action required */
      }

      /* Checking of Dem error for exit time out for HW status Registers */
      if (SPI_FALSE == LblDemReported)
      {
        if (SPI_ZERO == LddNoOfRxBuffers)
        {
          #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
          /* Check if the buffer type is internal buffer */
          if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
          #endif
          {
            #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Update the RAM variable for Rx pointer with channel IB index */
            LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;
            LpCurrentRxData = LpCurrentRxData + LddBufferIndex;
            /* END Msg (4:0488)-4 */

            /* Update local Rx counter with number of buffers of the channel */
            LddNoOfRxBuffers = LpPBChannelConfig->ddNoOfBuffers;
            #endif
          }
          #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
          else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
          #endif
          {
            #if (SPI_EB_CONFIGURED == STD_ON)
            /* Update the RAM variable for Rx pointer with channel EB index */
            LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;

            /* Update local Rx counter with number of buffers of the channel */
            LddNoOfRxBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
            #endif
          }
          #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
          else
          {
            /* No Action Required */
          }
          #endif
        }
        else
        {
          /* No Action Required */
        }
        #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
        if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
        #endif
        {
          #if (SPI_CSIG_CONFIGURED == STD_ON)
          if (SPI_ZERO < LddNoOfRxBuffers)
          {
            LusIndex = SPI_ZERO;
            /* Wait till Rx0 register is full */
            while ((SPI_INT_FLAG_MASK != (*(LpHWUnitInfo->pRxIntCntlAddress) &
                                  SPI_INT_FLAG_MASK)) &&
                                                  (SPI_FALSE == LblDemReported))
            {
               LusIndex++;
               /* TRACE [R3, SPI191][R4, SPI191] */
               /* TRACE [R3, SPI006][R4, SPI006] */
               /* Raise production error */
               /* Report error to DEM    */
               if (SPI_LOOP_TIMEOUT <= LusIndex)
               {
                 Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                      DEM_EVENT_STATUS_FAILED);
                 LblDemReported = SPI_TRUE;
               }
               else
               {
                 /* No action required */
               }
            }
            /* Clear the pending Rx interrupt */
            RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                   (SPI_CLR_INT_REQ));
            #if(SPI_8BIT_DATA_WIDTH == STD_ON)
            /*
             * Data width is maximum 8-bit. Hence, Receive the data from the
             * Rx register to local union variable
             */
            LddData = (uint8)LpCsigUserBaseAddr->usCSIGRX0;
            #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
            LddData = LpCsigUserBaseAddr->usCSIGRX0;

            #else
            /*
             * Data width is maximum 32-bit, Check if the the data width of
             * requested channel is more than 16 bits
             */
            if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
            {
              /*
               * Data width is maximum 8-bit. Hence, Receive the data from the
               * Rx register to local union variable
               */
               LddData = LpCsigUserBaseAddr->usCSIGRX0;
            }
            else
            {
              /* Check if the configured data direction is LSB first */
              if (SPI_TRUE == LpPBChannelConfig->blDirection)
              {
                LunDataAccess2.usRegData5[1] =
                                          (uint16)LpCsigUserBaseAddr->usCSIGRX0;
                LunDataAccess2.usRegData5[0] = Spi_GusDataAccess;
              }
              else
              {
                if (SPI_ZERO != LpPBChannelConfig->ucDLSSetting)
                {
                  LunDataAccess2.usRegData5[0] =
                            (uint16)LpCsigUserBaseAddr->usCSIGRX0;
                  LunDataAccess2.usRegData5[0] = LunDataAccess2.usRegData5[0] <<
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
                  LunDataAccess2.usRegData5[1] = Spi_GusDataAccess;
                  LunDataAccess2.ulRegData = LunDataAccess2.ulRegData >>
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
                }
                else
                {
                  LunDataAccess2.usRegData5[0] =
                            (uint16)LpCsigUserBaseAddr->usCSIGRX0;
                  LunDataAccess2.usRegData5[1] = Spi_GusDataAccess;
                }
              }/* End of if(SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
              LddData = LunDataAccess2.ulRegData;
            }
            #endif
            /* Decrement the number of buffers received */
            LddNoOfRxBuffers--;
            #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || \
                                                 (SPI_EB_CONFIGURED == STD_ON))
            if (NULL_PTR != LpCurrentRxData)
            {
              *LpCurrentRxData = LddData;
              /* MISRA Violation: START Msg(4:0489)-3 */
              LpCurrentRxData++;
              /* END Msg (4:0489)-3 */
            }
            else
            {
              /* No Action Required */
            }
            #endif
          }
          else
          {
            /* No Action Required */
          }
          #endif
        }
        #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
        else
        #endif
        {
          #if (SPI_CSIH_CONFIGURED == STD_ON)
          if (SPI_ZERO < LddNoOfRxBuffers)
          {
            LusIndex = SPI_ZERO;
            /* Wait till Rx0 register is full */
            while ((SPI_INT_FLAG_MASK != (*(LpHWUnitInfo->pRxIntCntlAddress) &
                                  SPI_INT_FLAG_MASK)) &&
                                                  (SPI_FALSE == LblDemReported))
            {
               LusIndex++;
               /* TRACE [R3, SPI191][R4, SPI191] */
               /* TRACE [R3, SPI006][R4, SPI006] */
               /* Raise production error */
               /* Report error to DEM    */
               if (SPI_LOOP_TIMEOUT <= LusIndex)
               {
                 Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                      DEM_EVENT_STATUS_FAILED);
                 LblDemReported = SPI_TRUE;
               }
               else
               {
                 /* No action required */
               }
            }
            /* Clear pending Rx interrupt */
            RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                    (SPI_CLR_INT_REQ));
            #if(SPI_8BIT_DATA_WIDTH == STD_ON)
            /*
             * Data width is maximum 8-bit. Hence, Receive the data from the
             * Rx register to local union variable
             */
            LddData = (uint8)LpCsihUserBaseAddr->usCSIHRX0H;
            #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
            LddData = LpCsihUserBaseAddr->usCSIHRX0H;

            #else
            /*
             * Data width is maximum 32-bit, Check if the the data width of
             * requested channel is more than 16 bits
             */
            if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
            {
              /*
               * Data width is maximum 8-bit. Hence, Receive the data from the
               * Rx register to local union variable
               */
              LddData = LpCsihUserBaseAddr->usCSIHRX0H;
            }
            else
            {
              /* Check if the configured data direction is LSB first */
              if (SPI_TRUE == LpPBChannelConfig->blDirection)
              {
                LunDataAccess2.usRegData5[1] =
                                (uint16)LpCsihUserBaseAddr->usCSIHRX0H;
                LunDataAccess2.usRegData5[0] = Spi_GusDataAccess;
              }
              else
              {
                LunDataAccess2.usRegData5[0] =
                                         (uint16)LpCsihUserBaseAddr->usCSIHRX0H;
                LunDataAccess2.usRegData5[0] = LunDataAccess2.usRegData5[0] <<
                            (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
                LunDataAccess2.usRegData5[1] = Spi_GusDataAccess;
                LunDataAccess2.ulRegData = LunDataAccess2.ulRegData >>
                            (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
              }
              LddData = LunDataAccess2.ulRegData;
            } /* End of if(SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
            #endif
            /* Decrement the number of buffers received */
            LddNoOfRxBuffers--;
            #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || \
                                                 (SPI_EB_CONFIGURED == STD_ON))
            if (NULL_PTR != LpCurrentRxData)
            {
              *LpCurrentRxData = LddData;
              /* MISRA Violation: START Msg(4:0489)-3 */
              LpCurrentRxData++;
              /* END Msg (4:0489)-3 */
            }
            else
            {
              /* No Action Required */
            }
            #endif
          }
          else
          {
            /* No Action Required */
          }
          #endif
        }
      }
      else
      {
        /* No Action Required */
      }
    }while ((SPI_ZERO < LddNoOfTxBuffers) || ((SPI_ZERO < LddNoOfRxBuffers) &&
                               (SPI_TRUE == LpJobConfig->blIsChannelPropSame)));

    /* MISRA Violation: START Msg(4:0489)-3 */
    /* Increment the pointer to the channel */
    LpChannelList++;
    /* END Msg (4:0489)-3 */

    /* Decrement the counter for number of channels */
    LddNoOfChannels--;
  }while (SPI_ZERO < LddNoOfChannels);

  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
  #endif
  {
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    Spi_HWDeActivateCS(LpJobConfig);
    #endif /* End of #if (SPI_CSIG_CONFIGURED == STD_ON)*/
  }
  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  else
  #endif
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    /* Check if CSIHnCSRI bit is Set and reset the PWR Bit */
    if ((LpJobConfig->ulMainCtl1Value & SPI_CSRI_FLAG_MASK) ==
                                                            SPI_CSRI_FLAG_MASK)
    {
      /* Reset the PWR bit  */
      LpMainUserBaseAddr->ucMainCTL0 =
                              LpMainUserBaseAddr->ucMainCTL0 & SPI_RESET_PWR;
    }
    else
    {
      /* No Action Required */
    }
    #if( SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
    if (SPI_GPIO_CS == LpJobConfig->ddCSType)
    {
      /* Activate the chip select */
      Spi_HWDeActivateCS(LpJobConfig);
    }
    else
    {
      /* No action required */
    }
    #endif
    #endif
  }

  return(LenReturnValue);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((SPI_LEVEL_DELIVERED == SPI_ZERO) ||
        *  ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        *  (SPI_DIRECT_ACCESS_MODE == STD_ON)))
        */

/*******************************************************************************
** Function Name      : Spi_InitiateJobTx
**
** Service ID         : Not Applicable
**
** Description        : This service initiates the SPI transmission. This is
**                      common for all modes of asynchronous transmission
**
** Sync/Async         : Synchronous.
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_JobType LddJobListIndex
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstSeq, Spi_GpFirstJob, Spi_GpFirstJobList,
**                      Spi_GaaChannelEBData, Spi_GddAsyncMode,
**                      Spi_GddDriverStatus, Spi_GpFirstChannel
**
** Function Invoked   : Spi_HWActivateCS, Spi_ProcessChannel,
**                      SPI_EXIT_CRITICAL_SECTION, SPI_ENTER_CRITICAL_SECTION
**
** Registers Used    :  None
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_InitiateJobTx(Spi_JobType LddJobListIndex)
{
  /* Declare a local pointer to point to the Job Config Structure */
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;

  Spi_JobType LddJobIndex;
  Spi_HWUnitType LddHWUnit;
  uint8 LucHWMemoryMode;
  #if ((SPI_TX_ONLY_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
       (SPI_CANCEL_API == STD_ON))
  /* Defining a local variable to hold to index of the sequence */
  Spi_SequenceType LddSeqIndex;
  #endif

  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif

  #if (SPI_TX_ONLY_MODE == STD_ON)
  /* Defining a local variable to hold to index of the buffer */
  Spi_NumberOfDataType LddBufferIndex;
  /* Declare a local pointer to point to the channel Config Data */
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, PI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  P2VAR(Spi_TxOnlyCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpTxOnlyCurrentCommData;
  #endif

  #if (SPI_DUAL_BUFFER_MODE == STD_ON)
  P2VAR(Spi_DualBufferCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpDualBufferCurrentCommData;
  #endif

  #if ((SPI_TX_ONLY_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the respective job list index */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg (4:0488)-4 */

  /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg (4:0488)-4 */

  #if ((SPI_TX_ONLY_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
       (SPI_CANCEL_API == STD_ON))
  /* Get the index of the sequence */
  LddSeqIndex = LpJobList->ddSequenceIndex;
  #endif

  #if ((SPI_TX_ONLY_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON))
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg (4:0488)-4 */
  #endif

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* MISRA Violation: START Msg(4:3138)-21 */
  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif

  /* Update driver status as busy */
  Spi_GddDriverStatus = SPI_BUSY;

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* MISRA Violation: START Msg(4:3138)-21*/
  /* Enable relevant interrupts */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif

  /* Get the HW Unit index of the any of the job in the sequence */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;

  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
  #endif
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      /* Since High priority communication is active, memory mode is DAM */
      LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    }
    #endif /* End of #if (SPI_HW_PRIORITY_ENABLED == STD_ON) */

    #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */
  }
  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  else
  #endif
  {
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    /* Since HW Unit is CSIG, memory mode is DIRECT ACCESS by default */
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
    #endif
  }

  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  /* MISRA Violation: START Msg(4:2991)-23 */
  /* MISRA Violation: START Msg(4:2995)-24 */
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  /* END Msg(4:2991)-23 */
  /* END Msg(4:2995)-24 */
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    /* MISRA Violation: START Msg(4:2962)-18 */
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    /* END Msg(4:2962)-18 */
    #endif
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
    }
    #endif

    /*
     * Store the index of the current HW Unit in the RAM area to be
     * used by the ISR
     */
    LpCurrentCommData->ddHWUnitIndex = LddHWUnit;

    /* Save the current channel list to be transmitted */
    LpCurrentCommData->pCurrentTxChannelList = (LpJobConfig->pChannelList);

    /* Save the current channel list to be received */
    LpCurrentCommData->pCurrentRxChannelList = (LpJobConfig->pChannelList);

    /* Save the number of channels yet to be transmitted */
    LpCurrentCommData->ddNoOfTxChannels = (LpJobConfig->ddNoOfChannels);

    /* Save the number of channels yet to be received */
    LpCurrentCommData->ddNoOfRxChannels = (LpJobConfig->ddNoOfChannels);

    #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
    /* Reset the flag for indicating EDL */
    LpCurrentCommData->blTxEDL = SPI_FALSE;

    /* Reset the flag for indicating EDL */
    LpCurrentCommData->blRxEDL = SPI_FALSE;
    #endif
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if (SPI_DIRECT_ACCESS_MODE == STD_ON) */

  #if (SPI_TX_ONLY_MODE == STD_ON)
  if (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode)
  {
    LpTxOnlyCurrentCommData =
     &Spi_GstTxOnlyCurrentCommData
                 [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

    /* MISRA Violation: START Msg(4:0488)-4 */
    LpPBChannelConfig = Spi_GpFirstChannel + (*(LpJobConfig->pChannelList));
    /* END Msg (4:0488)-4 */

    /* Get the buffer index value */
    LddBufferIndex = LpPBChannelConfig->ddBufferIndex;

    /* MISRA Violation: START Msg(4:0488)-4 */
    LpTxOnlyCurrentCommData->pCurrentRxData = (Spi_GpConfigPtr->pChannelIBRead +
                                        (LddBufferIndex + SPI_RX_BUFFER_START));
    /* END Msg (4:0488)-4 */

    /* TRACE [R4, SPI234_Conf] */
    /* Get the pointer to the post-build structure of the channel */
    LpTxOnlyCurrentCommData->ddChannelIndex = *(LpJobConfig->pChannelList);

    /* Save the number of buffers to be received */
    LpTxOnlyCurrentCommData->ddNoOfBuffers = LpSeqConfig->ddNoOfBuffers;

    /* Save the number of buffers received */
    LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd = SPI_ZERO;

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Save the number of buffers to be received before a notification */
    LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx =
                    (Spi_GpConfigPtr->pJobNotifyIndex) +
                                        LpSeqConfig->ddNxtNotifyIndex;
    /* END Msg (4:0488)-4 */
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if(SPI_TX_ONLY_MODE == STD_ON) */

  #if (SPI_DUAL_BUFFER_MODE == STD_ON)
  if (SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode)
  {
    LpDualBufferCurrentCommData =
     &Spi_GstDualBufferCurrentCommData
                 [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

     /* MISRA Violation: START Msg(4:0488)-4 */
    LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx =
                          (Spi_GpConfigPtr->pJobNotifyIndex) +
                                          (LpSeqConfig->ddNxtNotifyIndex);
    /* END Msg(4:0488)-4 */

    LpDualBufferCurrentCommData->ddNoOfBuffersTxtd =
                *(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx);
  }
  else
  {
    /* No action required */
  }
  #endif

  #if (SPI_CANCEL_API == STD_ON)
  Spi_GaaSeqCurrentHWUnit[LddSeqIndex] = LddHWUnit;
  #endif

  /*
   * Global boolean variable to avoid copy of properties repeatedly if
   * properties of all channels are same. This boolean allows copying channel
   * properties once. This boolean will be reset immediately after its use
   */
  Spi_GblInitiateJobTx = SPI_TRUE;

  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
  #endif
  {
    #if (SPI_CSIG_CONFIGURED == STD_ON)
    /* Activate the chip select */
    Spi_HWActivateCS(LpJobConfig, (LpJobConfig->ucClk2CsLoopCnt));
    #endif
  }
  #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
  else
  #endif
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    #if( SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
    if (SPI_GPIO_CS == LpJobConfig->ddCSType)
    {
      /* Activate the chip select */
      Spi_HWActivateCS(LpJobConfig, (LpJobConfig->ucClk2CsLoopCnt));
    }
    else
    {
      /* No action required */
    }
    #endif /* End of #if ( SPI_AR_VERSION == SPI_AR_HIGHER_VERSION) */
    #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */
  }

  Spi_ProcessChannel(LddHWUnit, LucHWMemoryMode);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_ProcessChannel
**
** Service ID         : Not Applicable
**
** Description        : This function is to process remaining channels
**                      to be transmitted
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpFirstChannel,
**                      Spi_GpFirstJobList, Spi_GaaChannelEBData,
**                      Spi_GddAsyncMode, Spi_GpFirstJob, Spi_GddQueueIndex,
**                      Spi_GaaSeqQueue, Spi_GaaJobQueue
**
** Function Invoked   : Spi_TxDmaConfig, Spi_RxDmaConfig,
**                      SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIGnCFG0, CSIHnCFG0, CSIGnCTL1, CSIHnCTL1, CSIHnMCTL1
**                      CSIHnMCTL2, CSIHTX0W, CSIHnCFG, CSIGnTX0W
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannel
     (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobIndex;
  Spi_JobType LddJobListIndex;

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_SequenceType LddSeqIndex;
  #endif

  #if (SPI_DUAL_BUFFER_MODE == STD_ON)
  P2VAR(Spi_DualBufferCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                              LpDualBufferCurrentCommData;
  #endif

  #if (SPI_TX_ONLY_MODE == STD_ON)
  /* Declare a local pointer variable to hold Tx only communication data */
  P2VAR(Spi_TxOnlyCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                               LpTxOnlyCurrentCommData;
  #endif

  #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentTxChannelList;
  #endif
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  /* Declare a local pointer variable to hold Rx data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif
  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2VAR(Spi_CsihOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihOsBaseAddr;
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfigCSConfig;
  Spi_JobType LddJobIndexCSConfig;
  uint32 LulBRSRegIndex;
  uint8 LucVar;
  #endif

  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;
  P2VAR(Spi_MainOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainOsBaseAddr;

  #if (SPI_CSIG_CONFIGURED == STD_ON)
  P2VAR(Spi_CsigOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigOsBaseAddr;
  #endif

  #if ((SPI_CSIH_CONFIGURED == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
                                  (SPI_TX_ONLY_MODE == STD_ON))
  Spi_JobType LddNoOfJobs;
  #endif
  #endif /*  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)*/

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) || \
      (SPI_HW_PRIORITY_ENABLED == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) \
                                          || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  #endif

  #if (SPI_CSIG_CONFIGURED == STD_ON)
  P2VAR(Spi_CsigUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigUserBaseAddr;
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2VAR(Spi_CsihUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihUserBaseAddr;
  #endif

  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;

  Spi_NumberOfDataType LddBufferIndex;

  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg (4:0759)-1 */

  #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
  Spi_NumberOfDataType LddNoOfBuffers;
  Spi_DataType LddData;
  #endif

  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  #if ((SPI_CSIG_CONFIGURED == STD_ON) || (SPI_DIRECT_ACCESS_MODE == STD_ON) \
        || (SPI_FIFO_MODE == STD_ON))
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess2;
  /* END Msg (4:0759)-1 */
  #endif
  #endif
  #if ((SPI_EXTENDED_DATA_LENGTH) && ((SPI_DIRECT_ACCESS_MODE == STD_ON) \
                                      || (SPI_FIFO_MODE == STD_ON)))
  uint32 LulShiftData;
  #endif
  #if (SPI_FIFO_MODE == STD_ON)
  uint16 LusBufferCount;
  Spi_ChannelType LddNoOfChannels;
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  #if ((SPI_HW_PRIORITY_ENABLED == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) \
                                          || (SPI_TX_ONLY_MODE == STD_ON))
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  #endif
  #endif

  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
    }
    #endif

    LpCurrentTxChannelList = LpCurrentCommData->pCurrentTxChannelList;

    /* Get the pointer to the post-build structure of the channel */
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);
    /* END Msg (4:0488)-4 */

    LddBufferIndex = LpPBChannelConfig->ddBufferIndex;

    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    /* Check if the buffer type is internal buffer */
    if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        || ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
        && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
        #endif
        )
    #endif
    {
      #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Update the RAM variable for Tx pointer with channel IB index */
      LpNextTxData = Spi_GpConfigPtr->pChannelIBWrite;
      LpNextTxData = LpNextTxData + LddBufferIndex;
      /* END Msg (4:0488)-4 */

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Update the RAM variable for Rx pointer with channel IB index */
      LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;
      LpCurrentRxData = LpCurrentRxData + LddBufferIndex;
      /* END Msg (4:0488)-4 */

      /* Update the RAM variable for number of buffers of the channel */
      LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
      #endif
    }
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
    #endif
    {
      #if (SPI_EB_CONFIGURED == STD_ON)
      /*
       * Update the RAM variable for Tx pointer with channel EB
       * source pointer
       */
      LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;

      /* Update the RAM variable for Rx pointer */
      LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;

      /* Update the local counter with number of buffers of the channel */
      LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
      #endif
    }
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    else
    {
      /* No action required */
    }
    #endif

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-21 */
    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-21 */
    #endif

    /* MISRA Violation: START Msg(4:0489)-3 */
    (LpCurrentCommData->pCurrentTxChannelList)++;
    (LpCurrentCommData->pCurrentRxChannelList)++;
    /* END Msg (4:0489)-3 */

    /* Decrement the number of channels yet to be transmitted  */
    (LpCurrentCommData->ddNoOfTxChannels)--;
    (LpCurrentCommData->ddNoOfRxChannels)--;

    /* MISRA Violation: START Msg(4:2962)-18 */
    /* Save the pointer to data to be received */
    LpCurrentCommData->pCurrentRxData = LpCurrentRxData;

    /* Get the data to be transmitted */
    if (NULL_PTR == LpNextTxData)
    /* END Msg (4:2962)-18 */
    {
      /* Get the configured default value */
      LddData = LpPBChannelConfig->ddDefaultData;
    }
    else
    {
      /* Get the value from the source pointer */
      LddData = *LpNextTxData;
    }

    /* Save the pointer to next data to be transmitted */
    LpCurrentCommData->pNextTxData = LpNextTxData;

    /* MISRA Violation: START Msg(4:2962)-18 */
    /* Save and decrement the number of buffers */
    LpCurrentCommData->ddNoOfTxBuffers = LddNoOfBuffers;
    /* END Msg (4:2962)-18 */

    LpCurrentCommData->ddNoOfRxBuffers = LddNoOfBuffers;

    (LpCurrentCommData->ddNoOfTxBuffers)--;
    (LpCurrentCommData->ddNoOfRxBuffers)--;

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-21*/
    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-21 */
    #endif
  } /* End of if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode) */
  else
  {
    /* No Action Required */
  }
  #endif /* End of (SPI_DIRECT_ACCESS_MODE == STD_ON) */

  /* Update of the local variables */
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
       (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  if ((SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode) ||
      (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode))
  {
    /* Get the index of job list for the current job from the job queue */
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    /* MISRA Violation: START Msg(4:2841)-6 */
    LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber
                                     + SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
    /* END Msg(4:2841)-6 */
    #else
    LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
    #endif /* End of #if (SPI_HW_PRIORITY_ENABLED == STD_ON) */
  }
  else
  {
    /* No action required  */
  }
  #endif /*
          * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
          *             (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
          *                      (SPI_FIFO_MODE == STD_ON) || \
          *                               (SPI_HW_PRIORITY_ENABLED == STD_ON))
          */

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  if ((SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode) ||
                               (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode))
  {
    LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];

    /* MISRA Violation: START Msg(4:0488)-4 */
    LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
    /* END Msg (4:0488)-4 */

    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;

    /* Get the index of the job list for the first job of the sequence */
    LddJobListIndex = LddJobListIndex + ((LpSeqConfig->ddNoOfJobs) - SPI_ONE);
  }
  else
  {
    /* No action required */
  }
  #endif

  /* Get the pointer to the respective job list index  */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* MISRA Violation: START Msg(4:2962)-18 */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg (4:2962)-18 */
  /* END Msg (4:0488)-4 */

  /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg (4:0488)-4 */

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  #if (SPI_CSIG_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:0316)-15 */
  /* Get the user base address of the HW Unit */
  LpCsigUserBaseAddr = (Spi_CsigUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
  /* END Msg (4:0316)-15 */
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:0316)-15 */
  /* Get the user base address of the HW Unit */
  LpCsihUserBaseAddr = (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
  /* END Msg (4:0316)-15 */
  #endif

  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  if (((SPI_TRUE == Spi_GblInitiateJobTx) ||
                            (SPI_FALSE == LpJobConfig->blIsChannelPropSame))
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      && (SPI_FALSE == (Spi_GaaHighPriorityCommActive[LddHWUnitNumber]
      ^ Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber]))
      #endif /* End of #if (SPI_HW_PRIORITY_ENABLED == STD_ON)*/
      )
  {
    /* Get the main user base address */
    LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;
    /* Get the main OS base address */
    LpMainOsBaseAddr = LpHWUnitInfo->pHwMainOsBaseAddress;

    /* Reset the PWR bit since other registers need to be written */
    LpMainUserBaseAddr->ucMainCTL0 =
                                LpMainUserBaseAddr->ucMainCTL0 & SPI_RESET_PWR;

    if (SPI_TRUE == Spi_GblInitiateJobTx)
    {
      Spi_GblInitiateJobTx = SPI_FALSE;

      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* Clear the status register */
        LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIG_CLR_STS_FLAGS;

        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the OS base address of the HW Unit */
        LpCsigOsBaseAddr = (Spi_CsigOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
        /* END Msg (4:0316)-15 */


        /* Load the control register 1 with Ctl1 reg value of current Job */
        LpMainOsBaseAddr->ulMainCTL1 =
              (LpJobConfig->ulMainCtl1Value) & SPI_CSRI_AND_MASK;

        /* Set the SLIT bit */
        LpMainOsBaseAddr->ulMainCTL1 =
                                LpMainOsBaseAddr->ulMainCTL1 | SPI_SET_SLIT;

        /* Update the Baud rate and Pre-scalar values from control register2 */
        LpMainOsBaseAddr->usMainCTL2 = LpJobConfig->usCtl2Value;

        /* Update the job result variable */
        /* TRACE [R3, SPI157][R4, SPI157] */
        Spi_GaaJobResult[LddJobIndex] = SPI_JOB_PENDING;

        /*
         * To load configuration register, read the existing communication
         * type values  to a local union variable
         */
        /* MISRA Violation: START Msg(4:0306)-13 */
        LunDataAccess1.ulRegData = LpJobConfig->ulConfigRegValue;
        /* END Msg(4:0306)-13 */

        /* Load the local variable with data width */
        /* MISRA Violation: START Msg(4:2962)-18 */
        LunDataAccess1.ucRegData4[3] =
                                LunDataAccess1.ucRegData4[3] & SPI_DLS_MASK;
        LunDataAccess1.ucRegData4[3] =
                LunDataAccess1.ucRegData4[3] | LpPBChannelConfig->ucDLSSetting;
        /* END Msg (4:2962)-18 */

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
        #endif /* End of #if (SPI_CSIG_CONFIGURED == STD_ON) */

      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* Clear the status register */
        LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIH_CLR_STS_FLAGS;

        LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the OS base address of the HW Unit */
        LpCsihOsBaseAddr = (Spi_CsihOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
        /* END Msg (4:0316)-15 */

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
        #endif /* End of #if (SPI_DIRECT_ACCESS_MODE == STD_ON) */

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
        #endif /* End of #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
                * (SPI_TX_ONLY_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
                */


        #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        if ((SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode) ||
                               (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode))
        {
          /* Get the number of jobs */
          LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
        }
        else
        #endif
        {
          LddNoOfJobs = SPI_ONE;
        }

        do
        {
          LddJobIndexCSConfig = LpJobList->ddJobIndex;

          /* Update the job result variable */
          Spi_GaaJobResult[LddJobIndexCSConfig] = SPI_JOB_PENDING;

          /* MISRA Violation: START Msg(4:0488)-4 */
          LpJobConfigCSConfig = Spi_GpFirstJob + LddJobIndexCSConfig;

          /* Get the value for multiple chip selects configured */
          LpChipSelect = (Spi_GpConfigPtr->pCSArray) +
                                        (LpJobConfigCSConfig->ucCSArrayIndex);

          /* END Msg (4:0488)-4 */
          #if ((SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) \
                                             || (SPI_TX_ONLY_MODE == STD_ON))
          if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
          {
            /* Get the pointer to the post-build structure of the channel */
            /* MISRA Violation: START Msg(4:0488)-4 */
            LpPBChannelConfig = Spi_GpFirstChannel +
                                        (*LpJobConfigCSConfig->pChannelList);
            /* END Msg (4:0488)-4 */
          }
          else
          {
            /* No action required */
          }
          #endif /* End of #if ((SPI_FIFO_MODE == STD_ON) ||
                  * (SPI_DUAL_BUFFER_MODE == STD_ON) \
                  * || (SPI_TX_ONLY_MODE == STD_ON))
                  */
          /*
           * To load configuration register, read the existing communication
           * type values  to a local union variable
           */
          LunDataAccess1.ulRegData = LpJobConfigCSConfig->ulConfigRegValue;

          /* Load the local variable with data width */
          LunDataAccess1.ucRegData4[3] =
                              LunDataAccess1.ucRegData4[3] & SPI_DLS_MASK;

          /* MISRA Violation: START Msg(4:2962)-18 */
          LunDataAccess1.ucRegData4[3] =
              LunDataAccess1.ucRegData4[3] | LpPBChannelConfig->ucDLSSetting;
          /* END Msg (4:2962)-18 */

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

          /* MISRA Violation: START Msg(4:4491)-17 */
          /* Update the Baud rate value from control register2 */
          LpCsihOsBaseAddr->usCSIHBRS[LulBRSRegIndex] =
                      (LpJobConfigCSConfig->usCtl2Value) & SPI_CSIH_BRS_MASK;
          /* END Msg (4:4491)-17 */

          /* Load the number of chip selects */
          LucVar = LpJobConfigCSConfig->ucNoOfCS;

          do
          {
            /* Initialize CSIH configuration register */
            LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect] =
                                                LunDataAccess1.ulRegData;
            /* Decrement number of chip selects */
            LucVar--;

            /* MISRA Violation: START Msg(4:0489)-3 */
            LpChipSelect++;
            /* END Msg (4:0489)-3 */
          }while (SPI_ZERO < LucVar);

          /* MISRA Violation: START Msg(4:0489)-3 */
          /* MISRA Violation: START Msg(4:2983)-14 */
          LpJobList--;
          /* END Msg(4:2983)-14 */
          /* END Msg(4:0489)-3 */

          /* MISRA Violation: START Msg(4:2984)-16 */
          LddNoOfJobs--;
          /* END Msg (4:2984)-16 */
        /* MISRA Violation: START Msg(4:2993)-11 */
        /* MISRA Violation: START Msg (4:2996)-9 */
        }while (SPI_ZERO < LddNoOfJobs);
        /* END Msg  (4:2993)-11  */
        /* END Msg  (4:2996)-9 */
        #endif  /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */
      }
    }
    else
    {
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* Clear the status register */
        LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIG_CLR_STS_FLAGS;

        /* MISRA Violation: START Msg (4:0316)-15 */
        /* Get the OS base address of the HW Unit */
        LpCsigOsBaseAddr = (Spi_CsigOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
        /* END Msg  (4:0316)-15 */

        /* To load configuration register, read the existing value to  */
        /* local union variable */
        /* MISRA Violation: START Msg(4:0306)-13 */
        LunDataAccess1.ulRegData = LpCsigOsBaseAddr->ulCSIGCFG0;
        /* END Msg(4:0306)-13 */

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
        #endif

      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* Clear the status register */
        LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIH_CLR_STS_FLAGS;

        #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
        /* MISRA Violation: START Msg (4:0316)-15 */
        /* Get the OS base address of the HW Unit */
        LpCsihOsBaseAddr = (Spi_CsihOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
        /* END Msg  (4:0316)-15 */

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the value for multiple chip selects configured */
        LpChipSelect = (Spi_GpConfigPtr->pCSArray) +
                                                (LpJobConfig->ucCSArrayIndex);
        /* END Msg (4:0488)-4 */

        if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
        {
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Get the pointer to the post-build structure of the channel */
          LpPBChannelConfig = Spi_GpFirstChannel +
                                            (*LpJobConfig->pChannelList);
          /* END Msg (4:0488)-4 */
        }
        else
        {
          /* No action required */
        }

        /*
         * To load configuration register, read the existing value to
         * local union variable
         */
        LunDataAccess1.ulRegData = LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect];

        /* Load the local variable with data width */
        LunDataAccess1.ucRegData4[3] =
                                LunDataAccess1.ucRegData4[3] & SPI_DLS_MASK;
        /* MISRA Violation: START Msg(4:2962)-18 */
        LunDataAccess1.ucRegData4[3] =
                LunDataAccess1.ucRegData4[3] | LpPBChannelConfig->ucDLSSetting;
        /* END Msg (4:2962)-18 */
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

        /* Initialize CSIH configuration register */
        LpCsihOsBaseAddr->ulCSIHCFG[*LpChipSelect] = LunDataAccess1.ulRegData;
        #endif
        #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */
      }
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
  }
  else
  {
    /* No action required */
  }
  #endif /* #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) */

  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_DMA_MODE_ENABLE == STD_OFF)
    if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
    {
      /* Clear the pending interrupt */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                           (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                           (SPI_CLR_INT_REQ));

      /* Register dummy read-write  */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                           (SPI_CLR_INT_REQ));
      /* SYNCP execution */
      EXECUTE_SYNCP();
      #endif

      RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pTxImrAddress),
                           (LpHWUnitInfo->usTxImrMask));
      RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pRxImrAddress),
                           (LpHWUnitInfo->usRxImrMask));
    }
    else
    {
      /* No action required */
    }
    #else
    /*If current Job is in DMA mode */
    if (SPI_TRUE == LpJobConfig->blHWUnitDmaMode)
    {
      if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
      {
        /* If the selected asynchronous mode is DMA mode */
        Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;
        /* MISRA Violation: START Msg(4:2962)-18 */
        Spi_RxDmaConfig(LpJobConfig,
               LpCurrentCommData->pCurrentRxData,
                                LddNoOfBuffers, LpPBChannelConfig->ucDataType);
        /* END Msg (4:2962)-18 */
        Spi_TxDmaConfig(LpJobConfig, LpNextTxData, LddNoOfBuffers,
                              LpPBChannelConfig->ucDataType);
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
      {
         /* Clear the pending interrupt */
         RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                      (SPI_CLR_INT_REQ));
         RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                      (SPI_CLR_INT_REQ));
         /* Register dummy read-write  */
         #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
         RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                      (SPI_CLR_INT_REQ));
         /* SYNCP execution */
         EXECUTE_SYNCP();
         #endif

         RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pTxImrAddress),
                                       (LpHWUnitInfo->usTxImrMask));
         RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pRxImrAddress),
                                         (LpHWUnitInfo->usRxImrMask));
      }
      else
      {
        /* No action required */
      }
    }
    #endif /* End of (SPI_DMA_MODE_ENABLE == STD_OFF) */
    /* Take a local union variable to construct the value for TX0W register */
    LunDataAccess1.ulRegData = SPI_ZERO;

    #if(SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, load Tx data portion of the local
     * variable with the 8-bit data to be transmitted
     */
    LunDataAccess1.usRegData5[0] = LddData;
    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /* Data width is maximum 16-bit. Hence, load Tx data portion of the local
     * variable with the 16-bit data to be transmitted
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;
    #else
    /* MISRA Violation: START Msg(4:2962)-18 */
    if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                       (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                       (SPI_SIXTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                       (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
    /* END Msg (4:2962)-18 */
    {
      LulShiftData = (uint32)LddData;
      LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                          (LpPBChannelConfig->ucDLSSetting)));
      LunDataAccess2.ulRegData = LulShiftData;
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
      LunDataAccess2.usRegData5[0] >> (SPI_SIXTEEN -
                                         (LpPBChannelConfig->ucDLSSetting));
      LunDataAccess2.usRegData5[0] =
                                     LunDataAccess1.Tst_ByteAccess.usRegData1;
    }
    else
    {
      /*
       * Data width is maximum 32-bit. Tx data needs to be split to
       * LS Byte and MS Byte. Hence, load the Tx data to local union variable
       */
      LunDataAccess2.ulRegData = LddData;
    }

    /* Since data width is maximum 32-bit, check if the the data width of
     * requested channel is more than 16 bits
     */
    if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    {
      /* Data width is maximum 16-bit. Hence, load LSB portion of the
       * local variable with the 16-bit data to be transmitted
       */
      LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[0];
    }
    else
    {
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Load Tx data portion of the local variable with LSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[0];
      }
      else
      {
        /* Load Tx data portion of the local variable with MSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LunDataAccess2.usRegData5[1];
      }

      /* Set the EDL bit in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EDL;

      /* Set the flag for indicating EDL */
      LpCurrentCommData->blTxEDL = SPI_TRUE;
      LpCurrentCommData->blRxEDL = SPI_TRUE;

    } /* End of !if(SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON) */

    #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
    if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
    #endif
    {
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      /* Set chip select in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;

      /* MISRA Violation: START Msg(4:2962)-18 */
      /* Check if the buffer is last buffer of the channel */
      if (SPI_ONE == LddNoOfBuffers)
      /* END Msg (4:2962)-18 */
      {
        /* Check if it is last channel in the job */
        if ((SPI_ZERO == (LpCurrentCommData->ddNoOfTxChannels))
        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
            && (SPI_FALSE == Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
        #endif
            )
        {
          /* MISRA Violation: START Msg(4:2984)-16 */
          /* Since buffer is last buffer of the job set EOJ */
          LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                      LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EOJ;
          /* END Msg (4:2984)-16 */
        }
        else
        {
          /* No action required */
        }
      } /* End of if (SPI_ONE == LddNoOfBuffers) */
      else
      {
        /* No action required */
      }
      #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */
    }
    #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
    else
    #endif
    {
      /* No action required */
    }

    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    if (SPI_ONE < LddNoOfBuffers)
    #endif
    {
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* Load the value of the local union variable to TX0W register */
        LpCsigUserBaseAddr->ulCSIGTX0W = LunDataAccess1.ulRegData;
        #endif
      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* Load the value of the local union variable to TX0W register */
        LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
        #endif
      }
    }
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    else
    #endif
    {
      /* No action required */
    }/* End of (SPI_DMA_MODE_ENABLE == STD_ON) */
  }
  else
  {
    /* No action required */
  }
  #endif /* #if(SPI_DIRECT_ACCESS_MODE == STD_ON) */

  #if (SPI_CSIH_CONFIGURED == STD_ON)

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  if ((SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode) ||
                      (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode))
  {
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpPBChannelConfig = Spi_GpFirstChannel + (*(LpJobConfig->pChannelList));
    /* END Msg (4:0488)-4 */
    LddBufferIndex = LpPBChannelConfig->ddBufferIndex;

    /*
     * Take a local union variable to construct the value for MCTL2
     * register and load the local union variable with SOP value
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 = LddBufferIndex;

    if (SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode)
    {
      #if (SPI_DUAL_BUFFER_MODE == STD_ON)
      LpDualBufferCurrentCommData =
              &Spi_GstDualBufferCurrentCommData
                   [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

      LunDataAccess1.Tst_ByteAccess.ucRegData2 =
           (uint8)(*(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx));

      if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
      {
        /* Clear the pending interrupt */
        RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                             (SPI_CLR_INT_REQ));
        /* Register dummy read-write  */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                             (SPI_CLR_INT_REQ));
        /* SYNCP execution */
        EXECUTE_SYNCP();
        #endif
        RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pTxImrAddress),
                             (LpHWUnitInfo->usTxImrMask));
      }
      else
      {
        /* No action required */
      }
      #endif /* #if (SPI_DUAL_BUFFER_MODE == STD_ON) */
    }
    #if (SPI_TX_ONLY_MODE == STD_ON)
    else
    {
      LpTxOnlyCurrentCommData =
       &Spi_GstTxOnlyCurrentCommData
               [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

      LunDataAccess1.Tst_ByteAccess.ucRegData2 =
                          (uint8)(LpTxOnlyCurrentCommData->ddNoOfBuffers);

      if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
      {
        #if (SPI_DMA_MODE_ENABLE == STD_ON)
        if (SPI_TRUE == LpJobConfig->blHWUnitDmaMode)
        {
          Spi_RxDmaConfig(LpJobConfig,
                             LpTxOnlyCurrentCommData->pCurrentRxData,
                             LpTxOnlyCurrentCommData->ddNoOfBuffers,
                             LpPBChannelConfig->ucDataType);
        }
        else
        {
          /* Clear the pending interrupt */
          RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                        (SPI_CLR_INT_REQ));

          /* Register dummy read-write  */
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                        (SPI_CLR_INT_REQ));
          /* SYNCP execution */
          EXECUTE_SYNCP();
          #endif
          RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pRxImrAddress),
                               (LpHWUnitInfo->usRxImrMask));
        }
        #else
          /* Clear the pending interrupt */
          RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                               (SPI_CLR_INT_REQ));

          /* Register dummy read-write  */
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                               (SPI_CLR_INT_REQ));
          /* SYNCP execution */
          EXECUTE_SYNCP();
          #endif
          RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pRxImrAddress),
                               (LpHWUnitInfo->usRxImrMask));
        #endif /* End of #if (SPI_DMA_MODE_ENABLE == STD_ON) */
      }
      else
      {
        /* No action required */
      }
    }
    #endif /* End of #if (SPI_TX_ONLY_MODE == STD_ON) */

    LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_BTST;

    /* Load the MCTL2 register to start the communication */
    LpCsihUserBaseAddr->ulCSIHMCTL2 = LunDataAccess1.ulRegData;
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if ((SPI_DUAL_BUFFER_MODE == STD_ON) ||
          * (SPI_TX_ONLY_MODE == STD_ON))
          */

  #if (SPI_FIFO_MODE == STD_ON)
  if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
  {
    if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
    {
      /* Clear the pending interrupt */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                           (SPI_CLR_INT_REQ));

      /* Register dummy read-write  */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                           (SPI_CLR_INT_REQ));
      /* SYNCP execution */
      EXECUTE_SYNCP();
      #endif

      /* Enable transmit interrupt */
      RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pTxImrAddress),
                           (LpHWUnitInfo->usTxImrMask));
    }
    else
    {
      /* No action required */
    }
    if (SPI_FIFO_BUFFER_UNINIT == Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX])
    {
      Spi_GstFifoCurrentCommData.pCurrentTxChannelList =
                                                  LpJobConfig->pChannelList;
      Spi_GstFifoCurrentCommData.ddNoOfTxChannels = LpJobConfig->ddNoOfChannels;
      #if (SPI_DMA_MODE_ENABLE == STD_ON)
      /* Save JobIndex to refer to the ongoing job */
      Spi_GstFifoCurrentCommData.ddJobIndex = LddJobIndex;
      #endif
    }
    else
    {
      /* No Action Required */
    }
    LusBufferCount = SPI_ZERO;
    do
    {
      if (SPI_FIFO_BUFFER_FULL != Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX])
      {
        LpCurrentTxChannelList =
                              Spi_GstFifoCurrentCommData.pCurrentTxChannelList;
        LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfTxChannels;

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the pointer to the post-build structure of the channel */
        LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);
        /* END Msg (4:0488)-4 */

        LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        /* Check if the buffer type is internal buffer */
        if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
        #endif
        {
          #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Update the RAM variable for Tx pointer with channel IB index */
          LpNextTxData = (Spi_GpConfigPtr->pChannelIBWrite) + LddBufferIndex;
          /* END Msg (4:0488)-4 */

          /* Update the RAM variable for number of buffers of the channel */
          LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
          #endif
        }

        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
        #endif
        {
          #if (SPI_EB_CONFIGURED == STD_ON)
          /*
           * Update the RAM variable for Tx pointer with channel EB source
           * pointer
           */
          LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;

          /* Update the local counter with number of buffers of the channel */
          LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
          #endif
        }
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        else
        {
          /* No action required */
        }
        #endif
      }
      else
      {
        /* Load the data from RAM */
        LpNextTxData = Spi_GstFifoCurrentCommData.pNextTxData;
        LddNoOfBuffers = Spi_GstFifoCurrentCommData.ddNoOfTxBuffers;
      }
      /* If the selected asynchronous mode is DMA mode */
      #if (SPI_DMA_MODE_ENABLE == STD_ON)
      if ((SPI_INTERRUPT_MODE == Spi_GddAsyncMode) &&
                    (SPI_INVALID_DMAUNIT == LpJobConfig->ucTxDmaDeviceIndex))
      #endif
      {
        /* Critical section protection is added as per #25251 */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif
        do
        {
          /* Get the data to be transmitted */
          if (NULL_PTR == LpNextTxData)
          {
            /* MISRA Violation: START Msg(4:2961)-19 */
            /* Get the pointer to the configured default value */
            LddData = LpPBChannelConfig->ddDefaultData;
            /* END Msg (4:2961)-19 */
          }
          else
          {
            /* Get the value from the source pointer */
            LddData = *LpNextTxData;
            /* MISRA Violation: START Msg(4:0489)-3 */
            LpNextTxData++;
            /* END Msg (4:0489)-3 */
          }

          /*
           * Take a local union variable to construct the value for TX0W
           * register
           */
          LunDataAccess1.ulRegData = SPI_ZERO;

          /* Set chip select in the local union variable */
          LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;

          #if(SPI_8BIT_DATA_WIDTH == STD_ON)
          /*
           * Data width is maximum 8-bit. Hence, load Tx data portion of
           * the local variable with the 8-bit data to be transmitted
           */
          LunDataAccess1.Tst_ByteAccess.usRegData1 = (uint16)LddData;
          #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
          /*
           * Data width is maximum 16-bit. Hence, load Tx data portion of
           * the local variable with the 16-bit data to be transmitted
           */
          LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;
          #else
          if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                          (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                          (SPI_SIXTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                          (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
          {
            LulShiftData = (uint32)LddData;
            LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                          (LpPBChannelConfig->ucDLSSetting)));
            LunDataAccess2.ulRegData = LulShiftData;
            LunDataAccess1.Tst_ByteAccess.usRegData1 =
            LunDataAccess2.usRegData5[0] >> (SPI_SIXTEEN -
                                          (LpPBChannelConfig->ucDLSSetting));
            LunDataAccess2.usRegData5[0] =
                                      LunDataAccess1.Tst_ByteAccess.usRegData1;

          }
          else
          {
            /*
             * Data width is maximum 32-bit. Tx data needs to be split to
             * LS Byte and MS Byte. Hence, load the Tx data to local union
             * variable
             */
            LunDataAccess2.ulRegData = LddData;
          }
          /*
           * Since data width is maximum 32-bit, check if the the data
           * of requested channel is more than 16 bits
           */
          if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
          {
            /*
             * Data width is maximum 16-bit. Hence, load LSB portion of the
             * width local variable with the 16-bit data to be transmitted
             */
            LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                                 LunDataAccess2.usRegData5[0];
          }
          else
          {
            /* Check if the configured data direction is LSB first */
            if (SPI_TRUE == LpPBChannelConfig->blDirection)
            {
              /* Load Tx data portion of the local variable with LSB first */
              LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                                LunDataAccess2.usRegData5[0];
            }
            else
            {
              /* Load Tx data portion of the local variable with MSB first */
              LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                                 LunDataAccess2.usRegData5[1];
            }
            /* MISRA Violation: START Msg(4:2984)-16 */
            /* Set the EDL bit in the local union variable */
            LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                      LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EDL;
            /* END Msg(4:2984)-16 */
            /* Load the value of the local union variable to TX0W register */
            LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;

            /* MISRA Violation: START Msg(4:2984)-16 */
            /* Reset the EDL bit in the local union variable */
            LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                    LunDataAccess1.Tst_ByteAccess.ucRegData3 & SPI_RESET_EDL;
            /* END Msg(4:2984)-16 */

            /*
             * Check the configured data direction again to load other part
             * of data
             */
            if (SPI_TRUE == LpPBChannelConfig->blDirection)
            {
              /* Load Tx data portion of the local variable with MSB */
              LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                       LunDataAccess2.usRegData5[1];
            }
            else
            {
              /* Load Tx data portion of the local variable with LSB */
              LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                       LunDataAccess2.usRegData5[0];
            }
          } /* End of !if(SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
          #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON) */

          /* MISRA Violation: START Msg(4:2962)-18 */
          /* Check if the buffer is last buffer of the channel */
          if ((SPI_ONE == LddNoOfBuffers) && (SPI_ONE == LddNoOfChannels))
          /* END Msg (4:2962)-18 */
          {
            if (SPI_TRUE == LpJobList->blIsLastJob)
            {
              /* MISRA Violation: START Msg(4:2984)-16 */
              /* Since buffer is the last buffer of sequence, set both CIRE and
               * EOJ
               */
              LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                   LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_CIREEOJ;
              /* END Msg(4:2984)-16 */
            }
            else
            {
              /* MISRA Violation: START Msg(4:2984)-16 */
              /*
               * Since buffer is last buffer of the job and not last buffer
               * of the sequence, set only EOJ
               */
              LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                  LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EOJ;
              /* END Msg(4:2984)-16 */
            }
          }
          else
          {
            /* No action required */
          }/*
            * End of if ((LddNoOfBuffers == SPI_ONE) &&
            *           (LddNoOfChannels == SPI_ONE))
            */
          /* Load the value of the local union variable to TX0W register */
          LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
          /* Decrement the counter for number of buffers */
          LddNoOfBuffers--;
          /* Increment the counter for number of buffers transmitted */
          LusBufferCount++;
          /* Check all buffers are transmitted */
          if (SPI_ZERO == LddNoOfBuffers)
          {
            Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_EMPTY;
          }
          /* Check number of buffers do not exceed H/W Buffer size */
          else if (LusBufferCount >= SPI_FIFO_SIZE)
          {
            /* Set the flag to indicate Buffer is FULL */
            Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_FULL;
            /* Save the current status in RAM */
            Spi_GstFifoCurrentCommData.pNextTxData = LpNextTxData;
            Spi_GstFifoCurrentCommData.ddNoOfTxBuffers = LddNoOfBuffers;
            /* Break the loop */
            LddNoOfBuffers = SPI_ZERO;
          }
          else
          {
            /* No Action Required */
          }
        }while (SPI_ZERO < LddNoOfBuffers);
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21*/
        /* Enable relevant interrupts */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif
      }
      #if (SPI_DMA_MODE_ENABLE == STD_ON)
      else if (SPI_TRUE == LpJobConfig->blHWUnitDmaMode)
      {
        Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;
        Spi_GstFifoCurrentCommData.ucDmaDeviceIndex =
                                             LpJobConfig->ucTxDmaDeviceIndex;
        /* MISRA Violation: START Msg(4:2962)-18 */
        /* MISRA Violation: START Msg(4:2961)-19 */
        Spi_TxDmaConfig(LpJobConfig, LpNextTxData, LddNoOfBuffers,
                                              LpPBChannelConfig->ucDataType);
        /* END Msg (4:2962)-18 */
        /* END Msg (4:2961)-19 */
      }
      else
      {
        /* No actions required */
      }
      #endif
      if ((SPI_FIFO_BUFFER_EMPTY == Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX])
                    && (SPI_ZERO < Spi_GstFifoCurrentCommData.ddNoOfTxChannels))
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment the pointer to the next channel */
        Spi_GstFifoCurrentCommData.pCurrentTxChannelList++;
        /* END Msg (4:0489)-3 */

        /* Decrement the counter for number of channels */
        Spi_GstFifoCurrentCommData.ddNoOfTxChannels--;

        LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfTxChannels;
      }
      else
      {
        /* Break the loop */
        LddNoOfChannels = SPI_ZERO;
        LusBufferCount = SPI_ZERO;
      }
    }while (SPI_ZERO < LddNoOfChannels);
  } /* if (SPI_FIFO_CONFIGURED == LucHWMemoryMode) */
  else
  {
    /* No action required */
  }
  #endif /* End of (SPI_FIFO_MODE == STD_ON) */

  #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*  End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_TransmitISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIC ISR for processing
**                      communication status interrupt request
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GddAsyncMode, Spi_GpFirstJob,
**                      Spi_GaaChannelEBData, Spi_GpFirstChannel,
**                      Spi_GaaJobResult, Spi_GaaSeqResult, Spi_GaaSeqQueue,
**                      Spi_GaaJobQueue, Spi_GpFirstJobList, Spi_GddQueueIndex,
**                      Spi_GpFirstSeq
**
** Function Invoked   : Spi_ProcessSequence, Spi_RxDmaConfig
**
** Registers Used     : CSIHnMCTL2, CSIGnTX0W, CSIGnTX0H, CSIHnRX0W, CSIHnRX0H
**                      CSIHnTX0H, CSIHnTX0W
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

FUNC(void, SPI_FAST_CODE) Spi_TransmitISR
       (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  #if ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA)      LpNextTxData;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST)  LpTxCurrentChannelList;
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif
  #endif /* (SPI_DIRECT_ACCESS_MODE == STD_ON) */
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;

  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  #if ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  Spi_JobType LddJobListIndex;
  #if (SPI_CSIG_CONFIGURED == STD_ON)
  P2VAR(Spi_CsigUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigUserBaseAddr;
  #endif
  #endif /*
          * ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || \
          *                                 (SPI_HW_PRIORITY_ENABLED == STD_ON))
          */
  #endif /* SPI_DIRECT_ACCESS_MODE == STD_ON */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2VAR(Spi_CsihUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihUserBaseAddr;
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  #endif

  #if ((SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
            (SPI_HW_PRIORITY_ENABLED == STD_ON) || \
                        ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                          (SPI_HWUNIT_ASYNCHRONOUS == STD_ON )))
  Spi_JobType LddJobIndex;
  Spi_NumberOfDataType LddBufferIndex;
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
       (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
        (SPI_HW_PRIORITY_ENABLED == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON))
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg (4:0759)-1 */
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
         (SPI_EXTENDED_DATA_LENGTH == STD_ON)) || \
        (SPI_FIFO_MODE == STD_ON))
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess2;
  /* END Msg(4:0759)-1 */
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  Spi_DataType LddData;
  #endif

  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
  uint32 LulShiftData;
  #endif
  #endif

  #if ((SPI_FIFO_MODE == STD_ON) && (SPI_EXTENDED_DATA_LENGTH == STD_ON))
  uint32 LulShiftDataLow;
  uint32 LulShiftDataHigh;
  #endif

  #if ((SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON))
  Spi_NumberOfDataType LddNoOfBuffers;
  #endif

  #if (SPI_FIFO_MODE == STD_ON)
  Spi_ChannelType LddNoOfChannels;
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentRxChannelList;
  uint32 LusBufferCount;
  #endif

  #if (SPI_DUAL_BUFFER_MODE == STD_ON)
  Spi_JobType LddNoOfJobs;
  Spi_SequenceType LddSeqIndex;
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobListTmptr;
  P2VAR(Spi_DualBufferCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpDualBufferCurrentCommData;
  #endif

  #if ((SPI_HW_PRIORITY_ENABLED == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON))
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
                                        && (SPI_DUAL_BUFFER_MODE == STD_ON))
  if (SPI_TWO > LucHWMemoryMode)
  #endif
  {
    if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
    {
      #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))

      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

      if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
      #endif
      {
        LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
      }
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      else
      {
        LpCurrentCommData =
                        &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
      }
      #endif

      LpTxCurrentChannelList = LpCurrentCommData->pCurrentTxChannelList;

      /* MISRA Violation: START Msg(4:0489)-3*/
      /* Decrement the source pointer */
      LpTxCurrentChannelList--;
      /* END Msg (4:0489)-3 */

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the post-build structure of the channel */
      LpPBChannelConfig = Spi_GpFirstChannel + (*LpTxCurrentChannelList);
      /* END Msg (4:0488)-4 */

      /* Get the pointer to the next data to be transmitted */
      LpNextTxData = LpCurrentCommData->pNextTxData;

        /* Get the index of job list for the current job from the job queue */
        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        /* MISRA Violation: START Msg(4:2841)-6 */
        LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber
                                         + SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
        /* END Msg(4:2841)-6 */
        #else
        LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
        #endif
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the pointer to the respective job list index  */
        LpJobList = Spi_GpFirstJobList + LddJobListIndex;
        /* END Msg (4:0488)-4 */

        /* Get the index of the job */
        LddJobIndex = LpJobList->ddJobIndex;

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the pointer to the job structure */
        LpJobConfig = Spi_GpFirstJob + LddJobIndex;
        /* END Msg (4:0488)-4 */

      /* MISRA Violation: START Msg(4:2962)-18 */
      /* Update RAM with next channel, if channel properties are same */
      if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers) &&
                (SPI_TRUE == LpJobConfig->blIsChannelPropSame) &&
                    (SPI_ZERO < LpCurrentCommData->ddNoOfTxChannels)
                            #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
                            && (SPI_FALSE == LpCurrentCommData->blTxEDL)
                            #endif
         )
      /* END Msg(4:2962)-18 */
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment the source pointer */
        LpTxCurrentChannelList++;
        /* END Msg (4:0489)-3 */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif

        /* MISRA Violation: START Msg(4:0489)-3 */
        (LpCurrentCommData->pCurrentTxChannelList)++;
        /* END Msg (4:0489)-3 */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21*/
        /* Enable relevant interrupts */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the pointer to the post-build structure of the channel */
        LpPBChannelConfig = Spi_GpFirstChannel +
                                             (*LpTxCurrentChannelList);
        /* END Msg (4:0488)-4 */
        LddBufferIndex = LpPBChannelConfig->ddBufferIndex;

        /* Update the RAM for next channel */
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        /* Check if the buffer type is internal buffer */
        if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
          #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
          || ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
          && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
          #endif
             )
        #endif
        {
          #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
          LpNextTxData = Spi_GpConfigPtr->pChannelIBWrite;
          /* MISRA Violation: START Msg(4:0488)-4 */
          LpNextTxData = LpNextTxData + LddBufferIndex;
          /* END Msg (4:0488)-4 */
          #endif
        }
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
        #endif
        {
          #if (SPI_EB_CONFIGURED == STD_ON)
          LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;
          #endif
        }
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        else
        {
          /* No action required */
        }
        #endif

        /* MISRA Violation: START Msg(4:2962)-18 */
        if (NULL_PTR != LpNextTxData)
        /* END Msg (4:2962)-18 */
        {
          /* MISRA Violation: START Msg(4:0489)-3 */
          LpNextTxData--;
          /* END Msg (4:0489)-3 */
        }
        else
        {
          /* No action required */
        }
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif

        /* Save the pointer to next data to be transmitted */
        LpCurrentCommData->pNextTxData = LpNextTxData;
        LpCurrentCommData->ddNoOfTxBuffers =
                                    LpPBChannelConfig->ddNoOfBuffers;
        (LpCurrentCommData->ddNoOfTxChannels)--;

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21*/
        /* Enable relevant interrupts */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif
      }
      else
      {
        /* No action required */
      }
      #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
      if (SPI_TRUE == LpCurrentCommData->blTxEDL)
      {
        /* Reset the flag for indicating EDL */
        LpCurrentCommData->blTxEDL = SPI_FALSE;

        /* MISRA Violation: START Msg(4:2962)-18 */
        if (NULL_PTR == LpNextTxData)
        /* END Msg (4:2962)-18 */
        {
          LddData = LpPBChannelConfig->ddDefaultData;
        }
        else
        {
          LddData = *LpNextTxData;
        }

        /* Take a local union variable to construct the value for TX0W
         * register
         */
        LunDataAccess1.ulRegData = SPI_ZERO;
        /* Data width is maximum 32-bit. Tx data needs to be split to
         * LS Byte and MS Byte. Hence, load the Tx data to local variable
         */
        LunDataAccess2.ulRegData = LddData;

        /* Check if the configured data direction is LSB first */
        if (SPI_TRUE == LpPBChannelConfig->blDirection)
        {
          /* Load Tx data portion of the local variable with LSB first */
          LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                         LunDataAccess2.usRegData5[1];
        }
        else
        {
          /* Load Tx data portion of the local variable with MSB first */
          LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                        LunDataAccess2.usRegData5[0];
        }
        #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
        if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
        #endif
        {
          #if (SPI_CSIH_CONFIGURED == STD_ON)
          /* Set chip select in the local union variable */
          LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
          #endif
        }
        #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
        else
        {
          /* No action required */
        }
        #endif
        /* Check if the buffer is last buffer of the Job */
        if ((SPI_ONE == LpCurrentCommData->ddNoOfTxBuffers) &&
                      (SPI_ZERO == LpCurrentCommData->ddNoOfTxChannels))
        {
            /* Since buffer is last buffer of the job set EOJ */
            LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;
        }
        else
        {
          /* No action required */
        }

        #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
        if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
        #endif
        {
          #if (SPI_CSIG_CONFIGURED == STD_ON)
          /* MISRA Violation: START Msg(4:0316)-15 */
          /* Get the base address of the HW Unit */
          LpCsigUserBaseAddr =
                     (Spi_CsigUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
          /* END Msg(4:0316)-15 */

          /* Load the value of the local union variable to TX0W register */
          LpCsigUserBaseAddr->ulCSIGTX0W = LunDataAccess1.ulRegData;
          #endif
        }
        #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
        else
        #endif
        {
          #if (SPI_CSIH_CONFIGURED == STD_ON)
          /* MISRA Violation: START Msg(4:0316)-15 */
          /* Get the base address of the HW Unit */
          LpCsihUserBaseAddr =
               (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
          /* END Msg(4:0316)-15 */
          /* Load the value of the local union variable to TX0W register */
          LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
          #endif
        }
      }
      else
      #endif
      {
        /* Check if all buffers in the channel are transmitted */
        if (SPI_ZERO < LpCurrentCommData->ddNoOfTxBuffers)
        {
          if (NULL_PTR == LpNextTxData)
          {
            /* MISRA Violation: START Msg(4:0489)-3 */
            /* Get the configured default value */
            LddData = LpPBChannelConfig->ddDefaultData;
            /* END Msg (4:0489) -3 */
          }
          else
          {
            /* MISRA Violation: START Msg(4:0489)-3  */
            /* Get the value from the source pointer */
            LpNextTxData++;
            /* END Msg (4:0489)-3 */
            LddData = *LpNextTxData;
            LpCurrentCommData->pNextTxData = LpNextTxData;
          }

          /* MISRA Violation: START Msg(4:0489)-3 */
          /* Decrement the number of buffers to be transmitted */
          (LpCurrentCommData->ddNoOfTxBuffers)--;
          /* END Msg (4:0489)-3 */

          #if ((SPI_CSIG_CONFIGURED == STD_ON) && \
               (SPI_CSIH_CONFIGURED == STD_ON))
          if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
          #endif
          {
            #if (SPI_CSIG_CONFIGURED == STD_ON)
            /* MISRA Violation: START Msg(4:0316)-15 */
            /* Get the base address of the HW Unit */
            LpCsigUserBaseAddr =
                  (Spi_CsigUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
            /* END Msg (4:0316)-15 */
            #if (SPI_8BIT_DATA_WIDTH == STD_ON) || \
                                               (SPI_16BIT_DATA_WIDTH == STD_ON)
            /* Check if the buffer is last buffer of the channel */
              if (SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers)
              {
                /* MISRA Violation: START Msg(4:0715)-12*/
                /* Check if it is last channel in the job */
                if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxChannels)
                   #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
                   && (SPI_FALSE ==
                                Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
                   #endif
                    )
                 /* END Msg (4:0715)-12*/
                {
                   LunDataAccess1.ulRegData = LddData;
                  /*
                   * Since buffer is last buffer of the job and not
                   * last buffer of the sequence, set only EOJ
                   */
                   LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;
                  /*
                   * Load the value of the local union variable to TX0W
                   * register
                   */
                   LpCsigUserBaseAddr->ulCSIGTX0W = LunDataAccess1.ulRegData;
                }
                else
                {
                  /*
                   * Load the value of the local union variable to TX0H
                   * register
                   */
                  LpCsigUserBaseAddr->usCSIGTX0H = (uint16)LddData;
                }
              }
              else
              {
                /*
                 * Load the value of the local union variable to TX0H
                 * register
                 */
                LpCsigUserBaseAddr->usCSIGTX0H = (uint16)LddData;
              }
            #else
            /*
             * Take a local union variable to construct the value for TX0W
             * register
             */
            LunDataAccess1.ulRegData = SPI_ZERO;

            if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                          (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                          (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                          (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
            {
              LulShiftData = (uint32)LddData;
              LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                            (LpPBChannelConfig->ucDLSSetting)));
              LunDataAccess2.ulRegData = LulShiftData;
              LunDataAccess1.Tst_ByteAccess.usRegData1 =
              LunDataAccess2.usRegData5[0] >> (SPI_SIXTEEN -
                                            (LpPBChannelConfig->ucDLSSetting));
              LunDataAccess2.usRegData5[0] =
                                      LunDataAccess1.Tst_ByteAccess.usRegData1;
            }
            else
            {
              /*
               * Data width is maximum 32-bit. Tx data needs to be split to
               * LS Byte and MS Byte. Hence, load the Tx data to local variable
               */
              LunDataAccess2.ulRegData = LddData;
            }
            if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
            {
              /*
               * Data width is maximum 16-bit. Hence, load LSB portion of the
               * local variable with the 16-bit data to be transmitted
               */
              LpCsigUserBaseAddr->usCSIGTX0H = LunDataAccess2.usRegData5[0];
            }
            else
            {
              /* Check if the configured data direction is LSB first */
              if (SPI_TRUE == LpPBChannelConfig->blDirection)
              {
                /* Load Tx data portion of the local variable with LSB first */
                LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                               LunDataAccess2.usRegData5[0];
              }
              else
              {
                /* Load Tx data portion of the local variable with MSB first */
                LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                              LunDataAccess2.usRegData5[1];
              }

              /* Set the EDL bit in the local union variable */
              LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EDL;

              /* Set the flag for indicating EDL */
              LpCurrentCommData->blTxEDL = SPI_TRUE;

              /* Load the value of the local union variable to TX0W register */
              LpCsigUserBaseAddr->ulCSIGTX0W = LunDataAccess1.ulRegData;
            }
            #endif
            #endif
          }
          #if ((SPI_CSIG_CONFIGURED == STD_ON) && \
               (SPI_CSIH_CONFIGURED == STD_ON))
          else
          #endif
          {
            #if (SPI_CSIH_CONFIGURED == STD_ON)
            /* MISRA Violation: START Msg(4:0316)-15 */
            /* Get the base address of the HW Unit */
            LpCsihUserBaseAddr =
                     (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
            /* END Msg (4:0316)-15*/

            #if (SPI_8BIT_DATA_WIDTH == STD_ON) || \
                                               (SPI_16BIT_DATA_WIDTH == STD_ON)
            /* Check if the buffer is last buffer of the channel */
              if (SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers)
              {
                /* MISRA Violation: START Msg(4:0715)-12*/
                /* Check if it is last channel in the job */
                if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxChannels)
                    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
                    && (SPI_FALSE ==
                                Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
                    #endif
                    #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
                                    && (SPI_FALSE == LpCurrentCommData->blTxEDL)
                    #endif
                   )
                 /* END Msg (4:0715)-12*/
                {
                  /*
                   * Data width is maximum 16-bit. Hence, load Tx data portion
                   * of the local variable with the data to be transmitted
                   */
                   LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;
                   /* Set chip select in the local union variable */
                    LunDataAccess1.Tst_ByteAccess.ucRegData2 =
                                                    LpJobConfig->ucChipSelect;
                   /* Since buffer is last buffer of the job set EOJ */
                    LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;

                   /* Load the value of the local union variable to TX0W
                    * register
                    */
                    LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
                }
                else
                {
                  /* Load the value of the local union variable to TX0H
                   * register
                   */
                   LpCsihUserBaseAddr->usCSIHTX0H = (uint16)LddData;
                }
              }
              else
              {
                /* Load the value of the local union variable to TX0H
                 * register
                 */
                 LpCsihUserBaseAddr->usCSIHTX0H = (uint16)LddData;
              }
            #else
            /* Take a local union variable to construct the value for TX0W
             * register
             */
            LunDataAccess1.ulRegData = SPI_ZERO;
            if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                         (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                         (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                         (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
            {
              LulShiftData = (uint32) LddData;
              LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                         (LpPBChannelConfig->ucDLSSetting)));
              LunDataAccess2.ulRegData = LulShiftData;
              LunDataAccess1.Tst_ByteAccess.usRegData1 =
              LunDataAccess2.usRegData5[0] >> (SPI_SIXTEEN -
                                          (LpPBChannelConfig->ucDLSSetting));
              LunDataAccess2.usRegData5[0] =
                                  LunDataAccess1.Tst_ByteAccess.usRegData1;
            }
            else
            {
              /* Data width is maximum 32-bit. Tx data needs to be split to
               * LS Byte and MS Byte. Hence, load the Tx data to local variable
               */
              LunDataAccess2.ulRegData = LddData;
            }

            if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
            {
              /* Data width is maximum 16-bit. Hence, load LSB portion of the
               * local variable with the 16-bit data to be transmitted
               */
              LpCsihUserBaseAddr->usCSIHTX0H = LunDataAccess2.usRegData5[0];
            }
            else
            {
              if (SPI_TRUE == LpPBChannelConfig->blDirection)
              {
                /* Load Tx data portion of the local variable with LSB first */
                LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                               LunDataAccess2.usRegData5[0];
              }
              else
              {
                /* Load Tx data portion of the local variable with MSB first */
                LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                              LunDataAccess2.usRegData5[1];
              }
              /* Set chip select in the local union variable */
              LunDataAccess1.Tst_ByteAccess.ucRegData2 =
                                                    LpJobConfig->ucChipSelect;

              /* Set the EDL bit in the local union variable */
              LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EDL;

              /* Set the flag for indicating EDL */
              LpCurrentCommData->blTxEDL = SPI_TRUE;

              /* Check if the buffer is last buffer of the channel */
              if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers) &&
                          (SPI_ZERO == LpCurrentCommData->ddNoOfTxChannels))
              {
                  /* MISRA Violation: START Msg(4:2984)-16 */
                  /* Since buffer is last buffer of the job set EOJ */
                  LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                    LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EOJ;
                  /* END Msg(4:2984)-16 */
              }
              else
              {
                 /* No action required */
              }
              /* Load the value of the local union variable to TX0W register */
              LpCsihUserBaseAddr->ulCSIHTX0W = LunDataAccess1.ulRegData;
            }
            #endif
            #endif
          }
        }
        else
        {
          /* No action required */
        }
      }
      #endif /*
              * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
              *      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
              *                          (SPI_HW_PRIORITY_ENABLED == STD_ON))
              */
    } /* End of if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode) */
    else
    {
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_BUFFER_UNINIT == Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX])
      {
        /* MISRA Violation: START Msg(4:0488)-4 */
        LpJobList = Spi_GpFirstJobList +
                     Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
        /* END Msg (4:0488)-4 */

        /* Get the index of the first job linked to this sequence */
        LddJobIndex = LpJobList->ddJobIndex;

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the pointer to the job structure */
        LpJobConfig = Spi_GpFirstJob + LddJobIndex;
        /* END Msg (4:0488)-4 */

        Spi_GstFifoCurrentCommData.pCurrentRxChannelList =
                                                    LpJobConfig->pChannelList;
        Spi_GstFifoCurrentCommData.ddNoOfRxChannels =
                                                    LpJobConfig->ddNoOfChannels;
        #if (SPI_DMA_MODE_ENABLE == STD_ON)
        Spi_GstFifoCurrentCommData.ddJobIndex = LddJobIndex;
        #endif
      }
      else
      {
        /* No Action Required */
      }
      LusBufferCount = SPI_ZERO;
      do
      {
        if (SPI_FIFO_BUFFER_FULL != Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX])
        {
          LpCurrentRxChannelList =
                              Spi_GstFifoCurrentCommData.pCurrentRxChannelList;

          /* MISRA Violation: START Msg(4:0488)-4 */
          /* Get the pointer to the post-build structure of the channel */
          LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentRxChannelList);
          /* END Msg (4:0488)-4 */

          LddBufferIndex = LpPBChannelConfig->ddBufferIndex;

          #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
          /* Check if the buffer type is internal buffer */
          if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
          #endif
          {
            #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Update the RAM variable for Rx pointer with channel IB index */
            LpCurrentRxData = (Spi_GpConfigPtr->pChannelIBRead) +
                                                                LddBufferIndex;
            /* END Msg (4:0488)-4 */

            /* Update the RAM variable for number of buffers of the channel */
            LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
            #endif
          }

          #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
          else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
          #endif
          {
            #if (SPI_EB_CONFIGURED == STD_ON)
            /* Update the RAM variable for Rx pointer */
            LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;

            /* Update the local counter with number of buffers of the channel */
            LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
            #endif
          }
          #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
          else
          {
            /* No action required */
          }
          #endif
        }
        else
        {
          /* Load data from the RAM */
          LpCurrentRxData = Spi_GstFifoCurrentCommData.pCurrentRxData;
          LddNoOfBuffers = Spi_GstFifoCurrentCommData.ddNoOfRxBuffers;
        }

        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the base address of the HW Unit */
        LpCsihUserBaseAddr =
               (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
        /* END Msg(4:0316)-15 */

        /* If the selected asynchronous mode is DMA mode */
        #if (SPI_DMA_MODE_ENABLE == STD_ON)
        /* MISRA Violation: START Msg(4:2962)-18 */
        if ((SPI_INTERRUPT_MODE == Spi_GddAsyncMode) &&
                    (SPI_INVALID_DMAUNIT == LpJobConfig->ucRxDmaDeviceIndex))
        /* END Msg(4:2962)-18 */
        #endif
        {
          do
          {
            #if(SPI_8BIT_DATA_WIDTH == STD_ON)
            /*
             * Data width is maximum 8-bit. Hence, Receive the data from the
             * Rx register to local union variable
             */
            LunDataAccess2.ulRegData = LpCsihUserBaseAddr->ulCSIHRX0W;
            LddData = LunDataAccess2.ucRegData4[0];

            #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
            LunDataAccess2.ulRegData = LpCsihUserBaseAddr->ulCSIHRX0W;
            /* Load the value from union variable to local variable */
            LddData = LunDataAccess2.usRegData5[0];

            #else
            /*
             * Data width is maximum 32-bit, Check if the the data width of
             * requested channel is more than 16 bits
             */
            if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
            {
              LunDataAccess2.ulRegData = LpCsihUserBaseAddr->ulCSIHRX0W;

              LddData = LunDataAccess2.usRegData5[0];
            }
            else
            {
              /* Check if the configured data direction is LSB first */
              if (SPI_TRUE == LpPBChannelConfig->blDirection)
              {
                /*
                 * Take a local union variable to construct the value from
                 * RX0W register
                 */
                LunDataAccess2.ulRegData = LpCsihUserBaseAddr->ulCSIHRX0W;
                LunDataAccess2.usRegData5[1] = LpCsihUserBaseAddr->usCSIHRX0H;
              }
              else
              {
                /*
                 * Take a local union variable to construct the value from
                 * RX0W register
                 */
                LunDataAccess2.ulRegData = LpCsihUserBaseAddr->ulCSIHRX0W;
                LunDataAccess2.usRegData5[1] = LunDataAccess2.usRegData5[0];
                LunDataAccess2.usRegData5[0] = LpCsihUserBaseAddr->usCSIHRX0H;
              }

              LddData = LunDataAccess2.ulRegData;
            }
            #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON)*/
            if (NULL_PTR != LpCurrentRxData)
            {
              #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
              /* MISRA Violation: START Msg(4:2962)-18 */
              if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                     (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                      (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                        (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
              /* END Msg(4:2962)-18 */
              {
                LulShiftData =  LunDataAccess2.ulRegData;
                LulShiftDataHigh = LulShiftData & SPI_HIGH_DATA_MASK;
                LulShiftDataLow = LulShiftData & SPI_LOW_DATA_MASK;
                LulShiftDataLow = LulShiftDataLow << (SPI_SIXTEEN -
                                        (LpPBChannelConfig->ucDLSSetting));
                LulShiftData = LulShiftDataHigh | LulShiftDataLow;
                             LulShiftData = LulShiftData >> (SPI_SIXTEEN -
                (LpPBChannelConfig->ucDLSSetting));
                *LpCurrentRxData = (Spi_DataType)LulShiftData;
              }
              else
              #endif
              {
                *LpCurrentRxData = LddData;
              }
              /* MISRA Violation: START Msg(4:0489)-3 */
              LpCurrentRxData++;
              /* END Msg (4:0489)-3 */
            }
            else
            {
              /* No Action Required */
            }
            /* Decrement the counter for number of buffers */
            LddNoOfBuffers--;
            /* Increment the counter for number of buffers transmitted */
            LusBufferCount++;
            /* Check all buffers are transmitted */
            if (SPI_ZERO == LddNoOfBuffers)
            {
              Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_EMPTY;
            }
            /* Check number of buffers do not exceed H/W Buffer size */
            else if (LusBufferCount >= SPI_FIFO_SIZE)
            {
              /* Check if critical section protection is required */
              #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
              /* MISRA Violation: START Msg(4:3138)-21 */
              /* Disable relevant interrupts to protect this critical section */
              SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
              /* END Msg(4:3138)-21 */
              #endif

              /* Set a flag to indicate PAUSE of transfer */
              Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_FULL;
              /* Save the current status in RAM */
              Spi_GstFifoCurrentCommData.pCurrentRxData = LpCurrentRxData;
              Spi_GstFifoCurrentCommData.ddNoOfRxBuffers = LddNoOfBuffers;

              /* Check if critical section protection is required */
              #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
              /* MISRA Violation: START Msg(4:3138)-21*/
              /* Enable relevant interrupts */
              SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
              /* END Msg(4:3138)-21 */
              #endif

              /* Break the loop */
              LddNoOfBuffers = SPI_ZERO;
            }
            else
            {
              /* No Action Required */
            }
          }while (SPI_ZERO < LddNoOfBuffers);
        }
        #if (SPI_DMA_MODE_ENABLE == STD_ON)
        else
        {
          Spi_GstFifoCurrentCommData.ucDmaDeviceIndex =
                                               LpJobConfig->ucRxDmaDeviceIndex;
          Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;

          /* MISRA Violation: START Msg(4:2962)-18 */
          Spi_RxDmaConfig(LpJobConfig, LpCurrentRxData, LddNoOfBuffers,
                                     LpPBChannelConfig->ucDataType);
          /* END Msg(4:2962)-18 */
        }
        #endif
        if ((SPI_FIFO_BUFFER_EMPTY == Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX])
              && (SPI_ZERO < Spi_GstFifoCurrentCommData.ddNoOfRxChannels))
        {
          /* MISRA Violation: START Msg(4:0489)-3 */
          Spi_GstFifoCurrentCommData.pCurrentRxChannelList++;
          /* END Msg (4:0489)-3 */

          /* Decrement the counter for number of channels */
          Spi_GstFifoCurrentCommData.ddNoOfRxChannels--;

          LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfRxChannels;
        }
        else
        {
          /* Break the loop */
          LddNoOfChannels = SPI_ZERO;
          LusBufferCount = SPI_ZERO;
        }
      }while (SPI_ZERO < LddNoOfChannels);
      /* If the selected asynchronous mode is DMA mode */
      #if (SPI_DMA_MODE_ENABLE == STD_ON)
      if ((SPI_INTERRUPT_MODE == Spi_GddAsyncMode) &&
                    (SPI_INVALID_DMAUNIT == LpJobConfig->ucRxDmaDeviceIndex))
      #endif
      {
         if (SPI_FIFO_BUFFER_EMPTY == Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX])
         {
           /* All channels are transmitted. Hence the job is transmitted */
           Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
         }
         else
         {
           Spi_ProcessChannel(LddHWUnit, LucHWMemoryMode);
         }
      }
      #if (SPI_DMA_MODE_ENABLE == STD_ON)
      else
      #endif
      {
        /* No action required */
      }
      #endif
    }
  }
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
      && (SPI_DUAL_BUFFER_MODE == STD_ON))
  else
  #endif
  {
    #if (SPI_DUAL_BUFFER_MODE == STD_ON)
    if (SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode)
    {
      LpDualBufferCurrentCommData =
            &Spi_GstDualBufferCurrentCommData
                  [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

      LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

      LddSeqIndex =
          Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];

      /* MISRA Violation: START Msg(4:0488)-4 */
      LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
      /* END Msg (4:0488)-4 */

      LddBufferIndex =
                 *(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx);

      /* MISRA Violation: START Msg(4:0489)-3 */
      /* Increment the notify index value */
      (LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
      /* END Msg (4:0489)-3 */

      LddJobIndex =
       (Spi_JobType)(*(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx));

      /* MISRA Violation: START Msg(4:0316)-15 */
      /* Get the base address of the HW Unit */
      LpCsihUserBaseAddr =
                     (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
      /* END Msg(4:0316)-15 */

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* TRACE [R3, SPI118][R4, SPI118] */
      /* TRACE [R3, SPI071][R4, SPI071] */
      /* TRACE [R3, SPI054][R4, SPI054] */
      /* Check if notification is configured */
      if (NULL_PTR != ((Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification))
      /* END Msg (4:0488)-4 */
      {
        /* MISRA Violation: START Msg(4:0488)-4 */
        (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification();
        /* END Msg (4:0488)-4 */
      }
      else
      {
        /* No action required */
      }

      if ((LpDualBufferCurrentCommData->ddNoOfBuffersTxtd) <
                                                   LpSeqConfig->ddNoOfBuffers)
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment the notify index value */
        (LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
        /* END Msg (4:0489)-3 */

        LddNoOfBuffers =
            *(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx) -
                                                              LddBufferIndex;

        LpDualBufferCurrentCommData->ddNoOfBuffersTxtd =
               LpDualBufferCurrentCommData->ddNoOfBuffersTxtd + LddNoOfBuffers;

        /*
         * Take a local union variable to construct the value for MCTL2
         * register and load the local union variable with SOP value
         */
        LunDataAccess1.Tst_ByteAccess.usRegData1 = LddBufferIndex;

        /* Load the local union variable with number of data */
        LunDataAccess1.Tst_ByteAccess.ucRegData2 = (uint8)LddNoOfBuffers;

        /* Set BTST bit */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_BTST;

        /* Load the MCTL2 register to start the communication */
        LpCsihUserBaseAddr->ulCSIHMCTL2 = LunDataAccess1.ulRegData;
      }
      else
      {
        /*
         * All channels are transmitted and received. Hence the sequence is
         * completed
         */

        /* Update sequence result as OK */
        Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_OK;

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Load Job List pointer to temporary variable */
        LpJobListTmptr = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
        /* END Msg (4:0488)-4 */

        /* Load total number of Jobs in current sequence to local variable */
        LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

        do
        {
          /* Update the job result variable */
          Spi_GaaJobResult[LpJobListTmptr->ddJobIndex] = SPI_JOB_OK;

          /* MISRA Violation: START Msg(4:0489)-3 */
          /* Increment local pointer to the job list */
          LpJobListTmptr++;
          /* END Msg (4:0489)-3 */
          LddNoOfJobs--;
        }
        while (SPI_ZERO < LddNoOfJobs);

        Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
      }
    }
    else
    {
      /* No action required */
    }
    #endif /* End of (SPI_DUAL_BUFFER_MODE == STD_ON) */
  } /* End of else loop of LucHWMemoryMode < SPI_TWO */
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) ||
        * (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_TransmitCancelISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIJC ISR for processing
**                      job completion interrupt request

**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GaaSeqQueue, Spi_GaaSeqResult,
**                      Spi_GpFirstSeq, Spi_GddQueueIndex
**
** Function Invoked   : Spi_ProcessSequence
**
** Registers Used     : None
*******************************************************************************/
#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
    ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

FUNC(void, SPI_FAST_CODE) Spi_TransmitCancelISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;
  uint8 LucVar;
  #endif
  Spi_SequenceType LddSeqIndex;

  LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
  /* MISRA Violation: START Msg(4:0488)-4 */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg (4:0488)-4 */
  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  /* MISRA Violation: START Msg(4:4397)-2 */
  /* Disable transmit cancel interrupt control */
  RH850_SV_MODE_IMR_OR(16, (LpHWUnitInfo->pTxCancelImrAddress),
                      (~(LpHWUnitInfo->usTxCancelImrMask)));
  /* END Msg(4:4397)-2  */

  /* Update sequence result as CANCELLED */
  Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_CANCELLED;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to status bytes ROM value for the sequence */
  LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                  (LpSeqConfig->usStsValueStartByteIdx);
  /* END Msg(4:0488)-4 */

  /* Get the number of status byte ROM value */
  LucVar = LpSeqConfig->ucNoOfStsByteValue;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the start byte of RAM area */
  LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                  (LpSeqConfig->usStsUpdateStartByteIdx);
  /* END Msg(4:0488)-4 */

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* MISRA Violation: START Msg(4:3138)-21 */
  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif

  while (SPI_ZERO < LucVar)
  {
    /* MISRA Violation: START Msg(4:4397)-2 */
    /*
     * Reset the status bit of the requested sequence and the sequences
     * that have jobs shared with the requested sequence
     */
    *LpStsByte = *LpStsByte & (~(*LpStsByteValue));
    /* END Msg(4:4397)-2 */

    /* MISRA Violation: START Msg(4:0489)-3 */
    LpStsByte++;
    /* END Msg(4:0489)-3 */

    /* MISRA Violation: START Msg(4:0489)-3 */
    LpStsByteValue++;
    /* END Msg(4:0489)-3 */

    LucVar--;
  } /* End of while (LucVar > SPI_ZERO) */

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* MISRA Violation: START Msg(4:3138)-21*/
  /* Enable relevant interrupts to protect this critical section */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  /* END Msg(4:3138)-21 */
  #endif
  #endif
  Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of #if (((SPI_CANCEL_API == STD_ON) ||
        * (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
        * ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
        */

/*******************************************************************************
** Function Name      : Spi_ReceiveISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIR ISR for processing
**                      receive status interrupt request
**
** Sync/Async         : Asynchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpFirstChannel, Spi_GpFirstJob,
**                      Spi_GaaSeqQueue, Spi_GaaJobResult, Spi_GaaSeqResult,
**                      Spi_GaaChannelEBData, Spi_GaaJobQueue,
**                      Spi_GpFirstJobList, Spi_GddQueueIndex
**
** Function Invoked   : Spi_ProcessSequence
**
** Registers Used     : CSIHnRX0H, CSIGnRX0, CSIGRX0
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

FUNC(void, SPI_FAST_CODE) Spi_ReceiveISR
       (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
   (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON) \
    || ((SPI_TX_ONLY_MODE == STD_ON) && ((SPI_8BIT_DATA_WIDTH == STD_OFF) && \
                                            (SPI_16BIT_DATA_WIDTH == STD_OFF))))
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                          LpPBChannelConfig;
  #endif
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentRxChannelList;

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  #if (SPI_CSIG_CONFIGURED == STD_ON)
  P2VAR(Spi_CsigUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigUserBaseAddr;
  #endif
  #endif /*
          * (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
          *      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
          *                                 (SPI_HW_PRIORITY_ENABLED == STD_ON))
          */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2VAR(Spi_CsihUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihUserBaseAddr;
  #endif
  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  #if ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || \
                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST)   LpJobList;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  Spi_JobType LddJobListIndex;
  Spi_NumberOfDataType LddBufferIndex;
  #endif
  #endif /* (SPI_DIRECT_ACCESS_MODE == STD_ON) */

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
           (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_JobType LddJobIndex;
  #endif

  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;

  #if (SPI_TX_ONLY_MODE == STD_ON)
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpTxOnlyRxData;
  Spi_JobType LddNoOfJobs;
  Spi_SequenceType LddSeqIndex;
  #endif
  Spi_DataType LddData;

  #if ((SPI_HW_PRIORITY_ENABLED == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  #if (SPI_TX_ONLY_MODE == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobListTmptr;
  P2VAR(Spi_TxOnlyCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpTxOnlyCurrentCommData;
  #endif

  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  #endif
  #if ((SPI_EXTENDED_DATA_LENGTH == STD_ON) && \
       (SPI_DIRECT_ACCESS_MODE == STD_ON)   && \
       (SPI_HWUNIT_ASYNCHRONOUS == STD_ON))
  uint32 LulShiftData;
  uint32 LulShiftDataLow;
  uint32 LulShiftDataHigh;
  #endif

  volatile uint16 Lus16BitData;

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
  }
  #endif

  /* Get the pointer to the post-build structure of the channel */
  LpCurrentRxChannelList = LpCurrentCommData->pCurrentRxChannelList;

  /* MISRA Violation: START Msg(4:0489)-3 */
  LpCurrentRxChannelList--;
  /* END Msg (4:0489)-3 */

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
   (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON) \
      || ((SPI_TX_ONLY_MODE == STD_ON) && ((SPI_8BIT_DATA_WIDTH == STD_OFF) && \
                                            (SPI_16BIT_DATA_WIDTH == STD_OFF))))
  /* MISRA Violation: START Msg(4:2982)-20 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentRxChannelList);
  /* END Msg (4:0488)-4 */
  /* END Msg (4:2982)-20 */
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
    if (SPI_TRUE == LpCurrentCommData->blRxEDL)
    {
      /* Reset the flag for indicating EDL */
      LpCurrentCommData->blRxEDL = SPI_FALSE;

      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the base address of the HW Unit */
        LpCsigUserBaseAddr =
                     (Spi_CsigUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
        /* END Msg (4:0316)-15 */

        /* Store the received data in a variable */
        Spi_GusDataAccess = LpCsigUserBaseAddr->usCSIGRX0;
        #endif
      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the base address of the HW Unit */
        LpCsihUserBaseAddr =
                     (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
        /* END Msg (4:0316)-15 */

        /* Store the received data in a variable */
        Spi_GusDataAccess = LpCsihUserBaseAddr->usCSIHRX0H;
        #endif
      }
    }
    else
    #endif /* End of #if (SPI_EXTENDED_DATA_LENGTH == STD_ON) */
    {
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the base address of the HW Unit */
        LpCsigUserBaseAddr =
            (Spi_CsigUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
        /* END Msg (4:0316)-15 */

        LpCurrentRxData = LpCurrentCommData->pCurrentRxData;

        if (NULL_PTR != LpCurrentRxData)
        {
          #if(SPI_8BIT_DATA_WIDTH == STD_ON)
          /*
           * Data width is maximum 8-bit. Hence, Receive the data from the
           * Rx register to local union variable
           */
          LddData = (uint8) LpCsigUserBaseAddr->usCSIGRX0;

          #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
          LddData = LpCsigUserBaseAddr->usCSIGRX0;

          #else
          /* Data width is maximum 32-bit, check if the the data width of
           * requested channel is more than 16 bits
           */
          if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
          {
            LddData = LpCsigUserBaseAddr->usCSIGRX0;
          }
          else
          {
            /* Check if the configured data direction is LSB first */
            if (SPI_TRUE == LpPBChannelConfig->blDirection)
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
              LunDataAccess1.usRegData5[1] = LpCsigUserBaseAddr->usCSIGRX0;
              LunDataAccess1.usRegData5[0] = Spi_GusDataAccess;
            }
            else
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
              LunDataAccess1.usRegData5[0] = LpCsigUserBaseAddr->usCSIGRX0;
              LunDataAccess1.usRegData5[1] = Spi_GusDataAccess;

            } /* End of if(SPI_TRUE == LpPBChannelConfig->blDirection) */

            if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                          (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                          (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                          (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
            {
              LulShiftData =  LunDataAccess1.ulRegData;
              LulShiftDataHigh = LulShiftData & SPI_HIGH_DATA_MASK;
              LulShiftDataLow = LulShiftData & SPI_LOW_DATA_MASK;
              LulShiftDataLow = LulShiftDataLow << (SPI_SIXTEEN -
                                             (LpPBChannelConfig->ucDLSSetting));
              LulShiftData = LulShiftDataHigh | LulShiftDataLow;
              LulShiftData = LulShiftData >> (SPI_SIXTEEN -
                                       (LpPBChannelConfig->ucDLSSetting));
              LddData  = LulShiftData;
            }
            else
            {
              LddData = LunDataAccess1.ulRegData;
            }

            LpCurrentCommData->blRxEDL = SPI_TRUE;
          } /* End of if(SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
          #endif /*End of #if(SPI_8BIT_DATA_WIDTH == STD_ON) */
        }
        else
        {
          Lus16BitData = LpCsigUserBaseAddr->usCSIGRX0;
          #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
          if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
          {
            LpCurrentCommData->blRxEDL = SPI_TRUE;
          }
          else
          {
            /* No action required */
          }
          #endif
        }
        #endif /* End of #if (SPI_CSIG_CONFIGURED == STD_ON) */
      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        /* MISRA Violation: START Msg(4:0316)-15 */
        /* Get the base address of the HW Unit */
        LpCsihUserBaseAddr =
                     (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
        /* END Msg (4:0316)-15 */

        LpCurrentRxData = LpCurrentCommData->pCurrentRxData;

        if (NULL_PTR != LpCurrentRxData)
        {
          #if(SPI_8BIT_DATA_WIDTH == STD_ON)
          /*
           * Data width is maximum 8-bit. Hence, Receive the data from the
           * Rx register to local union variable
           */
          LddData = (uint8) LpCsihUserBaseAddr->usCSIHRX0H;

          #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
          LddData = LpCsihUserBaseAddr->usCSIHRX0H;

          #else
          /*
           * Data width is maximum 32-bit, check if the the data width of
           * requested channel is more than 16 bits
           */
          if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
          {
            LddData = LpCsihUserBaseAddr->usCSIHRX0H;
          }
          else
          {
            /* Check if the configured data direction is LSB first */
            if (SPI_TRUE == LpPBChannelConfig->blDirection)
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
              LunDataAccess1.usRegData5[1] = LpCsihUserBaseAddr->usCSIHRX0H;
              LunDataAccess1.usRegData5[0] = Spi_GusDataAccess;
            }
            else
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
              LunDataAccess1.usRegData5[0] = LpCsihUserBaseAddr->usCSIHRX0H;
              LunDataAccess1.usRegData5[1] = Spi_GusDataAccess;

            } /* End of if(SPI_TRUE == LpPBChannelConfig->blDirection) */
            if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                          (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                          (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                          (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
            {
              LulShiftData =  LunDataAccess1.ulRegData;
              LulShiftDataHigh = LulShiftData & SPI_HIGH_DATA_MASK;
              LulShiftDataLow = LulShiftData & SPI_LOW_DATA_MASK;
              LulShiftDataLow = LulShiftDataLow << (SPI_SIXTEEN -
                                           (LpPBChannelConfig->ucDLSSetting));
              LulShiftData = LulShiftDataHigh | LulShiftDataLow;
              LulShiftData = LulShiftData >> (SPI_SIXTEEN -
                                       (LpPBChannelConfig->ucDLSSetting));
              LddData  = LulShiftData;
            }
            else
            {
              LddData = LunDataAccess1.ulRegData;
            }
            LpCurrentCommData->blRxEDL = SPI_TRUE;
          } /* End of if(SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
          #endif
        }
        else
        {
          Lus16BitData = LpCsihUserBaseAddr->usCSIHRX0H;
          #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
           if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
           {
              LpCurrentCommData->blRxEDL = SPI_TRUE;
           }
           else
           {
              /* No action required */
           }
          #endif
        }
        #endif
      }

      /* MISRA Violation: START Msg(4:2962)-18 */
      /* MISRA Violation: START Msg(4:2812)-8 */
      *LpCurrentRxData = LddData;
      /* END Msg (4:2812)-8*/
      /* END Msg (4:2962)-18*/

      /* MISRA Violation: START Msg(4:0489)-3 */
      LpCurrentRxData++;
      /* END Msg (4:0489)- 3 */

      LpCurrentCommData->pCurrentRxData = LpCurrentRxData;

      /* Get the index of job list for the current job from the job queue */
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      /* MISRA Violation: START Msg(4:2841)-6 */
      LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber
                                       + SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
      /* END Msg (4:2841)- 6 */
      #else
      LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
      #endif


      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the respective job list index  */
      LpJobList = Spi_GpFirstJobList + LddJobListIndex;
      /* END Msg (4:0488)-4 */

      /* Get the index of the job */
      LddJobIndex = LpJobList->ddJobIndex;

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the job structure */
      LpJobConfig = Spi_GpFirstJob + LddJobIndex;
      /* END Msg (4:0488)-4 */

      if (SPI_TRUE == LpJobConfig->blIsChannelPropSame)
      {
        if ((SPI_ZERO < LpCurrentCommData->ddNoOfRxChannels) &&
                             (SPI_ZERO == LpCurrentCommData->ddNoOfRxBuffers))
        {
            LpCurrentRxChannelList = LpCurrentCommData->pCurrentRxChannelList;

            /* Get the pointer to the post-build structure of the channel */
            /* MISRA Violation: START Msg(4:0488)-4 */
            LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentRxChannelList);
            /* END Msg (4:0488)-4 */

            LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-21 */
            /* Disable relevant interrupts to protect this critical section */
            SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-21 */
            #endif

            /* MISRA Violation: START Msg(4:0489)-3 */
            (LpCurrentCommData->pCurrentRxChannelList)++;
            /* END Msg (4:0489)-3 */

            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-21*/
            /* Enable relevant interrupts */
            SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-21 */
            #endif
            #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
            /* Check if the buffer type is internal buffer */
            if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
                #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
                || ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
                && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
                #endif
                )
            #endif
            {
              #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
              /* Update the RAM variable for Rx pointer with channel IB index */
              LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;

              /* MISRA Violation: START Msg(4:0488)-4 */
              LpCurrentRxData = LpCurrentRxData + LddBufferIndex;
              /* END Msg (4:0488)-4 */
              #endif
            }
            #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
            else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
            #endif
            {
              #if (SPI_EB_CONFIGURED == STD_ON)
              LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;
              #endif
            }
            #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
            else
            {
              /* No action required */
            }
            #endif
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-21 */
            /* Disable relevant interrupts to protect this critical section */
            SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-21 */
            #endif
            (LpCurrentCommData->ddNoOfRxChannels)--;

            /* Save the pointer to data to be received */
            LpCurrentCommData->pCurrentRxData = LpCurrentRxData;

            LpCurrentCommData->ddNoOfRxBuffers =
                                             LpPBChannelConfig->ddNoOfBuffers;
            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-21*/
            /* Enable relevant interrupts */
            SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-21 */
            #endif
        }
        else
        {
          /* No action required */
        }
        /* Check if all buffers in the channel are transmitted */
        if (SPI_ZERO < LpCurrentCommData->ddNoOfRxBuffers)
        {
          /* Decrement the number of buffers to be transmitted */
          (LpCurrentCommData->ddNoOfRxBuffers)--;
        }
        else if ((SPI_ZERO == LpCurrentCommData->ddNoOfRxBuffers) &&
                      (SPI_ZERO == LpCurrentCommData->ddNoOfRxChannels))
        {
          /* All channels are transmitted. Hence the job is transmitted */
          Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
        }
        else
        {
          /* No action required */
        }
      }
      else
      {
         /* Check if all buffers in the channel are transmitted */
         if (SPI_ZERO < LpCurrentCommData->ddNoOfRxBuffers)
         {
            /* Decrement the number of buffers to be transmitted */
            (LpCurrentCommData->ddNoOfRxBuffers)--;
         }
         else
         {
            #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
            if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
            {
               LpCurrentCommData->blRxEDL = SPI_FALSE;
            }
            else
            {
               /* No action required */
            }
            #endif
            /* All channels are transmitted. Hence the job is transmitted */
            Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
         }
      }
    }
  }
  else
  {
    /* No action required */
  }
  #endif /*
          * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
          *                 (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
          *                                 (SPI_HW_PRIORITY_ENABLED == STD_ON))
          */
  #if (SPI_TX_ONLY_MODE == STD_ON)
  if (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode)
  {
    LpTxOnlyCurrentCommData =
     &Spi_GstTxOnlyCurrentCommData
            [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

      #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && \
                                             (SPI_16BIT_DATA_WIDTH == STD_OFF))
      /* MISRA Violation: START Msg(4:0488)-4 */
      LpPBChannelConfig = Spi_GpFirstChannel +
               LpTxOnlyCurrentCommData->ddChannelIndex;
      /* END Msg (4:0488)-4 */
      #endif

      /* MISRA Violation: START Msg(4:0316)-15 */
      /* Get the base address of the HW Unit */
      LpCsihUserBaseAddr =
                     (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
      /* END Msg(4:0316)-15 */

      LpTxOnlyRxData = LpTxOnlyCurrentCommData->pCurrentRxData;

      if (NULL_PTR != LpTxOnlyRxData)
      {
        #if(SPI_8BIT_DATA_WIDTH == STD_ON)
        /*
         * Data width is maximum 8-bit. Hence, Receive the data from the
         * Rx register to local union variable
         */
        LddData = (uint8) LpCsihUserBaseAddr->usCSIHRX0H;
        #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
        /* Data width is maximum 16-bit */
        LddData = LpCsihUserBaseAddr->usCSIHRX0H;
        #else
        /*
         * Data width is maximum 32-bit, check if the the data width of
         * requested channel is more than 16 bits
         */
        if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
        {
          LddData = LpCsihUserBaseAddr->usCSIHRX0H;
        }
        else
        {
          /* Check if the configured data direction is LSB first */
          if (SPI_TRUE == LpPBChannelConfig->blDirection)
          {
            /*
             * Take a local union variable to construct the value from RX0W
             * register
             */
            LunDataAccess1.usRegData5[1] = LpCsihUserBaseAddr->usCSIHRX0H;
            LunDataAccess1.usRegData5[0] = Spi_GusDataAccess;
          }
          else
          {
            /*
             * Take a local union variable to construct the value from RX0W
             * register
             */
            LunDataAccess1.usRegData5[0] = LpCsihUserBaseAddr->usCSIHRX0H;
            LunDataAccess1.usRegData5[1] = Spi_GusDataAccess;
          } /* End of checking direction */

          LddData = LunDataAccess1.ulRegData;
        }
        #endif /* End of #if(SPI_8BIT_DATA_WIDTH == STD_ON) */
      }
      else
      {
        Lus16BitData = LpCsihUserBaseAddr->usCSIHRX0H;
      }

      /* MISRA Violation: START Msg(4:2962)-18 */
      /* MISRA Violation: START Msg(4:2812)-8 */
      *LpTxOnlyRxData = LddData;
      /* END Msg (4:2812)-8*/
      /* END Msg (4:2962)-18*/

      /* MISRA Violation: START Msg(4:0489)-3 */
      LpTxOnlyRxData++;
      /* END Msg (4:0489)-3 */

      LpTxOnlyCurrentCommData->pCurrentRxData = LpTxOnlyRxData;

    /* Get the sequence index from the queue for normal operation */
    LddSeqIndex =
          Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];

    /* MISRA Violation: START Msg(4:0488)-4 */
    LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
    /* END Msg (4:0488)-4 */

    (LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd)++;

    if ((LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd) <
                                                    LpSeqConfig->ddNoOfBuffers)
    {
      if ((LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd) >=
                       *(LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx))
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment the notify index value */
        (LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
        /* END Msg (4:0489)-3 */
        LddJobIndex =
         (Spi_JobType)(*(LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx));

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* TRACE [R3, SPI118][R4, SPI118] */
        /* TRACE [R3, SPI071][R4, SPI071] */
        /* TRACE [R3, SPI054][R4, SPI054] */
        /* Check if notification is configured */
        if (NULL_PTR != ((Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification))
        {
          (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification();
          /* END Msg(4:0488)-4 */
        }
        else
        {
          /* No action required */
        }

        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment the notify index value */
        (LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
        /* END Msg (4:0489)-3 */
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /*
       * All channels are transmitted and received. Hence the sequence is
       * completed
       */

      /* Update sequence result as OK */
      Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_OK;

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Load Job List pointer to temporary variable */
      LpJobListTmptr = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
      /* END Msg (4:0488)-4 */

      /* Load total number of Jobs in current sequence to local variable */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      do
      {
        /* Update the job result variable */
        Spi_GaaJobResult[LpJobListTmptr->ddJobIndex] = SPI_JOB_OK;

        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment local pointer to the job list */
        LpJobListTmptr++;
        /* END Msg (4:0489)-3 */

        LddNoOfJobs--;
      }
      while (SPI_ZERO < LddNoOfJobs);

      Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
    }
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if (SPI_TX_ONLY_MODE == STD_ON) */
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        *  (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_ProcessSequence
**
** Service ID         : Not Applicable
**
** Description        : This function is to process remaining jobs in
**                      the sequence to be transmitted
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstSeq, Spi_GstSeqProcess, Spi_GstJobFunc
**                      Spi_GpFirstJob, Spi_GaaJobResult, Spi_GstHWUnitInfo,
**                      Spi_GaaSeqResult, Spi_GstQueuedSeq, Spi_GddDriverStatus,
**                      Spi_GaaSeqCancel, Spi_GaaJobQueue, Spi_GaaSeqCancel,
**                      Spi_GaaSeqQueue, Spi_GpFirstJobList
**
** Function Invoked   : Spi_ProcessChannel, Spi_HWDeActivateCS,
**                      Spi_PopFromQueue, Spi_InitiateJobTx
**                      SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIGnCTL0, CSIHnCTL0, CSIGnCTL1, CSIHnCTL1
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessSequence
                   (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  #if ((SPI_CSIG_CONFIGURED == STD_ON) || ((SPI_CSIH_CONFIGURED == STD_ON) \
                                  && (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  #endif
  #endif

  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_CONFIG_CONST) LpHWUnitInfo;

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_JobType LddJobListIndex;
  #endif

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #if (SPI_CANCEL_API == STD_ON)
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;
  #endif
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  Spi_SequenceType LddSeqIndex;
  Spi_SequenceType LddLowestQueueIndex;
  #endif
  #if ((SPI_HW_PRIORITY_ENABLED == STD_ON) || \
       (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) )
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  Spi_JobType LddJobIndex;
  #endif

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  #if (SPI_CANCEL_API == STD_ON)
  uint8 LucStatusOffset;
  uint8 LucStatusMask;
  uint8 LucVar;
  uint8 LucMask;
  #endif
  #endif

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  #if (SPI_CANCEL_API == STD_ON)
  LucStatusMask = SPI_ZERO;
  #endif
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
        && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  if (SPI_TWO > LucHWMemoryMode)
  #endif
  {
    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON)\
                                         || (SPI_HW_PRIORITY_ENABLED == STD_ON))

    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
    }
    #endif

    if ((SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode) &&
                            (SPI_ZERO < LpCurrentCommData->ddNoOfRxChannels))
    {
      /* More channels to be transmitted. Hence transmit next channel */
      Spi_ProcessChannel(LddHWUnit, LucHWMemoryMode);
    }
    else
    #endif /*
            * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            *                   (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
            *                               (SPI_HW_PRIORITY_ENABLED == STD_ON))
            */
    {
      /* MISRA Violation: START Msg(4:0488)-4 */
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      /* MISRA Violation: START Msg(4:2841)-6 */
      LpJobList = Spi_GpFirstJobList +
                        Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber +
                                         SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
      /* END Msg (4:2841)-6 */
      #else
      LpJobList = Spi_GpFirstJobList +
                        Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
      #endif
      /* END Msg (4:0488)-4 */

      /* Get the index of the first job linked to this sequence */
      LddJobIndex = LpJobList->ddJobIndex;

      #if ((SPI_CSIG_CONFIGURED == STD_ON) || ((SPI_CSIH_CONFIGURED == STD_ON) \
                                  && (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the job structure */
      LpJobConfig = Spi_GpFirstJob + LddJobIndex;
      /* END Msg (4:0488)-4 */
      #endif

      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
      #endif
      {
        /* MISRA Violation: START Msg(4:4397)-2 */
        /* Disable transmit interrupt control */
        RH850_SV_MODE_IMR_OR(16, (LpHWUnitInfo->pTxImrAddress),
                            (~(LpHWUnitInfo->usTxImrMask)));

        /* Disable receive interrupt control */
        RH850_SV_MODE_IMR_OR(16, (LpHWUnitInfo->pRxImrAddress),
                            (~(LpHWUnitInfo->usRxImrMask)));
        /* END Msg(4:4397)-2 */
      }
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      else
      #endif
      {
        /* No action required */
      }

      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
          /* MISRA Violation: START Msg(4:0488)-4 */
          Spi_HWDeActivateCS(LpJobConfig);
          /* END Msg (4:0488)-4 */
        #endif /* #if (SPI_CSIG_CONFIGURED == STD_ON */
      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        #if( SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
        if (SPI_GPIO_CS == LpJobConfig->ddCSType)
        {
          /* Activate the chip select */
          Spi_HWDeActivateCS(LpJobConfig);
        }
        else
        {
          /* No action required */
        }
        #endif
        #endif
      }

      if (SPI_JOB_FAILED != Spi_GaaJobResult[LddJobIndex])
      {
        /* TRACE [R3, SPI157][R4, SPI292] */
        /* TRACE [R4, SPI350] */
        /* Update the RAM area for job sequence */
        Spi_GaaJobResult[LddJobIndex] = SPI_JOB_OK;
      }
      else
      {
        /* No action required */
      }

      /* Check if the notification function is configured */
      /* TRACE [R3, SPI118][R4, SPI118] */
      /* TRACE [R3, SPI119][R4, SPI119] */
      /* TRACE [R3, SPI088][R4, SPI088] */
      /* TRACE [R3, SPI071][R4, SPI071] */
      /* TRACE [R3, SPI054][R4, SPI054] */
      /* MISRA Violation: START Msg(4:0488)-4 */
      if (NULL_PTR != (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification)
      {
        /* Invoke the notification function */
        (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification();
        /* END Msg (4:0488)-4 */
      }
      else
      {
        /* No action required */
      }
      #if (SPI_FIFO_MODE == STD_ON)
      /* Reset the Buffer status to UNINT */
      Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_UNINIT;
      Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_UNINIT;
      #endif
      /* Pop next job in the queue */
      Spi_PopFromQueue(LddHWUnit, LucHWMemoryMode);

    } /* End of checking memory modes */
    #endif /*
            * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON)\
            *                            || (SPI_HW_PRIORITY_ENABLED == STD_ON))
            */
  }
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
      && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  else
  #endif
  {
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable transmit interrupt control */
    RH850_SV_MODE_IMR_OR(16, (LpHWUnitInfo->pTxImrAddress),
                        (~(LpHWUnitInfo->usTxImrMask)));

    /* Disable receive interrupt control */
    RH850_SV_MODE_IMR_OR(16, (LpHWUnitInfo->pRxImrAddress),
                        (~(LpHWUnitInfo->usRxImrMask)));
    /* END Msg(4:4397)-2 */

    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Get the pointer to the post-build sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
    /* END Msg (4:0488)-4 */

    #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
    /* TRACE [R3, SPI073][R4, SPI073] */
    /* TRACE [R3, SPI120][R4, SPI120] */
    /* TRACE [R4, SPI264] */
    /* Check if the notification function is configured */
    if (NULL_PTR != LpSeqConfig->pSpiSeqEndNotification)
    {
      /* Invoke the notification function */
      LpSeqConfig->pSpiSeqEndNotification();
    }
    else
    {
      /* No action required */
    }
    #endif

    LddLowestQueueIndex = Spi_GpConfigPtr->aaHWUnitQueueIndex[LddHWUnit];

    if ( (Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]) == LddLowestQueueIndex)
    {
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-21 */
      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-21 */
      #endif

      Spi_GblQueueStatus[LddHWUnitNumber + SPI_TWO] = SPI_QUEUE_EMPTY;

      /* MISRA Violation: START Msg(4:4397)-2 */
      /*
       * Changing the hardware status after completing the sequence
       * transmission
       */
      Spi_GucHwUnitStatus =
                        (Spi_GucHwUnitStatus ^ (SPI_ONE << LddHWUnitNumber));
      Spi_GusAllQueueSts =
        Spi_GusAllQueueSts & (~(SPI_ONE << (LddHWUnitNumber + SPI_TWO)));
      /* END Msg(4:4397)-2 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-21*/
      /* Enable relevant interrupts to protect this critical section */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-21 */
      #endif

      if (SPI_ZERO == Spi_GusAllQueueSts)
      {
        /* Update driver status as idle */
        Spi_GddDriverStatus = SPI_IDLE;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      #if (SPI_CANCEL_API == STD_ON)
      do
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif

        Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]--;

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21*/
        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif

        LddSeqIndex =
             Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
        /* MISRA Violation: START Msg(4:0488)-4 */
        LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
        /* END Msg (4:0488)-4 */

        if (SPI_SEQ_CANCELLED != Spi_GaaSeqResult[LddSeqIndex])
        {
          /* Get the cancel byte offset for the requested sequence  */
          LucStatusOffset = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;
          /* Get the cancel byte mask */
          LucStatusMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;
          /* Get the cancel status for this sequence */
          LucStatusMask = LucStatusMask & Spi_GaaSeqCancel[LucStatusOffset];
          if (SPI_ZERO != LucStatusMask)
          {
            Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_CANCELLED;
            #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                               (SPI_LEVEL_DELIVERED == SPI_TWO))
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Get the pointer to status bytes ROM value for the sequence */
            LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                        (LpSeqConfig->usStsValueStartByteIdx);
            /* END Msg(4:0488)-4 */
            /* Get the number of status byte ROM value */
            LucVar = LpSeqConfig->ucNoOfStsByteValue;
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Get the pointer to the start byte of RAM area */
            LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                        (LpSeqConfig->usStsUpdateStartByteIdx);
            /* END Msg(4:0488)-4 */


            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-21 */
            /* Disable relevant interrupts to protect this critical section */
            SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-21 */
            #endif

            while (SPI_ZERO < LucVar)
            {
              /* MISRA Violation: START Msg(4:4397)-2 */
              /*
               * Reset the status bit of the requested sequence and the
               * sequences that have jobs shared with the requested sequence
               */
              *LpStsByte = *LpStsByte & (~(*LpStsByteValue));
              /* END Msg(4:4397)-2 */
              /* MISRA Violation: START Msg(4:0489)-3 */
              LpStsByte++;
              /* END Msg(4:0489)-3 */
              /* MISRA Violation: START Msg(4:0489)-3 */
              LpStsByteValue++;
              /* END Msg(4:0489)-3 */
              LucVar--;
            } /* End of while (LucVar > SPI_ZERO) */

            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-21*/
            /* Enable relevant interrupts to protect this critical section */
            SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-21 */
            #endif
            #endif
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
      }while ((SPI_SEQ_CANCELLED == Spi_GaaSeqResult[LddSeqIndex]) &&
              (Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO] >
                                                        LddLowestQueueIndex));

      if (SPI_ZERO == LucStatusMask)
      #endif
      {
        #if (SPI_CANCEL_API == STD_OFF)
        Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]--;
        LddSeqIndex =
            Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
        #endif

        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Get the pointer to the post-build sequence structure */
        LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
        /* END Msg (4:0488)-4 */

        /* Get the job list index of the last job of the sequence */
        LddJobListIndex = LpSeqConfig->ddJobListIndex;

        /* Get the number of jobs configured for the requested sequence */
        LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

        /* Get the index of the job list for the first job of the sequence */
        LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

        #if (SPI_CANCEL_API == STD_ON)
        /* Get the cancel byte offset for the requested sequence  */
        LucVar = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;
        /* Get the cancel byte mask */
        LucMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif

        /* MISRA Violation: START Msg(4:4397)-2 */
        /* Reset the cancel bit array for this sequence */
        Spi_GaaSeqCancel[LucVar] = Spi_GaaSeqCancel[LucVar] & (~LucMask);
        /* END Msg(4:4397)-2 */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21*/
        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif
        #endif /* End of (SPI_CANCEL_API == STD_ON) */

        /* Check if start sequence notification is enabled */
        #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
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
        #endif /*if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)*/

        /* Initiate the transmission for that sequence */
        Spi_InitiateJobTx(LddReqJobListIndex);
      } /* End of if (SPI_ZERO != Spi_GddQueueIndex[LucHWMemoryMode]) */
      #if (SPI_CANCEL_API == STD_ON)
      else
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif

        Spi_GblQueueStatus[LddHWUnitNumber + SPI_TWO] = SPI_QUEUE_EMPTY;
        /* MISRA Violation: START Msg(4:4397)-2 */
        Spi_GusAllQueueSts = Spi_GusAllQueueSts &
                                   (~(SPI_ONE << (LddHWUnitNumber + SPI_TWO)));
        /* END Msg(4:4397)-2 */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-21*/
        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-21 */
        #endif
        if (SPI_ZERO == Spi_GusAllQueueSts)
        {
          /* Update driver status as idle */
          Spi_GddDriverStatus = SPI_IDLE;
        }
        else
        {
          /* No action required */
        }
      }
      #endif /* End of (SPI_CANCEL_API == STD_ON) */
    }
    #endif /* End of ((SPI_DUAL_BUFFER_MODE == STD_ON)
                   || (SPI_TX_ONLY_MODE == STD_ON))*/
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_TxDmaConfig
**
** Service ID         : Not Applicable
**
** Description        : This function is to set the attributes for DMA transfer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : LpJobConfig, LpTxData, LddNoOfBuffers
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GpDmaUnitConfig
**
** Function Invoked   : None
**
** Registers Used     : DTSn, DTCTn, DTCn, DSAn
*******************************************************************************/
#if (SPI_DMA_MODE_ENABLE == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_TxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_CONST) LpTxData,
 Spi_NumberOfDataType LddNoOfBuffers, uint8 LucDataType)
{
  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA) LpIntpCntrlReg;
  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_ONE)
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpDmaTrigFactor;
  #else
  uint32 LulDTCTVal;
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnit;
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  uint8 LucHWMemoryMode;
  uint8 LucIndex;

  /* Get the Tx DMA index for this HW Unit */
  LucIndex = LpJobConfig->ucTxDmaDeviceIndex;

  /* Initialize memory mode as DIRECT ACCESS */
  LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Get the Hardware Unit index */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;

  #if (SPI_CSIG_CONFIGURED == STD_ON)
  /* Check if the HW Unit is CSIH */
  if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
  #endif
  {
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode =  Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  }
  #if (SPI_CSIG_CONFIGURED == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  #endif

  if (SPI_INVALID_DMAUNIT != LucIndex)
  {
    /* Set the parameters for Tx DMA Unit */
    /* MISRA Violation: START Msg(4:0491)-5 */
    /* Set the DMA channel control register value */
    LpDmaConfig = &Spi_GpDmaUnitConfig[LucIndex];
    /* END Msg(4:0491)-5 */
    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;
    #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    /*Clear the software transfer request flag*/
    LpDmaRegisters->ulDCSTCn = LpDmaRegisters->ulDCSTCn | SPI_DMA_STR_CLEAR;
    LpDmaRegisters->ulDCENn = SPI_DMA_DCEN_DISABLE;
    #else
    /* Clear the DTS bit */
    LpDmaRegisters->ucDTSn = LpDmaRegisters->ucDTSn & SPI_DMA_DISABLE;
    #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    if (NULL_PTR == LpTxData)
    {
      /* MISRA Violation: START Msg(4:0306)-15 */
      /* Load the source register with pointer to default value */
      LpDmaRegisters->ulDSAn = (uint32)(&Spi_GddDmaData);
      /* END Msg(4:0306)-15 */
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      LulDTCTVal = SPI_DMA_FIXED_TX_SETTINGS;
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        LulDTCTVal = LulDTCTVal | SPI_DMA_BLOCK_SETTINGS;
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      /* Load the control register with fixed settings */
      LpDmaRegisters->ulDTCTn = (LpDmaRegisters->ulDTCTn) | LulDTCTVal;
      #else
      /* Load the control register with fixed settings */
      LpDmaRegisters->usDTCTn = (LpDmaRegisters->usDTCTn) |
                                              SPI_DMA_FIXED_TX_SETTINGS;
      #endif /* End of  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }
    else
    {
      if ((SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode) ||
                                                    (SPI_ONE == LddNoOfBuffers))
      {
        /* MISRA Violation: START Msg(4:0306)-15 */
        LpDmaRegisters->ulDSAn = (uint32)LpTxData;
        /* END Msg(4:0306)-15 */
      }
      else
      {
        /* MISRA Violation: START Msg(4:0306)-15 */
        /* MISRA Violation: START Msg(4:0489)-3 */
        LpDmaRegisters->ulDSAn = (uint32)(LpTxData + SPI_ONE);
        /* END Msg(4:0489)-3 */
        /* END Msg(4:0306)-15 */
      }
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        LpDmaRegisters->ulDTCTn = (LpDmaRegisters->ulDTCTn) |
                                                  SPI_DMA_BLOCK_SETTINGS;
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      LpDmaRegisters->ulDTCTn = LpDmaRegisters->ulDTCTn &
                                                       SPI_DMA_INV_TX_SETTINGS;
      #else
      LpDmaRegisters->usDTCTn = LpDmaRegisters->usDTCTn &
                                                       SPI_DMA_INV_TX_SETTINGS;
      #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }

    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      /* Load the trigger factor configured */
      LpDmaRegisters->ulDTFRn = (uint32)SPI_ZERO;
      /* Load the transfer count value to the DMA register */
      LpDmaRegisters->ulDTCn = LddNoOfBuffers;
      #else
      /* Get the address of the trigger factor register */
      LpDmaTrigFactor = LpDmaConfig->pDmaDTFRRegAddr;
      /* Disable the trigger factor configured */
      *LpDmaTrigFactor = SPI_ZERO;
      /* Load the transfer count value to the DMA register */
      LpDmaRegisters->usDTCn = LddNoOfBuffers;
      #endif
      /* Clear the pending interrupts */
      RH850_SV_MODE_ICR_AND(16, (LpDmaConfig->pDmaIntCntlReg),
                           (SPI_CLR_INT_REQ));
      /* Register dummy read-write  */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpDmaConfig->pDmaIntCntlReg),
                           (SPI_CLR_INT_REQ));
      /* SYNCP execution */
      EXECUTE_SYNCP();
      #endif
      /* Enable the DMA interrupt control register */
      LpIntpCntrlReg = LpDmaConfig->pDmaImrIntCntlReg;
      RH850_SV_MODE_IMR_AND(16, (LpIntpCntrlReg),
                      (LpDmaConfig->usDmaImrMask));
    }
    else if (SPI_ONE == LddNoOfBuffers)
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      /* Load the transfer count value to the DMA register */
      LpDmaRegisters->ulDTCn = LddNoOfBuffers;
      /* Disable the trigger factor configured */
      LpDmaRegisters->ulDTFRn = SPI_ZERO;
      #else
      /* Load the transfer count value to the DMA register */
      LpDmaRegisters->usDTCn = LddNoOfBuffers;
      /* Get the address of the trigger factor register */
      LpDmaTrigFactor = LpDmaConfig->pDmaDTFRRegAddr;
      /* Disable the trigger factor configured */
      *LpDmaTrigFactor = SPI_ZERO;
      #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }
    else
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      /* Load the trigger factor configured */
      LpDmaRegisters->ulDTFRn = (uint32)(LpDmaConfig->usDmaDtfrRegValue);
      /* Load the transfer count value to the DMA register */
      LpDmaRegisters->ulDTCn = LddNoOfBuffers - SPI_ONE;
      #else
      LpDmaTrigFactor = LpDmaConfig->pDmaDTFRRegAddr;
      /* Load the trigger factor configured */
      *LpDmaTrigFactor = LpDmaConfig->usDmaDtfrRegValue;

      /* Load the transfer count value to the DMA register */
      LpDmaRegisters->usDTCn = LddNoOfBuffers - SPI_ONE;
      #endif
    }
    #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    /* Clear the MLE bit for data transfer once */
    LpDmaRegisters->ulDTCTn = LpDmaRegisters->ulDTCTn & SPI_DMA_ONCE;
    /* Disable channel operation */
    LpDmaRegisters->ulDCENn = SPI_DMA_DCEN_DISABLE;
    /* Clear DMA Transfer Request */
    LpDmaRegisters->ulDTFRRQCn = SPI_DMA_DRQ_CLEAR;
    #else
    /* Clear the MLE bit for data transfer once */
    LpDmaRegisters->usDTCTn = LpDmaRegisters->usDTCTn & SPI_DMA_ONCE;

    /* MISRA Violation: START Msg(4:0303)-10 */
    /* Clear interrupt flag for corresponding DMA channel */
    SPI_DMA_DRQCLR = SPI_DMA_DRQCLR | LpDmaConfig->usDmaChannelMask;
    /* END Msg(4:0303)-10 */
    #endif

    if ((SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode) ||
                                               (SPI_ONE == LddNoOfBuffers))
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)

      /* DMA transfer enable  */
      LpDmaRegisters->ulDTCTn  = LpDmaRegisters->ulDTCTn & SPI_DMA_STR_REQ;
      LpDmaRegisters->ulDCSTSn = SPI_DMA_STR ;
      LpDmaRegisters->ulDCENn  = SPI_DMA_DCEN_ENABLE;
      #else
      /* DMA transfer enable along with software transfer request */
      LpDmaRegisters->ucDTSn = SPI_DMA_SR_ENABLE;
      #endif
    }
    else
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)

      /* DMA transfer enable  */
      LpDmaRegisters->ulDCENn  = SPI_DMA_DCEN_ENABLE;
      #else
      /* DMA transfer enable */
      LpDmaRegisters->ucDTSn = SPI_DMA_ENABLE;
      #endif
    }
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_DMA_MODE_ENABLE == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_RxDmaConfig
**
** Service ID         : Not Applicable
**
** Description        : This function is to set the attributes for DMA transfer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : LpJobConfig, LpRxData, LddNoOfBuffers
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GpDmaUnitConfig
**
** Function Invoked   : None
**
** Registers Used     : DTSn, DTCTn, DTCn, DDAn
*******************************************************************************/
#if (SPI_DMA_MODE_ENABLE == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_RxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpRxData,
 Spi_NumberOfDataType LddNoOfBuffers, uint8 LucDataType)
{
  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA) LpIntpCntrlReg;
  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_ONE)
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpDmaTrigFactor;
  #else
  uint32 LulDTCTVal;
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnit;
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  uint8 LucHWMemoryMode;
  uint8 LucIndex;

  /* Get the Rx DMA index for this HW Unit */
  LucIndex = LpJobConfig->ucRxDmaDeviceIndex;

  /* Initialize memory mode as DIRECT ACCESS */
  LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;

  /* Get the configured memory mode for this HW Unit */
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Get the Hardware Unit index */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;

  #if (SPI_CSIG_CONFIGURED == STD_ON)
  /* Check if the HW Unit is CSIH */
  if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
  #endif
  {
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  }
  #if (SPI_CSIG_CONFIGURED == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  #endif

  if (SPI_INVALID_DMAUNIT != LucIndex)
  {
    /* MISRA Violation: START Msg(4:0491)-5 */
    /* Set the DMA channel control register value */
    LpDmaConfig = &Spi_GpDmaUnitConfig[LucIndex];
    /* END Msg(4:0491)-5 */
    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;
    #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    LpDmaRegisters->ulDCENn = SPI_DMA_DCEN_DISABLE;
    /*Clear the software transfer request flag*/
    LpDmaRegisters->ulDCSTCn = LpDmaRegisters->ulDCSTCn | SPI_DMA_STR_CLEAR;
    #else
    /* Clear the DTE bit */
    LpDmaRegisters->ucDTSn = LpDmaRegisters->ucDTSn & SPI_DMA_DISABLE;
    #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    if (NULL_PTR == LpRxData)
    {
      /* MISRA Violation: START Msg(4:0303)-10 */
      /* MISRA Violation: START Msg(4:0306)-13 */
      /* Load the source register with pointer to default value */
      LpDmaRegisters->ulDDAn = (uint32)(&Spi_GddDmaRxData);
      /* END Msg(4:0303)-10 */
      /* END Msg(4:0306)-13 */
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      LulDTCTVal = SPI_DMA_FIXED_RX_SETTINGS;
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        LulDTCTVal = LulDTCTVal | SPI_DMA_BLOCK_SETTINGS;
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      LpDmaRegisters->ulDTCTn = (LpDmaRegisters->ulDTCTn) | LulDTCTVal;
      #else
      LpDmaRegisters->usDTCTn =
                          LpDmaRegisters->usDTCTn | SPI_DMA_FIXED_RX_SETTINGS;
      #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }
    else
    {
      /* MISRA Violation: START Msg(4:0306)-13 */
      LpDmaRegisters->ulDDAn = (uint32)LpRxData;
      /* END Msg(4:0306)-13 */
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        LpDmaRegisters->ulDTCTn = (LpDmaRegisters->ulDTCTn) |
                                              SPI_DMA_BLOCK_SETTINGS;
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      LpDmaRegisters->ulDTCTn =
                             LpDmaRegisters->ulDTCTn & SPI_DMA_INV_RX_SETTINGS;
      #else
      LpDmaRegisters->usDTCTn =
                             LpDmaRegisters->usDTCTn & SPI_DMA_INV_RX_SETTINGS;
      #endif /* #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }
    #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    /* Load the transfer count value to the DMA register */
    LpDmaRegisters->ulDTCn = LddNoOfBuffers;
    /* Clear the MLE bit for data transfer once */
    LpDmaRegisters->ulDTCTn = LpDmaRegisters->ulDTCTn & SPI_DMA_ONCE;
    #else
    /* Load the transfer count value to the DMA register */
    LpDmaRegisters->usDTCn = LddNoOfBuffers;

    /* Clear the MLE bit for data transfer once */
    LpDmaRegisters->usDTCTn = LpDmaRegisters->usDTCTn & SPI_DMA_ONCE;
    #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    /* Clear the pending interrupts */
    RH850_SV_MODE_ICR_AND(16, (LpDmaConfig->pDmaIntCntlReg),
                            (SPI_CLR_INT_REQ));
    /* Register dummy read-write  */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpDmaConfig->pDmaIntCntlReg),
                            (SPI_CLR_INT_REQ));
    /* SYNCP execution */
    EXECUTE_SYNCP();
    #endif
    /* Enable the DMA interrupt control register */
    LpIntpCntrlReg = LpDmaConfig->pDmaImrIntCntlReg;

    RH850_SV_MODE_IMR_AND(16, (LpIntpCntrlReg),
                         (LpDmaConfig->usDmaImrMask));
    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
      /* Disable the trigger factor configured */
      LpDmaRegisters->ulDTFRn = SPI_ZERO;
      #else
      /* Get the address of the trigger factor register */
      LpDmaTrigFactor = LpDmaConfig->pDmaDTFRRegAddr;
      /* Disable the trigger factor configured */
      *LpDmaTrigFactor = SPI_ZERO;
      #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }
    else
    {
      /* No action required */
    }
    #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
    /* Disable channel operation */
    LpDmaRegisters->ulDCENn = SPI_DMA_DCEN_DISABLE;
    /* Clear DMA Transfer Request */
    LpDmaRegisters->ulDTFRRQCn = SPI_DMA_DRQ_CLEAR;
    #else
    /* MISRA Violation: START Msg(4:0303)-10 */
    /* Clear interrupt flag for corresponding DMA channel */
    SPI_DMA_DRQCLR = SPI_DMA_DRQCLR | LpDmaConfig->usDmaChannelMask;
    /* END Msg (4:0303)-10 */
    #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)*/

    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)

      /* DMA transfer enable  */
      LpDmaRegisters->ulDTCTn  = LpDmaRegisters->ulDTCTn  & SPI_DMA_STR_REQ;
      LpDmaRegisters->ulDCSTSn = SPI_DMA_STR ;
      LpDmaRegisters->ulDCENn  = SPI_DMA_DCEN_ENABLE;
      #else
      /* DMA transfer enable along with software transfer request */
      LpDmaRegisters->ucDTSn = SPI_DMA_SR_ENABLE;
      #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }
    else
    {
      #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)

      /* DMA transfer enable  */
      LpDmaRegisters->ulDCENn  = SPI_DMA_DCEN_ENABLE;
      #else
      /* DMA transfer enable */
      LpDmaRegisters->ucDTSn = SPI_DMA_ENABLE;
      #endif /* End of #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO) */
    }
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_DMA_MODE_ENABLE == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_DmaISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the DMA ISR for processing
**                      DMA request
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : uint8 LddDmaUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GpFirstChannel, Spi_GpFirstJob,
**                      Spi_GpDmaUnitConfig, Spi_GaaChannelEBData
**
** Function Invoked   : Spi_ProcessSequence
**
** Registers Used     : None
*******************************************************************************/
#if (SPI_DMA_MODE_ENABLE == STD_ON)

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

FUNC(void, SPI_FAST_CODE) Spi_DmaISR (uint8 LucDmaUnit)
{
  Spi_HWUnitType LddHWUnit;
  uint8 LucHWMemoryMode;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  #if (SPI_FIFO_MODE == STD_ON)
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpChannelList;
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;

  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  Spi_ChannelType LddChannelIndex;
  Spi_ChannelType LddNoOfChannels;
  Spi_NumberOfDataType LddNoOfBuffers;
  Spi_NumberOfDataType LddBufferIndex;
  Spi_JobType LddJobIndex;
  #endif

  /* MISRA Violation: START Msg(4:0488)-4 */
  LddHWUnit = *((Spi_GpConfigPtr->pDmaSpiHWUnitMap) + LucDmaUnit);
  /* END Msg (4:0488)-4 */

  #if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO))
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

  #if (SPI_FIFO_MODE == STD_ON)
  if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
  {
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpDmaConfig = Spi_GpDmaUnitConfig
                              + Spi_GstFifoCurrentCommData.ucDmaDeviceIndex;
    /* END Msg (4:0488)-4 */

    if (SPI_ONE == LpDmaConfig->blComDmaChannel)
    {
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Increment the channel list to point to next channel */
      Spi_GstFifoCurrentCommData.pCurrentRxChannelList++;

      /* Decrement the number of channels */
      Spi_GstFifoCurrentCommData.ddNoOfRxChannels--;
      /* END Msg (4:0488)-4 */

      LpChannelList = Spi_GstFifoCurrentCommData.pCurrentRxChannelList;
      LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfRxChannels;
    }
    else
    {
      /* Increment the channel list to point to next channel */
      Spi_GstFifoCurrentCommData.pCurrentTxChannelList++;

      /* Decrement the number of channels */
      Spi_GstFifoCurrentCommData.ddNoOfTxChannels--;
      /* END Msg (4:0488)-4 */

      LpChannelList = Spi_GstFifoCurrentCommData.pCurrentTxChannelList;
      LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfTxChannels;
    }

    if (SPI_ZERO < LddNoOfChannels)
    {
      LddChannelIndex = *LpChannelList;
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the post-build structure of the channel */
      LpPBChannelConfig = Spi_GpFirstChannel + LddChannelIndex;
      /* END Msg (4:0488)-4 */

      LddBufferIndex = LpPBChannelConfig->ddBufferIndex;

      #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
      /* Check if the buffer type is internal buffer */
      if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #endif
      {
        #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Update the RAM variable for Tx pointer with channel IB index */
        LpNextTxData = (Spi_GpConfigPtr->pChannelIBWrite) + LddBufferIndex;
        /* Update the RAM variable for Rx pointer with channel IB index */
        LpCurrentRxData = (Spi_GpConfigPtr->pChannelIBRead) + LddBufferIndex;
        /* END Msg (4:0488)-4 */
        /* Update the RAM variable for number of buffers of the channel */
        LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
        #endif
      }
      #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
      else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
      #endif
      {
        #if (SPI_EB_CONFIGURED == STD_ON)
        /*
         * Update the RAM variable for Tx pointer with channel EB
         * source pointer
         */
        LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;
        /* Update the RAM variable for Rx pointer */
        LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;
        /* Update the local counter with number of buffers of the channel */
        LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
        #endif
      }
      #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
      else
      {
        /* No action required */
      }
      #endif

      LddJobIndex = Spi_GstFifoCurrentCommData.ddJobIndex;
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the job structure */
      LpJobConfig = Spi_GpFirstJob + LddJobIndex;
      /* END Msg(4:0488)-4 */
      /* Check if DMA channel is Rx or Tx */
      if (SPI_ONE == LpDmaConfig->blComDmaChannel)
      {
        Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;
        /* MISRA Violation: START Msg(4:2962)-18 */
        Spi_RxDmaConfig(LpJobConfig, LpCurrentRxData, LddNoOfBuffers,
                                             LpPBChannelConfig->ucDataType);
        /* END Msg(4:2962)-18 */
      }
      else
      {
        Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;
        /* MISRA Violation: START Msg(4:2962)-18 */
        Spi_TxDmaConfig(LpJobConfig, LpNextTxData, LddNoOfBuffers,
                                             LpPBChannelConfig->ucDataType);
        /* END Msg(4:2962)-18 */
      }
    }
    else if (SPI_ONE == LpDmaConfig->blComDmaChannel)
    {
      Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
    }
    else
    {
      /* No action required */
    }
  }
  else
  #endif /* #if (SPI_FIFO_MODE == STD_ON) */
  {
    Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of (SPI_DMA_MODE_ENABLE == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_HWCancel
**
**Service ID          : NA
**
** Description        : This service is for setting the JOBE bit of the
**                      HW Unit to cancel an on-going sequence
**
** Sync/Async         : Asynchronous
**
** Re-entrancy        : Reentrant
**
** Input Parameters   : Sequence - Sequence ID
**
**InOut Parameters    : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : Spi_Init should have been invoked.
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function invoked   : None
**
**Registers Used      : CSIGnCTL0, CSIHnCTL0, ICCSIHnIJC
*******************************************************************************/

#if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWCancel(uint8 LucIndex)
{
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;

  /* Get the base address of the HW Unit */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LucIndex];

  /* Get the main base address */
  LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;

  if (SPI_ZERO != ((LpMainUserBaseAddr->ucMainCTL0) & SPI_CHECK_PWR))
  {
    /* Clear the pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxCancelIntCntlAddress),
                         (SPI_CLR_INT_REQ));

    /* Register dummy read-write  */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxCancelIntCntlAddress),
                         (SPI_CLR_INT_REQ));
    /* SYNCP execution */
    EXECUTE_SYNCP();
    #endif
    /* Enable transmit cancel interrupt control */
    RH850_SV_MODE_IMR_AND(16, (LpHWUnitInfo->pTxCancelImrAddress),
                         (LpHWUnitInfo->usTxCancelImrMask));
    /* Set JOBE bit of the HW Unit */
    LpMainUserBaseAddr->ucMainCTL0 =
              LpMainUserBaseAddr->ucMainCTL0 | SPI_SET_JOBE;
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((((SPI_DUAL_BUFFER_MODE == STD_ON) ||
        * (SPI_TX_ONLY_MODE == STD_ON)) && \
        * (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_HWDisableInterrupts
**
** Service ID         : NA
**
** Description        : This service is for disabling all interrupts in case
**                      of polling mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function invoked   : None
**
** Registers Used     : None
**
*******************************************************************************/
#if (SPI_LEVEL_DELIVERED == SPI_TWO)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWDisableInterrupts(void)
{
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpIntCntlAddress;
  Spi_HWUnitType LddHWUnit;

  /* Initialize number of HW Unit as zero */
  LddHWUnit = SPI_ZERO;
  /* Check for maximum HW Unit configured */
  /* MISRA Violation: START Msg(4:2877)-22 */
  while (SPI_MAX_HW_DETAILS > LddHWUnit)
  /* END Msg(4:2877)-22 */
  {
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxImrAddress;
    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usRxImrMask)));
    /* END Msg(4:4397)-2 */

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxImrAddress;


    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usTxImrMask)));
    /* END Msg(4:4397)-2 */

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pErrorImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usErrorImrMask)));
    /* END Msg(4:4397)-2 */

    #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) \
          && (SPI_CANCEL_API == STD_ON))
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxCancelImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usTxCancelImrMask)));
    /* END Msg(4:4397)-2 */
    #endif
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxIntCntlAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Clear Tx pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));

     LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxIntCntlAddress;
    /* Clear Rx pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));
    /* END Msg(4:4397)-2 */

    /* Increment HW Unit index */
    /* MISRA Violation: START Msg(4:2984)-16 */
    LddHWUnit++;
    /* END Msg(4:2984)-16 */
  } /* End of while (LddHWUnit < SPI_MAX_HW_DETAILS) */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_LEVEL_DELIVERED == SPI_TWO) */

/*******************************************************************************
** Function Name      : Spi_HWMainFunction_Handling
**
** Service ID         : Not Applicable
**
** Description        : This function is HW specific function for
**                      Spi_MainFunction_Driving API
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function Invoked   : None
**
** Registers Used     : CSIGnCTL0, CSIHnCTL0, CSIGTIR, CSIGTIC
*******************************************************************************/
#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
             (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWMainFunction_Handling(void)
{
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;

  Spi_HWUnitType LddHWUnit;
  uint8 LucHWMemoryMode;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  LddHWUnit = SPI_ZERO;

  do
  {
    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    /* Check if the HW Unit configured */
    if (SPI_FALSE == Spi_GstHWUnitInfo[LddHWUnit].blIsSynchronous)
    #endif
    {
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      if (SPI_MAX_NUM_OF_CSIG <= LddHWUnit)
      #endif
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
        /* Get the configured memory mode for this HW Unit */
        LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
        #endif
      }
      #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
      else
      #endif
      {
        #if (SPI_CSIG_CONFIGURED == STD_ON)
        /* Since HW Unit is CSIG, memory mode is DIRECT ACCESS by default */
        LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
        #endif
      }

      /* Get the pointer to the structure of HW Unit information */
      LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

      /* Get the main base address */
      LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;

      /* Check if the HWUnit is ON */
      if (SPI_SET_PWR == ((LpMainUserBaseAddr->ucMainCTL0) & SPI_SET_PWR))
      {
        /* Check if the HWUnit is busy */
        switch (LucHWMemoryMode)
        {
          #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                          (SPI_HWUNIT_ASYNCHRONOUS == STD_ON))
          case SPI_DIRECT_ACCESS_MODE_CONFIGURED:
              if (SPI_INT_FLAG_MASK ==
                       ((*LpHWUnitInfo->pTxIntCntlAddress) & SPI_INT_FLAG_MASK))
              {
                /* Clear the interrupt flag */
                RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                     (SPI_CLR_INT_REQ));
                /* Transmit next data */
                Spi_TransmitISR(LddHWUnit, LucHWMemoryMode);
              }
              else
              {
                /* No action required */
              }
              if (SPI_INT_FLAG_MASK ==
                       ((*LpHWUnitInfo->pRxIntCntlAddress) & SPI_INT_FLAG_MASK))
              {
                /* Clear the interrupt flag */
                RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                          (SPI_CLR_INT_REQ));
                /* Read received data */
                Spi_ReceiveISR(LddHWUnit, LucHWMemoryMode);
              }
              else
              {
                /* No action required */
              }
              break;
          #endif

          #if (SPI_FIFO_MODE == STD_ON)
          case SPI_FIFO_MODE_CONFIGURED:
              if (SPI_ZERO !=
                       ((*LpHWUnitInfo->pTxIntCntlAddress) & SPI_INT_FLAG_MASK))
              {
                /* Clear Tx interrupt flag */
                RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                     (SPI_CLR_INT_REQ));
                /* Transmit next data */
                Spi_TransmitISR(LddHWUnit, LucHWMemoryMode);
              }
              else
              {
                /* No action required */
              }
              break;
          #endif

          #if (SPI_DUAL_BUFFER_MODE == STD_ON)
          case SPI_DUAL_BUFFER_MODE_CONFIGURED:
              if (SPI_ZERO !=
                      ((*LpHWUnitInfo->pTxIntCntlAddress) & SPI_INT_FLAG_MASK))
              {
                /* Clear Tx interrupt flag */
                RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                     (SPI_CLR_INT_REQ));
                /* Transmit next data */
                Spi_TransmitISR(LddHWUnit, LucHWMemoryMode);
              }
              else
              {
                /* No action required */
              }
              break;
          #endif

          #if (SPI_TX_ONLY_MODE == STD_ON)
          case SPI_TX_ONLY_MODE_CONFIGURED:
              if (SPI_ZERO !=
                     ((*LpHWUnitInfo->pRxIntCntlAddress) & SPI_INT_FLAG_MASK))
              {
                RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                     (SPI_CLR_INT_REQ));
                Spi_ReceiveISR(LddHWUnit, LucHWMemoryMode);
              }
              else
              {
                /* No action required */
              }

              break;
          #endif

          default: break;

        }
      }
      else
      {
        /* No action required */
      }
    }
    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    else
    #endif
    {
      /* No action required */
    }
    /* MISRA Violation: START Msg(4:2984)-16 */
    LddHWUnit++;
    /* END Msg(4:2984)-16 */
    /* MISRA Violation: START Msg(4:2877)-22 */
    /* MISRA Violation: START Msg(4:2993)-11 */
    /* MISRA Violation: START Msg (4:2996)-9 */
  } while (SPI_MAX_HW_DETAILS > LddHWUnit);
  /* END Msg(4:2877)-22 */
  /* END Msg  (4:2993)-11  */
  /* END Msg  (4:2996)-9 */
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of ((#if ((SPI_LEVEL_DELIVERED == SPI_ONE) ||
        * ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        * (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))))
        */

/*******************************************************************************
** Function Name      : Spi_ComErrorISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIRE ISR for processing
**                      communication error interrupt request
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GaaJobResult, Spi_GpFirstJobList
**                      Spi_GaaSeqResult, Spi_GaaSeqQueue, Spi_GaaJobQueue
**
**Function Invoked    : Dem_ReportErrorStatus
**
** Registers Used     : CSIGnSTR0, CSIHnSTR0, CSIGnSTCR0, CSIHnSTCR0
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
            (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

FUNC(void, SPI_FAST_CODE) Spi_ComErrorISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON))
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobIndex;
  #endif

  Spi_SequenceType LddSeqIndex;

  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

   /* Get the main base address */
  LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;

  if (SPI_ZERO != (LpMainUserBaseAddr->ulMainSTR0 & SPI_PARITY_DCC_ERR))
  {
    LpMainUserBaseAddr->usMainSTCR0 = (uint16)(~(SPI_PARITY_DCC_ERR_CLR));

    /* TRACE [R3, SPI191][R4, SPI191] */
    /* TRACE [R3, SPI006][R4, SPI006] */
    /*Report error to DEM*/
    Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED);
  }
  else
  {
    /* No action required */
  }

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
        && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  if (SPI_TWO > LucHWMemoryMode)
  #endif
  {
    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
          (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON))
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpJobList = Spi_GpFirstJobList +
                 Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
    /* END Msg (4:0488)-4 */

    /* Get the index of the first job linked to this sequence */
    LddJobIndex = LpJobList->ddJobIndex;
    /* Get the index of the sequence */
    LddSeqIndex = LpJobList->ddSequenceIndex;

    /* Job is failed. Update job result as FAILED */
    /* TRACE [R3, SPI157][R4, SPI293] */
    Spi_GaaJobResult[LddJobIndex] = SPI_JOB_FAILED;

    #if ((SPI_FIFO_MODE == STD_ON) && (SPI_DEV_ERROR_DETECT == STD_ON))
    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {
      /* Check if overrun error has occurred */
      if (SPI_ZERO != (LpMainUserBaseAddr->ulMainSTR0 & SPI_OVRFLW_OVRRUN_ERR))
      {
        LpMainUserBaseAddr->usMainSTCR0 =
                                         (uint16)(~(SPI_OVRFLW_OVRRUN_ERR_CLR));
        /* TRACE [R3, SPI191][R4, SPI191] */
        /* TRACE [R3, SPI006][R4, SPI006] */
        /* Report error to DEM */
        Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED);
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
    #endif /* End of #if ((SPI_FIFO_MODE == STD_ON) &&
            * (SPI_DEV_ERROR_DETECT == STD_ON))
            */
    #endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON))
            */
  }
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
      && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  else
  #endif
  {
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
    #endif

  }
  /* Sequence is failed. Update sequence result as FAILED */
  Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_FAILED;
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_LoopBackSelfTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform data transmission self test
**                      using loop back mode.
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : None
**
** Registers Used     : CSIGnCTL0, CSIHnCTL0, CSIGnCTL1, CSIHnCTL1, CSIGnCTL2
**                      CSIHnCTL2, CSIGCFG0, CSIGnSTCR0, CSIHnSTCR0, CSIGnTX0H
**                      CSIHnBRS, CSIHCFG0, CSIHnTX0W.
*******************************************************************************/
 #if (SPI_LOOPBACK_SELFTEST == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_LoopBackSelfTest(void)
{

  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainUserBaseAddr;
  P2VAR(Spi_MainOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpMainOsBaseAddr;
  #if (SPI_CSIG_CONFIGURED == STD_ON)
  P2VAR(Spi_CsigOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigOsBaseAddr;
  P2VAR(Spi_CsigUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsigUserBaseAddr;
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2VAR(Spi_CsihOsRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihOsBaseAddr;
  P2VAR(Spi_CsihUserRegs, AUTOMATIC, SPI_CONFIG_DATA) LpCsihUserBaseAddr;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpIntCntlAddress;
  #endif
  Spi_HWUnitType LddHWUnit;
  boolean LblDemReported;
  uint16 LucIndex;
  uint8  LucData;

  LblDemReported = SPI_FALSE;

  /* Initialize number of HW Unit as zero */
  LddHWUnit = SPI_ZERO;
  /* Check for maximum HW Unit configured */
  /* MISRA Violation: START Msg(4:2877)-22 */
  while (SPI_MAX_HW_DETAILS > LddHWUnit)
  /* END Msg(4:2877)-22 */
  {
    /* Get the pointer to the structure of HW Unit information */
    LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

    #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
    /* Clear pending interrupts */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
    /* Register dummy read-write  */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                         (SPI_CLR_INT_REQ));
    /* SYNCP execution */
    EXECUTE_SYNCP();
    #endif
    LpIntCntlAddress = LpHWUnitInfo->pRxImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usRxImrMask)));
    /* END Msg(4:4397)-2 */

    LpIntCntlAddress = LpHWUnitInfo->pTxImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usTxImrMask)));
    /* END Msg(4:4397)-2 */

    LpIntCntlAddress = LpHWUnitInfo->pErrorImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(16, (LpIntCntlAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].usErrorImrMask)));
    /* END Msg(4:4397)-2 */
    #endif

    /* Get the main user base address */
    LpMainUserBaseAddr = LpHWUnitInfo->pHwMainUserBaseAddress;
    /* Get the main OS base address */
    LpMainOsBaseAddr = LpHWUnitInfo->pHwMainOsBaseAddress;

    /* Reset the PWR bit since other registers need to be written */
    LpMainUserBaseAddr->ucMainCTL0 = SPI_ZERO;

    #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
    if (SPI_MAX_NUM_OF_CSIG > LddHWUnit)
    #endif
    {
      #if (SPI_CSIG_CONFIGURED == STD_ON)
      /* Clear the status register */
      LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIG_CLR_STS_FLAGS;

      /* MISRA Violation: START Msg(4:0316)-15 */
      /* Get the OS base address of the HW Unit */
      LpCsigOsBaseAddr = (Spi_CsigOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
      /* END Msg(4:0316)-15 */

      /* Load the control register 1 with Ctl1 reg value of current Job */
      LpMainOsBaseAddr->ulMainCTL1 = SPI_LOOPBACK_ENABLE;

      /* Update the Baud rate and Pre-scalar values from control register2 */
      LpMainOsBaseAddr->usMainCTL2 = SPI_LOOPBACK_CNTRL2_VALUE;

      /* Load back the value to configuration register */
      LpCsigOsBaseAddr->ulCSIGCFG0 = SPI_LOOPBACK_DLS_SETTING;

      /* Load the control register 0 value, setting PWR bit at the same time*/
      LpMainUserBaseAddr->ucMainCTL0 = SPI_SET_DIRECT_ACCESS;

      /* MISRA Violation: START Msg(4:0316)-15 */
      /* Get the user base address of the HW Unit */
      LpCsigUserBaseAddr =
              (Spi_CsigUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
      /* END Msg(4:0316)-15 */

      /* Clear pending interrupts */
       RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      /* Load the loop back test dummy data to TX0W register */
      LpCsigUserBaseAddr->usCSIGTX0H = SPI_LOOPBACK_DATA;

      LucIndex = SPI_ZERO;

      /* Wait in the loop until the communication is stopped */
        while ((SPI_HW_BUSY == (LpMainUserBaseAddr->ulMainSTR0 & SPI_HW_BUSY))
                                               && (SPI_FALSE == LblDemReported))
      {
         LucIndex++;
         /* TRACE [R3, SPI191][R4, SPI191] */
         /* TRACE [R3, SPI006][R4, SPI006] */
         /* Raise production error */
         /* Report error to DEM    */
         if (SPI_LOOP_TIMEOUT <= LucIndex)
         {
           Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
           LblDemReported = SPI_TRUE;
         }
         else
         {
           /* No action required */
         }
      }

      /* Save the received data to a variable */
      LucData = (uint8) LpCsigUserBaseAddr->usCSIGRX0;
      /* Clear pending interrupts */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      /* Reset all registers */
      LpMainUserBaseAddr->ucMainCTL0 = SPI_ZERO;
      LpMainOsBaseAddr->ulMainCTL1 = SPI_ZERO;
      LpMainOsBaseAddr->usMainCTL2 = SPI_ZERO;
      LpCsigOsBaseAddr->ulCSIGCFG0 = SPI_ZERO;
      LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIG_CLR_STS_FLAGS;
      #endif /* #if (SPI_CSIG_CONFIGURED == STD_ON) */
    }
    #if ((SPI_CSIG_CONFIGURED == STD_ON) && (SPI_CSIH_CONFIGURED == STD_ON))
    else
    #endif
    {
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      /* Clear the status register */
      LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIH_CLR_STS_FLAGS;

      /* MISRA Violation: START Msg(4:0316)-15 */
      /* Get the OS base address of the HW Unit */
      LpCsihOsBaseAddr = (Spi_CsihOsRegs *)LpHWUnitInfo->pHwOsBufferAddress;
      /* Get the user base address of the HW Unit */
      LpCsihUserBaseAddr =
                     (Spi_CsihUserRegs *)LpHWUnitInfo->pHwUserBufferAddress;
      /* END Msg(4:0316)-15 */

      /* Load the control register 1 with the value of LoopBack enable */
      LpMainOsBaseAddr->ulMainCTL1 = SPI_LOOPBACK_ENABLE;

      /* Update the Pre-scalar value from control register2 */
      LpMainOsBaseAddr->usMainCTL2 = SPI_LOOPBACK_CSIH_CNTRL2_VALUE;

      /* Update the Baud rate value from BRS register */
      LpCsihOsBaseAddr->usCSIHBRS[SPI_ZERO] = SPI_LOOPBACK_CSIH_BRS0_VALUE;

      /* Initialize CSIH configuration register */
      LpCsihOsBaseAddr->ulCSIHCFG[SPI_ZERO] = SPI_LOOPBACK_DLS_SETTING;

      /* Load Main CTL0 register, setting PWR bit at the same time */
      LpMainUserBaseAddr->ucMainCTL0 = SPI_SET_DIRECT_ACCESS;
      /* Clear pending interrupts */
       RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      /* Load the loop back test dummy data to TX0W register */
      LpCsihUserBaseAddr->ulCSIHTX0W = SPI_LOOPBACK_DATA;

      LucIndex = SPI_ZERO;
      /* Wait in the loop until the communication is stopped */
        while ((SPI_HW_BUSY == (LpMainUserBaseAddr->ulMainSTR0 & SPI_HW_BUSY))
                                               && (LblDemReported == SPI_FALSE))
      {
        LucIndex++;
        /* TRACE [R3, SPI191][R4, SPI191] */
        /* TRACE [R3, SPI006][R4, SPI006] */
        /* Raise production error */
           if (SPI_LOOP_TIMEOUT <= LucIndex)
        {
          Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
          LblDemReported = SPI_TRUE;
        }
        else
        {
          /* No action required */
        }
      }

      /* Save the received data to a variable */
      LucData = (uint8) LpCsihUserBaseAddr->usCSIHRX0H;
      /* Clear pending interrupts */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      /* Reset all registers */
      LpMainUserBaseAddr->ucMainCTL0 = SPI_ZERO;
      LpMainOsBaseAddr->ulMainCTL1 = SPI_ZERO;
      LpMainOsBaseAddr->usMainCTL2 = SPI_ZERO;
      LpCsihOsBaseAddr->usCSIHBRS[SPI_ZERO] = SPI_ZERO;
      LpCsihOsBaseAddr->ulCSIHCFG[SPI_ZERO] = SPI_ZERO;
      LpMainUserBaseAddr->usMainSTCR0 = SPI_CSIH_CLR_STS_FLAGS;
      #endif /* #if (SPI_CSIH_CONFIGURED == STD_ON) */
    }
      if (SPI_LOOPBACK_DATA != LucData)
    {
      /* TRACE [R3, SPI191][R4, SPI191] */
      /* TRACE [R3, SPI006][R4, SPI006] */
      Dem_ReportErrorStatus(SPI_E_SELF_TEST_FAILURE, DEM_EVENT_STATUS_FAILED);
      LblDemReported = SPI_TRUE;
    }
    else
    {
       /* No action required */
    }
    /* Increment HW Unit index */
    /* MISRA Violation: START Msg(4:2984)-16 */
    LddHWUnit++;
    /* END Msg(4:2984)-16 */
  }/* End of while (LddHWUnit < SPI_MAX_HW_DETAILS) */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_LOOPBACK_SELFTEST == STD_ON) */
/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
