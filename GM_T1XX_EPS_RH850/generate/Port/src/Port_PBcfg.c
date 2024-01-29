/*===========================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Port_PBcfg.c                                                */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Post-Build time parameters.                             */
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
 *  V1.0.0:  05-Sep-2012  : Initial Version
 *  V1.1.0:  16-Jan-2013  : As per SCR 055, ucNoOfNumRestoredRegs and
 *                          ucNoOfAnalogRestoredRegs structure elements
 *                          generated in Port_GstConfiguration[] structure.
 *  V1.2.0:  18-Mar-2013  : As per SCR 091 for mantis issues #8190, #9240 and
 *                          #8936 following changes are made:
 *                          1. Generation of element usInitModeRegVal
 *                          in structure Port_GstNumPMSRRegs[] is updated.
 *                          2. Generation of Port_GstDNFARegs[] and
 *                          Port_GstFCLARegs structure is updated when
 *                          bypass is configured.
 *                          3.Port_GstSetDioAltPinDetails structure is added to
 *                          generate when PORT_SET_TO_DIO_ALT_MODE_API is
 *                          enabled.
 *  V1.2.1:  23-Apr-2013  : As per SCR 141 for mantis issues #8190 and #9240
 *                          1. Generation of ucNoOfPinsDioAltModeChangeable
 *                          element in structure Port_GstConfiguration[] is
 *                          added.
 *                          2. Port_GstNumPMSRRegs[] and Port_GstJTAGPMSRRegs[]
 *                          structures are updated.
 * V1.3.0:   06-Aug-2013  : As per CR 225 and as part of E1x-F1x merge activity,
 *                          Port_GstConfiguration[] is updated for addition of
 *                          ucNoOfEDCRegs element.
 * V1.3.1    26-Sep-2013  : As per CR 236, template file is updated.
 * V1.3.2    28-Oct-2013  : As per CR 269, template file is updated.
 * V1.3.3    05-Feb-2014  : As per CR 378, template file is updated.
 * V1.3.4    10-Jul-2014  : As per CR 106, following changes are made:
 *                          1. Port_GstConfigType is updated for addition of
 *                             pPortDNFCKSRegVal and ucNoOfDNFCKSRegs elememts.
 *                          2. Port_GstDNFCKSRegs structure is added newly.
 *                          3. Port_GstPinDirChangeableList structure is updated
 *                             for additon of ucPMSRRegIndex element.
 * V1.3.5:   14-Aug-2014  : As per CR 570, Changes are made at all relevant
 *                          places accordingly to append U or UL after numeric
 *                          values.
 * V1.3.6:   01-Jan-2015  : As per mantis #23493, Port_GstDNFARegs[] structure
 *                          is updated for addition of usDELAY element.
 * V1.3.7:   21-Mar-2016  : Following changes are made,
 *                            1.Copyright information is updated.
 *                            2.As per ARDAAAE-1672,
 *                            PORT_START_SEC_DBTOC_DATA_UNSPECIFIED and
 *                            PORT_STOP_SEC_DBTOC_DATA_UNSPECIFIED are removed
 *                            3.Justifications for QAC warnings are added
 * V1.3.8:   08-Aug-2016     As part of P1x V4.01.01 release ,following
 *                            change is made:
 *                            1.As per ARDAAAE-1908,generation of structures
 *                            Port_GstAlphaRegs,Port_GstAlphaFuncCtrlRegs,
 *                            Port_GstAlphaPMSRRegs, Port_GstAnalogRegs,
 *                            Port_GstAnalogPMSRRegs,Port_GstInputFuncCtrlRegs
 *                            Port_GstInputRegs, Port_GstAnalogFuncCtrlRegs,
 *                            Port_GstInputPMSRRegs,Port_GstEDCRegs are removed
 */
/******************************************************************************/

/*******************************************************************************
**                       Generation Tool Version                              **
*******************************************************************************/
/*
 * TOOL VERSION:  1.3.14
 */

/*******************************************************************************
**                      Input File                                            **
*******************************************************************************/
/*
 * INPUT FILE:    C:\Users\nz2654\AppData\Local\Temp\DaVinci\Cfg-2484139\Generation\Cfg_Gen-1485292501329-0\AutosarFiles_ValGen-1485293917248-0\Port_ECUC_2129089976239749025.arxml
 *                C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.00_Work\Z_Work_3_8265P2_CM010A\Port\generate\R403_PORT_P1x_BSWMDT.arxml
 * GENERATED ON:  24 Jan 2017 - 16:39:02
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Port_Cfg.h"
#include "Port_PBTypes.h"

/*******************************************************************************
**                       Version Information                                  **
*******************************************************************************/

/* AUTOSAR specification version information */
#define PORT_PBCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define PORT_PBCFG_C_AR_RELEASE_MINOR_VERSION  0U
#define PORT_PBCFG_C_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define PORT_PBCFG_C_SW_MAJOR_VERSION  1U
#define PORT_PBCFG_C_SW_MINOR_VERSION  5U

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

