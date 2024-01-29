/* Copyright (C) 2010-2014 TTTech Automotive GmbH. All rights reserved
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office(at)tttech-automotive.com
 *
 * Name:
 *   WdgIf.h
 *
 * Purpose: Common include file for the Safe Watchdog Manager.
 *
 */

/* ------------------------------------------------------------------------- */
/*                        SUPRESSED MISRA VIOLATONS                          */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(3:3210) The global identifier 'WdgIf_Interface' /
                   'WdgIf_SetMode' / 'WdgIf_SetTriggerCondition' /
                   'WdgIf_SetTriggerWindow' / 'WdgIf_GetTickCounter'
                   is declared but is not used.
 * Justification : The function is the interface of this SW module to the upper
                   SW layers.                                                */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(4:3408) 'WdgIf_SetMode' / 'WdgIf_SetTriggerCondition' /
                   'WdgIf_SetTriggerWindow' / 'WdgIf_GetTickCounter'
                   has external linkage but is being defined without any
                   previous declaration.
 * Justification : The function is the interface of this SW module to the upper
                   SW layers and is declared in this header file.            */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(4:3447) 'WdgIf_Interface' has external linkage but this
                   declaration is not in a header file.
 * Justification : The declaration is in a header file - this file.          */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(6:0288) [I] Source file 'WdgIf.h' has comments containing
                   characters which are not members of the basic source
                   character set.
 * Justification : The (at) character is needed for doxygen comments.         */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(4:3458) Macro defines a braced code statement block.
                   MISRA-C:2004 Rule 19.4
 * Justification : The function 'WdgIf_GetVersionInfo' is realised as a macro
                   as advised by AUTOSAR.                                     */
/* ------------------------------------------------------------------------- */

/* PRQA S 0288 EOF */

#ifndef _WDGIF_H_
#define _WDGIF_H_ 1u

/* ***************************************************************************
** Includes
******************************************************************************/
#include "WdgIf_Cfg.h"

/* ***************************************************************************
** Macros
******************************************************************************/

/* Published information */
#define WDGIF_VENDOR_ID  46u
#define WDGIF_MODULE_ID  43u

/* Version information */
#define WDGIF_SW_MAJOR_VERSION  3u
#define WDGIF_SW_MINOR_VERSION  3u
#define WDGIF_SW_PATCH_VERSION  6u

/* AUTOSAR release version (AUTOSAR 4 environment) */
#define WDGIF_AR_RELEASE_MAJOR_VERSION     4u
#define WDGIF_AR_RELEASE_MINOR_VERSION     0u
#define WDGIF_AR_RELEASE_REVISION_VERSION  1u

/* AUTOSAR release version (AUTOSAR 3 environment) */
#define WDGIF_AR_MAJOR_VERSION  WDGIF_AR_RELEASE_MAJOR_VERSION
#define WDGIF_AR_MINOR_VERSION  WDGIF_AR_RELEASE_MINOR_VERSION
#define WDGIF_AR_PATCH_VERSION  WDGIF_AR_RELEASE_REVISION_VERSION

/** API Service ID for WdgIf_SetMode */
#define API_ID_WdgIf_SetMode             0x01u

/** API Service ID for WdgIf_SetTriggerCondition */
#define API_ID_WdgIf_SetTriggerCondition 0x02u

/** API Service ID for WdgIf_GetVersionInfo */
#define API_ID_WdgIf_GetVersionInfo      0x03u

/** API Service ID for WdgIf_SetTriggerWindow */
#define API_ID_WdgIf_SetTriggerWindow    0x04u

/* DET codes */
#define WDGIF_E_PARAM_DEVICE 0x01u
#define WDGIF_E_PARAM_PTR    0x02u

/* ***************************************************************************
** Externals
******************************************************************************/
/* Define the external variable WdgIf_Interface as const, if unit tests are
   compiled - define it as non const. */
#ifndef WDGIF_UNIT_TESTS
    /* PRQA S 3210 1 */ /* PRQA S 3447 1 */
    extern CONST (WdgIf_InterfaceType, WDGIF_CONST) WdgIf_Interface;
#else
  #if (WDGIF_UNIT_TESTS == 1u)
    /* PRQA S 3210 1 */ /* PRQA S 3447 1 */
    extern VAR (WdgIf_InterfaceType, WDGIF_VAR) WdgIf_Interface;
  #else
    /* PRQA S 3210 1 */ /* PRQA S 3447 1 */
    extern CONST (WdgIf_InterfaceType, WDGIF_CONST) WdgIf_Interface;
  #endif /* (WDGIF_UNIT_TESTS == 1u) */
