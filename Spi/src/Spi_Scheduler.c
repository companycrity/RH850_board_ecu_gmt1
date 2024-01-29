/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Scheduler.c                                             */
/*============================================================================*/
/*                               COPYRIGHT                                    */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the implementation of queue for multiple transmit       */
/* requests.                                                                  */
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
 * V1.0.0:  29-Aug-2012  : Initial Version
 *
 * V1.0.1:  27-Nov-2012  : As per SCR 042, macro SPI_HWUNIT_ASYNCHRONOUS check
 *                         is added for APIs Spi_PushToQueue and
 *                         Spi_PopFromQueue.
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, API Spi_PopFromHWPriorityQueue is
 *                         added for Hardware priority functionality and
 *                         copyright information is updated.
 *
 * V1.1.1:  18-Mar-2013  : As per SCR 113 for Mantis issue 5420, the following
 *                         change is made
 *                         1. Spi_PopFromHWPriorityQueue() -
 *                            Transmission of the next jobs in the high
 *                            priority sequence is initiated.
 *                         2. When the transmission of all the sequences are
 *                            completed, Spi_GddDriverStatus is made as IDLE.
 *
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 API 'Spi_PopFromHWPriorityQueue' is removed
 *                         and API 'Spi_PopFromQueue' is updated.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.2.2:  05-Sep-2013  : As per CR 243 for the mantis issue #8421,
 *                         the following change is made:
 *                         1. Sequence end notification and Start sequence
 *                            notification functionality parts and
 *                            high priority functionality are updated in
 *                            Api Spi_PopFromQueue().
 *
 * V1.2.3:  23-Oct-2013  : As per CR 256 for the mantis issue #16631, the Api
 *                         Spi_PushToQueue() is updated for High Priority
 *                         functionality.
 *
 * V1.2.4:  15-Jan-2014  : As per CR 330 for mantis issue #12397, following
 *                         changes are made:
 *                         1. API Spi_PopFromQueue() is updated.
 *                         2. Copyright information is updated.
 *                         3. Updated as per C coding guideline.
 *
 * V1.2.5:  21-Mar-2014  : As per CR 424 for the mantis issue #19537, following
 *                         changes are made:
 *                         1. Function headers are updated for Global Variable
 *                            in the following APIs: Spi_PushToQueue and
 *                            Spi_PopFromQueue.
 *                         2. In API Spi_PopFromQueue critical section
 *                            protection is updated.
 *
 * V1.2.6:  28-Mar-2014  : As per CR 446 for the mantis issue #19104, file is
 *                         updated as per C coding guideline.
 *
 * V1.2.7:  02-Jun-2014  : As per CR 507, the variable 'Spi_GucAllQueueSts' is
 *                         renamed to 'Spi_GusAllQueueSts' as per C coding
 *                         guideline.
 *
 * V1.2.8:  17-Jul-2014  : As per CR 550, pre-compile check is added for API
 *                         Spi_PopFromQueue and Spi_PushToQueue.
 *
 * V1.2.9:  01-Aug-2014  : As per CR 581 for mantis #20712 and #22858,
 *                         file is updated after spell check.
 *
 * V1.2.10  09-Sep-2014  : As per CR 601, following changes are made:
 *                         1. MISRA C RULE VIOLATION section is updated.
 *                         2. MISRA rules violation messages are updated.
 *
 * V1.2.11: 05-Jan-2015   : Following changes are made:
 *                          1. As per mantis #25111 definition for
 *                            SPI_RAM_DATA_PROTECTION is added
 *                          2. MISRA warning message (4:3138) is added.
 *                          3. Copyright information is updated.
 *
 * V1.2.12:   10-Feb-2015 : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. File is updated for C coding guidelines.
 *
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi_Scheduler.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION*/

#define SPI_SCHEDULER_C_AR_RELEASE_MAJOR_VERSION \
                                              SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_SCHEDULER_C_AR_RELEASE_MINOR_VERSION \
                                              SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_SCHEDULER_C_AR_RELEASE_PATCH_VERSION \
                                           SPI_AR_RELEASE_REVISION_VERSION_VALUE

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/* SPI_AR_VERSION*/
/* AUTOSAR specification version information */
#define SPI_SCHEDULER_C_AR_MAJOR_VERSION    SPI_AR_MAJOR_VERSION_VALUE
#define SPI_SCHEDULER_C_AR_MINOR_VERSION    SPI_AR_MINOR_VERSION_VALUE
#define SPI_SCHEDULER_C_AR_PATCH_VERSION    SPI_AR_PATCH_VERSION_VALUE

#endif /*END of SPI_AR_VERSION */

/* File version information */
#define SPI_SCHEDULER_C_SW_MAJOR_VERSION    SPI_SW_MAJOR_VERSION_VALUE
#define SPI_SCHEDULER_C_SW_MINOR_VERSION    SPI_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION*/
#if (SPI_SCHEDULER_AR_RELEASE_MAJOR_VERSION != \
                                       SPI_SCHEDULER_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Major Version"
#endif

#if (SPI_SCHEDULER_AR_RELEASE_MINOR_VERSION != \
                                       SPI_SCHEDULER_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Minor Version"
#endif

#if (SPI_SCHEDULER_AR_RELEASE_REVISION_VERSION != \
                                       SPI_SCHEDULER_C_AR_RELEASE_PATCH_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Revision Version"
#endif

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_LOWER_VERSION  */
#if (SPI_SCHEDULER_AR_MAJOR_VERSION != \
                                         SPI_SCHEDULER_C_AR_MAJOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Major Version"
#endif

#if (SPI_SCHEDULER_AR_MINOR_VERSION != \
                                         SPI_SCHEDULER_C_AR_MINOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Minor Version"
#endif

#if (SPI_SCHEDULER_AR_PATCH_VERSION != \
                                      SPI_SCHEDULER_C_AR_PATCH_VERSION)
  #error "Spi_Version.c : Mismatch in Release Revision Version"
#endif
#endif /*END of SPI_AR_VERSION */

#if (SPI_SCHEDULER_SW_MAJOR_VERSION != SPI_SCHEDULER_C_SW_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Major Version"
#endif

#if (SPI_SCHEDULER_SW_MINOR_VERSION != SPI_SCHEDULER_C_SW_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4397) An expression which is the result of a ~ or <<    */
/*                 operation has not been cast to its essential type.         */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4397)-1 and                           */
/*                 END Msg(4:4397)-1 tags in the code.                        */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2982) An expression which is the result of a ~ or <<    */
/*                 operation has not been cast to its essential type.         */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2982)-2 and                           */
/*                 END Msg(4:2982)-2 tags in the code.                        */
/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0489) Increment or decrement operation performed on     */
/*               : pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0489)-3 and                           */
/*                 END Msg(4:0489)-3 tags in the code.                        */
/******************************************************************************/

/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-4 and                           */
/*                 END Msg(4:0488)-4 tags in the code.                        */
/******************************************************************************/

/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2962) Using value of uninitialized automatic object.    */
/* Rule          : MISRA-C:2004 Rule 9.1                                      */
/* Justification : The object is initialized under pre-compile section, and   */
/*                 the pre-compile macros are generated by generation tool    */
/*                 based on user configuration.                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2962)-5 and                           */
/*                 END Msg(4:2962)-5 tags in the code.                        */
/******************************************************************************/

/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0715)Nesting of control structures (statements)         */
/*                 exceeds 15 - program is non-conforming.                    */
/* Rule          : MISRA-C:2004 Rule 1.1                                      */
/* Justification : It is used to achieve better throughput instead of         */
/*                 invoking a function call.                                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0715)-6 and                           */
/*                 END Msg(4:0715)-6 tags in the code.                        */
/******************************************************************************/
/******************************************************************************/
/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3138) Null statement is located close to other code     */
/*                  or comments                                               */
/* Rule          : MISRA-C:2004 Rule 14.3                                     */
/* Justification : An additional semi-colon is added to the critical          */
/*                 section macro to avoid static analysis warning             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3138)-3 and                           */
/*                 END Msg(4:3138)-7 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name      : Spi_PushToQueue
**
** Service ID         : Not Applicable
**
** Description        : This function is to the job into the queue
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Sequence - Sequence ID
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstJob, Spi_GpFirstSeq,
**                      Spi_GpFirstJobList, Spi_GaaJobQueue, Spi_GblQueueStatus,
**                      Spi_GaaJobCount, Spi_GddQueueIndex, Spi_GaaJobResult
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION
**                      SPI_EXIT_CRITICAL_SECTION
** Registers Used     : None
******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_PushToQueue
                  (Spi_SequenceType Sequence, uint8 LucHWMemoryMode)
{
  /* Declare a local pointer to point to the Sequence Config Data */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  /* Declare a local pointer to point to the requested linked job list */
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpReqJobList;
  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  /* Declare a local pointer to point to the job list */
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  #endif

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpReqJobConfig;
  Spi_HWUnitType LddHWUnitNumber;
  Spi_HWUnitType LddHWUnit;
  #endif

  Spi_JobType LddReqJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddCntrForJobsReq;
  Spi_JobType LddCurrentQueueMax;
  Spi_JobType LddCounterMaxValue;
  Spi_JobType LddJobCount;
  Spi_JobType LddPreviousQueueIndex;
  Spi_JobType LddLowestQueueIndex;
  uint8 LucQueueIndex;

  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  Spi_JobType LddJobListIndex;
  Spi_JobType LddCntrForJobsOnGoing;
  Spi_JobType LddCounterTop;
  Spi_JobType LddJob;
  Spi_SequenceType LddSequence;
  uint8 LucReqJobPriority;
  #endif

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(4:0488)-4 */
  /* Get the number of jobs configured for the requested sequence */
  LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

  /*
   * Initialize a counter to zero to count number of jobs in requested
   * sequence 0
   */
  LddCntrForJobsReq = LddNoOfJobs;

  LddJobCount = LddNoOfJobs;

  /* Update the job result variable */
  LddReqJobListIndex = (LpSeqConfig->ddJobListIndex) + (LddNoOfJobs - SPI_ONE);

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* MISRA Violation: START Msg(4:2982)-2 */
  LpReqJobList = Spi_GpFirstJobList + LddReqJobListIndex;
  /* END Msg(4:2982)-2 */
  /* END Msg(4:0488)-4 */

  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Get the pointer of the last job linked to this sequence */
    LpReqJobConfig = Spi_GpFirstJob + (LpReqJobList->ddJobIndex);
    /* END Msg (4:0488)-4 */

    /* MISRA Violation: START Msg(4:2962)-5 */
    /* Get the HW Unit index of the any of the job in the sequence */
    LddHWUnit = LpReqJobConfig->ddHWUnitIndex;
    /* END Msg (4:2962)-5 */

    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
    #endif
    {
      /* For direct access mode lowest queue index is zero */
      LddLowestQueueIndex = SPI_ZERO;

      LucQueueIndex = LucHWMemoryMode;
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LddLowestQueueIndex =
            Spi_GpConfigPtr->aaHighprioirtyJobQueueIndex[LddHWUnitNumber];

      LucQueueIndex = (uint8)LddHWUnitNumber + SPI_MAX_CSIH_HW_INDEX + SPI_TWO;
    }
    #endif
  }
  else
  {
    LddLowestQueueIndex = Spi_GpConfigPtr->ddDirectAccessQueueSize;

    LucQueueIndex = LucHWMemoryMode;
  }

  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    LddCounterTop = Spi_GddQueueIndex[LucQueueIndex];
    do
    {
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the index of the job in the requested sequence */
      LddJob = (Spi_GpFirstJobList + LddReqJobListIndex)->ddJobIndex;
      /* END Msg(4:0488)-4 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the priority of the job in the requested sequence */
      LucReqJobPriority = (Spi_GpFirstJob + LddJob)->ucJobPriority;
      /* END Msg(4:0488)-4 */
      /*
       * Initialize a counter to zero to count number of queue elements
       * available
       */
      LddCntrForJobsOnGoing = LddCounterTop;
      if (SPI_ZERO < LddCntrForJobsOnGoing)
      {
        do
        {
          /*
           * Get the sequence index of the next job in the queue.
           * Job in the queue now is on-going
           */
          LddJobListIndex = Spi_GaaJobQueue[LddCntrForJobsOnGoing];
          /* MISRA Violation: START Msg(4:0488)-4 */
          LpJobList = Spi_GpFirstJobList + LddJobListIndex;
          /* END Msg(4:0488)-4 */

          /* Get the sequence id that the job belongs to */
          LddSequence = LpJobList->ddSequenceIndex;

          /* Check if the sequence of the next job is interruptible */
          /* TRACE [R3, SPI127][R4, SPI127] */
          /* TRACE [R4, SPI269] */
          /* MISRA Violation: START Msg(4:0488)-4 */
          if ((SPI_TRUE ==
               ((Spi_GpFirstSeq + LddSequence)->blInterruptibleSequence)) ||
                                        (SPI_TRUE == (LpJobList->blIsLastJob)))
          /* END Msg(4:0488)-4 */
          {
            LddJobListIndex = Spi_GaaJobQueue[LddCntrForJobsOnGoing - SPI_ONE];
            /* MISRA Violation: START Msg(4:0488)-4 */
            LpJobList = Spi_GpFirstJobList + LddJobListIndex;
            /* END Msg(4:0488)-4 */

            /* Get the index of next job in the queue */
            LddJob = LpJobList->ddJobIndex;
            if (LddJobListIndex != LddReqJobListIndex)
            {
              /*
               * Compare the priority of the next job in the queue and job
               * in the requested sequence
               */

              /* MISRA Violation: START Msg(4:0488)-4 */
              if (((Spi_GpFirstJob + LddJob)->ucJobPriority) <
                                                        LucReqJobPriority)
                /* END Msg(4:0488)-4 */
              {
                /* Check if critical section protection is required */
                #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
                /* MISRA Violation: START Msg(4:3138)-7 */
                /* Disable relevant interrupts to protect critical section */
                SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
                /* END Msg(4:3138)-7 */
                #endif

                /*
                 * Check if the queue becomes empty by the time queue is to be
                 * loaded
                 */
                if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex])
                {
                  LddReqJobListIndex = LddReqJobListIndex - LddJobCount;
                  /* MISRA Violation: START Msg(4:0488)-4 */
                  LpReqJobList = Spi_GpFirstJobList + LddReqJobListIndex;
                  /* END Msg (4:0488)-4 */
                  LddCntrForJobsReq = LddJobCount;
                  /* MISRA Violation: START Msg(4:0715)-6 */
                  do
                  /* END Msg(4:0715)-6 */
                  {
                    /* Push the job list index into the queue */
                    Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] =
                                                            LddReqJobListIndex;
                    #if(SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
                    /*Set the job status as SPI_JOB_QUEUED*/
                    Spi_GaaJobResult[LpReqJobList->ddJobIndex] = SPI_JOB_QUEUED;
                    #endif

                    /* Push the job count into RAM */
                    Spi_GaaJobCount[LpReqJobList->ddJobIndex] =
                                   LpReqJobList->ucJobCount;
                    /* Increment the job list index */
                    LddReqJobListIndex++;
                    /* MISRA Violation: START Msg(4:0489)-3 */
                    LpReqJobList++;
                    /* END Msg(4:0489)-3 */
                    /* Increment the queue index */
                    Spi_GddQueueIndex[LucQueueIndex]++;
                    /* Decrement the number of jobs */
                    LddCntrForJobsReq--;
                  }while (SPI_ZERO < LddCntrForJobsReq);
                  /* Update the current queue index */
                  Spi_GddQueueIndex[LucQueueIndex]--;
                  LddJobCount = SPI_ZERO;
                  /* To break the loop */
                  LddCntrForJobsOnGoing = SPI_ONE;
                  LddCntrForJobsReq = SPI_ONE;
                } /*
                   * End of if (Spi_GblQueueStatus[LucQueueIndex]
                   * == SPI_QUEUE_EMPTY)
                   */
                else
                {
                  /* MISRA Violation: START Msg(4:0715)-6 */
                  /* Check if the requested sequence is interruptible */
                  if (SPI_TRUE == (LpSeqConfig->blInterruptibleSequence))
                  /* END Msg(4:0715)-6 */
                  {
                    /* Increment the max index of the queue */
                    Spi_GddQueueIndex[LucQueueIndex]++;
                    /*
                     * Place the job at this position by shifting the
                     * job already in the queue by one position
                     */
                    LddCounterTop = Spi_GddQueueIndex[LucQueueIndex];
                    do
                    {
                      Spi_GaaJobQueue[LddCounterTop] =
                                    Spi_GaaJobQueue[LddCounterTop - SPI_ONE];
                      LddCounterTop--;
                    }while (LddCounterTop > LddCntrForJobsOnGoing);

                    Spi_GaaJobQueue[LddCounterTop] = LddReqJobListIndex;
                    Spi_GaaJobCount[LpReqJobList->ddJobIndex] =
                                   LpReqJobList->ucJobCount;
                    LddJobCount--;
                    /* To break the loop */
                    LddCntrForJobsOnGoing = LddLowestQueueIndex;
                  } /* End of check if the queue is full */
                  else
                  {
                    /* TRACE [R3, SPI124][R4, SPI124] */
                    LddPreviousQueueIndex = Spi_GddQueueIndex[LucQueueIndex];
                    LddCurrentQueueMax = LddPreviousQueueIndex + LddNoOfJobs;
                    /*
                     * Sequence is non-interruptible. Hence place the
                     * jobs of the sequence continuously in the queue
                     */
                    LddCounterMaxValue = (Spi_GddQueueIndex[LucQueueIndex] -
                               LddCntrForJobsOnGoing) + SPI_ONE;
                    do
                    {
                      Spi_GaaJobQueue[LddCurrentQueueMax] =
                                         Spi_GaaJobQueue[LddPreviousQueueIndex];
                      LddCurrentQueueMax--;
                      LddPreviousQueueIndex--;
                      LddCounterMaxValue--;
                    }while (SPI_ZERO < LddCounterMaxValue);

                    LddCounterMaxValue = SPI_ZERO;
                    LddReqJobListIndex = LpSeqConfig->ddJobListIndex;
                    /* MISRA Violation: START Msg(4:0488)-4 */
                    LpReqJobList = Spi_GpFirstJobList + LddReqJobListIndex;
                    /* END Msg(4:0488)-4 */
                    do
                    {
                      Spi_GaaJobQueue[LddCntrForJobsOnGoing] =
                                                            LddReqJobListIndex;
                      Spi_GaaJobCount[LpReqJobList->ddJobIndex] =
                                                       LpReqJobList->ucJobCount;
                      LddReqJobListIndex++;
                      /* MISRA Violation: START Msg(4:0489)-3 */
                      LpReqJobList++;
                      /* END Msg(4:0489)-3 */
                      LddCntrForJobsOnGoing++;
                      LddCounterMaxValue++;
                    }while (LddCounterMaxValue < LddNoOfJobs);

                    Spi_GddQueueIndex[LucQueueIndex] =
                                Spi_GddQueueIndex[LucQueueIndex] + LddNoOfJobs;
                    LddJobCount = SPI_ZERO;
                    /* To break the loop */
                    LddCntrForJobsOnGoing = LddLowestQueueIndex;
                    LddCntrForJobsReq = SPI_ONE;
                  } /* End of if the requested sequence is interruptible */
                } /* End of the check if the queue to be empty */

                /* Check if critical section protection is required */
                #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
                /* MISRA Violation: START Msg(4:3138)-7 */
                /* Enable relevant interrupts */
                SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
                /* END Msg(4:3138)-7 */
                #endif
              } /*
                 * End of if (((Spi_GpFirstJob + LddJob)->ucJobPriority)
                 * < LucReqJobPriority)
                 */
              else
              {
                /* No action required */
              }
            } /* if (LddJobListIndex != LddReqJobListIndex) */
            else
            {
              LddJobCount--;
              LddCntrForJobsOnGoing = LddLowestQueueIndex;
            }
          } /*
             * End of if ((((Spi_GpFirstSeq + LddSequence)->
             * blInterruptibleSequence) == SPI_TRUE) ||
             * ((LpJobList->blIsLastJob) == SPI_TRUE))
             */
          else
          {
            /* No action required */
          }

          if (SPI_ZERO < LddCntrForJobsOnGoing)
          {
            LddCntrForJobsOnGoing--;
          }
          else
          {
            /* No action required */
          }
        }while (LddCntrForJobsOnGoing > LddLowestQueueIndex);
      }
      else
      {
        /* No Action Required */
      }

      LddCntrForJobsReq--;
      LddReqJobListIndex--;
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpReqJobList--;
      /* END Msg(4:0489)-3 */
    }while (SPI_ZERO < LddCntrForJobsReq);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* No action required */
  }
  #endif

  /* Check if the remaining job is greater than zero */
  if (SPI_ZERO < LddJobCount)
  #endif /* #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON) */
  {
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-7 */
    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-7 */
    #endif

    /*
     * Check if the queue becomes empty by the time queue is to be
     * loaded
     */
    if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex])
    {
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      LddReqJobListIndex = (LddReqJobListIndex - LddJobCount) + SPI_ONE;
      #else
      LddReqJobListIndex = LddReqJobListIndex - LddJobCount;
      #endif
      /* MISRA Violation: START Msg(4:0488)-4 */
      LpReqJobList = Spi_GpFirstJobList + LddReqJobListIndex;
      /* END Msg(4:0488)-4 */
      LddCntrForJobsReq = LddJobCount;
      do
      {
        /* Push the job list index into the queue */
        Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] =
                                                     LddReqJobListIndex;
        #if(SPI_AR_VERSION == SPI_AR_HIGHER_VERSION)
        /*Set the job status as SPI_JOB_QUEUED*/
        Spi_GaaJobResult[LpReqJobList->ddJobIndex] = SPI_JOB_QUEUED;
        #endif
        Spi_GaaJobCount[LpReqJobList->ddJobIndex] = LpReqJobList->ucJobCount;
        /* Increment the job list index */
        LddReqJobListIndex++;

        /* MISRA Violation: START Msg(4:0489)-3 */
        LpReqJobList++;
        /* END Msg(4:0489)-3 */
        /* Increment the queue index */
        Spi_GddQueueIndex[LucQueueIndex]++;
        /* Decrement the number of jobs */
        LddCntrForJobsReq--;
      }while (SPI_ZERO < LddCntrForJobsReq);
      Spi_GddQueueIndex[LucQueueIndex]--;
    } /* End of if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex]) */
    else
    {
      LddPreviousQueueIndex = Spi_GddQueueIndex[LucQueueIndex];
      LddCurrentQueueMax = LddPreviousQueueIndex + LddJobCount;
      /* Shift the existing jobs in the queue */
      LddCounterMaxValue = Spi_GddQueueIndex[LucQueueIndex] + SPI_ONE;
      do
      {
        Spi_GaaJobQueue[LddCurrentQueueMax] =
                               Spi_GaaJobQueue[LddPreviousQueueIndex];
        LddCurrentQueueMax--;
        LddPreviousQueueIndex--;
        LddCounterMaxValue--;
      }while (SPI_ZERO < LddCounterMaxValue);

      /* Place the remaining jobs at the bottom of the queue */
      LddCounterMaxValue = LddLowestQueueIndex;
      LddJobCount = LddJobCount + LddLowestQueueIndex;

      LddReqJobListIndex = LpSeqConfig->ddJobListIndex;
      /* MISRA Violation: START Msg(4:0488)-4 */
      LpReqJobList = Spi_GpFirstJobList + LddReqJobListIndex;
      /* END Msg (4:0488)-4 */
      do
      {
        Spi_GaaJobQueue[LddCounterMaxValue] = LddReqJobListIndex;
        Spi_GaaJobCount[LpReqJobList->ddJobIndex] = LpReqJobList->ucJobCount;
        LddReqJobListIndex++;
        LddCntrForJobsReq++;

        /* MISRA Violation: START Msg(4:0489)-3 */
        LpReqJobList++;
        /* END Msg(4:0489)-3 */

        LddCounterMaxValue++;
      }while (LddCounterMaxValue < LddJobCount);
      /* Align the Index for available H/W Units */
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      Spi_GddQueueIndex[LucQueueIndex] = Spi_GddQueueIndex[LucQueueIndex] +
                    (LddJobCount - (Spi_GpConfigPtr->ddDirectAccessQueueSize));
      #else
      Spi_GddQueueIndex[LucQueueIndex] = Spi_GddQueueIndex[LucQueueIndex] +
                                                                   LddJobCount;
      #endif
    } /* End of !if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus[LucQueueIndex]) */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-7 */
    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-7 */
    #endif
  } /* End of if (LddJobCount > SPI_ZERO) */
  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) \
        *                                || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_PopFromQueue
