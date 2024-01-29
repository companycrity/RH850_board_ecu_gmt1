/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_LTTypes.h                                               */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions for link time parameters           */
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
 * V1.0.1:  21-Sep-2012  : As per SCR 021, IMR register address pointers and
 *                         mask values changed from uint8 to uint16.
 *
 * V1.0.2:  27-Nov-2012  : As per SCR 042, macro SPI_HWUNIT_ASYNCHRONOUS check
 *                         is added.
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, the following changes are made
 *                         1.Pre-compile condition SPI_HW_PRIORITY_ENABLED is
 *                           added for structure elements
 *                           pTxCancelIntCntlAddress, pTxCancelImrAddress.
 *                         2.Macros SPI_DLS_MASK,  SPI_NO_JOB, SPI_NO_SEQ
 *                           SPI_SET_JOBE are added and pre-compile conditions
 *                           are updated.
 *                         3.Copyright is updated.
 *
 * V1.1.1:  20-May-2013  : As Per SCR 168 for the mantis issue #9319, the
 *                         following change is made:
 *                         1.CSIH structure STag_Spi_CsihOsRegs is updated for
 *                           baud rate registers.
 *                         2.Macro SPI_CSIH_BRS_SELECT_MASK is added for
 *                           baud rate selection.
 *
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 following changes are made:
 *                          1. New structures 'Spi_DualBufferCurrentCommData',
 *                             Spi_SyncSeqEndFuncType are added for Dual Buffer
 *                             Mode and Synchronous End Notification.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, Following changes are made:
 *                          1. As part of SVN merge activity the project name
 *                             and environment section is updated.
 *                          2. Structure STag_Spi_CsihUserRegs and
 *                             STag_Spi_CsihOsRegs are updated.
 *
 * V1.2.2:  05-Sep-2013  : As per CR 243 for the mantis issue #8421, the
 *                         following changes are made:
 *                          1. The structures STag_Spi_JobFuncType,
 *                             STag_Spi_SeqEndFuncType,
 *                             STag_Spi_SyncSeqEndFuncType and
 *                             STag_Spi_SeqStartFuncType are removed from
 *                             Global data Types section.
 *                          2. The Global data Spi_GstJobFunc,
 *                             Spi_GstSeqEndFunc, Spi_GstSyncSeqEndFunc
 *                             and Spi_GstSeqStartFunc are removed from Extern
 *                             declarations for Global Data section.
 *
 * V1.2.3:  23-Oct-2013  : As per CR 256 for the mantis issue #16631, the
 *                         following changes are made:
 *                          1. Pre-compile check is updated for
 *                             'Spi_GaaJobQueue'.
 *
 * V1.2.4:  15-Jan-2014  : As per CR 330 for the mantis issue #9799, the
 *                         following changes are made:
 *                          1. The Structure STag_Spi_HWUnitInfo is updated.
 *                          2. Copyright information is updated.
 *                          3. Updated as per C coding guideline.
 *
 * V1.2.5:  05-Feb-2014  : As per CR 398 for the mantis issue #19208,
 *                         Header file updated as part of merge activity.
 *
 * V1.2.6:  28-Mar-2014  : As per CR 424 for the mantis issue #18651 and #20316,
 *                         following macros are removed: SPI_INVALID_HWUNIT,
 *                         SPI_MAX_HW_UNIT, SPI_TX_RX_BUFFER_PTR and
 *                         'RELOC_INTR_VECT_MASK'.
 *
 * V1.2.7:  05-May-2014  : As per CR 507 for mantis issues #20849, 21647 and
 *                         #9799 following changes are made:
 *                         1. The macro 'SPI_CSRI_FLAG_MASK' is added to mask
 *                            the CSIHnCSRI bit of CTL1 register.
 *                         2. The macro 'SPI_DMA_BLOCK_SETTINGS' is added to
 *                            switch DMA type two to Block mode when the
 *                            configured mode is FIFO.
 *                         3. The macros 'SPI_LOOPBACK_ENABLE',
 *                            'SPI_LOOPBACK_CNTRL2_VALUE',
 *                            'SPI_LOOPBACK_CSIH_CNTRL2_VALUE',
 *                            'SPI_LOOPBACK_DLS_SETTING',
 *                            'SPI_LOOPBACK_MEMORY_SETTING',
 *                            'SPI_LOOPBACK_CSIH_BRS0_VALUE',
 *                            'SPI_LOOPBACK_ERROR_MASK',
 *                            'SPI_LOOPBACK_SET_MEMORY_ACCESS',
 *                            'SPI_LOOPBACK_DATA' and
 *                            'SPI_LOOPBACK_VALIDATE_MASK' are added for self
 *                             test functionality.
 *                         4. Value of macro 'SPI_CSIG_CSIH_BUSY' is updated.
 *                         5. Pre-compile check SPI_LOOPBACK_SELFTEST == STD_ON
 *                            is updated for the structure Spi_CsihOsRegs to
 *                            support loop back functionality.
 *                         6. Macro SPI_CLEAR_PENDING_INTR_MASK is deleted.
 *                         7. Updated as per C coding guideline.
 *                         8. The values of following Macros:
 *                            'SPI_DMA_BLOCK_SETTINGS',
 *                            'SPI_TYPE_UINT8 SPI_TYPE_UINT16',
 *                            'SPI_DIRECT_ACCESS_MODE_CONFIGURED',
 *                            'SPI_FIFO_MODE_CONFIGURED',
 *                            'SPI_DUAL_BUFFER_MODE_CONFIGURED',
 *                            'SPI_TX_ONLY_MODE_CONFIGURED',
 *                            'SPI_LOOPBACK_CNTRL2_VALUE',
 *                            'SPI_LOOPBACK_CSIH_CNTRL2_VALUE' and
 *                            'SPI_LOOPBACK_MEMORY_SETTING' are updated as per
 *                             its data width.
 *
 * V1.2.8:  08-Jul-2014  : As per CR 550 for mantis issues #22312, #22324 and
 *                         #22328 following changes are made:
 *                         1. Pointers to registers addresses are declared with
 *                            volatile declaration.
 *                         2. New macros 'SPI_CSIG_CLR_STS_FLAGS' and
 *                            'SPI_CSIH_CLR_STS_FLAGS' are added to access to
 *                            the registers CSIGnSTCR0 and CSIHnSTCR0.
 *                         3. Pre-compile check is updated for structure
 *                            'STag_Spi_CsihUserRegs' and Spi_GaaJobQueue.
 *                         4. Following macro are removed:
 *                            SPI_LOOPBACK_MEMORY_SETTING,
 *                            SPI_LOOPBACK_ERROR_MASK,
 *                            SPI_LOOPBACK_SET_MEMORY_ACCESS and
 *                            SPI_LOOPBACK_VALIDATE_MASK.
 *
 * V1.2.9:  24-Aug-2014  : As per CR 601 for mantis issues #22289 following
 *                         changes are made:
 *                         1. New macros 'SPI_FIFO_BUFFER_EMPTY',
 *                            'SPI_FIFO_BUFFER_FULL', 'SPI_FIFO_BUFFER_UNINIT',
 *                            'SPI_FIFO_TX_INDEX', 'SPI_FIFO_RX_INDEX' and
 *                            'SPI_FIFO_SIZE'.
 *                         2. New structure element 'pCurrentRxData',
 *                            'pNextTxData', 'pCurrentRxChannelList'
 *                            'pCurrentTxChannelList', 'ddNoOfTxBuffers',
 *                            'ddNoOfRxBuffers', 'ddNoOfRxChannels'and
 *                            'ddNoOfTxChannels' are added in
 *                            'Spi_FifoCurrentCommData'.
 *                         3. Suffix 'U' is added for all scalar values.
 *                         4. MISRA C RULE VIOLATION section is added.
 *                         5. MISRA rules violation messages are added.
 *                         6. As per mantis #25333, definition for
 *                            SPI_DMA_32BIT_RX_SETTINGS and
 *                            SPI_DMA_32BIT_TX_SETTINGS added.
 *
 * V1.2.10:   10-Feb-2015 : As a part of Merging Activity, for the mantis#26024
 *                          following changes are made:
 *                          1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                          2. File is updated for C coding guidelines.
 *                          3. Copyright Information is Updated.
 *
 * V1.2.11:   07-May-2015 : As per mantis #27772, definition for
 *                          SPI_DMA_32BIT_RX_SETTINGS and
 *                          SPI_DMA_32BIT_TX_SETTINGS are added.
 */
