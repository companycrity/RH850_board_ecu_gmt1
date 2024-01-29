/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Cfg.h                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2014 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains pre-compile time parameters.                            */
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
 * V1.0.0:  05-Dec-2012 : Initial version
 *
 * V1.0.1:  19-Mar-2013 : As per SCR 092 for Mantis issue #7957,
 *                        following changes are made:
 *                        1. "Fls_" prefix is removed from configuration set
 *                        handles macro.
 *                        2. Macro FLS_SW_PATCH_VERSION_VALUE and
 *                        FLS_FLASH_ACCESS are added.
 *                        3. Macros releated to Code Flash and Data Flash
 *                        are generated based on the pre-compile switch macro
 *                        FLS_FLASH_ACCESS.
 * V1.1.0:  24-Jul-2013 : As per CR 215 for the Mantis issue #12066, macros
 *                        FLS_E_READ_FAILED_DED, FLS_CF_OFFSET_VALUE and
 *                        FLS_ERASED_VALUE are added.
 * V1.1.1:  08-Aug-2013 : As per CR 225, F1x is renamed to X1x.
 * V1.1.2:  10-Jan-2014 : As per CR 066, for mantis issue #14560 following
 *                        changes are made:
 *                        1. Each line is limited to 80 columns.
 *                        2. COPYRIGHT information is updated.
 * V1.2.0:  23-Jun-2014 : As per CR 107 for mantis issues #19850, #20064,
 *                        #14806 and #20084, macros FLS_INTERRUPT_MODE, 
 *                        FLS_SUSPEND_API,FLS_FLENDNM_ISR_API, 
 *                        FLS_BLANKCHECK_API, FLS_RESUME_API and 
 *                        FLS_READIMMEDIATE_API are added.
 * V1.2.1:  28-Aug-2014 : As per CR 594 and mantis #22252, following changes
 *                        are made:
 *                        1. Global Symbols is updated for appending U and UL.
 *                        2. Marker IDs are added newly.
 *                        3. Changes are made at all relevant places
 *                        accordingly to append U or UL after numeric values.
 *
 */
/******************************************************************************/

/*******************************************************************************
**                       Generation Tool Version                              **
*******************************************************************************/
/*
 * TOOL VERSION:  1.3.6
 */
/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    C:\Hari\Work\SynergyProjects\T1xx_Synergy\WorkingProject_Synergy\Fls\generate\R403_FLS_P1x_BSWMDT.arxml
 *                C:\Users\nz2654\AppData\Local\Temp\DaVinci\Cfg-3747693\Generation\Cfg_Gen-1481733754247-0\AutosarFiles_ValGen-1481734289264-0\Fls_ECUC_1699074946993045946.arxml
 * GENERATED ON:  14 Dec 2016 - 11:52:16
 */
#ifndef FLS_CFG_H
#define FLS_CFG_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "MemIf_Types.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR release version information */
#define FLS_CFG_AR_RELEASE_MAJOR_VERSION  4U
#define FLS_CFG_AR_RELEASE_MINOR_VERSION  0U
#define FLS_CFG_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define FLS_CFG_SW_MAJOR_VERSION  1U
#define FLS_CFG_SW_MINOR_VERSION  3U

/*******************************************************************************
**                      Common Published Information                          **
*******************************************************************************/
/* TRACE [R4, FLS365] */
#define FLS_AR_RELEASE_MAJOR_VERSION_VALUE  4U
#define FLS_AR_RELEASE_MINOR_VERSION_VALUE  0U
#define FLS_AR_RELEASE_REVISION_VERSION_VALUE  3U

#define FLS_SW_MAJOR_VERSION_VALUE  1U
#define FLS_SW_MINOR_VERSION_VALUE  3U
#define FLS_SW_PATCH_VERSION_VALUE  1U

#define FLS_VENDOR_ID_VALUE  59U
#define FLS_MODULE_ID_VALUE  92U


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/* Instance ID of the FLS */
#define FLS_INSTANCE_ID_VALUE             0U

/* Pre-compile option for Version information */
#define FLS_AR_VERSION                    FLS_AR_HIGHER_VERSION

/* Pre-compile option for Data Flash or Code Flash */
#define FLS_FLASH_ACCESS                  FLS_DATAFLASH_ACCESS

/* TRACE [R4, FLS077] */
/* TRACE [R4, FLS162] */
/* TRACE [R4, FLS287_Conf] */
/* Pre-compile option for development error detect */
#define FLS_DEV_ERROR_DETECT              STD_ON

/* TRACE [R4, FLS293_Conf] */
/* Pre-compile option for version info API */
#define FLS_VERSION_INFO_API              STD_OFF

/* TRACE [R4, FLS285_Conf] */
/* Enable/Disable the Fls_Cancel function */
#define FLS_CANCEL_API                    STD_ON

/* TRACE [R4, FLS286_Conf] */
/* Enable/Disable the Fls_Compare function */
#define FLS_COMPARE_API                   STD_OFF

/* TRACE [R4, FLS291_Conf] */
/* Enable/Disable the Fls_SetMode function */
#define FLS_SET_MODE_API                  STD_OFF

/* TRACE [R4, FLS290_Conf] */
/* Enable/Disable the Fls_GetStatus function */
#define FLS_GET_STATUS_API                STD_ON

/* TRACE [R4, FLS289_Conf] */
/* Enable/Disable the Fls_GetJobResult function */
#define FLS_GET_JOB_RESULT_API            STD_ON

