/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_PBTypes.h                                               */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions for post-build time parameters     */
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
 * V1.0.0:  29-Aug-2012  : Initial Version.
 *
 * V1.0.1:  21-Sep-2012  : As per SCR 021,
 *                         1.IMR register mask value changed from
 *                           uint8 to uint16.
 *                         2.Boolean to specify whether the Hardware unit
 *                           is CSIG or CSIH is added in structure
 *                           Spi_JobConfigType
 * V1.0.2:  27-Nov-2012  : As per SCR 042, type declaration for element
 *                         blHwunit_type changed in STag_Spi_JobConfigType
 *                         structure.
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, following changes are made
 *                         1.Pointer pDefaultData is replaced with variable
 *                           ddDefaultData in STag_Spi_ChannelPBConfigType
 *                           structure
 *                         2.Pre-compile condition SPI_HW_PRIORITY_ENABLED is
 *                           added for structure element blIsHighPriority and
 *                           copyright information is updated.
 *
 * V1.1.1:  13-Jun-2013  : As per SCR 181, SchM_Enter_SPI_##Exclusive_Area()
 *                         is updated to SchM_Enter_Spi_##Exclusive_Area() for
 *                         SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION.
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 following changes are made:
 *                          1. Pre compile check
 *                             'SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED' is added.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * v1.2.2:  05-Sep-2013  : As per CR 243 for the mantis issue #8421, the
 *                         following changes are made:
 *                          1. The call back header file is added in include
 *                             section.
 *                          2. The element 'pSpiJobNotification' is added in
 *                             structure 'STag_Spi_JobConfigType'.
 *                          3. The elements 'pSpiSeqEndNotification',
 *                             'pSpiSyncSeqEndNotification' and
 *                             'pSpiSeqStartNotification' are added in structure
 *                             'STag_Spi_SequenceConfigType'.
 *
 * V1.2.3:  23-Oct-2013  : As per CR 256 for the mantis issue #16631, the
 *                         following changes are made:
 *                          1. Pre-compile checks are updated for
 *                             'Spi_GaaChannelIBRead' and
 *                             'Spi_GaaChannelIBWrite'.
 *
 * V1.2.4:  15-Jan-2014  : As per CR 330 for mantis issue #17168, following
 *                         changes are made:
 *                          1. The structure STag_Spi_ChannelPBConfigType is
 *                             updated for 'ucChannelInfo'.
 *                          2. Updated as per C coding guideline.
 *
 * V1.2.5:  05-Feb-2014  : As per CR 398 for the mantis issue #19208,
 *                         Header file updated as part of merge activity.
 *
 * V1.2.6:  02-Jun-2014  : As per CR 507, file is updated as per C coding
 *                         guideline.
 *
 * V1.2.7:  08-Jul-2014  : As per CR 550, for mantis #22328 following changes
 *                         are made:
 *                         1. Pointers 'pDmaIntCntlReg', 'pDmaDTFRRegAddr' and
 *                            'ulTxRxRegAddress' are declared as volatile.
 *                         2. Pre-compile check is added for the structure
 *                            element 'blHWUnitDmaMode' in 'Spi_JobConfigType'
 *                            structure.
 *                         3. Structure STag_Spi_DmaRegs is updated to remove
 *                            usDSCn, usDDCn, usDNSAnL, usDNSAnH and replaced
 *                            with the aaReserved1, aaReserved3, aaReserved4
 *                            aaReserved5, aaReserved6, aaReserved7 and
 *                            aaReserved8.
 *
 * V1.2.8  09-Sep-2014  : As per CR 601, following changes are made:
 *                         1. 'Spi_JobConfigType', 'Spi_ChannelPBConfigType'
 *                            structure is aligned to prevent
 *                            slack bytes.
 *                         2. MISRA C RULE VIOLATION section is added.
 *                         3. MISRA rules violation messages are added.
 *
 * V1.2.9  31-Dec-2014  :  Updated as per mantis #24187:  Error in Critical
 *                           Section Macros during Static Analysis by PC-Lint
 *                           is fixed
 *
 * V1.2.10:   10-Feb-2015 : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. File is updated for C coding guidelines.
 *                         3. Copyright Information is Updated.
 * V1.2.11:   18-Mar-2015 : As part of issue fix for mantis #24305
 *                          Memory mapping of 'Spi_GaaChannelIBRead' and
 *                          'Spi_GaaChannelIBWrite' has been updated.
 *
 */
