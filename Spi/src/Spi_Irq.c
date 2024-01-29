/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Spi_Irq.c                                                   */
/*============================================================================*/
/*                               COPYRIGHT                                    */
/*============================================================================*/
/* Copyright(c) 2012-2015 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the ISR implementations for SPI                         */
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
 * V1.0.1:  26-Oct-2012  : As per SCR 029, SPI_CSIH3_TIC_ISR, SPI_CSIH3_TIR_ISR
 *                         SPI_CSIH3_TIJC_ISR & SPI_CSIH3_TIRE_ISR functions
 *                         are added
 *
 * V1.0.2:  27-Nov-2012  : As per SCR 042, revision history is updated
 *
 * V1.1.0:  16-Jan-2013  : As per SCR 072, in SPI_CSIGn_ISR, SPI_CSIHn_ISR and
 *                         SPI_DmaIsrn the pre-compile CAT2 interrupt condition
 *                         is updated and  Copyright information is updated.
 *
 * V1.1.1:  18-Mar-2013  : As per SCR 113 for Mantis issue 5420, the following
 *                         changes are made
 *                         1. SPI_CSIHx_TIJC_ISR() - Number of jobs in the high
 *                            priority sequence is updated and its transmission
 *                            is initiated.
 *                         2. SPI_CSIHx_TIC_ISR() and SPI_CSIHx_TIR_ISR() -
 *                            Memory mode is updated as direct access mode since
 *                            high priority communication is under progress.
 *
 * V1.1.2:  13-Jun-2013  : As per SCR 181, SPI_IRQ_C_AR_RELEASE_PATCH_VERSION
 *                         is updated to SPI_IRQ_C_AR_RELEASE_REVISION_VERSION
 *                         for SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION.
 * V1.2.0:  26-Jul-2013  : As per CR 219, for mantis issue #8821, #1290 and
 *                         #12397 ISR functions are updated.
 *
 * V1.2.1:  06-Aug-2013  : As per CR 225, As part of SVN merge activity the
 *                         project name and environment section is updated.
 *
 * V1.2.2:  29-Aug-2013  : As per CR 243 for mantis #13035, the following
 *                         changes are made:
 *                         1.SPI_START_SEC_PUBLIC_CODE' is changed to
 *                            'SPI_START_SEC_CODE_FAST' and
 *                            'SPI_STOP_SEC_PUBLIC_CODE' is changed to
 *                            'SPI_STOP_SEC_CODE_FAST' throughout the file.
 *                         2. Pointer class 'SPI_PUBLIC_CODE' is changed to
 *                            'SPI_FAST_CODE' throughout the file.
 *
 * V1.2.3:   19-Nov-2013 : As per CR 321 for mantis #16636, pre-compile checks
 *                         for the following APIs are updated:
 *                         1. SPI_CSIH0_TIJC_ISR, SPI_CSIH1_TIJC_ISR,
 *                            SPI_CSIH2_TIJC_ISR and SPI_CSIH3_TIJC_ISR.
 *
 * V1.2.4:   15-Jan-2014 : As per CR 330, updated as per C coding guideline.
 *
 * V1.2.5:   03-Apr-2014 : As per CR 424, MISRA rules violation message is added
 *
 * V1.2.6:   17-Jul-2014 : As per CR 550, revision history is aligned.
 *
 * V1.2.7:   01-Aug-2014 : As per CR 581 for mantis #20712 and #22858,
 *                         file is updated after spell check.
 *
 * V1.2.8:   10-Feb-2015 : As a part of Merging Activity, for the mantis#26024
 *                         following changes are made:
 *                         1. As per CR 01, for mantis #19850 AUTOSAR SWS
 *                            requirements are mapped for requirements tracing.
 *                         2. File is updated for C coding guidelines.
 *                         3. Copyright Information is Updated.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/* TRACE [R3, SPI092][R4, SPI276] */
#include "Spi.h"
#include "Spi_Irq.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION */

/* AUTOSAR release version information */
#define SPI_IRQ_C_AR_RELEASE_MAJOR_VERSION \
                                  SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_IRQ_C_AR_RELEASE_MINOR_VERSION \
                                  SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_IRQ_C_AR_RELEASE_REVISION_VERSION \
                               SPI_AR_RELEASE_REVISION_VERSION_VALUE

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_VERSION  */

