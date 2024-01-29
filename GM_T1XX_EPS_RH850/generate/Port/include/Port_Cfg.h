/*===========================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Port_Cfg.h                                                  */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains pre-compile time parameters.                            */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
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
 * V1.0.0:  05-Sep-2012  : Initial version
 * V1.1.0:  16-Jan-2013  : As per SCR 055,
 *                         1.Added macro PORT_PIN_STATUS_BACKUP,
 *                           PORT_PROTCMD0, PORT_IOHOLD and PORT_PROTS0.
 * V1.2.0:  18-Mar-2013  : As per SCR 091 for mantis issue #7957 and #9240,
 *                         following changes are made:
 *                         1.Generation of Configuration Set Handles is updated.
 *                         2.Macros PORT_SET_TO_DIO_ALT_MODE_API and
 *                           PORT_PIN_STATUS_BACKUP are added.
 * V1.3.0:  06-Aug-2013  : As per CR 225 and as part of E1x-F1x merge activity,
 *                         Macro PORT_JTAG_PUCC_REGS is added.
 * V1.3.1:  20-Mar-2014  : As per CR 419, Macros
 *                         PORT_SET_PIN_DEFAULT_DIRECTION_API and
 *                         PORT_SET_PIN_DEFAULT_MODE_API are added.
 * V1.3.2:  28-Jul-2014  : As per CR 106, following macros
 *                         PORT_DNFCKS_BASE_ADDRESS, PORT_DNF_CLK_SRC_AVAILABLE
 *                         are added newly.
 * V1.3.3:  14-Aug-2014  : As per CR 570, For the mantis #22971,
 *                         following changes are made:
 *                         1. uint16 is replaced with Port_PinType for handle
 *                         generation.
 *                         2. Changes are made at all relevant places
 *                         accordingly to append U or UL after numeric values.
 * V1.3.4:  12-Nov-2014  : As per CR 650 for mantis #24637, following change
 *                         is made:
 *                         1. PPROTS_32BIT_REG_AVAILABLE macro is added.
 * V1.3.5:  20-Apr-2016  : As part of P1x V4.01.01 release ,following changes
 *                         are made:
 *                         1.As per ARDAAAE-1949,macros
 *                           PORT_USE_WRITE_VERIFY_ERROR_INTERFACE
 *                           PORT_WRITE_VERIFY,PORT_E_REG_WRITE_VERIFY,
 *                           PORT_WRITE_VERIFY_ERROR_NOTIFICATION are added
 *                         2.PORT_DEM_ERROR_DETECT is removed
 *                         3.As per ARDAAAE-1908,generation of macros
 *                           PORT_AR_VERSION,PORT_PIN_STATUS_BACKUP
 *                           PORT_IOHOLD_FUNC_AVAILABLE,PORT_PROTCMD0
 *                           PPCMD_32BIT_REG_AVAILABLE,PORT_PPCMD0
 *                           PPROTS_32BIT_REG_AVAILABLE,PORT_IOHOLD
 *                           PORT_PROTS0,PORT_PPROTS0,PORT_DNFS_AVAILABLE
 *                           PORT_DNFS_BASE_ADDRESS,PORT_EDGE_DETECT_CONTROL
 *                           PORT_DNFAEN_ADDRESS_OFFSET,PORT_JTAG_PFC_REGS,
 *                           PORT_JTAG_PIPC_REGS, PORT_JTAG_PFCAE_REGS,
 *                           and all the macros related
 *                           to alphabetic,analog,input ports are removed.
 *                          4.As per ARDAAAE-912,PORT_DNFAENL_ADDRESS_OFFSET
 *                           is added
 *                          5.Copyright information is updated.
 */
/******************************************************************************/
/*******************************************************************************
**                   Generation Tool Version                                  **
*******************************************************************************/
/*
 * TOOL VERSION:  1.3.14
 */

