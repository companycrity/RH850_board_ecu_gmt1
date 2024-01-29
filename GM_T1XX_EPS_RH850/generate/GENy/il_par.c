/* -----------------------------------------------------------------------------
  Filename:    il_par.c
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

/* -----------------------------------------------------------------------------
    &&&~ Misra  justifications
 ----------------------------------------------------------------------------- */

/* PRQA S 3458 EOF *//* MD_CBD_19.4 */
/* PRQA S 3408 EOF *//* MD_Il_8.8 */
/* PRQA S 3460 EOF *//* MD_CBD_19.4 */
/* PRQA S 3412 EOF *//* MD_CBD_19.4 */
/* PRQA S 3453 EOF *//* MD_CBD_19.7 */
/* PRQA S 2006 EOF *//* MD_CBD_14.7 */
/* PRQA S 0777 EOF *//* MD_Il_0777 */
/* PRQA S 0778 EOF *//* MD_Il_0778 */
/* PRQA S 0779 EOF *//* MD_Il_0779 */
/* PRQA S 3673 EOF *//* MD_Il_3673 */
/* PRQA S 0310 EOF *//* MD_Il_0310 */
/* PRQA S 0312 EOF *//* MD_Il_0312 */
/* PRQA S 0635 EOF *//* MD_Il_0635 */
/* PRQA S 0781 EOF *//* MD_Il_0781 */
/* PRQA S 3410 EOF *//* MD_Il_3410 */
/* PRQA S 1330 EOF *//* MD_Il_1330 */
/* PRQA S 0342 EOF *//* MD_Il_0342 */
/* PRQA S 0857 EOF *//* MD_CBD_1.1 */
/* PRQA S 3109 EOF *//* MD_CBD_14.3 */
/* PRQA S 0883 EOF *//* */


#include "il_inc.h"

/* -----------------------------------------------------------------------------
    &&&~ local variables
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_CYCLIC_EVENT)
#endif



/* -----------------------------------------------------------------------------
    &&&~ Local function prototypes
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Message indication function prototypes
 ----------------------------------------------------------------------------- */

static void IlMsgWheel_Pulses_HSIndication(void );
static void IlMsgPPEI_Engine_General_Status_5Indication(void );
static void IlMsgPPEI_Platform_Eng_Cntrl_RequestsIndication(void );
static void IlMsgNonDriven_Wheel_Grnd_Velocity_HSIndication(void );
static void IlMsgDriven_Wheel_Grnd_Velocity_HSIndication(void );
static void IlMsgDriving_Mode_Control_HSIndication(void );
static void IlMsgBrake_Pedal_Driver_Status_HSIndication(void );
static void IlMsgPPEI_Trans_General_Status_2Indication(void );
static void IlMsgPPEI_Platform_General_StatusIndication(void );
static void IlMsgPPEI_Chassis_General_Status_1Indication(void );
static void IlMsgLKA_Steering_Torque_Cmd_HSIndication(void );
static void IlMsgAntilock_Brake_and_TC_Status_HSIndication(void );
static void IlMsgPPEI_Engine_General_Status_1Indication(void );
static void IlMsgPPEI_NonDrivn_Whl_Rotationl_StatIndication(void );
static void IlMsgNonDriven_Wheel_Grnd_Velocity_CEIndication(void );
static void IlMsgDriven_Wheel_Grnd_Velocity_CEIndication(void );
static void IlMsgPark_Assist_Parallel_CEIndication(void );
static void IlMsgVehicle_Dynamics_ESC_Hyb_CEIndication(void );
static void IlMsgSteering_Torque_Command_CEIndication(void );


/* -----------------------------------------------------------------------------
    &&&~ IL internal rx message timeout indication functions
 ----------------------------------------------------------------------------- */

static void IlMsgWheel_Pulses_HSTimeoutIndication(void);
static void IlMsgPPEI_Engine_General_Status_5TimeoutIndication(void);
static void IlMsgPPEI_Platform_Eng_Cntrl_RequestsTimeoutIndication(void);
static void IlMsgNonDriven_Wheel_Grnd_Velocity_HSTimeoutIndication(void);
static void IlMsgDriven_Wheel_Grnd_Velocity_HSTimeoutIndication(void);
static void IlMsgDriving_Mode_Control_HSTimeoutIndication(void);
static void IlMsgBrake_Pedal_Driver_Status_HSTimeoutIndication(void);
static void IlMsgPPEI_Trans_General_Status_2TimeoutIndication(void);
static void IlMsgPPEI_Platform_General_StatusTimeoutIndication(void);
static void IlMsgPPEI_Chassis_General_Status_1TimeoutIndication(void);
static void IlMsgLKA_Steering_Torque_Cmd_HSTimeoutIndication(void);
static void IlMsgAntilock_Brake_and_TC_Status_HSTimeoutIndication(void);
static void IlMsgPPEI_Engine_General_Status_1TimeoutIndication(void);
static void IlMsgNonDriven_Wheel_Grnd_Velocity_CETimeoutIndication(void);
static void IlMsgDriven_Wheel_Grnd_Velocity_CETimeoutIndication(void);
static void IlMsgPark_Assist_Parallel_CETimeoutIndication(void);
static void IlMsgVehicle_Dynamics_ESC_Hyb_CETimeoutIndication(void);




/* -----------------------------------------------------------------------------
    &&&~ Internal Timer Handles
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
#define IlParHndRxWheel_Pulses_HS            0
#define IlParHndRxPPEI_Engine_General_Status_5 1
#define IlParHndRxPPEI_Platform_Eng_Cntrl_Requests 2
#define IlParHndRxNonDriven_Wheel_Grnd_Velocity_HS 3
#define IlParHndRxDriven_Wheel_Grnd_Velocity_HS 4
#define IlParHndRxDriving_Mode_Control_HS    5
#define IlParHndRxBrake_Pedal_Driver_Status_HS 6
#define IlParHndRxPPEI_Trans_General_Status_2 7
#define IlParHndRxPPEI_Platform_General_Status 8
#define IlParHndRxPPEI_Chassis_General_Status_1 9
#define IlParHndRxLKA_Steering_Torque_Cmd_HS 10
#define IlParHndRxAntilock_Brake_and_TC_Status_HS 11
#define IlParHndRxPPEI_Engine_General_Status_1 12
#define IlParHndRxNonDriven_Wheel_Grnd_Velocity_CE 13
#define IlParHndRxDriven_Wheel_Grnd_Velocity_CE 14
#define IlParHndRxPark_Assist_Parallel_CE    15
#define IlParHndRxVehicle_Dynamics_ESC_Hyb_CE 16
#endif

/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gm start
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX_EXT_TIMEOUT)
/* No Rx messages with fault recovery configured. */
#endif


#if defined(IL_ENABLE_RX)
static void IlWheel_Pulses_HSClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlNonDriven_Wheel_Grnd_Velocity_HSClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlDriven_Wheel_Grnd_Velocity_HSClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlDriving_Mode_Control_HSClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlBrake_Pedal_Driver_Status_HSClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_Platform_General_StatusClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_Chassis_General_Status_1ClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlLKA_Steering_Torque_Cmd_HSClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlAntilock_Brake_and_TC_Status_HSClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_Engine_General_Status_1ClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_NonDrivn_Whl_Rotationl_StatClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlNonDriven_Wheel_Grnd_Velocity_CEClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlDriven_Wheel_Grnd_Velocity_CEClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlPark_Assist_Parallel_CEClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlVehicle_Dynamics_ESC_Hyb_CEClearFlagsFunc(void);
#endif


#if defined(IL_ENABLE_RX)
static void IlSteering_Torque_Command_CEClearFlagsFunc(void);
#endif



#if defined(IL_ENABLE_RX_EXT_TIMEOUT)
/* skipped IlRxExtIDTimeoutFunctions */
#endif


#if defined(IL_ENABLE_RX_EXT_TIMEOUT)
/* skipped IlRxExtIDFaultRecoveryFunctions */
#endif


#if defined(IL_ENABLE_RX)
V_MEMROM0 V_MEMROM1 IlMsgClearFlagFct V_MEMROM2 IlMsgClearFlagFunctions[kIlNumberOfMsgClearFlagFunc] = 
{
  V_NULL /* ID: 0x000007cb, T1_HostToTarget [FC] */, 
  IlWheel_Pulses_HSClearFlagsFunc /* ID: 0x00000500, Wheel_Pulses_HS [FC] */, 
  V_NULL /* ID: 0x000004d1, PPEI_Engine_General_Status_5 [FC] */, 
  V_NULL /* ID: 0x000003f1, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  IlNonDriven_Wheel_Grnd_Velocity_HSClearFlagsFunc /* ID: 0x0000034a, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlDriven_Wheel_Grnd_Velocity_HSClearFlagsFunc /* ID: 0x00000348, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlDriving_Mode_Control_HSClearFlagsFunc /* ID: 0x00000232, Driving_Mode_Control_HS [FC] */, 
  IlBrake_Pedal_Driver_Status_HSClearFlagsFunc /* ID: 0x00000214, Brake_Pedal_Driver_Status_HS [FC] */, 
  V_NULL /* ID: 0x000001f5, PPEI_Trans_General_Status_2 [FC] */, 
  IlPPEI_Platform_General_StatusClearFlagsFunc /* ID: 0x000001f1, PPEI_Platform_General_Status [FC] */, 
  IlPPEI_Chassis_General_Status_1ClearFlagsFunc /* ID: 0x000001e9, PPEI_Chassis_General_Status_1 [FC] */, 
  IlLKA_Steering_Torque_Cmd_HSClearFlagsFunc /* ID: 0x00000180, LKA_Steering_Torque_Cmd_HS [FC] */, 
  IlAntilock_Brake_and_TC_Status_HSClearFlagsFunc /* ID: 0x0000017d, Antilock_Brake_and_TC_Status_HS [FC] */, 
  IlPPEI_Engine_General_Status_1ClearFlagsFunc /* ID: 0x000000c9, PPEI_Engine_General_Status_1 [FC] */, 
  IlPPEI_NonDrivn_Whl_Rotationl_StatClearFlagsFunc /* ID: 0x000000c5, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  IlNonDriven_Wheel_Grnd_Velocity_CEClearFlagsFunc /* ID: 0x0000034a, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlDriven_Wheel_Grnd_Velocity_CEClearFlagsFunc /* ID: 0x00000348, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlPark_Assist_Parallel_CEClearFlagsFunc /* ID: 0x00000337, Park_Assist_Parallel_CE [FC] */, 
  IlVehicle_Dynamics_ESC_Hyb_CEClearFlagsFunc /* ID: 0x00000182, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  IlSteering_Torque_Command_CEClearFlagsFunc /* ID: 0x00000180, Steering_Torque_Command_CE [FC] */
};
#endif



#if defined(IL_ENABLE_RX_EXT_TIMEOUT)
/* skipped IlRxExtIDTimeoutType */
#endif


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1) && defined(IL_ENABLE_RX_EXT_TIMEOUT)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlRxExtIDStartIndex[kIlNumberOfChannels+1] = 
{
  0 /* HS */, 
  0 /* CE */, 
  0 /* stop element */
};
#endif


V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlRxHndStartIndex[kIlNrOfPackedRxObjectBytes+1] = 
{
  0 /* Channel_0 ilRxPackedIndex: 0 */, 
  8 /* Channel_0 ilRxPackedIndex: 1 */, 
  15 /* Channel_1 ilRxPackedIndex: 2 */, 
  20 /* Channel_2 ilRxPackedIndex: 3 stop element */
};

#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlVnStartIndex[kIlNumberOfChannels+1] = 
{
  0 /* HS */, 
  3 /* CE */, 
  6 /* stop element */
};
#endif


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1) && defined(IL_ENABLE_RX)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlPackedRxObjectStartIndex[kIlNumberOfChannels+1] = 
{
  0 /* HS */, 
  2 /* CE */, 
  3 /* stop element */
};
#endif


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1) && defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlPackedTxObjectStartIndex[kIlNumberOfChannels+1] = 
{
  0 /* HS */, 
  1 /* CE */, 
  2 /* stop element */
};
#endif


#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlVnTxMessageMapping[kIlNumberOfVirtualNets][kIlNrOfPackedTxObjectBytes] = 
{
  { 0x00, 0x00 } /* SLHSSharedDiagnostic */, 
  { 0x0F, 0x07 } /* AllNodes */, 
  { 0x00, 0x00 } /* SLHS_VNReq */, 
  { 0x00, 0x00 } /* SLHSSharedDiagnostic */, 
  { 0x0F, 0x07 } /* AllNodes */, 
  { 0x00, 0x00 } /* SLHS_VNReq */
};
#endif


