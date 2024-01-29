/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: atosappl.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.30
|
|  Description: API-functions for controlling applications
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2006-2015 Vector Informatik GmbH          All rights reserved.
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

/* CovComment 0:  file: atosappl.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */



/* TR:SASR40:0537 Start */ /* TR:SASR40:0547 Start */

/* KB begin osekGetApplicationIDSrc (overwritten) */
/* MISRA RULE 14.1 VIOLATION: osGetApplicationID is an API function which might be unused. */
osqFunc1 ApplicationType osqFunc2 osGetApplicationID(void) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetApplicationID */
   COVER(0x046F)
   return osOwnCcb->LockIsNotNeeded.ossActiveApplicationID;
}
/* KB end osekGetApplicationIDSrc */



/*-+--------------------------------------------------------------------------
 / CheckObjectOwnership
 / ====================
 /
 / Syntax: ApplicationType CheckObjectOwnership (ObjectTypeType ObjectType,
 /                                               ObjectIDType ObjectID)
 / Parameter (In): ObjectType: Type of the following parameter
 /                 ObjectID: The object to be examined
 / Parameter (Out): none
 / Return value: The service returns the OS-Application to which the object ObjectType 
 /               belongs. If the object does not exists the service returns 
 /               INVALID_OSAPPLICATION.
 / Description: 
 / OS273: If the specified object ObjectType exists, CheckObjectOwnership shall
 /        return the identifier of the OS-Application to which the object belongs.
 / OS274: If the specified object ObjectType does not exist, CheckObjectOwnership
 /        shall return INVALID_OSAPPLICATION.
 / Scalability Classes: SC3, SC4
 /--------------------------------------------------------------------------*/
/* fullfills [SR:162] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */

/*
 * MISRA RULE 14.1 VIOLATION: The function osCheckObjectOwnership is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 ApplicationType osqFunc2 osCheckObjectOwnership(ObjectTypeType ObjectType, /* PRQA S 1503 */
                                                         ObjectIDType ObjectID)
{
   /* CovComment 4:  Function: osCheckObjectOwnership */
   ApplicationType retval;

   OS_OO_ENTRY()   

   if ((osdValidCtx_CheckObjectOwnership & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0470)
      OS_OO_EXIT()
      return INVALID_OSAPPLICATION;
   }
   ELSEWITHCOVER(0x0471)
   
   switch (ObjectType)
   {
      case OBJECT_TASK:
         if (ObjectID < osdNumberOfAllTasks)
         {
            COVER(0x0472)
            retval = osConfigBlock.acTaskToAppl[ObjectID];
         }
         else
         {
            COVER(0x0473)
            retval = INVALID_OSAPPLICATION;
         } 
         break;
      case OBJECT_ISR:
         if (ObjectID < osdNumberOfCat2ISRs)
         {
            COVER(0x0474)
            retval = osConfigBlock.acIsrToAppl[ObjectID];
         }
         else
         {
            COVER(0x0475)
            retval = INVALID_OSAPPLICATION;
         }
         break;
      case OBJECT_ALARM:
         if (ObjectID < osdNumberOfAlarms)
         {
            COVER(0x0476)
            retval = oskAlarmToAppl[ObjectID];
         }
         else
         {
            COVER(0x0477)
            retval = INVALID_OSAPPLICATION;
         }
         break;
      case OBJECT_COUNTER:
         if (ObjectID < osdNumberOfCounters)
         {
            COVER(0x0478)
            retval = oskCounterToAppl[ObjectID];
         }
         else
         {
            COVER(0x0479)
            retval = INVALID_OSAPPLICATION;
         }
         break;
      case OBJECT_SCHEDULETABLE:
         if (ObjectID < osdNumberOfScheduleTables)
         {
            COVER(0x047A)
            retval = oskScheduleTableToAppl[ObjectID];
         }
         else
         {
            COVER(0x047B)
            retval = INVALID_OSAPPLICATION;
         }
         break;
      default:
         COVER(0x047C)
         retval = INVALID_OSAPPLICATION;
         break;
   }

   COVER(0x047D)
   OS_OO_EXIT()   

   return retval;
} /* END OF osCheckObjectOwnership */

