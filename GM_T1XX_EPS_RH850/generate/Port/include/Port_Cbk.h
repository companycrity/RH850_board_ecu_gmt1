/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Port_Cbk.h                                                  */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2016 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Prototype Declarations for Port callback Notification   */
/* Functions.                                                                 */
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
/*              Devices:        P1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  21-Apr-2016 : Initial version
 */
/******************************************************************************/

/*******************************************************************************
**                       Generation Tool Version                              **
*******************************************************************************/
/*
 * TOOL VERSION:    1.3.14
 */
/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    C:\Users\nz2654\AppData\Local\Temp\DaVinci\Cfg-2484139\Generation\Cfg_Gen-1485292501329-0\AutosarFiles_ValGen-1485293917248-0\Port_ECUC_2129089976239749025.arxml
 *                C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.00_Work\Z_Work_3_8265P2_CM010A\Port\generate\R403_PORT_P1x_BSWMDT.arxml
 * GENERATED ON:  24 Jan 2017 - 16:39:02
 */

#ifndef PORT_CBK_H
#define PORT_CBK_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Dem.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR release version information */
#define PORT_CBK_AR_RELEASE_MAJOR_VERSION  4U
#define PORT_CBK_AR_RELEASE_MINOR_VERSION  0U
#define PORT_CBK_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define PORT_CBK_SW_MAJOR_VERSION  1U
#define PORT_CBK_SW_MINOR_VERSION  5U

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/


#define PORT_START_SEC_APPL_CODE
#include "MemMap.h"

extern FUNC(void, PORT_APPL_CODE) PortWrVrfyFailr 
   (Dem_EventIdType WVErrId, uint8 uiApiId);


#define PORT_STOP_SEC_APPL_CODE
#include "MemMap.h"

#endif /* PORT_CBK_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
