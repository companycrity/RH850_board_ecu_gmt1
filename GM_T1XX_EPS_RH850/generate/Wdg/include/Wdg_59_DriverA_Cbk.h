/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Cbk.h                                        */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2016 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Prototype Declarations for WDG callback                       */
/* Notification Functions                                                     */
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
 * V1.0.0:  12-Feb-2016 : Initial Version
 */
/******************************************************************************/

/*******************************************************************************
**                       Generation Tool Version                              **
*******************************************************************************/
/*
 * TOOL VERSION:    1.0.20
 */
/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    C:\Users\kzdyfh\AppData\Local\Temp\DaVinci\Cfg-9273437\Generation\Cfg_Gen-1482459280244-0\AutosarFiles_ValGen-1482459424090-0\Wdg_ECUC_5560789288325487727.arxml
 *                C:\Workspace\_EA4\T1xx\GM_T1XX_EPS_RH850_Working\Wdg\generate\R403_WDG_P1x_BSWMDT.arxml
 * GENERATED ON:  22 Dec 2016 - 21:17:29
 */

#ifndef WDG_59_DRIVERA_CBK_H
#define WDG_59_DRIVERA_CBK_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Dem.h"
#include "Wdg_59_DriverA_Cfg.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR release version information */
#define WDG_59_DRIVERA_CBK_AR_RELEASE_MAJOR_VERSION  4U
#define WDG_59_DRIVERA_CBK_AR_RELEASE_MINOR_VERSION  0U
#define WDG_59_DRIVERA_CBK_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define WDG_59_DRIVERA_CBK_SW_MAJOR_VERSION  1U
#define WDG_59_DRIVERA_CBK_SW_MINOR_VERSION  0U


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/


#define WDG_59_DRIVERA_START_SEC_APPL_CODE
#include "MemMap.h"

extern FUNC(void, WDG_59_DRIVERA_APPL_CODE) WdgWrVrfyFailr
                               (Dem_EventIdType WVErrId, uint8 uiApiId);

#define WDG_59_DRIVERA_STOP_SEC_APPL_CODE
#include "MemMap.h"

#endif /* WDG_59_DRIVERA_CBK_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/

