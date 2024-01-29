/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osOSTMHiRes.c
|
|  Module version: $vv$=1.00
|
|  Description: MPU specific code for the core MPU of RH850
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2013-2014 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

#if defined USE_QUOTE_INCLUDES
 #include "osek.h"
 #include "osekext.h"
#else
 #include <osek.h>
 #include <osekext.h>
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

/* CovComment 0:  file: OsOstmHiRes.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */

#if osdUseHighResolutionTimer
osqFunc1 void osqFunc2 osReleaseHiResTimerISR(CounterType counter)
{
   /* CovComment 4:  Function: osReleaseHiResTimerISR */
   COVER(0x0000)
}

osqFunc1 void osqFunc2 osSetHWTimerCompareValue(CounterType counterId, TickType timeToSet)
{
   /* CovComment 4:  Function: osSetHWTimerCompareValue */
   COVER(0x0001)   
   osdOSTM_CMP(osSysGetCoreID()) = timeToSet;
}

osqFunc1 void osqFunc2 osTriggerHiResTimerISR(CounterType counter)
{
   /* CovComment 4:  Function: osTriggerHiResTimerISR */
   COVER(0x0002)
   #if osdTimerInterruptSourceNumberCore0 < 32
   osINTC1_ICxxx[osdTimerInterruptSourceNumberCore0].SEMANTIC.RFxxx = 1;
   #else
   osINTC2_ICxxx[osdTimerInterruptSourceNumberCore0].SEMANTIC.RFxxx = 1;
   #endif
}

osqFunc1 TickType osqFunc2 osGetHWTimerCounterValue(CounterType counter)
{
   /* CovComment 4:  Function: osGetHWTimerCounterValue */
   COVER(0x0003)   
   return (TickType)osdOSTM_CNT(osSysGetCoreID());
}
#endif

/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */
/* END OF MODULE osOSTMHiRes.c */

