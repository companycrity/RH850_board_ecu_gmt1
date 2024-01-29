/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekstart.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.07
|
|  Description: OSEK Start API
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/
/* KB begin VeryFirstTokenInAllCSourceFiles (default) */
/* KB end VeryFirstTokenInAllCSourceFiles */


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

/* CovComment 0:  file: osekstart.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */


static osqFunc1 void osqFunc2 osInitTCBs(void);

/* KB begin osekStartAdditionalPrototypes (overwritten) */
static osqFunc1 void osqFunc2 osInitSystemStack(void);
#if (osdNumberOfAllTasks > 0)   
static osqFunc1 void osqFunc2 osInitTaskStacks(void);
#endif
#if (osdNumberOfCat2ISRs > 0)
static osqFunc1 void osqFunc2 osInitISRStacks(void);
#endif


/* MISRA RULE 14.1 not violated: osInitINTC is called in assember code. */
osqFunc1 void osqFunc2 osInitINTC(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osInitINTC       */
   COVER(0x0102)   
         osSetEBASE((osuint32)&osExceptionVectorTable_c0);
         osSetPSW(osGetPSW() | (osuint32)0x00008000UL);
         osSetINTCFG((osuint32)0);
         osSetINTBP((osuint32)&osEIINTVectorTable_c0);
         osSetSCCFG((osuint32)osdSysCallLastIndex);
         osSetSCBP((osuint32)&osSysCallTable_c0);   
#if (osdNumberOfAllISRs > 0)
         {
            osuint16 index;
            IFCOVER(0 >= osdNumberOfAllISRs,0x0155,0x0156)      
            for(index = 0; index < osdNumberOfAllISRs; index++)
            {
               osuint16 priolevel = osConfigBlock.osIsrPrioLevel[index];                 
               COVER(0x0103)               
               if(priolevel < osdNumberOfPrioLevels)
               {
                  osuint16 channel = osConfigBlock.osIsrChannel[index];                  
                  COVER(0x0104)                  
                  if(channel < 32)
                  {
                     {
                        osINTC1_ICxxx[channel].SEMANTIC.level = priolevel;
                        osINTC1_ICxxx[channel].SEMANTIC.TBxxx = 1;
                     }
                  }
                  else
                  {
                     {
                        osINTC2_ICxxx[channel].SEMANTIC.level = priolevel;
                        osINTC2_ICxxx[channel].SEMANTIC.TBxxx = 1;
                     }
                  }
               }
               ELSEWITHCOVER(0x0105)
            }
         }
#endif /* (osdNumberOfAllISRs > 0) */

#if (osdHwTimerNeeded0_OSTM || osdHwTimerNeeded0_OSTM_HIRES)
         osEnableInterrupt(osdTimerInterruptSourceNumberCore0); /* enables the system timer interrupt source */
#endif /* (osdHwTimerNeeded0_OSTM || osdHwTimerNeeded0_OSTM_HIRES) */
}

/* MISRA RULE 14.1 not violated: osInitStacks is called in assember code. */
osqFunc1 void osqFunc2 osInitStacks(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osInitStacks */
   COVER(0x0106)   
   osInitSystemStack();
#if (osdNumberOfAllTasks > 0)   
   osInitTaskStacks();
#endif
#if (osdNumberOfCat2ISRs > 0)
   osInitISRStacks();      
#endif
}

/* MISRA RULE 19.12 not violated: The operator ## is used for symbol assignment in this macro. */
#define osSetMPURegion(regnr) \
        osSetMPLA##regnr(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA##regnr); \
        osSetMPUA##regnr(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA##regnr); \
        osSetMPAT##regnr(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT##regnr) /* PRQA S 881 */

/* MISRA RULE 14.1 not violated: osInitMPU is called in assember code. */
osqFunc1 void osqFunc2 osInitMPU(void) /* PRQA S 1503 */
{  
   /* CovComment 4:  Function: osInitMPU */
#if osdNumberOfMpuRegions>0
   COVER(0x0107)           
   osSetMPM((osuint32)0x00UL);         
   osSetASID((osuint32)0x3FFUL);
   osSetMPURegion(0);
   osSetMPURegion(1);
   osSetMPURegion(2);
   osSetMPURegion(3);        
   #if osdNumberOfMpuRegions>4
   osSetMPURegion(4);
   osSetMPURegion(5);
   osSetMPURegion(6);
   osSetMPURegion(7);   
   #endif
   #if osdNumberOfMpuRegions>8
   osSetMPURegion(8);
   osSetMPURegion(9);
   osSetMPURegion(10);
   osSetMPURegion(11);
   #endif   
   #if osdNumberOfMpuRegions>12
   osSetMPURegion(12);
   osSetMPURegion(13);
   osSetMPURegion(14);
   osSetMPURegion(15);
   #endif
   osSetMPM(osdMPU_MPM);
#endif
}