/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    C:\Users\nz2654\AppData\Local\Temp\DaVinci\Cfg-2484139\Generation\Cfg_Gen-1485292501329-0\AutosarFiles_ValGen-1485293917248-0\Port_ECUC_2129089976239749025.arxml
 *                C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.00_Work\Z_Work_3_8265P2_CM010A\Port\generate\R403_PORT_P1x_BSWMDT.arxml
 * GENERATED ON:  24 Jan 2017 - 16:39:02
 */

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR specification version information */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION  4U
#define PORT_CFG_AR_RELEASE_MINOR_VERSION  0U
#define PORT_CFG_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define PORT_CFG_SW_MAJOR_VERSION  1U
#define PORT_CFG_SW_MINOR_VERSION  5U

/*******************************************************************************
**                      Common Published Information                          **
*******************************************************************************/
#define PORT_AR_RELEASE_MAJOR_VERSION_VALUE  4U
#define PORT_AR_RELEASE_MINOR_VERSION_VALUE  0U
#define PORT_AR_RELEASE_REVISION_VERSION_VALUE  3U

#define PORT_SW_MAJOR_VERSION_VALUE  1U
#define PORT_SW_MINOR_VERSION_VALUE  5U
#define PORT_SW_PATCH_VERSION_VALUE  3U

#define PORT_VENDOR_ID_VALUE  59U
#define PORT_MODULE_ID_VALUE  124U


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/* Instance ID of the PORT Driver Component */
#define PORT_INSTANCE_ID_VALUE               0U

/* TRACE [R4, PORT100] */
/* TRACE [R4, PORT101] */
/* TRACE [R4, PORT107] */
/* TRACE [R4, PORT123_Conf] */
/* Enables/Disables Development error detect */
#define PORT_DEV_ERROR_DETECT               STD_ON

/* TRACE [R4, PORT131_Conf] */
/* Enables/Disables Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API          STD_OFF

/* TRACE [R4, PORT132_Conf] */
/* Enables/Disables Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API               STD_ON

/* TRACE [R4, PORT103] */
/* TRACE [R4, PORT133_Conf] */
/* Enables/Disables Port_GetVersionInfo API */
#define PORT_VERSION_INFO_API               STD_OFF

/* Enable/Disable the enter/exit critical section functionality */
#define PORT_CRITICAL_SECTION_PROTECTION    STD_ON

/* Indicates the number of Alternative Modes  */
#define PORT_MAX_MODE                       (uint8)0x0d

/*  Indicates offset value of PIBC0 register */
#define PORT_OS_BASE_ADDRESS_OFFSET         (uint16)0x4000

/* Indicates availability of PINV register */
#define PORT_PINV_REG_AVAILABLE             STD_ON

/* Indicates the write access of PPCMD register */
#define PORT_WRITE_ERROR_CLEAR_VAL          0x000000A5UL

/* Pre-compile option for enable or disable version check of 
   inter-module dependencies */
#define PORT_VERSION_CHECK_EXT_MODULES      STD_OFF

/*  Indicates offset value of PODC register  */
#define PORT_NUM_PODC_REG_ADD_OFFSET        (uint16)0x4014

/*  Indicates offset value of PDSC register  */
#define PORT_NUM_PDSC_REG_ADD_OFFSET        (uint16)0x4018

/*  Indicates offset value of PUCC register  */
#define PORT_NUM_PUCC_REG_ADD_OFFSET        (uint16)0x4028

/*  Indicates offset value of PPROTS register  */
#define PORT_NUM_PPROTS_REG_ADD_OFFSET      (uint16)0x4034

/*  Indicates offset value of PPCMD register  */
#define PORT_NUM_PPCMD_REG_ADD_OFFSET       (uint16)0x4030

/*  Indicates offset value of PODCE register  */
#define PORT_NUM_PODCE_REG_ADD_OFFSET       (uint16)0x403C

/*  Indicates offset value of PINV register  */
#define PORT_NUM_PINV_REG_ADD_OFFSET        (uint16)0x0030

