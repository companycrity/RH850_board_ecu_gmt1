/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Port.h                                                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, PORT type definitions, structure data types and */
/* API function prototypes of PORT Driver                                     */
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

/*Implements EAAR_PN0034_NR_0045, EAAR_PN0034_NR_0060*/
/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  30-Aug-2012  : Initial Version
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 055, following changes are made:
 *                         1. Software Version is updated.
 *                         2. Copyright information is updated.
 *
 * V1.2.0:  12-Mar-2013  : As per SCR 091 for mantis #9240, two APIs
 *                         'Port_SetToDioMode' and 'Port_SetToAlternateMode'
 *                         are added.
 *
 * V1.3.0:  05-Aug-2013  : As per CR 225, as part of merging activity and mantis
 *                         issues #11827, #11215 and #11895, following changes
 *                         are made:
 *                         1. Software Minor Version is updated.
 *                         2. Header and Environment sections are updated to
 *                            change the device name.
 *
 * V1.4.0:  04-Sep-2013  : As per CR 236 for mantis #12602, Software Minor
 *                         Version is updated.
 *
 * V1.4.1:  09-Dec-2013  : As per CR 338 for mantis #11214, following changes
 *                         are made:
 *                         1. Software Patch Version is updated.
 *                         2. Alternative modes are added for Port_SetPinMode()
 *                            API.
 *
 * V1.4.2:  04-Jan-2014  : As per CR 378 for mantis #19208, as part of merging
 *                         activity copyright information is updated.
 *
 * V1.5.0:  21-Feb-2014  : As per CR 419 for mantis #19676, Two APIs
 *                         'Port_SetPinDefaultDirection' and
 *                         'Port_SetPinDefaultMode' are added for ID Macros and
 *                         function prototype.
 *                         2. SWS Requirements are mapped.
 *
 * V1.5.1:  25-Jul-2014  : As per CR 563 for mantis #22811, as part of merging
 *                         activity, SWS Requirements are mapped.
 *
 * V1.5.2:  22-Aug-2014  : As per CR 570, MISRA C Rule Violations are added as
 *                         QAC 8.1.1.
 * V1.5.3:  28-Jan-2015  : As per mantis #24335,#23568
 *                         1.Alternative modes are added to Port_SetPinMode()API
 *                         2.Port_Cfg.h is included.
 *                         3.Copyright information is updated.
 * V1.5.4:  04-Mar-2016  : Following changes are done
 *                         1.Copyright information is updated.
 *                         2.As per ARDAAAE-1672,
 *                           PORT_START_SEC_DBTOC_DATA_UNSPECIFIED is changed to
 *                           PORT_START_SEC_CONFIG_DATA_UNSPECIFIED and
 *                           PORT_STOP_SEC_DBTOC_DATA_UNSPECIFIED changed to
 *                           PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
 * V1.5.5   08-Aug-2016  : As part of P1x v4.01.01 release, following changes
 *                         are done:
 *                         1.As per ARDAAAE-1484,Macro declaration of
 *                           Port_GetVersionInfo is replaced with function
 *                           declaration and PORT_E_PARAM_POINTER macro is added
 *                         2.Unwanted Misra violations are removed.
 *                         3.As per ARDAAAE-1908, ASR3.2.2 version information
 *                           is removed
 *                         4.As per ARDAAAE-1936,unit design ID and requirement
 *                            tags are added at applicable places.
 * V1.5.6:  31-Aug-2016 :  As per ARDAAAE-2018, macro Port_ProtectedWrite is
 *                         added.
 */
/******************************************************************************/
/*Implements AR_PN0062_FR_0001, EAAR_PN0034_FR_0052, AR_PN0062_FR_0005*/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements EAAR_PN0034_FR_0021, EAAR_PN0034_NR_0007, PORT207*/
#ifndef PORT_H
#define PORT_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* To publish the standard types */
#include "Std_Types.h"
/* To include pre compile values and switches */
/* Implements PORT130, PORT204, PORT133, PORT108, EAAR_PN0034_FR_0020, PORT129*/
#include "Port_Cfg.h"
/* To publish the type Port_ConfigType */
#include "Port_Types.h"
/*Implements PORT100, PORT107*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)
/* Only in case of DET enabled, Debug variables will be available externally */
#include "Port_Debug.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* Version identification */
#define PORT_VENDOR_ID              PORT_VENDOR_ID_VALUE
#define PORT_MODULE_ID              PORT_MODULE_ID_VALUE
/*Implements PORT_ESDD_UD_105*/
#define PORT_INSTANCE_ID            PORT_INSTANCE_ID_VALUE

/* Implements PORT114*/

/* AUTOSAR release version information */
#define PORT_AR_RELEASE_MAJOR_VERSION    4
#define PORT_AR_RELEASE_MINOR_VERSION    0
#define PORT_AR_RELEASE_REVISION_VERSION 3