static osqFunc1 void osqFunc2 osInitSystemStack(void)
{
   /* CovComment 4:  Function: osInitSystemStack */
   osuint32 *stackPtr;
   osuint32 *stackEnd;

   COVER(0x0108)
   if (osConfigBlock.ucStackUsageMeasurement != 0)
   {
      COVER(0x0109)
      stackPtr = (osuint32*)osConfigBlock.SystemStack[osSysGetCoreID()].start;
      stackEnd = (osuint32*)osGetCurrentSP();
      osSysErrAssert(((stackEnd > (osuint32*)osConfigBlock.SystemStack[osSysGetCoreID()].start) && (stackEnd < (osuint32*)osConfigBlock.SystemStack[osSysGetCoreID()].end)), osdErrYOSystemStackOverflow) 
      while(stackPtr < stackEnd)
      {  
         COVER(0x010A)
         *stackPtr = osdStackCheckPattern;
         stackPtr++;
      }         
   }
   else
   {
      COVER(0x010B)
      *(osuint32*)osConfigBlock.SystemStack[osSysGetCoreID()].start = osdStackCheckPattern;   
   }
}

#if (osdNumberOfCat2ISRs > 0)
static osqFunc1 void osqFunc2 osInitISRStacks(void)
{
   /* CovComment 4:  Function: osInitISRStacks */
   osuint32 cat2ISRID;
   osuint32* stackPtr;
   COVER(0x010C)
   if (osConfigBlock.ucStackUsageMeasurement != 0)
   {         
      COVER(0x010D)         
      for (cat2ISRID = 0; cat2ISRID < osConfigBlock.uiNumberOfCat2ISRs; cat2ISRID++)
      {
         stackPtr = (osuint32*)osConfigBlock.osCat2IsrStacks[ cat2ISRID ].start;
         while (stackPtr < (osuint32*)osConfigBlock.osCat2IsrStacks[ cat2ISRID ].end)
         {
            COVER(0x010E)
            *stackPtr = osdStackCheckPattern;
            stackPtr++;
         }                        
      }
   }
   else
   {
      COVER(0x010F)         
      for (cat2ISRID=0; cat2ISRID < osConfigBlock.uiNumberOfCat2ISRs; cat2ISRID++)
      {
         COVER(0x0110)
         *((osuint32*)osConfigBlock.osCat2IsrStacks[ cat2ISRID ].start) = osdStackCheckPattern;
      }
   }
}
#endif /* (osdNumberOfCat2ISRs > 0) */

#if osdNumberOfAllTasks>0
static osqFunc1 void osqFunc2 osInitTaskStacks(void)
{
   /* CovComment 4:  Function: osInitTaskStacks */
   osTaskIndexType taskID;
   osuint32* stackPtr;
   
   COVER(0x0111)   
   if (osConfigBlock.ucStackUsageMeasurement != 0)               
   {    
      for(taskID = 0; taskID < osConfigBlock.uiNumberOfTasks; taskID++)
      {  
         COVER(0x0112)
         stackPtr = (osuint32*)osConfigBlock.aulTaskStackStartAddress[taskID];            
         while (stackPtr < (osuint32*)osConfigBlock.aulTaskStackEndAddress[taskID])
         {
            COVER(0x0113)
            *stackPtr = osdStackCheckPattern;
            stackPtr++;
         }
      }
   }
   else
   {      
      for(taskID = 0; taskID < osConfigBlock.uiNumberOfTasks; taskID++)   
      {
         COVER(0x0114)
         *((osuint32*)osConfigBlock.aulTaskStackStartAddress[taskID]) = osdStackCheckPattern;
      }
   }
}
#endif
/* KB end osekStartAdditionalPrototypes */

/* KB begin osekCrcTableCompilerStart (overwritten) */
#pragma ghs startdata
/* KB end osekCrcTableCompilerStart */
/* MISRA RULE 8.7 VIOLATION: Array osCRCTABLE is only used in function osCRC16
   but it cannot be defined as local variable. Therefore it is defined static */
