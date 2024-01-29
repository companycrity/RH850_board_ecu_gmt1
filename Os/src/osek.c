/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osek.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=2.41
|
|  Description: osek startup, scheduler and dispatcher
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/
/* KB begin VeryFirstTokenInAllCSourceFiles (default) */
/* KB end VeryFirstTokenInAllCSourceFiles */


/* next define is set in the makefile
 * switches of the include of (generated) tcb.h, includes instead
 * the library config file
 */

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

/* CovComment 0:  file: osek.c */

/* KB begin osekHWcompileTimeChecks (default) */
#define OS_STATIC_ASSERT(COND,MSG) typedef char os_static_assertion_##MSG[(COND)?1:-1]
/* KB begin osekHWspecCompileTimeChecks (overwritten) */
/* KB end osekHWspecCompileTimeChecks */
/* KB end osekHWcompileTimeChecks */

/* KB begin osekHWOsekAdditionalInclude (default) */
/* KB end osekHWOsekAdditionalInclude */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */

/* KB begin osekHWVariableSectionStart (overwritten) */
/* KB end osekHWVariableSectionStart */

/* MISRA RULE 8.10 VIOLATION: On some platforms, osTcbSP might be used by several
 * functions / files. Conditional definition of the variable for these
 * platforms would increase the code complexity to unacceptable level (1504).
 */
/* MISRA RULE 8.7 VIOLATION: On some platforms, osTcbSP might be used by several
 * functions / files. Conditional definition of the variable for these
 * platforms would increase the code complexity to unacceptable level (1514).
 */
osqRAM0 osqRAM1 osqRAM2 osStackPtrType osqRAM3 osTcbSP[osdNumberOfAllTasks]; /* PRQA S 1504 */ /* PRQA S 1514 */ 

/* MISRA RULE 8.10 VIOLATION: On some platforms, osTcbValid might be used by several
 * functions / files. Conditional definition of the variable for these
 * platforms would increase the code complexity to unacceptable level (1504).
 */
/* MISRA RULE 8.7 VIOLATION: On some platforms, osTcbValid might be used by several
 * functions / files. Conditional definition of the variable for these
 * platforms would increase the code complexity to unacceptable level (1514).
 */
osqRAM0 osqRAM1 osqRAM2 osbool osqRAM3 osTcbValid[osdNumberOfAllTasks]; /* PRQA S 1504 */ /* PRQA S 1514 */ 
/* MISRA RULE 8.10 VIOLATION: On some platforms, osTcbApplicationID might be used by several
 * functions / files. Conditional definition of the variable for these
 * platforms would increase the code complexity to unacceptable level (1504).
 */
/* MISRA RULE 8.7 VIOLATION: On some platforms, osTcbApplicationID might be used by several
 * functions / files. Conditional definition of the variable for these
 * platforms would increase the code complexity to unacceptable level (1514).
 */
osqRAM0 osqRAM1 osqRAM2 ApplicationType osqRAM3 osTcbApplicationID[osdNumberOfAllTasks]; /* PRQA S 1504 */ /* PRQA S 1514 */ 

#if (osdNumberOfCounters > 0)
osqRAM0 osqRAM1 osqRAM2 osAlarmIndexType osqRAM3 osAlarmHeapCount[osdNumberOfCounters];    /* Number of heap elements */
#endif

osqRAM0 osqRAM1 volatile osqRAM2 AppModeType osqRAM3 osActiveAppMode;

/* KB begin dummyVariables (default) */
/* KB end dummyVariables */

/* KB begin osekHWVariableDefinition (overwritten) */
/* MISRA RULE 8.8 VIOLATION: Pointer oskStackTop_SYS_c0 is only used in osekasm.c.
   It is used in assembler code and therefore it cannot be static. */
void* const * const oskStackTop_SYS_c0 = &osConfigBlock.SystemStack[0].start; /* PRQA S 3408 */
/* KB end osekHWVariableDefinition */

/* KB begin osekHWVariableSectionEnd (overwritten) */
/* KB end osekHWVariableSectionEnd */

/* KB begin osekConstSectionCodeStart (overwritten) */
/* MISRA RULE 8.8 VIOLATION: Pointer ptrToCallDispatcher_c0 is used in assembler code and therefore it cannot be static. */
volatile osuint8* const ptrToCallDispatcher_c0 = (volatile osuint8*)&(osCtrlVarsCore0.LockIsNotNeeded.ossCallDispatcher); /* PRQA S 3408 */

/* MISRA RULE 8.8 VIOLATION: Pointer ptrToNestingDepth_c0 is used in assembler code and therefore it cannot be static. */
volatile osuint8* const ptrToNestingDepth_c0 = (volatile osuint8*)&(osCtrlVarsCore0.LockIsNotNeeded.ossIntNestingDepth); /* PRQA S 3408 */

/* MISRA RULE 8.8 VIOLATION: Pointer ptrToSavedIntLevel_c0 is used in assembler code and therefore it cannot be static. */
volatile osuint32* const ptrToSavedIntLevel_c0 = (volatile osuint32*)&(osCtrlVarsCore0.LockIsNotNeeded.ossSavedIntLevel); /* PRQA S 3408 */

/* MISRA RULE 8.8 VIOLATION: Pointer ptrToSavedIntLevelNested_c0 is used in assembler code and therefore it cannot be static. */
volatile osuint32* const ptrToSavedIntLevelNested_c0 = (volatile osuint32*)&(osCtrlVarsCore0.LockIsNotNeeded.ossSavedIntLevelNested); /* PRQA S 3408 */

/* KB end osekConstSectionCodeStart */

/* TR:SPMF29:0002 Start */
/* MISRA RULE 8.7 VIOLATION: This constant is to be included into the binary to identify the configuration. 
 * It is not used by internal code, instead it is meant for usage by external tools. 
 * So it exists without a reference.
 */
osqROM0 osqROM1 const osqROM2 osVersionVariantCodingType osqROM3 oskVersionVariant = /* PRQA S 1514 */
{
   0xAF, /* magic number */
   0xFE,
   0xDE,
   0xAD,
   (osuint8)osdVrmMajRelNumRef, /* version of operating system, Major, defined in vrm.h */
   (osuint8)osdVrmMinRelNumRef, /* version of operating system, Minor */

   (osuint8)osdVrmGenMajRelNumRef, /* version of code generator */
   (osuint8)osdVrmGenMinRelNumRef,

   /* variant used (part 1) */
   /* Bit 0..1:   Conformance Class */
   /* Bit 2:      Status level */
   /* Bit 3..4:   Scheduling policy */
   /* Bit 5:      Stackcheck */
   /* Bit 6:      EnableInternalAssertions */
   /* Bit 7:      currently not used */

   (osuint8)(((osdVariantCC)                    ) |
             ((osdVariantStatus)            << 2) |
             ((osdVariantSchedule)          << 3) |
             ((osdVariantStackcheck)        << 5) |
             ((osdVariantAssertionsEnabled) << 6) |
             ((0U)                          << 7)), /* TR:SPMF12:0005 */

   /* variant used (part 2) */
   /* Bit 0..1:   Scalability Class */
   /* Bit 2:      Schedule table(s) used (Not used in library version) */
   /* Bit 3:      High resolution schedule table(s) used (Not used in library version) */
   /* Bit 4:      Schedule table synchronization used*/
   /* Bit 5:      timing protection used */
   /* Bit 6:      Not yet used, always zero */
   /* Bit 7:      Not yet used, always zero */
   (osuint8)(((osdVariantSC)                    ) |
             ((osdVariantFeaturesUsed_ST)   << 2) |
             ((osdVariantFeaturesUsed_HRST) << 3) |
             ((osdVariantFeaturesUsed_Sync) << 4) |
             ((osdVariantFeaturesUsed_TP)   << 5)),
   
   /* ORTI variant                          */
   /* Bit 0..6: ORTI standard version       */
   /* Bit 7   : ORTI additional information */

   (osuint8)(((osdVariantORTIVersion)      ) |   
             ((osdVariantORTIDebug)    << 7)), /* TR:SPMF14:0011 */  /* TR:SPMF29:0003 */

   /* KB begin osekStructSpecVersionVariant (overwritten) */
      (osuint8) (0            )
   /* KB end osekStructSpecVersionVariant */

}; /* TR:SPMF29:0002 End */
/* KB begin osekConstSectionCodeEnd (overwritten) */
/* KB end osekConstSectionCodeEnd */







static osqFunc1 void osqFunc2 osInterShutdownHook(StatusType Error);

/* KB begin osekSysShutdownOS (default) */
/* osSysShutdownOS is called internally by the OS, osShutdownOS is the user */
/* API and contains additional checks */

/* fullfills [SR:162] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/* fullfills [SR:013] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */
/* MISRA RULE 8.10 VIOLATION: The function osSysShutdownOS is a general implementation which is used 
 * identically on different plattforms. On some of them, it is called only in osek.c, on others it 
 * is called also from other files. Therefore it is made globally visible. The risk of potential 
 * name collisions is expected to be low.*/
osqFunc1 void osqFunc2 osSysShutdownOS(StatusType Error)      /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osSysShutdownOS */
   /* KB begin osekReadUnusedVarsAndConstsAux (default) */
      osuint8 ucTmp;
   /* KB end osekReadUnusedVarsAndConstsAux */


   /* KB begin osekHWSysShutdownOSAdditionalVariables (default) */
   /* KB end osekHWSysShutdownOSAdditionalVariables */

   OS_SD_ENTRY()
   COVER(0x0014)
   
   /* KB begin osekHWosDisableGlobal (overwritten) */
   osDisableGlobal(); /* disable all interrupts, no nesting */
   /* KB end osekHWosDisableGlobal */ /* disable all interrupts */

   /* Necessary to allow interrupt API functions in the shutdown hook 
    * together with timing protection */
   osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex = osdNoActiveTask;
   osOwnCcb->LockIsNotNeeded.ossIntNestingDepth = 0;
   
   

   /* call shutdown hook routines */
   osOwnCcb->LockIsNotNeeded.ossActiveApplicationID = INVALID_OSAPPLICATION;
   osOwnCcb->LockIsNotNeeded.ossCurrentContext = osdCtxShutdownHook;


   COVER(0x0015)
   /* call system shutdown hook */
   OS_SDHOOK_ENTRY()
   osInterShutdownHook(Error);
   OS_SDHOOK_EXIT()
   OS_SD_EXIT()
   
   /* osdDummyRead might intentionally assign a value to an unused variable on 
    * some platforms to avoid compiler warnings. This is no MISRA error. (3199) */
   osdDummyRead(Error) /* PRQA S 3199 */ 
   
   /* KB begin osekReadUnusedVarsAndConsts (default) */
   /* force the compiler to link these 'unused' variables, too */
   ucTmp  = (osuint8)oskVersionVariant.ucMagicNumber1;
   ucTmp |= (osuint8)osOwnCcb->LockIsNotNeeded.ossLastError;
   ucTmp |= (osuint8)osTcbActualPrio[0];
   ucTmp |= (osuint8)osOwnCcb->LockIsNotNeeded.ossLastErrorCode;
   /* osdDummyRead might intentionally assign a value to an unused variable on 
    * some platforms to avoid compiler warnings. This is no MISRA error. (3199) */
   osdDummyRead(ucTmp)   /* PRQA S 3199 */
   /* KB end osekReadUnusedVarsAndConsts */
   /* KB begin osekHWosShutdownReactionSrc (default) */
   for(;;) 
   {
      ;
   }
   /* KB end osekHWosShutdownReactionSrc */
} /* END OF osSysShutdownOS */
/* KB end osekSysShutdownOS */

