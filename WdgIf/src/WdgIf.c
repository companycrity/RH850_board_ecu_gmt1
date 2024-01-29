/* Copyright (C) 2010-2014 TTTech Automotive GmbH. All rights reserved
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office(at)tttech-automotive.com
 *
 * Name:
 *   WdgIf.c
 *
 * Purpose: Platform independent implementation of the Safe Watchdog Interface
 *          part of the Modular Safety Platform.
 *
 */

/* ------------------------------------------------------------------------- */
/*                        SUPRESSED MISRA VIOLATONS                          */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(4:1503) The function 'WdgIf_SetMode' /
                   'WdgIf_SetTriggerCondition' / 'WdgIf_SetTriggerWindow' /
                   'WdgIf_GetTickCounter'
                   is defined but is not used within this project.
 * Justification : The function is a library-API-function used by
 *                 the application.                                          */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(4:5087) #include statements in a file should only be
                   preceded by other preprocessor directives or comments.
 * Justification : MemMap-pragmas must be included here. See AUTOSAR
 *                 requirement MEMMAP003.                                    */
/* ------------------------------------------------------------------------- */
/* Error Message : Msg(3:3206) The parameter 'WindowStart' is not used in
                   this function.
 * Justification : This is the case when AUTOSAR compatible API is switched
                   on per preprocessor switch. The original function
                   declaration with the unused parameter is kept for reasons
                   of compatibility. */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/*                                HIS METRICS                                */
/* ------------------------------------------------------------------------- */
/*
 * metric VOCF>4: the language scope (Sprachumfang) of this source file is
 *        slightly higher than recommended mostly because all functions part of
 *        the API contain similar parameter checks (DET) and memory consistency
 *        checks. These are left as they are for AUTOSAR compliance and a
 *        better code readability.
 */

/* ***************************************************************************
** Includes
******************************************************************************/
#include "WdgIf.h"
#if (WDGIF_DEV_ERROR_DETECT == STD_ON)
  #include "Appl_Det.h"
#endif

/* ***************************************************************************
** Source version
******************************************************************************/
#define WDGIF_SW_MAJOR_VERSION_SOURCE 3u
#define WDGIF_SW_MINOR_VERSION_SOURCE 3u
#define WDGIF_SW_PATCH_VERSION_SOURCE 6u

/* Protection against incorrect include file version (WdgIf.h) */
#if !(  (WDGIF_SW_MAJOR_VERSION ==     \
         WDGIF_SW_MAJOR_VERSION_SOURCE \
        )                              \
     && (WDGIF_SW_MINOR_VERSION ==     \
         WDGIF_SW_MINOR_VERSION_SOURCE \
        )                              \
     && (WDGIF_SW_PATCH_VERSION ==     \
         WDGIF_SW_PATCH_VERSION_SOURCE \
        )                              \
     )
  #error "Version mismatch! Incorrect version of WdgIf.h"
#endif

/* Protection against incorrect include file version (WdgIf_Cfg.h) */
#if !(  (WDGIF_CFG_SW_MAJOR_VERSION == \
         WDGIF_SW_MAJOR_VERSION_SOURCE \
        )                              \
     && (WDGIF_CFG_SW_MINOR_VERSION == \
         WDGIF_SW_MINOR_VERSION_SOURCE \
        )                              \
     && (WDGIF_CFG_SW_PATCH_VERSION == \
         WDGIF_SW_PATCH_VERSION_SOURCE \
        )                              \
     )
  #error "Version mismatch! Incorrect version of WdgIf_Cfg.h"
#endif

/* Protection against incorrect include file version (WdgIf_Types.h) */
#if !(  (WDGIF_TYPES_SW_MAJOR_VERSION == \
         WDGIF_SW_MAJOR_VERSION_SOURCE   \
        )                                \
     && (WDGIF_TYPES_SW_MINOR_VERSION == \
         WDGIF_SW_MINOR_VERSION_SOURCE   \
        )                                \
     && (WDGIF_TYPES_SW_PATCH_VERSION == \
         WDGIF_SW_PATCH_VERSION_SOURCE   \
        )                                \
     )
  #error "Version mismatch! Incorrect version of WdgIf_Types.h"
#endif

/* ***************************************************************************
** Module functions
******************************************************************************/
#define WDGIF_START_SEC_CODE
#include "MemMap.h"

