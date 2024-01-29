/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Lcfg.c                                                  */
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
 *  V1.1.0:  29-Jan-2013  : As per SCR 072, condition for generating element
 *                          'pTxCancelIntCntlAddress', 'pTxCancelImrAddress'
 *                          and 'usTxCancelImrMask' in 'Spi_GstHWUnitInfo'
 *                          structure is updated.
 *  V1.1.1:  01-Aug-2013  : As per CR 219 for the mantis issues #9002 and
 *                          #9003 following changes are made,
 *                          1. %BswLSrcTpl::Template_Hash hash is updated.
 *                          2. Spi_GstSyncSeqEndFunc is added in
 *                          %BswLSrcTpl::Template_Hash hash.
 *  V1.1.2:  08-Aug-2013  : As per CR 225, following changes are made:
 *                          1. Document is updated as per new template
 *                             attached in mantis #11710.
 *  V1.1.3:  30-Sep-2013  : As per CR 243, for the mantis issue #8421 following
 *                          changes are made:
 *                          1. %BswLSrcTpl::Template_Hash hash is updated by
 *                          removing the structure elements Spi_GstJobFunc, 
 *                          Spi_GstSeqEndFunc, Spi_GstSyncSeqEndFunc and
 *                          Spi_GstSeqStartFunc.
 *                          2. %BswLSrcTpl::LSrc_Details hash is updated by
 *                          removing the elements Spi_GstJobFunc,
 *                          Spi_GstSeqEndFunc, Spi_GstSyncSeqEndFunc and
 *                          Spi_GstSeqStartFunc.
 *  V1.1.4:  02-Jan-2014  : As per CR 330, for the mantis issue #15705,
 *                          Copyright information is updated.
 *  V1.1.5:  28-Aug-2014  : As per CR 601, for the mantis 22252,
 *                          Changes are made at all relevant places
 *                          accordingly to append U or UL after numeric values
 *                          and to add MISRA C Rule Violation.
 */
/******************************************************************************/
 
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
#include "Spi_LTTypes.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR specification version information */
#define SPI_LCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define SPI_LCFG_C_AR_RELEASE_MINOR_VERSION  0U
#define SPI_LCFG_C_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define SPI_LCFG_C_SW_MAJOR_VERSION  1U
#define SPI_LCFG_C_SW_MINOR_VERSION  6U

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/


#if (SPI_LTTYPES_AR_RELEASE_MAJOR_VERSION != \
         SPI_LCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Release Major Version"
#endif

#if (SPI_LTTYPES_AR_RELEASE_MINOR_VERSION != \
         SPI_LCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Release Minor Version"
#endif

#if (SPI_LTTYPES_AR_RELEASE_REVISION_VERSION != \
         SPI_LCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Release Revision Version"
#endif

#if (SPI_LTTYPES_SW_MAJOR_VERSION != SPI_LCFG_C_SW_MAJOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Software Major Version"
#endif

#if (SPI_LTTYPES_SW_MINOR_VERSION != SPI_LCFG_C_SW_MINOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Software Minor Version"
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

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

#define SPI_START_SEC_VAR_NOINIT_8
#include "MemMap.h"

/* Global RAM bit array for cancel status of sequences */    
/*VAR(uint8, SPI_DATA) Spi_GaaSeqCancel[];*/

/* Global RAM bit array for cancel status of sequences */
/*VAR(uint8, SPI_NOINIT_DATA) Spi_GaaSeqCurrentHWUnit[];*/

/* Global RAM area to count repeated jobs */
VAR(uint8, SPI_DATA) Spi_GaaJobCount[67];

#define SPI_STOP_SEC_VAR_NOINIT_8
#include "MemMap.h"

#define SPI_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

/* Global RAM Area for Job result */
VAR(Spi_JobResultType, SPI_CONFIG_DATA) Spi_GaaJobResult[67];

/* Global RAM Area for Sequence result */
VAR(Spi_SeqResultType, SPI_CONFIG_DATA) Spi_GaaSeqResult[67];

/* Global RAM area for job queue for both direct access mode and FIFO mode*/ 
VAR(Spi_JobType, SPI_NOINIT_DATA) Spi_GaaJobQueue[67];