#if (PORT_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
  PORT_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Major Version"
#endif

#if (PORT_PBTYPES_AR_RELEASE_MINOR_VERSION != \
  PORT_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Minor Version"
#endif

#if (PORT_PBTYPES_AR_RELEASE_REVISION_VERSION != \
  PORT_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Revision Version"
#endif

#if (PORT_PBTYPES_SW_MAJOR_VERSION != \
  PORT_PBCFG_C_SW_MAJOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Software Major Version"
#endif

#if (PORT_PBTYPES_SW_MINOR_VERSION != \
  PORT_PBCFG_C_SW_MINOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (2:3211) The global identifier 'Port_GstConfiguration' is  */
/*                 defined here but is not used in this translation unit.     */
/* Rule          : NA                                                         */
/* Justification : The identifier is defined here as the elements within are  */
/*                 depending on user configuration and is used by Port driver */
/*                 for module initialization and other functions.             */
/* Verification  : However, part of the code is verified manually and it does */
/*                 not have any impact.                                       */
/* Reference     : Look for MISRA Violation: START Message(2:3211)-1 and      */
/*                 END Message(2:3211)-1 tags in the code.                    */

/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (2:3674) Array size defined implicitly by the number of    */
/*                 initializers.                                              */
/* Rule          : NA                                                         */
/* Justification : The size of the array is defined implicitly as the number  */
/*                 of elements in the array depend on the user configuration  */
/*                 and is generated POST BUILD and cannot be predefined.      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation: START Msg(2:3674)-2 and          */
/*                 END Msg(2:3674)-2 tags in the code.                        */

/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.      */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */

/******************************************************************************/

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* The following structure indicates the starting point of database */
/* MISRA Violation: START Msg(2:3211)-1 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_ConfigType, PORT_CONST) Port_GstConfiguration[] =
{
  /* Index: 0 - PortConfigSet */
  {
    /* ulStartOfDbToc */
    0x0EDF0128UL,

    /* pPortNumRegs */
    &Port_GstNumRegs[0],

    /* pPortNumFuncCtrlRegs */
    &Port_GstNumFuncCtrlRegs[0],

    /* pPortNumPMSRRegs */
    &Port_GstNumPMSRRegs[0],

    /* pPortJRegs */
    &Port_GstJTAGRegs[0],

    /* pPortJFuncCtrlRegs */
    &Port_GstJTAGFuncCtrlRegs[0],

    /* pPortJPMSRRegs */
    &Port_GstJTAGPMSRRegs[0],

    /* pPinModeChangeableGroups */
    &Port_GstSetModeGroupsList[0],

    /* pPinModeChangeableDetails */
    &Port_GstSetModePinDetailsList[0],

    /* pPinDioAltModeDetails */
    &Port_GstSetDioAltPinDetails[0],

    /* pPortDNFARegs */
    &Port_GstDNFARegs[0],

    /* pPortFCLARegs */
    NULL_PTR,

    /* pPortDNFCKSRegs */
    &Port_GstDNFCKSRegs[0],

    /* ucNoOfPinsModeChangeable */
    0x06U,

    /* ucNoOfPinsDioAltModeChangeable */
    0x06U,

    /* ucNoOfDNFARegs */
    0x06U,

    /* ucNoOfFCLARegs */
    0x00U,

    /* ucNoOfDNFCKSRegs */
    0x0DU
  }
};


/* END Msg(2:3211)-1 */
/* END Msg(2:3674)-2 */