#if defined(IL_ENABLE_RX)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlVnRxMessageMapping[kIlNumberOfVirtualNets][kIlNrOfPackedRxObjectBytes] = 
{
  { 0x00, 0x00, 0x00 } /* SLHSSharedDiagnostic */, 
  { 0xFF, 0x7F, 0x1F } /* AllNodes */, 
  { 0x00, 0x00, 0x00 } /* SLHS_VNReq */, 
  { 0x00, 0x00, 0x00 } /* SLHSSharedDiagnostic */, 
  { 0xFF, 0x7F, 0x1F } /* AllNodes */, 
  { 0x00, 0x00, 0x00 } /* SLHS_VNReq */
};
#endif


#if defined(IL_ENABLE_RX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxTimeout2MsgIndirection[kIlNumberOfRxTimeoutCounters] = 
{
  IlRxMsgHndWheel_Pulses_HS /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  IlRxMsgHndPPEI_Engine_General_Status_5 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlRxMsgHndDriving_Mode_Control_HS /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  IlRxMsgHndBrake_Pedal_Driver_Status_HS /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  IlRxMsgHndPPEI_Trans_General_Status_2 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  IlRxMsgHndPPEI_Platform_General_Status /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  IlRxMsgHndPPEI_Chassis_General_Status_1 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  IlRxMsgHndLKA_Steering_Torque_Cmd_HS /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  IlRxMsgHndAntilock_Brake_and_TC_Status_HS /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  IlRxMsgHndPPEI_Engine_General_Status_1 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlRxMsgHndPark_Assist_Parallel_CE /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */
};
#endif


#if defined(IL_ENABLE_RX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlRxTimeoutHandle V_MEMROM2 IlRxMsg2TimeoutIndirection[kIlNumberOfRxObjects] = 
{
  kIlRxTimeoutHandleNotUsed /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  IlParHndRxWheel_Pulses_HS /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  IlParHndRxPPEI_Engine_General_Status_5 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  IlParHndRxPPEI_Platform_Eng_Cntrl_Requests /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  IlParHndRxNonDriven_Wheel_Grnd_Velocity_HS /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlParHndRxDriven_Wheel_Grnd_Velocity_HS /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlParHndRxDriving_Mode_Control_HS /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  IlParHndRxBrake_Pedal_Driver_Status_HS /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  IlParHndRxPPEI_Trans_General_Status_2 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  IlParHndRxPPEI_Platform_General_Status /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  IlParHndRxPPEI_Chassis_General_Status_1 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  IlParHndRxLKA_Steering_Torque_Cmd_HS /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  IlParHndRxAntilock_Brake_and_TC_Status_HS /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  IlParHndRxPPEI_Engine_General_Status_1 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  kIlRxTimeoutHandleNotUsed /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  IlParHndRxNonDriven_Wheel_Grnd_Velocity_CE /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlParHndRxDriven_Wheel_Grnd_Velocity_CE /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlParHndRxPark_Assist_Parallel_CE /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  IlParHndRxVehicle_Dynamics_ESC_Hyb_CE /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  kIlRxTimeoutHandleNotUsed /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */
};
#endif


#if defined(C_ENABLE_GENERIC_PRECOPY) && defined(IL_ENABLE_SYS_MULTI_ECU_PHYS)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxMsgCan2IlIndirection[kCanNumberOfRxObjects] = 
{
  IlRxMsgHndT1_HostToTarget /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  IlRxMsgHndWheel_Pulses_HS /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  IlRxMsgHndPPEI_Engine_General_Status_5 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlRxMsgHndDriving_Mode_Control_HS /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  IlRxMsgHndBrake_Pedal_Driver_Status_HS /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  IlRxMsgHndPPEI_Trans_General_Status_2 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  IlRxMsgHndPPEI_Platform_General_Status /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  IlRxMsgHndPPEI_Chassis_General_Status_1 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  IlRxMsgHndLKA_Steering_Torque_Cmd_HS /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  IlRxMsgHndAntilock_Brake_and_TC_Status_HS /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  IlRxMsgHndPPEI_Engine_General_Status_1 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlRxMsgHndPark_Assist_Parallel_CE /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  IlRxMsgHndSteering_Torque_Command_CE /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  kIlRxHandleNotUsed /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  kIlRxHandleNotUsed /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  kIlRxHandleNotUsed /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  kIlRxHandleNotUsed /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  kIlRxHandleNotUsed /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  kIlRxHandleNotUsed /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
#endif


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1) && defined(IL_ENABLE_RX_EXT_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxHnd2IlRxExtIdHndIndirection[kIlNumberOfRxObjects] = 
{
  kIlRxExtIdHandleNotUsed /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  kIlRxExtIdHandleNotUsed /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */
};
#endif


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) && (kIlNumberOfChannels > 1) && defined(IL_ENABLE_RX_EXT_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxChannel2NcaMsgIndirection[kIlNumberOfChannels] = 
{
  kIlRxHandleNotUsed /* HS */, 
  kIlRxHandleNotUsed /* CE */
};
#endif


#if defined(IL_ENABLE_RX_EXT_TIMEOUT)
/* No Rx messages with fault recovery configured. */
#endif


#if defined(IL_ENABLE_RX)
static void IlWheel_Pulses_HSClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] &= (vuint8) 0xFE;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlNonDriven_Wheel_Grnd_Velocity_HSClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] &= (vuint8) 0xC7;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlDriven_Wheel_Grnd_Velocity_HSClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] &= (vuint8) 0x3F;
  ilRxTimeoutFlags[1] &= (vuint8) 0xFE;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlDriving_Mode_Control_HSClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] &= (vuint8) 0xFD;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlBrake_Pedal_Driver_Status_HSClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] &= (vuint8) 0xE3;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_Platform_General_StatusClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] &= (vuint8) 0xBF;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_Chassis_General_Status_1ClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] &= (vuint8) 0x7F;
  ilRxTimeoutFlags[2] &= (vuint8) 0xF8;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlLKA_Steering_Torque_Cmd_HSClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[2] &= (vuint8) 0x87;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlAntilock_Brake_and_TC_Status_HSClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[2] &= (vuint8) 0x7F;
  ilRxTimeoutFlags[3] &= (vuint8) 0xFE;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_Engine_General_Status_1ClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[3] &= (vuint8) 0xC1;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlPPEI_NonDrivn_Whl_Rotationl_StatClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxIndicationFlags[0] &= (vuint8) 0xFE;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlNonDriven_Wheel_Grnd_Velocity_CEClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[4] &= (vuint8) 0xF8;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlDriven_Wheel_Grnd_Velocity_CEClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[4] &= (vuint8) 0xC7;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlPark_Assist_Parallel_CEClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[4] &= (vuint8) 0x3F;
  ilRxTimeoutFlags[5] &= (vuint8) 0xF0;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlVehicle_Dynamics_ESC_Hyb_CEClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[5] &= (vuint8) 0xCF;
  CanGlobalInterruptRestore();
}


#endif