#define SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* Array for hardware unit information */
CONST(Spi_HWUnitInfo, SPI_CONST) Spi_GstHWUnitInfo[] =
{
  /* Index: 0 - CSIG0 */
  {
    /* *pHwMainUserBaseAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA))0xFFD8A000UL,
    /* END Msg(4:0306)-1 */

    /* *pHwMainOsBaseAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(Spi_MainOsRegs, AUTOMATIC,SPI_CONFIG_DATA))0xFFD8A010UL,
    /* END Msg(4:0306)-1 */

    /* *pHwUserBufferAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))0xFFD8B000UL,
    /* END Msg(4:0306)-1 */

    /* *pHwOsBufferAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))0xFFD8B010UL,
    /* END Msg(4:0306)-1 */

    /* *pRxIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB160UL,
    /* END Msg(4:0306)-1 */

    /* *pTxIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB15EUL,
    /* END Msg(4:0306)-1 */

    /* *pErrorIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB15CUL,
    /* END Msg(4:0306)-1 */

    /* pRxImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB414UL,
    /* END Msg(4:0306)-1 */

    /* pTxImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB416UL,
    /* END Msg(4:0306)-1 */

    /* pErrorImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB414UL,
    /* END Msg(4:0306)-1 */

    /* usRxImrMask */
    0x7FFFU,

    /* usTxImrMask */
    0xFFFEU,

    /* usErrorImrMask */
    0xBFFFU
  },

  /* Index: 1 - CSIH0 */
  {
    /* *pHwMainUserBaseAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA))0xFFD80000UL,
    /* END Msg(4:0306)-1 */

    /* *pHwMainOsBaseAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(Spi_MainOsRegs, AUTOMATIC,SPI_CONFIG_DATA))0xFFD80010UL,
    /* END Msg(4:0306)-1 */

    /* *pHwUserBufferAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))0xFFD81008UL,
    /* END Msg(4:0306)-1 */

    /* *pHwOsBufferAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))0xFFD81044UL,
    /* END Msg(4:0306)-1 */

    /* *pRxIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB0A6UL,
    /* END Msg(4:0306)-1 */

    /* *pTxIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB0A8UL,
    /* END Msg(4:0306)-1 */

    /* *pErrorIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB0A4UL,
    /* END Msg(4:0306)-1 */

    /* pRxImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB40AUL,
    /* END Msg(4:0306)-1 */

    /* pTxImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB40AUL,
    /* END Msg(4:0306)-1 */

    /* pErrorImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB40AUL,
    /* END Msg(4:0306)-1 */

    /* usRxImrMask */
    0xFFF7U,

    /* usTxImrMask */
    0xFFEFU,

    /* usErrorImrMask */
    0xFFFBU
  },

  /* Index: 2 - CSIH2 */
  {
    /* *pHwMainUserBaseAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA))0xFFD84000UL,
    /* END Msg(4:0306)-1 */

    /* *pHwMainOsBaseAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(Spi_MainOsRegs, AUTOMATIC,SPI_CONFIG_DATA))0xFFD84010UL,
    /* END Msg(4:0306)-1 */

    /* *pHwUserBufferAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))0xFFD85008UL,
    /* END Msg(4:0306)-1 */

    /* *pHwOsBufferAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))0xFFD85044UL,
    /* END Msg(4:0306)-1 */

    /* *pRxIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB0C6UL,
    /* END Msg(4:0306)-1 */

    /* *pTxIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB0C8UL,
    /* END Msg(4:0306)-1 */

    /* *pErrorIntCntlAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB0C4UL,
    /* END Msg(4:0306)-1 */

    /* pRxImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB40CUL,
    /* END Msg(4:0306)-1 */

    /* pTxImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB40CUL,
    /* END Msg(4:0306)-1 */

    /* pErrorImrAddress */
    /* MISRA Violation: START Msg(4:0306)-1 */
     (P2VAR(uint16, AUTOMATIC, SPI_CONFIG_DATA))0xFFFFB40CUL,
    /* END Msg(4:0306)-1 */

    /* usRxImrMask */
    0xFFF7U,

    /* usTxImrMask */
    0xFFEFU,

    /* usErrorImrMask */
    0xFFFBU
  }
};



/* Array structure for Sequence cancel */
/* CONST(Spi_SeqProcessType, SPI_CONST) Spi_GstSeqProcess[]; */

#define SPI_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