/*-+--------------------------------------------------------------------------
 / ShutdownOS
 / ==========
 /
 / Syntax void ShutdownOS ( StatusType <Error> )
 / Parameter (In):
 / Error error occurred
 / Parameter (Out): none
 / Description: The user can call this system service to abort the overall
 / system (e.g. emergency off). The operating system also calls
 / this function internally, if it has reached an undefined internal
 / state and is no longer ready to run.
 / If a ShutdownHook is configured the hook routine
 / ShutdownHook is always called (with <Error> as argument)
 / before shutting down the operating system.
 / If ShutdownHook returns, further behaviour of ShutdownOS is
 / implementation specific.
 / In case of a system where OSEK OS and OSEKtime OS
 / coexist, ShutdownHook must return.
 / <Error> must be a valid error code supported by OSEK OS. In
 / case of a system where OSEK OS and OSEKtime OS coexist,
 / <Error> might also be a value accepted by OSEKtime OS. In
 / this case, if enabled by an OSEKtime configuration parameter,
 / OSEKtime OS will be shut down after OSEK OS shutdown.
 / Particularities: After this service the operating system is shut down.
 / Allowed at task level, ISR level, in ErrorHook and StartupHook,
 / and also called internally by the operating system.
 / If the operating system calls ShutdownOS it never uses E_OK
 / as the passed parameter value.
 / Conformance: BCC1, BCC2, ECC1, ECC2
 /--------------------------------------------------------------------------*/

/* QAC messages 3206,3199: The parameter 'Error' is intentionally used only in certain 
 * configurations. In other configurations, it depends on the plattform specific 
 * definition of osdDummyRead, which of the messages is stated. Both messages are 
 * not relevant for MISRA */
/* MISRA RULE 14.1 VIOLATION: osShutdownOS might be not called in some
 * configuration. Conditional compiling of the function would increase
 * the code complexity to unacceptable level (1503) */ 