/******************************************************************************/

#ifndef SPI_PBTYPES_H
#define SPI_PBTYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
/* Included for Spi type declarations */
#include "Spi_Types.h"
#include "SchM_Spi.h"
#include "Spi_Cbk.h"
#if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
#include "SchM_Spi.h"
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)
#define SPI_PBTYPES_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_PBTYPES_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                              SPI_AR_RELEASE_REVISION_VERSION

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)
/* AUTOSAR specification version information */
#define SPI_PBTYPES_AR_MAJOR_VERSION  SPI_AR_MAJOR_VERSION_VALUE
#define SPI_PBTYPES_AR_MINOR_VERSION  SPI_AR_MINOR_VERSION_VALUE
#define SPI_PBTYPES_AR_PATCH_VERSION  SPI_AR_PATCH_VERSION_VALUE
#endif /*END of SPI_AR_VERSION*/

/* File version information */
#define SPI_PBTYPES_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_PBTYPES_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3453) A function could probably be used instead of this */
/*                 function-like macro.                                       */
/* Rule          : MISRA-C:2004 Rule 19.7                                     */
/* Justification : The macros are used to differentiate the SchM functions    */
/*                 for common Autosar R3.2 and R4.0 implementation.           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3453)-1 and                           */
/*                 END Msg(4:3453)-1 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      SchM Critical Section Protection Macros               **
*******************************************************************************/
#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_ENTER_CRITICAL_SECTION(Exclusive_Area) \
      SchM_Enter_Spi_##Exclusive_Area()

#define SPI_EXIT_CRITICAL_SECTION(Exclusive_Area) \
      SchM_Exit_Spi_##Exclusive_Area()

#elif (SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
/* MISRA Violation: START Msg(4:3453)-1 */
#define SPI_ENTER_CRITICAL_SECTION(Exclusive_Area) \
      SchM_Enter_Spi(Exclusive_Area);

#define SPI_EXIT_CRITICAL_SECTION(Exclusive_Area) \
      SchM_Exit_Spi(Exclusive_Area);
/* END Msg(4:3453)-1 */
#endif

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/* Definition of chip select type */
 #if(SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
typedef enum ETagSpi_CSType
{
  SPI_DISABLE_CS = 0,
  SPI_GPIO_CS,
  SPI_PERIPHERAL_ENGINE_CS
} Spi_CSType;
#endif /*End of #if(SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)*/

/* TRACE [R3, SPI063][R4, SPI063] */
/* TRACE [R3, SPI104][R4, SPI104_Conf] */
/* Structure for channel configuration */
typedef struct STag_Spi_ChannelPBConfigType
{
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* TRACE [R3, SPI203][R4, SPI203_Conf] */
  /* TRACE [R3, SPI164][R4, SPI164] */
  /* Default value of the channel */
  Spi_DataType ddDefaultData;
  /* Index of the buffer */
  Spi_NumberOfDataType ddBufferIndex;
  /* Number of IB or maximum size of EB */
  /* TRACE [R3, SPI204][R4, SPI204_Conf] */
  /* TRACE [R3, SPI205][R4, SPI205_Conf] */
  Spi_NumberOfDataType ddNoOfBuffers;
  #else
  /* Index of the buffer */
  Spi_NumberOfDataType ddBufferIndex;
  /* Number of IB or maximum size of EB */
  /* TRACE [R3, SPI202][R4, SPI202_Conf] */
  Spi_NumberOfDataType ddNoOfBuffers;
  /* Default value of the channel */
  Spi_DataType ddDefaultData;
  #endif
  uint8 ucDLSSetting;
  /*
   * Type of the data according to data width; SPI_TYPE_UINT8 for uint8,
   * 1 for SPI_TYPE_UINT16 or 2 for SPI_TYPE_UINT32
   */
  uint8 ucDataType;
  /*
   * Channel buffer type - '0' for IB, '1' for EB, >1 for HW Buffer
   * For values greater than 1, the value is 2 + the index
   * of HW Unit (CSIH) in Spi_HWUnitInfo type structure.CSIG does
   * not have hardware buffers
   */
  /* TRACE [R3, SPI201][R4, SPI201_Conf] */
  uint8 ucChannelBufferType;
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
  /*
   * Value to check if the channel is last channel in the job (0x01) or
   * last channel (0x02) in the sequence
   */
  uint8 ucChannelInfo;
  /* Value of chip select of the corresponding job */
  uint8 ucCSInfo;
  #endif
  /* TRACE [R3, SPI206][R4, SPI206_Conf] */
  /* Data direction - SPI_TRUE for LSB and SPI_FALSE for MSB */
  boolean blDirection;
  /* Value to check if data length is greater than 16 bits */
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  boolean blEDLEnabled;
  #endif
} Spi_ChannelPBConfigType;