/******************************************************************************/

#ifndef SPI_LTTYPES_H
#define SPI_LTTYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
#include "Spi_Cbk.h"
#include "RH850_Types.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)
#define SPI_LTTYPES_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_LTTYPES_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_LTTYPES_AR_RELEASE_REVISION_VERSION SPI_AR_RELEASE_REVISION_VERSION

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)
#define SPI_LTTYPES_AR_MAJOR_VERSION  SPI_AR_MAJOR_VERSION_VALUE
#define SPI_LTTYPES_AR_MINOR_VERSION  SPI_AR_MINOR_VERSION_VALUE
#define SPI_LTTYPES_AR_PATCH_VERSION  SPI_AR_PATCH_VERSION_VALUE
#endif

/* File version information */
#define SPI_LTTYPES_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_LTTYPES_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION

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

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0750)  A union type specifier has been define           */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : To access the lower and higher order byte individually and */
/*                 read/write the values to register.                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0750)-2 and                           */
/*                 END Msg(4:0750)-2 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

typedef struct STag_Spi_BitPattern
{
  uinteger btBit0:1;
  uinteger btBit1:1;
  uinteger btBit2:1;
  uinteger btBit3:1;
  uinteger btBit4:1;
  uinteger btBit5:1;
  uinteger btBit6:1;
  uinteger btBit7:1;
} Spi_BitPattern;

/* Macros to avoid hard-coded numbers */