#if defined(IL_ENABLE_RX)
static void IlSteering_Torque_Command_CEClearFlagsFunc(void)
{
  CanGlobalInterruptDisable();
  ilRxIndicationFlags[1] &= (vuint8) 0xFE;
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gm end
 ----------------------------------------------------------------------------- */




#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlTxTimeoutIndirection[kIlNumberOfTxObjects] = 
{
  kIlNoTxToutIndirection /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_FAST_ON_START)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxFastOnStartDuration[kIlNumberOfTxObjects] = 
{
  kIlNoFastOnStartDuration /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_FAST_ON_START) && defined(IL_ENABLE_TX_MODE_SIGNALS)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxFastOnStartMuxDelay[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  0 /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  0 /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  0 /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  0 /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  0 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  0 /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_POLLING)
V_MEMROM0 V_MEMROM1 IlConfirmationFct V_MEMROM2 IlTxConfirmationFctPtr[kIlNumberOfTxObjects] = 
{
  V_NULL /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  V_NULL /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  V_NULL /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  V_NULL /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  V_NULL /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  V_NULL /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  V_NULL /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT) && defined(C_MULTIPLE_RECEIVE_CHANNEL) && defined(IL_ENABLE_TX_VARYING_TIMEOUT) && (kIlNumberOfChannels > 1)
V_MEMROM0 V_MEMROM1 IltTxTimeoutCounter V_MEMROM2 IlTxTimeout[kIlNumberOfChannels] = 
{
  5, 
  5
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_SECURE_EVENT) && defined(IL_ENABLE_TX_VARYING_REPETITION) && (kIlNumberOfTxObjects > 1)
V_MEMROM0 V_MEMROM1 IltTxRepetitionCounter V_MEMROM2 IlTxRepetitionCounters[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  0 /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  0 /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  0 /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  0 /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  0 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  0 /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlTimeoutIndicationFct V_MEMROM2 IlRxTimeoutFctPtr[kIlNumberOfRxTimeoutCounters] = 
{
  IlMsgWheel_Pulses_HSTimeoutIndication /* ID: 0x00000500, Wheel_Pulses_HS [FC] */, 
  IlMsgPPEI_Engine_General_Status_5TimeoutIndication /* ID: 0x000004d1, PPEI_Engine_General_Status_5 [FC] */, 
  IlMsgPPEI_Platform_Eng_Cntrl_RequestsTimeoutIndication /* ID: 0x000003f1, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  IlMsgNonDriven_Wheel_Grnd_Velocity_HSTimeoutIndication /* ID: 0x0000034a, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlMsgDriven_Wheel_Grnd_Velocity_HSTimeoutIndication /* ID: 0x00000348, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlMsgDriving_Mode_Control_HSTimeoutIndication /* ID: 0x00000232, Driving_Mode_Control_HS [FC] */, 
  IlMsgBrake_Pedal_Driver_Status_HSTimeoutIndication /* ID: 0x00000214, Brake_Pedal_Driver_Status_HS [FC] */, 
  IlMsgPPEI_Trans_General_Status_2TimeoutIndication /* ID: 0x000001f5, PPEI_Trans_General_Status_2 [FC] */, 
  IlMsgPPEI_Platform_General_StatusTimeoutIndication /* ID: 0x000001f1, PPEI_Platform_General_Status [FC] */, 
  IlMsgPPEI_Chassis_General_Status_1TimeoutIndication /* ID: 0x000001e9, PPEI_Chassis_General_Status_1 [FC] */, 
  IlMsgLKA_Steering_Torque_Cmd_HSTimeoutIndication /* ID: 0x00000180, LKA_Steering_Torque_Cmd_HS [FC] */, 
  IlMsgAntilock_Brake_and_TC_Status_HSTimeoutIndication /* ID: 0x0000017d, Antilock_Brake_and_TC_Status_HS [FC] */, 
  IlMsgPPEI_Engine_General_Status_1TimeoutIndication /* ID: 0x000000c9, PPEI_Engine_General_Status_1 [FC] */, 
  IlMsgNonDriven_Wheel_Grnd_Velocity_CETimeoutIndication /* ID: 0x0000034a, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlMsgDriven_Wheel_Grnd_Velocity_CETimeoutIndication /* ID: 0x00000348, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlMsgPark_Assist_Parallel_CETimeoutIndication /* ID: 0x00000337, Park_Assist_Parallel_CE [FC] */, 
  IlMsgVehicle_Dynamics_ESC_Hyb_CETimeoutIndication /* ID: 0x00000182, Vehicle_Dynamics_ESC_Hyb_CE [FC] */
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_POLLING)
V_MEMROM0 V_MEMROM1 IlIndicationFct V_MEMROM2 IlCanRxIndicationFctPtr[kIlCanNumberOfRxObjects] = 
{
  V_NULL /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  IlMsgWheel_Pulses_HSIndication /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  IlMsgPPEI_Engine_General_Status_5Indication /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  IlMsgPPEI_Platform_Eng_Cntrl_RequestsIndication /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  IlMsgNonDriven_Wheel_Grnd_Velocity_HSIndication /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlMsgDriven_Wheel_Grnd_Velocity_HSIndication /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlMsgDriving_Mode_Control_HSIndication /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  IlMsgBrake_Pedal_Driver_Status_HSIndication /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  IlMsgPPEI_Trans_General_Status_2Indication /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  IlMsgPPEI_Platform_General_StatusIndication /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  IlMsgPPEI_Chassis_General_Status_1Indication /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  IlMsgLKA_Steering_Torque_Cmd_HSIndication /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  IlMsgAntilock_Brake_and_TC_Status_HSIndication /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  IlMsgPPEI_Engine_General_Status_1Indication /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  IlMsgPPEI_NonDrivn_Whl_Rotationl_StatIndication /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  IlMsgNonDriven_Wheel_Grnd_Velocity_CEIndication /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlMsgDriven_Wheel_Grnd_Velocity_CEIndication /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlMsgPark_Assist_Parallel_CEIndication /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  IlMsgVehicle_Dynamics_ESC_Hyb_CEIndication /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  IlMsgSteering_Torque_Command_CEIndication /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_INDICATION_FLAG)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlIndicationOffset[kIlNumberOfRxIndicationBits] = 
{
  0x00 /* WhlRotStatLftNDrvn */, 
  0x01 /* TqOvrDltTqCmdVl */
};
#endif

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_INDICATION_FLAG)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlIndicationMask[kIlNumberOfRxIndicationBits] = 
{
  0x01 /* WhlRotStatLftNDrvn */, 
  0x01 /* TqOvrDltTqCmdVl */
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ RxDefaultInitValue Message Tables
 ----------------------------------------------------------------------------- */

V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 T1_HostToTargetIlRxDefaultInitValue[8] = 
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
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Wheel_Pulses_HSIlRxDefaultInitValue[4] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 PPEI_Engine_General_Status_5IlRxDefaultInitValue[2] = 
{
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 PPEI_Platform_Eng_Cntrl_RequestsIlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x08, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 NonDriven_Wheel_Grnd_Velocity_HSIlRxDefaultInitValue[5] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Driven_Wheel_Grnd_Velocity_HSIlRxDefaultInitValue[5] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Driving_Mode_Control_HSIlRxDefaultInitValue[5] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Brake_Pedal_Driver_Status_HSIlRxDefaultInitValue[6] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 PPEI_Trans_General_Status_2IlRxDefaultInitValue[6] = 
{
  0x0F, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 PPEI_Platform_General_StatusIlRxDefaultInitValue[8] = 
{
  0x80, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 PPEI_Chassis_General_Status_1IlRxDefaultInitValue[8] = 
{
  0x40, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 LKA_Steering_Torque_Cmd_HSIlRxDefaultInitValue[4] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Antilock_Brake_and_TC_Status_HSIlRxDefaultInitValue[1] = 
{
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 PPEI_Engine_General_Status_1IlRxDefaultInitValue[7] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 PPEI_NonDrivn_Whl_Rotationl_StatIlRxDefaultInitValue[8] = 
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
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 NonDriven_Wheel_Grnd_Velocity_CEIlRxDefaultInitValue[5] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Driven_Wheel_Grnd_Velocity_CEIlRxDefaultInitValue[5] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Park_Assist_Parallel_CEIlRxDefaultInitValue[7] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Vehicle_Dynamics_ESC_Hyb_CEIlRxDefaultInitValue[5] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 Steering_Torque_Command_CEIlRxDefaultInitValue[8] = 
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


/* -----------------------------------------------------------------------------
    &&&~ TxDefaultInitValue
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_DEFAULTVALUE)
V_MEMROM0 IL_MEMROM1 vuint8 IL_MEMROM2 IL_MEMROM3 *V_MEMROM1 V_MEMROM2  IlTxDefaultInitValue[kIlNumberOfTxObjects] =
{
  DTC_Triggered_778IlTxDefaultInitValue,
  PPEI_Steering_Wheel_AngleIlTxDefaultInitValue,
  LKA_Steering_Trq_Overlay_Stat_HSIlTxDefaultInitValue,
  Power_Steering_Information_HSIlTxDefaultInitValue,
  Electric_Power_Steering_CEIlTxDefaultInitValue,
  PPEI_Steering_Wheel_Angle_CEIlTxDefaultInitValue,
  Steering_Torque_Overlay_Stat_CEIlTxDefaultInitValue
};
#endif



/* -----------------------------------------------------------------------------
    &&&~ RxDefaultInitValue
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_DEFAULTVALUE)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 V_MEMROM3* V_MEMROM1 V_MEMROM2 IlRxDefaultInitValue[kIlNumberOfRxObjects] = 
{
  T1_HostToTargetIlRxDefaultInitValue, 
  Wheel_Pulses_HSIlRxDefaultInitValue, 
  PPEI_Engine_General_Status_5IlRxDefaultInitValue, 
  PPEI_Platform_Eng_Cntrl_RequestsIlRxDefaultInitValue, 
  NonDriven_Wheel_Grnd_Velocity_HSIlRxDefaultInitValue, 
  Driven_Wheel_Grnd_Velocity_HSIlRxDefaultInitValue, 
  Driving_Mode_Control_HSIlRxDefaultInitValue, 
  Brake_Pedal_Driver_Status_HSIlRxDefaultInitValue, 
  PPEI_Trans_General_Status_2IlRxDefaultInitValue, 
  PPEI_Platform_General_StatusIlRxDefaultInitValue, 
  PPEI_Chassis_General_Status_1IlRxDefaultInitValue, 
  LKA_Steering_Torque_Cmd_HSIlRxDefaultInitValue, 
  Antilock_Brake_and_TC_Status_HSIlRxDefaultInitValue, 
  PPEI_Engine_General_Status_1IlRxDefaultInitValue, 
  PPEI_NonDrivn_Whl_Rotationl_StatIlRxDefaultInitValue, 
  NonDriven_Wheel_Grnd_Velocity_CEIlRxDefaultInitValue, 
  Driven_Wheel_Grnd_Velocity_CEIlRxDefaultInitValue, 
  Park_Assist_Parallel_CEIlRxDefaultInitValue, 
  Vehicle_Dynamics_ESC_Hyb_CEIlRxDefaultInitValue, 
  Steering_Torque_Command_CEIlRxDefaultInitValue
};
#endif



/* -----------------------------------------------------------------------------
    &&&~ StartIndex Tables
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 IlTransmitHandle V_MEMROM2 IlTxMsgStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  4, 
  7
};
#endif



#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_CONFIRMATION_FLAG)
V_MEMROM0 V_MEMROM1 IlTransmitHandle V_MEMROM2 IlTxConfirmationFlagsStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  0, 
  0
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT_FLAG)
V_MEMROM0 V_MEMROM1 IlTransmitHandle V_MEMROM2 IlTxTimeoutFlagsStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  0, 
  0
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlTransmitHandle V_MEMROM2 IlTxTimeoutCntStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  0, 
  0
};
#endif


#if defined(IL_ENABLE_RX)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxMsgStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  15, 
  20
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_POLLING)
V_MEMROM0 V_MEMROM1 CanReceiveHandle V_MEMROM2 IlCanRxMsgStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  15, 
  20
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_INDICATION_FLAG)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxIndicationFlagsStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  1, 
  2
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_FIRSTVALUE_FLAG)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxFirstvalueFlagsStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  0, 
  0
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT_FLAG)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxTimeoutFlagsStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  4, 
  6
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_DATACHANGED_FLAG)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxDataChangedFlagsStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  0, 
  0
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxTimeoutCntStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  13, 
  17
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlReceiveHandle V_MEMROM2 IlRxTimerFlagsStartIndex[kIlNumberOfChannels+1] = 
{
  0, 
  2, 
  3
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ Implementation of Precopy Functions
 ----------------------------------------------------------------------------- */

#ifdef IL_ENABLE_RX
vuint8 IlMsgWheel_Pulses_HSPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgPPEI_Engine_General_Status_5PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgPPEI_Platform_Eng_Cntrl_RequestsPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgNonDriven_Wheel_Grnd_Velocity_HSPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgDriven_Wheel_Grnd_Velocity_HSPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgDriving_Mode_Control_HSPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgBrake_Pedal_Driver_Status_HSPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgPPEI_Trans_General_Status_2PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgPPEI_Platform_General_StatusPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgPPEI_Chassis_General_Status_1PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgLKA_Steering_Torque_Cmd_HSPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgAntilock_Brake_and_TC_Status_HSPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgPPEI_Engine_General_Status_1PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgNonDriven_Wheel_Grnd_Velocity_CEPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgDriven_Wheel_Grnd_Velocity_CEPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgPark_Assist_Parallel_CEPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgVehicle_Dynamics_ESC_Hyb_CEPreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation of Indication Functions
 ----------------------------------------------------------------------------- */

static void IlMsgWheel_Pulses_HSIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[0] &= (vuint8) 0xFE;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPPEI_Engine_General_Status_5Indication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[0] &= (vuint8) 0xFD;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPPEI_Platform_Eng_Cntrl_RequestsIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[0] &= (vuint8) 0xFB;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgNonDriven_Wheel_Grnd_Velocity_HSIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[0] &= (vuint8) 0xC7;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgDriven_Wheel_Grnd_Velocity_HSIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[0] &= (vuint8) 0x3F;
  ilRxTimeoutFlags[1] &= (vuint8) 0xFE;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgDriving_Mode_Control_HSIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[1] &= (vuint8) 0xFD;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgBrake_Pedal_Driver_Status_HSIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[1] &= (vuint8) 0xE3;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPPEI_Trans_General_Status_2Indication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[1] &= (vuint8) 0xDF;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPPEI_Platform_General_StatusIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[1] &= (vuint8) 0xBF;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPPEI_Chassis_General_Status_1Indication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[1] &= (vuint8) 0x7F;
  ilRxTimeoutFlags[2] &= (vuint8) 0xF8;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgLKA_Steering_Torque_Cmd_HSIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[2] &= (vuint8) 0x87;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgAntilock_Brake_and_TC_Status_HSIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[2] &= (vuint8) 0x7F;
  ilRxTimeoutFlags[3] &= (vuint8) 0xFE;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPPEI_Engine_General_Status_1Indication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[3] &= (vuint8) 0xC1;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPPEI_NonDrivn_Whl_Rotationl_StatIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxIndicationFlags[0] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgNonDriven_Wheel_Grnd_Velocity_CEIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[4] &= (vuint8) 0xF8;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgDriven_Wheel_Grnd_Velocity_CEIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[4] &= (vuint8) 0xC7;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgPark_Assist_Parallel_CEIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[4] &= (vuint8) 0x3F;
  ilRxTimeoutFlags[5] &= (vuint8) 0xF0;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgVehicle_Dynamics_ESC_Hyb_CEIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxTimeoutFlags[5] &= (vuint8) 0xCF;
  IlLeaveCriticalFlagAccess();
}


static void IlMsgSteering_Torque_Command_CEIndication(void )
{
  IlEnterCriticalFlagAccess();
  ilRxIndicationFlags[1] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
}




/* -----------------------------------------------------------------------------
    &&&~ Implementation Rx Timeout Indication Functions
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgWheel_Pulses_HSTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] |= (vuint8) 0x01;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgPPEI_Engine_General_Status_5TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] |= (vuint8) 0x02;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgPPEI_Platform_Eng_Cntrl_RequestsTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] |= (vuint8) 0x04;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgNonDriven_Wheel_Grnd_Velocity_HSTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] |= (vuint8) 0x38;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgDriven_Wheel_Grnd_Velocity_HSTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[0] |= (vuint8) 0xC0;
  ilRxTimeoutFlags[1] |= (vuint8) 0x01;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgDriving_Mode_Control_HSTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] |= (vuint8) 0x02;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgBrake_Pedal_Driver_Status_HSTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] |= (vuint8) 0x1C;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgPPEI_Trans_General_Status_2TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] |= (vuint8) 0x20;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgPPEI_Platform_General_StatusTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] |= (vuint8) 0x40;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgPPEI_Chassis_General_Status_1TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[1] |= (vuint8) 0x80;
  ilRxTimeoutFlags[2] |= (vuint8) 0x07;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgLKA_Steering_Torque_Cmd_HSTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[2] |= (vuint8) 0x78;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgAntilock_Brake_and_TC_Status_HSTimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[2] |= (vuint8) 0x80;
  ilRxTimeoutFlags[3] |= (vuint8) 0x01;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgPPEI_Engine_General_Status_1TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[3] |= (vuint8) 0x3E;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgNonDriven_Wheel_Grnd_Velocity_CETimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[4] |= (vuint8) 0x07;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgDriven_Wheel_Grnd_Velocity_CETimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[4] |= (vuint8) 0x38;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgPark_Assist_Parallel_CETimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[4] |= (vuint8) 0xC0;
  ilRxTimeoutFlags[5] |= (vuint8) 0x0F;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgVehicle_Dynamics_ESC_Hyb_CETimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ilRxTimeoutFlags[5] |= (vuint8) 0x30;
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation of a function to check IfActive flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_SYS_TX_SIGNALS_ARE_ACTIVE_FCT)
Il_Boolean IlTxSignalsAreActive(CanChannelHandle channel)
{
  channel = channel;
  return IL_FALSE;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation function to reset indication flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_POLLING)
void IlResetCanIndicationFlags(CanChannelHandle channel)
{
  CanGlobalInterruptDisable();
  if(channel == 0)
  {
    IlGetRxIndicationFlags(0) &= (vuint8) 0x00;
    IlGetRxIndicationFlags(1) &= (vuint8) 0xC0;
  }
  if(channel == 1)
  {
    IlGetRxIndicationFlags(1) &= (vuint8) 0x3F;
    IlGetRxIndicationFlags(2) &= (vuint8) 0xF8;
  }
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation function to reset confirmation flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
void IlResetCanConfirmationFlags(CanChannelHandle channel)
{
  CanGlobalInterruptDisable();
  if(channel == 0)
  {
    IlGetTxConfirmationFlags(0) &= (vuint8) 0xF0;
  }
  if(channel == 1)
  {
    IlGetTxConfirmationFlags(0) &= (vuint8) 0x8F;
  }
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Partial Signal Access for signals smaller or equal 8bit
 ----------------------------------------------------------------------------- */

/* Handle:    4,Name:                     EngOilTmpV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxEngOilTmpVShadowBuffer(_c_EngOilTmpGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalEngOilTmpV();
  rc = ((vuint8) pBuffer->EngOilTmpGroup.EngOilTmpV);
  IlLeaveCriticalEngOilTmpV();
  return rc;
}


#endif

/* Handle:    5,Name:                      EngOilTmp,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxEngOilTmpShadowBuffer(_c_EngOilTmpGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalEngOilTmp();
  rc = ((vuint8) pBuffer->EngOilTmpGroup.EngOilTmp);
  IlLeaveCriticalEngOilTmp();
  return rc;
}


#endif

/* Handle:    7,Name:                EngOffTmExtRngV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxEngOffTmExtRngVShadowBuffer(_c_EngOffTmExtRngGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalEngOffTmExtRngV();
  rc = ((vuint8) pBuffer->EngOffTmExtRngGroup.EngOffTmExtRngV);
  IlLeaveCriticalEngOffTmExtRngV();
  return rc;
}


#endif

/* Handle:    8,Name:                 EngOffTmExtRng,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxEngOffTmExtRngShadowBuffer(_c_EngOffTmExtRngGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalEngOffTmExtRng();
  rc = ((vuint8) pBuffer->EngOffTmExtRngGroup.EngOffTmExtRng);
  IlLeaveCriticalEngOffTmExtRng();
  return rc;
}


#endif

/* Handle:   11,Name:                OtsAirTmpCrValV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxOtsAirTmpCrValVShadowBuffer(_c_OtsAirTmpCrValGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalOtsAirTmpCrValV();
  rc = ((vuint8) pBuffer->OtsAirTmpCrValGroup.OtsAirTmpCrValV);
  IlLeaveCriticalOtsAirTmpCrValV();
  return rc;
}


#endif

/* Handle:   12,Name:                 OtsAirTmpCrVal,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxOtsAirTmpCrValShadowBuffer(_c_OtsAirTmpCrValGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalOtsAirTmpCrVal();
  rc = ((vuint8) pBuffer->OtsAirTmpCrValGroup.OtsAirTmpCrVal);
  IlLeaveCriticalOtsAirTmpCrVal();
  return rc;
}


#endif

/* Handle:   16,Name:       WhlGrndVlctyLftNnDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyLftNnDrvnV_0ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_0_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyLftNnDrvnV_0();
  rc = ((vuint8) pBuffer->WhlGrndVlctyLftNnDrvnGroup_0.WhlGrndVlctyLftNnDrvnV_0);
  IlLeaveCriticalWhlGrndVlctyLftNnDrvnV_0();
  return rc;
}


#endif

/* Handle:   19,Name:        WhlGrndVlctyRtNnDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyRtNnDrvnV_0ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_0_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyRtNnDrvnV_0();
  rc = ((vuint8) pBuffer->WhlGrndVlctyRtNnDrvnGroup_0.WhlGrndVlctyRtNnDrvnV_0);
  IlLeaveCriticalWhlGrndVlctyRtNnDrvnV_0();
  return rc;
}


#endif

/* Handle:   24,Name:         WhlGrndVlctyLftDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyLftDrvnV_0ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_0_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyLftDrvnV_0();
  rc = ((vuint8) pBuffer->WhlGrndVlctyLftDrvnGroup_0.WhlGrndVlctyLftDrvnV_0);
  IlLeaveCriticalWhlGrndVlctyLftDrvnV_0();
  return rc;
}


#endif

/* Handle:   27,Name:          WhlGrndVlctyRtDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyRtDrvnV_0ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_0_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyRtDrvnV_0();
  rc = ((vuint8) pBuffer->WhlGrndVlctyRtDrvnGroup_0.WhlGrndVlctyRtDrvnV_0);
  IlLeaveCriticalWhlGrndVlctyRtDrvnV_0();
  return rc;
}


#endif

/* Handle:   39,Name:                   TransEstGear,Size:  4,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxTransEstGearShadowBuffer(_c_TransEstGearGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalTransEstGear();
  rc = ((vuint8) pBuffer->TransEstGearGroup.TransEstGear);
  IlLeaveCriticalTransEstGear();
  return rc;
}


#endif

/* Handle:   40,Name:                  TransEstGearV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxTransEstGearVShadowBuffer(_c_TransEstGearGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalTransEstGearV();
  rc = ((vuint8) pBuffer->TransEstGearGroup.TransEstGearV);
  IlLeaveCriticalTransEstGearV();
  return rc;
}


#endif

/* Handle:   42,Name:                 TrnsShftLvrPos,Size:  4,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxTrnsShftLvrPosShadowBuffer(_c_TrnsShftLvrPosGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalTrnsShftLvrPos();
  rc = ((vuint8) pBuffer->TrnsShftLvrPosGroup.TrnsShftLvrPos);
  IlLeaveCriticalTrnsShftLvrPos();
  return rc;
}


#endif

/* Handle:   43,Name:                TrnsShftLvrPosV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxTrnsShftLvrPosVShadowBuffer(_c_TrnsShftLvrPosGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalTrnsShftLvrPosV();
  rc = ((vuint8) pBuffer->TrnsShftLvrPosGroup.TrnsShftLvrPosV);
  IlLeaveCriticalTrnsShftLvrPosV();
  return rc;
}


#endif

/* Handle:   49,Name:             BkupPwrModeMstrVDA,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxBkupPwrModeMstrVDAShadowBuffer(_c_BkupPwrModeMstrGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalBkupPwrModeMstrVDA();
  rc = ((vuint8) pBuffer->BkupPwrModeMstrGroup.BkupPwrModeMstrVDA);
  IlLeaveCriticalBkupPwrModeMstrVDA();
  return rc;
}


#endif

/* Handle:   53,Name:                     VSELatAccV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxVSELatAccVShadowBuffer(_c_VSELatAccGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalVSELatAccV();
  rc = ((vuint8) pBuffer->VSELatAccGroup.VSELatAccV);
  IlLeaveCriticalVSELatAccV();
  return rc;
}


#endif

/* Handle:   55,Name:           BrkPdlDrvAppPrsDetcd,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxBrkPdlDrvAppPrsDetcdShadowBuffer(_c_BrkPdlDrvAppPrsDetcdGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalBrkPdlDrvAppPrsDetcd();
  rc = ((vuint8) pBuffer->BrkPdlDrvAppPrsDetcdGroup.BrkPdlDrvAppPrsDetcd);
  IlLeaveCriticalBrkPdlDrvAppPrsDetcd();
  return rc;
}


#endif

/* Handle:   56,Name:          BrkPdlDrvAppPrsDetcdV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxBrkPdlDrvAppPrsDetcdVShadowBuffer(_c_BrkPdlDrvAppPrsDetcdGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalBrkPdlDrvAppPrsDetcdV();
  rc = ((vuint8) pBuffer->BrkPdlDrvAppPrsDetcdGroup.BrkPdlDrvAppPrsDetcdV);
  IlLeaveCriticalBrkPdlDrvAppPrsDetcdV();
  return rc;
}


#endif

/* Handle:   65,Name:                 VehDynYawRateV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxVehDynYawRateVShadowBuffer(_c_VehDynYawRateGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalVehDynYawRateV();
  rc = ((vuint8) pBuffer->VehDynYawRateGroup.VehDynYawRateV);
  IlLeaveCriticalVehDynYawRateV();
  return rc;
}


#endif

/* Handle:   69,Name:            VehDynOvrUndrStrV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxVehDynOvrUndrStrV_0ShadowBuffer(_c_VehDynOvrUndrStrGroup_0_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalVehDynOvrUndrStrV_0();
  rc = ((vuint8) pBuffer->VehDynOvrUndrStrGroup_0.VehDynOvrUndrStrV_0);
  IlLeaveCriticalVehDynOvrUndrStrV_0();
  return rc;
}


#endif

/* Handle:   72,Name:               LKATODC_TrqRqAct,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxLKATODC_TrqRqActShadowBuffer(_c_LKATqOvrDltCmd_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalLKATODC_TrqRqAct();
  rc = ((vuint8) pBuffer->LKATqOvrDltCmd.LKATODC_TrqRqAct);
  IlLeaveCriticalLKATODC_TrqRqAct();
  return rc;
}


#endif

/* Handle:   84,Name:               WRSLNDWhlDistVal,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSLNDWhlDistValShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSLNDWhlDistVal();
  rc = ((vuint8) pBuffer->WhlRotStatLftNDrvn.WRSLNDWhlDistVal);
  IlLeaveCriticalWRSLNDWhlDistVal();
  return rc;
}


#endif

/* Handle:   85,Name:              WRSLNDWhlRotStRst,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSLNDWhlRotStRstShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSLNDWhlRotStRst();
  rc = ((vuint8) pBuffer->WhlRotStatLftNDrvn.WRSLNDWhlRotStRst);
  IlLeaveCriticalWRSLNDWhlRotStRst();
  return rc;
}


#endif

/* Handle:   86,Name:                   WRSLNDSeqNum,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSLNDSeqNumShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSLNDSeqNum();
  rc = ((vuint8) pBuffer->WhlRotStatLftNDrvn.WRSLNDSeqNum);
  IlLeaveCriticalWRSLNDSeqNum();
  return rc;
}


#endif

/* Handle:   87,Name:               WRSLNDWhlDisTpRC,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSLNDWhlDisTpRCShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSLNDWhlDisTpRC();
  rc = ((vuint8) pBuffer->WhlRotStatLftNDrvn.WRSLNDWhlDisTpRC);
  IlLeaveCriticalWRSLNDWhlDisTpRC();
  return rc;
}


#endif

/* Handle:   91,Name:               WRSRNDWhlDistVal,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSRNDWhlDistValShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSRNDWhlDistVal();
  rc = ((vuint8) pBuffer->WhlRotStatRghtNDrvn.WRSRNDWhlDistVal);
  IlLeaveCriticalWRSRNDWhlDistVal();
  return rc;
}


#endif

/* Handle:   92,Name:              WRSRNDWhlRotStRst,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSRNDWhlRotStRstShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSRNDWhlRotStRst();
  rc = ((vuint8) pBuffer->WhlRotStatRghtNDrvn.WRSRNDWhlRotStRst);
  IlLeaveCriticalWRSRNDWhlRotStRst();
  return rc;
}


#endif

/* Handle:   93,Name:                   WRSRNDSeqNum,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSRNDSeqNumShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSRNDSeqNum();
  rc = ((vuint8) pBuffer->WhlRotStatRghtNDrvn.WRSRNDSeqNum);
  IlLeaveCriticalWRSRNDSeqNum();
  return rc;
}


#endif

/* Handle:   94,Name:               WRSRNDWhlDisTpRC,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWRSRNDWhlDisTpRCShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWRSRNDWhlDisTpRC();
  rc = ((vuint8) pBuffer->WhlRotStatRghtNDrvn.WRSRNDWhlDisTpRC);
  IlLeaveCriticalWRSRNDWhlDisTpRC();
  return rc;
}


#endif

/* Handle:   98,Name:       WhlGrndVlctyLftNnDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyLftNnDrvnV_1ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_1_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyLftNnDrvnV_1();
  rc = ((vuint8) pBuffer->WhlGrndVlctyLftNnDrvnGroup_1.WhlGrndVlctyLftNnDrvnV_1);
  IlLeaveCriticalWhlGrndVlctyLftNnDrvnV_1();
  return rc;
}


#endif

/* Handle:  101,Name:        WhlGrndVlctyRtNnDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyRtNnDrvnV_1ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_1_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyRtNnDrvnV_1();
  rc = ((vuint8) pBuffer->WhlGrndVlctyRtNnDrvnGroup_1.WhlGrndVlctyRtNnDrvnV_1);
  IlLeaveCriticalWhlGrndVlctyRtNnDrvnV_1();
  return rc;
}


#endif

/* Handle:  105,Name:         WhlGrndVlctyLftDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyLftDrvnV_1ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_1_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyLftDrvnV_1();
  rc = ((vuint8) pBuffer->WhlGrndVlctyLftDrvnGroup_1.WhlGrndVlctyLftDrvnV_1);
  IlLeaveCriticalWhlGrndVlctyLftDrvnV_1();
  return rc;
}


#endif

/* Handle:  108,Name:          WhlGrndVlctyRtDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxWhlGrndVlctyRtDrvnV_1ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_1_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalWhlGrndVlctyRtDrvnV_1();
  rc = ((vuint8) pBuffer->WhlGrndVlctyRtDrvnGroup_1.WhlGrndVlctyRtDrvnV_1);
  IlLeaveCriticalWhlGrndVlctyRtDrvnV_1();
  return rc;
}


#endif

/* Handle:  114,Name:                   SWAR_ReqActV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxSWAR_ReqActVShadowBuffer(_c_StrWhlAngReq_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalSWAR_ReqActV();
  rc = ((vuint8) pBuffer->StrWhlAngReq.SWAR_ReqActV);
  IlLeaveCriticalSWAR_ReqActV();
  return rc;
}


#endif

/* Handle:  115,Name:                    SWAR_ReqAct,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxSWAR_ReqActShadowBuffer(_c_StrWhlAngReq_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalSWAR_ReqAct();
  rc = ((vuint8) pBuffer->StrWhlAngReq.SWAR_ReqAct);
  IlLeaveCriticalSWAR_ReqAct();
  return rc;
}


#endif

/* Handle:  121,Name:               VSELongAccLoResV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxVSELongAccLoResVShadowBuffer(_c_VSELongAccLoResGroup_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalVSELongAccLoResV();
  rc = ((vuint8) pBuffer->VSELongAccLoResGroup.VSELongAccLoResV);
  IlLeaveCriticalVSELongAccLoResV();
  return rc;
}


#endif

/* Handle:  126,Name:            VehDynOvrUndrStrV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxVehDynOvrUndrStrV_1ShadowBuffer(_c_VehDynOvrUndrStrGroup_1_buf* pBuffer)
{
  vuint8 rc;
  IlEnterCriticalVehDynOvrUndrStrV_1();
  rc = ((vuint8) pBuffer->VehDynOvrUndrStrGroup_1.VehDynOvrUndrStrV_1);
  IlLeaveCriticalVehDynOvrUndrStrV_1();
  return rc;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 8bit and smaller or equal 32bit
 ----------------------------------------------------------------------------- */

/* Handle:    3,Name:            WhlRotStatTmstmpRes,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlRotStatTmstmpRes(void)
{
  vuint16 rc;
  IlEnterCriticalWhlRotStatTmstmpRes();
  rc = ((vuint16) Wheel_Pulses_HS.Wheel_Pulses_HS.WhlRotStatTmstmpRes_0);
  rc |= ((vuint16) Wheel_Pulses_HS.Wheel_Pulses_HS.WhlRotStatTmstmpRes_1) << 8;
  IlLeaveCriticalWhlRotStatTmstmpRes();
  return rc;
}


#endif

/* Handle:   15,Name:        WhlGrndVlctyLftNnDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyLftNnDrvn_0ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_0_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyLftNnDrvn_0();
  rc = ((vuint16) pBuffer->WhlGrndVlctyLftNnDrvnGroup_0.WhlGrndVlctyLftNnDrvn_0_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyLftNnDrvnGroup_0.WhlGrndVlctyLftNnDrvn_0_1) << 8;
  IlLeaveCriticalWhlGrndVlctyLftNnDrvn_0();
  return rc;
}


#endif

/* Handle:   18,Name:         WhlGrndVlctyRtNnDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyRtNnDrvn_0ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_0_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyRtNnDrvn_0();
  rc = ((vuint16) pBuffer->WhlGrndVlctyRtNnDrvnGroup_0.WhlGrndVlctyRtNnDrvn_0_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyRtNnDrvnGroup_0.WhlGrndVlctyRtNnDrvn_0_1) << 8;
  IlLeaveCriticalWhlGrndVlctyRtNnDrvn_0();
  return rc;
}


#endif

/* Handle:   23,Name:          WhlGrndVlctyLftDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyLftDrvn_0ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_0_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyLftDrvn_0();
  rc = ((vuint16) pBuffer->WhlGrndVlctyLftDrvnGroup_0.WhlGrndVlctyLftDrvn_0_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyLftDrvnGroup_0.WhlGrndVlctyLftDrvn_0_1) << 8;
  IlLeaveCriticalWhlGrndVlctyLftDrvn_0();
  return rc;
}


#endif

/* Handle:   26,Name:           WhlGrndVlctyRtDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyRtDrvn_0ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_0_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyRtDrvn_0();
  rc = ((vuint16) pBuffer->WhlGrndVlctyRtDrvnGroup_0.WhlGrndVlctyRtDrvn_0_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyRtDrvnGroup_0.WhlGrndVlctyRtDrvn_0_1) << 8;
  IlLeaveCriticalWhlGrndVlctyRtDrvn_0();
  return rc;
}


#endif

/* Handle:   52,Name:                      VSELatAcc,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxVSELatAccShadowBuffer(_c_VSELatAccGroup_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalVSELatAcc();
  rc = ((vuint16) pBuffer->VSELatAccGroup.VSELatAcc_0);
  rc |= ((vuint16) pBuffer->VSELatAccGroup.VSELatAcc_1) << 8;
  IlLeaveCriticalVSELatAcc();
  return rc;
}


#endif

/* Handle:   64,Name:                  VehDynYawRate,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxVehDynYawRateShadowBuffer(_c_VehDynYawRateGroup_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalVehDynYawRate();
  rc = ((vuint16) pBuffer->VehDynYawRateGroup.VehDynYawRate_0);
  rc |= ((vuint16) pBuffer->VehDynYawRateGroup.VehDynYawRate_1) << 8;
  IlLeaveCriticalVehDynYawRate();
  return rc;
}


#endif

/* Handle:   68,Name:             VehDynOvrUndrStr_0,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxVehDynOvrUndrStr_0ShadowBuffer(_c_VehDynOvrUndrStrGroup_0_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalVehDynOvrUndrStr_0();
  rc = ((vuint16) pBuffer->VehDynOvrUndrStrGroup_0.VehDynOvrUndrStr_0_0);
  rc |= ((vuint16) pBuffer->VehDynOvrUndrStrGroup_0.VehDynOvrUndrStr_0_1) << 8;
  IlLeaveCriticalVehDynOvrUndrStr_0();
  return rc;
}


#endif

/* Handle:   71,Name:                  LKATODC_TrqVl,Size: 11,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxLKATODC_TrqVlShadowBuffer(_c_LKATqOvrDltCmd_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalLKATODC_TrqVl();
  rc = ((vuint16) pBuffer->LKATqOvrDltCmd.LKATODC_TrqVl_0);
  rc |= ((vuint16) pBuffer->LKATqOvrDltCmd.LKATODC_TrqVl_1) << 8;
  IlLeaveCriticalLKATODC_TrqVl();
  return rc;
}


#endif

/* Handle:   75,Name:            LKATqOvrDltCmdPrtVl,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxLKATqOvrDltCmdPrtVl(void)
{
  vuint16 rc;
  IlEnterCriticalLKATqOvrDltCmdPrtVl();
  rc = ((vuint16) LKA_Steering_Torque_Cmd_HS.LKA_Steering_Torque_Cmd_HS.LKATqOvrDltCmdPrtVl_0);
  rc |= ((vuint16) LKA_Steering_Torque_Cmd_HS.LKA_Steering_Torque_Cmd_HS.LKATqOvrDltCmdPrtVl_1) << 8;
  IlLeaveCriticalLKATqOvrDltCmdPrtVl();
  return rc;
}


#endif

/* Handle:   81,Name:                         EngSpd,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxEngSpd(void)
{
  vuint16 rc;
  IlEnterCriticalEngSpd();
  rc = ((vuint16) PPEI_Engine_General_Status_1.PPEI_Engine_General_Status_1.EngSpd_0);
  rc |= ((vuint16) PPEI_Engine_General_Status_1.PPEI_Engine_General_Status_1.EngSpd_1) << 8;
  IlLeaveCriticalEngSpd();
  return rc;
}


#endif

/* Handle:   83,Name:             WRSLNDWhlDistPCntr,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWRSLNDWhlDistPCntrShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWRSLNDWhlDistPCntr();
  rc = ((vuint16) pBuffer->WhlRotStatLftNDrvn.WRSLNDWhlDistPCntr_0);
  rc |= ((vuint16) pBuffer->WhlRotStatLftNDrvn.WRSLNDWhlDistPCntr_1) << 8;
  IlLeaveCriticalWRSLNDWhlDistPCntr();
  return rc;
}


#endif

/* Handle:   88,Name:              WRSLNDWhlDistTstm,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWRSLNDWhlDistTstmShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWRSLNDWhlDistTstm();
  rc = ((vuint16) pBuffer->WhlRotStatLftNDrvn.WRSLNDWhlDistTstm_0);
  rc |= ((vuint16) pBuffer->WhlRotStatLftNDrvn.WRSLNDWhlDistTstm_1) << 8;
  IlLeaveCriticalWRSLNDWhlDistTstm();
  return rc;
}


#endif

/* Handle:   90,Name:             WRSRNDWhlDistPCntr,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWRSRNDWhlDistPCntrShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWRSRNDWhlDistPCntr();
  rc = ((vuint16) pBuffer->WhlRotStatRghtNDrvn.WRSRNDWhlDistPCntr_0);
  rc |= ((vuint16) pBuffer->WhlRotStatRghtNDrvn.WRSRNDWhlDistPCntr_1) << 8;
  IlLeaveCriticalWRSRNDWhlDistPCntr();
  return rc;
}


#endif

/* Handle:   95,Name:              WRSRNDWhlDistTstm,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWRSRNDWhlDistTstmShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWRSRNDWhlDistTstm();
  rc = ((vuint16) pBuffer->WhlRotStatRghtNDrvn.WRSRNDWhlDistTstm_0);
  rc |= ((vuint16) pBuffer->WhlRotStatRghtNDrvn.WRSRNDWhlDistTstm_1) << 8;
  IlLeaveCriticalWRSRNDWhlDistTstm();
  return rc;
}


#endif

/* Handle:   97,Name:        WhlGrndVlctyLftNnDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyLftNnDrvn_1ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_1_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyLftNnDrvn_1();
  rc = ((vuint16) pBuffer->WhlGrndVlctyLftNnDrvnGroup_1.WhlGrndVlctyLftNnDrvn_1_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyLftNnDrvnGroup_1.WhlGrndVlctyLftNnDrvn_1_1) << 8;
  IlLeaveCriticalWhlGrndVlctyLftNnDrvn_1();
  return rc;
}


#endif

/* Handle:  100,Name:         WhlGrndVlctyRtNnDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyRtNnDrvn_1ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_1_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyRtNnDrvn_1();
  rc = ((vuint16) pBuffer->WhlGrndVlctyRtNnDrvnGroup_1.WhlGrndVlctyRtNnDrvn_1_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyRtNnDrvnGroup_1.WhlGrndVlctyRtNnDrvn_1_1) << 8;
  IlLeaveCriticalWhlGrndVlctyRtNnDrvn_1();
  return rc;
}


#endif

/* Handle:  104,Name:          WhlGrndVlctyLftDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyLftDrvn_1ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_1_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyLftDrvn_1();
  rc = ((vuint16) pBuffer->WhlGrndVlctyLftDrvnGroup_1.WhlGrndVlctyLftDrvn_1_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyLftDrvnGroup_1.WhlGrndVlctyLftDrvn_1_1) << 8;
  IlLeaveCriticalWhlGrndVlctyLftDrvn_1();
  return rc;
}


#endif

/* Handle:  107,Name:           WhlGrndVlctyRtDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxWhlGrndVlctyRtDrvn_1ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_1_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalWhlGrndVlctyRtDrvn_1();
  rc = ((vuint16) pBuffer->WhlGrndVlctyRtDrvnGroup_1.WhlGrndVlctyRtDrvn_1_0);
  rc |= ((vuint16) pBuffer->WhlGrndVlctyRtDrvnGroup_1.WhlGrndVlctyRtDrvn_1_1) << 8;
  IlLeaveCriticalWhlGrndVlctyRtDrvn_1();
  return rc;
}


#endif

/* Handle:  116,Name:                   SWAR_TrgtAng,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxSWAR_TrgtAngShadowBuffer(_c_StrWhlAngReq_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalSWAR_TrgtAng();
  rc = ((vuint16) pBuffer->StrWhlAngReq.SWAR_TrgtAng_0);
  rc |= ((vuint16) pBuffer->StrWhlAngReq.SWAR_TrgtAng_1) << 8;
  IlLeaveCriticalSWAR_TrgtAng();
  return rc;
}


#endif

/* Handle:  118,Name:             StrWhlAngReqPrtVal,Size: 18,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
vuint32 IlGetRxStrWhlAngReqPrtVal(void)
{
  vuint32 rc;
  IlEnterCriticalStrWhlAngReqPrtVal();
  rc = ((vuint32) Park_Assist_Parallel_CE.Park_Assist_Parallel_CE.StrWhlAngReqPrtVal_0);
  rc |= ((vuint32) Park_Assist_Parallel_CE.Park_Assist_Parallel_CE.StrWhlAngReqPrtVal_1) << 8;
  rc |= ((vuint32) Park_Assist_Parallel_CE.Park_Assist_Parallel_CE.StrWhlAngReqPrtVal_2) << 16;
  IlLeaveCriticalStrWhlAngReqPrtVal();
  return rc;
}


#endif

/* Handle:  122,Name:                VSELongAccLoRes,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxVSELongAccLoResShadowBuffer(_c_VSELongAccLoResGroup_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalVSELongAccLoRes();
  rc = ((vuint16) pBuffer->VSELongAccLoResGroup.VSELongAccLoRes_0);
  rc |= ((vuint16) pBuffer->VSELongAccLoResGroup.VSELongAccLoRes_1) << 8;
  IlLeaveCriticalVSELongAccLoRes();
  return rc;
}


#endif

/* Handle:  125,Name:             VehDynOvrUndrStr_1,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxVehDynOvrUndrStr_1ShadowBuffer(_c_VehDynOvrUndrStrGroup_1_buf* pBuffer)
{
  vuint16 rc;
  IlEnterCriticalVehDynOvrUndrStr_1();
  rc = ((vuint16) pBuffer->VehDynOvrUndrStrGroup_1.VehDynOvrUndrStr_1_0);
  rc |= ((vuint16) pBuffer->VehDynOvrUndrStrGroup_1.VehDynOvrUndrStr_1_1) << 8;
  IlLeaveCriticalVehDynOvrUndrStr_1();
  return rc;
}


#endif

/* Handle:  128,Name:                TqOvrDltTqCmdVl,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxTqOvrDltTqCmdVl(void)
{
  vuint16 rc;
  IlEnterCriticalTqOvrDltTqCmdVl();
  rc = ((vuint16) Steering_Torque_Command_CE.Steering_Torque_Command_CE.TqOvrDltTqCmdVl_0);
  rc |= ((vuint16) Steering_Torque_Command_CE.Steering_Torque_Command_CE.TqOvrDltTqCmdVl_1) << 8;
  IlLeaveCriticalTqOvrDltTqCmdVl();
  return rc;
}


#endif

/* Handle:  131,Name:                TrqOvrlCmdChksm,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxTrqOvrlCmdChksm(void)
{
  vuint16 rc;
  IlEnterCriticalTrqOvrlCmdChksm();
  rc = ((vuint16) Steering_Torque_Command_CE.Steering_Torque_Command_CE.TrqOvrlCmdChksm_0);
  rc |= ((vuint16) Steering_Torque_Command_CE.Steering_Torque_Command_CE.TrqOvrlCmdChksm_1) << 8;
  IlLeaveCriticalTrqOvrlCmdChksm();
  return rc;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 32bit
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:                T1_HostToTarget,Size: 64,UsedBytes:  8,SingleSignal */
#ifdef IL_ENABLE_RX
void IlGetRxT1_HostToTarget(vuint8* pBuffer)
{
  IlEnterCriticalT1_HostToTarget();
  pBuffer[0] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_0;
  pBuffer[1] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_1;
  pBuffer[2] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_2;
  pBuffer[3] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_3;
  pBuffer[4] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_4;
  pBuffer[5] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_5;
  pBuffer[6] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_6;
  pBuffer[7] = (vuint8) T1_HostToTarget.T1_HostToTarget.T1_HostToTarget_7;
  IlLeaveCriticalT1_HostToTarget();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Partial Signal Access for signals smaller or equal 8bit
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:          DTCI_DTCTriggered_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_DTCTriggered_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_DTCTriggered_778();
  pBuffer->DTCInfo_778.DTCI_DTCTriggered_778 = sigData;
  IlLeaveCriticalDTCI_DTCTriggered_778();
}


#endif

/* Handle:    1,Name:                DTCIUnused7_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCIUnused7_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCIUnused7_778();
  pBuffer->DTCInfo_778.DTCIUnused7_778 = sigData;
  IlLeaveCriticalDTCIUnused7_778();
}


#endif

/* Handle:    2,Name:                DTCIUnused6_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCIUnused6_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCIUnused6_778();
  pBuffer->DTCInfo_778.DTCIUnused6_778 = sigData;
  IlLeaveCriticalDTCIUnused6_778();
}


#endif

/* Handle:    3,Name:                DTCIUnused5_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCIUnused5_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCIUnused5_778();
  pBuffer->DTCInfo_778.DTCIUnused5_778 = sigData;
  IlLeaveCriticalDTCIUnused5_778();
}


#endif

/* Handle:    4,Name:                DTCIUnused4_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCIUnused4_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCIUnused4_778();
  pBuffer->DTCInfo_778.DTCIUnused4_778 = sigData;
  IlLeaveCriticalDTCIUnused4_778();
}


#endif

/* Handle:    5,Name:                DTCIUnused3_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCIUnused3_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCIUnused3_778();
  pBuffer->DTCInfo_778.DTCIUnused3_778 = sigData;
  IlLeaveCriticalDTCIUnused3_778();
}


#endif

/* Handle:    6,Name:                DTCIUnused2_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCIUnused2_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCIUnused2_778();
  pBuffer->DTCInfo_778.DTCIUnused2_778 = sigData;
  IlLeaveCriticalDTCIUnused2_778();
}


#endif

/* Handle:    7,Name:                DTCIUnused1_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCIUnused1_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCIUnused1_778();
  pBuffer->DTCInfo_778.DTCIUnused1_778 = sigData;
  IlLeaveCriticalDTCIUnused1_778();
}


#endif

/* Handle:    8,Name:             DTCI_DTCSource_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_DTCSource_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_DTCSource_778();
  pBuffer->DTCInfo_778.DTCI_DTCSource_778 = sigData;
  IlLeaveCriticalDTCI_DTCSource_778();
}


#endif

/* Handle:   10,Name:           DTCI_DTCFailType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_DTCFailType_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_DTCFailType_778();
  pBuffer->DTCInfo_778.DTCI_DTCFailType_778 = sigData;
  IlLeaveCriticalDTCI_DTCFailType_778();
}


#endif

/* Handle:   11,Name:         DTCI_CodeSupported_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_CodeSupported_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_CodeSupported_778();
  pBuffer->DTCInfo_778.DTCI_CodeSupported_778 = sigData;
  IlLeaveCriticalDTCI_CodeSupported_778();
}


#endif

/* Handle:   12,Name:         DTCI_CurrentStatus_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_CurrentStatus_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_CurrentStatus_778();
  pBuffer->DTCInfo_778.DTCI_CurrentStatus_778 = sigData;
  IlLeaveCriticalDTCI_CurrentStatus_778();
}


#endif

/* Handle:   13,Name:       DTCI_TstNPsdCdClrdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_TstNPsdCdClrdSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_TstNPsdCdClrdSt_778();
  pBuffer->DTCInfo_778.DTCI_TstNPsdCdClrdSt_778 = sigData;
  IlLeaveCriticalDTCI_TstNPsdCdClrdSt_778();
}


#endif

/* Handle:   14,Name:      DTCI_TstFldCdClrdStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_TstFldCdClrdStat_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_TstFldCdClrdStat_778();
  pBuffer->DTCInfo_778.DTCI_TstFldCdClrdStat_778 = sigData;
  IlLeaveCriticalDTCI_TstFldCdClrdStat_778();
}


#endif

/* Handle:   15,Name:              DTCI_HistStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_HistStat_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_HistStat_778();
  pBuffer->DTCInfo_778.DTCI_HistStat_778 = sigData;
  IlLeaveCriticalDTCI_HistStat_778();
}


#endif

/* Handle:   16,Name:        DTCI_TstNPsdPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_TstNPsdPwrUpSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_TstNPsdPwrUpSt_778();
  pBuffer->DTCInfo_778.DTCI_TstNPsdPwrUpSt_778 = sigData;
  IlLeaveCriticalDTCI_TstNPsdPwrUpSt_778();
}


#endif

/* Handle:   17,Name:         DTCI_TstFldPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_TstFldPwrUpSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_TstFldPwrUpSt_778();
  pBuffer->DTCInfo_778.DTCI_TstFldPwrUpSt_778 = sigData;
  IlLeaveCriticalDTCI_TstFldPwrUpSt_778();
}


#endif

/* Handle:   18,Name:           DTCI_WrnIndRqdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_WrnIndRqdSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_WrnIndRqdSt_778();
  pBuffer->DTCInfo_778.DTCI_WrnIndRqdSt_778 = sigData;
  IlLeaveCriticalDTCI_WrnIndRqdSt_778();
}


#endif

/* Handle:   19,Name:          DTCI_DTCFaultType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_DTCFaultType_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDTCI_DTCFaultType_778();
  pBuffer->DTCInfo_778.DTCI_DTCFaultType_778 = sigData;
  IlLeaveCriticalDTCI_DTCFaultType_778();
}


#endif

/* Handle:   24,Name:                    StrWhAngV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAngV_0ShadowBuffer(_c_StrWhAngGroup_0_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalStrWhAngV_0();
  pBuffer->StrWhAngGroup_0.StrWhAngV_0 = sigData;
  IlLeaveCriticalStrWhAngV_0();
}


#endif

/* Handle:   30,Name:                 StrWhAngGrdV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAngGrdV_0ShadowBuffer(_c_StrWhAngGrdGroup_0_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalStrWhAngGrdV_0();
  pBuffer->StrWhAngGrdGroup_0.StrWhAngGrdV_0 = sigData;
  IlLeaveCriticalStrWhAngGrdV_0();
}


#endif

/* Handle:   37,Name:              HndsOffStrWhlDtSt,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHndsOffStrWhlDtStShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalHndsOffStrWhlDtSt();
  pBuffer->HndsOffStrWhlDtStGroup.HndsOffStrWhlDtSt = sigData;
  IlLeaveCriticalHndsOffStrWhlDtSt();
}


#endif

/* Handle:   38,Name:             HndsOffStrWhlDtStV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHndsOffStrWhlDtStVShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalHndsOffStrWhlDtStV();
  pBuffer->HndsOffStrWhlDtStGroup.HndsOffStrWhlDtStV = sigData;
  IlLeaveCriticalHndsOffStrWhlDtStV();
}


#endif

/* Handle:   43,Name:                LKADrvAppldTrqV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLKADrvAppldTrqVShadowBuffer(_c_LKADrvAppldTrqGroup_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalLKADrvAppldTrqV();
  pBuffer->LKADrvAppldTrqGroup.LKADrvAppldTrqV = sigData;
  IlLeaveCriticalLKADrvAppldTrqV();
}


#endif

/* Handle:   50,Name:               DrvStrIntfrDtcdV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDrvStrIntfrDtcdVShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDrvStrIntfrDtcdV();
  pBuffer->DrvStrIntfrDtcdGroup.DrvStrIntfrDtcdV = sigData;
  IlLeaveCriticalDrvStrIntfrDtcdV();
}


#endif

/* Handle:   51,Name:                DrvStrIntfrDtcd,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDrvStrIntfrDtcdShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalDrvStrIntfrDtcd();
  pBuffer->DrvStrIntfrDtcdGroup.DrvStrIntfrDtcd = sigData;
  IlLeaveCriticalDrvStrIntfrDtcd();
}


#endif

/* Handle:   60,Name:                    StrWhAngV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAngV_1ShadowBuffer(_c_StrWhAngGroup_1_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalStrWhAngV_1();
  pBuffer->StrWhAngGroup_1.StrWhAngV_1 = sigData;
  IlLeaveCriticalStrWhAngV_1();
}


#endif

/* Handle:   66,Name:                 StrWhAngGrdV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAngGrdV_1ShadowBuffer(_c_StrWhAngGrdGroup_1_buf* pBuffer, vuint8 sigData)
{
  IlEnterCriticalStrWhAngGrdV_1();
  pBuffer->StrWhAngGrdGroup_1.StrWhAngGrdV_1 = sigData;
  IlLeaveCriticalStrWhAngGrdV_1();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access 
 ----------------------------------------------------------------------------- */

/* Handle:    9,Name:             DTCI_DTCNumber_778,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDTCI_DTCNumber_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint16 sigData)
{
  pBuffer->DTCInfo_778.DTCI_DTCNumber_778_0 = ((vuint8) sigData);
  pBuffer->DTCInfo_778.DTCI_DTCNumber_778_1 = ((vuint8) (sigData >> 8));
}


#endif

/* Handle:   25,Name:                     StrWhAng_0,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAng_0ShadowBuffer(_c_StrWhAngGroup_0_buf* pBuffer, vuint16 sigData)
{
  pBuffer->StrWhAngGroup_0.StrWhAng_0_0 = ((vuint8) sigData);
  pBuffer->StrWhAngGroup_0.StrWhAng_0_1 = ((vuint8) (sigData >> 8));
}


#endif

/* Handle:   29,Name:                  StrWhAngGrd_0,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAngGrd_0ShadowBuffer(_c_StrWhAngGrdGroup_0_buf* pBuffer, vuint16 sigData)
{
  pBuffer->StrWhAngGrdGroup_0.StrWhAngGrd_0_0 = ((vuint8) sigData);
  pBuffer->StrWhAngGrdGroup_0.StrWhAngGrd_0_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
}


#endif

/* Handle:   32,Name:               StrAngSnsChksm_0,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrAngSnsChksm_0(vuint16 sigData)
{
  IlEnterCriticalStrAngSnsChksm_0();
  PPEI_Steering_Wheel_Angle.PPEI_Steering_Wheel_Angle.StrAngSnsChksm_0_0 = ((vuint8) sigData);
  PPEI_Steering_Wheel_Angle.PPEI_Steering_Wheel_Angle.StrAngSnsChksm_0_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalStrAngSnsChksm_0();
}


#endif

/* Handle:   33,Name:            LKAElPwrStTtlTqDlvd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLKAElPwrStTtlTqDlvd(vuint16 sigData)
{
  IlEnterCriticalLKAElPwrStTtlTqDlvd();
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKAElPwrStTtlTqDlvd_0 = ((vuint8) sigData);
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKAElPwrStTtlTqDlvd_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalLKAElPwrStTtlTqDlvd();
}


#endif

/* Handle:   35,Name:           LKATrqOvrlDltTrqDlvd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLKATrqOvrlDltTrqDlvd(vuint16 sigData)
{
  IlEnterCriticalLKATrqOvrlDltTrqDlvd();
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKATrqOvrlDltTrqDlvd_0 = ((vuint8) sigData);
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKATrqOvrlDltTrqDlvd_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalLKATrqOvrlDltTrqDlvd();
}


#endif

/* Handle:   40,Name:            LKATrqOvrlStatChksm,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLKATrqOvrlStatChksm(vuint16 sigData)
{
  IlEnterCriticalLKATrqOvrlStatChksm();
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKATrqOvrlStatChksm_0 = ((vuint8) sigData);
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKATrqOvrlStatChksm_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalLKATrqOvrlStatChksm();
}


#endif

/* Handle:   42,Name:                 LKADrvAppldTrq,Size: 11,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLKADrvAppldTrqShadowBuffer(_c_LKADrvAppldTrqGroup_buf* pBuffer, vuint16 sigData)
{
  pBuffer->LKADrvAppldTrqGroup.LKADrvAppldTrq_0 = ((vuint8) sigData);
  pBuffer->LKADrvAppldTrqGroup.LKADrvAppldTrq_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
}


#endif

/* Handle:   61,Name:                     StrWhAng_1,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAng_1ShadowBuffer(_c_StrWhAngGroup_1_buf* pBuffer, vuint16 sigData)
{
  pBuffer->StrWhAngGroup_1.StrWhAng_1_0 = ((vuint8) sigData);
  pBuffer->StrWhAngGroup_1.StrWhAng_1_1 = ((vuint8) (sigData >> 8));
}


#endif

/* Handle:   65,Name:                  StrWhAngGrd_1,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrWhAngGrd_1ShadowBuffer(_c_StrWhAngGrdGroup_1_buf* pBuffer, vuint16 sigData)
{
  pBuffer->StrWhAngGrdGroup_1.StrWhAngGrd_1_0 = ((vuint8) sigData);
  pBuffer->StrWhAngGrdGroup_1.StrWhAngGrd_1_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
}


#endif

/* Handle:   68,Name:               StrAngSnsChksm_1,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxStrAngSnsChksm_1(vuint16 sigData)
{
  IlEnterCriticalStrAngSnsChksm_1();
  PPEI_Steering_Wheel_Angle_CE.PPEI_Steering_Wheel_Angle_CE.StrAngSnsChksm_1_0 = ((vuint8) sigData);
  PPEI_Steering_Wheel_Angle_CE.PPEI_Steering_Wheel_Angle_CE.StrAngSnsChksm_1_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalStrAngSnsChksm_1();
}


#endif

/* Handle:   69,Name:               ElPwrStTtlTqDlrd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxElPwrStTtlTqDlrd(vuint16 sigData)
{
  IlEnterCriticalElPwrStTtlTqDlrd();
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.ElPwrStTtlTqDlrd_0 = ((vuint8) sigData);
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.ElPwrStTtlTqDlrd_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalElPwrStTtlTqDlrd();
}


#endif

/* Handle:   72,Name:              TrqOvrlDltTrqDlrd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxTrqOvrlDltTrqDlrd(vuint16 sigData)
{
  IlEnterCriticalTrqOvrlDltTrqDlrd();
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.TrqOvrlDltTrqDlrd_0 = ((vuint8) sigData);
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.TrqOvrlDltTrqDlrd_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalTrqOvrlDltTrqDlrd();
}


#endif

/* Handle:   73,Name:                  TrqOvrlDChksm,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxTrqOvrlDChksm(vuint16 sigData)
{
  IlEnterCriticalTrqOvrlDChksm();
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.TrqOvrlDChksm_0 = ((vuint8) sigData);
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.TrqOvrlDChksm_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x07));
  IlLeaveCriticalTrqOvrlDChksm();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Group Access 
 ----------------------------------------------------------------------------- */

void IlGetRxEngOilTmpGroupShadowBuffer(_c_EngOilTmpGroup_buf* pBuffer)
{
  IlEnterCriticalEngOilTmpGroup();
  pBuffer->_c[0] = PPEI_Engine_General_Status_5._c[0];
  pBuffer->_c[1] = PPEI_Engine_General_Status_5._c[1];
  IlLeaveCriticalEngOilTmpGroup();
}


void IlGetRxEngOffTmExtRngGroupShadowBuffer(_c_EngOffTmExtRngGroup_buf* pBuffer)
{
  IlEnterCriticalEngOffTmExtRngGroup();
  pBuffer->_c[0] = PPEI_Platform_Eng_Cntrl_Requests._c[3];
  pBuffer->_c[1] = PPEI_Platform_Eng_Cntrl_Requests._c[4];
  IlLeaveCriticalEngOffTmExtRngGroup();
}


void IlGetRxOtsAirTmpCrValGroupShadowBuffer(_c_OtsAirTmpCrValGroup_buf* pBuffer)
{
  IlEnterCriticalOtsAirTmpCrValGroup();
  pBuffer->_c[0] = PPEI_Platform_Eng_Cntrl_Requests._c[6];
  pBuffer->_c[1] = PPEI_Platform_Eng_Cntrl_Requests._c[7];
  IlLeaveCriticalOtsAirTmpCrValGroup();
}


void IlGetRxWhlGrndVlctyLftNnDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_0_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyLftNnDrvnGroup_0();
  pBuffer->_c[0] = NonDriven_Wheel_Grnd_Velocity_HS._c[0];
  pBuffer->_c[1] = NonDriven_Wheel_Grnd_Velocity_HS._c[1];
  IlLeaveCriticalWhlGrndVlctyLftNnDrvnGroup_0();
}


void IlGetRxWhlGrndVlctyRtNnDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_0_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyRtNnDrvnGroup_0();
  pBuffer->_c[0] = NonDriven_Wheel_Grnd_Velocity_HS._c[2];
  pBuffer->_c[1] = NonDriven_Wheel_Grnd_Velocity_HS._c[3];
  IlLeaveCriticalWhlGrndVlctyRtNnDrvnGroup_0();
}


void IlGetRxWhlGrndVlctyLftDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_0_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyLftDrvnGroup_0();
  pBuffer->_c[0] = Driven_Wheel_Grnd_Velocity_HS._c[0];
  pBuffer->_c[1] = Driven_Wheel_Grnd_Velocity_HS._c[1];
  IlLeaveCriticalWhlGrndVlctyLftDrvnGroup_0();
}


void IlGetRxWhlGrndVlctyRtDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_0_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyRtDrvnGroup_0();
  pBuffer->_c[0] = Driven_Wheel_Grnd_Velocity_HS._c[2];
  pBuffer->_c[1] = Driven_Wheel_Grnd_Velocity_HS._c[3];
  IlLeaveCriticalWhlGrndVlctyRtDrvnGroup_0();
}


void IlGetRxTransEstGearGroupShadowBuffer(_c_TransEstGearGroup_buf* pBuffer)
{
  IlEnterCriticalTransEstGearGroup();
  pBuffer->_c[0] = PPEI_Trans_General_Status_2._c[0];
  IlLeaveCriticalTransEstGearGroup();
}


void IlGetRxTrnsShftLvrPosGroupShadowBuffer(_c_TrnsShftLvrPosGroup_buf* pBuffer)
{
  IlEnterCriticalTrnsShftLvrPosGroup();
  pBuffer->_c[0] = PPEI_Trans_General_Status_2._c[3];
  IlLeaveCriticalTrnsShftLvrPosGroup();
}


void IlGetRxBkupPwrModeMstrGroupShadowBuffer(_c_BkupPwrModeMstrGroup_buf* pBuffer)
{
  IlEnterCriticalBkupPwrModeMstrGroup();
  pBuffer->_c[0] = PPEI_Platform_General_Status._c[0];
  IlLeaveCriticalBkupPwrModeMstrGroup();
}


void IlGetRxVSELatAccGroupShadowBuffer(_c_VSELatAccGroup_buf* pBuffer)
{
  IlEnterCriticalVSELatAccGroup();
  pBuffer->_c[0] = PPEI_Chassis_General_Status_1._c[0];
  pBuffer->_c[1] = PPEI_Chassis_General_Status_1._c[1];
  IlLeaveCriticalVSELatAccGroup();
}


void IlGetRxBrkPdlDrvAppPrsDetcdGroupShadowBuffer(_c_BrkPdlDrvAppPrsDetcdGroup_buf* pBuffer)
{
  IlEnterCriticalBrkPdlDrvAppPrsDetcdGroup();
  pBuffer->_c[0] = PPEI_Chassis_General_Status_1._c[0];
  IlLeaveCriticalBrkPdlDrvAppPrsDetcdGroup();
}


void IlGetRxVehDynYawRateGroupShadowBuffer(_c_VehDynYawRateGroup_buf* pBuffer)
{
  IlEnterCriticalVehDynYawRateGroup();
  pBuffer->_c[0] = PPEI_Chassis_General_Status_1._c[4];
  pBuffer->_c[1] = PPEI_Chassis_General_Status_1._c[5];
  IlLeaveCriticalVehDynYawRateGroup();
}


void IlGetRxVehDynOvrUndrStrGroup_0ShadowBuffer(_c_VehDynOvrUndrStrGroup_0_buf* pBuffer)
{
  IlEnterCriticalVehDynOvrUndrStrGroup_0();
  pBuffer->_c[0] = PPEI_Chassis_General_Status_1._c[6];
  pBuffer->_c[1] = PPEI_Chassis_General_Status_1._c[7];
  IlLeaveCriticalVehDynOvrUndrStrGroup_0();
}


void IlGetRxLKATqOvrDltCmdShadowBuffer(_c_LKATqOvrDltCmd_buf* pBuffer)
{
  IlEnterCriticalLKATqOvrDltCmd();
  pBuffer->_c[0] = LKA_Steering_Torque_Cmd_HS._c[0];
  pBuffer->_c[1] = LKA_Steering_Torque_Cmd_HS._c[1];
  IlLeaveCriticalLKATqOvrDltCmd();
}


void IlGetRxWhlRotStatLftNDrvnShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer)
{
  IlEnterCriticalWhlRotStatLftNDrvn();
  pBuffer->_c[0] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[0];
  pBuffer->_c[1] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[1];
  pBuffer->_c[2] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[2];
  pBuffer->_c[3] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[3];
  IlLeaveCriticalWhlRotStatLftNDrvn();
}


void IlGetRxWhlRotStatRghtNDrvnShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer)
{
  IlEnterCriticalWhlRotStatRghtNDrvn();
  pBuffer->_c[0] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[4];
  pBuffer->_c[1] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[5];
  pBuffer->_c[2] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[6];
  pBuffer->_c[3] = PPEI_NonDrivn_Whl_Rotationl_Stat._c[7];
  IlLeaveCriticalWhlRotStatRghtNDrvn();
}