/* MISRA RULE 8.10 VIOLATION: On some platforms, osShutdownOS might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */ 
osqFunc1 void osqFunc2 osShutdownOS(StatusType Error) /* PRQA S 1503 */ /* PRQA S 1505 */ /* PRQA S 3206 */ /* PRQA S 3199 */
{
   /* CovComment 4:  Function: osShutdownOS */
   ApplicationType appID;
   OS_SD_ENTRY()
   COVER(0x0016)
   
   appID = osOwnCcb->LockIsNotNeeded.ossActiveApplicationID;
   IF3ANDCOVER(appID < osdNumberOfApplications, osConfigBlock.applTrusted[appID] == 0, ((osdCtxErrorHook | osdCtxStartupHook) & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0,0x00FE,0x00FF,0x0100,0x0101)
   if ( (appID < osdNumberOfApplications) &&
        (osConfigBlock.applTrusted[appID] == 0) &&
        (((osdCtxErrorHook | osdCtxStartupHook) & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
      )
   {  /* ignore calls to ShutdownOS from non trusted applications */
      COVER(0x0017)
      return;
   }
   ELSEWITHCOVER(0x0018)

   COVER(0x0019)
   osSysShutdownOS(Error);
}

/* KB begin osekStackOverflow (overwritten) */
#ifdef osdSoftwareStackCheck
/*-+--------------------------------------------------------------------------
 / osStackError
 / Description: called if stack overflow was detected
 / Parameter: onSystemStack contains info on which stack the overflow was detected
 / Returnvalue: -
 /--------------------------------------------------------------------------*/
/* MISRA RULE 8.8 VIOLATION: The function osStackError is only called in assembler code. 
 * It cannot be made static because the compiler reports errors then. */
/* MISRA RULE 14.1 not violated: The function osStackError is only called in assembler code. 
 * MISRA checking tools do not see that and complain about it. */
osqFunc1 void osqFunc2 osStackError(osuint32 onSystemStack) /* PRQA S 3408 */ /* PRQA S 1503 */
{  
   /* CovComment 4:  Function: osStackError */
   StatusType proRet;
   COVER(0x001A)
   if(onSystemStack != 0)
   {
      COVER(0x001B)
      ptrToCcb2->ossLastError = osdErrYOSystemStackOverflow;
   }
   else
   {
      COVER(0x001C)
      if(ptrToCcb2->ossIntNestingDepth != 0)
      {
         COVER(0x001D)
         ptrToCcb2->ossLastError = osdErrYOISRStackOverflow;         
      }
      else
      {
         COVER(0x001E)
         ptrToCcb2->ossLastError = osdErrSOStackOverflow;
      }
   }
   proRet = osProtectionHookWrapper(E_OS_STACKFAULT);
   osHandleProtectionErrors(proRet, E_OS_STACKFAULT);   
}
#endif
/* KB end osekStackOverflow */

/* KB begin osekHWosSystemStackOverflowSrc (overwritten) */
/* KB end osekHWosSystemStackOverflowSrc */

/* KB begin osekStackUsageSrc (overwritten) */
/*-+--------------------------------------------------------------------------
 / osGetSystemStackUsage
 / Funktion: calculate maximum stack usage of interrupt stack
 / Parameter: -
 / Returnvalue: calculated stack usage (in byte)
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: osGetSystemStackUsage is an API function which might be unused. */
osqFunc1 osStackUsageType osqFunc2 osGetSystemStackUsage(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetSystemStackUsage */
   osuint32 *stackPtr;   
   COVER(0x001F) 
   stackPtr = (osuint32*)osConfigBlock.SystemStack[osSysGetCoreID()].start;   
   IF2ANDCOVER((stackPtr < (osuint32*)osConfigBlock.SystemStack[osSysGetCoreID()].end), (*stackPtr == osdStackCheckPattern),0x00F2,0x00F3,0x00F4)   
   while ((stackPtr < (osuint32*)osConfigBlock.SystemStack[osSysGetCoreID()].end) && (*stackPtr == osdStackCheckPattern))
   {
      COVER(0x0020)
      stackPtr++;
   }
   COVER(0x0021)
   return (osStackUsageType)((osuint8*)osConfigBlock.SystemStack[osSysGetCoreID()].end - (osuint8*)stackPtr);
} /* end of osGetSystemStackUsage */
/* KB end osekStackUsageSrc */
/* KB begin osekOsGetStackUsage (overwritten) */
/*-+--------------------------------------------------------------------------
 / osGetStackUsage
 / Description: calculate maximum stack usage of specified task
 / Parameter: task index
 / Returnvalue: calculated stack usage in byte
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: osGetStackUsage is an API function which might be unused. */
osqFunc1 osStackUsageType osqFunc2 osGetStackUsage(TaskType taskId) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetStackUsage */
   osuint32 *stackPtr;
   COVER(0x0022) 
   IFCOVER(taskId < osdNumberOfAllTasks,0x00EA,0x00EB)
   osSysErrAssert((taskId < osdNumberOfAllTasks), osdErrSUInvalidTaskIndex)
   stackPtr = (osuint32*)osConfigBlock.aulTaskStackStartAddress[taskId];
   IF2ANDCOVER((stackPtr < (osuint32*)osConfigBlock.aulTaskStackEndAddress[taskId]), (*stackPtr == osdStackCheckPattern),0x00F5,0x00F6,0x00F7)
   while ((stackPtr < (osuint32*)osConfigBlock.aulTaskStackEndAddress[taskId]) && (*stackPtr == osdStackCheckPattern))
   {
      COVER(0x0023)   
      stackPtr++;
   }
   COVER(0x0024)
   return (osStackUsageType)((osuint8*)osConfigBlock.aulTaskStackEndAddress[taskId] - (osuint8*)stackPtr);
} /* end of osGetStackUsage */

/*-+--------------------------------------------------------------------------
 / osGetISRStackUsage
 / Description: calculate maximum stack usage of ISRs on specific level  
 / Parameter: ISR index
 / Returnvalue: calculated stack usage in byte
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: osGetISRStackUsage is an API function which might be unused. */ 
osqFunc1 osStackUsageType osqFunc2 osGetISRStackUsage(ISRType isrId) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetISRStackUsage */
   osuint32 *stackPtr;
   COVER(0x0025)   
   IFCOVER(isrId < osdNumberOfCat2ISRs,0x00EC,0x00ED)
   osSysErrAssert(isrId < osdNumberOfCat2ISRs, osdErrSUInvalidIsrIndex)
   stackPtr = (osuint32*)osConfigBlock.osCat2IsrStacks[isrId].start;   
   IFCOVER(stackPtr != osdNULL,0x00EE,0x00EF)
   if (stackPtr != osdNULL)
   {
      IF2ANDCOVER((stackPtr < (osuint32*)(osConfigBlock.osCat2IsrStacks[isrId].end)) , (*stackPtr == osdStackCheckPattern),0x00F8,0x00F9,0x00FA)
      while ((stackPtr < (osuint32*)(osConfigBlock.osCat2IsrStacks[isrId].end)) && (*stackPtr == osdStackCheckPattern))
      {
         COVER(0x0026)
         stackPtr++;
      }
      COVER(0x0027)
   }
   return (osStackUsageType)((osuint8*)osConfigBlock.osCat2IsrStacks[isrId].end - (osuint8*)stackPtr);
} /* end of osGetISRStackUsage */
/* KB end osekOsGetStackUsage */


 #if (osdNumberOfAllTasks > 0)
/* KB begin osekHWosCheckInterruptsEnabledSrc (overwritten) */
/* KB end osekHWosCheckInterruptsEnabledSrc */
 #endif

/* KB begin osekHWosCheckInterruptsDisabledSrc (overwritten) */
/* KB end osekHWosCheckInterruptsDisabledSrc */

/* KB begin osekHWosDisableLevelSrc (overwritten) */
/* KB end osekHWosDisableLevelSrc */

/* KB begin osekHWosEnableLevelSrc (overwritten) */
/* KB end osekHWosEnableLevelSrc */

/* KB begin osekHWosSetAlarmLevelSrc (overwritten) */
/* KB end osekHWosSetAlarmLevelSrc */

/* KB begin osekHWosSaveDisableLevelSrc (overwritten) */
/* KB end osekHWosSaveDisableLevelSrc */

/* KB begin osekHWosRestoreEnableLevelSrc (overwritten) */
/* KB end osekHWosRestoreEnableLevelSrc */

/* KB begin osekHWosDisableGlobalSrc (overwritten) */
/* KB end osekHWosDisableGlobalSrc */

/* KB begin osekHWosEnableGlobalSrc (overwritten) */
/* KB end osekHWosEnableGlobalSrc */

/* KB begin osekHWosSaveDisableLevelNestedSrc (default) */
/*-+--------------------------------------------------------------------------
 / osSaveDisableLevelNested
 / Funktion: save level and disable up to system level, nested
 /           similar to API function SuspendOSInterrupts but used in the OS only
 /   - 
 / Parameter:
 / Returnvalue:
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: The function is osSaveDisableLevelNested is used in 
 * many different functions in the OS. Anyhow, dependend on the configuration, 
 * the function is unused in rare cases. Provision of this function only in the 
 * cases where it is necessary, would increase code complexity too much. (1503) */
osqFunc1 void osqFunc2 osSaveDisableLevelNested(void)    /* PRQA S 1503 */ 
{
   /* CovComment 4:  Function: osSaveDisableLevelNested */
   /* KB begin osekHWosSaveDisableLevelNestedBody (overwritten) */
   COVER(0x0028)
   if (ptrToCcb2->ossIntSaveDisableCounter < 63U)
   {
      COVER(0x0029)   
      if (ptrToCcb2->ossIntSaveDisableCounter == 0) 
      {
         COVER(0x002A)      
         ptrToCcb2->ossSavedIntLevelNested = osGetDisableLevel();
      }  
      ELSEWITHCOVER(0x002B)
      ptrToCcb2->ossIntSaveDisableCounter++;           
   }
   else
   {
      COVER(0x002C)      
      osEnterSafeState(E_OS_SYS_ASSERTION, osdErrSDWrongCounter);
   }
   /* KB end osekHWosSaveDisableLevelNestedBody */
}
/* KB end osekHWosSaveDisableLevelNestedSrc */

/* KB begin osekHWosRestoreEnableLevelNestedSrc (default) */
/*-+--------------------------------------------------------------------------
 / osRestoreEnableLevelNested
 / Funktion: restore level saved by osSaveDisableLevelNested
 /           similar to API function ResumeOSInterrupts but used in the OS only
 /   - 
 / Parameter:
 / Returnvalue:
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: The function is osRestoreEnableLevelNested is used in 
 * many different functions in the OS. Anyhow, dependend on the configuration, 
 * the function is unused in rare cases. Provision of this function only in the 
 * cases where it is necessary, would increase code complexity too much. (1503) */
osqFunc1 void osqFunc2 osRestoreEnableLevelNested(void)    /* PRQA S 1503 */ 
{
   /* CovComment 4:  Function: osRestoreEnableLevelNested */
   /* KB begin osekHWosRestoreEnableLevelNestedBody (overwritten) */
   COVER(0x002D)
   if (ptrToCcb2->ossIntSaveDisableCounter != 0)
   {
      COVER(0x002E)
      ptrToCcb2->ossIntSaveDisableCounter--;   
      if (ptrToCcb2->ossIntSaveDisableCounter == 0)
      {
         COVER(0x002F)
         osRestoreLevelNested();
      } 
      ELSEWITHCOVER(0x0030)
   }
   else
   {
      COVER(0x0031)
      osEnterSafeState(E_OS_SYS_ASSERTION, osdErrREWrongCounter);      
   }
   /* KB end osekHWosRestoreEnableLevelNestedBody */
}
/* KB end osekHWosRestoreEnableLevelNestedSrc */

/* KB begin osekHWosSaveDisableGlobalNestedSrc (overwritten) */
/* KB end osekHWosSaveDisableGlobalNestedSrc */

/* KB begin osekHWosRestoreEnableGlobalNestedSrc (overwritten) */
/* KB end osekHWosRestoreEnableGlobalNestedSrc */

/* KB begin MicrosarOsThreadSwitchHookCall (default) */
#if osdCallTimingHooks

osqRAM0 osqRAM1 osqRAM2 osuint8 osqRAM3  osNextRunReason[osdNumberOfAllTasks];

/* CovComment 4:  Macro: OS_VTH_CALL_SCHEDULE_HOOK */
#define OS_VTH_CALL_SCHEDULE_HOOK(LastActiveTask, ActiveTask, NextTask) \
   {                                                                    \
      osProcessType FromTask;                                           \
      osuint8 FromTaskReason;                                           \
      osuint8 ToTaskReason;                                             \
      CoreIdType CoreId = 0;                                            \
      if((ActiveTask) == osdNoActiveTask)                               \
      {                                                                 \
         FromTask = (osProcessType) (LastActiveTask);                   \
         if((LastActiveTask) == osdNoActiveTask)                        \
         {                                                              \
            /* Idle Loop is always preempted */                         \
            FromTaskReason = (OS_VTHP_THREAD_PREEMPT);                  \
            /* No change of osNextRunReason[] necessary here */         \
            COVER(0x0032)                                                     \
         }                                                              \
         else                                                           \
         {                                                              \
            FromTaskReason = (OS_VTHP_TASK_TERMINATION);                \
            osNextRunReason[FromTask] = FromTaskReason |                \
                                        (OS_VTHP_MODIFY_FROM_TO_REASON);\
            COVER(0x0033)                                                     \
         }                                                              \
      }                                                                 \
      else                                                              \
      {                                                                 \
         FromTask = (osProcessType) (ActiveTask);                       \
         if( osTcbTaskState[FromTask] == WAITING)                       \
         {                                                              \
            FromTaskReason = (OS_VTHP_TASK_WAITEVENT);                  \
            osNextRunReason[FromTask] = FromTaskReason |                \
                                        (OS_VTHP_MODIFY_FROM_TO_REASON);\
            COVER(0x0034)                                                     \
         }                                                              \
         else if (osTcbTaskState[FromTask] == WAIT_SEMAPHORE)           \
         {                                                              \
            FromTaskReason = (OS_VTHP_TASK_WAITSEMA);                   \
            osNextRunReason[FromTask] = FromTaskReason |                \
                                        (OS_VTHP_MODIFY_FROM_TO_REASON);\
            COVER(0x0035)                                                     \
         }                                                              \
         else                                                           \
         {                                                              \
            FromTaskReason = (OS_VTHP_THREAD_PREEMPT);                  \
            osNextRunReason[FromTask] = FromTaskReason |                \
                                        (OS_VTHP_MODIFY_FROM_TO_REASON);\
            COVER(0x0036)                                                     \
         }                                                              \
      }                                                                 \
      if ((NextTask) == osdNoActiveTask)                                \
      {                                                                 \
         /* idle loop always resumes */                                 \
         ToTaskReason = (OS_VTHP_THREAD_RESUME);                        \
         COVER(0x0037)                                                        \
      }                                                                 \
      else                                                              \
      {                                                                 \
         ToTaskReason = osNextRunReason[(NextTask)];                    \
         COVER(0x0038)                                                        \
      }                                                                 \
      OS_VTH_SCHEDULE( ((osProcessType) FromTask),                      \
                       ((osuint8) FromTaskReason),                      \
                       ((osProcessType) (NextTask)),                    \
                       ((osuint8) ToTaskReason)  ,                      \
                       ((CoreIdType) CoreId)     )                      \
   }
#else /*osdCallTimingHooks*/

/* empty definition if no timing hooks configured */
#define OS_VTH_CALL_SCHEDULE_HOOK(LastActiveTask, ActiveTask, NextTask) \
   COVER(0x0039)

#endif /*osdCallTimingHooks*/
/* KB end MicrosarOsThreadSwitchHookCall */

/* KB begin osekHWosDispatcherSrc (overwritten) */
osqFunc1 void osqFunc2 osInitTcb(void)
{
   /* CovComment 4:  Function: osInitTcb */
   osuint16 index;

   COVER(0x003A)   
   ptrToCcb2->ossCallDispatcher = 0;
   IFCOVER(0 >= osConfigBlock.uiNumberOfTasks,0x00F0,0x00F1)
   for(index = 0; index < osConfigBlock.uiNumberOfTasks; index++)
   {
      COVER(0x003B)
      osTcbValid[index] = osdFALSE;
      osTcbSP[index]    = (osStackPtrType)0;
      osTcbApplicationID[index] = INVALID_OSAPPLICATION;
   }
}

/*****************************************************************************
  osIdleLoop
  Description: called when no active task is running
  Parameter: -
  ReturnValue: -
*****************************************************************************/
static osqFunc1 void osqFunc2 osIdleLoop(void);
static osqFunc1 void osqFunc2 osIdleLoop(void)
{
   /* CovComment 4:  Function: osIdleLoop */
   COVER(0x003C)
   OS_IDLE_ENTRY();
   for(;;)
   {
      COVER(0x003D)
      #if (osdNonPreempt != 0)
      if (osOwnCcb->LockIsNeeded.ossStartDispatcher != 0U)
      {
         ptrToCcb2->ossCallDispatcher = 1;
         osDispatch();
         COVER(0x003E)
      }
      ELSEWITHCOVER(0x003F)
      #endif
      
      OS_IDLE_PROC()
   }
}

/*-+--------------------------------------------------------------------------
/ osDispatcher
/ Description: run into idle loop or start new task or resume preempted task
/ Parameter: stack pointer of current active task
/ Returnvalue: stack pointer for preempted task to be resumed
/--------------------------------------------------------------------------*/
/* MISRA RULE 8.8 VIOLATION: The function osDispatcher is called from assembly language.
   Declaring the function static causes assembler errors (3408). */
/* MISRA RULE 14.1 not violated: The function osDispatcher is called from assembly language.
   MISRA checking tools do not see the call and complain about it. */ 
osqFunc1 osStackPtrType osqFunc2 osDispatcher(osStackPtrType stackPtr) /* PRQA S 3408 */ /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osDispatcher */
   TaskType taskIndex;
   COVER(0x0040)
   
   
   ptrToCcb2->ossCallDispatcher = 0;
   ptrToCcb->ossStartDispatcher = osdFALSE;

   taskIndex = ptrToCcb2->ossActiveTaskIndex;
   if (taskIndex < osdNumberOfAllTasks)
   {
      COVER(0x0041)
      if (osTcbTaskState[taskIndex] == RUNNING)      
      {
         COVER(0x0042)
         #if (osdPostTaskHook == 1)
         osPostTaskHook();         
         #endif
         osTcbTaskState[taskIndex] = READY;         
      }    
      ELSEWITHCOVER(0x0043)
      osTcbSP[taskIndex] = stackPtr;
      osTcbValid[taskIndex] = osdTRUE;      
      osTcbApplicationID[taskIndex] = ptrToCcb2->ossActiveApplicationID;
      #if osdORTIDebug
      osTcbORTIServiceId[taskIndex] = ptrToCcb2->ossORTICurrentServiceId;
      #endif      
   }
   ELSEWITHCOVER(0x0044)
   taskIndex = ptrToCcb->ossHighReadyTaskIndex;
   OS_VTH_CALL_SCHEDULE_HOOK(ptrToCcb2->ossLastActiveTaskIndex, ptrToCcb2->ossActiveTaskIndex, taskIndex);
   ptrToCcb2->ossActiveTaskIndex = taskIndex;
   if (taskIndex == osdNoActiveTask)
   {
      COVER(0x0045)
      ptrToCcb2->ossActiveTaskPrio = ptrToCcb->ossHighReadyTaskPrio;
      #if osdORTIDebug
      ptrToCcb2->ossORTICurrentServiceId = osdORTINoService;
      #endif      
      #if (osdFullPreempt || osdMixedPreempt)      
      ptrToCcb2->ossLockDispatcher = osdFALSE;
      #endif         
      ptrToCcb2->ossActiveApplicationID = osSystemApplicationCore0;
      osSetASID(osConfigBlock.applMpuASID[ptrToCcb2->ossActiveApplicationID]);
      osStartTrustedTask((osuint32)osConfigBlock.SystemStack[osSysGetCoreID()].start,
                         (osuint32)osConfigBlock.SystemStack[osSysGetCoreID()].end,
                         (osTaskFctType)osIdleLoop);
      return (osStackPtrType)0; /* must never be reached! */
   }
   else
   {
      COVER(0x0046)
      osSchedOccupyInternalResource();    
      ptrToCcb2->ossActiveTaskPrio = ptrToCcb->ossHighReadyTaskPrio;
      ptrToCcb2->ossLastActiveTaskIndex = taskIndex;
      ptrToCcb2->ossCurrentContext = osdCtxTask;
      #if (osdFullPreempt || osdMixedPreempt)
      if(osConfigBlock.aucTaskPreemptive[taskIndex] == osdTaskTypePreempt)
      {
         COVER(0x0047)      
         ptrToCcb2->ossLockDispatcher = osdFALSE;
      }
      else
      {
         COVER(0x0048)      
         ptrToCcb2->ossLockDispatcher = osdTRUE;
      }
      #endif
   
      if (osTcbTaskState[taskIndex] == PRE_READY)
      {
         COVER(0x0049)
         if(osTcbValid[taskIndex] == osdTRUE)
         {
            COVER(0x004A)
            osEnterSafeState(E_OS_SYS_ASSERTION, osdErrDPStartValidContext);
         }
         osTcbTaskState[taskIndex] = RUNNING;      
         #if osdORTIDebug
         ptrToCcb2->ossORTICurrentServiceId = osdORTINoService;
         #endif         
         ptrToCcb2->ossActiveApplicationID = osConfigBlock.acTaskToAppl[taskIndex];
         osSetASID(osConfigBlock.applMpuASID[ptrToCcb2->ossActiveApplicationID]);
         #if (osdPreTaskHook == 1)
         osPreTaskHook();
         #endif
         if(osConfigBlock.aucTaskTrusted[taskIndex] == 0)
         {
            COVER(0x004B)
            osSysErrAssert((ptrToCcb2->ossActiveApplicationID < osdNumberOfApplications), osdErrDPInvalidApplicationID)
                  osSetMpuConfig_c0((osuint32)&osConfigBlock.applMPUConfig[ptrToCcb2->ossActiveApplicationID]);
            osStartNonTrustedTask((osuint32)osConfigBlock.aulTaskStackStartAddress[taskIndex],
                                  (osuint32)osConfigBlock.aulTaskStackEndAddress[taskIndex],
                                  (osTaskFctType)osConfigBlock.aulTaskStartAddress[taskIndex]);
         }
         else
         {
            COVER(0x004C)
            osStartTrustedTask((osuint32)osConfigBlock.aulTaskStackStartAddress[taskIndex],
                               (osuint32)osConfigBlock.aulTaskStackEndAddress[taskIndex],
                               (osTaskFctType)osConfigBlock.aulTaskStartAddress[taskIndex]);
         }
      }
      else
      {
         COVER(0x004D)
         if(osTcbValid[taskIndex] == osdFALSE)
         {
            COVER(0x004E)
            osEnterSafeState(E_OS_SYS_ASSERTION, osdErrDPResumeInvalidContext);
         }
         osTcbValid[taskIndex] = osdFALSE;
         osTcbTaskState[taskIndex] = RUNNING;
         #if osdORTIDebug
         ptrToCcb2->ossORTICurrentServiceId = osTcbORTIServiceId[taskIndex];
         #endif
         ptrToCcb2->ossActiveApplicationID = osTcbApplicationID[taskIndex];         
         osSysErrAssert((ptrToCcb2->ossActiveApplicationID < osdNumberOfApplications), osdErrDPInvalidApplicationID)         
         osSetASID(osConfigBlock.applMpuASID[ptrToCcb2->ossActiveApplicationID]);
               osSetMpuConfig_c0((osuint32)&osConfigBlock.applMPUConfig[ptrToCcb2->ossActiveApplicationID]);
         #if (osdPreTaskHook == 1)
         osPreTaskHook();
         #endif
      } 
      COVER(0x004F)                 
      return (osStackPtrType)osTcbSP[taskIndex];
   }   
} /* END OF osDispatcher */
/* KB end osekHWosDispatcherSrc */