#define SPI_DBTOC_VALUE (uint32)(((uint32)SPI_VENDOR_ID_VALUE << 22U) | \
                                  ((uint32)SPI_MODULE_ID_VALUE << 14U) | \
                                  ((uint32)SPI_SW_MAJOR_VERSION_VALUE << 8U) | \
                                  ((uint32)SPI_SW_MINOR_VERSION_VALUE << 3U))

#define SPI_TRUE                      (uint8)0x01
#define SPI_FALSE                     (uint8)0x00
#define SPI_INVALID_DMAUNIT           (uint8)0xFF
#define SPI_CSIG_CSIH_BUSY            (uint32)0x00000080ul
#define SPI_PORT_REG_MASK             (uint32)0xFFFF0000ul

/* Macro for DMA transmission */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
#if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_TWO)
#define SPI_DMA_DCEN_ENABLE           (uint32)0x00000001ul
#define SPI_DMA_DCEN_DISABLE          (uint32)0x00000000ul
#define SPI_DMA_8BIT_RX_SETTINGS      (uint32)0x04004040ul
#define SPI_DMA_16BIT_RX_SETTINGS     (uint32)0x04004044ul
#define SPI_DMA_32BIT_RX_SETTINGS     (uint32)0x04004048ul
#define SPI_DMA_8BIT_TX_SETTINGS      (uint32)0x04004100ul
#define SPI_DMA_16BIT_TX_SETTINGS     (uint32)0x04004104ul
#define SPI_DMA_32BIT_TX_SETTINGS     (uint32)0x04004108ul
#define SPI_DMA_STR                   (uint32)0x00000001ul
#define SPI_DMA_STR_REQ               (uint32)0xFBFFFFFFul
#define SPI_DMA_DISABLE               (uint32)0x00000000ul
#define SPI_DMA_DRQ_CLEAR             (uint32)0x00000001ul
#define SPI_DMA_STR_CLEAR             (uint32)0x00000010ul
#define SPI_DMA_FIXED_TX_SETTINGS     (uint32)0x00000040ul
#define SPI_DMA_INV_TX_SETTINGS       (uint32)0xFFFFFFBFul
#define SPI_DMA_FIXED_RX_SETTINGS     (uint32)0x00000100ul
#define SPI_DMA_INV_RX_SETTINGS       (uint32)0xFFFFFEFFul
#define SPI_DMA_ONCE                  (uint32)0xFFFFDFFFul
#define SPI_DMA_TC_CLEAR              (uint32)0x00000010ul
#if (SPI_FIFO_MODE == STD_ON)
#define SPI_DMA_BLOCK_SETTINGS        (uint32)0x00000001ul
#endif
#else
#define SPI_DMA_ENABLE                (uint8)0x01
#define SPI_DMA_SR_ENABLE             (uint8)0x03
#define SPI_DMA_DISABLE               (uint8)0x7E
#define SPI_DMA_SRC_SELECT            (uint16)0x0002
#define SPI_DMA_DEST_SELECT           (uint16)0x0002
#define SPI_DMA_TRANSFER              (uint16)0x0001
#define SPI_DMA_ONCE                  (uint16)0xEFFF
#define SPI_DMA_CLEAR_NEXT            (uint16)0x7FFF
#define SPI_DMA_8BIT_RX_SETTINGS      (uint16)0x0080
#define SPI_DMA_16BIT_RX_SETTINGS     (uint16)0x2080
#define SPI_DMA_32BIT_RX_SETTINGS     (uint16)0x4080
#define SPI_DMA_8BIT_TX_SETTINGS      (uint16)0x0020
#define SPI_DMA_16BIT_TX_SETTINGS     (uint16)0x2020
#define SPI_DMA_32BIT_TX_SETTINGS     (uint16)0x4020
#define SPI_DMA_FIXED_TX_SETTINGS     (uint16)0x0080
#define SPI_DMA_FIXED_RX_SETTINGS     (uint16)0x0020
#define SPI_DMA_INV_TX_SETTINGS       (uint16)0xFF7F
#define SPI_DMA_INV_RX_SETTINGS       (uint16)0xFFDF
#endif
#endif

