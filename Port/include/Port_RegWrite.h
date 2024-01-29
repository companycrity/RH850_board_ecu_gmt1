/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Port_RegWrite.h                                             */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2016 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macro definitions for the registers write and           */
/* register write verification.                                               */
/*                                                                            */
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

/*Implements EAAR_PN0034_NR_0045*/
/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  08-Aug-2016 : Initial Version
 */
/******************************************************************************/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements EAAR_PN0034_FR_0001, EAAR_PN0034_FR_0052, AR_PN0062_FR_0005*/
/*Implements EAAR_PN0034_FSR_0001,EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0003*/
/*Implements EAAR_PN0034_FSR_0004, EAAR_PN0034_FR_0021, EAAR_PN0034_NR_0007*/
#ifndef PORT_REG_WRITE_H
#define PORT_REG_WRITE_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/*Implements PORT_ESDD_UD_011*/
#if( PORT_USE_WRITE_VERIFY_ERROR_INTERFACE == STD_ON )
#include "Port_Cbk.h"
#endif

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* AUTOSAR release version information */
#define PORT_REGWRITE_AR_RELEASE_MAJOR_VERSION    PORT_AR_RELEASE_MAJOR_VERSION
#define PORT_REGWRITE_AR_RELEASE_MINOR_VERSION    PORT_AR_RELEASE_MINOR_VERSION
#define PORT_REGWRITE_AR_RELEASE_REVISION_VERSION \
                                     PORT_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define PORT_REGWRITE_SW_MAJOR_VERSION    PORT_SW_MAJOR_VERSION
#define PORT_REGWRITE_SW_MINOR_VERSION    PORT_SW_MINOR_VERSION

/*Implements EAAR_PN0034_NR_0002, EAAR_PN0034_NR_0026*/
/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognized code-fragment       */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Macro definition as multi-line operation hence multi-line  */
/*                 macro is used                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation: START Msg(4:3412)-1 and          */
/*                 MISRA Violation: END Msg(4:3412)-1 tags in the code.       */
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/* Macro for Register readback disable */
#define PORT_WV_DISABLE                      0U
/* Macro for Register readback INIT_ONLY*/
#define PORT_WV_INIT_ONLY                    1U
/* Macro for Register readback INIT_RUNTIME */
#define PORT_WV_INIT_RUNTIME                 2U

/*******************************************************************************
** Macro Name            : PORT_REG_WRITE
**
** Description           : This Macro performs register direct writing
**                         operation.
** Input Parameters      : REG, VAL
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#define PORT_REG_WRITE(REG, VAL)         (REG) = (VAL);
/* MISRA Violation: END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : PORT_REG_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify for the port
**                         registers during initialize API.
**
** Input Parameters      : WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/*Implements PORT_ESDD_UD_107*/
/* MISRA Violation: START Msg(4:3412)-1 */
#if((PORT_WV_INIT_ONLY == PORT_WRITE_VERIFY ) || \
      (PORT_WV_INIT_RUNTIME == PORT_WRITE_VERIFY ))
#define PORT_REG_WRITE_VERIFY_INIT(WriteRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId) \
  PORT_REG_WRITE_VERIFY(WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId);
#else
#define PORT_REG_WRITE_VERIFY_INIT(WriteRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId) \
  { \
  }
#endif
/* MISRA Violation: END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : PORT_REG_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify for the port
**                         registers during runtime.
**
** Input Parameters      : WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/*Implements PORT_ESDD_UD_107*/
/* MISRA Violation: START Msg(4:3412)-1 */
#if(PORT_WV_INIT_RUNTIME == PORT_WRITE_VERIFY )
#define PORT_REG_WRITE_VERIFY_RUNTIME(WriteRegAddr,uiCheckValue,\
                                         uiWCMaskValue, uiApiId) \
    PORT_REG_WRITE_VERIFY(WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId);
#else
#define PORT_REG_WRITE_VERIFY_RUNTIME(WriteRegAddr, uiCheckValue, \
                                      uiWCMaskValue, uiApiId) \
  { \
  }
#endif
/* MISRA Violation: END Msg(4:3412)-1 */
/* Implements PORT038*/
/*******************************************************************************
** Macro Name            : PORT_REG_WRITE_VERIFY
**
** Description           : This macro is to do call the error report macro if
**                         the register write-verify fails
**
** Input Parameters      : WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#define PORT_REG_WRITE_VERIFY(WriteRegAddr,uiCheckValue,\
                                            uiWCMaskValue,uiApiId) \
  if((uiCheckValue) != ((WriteRegAddr) & (uiWCMaskValue)))\
  { \
      PORT_WV_REPORT_ERROR(PORT_E_REG_WRITE_VERIFY, \
                           DEM_EVENT_STATUS_FAILED, uiApiId); \
  } \
  else \
  { \
  }
/* MISRA Violation: END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : PORT_WV_REPORT_ERROR
**
** Description           : This macro is to do the write verify for the port
**                         registers
**
** Input Parameters      : REG, VAL,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#if ( PORT_USE_WRITE_VERIFY_ERROR_INTERFACE == STD_ON )
#define PORT_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                PORT_WRITE_VERIFY_ERROR_NOTIFICATION(WVErrId, uiApiId);
#else
#define PORT_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                            Dem_ReportErrorStatus(WVErrId, \
                                   (PORT_DEM_TYPE) (ErrStat));
#endif
/* MISRA Violation: END Msg(4:3412)-1 */
#endif /*  PORT_REG_WRITE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