/* Module Software version information */
#define PORT_SW_MAJOR_VERSION    PORT_SW_MAJOR_VERSION_VALUE
#define PORT_SW_MINOR_VERSION    PORT_SW_MINOR_VERSION_VALUE
#define PORT_SW_PATCH_VERSION    PORT_SW_PATCH_VERSION_VALUE
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*Implements EAAR_PN0034_NR_0002, EAAR_PN0034_NR_0026*/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/*Message        : (4:3684) Array declared with unknown size.                 */
/*Rule           : MISRA-C:2004 Rule 1.2                                      */
/*Justification  : Subscripting cannot be applied on the array since size can */
/*                 grow based on configuration done by user i.e. multi        */
/*                 configuration                                              */
/*Verification   : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/*Reference      : Look for MISRA Violation START Msg(4:3684)-1 and           */
/*                 MISRA Violation: END Msg(4:3684)-1 tags in the code.       */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognized code-fragment       */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Macro definition as multi-line operation hence multi-line  */
/*                 macro is used                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation: START Msg(4:3412)-2 and          */
/*                 MISRA Violation: END Msg(4:3412)-2 tags in the code.       */

/*******************************************************************************
**                      API service ID Macros                                 **
*******************************************************************************/
/* Service ID for PORT Initialization */
#define PORT_INIT_SID                            (uint8)0x00
/* Service ID for setting the Direction of PORT Pin */
#define PORT_SET_PIN_DIR_SID                     (uint8)0x01
/* Service ID for refreshing the Direction of PORT Pin */
#define PORT_REFRESH_PORT_DIR_SID                (uint8)0x02
/* Service ID for PORT getting Version Information */
#define PORT_GET_VERSION_INFO_SID                (uint8)0x03
/* Service ID for setting the Mode of PORT Pin */
#define PORT_SET_PIN_MODE_SID                    (uint8)0x04
/* Service ID for setting the Mode of PORT Pin */
#define PORT_SET_TO_DIO_MODE_SID                 (uint8)0x05
/* Service ID for setting the Mode of PORT Pin */
#define PORT_SET_TO_ALT_MODE_SID                 (uint8)0x06
/* Service ID for setting the Default Mode of PORT Pin */
#define PORT_SET_PIN_DEFAULT_MODE_SID            (uint8)0x07
/* Service ID for setting the Default Direction of PORT Pin */
#define PORT_SET_PIN_DEFAULT_DIR_SID             (uint8)0x08


/*******************************************************************************
**                      DET Error Codes                                       **
*******************************************************************************/
/* Implements PORT116*/
/* Development error values are of type uint8 */

/* DET error type, values and related error codes */
/* Implements PORT116, PORT051*/

/* Invalid Port Pin ID requested */
/* Implements PORT051*/
#define PORT_E_PARAM_PIN                         (uint8)0x0A

/* Port Pin Direction not configured as changeable */
#define PORT_E_DIRECTION_UNCHANGEABLE            (uint8)0x0B

/* API Port_Init service called with wrong parameter. */
#define PORT_E_PARAM_CONFIG                      (uint8)0x0C

/* When valid Mode is not available */
#define PORT_E_PARAM_INVALID_MODE                (uint8)0x0D

/* When valid Mode is not configured as changeable  */
#define PORT_E_MODE_UNCHANGEABLE                 (uint8)0x0E

/* When PORT APIs are invoked before PORT Module Initialization */
#define PORT_E_UNINIT                            (uint8)0x0F

/* When valid Database is not available */
#define PORT_E_INVALID_DATABASE                  (uint8)0xEF

/* When GetVersionInfo is called with NULL pointer */
#define PORT_E_PARAM_POINTER                     (uint8)0x10

/* Implements PORT208, PORT212*/
/* Alternative modes for Port_SetPinMode() API */
#define APP_ALT1_OUT                 (Port_PinModeType)0x02
#define APP_ALT1_IN                  (Port_PinModeType)0x03
#define APP_ALT2_OUT                 (Port_PinModeType)0x04
#define APP_ALT2_IN                  (Port_PinModeType)0x05
#define APP_ALT3_OUT                 (Port_PinModeType)0x06
#define APP_ALT3_IN                  (Port_PinModeType)0x07
#define APP_ALT4_OUT                 (Port_PinModeType)0x08
#define APP_ALT4_IN                  (Port_PinModeType)0x09
#define APP_ALT5_OUT                 (Port_PinModeType)0x0A
#define APP_ALT5_IN                  (Port_PinModeType)0x0B
#define APP_ALT6_OUT                 (Port_PinModeType)0x0C
#define APP_ALT6_IN                  (Port_PinModeType)0x0D