/* Macros to avoid hard-coded numbers */
#define SPI_SET_BTST                  (uint8)0x80
#define SPI_SET_EDL                   (uint8)0x20
#define SPI_RESET_EDL                 (uint8)0xDF
#define SPI_SET_EOJ                   (uint8)0x40
#define SPI_SET_CIREEOJ               (uint8)0xC0
#define SPI_SET_PWR                   (uint8)0x80
#define SPI_CHECK_PWR                 (uint8)0x80
#define SPI_SET_JOBE                  (uint8)0x02
#define SPI_SET_DIR_LSB               (uint8)0x04
#define SPI_RESET_DIR_LSB             (uint8)0xFB
#define SPI_RESET_PWR                 (uint8)0x7F
#define SPI_SET_DIRECT_ACCESS         (uint8)0xE1
#define SPI_SET_MEMORY_ACCESS         (uint8)0xE0
#define SPI_NO_SEQ_NOTIFICATION       (uint8)0xFF
#define SPI_NO_JOB_NOTIFICATION       (uint16)0xFFFF
#define SPI_INT_FLAG_MASK             (uint16)0x1000
#define SPI_CSIG_CLR_STS_FLAGS        (uint16)0x000B
#define SPI_CSIH_CLR_STS_FLAGS        (uint16)0xC10B
#define SPI_TSF_SET                   (uint32)0x00000080ul
#define SPI_SET_SLIT                  (uint32)0x00010000ul