/* TRACE [R3, SPI105][R4, SPI105_Conf] */
/* Structure for job configuration */
typedef struct STag_Spi_JobConfigType
{
  /* TRACE [R3, SPI215][R4, SPI215_Conf] */
  /* TRACE [R3, SPI066][R4, SPI066] */
  /* TRACE [R3, SPI009][R4, SPI009] */
  /* TRACE [R3, SPI212][R4, SPI212_Conf] */
  /* TRACE [R4, SPI263] */
  /* Pointer to list of channels */
  /* TRACE [R3, SPI166][R4, SPI166] */
  /* TRACE [R4, SPI368] */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST)pChannelList;
  /* Address of the port group for chip select */
  P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA)pPortGrpRegAddress;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Pointer to callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiJobNotification)(void);
  #endif
  /* Initialization value for main control register 1 without SLIT */
  uint32 ulMainCtl1Value;
  /* Mask for the port pin */
  uint32 ulPortPinMask;
  /* Value for configuration register (for both CSIG and CSIH) */
  /* TRACE [R3, SPI213][R4, SPI213_Conf] */
  /* TRACE [R3, SPI211][R4, SPI211_Conf] */
  uint32 ulConfigRegValue;
  #if (SPI_FIFO_MODE == STD_ON)
  /* Total number of buffers in the job */
  Spi_NumberOfDataType ddNoOfBuffers;
  #endif
  /* Value for control register 2 */
  uint16 usCtl2Value;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Value for memory Ctrl Register 0 */
  uint16 usMCtl0Value;
  #endif
  /* Number of channels in the list */
  /* TRACE [R4, SPI233_Conf] */
  Spi_ChannelType ddNoOfChannels;
  /* Offset of Hardware unit structure */
  /* TRACE [R3, SPI217][R4, SPI217_Conf] */
  /* TRACE [R3, SPI216][R4, SPI216_Conf] */
  Spi_HWUnitType ddHWUnitIndex;
  #if(SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
  /*
   * To check if the chip select is using external port pins (GPIO)
   * or using CS_VIA_PERIPHERAL_ENGINE or CS is not at all used
   */
  /* TRACE [R4, SPI239_Conf] */
  Spi_CSType ddCSType;
  #endif
  /* Loop count for clock to CS */
  uint8 ucClk2CsLoopCnt;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  uint8 ucCSArrayIndex;
  /* Chip Select Index */
  uint8 ucNoOfCS;
  uint8 ucChipSelect;
  #endif
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  uint8 ucTxDmaDeviceIndex;
  uint8 ucRxDmaDeviceIndex;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* TRACE [R3, SPI220][R4, SPI220_Conf] */
  /* TRACE [R3, SPI093][R4, SPI093] */
  /* Job priority */
  uint8 ucJobPriority;
  #endif
  /* TRACE [R3, SPI210][R4, SPI210_Conf] */
  /* Polarity of chip select */
  boolean blCsPolarity;
  /* All Channels properties for CSIH are same*/
  boolean blIsChannelPropSame;
  /*
   * Whether the HW Unit is using  DMA mode (SPI_TRUE) or
   * Normal mode (SPI_FALSE) if DMA is enabled
   */
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  boolean blHWUnitDmaMode;
  #endif
} Spi_JobConfigType;