/*  Indicates offset value of JPODCE register */
#define PORT_JTAG_PODCE_REG_ADD_OFFSET      (uint16)0x0000

/*  Indicates offset value of JPINV register */
#define PORT_JTAG_PINV_REG_ADD_OFFSET       (uint16)0x0000

/*  Indicates offset value of JPODC register  */
#define PORT_JTAG_PODC_REG_ADD_OFFSET       (uint16)0x4014

/*  Indicates offset value of JPDSC register  */
#define PORT_JTAG_PDSC_REG_ADD_OFFSET       (uint16)0x4018

/*  Indicates offset value of JPUCC register  */
#define PORT_JTAG_PUCC_REG_ADD_OFFSET       (uint16)0x4028

/*  Indicates offset value of JPPROTS register  */
#define PORT_JTAG_PPROTS_REG_ADD_OFFSET     (uint16)0x4034

/*  Indicates offset value of JPPCMD register  */
#define PORT_JTAG_PPCMD_REG_ADD_OFFSET      (uint16)0x4030

/* Enables/Disables Port_SetToDioMode and Port_SetToAlternateMode API */
#define PORT_SET_TO_DIO_ALT_MODE_API        STD_ON

/* User define value for Endless Loop. */
#define PORT_LOOP_TIMEOUT                   (uint8)0x05

/* Enables/Disables Port_SetPinDefaultDirection API */
#define PORT_SET_PIN_DEFAULT_DIRECTION_API  STD_OFF

/* Enables/Disables Port_SetPinDefaultMode API */
#define PORT_SET_PIN_DEFAULT_MODE_API       STD_OFF

/* Enable/Disable the register write-verify check 
   WV_DISABLE          0U 
   WV_INIT_ONLY        1U 
   WV_INIT_RUNTIME     2U  */
#define PORT_WRITE_VERIFY                   2U

/* Enable/Disable Reg Write-verify Failure Error Interface  */
#define PORT_USE_WRITE_VERIFY_ERROR_INTERFACE STD_ON


/* Availability of numeric port groups */
#define PORT_NUM_PORT_GROUPS_AVAILABLE      STD_ON

/* Availability of jtag port groups */
#define PORT_JTAG_PORT_GROUPS_AVAILABLE     STD_ON

/* The following constant contains total number of pins configured */
#define PORT_TOTAL_NUMBER_OF_PINS           (uint16)88

/* DEM for Port register write timeout failure  */
#define PORT_E_WRITE_TIMEOUT_FAILURE        \
        DemConf_DemEventParameter_PORT_E_WRITE_TIMEOUT_FAILURE

/* DEM for Write Verify */
#define PORT_E_REG_WRITE_VERIFY             \
        DemConf_DemEventParameter_PORT_E_REG_WRITE_VERIFY

 /* Write Verify Error Notification Macro*/
 #define PORT_WRITE_VERIFY_ERROR_NOTIFICATION PortWrVrfyFailr

/* Base Address of numeric port */
#define PORT_USER_BASE_ADDRESS_NUMERIC      (uint32)0xFFC10000UL

/* Os Address of numeric port */
#define PORT_OS_BASE_ADDRESS_NUMERIC        (uint32)0xFFC14000UL

/* Base Address of JTAG port */
#define PORT_USER_BASE_ADDRESS_JTAG         (uint32)0xFFC20000UL

/* Os Address of JTAG port */
#define PORT_OS_BASE_ADDRESS_JTAG           (uint32)0xFFC24000UL



/* Availability of DNFA noise elimination registers. */
#define PORT_DNFA_REG_CONFIG                STD_ON

/* Availability of FCLA noise elimination registers. */
#define PORT_FCLA_REG_CONFIG                STD_OFF

/* Availability of DNFAnEN noise elimination registers. */
#define PORT_DNFAEN_REG_AVAILABLE           STD_ON