/* Macro for clearing pending interrupt */
#define SPI_CLR_INT_REQ               (uint16)0xEFFF
#define SPI_CSRI_MASK                 (uint32)0x00000010ul
#define SPI_CSRI_AND_MASK             (uint32)0xFFFFFFEFul
#define SPI_CSIH_PRE_MASK             (uint16)0xE000
#define SPI_CSIH_BRS_MASK             (uint16)0x0FFF
#define SPI_CSRI_FLAG_MASK            (uint8)0x10

#define SPI_TYPE_UINT8                (uint8)0x00
#define SPI_TYPE_UINT16               (uint8)0x01

/* Queue status macros */
#define SPI_QUEUE_EMPTY               (boolean)0
#define SPI_QUEUE_FILLED              (boolean)1

#define SPI_HW_BUSY                   (uint32)0x00000080ul
#define SPI_ERROR_MASK                (uint32)0x0000000Bul
#define SPI_EDL_MASK                  (unit8)0xEF

#define SPI_DIRECT_ACCESS_MODE_CONFIGURED (uint8)0x00
#define SPI_FIFO_MODE_CONFIGURED          (uint8)0x01
#define SPI_DUAL_BUFFER_MODE_CONFIGURED   (uint8)0x02
#define SPI_TX_ONLY_MODE_CONFIGURED       (uint8)0x03

#define SPI_PARITY_DCC_ERR                (uint32)0x0000000Aul
#define SPI_PARITY_DCC_ERR_CLR            (uint16)0xFFF5
#define SPI_OVRFLW_OVRRUN_ERR             (uint32)0x00004001ul
#define SPI_OVRFLW_OVRRUN_ERR_CLR         (uint16)0xBFFE

/* Macro for Relocating interrupt vector table */
#define SPI_DLS_MASK                      (uint8) 0xF0
#define SPI_NO_JOB                        (Spi_JobType)0xFFFF
#define SPI_NO_SEQ                        (Spi_SequenceType)0xFFFF
#define SPI_SET_JOBE                      (uint8)0x02

/* Macro for select baud rate register */
#define SPI_CSIH_BRS_SELECT_MASK          (uint32)0xC0000000ul

/* Received data status macros */
#define SPI_RX_DATA_NORMAL                    (boolean)0
#define SPI_RX_DATA_QUEUED                    (boolean)1

#define SPI_LOOPBACK_ENABLE               (uint32)0x00000048
#define SPI_LOOPBACK_DLS_SETTING          (uint32)0x08000000
#define SPI_LOOPBACK_CNTRL2_VALUE         (uint16)0x2640
#define SPI_LOOPBACK_CSIH_CNTRL2_VALUE    (uint16)0x2000
#define SPI_LOOPBACK_CSIH_BRS0_VALUE      (uint16)0x0640
#define SPI_LOOPBACK_DATA                 (uint8)0xA5

/* Macros for Extended FIFO Transmission */
#define SPI_FIFO_BUFFER_EMPTY         (uint8)0x0
#define SPI_FIFO_BUFFER_FULL          (uint8)0x1
#define SPI_FIFO_BUFFER_UNINIT        (uint8)0x2

#define SPI_FIFO_TX_INDEX             (uint8)0x0
#define SPI_FIFO_RX_INDEX             (uint8)0x1
#define SPI_FIFO_SIZE                 (uint8)0x80

/* Structure for main hardware user registers */
typedef struct STag_Spi_MainUserRegs
{
  uint8  volatile ucMainCTL0;
  uint8  volatile ucReserved1;
  uint16 volatile usReserved2;
  uint32 volatile ulMainSTR0;
  uint16 volatile usMainSTCR0;
} Spi_MainUserRegs;

/* Structure for main hardware OS registers */
typedef struct STag_Spi_MainOsRegs
{
  uint32 volatile ulMainCTL1;
  uint16 volatile usMainCTL2;
} Spi_MainOsRegs;

