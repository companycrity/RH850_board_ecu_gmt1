/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: Os.h
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.14
|
|  Description: standard header of the OS, to be included by the application
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2006-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: os.h */
/* fullfills [SR:309] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/* fullfills [SR:308] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/* double include preventer */
#ifndef _OS_H
#define _OS_H

/* Vector release management */
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif
/* KB begin vrmReleaseNumber (overwritten) */
/* Source release number */
#define osdVrmMajRelNum 1
#define osdVrmMinRelNum 6
/* KB end vrmReleaseNumber */
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif

#if defined USE_QUOTE_INCLUDES
 #include "Os_Cfg.h"
#else
 #include <Os_Cfg.h>
#endif

#if (osdTypeHeaderInclude != 0)
 #if defined USE_QUOTE_INCLUDES
  #include "Std_Types.h"
  #include "Rte_Type.h"
 #else
  #include <Std_Types.h>
  #include <Rte_Type.h>
 #endif
#endif

#if defined __cplusplus
extern "C"
{
#endif

 #if (osdUseTrustedFunctionStubs != 0) || (osdNeedIOCTypes != 0)
  #if defined USE_QUOTE_INCLUDES
   #include "usrostyp.h"
  #else
   #include <usrostyp.h>
  #endif
 #endif

 #if defined USE_QUOTE_INCLUDES
  #include "trustfct.h"
  #include "nontrustfct.h"
 #else
  #include <trustfct.h>
  #include <nontrustfct.h>
 #endif


#if defined __cplusplus
} /* ENDOF extern "C" */
#endif

#endif/* double include preventer */

/* END OF HEADER Os.h */

