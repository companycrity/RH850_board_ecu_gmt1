/* -----------------------------------------------------------------------------
  Filename:    fbl_cfg.h
  Description: Toolversion: 05.02.01.01.40.03.35.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400335
               Customer Info: Nexteer Automotive Corporation
                              Package: FBL Gm SLP5 - CANfbl License for GM SLP5
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyFblCanBase
               
               Configuration   : C:\Tasks_Done\October\T1xx_MicroDiagBl\GM_T1xx_FBL_01.03.01\GM_T1xx_FBL_EPS_RH850\gendata\GM_Fbl_T1xx.gny
               
               ECU: 
                       TargetSystem: Hw_Rh850Cpu
                       Compiler:     GreenHills
                       Derivates:    P1M
               
               Channel "Channel0":
                       Databasefile: C:\Users\nzdx8v\Desktop\Projects\T1xx\GM_T1xx_Fbl\ES_EPS_EA4_FBL_T1xx\SwProject\Gendata\GlobalA_HS.dbc
                       Bussystem:    CAN
                       Manufacturer: General Motors
                       Node:         EPS_HS

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

#if !defined(__FBL_CFG_H__)
#define __FBL_CFG_H__

/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

#define FBL_DISABLE_STAY_IN_BOOT
#define FBL_WATCHDOG_ON
#define FBL_WATCHDOG_TIME                    (1 / FBL_REPEAT_CALL_CYCLE)
#define FBL_HEADER_ADDRESS                   0x0220u
#define FBL_ENABLE_APPL_TASK
#define SWM_DATA_MAX_NOAR                    10
#define FBL_DIAG_BUFFER_LENGTH               4095
#define FBL_DISABLE_SLEEPMODE
#define kFillChar                            0xFFu
#define FBL_DISABLE_MULTIPLE_MEM_DEVICES
#define FBL_DISABLE_FBL_START
#define FBL_MTAB_NO_OF_BLOCKS                1
/* Project State */
#define FBL_INTEGRATION                      2
#define FBL_PRODUCTION                       1
#define FBL_PROJECT_STATE                    FBL_INTEGRATION
#define FBL_ENABLE_SYSTEM_CHECK
#define FBL_ENABLE_DEBUG_STATUS
#define FBL_ENABLE_ASSERTION
/* FblLib_Mem */
#define FBL_MEM_PROC_BUFFER_SIZE             0x0200
#define FBL_DISABLE_PIPELINED_PROGRAMMING
#define FBL_MEM_WRITE_SEGMENTATION           0x0100
#define FBL_ENABLE_UNALIGNED_DATA_TRANSFER
/* CAN Identifier */
#define FBL_CAN_FUNC_RXID                    MK_STDID(0x101)
#define FBL_CAN_RXID                         MK_STDID(0x242)
#define FBL_CAN_TXID                         MK_STDID(0x642)
#define FBL_ENABLE_STDID_OPTIMIZATION
#define FBL_DISABLE_EXTID_OPTIMIZATION
#define FBL_NUMBER_OF_NODES                  1
#define FBL_NUMBER_OF_CHANNELS               1
#define FBL_DISABLE_BUSTYPE_CANFD

/* Rh850RscanCrx specific **************************************************** */
#define FBL_SYSTEM_FREQUENCY                 160
#define FBL_TIMER_RELOAD_VALUE               0x9C3F
#define FBL_TIMER_PRESCALER_VALUE            0x01
#define FBL_WD_TRIGGER_SIZE                  0x0200

#define CAN_BCFG                             0x022B0004
#define kFblCanBaseAdr                       0xFFD20000u
#define kFblCanMaxPhysChannels               6u
#define FBL_CAN_0
#define kFblCanChannel                       0x00

#define CAN_TP_FUNC_RXID                     0x0101
#define CAN_TP_RXID                          0x242
#define CAN_TP_TXID                          0x642
#define FBL_REPEAT_CALL_CYCLE                1
#define FLASH_SIZE                           12288

/* OEM specific ************************************************************** */
/* FBL multiple nodes support: */
#define FBL_DISABLE_MULTIPLE_NODES
#define DIAG_NODE_ADDRESS                    0x31