static osqROM0 osqROM1 const osqROM2 osuint16 osqROM3 osCRCTABLE[256] = /* PRQA S 3218 */
{
   0x0000U, 0x1021U, 0x2042U, 0x3063U, 0x4084U, 0x50a5U, 0x60c6U, 0x70e7U, 
   0x8108U, 0x9129U, 0xa14aU, 0xb16bU, 0xc18cU, 0xd1adU, 0xe1ceU, 0xf1efU, 
   0x1231U, 0x0210U, 0x3273U, 0x2252U, 0x52b5U, 0x4294U, 0x72f7U, 0x62d6U, 
   0x9339U, 0x8318U, 0xb37bU, 0xa35aU, 0xd3bdU, 0xc39cU, 0xf3ffU, 0xe3deU, 
   0x2462U, 0x3443U, 0x0420U, 0x1401U, 0x64e6U, 0x74c7U, 0x44a4U, 0x5485U, 
   0xa56aU, 0xb54bU, 0x8528U, 0x9509U, 0xe5eeU, 0xf5cfU, 0xc5acU, 0xd58dU, 
   0x3653U, 0x2672U, 0x1611U, 0x0630U, 0x76d7U, 0x66f6U, 0x5695U, 0x46b4U, 
   0xb75bU, 0xa77aU, 0x9719U, 0x8738U, 0xf7dfU, 0xe7feU, 0xd79dU, 0xc7bcU, 
   0x48c4U, 0x58e5U, 0x6886U, 0x78a7U, 0x0840U, 0x1861U, 0x2802U, 0x3823U, 
   0xc9ccU, 0xd9edU, 0xe98eU, 0xf9afU, 0x8948U, 0x9969U, 0xa90aU, 0xb92bU, 
   0x5af5U, 0x4ad4U, 0x7ab7U, 0x6a96U, 0x1a71U, 0x0a50U, 0x3a33U, 0x2a12U, 
   0xdbfdU, 0xcbdcU, 0xfbbfU, 0xeb9eU, 0x9b79U, 0x8b58U, 0xbb3bU, 0xab1aU, 
   0x6ca6U, 0x7c87U, 0x4ce4U, 0x5cc5U, 0x2c22U, 0x3c03U, 0x0c60U, 0x1c41U, 
   0xedaeU, 0xfd8fU, 0xcdecU, 0xddcdU, 0xad2aU, 0xbd0bU, 0x8d68U, 0x9d49U, 
   0x7e97U, 0x6eb6U, 0x5ed5U, 0x4ef4U, 0x3e13U, 0x2e32U, 0x1e51U, 0x0e70U, 
   0xff9fU, 0xefbeU, 0xdfddU, 0xcffcU, 0xbf1bU, 0xaf3aU, 0x9f59U, 0x8f78U, 
   0x9188U, 0x81a9U, 0xb1caU, 0xa1ebU, 0xd10cU, 0xc12dU, 0xf14eU, 0xe16fU, 
   0x1080U, 0x00a1U, 0x30c2U, 0x20e3U, 0x5004U, 0x4025U, 0x7046U, 0x6067U, 
   0x83b9U, 0x9398U, 0xa3fbU, 0xb3daU, 0xc33dU, 0xd31cU, 0xe37fU, 0xf35eU, 
   0x02b1U, 0x1290U, 0x22f3U, 0x32d2U, 0x4235U, 0x5214U, 0x6277U, 0x7256U, 
   0xb5eaU, 0xa5cbU, 0x95a8U, 0x8589U, 0xf56eU, 0xe54fU, 0xd52cU, 0xc50dU, 
   0x34e2U, 0x24c3U, 0x14a0U, 0x0481U, 0x7466U, 0x6447U, 0x5424U, 0x4405U, 
   0xa7dbU, 0xb7faU, 0x8799U, 0x97b8U, 0xe75fU, 0xf77eU, 0xc71dU, 0xd73cU, 
   0x26d3U, 0x36f2U, 0x0691U, 0x16b0U, 0x6657U, 0x7676U, 0x4615U, 0x5634U, 
   0xd94cU, 0xc96dU, 0xf90eU, 0xe92fU, 0x99c8U, 0x89e9U, 0xb98aU, 0xa9abU, 
   0x5844U, 0x4865U, 0x7806U, 0x6827U, 0x18c0U, 0x08e1U, 0x3882U, 0x28a3U, 
   0xcb7dU, 0xdb5cU, 0xeb3fU, 0xfb1eU, 0x8bf9U, 0x9bd8U, 0xabbbU, 0xbb9aU, 
   0x4a75U, 0x5a54U, 0x6a37U, 0x7a16U, 0x0af1U, 0x1ad0U, 0x2ab3U, 0x3a92U, 
   0xfd2eU, 0xed0fU, 0xdd6cU, 0xcd4dU, 0xbdaaU, 0xad8bU, 0x9de8U, 0x8dc9U, 
   0x7c26U, 0x6c07U, 0x5c64U, 0x4c45U, 0x3ca2U, 0x2c83U, 0x1ce0U, 0x0cc1U, 
   0xef1fU, 0xff3eU, 0xcf5dU, 0xdf7cU, 0xaf9bU, 0xbfbaU, 0x8fd9U, 0x9ff8U, 
   0x6e17U, 0x7e36U, 0x4e55U, 0x5e74U, 0x2e93U, 0x3eb2U, 0x0ed1U, 0x1ef0U
};
/* KB begin osekCrcTableCompilerEnd (overwritten) */
#pragma ghs enddata
/* KB end osekCrcTableCompilerEnd */
static osqFunc1 void osqFunc2 osCheckConfigBlock(void);

