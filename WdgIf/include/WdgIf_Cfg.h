/* Copyright (C) 2010-2014 TTTech Automotive GmbH. All rights reserved
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office(at)tttech-automotive.com
 *
 * Name:
 *   WdgIf_Cfg.h
 *
 * Purpose: Provides platform independent type declarations for the Safe
 *          Watchdog Interface part of the Modular Safety Platform.
 *
 */

/* ------------------------------------------------------------------------- */
/*                        SUPRESSED MISRA VIOLATONS                          */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(3:3205) The identifier 'WdgIf_BasicConfigurationType' /
                   'WdgIf_InterfaceType' is not used and could be removed.
 * Justification : The identifier is used by the module source file and the
                   files containing the configuration.                       */
/* ------------------------------------------------------------------------- */

#ifndef _WDGIF_CFG_H_
#define _WDGIF_CFG_H_ 1u

/* ***************************************************************************
** Includes
******************************************************************************/
#include "WdgIf_Types.h"

/* Generated preprocessor options for module features */
#include "WdgIf_Cfg_Features.h"

/* ***************************************************************************
** Macros
******************************************************************************/

/* Version information */
#define WDGIF_CFG_SW_MAJOR_VERSION  3u
#define WDGIF_CFG_SW_MINOR_VERSION  3u
#define WDGIF_CFG_SW_PATCH_VERSION  6u

#ifndef WDGIF_DEV_ERROR_DETECT
    #error "Macro WDGIF_DEV_ERROR_DETECT should be defined! (ON/OFF)"
#endif

#ifndef WDGIF_VERSION_INFO_API
    #error "Macro WDGIF_VERSION_INFO_API should be defined! (ON/OFF)"
#endif

#ifndef WDGIF_INTERNAL_TICK_COUNTER
    #error "Macro WDGIF_INTERNAL_TICK_COUNTER should be defined! (ON/OFF)"
#endif

#ifndef WDGIF_USE_AUTOSAR_DRV_API
    #error "Macro WDGIF_USE_AUTOSAR_DRV_API should be defined! (ON/OFF)"
#endif

#ifndef FALSE
    #error "Macro FALSE should be defined! ((boolean) 0u)"
#endif

#ifndef TRUE
    #error "Macro TRUE should be defined! ((boolean) 1u)"
#endif

#ifndef NULL_PTR
    #define NULL_PTR ((void *) 0u)
#endif


/* ***************************************************************************
** Type definitions
******************************************************************************/

typedef struct {
#if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
    Std_ReturnType (*Wdg_SetMode) (uint8, WdgIf_ModeType);
        /**< Pointer to a driver function Wdg_<platform>_SetMode() */
    Std_ReturnType (*Wdg_SetTriggerWindow) (uint8, uint16, uint16);
        /**< Pointer to a driver function Wdg_<platform>_SetTriggerWindow() */
#else
    Std_ReturnType (*Wdg_SetMode_AR) (WdgIf_ModeType);
        /**< Pointer to a driver function Wdg_<platform>_SetMode() */
    void (*Wdg_SetTriggerCondition_AR) (uint16);
        /**< Pointer to a driver function Wdg_<platform>_SetTriggerWindow() */
#endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
} WdgIf_InterfaceFunctionsType;

typedef struct {
    const WdgIf_InterfaceFunctionsType *WdgFunctions;
        /**< Pointer to a struct of watchdog driver functions. */
#if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
    uint8 WdgInstance;
        /**< Watchdog instance or 0 if the driver does not use it. */
#endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
} WdgIf_InterfaceFunctionsPerWdgDeviceType;

typedef struct {
    uint8 NumOfWdgs; /**< Number of watchdogs. */
#ifndef WDGIF_UNIT_TESTS
    const WdgIf_InterfaceFunctionsPerWdgDeviceType *WdgFunctionsPerDevice;
        /**< Array of structures functions per device ordered by device index. */
#else
    WdgIf_InterfaceFunctionsPerWdgDeviceType *WdgFunctionsPerDevice;
#endif
#if (WDGIF_INTERNAL_TICK_COUNTER == STD_ON)
    /* Function pointer to the GetTickCounter driver function */
    uint32 (*Wdg_GetTickCounter) (void);
        /**< Pointer to a driver function Wdg_<platform>_GetTickCounter() */
#endif /* (WDGIF_INTERNAL_TICK_COUNTER == STD_ON) */

/* PRQA S 3205 1 */
} WdgIf_InterfaceType;

/* ***************************************************************************
** Prototypes
******************************************************************************/

#endif /* _WDGIF_CFG_H_ */
