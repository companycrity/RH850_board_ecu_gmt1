/* -----------------------------------------------------------------------------
  Filename:    can_cfg.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: DrvCan__base
               
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

#if !defined(__CAN_CFG_H__)
#define __CAN_CFG_H__

#include "v_cfg.h"
#define HW_SH2RSCANCPUCANDLL_VERSION         0x0208
#define HW_SH2RSCANCPUCANDLL_RELEASE_VERSION 0x00

#define HW__BASECPUCANDLL_VERSION            0x0226
#define HW__BASECPUCANDLL_RELEASE_VERSION    0x01

#define DRVCAN__BASEDLL_VERSION              0x0322
#define DRVCAN__BASEDLL_RELEASE_VERSION      0x00

#define DRVCAN__BASERI14DLL_VERSION          0x0209
#define DRVCAN__BASERI14DLL_RELEASE_VERSION  0x01

#define DRVCAN__BASERI15DLL_VERSION          0x0105
#define DRVCAN__BASERI15DLL_RELEASE_VERSION  0x00

#define DRVCAN__BASEHLLDLL_VERSION           0x0306
#define DRVCAN__BASEHLLDLL_RELEASE_VERSION   0x01

#define DRVCAN__BASERI14HLLDLL_VERSION       0x0205
#define DRVCAN__BASERI14HLLDLL_RELEASE_VERSION 0x03

#define DRVCAN__BASERI15HLLDLL_VERSION       0x0101
#define DRVCAN__BASERI15HLLDLL_RELEASE_VERSION 0x03


#define kCanNumberOfChannels                 2
#define kCanNumberOfHwChannels               2
#define kCanNumberOfPhysChannels             2
#define C_DISABLE_MEMCOPY_SUPPORT
#define C_ENABLE_OSEK_OS
#define C_DISABLE_VARIABLE_DLC
#define C_DISABLE_DLC_FAILED_FCT
#define C_DISABLE_VARIABLE_RX_DATALEN
#define C_DISABLE_MULTI_ECU_CONFIG
#define C_DISABLE_MULTI_ECU_PHYS
#define C_DISABLE_EXTENDED_ID
#define C_DISABLE_MIXED_ID
#define C_DISABLE_RECEIVE_FCT

#define C_DISABLE_ECU_SWITCH_PASS
#define C_ENABLE_TRANSMIT_QUEUE
#define C_DISABLE_OVERRUN
#define C_DISABLE_INTCTRL_BY_APPL
#define C_DISABLE_COMMON_CAN
#define C_DISABLE_USER_CHECK
#define C_DISABLE_HARDWARE_CHECK
#define C_DISABLE_GEN_CHECK
#define C_DISABLE_INTERNAL_CHECK
#define C_DISABLE_DYN_RX_OBJECTS
#define C_DISABLE_DYN_TX_OBJECTS
#define C_DISABLE_DYN_TX_ID
#define C_DISABLE_DYN_TX_DLC
#define C_DISABLE_DYN_TX_DATAPTR
#define C_DISABLE_DYN_TX_PRETRANS_FCT
#define C_DISABLE_DYN_TX_CONF_FCT
#define C_DISABLE_EXTENDED_STATUS
#define C_DISABLE_TX_OBSERVE
#define C_ENABLE_HW_LOOP_TIMER
#define C_DISABLE_NOT_MATCHED_FCT
#define C_SECURITY_LEVEL                     30

#define C_ENABLE_MULTICHANNEL_API
#define C_ENABLE_PART_OFFLINE
#define C_DISABLE_MSG_TRANSMIT
#define C_DISABLE_MSG_TRANSMIT_CONF_FCT

#define C_DISABLE_RANGE_0
#define C_DISABLE_RANGE_1
#define C_DISABLE_RANGE_2
#define C_DISABLE_RANGE_3
#define kCanNumberOfTxObjects                13
#define kCanNumberOfTxStatObjects            13
#define kCanNumberOfTxDynObjects             0
#define kCanNumberOfRxObjects                26
#define kCanNumberOfRxStatFullCANObjects     20
#define kCanNumberOfRxStatBasicCANObjects    6
#define kCanNumberOfRxDynFullCANObjects      0
#define kCanNumberOfRxDynBasicCANObjects     0
#define kCanNumberOfRxDynObjects             0
#define kCanNumberOfRxStatObjects            26
#define kCanNumberOfConfFlags                7
#define kCanNumberOfIndFlags                 20
#define kCanNumberOfConfirmationFlags        1
#define kCanNumberOfIndicationFlags          3
#define kCanNumberOfInitObjects              2
#define kCanExtNumberOfInitObjects           0
#define C_SEARCH_LINEAR

#define C_ENABLE_RX_MSG_INDIRECTION

#define C_ENABLE_CONFIRMATION_FLAG
#define C_ENABLE_INDICATION_FLAG
#define C_DISABLE_PRETRANSMIT_FCT
#define C_ENABLE_CONFIRMATION_FCT
#define C_DISABLE_INDICATION_FCT
#define C_ENABLE_PRECOPY_FCT
#define C_ENABLE_COPY_TX_DATA
#define C_ENABLE_COPY_RX_DATA
#define C_ENABLE_DLC_CHECK
#define C_DISABLE_DLC_CHECK_MIN_DATALEN

#define C_ENABLE_GENERIC_PRECOPY
#define APPL_CAN_GENERIC_PRECOPY             IlCanGenericPrecopy

#define C_SEND_GRP_NONE                      0x00
#define C_SEND_GRP_ALL                       0xFF
#define C_SEND_GRP_USER0                     0x01
#define C_SEND_GRP_USER1                     0x02
#define C_SEND_GRP_USER2                     0x04
#define C_SEND_GRP_USER3                     0x08
#define C_SEND_GRP_USER4                     0x10
#define C_SEND_GRP_USER5                     0x20
#define C_SEND_GRP_USER6                     0x40
#define C_SEND_GRP_USER7                     0x80
#define C_ENABLE_CAN_CANCEL_NOTIFICATION

#define CANCHANNEL_0
#define CANCHANNEL_1
#define kCanIndex0                           0
#define kCanIndex1                           1
#define kCanPhysToLogChannelIndex_0          0
#define kCanPhysToLogChannelIndex_1          1
#define C_ENABLE_RX_FULLCAN_OBJECTS
#define C_ENABLE_RX_BASICCAN_OBJECTS
#define kCanNumberOfRxFullCANObjects         20

#define kCanNumberOfRxBasicCANObjects        6
#define kCanNumberOfUsedRxBasicCANObjects    2

#define kCanInitObj1                         0
#define C_DISABLE_TX_MASK_EXT_ID
#define C_DISABLE_RX_MASK_EXT_ID
#define C_MASK_EXT_ID                        0x03FFFF00

#define C_ENABLE_CAN_CAN_INTERRUPT_CONTROL
#define C_DISABLE_CAN_TX_CONF_FCT

#define C_DISABLE_TX_POLLING
#define C_DISABLE_RX_BASICCAN_POLLING
#define C_ENABLE_RX_FULLCAN_POLLING
#define C_DISABLE_ERROR_POLLING
#define C_DISABLE_WAKEUP_POLLING
#define C_DISABLE_MULTIPLE_BASICCAN
#define C_DISABLE_FULLCAN_OVERRUN
#define C_ENABLE_OSEK_OS_INTCAT2
#define C_DISABLE_COPY_RX_DATA_WITH_DLC
#define kCanTxQueueBytes                     8
#define kCanTxQueuePadBits                   51
#define kCanNumberOfMaxBasicCAN              4
#define kCanNumberOfHwObjPerBasicCan         1
#define C_DISABLE_CAN_RAM_CHECK
#define C_DISABLE_SLEEP_WAKEUP
#define C_DISABLE_CANCEL_IN_HW
#define C_DISABLE_ONLINE_OFFLINE_CALLBACK_FCT

#define C_DISABLE_CAN_MSG_TRANSMIT_CANCEL_NOTIFICATION

#define kCanChannel_HS                       0
#define kCanChannel_CE                       1
#define C_DISABLE_INTCTRL_ADD_CAN_FCT
#if defined(C_SINGLE_RECEIVE_BUFFER) || defined(C_MULTIPLE_RECEIVE_BUFFER)
#error "DrvCan__baseRI1.5 doesn't support Single/Multiple Receive Buffer API for the callback 'ApplCanMsgReceived'!"
#endif

#define C_DISABLE_RETRANSMIT
#define kCanNumberOfUsedCanTxIdTables        1
#define kCanNumberOfUsedCanRxIdTables        1
#define kCanNumberOfUsedTxCANObjects         2

#define kCanNumberOfUnusedObjects            88

#define kCanNumberOfTxDirectObjects          0

#define C_DISABLE_TX_FULLCAN_OBJECTS


#define C_DISABLE_RX_QUEUE
#define C_DISABLE_APPLCANPRERXQUEUE
#define C_DISABLE_RX_QUEUE_RANGE
#define C_DISABLE_RXQUEUE_OVERRUN_NOTIFY

#define C_ENABLE_INDIVIDUAL_POLLING
#define kCanNumberOfHwObjIndivPolling        288u

/* -----------------------------------------------------------------------------
    &&&~ Hw specific defines
 ----------------------------------------------------------------------------- */