/* KB begin osekHWosFillSystemStackSrc (overwritten) */
/* KB end osekHWosFillSystemStackSrc */

/* KB begin osekHWosInitSystemStackSrc (overwritten) */
/* KB end osekHWosInitSystemStackSrc */


/* KB begin osekHwosFillTaskStacksSrc (overwritten) */
/* task stacks are filled in function osInitTaskStacks */
/* KB end osekHwosFillTaskStacksSrc */

/* KB begin osekHWosInitTaskStacksSrc (overwritten) */
/* KB end osekHWosInitTaskStacksSrc */


/*----------------------------------------------------------------------------
 / osInitialize
 / Function:
 /   - Initialize all OS-variables, that are used by OS-API-functions which 
 /     might be used before StartOS() is called. This function should be used,
 /     if variables are not initialized by the startup-code, delivered with
 /     the compiler.
 / Parameter:    none
 / Return value: none
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 not violated: (command 1503) The function osInitialize is general 
 * code, called from within the function osStartOSasm, which might be implemented 
 * in assembly language or in C language dependent on the implementation. Therefore the
 * MISRA checker might not see the call and wrongly state a violation of rule 14.1 */
/* MISRA RULE 8.10 VIOLATION: (command 1505) The function osInitialize is part of the 
 * described API of the OS. Therefore external linkage is required and it depends
 * on the application whether or not the function is ever called. */
osqFunc1 void osqFunc2 osInitialize(void)      /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osInitialize */
   COVER(0x0115)
   /* KB begin osekHWosInitialize (overwritten) */
   ptrToCcb2->ossCallDispatcher = 0;
   #ifdef osdSoftwareStackCheck
   *(osuint32 *)(&osStartupStack_StartAddr) = osdStackCheckPattern;
   osSetMPLA0((osuint32) &osStartupStack_StartAddr);
   #endif
   /* KB end osekHWosInitialize */
   /* KB begin osekHWInitLevelDisableCounter (overwritten) */
   ptrToCcb2->ossIntSaveDisableCounter = 0;
   /* KB end osekHWInitLevelDisableCounter */
   /* KB begin osekHWInitGlobalDisableCounter (overwritten) */
   ptrToCcb2->ossIntSaveDisableCounterGlobal = 0;
   /* KB end osekHWInitGlobalDisableCounter */

   osOwnCcb->LockIsNotNeeded.ossIntAPIStatus = 0;
} 

static osqFunc1 osuint16 osqFunc2 osCRC16(const osuint8 *ptr, osuint16 length);
static osqFunc1 osuint16 osqFunc2 osCRC16(const osuint8 *ptr, osuint16 length)
{
   /* CovComment 4:  Function: osCRC16 */
   osuint16 crc16;
   osuint16 index;

   COVER(0x0116)
   crc16 = 0xFFFFU; /* set initial value */
   
   /* No IFCOVER token required here as we do not consider buffers of size 0 */
   for (index = 0; index < length; index++)
   {
      crc16 = crc16 ^ (osuint16)((osuint16)ptr[index] << 8);
      crc16 = (osuint16)(crc16 << 8) ^ osCRCTABLE[crc16 >> 8];
      IFCOVER((index + 1) < length,0x0157,0x0158)
   }
   crc16 = (osuint16)((crc16 & 0x00FFU) << 8) | (osuint16)((crc16 & 0xFF00U) >> 8);
   return crc16;
}