/*-+--------------------------------------------------------------------------
 / CheckObjectAccess
 / =================
 /
 / Syntax: ObjectAccessType CheckObjectAccess (ApplicationType   ApplID,
 /                                             ObjectTypeType    ObjectType,
 /                                             ObjectIDType      ObjectId)
 / Parameter (In): ApplID      OS-Application identifier
 /                 ObjectType  Type of the following parameter
 /                 ObjectId    The object to be examined
 / Parameter (Out): none
 / Return value: ACCESS if the ApplID has access to the object, NO_ACCESS otherwise 
 / Description: 
 / OS271: If the OS-Application <ApplID> has access to the queried object, 
 /        CheckObjectAccess shall return ACCESS [SR:124].
 / OS272: If the OS-Application <ApplID> has no access to the queried object, 
 /        CheckObjectAccess shall return NO_ACCESS [SR:125].
 /--------------------------------------------------------------------------*/
/* fullfills [SR:162] of $\AutosarOS\general\Generation5\_doc\12_SystemRequirements\RequirementsSpec_MicrosarOS.doc */

/*
 * MISRA RULE 14.1 VIOLATION: The function osCheckObjectAccess is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 ObjectAccessType osqFunc2 osCheckObjectAccess(ApplicationType   ApplID, /* PRQA S 1503 */
                                                       ObjectTypeType    ObjectType,
                                                       ObjectIDType      ObjectId)
{
   /* CovComment 4:  Function: osCheckObjectAccess */
   OS_OA_ENTRY()

   if ((osdValidCtx_CheckObjectAccess & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x047E)
      OS_OA_EXIT()
      return NO_ACCESS;
   }
   ELSEWITHCOVER(0x047F)

   /* Is the application identifier (ApplID) valid? */
   IF2ANDCOVER( (ApplID < osdNumberOfApplications) , (ObjectType < osdNumberOfObjectTypes),0x0499,0x049A,0x049B)
   if((ApplID < osdNumberOfApplications) && (ObjectType < osdNumberOfObjectTypes)) /* ESOS00003677 */
   {
      COVER(0x0480)

      if(ObjectId < oskObjectCount[ObjectType])
      {
         if((oskApplObjectAccess[ObjectType][ObjectId] & (1UL << ApplID)) != 0)
         {
            COVER(0x0481)
            OS_OA_EXIT() 
            return ACCESS;
         }
         ELSEWITHCOVER(0x0482)
      }
      ELSEWITHCOVER(0x0483)

   } /* if(ApplID < osdNumberOfApplications) */

   COVER(0x0484)
   OS_OA_EXIT() 
   return NO_ACCESS;
} /* END OF CheckObjectAccess */




#ifndef osdCallTrustedFunctionNotUsed
/* KB begin osekCallTrustedFunction (overwritten) */
/*-+--------------------------------------------------------------------------
 / CallTrustedFunction
 / ====================
 /
 / Syntax: StatusType CallTrustedFunction (TrustedFunctionIndexType FunctionIndex,
 /                                         TrustedFunctionParameterRefType FunctionParams)
 / Parameter (In): FunctionIndex: Index of the function to be called. 
 /                 FunctionParams or NULL:
 /                 Pointer to the parameters for the function – specified by
 /                 the FunctionIndex - to be called. If no parameters are
 /                 provided, a NULL pointer has to be passed.
 / Parameter (Out): none
 / Return value: E_OK: No Error 
 /               E_OS_SERVICEID: No function defined for this index.
 / Description: 
 / OS265: If <FunctionIndex> is a defined function index, CallTrustedFunction shall
 /        switch the processor into privileged mode AND shall call the function
 /        <FunctionIndex> out of a list of implementation specific trusted functions AND
 /        shall return E_OK after completion.
 / OS312: The called trusted function must conform to the following C prototype:
 /        void TRUSTED_<name_of_the_trusted_service>(
 /        TrustedFunctionIndexType,TrustedFunctionParameterRefType);
 /        (The argument is the same as the argument of CallTrustedFunction).
 / OS266: When the function <FunctionIndex> is called, it shall get the same
 /        permissions (access rights) than the associated trusted OS-Application.
 / OS292: If the function index <FunctionIndex> is undefined, CallTrustedFunction
 /        shall return E_OS_SERVICEID.
 / Scalability Classes: SC3, SC4
 /--------------------------------------------------------------------------*/