/* Availability of DNFCKS noise elimination sampling clock 
  source selection register. */
#define PORT_DNF_CLK_SRC_AVAILABLE          STD_ON


/* Starting address for DNFA noise elimination registers */
#define PORT_DNFA_BASE_ADDRESS              (uint32)0xffc31400UL

/* Address offset for Digital noise elimination enable register DNFAENL */
#define PORT_DNFAENL_ADDRESS_OFFSET         (uint32)0xCUL

/* Starting address of Digital noise filter sampling clock 
  source selection register */
#define PORT_DNFCKS_BASE_ADDRESS            (uint32)0xFFF89100UL


/* The Total number of Numeric PSR registers configured */
#define PORT_NUM_PSR_REGS                   (uint8)0x06 

/* The Total number of Numeric PMCSR registers configured */
#define PORT_NUM_PMCSR_REGS                 (uint8)0x06 

/* The Total number of Numeric other 16-Bit registers configured */
#define PORT_NUM_OTHER_16BIT_REGS           (uint8)0x22 

/* The Total number of Numeric PODC registers configured */
#define PORT_NUM_PODC_REGS                  (uint8)0x06 

/* The Total number of Numeric PODCE registers configured */
#define PORT_NUM_PODCE_REGS                 (uint8)0x06 

/* The Total number of Numeric PINV registers configured */
#define PORT_NUM_PINV_REGS                  (uint8)0x06 

/* The Total number of Numeric PDSC registers configured  */
#define PORT_NUM_PDSC_REGS                  (uint8)0x06 

/* The Total number of Numeric PUCC registers configured  */
#define PORT_NUM_PUCC_REGS                  (uint8)0x06 

/* The Total number of Numeric Function Control registers configured */
#define PORT_NUM_FUNC_CTRL_REGS             (uint8)0x12 

/* The Total number of Numeric PISA registers configured  */
#define PORT_NUM_PISA_REGS                  (uint8)0x05 

/* The Total number of Numeric PIBC registers configured  */
#define PORT_NUM_PIBC_REGS                  (uint8)0x06 

/* The Total number of Numeric PIPC registers configured  */
#define PORT_NUM_PIPC_REGS                  (uint8)0x05 

/* The Total number of Numeric PU registers configured  */
#define PORT_NUM_PU_REGS                    (uint8)0x06 

/* The Total number of Numeric PD registers configured  */
#define PORT_NUM_PD_REGS                    (uint8)0x06 

/* The Total number of Numeric PBDC registers configured  */
#define PORT_NUM_PBDC_REGS                  (uint8)0x06 

/* The Total number of Numeric PFCE registers configured  */
#define PORT_NUM_PFCE_REGS                  (uint8)0x06 

/* The Total number of Numeric PFC registers configured  */
#define PORT_NUM_PFC_REGS                   (uint8)0x06 

/* The Total number of Numeric PFCAE registers configured  */
#define PORT_NUM_PFCAE_REGS                 (uint8)0x06 

/* The Total number of Numeric PMSR registers configured  */
#define PORT_NUM_PMSR_REGS                  (uint8)0x06 

/* The following constant contains total number of JPSR registers */
#define PORT_JTAG_PSR_REGS                  (uint8)0x01 

/* The following constant contains total number of  JPMCSR registers */
#define PORT_JTAG_PMCSR_REGS                (uint8)0x01 

/* The following constant contains total number of  JPODC registers */
#define PORT_JTAG_PODC_REGS                 (uint8)0x01 

/* The following constant contains total number of  JPODCE registers */
#define PORT_JTAG_PODCE_REGS                (uint8)0x00 

/* The following constant contains total number of  JPINV registers */
#define PORT_JTAG_PINV_REGS                 (uint8)0x00 

/* The following constant contains total number of  JPDSC registers */
#define PORT_JTAG_PDSC_REGS                 (uint8)0x01 

/* The following constant contains total number of  JPUCC registers */
#define PORT_JTAG_PUCC_REGS                 (uint8)0x01 