void IlGetRxWhlGrndVlctyLftNnDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_1_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyLftNnDrvnGroup_1();
  pBuffer->_c[0] = NonDriven_Wheel_Grnd_Velocity_CE._c[0];
  pBuffer->_c[1] = NonDriven_Wheel_Grnd_Velocity_CE._c[1];
  IlLeaveCriticalWhlGrndVlctyLftNnDrvnGroup_1();
}


void IlGetRxWhlGrndVlctyRtNnDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_1_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyRtNnDrvnGroup_1();
  pBuffer->_c[0] = NonDriven_Wheel_Grnd_Velocity_CE._c[2];
  pBuffer->_c[1] = NonDriven_Wheel_Grnd_Velocity_CE._c[3];
  IlLeaveCriticalWhlGrndVlctyRtNnDrvnGroup_1();
}


void IlGetRxWhlGrndVlctyLftDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_1_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyLftDrvnGroup_1();
  pBuffer->_c[0] = Driven_Wheel_Grnd_Velocity_CE._c[0];
  pBuffer->_c[1] = Driven_Wheel_Grnd_Velocity_CE._c[1];
  IlLeaveCriticalWhlGrndVlctyLftDrvnGroup_1();
}


void IlGetRxWhlGrndVlctyRtDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_1_buf* pBuffer)
{
  IlEnterCriticalWhlGrndVlctyRtDrvnGroup_1();
  pBuffer->_c[0] = Driven_Wheel_Grnd_Velocity_CE._c[2];
  pBuffer->_c[1] = Driven_Wheel_Grnd_Velocity_CE._c[3];
  IlLeaveCriticalWhlGrndVlctyRtDrvnGroup_1();
}


