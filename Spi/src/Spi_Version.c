/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Version.c                                               */
/*============================================================================*/
/*                               COPYRIGHT                                    */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains code for version check for modules included by SPI      */
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
 * V1.0.1:  01-Oct-2012  : As per SCR 021 Version check for OS is added
 *
 * V1.0.2:  19-Oct-2012  : As per SCR 029 SPI_VERSION_CHECK_EXT_MODULES macro
 *                         check is re-ordered
 *
 * V1.0.3:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.0.4:  15-Jan-2014  : As per CR 330, updated as per C coding guideline.
 *
 * V1.0.5:  17-Jul-2014  : As per CR 550, alignment of revision history is
 *                         updated.
 *
 * V1.0.6:  01-Aug-2014  : As per CR 581 for mantis #20712 and #22858,
 *                         file is updated after spell check.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi_Version.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION */

/* AUTOSAR release version information */
#define SPI_VERSION_C_AR_RELEASE_MAJOR_VERSION \
                                  SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_VERSION_C_AR_RELEASE_MINOR_VERSION \
                                  SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_VERSION_C_AR_RELEASE_REVISION_VERSION \
                               SPI_AR_RELEASE_REVISION_VERSION_VALUE

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_VERSION  */

/* AUTOSAR specification version information */
#define SPI_VERSION_C_AR_MAJOR_VERSION    SPI_AR_MAJOR_VERSION_VALUE
#define SPI_VERSION_C_AR_MINOR_VERSION    SPI_AR_MINOR_VERSION_VALUE
#define SPI_VERSION_C_AR_PATCH_VERSION    SPI_AR_PATCH_VERSION_VALUE

#endif /*END of SPI_AR_VERSION */

/* File version information */
#define SPI_VERSION_C_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION_VALUE
#define SPI_VERSION_C_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION */

#if (SPI_VERSION_AR_RELEASE_MAJOR_VERSION != \
                                         SPI_VERSION_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Major Version"
#endif

#if (SPI_VERSION_AR_RELEASE_MINOR_VERSION != \
                                         SPI_VERSION_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Minor Version"
#endif

#if (SPI_VERSION_AR_RELEASE_REVISION_VERSION != \
                                      SPI_VERSION_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Version.c : Mismatch in Release Revision Version"
#endif

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_LOWER_VERSION  */
#if (SPI_VERSION_AR_MAJOR_VERSION != SPI_VERSION_C_AR_MAJOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Major Version"
#endif

#if (SPI_VERSION_AR_MINOR_VERSION != SPI_VERSION_C_AR_MINOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Minor Version"
#endif

#if (SPI_VERSION_AR_PATCH_VERSION != SPI_VERSION_C_AR_PATCH_VERSION)
  #error "Spi_Version.c : Mismatch in Release Revision Version"
#endif
#endif /*END of SPI_AR_VERSION */

#if (SPI_VERSION_SW_MAJOR_VERSION != SPI_VERSION_C_SW_MAJOR_VERSION)
  #error "Spi_Version.c : Mismatch in Major Version"
#endif

#if (SPI_VERSION_SW_MINOR_VERSION != SPI_VERSION_C_SW_MINOR_VERSION)
  #error "Spi_Version.c : Mismatch in Minor Version"
#endif

#if (SPI_VERSION_CHECK_EXT_MODULES == STD_ON)
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION) /*START of SPI_AR_VERSION */
#if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
#if ((RTE_AR_RELEASE_MAJOR_VERSION != SPI_AR_RELEASE_MAJOR_VERSION) \
 || (RTE_AR_RELEASE_MINOR_VERSION != SPI_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Rte.h does not match the expected version"
#endif
#endif /* End of SPI_CRITICAL_SECTION_PROTECTION */

#if (SPI_DEV_ERROR_DETECT == STD_ON)
#if ((DET_AR_RELEASE_MAJOR_VERSION != SPI_AR_RELEASE_MAJOR_VERSION) \
 || (DET_AR_RELEASE_MINOR_VERSION != SPI_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif
#endif /* End of SPI_DEV_ERROR_DETECT */

#if ((OS_AR_RELEASE_MAJOR_VERSION != SPI_AR_RELEASE_MAJOR_VERSION) \
 || (OS_AR_RELEASE_MINOR_VERSION != SPI_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Os.h does not match the expected version"
#endif

#if ((DEM_AR_RELEASE_MAJOR_VERSION != SPI_AR_RELEASE_MAJOR_VERSION) \
 || (DEM_AR_RELEASE_MINOR_VERSION != SPI_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Dem.h does not match the expected version"
#endif
#endif /* End of SPI_AR_VERSION */

#if (SPI_AR_VERSION  == SPI_AR_LOWER_VERSION) /*START of SPI_AR_VERSION */

#if (DEM_AR_MAJOR_VERSION != SPI_DEM_AR_MAJOR_VERSION)
  #error "Dem.h : Mismatch in Specification Major Version"
#endif
#if (DEM_AR_MINOR_VERSION != SPI_DEM_AR_MINOR_VERSION)
  #error "Dem.h : Mismatch in Specification Minor Version"
#endif

#if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
#if (SCHM_AR_MAJOR_VERSION != SPI_SCHM_AR_MAJOR_VERSION)
  #error "SchM.h : Mismatch in Specification Major Version"
#endif
#if (SCHM_AR_MINOR_VERSION != SPI_SCHM_AR_MINOR_VERSION)
  #error "SchM.h : Mismatch in Specification Minor Version"
#endif
#endif /* END of SPI_CRITICAL_SECTION_PROTECTION */

#if (SPI_DEV_ERROR_DETECT == STD_ON)
#if (DET_AR_MAJOR_VERSION != SPI_DET_AR_MAJOR_VERSION)
  #error "Det.h : Mismatch in Specification Major Version"
#endif
#if (DET_AR_MINOR_VERSION != SPI_DET_AR_MINOR_VERSION)
  #error "Det.h : Mismatch in Specification Minor Version"
#endif
#endif/* END of SPI_DEV_ERROR_DETECT */

#if (OS_AR_MAJOR_VERSION != SPI_OS_AR_MAJOR_VERSION)
  #error "Os.h : Mismatch in Specification Major Version"
#endif
#if (OS_AR_MINOR_VERSION != SPI_OS_AR_MINOR_VERSION)
  #error "Os.h : Mismatch in Specification Minor Version"
#endif

#endif /* End of SPI_AR_VERSION */
#endif /* End of SPI_VERSION_CHECK_EXT_MODULES */
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