/* The following constant contains total number of 8 bit JTAG registers */
#define PORT_JTAG_OTHER_8BIT_REGS           (uint8)0x05 

/* The Total number of JTAG Function Control registers configured  */
#define PORT_JTAG_FUNC_CTRL_REGS            (uint8)0x01 

/* The following constant contains total number of  JPISA registers */
#define PORT_JTAG_PISA_REGS                 (uint8)0x01 

/* The following constant contains total number of  JPIBC registers */
#define PORT_JTAG_PIBC_REGS                 (uint8)0x01 

/* The following constant contains total number of  JPU registers */
#define PORT_JTAG_PU_REGS                   (uint8)0x01 

/* The following constant contains total number of  JPD registers */
#define PORT_JTAG_PD_REGS                   (uint8)0x01 

/* The following constant contains total number of  JPBDC registers */
#define PORT_JTAG_PBDC_REGS                 (uint8)0x01 

/* The following constant contains total number of  JPFCE registers */
#define PORT_JTAG_PFCE_REGS                 (uint8)0x01 

/* The following constant contains total number of  JPMSR registers */
#define PORT_JTAG_PMSR_REGS                 (uint8)0x01 


/* TRACE [R4, PORT006] */
/* TRACE [R4, PORT076] */
/* TRACE [R4, PORT207] */
/* TRACE [R4, PORT208] */
/* Port Pin Handles */
#define Port_PortGroup0_PortPin12    (Port_PinType)0
#define Port_PortGroup0_PortPin5    (Port_PinType)1
#define Port_PortGroup0_PortPin13    (Port_PinType)2
#define Port_PortGroup0_PortPin14    (Port_PinType)3
#define Port_PortGroup0_PortPin0    (Port_PinType)4
#define Port_PortGroup0_PortPin11    (Port_PinType)5
#define Port_PortGroup0_PortPin1    (Port_PinType)6
#define Port_PortGroup0_PortPin6    (Port_PinType)7
#define Port_PortGroup0_PortPin7    (Port_PinType)8
#define Port_PortGroup0_PortPin2    (Port_PinType)9
#define Port_PortGroup0_PortPin8    (Port_PinType)10
#define Port_PortGroup0_PortPin10    (Port_PinType)11
#define Port_PortGroup0_PortPin9    (Port_PinType)12
#define Port_PortGroup0_PortPin4    (Port_PinType)13
#define Port_PortGroup0_PortPin3    (Port_PinType)14
#define Port_PortGroup1_PortPin0    (Port_PinType)15
#define Port_PortGroup1_PortPin3    (Port_PinType)16
#define Port_PortGroup1_PortPin2    (Port_PinType)17
#define Port_PortGroup1_PortPin1    (Port_PinType)18
#define Port_PortGroup1_PortPin4    (Port_PinType)19
#define Port_PortGroup2_PortPin15    (Port_PinType)20
#define Port_PortGroup2_PortPin14    (Port_PinType)21
#define Port_PortGroup2_PortPin12    (Port_PinType)22
#define Port_PortGroup2_PortPin10    (Port_PinType)23
#define Port_PortGroup2_PortPin4    (Port_PinType)24
#define Port_PortGroup2_PortPin13    (Port_PinType)25
#define Port_PortGroup2_PortPin11    (Port_PinType)26
#define Port_PortGroup2_PortPin6    (Port_PinType)27
#define Port_PortGroup2_PortPin5    (Port_PinType)28
#define Port_PortGroup2_PortPin9    (Port_PinType)29
#define Port_PortGroup2_PortPin1    (Port_PinType)30
#define Port_PortGroup2_PortPin7    (Port_PinType)31
#define Port_PortGroup2_PortPin2    (Port_PinType)32
#define Port_PortGroup2_PortPin8    (Port_PinType)33
#define Port_PortGroup2_PortPin3    (Port_PinType)34
#define Port_PortGroup2_PortPin0    (Port_PinType)35
#define Port_PortGroup3_PortPin14    (Port_PinType)36
#define Port_PortGroup3_PortPin8    (Port_PinType)37
#define Port_PortGroup3_PortPin6    (Port_PinType)38
#define Port_PortGroup3_PortPin3    (Port_PinType)39
#define Port_PortGroup3_PortPin1    (Port_PinType)40
#define Port_PortGroup3_PortPin0    (Port_PinType)41
#define Port_PortGroup3_PortPin7    (Port_PinType)42
#define Port_PortGroup3_PortPin11    (Port_PinType)43
#define Port_PortGroup3_PortPin13    (Port_PinType)44
#define Port_PortGroup3_PortPin9    (Port_PinType)45
#define Port_PortGroup3_PortPin2    (Port_PinType)46
#define Port_PortGroup3_PortPin12    (Port_PinType)47
#define Port_PortGroup3_PortPin4    (Port_PinType)48
#define Port_PortGroup3_PortPin5    (Port_PinType)49
#define Port_PortGroup3_PortPin10    (Port_PinType)50
#define Port_PortGroup4_PortPin1    (Port_PinType)51
#define Port_PortGroup4_PortPin12    (Port_PinType)52
#define Port_PortGroup4_PortPin5    (Port_PinType)53
#define Port_PortGroup4_PortPin11    (Port_PinType)54
#define Port_PortGroup4_PortPin10    (Port_PinType)55
#define Port_PortGroup4_PortPin14    (Port_PinType)56
#define Port_PortGroup4_PortPin13    (Port_PinType)57
#define Port_PortGroup4_PortPin7    (Port_PinType)58
#define Port_PortGroup4_PortPin3    (Port_PinType)59
#define Port_PortGroup4_PortPin0    (Port_PinType)60
#define Port_PortGroup4_PortPin9    (Port_PinType)61
#define Port_PortGroup4_PortPin8    (Port_PinType)62
#define Port_PortGroup4_PortPin4    (Port_PinType)63
#define Port_PortGroup4_PortPin6    (Port_PinType)64
#define Port_PortGroup4_PortPin2    (Port_PinType)65
#define Port_PortGroup5_PortPin7    (Port_PinType)66
#define Port_PortGroup5_PortPin13    (Port_PinType)67
#define Port_PortGroup5_PortPin5    (Port_PinType)68
#define Port_PortGroup5_PortPin4    (Port_PinType)69
#define Port_PortGroup5_PortPin15    (Port_PinType)70
#define Port_PortGroup5_PortPin6    (Port_PinType)71
#define Port_PortGroup5_PortPin0    (Port_PinType)72
#define Port_PortGroup5_PortPin10    (Port_PinType)73
#define Port_PortGroup5_PortPin1    (Port_PinType)74
#define Port_PortGroup5_PortPin14    (Port_PinType)75
#define Port_PortGroup5_PortPin3    (Port_PinType)76
#define Port_PortGroup5_PortPin9    (Port_PinType)77
#define Port_PortGroup5_PortPin2    (Port_PinType)78
#define Port_PortGroup5_PortPin11    (Port_PinType)79
#define Port_PortGroup5_PortPin12    (Port_PinType)80
#define Port_PortGroup5_PortPin8    (Port_PinType)81
#define Port_PortGroupJtag0_PortPin4    (Port_PinType)82
#define Port_PortGroupJtag0_PortPin0    (Port_PinType)83
#define Port_PortGroupJtag0_PortPin5    (Port_PinType)84
#define Port_PortGroupJtag0_PortPin2    (Port_PinType)85
#define Port_PortGroupJtag0_PortPin1    (Port_PinType)86
#define Port_PortGroupJtag0_PortPin3    (Port_PinType)87

/* Configuration Set Handles */
#define PortConfigSet  (&Port_GstConfiguration[0])

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* PORT_CFG_H  */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