/* TRACE [R3, SPI106][R4, SPI106_Conf] */
/* TRACE [R3, SPI064]][R4, SPI064]] */
/* Structure for sequence configuration */
typedef struct STag_Spi_SequenceConfigType
{
  #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
  /* TRACE [R3, SPI193][R4, SPI193] */
  /* Pointer to start sequence callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiSeqEndNotification)(void);
  #endif
  /* TRACE [R4, SPI265] */
  #if ((SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED == STD_ON) && \
                           ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
                           (SPI_LEVEL_DELIVERED == SPI_TWO)))
  /* Pointer to start sequence callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiSyncSeqEndNotification)(void);
  #endif
  #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
  /* Pointer to start sequence callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiSeqStartNotification)(void);
  #endif
  /* Number of jobs in the list */
  Spi_JobType ddNoOfJobs;
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
       (SPI_FIFO_MODE == STD_ON))
  /* Total number of buffers in the sequence */
  Spi_NumberOfDataType ddNoOfBuffers;
  #endif
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_NumberOfDataType ddNxtNotifyIndex;
  #endif
  /* Index of job list of the first job */
  Spi_JobType ddJobListIndex;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Index of the status byte value (ROM area) */
  uint16 usStsValueStartByteIdx;
  /* Index of the status byte RAM area */
  uint16 usStsCheckByteIdx;
  /* Index of start byte of RAM area from which status has to be updated */
  uint16 usStsUpdateStartByteIdx ;
  #endif
  /* HW Unit details of jobs in the sequence */
  uint16 usHWListIndex;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Number of status byte value */
  uint8 ucNoOfStsByteValue;
  /* Status byte mask value */
  uint8 ucStsByteMask;
  #endif
  /* TRACE [R3, SPI125][R4, SPI125] */
  /* TRACE [R3, SPI126][R4, SPI126] */
  #if ((SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON) && \
       ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
        (SPI_LEVEL_DELIVERED == SPI_TWO)))
  /* Sequence to be interrupted or not */
  boolean blInterruptibleSequence;
  #endif
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /*
   * Whether the sequence is high priority; If sequence is high priority, the
   * value is SPI_TRUE
   */
  boolean blIsHighPriority;
  #endif
} Spi_SequenceConfigType;

/* Structure for job configuration */
typedef struct STag_Spi_JobListType
{
  /* Job Index */
  /* TRACE [R3, SPI219][R4, SPI219_Conf] */
  Spi_JobType ddJobIndex;
  /* Index of sequence in which the job is configured */
  /* TRACE [R3, SPI168][R4, SPI168] */
  /* TRACE [R4, SPI358] */
  Spi_SequenceType ddSequenceIndex;
  /* Counter for number of repeated jobs */
  uint8 ucJobCount;
  /* Flag to know if this is last job in the sequence */
  boolean blIsLastJob;
} Spi_JobListType;

/*******************************************************************************
** Structure for DMAC Registers, which are used to read or write              **
** the status or configured values for proper working of the DMAC             **
*******************************************************************************/
#if (SPI_DMA_MODE_ENABLE == STD_ON)
#if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
typedef struct STag_Spi_DmaRegs
{
  /* Source Address Register */
  uint32 volatile ulDSAn;
  /* Destination Address Register */
  uint32 volatile ulDDAn;
  /* Transfer Count Register */
  uint32 volatile ulDTCn;
  /* Transfer Control Register */
  uint32 volatile ulDTCTn;
  /* Reload Source Address Register */
  uint32 volatile ulDRSAn;
  /* Reload Destination Address Register */
  uint32 volatile ulDRDAn;
  /* Reload Transfer Count Register */
  uint32 volatile ulDRTCn;
  /* Transfer Count Compare Register */
  uint32 volatile ulDTCCn;
  /* Channel Operation Enable Setting Register */
  uint32 volatile ulDCENn;
  /* Transfer Status Register */
  uint32 volatile ulDCSTn;
  /* Transfer Status Set Register */
  uint32 volatile ulDCSTSn;
  /* Transfer Status Clear Register */
  uint32 volatile ulDCSTCn;
  /* Trigger factor Setting Register */
  uint32 volatile ulDTFRn;
  /* Transfer Request Status Register */
  uint32 volatile ulDTFRRQn;
  /* Transfer Request Clear Register*/
  uint32 volatile ulDTFRRQCn;
} Spi_DmaAddrRegs;
#else
typedef struct STag_Spi_DmaRegs
{
  /* Address for source address register */
  uint32 volatile ulDSAn;
  /* Source chip select register */
  uint16 aaReserved1;
  uint16 aaReserved2;
  /* Address for next lower source address register */
  uint16 aaReserved3;
  /* Address for next higher source address register */
  uint16 aaReserved4;
  uint16 aaReserved5[2];
  /* Address for lower destination address register */
  uint32 volatile ulDDAn;
  /* Destination chip select register */
  uint16 aaReserved6;
  uint16 aaReserved7;
  /* Address for next lower destination address register */
  uint16 volatile usDNDAnL;
  /* Address for next higher destination address register */
  uint16 volatile usDNDAnH;
  uint16 aaReserved8;
  /* Transfer count register */
  uint16 volatile usDTCn;
  /* Transfer next count register */
  uint16 volatile usDNTCn;
  uint16 volatile usDTCCn;
  /* Transfer control register */
  uint16 volatile usDTCTn;
  /* Transfer status register */
  uint8 volatile ucDTSn;
} Spi_DmaAddrRegs;
#endif
#endif

