/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: vrm.h
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.05
|
|  Description: header file for release management
|               (The current number of the newest release is stored in this
|               file)
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: vrm.h */
/* MISRA RULE 19.15 VIOLATION: This file performs a version check for all source- 
 * and header files of the OS. Therefore it needs to be included multiple times.
 * Special care has been taken that the multiple inclusion has no negative 
 * effect on the software. */
/* PRQA S 0883 EOF */

/* double include preventer */
#ifndef __VRM__1__
#define __VRM__1__
 

/* KB begin vrmReleaseNumberReference (overwritten) */
/* source VRM check               */
/* major release number reference */
#define osdVrmMajRelNumRef 1
/* minor release number reference */
#define osdVrmMinRelNumRef 6

/* generator VRM check            */
/* major release number reference */
#define osdVrmGenMajRelNumRef 1
/* minor release number reference */
#define osdVrmGenMinRelNumRef 6
/* KB end vrmReleaseNumberReference */


#else /* __VRM__1__ */

#ifndef __VRM__2__
#define __VRM__2__

/* TR:SPMF36:0004 Start */
/* source VRM checks */
#if defined osdVrmMajRelNum && defined osdVrmMinRelNum

#if osdVrmMajRelNum!=osdVrmMajRelNumRef
#error "VRM: major release number mismatch (Source)"
#endif

#if osdVrmMinRelNum!=osdVrmMinRelNumRef
#error "VRM: minor release number mismatch (Source)"
#endif

#endif /* osdVrmMajRelNum && osdVrmMinRelNum */


/* generator VRM checks */
#if defined osdVrmGenMajRelNum && defined osdVrmGenMinRelNum

#if osdVrmGenMajRelNum!=osdVrmGenMajRelNumRef
#error "VRM: major release number mismatch (Generator)"
#endif

#if osdVrmGenMinRelNum!=osdVrmGenMinRelNumRef
#error "VRM: minor release number mismatch (Generator)"
#endif

#endif /* osdVrmGenMajRelNum && osdVrmGenMinRelNum */
/* TR:SPMF36:0004 End */

#ifdef osdVrmMajRelNum
#undef osdVrmMajRelNum
#endif

#ifdef osdVrmMinRelNum
#undef osdVrmMinRelNum
#endif

#ifdef osdVrmGenMajRelNum
#undef osdVrmGenMajRelNum
#endif

#ifdef osdVrmGenMinRelNum
#undef osdVrmGenMinRelNum
#endif

#endif /* __VRM__2__ */
#undef  __VRM__2__

#endif /* __VRM__1__ */