/* PRQA S 1503 4 */
FUNC (Std_ReturnType, WDGIF_CODE) WdgIf_SetMode
    ( VAR (uint8, AUTOMATIC) DeviceIndex
    , VAR (WdgIf_ModeType, AUTOMATIC) WdgMode
    )
{
  #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
    VAR (uint8, AUTOMATIC) wdg_instance;
  #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
    VAR (Std_ReturnType, AUTOMATIC) ret;

    /* Check DeviceIndex and report to DET if necessary and enabled */
    if ( (WdgIf_Interface.WdgFunctionsPerDevice == NULL_PTR)
      || (DeviceIndex >= WdgIf_Interface.NumOfWdgs)
      || (WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions == NULL_PTR)
       )
    {
      #if (WDGIF_DEV_ERROR_DETECT == STD_ON)
        Appl_Det_ReportError ( WDGIF_MODULE_ID
                             , WDGIF_VENDOR_ID
                             , API_ID_WdgIf_SetMode
                             , WDGIF_E_PARAM_DEVICE
                             );
      #endif /* WDGIF_DEV_ERROR_DETECT == STD_ON */
        ret = E_NOT_OK;
    }
    /* If DET checks were successful */
    else
    {
      #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
        /* Identify watchdog instance, if more than one of the same type */
        wdg_instance = WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgInstance;
      #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */

        /* Call corresponding platform-specific implementation */
        ret = WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions->
              #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
                Wdg_SetMode (wdg_instance, WdgMode);
              #else
                Wdg_SetMode_AR (WdgMode);
              #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
    }

    return ret;
}

/* PRQA S 1503 4 */
FUNC (Std_ReturnType, WDGIF_CODE) WdgIf_SetTriggerCondition
    ( VAR (uint8, AUTOMATIC) DeviceIndex
    , VAR (uint16, AUTOMATIC) Timeout
    )
{
  #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
    VAR (uint8, AUTOMATIC) wdg_instance;
  #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
    VAR (Std_ReturnType, AUTOMATIC) ret;

    /* Check DeviceIndex and report to DET if necessary and enabled */
    if ( (WdgIf_Interface.WdgFunctionsPerDevice == NULL_PTR)
      || (DeviceIndex >= WdgIf_Interface.NumOfWdgs)
      || (WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions == NULL_PTR)
       )
    {
      #if (WDGIF_DEV_ERROR_DETECT == STD_ON)
        Appl_Det_ReportError ( WDGIF_MODULE_ID
                             , WDGIF_VENDOR_ID
                             , API_ID_WdgIf_SetTriggerCondition
                             , WDGIF_E_PARAM_DEVICE
                             );
      #endif /* WDGIF_DEV_ERROR_DETECT == STD_ON */
        ret = E_NOT_OK;
    }
    /* If DET checks were successful */
    else
    {
      #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
        /* Identify watchdog instance, if more than one of the same type */
        wdg_instance = WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgInstance;
      #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */

        /* Call corresponding platform-specific implementation */
      #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
        ret = WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions->
                Wdg_SetTriggerWindow (wdg_instance, 0u, Timeout);
      #else
        ret = E_OK; /* void function - set expected return value to OK */
        WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions->
            Wdg_SetTriggerCondition_AR (Timeout);
      #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
    }

    return ret;
}

/* PRQA S 1503 5 */ /* PRQA S 3206 5 */
FUNC (Std_ReturnType, WDGIF_CODE) WdgIf_SetTriggerWindow
    ( VAR (uint8, AUTOMATIC) DeviceIndex
    , VAR (uint16, AUTOMATIC) WindowStart
    , VAR (uint16, AUTOMATIC) Timeout
    )
{
  #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
    VAR (uint8, AUTOMATIC) wdg_instance;
  #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
    VAR (Std_ReturnType, AUTOMATIC) ret;

    /* Check DeviceIndex and report to DET if necessary and enabled */
    if ( (WdgIf_Interface.WdgFunctionsPerDevice == NULL_PTR)
      || (DeviceIndex >= WdgIf_Interface.NumOfWdgs)
      || (WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions == NULL_PTR)
       )
    {
      #if (WDGIF_DEV_ERROR_DETECT == STD_ON)
        Appl_Det_ReportError ( WDGIF_MODULE_ID
                             , WDGIF_VENDOR_ID
                             , API_ID_WdgIf_SetTriggerWindow
                             , WDGIF_E_PARAM_DEVICE
                             );
      #endif /* WDGIF_DEV_ERROR_DETECT == STD_ON */
        ret = E_NOT_OK;
    }
    /* If DET checks were successful */
    else
    {
      #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
        /* Identify watchdog instance, if more than one of the same type */
        wdg_instance = WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgInstance;
      #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */

        /* Call corresponding platform-specific implementation */
      #if (WDGIF_USE_AUTOSAR_DRV_API != STD_ON)
        ret = WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions->
                Wdg_SetTriggerWindow (wdg_instance, WindowStart, Timeout);
      #else
        ret = E_OK; /* void function - set expected return value to OK */
        /* Note: the parameter WindowStart is deliberately ignored - not supported by AUTOSAR. */
        WdgIf_Interface.WdgFunctionsPerDevice [DeviceIndex].WdgFunctions->
            Wdg_SetTriggerCondition_AR (Timeout);
      #endif /* (WDGIF_USE_AUTOSAR_DRV_API != STD_ON) */
    }

    return ret;
}

#if (WDGIF_INTERNAL_TICK_COUNTER == STD_ON)
/* PRQA S 1503 1 */
FUNC (uint32, WDGIF_CODE) WdgIf_GetTickCounter (void)
{
    /* Return the value provided by the watchdog driver. */
    return WdgIf_Interface.Wdg_GetTickCounter ();
}
#endif /* WDGIF_INTERNAL_TICK_COUNTER == STD_ON */

#define WDGIF_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */
