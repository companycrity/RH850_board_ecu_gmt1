/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Fls_Irq.c                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2014 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the ISR implementations for FLS module.                 */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  01-Apr-2014  : Initial Version.
 *
 * V1.0.1:  13-Jun-2014  : As per CR 494 for mantis issues #20137 and #20875,
 *                         following changes are made:
 *                         1. "FLS_FLERR_ISR" API is removed and
 *                            "FLS_FLENDNM_ISR" API is updated for merging both
 *                            ISR's.
 *                         2. Implementation of disable the interrupt processing
 *                            is done by using macro "RH850_SV_MODE_IMR_OR" in
 *                            "FLS_FLENDNM_ISR".
 *                         3. The global variables 'Fls_GVar.Fls_MutexFlag',
 *                            'Fls_GstVar.GucDFStatus' and
 *                            'Fls_GstVar.GstfdlNewRequest.status_enu' are used
 *                            in 'FLS_FLENDNM_ISR' API.
 *                         4. As per C coding guidelines constant values are
 *                            put at the left side in 'if' conditions.
 * V1.0.2:  29-Sep-2014  : As per CR 608 for mantis issues #22552 following
 *                         changes are made:
 *                         1. 'Fls_GVar.Fls_GenJobResult' has been put before
 *                            calling the job end call back and call the job
 *                            error call back functions.
 *                         2. 'Fls_GVar.Fls_GenState' has been put before
 *                            calling the job end call back and call the job
 *                            error call back functions.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Fls_Internal.h"
#include "Fls_Irq.h"
/* Included for the macro declaration of supervisor mode(SV) write enabled
    Registers IMR */
#include "rh850_Types.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)

/* AUTOSAR release version information */
#define FLS_IRQ_C_AR_RELEASE_MAJOR_VERSION FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_IRQ_C_AR_RELEASE_MINOR_VERSION FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_IRQ_C_AR_RELEASE_REVISION_VERSION \
                                        FLS_AR_RELEASE_REVISION_VERSION_VALUE

#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)

/* AUTOSAR specification version information */
#define FLS_IRQ_C_AR_MAJOR_VERSION    FLS_AR_MAJOR_VERSION_VALUE
#define FLS_IRQ_C_AR_MINOR_VERSION    FLS_AR_MINOR_VERSION_VALUE
#define FLS_IRQ_C_AR_PATCH_VERSION    FLS_AR_PATCH_VERSION_VALUE

#endif /* end of #if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION) */

/* File version information */
#define FLS_IRQ_C_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_IRQ_C_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (FLS_AR_VERSION  == FLS_AR_HIGHER_VERSION)
/* Functionality related to R4.0 */

#if (FLS_IRQ_AR_RELEASE_MAJOR_VERSION != FLS_IRQ_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls_Irq.c : Mismatch in Release Major Version"
#endif

#if (FLS_IRQ_AR_RELEASE_MINOR_VERSION != FLS_IRQ_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls_Irq.c : Mismatch in Release Minor Version"
#endif

#if (FLS_IRQ_AR_RELEASE_REVISION_VERSION != \
                                          FLS_IRQ_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls_Irq.c : Mismatch in Release Revision Version"
#endif

#elif (FLS_AR_VERSION  == FLS_AR_LOWER_VERSION)
/* Functionality related to R3.2 */
#if (FLS_IRQ_AR_MAJOR_VERSION != FLS_IRQ_C_AR_MAJOR_VERSION)
  #error "Fls_Irq.c : Mismatch in Specification Major Version"
#endif

#if (FLS_IRQ_AR_MINOR_VERSION != FLS_IRQ_C_AR_MINOR_VERSION)
  #error "Fls_Irq.c : Mismatch in Specification Minor Version"
#endif

#if (FLS_IRQ_AR_PATCH_VERSION != FLS_IRQ_C_AR_PATCH_VERSION)
  #error "Fls_Irq.c : Mismatch in Specification Patch Version"
#endif
#endif

#if (FLS_IRQ_SW_MAJOR_VERSION != FLS_IRQ_C_SW_MAJOR_VERSION)
  #error "Fls_Irq.c : Mismatch in Software Major Version"
#endif