/* Structure for DMA channel configuration */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
typedef struct STag_Spi_DmaUnitConfig
{
  /* Address for DMA control registers */
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA)pDmaCntlRegBase;
  /* Address for DMA interrupt control registers */
  P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA)pDmaImrIntCntlReg;
  /* Clear the Pending interrupts */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pDmaIntCntlReg;
  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_ONE)
  /* Address for DTFR control registers */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pDmaDTFRRegAddr;
  #endif
  /* Tx Register address */
  volatile uint32 ulTxRxRegAddress;
  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
  /* DTFR register value */
  uint32 usDmaDtfrRegValue;
  #else
  /* DTFR register value */
  uint16 usDmaDtfrRegValue;
  /* Mask value to clear corresponding interrupt flag */
  uint16 usDmaChannelMask;
  #endif
  /* Mask for IMR register */
  uint16 usDmaImrMask;
  /* will be 0 if Tx channel, 1 if Rx channel */
  boolean blComDmaChannel;
} Spi_DmaUnitConfig;
#endif

/*******************************************************************************
**                      Global Declarations                                   **
*******************************************************************************/

/* TRACE [R3, SPI092][R4, SPI275] */
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array of Channel structure array */
extern CONST(Spi_ChannelPBConfigType, SPI_CONST) Spi_GstChannelConfig[];

/* Global array of Job structure array */
extern CONST(Spi_JobConfigType, SPI_CONST) Spi_GstJobConfig[];

/* Global array of Sequence structure array */
extern CONST(Spi_SequenceConfigType, SPI_CONST) Spi_GstSeqConfig[];

/* Global array of Channel list */
extern CONST(Spi_ChannelType, SPI_CONST) Spi_GaaChannelList[];

/* Global array of Job list */
extern CONST(Spi_JobListType, SPI_CONST) Spi_GstJobList[];
/* END Msg (4:3864)-1 */

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
/* Declaration for DMA unit configuration */
extern CONST(Spi_DmaUnitConfig, SPI_CONST) Spi_GstDmaUnitConfig[];

/* Global array for DMA mapping to the SPI HW Unit instance */
extern CONST(uint8, SPI_CONST) Spi_GaaDmaHwUnitList[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Sequence status value array */
extern CONST(uint8, SPI_CONST)Spi_GaaSeqStatusValue[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array of job notification index */
extern CONST(Spi_NumberOfDataType, SPI_CONST) Spi_GaaNxtNotifyBuffer[];
/* END Msg (4:3864)-1 */
#endif

#if (SPI_CSIH_CONFIGURED == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
extern CONST(uint8, SPI_CONST) Spi_GaaCsIndex[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM bit array for status of sequences */
extern VAR(uint8, SPI_DATA) Spi_GaaSeqStatusBitArray[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_DATA_LOC_RAM1
#include "MemMap.h"

#if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
    ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) \
                                                  || (SPI_FIFO_MODE == STD_ON)))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array for internal read buffer data of channels */
extern VAR(Spi_DataType, SPI_NOINIT_DATA) Spi_GaaChannelIBRead[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
    ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) \
                                        || (SPI_HW_PRIORITY_ENABLED == STD_ON)))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array for internal write buffer data of channels */
extern VAR(Spi_DataType, SPI_NOINIT_DATA) Spi_GaaChannelIBWrite[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_DATA_LOC_RAM1
#include "MemMap.h"


/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#endif /* SPI_PBTYPES_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