#if (SPI_CSIH_CONFIGURED == STD_ON)
/* Structure for CSIH hardware user registers */
typedef struct STag_Spi_CsihUserRegs
{
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
                                                   (SPI_FIFO_MODE == STD_ON))
  uint32 volatile ulCSIHMCTL1;
  uint32 volatile ulCSIHMCTL2;
  #endif
  uint32 volatile ulCSIHTX0W;
  uint16 volatile usCSIHTX0H;
  uint16 volatile usReserved1;
  uint32 volatile ulCSIHRX0W;
  uint16 volatile usCSIHRX0H;
  uint16 volatile usReserved2;
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
                                                      (SPI_FIFO_MODE == STD_ON))
  uint32 volatile ulCSIHMRWP0;
  #endif
} Spi_CsihUserRegs;

/* Structure for CSIH hardware OS registers */
typedef struct STag_Spi_CsihOsRegs
{
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
                                                   (SPI_FIFO_MODE == STD_ON))
  uint16 volatile usCSIHMCTL0;
  uint16 volatile usReserved4;
  #endif
  uint32 volatile ulCSIHCFG[8];
  uint32 volatile usReserved1;
  uint32 volatile usCSIHBRS[4];
} Spi_CsihOsRegs;
#endif

#if (SPI_CSIG_CONFIGURED == STD_ON)
/* Structure for CSIG hardware user registers */
typedef struct STag_Spi_CsigUserRegs
{
  uint8  volatile ucCSIGBCTL0;
  uint8  volatile ucReserved1;
  uint16 volatile usReserved2;
  uint32 volatile ulCSIGTX0W;
  uint16 volatile usCSIGTX0H;
  uint16 volatile usReserved3;
  uint16 volatile usCSIGRX0;
} Spi_CsigUserRegs;

/* Structure for CSIG hardware OS registers */
typedef struct STag_Spi_CsigOsRegs
{
  uint32 volatile ulCSIGCFG0;
} Spi_CsigOsRegs;
#endif

/* Structure for hardware unit information */
typedef struct STag_Spi_HWUnitInfo
{
  /* User Base address of common registers */
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA)pHwMainUserBaseAddress;
  /* OS Base address of common registers */
  P2VAR(Spi_MainOsRegs, AUTOMATIC, SPI_CONFIG_DATA)pHwMainOsBaseAddress;
  P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA)pHwUserBufferAddress;
  P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA)pHwOsBufferAddress;
  /* Address for receive interrupt control registers (TIR) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pRxIntCntlAddress;
  /* Address for transmit interrupt control registers (TIC) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pTxIntCntlAddress;
  /* Address for transmit interrupt control registers (TIRE) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pErrorIntCntlAddress;
  #if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
  /* Address for transmit cancel interrupt control registers (TIJC) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pTxCancelIntCntlAddress;
  /* Address for transmit cancel IMR registers (TIJC) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pTxCancelImrAddress;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Address for receive IMR registers (TIR) */
  P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA)pRxImrAddress;
  /* Address for transmit IMR registers (TIC) */
  P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA)pTxImrAddress;
  /* Address for error IMR registers (TIRE) */
  P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA)pErrorImrAddress;
  /* Mask for receive IMR register */
  uint16 usRxImrMask;
  /* Mask for transmit IMR register */
  uint16 usTxImrMask;
  /* Mask for error IMR register */
  uint16 usErrorImrMask;
  #endif
  #if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
  /* Mask for transmit cancel IMR register */
  uint16 usTxCancelImrMask;
  #endif
  /* Whether the HW Unit is synchronous (SPI_TRUE) or
     asynchronous (SPI_FALSE) */
  /* TRACE [R3, SPI238_Conf][R4, SPI238_Conf] */
  #if (SPI_LEVEL_DELIVERED == SPI_TWO)
  boolean blIsSynchronous;
  #endif
} Spi_HWUnitInfo;

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* Structure for storing current status of SPI communication */
typedef struct STag_Spi_CurrentCommData
{
  /* Pointer to current data to be received */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentRxData;
  /* Pointer to next data to be transmitted */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pNextTxData;
  /* Pointer to the current channel list to be transmitted */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentTxChannelList;
  /* Pointer to the current channel list to be received */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentRxChannelList;

  /* TRACE [R3, SPI165][R4, SPI165] */
  /* Number of buffers yet to be transmitted */
  Spi_NumberOfDataType ddNoOfTxBuffers;
  /* Number of buffers yet to be received */
  Spi_NumberOfDataType ddNoOfRxBuffers;
  /* Number of channels yet to be transmitted */
  Spi_ChannelType ddNoOfTxChannels;
  /* Number of channels yet to be received */
  Spi_ChannelType ddNoOfRxChannels;
  /* Index of the current hardware unit */
  Spi_HWUnitType ddHWUnitIndex;
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* Tx data status of on-going transmission */
  boolean  blTxEDL;
  /* Rx data status of on-going transmission */
  boolean  blRxEDL;
  #endif
} Spi_CurrentCommData;
#endif