/* KB begin osekHWAdditionalAPIFunctions (overwritten) */
/* MISRA RULE 14.1 VIOLATION: osGetConfigBlockVersion is an API function which might be unused. */
osqFunc1 osuint16 osqFunc2 osGetConfigBlockVersion(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetConfigBlockVersion */
   COVER(0x0050)
   return osConfigBlock.uiUserConfigVersion;
}

/* MISRA RULE 14.1 VIOLATION: osCheckMPUAccess is an API function which might be unused. */   
osqFunc1 osuint8 osqFunc2 osCheckMPUAccess(const osuint8* addr) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osCheckMPUAccess */
   osuint8 result;
   COVER(0x0051)
   SuspendAllInterrupts();
   result = osCheckMpuAsm((osuint32)addr);   
   ResumeAllInterrupts();         
   return result;
}

#if ((osdHwTimerNeeded_OSTM == 1) || (osdHwTimerNeeded_OSTM_HIRES == 1))
/* MISRA RULE 14.1 VIOLATION: osCheckAndRefreshTimer is an API function which might be unused. */   
osqFunc1 StatusType osqFunc2 osCheckAndRefreshTimer(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osCheckAndRefreshTimer    */
   StatusType result;
   CoreIdType osCoreID = osSysGetCoreID();

   COVER(0x0052)      
   SuspendAllInterrupts();   
   result = E_OK;   
     
   if(osdOSTM_TE(osCoreID) == 0)
   {
      COVER(0x0053)   
      result = E_OS_SYS_API_ERROR;   
   }
   ELSEWITHCOVER(0x0054)      
   osdOSTM_TT(osCoreID) = (osuint8)0x01; /* stop the timer */
   
   #if (osdHwTimerNeeded_OSTM_HIRES == 1)
   if(osdOSTM_CTL(osCoreID) != 0x02)
   {
      COVER(0x0055)      
      result = E_OS_SYS_API_ERROR;
      osdOSTM_CTL(osCoreID) = (osuint8)0x02; /* configure free running timer mode, no interrupt on timer start */
   }
   ELSEWITHCOVER(0x0056)         
   #else
   if(osdOSTM_CTL(osCoreID) != 0)
   {
      COVER(0x0057)      
      result = E_OS_SYS_API_ERROR;
      osdOSTM_CTL(osCoreID) = (osuint8)0x00; /* configure interval timer mode, no interrupt on timer start */
   }
   ELSEWITHCOVER(0x0058)         
   if(osdOSTM_CMP(osCoreID) != (osuint32)osdTimerCompareRegValCore0)
   {
      COVER(0x0059)      
      result = E_OS_SYS_API_ERROR;
      osdOSTM_CMP(osCoreID) = (osuint32)osdTimerCompareRegValCore0; /* set the reload value */
   }
   ELSEWITHCOVER(0x005A)            
   #endif
   if(osGetIMRmEI(osdTimerInterruptSourceNumberCore0) != 0)
   {   
      COVER(0x005B)      
      result = E_OS_SYS_API_ERROR;   
      osEnableInterrupt(osdTimerInterruptSourceNumberCore0); /* enables the system timer interrupt source */
   }
   ELSEWITHCOVER(0x005C)         
   osdOSTM_TS(osCoreID) = (osuint8)0x01; /* start the timer */
   
   if(result != E_OK)
   {
      COVER(0x005D)
      ptrToCcb2->ossLastError = osdErrCRInvalidSettingOSTM;
      osErrorHook(E_OS_SYS_API_ERROR);
   }      
   ELSEWITHCOVER(0x005E)      
      
   ResumeAllInterrupts();
   return result;   
}
#endif