/* AUTOSAR specification version information */
#define SPI_IRQ_C_AR_MAJOR_VERSION    SPI_AR_MAJOR_VERSION_VALUE
#define SPI_IRQ_C_AR_MINOR_VERSION    SPI_AR_MINOR_VERSION_VALUE
#define SPI_IRQ_C_AR_PATCH_VERSION    SPI_AR_PATCH_VERSION_VALUE

#endif /*END of SPI_AR_VERSION */

/* File version information */
#define SPI_IRQ_C_SW_MAJOR_VERSION    SPI_SW_MAJOR_VERSION_VALUE
#define SPI_IRQ_C_SW_MINOR_VERSION    SPI_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

#if (SPI_AR_VERSION  == SPI_AR_HIGHER_VERSION)/*START of SPI_AR_VERSION*/
#if (SPI_IRQ_AR_RELEASE_MAJOR_VERSION != \
                                       SPI_IRQ_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Major Version"
#endif

#if (SPI_IRQ_AR_RELEASE_MINOR_VERSION != \
                                       SPI_IRQ_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Minor Version"
#endif

#if (SPI_IRQ_AR_RELEASE_REVISION_VERSION != \
                                       SPI_IRQ_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Release Revision Version"
#endif

#elif(SPI_AR_VERSION  == SPI_AR_LOWER_VERSION)/*  SPI_AR_LOWER_VERSION  */
#if (SPI_IRQ_AR_MAJOR_VERSION != SPI_IRQ_C_AR_MAJOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Major Version"
#endif

#if (SPI_IRQ_AR_MINOR_VERSION != SPI_IRQ_C_AR_MINOR_VERSION)
  #error "Spi_Version.c : Mismatch in Release Minor Version"
#endif

#if (SPI_IRQ_AR_PATCH_VERSION != SPI_IRQ_C_AR_PATCH_VERSION)
  #error "Spi_Version.c : Mismatch in Release Revision Version"
#endif
#endif /*END of SPI_AR_VERSION */

#if (SPI_IRQ_SW_MAJOR_VERSION != SPI_IRQ_C_SW_MAJOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Major Version"
#endif

#if (SPI_IRQ_SW_MINOR_VERSION != SPI_IRQ_C_SW_MINOR_VERSION)
  #error "Spi_Scheduler.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/*                 pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : Pointer arithmetic is used to achieve better throughput.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-1 and                           */
/*                 END Msg(4:0488)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name     : SPI_CSIG0_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG0 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG0_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG0_TIC_CAT2_ISR) || defined (SPI_CSIG0_TIC_CAT2_ISR)
ISR(SPI_CSIG0_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG0_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG0_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG0_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG0 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG0_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG0_TIR_CAT2_ISR) || defined (SPI_CSIG0_TIR_CAT2_ISR)
ISR(SPI_CSIG0_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG0_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG0_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG0_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG0 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG0_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG0_TIRE_CAT2_ISR) || defined (SPI_CSIG0_TIRE_CAT2_ISR)
ISR(SPI_CSIG0_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG0_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG0_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG1_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG1 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG1_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG1_TIC_CAT2_ISR) || defined (SPI_CSIG1_TIC_CAT2_ISR)
ISR(SPI_CSIG1_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG1_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG1_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG1_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG1 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG1_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG1_TIR_CAT2_ISR) || defined (SPI_CSIG1_TIR_CAT2_ISR)
ISR(SPI_CSIG1_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG1_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG1_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG1_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG1 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  :Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG1_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG1_TIRE_CAT2_ISR) || defined (SPI_CSIG1_TIRE_CAT2_ISR)
ISR(SPI_CSIG1_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG1_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG1_TIRE_ISR_API == STD_ON) */
/*******************************************************************************
** Function Name     : SPI_CSIG2_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG2 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG2_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG2_TIC_CAT2_ISR) || defined (SPI_CSIG2_TIC_CAT2_ISR)
ISR(SPI_CSIG2_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG2_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG2_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG2_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG2 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG2_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG2_TIR_CAT2_ISR) || defined (SPI_CSIG2_TIR_CAT2_ISR)
ISR(SPI_CSIG2_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG2_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG2_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG2_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG2 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG2_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG2_TIRE_CAT2_ISR) || defined (SPI_CSIG2_TIRE_CAT2_ISR)
ISR(SPI_CSIG2_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG2_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG2_TIRE_ISR_API == STD_ON) */
/*******************************************************************************
** Function Name     : SPI_CSIG3_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG3 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG3_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG3_TIC_CAT2_ISR) || defined (SPI_CSIG3_TIC_CAT2_ISR)
ISR(SPI_CSIG3_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG3_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG3_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG3_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG3 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    : None
*******************************************************************************/