#if (SPI_FIFO_MODE == STD_ON)
/* Structure for storing current status of SPI communication for FIFO mode */
typedef struct STag_Spi_FifoCurrentCommData
{
  /* Pointer to current data received */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentRxData;
  /* Pointer to next data to be transmitted */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pNextTxData;
  /* Pointer to the current RX channel list */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentRxChannelList;
  /* Pointer to the next TX channel list */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentTxChannelList;
  /* Number of buffers yet to be transmitted */
  Spi_NumberOfDataType ddNoOfTxBuffers;
  /* Number of buffers yet to be received */
  Spi_NumberOfDataType ddNoOfRxBuffers;
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Job Index */
  Spi_JobType ddJobIndex;
  #endif
  /* Number of RX channels */
  Spi_ChannelType ddNoOfRxChannels;
  /* Number of TX channels */
  Spi_ChannelType ddNoOfTxChannels;
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Index of current DMA HW unit */
  uint8 ucDmaDeviceIndex;
  #endif
} Spi_FifoCurrentCommData;
#endif

#if (SPI_TX_ONLY_MODE == STD_ON)
/* Structure for storing current status of SPI communication */
typedef struct STag_Spi_TxOnlyCurrentCommData
{
  /* Pointer to current data to be received */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentRxData;
  /* Pointer to current notification index array */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentNotifyIdx;
  /* Number of buffers yet to be transmitted */
  Spi_NumberOfDataType ddNoOfBuffers;
  /* Number of buffers received */
  Spi_NumberOfDataType ddNoOfBuffersRcvd;
  /* Number of buffers next job notification */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA)
                                               ddNoOfNxtNotifyBuffersIdx;
    /* TRACE [R4, SPI234_Conf] */
    /* Index of first channel of the sequence */
  Spi_ChannelType ddChannelIndex;
} Spi_TxOnlyCurrentCommData;
#endif

#if (SPI_DUAL_BUFFER_MODE == STD_ON)
/* Structure for storing current status of SPI communication */
typedef struct STag_Spi_DualBufferCurrentCommData
{
  /* Number of buffers to be transmitted */
  Spi_NumberOfDataType ddNoOfBuffers;
  /* Number of buffers transmitted */
  Spi_NumberOfDataType ddNoOfBuffersTxtd;
  /* Number of buffers next job notification */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA)
                                             ddNoOfNxtNotifyBuffersIdx;
} Spi_DualBufferCurrentCommData;
#endif

#if (SPI_CANCEL_API == STD_ON)
/* Structure of processing sequence */
typedef struct STag_Spi_SeqProcessType
{
  /* Position of the cancel byte */
  uint8 ucCancelOffset;
  /* Mask for cancel byte */
  uint8 ucCancelMask;
} Spi_SeqProcessType;
#endif