#define APP_ALT1_OUT_SET_PIPC        (Port_PinModeType)0x82
#define APP_ALT1_IN_SET_PIPC         (Port_PinModeType)0x83
#define APP_ALT2_OUT_SET_PIPC        (Port_PinModeType)0x84
#define APP_ALT2_IN_SET_PIPC         (Port_PinModeType)0x85
#define APP_ALT3_OUT_SET_PIPC        (Port_PinModeType)0x86
#define APP_ALT3_IN_SET_PIPC         (Port_PinModeType)0x87
#define APP_ALT4_OUT_SET_PIPC        (Port_PinModeType)0x88
#define APP_ALT4_IN_SET_PIPC         (Port_PinModeType)0x89
#define APP_ALT5_OUT_SET_PIPC        (Port_PinModeType)0x8A
#define APP_ALT5_IN_SET_PIPC         (Port_PinModeType)0x8B
#define APP_ALT6_OUT_SET_PIPC        (Port_PinModeType)0x8C
#define APP_ALT6_IN_SET_PIPC         (Port_PinModeType)0x8D

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* Implements PORT201 */
/* Type definition for Port_PinType used by the API Port_SetPinDirection() */
/* Implements PORT013, PORT013, PORT219 */
/* Implements PORT_ESDD_UD_109*/
typedef uint16 Port_PinType;

/* Type definition for Port_PinDirectionType used by the API
 * Port_SetPinDirection()
 */
/* Implements PORT046, PORT046 */
/* Implements PORT_ESDD_UD_110*/
typedef enum ETag_Port_PinDirectionType
{
  /* The type Port_PinDirectionType shall be of enumeration type */
  /* Implements PORT220 */
  PORT_PIN_OUT,
  PORT_PIN_IN
} Port_PinDirectionType;

/* Type definition for Port_PinModeType used by the API
 * Port_SetPinMode()
 */
/* Implements PORT124, PORT124, PORT221, PORT212 */
/* Implements PORT_ESDD_UD_111*/
typedef uint8 Port_PinModeType;


/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define PORT_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* External Declaration for Port Initialization API. */
extern FUNC(void, PORT_PUBLIC_CODE) Port_Init
           (P2CONST(Port_ConfigType, AUTOMATIC, PORT_APPL_CONST) ConfigPtr);

#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
/* External Declaration for Port Set pin direction API. */
extern FUNC(void, PORT_PUBLIC_CODE) Port_SetPinDirection
                     (Port_PinType Pin, Port_PinDirectionType Direction);
#endif

#if (PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON)
/* External Declaration for Port Set pin direction API. */
extern FUNC(void, PORT_PUBLIC_CODE) Port_SetPinDefaultDirection
                                  (Port_PinType Pin);
#endif

#if (PORT_SET_PIN_DEFAULT_MODE_API == STD_ON)
/* External Declaration for Port Set pin direction API. */
extern FUNC(void, PORT_PUBLIC_CODE) Port_SetPinDefaultMode
                                  (Port_PinType Pin);
#endif

/* External Declaration for Port refresh port direction API. */
extern FUNC(void, PORT_PUBLIC_CODE) Port_RefreshPortDirection(void);

#if (PORT_VERSION_INFO_API == STD_ON)
/* Declaration of API "Port_GetVersionInfo" */

extern FUNC(void, PORT_PUBLIC_CODE) Port_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, PORT_APPL_DATA)versioninfo);

#endif /*(PORT_VERSION_INFO_API == STD_ON)*/

#if (PORT_SET_PIN_MODE_API == STD_ON)
/* External Declaration for Port set pin mode API. */
extern FUNC (void, PORT_PUBLIC_CODE) Port_SetPinMode
                                   (Port_PinType Pin, Port_PinModeType Mode);
#endif

#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)
extern FUNC (void, PORT_PUBLIC_CODE) Port_SetToDioMode (Port_PinType Pin);

extern FUNC (void, PORT_PUBLIC_CODE) Port_SetToAlternateMode (Port_PinType Pin);
#endif

#define PORT_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* External Declaration for Port database configuration set. */
/* MISRA Violation: START Msg(4:3684)-1 */
/* Structure for PORT Init configuration */
extern CONST(Port_ConfigType, PORT_CONST) Port_GstConfiguration[];
/* MISRA Violation: END Msg(4:3684)-1 */

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* MISRA Violation: START Msg(4:3412)-2 */
/*Macro definition for Protected register write*/
#define Port_ProtectedWrite(reg, value, preg, sreg, loopcount) \
  do  \
  { \
    (preg) = PORT_WRITE_ERROR_CLEAR_VAL;  \
    (reg) = (value);  \
    (reg) = ~(value); \
    (reg) = (value);  \
    (loopcount) = (loopcount) - PORT_ONE;  \
  }while ((PORT_LONG_WORD_ONE == (sreg)) && ((loopcount) > PORT_ZERO));
/* MISRA Violation: END Msg(4:3412)-2 */

#endif /* PORT_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