/* MISRA RULE 19.12 not violated: The operator ## is used for symbol assignment in this macro. */
#define osCheckMPAT(regnr) \
        if(osGetMPAT##regnr() != osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT##regnr) \
        {osSetMPAT##regnr(osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT##regnr); \
         result = E_OS_SYS_API_ERROR;} /* PRQA S 881 */

/* MISRA RULE 19.12 not violated: The operator ## is used for symbol assignment in this macro. */         
#define osCheckMPUConfig(regnr) \
        if((osGetMPLA##regnr() != osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPLA##regnr) || \
           (osGetMPUA##regnr() != osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPUA##regnr) || \
           (osGetMPAT##regnr() != osConfigBlock.osMPUConfig[osSysGetCoreID()].osMPAT##regnr))   \
        {osSetMPU##regnr(); result = E_OS_SYS_API_ERROR;} /* PRQA S 881 */

/* MISRA RULE 14.1 VIOLATION: osCheckAndRefreshMPU is an API function which might be unused. */   
osqFunc1 StatusType osqFunc2 osCheckAndRefreshMPU(void) /* PRQA S 1503 */
{  
   /* CovComment 4:  Function: osCheckAndRefreshMPU */
   StatusType result;
   
   COVER(0x005F)
   SuspendAllInterrupts(); 
   result = E_OK;   

   if(osGetMPM() != osdMPU_MPM)
   {
      COVER(0x0060)   
      osSetMPM(osdMPU_MPM);   
      result = E_OS_SYS_API_ERROR;   
   }
   ELSEWITHCOVER(0x0061)      
      
   osCheckMPAT(0)   

   #if osdNumberOfDynamicMpuRegions_c0>0      
   osCheckMPAT(1)
   #endif
   #if osdNumberOfDynamicMpuRegions_c0>1   
   osCheckMPAT(2)   
   #endif
   #if osdNumberOfDynamicMpuRegions_c0>2      
   osCheckMPAT(3)
   #endif                                 
   #if osdNumberOfDynamicMpuRegions_c0>3   
   osCheckMPAT(4)   
   #endif
   #if osdNumberOfDynamicMpuRegions_c0>4   
   osCheckMPAT(5)   
   #endif 
   #if osdNumberOfDynamicMpuRegions_c0>5                     
   osCheckMPAT(6)   
   #endif                     
   #if osdNumberOfDynamicMpuRegions_c0>6      
   osCheckMPAT(7)   
   #endif                  
   #if osdNumberOfDynamicMpuRegions_c0>7   
   osCheckMPAT(8)   
   #endif                  
   #if osdNumberOfDynamicMpuRegions_c0>8   
   osCheckMPAT(9)   
   #endif                 
   #if osdNumberOfDynamicMpuRegions_c0>9
   osCheckMPAT(10)   
   #endif                                                          
   #if osdNumberOfDynamicMpuRegions_c0>10
   osCheckMPAT(11)   
   #endif
   #if osdNumberOfDynamicMpuRegions_c0>11
   osCheckMPAT(12)   
   #endif
   #if osdNumberOfDynamicMpuRegions_c0>12
   osCheckMPAT(13)   
   #endif
   #if osdNumberOfDynamicMpuRegions_c0>13
   osCheckMPAT(14)   
   #endif
   #if osdNumberOfDynamicMpuRegions_c0>14
   osCheckMPAT(15)   
   #endif

   #if (osdNumberOfDynamicMpuRegions_c0 < 1)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */
   osCheckMPUConfig(1) /* PRQA S 3415 */
   #endif   
   #if (osdNumberOfDynamicMpuRegions_c0 < 2)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(2) /* PRQA S 3415 */
   #endif
   #if (osdNumberOfDynamicMpuRegions_c0 < 3)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(3) /* PRQA S 3415 */
   #endif                  

   #if (osdNumberOfMpuRegions > 4)         
   #if (osdNumberOfDynamicMpuRegions_c0 < 4)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */                                     
   osCheckMPUConfig(4) /* PRQA S 3415 */
   #endif   
   #if (osdNumberOfDynamicMpuRegions_c0 < 5)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(5) /* PRQA S 3415 */
   #endif                  
   #if (osdNumberOfDynamicMpuRegions_c0 < 6)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(6) /* PRQA S 3415 */
   #endif            
   #if (osdNumberOfDynamicMpuRegions_c0 < 7)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(7) /* PRQA S 3415 */
   #endif                             
   #endif

   #if (osdNumberOfMpuRegions > 8)
   #if (osdNumberOfDynamicMpuRegions_c0 < 8)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(8) /* PRQA S 3415 */
   #endif                  
   #if (osdNumberOfDynamicMpuRegions_c0 < 9)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */
   osCheckMPUConfig(9) /* PRQA S 3415 */
   #endif                  
   #if (osdNumberOfDynamicMpuRegions_c0 < 10)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */
   osCheckMPUConfig(10) /* PRQA S 3415 */
   #endif                  
   #if (osdNumberOfDynamicMpuRegions_c0 < 11)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(11) /* PRQA S 3415 */
   #endif
   #endif   
   
   #if (osdNumberOfMpuRegions > 12)
   #if (osdNumberOfDynamicMpuRegions_c0 < 12)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */                                       
   osCheckMPUConfig(12) /* PRQA S 3415 */
   #endif                         
   #if (osdNumberOfDynamicMpuRegions_c0 < 13)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */
   osCheckMPUConfig(13) /* PRQA S 3415 */
   #endif                            
   #if (osdNumberOfDynamicMpuRegions_c0 < 14)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */   
   osCheckMPUConfig(14) /* PRQA S 3415 */
   #endif                            
   #if (osdNumberOfDynamicMpuRegions_c0 < 15)
   /* MISRA RULE 12.4 not violated: Reading the variable MPU registers is sideeffect free. */
   osCheckMPUConfig(15) /* PRQA S 3415 */
   #endif                         
   #endif      
   
   if(result != E_OK)
   {
      COVER(0x0062)      
      ptrToCcb2->ossLastError = osdErrCRInvalidSettingMPU;
      osErrorHook(E_OS_SYS_API_ERROR);      
   }   
   ELSEWITHCOVER(0x0063)         
   
   ResumeAllInterrupts();
   return result;
}

#if (osdNumberOfCat2ISRs > 0)
/*****************************************************************************
  osCallCat2ISR
  Description: called by ISR prologue if CAT2 ISR has occured
  Parameter: ISRID = index of CAT2 ISR 
             ISRAddr = address of the CAT2 ISR to be started
  ReturnValue: Request for dispatcher start
*****************************************************************************/
/* MISRA RULE 14.1 not violated: The function osCallCat2ISR is called from assembler code.
   MISRA checking tools do not see the call and complain about it. */
osqFunc1 osuint32 osqFunc2 osCallCat2ISR(ISRType ISRID) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osCallCat2ISR */
   ISRType SavedIsrId;
   osuint32 retVal;
   osuint32 newPSW;
   ApplicationType SavedApplicationId;
   osuint16 SavedCurrentContext;
   osuint16 osEICn;
   #if osdORTIDebug
   osuint8 SavedORTIServiceId;
   #endif

   COVER(0x0064)
   osSysErrAssert((ISRID < osdNumberOfCat2ISRs), osdErrCIInvalidIsrIndex)
   retVal = 0;   
      SavedIsrId = ptrToCcb2->ossActiveISRID;
      ptrToCcb2->ossActiveISRID = ISRID;

      osEICn = osGetICRx16(osConfigBlock.osIsrChannel[ISRID]);
      if((osEICn & 0x9000U) == 0x8000U)
      {       
         /* interrupt request bit is not set */
         osEnterSafeState(E_OS_SYS_ASSERTION, osdErrCIMissingIntRequest);
      }   
      if((osEICn & 0x0080U) == 0x0080U)
      {       
         /* interrupt mask bit is not cleared */
         osEnterSafeState(E_OS_SYS_ASSERTION, osdErrCIInterruptIsMasked);      
      }
      if(((osEICn & 0x000FU) != (osuint16)osGetLevelISPR()) || ((osEICn & 0x000FU) != osConfigBlock.osIsrPrioLevel[ISRID]))
      {       
         /* wrong interrupt priority */
         osEnterSafeState(E_OS_SYS_ASSERTION, osdErrCIWrongIntPriority);      
      }
      SavedCurrentContext = ptrToCcb2->ossCurrentContext;   
      ptrToCcb2->ossCurrentContext = osdCtxISRCat2;      
      SavedApplicationId = ptrToCcb2->ossActiveApplicationID;   
      ptrToCcb2->ossActiveApplicationID = osConfigBlock.acIsrToAppl[ISRID];
      osSysErrAssert((ptrToCcb2->ossActiveApplicationID < osdNumberOfApplications), osdErrCIInvalidApplicationID)         
   
      #if osdORTIDebug
      SavedORTIServiceId = ptrToCcb2->ossORTICurrentServiceId;
      ptrToCcb2->ossORTICurrentServiceId = osdORTINoService;
      #endif
      
      ptrToCcb2->ossIntNestingDepth++;                           
      #if (osdFullPreempt || osdMixedPreempt)
      ptrToCcb2->ossLockDispatcher++;        
      #endif
      #if osdCallTimingHooks
      if(ptrToCcb2->ossIntNestingDepth == 1)
      {  /* interrupted process is a task */         
         COVER(0x0065)
         OS_VTH_SCHEDULE(osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex, OS_VTHP_THREAD_PREEMPT, (osdNumberOfAllTasks + ISRID), OS_VTHP_ISR_START, osSysGetCoreID());
      }
      else
      {  /* interrupted process is an ISR */      
         COVER(0x0066)
         OS_VTH_SCHEDULE((osdNumberOfAllTasks+SavedIsrId), OS_VTHP_THREAD_PREEMPT, (osdNumberOfAllTasks + ISRID), OS_VTHP_ISR_START, osSysGetCoreID());      
      }
      #endif            
   
      newPSW = osGetPSW(); /* CPU is in supervisor mode and interrupts are disabled */            
      if(osConfigBlock.IsrNestable[ISRID] != 0)      
      {
         COVER(0x0067)
         newPSW &= (osuint32)0xFFFFFFDFUL;      
      }
      ELSEWITHCOVER(0x0068)
      osSetASID(osConfigBlock.applMpuASID[ptrToCcb2->ossActiveApplicationID]);
      if(osConfigBlock.aucIsrTrusted[ISRID] == 0)
      {     
         COVER(0x0069)
         newPSW |= (osuint32)0x40000000UL;
               osSetMpuConfig_c0((osuint32)&osConfigBlock.applMPUConfig[ptrToCcb2->ossActiveApplicationID]);
         osStartNonTrustedISR((osuint32)osConfigBlock.cat2IsrStartAddress[ISRID], (osuint32)newPSW);   
      }
      else
      {
         COVER(0x006A)
         osStartTrustedISR((osuint32)osConfigBlock.cat2IsrStartAddress[ISRID], (osuint32)newPSW);
      }
      #if osdCallTimingHooks
      if(ptrToCcb2->ossIntNestingDepth == 1)
      {  /* interrupted process is a task */ 
         COVER(0x006B)     
         OS_VTH_SCHEDULE((osdNumberOfAllTasks+ISRID), OS_VTHP_ISR_END, osOwnCcb->LockIsNotNeeded.ossActiveTaskIndex, OS_VTHP_THREAD_RESUME, osSysGetCoreID());
      }
      else
      {  /* interrupted process is an ISR */      
         COVER(0x006C)
         OS_VTH_SCHEDULE((osdNumberOfAllTasks+ISRID), OS_VTHP_ISR_END, (osdNumberOfAllTasks+SavedIsrId), OS_VTHP_THREAD_RESUME, osSysGetCoreID());           
      }
      #endif
      #if (osdFullPreempt || osdMixedPreempt)
      ptrToCcb2->ossLockDispatcher--;
      #endif
      ptrToCcb2->ossIntNestingDepth--;

      ptrToCcb2->ossActiveISRID = SavedIsrId;
      ptrToCcb2->ossActiveApplicationID = SavedApplicationId;      
      ptrToCcb2->ossCurrentContext = SavedCurrentContext;
      osSetASID(osConfigBlock.applMpuASID[ptrToCcb2->ossActiveApplicationID]);
            osSetMpuConfig_c0((osuint32)&osConfigBlock.applMPUConfig[ptrToCcb2->ossActiveApplicationID]);
      #if osdORTIDebug
      ptrToCcb2->ossORTICurrentServiceId = SavedORTIServiceId;
      #endif

      #if ((STATUS_LEVEL == EXTENDED_STATUS) && (osdEnableAssertions == 1))
      if (ptrToCcb2->ossIntAPIStatus != 0)
      {
         COVER(0x006D)
         osEnterSafeState(E_OS_DISABLEDINT, osdErrIXIntAPIDisabled);
      }
      ELSEWITHCOVER(0x006E)
      #endif

      #if (osdFullPreempt || osdMixedPreempt)
      COVER(0x006F)
      if(ptrToCcb->ossStartDispatcher == osdTRUE)
      {
         COVER(0x0070)
         if(ptrToCcb2->ossLockDispatcher == osdFALSE)
         {
            COVER(0x0071)         
            retVal = 1; /* request for dispatcher start */
         }
         ELSEWITHCOVER(0x0072)
      }
      ELSEWITHCOVER(0x0073)
      #endif
   return retVal; /* return normal */
}
#endif /* osdNumberOfCat2ISRs > 0 */



/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetTaskID(TaskRefType Param0_TaskId) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetTaskID */
   TaskType   Index;   
   StatusType retVal;   
   COVER(0x0074)
   if(osAmINotTrusted())
   {
      COVER(0x0075)      
      retVal = osPsysUMGetTaskID(&Index);
      *Param0_TaskId = Index;
   }
   else
   {
      COVER(0x0076)   
      retVal = osGetTaskID(Param0_TaskId);
      osCheckStackPattern();
   }
   return retVal;
}

/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetTaskState(TaskType Param0_TaskId, TaskStateRefType Param1_State) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetTaskState    */
   TaskStateType State;
   StatusType    retVal;    
   COVER(0x0077)   
   if(osAmINotTrusted())
   {   
      COVER(0x0078)
      retVal = osPsysUMGetTaskState(Param0_TaskId, &State);
      *Param1_State = State;
   }
   else
   {
      COVER(0x0079)   
      retVal = osGetTaskState(Param0_TaskId, Param1_State);
      osCheckStackPattern();
   }
   return retVal;
}

/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetApplicationState(ApplicationType Param0_Application, ApplicationStateRefType Param1_Value) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetApplicationState */
   ApplicationStateType State;
   StatusType retVal;    
   COVER(0x007A)  
   if(osAmINotTrusted())
   {
      COVER(0x007B)            
      retVal = osPsysUMGetApplicationState(Param0_Application, &State);
      *Param1_Value = State;
   }
   else
   {
      COVER(0x007C)         
      retVal = osGetApplicationState(Param0_Application, Param1_Value);
      osCheckStackPattern();
   }
   return retVal;
}

/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetEvent(TaskType Param0_taskIndex, EventMaskRefType Param1_Event) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetEvent */
   EventMaskType Event;
   StatusType    retVal;
   COVER(0x007D)      
   if(osAmINotTrusted())
   {   
      COVER(0x007E)         
      retVal = osPsysUMGetEvent(Param0_taskIndex, &Event);
      *Param1_Event = Event;
   }
   else
   {
      COVER(0x007F)         
      retVal = osGetEvent(Param0_taskIndex, Param1_Event);
      osCheckStackPattern();
   }
   return retVal;
}

/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetAlarm(AlarmType Param0_alarmID, TickRefType Param1_diffTickTime) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetAlarm */
   TickType   DiffTickTime;
   StatusType retVal;    
   COVER(0x0080)
   if(osAmINotTrusted())
   {      
      COVER(0x0081)   
      retVal = osPsysUMGetAlarm(Param0_alarmID, &DiffTickTime);
      *Param1_diffTickTime = DiffTickTime;
   }
   else
   {
      COVER(0x0082)   
      retVal =  osGetAlarm(Param0_alarmID, Param1_diffTickTime);
      osCheckStackPattern();
   }
   return retVal;
}

/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetScheduleTableStatus(ScheduleTableType Param0_ScheduleTableID, ScheduleTableStatusRefType Param1_ScheduleStatus) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetScheduleTableStatus */
   ScheduleTableStatusType ScheduleStatus;
   StatusType              retVal;    
   COVER(0x0083)
   if(osAmINotTrusted())      
   {
      COVER(0x0084)   
      retVal = osPsysUMGetScheduleTableStatus(Param0_ScheduleTableID, &ScheduleStatus);
      *Param1_ScheduleStatus = ScheduleStatus;
   } 
   else
   {
      COVER(0x0085)   
      retVal = osGetScheduleTableStatus(Param0_ScheduleTableID, Param1_ScheduleStatus);
      osCheckStackPattern();
   }
   return retVal;
}

/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetCounterValue(CounterType Param0_CounterID, TickRefType Param1_Value) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetCounterValue */
   TickType   Value;
   StatusType retVal;   
   COVER(0x0086)   
   if(osAmINotTrusted()) 
   {     
      COVER(0x0087)      
      retVal = osPsysUMGetCounterValue(Param0_CounterID, &Value);
      *Param1_Value = Value;
   }
   else
   {
      COVER(0x0088)   
      retVal = osGetCounterValue(Param0_CounterID, Param1_Value);
      osCheckStackPattern();
   }
   return retVal;
}

/* MISRA RULE 14.1 VIOLATION: This function might be unused in some configurations.
 * To reduce code complexity this function is not removed. */
osqFunc1 StatusType osqFunc2 osPsysGetElapsedValue(CounterType Param0_CounterID, TickRefType Param1_Value, TickRefType Param2_ElapsedValue) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osPsysGetElapsedValue */
   TickType   Value;
   TickType   ElapsedValue;
   StatusType retVal;    
   COVER(0x0089)
   if(osAmINotTrusted())    
   {
      COVER(0x008A)   
      Value = *Param1_Value; /* parameter Value must have valid content */   
      retVal = osPsysUMGetElapsedValue(Param0_CounterID, &Value, &ElapsedValue);
      *Param1_Value = Value;
      *Param2_ElapsedValue = ElapsedValue;
   }
   else
   {
      COVER(0x008B)   
      retVal = osGetElapsedValue(Param0_CounterID, Param1_Value, Param2_ElapsedValue);
      osCheckStackPattern();
   }
   return retVal;
}
/* KB end osekHWAdditionalAPIFunctions */