void IlGetRxStrWhlAngReqShadowBuffer(_c_StrWhlAngReq_buf* pBuffer)
{
  IlEnterCriticalStrWhlAngReq();
  pBuffer->_c[0] = Park_Assist_Parallel_CE._c[1];
  pBuffer->_c[1] = Park_Assist_Parallel_CE._c[2];
  pBuffer->_c[2] = Park_Assist_Parallel_CE._c[3];
  IlLeaveCriticalStrWhlAngReq();
}


void IlGetRxVSELongAccLoResGroupShadowBuffer(_c_VSELongAccLoResGroup_buf* pBuffer)
{
  IlEnterCriticalVSELongAccLoResGroup();
  pBuffer->_c[0] = Vehicle_Dynamics_ESC_Hyb_CE._c[0];
  pBuffer->_c[1] = Vehicle_Dynamics_ESC_Hyb_CE._c[1];
  pBuffer->_c[2] = Vehicle_Dynamics_ESC_Hyb_CE._c[2];
  IlLeaveCriticalVSELongAccLoResGroup();
}


void IlGetRxVehDynOvrUndrStrGroup_1ShadowBuffer(_c_VehDynOvrUndrStrGroup_1_buf* pBuffer)
{
  IlEnterCriticalVehDynOvrUndrStrGroup_1();
  pBuffer->_c[0] = Vehicle_Dynamics_ESC_Hyb_CE._c[3];
  pBuffer->_c[1] = Vehicle_Dynamics_ESC_Hyb_CE._c[4];
  IlLeaveCriticalVehDynOvrUndrStrGroup_1();
}