**
** Service ID         : Not Applicable
**
** Description        : This function is to pop the next job to be transmitted
**                      from the queue
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GaaJobCount, Spi_GpFirstSeq, Spi_GddQueueIndex,
**                      Spi_GaaSeqResult, Spi_GblQueueStatus,
**                      Spi_GusAllQueueSts, Spi_GpConfigPtr, Spi_GaaSeqCancel,
**                      Spi_GstSeqProcess, Spi_GaaJobQueue, Spi_GpFirstJobList
**
** Function Invoked  :  Spi_InitiateJobTx, SPI_ENTER_CRITICAL_SECTION
**                      SPI_EXIT_CRITICAL_SECTION
** Registers Used    :  None
*******************************************************************************/
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_PopFromQueue
                            (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;

  /* Declare a local pointer to status bytes ROM value for the sequence */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  /* Declare a local pointer to point to the start byte of RAM area */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  Spi_JobType LddJobIndex;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddReqJobListIndex;
  Spi_SequenceType LddSeqIndex;
  Spi_JobType LddLowestQueueIndex;
  uint8 LucQueueIndex;
  uint8 LucVar;

  #if (SPI_CANCEL_API == STD_ON)
  uint8 LucStatusOffset;
  uint8 LucStatusMask;
  #endif

  boolean LblFlag;
  LblFlag = SPI_FALSE;

  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      /* For direct access mode lowest queue index is zero */
      LddLowestQueueIndex = SPI_ZERO;

      LucQueueIndex = LucHWMemoryMode;
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LddLowestQueueIndex =
            Spi_GpConfigPtr->aaHighprioirtyJobQueueIndex[LddHWUnitNumber];

      LucQueueIndex = (uint8)LddHWUnitNumber + SPI_MAX_CSIH_HW_INDEX + SPI_TWO;
    }
    #endif
  }
  else
  {
    /* For FIFO mode lowest queue index is size of direct access queue */
    LddLowestQueueIndex = Spi_GpConfigPtr->ddDirectAccessQueueSize;

    LucQueueIndex = LucHWMemoryMode;
  }

  LddReqJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];

  /* MISRA Violation: START Msg(4:0488)-4 */
  LpJobList = Spi_GpFirstJobList + LddReqJobListIndex;
  /* END Msg(4:0488)-4 */

  /* Get the index of the job and sequence */
  LddJobIndex = LpJobList->ddJobIndex;

  LddSeqIndex = LpJobList->ddSequenceIndex;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the post-build sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg(4:0488)-4 */

  /* Check if it is the last job (Sequence is transmitted) */
  if (SPI_FALSE == LpJobList->blIsLastJob)
  {
    #if (SPI_CANCEL_API == STD_ON)
    /* Get the cancel byte offset for the requested sequence  */
    LucStatusOffset = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;
    /* Get the cancel byte mask */
    LucStatusMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;
    /* Get the cancel status for this sequence */
    LucStatusMask = LucStatusMask & Spi_GaaSeqCancel[LucStatusOffset];

    /* Check if the sequence is cancelled */
    if (SPI_ZERO == LucStatusMask)
    {
      #endif
      /* Check if the repeated job count is zero */
      if (SPI_ZERO != Spi_GaaJobCount[LddJobIndex])
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif

        Spi_GaaJobCount[LddJobIndex]--;

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif
        /* Transmit the same job again */
        Spi_InitiateJobTx(LddReqJobListIndex);
        LblFlag = SPI_TRUE;
      }
      else
      {
        /* No action required */
      }

    #if (SPI_CANCEL_API == STD_ON)
    } /* End of if (SPI_ZERO == LucStatusMask) */
    else
    {
      /* Sequence is cancelled. Update sequence result as CANCELLED */
      Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_CANCELLED;
      #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                               (SPI_LEVEL_DELIVERED == SPI_TWO))
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to status bytes ROM value for the sequence */
      LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                  (LpSeqConfig->usStsValueStartByteIdx);
      /* END Msg(4:0488)-4 */
      /* Get the number of status byte ROM value */
      LucVar = LpSeqConfig->ucNoOfStsByteValue;
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the start byte of RAM area */
      LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                  (LpSeqConfig->usStsUpdateStartByteIdx);
      /* END Msg(4:0488)-4 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-7 */
      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-7 */
      #endif

      while (SPI_ZERO < LucVar)
      {
        /* MISRA Violation: START Msg(4:4397)-1 */
        /*
         * Reset the status bit of the requested sequence and the sequences
         * that have jobs shared with the requested sequence
         */
        *LpStsByte = *LpStsByte & (~(*LpStsByteValue));
        /* END Msg(4:4397)-1 */
        /* MISRA Violation: START Msg(4:0489)-3 */
        LpStsByte++;
        /* END Msg(4:0489)-3 */
        /* MISRA Violation: START Msg(4:0489)-3 */
        LpStsByteValue++;
        /* END Msg(4:0489)-3 */
        LucVar--;
      } /* End of while (LucVar > SPI_ZERO) */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-7 */
      /* Enable relevant interrupts to protect this critical section */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-7 */
      #endif
      #endif
      #if(SPI_LEVEL_DELIVERED != SPI_ZERO)
      /* TRACE [R3, SPI073][R4, SPI073] */
      /* MISRA Violation: START Msg(4:3355) */
      /* MISRA Violation: START Msg(4:3358) */
      /* Check if the notification function is configured */
      if (NULL_PTR != LpSeqConfig->pSpiSeqEndNotification)
      {
        /* END Msg(4:3358) */
        /* END Msg(4:3355) */
        /* Invoke the notification function */
        LpSeqConfig->pSpiSeqEndNotification();
      }
      else
      {
        /* No action required */
      }
          #endif
    } /* End of !if (SPI_ZERO == LucStatusMask) */
    #endif
  } /* End of if (SPI_FALSE == LpJobList->blIsLastJob) */
  else
  {
    if (SPI_SEQ_FAILED != Spi_GaaSeqResult[LddSeqIndex])
    {
      /* TRACE [R4, SPI352] */
      /* Sequence is completed. Update sequence result as OK */
      Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_OK;
    }
    else
    {
      /* No action required */
    }

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    /* MISRA Violation: START Msg(4:2962)-5 */
    if ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber]) &&
        (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex))
    /* END Msg (4:2962)-5 */
    {
      Spi_GaaHighPriorityCommActive[LddHWUnitNumber] = SPI_FALSE;
      Spi_GaaHighPrioritySequence[LddHWUnitNumber] = SPI_NO_SEQ;

      if (SPI_QUEUE_EMPTY == Spi_GblQueueStatus
                          [LddHWUnitNumber + SPI_MAX_CSIH_HW_INDEX + SPI_TWO])
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif

        /* Changing the hardware status after completing the sequence
           transmission  */
        Spi_GucHwUnitStatus =
                (Spi_GucHwUnitStatus ^ ((uint8)(LpSeqConfig->usHWListIndex)));

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* No action required */
    }
    #endif

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Get the pointer to status bytes ROM value for the sequence */
    LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                    (LpSeqConfig->usStsValueStartByteIdx);
    /* END Msg(4:0488)-4 */
    /* Get the number of status byte ROM value */
    LucVar = LpSeqConfig->ucNoOfStsByteValue;
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Get the pointer to the start byte of RAM area */
    LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                    (LpSeqConfig->usStsUpdateStartByteIdx);
    /* END Msg(4:0488)-4 */

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-7 */
    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-7 */
    #endif

    while (SPI_ZERO < LucVar)
    {
      /* MISRA Violation: START Msg(4:4397)-1 */
      /*
       * Reset the status bit of the requested sequence and the sequences
       * that have jobs shared with the requested sequence
       */
      *LpStsByte = *LpStsByte & (~(*LpStsByteValue));
      /* END Msg(4:4397)-1 */
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpStsByte++;
      /* END Msg(4:0489)-3 */
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpStsByteValue++;
      /* END Msg(4:0489)-3 */
      LucVar--;
    } /* End of while (LucVar > SPI_ZERO) */

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* MISRA Violation: START Msg(4:3138)-7 */
    /* Enable relevant interrupts to protect this critical section */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    /* END Msg(4:3138)-7 */
    #endif

    #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
    /* TRACE [R3, SPI073][R4, SPI073] */
    /* MISRA Violation: START Msg(4:3355) */
    /* MISRA Violation: START Msg(4:3358) */
    /* Check if the notification function is configured */
    if (NULL_PTR != LpSeqConfig->pSpiSeqEndNotification)
    {
      /* END Msg(4:3358) */
      /* END Msg(4:3355) */
      /* Invoke the notification function */
      LpSeqConfig->pSpiSeqEndNotification();
    }
    else
    {
      /* No action required */
    }
    #endif

  } /* End of !if (SPI_FALSE == LpJobList->blIsLastJob) */

  if (SPI_FALSE == LblFlag)
  {
    if (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex)
    {
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-7 */
      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-7 */
      #endif

      Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_EMPTY;
      /* MISRA Violation: START Msg(4:4397)-1 */
      Spi_GusAllQueueSts = Spi_GusAllQueueSts & (~(SPI_ONE << LucQueueIndex));
      /* END Msg(4:4397)-1 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* MISRA Violation: START Msg(4:3138)-7 */
      /* Enable relevant interrupts to protect this critical section */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      /* END Msg(4:3138)-7 */
      #endif

      if (SPI_ZERO == Spi_GusAllQueueSts)
      {
        /* Update driver status as idle */
        Spi_GddDriverStatus = SPI_IDLE;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      do
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif

        Spi_GddQueueIndex[LucQueueIndex]--;

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif

        LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];
        /* MISRA Violation: START Msg(4:0488)-4 */
        LpJobList = Spi_GpFirstJobList + LddJobListIndex;
        /* END Msg (4:0488)-4 */
        LddSeqIndex = LpJobList->ddSequenceIndex;

        #if (SPI_CANCEL_API == STD_ON)
        if (SPI_SEQ_CANCELLED != Spi_GaaSeqResult[LddSeqIndex])
        {
          /* Get the cancel byte offset for the requested sequence  */
          LucStatusOffset = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;
          /* Get the cancel byte mask */
          LucStatusMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;
          /* Get the cancel status for this sequence */
          LucStatusMask = LucStatusMask & Spi_GaaSeqCancel[LucStatusOffset];
          if (SPI_ZERO != LucStatusMask)
          {
            Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_CANCELLED;
            #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                               (SPI_LEVEL_DELIVERED == SPI_TWO))
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Get the pointer to status bytes ROM value for the sequence */
            LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                         (LpSeqConfig->usStsValueStartByteIdx);
            /* END Msg(4:0488)-4 */
            /* Get the number of status byte ROM value */
            LucVar = LpSeqConfig->ucNoOfStsByteValue;
            /* MISRA Violation: START Msg(4:0488)-4 */
            /* Get the pointer to the start byte of RAM area */
            LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                        (LpSeqConfig->usStsUpdateStartByteIdx);
            /* END Msg(4:0488)-4 */


            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-7 */
            /* Disable relevant interrupts to protect this critical section */
            SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-7 */
            #endif

            while (SPI_ZERO < LucVar)
            {
              /* MISRA Violation: START Msg(4:4397)-1 */
              /*
               * Reset the status bit of the requested sequence and the
               * sequences that have jobs shared with the requested sequence
               */
              *LpStsByte = *LpStsByte & (~(*LpStsByteValue));
              /* END Msg(4:4397)-1 */
              /* MISRA Violation: START Msg(4:0489)-3 */
              LpStsByte++;
              /* END Msg(4:0489)-3 */
              /* MISRA Violation: START Msg(4:0489)-3 */
              LpStsByteValue++;
              /* END Msg(4:0489)-3 */
              LucVar--;
            } /* End of while (LucVar > SPI_ZERO) */

            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-7 */
            /* Enable relevant interrupts to protect this critical section */
            SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-7 */
            #endif
            #endif
            #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
            /* TRACE [R3, SPI073][R4, SPI073] */
            /* TRACE [R3, SPI057][R4, SPI057] */
            /* TRACE [R4, SPI264] */
            /* MISRA Violation: START Msg(4:3355) */
            /* MISRA Violation: START Msg(4:3358) */
            /* Check if the notification function is configured */
            if (NULL_PTR != LpSeqConfig->pSpiSeqEndNotification)
            {
              /* END Msg(4:3358) */
              /* END Msg(4:3355) */
              /* Invoke the notification function */
              LpSeqConfig->pSpiSeqEndNotification();
            }
            else
            {
              /* No action required */
            }
            #endif
          }
          else
          {
            /* No action required */
          }
        }
        else
        {
          /* No action required */
        }
        #endif
      }while (((SPI_SEQ_FAILED == Spi_GaaSeqResult[LddSeqIndex])
              #if (SPI_CANCEL_API == STD_ON)
              || (SPI_SEQ_CANCELLED == Spi_GaaSeqResult[LddSeqIndex])
              #endif
              ) && (Spi_GddQueueIndex[LucQueueIndex] > LddLowestQueueIndex));
      if (((SPI_SEQ_FAILED == Spi_GaaSeqResult[LddSeqIndex])
          #if (SPI_CANCEL_API == STD_ON)
          || (SPI_SEQ_CANCELLED == Spi_GaaSeqResult[LddSeqIndex])
          #endif
          ) && (Spi_GddQueueIndex[LucQueueIndex] <= LddLowestQueueIndex))
      {
        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif

        Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_EMPTY;

        /* MISRA Violation: START Msg(4:4397)-1 */
        Spi_GusAllQueueSts =
                       Spi_GusAllQueueSts & (~(SPI_ONE << LucQueueIndex));
        /* END Msg(4:4397)-1 */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* MISRA Violation: START Msg(4:3138)-7 */
        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
        /* END Msg(4:3138)-7 */
        #endif

        /*TRACE [R3, SPI161][R4, SPI161] */
        if (SPI_ZERO == Spi_GusAllQueueSts)
        {
          /* Update driver status as idle */
          Spi_GddDriverStatus = SPI_IDLE;
        }
        else
        {
          /* No action required */
        }
      }
      else
      {
        #if (SPI_CANCEL_API == STD_OFF)
        LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];
        #endif

        #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
        /* Check if status current sequence in queue */
        if (SPI_SEQ_PENDING != Spi_GaaSeqResult[LddSeqIndex])
        {
          /* Check if the notification function is configured */
          if (NULL_PTR != LpSeqConfig->pSpiSeqStartNotification)
          {
            /* Invoke the start sequence notification function */
            LpSeqConfig->pSpiSeqStartNotification();
          }
          else
          {
            /* No action required */
          }
        } /* if(SPI_SEQ_PENDING != Spi_GaaSeqResult[LddSeqIndex]) */
        else
        {
          /* No Action Required */
        }
        #endif/* #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */

        /* Changing HighPriority Communication Request when queue is empty */
        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        if (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex)
        {
          Spi_GaaHighPriorityCommRequest[LddHWUnitNumber] = SPI_FALSE;
          if (SPI_TRUE == Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber])
          {
            /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-7 */
            /* Disable relevant interrupts to protect this critical
               section */
            SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-7 */
            #endif
            /* Changing the hardware status after completing the sequence
               transmission  */
            Spi_GucHwUnitStatus =
                    (Spi_GucHwUnitStatus ^ (SPI_ONE << LddHWUnitNumber));
            Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber] = SPI_FALSE;
             /* Check if critical section protection is required */
            #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
            /* MISRA Violation: START Msg(4:3138)-7 */
            /* Enable relevant interrupts to protect this critical
               section */
            SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
            /* END Msg(4:3138)-7 */
            #endif
          }
          else
          {
            /* No action required */
          }
        }
        else
        {
          /* No action required */
        }
        #endif
        /* Initiate the transmission for that sequence */
        Spi_InitiateJobTx(LddJobListIndex);
      } /* End of if (Spi_GddQueueIndex[LucQueueIndex] != SPI_ZERO)*/
    }
  } /* End of if (SPI_FALSE == LblFlag) */
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        *                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */
/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
