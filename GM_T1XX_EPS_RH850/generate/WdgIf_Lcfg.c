/*** Generated code, do not change!                                        ***/
/*** Module WdgIf_Lcfg, written by Wdg_If_Cfg_Gen 3.3.27 (build 263183) on ***/
/*** Wed 14-Dec-2016 11:37:38                                              ***/

#include "Wdg_59_DriverA.h"
#include "WdgIf_Lcfg.h"
#include "WdgIf.h"

#define WDGIF_START_SEC_CONST_UNSPECIFIED 
#include "MemMap.h"
static const WdgIf_InterfaceFunctionsType drivera_functions =
  { Wdg_59_DriverA_SetMode /* Wdg_SetMode                                    */
  , Wdg_59_DriverA_SetTriggerCondition /* Wdg_SetTriggerWindow               */
  };

static const WdgIf_InterfaceFunctionsPerWdgDeviceType WdgIf_FunctionsPerWdg [WDGIF_NUMBER_OF_WDGIFDEVICES] =
  { { &drivera_functions /* WdgFunctions                                     */
    } /* [0]                                                               */
  };

const WdgIf_InterfaceType WdgIf_Interface =
  { WDGIF_NUMBER_OF_WDGIFDEVICES /* NumOfWdgs                                */
  , WdgIf_FunctionsPerWdg /* WdgFunctionsPerDevice                           */
  };
#define WDGIF_STOP_SEC_CONST_UNSPECIFIED 
#include "MemMap.h"
