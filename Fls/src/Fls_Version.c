/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Version.c                                               */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains code for version checking for modules included by FLS   */
/* Driver                                                                     */
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
 * V1.0.0:  02-Nov-2012    : Initial Version
 *
 * V1.0.1:  08-Aug-2013    : As per CR 225, Device name and copyright
 *                           information is updated as part of merge activity.
 *
 * V1.0.2:  03-Oct-2013    : As per CR 242, version check for MEMIF module
 *                           are added.
 *
 * V1.1.0:  01-Apr-2014    : As per CR 426 for Mantis issues #19629, following
 *                           changes are made:
 *                           1. Version check for OS module is added.
 *                           2. The Copyright information is updated.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*
 * Included for Fls module version information and other modules version
 * information
 */
#include "Fls_Version.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* AUTOSAR release version information */
#define FLS_VERSION_C_AR_RELEASE_MAJOR_VERSION \
                                  FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_VERSION_C_AR_RELEASE_MINOR_VERSION \
                                  FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_VERSION_C_AR_RELEASE_REVISION_VERSION \
                               FLS_AR_RELEASE_REVISION_VERSION_VALUE
#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* AUTOSAR Specification version information */
#define FLS_VERSION_C_AR_MAJOR_VERSION    FLS_AR_MAJOR_VERSION_VALUE
#define FLS_VERSION_C_AR_MINOR_VERSION    FLS_AR_MINOR_VERSION_VALUE
#define FLS_VERSION_C_AR_PATCH_VERSION    FLS_AR_PATCH_VERSION_VALUE
#endif

/* File version information */
#define FLS_VERSION_C_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_VERSION_C_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)

#if (FLS_VERSION_AR_RELEASE_MAJOR_VERSION != \
                              FLS_VERSION_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls_Version.c : Mismatch in Release Major Version"
#endif
#if (FLS_VERSION_AR_RELEASE_MINOR_VERSION != \
                              FLS_VERSION_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls_Version.c : Mismatch in Release Minor Version"
#endif
#if (FLS_VERSION_AR_RELEASE_REVISION_VERSION != \
                           FLS_VERSION_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls_Version.c : Mismatch in Release Revision Version"
#endif
#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)

#if (FLS_VERSION_AR_MAJOR_VERSION != FLS_VERSION_C_AR_MAJOR_VERSION)
  #error "Fls_Version.c : Mismatch in Specification Major Version"
#endif
#if (FLS_VERSION_AR_MINOR_VERSION != FLS_VERSION_C_AR_MINOR_VERSION)
  #error "Fls_Version.c : Mismatch in Specification Minor Version"
#endif
#if (FLS_VERSION_AR_PATCH_VERSION != FLS_VERSION_C_AR_PATCH_VERSION)
  #error "Fls_Version.c : Mismatch in Specification Patch Version"
#endif
#endif /* (FLS_AR_VERSION == FLS_AR_LOWER_VERSION) */

#if (FLS_VERSION_SW_MAJOR_VERSION != FLS_VERSION_C_SW_MAJOR_VERSION)
  #error "Fls_Version.c : Mismatch in Software Major Version"
#endif
#if (FLS_VERSION_SW_MINOR_VERSION != FLS_VERSION_C_SW_MINOR_VERSION)
  #error "Fls_Version.c : Mismatch in Software Minor Version"
#endif

#if (FLS_VERSION_CHECK_EXT_MODULES == STD_ON)

#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* Rte Module Version Check */
#if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
#if ((RTE_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (RTE_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Rte.h does not match the expected version"
#endif
#endif /* (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
/* Det Module Version Check */
#if (FLS_DEV_ERROR_DETECT == STD_ON)
#if ((DET_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (DET_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif
#endif /* End of FLS_DEV_ERROR_DETECT */
/* Dem Module Version Check */
#if ((DEM_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (DEM_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Dem.h does not match the expected version"
#endif
/* MemIf Module Version Check */
#if ((MEMIF_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (MEMIF_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of MemIf.h does not match the expected version"
#endif
/* Os Module Version Check */
#if ((OS_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (OS_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Os.h does not match the expected version"
#endif
#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)

#if (FLS_DEV_ERROR_DETECT == STD_ON)
#if (DET_AR_MAJOR_VERSION != FLS_DET_AR_MAJOR_VERSION)
  #error "Det.h : Mismatch in Specification Major Version"
#endif

#if (DET_AR_MINOR_VERSION != FLS_DET_AR_MINOR_VERSION)
  #error "Det.h : Mismatch in Specification Minor Version"
#endif
#endif /* End of FLS_DEV_ERROR_DETECT */
/* Dem Module Version Check */
#if (DEM_AR_MAJOR_VERSION != FLS_DEM_AR_MAJOR_VERSION)
  #error "Dem.h : Mismatch in Specification Major Version"
#endif
#if (DEM_AR_MINOR_VERSION != FLS_DEM_AR_MINOR_VERSION)
  #error "Dem.h : Mismatch in Specification Minor Version"
#endif
#if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
#if (SCHM_AR_MAJOR_VERSION != FLS_SCHM_AR_MAJOR_VERSION)
  #error "SchM.h : Mismatch in Specification Major Version"
#endif

#if (SCHM_AR_MINOR_VERSION != FLS_SCHM_AR_MINOR_VERSION)
  #error "SchM.h : Mismatch in Specification Minor Version"
#endif
#endif /* (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
/* MemIf Module Version Check */
#if (MEMIF_AR_MAJOR_VERSION != FLS_MEMIF_AR_MAJOR_VERSION)
  #error "MemIf.h : Mismatch in Specification Major Version"
#endif
#if (MEMIF_AR_MINOR_VERSION != FLS_MEMIF_AR_MINOR_VERSION)
  #error "MemIf.h : Mismatch in Specification Minor Version"
#endif
/* Os Module Version Check */
#if (OS_AR_MAJOR_VERSION != FLS_OS_AR_MAJOR_VERSION)
  #error "Os.h : Mismatch in Specification Major Version"
#endif
#if (OS_AR_MINOR_VERSION != FLS_OS_AR_MINOR_VERSION)
  #error "Os.h : Mismatch in Specification Minor Version"
#endif
#endif /* (FLS_AR_VERSION == FLS_AR_LOWER_VERSION) */
#endif /* End of FLS_VERSION_CHECK_EXT_MODULES */

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