static osqFunc1 void osqFunc2 osCheckConfigBlock(void)
{
   /* CovComment 4:  Function: osCheckConfigBlock */
   osuint16 crcVal;

   COVER(0x0117)
   
   /* check configuration block magic number 0 */
   if (osConfigBlock.aucMagicNumber[0] != (osuint8)0x82)
   {
      COVER(0x0118)
      osUnrecoverableError(E_OS_SYS_ASSERTION, osdErrSTConfigMagicNrError);
   }
   ELSEWITHCOVER(0x0119)
   
   /* check configuration block magic number 1 */
   if (osConfigBlock.aucMagicNumber[1] != (osuint8)0x2A)
   {
      COVER(0x011A)
      osUnrecoverableError(E_OS_SYS_ASSERTION, osdErrSTConfigMagicNrError);
   }
   ELSEWITHCOVER(0x011B)

   /* check configuration block magic number 2 */
   if (osConfigBlock.aucMagicNumber[2] != (osuint8)0x0C)
   {
      COVER(0x011C)
      osUnrecoverableError(E_OS_SYS_ASSERTION, osdErrSTConfigMagicNrError);
   }
   ELSEWITHCOVER(0x011D)

   /* check configuration block magic number 3 */
   if (osConfigBlock.aucMagicNumber[3] != (osuint8)0xC4)
   {
      COVER(0x011E)
      osUnrecoverableError(E_OS_SYS_ASSERTION, osdErrSTConfigMagicNrError);
   }
   ELSEWITHCOVER(0x011F)

   /* check configuration block major version */
   if(osConfigBlock.ucMajorVersion != (osuint8)osdVrmMajRelNumRef)
   {
      COVER(0x0120)
      osUnrecoverableError(E_OS_SYS_ASSERTION, osdErrSTInvalidMajorVersion);
   }
   ELSEWITHCOVER(0x0121)

   /* check configuration block minor version */
   if(osConfigBlock.ucMinorVersion != (osuint8)osdVrmMinRelNumRef)
   {
      COVER(0x0122)
      osUnrecoverableError(E_OS_SYS_ASSERTION, osdErrSTInvalidMinorVersion);
   }
   ELSEWITHCOVER(0x0123)

   /* check configuration block CRC */
   crcVal = osCRC16((const osuint8*)&osConfigBlock, (osuint16)(sizeof(osConfigBlock)));
   if(crcVal != (osuint16)0)
   {
      COVER(0x0124)
      osUnrecoverableError(E_OS_SYS_ASSERTION, osdErrSTConfigCRCError);
   }
   ELSEWITHCOVER(0x0125)
}

/* TR:SPMF05:0001 Start */
/*-+--------------------------------------------------------------------------
 / StartOS 
 / =======
 / Syntax void StartOS ( AppModeType <Mode> )
 / Parameter (In):
 / Mode application mode
 / Parameter (Out): none
 / Description: The user can call this system service to start the operating
 / system in a specific mode, see chapter 5, Application modes.
 / Particularities: Only allowed outside of the operating system, therefore
 / implementation specific restrictions may apply. See also
 / chapter 11.3, System start-up, especially with respect to
 / systems where OSEK and OSEKtime coexist. This call does
 / not need to return.
 / Conformance: BCC1, BCC2, ECC1, ECC2
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 not violated: (command 1503) See comment for 8.10 */
/* MISRA RULE 8.10 VIOLATION: (command 1505) The function osStartOSc is general code 
 * and is called from within the implementation specific function osStartOSasm. 
 * That function might be written in assembler or C and be located in the same 
 * file as osStartOSc or another file, dependent on the implementation. Therfore 
 * MISRA checking tools might not see the call and state violation of rule 14.1 
 * wrongly or they see the call and state a violation of rule 8.10 correctly.
 * Anyhow, the function osStartOSc needs to have external linkage as some 
 * implementations have the calling function osStartOSasm in another file.
 */