#if (SPI_CSIG3_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG3_TIR_CAT2_ISR) || defined (SPI_CSIG3_TIR_CAT2_ISR)
ISR(SPI_CSIG3_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG3_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG3_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG3_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG3 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG3_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG3_TIRE_CAT2_ISR) || defined (SPI_CSIG3_TIRE_CAT2_ISR)
ISR(SPI_CSIG3_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG3_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG3_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG4_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG4 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG4_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG4_TIC_CAT2_ISR) || defined (SPI_CSIG4_TIC_CAT2_ISR)
ISR(SPI_CSIG4_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG4_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG4_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG4_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG4 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG4_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG4_TIR_CAT2_ISR) || defined (SPI_CSIG4_TIR_CAT2_ISR)
ISR(SPI_CSIG4_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG4_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG4_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG4_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG4 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG4_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG4_TIRE_CAT2_ISR) || defined (SPI_CSIG4_TIRE_CAT2_ISR)
ISR(SPI_CSIG4_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG4_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG4_TIRE_ISR_API == STD_ON) */
/*******************************************************************************
** Function Name     : SPI_CSIG5_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG5 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG5_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG5_TIC_CAT2_ISR) || defined (SPI_CSIG5_TIC_CAT2_ISR)
ISR(SPI_CSIG5_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG5_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG5_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG5_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG5 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
**
** Function invoked  :Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG5_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG5_TIR_CAT2_ISR) || defined (SPI_CSIG5_TIR_CAT2_ISR)
ISR(SPI_CSIG5_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG5_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG5_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG5_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG5 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG5_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG5_TIRE_CAT2_ISR) || defined (SPI_CSIG5_TIRE_CAT2_ISR)
ISR(SPI_CSIG5_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG5_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG5_TIRE_ISR_API == STD_ON) */
/*******************************************************************************
** Function Name     : SPI_CSIG6_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG6 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG6_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG6_TIC_CAT2_ISR) || defined (SPI_CSIG6_TIC_CAT2_ISR)
ISR(SPI_CSIG6_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG6_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG6_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG6_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG6 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG6_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG6_TIR_CAT2_ISR) || defined (SPI_CSIG6_TIR_CAT2_ISR)
ISR(SPI_CSIG6_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG6_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG6_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG6_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG6 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG6_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG6_TIRE_CAT2_ISR) || defined (SPI_CSIG6_TIRE_CAT2_ISR)
ISR(SPI_CSIG6_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG6_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG6_TIRE_ISR_API == STD_ON) */
/*******************************************************************************
** Function Name     : SPI_CSIG7_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG7 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG7_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG7_TIC_CAT2_ISR) || defined (SPI_CSIG7_TIC_CAT2_ISR)
ISR(SPI_CSIG7_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG7_TIC_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG7_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG7_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG7 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG7_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG7_TIR_CAT2_ISR) || defined (SPI_CSIG7_TIR_CAT2_ISR)
ISR(SPI_CSIG7_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG7_TIR_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG7_TIR_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIG7_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIG7 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIG7_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIG7_TIRE_CAT2_ISR) || defined (SPI_CSIG7_TIRE_CAT2_ISR)
ISR(SPI_CSIG7_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIG7_TIRE_ISR(void)
#endif
{
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GstCurrentCommData[SPI_ZERO].ddHWUnitIndex;

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIG7_TIRE_ISR_API == STD_ON) */
/*******************************************************************************
** Function Name     : SPI_CSIH0_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH0_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIC_CAT2_ISR) || defined (SPI_CSIH0_TIC_CAT2_ISR)
ISR(SPI_CSIH0_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ZERO])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH0_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitCancelISR
**
** Registers Used    :  None
*******************************************************************************/

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH0_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIJC_CAT2_ISR) || defined (SPI_CSIH0_TIJC_CAT2_ISR)
ISR(SPI_CSIH0_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_ZERO])
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];

    /* Invoke transmit cancel function */
    Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* MISRA Violation: START Msg(4:0488)-1 */
    /* Get the pointer to the post-build sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_ZERO];
    /* END Msg (4:0488)-1 */

    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;

    /* Get the number of jobs configured for the requested sequence */
    LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

    /* Get the index of the job list for the first job of the sequence */
    LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

    /* Flag is set is indicate high priority communication will be activated*/
    Spi_GaaHighPriorityCommActive[SPI_ZERO] = SPI_TRUE;

    /* Initiate the transmission for that sequence */
    Spi_InitiateJobTx(LddReqJobListIndex);
  }
  #endif
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH0_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH0_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIRE_CAT2_ISR) || defined (SPI_CSIH0_TIRE_CAT2_ISR)
ISR(SPI_CSIH0_TIRE_CAT2_ISR)

