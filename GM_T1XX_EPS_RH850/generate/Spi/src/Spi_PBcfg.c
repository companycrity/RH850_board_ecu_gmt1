/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_PBcfg.c                                                 */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains post-build time parameters.                             */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
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
 *  V1.0.0:  31-Aug-2012  : Initial version
 *
 *  V1.1.0:  29-Jan-2013  : As per SCR 072, following chanegs are made
 *                          1. Spi_GaaDefaultValue id deleted from structure.
 *                          2. Element 'blisHighPriority' is added in
 *                             'Spi_GstSeqConfig' structure for the hardware
 *                             priority implementation and this element
 *                             will be generated only if the macro
 *                             'SPI_HW_PRIORITY_ENABLED' is STD_ON.
 *                          3. Elements 'ddNoOfBuffers' and 'ddNoOfBuffers' is
 *                             updated in 'Spi_GstChannelConfig' structure for
 *                             the byte allignment issue.
 *                          4. Element 'ulMainCtl1Value' is updated in
 *                             'Spi_GstJobConfig' structure for the hardware
 *                             priority implementation.
 *
 *  V1.1.1:  18-Mar-2013  : As per SCR 113 for the mantis issue #5420,
 *                          value of ulMainCtl1Value in Spi_GstJobConfig
 *                          is updated if SpiHwPriorityEnable is TRUE and
 *                          SpiHighPriorityHwHandlingEnable is set to TRUE
 *                          in any of SpiSequences.
 *
 *  V1.1.2:  08-Aug-2013  : As per CR 225, following changes are made:
 *                          1. Document is updated as per new template
 *                             attached in mantis #11710.
 *
 *  V1.1.3:  02-Jan-2014  : As per CR 330, for the mantis issue #15705,
 *                          Copyright information is updated.
 *
 *  V1.1.4:  28-Aug-2014  : As per CR 601, for the mantis 22252,
 *                          Changes are made at all relevant places
 *                          accordingly to append U or UL after numeric values
 *                          and to add MISRA C Rule Violation.
 *
 *  V1.1.5:  31-Dec-2014  : As per the mantis #25122, type specifier template
 *                          is added for Spi_GaaNxtNotifyBuffer
 *  V1.1.6:  18-Mar-2015  : As part of fix for Mantis#24305,
 *                          memory specifier for Spi_GaaChannelIBWrite and 
 *                          Spi_GaaChannelIBRead has been modified.
 */

/*******************************************************************************
**                   Generation Tool Version                                  **
*******************************************************************************/
/*
 * TOOL VERSION:  1.2.12
 */

/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    C:\Users\nz2654\AppData\Local\Temp\DaVinci\Cfg-3747693\Generation\Cfg_Gen-1481733754247-0\AutosarFiles_ValGen-1481734289264-0\Spi_ECUC_3231796230563067222.arxml
 *                C:\Hari\Work\SynergyProjects\T1xx_Synergy\WorkingProject_Synergy\Spi\generate\R403_SPI_P1x_BSWMDT.arxml
 * GENERATED ON:  14 Dec 2016 - 11:52:14
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Spi.h"
#include "Spi_PBTypes.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR specification version information */
#define SPI_PBCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define SPI_PBCFG_C_AR_RELEASE_MINOR_VERSION  0U
#define SPI_PBCFG_C_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define SPI_PBCFG_C_SW_MAJOR_VERSION  1U
#define SPI_PBCFG_C_SW_MINOR_VERSION  6U

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/


#if (SPI_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
         SPI_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Release Major Version"
#endif

#if (SPI_PBTYPES_AR_RELEASE_MINOR_VERSION != \
         SPI_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Release Minor Version"
#endif

#if (SPI_PBTYPES_AR_RELEASE_REVISION_VERSION != \
         SPI_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Release Revision Version"
#endif

#if (SPI_PBTYPES_SW_MAJOR_VERSION != SPI_PBCFG_C_SW_MAJOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Software Major Version"
#endif

#if (SPI_PBTYPES_SW_MINOR_VERSION != SPI_PBCFG_C_SW_MINOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) Cast between a pointer to object and an integral  */
/*                  type.                                                     */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/*                 REFERENCE - ISO-6.3.4 Semantics                            */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-1 and                           */
/*                 END Msg(4:0306)-1 tags in the code.                        */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3635) Function name is not followed by parentheses and  */
/*                 so, rather than being a function call, it is interpreted   */
/*                 as an expression of pointer type                           */
/* Rule          : MISRA-C:2004 Rule 16.9                                     */
/* Justification : This is a callback function. The intended behaviour is to  */
/*                 interpret expression as pointer type.                      */
/* Verification  : The function name is not preceded with an '&' operator to  */
/*                 ensure the name of the callback function is used as        */
/*                 configured by the user. However part of the code is        */
/*                 verified manually and it is not having any impact.         */
/* Reference     : Look for START Msg(4:3635)-2 and                           */
/*                 END Msg(4:3635)-2 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
#define SPI_START_DATA_LOC_RAM1
#include "MemMap.h"


/* Global array for internal read buffer data of channels */
VAR(Spi_DataType, SPI_DATA) Spi_GaaChannelIBRead[134] = {SPI_ZERO};

/* Global array for internal write buffer data of channels */
VAR(Spi_DataType, SPI_DATA) Spi_GaaChannelIBWrite[134] = {SPI_ZERO};


#define SPI_STOP_DATA_LOC_RAM1
#include "MemMap.h"



#define SPI_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

/* Global RAM bit array for status of sequences */
/* VAR(uint8, SPI_DATA) Spi_GaaSeqStatusBitArray[]; */

#define SPI_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

