/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osDerivatives.h
|
|  Module version: $vv$=1.01
|
|  Description: File for including the necessary derivative dependent headers
|  Platform:    Renesas RH850
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2015 Vector Informatik GmbH               All rights reserved.
|****************************************************************************/

/* MISRA RULE 19.15 VIOLATION: The QAC-Tool states a violation of rule 19.15 with 
 * message 0883 below. Anyhow, there is a double include prevention and therefore,
 * the message is considered to be wrong. */
/* double include preventer */
#ifndef _OSDERIVATIVES_H  /* PRQA S 0883 EOF */ /* see MISRA comment above */
#define _OSDERIVATIVES_H

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

#if defined USE_QUOTE_INCLUDES
 #include "tcb.h"
#else
 #include <tcb.h>
#endif

#ifdef osdRH850_E1L
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_E1L.h"
 #else
  #include <osRH850_E1L.h>
 #endif
#endif

#ifdef osdRH850_E1M
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_E1M.h"
 #else
  #include <osRH850_E1M.h>
 #endif
#endif

#ifdef osdRH850_E1X_FCC2
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_E1X_FCC2.h"
 #else
  #include <osRH850_E1X_FCC2.h>
 #endif
#endif

#ifdef osdRH850_F1L
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_F1L.h"
 #else
  #include <osRH850_F1L.h>
 #endif
#endif

#ifdef osdRH850_F1H
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_F1H.h"
 #else
  #include <osRH850_F1H.h>
 #endif
#endif

#ifdef osdRH850_F1M
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_F1M.h"
 #else
  #include <osRH850_F1M.h>
 #endif
#endif

#ifdef osdRH850_F1K
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_F1K.h"
 #else
  #include <osRH850_F1K.h>
 #endif
#endif

#ifdef osdRH850_D1M
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_D1M.h"
 #else
  #include <osRH850_D1M.h>
 #endif
#endif

#ifdef osdRH850_D1L
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_D1L.h"
 #else
  #include <osRH850_D1L.h>
 #endif
#endif

#ifdef osdRH850_P1M
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_P1M.h"
 #else
  #include <osRH850_P1M.h>
 #endif
#endif

#ifdef osdRH850_P1H
 #if defined USE_QUOTE_INCLUDES
  #include "osRH850_P1H.h"
 #else
  #include <osRH850_P1H.h>
 #endif
#endif

#if defined __cplusplus
} /* ENDOF extern "C" */
#endif

#endif /* _OSDERIVATIVES_H, double include preventer */

/* END OF HEADER osDerivatives.h */

