/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Dio_Cfg.h                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2016 Renesas Electronics Corporation                     */
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
 * V1.0.0:  23-Aug-2012  : Initial Version
 * V1.0.1:  05-Mar-2013  : As per SCR 090,
 *                         1. DIO_SW_PATCH_VERSION_VALUE macro is added.
 *                         2. In R4.0.3,CONFIG_HANDLES are updated.
 * V1.0.2:  08-Aug-2013  : As per CR 225, F1x is renamed to X1x.
 * V1.0.3:  02-Jan-2014  : As per CR 331,
 *                         %BswHdrTpl::Precompile_Parameters and
 *                         %BswHdrTpl::Template_Hash are updated.
 * V1.0.4:  17-Mar-2014  : As per CR 413,
 *                         1. DIO_CRITICAL_SECTION_PROTECTION Macro is added.
 *                         2. CONFIG_HANDLES are updated.
 * V1.0.5:  27-Jul-2014  : As per CR 103 and 563, following change is made:
 *                         1. Marker IDs are added newly.
 * V1.0.6:  02-Sep-2014  : As per CR 569, Changes are made at all relevant
 *                         places accordingly to append U or UL unsigned values.
 * V1.0.7:  22-Feb-2016  : As per the ticket ARDAAAE-1052, the following macros
 *                         are added:
 *                         1. DIO_SIZE_OF_CHGRP_STRUCT
 * V1.0.8:  18-Apr-2016  : As part of V4.01.01 Release activity, following
 *                         changes are made.
 *                         1. Dem parameters DIO_E_REG_WRITE_VERIFY
 *                            is added.
 *                         2. Macro DIO_WRITE_VERIFY are added.
 */
/******************************************************************************/

/*******************************************************************************
**                   Generation Tool Version                                  **
*******************************************************************************/
/*
 * TOOL VERSION:  1.0.18
 */

/*******************************************************************************
**                          Input File                                        **
*******************************************************************************/
/*
 * INPUT FILE:    C:\Workspace\_EA4\T1xx\GM_T1XX_EPS_RH850_Working\Dio\generate\R403_DIO_P1x_BSWMDT.arxml
 *                C:\Users\kzdyfh\AppData\Local\Temp\DaVinci\Cfg-2746541\Generation\Cfg_Gen-1482452752793-0\AutosarFiles_ValGen-1482453240719-0\Dio_ECUC_7263084683401011790.arxml
 * GENERATED ON:  22 Dec 2016 - 19:34:27
 */


#ifndef DIO_CFG_H
#define DIO_CFG_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR release version information */
#define DIO_CFG_AR_RELEASE_MAJOR_VERSION  4U
#define DIO_CFG_AR_RELEASE_MINOR_VERSION  0U
#define DIO_CFG_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define DIO_CFG_SW_MAJOR_VERSION   1U
#define DIO_CFG_SW_MINOR_VERSION   0U


/*******************************************************************************
**                       Common Published Information                         **
*******************************************************************************/

#define DIO_AR_RELEASE_MAJOR_VERSION_VALUE  4U
#define DIO_AR_RELEASE_MINOR_VERSION_VALUE  0U
#define DIO_AR_RELEASE_REVISION_VERSION_VALUE  3U

#define DIO_SW_MAJOR_VERSION_VALUE  1U
#define DIO_SW_MINOR_VERSION_VALUE  0U
#define DIO_SW_PATCH_VERSION_VALUE  11U

#define DIO_VENDOR_ID_VALUE  59U
#define DIO_MODULE_ID_VALUE  120U

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/* Instance ID of the DIO Driver */
#define DIO_INSTANCE_ID_VALUE               0U

/*  Pre-compile option for Development Error Detect */
#define DIO_DEV_ERROR_DETECT                STD_ON

/*  Pre-compile option for Version Info API */
#define DIO_VERSION_INFO_API                STD_OFF

/* Pre-compile option for presence ofDio_MaskedWritePort API */
#define DIO_MASKED_WRITE_PORT_API           STD_OFF