/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Group Access 
 ----------------------------------------------------------------------------- */

void IlPutTxDTCInfo_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer)
{
  IlEnterCriticalDTCInfo_778();
  DTC_Triggered_778._c[0] = pBuffer->_c[0];
  DTC_Triggered_778._c[1] = pBuffer->_c[1];
  DTC_Triggered_778._c[2] = pBuffer->_c[2];
  DTC_Triggered_778._c[3] = pBuffer->_c[3];
  DTC_Triggered_778._c[4] = pBuffer->_c[4];
  DTC_Triggered_778._c[5] = pBuffer->_c[5];
  DTC_Triggered_778._c[6] = pBuffer->_c[6];
  IlLeaveCriticalDTCInfo_778();
}


void IlPutTxStrWhAngGroup_0ShadowBuffer(_c_StrWhAngGroup_0_buf* pBuffer)
{
  IlEnterCriticalStrWhAngGroup_0();
  PPEI_Steering_Wheel_Angle._c[0] = (PPEI_Steering_Wheel_Angle._c[0] & (vuint8) 0x7F) | (pBuffer->_c[0] & (vuint8) 0x80);
  PPEI_Steering_Wheel_Angle._c[1] = pBuffer->_c[1];
  PPEI_Steering_Wheel_Angle._c[2] = pBuffer->_c[2];
  IlLeaveCriticalStrWhAngGroup_0();
}


