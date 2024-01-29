/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Driver.h                                                */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the external declarations of global SPI Driver functions*/
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
 * V1.0.1:  27-Nov-2012  : As per SCR 042, macro SPI_HWUNIT_ASYNCHRONOUS check
 *                         is added.
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, Extern declaration variable are
 *                         changed APIs Spi_ReceiveISR, Spi_ProcessChannel,
 *                         Spi_TransmitISR.
 * V1.1.1:  18-Mar-2013  : As per SCR 113 for Mantis issue 5420, the following
 *                         change is made:
 *                         Extern declaration of the new function
 *                         Spi_HWInitiateHighPrioCommnTx() is added.
 *
 * V1.1.2:  13-Jun-2013  : As per SCR 181, CSIG_Check is updated to CSIG_Check1
 *                         for SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION.
 *
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 following changes are made:
 *                          1. 'Spi_HWInitiateTx' is renamed to
 *                             'Spi_InitiateJobTx' and 'LucCommDataIndex'.
 *                          2. Spi_ProcessChannel, Spi_ReceiveISR functions are
 *                             updated.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.2.2:  23-Oct-2013  : As per CR 256, for the mantis issues #16631 and
 *                         #13117, following changes are made:
 *                         1.All ISR function declaration and definitions
 *                           are modified to SPI_START_SEC_CODE_FAST.
 *
 * V1.2.3:  19-Nov-2013  :  As per CR 321 for the mantis issues #16636, in
 *                          Api Spi_TransmitCancelISR() pre-compile check is
 *                          updated.
 *
 * V1.2.4:  15-Jan-2014  :  As per CR 330, following changes are made:
 *                          1. Updated as per C coding guideline.
 *                          2. Copyright information is updated.
 *
 * V1.2.5:  28-Mar-2014  : As per CR 424 for the mantis issues #19537, following
 *                         changes are made:
 *                         1. Pre-compile check is updated for the following
 *                            APIs: Spi_InitiateJobTx, Spi_ReceiveISR,
 *                            Spi_TransmitISR and Spi_ComErrorISR.
 *
 * V1.2.6:  28-May-2014  : As per CR 507, extern declaration of API
 *                         Spi_LoopBackSelfTest is added under pre-compile
 *                         'SPI_LOOPBACK_SELFTEST' check.
 *
 * V1.2.7: 26-Jun-2014   : As per CR 532, Memory class for the following APIs
 *                         are changed: Spi_HWMainFunction_Handling,
 *                         Spi_HWDisableInterrupts and Spi_HWCancel.
 *
 * V1.2.8: 15-Jul-2014   : As per CR 550, pre-compile checks for extern
 *                         declarations for the following APIs are updated:
 *                         Spi_HWTransmitSyncJob, Spi_InitiateJobTx,
 *                         Spi_ReceiveISR, Spi_ProcessSequence, Spi_ComErrorISR,
 *                         Spi_TransmitISR, Spi_HWMainFunction_Handling,
 *                         Spi_HWActivateCS(), Spi_HWDeActivateCS(),
 *                         Spi_DmaISR() and Spi_TransmitCancelISR().
 *
 * V1.2.9:   10-Feb-2015 : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. Copyright Information is Updated.
 */
/******************************************************************************/
#ifndef SPI_DRIVER_H
#define SPI_DRIVER_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
#include "Spi_PBTypes.h"
#include "Spi_Ram.h"
#if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
#include "SchM_Spi.h"
#endif
/* TRACE [R3, SPI174][R4, SPI174] */
/* TRACE [R3, SPI158][R4, SPI158] */
#include "Dem.h"
/* TRACE [R3, SPI029][R4, SPI029] */
#if (SPI_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION*/
#define SPI_DRIVER_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_DRIVER_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_DRIVER_AR_RELEASE_REVISION_VERSION \
                                              SPI_AR_RELEASE_REVISION_VERSION

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)
/* AUTOSAR specification version information */
#define SPI_DRIVER_AR_MAJOR_VERSION  SPI_AR_MAJOR_VERSION_VALUE
#define SPI_DRIVER_AR_MINOR_VERSION  SPI_AR_MINOR_VERSION_VALUE
#define SPI_DRIVER_AR_PATCH_VERSION  SPI_AR_PATCH_VERSION_VALUE
#endif /*END of SPI_AR_VERSION*/

/* File version information */
#define SPI_DRIVER_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_DRIVER_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWInit(void);
#endif

extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWDeInit(void);

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWWriteIB(Spi_ChannelType Channel,
           P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWReadIB(Spi_ChannelType Channel,
           P2VAR(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr);
#endif

#if (SPI_IB_CONFIGURED == STD_ON)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_InternalWriteIB(Spi_ChannelType Channel
           , P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr);
#endif

#if ((SPI_CSIG_CONFIGURED == STD_ON) || \
     ((SPI_CSIH_CONFIGURED == STD_ON) && \
      (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWActivateCS
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST)
                             LpJobConfiguration, uint8 LucLoopCount);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWDeActivateCS
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST)
                                                  LpJobConfiguration);
#endif

/* TRACE [R3, SPI029][R4, SPI029] */
#if (SPI_HW_STATUS_API == STD_ON)
extern FUNC(Spi_StatusType, SPI_PRIVATE_CODE) Spi_HWUnitStatus
                                                     (Spi_HWUnitType HWUnit);
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_HWTransmitSyncJob
         (P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig);
#endif

#if (SPI_DMA_MODE_ENABLE == STD_ON)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_TxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpTxData,
 Spi_NumberOfDataType LddNoOfBuffers, uint8 LucDataType);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_RxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpRxData,
 Spi_NumberOfDataType LddNoOfBuffers, uint8 LucDataType);

extern FUNC(void, SPI_FAST_CODE) Spi_DmaISR(uint8 LucDmaUnit);
#endif

/* Internal APIs for enhanced (Synchronous/Asynchronous) SPI Handler/Driver */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
       (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

extern FUNC(void, SPI_PRIVATE_CODE) Spi_InitiateJobTx
                                                 (Spi_JobType LddJobListIndex);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessSequence
                   (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannel
     (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

extern FUNC(void, SPI_FAST_CODE) Spi_ComErrorISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
extern FUNC(void, SPI_FAST_CODE) Spi_TransmitISR
     (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON))
extern FUNC(void, SPI_FAST_CODE) Spi_ReceiveISR
      (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
    ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
extern FUNC(void, SPI_FAST_CODE) Spi_TransmitCancelISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
FUNC(void, SPI_PRIVATE_CODE) Spi_HWCancel(uint8 LucIndex);
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
             (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWMainFunction_Handling(void);
#endif

#if (SPI_LEVEL_DELIVERED == SPI_TWO)
extern FUNC(void, SPI_PUBLIC_CODE) Spi_HWDisableInterrupts(void);
#endif

#if (SPI_LOOPBACK_SELFTEST == STD_ON)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_LoopBackSelfTest(void);
#endif

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* SPI_DRIVER_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