/*  Pre-compile option for presence of Dio_FlipChannel API */
#define DIO_FLIP_CHANNEL_API                STD_OFF

/* Pre-compile option for presence of Channel */
#define DIO_CHANNEL_CONFIGURED              STD_ON

/* Pre-compile option for presence of Channel Group */
#define DIO_CHANNELGROUP_CONFIGURED         STD_OFF

/* Pre-compile option for enable or disable version check of inter-module
   dependencies */
#define DIO_VERSION_CHECK_EXT_MODULES       STD_OFF

/* Pre-compile option for critical section protection */
#define DIO_CRITICAL_SECTION_PROTECTION     STD_ON

/* Enable/Disable Error Interface */
#define DIO_USE_WV_ERROR_INTERFACE          STD_ON

/* Offset for getting PPR register address from PSR
    register address for Numeric and Alphabetic ports. */
#define DIO_PPR_OFFSET_NONJTAG              (uint8)0x02

/* Offset for getting PNOT register address
    from PSR register address for Numeric and Alphabetic ports. */
#define DIO_PNOT_OFFSET_NONJTAG             (uint16)0x01

/* Offset for getting PPR register address from PSR
    register address for JTAG ports  */
#define DIO_PPR_OFFSET_JTAG                 (uint8)0x02

/* Offset for getting JPNOT register address from JPSR
    register address for JTAG ports. */
#define DIO_PNOT_OFFSET_JTAG                (uint16)0x01

/* Offset for getting PMSR register address from PMSR
    register address for JTAG ports  */
#define DIO_PMSR_OFFSET_JTAG                (uint16)0x07

/* Offset for getting PMSR register address from
    PMSR register address for NONJTAG ports. */
#define DIO_PMSR_OFFSET_NONJTAG             (uint16)0x07


/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/* Total number of configured ports */
#define DIO_MAXNOOFPORT                     (Dio_PortType)5

/* Total number of configured channels */
#define DIO_MAXNOOFCHANNEL                  (Dio_ChannelType)24

/* The Array size of the configuredConfig Structure */
#define DIO_CONFIG_ARRAY_SIZE               (Dio_PortType)1

/* The Array size of the configured PortStructure */
#define DIO_PORT_ARRAY_SIZE                 (uint8)5

/* The Array size of the configured Channel Structure */
#define DIO_CHANNEL_ARRAY_SIZE              24

/* The Array size of the configured Channel Group Structure */
#define DIO_CHANNEL_GROUP_ARRAY_SIZE        (Dio_PortType)0

/* Total number of channel groups configuredper configset */
#define DIO_NO_OF_CHGRP_PER_CFGSET          (Dio_PortType)0

/* Configuration Set Handles */
#define DioConfig                           (&Dio_GstConfiguration[0])

/* DIO Port Configuration Handles */
#define DioConf_DioPort_Port0               (Dio_PortType)0
#define DioConf_DioPort_Port5               (Dio_PortType)1
#define DioConf_DioPort_Port4               (Dio_PortType)2
#define DioConf_DioPort_Port3               (Dio_PortType)3
#define DioConf_DioPort_Port2               (Dio_PortType)4

/* The Pointer to Port Group name */