/* KB begin osekHWPeripheralAPIFunctions (default) */
/**  
 * 1. Checks whether the passed area ID is out of bounds
 * 2. Checks whether the current application is allowed to access the passed area
 * 3. Checks whether the passed address is in the given range [start,end]
 *
 * \param   area     Peripheral Region ID
 * \param   address  Address which shall be accessed
 * \param   offset   Alignment offset which shall be considered when checking boundaries
 */
static void osPeripheralAPIChecks( osuint16 area, osuint32 address, osuint32 offset );
static void osPeripheralAPIChecks( osuint16 area, osuint32 address, osuint32 offset )
{
   /* CovComment 4:   Function: osPeripheralAPIChecks */

   COVER(0x008C)

   if( area >= osConfigBlock.uiNumberOfPeripheralRegions )
   {
      COVER(0x008D)
      
      osUnrecoverableError( E_OS_SYS_API_ERROR, osdErrPAInvalidAreaIndex );

      return;/* unreacheable as function above never returns */
   }
   ELSEWITHCOVER(0x008E)

   if( (osConfigBlock.peripheralRegions[area].applAccessRights & 
            (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0 )
   {
      COVER(0x008F)

      osUnrecoverableError( E_OS_SYS_API_ERROR, osdErrPANoAccessRight );

      return;/* unreacheable as function above never returns */
   }
   ELSEWITHCOVER(0x0090)

   if( ((osuint32)osConfigBlock.peripheralRegions[area].start) > address )
   {
      COVER(0x0091)

      osUnrecoverableError( E_OS_SYS_API_ERROR, osdErrPAInvalidAddress );

      return;/* unreacheable as function above never returns */
   }
   ELSEWITHCOVER(0x0092)

   if( ((osuint32)osConfigBlock.peripheralRegions[area].end - offset) < address )
   {
      COVER(0x0093)
 
      osUnrecoverableError( E_OS_SYS_API_ERROR, osdErrPAInvalidAddress );

      return;/* unreacheable as function above never returns */
   }
   ELSEWITHCOVER(0x0094)

}



/* MISRA RULE 14.1 VIOLATION: The function ososReadPeripheral8 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this. (1503)
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososReadPeripheral8 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
osuint8 ososReadPeripheral8( osuint16 area, osuint32 address )   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:   Function: ososReadPeripheral8 */

   COVER(0x0095)

   osPeripheralAPIChecks( area, address, 0 );

   return *(osuint8*)address;
}


/* MISRA RULE 14.1 VIOLATION: The function ososReadPeripheral16 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososReadPeripheral16 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
osuint16 ososReadPeripheral16( osuint16 area, osuint32 address )   /* PRQA S 1503 */ /* PRQA S 1505 */
{ /* PRQA S 4152 */
   /* CovComment 4:   Function: ososReadPeripheral16 */

   COVER(0x0096)

   osPeripheralAPIChecks( area, address, 1 );

   return *(osuint16*)address;
}


/* MISRA RULE 14.1 VIOLATION: The function ososReadPeripheral32 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososReadPeripheral32 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
osuint32 ososReadPeripheral32( osuint16 area, osuint32 address )   /* PRQA S 1503 */ /* PRQA S 1505 */
{ 
   /* CovComment 4:   Function: ososReadPeripheral32 */

   COVER(0x0097)

   osPeripheralAPIChecks( area, address, 3 );

   return *(osuint32*)address;
}





/* MISRA RULE 14.1 VIOLATION: The function ososWritePeripheral8 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososWritePeripheral8 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
void ososWritePeripheral8( osuint16 area, osuint32 address, osuint8 value )   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:   Function: ososWritePeripheral8 */

   COVER(0x0098)

   osPeripheralAPIChecks( area, address, 0 );

   *(osuint8*)address = value;
}


/* MISRA RULE 14.1 VIOLATION: The function ososWritePeripheral16 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososWritePeripheral16 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
void ososWritePeripheral16( osuint16 area, osuint32 address, osuint16 value )   /* PRQA S 1503 */ /* PRQA S 1505 */
{ /* PRQA S 4152 */
   /* CovComment 4:   Function: ososWritePeripheral16 */

   COVER(0x0099)

   osPeripheralAPIChecks( area, address, 1 );

   *(osuint16*)address = value;
}


/* MISRA RULE 14.1 VIOLATION: The function ososWritePeripheral32 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososWritePeripheral32 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
void ososWritePeripheral32( osuint16 area, osuint32 address, osuint32 value )   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:   Function: ososWritePeripheral32 */

   COVER(0x009A)

   osPeripheralAPIChecks( area, address, 3 );

   *(osuint32*)address = value;
}





/* MISRA RULE 14.1 VIOLATION: The function ososModifyPeripheral8 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososModifyPeripheral8 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
void ososModifyPeripheral8( osuint16 area, osuint32 address, osuint8 clearmask, osuint8 setmask )   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:   Function: ososModifyPeripheral8 */

   COVER(0x009B)

   osPeripheralAPIChecks( area, address, 0 );

   *(osuint8*)address = (*(osuint8*)address & clearmask) | setmask;
}


/* MISRA RULE 14.1 VIOLATION: The function ososModifyPeripheral16 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososModifyPeripheral16 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
void ososModifyPeripheral16( osuint16 area, osuint32 address, osuint16 clearmask, osuint16 setmask )   /* PRQA S 1503 */ /* PRQA S 1505 */
{ /* PRQA S 4152 */
   /* CovComment 4:   Function: ososModifyPeripheral16 */

   COVER(0x009C)

   osPeripheralAPIChecks( area, address, 1 );

   *(osuint16*)address = (*(osuint16*)address & clearmask) | setmask;
}


/* MISRA RULE 14.1 VIOLATION: The function ososModifyPeripheral32 is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, ososModifyPeripheral32 might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */
void ososModifyPeripheral32( osuint16 area, osuint32 address, osuint32 clearmask, osuint32 setmask )   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:   Function: ososModifyPeripheral32 */

   COVER(0x009D)

   osPeripheralAPIChecks( area, address, 3 );

   *(osuint32*)address = (*(osuint32*)address & clearmask) | setmask;
}

/* KB end osekHWPeripheralAPIFunctions */

/* KB begin osekHWdelayTilEnableTookEffectSrc (default) */
/* KB end osekHWdelayTilEnableTookEffectSrc */



/* KB begin osekProtectionHookWrapper (default) */
/* MISRA RULE 8.10 VIOLATION: The function osProtectionHookWrapper is a general implementation which is used 
 * identically on different plattforms. On some of them, it is called only in osek.c, on others it 
 * is called also from other files. Therefore it is made globally visible. The risk of potential 
 * name collisions is expected to be low.*/
osqFunc1 ProtectionReturnType osqFunc2 osProtectionHookWrapper(StatusType argErr)  /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osProtectionHookWrapper */
   osuint16 savedCtxt;

   COVER(0x009E)
   savedCtxt = osOwnCcb->LockIsNotNeeded.ossCurrentContext;
   osOwnCcb->LockIsNotNeeded.ossCurrentContext = osdCtxProtectionHook;
   COVER(0x009F)
   osOwnCcb->LockIsNotNeeded.ossIntAPIStatus = 0;
   COVER(0x00A0)
   (void)ProtectionHook(argErr);
   COVER(0x00A1)
   osOwnCcb->LockIsNotNeeded.ossCurrentContext = savedCtxt;

   /* osdDummyRead might intentionally assign a value to an unused variable on 
    * some platforms to avoid compiler warnings. This is no MISRA error. (3199) */
   osdDummyRead(argErr)   /* PRQA S 3199 */
   return PRO_SHUTDOWN;   /* Shutdown on protection error if no protection available [SR:047] */
}
/* KB end osekProtectionHookWrapper */

/* KB begin osekHWosProtectionTrapSrc (overwritten) */
/* MISRA RULE 14.1 not violated: osMemoryProtectionHandler is called in osekasm.c in assembler code. 
   MISRA checking tools do not see the call and complain about it. */
osqFunc1 void osqFunc2 osMemoryProtectionHandler(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osMemoryProtectionHandler */
   StatusType proRet;   
   COVER(0x00A2)
   ptrToCcb2->ossLastError = osdErrEXMemoryViolation;
   proRet = osProtectionHookWrapper(E_OS_PROTECTION_MEMORY);
   osHandleProtectionErrors(proRet, E_OS_PROTECTION_MEMORY);
}

/* MISRA RULE 14.1 not violated: osInstructProtectionHandler is called in osekasm.c in assembler code. 
   MISRA checking tools do not see the call and complain about it. */
osqFunc1 void osqFunc2 osInstructProtectionHandler(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osInstructProtectionHandler */
   StatusType proRet;   
   COVER(0x00A3)
   ptrToCcb2->ossLastError = osdErrEXPrivilegedInstruction;
   proRet = osProtectionHookWrapper(E_OS_PROTECTION_EXCEPTION);
   osHandleProtectionErrors(proRet, E_OS_PROTECTION_EXCEPTION);
}
/* KB end osekHWosProtectionTrapSrc */

   
  
/* KB begin osekHandleProtectionErrors (default) */
/*-+--------------------------------------------------------------------------
 / osHandleProtectionErrors
 / ========================
 /
 / Syntax: void osHandleProtectionErrors(ProtectionReturnType proRet, 
 /                                       StatusType Fatalerror)
 / Parameter (In): proRet: Protection hook reaction to be executed. 
 /                 Fatalerror: Error code for handled error
 / Return value: none 
 / Description: 
 / Handles the error reaction for a protection error 
 / Scalability Classes: SC2, SC3, SC4
 /--------------------------------------------------------------------------*/

 /* MISRA RULE 8.10 VIOLATION: The function osHandleProtectionErrors is a general implementation which is used 
 * identically on different plattforms. On some of them, it is called only in osek.c, on others it 
 * is called also from other files. Therefore it is made globally visible. The risk of potential 
 * name collisions is expected to be low.*/
osqFunc1 void osqFunc2 osHandleProtectionErrors(ProtectionReturnType proRet, StatusType Fatalerror)  /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osHandleProtectionErrors */
   COVER(0x00A4)
   /* osdDummyRead might intentionally assign a value to an unused variable on 
    * some platforms to avoid compiler warnings. This is no MISRA error. (3199) */
   osdDummyRead(proRet)   /* PRQA S 3199 */
   osSysShutdownOS(Fatalerror);
}
/* KB end osekHandleProtectionErrors */

   
/* KB begin osekHWosSysDisableISRSourceSrc (overwritten) */
/* KB end osekHWosSysDisableISRSourceSrc */