#if (FLS_IRQ_SW_MINOR_VERSION != FLS_IRQ_C_SW_MINOR_VERSION)
  #error "Fls_Irq.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

/*******************************************************************************
**                       MISRA C Rule Violations                              **
******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name     : FLS_FLENDNM_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for flash sequencer end
**                     interrupt.
**
** Reentrancy        : Reentrant
**
** Input Parameters  : None
**
** InOut Parameters  : None
**
** Output Parameters : None
**
** Return Value      : None
**
** Pre-condition     : NA
**
** Global Variable   : Fls_GVar.Fls_GenCommand, Fls_GVar.Fls_GenJobResult,
**                     Fls_GVar.Fls_GenState, Fls_GVar.Fls_MutexFlag,
**                     Fls_GstVar.GstfdlRequest.status_enu,
**                     Fls_GstVar.GstfdlNewRequest.status_enu
**
** Function invoked  : R_FDL_Handler, Fls_EndJobProcess,
**                     Fls_GpConfigPtr->pJobErrorNotificationPointer,
**                     Fls_GpConfigPtr->pJobEndNotificationPointer
**
** Registers Used    : None
*******************************************************************************/

#if (FLS_FLENDNM_ISR_API == STD_ON)
#define FLS_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2 interrupt mapping */
#if defined (Os_FLS_FLENDNM_CAT2_ISR) || defined (FLS_FLENDNM_CAT2_ISR)
ISR(FLS_FLENDNM_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, FLS_FAST_CODE) FLS_FLENDNM_ISR(void)
#endif
{
  switch (Fls_GVar.Fls_GenCommand)
  {
    case FLS_COMMAND_ERASE:
    case FLS_COMMAND_WRITE:
         /* Check whether ISR is locked the flag */
         if (FLS_ZERO == Fls_GVar.Fls_MutexFlag)
         {
           /* Set mutex flag by means the suspend operation is in progress */
           Fls_GVar.Fls_MutexFlag = FLS_ONE;
           R_FDL_Handler();
           if (R_FDL_SUSPENDED == Fls_GstVar.GstfdlRequest.status_enu)
           {
             /* Get the FDL status */
             Fls_GstVar.GucDFStatus = Fls_GstVar.GstfdlNewRequest.status_enu;
           }
           else
           {
             /* Get the FDL status */
             Fls_GstVar.GucDFStatus = Fls_GstVar.GstfdlRequest.status_enu;
           }
           if (R_FDL_BUSY != Fls_GstVar.GucDFStatus)
           {
             /* Set the driver state to idle */
             Fls_GVar.Fls_GenState = MEMIF_IDLE;
             if (R_FDL_OK == Fls_GstVar.GucDFStatus)
             {
               /* Set the job Result to OK */
               Fls_GVar.Fls_GenJobResult = MEMIF_JOB_OK;
               /* If job ended with success and call the job end call back
                * function.
                */
               Fls_GpConfigPtr->pJobEndNotificationPointer();
             }
             else
             {
               /* Set the job Result to Failed */
               Fls_GVar.Fls_GenJobResult = MEMIF_JOB_FAILED;
               /* If job ended with error and call the job error call back
                * function.
                */
               Fls_GpConfigPtr->pJobErrorNotificationPointer();
             }
             #if (FLS_INTERRUPT_MODE == STD_ON)
             /* Disable interrupt processing */
             RH850_SV_MODE_IMR_OR(16, (Fls_GpConfigPtr->pFlEndImrAddress),

                                  ((uint16)~(Fls_GpConfigPtr->usFlEndImrMask)));
             #endif
             /* Set the command to None */
             Fls_GVar.Fls_GenCommand = FLS_COMMAND_NONE;
           }
           else
           {
             /* No action required */
           }
           /* Reset mutex flag by means the suspend operation is completed */
           Fls_GVar.Fls_MutexFlag = FLS_ZERO;
         }
         else
         {
           /* No action required */
         }
    break;
    case FLS_COMMAND_READ:
    case FLS_COMMAND_COMPARE:
    case FLS_COMMAND_BLANKCHECK:
    case FLS_COMMAND_READ_IMM:
    default:
         /* No action required */
    break;
  }
}
#define FLS_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (FLS_FLENDNM_ISR_API == STD_ON) */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