/* DIO Channel Configuration Handles */
#define DioConf_DioChannel_PwrTurnOffCtrl   (Dio_ChannelType)0
#define DioConf_DioChannel_HwAg0            (Dio_ChannelType)1
#define DioConf_DioChannel_HwTq3            (Dio_ChannelType)2
#define DioConf_DioChannel_McuEna           (Dio_ChannelType)3
#define DioConf_DioChannel_SysFlt2B         (Dio_ChannelType)4
#define DioConf_DioChannel_TmplMonrWdg      (Dio_ChannelType)5
#define DioConf_DioChannel_PwrSplyCs        (Dio_ChannelType)6
#define DioConf_DioChannel_HwAg1            (Dio_ChannelType)7
#define DioConf_DioChannel_HwTq2            (Dio_ChannelType)8
#define DioConf_DioChannel_HwTq1            (Dio_ChannelType)9
#define DioConf_DioChannel_HwTq0            (Dio_ChannelType)10
#define DioConf_DioChannel_PwrSplyNotFlt    (Dio_ChannelType)11
#define DioConf_DioChannel_MotDrvr1Diag     (Dio_ChannelType)12
#define DioConf_DioChannel_GateDrv0Rst      (Dio_ChannelType)13
#define DioConf_DioChannel_PhaALowrCmd      (Dio_ChannelType)14
#define DioConf_DioChannel_PhaAUpprCmd      (Dio_ChannelType)15
#define DioConf_DioChannel_PhaBLowrCmd      (Dio_ChannelType)16
#define DioConf_DioChannel_PhaBUpprCmd      (Dio_ChannelType)17
#define DioConf_DioChannel_PhaCLowrCmd      (Dio_ChannelType)18
#define DioConf_DioChannel_PhaCUpprCmd      (Dio_ChannelType)19
#define DioConf_DioChannel_PwrOutpEnaFb     (Dio_ChannelType)20
#define DioConf_DioChannel_GateDrv1Rst      (Dio_ChannelType)21
#define DioConf_DioChannel_MotDrvr0Diag     (Dio_ChannelType)22
#define DioConf_DioChannel_SysFlt2A         (Dio_ChannelType)23

/* Channel Mapping for DioChannelBitPosition */
#define DioConfig_PwrTurnOffCtrl_bit        (uint8)0x0D
#define DioConfig_HwAg0_bit                 (uint8)0x01
#define DioConfig_HwTq3_bit                 (uint8)0x02
#define DioConfig_McuEna_bit                (uint8)0x07
#define DioConfig_SysFlt2B_bit              (uint8)0x03
#define DioConfig_TmplMonrWdg_bit           (uint8)0x0A
#define DioConfig_PwrSplyCs_bit             (uint8)0x09
#define DioConfig_HwAg1_bit                 (uint8)0x0C
#define DioConfig_HwTq2_bit                 (uint8)0x0B
#define DioConfig_HwTq1_bit                 (uint8)0x08
#define DioConfig_HwTq0_bit                 (uint8)0x05
#define DioConfig_PwrSplyNotFlt_bit         (uint8)0x06
#define DioConfig_MotDrvr1Diag_bit          (uint8)0x0B
#define DioConfig_GateDrv0Rst_bit           (uint8)0x05
#define DioConfig_PhaALowrCmd_bit           (uint8)0x08
#define DioConfig_PhaAUpprCmd_bit           (uint8)0x07
#define DioConfig_PhaBLowrCmd_bit           (uint8)0x0A
#define DioConfig_PhaBUpprCmd_bit           (uint8)0x09
#define DioConfig_PhaCLowrCmd_bit           (uint8)0x0D
#define DioConfig_PhaCUpprCmd_bit           (uint8)0x0C
#define DioConfig_PwrOutpEnaFb_bit          (uint8)0x06
#define DioConfig_GateDrv1Rst_bit           (uint8)0x0F
#define DioConfig_MotDrvr0Diag_bit          (uint8)0x02
#define DioConfig_SysFlt2A_bit              (uint8)0x04

/* The Pointer to Port Channel name */

/* DIO Channel Group Configuration Handles */

/* DIO Write Verify User Interface Notification */
/* Enable/Disable the register write check 
 WV_DISABLE - 0 , WV_INIT_RUNTIME - 2 */
#define DIO_WRITE_VERIFY                    2

/* User configured error notification */
#define DIO_ERROR_NOTIFICATION              DioWrVrfyFailr


/* DIO Dem interfaces */
/*The register write verify failure is reported using the
 following error code*/
#define DIO_E_REG_WRITE_VERIFY              \
  DemConf_DemEventParameter_DIO_E_REG_WRITE_VERIFY




/* Size of the Dio Channel Group Structure */
#define DIO_SIZE_OF_CHGRP_STRUCT 4U
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* DIO_CFG_H  */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