#ifndef osdEnableAllInterruptsNotUsed
/* KB begin osekEnableAllInterrupts (default) */
/*-+--------------------------------------------------------------------------
 / osEnableAllInterrupts
 / Function:    implementation of API function EnableAllInterrupts
 / Parameter:   void
 / Returnvalue: void
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: The function osEnableAllInterrupts is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, osEnableAllInterrupts might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */ 
osqFunc1 void osqFunc2 osEnableAllInterrupts(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{ 
   /* CovComment 4:  Function: osEnableAllInterrupts */
   OS_EA_ENTRY()
   COVER(0x00A5)
   osSysErrAssert(osOwnCcb->LockIsNotNeeded.ossIntAPIStatus==osdIntAPIDisableAll,osdErrEAIntAPIWrongSequence)
   OS_VTH_CALL_ENABLEDINT_HOOK(OS_VTHP_ALLINTERRUPTS)
   osSetIntAPIStatus(0);
   /* KB begin osekHWosRestoreEnableGlobalBody (overwritten) */
   if(ptrToCcb2->ossSavedIntDisFlag == 0)
   {
      COVER(0x00A6)
      /* MISRA RULE 12.4 not violated: Reading the EIIC register is sideeffect free. */ 
      if((osGetEIIC() != (osuint32) (32768 + osdSysCallEnableAllInterrupts))) /* PRQA S 3415 */
      {
         COVER(0x00A7)
         osEnableGlobal();
      }
      else
      {
         COVER(0x00A8)
         osEnableGlobalEIPSW();
      }
   }      
   ELSEWITHCOVER(0x00A9)
   /* KB end osekHWosRestoreEnableGlobalBody */
   OS_EA_EXIT()
}
/* KB end osekEnableAllInterrupts */
#endif


#ifndef osdDisableAllInterruptsNotUsed
/* KB begin osekDisableAllInterrupts (default) */
/*-+--------------------------------------------------------------------------
 / osDisableAllInterrupts
 / Function:    implementation of API function DisableAllInterrupts
 / Parameter:   void
 / Returnvalue: void
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: The function osDisableAllInterrupts is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, osDisableAllInterrupts might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */ 
osqFunc1 void osqFunc2 osDisableAllInterrupts(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osDisableAllInterrupts */
   OS_DA_ENTRY()
   COVER(0x00AA)
   osSysErrAssert(!osOwnCcb->LockIsNotNeeded.ossIntAPIStatus,osdErrDAIntAPIDisabled)
   /* KB begin osekHWosSaveDisableGlobalBody (overwritten) */
   /* MISRA RULE 12.4 not violated: Reading the EIIC register is sideeffect free. */ 
   if((osGetEIIC() != (osuint32) (32768 + osdSysCallDisableAllInterrupts))) /* PRQA S 3415 */
   {
      COVER(0x00AB)
      ptrToCcb2->ossSavedIntDisFlag = osGetDisableGlobal();
   }
   else
   {
      COVER(0x00AC)
      ptrToCcb2->ossSavedIntDisFlag = osGetDisableGlobalEIPSW();
   }
   /* KB end osekHWosSaveDisableGlobalBody */
   osSetIntAPIStatus(osdIntAPIDisableAll);
   OS_VTH_CALL_DISABLEDINT_HOOK(OS_VTHP_ALLINTERRUPTS)
   OS_DA_EXIT()
}
/* KB end osekDisableAllInterrupts */
#endif


#ifndef osdResumeOSInterruptsNotUsed
/* KB begin osekResumeOSInterrupts (default) */
/*-+--------------------------------------------------------------------------
 / osResumeOSInterrupts
 / Function:    implementation of API function ResumeOSInterrupts
 / Parameter:   void
 / Returnvalue: void
 /--------------------------------------------------------------------------*/
/* MISRA RULE 8.10 VIOLATION: See comment for 14.1 */
/* MISRA RULE 14.1 VIOLATION: The function osResumeOSInterrupts is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 void osqFunc2 osResumeOSInterrupts(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osResumeOSInterrupts */
   OS_RI_ENTRY()
   COVER(0x00AD)
   
   osDecIntAPIStatus();

#if osdCallTimingHooks
   if (osOwnCcb->LockIsNotNeeded.ossIntSaveDisableCounter == 1)
   {
      COVER(0x00AE)
      OS_VTH_CALL_ENABLEDINT_HOOK(OS_VTHP_CAT2INTERRUPTS)
   }
   ELSEWITHCOVER(0x00AF)
#endif

   /* KB begin osekHWosRestoreEnableLevelNestedBody (overwritten) */
   COVER(0x00B0)
   if (ptrToCcb2->ossIntSaveDisableCounter != 0)
   {
      COVER(0x00B1)
      ptrToCcb2->ossIntSaveDisableCounter--;   
      if (ptrToCcb2->ossIntSaveDisableCounter == 0)
      {
         COVER(0x00B2)
         osRestoreLevelNested();
      } 
      ELSEWITHCOVER(0x00B3)
   }
   else
   {
      COVER(0x00B4)
      osEnterSafeState(E_OS_SYS_ASSERTION, osdErrREWrongCounter);      
   }
   /* KB end osekHWosRestoreEnableLevelNestedBody */
   OS_RI_EXIT()
}
/* KB end osekResumeOSInterrupts */
#endif


#ifndef osdSuspendOSInterruptsNotUsed
/* KB begin osekSuspendOSInterrupts (default) */
/*-+--------------------------------------------------------------------------
 / osSuspendOSInterrupts
 / Function:    implementation of API function SuspendOSInterrupts
 / Parameter:   void
 / Returnvalue: void
 /--------------------------------------------------------------------------*/
/* MISRA RULE 8.10 VIOLATION: See comment for 14.1 */
/* MISRA RULE 14.1 VIOLATION: The function osSuspendOSInterrupts is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 void osqFunc2 osSuspendOSInterrupts(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osSuspendOSInterrupts */
   OS_SI_ENTRY()
   COVER(0x00B5)
   /* KB begin osekHWosSaveDisableLevelNestedBody (overwritten) */
   COVER(0x00B6)
   if (ptrToCcb2->ossIntSaveDisableCounter < 63U)
   {
      COVER(0x00B7)   
      if (ptrToCcb2->ossIntSaveDisableCounter == 0) 
      {
         COVER(0x00B8)      
         ptrToCcb2->ossSavedIntLevelNested = osGetDisableLevel();
      }  
      ELSEWITHCOVER(0x00B9)
      ptrToCcb2->ossIntSaveDisableCounter++;           
   }
   else
   {
      COVER(0x00BA)      
      osEnterSafeState(E_OS_SYS_ASSERTION, osdErrSDWrongCounter);
   }
   /* KB end osekHWosSaveDisableLevelNestedBody */
#if osdCallTimingHooks
   if (osOwnCcb->LockIsNotNeeded.ossIntSaveDisableCounter == 1)
   {
      COVER(0x00BB)
      OS_VTH_CALL_DISABLEDINT_HOOK(OS_VTHP_CAT2INTERRUPTS)
   }
   ELSEWITHCOVER(0x00BC)
#endif
   osIncIntAPIStatus();
   OS_SI_EXIT()
}
/* KB end osekSuspendOSInterrupts */
#endif


#ifndef osdResumeAllInterruptsNotUsed
/* KB begin osekResumeAllInterrupts (default) */
/*-+--------------------------------------------------------------------------
 / osResumeAllInterrupts
 / Function:    implementation of API function ResumeAllInterrupts
 / Parameter:   void
 / Returnvalue: void
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: The function osResumeAllInterrupts is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, osResumeAllInterrupts might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */ 
osqFunc1 void osqFunc2 osResumeAllInterrupts(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osResumeAllInterrupts */
   OS_RA_ENTRY()
   COVER(0x00BD)

   osDecIntAPIStatus();

#if osdCallTimingHooks
   if (1 ==
       /* KB begin osekHWosIntSaveDisableGlobalCounterName (default) */
       osOwnCcb->LockIsNotNeeded.ossIntSaveDisableCounterGlobal
       /* KB end osekHWosIntSaveDisableGlobalCounterName */
      )/* first nesting level */
   {
      COVER(0x00BE)
      OS_VTH_CALL_ENABLEDINT_HOOK(OS_VTHP_ALLINTERRUPTS)
   }
   ELSEWITHCOVER(0x00BF)
#endif
   /* KB begin osekHWosRestoreEnableGlobalNestedBody (overwritten) */
   if (ptrToCcb2->ossIntSaveDisableCounterGlobal != 0)
   {
      COVER(0x00C0)
      ptrToCcb2->ossIntSaveDisableCounterGlobal--;   
      if (ptrToCcb2->ossIntSaveDisableCounterGlobal == 0)
      {
         COVER(0x00C1)      
         if(ptrToCcb2->ossSavedIntDisFlagNested == 0)
         {
            /* MISRA RULE 12.4 not violated: Reading the EIIC register is sideeffect free. */
            if((osGetEIIC() != (osuint32) (32768 + osdSysCallResumeAllInterrupts))) /* PRQA S 3415 */
            {
               COVER(0x00C2)
               osEnableGlobal();
            }
            else
            {
               COVER(0x00C3)
               osEnableGlobalEIPSW();
            }
         }
         ELSEWITHCOVER(0x00C4)               
      } 
      ELSEWITHCOVER(0x00C5)                       
   }
   else
   {
      COVER(0x00C6)
      osEnterSafeState(E_OS_SYS_ASSERTION, osdErrRGWrongCounter);      
   }
   /* KB end osekHWosRestoreEnableGlobalNestedBody */

   OS_RA_EXIT()
}
/* KB end osekResumeAllInterrupts */
#endif


#ifndef osdSuspendAllInterruptsNotUsed
/* KB begin osekSuspendAllInterrupts (default) */
/*-+--------------------------------------------------------------------------
 / osSuspendAllInterrupts
 / Function:    implementation of API function SuspendAllInterrupts
 / Parameter:   void
 / Returnvalue: void
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: The function osSuspendAllInterrupts is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, osShutdownOS might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */ 
osqFunc1 void osqFunc2 osSuspendAllInterrupts(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osSuspendAllInterrupts */
   OS_PA_ENTRY()
   COVER(0x00C7)

   /* KB begin osekHWosSaveDisableGlobalNestedBody (overwritten) */
   if (ptrToCcb2->ossIntSaveDisableCounterGlobal < 63U)
   {
      COVER(0x00C8)   
      if (ptrToCcb2->ossIntSaveDisableCounterGlobal == 0) 
      {
         /* MISRA RULE 12.4 not violated: Reading the EIIC register is sideeffect free. */ 
         if((osGetEIIC() != (osuint32) (32768 + osdSysCallSuspendAllInterrupts))) /* PRQA S 3415 */
         {    
            COVER(0x00C9)
            ptrToCcb2->ossSavedIntDisFlagNested = osGetDisableGlobal();
         }
         else
         {
            COVER(0x00CA)
            ptrToCcb2->ossSavedIntDisFlagNested = osGetDisableGlobalEIPSW();
         }
      }  
      ELSEWITHCOVER(0x00CB)
      ptrToCcb2->ossIntSaveDisableCounterGlobal++;           
   }
   else
   {
      COVER(0x00CC)      
      osEnterSafeState(E_OS_SYS_ASSERTION, osdErrSGWrongCounter);
   }
   /* KB end osekHWosSaveDisableGlobalNestedBody */
#if osdCallTimingHooks
   if (1 ==
       /* KB begin osekHWosIntSaveDisableGlobalCounterName (default) */
       osOwnCcb->LockIsNotNeeded.ossIntSaveDisableCounterGlobal
       /* KB end osekHWosIntSaveDisableGlobalCounterName */
      )/* first nesting level */
   {
      COVER(0x00CD)
      OS_VTH_CALL_DISABLEDINT_HOOK(OS_VTHP_ALLINTERRUPTS)
   }
   ELSEWITHCOVER(0x00CE)
#endif
   osIncIntAPIStatus();
   OS_PA_EXIT()
}
/* KB end osekSuspendAllInterrupts */
#endif


/* KB begin osekHWinterHooks (default) */
/* Hook routines */

void osInterErrorHook(StatusType Error)
{
   /* CovComment 4:  Function: osInterErrorHook */
   COVER(0x00CF)
   

   COVER(0x00D0)
   osErrorHookWrapper(Error);

} /* END OF osInterErrorHook */

#if osdSysShutdownHook
static osqFunc1 void osqFunc2 osInterShutdownHook(StatusType Error)
{

   /* CovComment 4:  Function: osInterShutdownHook */
   
   osuint16 previousContext;
   
   previousContext = osOwnCcb->LockIsNotNeeded.ossCurrentContext;
   osOwnCcb->LockIsNotNeeded.ossCurrentContext = osdCtxShutdownHook;

   COVER(0x00D1)

   osShutdownHookWrapper(Error);

   osOwnCcb->LockIsNotNeeded.ossCurrentContext = previousContext;
} /* END OF osInterShutdownHook */
#endif /* osdSysShutdownHook */