/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the configured memory mode for this HW Unit */
  LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH0_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH0 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
#if (SPI_CSIH0_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH0_TIR_CAT2_ISR) || defined (SPI_CSIH0_TIR_CAT2_ISR)
ISR(SPI_CSIH0_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ZERO];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ZERO])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ZERO];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH0_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH1_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIC_CAT2_ISR) || defined (SPI_CSIH1_TIC_CAT2_ISR)
ISR(SPI_CSIH1_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ONE])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitCancelISR
**
** Registers Used    :  None
*******************************************************************************/

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH1_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIJC_CAT2_ISR) || defined (SPI_CSIH1_TIJC_CAT2_ISR)
ISR(SPI_CSIH1_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_ONE])
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];

    /* Invoke transmit cancel function */
    Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* MISRA Violation: START Msg(4:0488)-1 */

    /* Get the pointer to the post-build sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_ONE];
    /* END Msg (4:0488)-1 */

    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;

    /* Get the number of jobs configured for the requested sequence */
    LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

    /* Get the index of the job list for the first job of the sequence */
    LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

    /* Flag is set is indicate high priority communication will be activated*/
    Spi_GaaHighPriorityCommActive[SPI_ONE] = SPI_TRUE;

    /* Initiate the transmission for that sequence */
    Spi_InitiateJobTx(LddReqJobListIndex);
  }
  #endif
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
#if (SPI_CSIH1_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIR_CAT2_ISR) || defined (SPI_CSIH1_TIR_CAT2_ISR)
ISR(SPI_CSIH1_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_ONE])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH1_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH1 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH1_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH1_TIRE_CAT2_ISR) || defined (SPI_CSIH1_TIRE_CAT2_ISR)
ISR(SPI_CSIH1_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the configured memory mode for this HW Unit */
  LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_ONE];

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_ONE];

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH1_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH2_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIC_CAT2_ISR) || defined (SPI_CSIH2_TIC_CAT2_ISR)
ISR(SPI_CSIH2_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_TWO])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitCancelISR
**
** Registers Used    :  None
*******************************************************************************/

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH2_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIJC_CAT2_ISR) || defined (SPI_CSIH2_TIJC_CAT2_ISR)
ISR(SPI_CSIH2_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_TWO])
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];

    /* Invoke transmit cancel function */
    Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* MISRA Violation: START Msg(4:0488)-1 */
    /* Get the pointer to the post-build sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_TWO];
    /* END Msg (4:0488)-1 */

    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;

    /* Get the number of jobs configured for the requested sequence */
    LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

    /* Get the index of the job list for the first job of the sequence */
    LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

    /* Flag is set is indicate high priority communication will be activated*/
    Spi_GaaHighPriorityCommActive[SPI_TWO] = SPI_TRUE;

    /* Initiate the transmission for that sequence */
    Spi_InitiateJobTx(LddReqJobListIndex);
  }
  #endif
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
#if (SPI_CSIH2_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIR_CAT2_ISR) || defined (SPI_CSIH2_TIR_CAT2_ISR)
ISR(SPI_CSIH2_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_TWO])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH2_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH2_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH2_TIRE_CAT2_ISR) || defined (SPI_CSIH2_TIRE_CAT2_ISR)
ISR(SPI_CSIH2_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the configured memory mode for this HW Unit */
  LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_TWO];

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_TWO];

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH2_TIRE_ISR_API == STD_ON) */
/*******************************************************************************
** Function Name     : SPI_CSIH3_TIC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH2 transmit interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH3_TIC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIC_CAT2_ISR) || defined (SPI_CSIH3_TIC_CAT2_ISR)
ISR(SPI_CSIH3_TIC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_THREE])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke transmit function */
  Spi_TransmitISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIC_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_CSIH3_TIJC_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH3 transmit cancel
