/* -----------------------------------------------------------------------------
  Filename:    xcp_cfg.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Xcp
               
               Configuration   : C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\tools\GENy\EPS.gny
               
               ECU: 
                       TargetSystem: Hw_Rh850Cpu
                       Compiler:     GreenHills
                       Derivates:    P1M
               
               Channel "HS":
                       Databasefile: GlobalA_HS.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_HS
               Channel "CE":
                       Databasefile: GlobalA_CE.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_CE

 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2014 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__XCP_CFG_H__)
#define __XCP_CFG_H__

/*  */
#include "v_inc.h"
/*  */
/* General settings */
#define XCP_DISABLE_PARAMETER_CHECK
#define XCP_ENABLE_CALIBRATION
#define XCP_DISABLE_SEND_EVENT
#define XCP_DISABLE_TESTMODE
#define XCP_DISABLE_BOOTLOADER_DOWNLOAD
#define XCP_DISABLE_WRITE_PROTECTION
#define XCP_DISABLE_READ_PROTECTION
#define XCP_ENABLE_CONTROL
#define XCP_DISABLE_GET_XCP_DATA_POINTER
#define XCP_ENABLE_OPENCMDIF
#define XCP_DISABLE_DEV_ERROR_DETECT
#define XCP_DISABLE_VECTOR_GENERICMEASUREMENT
#define XCP_DISABLE_AMD_RUNTIME_MEASUREMENT
#define XCP_DISABLE_GET_SESSION_STATUS_API
#define XCP_DISABLE_ADDRESS_DOUBLING_SUPPORT
#define XCP_DISABLE_USE_BYTE_ACCESS
/*  */
/* EEPROM access */
#define XCP_DISABLE_READ_EEPROM
#define XCP_DISABLE_WRITE_EEPROM
/*  */
/* Service request message */
#define XCP_DISABLE_SERV_TEXT
#define XCP_DISABLE_SERV_TEXT_PUTCHAR
#define XCP_DISABLE_SERV_TEXT_PRINT
/*  */
/* Standard commands */
#define XCP_ENABLE_COMM_MODE_INFO
#define XCP_DISABLE_SEED_KEY
#define XCP_DISABLE_MODIFY_BITS
#define XCP_DISABLE_SHORT_DOWNLOAD
#define XCP_ENABLE_USER_COMMAND
#define XCP_DISABLE_VECTOR_MAPNAMES
#define XCP_DISABLE_TL_COMMAND
/*  */
/* Block transfer */
#define XCP_DISABLE_BLOCK_UPLOAD
#define XCP_DISABLE_BLOCK_DOWNLOAD
#define kXcpBlockDownloadMinSt               0u
/*  */
/* Checksum */
#define XCP_DISABLE_CHECKSUM
/*  */
/* Synchronous Data Acquisition (DAQ) */
#define XCP_ENABLE_DAQ
#define kXcpDaqMemSize                       512u
#define XCP_DISABLE_STIM
#define XCP_DISABLE_UNALIGNED_MEM_ACCESS
#define XCP_ENABLE_SEND_QUEUE
#define XCP_ENABLE_DAQ_PRESCALER
#define XCP_ENABLE_DAQ_OVERRUN_INDICATION
#define XCP_DISABLE_WRITE_DAQ_MULTIPLE
#define XCP_DISABLE_DAQ_HDR_ODT_DAQ
#define XCP_DISABLE_DAQ_RESUME
#define XCP_ENABLE_DAQ_PROCESSOR_INFO
#define XCP_ENABLE_DAQ_RESOLUTION_INFO
#define XCP_DISABLE_VIRTUAL_MEASUREMENT
/*  */
/* Events */
#define XCP_ENABLE_DAQ_EVENT_INFO
#define kXcpMaxEvent                         1u
/*  */
/* DAQ Timestamp */
#define XCP_ENABLE_DAQ_TIMESTAMP
#define XCP_DISABLE_DAQ_TIMESTAMP_FIXED
#define kXcpDaqTimestampSize                 DAQ_TIMESTAMP_WORD
#define kXcpDaqTimestampUnit                 DAQ_TIMESTAMP_UNIT_1US
#define kXcpDaqTimestampTicksPerUnit         1u
/*  */
/* Page switching */
#define XCP_ENABLE_CALIBRATION_PAGE
#define kXcpMaxSegment                       1u
#define XCP_ENABLE_PAGE_INFO
#define kXcpMaxPages                         2u
#define XCP_ENABLE_PAGE_COPY
#define XCP_DISABLE_PAGE_FREEZE
/*  */
/* Programming */
#define XCP_DISABLE_PROGRAM
#define XCP_DISABLE_SILENT_CHECK
#define CP_XCPDLL_VERSION                    0x0220
#define CP_XCPDLL_RELEASE_VERSION            0x03
/* -----------------------------------------------------------------------------
    &&&~ Multiple transport layer support
 ----------------------------------------------------------------------------- */

/* Multiple transport layer support */
#define NUMBER_OF_TRANSPORTLAYERS            1u
/* CompilerAbstractionEnabled == FALSE */
/* 2 */
#define XCP_TRANSPORT_LAYER_CAN              0


/* Transport Layer */
/*  */
#define kXcpNumberOfCanChannels              2
#define XCP_DISABLE_CAN_MULTI_CHANNEL
#define XCP_DISABLE_CAN_MULTI_CONNECTION_PROTECTION
#define XCP_TRANSPORT_LAYER_TYPE_CAN
#define XCP_TRANSPORT_LAYER_VERSION_CAN      0x0100
#define kCanXcpMaxCTO                        8
#define kCanXcpMaxDTO                        8
#define XCP_DISABLE_CAN_VARIABLE_DLC
#define kXcpSendQueueMinSize                 1
/*  */
#define CP_XCPONCANDLL_VERSION               0x0108
#define CP_XCPONCANDLL_RELEASE_VERSION       0x02

/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

#pragma ghs section bss=".osAppl_Appl6_bss"
#pragma ghs section sbss=".osAppl_Appl6_sbss"
#pragma ghs section data=".osAppl_Appl6_data"
#pragma ghs section sdata=".osAppl_Appl6_sdata"

#define XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL

#undef kXcpMaxSegment
#define kXcpMaxSegment  3


/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\xcp_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __XCP_CFG_H__ */