/* Structure for SPI Init configuration */
CONST(Spi_ConfigType, SPI_CONST) Spi_GstConfiguration[] = 
{
  /* Index: 0 - SpiDriver */
  {
    /* ulStartOfDbToc */
    0xED4C130UL,

    /* pFirstChannel */
    &Spi_GstChannelConfig[0],

    /* pFirstJob  */
    &Spi_GstJobConfig[0],

    /* pFirstSeq */
    &Spi_GstSeqConfig[0],

    /* pJobList */
    &Spi_GstJobList[0],

    /* pStatusArray */
    NULL_PTR,

    /* pStsValueArray */
    NULL_PTR,

    /* pCSArray */
    &Spi_GaaCsIndex[0],

    /* pChannelIBRead */
    &Spi_GaaChannelIBRead[0],

    /* pChannelIBWrite */
    &Spi_GaaChannelIBWrite[0],

    /* ddDirectAccessQueueSize */
    67U,

    /*aaHWMemoryMode*/
    {
      0x00U, 0x00U, 0x00U
    },

    
    /*aaHWUnitInfoIndex*/
    {
      0x01U, 0xFFU, 0x02U
    },

    /*aaHWUnitNumber*/
    {
      0xFFU, 0x00U, 0x02U
    },

    /* aaChipSelect */
    {
      0x00U, 0x00U, 0x00U
    },

    /* ucNoofStatusByte */
    0x00U
  }
};


