/* -----------------------------------------------------------------------------
  Filename:    gmlcal.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Nm_Gmlan_Gm
               
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

#if !defined(__GMLCAL_H__)
#define __GMLCAL_H__

#include "v_cfg.h"
#include "v_def.h"
#include "nm_cfg.h"
#ifdef VGEN_ENABLE_IL_VECTOR
#include "il_inc.h"
#endif

#define GMLCAL_START_SEC_CONST
/*lint -e537*/
/*lint -e451*/
/* 2007-11-26, vismas: do not inform about multiple includes: MemDef.h is intended to be multiply included */
#include "MemDef.h" /* PRQA S PRQA S 5087 */ /* MD_NmGmlanGm_5087 */
/*lint +e537*/
/*lint +e451*/
#ifdef VGEN_ENABLE_NM_GMLAN
GMLCAL_MEMROM0 extern GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 nmInitDelayTimeCalCnt[kNmNumberOfChannels];

GMLCAL_MEMROM0 extern GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmBusOffRecoverTimeCalCnt[kNmNumberOfChannels];

GMLCAL_MEMROM0 extern GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmVNMFStartSendCalCnt[kNmNumberOfChannels];

GMLCAL_MEMROM0 extern GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmVNMFSendTimeCalCnt[kNmNumberOfChannels];

GMLCAL_MEMROM0 extern GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmSleepTransitionDelayTimeCalCnt[kNmNumberOfChannels];

GMLCAL_MEMROM0 extern GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmSupervisionStabilityTimeCalCnt[kNmNumberOfChannels];

# if (defined ( NM_ENABLE_FDR_ALGORITHM )) && (defined ( NM_ENABLE_SLEEPCONFIRMATION_FCT ))
#  if (defined ( NM_ENABLE_FDR_NO_SLEEP_CONF_FAULT_REPORT )) || (defined ( NM_ENABLE_FDR_NO_SLEEP_CONF_FAULT_MITIGATION ))
GMLCAL_MEMROM0 extern GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 nmMaxApplShutDownDenyCnt[kNmNumberOfChannels];
# endif
#endif


#endif

/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gmlcal start
 ----------------------------------------------------------------------------- */

#if defined(VGEN_ENABLE_IL_VECTOR)
#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 IlVnTxSendOnInit[kIlNrOfPackedTxObjectBytes];
#endif


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1) && defined(IL_ENABLE_RX_EXT_TIMEOUT)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 IltRxExtIDTimeoutCounter GMLCAL_MEMROM2 kGMLANNodeStatusTimeoutTimeCalCnt[kIlNumberOfChannels];
#endif


#if defined(IL_ENABLE_RX)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 IlVnRxMessageEnabled[kIlNrOfPackedRxObjectBytes];
#endif


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 IlVnTxMessageEnabled[kIlNrOfPackedTxObjectBytes];
#endif


/* -----------------------------------------------------------------------------
    &&&~ TxDefaultInitValue Message Tables
 ----------------------------------------------------------------------------- */

GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 DTC_Triggered_778IlTxDefaultInitValue[7];
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 PPEI_Steering_Wheel_AngleIlTxDefaultInitValue[8];
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 LKA_Steering_Trq_Overlay_Stat_HSIlTxDefaultInitValue[8];
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 Power_Steering_Information_HSIlTxDefaultInitValue[1];
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 Electric_Power_Steering_CEIlTxDefaultInitValue[4];
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 PPEI_Steering_Wheel_Angle_CEIlTxDefaultInitValue[8];
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 Steering_Torque_Overlay_Stat_CEIlTxDefaultInitValue[8];


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 IltTxCounter GMLCAL_MEMROM2 IlTxStartCycles[kIlNumberOfTxObjects];
#endif


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 IltTxUpdateCounter GMLCAL_MEMROM2 IlTxUpdateCycles[kIlNumberOfTxObjects];
#endif


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 IltTxCounter GMLCAL_MEMROM2 IlTxCyclicCycles[kIlNumberOfTxObjects];
#endif


#if defined(IL_ENABLE_TX) && (defined(IL_ENABLE_TX_CYCLIC_EVENT) || defined(IL_ENABLE_TX_SECURE_EVENT) || defined(IL_ENABLE_TX_FAST_ON_START))
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 IltTxCounter GMLCAL_MEMROM2 IlTxEventCycles[kIlNumberOfTxObjects];
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
GMLCAL_MEMROM0 extern  GMLCAL_MEMROM1 IltRxTimeoutCounter GMLCAL_MEMROM2 IlRxTimeoutTbl[kIlNumberOfRxTimeoutCounters];
#endif



#endif

/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gmlcal end
 ----------------------------------------------------------------------------- */


#define GMLCAL_STOP_SEC_CONST
/*lint -e537*/
/*lint -e451*/
/* 2007-11-26, vismas: do not inform about multiple includes: MemDef.h is intended to be multiply included */
#include "MemDef.h" /* PRQA S PRQA S 5087 */ /* MD_NmGmlanGm_5087 */
/*lint +e537*/
/*lint +e451*/

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\gmlcal.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __GMLCAL_H__ */
