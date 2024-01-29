/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osINTC.h
|
|  Module version: $vv$=1.00
|
|  Description: specific code for the interrupt controller
|  Platform:    RH850
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2014-2014 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

#ifndef _OSINTC_H
#define _OSINTC_H

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

#define osdICR0MIN   (osdICRBASE0 + 0x0000UL)
#define osdICR0MAX8  (osdICRBASE0 + 0x0040UL)
#define osdICR0MAX16 (osdICRBASE0 + 0x003FUL)

#define osdICRxMIN   (osdICRBASE1 + 0x0040UL)
#define osdICRxMAX8  (osdICRBASE1 + (osdNumberOfInterrupts*2) - 1)
#define osdICRxMAX16 (osdICRBASE1 + (osdNumberOfInterrupts*2) - 2)

#define osdIMR0MIN   (osdICRBASE0 + 0x00F0UL)
#define osdIMR0MAX8  (osdICRBASE0 + 0x00F4UL)
#define osdIMR0MAX16 (osdICRBASE0 + 0x00F3UL)

#define osdIMRxMIN   (osdICRBASE1 + 0x0404UL)
#define osdIMRxMAX8  (osdICRBASE1 + 0x0400UL + ((osdNumberOfInterrupts+7)>>3) - 1)
#define osdIMRxMAX16 (osdICRBASE1 + 0x0400UL + ((osdNumberOfInterrupts+7)>>3) - 2)
#define osdIMRxMAX32 (osdICRBASE1 + 0x0400UL + ((osdNumberOfInterrupts+7)>>3) - 4)

typedef union
{                     /* EICxxx           */
   osuint16 UINT16;   /*  16-bit Access   */
   osuint8  UINT8[2]; /*  8-bit Access    */
   /* MISRA RULE 6.4 VIOLATION: struct SEMANTIC allows simplified register
      access without assember code which cannot be realized otherway. */
   struct /* PRQA S 635 */
   {                
      osuint8  level:4; /*   EIP0 ... EIP4  */
      osuint8  :2; /*   Reserved Bits  */
      osuint8  TBxxx:1; /*   TBxxx          */
      osuint8  MKxxx:1; /*   MKxxx          */
      osuint8  :4; /*   Reserved Bits  */
      osuint8  RFxxx:1; /*   RFxxx          */
      osuint8  :2; /*   Reserved Bits  */
      osuint8  CTxxx:1; /*   CTxxx          */
   } SEMANTIC;
} osICxxx_type;

typedef osICxxx_type osINTC1_ICxxx_type[32];
typedef osICxxx_type osINTC2_ICxxx_type[osdNumberOfInterrupts-32];

#define osINTC1_ICxxx (*(volatile osINTC1_ICxxx_type *)osdICRBASE0)
#define osINTC2_ICxxx (*(volatile osINTC2_ICxxx_type *)osdICRBASE1)

#if defined __cplusplus
} /* ENDOF extern "C" */
#endif

#endif /* _OSINTC_H, double include preventer */

/* END OF HEADER osINTC.h */

