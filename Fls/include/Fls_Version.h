/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Version.h                                               */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros required for checking versions of modules        */
/* included by FLS Driver                                                     */
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
 * V1.0.2:  03-Oct-2013    : As per CR 242, macros for versions of MEMIF module
 *                           are added.
 *
 * V1.1.0:  01-Apr-2014    : As per CR 426 for Mantis issues #19629, following
 *                           changes are made:
 *                           1. Macros for versions of OS module are added.
 *                           2. The Copyright information is updated.
 *
 * V1.1.1:  17-Feb-2015    : As per Mantis Ticket #25965, pre compile switch to
 *                           wrap the include of MemIf.h is added.
 *
 */
/******************************************************************************/
#ifndef FLS_VERSION_H
#define FLS_VERSION_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for version information macros */
#include "Fls.h"
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* DET module version information is required only when DET is enabled */
#include "Det.h"
#endif
/* DEM module version information*/
#include "Dem.h"

#if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
/*
 * RTE module version information is required only when critical section
 * protection is enabled
 */
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */
#include "Rte.h"
#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
#include "SchM.h"
#endif /*END of FLS_AR_VERSION*/
#endif
/* Memif module version information*/
#if (FLS_VERSION_CHECK_EXT_MODULES == STD_ON)
#include "MemIf.h"
#endif
/* Memif module version information*/
#include "Os.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* AUTOSAR Release version information */
#define FLS_VERSION_AR_RELEASE_MAJOR_VERSION      FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_VERSION_AR_RELEASE_MINOR_VERSION      FLS_AR_RELEASE_MINOR_VERSION
#define FLS_VERSION_AR_RELEASE_REVISION_VERSION   \
                                               FLS_AR_RELEASE_REVISION_VERSION
#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* AUTOSAR specification version information */
#define FLS_VERSION_AR_MAJOR_VERSION   FLS_AR_MAJOR_VERSION_VALUE
#define FLS_VERSION_AR_MINOR_VERSION   FLS_AR_MINOR_VERSION_VALUE
#define FLS_VERSION_AR_PATCH_VERSION   FLS_AR_PATCH_VERSION_VALUE

/* Included Files Autosar Specification Version */
#if (FLS_DEV_ERROR_DETECT == STD_ON)
#define FLS_DET_AR_MAJOR_VERSION   2
#define FLS_DET_AR_MINOR_VERSION   2
#endif

#define FLS_DEM_AR_MAJOR_VERSION  3
#define FLS_DEM_AR_MINOR_VERSION  3

#define FLS_SCHM_AR_MAJOR_VERSION  1
#define FLS_SCHM_AR_MINOR_VERSION  2

#define FLS_MEMIF_AR_MAJOR_VERSION  1
#define FLS_MEMIF_AR_MINOR_VERSION  3

#define FLS_OS_AR_MAJOR_VERSION  3
#define FLS_OS_AR_MINOR_VERSION  2
#endif

/* Module Software version information */
#define FLS_VERSION_SW_MAJOR_VERSION   FLS_SW_MAJOR_VERSION
#define FLS_VERSION_SW_MINOR_VERSION   FLS_SW_MINOR_VERSION

#endif /* FLS_VERSION_H  */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