osqFunc1 void osqFunc2 osStartOSc(void)     /* PRQA S 1503 *//* PRQA S 1505 */
{
   /* CovComment 4:  Function: osStartOSc */
   /* is called (from osStartOSasm) with interrupts disabled up to system level */
   volatile osbool osStackUsageMeasurement = osdStackUsageMeasurement;
   volatile osbool sysCtrNeeded = osdHardwareTimerNeeded;

   /* KB begin osekHwSpecificStartOSVars (overwritten) */
   /* KB end osekHwSpecificStartOSVars */


   COVER(0x0126)

   OS_ST_ENTRY()
   OS_ST_START_CRITICAL()

   COVER(0x0127)

   /* Allow cat 1 interrupts (if they hadn't been enabled by the user anyway) */
   /* KB begin osekHWStartAllowCat1 (overwritten) */
   /* KB end osekHWStartAllowCat1 */

   /* KB begin dummyVariablesInit (default) */
   /* KB end dummyVariablesInit */


   COVER(0x0128)
   osOwnCcb->LockIsNotNeeded.ossIntAPIStatus = 0;

   COVER(0x0129)
   osOwnCcb->LockIsNotNeeded.ossCurrentContext = osdCtxStartupHook;

   COVER(0x012A)
   osOwnCcb->LockIsNotNeeded.ossErrorFlag = osdFALSE;
   /* KB begin osekInitGlobalError (default) */
   COVER(0x012B)
   osOwnCcb->LockIsNotNeeded.ossLastErrorCode=0;
   COVER(0x012C)
   osOwnCcb->LockIsNotNeeded.ossLastError=0;
   /* KB end osekInitGlobalError */

   osCheckConfigBlock();


   /* Parameter checking, Mode is a bit-mask with only just one bit set */
   IF3ORCOVER( ((osActiveAppMode & ((AppModeType)(osActiveAppMode-((AppModeType)1)))) != 0), (osActiveAppMode == 0), (osActiveAppMode > (1U << (osrNumberOfAppModes - 1))) ,0x0171,0x0172,0x0173,0x0174)
   /* MISRA RULE 12.4 not violated: Reading the variable osActiveAppMode is sideeffect free.
    */
   if (((osActiveAppMode & ((AppModeType)(osActiveAppMode-((AppModeType)1)))) != 0)  ||   /* more than one bit set   */  /* PRQA S 3415 */
       (osActiveAppMode == 0)                                                ||   /* zero      */
       (osActiveAppMode > (1U << (osrNumberOfAppModes - 1)))             )                /* exceeding maximum value */
   {
      COVER(0x012D)
      osUnrecoverableError(E_OS_SYS_ABORT, osdErrSTWrongAppMode);
   }
   ELSEWITHCOVER(0x012E)


   osInitTCBs();

   {
      osSemaphoreType ns;
      IFCOVER( 0>=osdNumberOfSemaphores,0x0159,0x015A)
      for (ns= 0; ns < osdNumberOfSemaphores; ns++)
      {
         COVER(0x012F)
         osSemaphoreState[ns]= 1; /* semaphore is released at startup */
         osSemaOwner[ns] = osdNoActiveTask;
         IFCOVER( (ns+1) < osdNumberOfSemaphores,0x015B,0x015C)
      }
      COVER(0x0130)
   }


   if (osdFALSE != osStackUsageMeasurement)
   {
      COVER(0x0131)
      /* TR:SPMF08:0003 Start */
      /* TR:SPMF08:0005 Start */
      /* KB begin osekHWosFillTaskStacks (overwritten) */
      /* already called in osStartOSasm */
      /* KB end osekHWosFillTaskStacks */
      /* TR:SPMF08:0003 End */
      /* TR:SPMF08:0005 End */
   }
   else
   {
      COVER(0x0132)
      /* TR:SPMF07:0002 Start */
      /* TR:SPMF07:0004 Start */
      /* TR:SPMF08:0005 Start */
      /* KB begin osekHWosInitTaskStacks (overwritten) */
      /* already called in osStartOSasm */
      /* KB end osekHWosInitTaskStacks */
      /* TR:SPMF07:0002 End */
      /* TR:SPMF07:0004 End */
      /* TR:SPMF08:0005 End */
   }
   osOwnCcb->LockIsNotNeeded.ossLastActiveTaskIndex = osdNoActiveTask;

   osOwnCcb->LockIsNotNeeded.ossActiveTaskPrio  = ptrToCcb->ossHighReadyTaskPrio  = osdNoActivePrio;
   osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex = ptrToCcb->ossHighReadyTaskIndex = osdNoActiveTask;

   osOwnCcb->LockIsNotNeeded.ossIntNestingDepth = 0;
   ptrToCcb->ossStartDispatcher = osdFALSE;
   COVER(0x0133)
   osOwnCcb->LockIsNotNeeded.ossLockDispatcher = 1; /* lock dispatcher during StartOS */

   /* fullfills [SR:167] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
   osOwnCcb->LockIsNotNeeded.ossActiveISRID = INVALID_ISR;

/* TR:SPMF12:0006 Start */
   /* check memory access */
   osSysErrAssert((ptrToCcb->ossStartDispatcher == osdFALSE), osdErrSTMemoryError)
   osSysErrAssert((osOwnCcb->LockIsNotNeeded.ossLockDispatcher==1), osdErrSTMemoryError)
   /* assure that OS variables are really linked to RAM, osOwnCcb->LockIsNotNeeded.ossIntAPIStatus is volatile so compiler optimizations do not disturb */
   osOwnCcb->LockIsNotNeeded.ossIntAPIStatus = 7; 
   osSysErrAssert((osOwnCcb->LockIsNotNeeded.ossIntAPIStatus==7), osdErrSTMemoryError)
   osOwnCcb->LockIsNotNeeded.ossIntAPIStatus = 0;
   osSysErrAssert((osOwnCcb->LockIsNotNeeded.ossIntAPIStatus==0), osdErrSTMemoryError)
/* TR:SPMF12:0006 End */
   osOwnCcb->LockIsNotNeeded.ossResGlobalOccupationCounter = 0;

   {
      osResourceIndexType nr;
      
      for (nr = 0; nr < osrNumberOfAllResources; nr++)
      {
         COVER(0x0134)
               osResOccupationCounter[nr] = 0;
               osResActualTask[nr] = osdNoActiveTask;
         IFCOVER( (nr+1) < osrNumberOfAllResources,0x015D,0x015E)
      }
      COVER(0x0135)
   }


   {
      ApplicationType na;
      
      /* TR:SASR40:0500 Start initialize application states */
      
      for(na = 0; na < osdNumberOfApplications; na++)
      {
         COVER(0x0136)
            osApplicationState[na] = APPLICATION_ACCESSIBLE;
         IFCOVER( (na+1) < osdNumberOfApplications,0x015F,0x0160)
      }
      /* TR:SASR40:0500 End */
      COVER(0x0137)
   }
   
   {
      osTaskIndexType nt;

      /* activate all autostart tasks */
      
      for (nt = 0; nt < osrNumberOfAllTasks; nt++)
      {
         COVER(0x0138)
            osTcbTaskState[nt] = SUSPENDED;

#if osdCallTimingHooks
            osNextRunReason[nt] = OS_VTHP_TASK_ACTIVATION;
            COVER(0x0139)
#else
            COVER(0x013A)
#endif

            if ((oskTcbAutoStart[nt] & osActiveAppMode) != 0)
            {
               COVER(0x013B)
               (void) osSysActivateTask(nt); 
            }
            ELSEWITHCOVER(0x013C)
         IFCOVER( (nt+1) < osrNumberOfAllTasks,0x0161,0x0162)
      }
      COVER(0x013D)
   }

   {
      osuint8 nc;

      for(nc = 0; nc < osrNumberOfCounters; nc++)
      {
         COVER(0x013E)
            osCounter[nc] = 0;
            osAlarmHeapCount[nc] = 0;
         IFCOVER( (nc+1) < osrNumberOfCounters,0x0163,0x0164)
      }
      COVER(0x013F)
   }

   if (sysCtrNeeded != 0)
   {
      COVER(0x0140)
      osPreInitTimer(); /* initialize all the timer stuff, but do not start them */
   }
   ELSEWITHCOVER(0x0141)

   osInitAlarms(); /* TR:SPMF20:0014 */

   osInitScheduleTables();


   /* KB begin osekHWStartupSpecial (overwritten) */
   COVER(0x0142)
   #if osdExceptionDetails
   ptrToCcb2->ossUnhandledExceptionDetail = 0;
   ptrToCcb2->ossISRUnhandledException_Number = 0;
   #endif
   /* KB end osekHWStartupSpecial */

   COVER(0x0143)
   {
      ISRType ni;
      
      for (ni=0; ni<osdNumberOfCat2ISRs; ni++)
      {
         COVER(0x0144)
            osIcbLockedResource[ni] = osdNoResource;
         IFCOVER( (ni+1)<osdNumberOfCat2ISRs,0x0165,0x0166)
      }
      COVER(0x0145)
   }
   {
      osTaskIndexType nt;
      
      for (nt=0; nt<osdNumberOfAllTasks; nt++)
      {
         COVER(0x0146)
            osTcbLockedResource[nt] = osdNoResource;
         IFCOVER( (nt+1)<osdNumberOfAllTasks,0x0167,0x0168)
      }
      COVER(0x0147)
   }
   {
      osResourceIndexType nr;
      
      for (nr=0; nr<osdNumberOfAllResources; nr++)
      {
         COVER(0x0148)
            osResNextLockedResource[nr] = osdNoResource;
         IFCOVER( (nr+1)<osdNumberOfAllResources,0x0169,0x016A)
      }
      COVER(0x0149)
   }

   COVER(0x014A)

   /* osOwnCcb->LockIsNotNeeded.ossActiveApplicationID might be sometimes used in the StartupHook.
    * Therefore it must be initialized here, even if it is not always 
    * used before the next assignment. This is no MISRA error. (3198) */
   osOwnCcb->LockIsNotNeeded.ossActiveApplicationID = INVALID_OSAPPLICATION;   /* PRQA S 3198 */

   /* KB begin osekHWInitProtection (overwritten) */
   osInitTcb();
   /* KB end osekHWInitProtection */

   osOwnCcb->LockIsNotNeeded.ossStarted = osdTRUE;


   COVER(0x014B)
   /* call hook-routine for system startup (initialization of drivers etc.) */
   OS_STHOOK_ENTRY()
   /* KB begin osekHWInterStartupHook (overwritten) */
   COVER(0x014C)
   osCheckCurrentStack();
   StartupHook();
   osCheckStackPattern();
   /* KB end osekHWInterStartupHook */
   OS_STHOOK_EXIT()


   osOwnCcb->LockIsNotNeeded.ossCurrentContext = osdCtxTask;

   if (sysCtrNeeded != 0)
   {
      COVER(0x014D)
      osInitTimer(); /* start each used timer (called after startup-hook) */
   }
   ELSEWITHCOVER(0x014E)

   COVER(0x014F)
   /* free dispatcher (after osSysActivateTask for AutoStart-Tasks and after StartupHook */
   osOwnCcb->LockIsNotNeeded.ossLockDispatcher = 0; 


   OS_ST_END_CRITICAL()
   OS_ST_EXIT()
   /* KB begin osekHWosEnableLevelInStartOS (overwritten) */
   osEnableLevel();
   /* KB end osekHWosEnableLevelInStartOS */

   OS_START_DISPATCH()

   /* KB begin osekHWosLocalDispatcher (overwritten) */
   ptrToCcb2->ossCallDispatcher = 1;
   /* KB end osekHWosLocalDispatcher */

   /* KB begin osekHWAfterOsDispatchInST (overwritten) */
   osDispatch();
   /* fullfills [SR:012] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
   osEnterSafeState(E_OS_SYS_ASSERTION, osdErrSTNoImmediateTaskSwitch);
   /* KB end osekHWAfterOsDispatchInST */
} /* END OF osStartOSc */

