/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekasrt.h
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.27
|
|  Description: different assertions for error detection
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: osekasrt.h */
/* double include preventer */
#ifndef _OSEKASRT_H
#define _OSEKASRT_H

/*lint -save Messages inhibited in this file, will be re-enabled at the end of file */
/*lint -e539 Did not expect positive indentation */

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

/* KB begin osekHw_FILE_Cast (default) */
#define osd_FILE_Cast
/* KB end osekHw_FILE_Cast */



#define osAssertFailed_(x) osOwnCcb->LockIsNotNeeded.ossLastError = (osuint16) (x); osAssertFailed()  /* TR:SPMF10:0010 */


#define osSysErrAssertFailed(x)  {\
                                    osDisableGlobal();\
                                    osAssertFailed_(x);\
                                 }

#define osSysErrAssert(p, x) if ((p) == 0)\
                                 {\
                                    osSysErrAssertFailed(x)\
                                 }

/* TR:SPMF10:0008 Start */
#define osAPIError(x, y)                                    \
   osSaveDisableLevelNested();                              \
   osOwnCcb->LockIsNotNeeded.ossLastError = (osuint16) (y); \
   osErrorHook((StatusType) (x));                           \
   osRestoreEnableLevelNested()
/* TR:SPMF10:0008 End */


/*lint -restore re-enable messages*/

#endif /* double include preventer */

/* END OF HEADER osekasrt.h */