#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
/* Structure for storing external buffer attributes */
typedef struct STag_Spi_EBData
{
  /* Pointer to external buffer source data */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA)pSrcPtr;
  /* Pointer to external buffer destination data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA)pDestPtr;
  /* Length of external buffer */
  Spi_NumberOfDataType ddEBLength;
} Spi_EBData;
#endif

/* MISRA Violation: START Msg(4:0750)-2 */
/* Structure for Data access */
typedef union UTag_Spi_DataAccess
/* END Msg (4:0750)-2 */
{
  struct
  {
    /* Values for first 16-bits */
    uint16 usRegData1;
    /* Values for second 8-bits */
    uint8 ucRegData2;
    /* Value for next 8-bits */
    uint8 ucRegData3;
  } Tst_ByteAccess;

  uint32 ulRegData;

  uint16 usRegData5[2];

  uint8 ucRegData4[4];
} Spi_DataAccess;

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* MISRA Violation: START Msg(4:0750)-2 */
/* Structure for DMA address */
typedef union UTag_Spi_DmaAddr
/* END Msg (4:0750)-2 */
{
  Spi_DataType volatile *pDmaRegAddr;

  struct
  {
    /* Lower DMA address */
    volatile uint16 usDmaRegAddrLow;
    /* Higher DMA address */
    volatile uint16 usDmaRegAddrHigh;
  } Tst_DmaAddr;
} Spi_DmaAddr;
#endif

/*******************************************************************************
**                       Extern declarations for Global Data                  **
*******************************************************************************/

/* TRACE [R3, SPI092][R4, SPI275] */
#define SPI_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

#if (SPI_CANCEL_API == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
/* Declaration for SPI Sequence Callback functions Configuration */
extern CONST(Spi_SeqProcessType, SPI_CONST) Spi_GstSeqProcess[];
/* END Msg (4:3864)-1 */
#endif

/* MISRA Violation: START Msg(4:3864)-1 */
/* Declaration for HW unit configuration */
extern CONST(Spi_HWUnitInfo, SPI_CONST) Spi_GstHWUnitInfo[];
/* END Msg (4:3864)-1 */
#define SPI_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM Area for Job result */
extern VAR(Spi_JobResultType, SPI_NOINIT_DATA) Spi_GaaJobResult[];

/* Global RAM Area for Sequence result */
extern VAR(Spi_SeqResultType, SPI_NOINIT_DATA) Spi_GaaSeqResult[];
/* END Msg (4:3864)-1 */

#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM array for storing external buffer attributes */
extern VAR(Spi_EBData, SPI_NOINIT_DATA) Spi_GaaChannelEBData[];
/* END Msg (4:3864)-1 */
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
       (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM area for job queue for both direct access mode and FIFO mode */
extern VAR(Spi_JobType, SPI_NOINIT_DATA) Spi_GaaJobQueue[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM area for sequence queue for Dual buffer mode and Tx Only mode */
extern VAR(Spi_SequenceType, SPI_NOINIT_DATA) Spi_GaaSeqQueue[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_8
#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_START_SEC_VAR_NOINIT_8BIT
#endif
#include "MemMap.h"

#if (SPI_CANCEL_API == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM bit array for cancel status of sequences */
extern VAR(uint8, SPI_NOINIT_DATA) Spi_GaaSeqCancel[];
/* Global RAM byte array for current HW Unit of the sequence */
extern VAR(uint8, SPI_NOINIT_DATA) Spi_GaaSeqCurrentHWUnit[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM area to count repeated jobs */
extern VAR(uint8, SPI_NOINIT_DATA) Spi_GaaJobCount[];
/* END Msg (4:3864)-1 */
#endif

#if (SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_8
#elif(SPI_AR_VERSION == SPI_AR_LOWER_VERSION)
#define SPI_STOP_SEC_VAR_NOINIT_8BIT
#endif
#include "MemMap.h"

/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#endif /* SPI_LTTYPES_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