#endif

/* ***************************************************************************
** Prototypes
******************************************************************************/

/**
 *  Function selects a Watchdog Mode.
 *
 *  @param DeviceIndex (in)      index of the Watchdog device
 *  @param WdgMode (in)          new mode to be set
 *
 * @return an error-code
 *  @retval E_OK                 new mode selected successfully
 *  @retval E_NOT_OK             an error occurred
 */
/* PRQA S 3210 4 */ /* PRQA S 3408 4 */
FUNC (Std_ReturnType, WDGIF_CODE) WdgIf_SetMode
    ( VAR (uint8, AUTOMATIC) DeviceIndex
    , VAR (WdgIf_ModeType, AUTOMATIC) WdgMode
    );

/**
 *  Function triggers the Watchdog and set a new timeout.
 *
 *  @param DeviceIndex (in)      index of the Watchdog device
 *  @param Timeout (in)          new timeout to be set
 *
 * @return an error-code
 *  @retval E_OK                 the trigger and timeout set was successfull
 *  @retval E_NOT_OK             an error occurred
 */
/* PRQA S 3210 4 */ /* PRQA S 3408 4 */
FUNC (Std_ReturnType, WDGIF_CODE) WdgIf_SetTriggerCondition
    ( VAR (uint8, AUTOMATIC) DeviceIndex
    , VAR (uint16, AUTOMATIC) Timeout
    );

/**
 *  Function triggers the Watchdog and set a new window start and timeout.
 *
 *  @param DeviceIndex (in)      index of the Watchdog device
 *  @param WindowStart (in)      new window start time to be set
 *  @param Timeout (in)          new timeout to be set
 *
 * @return an error-code
 *  @retval E_OK                 the trigger, window start and timeout set was successfull
 *  @retval E_NOT_OK             an error occurred
 */
/* PRQA S 3210 5 */ /* PRQA S 3408 5 */
FUNC (Std_ReturnType, WDGIF_CODE) WdgIf_SetTriggerWindow
    ( VAR (uint8, AUTOMATIC) DeviceIndex
    , VAR (uint16, AUTOMATIC) WindowStart
    , VAR (uint16, AUTOMATIC) Timeout
    );

#if (WDGIF_INTERNAL_TICK_COUNTER == STD_ON)
/**
 *  Function reads the hardware Tick counter.
 *
 * @return  uint32  the current value of the hardware tick counter.
 */
/* PRQA S 3210 1 */ /* PRQA S 3408 1 */
FUNC (uint32, WDGIF_CODE) WdgIf_GetTickCounter (void);
#endif /* (WDGIF_INTERNAL_TICK_COUNTER == STD_ON) */

#if (WDGIF_VERSION_INFO_API == STD_ON)
  /* Define a DET call for the GetVersionInfo macro implementation. */
  #if (WDGIF_DEV_ERROR_DETECT == STD_ON)
    #define WDGIF_GETVERSION_DET_NULL_POINTER()            \
        Appl_Det_ReportError ( WDGIF_MODULE_ID             \
                             , WDGIF_VENDOR_ID             \
                             , API_ID_WdgIf_GetVersionInfo \
                             , WDGIF_E_PARAM_PTR           \
                             )
  #else
    #define WDGIF_GETVERSION_DET_NULL_POINTER()
  #endif /* (WDGIF_DEV_ERROR_DETECT == STD_ON) */

/* Macro implementation of function WdgIf_GetVersionInfo() */
#define WdgIf_GetVersionInfo(_VersionInfoPtr)                         \
{                                                                     \
    if ((_VersionInfoPtr) == NULL_PTR)                                \
    {                                                                 \
        WDGIF_GETVERSION_DET_NULL_POINTER();                          \
    }                                                                 \
    else                                                              \
    {                                                                 \
        (_VersionInfoPtr)->vendorID         = WDGIF_VENDOR_ID;        \
        (_VersionInfoPtr)->moduleID         = WDGIF_MODULE_ID;        \
        (_VersionInfoPtr)->sw_major_version = WDGIF_SW_MAJOR_VERSION; \
        (_VersionInfoPtr)->sw_minor_version = WDGIF_SW_MINOR_VERSION; \
        (_VersionInfoPtr)->sw_patch_version = WDGIF_SW_PATCH_VERSION; \
    }                                                                 \
} /* PRQA S 3458 */
#endif /* WDGIF_VERSION_INFO_API == STD_ON */

#endif /* _WDGIF_H_ */