/* Enable/disable the version check of inter-module dependencies */
#define FLS_VERSION_CHECK_EXT_MODULES     STD_OFF

/* Enable/disable the Critical section protection */
#define FLS_CRITICAL_SECTION_PROTECTION   STD_ON

/* TRACE [R4, FLS299_Conf] */
/* The contents of erased flash memory cell */
#define FLS_ERASED_VALUE                  0xffffffffUL

/* TRACE [R4, FLS307_Conf] */
/* TRACE [R4, FLS274_Conf] */
/* Information whether job notification functions are configured */
#define FLS_JOB_NOTIF_CONFIG              STD_OFF

/* Code Flash Offset address */
#define FLS_CF_OFFSET_VALUE               32768UL

/* This Parameter compiles switch to enableor disable the FlsTimeout 
Supervision  */
#define FLS_TIMEOUT_MONITORING            STD_ON

/* Enable/Disable the Fls_Blankcheck function */
#define FLS_BLANKCHECK_API                STD_OFF

/* Enable/Disable the Fls_Readimmediate function */
#define FLS_READIMMEDIATE_API             STD_OFF

/* TRACE [R4, FLS292_Conf] */
/* Enable/Disable Job processing triggered by interrupt */
#define FLS_INTERRUPT_MODE                STD_OFF

/* TRACE [R4, FLS292_Conf] */
/* Enable/Disable the FLENDNM ISR function */
#define FLS_FLENDNM_ISR_API               STD_OFF

/* Enable/Disable the Fls_Suspend function */
#define FLS_SUSPEND_API                   STD_OFF

/* Enable/Disable the Fls_Resume function */
#define FLS_RESUME_API                    STD_OFF

/* TRACE [R4, FLS314_Conf] */
/* Report error to DEM that compare job failed */
#define FLS_E_COMPARE_FAILED              \
  DemConf_DemEventParameter_FLS_E_COMPARE_FAILED

/* TRACE [R4, FLS311_Conf] */
/* Report error to DEM that erase job failed */
#define FLS_E_ERASE_FAILED                \
  DemConf_DemEventParameter_FLS_E_ERASE_FAILED

/* TRACE [R4, FLS313_Conf] */
/* Report error to DEM that read job failed */
#define FLS_E_READ_FAILED                 \
  DemConf_DemEventParameter_FLS_E_READ_FAILED

/* TRACE [R4, FLS312_Conf] */
/* Report error to DEM that write job failed */
#define FLS_E_WRITE_FAILED                \
  DemConf_DemEventParameter_FLS_E_WRITE_FAILED

/* Report error to DEM that read job failed due to double bit ECC error */
#define FLS_E_READ_FAILED_DED             \
  DemConf_DemEventParameter_FLS_E_READ_FAILED_DED


/* FLS_DATAFLASH_ACCESS related macros */

/* Total amount of data flash memory in bytes */
#define FLS_DF_TOTAL_SIZE                 32768U

/*  Depends on FlsNumberOfSectors and FlsSectorSize */
#define FLS_DF_SECTOR_START_ADDRESS       4280287232UL

/* TRACE [R4, FLS281_Conf] */
/* Smallest amount of flash memory written that can be programmed */
#define FLS_PAGE_SIZE                     (uint8)4

/* Enable/Disable blank check functionality */
#define FLS_BLANK_CHECK                   FDL_NOT_SUPPORTED

/* FLS_DF_SECTOR related macros */

/* Block size of data flash memory in bytes */
#define FLS_DF_BLOCK_SIZE                 64U

/* Total number of data flash blocks */
#define FLS_DF_TOTAL_BLOCKS               512U

/* Data flash memory start address */
#define FLS_DF_BASE_ADDRESS               4280287232UL


/* Macro to make  FHVE3 and FHVE15  Registers setting available only  for supported variants  */
#define FLS_FHVE_REGS                     SUPPORTED

/* Macro for FHVE3 Register address*/
#define FLS_FHVE3                     (*((volatile uint8 *)(0xFFF82410UL)))
/* Macro for FHVE15 Register address*/
#define FLS_FHVE15                    (*((volatile uint8 *)(0xFFF8A430UL)))

/* Macro to make FLMD Registers setting available onlyfor supported variants  */
#define FLS_FLMD_REGS                     SUPPORTED

/* Macro for FLMDCNT address value */
#define FLS_FLMDCNT                   (*((volatile uint8 *)(0xFFA00000UL)))
/* Macro for FLMDPCMD address value */
#define FLS_FLMDPCMD                  (*((volatile uint8 *)(0xFFA00004UL)))


/* FLS_DF_SECTOR related macro */
#define FLS_NUMBER_OF_SECTORS_0           FLS_DF_TOTAL_BLOCKS
#define FLS_SECTOR_START_ADDRESS_0        FLS_DF_BASE_ADDRESS
#define FlS_SECTOR_SIZE_0                 FLS_DF_BLOCK_SIZE


/* Wait constant for Disabling Flash environment */
#define FLS_FLMD0_P_ON_WAIT_CONSTANT            15000U

/* Wait constant for Enabling Flash environment */
#define FLS_FLMD0_P_OFF_WAIT_CONSTANT           15000U



/* FlsConfigSet handles */
#define FlsConfigSet (&Fls_GstConfiguration[0])


/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* FLS_CFG_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