#define FBL_DISABLE_DIRECT_MEMORY_ACCESS
#define FBL_ENABLE_CAN_CONFIGURATION
#define FBL_DISABLE_RAM_INTEGRITY_CHECK
#define FBL_RAM_INTEGRITY_START_ADDR         0xFEF00100u
#define FBL_RAM_INTEGRITY_END_ADDR           0xFEF00100u
#define FBL_DISABLE_ROM_INTEGRITY_CHECK
#define FBL_ENABLE_GAP_FILL
#define FBL_RESET_MS_DELAY                   30
#define FBL_DISABLE_INITIATE_DIAG_OP
#define FBL_DISABLE_READ_MEMORY_BY_ADDRESS
#define FBL_DISABLE_WRITE_DATA_BY_IDENTIFIER
#define FBL_ENABLE_SECURITY_ACCESS
#define kDiagRqlReadMemoryByAddressAddressParameter 4
#define kDiagRqlRequestDownloadMemorySizeParameter 4
#define kDiagRqlTransferDataStartingAddressParameter 4
#define FBL_DISABLE_HIGHSPEED_MODE
#define kDiagRqlSeed                         5
#define FBL_ENABLE_CALIBRATION_MODULES
#define FBL_DISABLE_MULTI_PROCESSOR
#define FBL_GMHEADER_CSUM                    { 0x9d, 0x50 }
#define FBL_GMHEADER_MODID_FBL               { 0x00, 0x47 }
#define FBL_GMHEADER_SWMI_FBL                { 0x05, 0x02, 0x48, 0xe7 }
#define FBL_GMHEADER_DLS_FBL                 { 0x41, 0x42 }
#define FBL_GMHEADER_DCID_FBL                { 0x80, 0x01 }
/* Ecu Name 'EPS_NXT' in ASCII */
#define FBL_GMHEADER_ECUNAME                 { 0x45, 0x50, 0x53, 0x5f, 0x4e, 0x58, 0x54, 0x00 }
#define FBL_GMHEADER_ECUID                   { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff }
/* Subject Name 'Chassis' in ASCII */
#define FBL_GMHEADER_SUBJNAME                { 0x43, 0x68, 0x61, 0x73, 0x73, 0x69, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define FBL_GMHEADER_NOAR_FBL                1
#define FBL_GMHEADER_ADDR_REG                { 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x10 }


/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

/* User Config File ********************************************************** */
/**************************************************/
/** Secured download related configuration items **/
/**************************************************/
/* Develop feature to verify Integrity word in header. Check User Docu for further information*/
/* #define FBL_ENABLE_VERIFY_INTEGRITY_WORD */

/**************************************************/
/** NVM (test) configuration items               **/
/**************************************************/
/* Develop features to populate NVM on bootloader start  Check User Docu for further information*/

/* This can be used for test purpose to Write SBA ticket from flash sbaBlk0 to NVM */
/* #define  FBL_TEST_SBA_TICKET */

/* This can be used for test purpose to Write Ecu-Id (if you dont change it: from FblHeader).
 * Note: The FblHeader field ECUID could be used to fullfill the requirement, if the
 * content is modified in the hexfile for each controller part to be unique.
 */
#define  FBL_TEST_ECU_ID

/* writes 0x0000 key NBID on startup */
#define  FBL_TEST_KEY_NBID

/* writes 0x0000 app NBID on startup */
#define FBL_TEST_APP_NBID

/**************************************************/
/** Other items                                  **/
/**************************************************/

/* Hardware specific: Required to (re-)use Settings that have been used with the environment @Vector */
//#define FBL_ENABLE_VECTOR_HW
//#define CUSTOMER_HW

/**************************************************/
/** Do not change the following items  START    **/
/**************************************************/
#if defined ( FBL_ENABLE_VERIFY_INTEGRITY_WORD )
  /* SEC_ENABLE_SECURITY_CLASS_VENDOR required when using FBL_ENABLE_VERIFY_INTEGRITY_WORD */
# define SEC_ENABLE_SECURITY_CLASS_VENDOR
#endif
#define SEC_ENABLE_WORKSPACE_INTERNAL
#define SEC_ENABLE_VERIFICATION_KEY_EXTERNAL
#define SEC_ENABLE_KEY_LOCATION_RAM
#define SEC_SIZE_CHECKSUM_VENDOR          2u
#define SEC_SECURITY_CLASS_VERIFY         SEC_CLASS_CCC
#define SEC_SECURITY_CLASS_VERIFICATION   SEC_CLASS_DDD
#define HDR_GAPFILL_BUFF_SIZE FLASH_SEGMENT_SIZE
/**************************************************/
/** Do not change the following items  STOP     **/
/**************************************************/


/* Added */
#define FBL_APNV_USE_FUNCTIONS
/* User Section ************************************************************** */
/*Increase default buffer size to allow Sba ticket to fit in*/
#define EEP_BUFFER_SIZE 0x400
/* *************************************************************************** */


/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 205003454
      #error "The magic number of the generated file <C:\Tasks_Done\October\T1xx_MicroDiagBl\GM_T1xx_FBL_01.03.01\GM_T1xx_FBL_EPS_RH850\gendata\fbl_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 205003454
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __FBL_CFG_H__ */