**                   : interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_TransmitCancelISR
**
** Registers Used    :  None
*******************************************************************************/

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH3_TIJC_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIJC_CAT2_ISR) || defined (SPI_CSIH3_TIJC_CAT2_ISR)
ISR(SPI_CSIH3_TIJC_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIJC_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddReqJobListIndex;
  #endif

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommRequest[SPI_THREE])
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];

    /* Invoke transmit cancel function */
    Spi_TransmitCancelISR(LddHWUnitIndex, LucHWMemoryMode);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* MISRA Violation: START Msg(4:0488)-1 */
    /* Get the pointer to the post-build sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Spi_GaaHighPrioritySequence[SPI_THREE];
    /* END Msg (4:0488)-1 */

    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;

    /* Get the number of jobs configured for the requested sequence */
    LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

    /* Get the index of the job list for the first job of the sequence */
    LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

    /* Flag is set is indicate high priority communication will be activated*/
    Spi_GaaHighPriorityCommActive[SPI_THREE] = SPI_TRUE;

    /* Initiate the transmission for that sequence */
    Spi_InitiateJobTx(LddReqJobListIndex);
  }
  #endif
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIJC_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH3_TIR_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH3 receive interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ReceiveISR
**
** Registers Used    :  None
*******************************************************************************/

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
#if (SPI_CSIH3_TIR_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIR_CAT2_ISR) || defined (SPI_CSIH3_TIR_CAT2_ISR)
ISR(SPI_CSIH3_TIR_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIR_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[SPI_THREE])
  #endif/* Get the configured memory mode for this HW Unit */
  {
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif

  /* Invoke receive function */
  Spi_ReceiveISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIR_ISR_API == STD_ON) */
#endif

/*******************************************************************************
** Function Name     : SPI_CSIH3_TIRE_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for CSIH3 Error interrupt
**
** Re-entrancy       : Reentrant
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
** Global Variable   : None
**
** Function invoked  : Spi_ComErrorISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_CSIH3_TIRE_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_CSIH3_TIRE_CAT2_ISR) || defined (SPI_CSIH3_TIRE_CAT2_ISR)
ISR(SPI_CSIH3_TIRE_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIRE_ISR(void)
#endif
{
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitIndex;

  /* Get the configured memory mode for this HW Unit */
  LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[SPI_THREE];

  /* Get the HW unit index for this HW Unit in Spi_GstHWUnitInfo*/
  LddHWUnitIndex = Spi_GpConfigPtr->aaHWUnitInfoIndex[SPI_THREE];

  /* Invoke communication error function */
  Spi_ComErrorISR(LddHWUnitIndex, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_CSIH3_TIRE_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA00_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA0 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA00_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA00_CAT2_ISR) || defined (SPI_DMA00_CAT2_ISR)