#if osdPreTaskHook
/* MISRA RULE 8.10 VIOLATION: The function osInterPreTaskHook is general code for 
 * different platform specific OS implementations. Depending on the implementation,
 * the calling function may or may not be located in the same file.
 * Making the function static for only some implementations would
 * increase code complexity too much. */
osqFunc1 void osqFunc2 osInterPreTaskHook(void) /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osInterPreTaskHook */
   
   osuint16 previousContext;

   previousContext = osOwnCcb->LockIsNotNeeded.ossCurrentContext;
   osOwnCcb->LockIsNotNeeded.ossCurrentContext = osdCtxPreTaskHook;

   OS_PREHOOK_ENTRY()
   PreTaskHook();
   OS_PREHOOK_EXIT()

   osOwnCcb->LockIsNotNeeded.ossCurrentContext = previousContext;

   COVER(0x00D2)

} /* END OF osInterPreTaskHook */
#endif /* osdPreTaskHook */

#if osdPostTaskHook
/* MISRA RULE 8.10 VIOLATION: The function osInterPostTaskHook is general code for 
 * different platform specific OS implementations. Depending on the implementation,
 * the calling function may or may not be located in the same file.
 * Making the function static for only some implementations would
 * increase code complexity too much. */
osqFunc1 void osqFunc2 osInterPostTaskHook(void) /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osInterPostTaskHook */
   
   osuint16 previousContext;
   previousContext = osOwnCcb->LockIsNotNeeded.ossCurrentContext;
   osOwnCcb->LockIsNotNeeded.ossCurrentContext = osdCtxPostTaskHook;

   OS_POSTHOOK_ENTRY()
   PostTaskHook();
   OS_POSTHOOK_EXIT()

   osOwnCcb->LockIsNotNeeded.ossCurrentContext = previousContext;

   COVER(0x00D3)

} /* END OF osInterPostTaskHook */
#endif /* osdPostTaskHook */
/* KB end osekHWinterHooks */

/* KB begin osekHWIncrementCounter (default) */
#if (osdNumberOfSWCounters > 0)
/*-+--------------------------------------------------------------------------
 / IncrementCounter                                                           
 / ================                                                           
 /                                                                            
 / Syntax:                                                                    
 /    StatusType IncrementCounter(CounterType CounterID)                      
 / Parameter (In):                                                            
 /   CounterType CounterID                                                    
 / Parameter (Out):                                                           
 /   none                                                                     
 / Description:                                                               
 /   This service increments the counter <CounterID> by one. If any alarm time
  or schedule table expiry point is reached by this increment, the            
 /   configured action (e.g. task activation) is performed.                   
 / Return value (depends on OIL-Attribute STATUS):                            
 /    STANDARD:                                                               
 /       - No error, E_OK                                                     
 /    EXTENDED:                                                               
 /       - <CounterID> not valid, E_OS_ID                                     
 /       - The service has been called with interrupts disabled,               
 /         E_OS_DISABLEDINT                                                   
 / Scalability Classes:                                                       
 /    SC1, SC2, SC3, SC4                                                      
 /--------------------------------------------------------------------------*/
/* MISRA RULE 8.10 VIOLATION: osSysIncrementCounter is called from different modules in several configurations.
 * Declaring this function static for the other configurations would increase code complexity too much.
 */
osqFunc1 void osqFunc2 osSysIncrementCounter(CounterType CounterID) /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osSysIncrementCounter */
   COVER(0x00D4)

   if(osCounter[CounterID] == oskCounterInternalMaximumValue[CounterID])
   {
      COVER(0x00D5)
      /* internal overflow to zero */
      osCounter[CounterID] = 0;
   }
   else
   {
      COVER(0x00D6)
      osCounter[CounterID]++;
   }
   
   COVER(0x00D7)
#if (osdNumberOfAlarms + osdNumberOfScheduleTables > 0)
   osWorkHeap(&oskAlarmHeaps[CounterID], CounterID);
#endif
   
}

/* MISRA RULE 8.10 VIOLATION: IncrementCounter is part of the defined OS API. Depending on the OS configuration, it is
 * called only in this file.
 */
/* MISRA RULE 14.1 VIOLATION: The function osIncrementCounter is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osIncrementCounter(CounterType CounterID) /* PRQA S 1505 */ /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osIncrementCounter */
   OS_IC_ENTRY()
   COVER(0x00D8)
   /* check counter ID */
   if (CounterID >= osdNumberOfSWCounters)
   {
      COVER(0x00D9)
      osAPIError(E_OS_ID, osdErrICWrongCounterID);
      OS_IC_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x00DA)

#if (osdNumberOfSWCounters > 0)
   /* check call context */
   if ((osdValidCtx_IncrementCounter & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x00DB)
      osAPIError(E_OS_CALLEVEL, osdErrICCallContext);

      OS_IC_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x00DC)

   /* check access rights for this object */
   if (((oskApplCounterAccess[CounterID] & (1UL << osOwnCcb->LockIsNotNeeded.ossActiveApplicationID)) == 0))
   {
      COVER(0x00DD)
      osAPIError(E_OS_ACCESS, osdErrICNoAccess);
      OS_IC_EXIT()
      return E_OS_ACCESS;
   }
   ELSEWITHCOVER(0x00DE)
   


   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x00DF)
      osAPIError(E_OS_DISABLEDINT, osdErrICIntAPIDisabled);
      OS_IC_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x00E0)

   /* KB begin osekHWosSaveDisableLevelNested (overwritten) */
   osSaveDisableLevelNested();
   /* KB end osekHWosSaveDisableLevelNested */
   OS_IC_START_CRITICAL()


   osOwnCcb->LockIsNotNeeded.ossLockDispatcher++;
   
   osSysIncrementCounter(CounterID);

   osOwnCcb->LockIsNotNeeded.ossLockDispatcher--;
/* MISRA RULE 12.4 not violated: Reading the variable osOwnCcb->LockIsNotNeeded.ossLockDispatcher is sideeffect free.
 */
   IF2ANDCOVER((osOwnCcb->LockIsNotNeeded.ossLockDispatcher == 0) , (osOwnCcb->LockIsNeeded.ossStartDispatcher != osdFALSE),0x00FB,0x00FC,0x00FD)
   if (((osOwnCcb->LockIsNotNeeded.ossLockDispatcher == 0) && (osOwnCcb->LockIsNeeded.ossStartDispatcher != osdFALSE))) /* PRQA S 3415 */
   {
      COVER(0x00E1)
      OS_IC_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_IC_EXIT()
      OS_START_DISPATCH()
      /* KB begin osekHWosLocalDispatcher (overwritten) */
      ptrToCcb2->ossCallDispatcher = 1;
      /* KB end osekHWosLocalDispatcher */
   }
   else
   {
      COVER(0x00E2)
      OS_IC_END_CRITICAL()
      /* KB begin osekHWosRestoreEnableLevelNested (overwritten) */
      osRestoreEnableLevelNested();
      /* KB end osekHWosRestoreEnableLevelNested */
      OS_IC_EXIT()
   }
   COVER(0x00E3)
   return E_OK;
#endif /* (osdNumberOfSWCounters > 0) */
}
#endif /* (osdNumberOfSWCounters > 0) */
/* KB end osekHWIncrementCounter */

/* KB begin osekGetActiveApplicationModeSrc (default) */
/*-+--------------------------------------------------------------------------
 / GetActiveApplicationMode
 / ========================
 /
 / Syntax:          AppModeType osGetActiveApplicationMode ( void )
 / Parameter (In):  none
 / Parameter (Out): return value: Application mode in which the OS is currently
 /                  running
 / Description:     GetActiveApplicationMode returns the information about the
 /                  Application mode in which the OS is currently running.
 / Particularities: Allowed on task level, ISR level and in several hook 
 /                  routines.
 /                  This service is intended to be used by library functions 
 /                  and hook routines.
 /                  If a valid Application mode can't be evaluated (invalid call
 /                  context), the service returns OSINVALIDAPPMODE.
 / Context:         Task, Cat2-ISR, ErrorHook, Pre- and PostTaskHook, StartupHook,
 /                  ShutdownHook
 /--------------------------------------------------------------------------*/
/* MISRA RULE 14.1 VIOLATION: The function osGetTaskID is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, osGetActiveApplicationMode might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */ 
osqFunc1 AppModeType osqFunc2 osGetActiveApplicationMode(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osGetActiveApplicationMode */

   COVER(0x00E4)
   if((osdValidCtx_GetActiveApplicationMode & osOwnCcb->LockIsNotNeeded.ossCurrentContext) != 0)
   {
      COVER(0x00E5)
      return osActiveAppMode;
   }
   else
   {
      COVER(0x00E6)
      return OSINVALIDAPPMODE;
   }
} /* END OF osGetActiveApplicationMode */

/* KB end osekGetActiveApplicationModeSrc */

/* KB begin osekGetISRIDSrc (default) */
/*-+--------------------------------------------------------------------------
 / GetISRID
 / ========
 /
 / Syntax:          ISRType osGetISRID ( void )
 / Parameter (In):  none
 / Parameter (Out): return value: ID of the ISR which is currently running
 / Description:     GetISRID returns the information about the ISR ID of the 
 /                  ISR.
 / Particularities: Allowed on task level, ISR level and in several hook 
 /                  routines.
 /                  This service is intended to be used by library functions 
 /                  and hook routines.
 /                  If a valid ISR ID can't be evaluated (no ISR currently 
 /                  running), the service returns INVALID_ISR.
 / Context:         Task, Cat2-ISR, ErrorHook, ProtectionHook
 /--------------------------------------------------------------------------*/

/* MISRA RULE 14.1 VIOLATION: The function osGetTaskID is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
/* MISRA RULE 8.10 VIOLATION: On some platforms, osGetISRID might be only
 * referenced from an API dispatch table in this file. Declaring it static for
 * only those platforms would increase the code complexity to unacceptable level
 * (1505) */ 
osqFunc1 ISRType osqFunc2 osGetISRID(void)   /* PRQA S 1503 */ /* PRQA S 1505 */
{
   /* CovComment 4:  Function: osGetISRID */

   COVER(0x00E7)
   if((osdValidCtx_GetISRID & osOwnCcb->LockIsNotNeeded.ossCurrentContext) != 0)
   {
      COVER(0x00E8)
      return osOwnCcb->LockIsNotNeeded.ossActiveISRID;
   }
   else
   {
      COVER(0x00E9)
      return INVALID_ISR;
   }
} /* END OF osGetISRID */

/* KB end osekGetISRIDSrc */

/* MISRA RULE 14.1 VIOLATION: (3 times) These are dummy objects, which shall never be used. */
TASK(osSystemBasicTask)/* PRQA S 1503 */
{
}
TASK(osSystemExtendedTask)/* PRQA S 1503 */
{
}
ISR(osSystemCat2ISR)/* PRQA S 1503 */
{
}

/* MISRA RULE 16.7 VIOLATION: The pointer argument might be const, but
 * this prototype is required by the AUTOSAR specification.
 */
/* MISRA RULE 8.8 VIOLATION: This function is defined without prototype, because
 * we do not want to include usrostyp.h in osek.c, which would be necessary to
 * include trustfct.h, which defines the prototype.
 */
/* MISRA RULE 14.1 VIOLATION: These are dummy objects, which shall never be used. */
void TRUSTED_osSystemTrustedFunction(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams)  /* PRQA S 3673 *//* PRQA S 3408 *//* PRQA S 1503 */
{
   /* osdDummyRead might intentionally assign a value to an unused variable on 
    * some platforms to avoid compiler warnings. This is no MISRA error. (3199) */
   osdDummyRead(FunctionIndex)   /* PRQA S 3199 */
   /* osdDummyRead might intentionally assign a value to an unused variable on 
    * some platforms to avoid compiler warnings. This is no MISRA error. (3199) */
   osdDummyRead(FunctionParams)   /* PRQA S 3199 */
}



/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */

/* END OF MODULE osek.c */

/* SBSW_JUSTIFICATION_BEGIN
SBSW_JUSTIFICATION_END */