void IlPutTxStrWhAngGrdGroup_0ShadowBuffer(_c_StrWhAngGrdGroup_0_buf* pBuffer)
{
  IlEnterCriticalStrWhAngGrdGroup_0();
  PPEI_Steering_Wheel_Angle._c[3] = (PPEI_Steering_Wheel_Angle._c[3] & (vuint8) 0x70) | (pBuffer->_c[0] & (vuint8) 0x8F);
  PPEI_Steering_Wheel_Angle._c[4] = pBuffer->_c[1];
  IlLeaveCriticalStrWhAngGrdGroup_0();
}


void IlPutTxHndsOffStrWhlDtStGroupShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer)
{
  IlEnterCriticalHndsOffStrWhlDtStGroup();
  LKA_Steering_Trq_Overlay_Stat_HS._c[2] = (LKA_Steering_Trq_Overlay_Stat_HS._c[2] & (vuint8) 0x9F) | (pBuffer->_c[0] & (vuint8) 0x60);
  IlLeaveCriticalHndsOffStrWhlDtStGroup();
}


void IlPutTxLKADrvAppldTrqGroupShadowBuffer(_c_LKADrvAppldTrqGroup_buf* pBuffer)
{
  IlEnterCriticalLKADrvAppldTrqGroup();
  LKA_Steering_Trq_Overlay_Stat_HS._c[6] = (LKA_Steering_Trq_Overlay_Stat_HS._c[6] & (vuint8) 0xF0) | (pBuffer->_c[0] & (vuint8) 0x0F);
  LKA_Steering_Trq_Overlay_Stat_HS._c[7] = pBuffer->_c[1];
  IlLeaveCriticalLKADrvAppldTrqGroup();
}