#define SPI_STOP_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* This array contains configuration details for Channels */
CONST(Spi_ChannelPBConfigType, SPI_CONST) Spi_GstChannelConfig[] =
{
  /* Index: 0 - GateDrv0Cfg0Ch */
  {
    /* ddBufferIndex */
    0x0000U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 1 - GateDrv0Cfg1Ch */
  {
    /* ddBufferIndex */
    0x0001U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 2 - GateDrv0Cfg2Ch */
  {
    /* ddBufferIndex */
    0x0002U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 3 - GateDrv0Cfg3Ch */
  {
    /* ddBufferIndex */
    0x0003U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 4 - GateDrv0Cfg4Ch */
  {
    /* ddBufferIndex */
    0x0004U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 5 - GateDrv0Cfg5Ch */
  {
    /* ddBufferIndex */
    0x0005U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 6 - GateDrv0Cfg6Ch */
  {
    /* ddBufferIndex */
    0x0006U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 7 - GateDrv0Cfg7Ch */
  {
    /* ddBufferIndex */
    0x0007U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 8 - GateDrv0Cfg8Ch */
  {
    /* ddBufferIndex */
    0x0008U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 9 - GateDrv0Cfg9Ch */
  {
    /* ddBufferIndex */
    0x0009U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 10 - GateDrv0Cfg10Ch */
  {
    /* ddBufferIndex */
    0x000AU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 11 - GateDrv0Cfg11Ch */
  {
    /* ddBufferIndex */
    0x000BU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 12 - GateDrv0Cfg12Ch */
  {
    /* ddBufferIndex */
    0x000CU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 13 - GateDrv0Cfg13Ch */
  {
    /* ddBufferIndex */
    0x000DU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 14 - GateDrv0VrfyCmd0Ch */
  {
    /* ddBufferIndex */
    0x000EU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 15 - GateDrv0VrfyCmd1Ch */
  {
    /* ddBufferIndex */
    0x000FU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 16 - GateDrv0VrfyCmd2Ch */
  {
    /* ddBufferIndex */
    0x0010U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 17 - GateDrv0VrfyRes0Ch */
  {
    /* ddBufferIndex */
    0x0011U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 18 - GateDrv0VrfyRes1Ch */
  {
    /* ddBufferIndex */
    0x0012U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 19 - GateDrv0Mask0Ch */
  {
    /* ddBufferIndex */
    0x0013U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 20 - GateDrv0Mask1Ch */
  {
    /* ddBufferIndex */
    0x0014U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 21 - GateDrv0Mask2Ch */
  {
    /* ddBufferIndex */
    0x0015U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 22 - GateDrv0Diag0Ch */
  {
    /* ddBufferIndex */
    0x0016U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 23 - GateDrv0Diag1Ch */
  {
    /* ddBufferIndex */
    0x0017U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 24 - GateDrv0Diag2Ch */
  {
    /* ddBufferIndex */
    0x0018U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 25 - GateDrv0CtrlCh */
  {
    /* ddBufferIndex */
    0x0019U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 26 - GateDrv1Cfg0Ch */
  {
    /* ddBufferIndex */
    0x001AU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 27 - GateDrv1Cfg1Ch */
  {
    /* ddBufferIndex */
    0x001BU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 28 - GateDrv1Cfg2Ch */
  {
    /* ddBufferIndex */
    0x001CU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 29 - GateDrv1Cfg3Ch */
  {
    /* ddBufferIndex */
    0x001DU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 30 - GateDrv1Cfg4Ch */
  {
    /* ddBufferIndex */
    0x001EU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 31 - GateDrv1Cfg5Ch */
  {
    /* ddBufferIndex */
    0x001FU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 32 - GateDrv1Cfg6Ch */
  {
    /* ddBufferIndex */
    0x0020U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 33 - GateDrv1Cfg7Ch */
  {
    /* ddBufferIndex */
    0x0021U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 34 - GateDrv1Cfg8Ch */
  {
    /* ddBufferIndex */
    0x0022U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 35 - GateDrv1Cfg9Ch */
  {
    /* ddBufferIndex */
    0x0023U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 36 - GateDrv1Cfg10Ch */
  {
    /* ddBufferIndex */
    0x0024U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 37 - GateDrv1Cfg11Ch */
  {
    /* ddBufferIndex */
    0x0025U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 38 - GateDrv1Cfg12Ch */
  {
    /* ddBufferIndex */
    0x0026U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 39 - GateDrv1Cfg13Ch */
  {
    /* ddBufferIndex */
    0x0027U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 40 - GateDrv1VrfyCmd0Ch */
  {
    /* ddBufferIndex */
    0x0028U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 41 - GateDrv1VrfyCmd1Ch */
  {
    /* ddBufferIndex */
    0x0029U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 42 - GateDrv1VrfyCmd2Ch */
  {
    /* ddBufferIndex */
    0x002AU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 43 - GateDrv1VrfyRes0Ch */
  {
    /* ddBufferIndex */
    0x002BU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 44 - GateDrv1VrfyRes1Ch */
  {
    /* ddBufferIndex */
    0x002CU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 45 - GateDrv1Mask0Ch */
  {
    /* ddBufferIndex */
    0x002DU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 46 - GateDrv1Mask1Ch */
  {
    /* ddBufferIndex */
    0x002EU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 47 - GateDrv1Mask2Ch */
  {
    /* ddBufferIndex */
    0x002FU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 48 - GateDrv1Diag0Ch */
  {
    /* ddBufferIndex */
    0x0030U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 49 - GateDrv1Diag1Ch */
  {
    /* ddBufferIndex */
    0x0031U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 50 - GateDrv1Diag2Ch */
  {
    /* ddBufferIndex */
    0x0032U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 51 - GateDrv1CtrlCh */
  {
    /* ddBufferIndex */
    0x0033U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 52 - TmplMonrCh1 */
  {
    /* ddBufferIndex */
    0x0034U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 53 - TmplMonrCh2 */
  {
    /* ddBufferIndex */
    0x0035U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 54 - TmplMonrCh3 */
  {
    /* ddBufferIndex */
    0x0036U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 55 - TmplMonrCh4 */
  {
    /* ddBufferIndex */
    0x0037U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 56 - TmplMonrCh5 */
  {
    /* ddBufferIndex */
    0x0038U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 57 - PwrSplyCh1 */
  {
    /* ddBufferIndex */
    0x0039U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 58 - PwrSplyCh2 */
  {
    /* ddBufferIndex */
    0x003AU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 59 - PwrSplyCh3 */
  {
    /* ddBufferIndex */
    0x003BU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 60 - PwrSplyCh4 */
  {
    /* ddBufferIndex */
    0x003CU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 61 - PwrSplyCh5 */
  {
    /* ddBufferIndex */
    0x003DU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 62 - PwrSplyCh6 */
  {
    /* ddBufferIndex */
    0x003EU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 63 - PwrSplyCh7 */
  {
    /* ddBufferIndex */
    0x003FU,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 64 - PwrSplyCh8 */
  {
    /* ddBufferIndex */
    0x0040U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 65 - PwrSplyCh9 */
  {
    /* ddBufferIndex */
    0x0041U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  },

  /* Index: 66 - PwrSplyCh10 */
  {
    /* ddBufferIndex */
    0x0042U,

    /* ddNoOfBuffers */
    0x0001U,

    /* ddDefaultData */
    0x0U,

    /* ucDLSSetting */
    0x0FU,

    /* ucDataType */
    1U,

    /* ucChannelBufferType */
    0x00U,

    /* blDirection */
    SPI_FALSE
  }
};



/* This array contains configuration details for Jobs */
CONST(Spi_JobConfigType, SPI_CONST) Spi_GstJobConfig[] =
{
  /* Index: 0 - GateDrv0Cfg0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[0],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x00U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 1 - GateDrv0Cfg1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[1],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x01U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 2 - GateDrv0Cfg2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[2],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x02U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 3 - GateDrv0Cfg3Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[3],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x03U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 4 - GateDrv0Cfg4Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[4],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x04U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 5 - GateDrv0Cfg5Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[5],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x05U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 6 - GateDrv0Cfg6Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[6],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x06U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 7 - GateDrv0Cfg7Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[7],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x07U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 8 - GateDrv0Cfg8Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[8],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x08U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 9 - GateDrv0Cfg9Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[9],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x09U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 10 - GateDrv0Cfg10Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[10],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x0AU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 11 - GateDrv0Cfg11Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[11],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x0BU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 12 - GateDrv0Cfg12Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[12],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x0CU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 13 - GateDrv0Cfg13Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[13],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x0DU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 14 - GateDrv0VrfyCmd0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[14],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x0EU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 15 - GateDrv0VrfyCmd1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[15],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x0FU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 16 - GateDrv0VrfyCmd2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[16],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x10U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 17 - GateDrv0VrfyRes0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[17],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x11U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 18 - GateDrv0VrfyRes1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[18],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x12U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 19 - GateDrv0Mask0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[19],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x13U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 20 - GateDrv0Mask1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[20],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x14U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 21 - GateDrv0Mask2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[21],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x15U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 22 - GateDrv0Diag0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[22],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x16U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 23 - GateDrv0Diag1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[23],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x17U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 24 - GateDrv0Diag2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[24],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x18U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 25 - GateDrv0CtrlJob */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[25],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FE70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x02U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x19U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFEU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 26 - GateDrv1Cfg0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[26],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x1AU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 27 - GateDrv1Cfg1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[27],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x1BU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 28 - GateDrv1Cfg2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[28],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x1CU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 29 - GateDrv1Cfg3Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[29],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x1DU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 30 - GateDrv1Cfg4Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[30],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x1EU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 31 - GateDrv1Cfg5Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[31],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x1FU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 32 - GateDrv1Cfg6Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[32],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x20U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 33 - GateDrv1Cfg7Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[33],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x21U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 34 - GateDrv1Cfg8Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[34],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x22U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 35 - GateDrv1Cfg9Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[35],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x23U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 36 - GateDrv1Cfg10Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[36],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x24U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 37 - GateDrv1Cfg11Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[37],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x25U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 38 - GateDrv1Cfg12Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[38],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x26U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 39 - GateDrv1Cfg13Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[39],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x27U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 40 - GateDrv1VrfyCmd0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[40],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x28U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 41 - GateDrv1VrfyCmd1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[41],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x29U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 42 - GateDrv1VrfyCmd2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[42],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x2AU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 43 - GateDrv1VrfyRes0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[43],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x2BU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 44 - GateDrv1VrfyRes1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[44],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x2CU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 45 - GateDrv1Mask0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[45],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x2DU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 46 - GateDrv1Mask1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[46],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x2EU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 47 - GateDrv1Mask2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[47],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x2FU,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 48 - GateDrv1Diag0Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[48],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x30U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 49 - GateDrv1Diag1Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[49],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x31U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 50 - GateDrv1Diag2Job */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[50],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x32U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 51 - GateDrv1CtrlJob */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[51],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     NULL_PTR,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x0000FB70UL,

    /* ulPortPinMask */
    0x00000000UL,

    /* ulConfigRegValue */
    0x2000C000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x01U,

    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0x33U,

    /* ucNoOfCS */
    0x01U,

    /* ucChipSelect */
    0xFBU,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 52 - TmplMonrJob1 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[52],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 53 - TmplMonrJob2 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[53],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 54 - TmplMonrJob3 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[54],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 55 - TmplMonrJob4 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[55],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 56 - TmplMonrJob5 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[56],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 57 - PwrSplyJob1 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[57],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 58 - PwrSplyJob2 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[58],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 59 - PwrSplyJob3 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[59],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 60 - PwrSplyJob4 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[60],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 61 - PwrSplyJob5 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[61],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 62 - PwrSplyJob6 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[62],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 63 - PwrSplyJob7 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[63],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 64 - PwrSplyJob8 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[64],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 65 - PwrSplyJob9 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[65],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  },

  /* Index: 66 - PwrSplyJob10 */
  {
    /* *pChannelList */
    &Spi_GaaChannelList[66],

    /* *pPortGrpRegAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))0xFFC10144UL,
    /* END Msg(4:0306)-1 */

    /* *pSpiJobNotification */
    /* MISRA Violation: START Msg(4:3635)-1 */
     NULL_PTR,
    /* END Msg(4:3635)-1 */

    /* ulMainCtl1Value */
    0x00000020UL,

    /* ulPortPinMask */
    0x02000200UL,

    /* ulConfigRegValue */
    0x20000000UL,

    /* usCtl2Value */
    0x400AU,

    /* usMCtl0Value */
    0x0000U,

    /* ddNoOfChannels */
    0x0001U,

    /* ddHWUnitIndex */
    0x00U,

    /* ddCSType */
    SPI_GPIO_CS,

    /* ucClk2CsLoopCnt */
    0x05U,

    /* ucCSArrayIndex */
    0xFFU,

    /* ucNoOfCS */
    0x00U,

    /* ucChipSelect */
    0x00U,

    /* ucJobPriority */
    0x03U,

    /* blCsPolarity */
    SPI_FALSE,

    /* blIsChannelPropSame */
    SPI_TRUE
  }
};



/* This array contains configuration details for Sequences */
CONST(Spi_SequenceConfigType, SPI_CONST) Spi_GstSeqConfig[] =
{
  /* Index: 0 - GateDrv0Cfg0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0000U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 1 - GateDrv0Cfg1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0001U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 2 - GateDrv0Cfg2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0002U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 3 - GateDrv0Cfg3Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0003U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 4 - GateDrv0Cfg4Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0004U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 5 - GateDrv0Cfg5Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0005U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 6 - GateDrv0Cfg6Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0006U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 7 - GateDrv0Cfg7Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0007U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 8 - GateDrv0Cfg8Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0008U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 9 - GateDrv0Cfg9Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0009U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 10 - GateDrv0Cfg10Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x000AU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 11 - GateDrv0Cfg11Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x000BU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 12 - GateDrv0Cfg12Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x000CU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 13 - GateDrv0Cfg13Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x000DU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 14 - GateDrv0VrfyCmd0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x000EU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 15 - GateDrv0VrfyCmd1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x000FU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 16 - GateDrv0VrfyCmd2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0010U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 17 - GateDrv0VrfyRes0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0011U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 18 - GateDrv0VrfyRes1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0012U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 19 - GateDrv0Mask0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0013U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 20 - GateDrv0Mask1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0014U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 21 - GateDrv0Mask2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0015U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 22 - GateDrv0Diag0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0016U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 23 - GateDrv0Diag1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0017U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 24 - GateDrv0Diag2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0018U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 25 - GateDrv0CtrlSeq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0019U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0004U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 26 - GateDrv1Cfg0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x001AU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 27 - GateDrv1Cfg1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x001BU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 28 - GateDrv1Cfg2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x001CU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 29 - GateDrv1Cfg3Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x001DU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 30 - GateDrv1Cfg4Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x001EU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 31 - GateDrv1Cfg5Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x001FU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 32 - GateDrv1Cfg6Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0020U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 33 - GateDrv1Cfg7Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0021U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 34 - GateDrv1Cfg8Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0022U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 35 - GateDrv1Cfg9Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0023U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 36 - GateDrv1Cfg10Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0024U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 37 - GateDrv1Cfg11Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0025U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 38 - GateDrv1Cfg12Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0026U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 39 - GateDrv1Cfg13Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0027U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 40 - GateDrv1VrfyCmd0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0028U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 41 - GateDrv1VrfyCmd1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0029U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 42 - GateDrv1VrfyCmd2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x002AU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 43 - GateDrv1VrfyRes0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x002BU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 44 - GateDrv1VrfyRes1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x002CU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 45 - GateDrv1Mask0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x002DU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 46 - GateDrv1Mask1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x002EU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 47 - GateDrv1Mask2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x002FU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 48 - GateDrv1Diag0Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0030U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 49 - GateDrv1Diag1Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0031U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 50 - GateDrv1Diag2Seq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0032U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 51 - GateDrv1CtrlSeq */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0033U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0002U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 52 - TmplMonrSeq1 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0034U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 53 - TmplMonrSeq2 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0035U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 54 - TmplMonrSeq3 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0036U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 55 - TmplMonrSeq4 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0037U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 56 - TmplMonrSeq5 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0038U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 57 - PwrSplySeq1 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0039U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 58 - PwrSplySeq2 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x003AU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 59 - PwrSplySeq3 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x003BU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 60 - PwrSplySeq4 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x003CU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 61 - PwrSplySeq5 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x003DU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 62 - PwrSplySeq6 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x003EU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 63 - PwrSplySeq7 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x003FU,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 64 - PwrSplySeq8 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0040U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 65 - PwrSplySeq9 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0041U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  },

  /* Index: 66 - PwrSplySeq10 */
  {
    /* *pSpiSeqEndNotification */
    /* MISRA Violation: START Msg(4:3635)-2 */
     NULL_PTR,
    /* END Msg(4:3635)-2 */

    /* ddNoOfJobs */
    0x0001U,

    /* ddJobListIndex */
    0x0042U,

    /* usStsValueStartByteIdx */
    0x0000U,

    /* usStsCheckByteIdx */
    0x0000U,

    /* usStsUpdateStartByteIdx */
    0x0000U,

    /* usHWListIndex */
    0x0001U,

    /* ucNoOfStsByteValue */
    0x00U,

    /* ucStsByteMask */
    0x00U
  }
};



/* Pointer to the structure of DMA configuration array */
/* CONST(Spi_DmaUnitConfig, SPI_CONST) Spi_GstDmaUnitConfig[]; */

/* Channel list */
CONST(Spi_ChannelType, SPI_CONST) Spi_GaaChannelList[] =
{
  /* Linked channels for job: 0 - GateDrv0Cfg0Job */
    0x0000U,

  /* Linked channels for job: 1 - GateDrv0Cfg1Job */
    0x0001U,

  /* Linked channels for job: 2 - GateDrv0Cfg2Job */
    0x0002U,

  /* Linked channels for job: 3 - GateDrv0Cfg3Job */
    0x0003U,

  /* Linked channels for job: 4 - GateDrv0Cfg4Job */
    0x0004U,

  /* Linked channels for job: 5 - GateDrv0Cfg5Job */
    0x0005U,

  /* Linked channels for job: 6 - GateDrv0Cfg6Job */
    0x0006U,

  /* Linked channels for job: 7 - GateDrv0Cfg7Job */
    0x0007U,

  /* Linked channels for job: 8 - GateDrv0Cfg8Job */
    0x0008U,

  /* Linked channels for job: 9 - GateDrv0Cfg9Job */
    0x0009U,

  /* Linked channels for job: 10 - GateDrv0Cfg10Job */
    0x000AU,

  /* Linked channels for job: 11 - GateDrv0Cfg11Job */
    0x000BU,

  /* Linked channels for job: 12 - GateDrv0Cfg12Job */
    0x000CU,

  /* Linked channels for job: 13 - GateDrv0Cfg13Job */
    0x000DU,

  /* Linked channels for job: 14 - GateDrv0VrfyCmd0Job */
    0x000EU,

  /* Linked channels for job: 15 - GateDrv0VrfyCmd1Job */
    0x000FU,

  /* Linked channels for job: 16 - GateDrv0VrfyCmd2Job */
    0x0010U,

  /* Linked channels for job: 17 - GateDrv0VrfyRes0Job */
    0x0011U,

  /* Linked channels for job: 18 - GateDrv0VrfyRes1Job */
    0x0012U,

  /* Linked channels for job: 19 - GateDrv0Mask0Job */
    0x0013U,

  /* Linked channels for job: 20 - GateDrv0Mask1Job */
    0x0014U,

  /* Linked channels for job: 21 - GateDrv0Mask2Job */
    0x0015U,

  /* Linked channels for job: 22 - GateDrv0Diag0Job */
    0x0016U,

  /* Linked channels for job: 23 - GateDrv0Diag1Job */
    0x0017U,

  /* Linked channels for job: 24 - GateDrv0Diag2Job */
    0x0018U,

  /* Linked channels for job: 25 - GateDrv0CtrlJob */
    0x0019U,

  /* Linked channels for job: 26 - GateDrv1Cfg0Job */
    0x001AU,

  /* Linked channels for job: 27 - GateDrv1Cfg1Job */
    0x001BU,

  /* Linked channels for job: 28 - GateDrv1Cfg2Job */
    0x001CU,

  /* Linked channels for job: 29 - GateDrv1Cfg3Job */
    0x001DU,

  /* Linked channels for job: 30 - GateDrv1Cfg4Job */
    0x001EU,

  /* Linked channels for job: 31 - GateDrv1Cfg5Job */
    0x001FU,

  /* Linked channels for job: 32 - GateDrv1Cfg6Job */
    0x0020U,

  /* Linked channels for job: 33 - GateDrv1Cfg7Job */
    0x0021U,

  /* Linked channels for job: 34 - GateDrv1Cfg8Job */
    0x0022U,

  /* Linked channels for job: 35 - GateDrv1Cfg9Job */
    0x0023U,

  /* Linked channels for job: 36 - GateDrv1Cfg10Job */
    0x0024U,

  /* Linked channels for job: 37 - GateDrv1Cfg11Job */
    0x0025U,

  /* Linked channels for job: 38 - GateDrv1Cfg12Job */
    0x0026U,

  /* Linked channels for job: 39 - GateDrv1Cfg13Job */
    0x0027U,

  /* Linked channels for job: 40 - GateDrv1VrfyCmd0Job */
    0x0028U,

  /* Linked channels for job: 41 - GateDrv1VrfyCmd1Job */
    0x0029U,

  /* Linked channels for job: 42 - GateDrv1VrfyCmd2Job */
    0x002AU,

  /* Linked channels for job: 43 - GateDrv1VrfyRes0Job */
    0x002BU,

  /* Linked channels for job: 44 - GateDrv1VrfyRes1Job */
    0x002CU,

  /* Linked channels for job: 45 - GateDrv1Mask0Job */
    0x002DU,

  /* Linked channels for job: 46 - GateDrv1Mask1Job */
    0x002EU,

  /* Linked channels for job: 47 - GateDrv1Mask2Job */
    0x002FU,

  /* Linked channels for job: 48 - GateDrv1Diag0Job */
    0x0030U,

  /* Linked channels for job: 49 - GateDrv1Diag1Job */
    0x0031U,

  /* Linked channels for job: 50 - GateDrv1Diag2Job */
    0x0032U,

  /* Linked channels for job: 51 - GateDrv1CtrlJob */
    0x0033U,

  /* Linked channels for job: 52 - TmplMonrJob1 */
    0x0034U,

  /* Linked channels for job: 53 - TmplMonrJob2 */
    0x0035U,

  /* Linked channels for job: 54 - TmplMonrJob3 */
    0x0036U,

  /* Linked channels for job: 55 - TmplMonrJob4 */
    0x0037U,

  /* Linked channels for job: 56 - TmplMonrJob5 */
    0x0038U,

  /* Linked channels for job: 57 - PwrSplyJob1 */
    0x0039U,

  /* Linked channels for job: 58 - PwrSplyJob2 */
    0x003AU,

  /* Linked channels for job: 59 - PwrSplyJob3 */
    0x003BU,

  /* Linked channels for job: 60 - PwrSplyJob4 */
    0x003CU,

  /* Linked channels for job: 61 - PwrSplyJob5 */
    0x003DU,

  /* Linked channels for job: 62 - PwrSplyJob6 */
    0x003EU,

  /* Linked channels for job: 63 - PwrSplyJob7 */
    0x003FU,

  /* Linked channels for job: 64 - PwrSplyJob8 */
    0x0040U,

  /* Linked channels for job: 65 - PwrSplyJob9 */
    0x0041U,

  /* Linked channels for job: 66 - PwrSplyJob10 */
    0x0042U
};



/* Job list */
CONST(Spi_JobListType, SPI_CONST) Spi_GstJobList[] =
{
  /* Index: 0 - GateDrv0Cfg0Job */
  {
    /* ddJobIndex */
    0x0000U,

    /* ddSequenceIndex */
    0x0000U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 1 - GateDrv0Cfg1Job */
  {
    /* ddJobIndex */
    0x0001U,

    /* ddSequenceIndex */
    0x0001U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 2 - GateDrv0Cfg2Job */
  {
    /* ddJobIndex */
    0x0002U,

    /* ddSequenceIndex */
    0x0002U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 3 - GateDrv0Cfg3Job */
  {
    /* ddJobIndex */
    0x0003U,

    /* ddSequenceIndex */
    0x0003U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 4 - GateDrv0Cfg4Job */
  {
    /* ddJobIndex */
    0x0004U,

    /* ddSequenceIndex */
    0x0004U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 5 - GateDrv0Cfg5Job */
  {
    /* ddJobIndex */
    0x0005U,

    /* ddSequenceIndex */
    0x0005U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 6 - GateDrv0Cfg6Job */
  {
    /* ddJobIndex */
    0x0006U,

    /* ddSequenceIndex */
    0x0006U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 7 - GateDrv0Cfg7Job */
  {
    /* ddJobIndex */
    0x0007U,

    /* ddSequenceIndex */
    0x0007U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 8 - GateDrv0Cfg8Job */
  {
    /* ddJobIndex */
    0x0008U,

    /* ddSequenceIndex */
    0x0008U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 9 - GateDrv0Cfg9Job */
  {
    /* ddJobIndex */
    0x0009U,

    /* ddSequenceIndex */
    0x0009U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 10 - GateDrv0Cfg10Job */
  {
    /* ddJobIndex */
    0x000AU,

    /* ddSequenceIndex */
    0x000AU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 11 - GateDrv0Cfg11Job */
  {
    /* ddJobIndex */
    0x000BU,

    /* ddSequenceIndex */
    0x000BU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 12 - GateDrv0Cfg12Job */
  {
    /* ddJobIndex */
    0x000CU,

    /* ddSequenceIndex */
    0x000CU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 13 - GateDrv0Cfg13Job */
  {
    /* ddJobIndex */
    0x000DU,

    /* ddSequenceIndex */
    0x000DU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 14 - GateDrv0VrfyCmd0Job */
  {
    /* ddJobIndex */
    0x000EU,

    /* ddSequenceIndex */
    0x000EU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 15 - GateDrv0VrfyCmd1Job */
  {
    /* ddJobIndex */
    0x000FU,

    /* ddSequenceIndex */
    0x000FU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 16 - GateDrv0VrfyCmd2Job */
  {
    /* ddJobIndex */
    0x0010U,

    /* ddSequenceIndex */
    0x0010U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 17 - GateDrv0VrfyRes0Job */
  {
    /* ddJobIndex */
    0x0011U,

    /* ddSequenceIndex */
    0x0011U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 18 - GateDrv0VrfyRes1Job */
  {
    /* ddJobIndex */
    0x0012U,

    /* ddSequenceIndex */
    0x0012U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 19 - GateDrv0Mask0Job */
  {
    /* ddJobIndex */
    0x0013U,

    /* ddSequenceIndex */
    0x0013U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 20 - GateDrv0Mask1Job */
  {
    /* ddJobIndex */
    0x0014U,

    /* ddSequenceIndex */
    0x0014U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 21 - GateDrv0Mask2Job */
  {
    /* ddJobIndex */
    0x0015U,

    /* ddSequenceIndex */
    0x0015U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 22 - GateDrv0Diag0Job */
  {
    /* ddJobIndex */
    0x0016U,

    /* ddSequenceIndex */
    0x0016U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 23 - GateDrv0Diag1Job */
  {
    /* ddJobIndex */
    0x0017U,

    /* ddSequenceIndex */
    0x0017U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 24 - GateDrv0Diag2Job */
  {
    /* ddJobIndex */
    0x0018U,

    /* ddSequenceIndex */
    0x0018U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 25 - GateDrv0CtrlJob */
  {
    /* ddJobIndex */
    0x0019U,

    /* ddSequenceIndex */
    0x0019U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 26 - GateDrv1Cfg0Job */
  {
    /* ddJobIndex */
    0x001AU,

    /* ddSequenceIndex */
    0x001AU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 27 - GateDrv1Cfg1Job */
  {
    /* ddJobIndex */
    0x001BU,

    /* ddSequenceIndex */
    0x001BU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 28 - GateDrv1Cfg2Job */
  {
    /* ddJobIndex */
    0x001CU,

    /* ddSequenceIndex */
    0x001CU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 29 - GateDrv1Cfg3Job */
  {
    /* ddJobIndex */
    0x001DU,

    /* ddSequenceIndex */
    0x001DU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 30 - GateDrv1Cfg4Job */
  {
    /* ddJobIndex */
    0x001EU,

    /* ddSequenceIndex */
    0x001EU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 31 - GateDrv1Cfg5Job */
  {
    /* ddJobIndex */
    0x001FU,

    /* ddSequenceIndex */
    0x001FU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 32 - GateDrv1Cfg6Job */
  {
    /* ddJobIndex */
    0x0020U,

    /* ddSequenceIndex */
    0x0020U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 33 - GateDrv1Cfg7Job */
  {
    /* ddJobIndex */
    0x0021U,

    /* ddSequenceIndex */
    0x0021U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 34 - GateDrv1Cfg8Job */
  {
    /* ddJobIndex */
    0x0022U,

    /* ddSequenceIndex */
    0x0022U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 35 - GateDrv1Cfg9Job */
  {
    /* ddJobIndex */
    0x0023U,

    /* ddSequenceIndex */
    0x0023U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 36 - GateDrv1Cfg10Job */
  {
    /* ddJobIndex */
    0x0024U,

    /* ddSequenceIndex */
    0x0024U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 37 - GateDrv1Cfg11Job */
  {
    /* ddJobIndex */
    0x0025U,

    /* ddSequenceIndex */
    0x0025U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 38 - GateDrv1Cfg12Job */
  {
    /* ddJobIndex */
    0x0026U,

    /* ddSequenceIndex */
    0x0026U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 39 - GateDrv1Cfg13Job */
  {
    /* ddJobIndex */
    0x0027U,

    /* ddSequenceIndex */
    0x0027U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 40 - GateDrv1VrfyCmd0Job */
  {
    /* ddJobIndex */
    0x0028U,

    /* ddSequenceIndex */
    0x0028U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 41 - GateDrv1VrfyCmd1Job */
  {
    /* ddJobIndex */
    0x0029U,

    /* ddSequenceIndex */
    0x0029U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 42 - GateDrv1VrfyCmd2Job */
  {
    /* ddJobIndex */
    0x002AU,

    /* ddSequenceIndex */
    0x002AU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 43 - GateDrv1VrfyRes0Job */
  {
    /* ddJobIndex */
    0x002BU,

    /* ddSequenceIndex */
    0x002BU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 44 - GateDrv1VrfyRes1Job */
  {
    /* ddJobIndex */
    0x002CU,

    /* ddSequenceIndex */
    0x002CU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 45 - GateDrv1Mask0Job */
  {
    /* ddJobIndex */
    0x002DU,

    /* ddSequenceIndex */
    0x002DU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 46 - GateDrv1Mask1Job */
  {
    /* ddJobIndex */
    0x002EU,

    /* ddSequenceIndex */
    0x002EU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 47 - GateDrv1Mask2Job */
  {
    /* ddJobIndex */
    0x002FU,

    /* ddSequenceIndex */
    0x002FU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 48 - GateDrv1Diag0Job */
  {
    /* ddJobIndex */
    0x0030U,

    /* ddSequenceIndex */
    0x0030U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 49 - GateDrv1Diag1Job */
  {
    /* ddJobIndex */
    0x0031U,

    /* ddSequenceIndex */
    0x0031U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 50 - GateDrv1Diag2Job */
  {
    /* ddJobIndex */
    0x0032U,

    /* ddSequenceIndex */
    0x0032U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 51 - GateDrv1CtrlJob */
  {
    /* ddJobIndex */
    0x0033U,

    /* ddSequenceIndex */
    0x0033U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 52 - TmplMonrJob1 */
  {
    /* ddJobIndex */
    0x0034U,

    /* ddSequenceIndex */
    0x0034U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 53 - TmplMonrJob2 */
  {
    /* ddJobIndex */
    0x0035U,

    /* ddSequenceIndex */
    0x0035U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 54 - TmplMonrJob3 */
  {
    /* ddJobIndex */
    0x0036U,

    /* ddSequenceIndex */
    0x0036U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 55 - TmplMonrJob4 */
  {
    /* ddJobIndex */
    0x0037U,

    /* ddSequenceIndex */
    0x0037U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 56 - TmplMonrJob5 */
  {
    /* ddJobIndex */
    0x0038U,

    /* ddSequenceIndex */
    0x0038U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 57 - PwrSplyJob1 */
  {
    /* ddJobIndex */
    0x0039U,

    /* ddSequenceIndex */
    0x0039U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 58 - PwrSplyJob2 */
  {
    /* ddJobIndex */
    0x003AU,

    /* ddSequenceIndex */
    0x003AU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 59 - PwrSplyJob3 */
  {
    /* ddJobIndex */
    0x003BU,

    /* ddSequenceIndex */
    0x003BU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 60 - PwrSplyJob4 */
  {
    /* ddJobIndex */
    0x003CU,

    /* ddSequenceIndex */
    0x003CU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 61 - PwrSplyJob5 */
  {
    /* ddJobIndex */
    0x003DU,

    /* ddSequenceIndex */
    0x003DU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 62 - PwrSplyJob6 */
  {
    /* ddJobIndex */
    0x003EU,

    /* ddSequenceIndex */
    0x003EU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 63 - PwrSplyJob7 */
  {
    /* ddJobIndex */
    0x003FU,

    /* ddSequenceIndex */
    0x003FU,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 64 - PwrSplyJob8 */
  {
    /* ddJobIndex */
    0x0040U,

    /* ddSequenceIndex */
    0x0040U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 65 - PwrSplyJob9 */
  {
    /* ddJobIndex */
    0x0041U,

    /* ddSequenceIndex */
    0x0041U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  },

  /* Index: 66 - PwrSplyJob10 */
  {
    /* ddJobIndex */
    0x0042U,

    /* ddSequenceIndex */
    0x0042U,

    /* ucJobCount */
    0x00U,

    /* blIsLastJob */
    SPI_TRUE
  }
};



/* Pointer to DMA to SPI Hardware Unit mapping array */
/* CONST(uint8, SPI_CONST) Spi_GaaDmaHwUnitList[]; */

/* next Notification buffer */
/* CONST(Spi_NumberOfDataType, SPI_CONST) Spi_GaaNxtNotifyBuffer[]; */

/* Cs Index array */
CONST(uint8, SPI_CONST) Spi_GaaCsIndex[] =
{
  /* Index: 0 - GateDrv0Cfg0Job */
  0x00U,

  /* Index: 1 - GateDrv0Cfg1Job */
  0x00U,

  /* Index: 2 - GateDrv0Cfg2Job */
  0x00U,

  /* Index: 3 - GateDrv0Cfg3Job */
  0x00U,

  /* Index: 4 - GateDrv0Cfg4Job */
  0x00U,

  /* Index: 5 - GateDrv0Cfg5Job */
  0x00U,

  /* Index: 6 - GateDrv0Cfg6Job */
  0x00U,

  /* Index: 7 - GateDrv0Cfg7Job */
  0x00U,

  /* Index: 8 - GateDrv0Cfg8Job */
  0x00U,

  /* Index: 9 - GateDrv0Cfg9Job */
  0x00U,

  /* Index: 10 - GateDrv0Cfg10Job */
  0x00U,

  /* Index: 11 - GateDrv0Cfg11Job */
  0x00U,

  /* Index: 12 - GateDrv0Cfg12Job */
  0x00U,

  /* Index: 13 - GateDrv0Cfg13Job */
  0x00U,

  /* Index: 14 - GateDrv0VrfyCmd0Job */
  0x00U,

  /* Index: 15 - GateDrv0VrfyCmd1Job */
  0x00U,

  /* Index: 16 - GateDrv0VrfyCmd2Job */
  0x00U,

  /* Index: 17 - GateDrv0VrfyRes0Job */
  0x00U,

  /* Index: 18 - GateDrv0VrfyRes1Job */
  0x00U,

  /* Index: 19 - GateDrv0Mask0Job */
  0x00U,

  /* Index: 20 - GateDrv0Mask1Job */
  0x00U,

  /* Index: 21 - GateDrv0Mask2Job */
  0x00U,

  /* Index: 22 - GateDrv0Diag0Job */
  0x00U,

  /* Index: 23 - GateDrv0Diag1Job */
  0x00U,

  /* Index: 24 - GateDrv0Diag2Job */
  0x00U,

  /* Index: 25 - GateDrv0CtrlJob */
  0x00U,

  /* Index: 26 - GateDrv1Cfg0Job */
  0x02U,

  /* Index: 27 - GateDrv1Cfg1Job */
  0x02U,

  /* Index: 28 - GateDrv1Cfg2Job */
  0x02U,

  /* Index: 29 - GateDrv1Cfg3Job */
  0x02U,

  /* Index: 30 - GateDrv1Cfg4Job */
  0x02U,

  /* Index: 31 - GateDrv1Cfg5Job */
  0x02U,

  /* Index: 32 - GateDrv1Cfg6Job */
  0x02U,

  /* Index: 33 - GateDrv1Cfg7Job */
  0x02U,

  /* Index: 34 - GateDrv1Cfg8Job */
  0x02U,

  /* Index: 35 - GateDrv1Cfg9Job */
  0x02U,

  /* Index: 36 - GateDrv1Cfg10Job */
  0x02U,

  /* Index: 37 - GateDrv1Cfg11Job */
  0x02U,

  /* Index: 38 - GateDrv1Cfg12Job */
  0x02U,

  /* Index: 39 - GateDrv1Cfg13Job */
  0x02U,

  /* Index: 40 - GateDrv1VrfyCmd0Job */
  0x02U,

  /* Index: 41 - GateDrv1VrfyCmd1Job */
  0x02U,

  /* Index: 42 - GateDrv1VrfyCmd2Job */
  0x02U,

  /* Index: 43 - GateDrv1VrfyRes0Job */
  0x02U,

  /* Index: 44 - GateDrv1VrfyRes1Job */
  0x02U,

  /* Index: 45 - GateDrv1Mask0Job */
  0x02U,

  /* Index: 46 - GateDrv1Mask1Job */
  0x02U,

  /* Index: 47 - GateDrv1Mask2Job */
  0x02U,

  /* Index: 48 - GateDrv1Diag0Job */
  0x02U,

  /* Index: 49 - GateDrv1Diag1Job */
  0x02U,

  /* Index: 50 - GateDrv1Diag2Job */
  0x02U,

  /* Index: 51 - GateDrv1CtrlJob */
  0x02U
};



/* Sequence status value array */
/* CONST(uint8, SPI_CONST) Spi_GaaSeqStatusValue[]; */

#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"


/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
