/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekSched.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.03
|
|  Description: OSEK Scheduler
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: osekSched.h */
/* MISRA RULE 19.15 VIOLATION: The QAC-Tool states a violation of rule 19.15 with 
 * message 0883 below. Anyhow, there is a double include prevention and therefore,
 * the message is considered to be wrong. */
/* double include preventer */
#ifndef _OSEKSCHED_H      /* PRQA S 0883 EOF */ /* see MISRA comment above */
#define _OSEKSCHED_H

#if defined __cplusplus
extern "C"
{
#endif

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

/* KB begin osekStartOfHModule (overwritten) */
/* KB end osekStartOfHModule */

osqFunc1 void osqFunc2 osSchedInsertTask(TaskType taskIndex);
osqFunc1 void osqFunc2 osSchedRemoveRunningTask(void);
osqFunc1 void osqFunc2 osSchedKillApplication(ApplicationType applId);
#if (!defined(osdGetResourceNotUsed))
osqFunc1 void osqFunc2 osSchedGetResource(ResourceType ResId);
#endif
#if (!defined(osdReleaseResourceNotUsed))
osqFunc1 void osqFunc2 osSchedReleaseResource(ResourceType ResId);
#endif
osqFunc1 void osqFunc2 osSchedOccupyInternalResource(void);
osqFunc1 void osqFunc2 osSchedOnHomePrio(void);

/* KB begin osekEndOfHModule (overwritten) */
/* KB end osekEndOfHModule */

#if defined __cplusplus
} /* ENDOF extern "C" */
#endif

#endif /* _OSEKSCHED_H, double include preventer */

/* END OF HEADER osekSched.h */