/*
 * Array of structures of all port group registers, except PMSR, PFCE, PFC and
 * PMCSR, in the sequence of PSR, PISA, PIBC, PIPC, PU, PD, PBDC,
 * PODC, PODCE, PDSC, PUCC and PINV.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_Regs, PORT_CONST) Port_GstNumRegs[] =
{
  /* Index: 0 - PortConfigSet_0_Port_Group_0_Register_PSR_0 */
  {
    /* usRegAddrOffset */
    0x0004U,

    /* usInitModeRegVal */
    0x0006U
  },

  /* Index: 1 - PortConfigSet_0_Port_Group_1_Register_PSR_1 */
  {
    /* usRegAddrOffset */
    0x0044U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 2 - PortConfigSet_0_Port_Group_2_Register_PSR_2 */
  {
    /* usRegAddrOffset */
    0x0084U,

    /* usInitModeRegVal */
    0x0010U
  },

  /* Index: 3 - PortConfigSet_0_Port_Group_3_Register_PSR_3 */
  {
    /* usRegAddrOffset */
    0x00C4U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 4 - PortConfigSet_0_Port_Group_4_Register_PSR_4 */
  {
    /* usRegAddrOffset */
    0x0104U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 5 - PortConfigSet_0_Port_Group_5_Register_PSR_5 */
  {
    /* usRegAddrOffset */
    0x0144U,

    /* usInitModeRegVal */
    0x1B28U
  },

  /* Index: 6 - PortConfigSet_0_Port_Group_0_Register_PISA_0 */
  {
    /* usRegAddrOffset */
    0x002CU,

    /* usInitModeRegVal */
    0x0400U
  },

  /* Index: 7 - PortConfigSet_0_Port_Group_1_Register_PISA_1 */
  {
    /* usRegAddrOffset */
    0x006CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 8 - PortConfigSet_0_Port_Group_2_Register_PISA_2 */
  {
    /* usRegAddrOffset */
    0x00ACU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 9 - PortConfigSet_0_Port_Group_3_Register_PISA_3 */
  {
    /* usRegAddrOffset */
    0x00ECU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 10 - PortConfigSet_0_Port_Group_4_Register_PISA_4 */
  {
    /* usRegAddrOffset */
    0x012CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 11 - PortConfigSet_0_Port_Group_0_Register_PIBC_0 */
  {
    /* usRegAddrOffset */
    0x0000U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 12 - PortConfigSet_0_Port_Group_1_Register_PIBC_1 */
  {
    /* usRegAddrOffset */
    0x0040U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 13 - PortConfigSet_0_Port_Group_2_Register_PIBC_2 */
  {
    /* usRegAddrOffset */
    0x0080U,

    /* usInitModeRegVal */
    0x0004U
  },

  /* Index: 14 - PortConfigSet_0_Port_Group_3_Register_PIBC_3 */
  {
    /* usRegAddrOffset */
    0x00C0U,

    /* usInitModeRegVal */
    0x0040U
  },

  /* Index: 15 - PortConfigSet_0_Port_Group_4_Register_PIBC_4 */
  {
    /* usRegAddrOffset */
    0x0100U,

    /* usInitModeRegVal */
    0x0800U
  },

  /* Index: 16 - PortConfigSet_0_Port_Group_5_Register_PIBC_5 */
  {
    /* usRegAddrOffset */
    0x0140U,

    /* usInitModeRegVal */
    0x0080U
  },

  /* Index: 17 - PortConfigSet_0_Port_Group_1_Register_PIPC_1 */
  {
    /* usRegAddrOffset */
    0x0048U,

    /* usInitModeRegVal */
    0x0008U
  },

  /* Index: 18 - PortConfigSet_0_Port_Group_2_Register_PIPC_2 */
  {
    /* usRegAddrOffset */
    0x0088U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 19 - PortConfigSet_0_Port_Group_3_Register_PIPC_3 */
  {
    /* usRegAddrOffset */
    0x00C8U,

    /* usInitModeRegVal */
    0x0001U
  },

  /* Index: 20 - PortConfigSet_0_Port_Group_4_Register_PIPC_4 */
  {
    /* usRegAddrOffset */
    0x0108U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 21 - PortConfigSet_0_Port_Group_5_Register_PIPC_5 */
  {
    /* usRegAddrOffset */
    0x0148U,

    /* usInitModeRegVal */
    0x0002U
  },

  /* Index: 22 - PortConfigSet_0_Port_Group_0_Register_PU_0 */
  {
    /* usRegAddrOffset */
    0x000CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 23 - PortConfigSet_0_Port_Group_1_Register_PU_1 */
  {
    /* usRegAddrOffset */
    0x004CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 24 - PortConfigSet_0_Port_Group_2_Register_PU_2 */
  {
    /* usRegAddrOffset */
    0x008CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 25 - PortConfigSet_0_Port_Group_3_Register_PU_3 */
  {
    /* usRegAddrOffset */
    0x00CCU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 26 - PortConfigSet_0_Port_Group_4_Register_PU_4 */
  {
    /* usRegAddrOffset */
    0x010CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 27 - PortConfigSet_0_Port_Group_5_Register_PU_5 */
  {
    /* usRegAddrOffset */
    0x014CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 28 - PortConfigSet_0_Port_Group_0_Register_PD_0 */
  {
    /* usRegAddrOffset */
    0x0010U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 29 - PortConfigSet_0_Port_Group_1_Register_PD_1 */
  {
    /* usRegAddrOffset */
    0x0050U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 30 - PortConfigSet_0_Port_Group_2_Register_PD_2 */
  {
    /* usRegAddrOffset */
    0x0090U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 31 - PortConfigSet_0_Port_Group_3_Register_PD_3 */
  {
    /* usRegAddrOffset */
    0x00D0U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 32 - PortConfigSet_0_Port_Group_4_Register_PD_4 */
  {
    /* usRegAddrOffset */
    0x0110U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 33 - PortConfigSet_0_Port_Group_5_Register_PD_5 */
  {
    /* usRegAddrOffset */
    0x0150U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 34 - PortConfigSet_0_Port_Group_0_Register_PBDC_0 */
  {
    /* usRegAddrOffset */
    0x0004U,

    /* usInitModeRegVal */
    0x0006U
  },

  /* Index: 35 - PortConfigSet_0_Port_Group_1_Register_PBDC_1 */
  {
    /* usRegAddrOffset */
    0x0044U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 36 - PortConfigSet_0_Port_Group_2_Register_PBDC_2 */
  {
    /* usRegAddrOffset */
    0x0084U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 37 - PortConfigSet_0_Port_Group_3_Register_PBDC_3 */
  {
    /* usRegAddrOffset */
    0x00C4U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 38 - PortConfigSet_0_Port_Group_4_Register_PBDC_4 */
  {
    /* usRegAddrOffset */
    0x0104U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 39 - PortConfigSet_0_Port_Group_5_Register_PBDC_5 */
  {
    /* usRegAddrOffset */
    0x0144U,

    /* usInitModeRegVal */
    0x1920U
  },

  /* Index: 40 - PortConfigSet_0_Port_Group_0_Register_PODC_0 */
  {
    /* usRegAddrOffset */
    0x0014U,

    /* usInitModeRegVal */
    0x0006U
  },

  /* Index: 41 - PortConfigSet_0_Port_Group_1_Register_PODC_1 */
  {
    /* usRegAddrOffset */
    0x0054U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 42 - PortConfigSet_0_Port_Group_2_Register_PODC_2 */
  {
    /* usRegAddrOffset */
    0x0094U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 43 - PortConfigSet_0_Port_Group_3_Register_PODC_3 */
  {
    /* usRegAddrOffset */
    0x00D4U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 44 - PortConfigSet_0_Port_Group_4_Register_PODC_4 */
  {
    /* usRegAddrOffset */
    0x0114U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 45 - PortConfigSet_0_Port_Group_5_Register_PODC_5 */
  {
    /* usRegAddrOffset */
    0x0154U,

    /* usInitModeRegVal */
    0x1920U
  },

  /* Index: 46 - PortConfigSet_0_Port_Group_0_Register_PODCE_0 */
  {
    /* usRegAddrOffset */
    0x003CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 47 - PortConfigSet_0_Port_Group_1_Register_PODCE_1 */
  {
    /* usRegAddrOffset */
    0x007CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 48 - PortConfigSet_0_Port_Group_2_Register_PODCE_2 */
  {
    /* usRegAddrOffset */
    0x00BCU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 49 - PortConfigSet_0_Port_Group_3_Register_PODCE_3 */
  {
    /* usRegAddrOffset */
    0x00FCU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 50 - PortConfigSet_0_Port_Group_4_Register_PODCE_4 */
  {
    /* usRegAddrOffset */
    0x013CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 51 - PortConfigSet_0_Port_Group_5_Register_PODCE_5 */
  {
    /* usRegAddrOffset */
    0x017CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 52 - PortConfigSet_0_Port_Group_0_Register_PDSC_0 */
  {
    /* usRegAddrOffset */
    0x0018U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 53 - PortConfigSet_0_Port_Group_1_Register_PDSC_1 */
  {
    /* usRegAddrOffset */
    0x0058U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 54 - PortConfigSet_0_Port_Group_2_Register_PDSC_2 */
  {
    /* usRegAddrOffset */
    0x0098U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 55 - PortConfigSet_0_Port_Group_3_Register_PDSC_3 */
  {
    /* usRegAddrOffset */
    0x00D8U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 56 - PortConfigSet_0_Port_Group_4_Register_PDSC_4 */
  {
    /* usRegAddrOffset */
    0x0118U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 57 - PortConfigSet_0_Port_Group_5_Register_PDSC_5 */
  {
    /* usRegAddrOffset */
    0x0158U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 58 - PortConfigSet_0_Port_Group_0_Register_PUCC_0 */
  {
    /* usRegAddrOffset */
    0x0028U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 59 - PortConfigSet_0_Port_Group_1_Register_PUCC_1 */
  {
    /* usRegAddrOffset */
    0x0068U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 60 - PortConfigSet_0_Port_Group_2_Register_PUCC_2 */
  {
    /* usRegAddrOffset */
    0x00A8U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 61 - PortConfigSet_0_Port_Group_3_Register_PUCC_3 */
  {
    /* usRegAddrOffset */
    0x00E8U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 62 - PortConfigSet_0_Port_Group_4_Register_PUCC_4 */
  {
    /* usRegAddrOffset */
    0x0128U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 63 - PortConfigSet_0_Port_Group_5_Register_PUCC_5 */
  {
    /* usRegAddrOffset */
    0x0168U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 64 - PortConfigSet_0_Port_Group_0_Register_PINV_0 */
  {
    /* usRegAddrOffset */
    0x0030U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 65 - PortConfigSet_0_Port_Group_1_Register_PINV_1 */
  {
    /* usRegAddrOffset */
    0x0070U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 66 - PortConfigSet_0_Port_Group_2_Register_PINV_2 */
  {
    /* usRegAddrOffset */
    0x00B0U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 67 - PortConfigSet_0_Port_Group_3_Register_PINV_3 */
  {
    /* usRegAddrOffset */
    0x00F0U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 68 - PortConfigSet_0_Port_Group_4_Register_PINV_4 */
  {
    /* usRegAddrOffset */
    0x0130U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 69 - PortConfigSet_0_Port_Group_5_Register_PINV_5 */
  {
    /* usRegAddrOffset */
    0x0170U,

    /* usInitModeRegVal */
    0x0000U
  }
};


/* END Msg(2:3674)-2 */

/*
 * Array of structures of all function control port group registers, in the
 * sequence of PFCE, PFC, PFCAE and PMCSR.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_FuncCtrlRegs, PORT_CONST) Port_GstNumFuncCtrlRegs[] =
{
  /* Index: 0 - PortConfigSet_0_Port_Group_0_PFCE_Register_0 */
  {
    /* usRegAddrOffset */
    0x001CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 1 - PortConfigSet_0_Port_Group_1_PFCE_Register_1 */
  {
    /* usRegAddrOffset */
    0x005CU,

    /* usInitModeRegVal */
    0x001EU
  },

  /* Index: 2 - PortConfigSet_0_Port_Group_2_PFCE_Register_2 */
  {
    /* usRegAddrOffset */
    0x009CU,

    /* usInitModeRegVal */
    0x03E0U
  },

  /* Index: 3 - PortConfigSet_0_Port_Group_3_PFCE_Register_3 */
  {
    /* usRegAddrOffset */
    0x00DCU,

    /* usInitModeRegVal */
    0x0008U
  },

  /* Index: 4 - PortConfigSet_0_Port_Group_4_PFCE_Register_4 */
  {
    /* usRegAddrOffset */
    0x011CU,

    /* usInitModeRegVal */
    0x0008U
  },

  /* Index: 5 - PortConfigSet_0_Port_Group_5_PFCE_Register_5 */
  {
    /* usRegAddrOffset */
    0x015CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 6 - PortConfigSet_0_Port_Group_0_PFC_Register_0 */
  {
    /* usRegAddrOffset */
    0x0018U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 7 - PortConfigSet_0_Port_Group_1_PFC_Register_1 */
  {
    /* usRegAddrOffset */
    0x0058U,

    /* usInitModeRegVal */
    0x001EU
  },

  /* Index: 8 - PortConfigSet_0_Port_Group_2_PFC_Register_2 */
  {
    /* usRegAddrOffset */
    0x0098U,

    /* usInitModeRegVal */
    0x00E0U
  },

  /* Index: 9 - PortConfigSet_0_Port_Group_3_PFC_Register_3 */
  {
    /* usRegAddrOffset */
    0x00D8U,

    /* usInitModeRegVal */
    0x3788U
  },

  /* Index: 10 - PortConfigSet_0_Port_Group_4_PFC_Register_4 */
  {
    /* usRegAddrOffset */
    0x0118U,

    /* usInitModeRegVal */
    0x0008U
  },

  /* Index: 11 - PortConfigSet_0_Port_Group_5_PFC_Register_5 */
  {
    /* usRegAddrOffset */
    0x0158U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 12 - PortConfigSet_0_Port_Group_0_PFCAE_Register_0 */
  {
    /* usRegAddrOffset */
    0x0028U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 13 - PortConfigSet_0_Port_Group_1_PFCAE_Register_1 */
  {
    /* usRegAddrOffset */
    0x0068U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 14 - PortConfigSet_0_Port_Group_2_PFCAE_Register_2 */
  {
    /* usRegAddrOffset */
    0x00A8U,

    /* usInitModeRegVal */
    0x4000U
  },

  /* Index: 15 - PortConfigSet_0_Port_Group_3_PFCAE_Register_3 */
  {
    /* usRegAddrOffset */
    0x00E8U,

    /* usInitModeRegVal */
    0x0007U
  },

  /* Index: 16 - PortConfigSet_0_Port_Group_4_PFCAE_Register_4 */
  {
    /* usRegAddrOffset */
    0x0128U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 17 - PortConfigSet_0_Port_Group_5_PFCAE_Register_5 */
  {
    /* usRegAddrOffset */
    0x0168U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 18 - PortConfigSet_0_Port_Group_0_PMCSR_Register_0 */
  {
    /* usRegAddrOffset */
    0x0024U,

    /* usInitModeRegVal */
    0x00E1U
  },

  /* Index: 19 - PortConfigSet_0_Port_Group_1_PMCSR_Register_1 */
  {
    /* usRegAddrOffset */
    0x0064U,

    /* usInitModeRegVal */
    0x001EU
  },

  /* Index: 20 - PortConfigSet_0_Port_Group_2_PMCSR_Register_2 */
  {
    /* usRegAddrOffset */
    0x00A4U,

    /* usInitModeRegVal */
    0x43EBU
  },

  /* Index: 21 - PortConfigSet_0_Port_Group_3_PMCSR_Register_3 */
  {
    /* usRegAddrOffset */
    0x00E4U,

    /* usInitModeRegVal */
    0x7F8FU
  },

  /* Index: 22 - PortConfigSet_0_Port_Group_4_PMCSR_Register_4 */
  {
    /* usRegAddrOffset */
    0x0124U,

    /* usInitModeRegVal */
    0x0088U
  },

  /* Index: 23 - PortConfigSet_0_Port_Group_5_PMCSR_Register_5 */
  {
    /* usRegAddrOffset */
    0x0164U,

    /* usInitModeRegVal */
    0x4013U
  }
};


/* END Msg(2:3674)-2 */

/* Array of structures for 32-Bit PMSR Registers*/
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_PMSRRegs, PORT_CONST) Port_GstNumPMSRRegs[] =
{
  /* Index: 0 - PortConfigSet_0_Port_Group_0_PMSR0_0 */
  {
    /* ulMaskAndConfigValue */
    0xFFFFDFFFUL,

    /* usRegAddrOffset */
    0x0020U,

    /* usInitModeRegVal */
    0xDFFFU
  },

  /* Index: 1 - PortConfigSet_0_Port_Group_1_PMSR1_1 */
  {
    /* ulMaskAndConfigValue */
    0xFFFFFFE5UL,

    /* usRegAddrOffset */
    0x0060U,

    /* usInitModeRegVal */
    0xFFE5U
  },

  /* Index: 2 - PortConfigSet_0_Port_Group_2_PMSR2_2 */
  {
    /* ulMaskAndConfigValue */
    0xFFFF3C45UL,

    /* usRegAddrOffset */
    0x00A0U,

    /* usInitModeRegVal */
    0x3C45U
  },

  /* Index: 3 - PortConfigSet_0_Port_Group_3_PMSR3_3 */
  {
    /* ulMaskAndConfigValue */
    0xFFFFC854UL,

    /* usRegAddrOffset */
    0x00E0U,

    /* usInitModeRegVal */
    0xC854U
  },

  /* Index: 4 - PortConfigSet_0_Port_Group_4_PMSR4_4 */
  {
    /* ulMaskAndConfigValue */
    0xFFFFFFF7UL,

    /* usRegAddrOffset */
    0x0120U,

    /* usInitModeRegVal */
    0xFFF7U
  },

  /* Index: 5 - PortConfigSet_0_Port_Group_5_PMSR5_5 */
  {
    /* ulMaskAndConfigValue */
    0xFFFFF9E5UL,

    /* usRegAddrOffset */
    0x0160U,

    /* usInitModeRegVal */
    0xF9E5U
  }
};


/* END Msg(2:3674)-2 */

/*
 * Array of structures of all JTAG port group registers, except PMSR,
 * PFCE, PFC and PMCSR, in the sequence of PSR, PISA, PIBC, PIPC, PU,
 * PD, PBDC, PODC, PODCE, PDSC and PUCC.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_Regs, PORT_CONST) Port_GstJTAGRegs[] =
{
  /* Index: 0 - PortConfigSet_0_Port_Group_0_Register_JPSR_0 */
  {
    /* usRegAddrOffset */
    0x0004U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 1 - PortConfigSet_0_Port_Group_0_Register_JPISA_0 */
  {
    /* usRegAddrOffset */
    0x002CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 2 - PortConfigSet_0_Port_Group_0_Register_JPIBC_0 */
  {
    /* usRegAddrOffset */
    0x0000U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 3 - PortConfigSet_0_Port_Group_0_Register_JPU_0 */
  {
    /* usRegAddrOffset */
    0x000CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 4 - PortConfigSet_0_Port_Group_0_Register_JPD_0 */
  {
    /* usRegAddrOffset */
    0x0010U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 5 - PortConfigSet_0_Port_Group_0_Register_JPBDC_0 */
  {
    /* usRegAddrOffset */
    0x0004U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 6 - PortConfigSet_0_Port_Group_0_Register_JPODC_0 */
  {
    /* usRegAddrOffset */
    0x0014U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 7 - PortConfigSet_0_Port_Group_0_Register_JPDSC_0 */
  {
    /* usRegAddrOffset */
    0x0018U,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 8 - PortConfigSet_0_Port_Group_0_Register_JPUCC_0 */
  {
    /* usRegAddrOffset */
    0x0028U,

    /* usInitModeRegVal */
    0x0000U
  }
};


/* END Msg(2:3674)-2 */

/*
 * Array of structures of all function control port group registers, in the
 * sequence of PFCE and PMCSR.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_FuncCtrlRegs, PORT_CONST) Port_GstJTAGFuncCtrlRegs[] =
{
  /* Index: 0 - PortConfigSet_0_Port_Group_0_JPFCE_Register_0 */
  {
    /* usRegAddrOffset */
    0x001CU,

    /* usInitModeRegVal */
    0x0000U
  },

  /* Index: 1 - PortConfigSet_0_Port_Group_0_JPMCSR_Register_0 */
  {
    /* usRegAddrOffset */
    0x0024U,

    /* usInitModeRegVal */
    0x0000U
  }
};


/* END Msg(2:3674)-2 */

/* Array of structures for 32-Bit PMSR Registers */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_PMSRRegs, PORT_CONST) Port_GstJTAGPMSRRegs[] =
{
  /* Index: 0 - PortConfigSet_0_Port_Group_0_JPMSR0_0 */
  {
    /* ulMaskAndConfigValue */
    0x00FF00FFUL,

    /* usRegAddrOffset */
    0x0020U,

    /* usInitModeRegVal */
    0x00FFU
  }
};


/* END Msg(2:3674)-2 */

/*
 * Array provides information of port groups which contain run time mode
 * changeable port pins.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_PinModeChangeableGroups, PORT_CONST)
                                              Port_GstSetModeGroupsList[] =
{
  /* Index: 0 - PortConfigSet_0_Numeric_Port_Group_0 */
  {
    /* ucPSRRegIndex */
    0x00U,

    /* ucPFCERegIndex */
    0x00U,

    /* ucPFCRegIndex */
    0x06U,

    /* ucPFCAERegIndex */
    0x0CU,

    /* ucPMCSRRegIndex */
    0x12U,

    /* ucPMSRRegIndex */
    0x00U,

    /* ucPIPCRegIndex */
    0xFFU
  },

  /* Index: 1 - PortConfigSet_0_Numeric_Port_Group_5 */
  {
    /* ucPSRRegIndex */
    0x05U,

    /* ucPFCERegIndex */
    0x05U,

    /* ucPFCRegIndex */
    0x0BU,

    /* ucPFCAERegIndex */
    0x11U,

    /* ucPMCSRRegIndex */
    0x17U,

    /* ucPMSRRegIndex */
    0x05U,

    /* ucPIPCRegIndex */
    0x15U
  }
};


/* END Msg(2:3674)-2 */

/*
 * Array contains details of port pins, whose mode can be changed during run
 * time.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_PinModeChangeableDetails, PORT_CONST)
                                          Port_GstSetModePinDetailsList[] =
{
  /* Index: 0 - PortGroup0_PortPin1 */
  {
    /* ddPinId */
    0x0006U,

    /* usOrMask */
    0x0002U,

    /* ucSetModeIndex */
    0x00U,

    /* ucPortType */
    0x00U
  },

  /* Index: 1 - PortGroup0_PortPin2 */
  {
    /* ddPinId */
    0x0009U,

    /* usOrMask */
    0x0004U,

    /* ucSetModeIndex */
    0x00U,

    /* ucPortType */
    0x00U
  },

  /* Index: 2 - PortGroup5_PortPin5 */
  {
    /* ddPinId */
    0x0044U,

    /* usOrMask */
    0x0020U,

    /* ucSetModeIndex */
    0x01U,

    /* ucPortType */
    0x00U
  },

  /* Index: 3 - PortGroup5_PortPin11 */
  {
    /* ddPinId */
    0x004FU,

    /* usOrMask */
    0x0800U,

    /* ucSetModeIndex */
    0x01U,

    /* ucPortType */
    0x00U
  },

  /* Index: 4 - PortGroup5_PortPin12 */
  {
    /* ddPinId */
    0x0050U,

    /* usOrMask */
    0x1000U,

    /* ucSetModeIndex */
    0x01U,

    /* ucPortType */
    0x00U
  },

  /* Index: 5 - PortGroup5_PortPin8 */
  {
    /* ddPinId */
    0x0051U,

    /* usOrMask */
    0x0100U,

    /* ucSetModeIndex */
    0x01U,

    /* ucPortType */
    0x00U
  }
};


/* END Msg(2:3674)-2 */

/*
 * Array contains details of port pins, whose Dio Alternate mode can be changed
 * during run time.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_PinDioAltChangeableDetails, PORT_CONST)
                                          Port_GstSetDioAltPinDetails[] =
{
  /* Index: 0 - PortGroup3_PortPin8 */
  {
    /* ddPinId */
    0x0025U,

    /* usOrMask */
    0x0100U,

    /* ucPortGroupIndex */
    0x15U,

    /* ucPortType */
    0x00U,

    /* ucPortPIPCIndex */
    0x13U
  },

  /* Index: 1 - PortGroup3_PortPin7 */
  {
    /* ddPinId */
    0x002AU,

    /* usOrMask */
    0x0080U,

    /* ucPortGroupIndex */
    0x15U,

    /* ucPortType */
    0x00U,

    /* ucPortPIPCIndex */
    0x13U
  },

  /* Index: 2 - PortGroup3_PortPin13 */
  {
    /* ddPinId */
    0x002CU,

    /* usOrMask */
    0x2000U,

    /* ucPortGroupIndex */
    0x15U,

    /* ucPortType */
    0x00U,

    /* ucPortPIPCIndex */
    0x13U
  },

  /* Index: 3 - PortGroup3_PortPin9 */
  {
    /* ddPinId */
    0x002DU,

    /* usOrMask */
    0x0200U,

    /* ucPortGroupIndex */
    0x15U,

    /* ucPortType */
    0x00U,

    /* ucPortPIPCIndex */
    0x13U
  },

  /* Index: 4 - PortGroup3_PortPin12 */
  {
    /* ddPinId */
    0x002FU,

    /* usOrMask */
    0x1000U,

    /* ucPortGroupIndex */
    0x15U,

    /* ucPortType */
    0x00U,

    /* ucPortPIPCIndex */
    0x13U
  },

  /* Index: 5 - PortGroup3_PortPin10 */
  {
    /* ddPinId */
    0x0032U,

    /* usOrMask */
    0x0400U,

    /* ucPortGroupIndex */
    0x15U,

    /* ucPortType */
    0x00U,

    /* ucPortPIPCIndex */
    0x13U
  }
};


/* END Msg(2:3674)-2 */

/*
 * Array contains list of port pins whose direction can be changed during
 * run time.
 */
/* MISRA Violation: START Msg(2:3674)-2 */
/* CONST(Port_PinsDirChangeable, PORT_CONST)
                                           Port_GstPinDirChangeableList[]; */
/* END Msg(2:3674)-2 */

/* Array of structures for Digital Filter registers and Delay */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_DNFARegs, PORT_CONST) Port_GstDNFARegs[] =
{
  /* Index: 0 - PortConfigSet_1_FilterGroup_DNFA20CTL */
  {
    /* usDNFARegAddrOffset */
    0x0000U,

    /* ucDNFAENL */
    0x01U,

    /* ucDNFACTL */
    0x00U,

    /* usDELAY */
    0x0001U
  },

  /* Index: 1 - PortConfigSet_1_FilterGroup_DNFA21CTL */
  {
    /* usDNFARegAddrOffset */
    0x0100U,

    /* ucDNFAENL */
    0x01U,

    /* ucDNFACTL */
    0x00U,

    /* usDELAY */
    0x0001U
  },

  /* Index: 2 - PortConfigSet_1_FilterGroup_DNFA23CTL */
  {
    /* usDNFARegAddrOffset */
    0x0300U,

    /* ucDNFAENL */
    0x01U,

    /* ucDNFACTL */
    0x00U,

    /* usDELAY */
    0x0001U
  },

  /* Index: 3 - PortConfigSet_1_FilterGroup_DNFA24CTL */
  {
    /* usDNFARegAddrOffset */
    0x0400U,

    /* ucDNFAENL */
    0x01U,

    /* ucDNFACTL */
    0x00U,

    /* usDELAY */
    0x0001U
  },

  /* Index: 4 - PortConfigSet_1_FilterGroup_DNFA25CTL */
  {
    /* usDNFARegAddrOffset */
    0x0500U,

    /* ucDNFAENL */
    0x01U,

    /* ucDNFACTL */
    0x00U,

    /* usDELAY */
    0x0001U
  },

  /* Index: 5 - PortConfigSet_1_FilterGroup_DNFA26CTL */
  {
    /* usDNFARegAddrOffset */
    0x0600U,

    /* ucDNFAENL */
    0x01U,

    /* ucDNFACTL */
    0x00U,

    /* usDELAY */
    0x0001U
  }
};


/* END Msg(2:3674)-2 */

/* Array for Analog Filter registers */
/* MISRA Violation: START Msg(2:3674)-2 */
/* CONST(Port_FCLARegs, PORT_CONST) Port_GstFCLARegs[]; */
/* END Msg(2:3674)-2 */

/* Array for Filter clock source registers */
/* MISRA Violation: START Msg(2:3674)-2 */
CONST(Port_DNFCKSRegs, PORT_CONST) Port_GstDNFCKSRegs[] =
{
  /* Index: 0 - PortConfigSet_1_ClockSourceSelection_DNFCKS106C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0010U
  },

  /* Index: 1 - PortConfigSet_1_ClockSourceSelection_DNFCKS114C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0048U
  },

  /* Index: 2 - PortConfigSet_1_ClockSourceSelection_DNFCKS109C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0028U
  },

  /* Index: 3 - PortConfigSet_1_ClockSourceSelection_DNFCKS107C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0018U
  },

  /* Index: 4 - PortConfigSet_1_ClockSourceSelection_DNFCKS105C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0058U
  },

  /* Index: 5 - PortConfigSet_1_ClockSourceSelection_DNFCKS113C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0040U
  },

  /* Index: 6 - PortConfigSet_1_ClockSourceSelection_DNFCKS102C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0060U
  },

  /* Index: 7 - PortConfigSet_1_ClockSourceSelection_DNFCKS112C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0038U
  },

  /* Index: 8 - PortConfigSet_1_ClockSourceSelection_DNFCKS100C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0000U
  },

  /* Index: 9 - PortConfigSet_1_ClockSourceSelection_DNFCKS108C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0020U
  },

  /* Index: 10 - PortConfigSet_1_ClockSourceSelection_DNFCKS104C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0050U
  },

  /* Index: 11 - PortConfigSet_1_ClockSourceSelection_DNFCKS101C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0008U
  },

  /* Index: 12 - PortConfigSet_1_ClockSourceSelection_DNFCKS110C */
  {
    /* ulDNFCKS */
    0x00000002UL,

    /* usDNFCKSRegAddrOffset */
    0x0030U
  }
};


/* END Msg(2:3674)-2 */


#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
