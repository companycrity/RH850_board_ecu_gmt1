/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekcov.h
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.04
|
|  Description: contains the implementation of the coverage macro
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2007-2015       Vector Informatik GmbH    All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: osekcov.h */
/* double include preventer */
#ifndef _OSEKCOV_H
#define _OSEKCOV_H

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

/* KB begin osekCoverageMacro (default) */
#if defined osdEnableCoverage
   /* size of coverage array */
   #define osdCoverageArraySize ((1180 / 8) + 1)

   /* external of coverage array */
   osqRAM0 extern osqRAM1 osqRAM2 volatile osuint8 osqRAM3 osCoverage[osdCoverageArraySize];

   /* coverage enabled -> the macros set the selected bit in the array */
   #define COVER(x)                                   osCoverage[(x) >> 3U] |= (0x1U << ((x) & 0x7U));
   #define ELSEWITHCOVER(x)                           else { COVER(x) }

   #define IFCOVER(expr1,x1,x2)                       { if ((expr1)==osdTRUE) { COVER(x1) } else { COVER(x2) } }

   #define IF2ORCOVER(expr1,expr2,x1,x2,x3)           { if (((expr1)==osdFALSE) && ((expr2)==osdFALSE)) { COVER(x1) } \
                                                        if (((expr1)==osdFALSE) && ((expr2)==osdTRUE )) { COVER(x2) } \
                                                        if (((expr1)==osdTRUE )                       ) { COVER(x3) } } 

   #define IF2ANDCOVER(expr1,expr2,x1,x2,x3)          { if (((expr1)==osdTRUE ) && ((expr2)==osdTRUE )) { COVER(x1) } \
                                                        if (((expr1)==osdTRUE ) && ((expr2)==osdFALSE)) { COVER(x2) } \
                                                        if (((expr1)==osdFALSE)                       ) { COVER(x3) } }

   #define IF3ORCOVER(expr1,expr2,expr3,x1,x2,x3,x4)  { if (((expr1)==osdFALSE) && ((expr2)==osdFALSE) && ((expr3)==osdFALSE)) { COVER(x1) } \
                                                        if (((expr1)==osdFALSE) && ((expr2)==osdFALSE) && ((expr3)==osdTRUE )) { COVER(x2) } \
                                                        if (((expr1)==osdFALSE) && ((expr2)==osdTRUE )                       ) { COVER(x3) } \
                                                        if (((expr1)==osdTRUE )                                              ) { COVER(x4) } }

   #define IF3ANDCOVER(expr1,expr2,expr3,x1,x2,x3,x4) { if (((expr1)==osdTRUE ) && ((expr2)==osdTRUE ) && ((expr3)==osdTRUE )) { COVER(x1) } \
                                                        if (((expr1)==osdTRUE ) && ((expr2)==osdTRUE ) && ((expr3)==osdFALSE)) { COVER(x2) } \
                                                        if (((expr1)==osdTRUE ) && ((expr2)==osdFALSE)                       ) { COVER(x3) } \
                                                        if (((expr1)==osdFALSE)                                              ) { COVER(x4) } }

#else
   /* no coverage -> macros are empty */
   #define COVER(x)
   #define ELSEWITHCOVER(x)
   #define IFCOVER(expr1,x1,x2)
   #define IF2ORCOVER(expr1,expr2,x1,x2,x3)
   #define IF2ANDCOVER(expr1,expr2,x1,x2,x3)
   #define IF3ORCOVER(expr1,expr2,expr3,x1,x2,x3,x4)
   #define IF3ANDCOVER(expr1,expr2,expr3,x1,x2,x3,x4)
#endif
/* KB end osekCoverageMacro */

#endif /* double include preventer */