/*
 * MISRA RULE 14.1 VIOLATION: The function osCallTrustedFunction is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osCallTrustedFunction(TrustedFunctionIndexType FunctionIndex, /* PRQA S 1503 */
                                                   TrustedFunctionParameterRefType FunctionParams)
{
   /* CovComment 4:  Function: osCallTrustedFunction */
   OS_CT_ENTRY()
   COVER(0x0485)


   /* check call context */
   if ((osdValidCtx_CallTrustedFunction & osOwnCcb->LockIsNotNeeded.ossCurrentContext) == 0)
   {
      COVER(0x0486)
      osAPIError(E_OS_CALLEVEL, osdErrCTCallContext);
      OS_CT_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x0487)

   #if (OS_CHECK_INTAPISTATUS==1)
   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0488)
      osAPIError(E_OS_DISABLEDINT, osdErrCTIntAPIDisabled);
      OS_CT_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0489)
   #endif


   if (FunctionIndex >= osdNumberOfTrustedFunctions)
   {
      COVER(0x048A)
      osAPIError(E_OS_SERVICEID, osdErrCTWrongFctIdx);
      OS_CT_EXIT()
      return E_OS_SERVICEID;
   }
   ELSEWITHCOVER(0x048B)


   (*(osConfigBlock.trustedFunctions[FunctionIndex].start))(FunctionIndex, FunctionParams);

   OS_CT_EXIT()
   return E_OK;
} /* END OF osCallTrustedFunction */

/* KB end osekCallTrustedFunction */
#endif
/* KB begin osekCallNonTrustedFunction (overwritten) */
#ifndef osdCallNonTrustedFunctionNotUsed
/*****************************************************************************
  osCallNonTrustedFunction
  Description: Reprograms MPU and call internal function osStartNonTrustedFunc
               which switches CPU in user mode and calls the non-trusted function
  Parameter: FunctionIndex = index of the non-trusted function to be started
             FunctionParams = pointer to parameter struct of non-trusted function  
  ReturnValue: result status 
*****************************************************************************/
/* MISRA RULE 14.1 VIOLATION: The function osCallNonTrustedFunction is an API function which might be unused */
osqFunc1 StatusType osqFunc2 osCallNonTrustedFunction(NonTrustedFunctionIndexType FunctionIndex, /* PRQA S 1503 */
                                                      NonTrustedFunctionParameterRefType FunctionParams)
{
   /* CovComment 4:  Function: osCallNonTrustedFunction */
   ApplicationType SavedApplicationID;
   OS_NT_ENTRY()
   COVER(0x048C)    

   if ((osdValidCtx_CallNonTrustedFunction & ptrToCcb2->ossCurrentContext) == 0)
   {
      COVER(0x048D)       
      osAPIError(E_OS_CALLEVEL, osdErrNTCallContext);
      OS_NT_EXIT()
      return E_OS_CALLEVEL;
   }
   ELSEWITHCOVER(0x048E)      

   #if (OS_CHECK_INTAPISTATUS==1)
   if (ptrToCcb2->ossIntAPIStatus != 0)
   {
      COVER(0x048F)
      osAPIError(E_OS_DISABLEDINT, osdErrNTIntAPIDisabled);
      OS_NT_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0490)      
   #endif

   if (FunctionIndex >= (NonTrustedFunctionIndexType)osConfigBlock.uiNumberOfNonTrustedFunctions)
   {
      COVER(0x0491)          
      osAPIError(E_OS_SERVICEID, osdErrNTWrongFctIdx);
      OS_NT_EXIT()      
      return E_OS_SERVICEID;
   }
   ELSEWITHCOVER(0x0492)      
   
   SavedApplicationID = ptrToCcb2->ossActiveApplicationID;
   ptrToCcb2->ossActiveApplicationID = osConfigBlock.nonTrustedFunctions[FunctionIndex].ownerApplication;
   osSetASID(osConfigBlock.applMpuASID[ptrToCcb2->ossActiveApplicationID]);
         osSetMpuConfig_c0((osuint32)&osConfigBlock.applMPUConfig[ptrToCcb2->ossActiveApplicationID]);

   osStartNonTrustedFunc(FunctionIndex, FunctionParams, (osuint32)osConfigBlock.nonTrustedFunctions[FunctionIndex].start);  

   ptrToCcb2->ossActiveApplicationID = SavedApplicationID;
   osSetASID(osConfigBlock.applMpuASID[ptrToCcb2->ossActiveApplicationID]);
         osSetMpuConfig_c0((osuint32)&osConfigBlock.applMPUConfig[ptrToCcb2->ossActiveApplicationID]);

   OS_NT_EXIT()
   return E_OK;
} /* END OF osCallNonTrustedFunction */
#endif
/* KB end osekCallNonTrustedFunction */