/* KB begin osekHWosStartOSasmSrc (overwritten) */
/* KB end osekHWosStartOSasmSrc */


/*-+--------------------------------------------------------------------------
 / osInitTCBs
 / Funktion:
 /   - inits all tasks as SUSPENDED
 / Parameter:
 / Returnvalue:
 /--------------------------------------------------------------------------*/
static osqFunc1 void osqFunc2 osInitTCBs(void)
{
   /* CovComment 4:  Function: osInitTCBs */
   osPrioType np;

   osTaskIndexType nt;

   for (nt=0; nt<osrNumberOfAllTasks; nt++)
   {
      COVER(0x0150)
         osTcbActivationCount[nt]= 0;
         osTcbActualPrio[nt] = oskTcbHomePrio[nt];
         osTcbORTIServiceId[nt] = osdORTINoService;
      IFCOVER( (nt+1)<osrNumberOfAllTasks,0x016B,0x016C)
   }
   COVER(0x0151)

   
   for (np=0; np<osrRTSize; np++)
   {
      COVER(0x0152)
      ptrToCcb->ossQReadyPrios[np] = 0;
      IFCOVER( (np+1)<osrRTSize,0x016D,0x016E)
   }
   COVER(0x0153)

   /* all activation queues are empty */

   for (np = 0; np < osrNumberOfPriorities; np++)
   {
      COVER(0x0154)
      ptrToCcb->ossQReadyTaskHead[np]= ptrToCcb->ossQReadyTaskTail[np]= 0;
      IFCOVER( (np+1) < osrNumberOfPriorities,0x016F,0x0170)
   } /* for (np = 0; np < osrNumberOfPriorities; np++) */

   /* KB begin osekHWosInitTcbExtension (overwritten) */
   /* KB end osekHWosInitTcbExtension */
} /* END OF osInitTCBs */

/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */

/* END OF MODULE osekstart.c */