ISR(SPI_DMA00_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA00_ISR(void)
#endif
{
  Spi_DmaISR(SPI_ZERO);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA00_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA01_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA01 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA01_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA01_CAT2_ISR) || defined (SPI_DMA01_CAT2_ISR)
ISR(SPI_DMA01_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA01_ISR(void)
#endif
{
  Spi_DmaISR(SPI_ONE);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA1_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA02_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA02 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA02_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA02_CAT2_ISR) || defined (SPI_DMA02_CAT2_ISR)
ISR(SPI_DMA02_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA02_ISR(void)
#endif
{
  Spi_DmaISR(SPI_TWO);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA2_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA03_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA3 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA03_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA03_CAT2_ISR) || defined (SPI_DMA03_CAT2_ISR)
ISR(SPI_DMA03_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA03_ISR(void)
#endif
{
  Spi_DmaISR(SPI_THREE);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA3_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA04_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA04 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA04_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA04_CAT2_ISR) || defined (SPI_DMA04_CAT2_ISR)
ISR(SPI_DMA04_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA04_ISR(void)
#endif
{
  Spi_DmaISR(SPI_FOUR);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA4_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA05_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA05 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA05_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA05_CAT2_ISR) || defined (SPI_DMA05_CAT2_ISR)
ISR(SPI_DMA05_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA05_ISR(void)
#endif
{
  Spi_DmaISR(SPI_FIVE);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA05_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA06_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA06 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA06_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA06_CAT2_ISR) || defined (SPI_DMA06_CAT2_ISR)
ISR(SPI_DMA06_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA06_ISR(void)
#endif
{
  Spi_DmaISR(SPI_SIX);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA6_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA07_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA07 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA07_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA07_CAT2_ISR) || defined (SPI_DMA07_CAT2_ISR)
ISR(SPI_DMA07_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA07_ISR(void)
#endif
{
  Spi_DmaISR(SPI_SEVEN);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA07_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA08_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA08 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA08_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA08_CAT2_ISR) || defined (SPI_DMA08_CAT2_ISR)
ISR(SPI_DMA08_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA08_ISR(void)
#endif
{
  Spi_DmaISR(SPI_EIGHT);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA08_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA09_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA09 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA09_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA09_CAT2_ISR) || defined (SPI_DMA09_CAT2_ISR)
ISR(SPI_DMA09_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA09_ISR(void)
#endif
{
  Spi_DmaISR(SPI_NINE);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA09_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA10_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA10 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA10_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA10_CAT2_ISR) || defined (SPI_DMA10_CAT2_ISR)
ISR(SPI_DMA10_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA10_ISR(void)
#endif
{
  Spi_DmaISR(SPI_TEN);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA10_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA11_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA11 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA11_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA11_CAT2_ISR) || defined (SPI_DMA11_CAT2_ISR)
ISR(SPI_DMA11_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA11_ISR(void)
#endif
{
  Spi_DmaISR(SPI_ELEVEN);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA11_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA12_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA12 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA12_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA12_CAT2_ISR) || defined (SPI_DMA12_CAT2_ISR)
ISR(SPI_DMA12_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA12_ISR(void)
#endif
{
  Spi_DmaISR(SPI_TWELVE);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA12_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA13_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA13 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    : None
*******************************************************************************/

#if (SPI_DMA13_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA13_CAT2_ISR) || defined (SPI_DMA13_CAT2_ISR)
ISR(SPI_DMA13_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA13_ISR(void)
#endif
{
  Spi_DmaISR(SPI_THIRTEEN);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA13_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA14_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA14 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA14_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA14_CAT2_ISR) ||  defined (SPI_DMA14_CAT2_ISR)
ISR(SPI_DMA14_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA14_ISR(void)
#endif
{
  Spi_DmaISR(SPI_FOURTEEN);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA14_ISR_API == STD_ON) */

/*******************************************************************************
** Function Name     : SPI_DMA15_ISR
**
** Service ID        : NA
**
** Description       : Interrupt Service Routine for DMA15 interrupt
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
** Global Variable   : None
**
** Function invoked  : Spi_DmaISR
**
** Registers Used    :  None
*******************************************************************************/

#if (SPI_DMA15_ISR_API == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2interrupt mapping */
#if defined (Os_SPI_DMA15_CAT2_ISR) || defined (SPI_DMA15_CAT2_ISR)
ISR(SPI_DMA15_CAT2_ISR)
/* Defines the CAT1 interrupt mapping */
#else
_INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA15_ISR(void)
#endif
{
  Spi_DmaISR(SPI_FIFTEEN);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /* End of (SPI_DMA15_ISR_API == STD_ON) */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