#define kCanBaseAdr                          0xFFD20000u
#define kCanIntcRxFifoBaseAdr                0xFFFFB17Cu
#define kCanIntcGErrorBaseAdr                0xFFFFB17Au
#define kCanMaxPhysChannels                  2u
#define kCanRxBufOffset                      0u
#define kCanRxFifoOffset                     128u
#define kCanMaxRxFifos                       8u
#define kCanMaxTxFifos                       3u
#define kCanMaxTxBuf                         16u
#define kCanMaxRxBuf                         32u
#define kCanMaxHwObjects                     288u
#define kCanNumberOfRxFifos                  2u
#define kCanNumberOfFilterRules              26u
#define kCanFifoToLogChannelIndex_0          0u
#define kCanFifoToLogChannelIndex_1          1u
#define kCanNumberOfSharedReg16              1u
#define kCanMaxPoolBuf                       128u
#define kCanMaxRules                         128u
#define kCanTxBufOffset_0                    160u
#define kCanTxBufOffset_1                    176u
#define C_DISABLE_ALTERNATIVE_CLOCK_SOURCE
#define C_ENABLE_BUSWAKEUP_SUPPORT




/* This file defines the C_ENABLE_HW_OBJ_EXCEED_255_CFG that is need in 
   can_def.h in order to declare CanTxHwObj with the same type that it
   is defined with. Please specify this file as the 'User Config File'
   on the DrvCan page in GENy. */ 

#ifndef C_ENABLE_HW_OBJ_EXCEED_255_CFG
#define C_ENABLE_HW_OBJ_EXCEED_255_CFG
#endif

/* This constant is used for user interrupt control handling since the CAN driver
   is executing in user mode and doesn't have write access to interrupt controller 
   registers */
#define C_ENABLE_OSEK_CAN_INTCTRL


/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\can_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __CAN_CFG_H__ */