/*-+--------------------------------------------------------------------------
 / GetApplicationState
 / ===================
 /
 / Syntax: StatusType GetApplicationState (
 /                       ApplicationType Application,
 /                       ApplicationStateRefType  Value
 /                    )
 / Parameter (In):  Application   The OS-Application from which the state is requested
 / Parameter (Out): Value         The current state of the application
 / Return value:    E_OK          Success
 /                  E_OS_ID       Illegal parameter Application passed 
 / Description: 
 /                  If <Application> is not a valid application ID, this function returns E_OS_ID.
 /                  If the parameters are valid, this function writes the state of <Application> into Value and returns E_OK.
 / Scalability Classes: SC3, SC4
 /--------------------------------------------------------------------------*/
/* TR:SASR40:0499 Start */
/*
 * MISRA RULE 14.1 VIOLATION: The function osGetApplicationState is referenced
 * by the corresponding Psys-Wrapper, which is typically assembler code. MISRA
 * cannot see this.
 */
osqFunc1 StatusType osqFunc2 osGetApplicationState (ApplicationType Application, ApplicationStateRefType Value) /* PRQA S 1503 */
{
   /* CovComment 4:  Function: osGetApplicationState */
   OS_AS_ENTRY()
   COVER(0x0493)

   /* no call context check needed as there are no restrictions for this function */
   
   /* TR:SASR40:0495 Start */
   if (Application >= osdNumberOfApplications)
   {
      COVER(0x0494)
      osAPIError(E_OS_ID, osdErrASWrongAppID);
      OS_AS_EXIT()
      return E_OS_ID;
   }
   ELSEWITHCOVER(0x0495)
   /* TR:SASR40:0495 End */
   /* TR:SASR30:0093 Start */
   if (osOwnCcb->LockIsNotNeeded.ossIntAPIStatus != 0)
   {
      COVER(0x0496)
      osAPIError(E_OS_DISABLEDINT, osdErrASIntAPIDisabled);
      OS_AS_EXIT()
      return E_OS_DISABLEDINT;
   }
   ELSEWITHCOVER(0x0497)
   /* TR:SASR30:0093 End */

   COVER(0x0498)
   *Value = osApplicationState[Application];  /* TR:SASR40:0496 */
   OS_AS_EXIT()
   return E_OK;                               /* TR:SASR40:0496 */
} /* END OF osGetApplicationState */
/* TR:SASR40:0499 End */



/* TR:SASR40:0537 End */ /* TR:SASR40:0547 End */

/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */


/* END OF MODULE atosappl.c */

