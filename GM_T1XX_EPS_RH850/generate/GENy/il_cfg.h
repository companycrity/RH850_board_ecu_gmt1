/* -----------------------------------------------------------------------------
  Filename:    il_cfg.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Il_Vector
               
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

#if !defined(__IL_CFG_H__)
#define __IL_CFG_H__

/* -----------------------------------------------------------------------------
    &&&~ Version
 ----------------------------------------------------------------------------- */

#define IL_VECTORDLL_VERSION                 0x0116
#define IL_VECTORDLL_RELEASE_VERSION         0x02
#define IL_IMPLEMENTATION_VERSION            0x0202


/* -----------------------------------------------------------------------------
    &&&~ Switches
 ----------------------------------------------------------------------------- */

#define IL_DISABLE_SYS_INIT_FCT
#define IL_ENABLE_TX
#define IL_DISABLE_SYS_SIGNAL_INIT_FCT
#if defined(IL_ENABLE_TX)
#define IL_DISABLE_TX_SIGNAL_START_FCT
#define IL_DISABLE_TX_SIGNAL_STOP_FCT
#define IL_DISABLE_TX_CONFIRMATION_FLAG
#define IL_DISABLE_TX_TIMEOUT_FLAG
#define IL_ENABLE_TX_DEFAULTVALUE
#define IL_DISABLE_TX_UPDATE_BITS
#if defined(IL_ENABLE_TX_DEFAULTVALUE)
#define IL_DISABLE_TX_START_DEFAULTVALUE
#define IL_DISABLE_TX_STOP_DEFAULTVALUE
#endif

#define IL_DISABLE_TX_TIMEOUT
#define IL_DISABLE_TX_SEND_ON_INIT
#define IL_DISABLE_TX_FAST_ON_START
#define IL_DISABLE_TX_SECURE_EVENT
#define IL_DISABLE_TX_CYCLIC_EVENT
#define IL_ENABLE_TX_POLLING
#define IL_DISABLE_TX_INTERRUPT
#define IL_DISABLE_TX_VARYING_TIMEOUT
#define IL_DISABLE_TX_MODE_SIGNALS
#endif

#define IL_DISABLE_TX_STARTSTOP_CYCLIC
#define IL_DISABLE_SYS_ARGCHECK
#define IL_DISABLE_SYS_TESTDEBUG
#define IL_ENABLE_RX
#define IL_DISABLE_SYS_TX_START_FCT
#define IL_DISABLE_SYS_TX_STOP_FCT
#define IL_DISABLE_SYS_TX_REPETITIONS_ARE_ACTIVE_FCT
#define IL_DISABLE_SYS_TX_SIGNALS_ARE_ACTIVE_FCT
#define IL_DISABLE_SYS_RX_RESET_TIMEOUT_FLAGS_ON_ILRXRELEASE
#if defined(IL_ENABLE_RX)
#define IL_DISABLE_RX_SIGNAL_START_FCT
#define IL_DISABLE_RX_SIGNAL_STOP_FCT
#define IL_ENABLE_RX_INDICATION_FLAG
#define IL_ENABLE_RX_TIMEOUT_FLAG
#define IL_DISABLE_RX_FIRSTVALUE_FLAG
#define IL_DISABLE_RX_DATACHANGED_FLAG
#define IL_ENABLE_RX_DEFAULTVALUE
#if defined(IL_ENABLE_RX_DEFAULTVALUE)
#define IL_DISABLE_RX_START_DEFAULTVALUE
#define IL_DISABLE_RX_STOP_DEFAULTVALUE
#endif

#define IL_ENABLE_RX_TIMEOUT
#define IL_ENABLE_RX_POLLING
#define IL_ENABLE_RX_INTERRUPT
#define IL_DISABLE_RX_TIMEOUT_DELAY
#define IL_DISABLE_RX_MODE_SIGNALS
#endif

#define IL_DISABLE_SYS_RX_START_FCT
#define IL_DISABLE_SYS_RX_STOP_FCT
#define IL_DISABLE_TX_DYNAMIC_CYCLETIME
#define IL_DISABLE_SYS_MULTI_ECU_PHYS
#if defined(IL_ENABLE_TX)
#define IL_DISABLE_TX_VARYING_REPETITION
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
#define IL_DISABLE_RX_DYNAMIC_TIMEOUT
#endif



/* -----------------------------------------------------------------------------
    &&&~ OEM
 ----------------------------------------------------------------------------- */

#define IL_TYPE_GM


/* -----------------------------------------------------------------------------
    &&&~ Constants
 ----------------------------------------------------------------------------- */

#define kIlNumberOfChannels                  2
#define kIlNumberOfTxObjects                 7
#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
#define kIlNumberOfTxTimeoutCounters         0
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
#define kIlNumberOfRxTimeoutCounters         17
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
#define kIlNoRxTimeoutSupervision            0xFF
#endif

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_CONFIRMATION_FLAG)
#define kIlNumberOfTxConfirmationFlags       0
#endif

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT_FLAG)
#define kIlNumberOfTxTimeoutFlags            0
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
#define kIlNumberOfTimerFlagBytes            3
#endif

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_SECURE_EVENT) && defined(IL_DISABLE_TX_VARYING_REPETITION)
#define kIlNumberOfTxRepetitions             0
#endif

#define kIlTxCycleTime_0                     10
#define kIlTxCycleTime_1                     10
#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT) && defined(IL_DISABLE_TX_VARYING_TIMEOUT)
#define kIlTxTimeout                         5
#endif

#define kIlNumberOfRxObjects                 20
#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_INDICATION_FLAG)
#define kIlNumberOfRxIndicationFlags         2
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT_FLAG)
#define kIlNumberOfRxTimeoutFlags            6
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_FIRSTVALUE_FLAG)
#define kIlNumberOfRxFirstvalueFlags         0
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_DATACHANGED_FLAG)
#define kIlNumberOfRxDataChangedFlags        0
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_INDICATION_FLAG)
#define kIlNumberOfRxIndicationBits          2
#endif

#define kIlRxCycleTime_0                     10
#define kIlRxCycleTime_1                     10
#define kIlCanNumberOfRxObjects              20
#define kIlCanNumberOfTxObjects              13
#define kIlNumberOfIdentities                1


/* -----------------------------------------------------------------------------
    &&&~ Compatiblility
 ----------------------------------------------------------------------------- */

#define kIlNumberOfNodes                     1


/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gm start
 ----------------------------------------------------------------------------- */

#define kIlNumberOfExtIdRxObjects            0
#define kIlMaxRxExtIdQueue                   10
#define kIlNumberOfVirtualNets               6
#define kIlNrOfPackedRxObjectBytes           3
#define kIlNrOfPackedTxObjectBytes           2
#define IL_DISABLE_RX_EXT_TIMEOUT
#define IL_ENABLE_RX_CLEAR_FLAG_ON_DISABLE_VN
#define kIlNumberOfMsgClearFlagFunc          20
/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gm end
 ----------------------------------------------------------------------------- */



#pragma ghs section bss=".osAppl_Appl6_bss"
#pragma ghs section sbss=".osAppl_Appl6_sbss"
#pragma ghs section data=".osAppl_Appl6_data"
#pragma ghs section sdata=".osAppl_Appl6_sdata"

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\il_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __IL_CFG_H__ */
