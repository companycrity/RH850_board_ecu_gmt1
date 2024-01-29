/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Irq.h                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2014 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision for prototypes of Interrupt Service Routines.                    */
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
 * V1.0.0:  01-Apr-2014  : Initial Version.
 *
 * V1.0.1:  13-Jun-2014  : As per CR 494 for mantis issues #20137
 *                         "FLS_FLERR_ISR" has been removed.
 */
/******************************************************************************/
#ifndef FLS_IRQ_H
#define FLS_IRQ_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Fls_Ram.h"
#include "Fls_Types.h"
/* Included for interrupt category definitions */
#include "Os.h"
/*******************************************************************************
**                      Version Information                                  **
*******************************************************************************/
/* AUTOSAR Release version information */
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)/*START of FLS_AR_VERSION*/
#define FLS_IRQ_AR_RELEASE_MAJOR_VERSION   FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_IRQ_AR_RELEASE_MINOR_VERSION   FLS_AR_RELEASE_MINOR_VERSION
#define FLS_IRQ_AR_RELEASE_REVISION_VERSION FLS_AR_RELEASE_REVISION_VERSION

#elif(FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* AUTOSAR specification version information */
#define FLS_IRQ_AR_MAJOR_VERSION  FLS_AR_MAJOR_VERSION_VALUE
#define FLS_IRQ_AR_MINOR_VERSION  FLS_AR_MINOR_VERSION_VALUE
#define FLS_IRQ_AR_PATCH_VERSION  FLS_AR_PATCH_VERSION_VALUE
#endif /*END of FLS_AR_VERSION*/

/* File version information */
#define FLS_IRQ_SW_MAJOR_VERSION  FLS_SW_MAJOR_VERSION
#define FLS_IRQ_SW_MINOR_VERSION  FLS_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define FLS_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2 interrupt mapping */
#if defined (Os_FLS_FLENDNM_CAT2_ISR) || defined (FLS_FLENDNM_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, FLS_FAST_CODE) FLS_FLENDNM_ISR(void);
#endif

#define FLS_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif  /* FLS_IRQ_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
