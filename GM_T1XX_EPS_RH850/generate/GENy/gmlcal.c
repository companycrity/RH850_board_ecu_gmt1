/* -----------------------------------------------------------------------------
  Filename:    gmlcal.c
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

#include "gmlcal.h"

#define GMLCAL_START_SEC_CONST
/*lint -e537*/
/*lint -e451*/
/* 2007-11-26, vismas: do not inform about multiple includes: MemDef.h is intended to be multiply included */
#include "MemDef.h" /* PRQA S PRQA S 5087 */ /* MD_NmGmlanGm_5087 */
/*lint +e537*/
/*lint +e451*/
#ifdef VGEN_ENABLE_NM_GMLAN
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 nmInitDelayTimeCalCnt[kNmNumberOfChannels] = 
{
  ((100 + 10) - 1) / 10, 
  ((100 + 10) - 1) / 10
};

GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmBusOffRecoverTimeCalCnt[kNmNumberOfChannels] = 
{
  ((160 + 10) - 1) / 10, 
  ((160 + 10) - 1) / 10
};

GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmVNMFStartSendCalCnt[kNmNumberOfChannels] = 
{
  ((100 + 10) - 1) / 10, 
  ((100 + 10) - 1) / 10
};

GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmVNMFSendTimeCalCnt[kNmNumberOfChannels] = 
{
  ((3000 + 10) - 1) / 10, 
  ((3000 + 10) - 1) / 10
};

GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmSleepTransitionDelayTimeCalCnt[kNmNumberOfChannels] = 
{
  ((50 + 10) - 1) / 10, 
  ((50 + 10) - 1) / 10
};

GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint16 GMLCAL_MEMROM2 nmSupervisionStabilityTimeCalCnt[kNmNumberOfChannels] = 
{
  ((5000 + 10) - 1) / 10, 
  ((5000 + 10) - 1) / 10
};

# if (defined ( NM_ENABLE_FDR_ALGORITHM )) && (defined ( NM_ENABLE_SLEEPCONFIRMATION_FCT ))
#  if (defined ( NM_ENABLE_FDR_NO_SLEEP_CONF_FAULT_REPORT )) || (defined ( NM_ENABLE_FDR_NO_SLEEP_CONF_FAULT_MITIGATION ))
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 nmMaxApplShutDownDenyCnt[kNmNumberOfChannels] = 
{
  5, 
  5
};
# endif
#endif


#endif

/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gmlcal start
 ----------------------------------------------------------------------------- */

#if defined(VGEN_ENABLE_IL_VECTOR)
#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 IlVnTxSendOnInit[kIlNrOfPackedTxObjectBytes] = 
{
  0x00, 
  0x00
};
#endif


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1) && defined(IL_ENABLE_RX_EXT_TIMEOUT)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 IltRxExtIDTimeoutCounter GMLCAL_MEMROM2 kGMLANNodeStatusTimeoutTimeCalCnt[kIlNumberOfChannels] = 
{
  0 /* HS */, 
  0 /* CE */
};
#endif


#if defined(IL_ENABLE_RX)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 IlVnRxMessageEnabled[kIlNrOfPackedRxObjectBytes] = 
{
  0xFF, 
  0x7F, 
  0x1F
};
#endif


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 IlVnTxMessageEnabled[kIlNrOfPackedTxObjectBytes] = 
{
  0x0F, 
  0x07
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ TxDefaultInitValue Message Tables
 ----------------------------------------------------------------------------- */

GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 DTC_Triggered_778IlTxDefaultInitValue[7] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 PPEI_Steering_Wheel_AngleIlTxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 LKA_Steering_Trq_Overlay_Stat_HSIlTxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 Power_Steering_Information_HSIlTxDefaultInitValue[1] = 
{
  0x00
};
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 Electric_Power_Steering_CEIlTxDefaultInitValue[4] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00
};
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 PPEI_Steering_Wheel_Angle_CEIlTxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
GMLCAL_MEMROM0 GMLCAL_MEMROM1 vuint8 GMLCAL_MEMROM2 Steering_Torque_Overlay_Stat_CEIlTxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 IltTxCounter GMLCAL_MEMROM2 IlTxStartCycles[kIlNumberOfTxObjects] = 
{
  kIlNoCycleTime /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  kIlNoCycleTime /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  kIlNoCycleTime /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  kIlNoCycleTime /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  kIlNoCycleTime /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  kIlNoCycleTime /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  kIlNoCycleTime /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 IltTxUpdateCounter GMLCAL_MEMROM2 IlTxUpdateCycles[kIlNumberOfTxObjects] = 
{
  kIlNoDelayTime /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  kIlNoDelayTime /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  kIlNoDelayTime /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  11 /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  kIlNoDelayTime /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  kIlNoDelayTime /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  kIlNoDelayTime /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_TX)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 IltTxCounter GMLCAL_MEMROM2 IlTxCyclicCycles[kIlNumberOfTxObjects] = 
{
  100 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  1 /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  10 /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  100 /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  2 /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  1 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  10 /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && (defined(IL_ENABLE_TX_CYCLIC_EVENT) || defined(IL_ENABLE_TX_SECURE_EVENT) || defined(IL_ENABLE_TX_FAST_ON_START))
GMLCAL_MEMROM0 GMLCAL_MEMROM1 IltTxCounter GMLCAL_MEMROM2 IlTxEventCycles[kIlNumberOfTxObjects] = 
{
  kIlNoCycleTimeFast /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
GMLCAL_MEMROM0 GMLCAL_MEMROM1 IltRxTimeoutCounter GMLCAL_MEMROM2 IlRxTimeoutTbl[kIlNumberOfRxTimeoutCounters] = 
{
  250 /* ID: 0x00000500, Wheel_Pulses_HS [FC] */, 
  125 /* ID: 0x000004d1, PPEI_Engine_General_Status_5 [FC] */, 
  62 /* ID: 0x000003f1, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  25 /* ID: 0x0000034a, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  25 /* ID: 0x00000348, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  25 /* ID: 0x00000232, Driving_Mode_Control_HS [FC] */, 
  25 /* ID: 0x00000214, Brake_Pedal_Driver_Status_HS [FC] */, 
  25 /* ID: 0x000001f5, PPEI_Trans_General_Status_2 [FC] */, 
  25 /* ID: 0x000001f1, PPEI_Platform_General_Status [FC] */, 
  25 /* ID: 0x000001e9, PPEI_Chassis_General_Status_1 [FC] */, 
  25 /* ID: 0x00000180, LKA_Steering_Torque_Cmd_HS [FC] */, 
  25 /* ID: 0x0000017d, Antilock_Brake_and_TC_Status_HS [FC] */, 
  25 /* ID: 0x000000c9, PPEI_Engine_General_Status_1 [FC] */, 
  25 /* ID: 0x0000034a, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  25 /* ID: 0x00000348, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  25 /* ID: 0x00000337, Park_Assist_Parallel_CE [FC] */, 
  25 /* ID: 0x00000182, Vehicle_Dynamics_ESC_Hyb_CE [FC] */
};
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
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\gmlcal.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\gmlcal.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