void IlPutTxDrvStrIntfrDtcdGroupShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer)
{
  IlEnterCriticalDrvStrIntfrDtcdGroup();
  Electric_Power_Steering_CE._c[0] = (Electric_Power_Steering_CE._c[0] & (vuint8) 0xF3) | (pBuffer->_c[0] & (vuint8) 0x0C);
  IlLeaveCriticalDrvStrIntfrDtcdGroup();
}


void IlPutTxStrWhAngGroup_1ShadowBuffer(_c_StrWhAngGroup_1_buf* pBuffer)
{
  IlEnterCriticalStrWhAngGroup_1();
  PPEI_Steering_Wheel_Angle_CE._c[0] = (PPEI_Steering_Wheel_Angle_CE._c[0] & (vuint8) 0x7F) | (pBuffer->_c[0] & (vuint8) 0x80);
  PPEI_Steering_Wheel_Angle_CE._c[1] = pBuffer->_c[1];
  PPEI_Steering_Wheel_Angle_CE._c[2] = pBuffer->_c[2];
  IlLeaveCriticalStrWhAngGroup_1();
}


void IlPutTxStrWhAngGrdGroup_1ShadowBuffer(_c_StrWhAngGrdGroup_1_buf* pBuffer)
{
  IlEnterCriticalStrWhAngGrdGroup_1();
  PPEI_Steering_Wheel_Angle_CE._c[3] = (PPEI_Steering_Wheel_Angle_CE._c[3] & (vuint8) 0x70) | (pBuffer->_c[0] & (vuint8) 0x8F);
  PPEI_Steering_Wheel_Angle_CE._c[4] = pBuffer->_c[1];
  IlLeaveCriticalStrWhAngGrdGroup_1();
}




#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 CanTransmitHandle V_MEMROM2 IlTxIndirection[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  5 /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  6 /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  7 /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  10 /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  11 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  12 /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ CAN handle to Il start stop handle
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(C_ENABLE_CAN_CANCEL_NOTIFICATION)
V_MEMROM0 V_MEMROM1 IlStartStopHnd V_MEMROM2 IlCanHndToIlHnd[kIlCanNumberOfTxObjects] = 
{
  { 0, 1 } /* start - stop  ID: 0x00000778, DTC_Triggered_778 [BC] */, 
  { 0, 0 } /* no Il message */, 
  { 0, 0 } /* no Il message */, 
  { 0, 0 } /* no Il message */, 
  { 0, 0 } /* no Il message */, 
  { 1, 2 } /* start - stop  ID: 0x000001e5, PPEI_Steering_Wheel_Angle [BC] */, 
  { 2, 3 } /* start - stop  ID: 0x00000184, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  { 3, 4 } /* start - stop  ID: 0x00000148, Power_Steering_Information_HS [BC] */, 
  { 0, 0 } /* no Il message */, 
  { 0, 0 } /* no Il message */, 
  { 4, 5 } /* start - stop  ID: 0x00000335, Electric_Power_Steering_CE [BC] */, 
  { 5, 6 } /* start - stop  ID: 0x000001e5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  { 6, 7 } /* start - stop  ID: 0x000001ca, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif




/* -----------------------------------------------------------------------------
    &&&~ TxTypes for interaction layer tx messages 
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlTxType[kIlNumberOfTxObjects] = 
{
  kTxSendCyclic /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  kTxSendCyclic /* ID: 0x000001e5, Handle: 1, PPEI_Steering_Wheel_Angle [BC] */, 
  kTxSendCyclic /* ID: 0x00000184, Handle: 2, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  kTxSendCyclic /* ID: 0x00000148, Handle: 3, Power_Steering_Information_HS [BC] */, 
  kTxSendCyclic /* ID: 0x00000335, Handle: 4, Electric_Power_Steering_CE [BC] */, 
  kTxSendCyclic /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  kTxSendCyclic /* ID: 0x000001ca, Handle: 6, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\il_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\il_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

