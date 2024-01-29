/* -----------------------------------------------------------------------------
  Filename:    can_par.h
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

#if !defined(__CAN_PAR_H__)
#define __CAN_PAR_H__

#include "can_cfg.h"
#include "v_inc.h"
#include "drv_par.h"

/* -----------------------------------------------------------------------------
    &&&~ Extern declarations of callback functions
 ----------------------------------------------------------------------------- */

/* CODE CATEGORY 4 START */

extern void NmCanError(CanChannelHandle channel);

/* CODE CATEGORY 4 END */


/* CODE CATEGORY 4 START */

extern void NmCanWakeUp(CanChannelHandle channel);

/* CODE CATEGORY 4 END */


#if defined(C_MULTIPLE_RECEIVE_CHANNEL) || defined(C_SINGLE_RECEIVE_CHANNEL)
#endif

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgWheel_Pulses_HSPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgPPEI_Engine_General_Status_5PreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgPPEI_Platform_Eng_Cntrl_RequestsPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgNonDriven_Wheel_Grnd_Velocity_HSPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgDriven_Wheel_Grnd_Velocity_HSPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgDriving_Mode_Control_HSPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgBrake_Pedal_Driver_Status_HSPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgPPEI_Trans_General_Status_2PreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgPPEI_Platform_General_StatusPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgPPEI_Chassis_General_Status_1PreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgLKA_Steering_Torque_Cmd_HSPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgAntilock_Brake_and_TC_Status_HSPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgPPEI_Engine_General_Status_1PreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgNonDriven_Wheel_Grnd_Velocity_CEPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgDriven_Wheel_Grnd_Velocity_CEPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgPark_Assist_Parallel_CEPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 IlMsgVehicle_Dynamics_ESC_Hyb_CEPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 TpPrecopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 XcpPreCopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 TpFuncPrecopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern vuint8 GgdaFuncPrecopy(CanRxInfoStructPtr rxStruct);
/* CODE CATEGORY 1 END */


/* -----------------------------------------------------------------------------
    &&&~ Extern declarations of confirmation functions
 ----------------------------------------------------------------------------- */

/* CODE CATEGORY 1 START */
extern void TpDrvConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void XcpConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void DescUudtConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void SerlComOutpProxy_1E5HiSpdCfmFct(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void SerlComOutpProxy_184CfmFct(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void GgdaUudtConfirmation(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void SerlComOutpProxy_335CfmFct(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void SerlComOutpProxy_1E5ChassisExpCfmFct(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */

/* CODE CATEGORY 1 START */
extern void SerlComOutpProxy_1CACfmFct(CanTransmitHandle txObject);
/* CODE CATEGORY 1 END */



/* -----------------------------------------------------------------------------
    &&&~ Multiple Callback Functions
 ----------------------------------------------------------------------------- */

/* CODE CATEGORY 3 START */
extern C_CALLBACK_1 void C_CALLBACK_2 IlCanCancelNotification(CanTransmitHandle txHandle);
/* CODE CATEGORY 3 END */


/* -----------------------------------------------------------------------------
    &&&~ Extern declarations Hw specififc
 ----------------------------------------------------------------------------- */

/* ROM CATEGORY 4 START */
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 CanRxFifoDepth_0[1];
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 CanRxFifoDepth_1[1];
/* ROM CATEGORY 4 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 extern  V_MEMROM1 tCanFilterRulesBc V_MEMROM2 CanFilterRulesBc_0[4];
V_MEMROM0 extern  V_MEMROM1 tCanFilterRulesBc V_MEMROM2 CanFilterRulesBc_1[2];
/* ROM CATEGORY 4 END */





/* -----------------------------------------------------------------------------
    &&&~ Handles of send objects
 ----------------------------------------------------------------------------- */

#define CanTxDTC_Triggered_778               0
#define CanTxCmnMfgSrvResp                   1
#define CanTxXcp_Slave_Msg                   2
#define CanTxUSDT_Resp_From_EHPS_EPS_HS      3
#define CanTxUUDT_Resp_From_EHPS_EPS_HS      4
#define CanTxPPEI_Steering_Wheel_Angle       5
#define CanTxLKA_Steering_Trq_Overlay_Stat_HS 6
#define CanTxPower_Steering_Information_HS   7
#define CanTxUSDT_Resp_From_EPS_EPS_JR_CE    8
#define CanTxUUDT_Resp_From_EPS_EPS_JR_CE    9
#define CanTxElectric_Power_Steering_CE      10
#define CanTxPPEI_Steering_Wheel_Angle_CE    11
#define CanTxSteering_Torque_Overlay_Stat_CE 12


/* -----------------------------------------------------------------------------
    &&&~ Access to confirmation flags
 ----------------------------------------------------------------------------- */

#define DTC_Triggered_778_conf_b             (CanConfirmationFlags.w[0].b0)
#define CanWriteSyncDTC_Triggered_778_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  DTC_Triggered_778_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Steering_Wheel_Angle_conf_b     (CanConfirmationFlags.w[0].b1)
#define CanWriteSyncPPEI_Steering_Wheel_Angle_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Steering_Wheel_Angle_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define LKA_Steering_Trq_Overlay_Stat_HS_conf_b (CanConfirmationFlags.w[0].b2)
#define CanWriteSyncLKA_Steering_Trq_Overlay_Stat_HS_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  LKA_Steering_Trq_Overlay_Stat_HS_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Power_Steering_Information_HS_conf_b (CanConfirmationFlags.w[0].b3)
#define CanWriteSyncPower_Steering_Information_HS_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Power_Steering_Information_HS_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Electric_Power_Steering_CE_conf_b    (CanConfirmationFlags.w[0].b4)
#define CanWriteSyncElectric_Power_Steering_CE_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Electric_Power_Steering_CE_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Steering_Wheel_Angle_CE_conf_b  (CanConfirmationFlags.w[0].b5)
#define CanWriteSyncPPEI_Steering_Wheel_Angle_CE_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Steering_Wheel_Angle_CE_conf_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Steering_Torque_Overlay_Stat_CE_conf_b (CanConfirmationFlags.w[0].b6)
#define CanWriteSyncSteering_Torque_Overlay_Stat_CE_conf_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Steering_Torque_Overlay_Stat_CE_conf_b = (x); \
  CanEndFlagWriteSync(); \
}


/* -----------------------------------------------------------------------------
    &&&~ Handles of receive objects
 ----------------------------------------------------------------------------- */

#define CanRxT1_HostToTarget                 0
#define CanRxWheel_Pulses_HS                 1
#define CanRxPPEI_Engine_General_Status_5    2
#define CanRxPPEI_Platform_Eng_Cntrl_Requests 3
#define CanRxNonDriven_Wheel_Grnd_Velocity_HS 4
#define CanRxDriven_Wheel_Grnd_Velocity_HS   5
#define CanRxDriving_Mode_Control_HS         6
#define CanRxBrake_Pedal_Driver_Status_HS    7
#define CanRxPPEI_Trans_General_Status_2     8
#define CanRxPPEI_Platform_General_Status    9
#define CanRxPPEI_Chassis_General_Status_1   10
#define CanRxLKA_Steering_Torque_Cmd_HS      11
#define CanRxAntilock_Brake_and_TC_Status_HS 12
#define CanRxPPEI_Engine_General_Status_1    13
#define CanRxPPEI_NonDrivn_Whl_Rotationl_Stat 14
#define CanRxNonDriven_Wheel_Grnd_Velocity_CE 15
#define CanRxDriven_Wheel_Grnd_Velocity_CE   16
#define CanRxPark_Assist_Parallel_CE         17
#define CanRxVehicle_Dynamics_ESC_Hyb_CE     18
#define CanRxSteering_Torque_Command_CE      19
#define CanRxCmnMfgSrvReq                    20
#define CanRxXcp_Master_Msg                  21
#define CanRxUSDT_Req_to_EHPS_EPS_HS         22
#define CanRxUSDT_Req_to_All_HS_ECUs         23
#define CanRxUSDT_Req_to_EPS_EPS_JR_CE       24
#define CanRxUSDT_Req_to_All_CE_ECUs         25


/* -----------------------------------------------------------------------------
    &&&~ Access to indication flags
 ----------------------------------------------------------------------------- */

#define Wheel_Pulses_HS_ind_b                (CanIndicationFlags.w[0].b0)
#define CanWriteSyncWheel_Pulses_HS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Wheel_Pulses_HS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Engine_General_Status_5_ind_b   (CanIndicationFlags.w[0].b1)
#define CanWriteSyncPPEI_Engine_General_Status_5_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Engine_General_Status_5_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Platform_Eng_Cntrl_Requests_ind_b (CanIndicationFlags.w[0].b2)
#define CanWriteSyncPPEI_Platform_Eng_Cntrl_Requests_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Platform_Eng_Cntrl_Requests_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define NonDriven_Wheel_Grnd_Velocity_HS_ind_b (CanIndicationFlags.w[0].b3)
#define CanWriteSyncNonDriven_Wheel_Grnd_Velocity_HS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  NonDriven_Wheel_Grnd_Velocity_HS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Driven_Wheel_Grnd_Velocity_HS_ind_b  (CanIndicationFlags.w[0].b4)
#define CanWriteSyncDriven_Wheel_Grnd_Velocity_HS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Driven_Wheel_Grnd_Velocity_HS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Driving_Mode_Control_HS_ind_b        (CanIndicationFlags.w[0].b5)
#define CanWriteSyncDriving_Mode_Control_HS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Driving_Mode_Control_HS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Brake_Pedal_Driver_Status_HS_ind_b   (CanIndicationFlags.w[0].b6)
#define CanWriteSyncBrake_Pedal_Driver_Status_HS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Brake_Pedal_Driver_Status_HS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Trans_General_Status_2_ind_b    (CanIndicationFlags.w[0].b7)
#define CanWriteSyncPPEI_Trans_General_Status_2_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Trans_General_Status_2_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Platform_General_Status_ind_b   (CanIndicationFlags.w[0].b10)
#define CanWriteSyncPPEI_Platform_General_Status_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Platform_General_Status_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Chassis_General_Status_1_ind_b  (CanIndicationFlags.w[0].b11)
#define CanWriteSyncPPEI_Chassis_General_Status_1_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Chassis_General_Status_1_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define LKA_Steering_Torque_Cmd_HS_ind_b     (CanIndicationFlags.w[0].b12)
#define CanWriteSyncLKA_Steering_Torque_Cmd_HS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  LKA_Steering_Torque_Cmd_HS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Antilock_Brake_and_TC_Status_HS_ind_b (CanIndicationFlags.w[0].b13)
#define CanWriteSyncAntilock_Brake_and_TC_Status_HS_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Antilock_Brake_and_TC_Status_HS_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_Engine_General_Status_1_ind_b   (CanIndicationFlags.w[0].b14)
#define CanWriteSyncPPEI_Engine_General_Status_1_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_Engine_General_Status_1_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define PPEI_NonDrivn_Whl_Rotationl_Stat_ind_b (CanIndicationFlags.w[0].b15)
#define CanWriteSyncPPEI_NonDrivn_Whl_Rotationl_Stat_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  PPEI_NonDrivn_Whl_Rotationl_Stat_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define NonDriven_Wheel_Grnd_Velocity_CE_ind_b (CanIndicationFlags.w[0].b16)
#define CanWriteSyncNonDriven_Wheel_Grnd_Velocity_CE_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  NonDriven_Wheel_Grnd_Velocity_CE_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Driven_Wheel_Grnd_Velocity_CE_ind_b  (CanIndicationFlags.w[0].b17)
#define CanWriteSyncDriven_Wheel_Grnd_Velocity_CE_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Driven_Wheel_Grnd_Velocity_CE_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Park_Assist_Parallel_CE_ind_b        (CanIndicationFlags.w[0].b20)
#define CanWriteSyncPark_Assist_Parallel_CE_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Park_Assist_Parallel_CE_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Vehicle_Dynamics_ESC_Hyb_CE_ind_b    (CanIndicationFlags.w[0].b21)
#define CanWriteSyncVehicle_Dynamics_ESC_Hyb_CE_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Vehicle_Dynamics_ESC_Hyb_CE_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Steering_Torque_Command_CE_ind_b     (CanIndicationFlags.w[0].b22)
#define CanWriteSyncSteering_Torque_Command_CE_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Steering_Torque_Command_CE_ind_b = (x); \
  CanEndFlagWriteSync(); \
}
#define Xcp_Master_Msg_ind_b                 (CanIndicationFlags.w[0].b23)
#define CanWriteSyncXcp_Master_Msg_ind_b(x) \
{ \
  CanStartFlagWriteSync(); \
  Xcp_Master_Msg_ind_b = (x); \
  CanEndFlagWriteSync(); \
}


/* -----------------------------------------------------------------------------
    &&&~ Access to signals
 ----------------------------------------------------------------------------- */

#define b_Xcp_Slave_Byte0_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte0)
#define b_Xcp_Slave_Byte1_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte1)
#define b_Xcp_Slave_Byte2_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte2)
#define b_Xcp_Slave_Byte3_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte3)
#define b_Xcp_Slave_Byte4_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte4)
#define b_Xcp_Slave_Byte5_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte5)
#define b_Xcp_Slave_Byte6_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte6)
#define b_Xcp_Slave_Byte7_c                  (Xcp_Slave_Msg.Xcp_Slave_Msg.Xcp_Slave_Byte7)
#define b_DgnInf_CE542_0_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_0)
#define b_DgnInf_CE542_1_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_1)
#define b_DgnInf_CE542_2_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_2)
#define b_DgnInf_CE542_3_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_3)
#define b_DgnInf_CE542_4_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_4)
#define b_DgnInf_CE542_5_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_5)
#define b_DgnInf_CE542_6_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_6)
#define b_DgnInf_CE542_7_b                   (UUDT_Resp_From_EPS_EPS_JR_CE.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_7)
#define b_Xcp_Master_Byte0_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte0)
#define b_Xcp_Master_Byte1_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte1)
#define b_Xcp_Master_Byte2_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte2)
#define b_Xcp_Master_Byte3_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte3)
#define b_Xcp_Master_Byte4_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte4)
#define b_Xcp_Master_Byte5_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte5)
#define b_Xcp_Master_Byte6_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte6)
#define b_Xcp_Master_Byte7_c                 (Xcp_Master_Msg.Xcp_Master_Msg.Xcp_Master_Byte7)


/* -----------------------------------------------------------------------------
    &&&~ Access to data bytes of Rx messages
 ----------------------------------------------------------------------------- */

/* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */
#define c1_T1_HostToTarget_c                 (T1_HostToTarget._c[0])
#define c2_T1_HostToTarget_c                 (T1_HostToTarget._c[1])
#define c3_T1_HostToTarget_c                 (T1_HostToTarget._c[2])
#define c4_T1_HostToTarget_c                 (T1_HostToTarget._c[3])
#define c5_T1_HostToTarget_c                 (T1_HostToTarget._c[4])
#define c6_T1_HostToTarget_c                 (T1_HostToTarget._c[5])
#define c7_T1_HostToTarget_c                 (T1_HostToTarget._c[6])
#define c8_T1_HostToTarget_c                 (T1_HostToTarget._c[7])

/* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */
#define c1_Wheel_Pulses_HS_c                 (Wheel_Pulses_HS._c[0])
#define c2_Wheel_Pulses_HS_c                 (Wheel_Pulses_HS._c[1])
#define c3_Wheel_Pulses_HS_c                 (Wheel_Pulses_HS._c[2])
#define c4_Wheel_Pulses_HS_c                 (Wheel_Pulses_HS._c[3])

/* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */
#define c1_PPEI_Engine_General_Status_5_c    (PPEI_Engine_General_Status_5._c[0])
#define c2_PPEI_Engine_General_Status_5_c    (PPEI_Engine_General_Status_5._c[1])

/* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */
#define c1_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[0])
#define c2_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[1])
#define c3_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[2])
#define c4_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[3])
#define c5_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[4])
#define c6_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[5])
#define c7_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[6])
#define c8_PPEI_Platform_Eng_Cntrl_Requests_c (PPEI_Platform_Eng_Cntrl_Requests._c[7])

/* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */
#define c1_NonDriven_Wheel_Grnd_Velocity_HS_c (NonDriven_Wheel_Grnd_Velocity_HS._c[0])
#define c2_NonDriven_Wheel_Grnd_Velocity_HS_c (NonDriven_Wheel_Grnd_Velocity_HS._c[1])
#define c3_NonDriven_Wheel_Grnd_Velocity_HS_c (NonDriven_Wheel_Grnd_Velocity_HS._c[2])
#define c4_NonDriven_Wheel_Grnd_Velocity_HS_c (NonDriven_Wheel_Grnd_Velocity_HS._c[3])
#define c5_NonDriven_Wheel_Grnd_Velocity_HS_c (NonDriven_Wheel_Grnd_Velocity_HS._c[4])

/* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */
#define c1_Driven_Wheel_Grnd_Velocity_HS_c   (Driven_Wheel_Grnd_Velocity_HS._c[0])
#define c2_Driven_Wheel_Grnd_Velocity_HS_c   (Driven_Wheel_Grnd_Velocity_HS._c[1])
#define c3_Driven_Wheel_Grnd_Velocity_HS_c   (Driven_Wheel_Grnd_Velocity_HS._c[2])
#define c4_Driven_Wheel_Grnd_Velocity_HS_c   (Driven_Wheel_Grnd_Velocity_HS._c[3])
#define c5_Driven_Wheel_Grnd_Velocity_HS_c   (Driven_Wheel_Grnd_Velocity_HS._c[4])

/* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */
#define c1_Driving_Mode_Control_HS_c         (Driving_Mode_Control_HS._c[0])
#define c2_Driving_Mode_Control_HS_c         (Driving_Mode_Control_HS._c[1])
#define c3_Driving_Mode_Control_HS_c         (Driving_Mode_Control_HS._c[2])
#define c4_Driving_Mode_Control_HS_c         (Driving_Mode_Control_HS._c[3])
#define c5_Driving_Mode_Control_HS_c         (Driving_Mode_Control_HS._c[4])

/* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */
#define c1_Brake_Pedal_Driver_Status_HS_c    (Brake_Pedal_Driver_Status_HS._c[0])
#define c2_Brake_Pedal_Driver_Status_HS_c    (Brake_Pedal_Driver_Status_HS._c[1])
#define c3_Brake_Pedal_Driver_Status_HS_c    (Brake_Pedal_Driver_Status_HS._c[2])
#define c4_Brake_Pedal_Driver_Status_HS_c    (Brake_Pedal_Driver_Status_HS._c[3])
#define c5_Brake_Pedal_Driver_Status_HS_c    (Brake_Pedal_Driver_Status_HS._c[4])
#define c6_Brake_Pedal_Driver_Status_HS_c    (Brake_Pedal_Driver_Status_HS._c[5])

/* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */
#define c1_PPEI_Trans_General_Status_2_c     (PPEI_Trans_General_Status_2._c[0])
#define c2_PPEI_Trans_General_Status_2_c     (PPEI_Trans_General_Status_2._c[1])
#define c3_PPEI_Trans_General_Status_2_c     (PPEI_Trans_General_Status_2._c[2])
#define c4_PPEI_Trans_General_Status_2_c     (PPEI_Trans_General_Status_2._c[3])
#define c5_PPEI_Trans_General_Status_2_c     (PPEI_Trans_General_Status_2._c[4])
#define c6_PPEI_Trans_General_Status_2_c     (PPEI_Trans_General_Status_2._c[5])

/* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */
#define c1_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[0])
#define c2_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[1])
#define c3_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[2])
#define c4_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[3])
#define c5_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[4])
#define c6_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[5])
#define c7_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[6])
#define c8_PPEI_Platform_General_Status_c    (PPEI_Platform_General_Status._c[7])

/* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */
#define c1_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[0])
#define c2_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[1])
#define c3_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[2])
#define c4_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[3])
#define c5_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[4])
#define c6_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[5])
#define c7_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[6])
#define c8_PPEI_Chassis_General_Status_1_c   (PPEI_Chassis_General_Status_1._c[7])

/* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */
#define c1_LKA_Steering_Torque_Cmd_HS_c      (LKA_Steering_Torque_Cmd_HS._c[0])
#define c2_LKA_Steering_Torque_Cmd_HS_c      (LKA_Steering_Torque_Cmd_HS._c[1])
#define c3_LKA_Steering_Torque_Cmd_HS_c      (LKA_Steering_Torque_Cmd_HS._c[2])
#define c4_LKA_Steering_Torque_Cmd_HS_c      (LKA_Steering_Torque_Cmd_HS._c[3])

/* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */
#define c1_Antilock_Brake_and_TC_Status_HS_c (Antilock_Brake_and_TC_Status_HS._c[0])

/* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */
#define c1_PPEI_Engine_General_Status_1_c    (PPEI_Engine_General_Status_1._c[0])
#define c2_PPEI_Engine_General_Status_1_c    (PPEI_Engine_General_Status_1._c[1])
#define c3_PPEI_Engine_General_Status_1_c    (PPEI_Engine_General_Status_1._c[2])
#define c4_PPEI_Engine_General_Status_1_c    (PPEI_Engine_General_Status_1._c[3])
#define c5_PPEI_Engine_General_Status_1_c    (PPEI_Engine_General_Status_1._c[4])
#define c6_PPEI_Engine_General_Status_1_c    (PPEI_Engine_General_Status_1._c[5])
#define c7_PPEI_Engine_General_Status_1_c    (PPEI_Engine_General_Status_1._c[6])

/* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */
#define c1_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[0])
#define c2_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[1])
#define c3_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[2])
#define c4_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[3])
#define c5_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[4])
#define c6_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[5])
#define c7_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[6])
#define c8_PPEI_NonDrivn_Whl_Rotationl_Stat_c (PPEI_NonDrivn_Whl_Rotationl_Stat._c[7])

/* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */
#define c1_NonDriven_Wheel_Grnd_Velocity_CE_c (NonDriven_Wheel_Grnd_Velocity_CE._c[0])
#define c2_NonDriven_Wheel_Grnd_Velocity_CE_c (NonDriven_Wheel_Grnd_Velocity_CE._c[1])
#define c3_NonDriven_Wheel_Grnd_Velocity_CE_c (NonDriven_Wheel_Grnd_Velocity_CE._c[2])
#define c4_NonDriven_Wheel_Grnd_Velocity_CE_c (NonDriven_Wheel_Grnd_Velocity_CE._c[3])
#define c5_NonDriven_Wheel_Grnd_Velocity_CE_c (NonDriven_Wheel_Grnd_Velocity_CE._c[4])

/* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */
#define c1_Driven_Wheel_Grnd_Velocity_CE_c   (Driven_Wheel_Grnd_Velocity_CE._c[0])
#define c2_Driven_Wheel_Grnd_Velocity_CE_c   (Driven_Wheel_Grnd_Velocity_CE._c[1])
#define c3_Driven_Wheel_Grnd_Velocity_CE_c   (Driven_Wheel_Grnd_Velocity_CE._c[2])
#define c4_Driven_Wheel_Grnd_Velocity_CE_c   (Driven_Wheel_Grnd_Velocity_CE._c[3])
#define c5_Driven_Wheel_Grnd_Velocity_CE_c   (Driven_Wheel_Grnd_Velocity_CE._c[4])

/* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */
#define c1_Park_Assist_Parallel_CE_c         (Park_Assist_Parallel_CE._c[0])
#define c2_Park_Assist_Parallel_CE_c         (Park_Assist_Parallel_CE._c[1])
#define c3_Park_Assist_Parallel_CE_c         (Park_Assist_Parallel_CE._c[2])
#define c4_Park_Assist_Parallel_CE_c         (Park_Assist_Parallel_CE._c[3])
#define c5_Park_Assist_Parallel_CE_c         (Park_Assist_Parallel_CE._c[4])
#define c6_Park_Assist_Parallel_CE_c         (Park_Assist_Parallel_CE._c[5])
#define c7_Park_Assist_Parallel_CE_c         (Park_Assist_Parallel_CE._c[6])

/* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */
#define c1_Vehicle_Dynamics_ESC_Hyb_CE_c     (Vehicle_Dynamics_ESC_Hyb_CE._c[0])
#define c2_Vehicle_Dynamics_ESC_Hyb_CE_c     (Vehicle_Dynamics_ESC_Hyb_CE._c[1])
#define c3_Vehicle_Dynamics_ESC_Hyb_CE_c     (Vehicle_Dynamics_ESC_Hyb_CE._c[2])
#define c4_Vehicle_Dynamics_ESC_Hyb_CE_c     (Vehicle_Dynamics_ESC_Hyb_CE._c[3])
#define c5_Vehicle_Dynamics_ESC_Hyb_CE_c     (Vehicle_Dynamics_ESC_Hyb_CE._c[4])

/* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */
#define c1_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[0])
#define c2_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[1])
#define c3_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[2])
#define c4_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[3])
#define c5_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[4])
#define c6_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[5])
#define c7_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[6])
#define c8_Steering_Torque_Command_CE_c      (Steering_Torque_Command_CE._c[7])

/* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */
#define c1_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[0])
#define c2_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[1])
#define c3_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[2])
#define c4_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[3])
#define c5_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[4])
#define c6_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[5])
#define c7_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[6])
#define c8_Xcp_Master_Msg_c                  (Xcp_Master_Msg._c[7])



/* -----------------------------------------------------------------------------
    &&&~ Access to data bytes of Tx messages
 ----------------------------------------------------------------------------- */

/* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */
#define c1_DTC_Triggered_778_c               (DTC_Triggered_778._c[0])
#define c2_DTC_Triggered_778_c               (DTC_Triggered_778._c[1])
#define c3_DTC_Triggered_778_c               (DTC_Triggered_778._c[2])
#define c4_DTC_Triggered_778_c               (DTC_Triggered_778._c[3])
#define c5_DTC_Triggered_778_c               (DTC_Triggered_778._c[4])
#define c6_DTC_Triggered_778_c               (DTC_Triggered_778._c[5])
#define c7_DTC_Triggered_778_c               (DTC_Triggered_778._c[6])

/* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */
#define c1_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[0])
#define c2_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[1])
#define c3_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[2])
#define c4_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[3])
#define c5_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[4])
#define c6_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[5])
#define c7_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[6])
#define c8_CmnMfgSrvResp_c                   (CmnMfgSrvResp._c[7])

/* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */
#define c1_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[0])
#define c2_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[1])
#define c3_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[2])
#define c4_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[3])
#define c5_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[4])
#define c6_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[5])
#define c7_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[6])
#define c8_Xcp_Slave_Msg_c                   (Xcp_Slave_Msg._c[7])

/* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */
#define c1_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[0])
#define c2_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[1])
#define c3_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[2])
#define c4_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[3])
#define c5_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[4])
#define c6_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[5])
#define c7_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[6])
#define c8_USDT_Resp_From_EHPS_EPS_HS_c      (USDT_Resp_From_EHPS_EPS_HS._c[7])

/* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */
#define c1_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[0])
#define c2_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[1])
#define c3_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[2])
#define c4_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[3])
#define c5_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[4])
#define c6_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[5])
#define c7_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[6])
#define c8_UUDT_Resp_From_EHPS_EPS_HS_c      (UUDT_Resp_From_EHPS_EPS_HS._c[7])

/* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */
#define c1_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[0])
#define c2_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[1])
#define c3_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[2])
#define c4_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[3])
#define c5_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[4])
#define c6_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[5])
#define c7_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[6])
#define c8_PPEI_Steering_Wheel_Angle_c       (PPEI_Steering_Wheel_Angle._c[7])

/* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */
#define c1_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[0])
#define c2_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[1])
#define c3_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[2])
#define c4_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[3])
#define c5_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[4])
#define c6_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[5])
#define c7_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[6])
#define c8_LKA_Steering_Trq_Overlay_Stat_HS_c (LKA_Steering_Trq_Overlay_Stat_HS._c[7])

/* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */
#define c1_Power_Steering_Information_HS_c   (Power_Steering_Information_HS._c[0])

/* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */
#define c1_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[0])
#define c2_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[1])
#define c3_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[2])
#define c4_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[3])
#define c5_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[4])
#define c6_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[5])
#define c7_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[6])
#define c8_USDT_Resp_From_EPS_EPS_JR_CE_c    (USDT_Resp_From_EPS_EPS_JR_CE._c[7])

/* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */
#define c1_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[0])
#define c2_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[1])
#define c3_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[2])
#define c4_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[3])
#define c5_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[4])
#define c6_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[5])
#define c7_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[6])
#define c8_UUDT_Resp_From_EPS_EPS_JR_CE_c    (UUDT_Resp_From_EPS_EPS_JR_CE._c[7])

/* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */
#define c1_Electric_Power_Steering_CE_c      (Electric_Power_Steering_CE._c[0])
#define c2_Electric_Power_Steering_CE_c      (Electric_Power_Steering_CE._c[1])
#define c3_Electric_Power_Steering_CE_c      (Electric_Power_Steering_CE._c[2])
#define c4_Electric_Power_Steering_CE_c      (Electric_Power_Steering_CE._c[3])

/* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */
#define c1_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[0])
#define c2_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[1])
#define c3_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[2])
#define c4_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[3])
#define c5_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[4])
#define c6_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[5])
#define c7_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[6])
#define c8_PPEI_Steering_Wheel_Angle_CE_c    (PPEI_Steering_Wheel_Angle_CE._c[7])

/* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
#define c1_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[0])
#define c2_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[1])
#define c3_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[2])
#define c4_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[3])
#define c5_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[4])
#define c6_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[5])
#define c7_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[6])
#define c8_Steering_Torque_Overlay_Stat_CE_c (Steering_Torque_Overlay_Stat_CE._c[7])



/* -----------------------------------------------------------------------------
    &&&~ RDS Access
 ----------------------------------------------------------------------------- */

#define b_CAN_Xcp_Slave_Byte0_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte0)
#define b_CAN_Xcp_Slave_Byte1_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte1)
#define b_CAN_Xcp_Slave_Byte2_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte2)
#define b_CAN_Xcp_Slave_Byte3_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte3)
#define b_CAN_Xcp_Slave_Byte4_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte4)
#define b_CAN_Xcp_Slave_Byte5_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte5)
#define b_CAN_Xcp_Slave_Byte6_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte6)
#define b_CAN_Xcp_Slave_Byte7_c              (RDSTx_0.Xcp_Slave_Msg.Xcp_Slave_Byte7)

typedef struct _c_Xcp_Slave_Msg_RDS_msgTypeTag
{
  vbittype Xcp_Slave_Byte0 : 8;
  vbittype Xcp_Slave_Byte1 : 8;
  vbittype Xcp_Slave_Byte2 : 8;
  vbittype Xcp_Slave_Byte3 : 8;
  vbittype Xcp_Slave_Byte4 : 8;
  vbittype Xcp_Slave_Byte5 : 8;
  vbittype Xcp_Slave_Byte6 : 8;
  vbittype Xcp_Slave_Byte7 : 8;
} _c_Xcp_Slave_Msg_RDS_msgType;

typedef struct _c_LKA_Steering_Trq_Overlay_Stat_HS_RDS_msgTypeTag
{
  vbittype LKAElPwrStTtlTqDlvd_1 : 3;
  vbittype LKATrqOvrlTrqDStat : 3;
  vbittype unused0 : 2;
  vbittype LKAElPwrStTtlTqDlvd_0 : 8;
  vbittype LKATrqOvrlDltTrqDlvd_1 : 3;
  vbittype HndsOffStrWhlDtMd : 2;
  vbittype HndsOffStrWhlDtSt : 1;
  vbittype HndsOffStrWhlDtStV : 1;
  vbittype unused1 : 1;
  vbittype LKATrqOvrlDltTrqDlvd_0 : 8;
  vbittype LKATrqOvrlStatChksm_1 : 3;
  vbittype LKATrqOvrlDlvdRC : 4;
  vbittype unused2 : 1;
  vbittype LKATrqOvrlStatChksm_0 : 8;
  vbittype LKADrvAppldTrq_1 : 3;
  vbittype LKADrvAppldTrqV : 1;
  vbittype unused3 : 4;
  vbittype LKADrvAppldTrq_0 : 8;
} _c_LKA_Steering_Trq_Overlay_Stat_HS_RDS_msgType;

typedef struct _c_Power_Steering_Information_HS_RDS_msgTypeTag
{
  vbittype PwrStrIO : 1;
  vbittype StrngAsstRdcdIO : 1;
  vbittype StrAsstRdcdLvl2IO : 1;
  vbittype StrAsstRdcdLvl3IO : 1;
  vbittype unused0 : 4;
} _c_Power_Steering_Information_HS_RDS_msgType;

typedef struct _c_DTC_Triggered_778_RDS_msgTypeTag
{
  vbittype DTCI_DTCTriggered_778 : 1;
  vbittype DTCIUnused7_778 : 1;
  vbittype DTCIUnused6_778 : 1;
  vbittype DTCIUnused5_778 : 1;
  vbittype DTCIUnused4_778 : 1;
  vbittype DTCIUnused3_778 : 1;
  vbittype DTCIUnused2_778 : 1;
  vbittype DTCIUnused1_778 : 1;
  vbittype DTCI_DTCSource_778 : 8;
  vbittype DTCI_DTCNumber_778_1 : 8;
  vbittype DTCI_DTCNumber_778_0 : 8;
  vbittype DTCI_DTCFailType_778 : 8;
  vbittype DTCI_CodeSupported_778 : 1;
  vbittype DTCI_CurrentStatus_778 : 1;
  vbittype DTCI_TstNPsdCdClrdSt_778 : 1;
  vbittype DTCI_TstFldCdClrdStat_778 : 1;
  vbittype DTCI_HistStat_778 : 1;
  vbittype DTCI_TstNPsdPwrUpSt_778 : 1;
  vbittype DTCI_TstFldPwrUpSt_778 : 1;
  vbittype DTCI_WrnIndRqdSt_778 : 1;
  vbittype DTCI_DTCFaultType_778 : 8;
} _c_DTC_Triggered_778_RDS_msgType;

typedef struct _c_PPEI_Steering_Wheel_Angle_RDS_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype StrWhAngMsk_0 : 1;
  vbittype StrWhlAngSenTyp_0 : 2;
  vbittype StrWhlAngSenCalStat_0 : 2;
  vbittype StrWhAngV_0 : 1;
  vbittype StrWhAng_0_1 : 8;
  vbittype StrWhAng_0_0 : 8;
  vbittype StrWhAngGrd_0_1 : 4;
  vbittype StrWhAngGrdMsk_0 : 1;
  vbittype StWhlAngAliveRollCnt_0 : 2;
  vbittype StrWhAngGrdV_0 : 1;
  vbittype StrWhAngGrd_0_0 : 8;
  vbittype unused1 : 8;
  vbittype StrAngSnsChksm_0_1 : 3;
  vbittype unused2 : 5;
  vbittype StrAngSnsChksm_0_0 : 8;
} _c_PPEI_Steering_Wheel_Angle_RDS_msgType;

typedef struct _c_UUDT_Resp_From_EHPS_EPS_HS_RDS_msgTypeTag
{
  vbittype DgnInf_HS542_7 : 8;
  vbittype DgnInf_HS542_6 : 8;
  vbittype DgnInf_HS542_5 : 8;
  vbittype DgnInf_HS542_4 : 8;
  vbittype DgnInf_HS542_3 : 8;
  vbittype DgnInf_HS542_2 : 8;
  vbittype DgnInf_HS542_1 : 8;
  vbittype DgnInf_HS542_0 : 8;
} _c_UUDT_Resp_From_EHPS_EPS_HS_RDS_msgType;

typedef struct _c_USDT_Resp_From_EHPS_EPS_HS_RDS_msgTypeTag
{
  vbittype DgnInf_0_7 : 8;
  vbittype DgnInf_0_6 : 8;
  vbittype DgnInf_0_5 : 8;
  vbittype DgnInf_0_4 : 8;
  vbittype DgnInf_0_3 : 8;
  vbittype DgnInf_0_2 : 8;
  vbittype DgnInf_0_1 : 8;
  vbittype DgnInf_0_0 : 8;
} _c_USDT_Resp_From_EHPS_EPS_HS_RDS_msgType;

typedef struct _c_CmnMfgSrvResp_RDS_msgTypeTag
{
  vbittype DgnInf_0_7 : 8;
  vbittype DgnInf_0_6 : 8;
  vbittype DgnInf_0_5 : 8;
  vbittype DgnInf_0_4 : 8;
  vbittype DgnInf_0_3 : 8;
  vbittype DgnInf_0_2 : 8;
  vbittype DgnInf_0_1 : 8;
  vbittype DgnInf_0_0 : 8;
} _c_CmnMfgSrvResp_RDS_msgType;

typedef struct _c_T1_HostToTarget_RDS_msgTypeTag
{
  vbittype T1_HostToTarget_0 : 8;
  vbittype T1_HostToTarget_1 : 8;
  vbittype T1_HostToTarget_2 : 8;
  vbittype T1_HostToTarget_3 : 8;
  vbittype T1_HostToTarget_4 : 8;
  vbittype T1_HostToTarget_5 : 8;
  vbittype T1_HostToTarget_6 : 8;
  vbittype T1_HostToTarget_7 : 8;
} _c_T1_HostToTarget_RDS_msgType;

typedef struct _c_Wheel_Pulses_HS_RDS_msgTypeTag
{
  vbittype WhlPlsPerRevDrvn_0 : 7;
  vbittype unused0 : 1;
  vbittype WhlPlsPerRevNonDrvn_0 : 7;
  vbittype unused1 : 1;
  vbittype WhlRotStatTmstmpRes_1 : 3;
  vbittype unused2 : 5;
  vbittype WhlRotStatTmstmpRes_0 : 8;
} _c_Wheel_Pulses_HS_RDS_msgType;

typedef struct _c_PPEI_Engine_General_Status_5_RDS_msgTypeTag
{
  vbittype unused0 : 7;
  vbittype EngOilTmpV : 1;
  vbittype EngOilTmp : 8;
} _c_PPEI_Engine_General_Status_5_RDS_msgType;

typedef struct _c_PPEI_Platform_Eng_Cntrl_Requests_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 2;
  vbittype EngOffTmExtRngV : 1;
  vbittype EngOffTmVDA : 1;
  vbittype unused4 : 4;
  vbittype EngOffTmExtRng : 8;
  vbittype unused5 : 8;
  vbittype OtsAirTmpCrValV : 1;
  vbittype unused6 : 2;
  vbittype OtsAirTmpCrValMsk : 1;
  vbittype unused7 : 4;
  vbittype OtsAirTmpCrVal : 8;
} _c_PPEI_Platform_Eng_Cntrl_Requests_RDS_msgType;

typedef struct _c_NonDriven_Wheel_Grnd_Velocity_HS_RDS_msgTypeTag
{
  vbittype WhlGrndVlctyLftNnDrvn_0_1 : 6;
  vbittype WhlGrndVlctyLftNnDrvnV_0 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftNnDrvn_0_0 : 8;
  vbittype WhlGrndVlctyRtNnDrvn_0_1 : 6;
  vbittype WhlGrndVlctyRtNnDrvnV_0 : 1;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtNnDrvn_0_0 : 8;
  vbittype WhlRotDrctnlSRtNDrvn : 3;
  vbittype WhlRotDrctnlStLfNDrvn : 3;
  vbittype unused2 : 2;
} _c_NonDriven_Wheel_Grnd_Velocity_HS_RDS_msgType;

typedef struct _c_Driven_Wheel_Grnd_Velocity_HS_RDS_msgTypeTag
{
  vbittype WhlGrndVlctyLftDrvn_0_1 : 6;
  vbittype WhlGrndVlctyLftDrvnV_0 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftDrvn_0_0 : 8;
  vbittype WhlGrndVlctyRtDrvn_0_1 : 6;
  vbittype WhlGrndVlctyRtDrvnV_0 : 1;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtDrvn_0_0 : 8;
  vbittype WhlRotDrctnlStRtDrvn : 3;
  vbittype WhlRotDrctnlStLftDrvn : 3;
  vbittype unused2 : 2;
} _c_Driven_Wheel_Grnd_Velocity_HS_RDS_msgType;

typedef struct _c_Driving_Mode_Control_HS_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 3;
  vbittype StgSysPerfMdRq : 3;
  vbittype unused4 : 2;
  vbittype DrvMdCntrlState : 8;
} _c_Driving_Mode_Control_HS_RDS_msgType;

typedef struct _c_Brake_Pedal_Driver_Status_HS_RDS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 1;
  vbittype AutoBrkngAvlbl : 1;
  vbittype unused3 : 6;
  vbittype unused4 : 8;
  vbittype unused5 : 5;
  vbittype RedntVSEActARC : 2;
  vbittype RedntVSEAct : 1;
  vbittype unused6 : 2;
  vbittype ABSActvProtPVal : 2;
  vbittype ABSActvProtARC : 2;
  vbittype ABSActvProt : 1;
  vbittype unused7 : 1;
} _c_Brake_Pedal_Driver_Status_HS_RDS_msgType;

typedef struct _c_PPEI_Trans_General_Status_2_RDS_msgTypeTag
{
  vbittype TransEstGear : 4;
  vbittype TransEstGearV : 1;
  vbittype unused0 : 3;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype TrnsShftLvrPos : 4;
  vbittype TrnsShftLvrPosV : 1;
  vbittype unused3 : 3;
  vbittype unused4 : 8;
  vbittype unused5 : 2;
  vbittype TrnShftPtrnActStat : 3;
  vbittype unused6 : 3;
} _c_PPEI_Trans_General_Status_2_RDS_msgType;

typedef struct _c_PPEI_Platform_General_Status_RDS_msgTypeTag
{
  vbittype SysPwrMd : 2;
  vbittype unused0 : 2;
  vbittype SysBkUpPwrMd : 2;
  vbittype SysBkupPwrMdEn : 1;
  vbittype BkupPwrModeMstrVDA : 1;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 2;
  vbittype TrStLgMdAtv : 1;
  vbittype unused5 : 5;
} _c_PPEI_Platform_General_Status_RDS_msgType;

typedef struct _c_PPEI_Chassis_General_Status_1_RDS_msgTypeTag
{
  vbittype VSELatAcc_1 : 4;
  vbittype VSELatAccV : 1;
  vbittype unused0 : 1;
  vbittype BrkPdlDrvAppPrsDetcd : 1;
  vbittype BrkPdlDrvAppPrsDetcdV : 1;
  vbittype VSELatAcc_0 : 8;
  vbittype unused1 : 8;
  vbittype VSEAct_0 : 1;
  vbittype unused2 : 1;
  vbittype TracCntrlSysDrIntnt : 1;
  vbittype TCSysEnbld : 1;
  vbittype TCSysAtv : 1;
  vbittype ABSFld : 1;
  vbittype ABSAtv_0 : 1;
  vbittype unused3 : 1;
  vbittype VehDynYawRate_1 : 4;
  vbittype VehDynYawRateV : 1;
  vbittype VhDynCntlSysSt : 3;
  vbittype VehDynYawRate_0 : 8;
  vbittype VehDynOvrUndrStr_0_1 : 2;
  vbittype VehDynOvrUndrStrV_0 : 1;
  vbittype unused4 : 5;
  vbittype VehDynOvrUndrStr_0_0 : 8;
} _c_PPEI_Chassis_General_Status_1_RDS_msgType;

typedef struct _c_LKA_Steering_Torque_Cmd_HS_RDS_msgTypeTag
{
  vbittype LKATODC_TrqVl_1 : 3;
  vbittype LKATODC_TrqRqAct : 1;
  vbittype LKATqOvrDltCmdRC : 2;
  vbittype unused0 : 2;
  vbittype LKATODC_TrqVl_0 : 8;
  vbittype LKATqOvrDltCmdPrtVl_1 : 4;
  vbittype unused1 : 4;
  vbittype LKATqOvrDltCmdPrtVl_0 : 8;
} _c_LKA_Steering_Torque_Cmd_HS_RDS_msgType;

typedef struct _c_Antilock_Brake_and_TC_Status_HS_RDS_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype VehStabEnhmntStat_0 : 3;
  vbittype TCSysOpMd : 3;
} _c_Antilock_Brake_and_TC_Status_HS_RDS_msgType;

typedef struct _c_PPEI_Engine_General_Status_1_RDS_msgTypeTag
{
  vbittype EngSpdStat : 2;
  vbittype unused0 : 4;
  vbittype PT_CrnkAct : 1;
  vbittype EngRunAtv : 1;
  vbittype EngSpd_1 : 8;
  vbittype EngSpd_0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 5;
  vbittype Eng12vStrtrMtrCmmdOn : 1;
  vbittype unused5 : 2;
} _c_PPEI_Engine_General_Status_1_RDS_msgType;

typedef struct _c_PPEI_NonDrivn_Whl_Rotationl_Stat_RDS_msgTypeTag
{
  vbittype WRSLNDWhlDistPCntr_1 : 2;
  vbittype WRSLNDWhlDistVal : 1;
  vbittype WRSLNDWhlRotStRst : 1;
  vbittype WRSLNDSeqNum : 2;
  vbittype WRSLNDWhlDisTpRC : 2;
  vbittype WRSLNDWhlDistPCntr_0 : 8;
  vbittype WRSLNDWhlDistTstm_1 : 8;
  vbittype WRSLNDWhlDistTstm_0 : 8;
  vbittype WRSRNDWhlDistPCntr_1 : 2;
  vbittype WRSRNDWhlDistVal : 1;
  vbittype WRSRNDWhlRotStRst : 1;
  vbittype WRSRNDSeqNum : 2;
  vbittype WRSRNDWhlDisTpRC : 2;
  vbittype WRSRNDWhlDistPCntr_0 : 8;
  vbittype WRSRNDWhlDistTstm_1 : 8;
  vbittype WRSRNDWhlDistTstm_0 : 8;
} _c_PPEI_NonDrivn_Whl_Rotationl_Stat_RDS_msgType;

#define b_CAN_Xcp_Master_Byte0_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte0)
#define b_CAN_Xcp_Master_Byte1_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte1)
#define b_CAN_Xcp_Master_Byte2_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte2)
#define b_CAN_Xcp_Master_Byte3_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte3)
#define b_CAN_Xcp_Master_Byte4_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte4)
#define b_CAN_Xcp_Master_Byte5_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte5)
#define b_CAN_Xcp_Master_Byte6_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte6)
#define b_CAN_Xcp_Master_Byte7_c             (RDSBasic_0.Xcp_Master_Msg.Xcp_Master_Byte7)

typedef struct _c_Xcp_Master_Msg_RDS_msgTypeTag
{
  vbittype Xcp_Master_Byte0 : 8;
  vbittype Xcp_Master_Byte1 : 8;
  vbittype Xcp_Master_Byte2 : 8;
  vbittype Xcp_Master_Byte3 : 8;
  vbittype Xcp_Master_Byte4 : 8;
  vbittype Xcp_Master_Byte5 : 8;
  vbittype Xcp_Master_Byte6 : 8;
  vbittype Xcp_Master_Byte7 : 8;
} _c_Xcp_Master_Msg_RDS_msgType;

typedef struct _c_USDT_Req_to_EHPS_EPS_HS_RDS_msgTypeTag
{
  vbittype DgnInf_0_7 : 8;
  vbittype DgnInf_0_6 : 8;
  vbittype DgnInf_0_5 : 8;
  vbittype DgnInf_0_4 : 8;
  vbittype DgnInf_0_3 : 8;
  vbittype DgnInf_0_2 : 8;
  vbittype DgnInf_0_1 : 8;
  vbittype DgnInf_0_0 : 8;
} _c_USDT_Req_to_EHPS_EPS_HS_RDS_msgType;

typedef struct _c_USDT_Req_to_All_HS_ECUs_RDS_msgTypeTag
{
  vbittype DgnInf_0_7 : 8;
  vbittype DgnInf_0_6 : 8;
  vbittype DgnInf_0_5 : 8;
  vbittype DgnInf_0_4 : 8;
  vbittype DgnInf_0_3 : 8;
  vbittype DgnInf_0_2 : 8;
  vbittype DgnInf_0_1 : 8;
  vbittype DgnInf_0_0 : 8;
} _c_USDT_Req_to_All_HS_ECUs_RDS_msgType;

typedef struct _c_CmnMfgSrvReq_RDS_msgTypeTag
{
  vbittype DgnInf_0_7 : 8;
  vbittype DgnInf_0_6 : 8;
  vbittype DgnInf_0_5 : 8;
  vbittype DgnInf_0_4 : 8;
  vbittype DgnInf_0_3 : 8;
  vbittype DgnInf_0_2 : 8;
  vbittype DgnInf_0_1 : 8;
  vbittype DgnInf_0_0 : 8;
} _c_CmnMfgSrvReq_RDS_msgType;

typedef union _c_RDS_Tx_buf_0Tag
{
  vuint8 _c[8];
  _c_Xcp_Slave_Msg_RDS_msgType Xcp_Slave_Msg;
  _c_LKA_Steering_Trq_Overlay_Stat_HS_RDS_msgType LKA_Steering_Trq_Overlay_Stat_HS;
  _c_Power_Steering_Information_HS_RDS_msgType Power_Steering_Information_HS;
  _c_DTC_Triggered_778_RDS_msgType DTC_Triggered_778;
  _c_PPEI_Steering_Wheel_Angle_RDS_msgType PPEI_Steering_Wheel_Angle;
  _c_UUDT_Resp_From_EHPS_EPS_HS_RDS_msgType UUDT_Resp_From_EHPS_EPS_HS;
  _c_USDT_Resp_From_EHPS_EPS_HS_RDS_msgType USDT_Resp_From_EHPS_EPS_HS;
  _c_CmnMfgSrvResp_RDS_msgType CmnMfgSrvResp;
} _c_RDS_Tx_buf_0;
typedef union _c_RDS0_bufTag
{
  vuint8 _c[8];
  _c_T1_HostToTarget_RDS_msgType T1_HostToTarget;
} _c_RDS0_buf;
typedef union _c_RDS1_bufTag
{
  vuint8 _c[4];
  _c_Wheel_Pulses_HS_RDS_msgType Wheel_Pulses_HS;
} _c_RDS1_buf;
typedef union _c_RDS2_bufTag
{
  vuint8 _c[2];
  _c_PPEI_Engine_General_Status_5_RDS_msgType PPEI_Engine_General_Status_5;
} _c_RDS2_buf;
typedef union _c_RDS3_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Platform_Eng_Cntrl_Requests_RDS_msgType PPEI_Platform_Eng_Cntrl_Requests;
} _c_RDS3_buf;
typedef union _c_RDS4_bufTag
{
  vuint8 _c[5];
  _c_NonDriven_Wheel_Grnd_Velocity_HS_RDS_msgType NonDriven_Wheel_Grnd_Velocity_HS;
} _c_RDS4_buf;
typedef union _c_RDS5_bufTag
{
  vuint8 _c[5];
  _c_Driven_Wheel_Grnd_Velocity_HS_RDS_msgType Driven_Wheel_Grnd_Velocity_HS;
} _c_RDS5_buf;
typedef union _c_RDS6_bufTag
{
  vuint8 _c[5];
  _c_Driving_Mode_Control_HS_RDS_msgType Driving_Mode_Control_HS;
} _c_RDS6_buf;
typedef union _c_RDS7_bufTag
{
  vuint8 _c[6];
  _c_Brake_Pedal_Driver_Status_HS_RDS_msgType Brake_Pedal_Driver_Status_HS;
} _c_RDS7_buf;
typedef union _c_RDS8_bufTag
{
  vuint8 _c[6];
  _c_PPEI_Trans_General_Status_2_RDS_msgType PPEI_Trans_General_Status_2;
} _c_RDS8_buf;
typedef union _c_RDS9_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Platform_General_Status_RDS_msgType PPEI_Platform_General_Status;
} _c_RDS9_buf;
typedef union _c_RDS10_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Chassis_General_Status_1_RDS_msgType PPEI_Chassis_General_Status_1;
} _c_RDS10_buf;
typedef union _c_RDS11_bufTag
{
  vuint8 _c[4];
  _c_LKA_Steering_Torque_Cmd_HS_RDS_msgType LKA_Steering_Torque_Cmd_HS;
} _c_RDS11_buf;
typedef union _c_RDS12_bufTag
{
  vuint8 _c[1];
  _c_Antilock_Brake_and_TC_Status_HS_RDS_msgType Antilock_Brake_and_TC_Status_HS;
} _c_RDS12_buf;
typedef union _c_RDS13_bufTag
{
  vuint8 _c[7];
  _c_PPEI_Engine_General_Status_1_RDS_msgType PPEI_Engine_General_Status_1;
} _c_RDS13_buf;
typedef union _c_RDS14_bufTag
{
  vuint8 _c[8];
  _c_PPEI_NonDrivn_Whl_Rotationl_Stat_RDS_msgType PPEI_NonDrivn_Whl_Rotationl_Stat;
} _c_RDS14_buf;
typedef union _c_RDSBasic_buf_0Tag
{
  vuint8 _c[8];
  _c_Xcp_Master_Msg_RDS_msgType Xcp_Master_Msg;
  _c_USDT_Req_to_EHPS_EPS_HS_RDS_msgType USDT_Req_to_EHPS_EPS_HS;
  _c_USDT_Req_to_All_HS_ECUs_RDS_msgType USDT_Req_to_All_HS_ECUs;
  _c_CmnMfgSrvReq_RDS_msgType CmnMfgSrvReq;
} _c_RDSBasic_buf_0;


#define RDSTx_0                              ((* ((_c_RDS_Tx_buf_0 MEMORY_NORMAL *)(0xffd20000 + 0x608 + 0xa00))))
#define RDS0                                 ((* ((_c_RDS0_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS1                                 ((* ((_c_RDS1_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS2                                 ((* ((_c_RDS2_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS3                                 ((* ((_c_RDS3_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS4                                 ((* ((_c_RDS4_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS5                                 ((* ((_c_RDS5_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS6                                 ((* ((_c_RDS6_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS7                                 ((* ((_c_RDS7_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS8                                 ((* ((_c_RDS8_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS9                                 ((* ((_c_RDS9_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS10                                ((* ((_c_RDS10_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS11                                ((* ((_c_RDS11_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS12                                ((* ((_c_RDS12_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS13                                ((* ((_c_RDS13_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDS14                                ((* ((_c_RDS14_buf MEMORY_NORMAL *)(canRDSRxPtr[0]))))
#define RDSBasic_0                           ((* ((_c_RDSBasic_buf_0 MEMORY_NORMAL *)(canRDSRxPtr[0]))))

typedef struct _c_PPEI_Steering_Wheel_Angle_CE_RDS_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype StrWhAngMsk_1 : 1;
  vbittype StrWhlAngSenTyp_1 : 2;
  vbittype StrWhlAngSenCalStat_1 : 2;
  vbittype StrWhAngV_1 : 1;
  vbittype StrWhAng_1_1 : 8;
  vbittype StrWhAng_1_0 : 8;
  vbittype StrWhAngGrd_1_1 : 4;
  vbittype StrWhAngGrdMsk_1 : 1;
  vbittype StWhlAngAliveRollCnt_1 : 2;
  vbittype StrWhAngGrdV_1 : 1;
  vbittype StrWhAngGrd_1_0 : 8;
  vbittype unused1 : 8;
  vbittype StrAngSnsChksm_1_1 : 3;
  vbittype unused2 : 5;
  vbittype StrAngSnsChksm_1_0 : 8;
} _c_PPEI_Steering_Wheel_Angle_CE_RDS_msgType;

typedef struct _c_Electric_Power_Steering_CE_RDS_msgTypeTag
{
  vbittype ElecPwrStrAvalStat : 2;
  vbittype DrvStrIntfrDtcdV : 1;
  vbittype DrvStrIntfrDtcd : 1;
  vbittype DrvStrIntfrDetARC : 2;
  vbittype DrvStrIntfrDetPrtVal : 2;
  vbittype ElcPwrStrAvalStatARC : 2;
  vbittype ElcPwrStrAvalStatPVal : 2;
  vbittype unused0 : 4;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
} _c_Electric_Power_Steering_CE_RDS_msgType;

#define b_CAN_DgnInf_CE542_0_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_0)
#define b_CAN_DgnInf_CE542_1_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_1)
#define b_CAN_DgnInf_CE542_2_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_2)
#define b_CAN_DgnInf_CE542_3_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_3)
#define b_CAN_DgnInf_CE542_4_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_4)
#define b_CAN_DgnInf_CE542_5_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_5)
#define b_CAN_DgnInf_CE542_6_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_6)
#define b_CAN_DgnInf_CE542_7_b               (RDSTx_1.UUDT_Resp_From_EPS_EPS_JR_CE.DgnInf_CE542_7)

typedef struct _c_UUDT_Resp_From_EPS_EPS_JR_CE_RDS_msgTypeTag
{
  vbittype DgnInf_CE542_7 : 8;
  vbittype DgnInf_CE542_6 : 8;
  vbittype DgnInf_CE542_5 : 8;
  vbittype DgnInf_CE542_4 : 8;
  vbittype DgnInf_CE542_3 : 8;
  vbittype DgnInf_CE542_2 : 8;
  vbittype DgnInf_CE542_1 : 8;
  vbittype DgnInf_CE542_0 : 8;
} _c_UUDT_Resp_From_EPS_EPS_JR_CE_RDS_msgType;

typedef struct _c_USDT_Resp_From_EPS_EPS_JR_CE_RDS_msgTypeTag
{
  vbittype DgnInf_1_7 : 8;
  vbittype DgnInf_1_6 : 8;
  vbittype DgnInf_1_5 : 8;
  vbittype DgnInf_1_4 : 8;
  vbittype DgnInf_1_3 : 8;
  vbittype DgnInf_1_2 : 8;
  vbittype DgnInf_1_1 : 8;
  vbittype DgnInf_1_0 : 8;
} _c_USDT_Resp_From_EPS_EPS_JR_CE_RDS_msgType;

typedef struct _c_Steering_Torque_Overlay_Stat_CE_RDS_msgTypeTag
{
  vbittype ElPwrStTtlTqDlrd_1 : 3;
  vbittype TrqOvrlTrqDStat : 2;
  vbittype unused0 : 3;
  vbittype ElPwrStTtlTqDlrd_0 : 8;
  vbittype unused1 : 3;
  vbittype TrqOvrlDvrdARC : 4;
  vbittype unused2 : 1;
  vbittype unused3 : 8;
  vbittype TrqOvrlDltTrqDlrd_1 : 3;
  vbittype unused4 : 5;
  vbittype TrqOvrlDltTrqDlrd_0 : 8;
  vbittype TrqOvrlDChksm_1 : 3;
  vbittype unused5 : 5;
  vbittype TrqOvrlDChksm_0 : 8;
} _c_Steering_Torque_Overlay_Stat_CE_RDS_msgType;

typedef struct _c_NonDriven_Wheel_Grnd_Velocity_CE_RDS_msgTypeTag
{
  vbittype WhlGrndVlctyLftNnDrvn_1_1 : 6;
  vbittype WhlGrndVlctyLftNnDrvnV_1 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftNnDrvn_1_0 : 8;
  vbittype WhlGrndVlctyRtNnDrvn_1_1 : 6;
  vbittype WhlGrndVlctyRtNnDrvnV_1 : 1;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtNnDrvn_1_0 : 8;
  vbittype WhlPlsPerRevNonDrvn_1 : 7;
  vbittype unused2 : 1;
} _c_NonDriven_Wheel_Grnd_Velocity_CE_RDS_msgType;

typedef struct _c_Driven_Wheel_Grnd_Velocity_CE_RDS_msgTypeTag
{
  vbittype WhlGrndVlctyLftDrvn_1_1 : 6;
  vbittype WhlGrndVlctyLftDrvnV_1 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftDrvn_1_0 : 8;
  vbittype WhlGrndVlctyRtDrvn_1_1 : 6;
  vbittype WhlGrndVlctyRtDrvnV_1 : 1;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtDrvn_1_0 : 8;
  vbittype WhlPlsPerRevDrvn_1 : 7;
  vbittype unused2 : 1;
} _c_Driven_Wheel_Grnd_Velocity_CE_RDS_msgType;

typedef struct _c_Park_Assist_Parallel_CE_RDS_msgTypeTag
{
  vbittype StrWhlTctlFdbkReqActRC : 2;
  vbittype unused0 : 1;
  vbittype StrWhlTctlFdbkReqAct : 1;
  vbittype StrWhlTctlFdbkReqActProtVal : 2;
  vbittype unused1 : 2;
  vbittype SWAR_ReqActV : 1;
  vbittype SWAR_ReqAct : 1;
  vbittype unused2 : 6;
  vbittype SWAR_TrgtAng_1 : 8;
  vbittype SWAR_TrgtAng_0 : 8;
  vbittype StrWhlAngReqPrtVal_2 : 2;
  vbittype StrWhlAngReqARC : 2;
  vbittype unused3 : 4;
  vbittype StrWhlAngReqPrtVal_1 : 8;
  vbittype StrWhlAngReqPrtVal_0 : 8;
} _c_Park_Assist_Parallel_CE_RDS_msgType;

typedef struct _c_Vehicle_Dynamics_ESC_Hyb_CE_RDS_msgTypeTag
{
  vbittype VSEAct_1 : 1;
  vbittype unused0 : 2;
  vbittype VSELongAccLoResV : 1;
  vbittype unused1 : 4;
  vbittype VSELongAccLoRes_1 : 2;
  vbittype VehStabEnhmntStat_1 : 3;
  vbittype unused2 : 3;
  vbittype VSELongAccLoRes_0 : 8;
  vbittype VehDynOvrUndrStr_1_1 : 2;
  vbittype VehDynOvrUndrStrV_1 : 1;
  vbittype unused3 : 5;
  vbittype VehDynOvrUndrStr_1_0 : 8;
} _c_Vehicle_Dynamics_ESC_Hyb_CE_RDS_msgType;

typedef struct _c_Steering_Torque_Command_CE_RDS_msgTypeTag
{
  vbittype TqOvrDltTqCmdVl_1 : 3;
  vbittype TqOvrDltTqCmdAct : 1;
  vbittype TrqOvrlARC : 4;
  vbittype TqOvrDltTqCmdVl_0 : 8;
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype TrqOvrlCmdChksm_1 : 3;
  vbittype unused4 : 5;
  vbittype TrqOvrlCmdChksm_0 : 8;
} _c_Steering_Torque_Command_CE_RDS_msgType;

typedef struct _c_USDT_Req_to_All_CE_ECUs_RDS_msgTypeTag
{
  vbittype DgnInf_1_7 : 8;
  vbittype DgnInf_1_6 : 8;
  vbittype DgnInf_1_5 : 8;
  vbittype DgnInf_1_4 : 8;
  vbittype DgnInf_1_3 : 8;
  vbittype DgnInf_1_2 : 8;
  vbittype DgnInf_1_1 : 8;
  vbittype DgnInf_1_0 : 8;
} _c_USDT_Req_to_All_CE_ECUs_RDS_msgType;

typedef struct _c_USDT_Req_to_EPS_EPS_JR_CE_RDS_msgTypeTag
{
  vbittype DgnInf_1_7 : 8;
  vbittype DgnInf_1_6 : 8;
  vbittype DgnInf_1_5 : 8;
  vbittype DgnInf_1_4 : 8;
  vbittype DgnInf_1_3 : 8;
  vbittype DgnInf_1_2 : 8;
  vbittype DgnInf_1_1 : 8;
  vbittype DgnInf_1_0 : 8;
} _c_USDT_Req_to_EPS_EPS_JR_CE_RDS_msgType;

typedef union _c_RDS_Tx_buf_1Tag
{
  vuint8 _c[8];
  _c_PPEI_Steering_Wheel_Angle_CE_RDS_msgType PPEI_Steering_Wheel_Angle_CE;
  _c_Electric_Power_Steering_CE_RDS_msgType Electric_Power_Steering_CE;
  _c_UUDT_Resp_From_EPS_EPS_JR_CE_RDS_msgType UUDT_Resp_From_EPS_EPS_JR_CE;
  _c_USDT_Resp_From_EPS_EPS_JR_CE_RDS_msgType USDT_Resp_From_EPS_EPS_JR_CE;
  _c_Steering_Torque_Overlay_Stat_CE_RDS_msgType Steering_Torque_Overlay_Stat_CE;
} _c_RDS_Tx_buf_1;
typedef union _c_RDS15_bufTag
{
  vuint8 _c[5];
  _c_NonDriven_Wheel_Grnd_Velocity_CE_RDS_msgType NonDriven_Wheel_Grnd_Velocity_CE;
} _c_RDS15_buf;
typedef union _c_RDS16_bufTag
{
  vuint8 _c[5];
  _c_Driven_Wheel_Grnd_Velocity_CE_RDS_msgType Driven_Wheel_Grnd_Velocity_CE;
} _c_RDS16_buf;
typedef union _c_RDS17_bufTag
{
  vuint8 _c[7];
  _c_Park_Assist_Parallel_CE_RDS_msgType Park_Assist_Parallel_CE;
} _c_RDS17_buf;
typedef union _c_RDS18_bufTag
{
  vuint8 _c[5];
  _c_Vehicle_Dynamics_ESC_Hyb_CE_RDS_msgType Vehicle_Dynamics_ESC_Hyb_CE;
} _c_RDS18_buf;
typedef union _c_RDS19_bufTag
{
  vuint8 _c[8];
  _c_Steering_Torque_Command_CE_RDS_msgType Steering_Torque_Command_CE;
} _c_RDS19_buf;
typedef union _c_RDSBasic_buf_1Tag
{
  vuint8 _c[8];
  _c_USDT_Req_to_All_CE_ECUs_RDS_msgType USDT_Req_to_All_CE_ECUs;
  _c_USDT_Req_to_EPS_EPS_JR_CE_RDS_msgType USDT_Req_to_EPS_EPS_JR_CE;
} _c_RDSBasic_buf_1;


#define RDSTx_1                              ((* ((_c_RDS_Tx_buf_1 MEMORY_NORMAL *)(0xffd20000 + 0x608 + 0xb00))))
#define RDS15                                ((* ((_c_RDS15_buf MEMORY_NORMAL *)(canRDSRxPtr[1]))))
#define RDS16                                ((* ((_c_RDS16_buf MEMORY_NORMAL *)(canRDSRxPtr[1]))))
#define RDS17                                ((* ((_c_RDS17_buf MEMORY_NORMAL *)(canRDSRxPtr[1]))))
#define RDS18                                ((* ((_c_RDS18_buf MEMORY_NORMAL *)(canRDSRxPtr[1]))))
#define RDS19                                ((* ((_c_RDS19_buf MEMORY_NORMAL *)(canRDSRxPtr[1]))))
#define RDSBasic_1                           ((* ((_c_RDSBasic_buf_1 MEMORY_NORMAL *)(canRDSRxPtr[1]))))



#define C_TX_NORMAL_0_HW_OBJ                 160
#define C_TX_NORMAL_0_HW_CHANNEL             0
#define CanRxT1_HostToTarget_HW_OBJ          0
#define CanRxT1_HostToTarget_HW_CHANNEL      0
#define CanRxWheel_Pulses_HS_HW_OBJ          1
#define CanRxWheel_Pulses_HS_HW_CHANNEL      0
#define CanRxPPEI_Engine_General_Status_5_HW_OBJ 2
#define CanRxPPEI_Engine_General_Status_5_HW_CHANNEL 0
#define CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_OBJ 3
#define CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_CHANNEL 0
#define CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_OBJ 4
#define CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL 0
#define CanRxDriven_Wheel_Grnd_Velocity_HS_HW_OBJ 5
#define CanRxDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL 0
#define CanRxDriving_Mode_Control_HS_HW_OBJ  6
#define CanRxDriving_Mode_Control_HS_HW_CHANNEL 0
#define CanRxBrake_Pedal_Driver_Status_HS_HW_OBJ 7
#define CanRxBrake_Pedal_Driver_Status_HS_HW_CHANNEL 0
#define CanRxPPEI_Trans_General_Status_2_HW_OBJ 8
#define CanRxPPEI_Trans_General_Status_2_HW_CHANNEL 0
#define CanRxPPEI_Platform_General_Status_HW_OBJ 9
#define CanRxPPEI_Platform_General_Status_HW_CHANNEL 0
#define CanRxPPEI_Chassis_General_Status_1_HW_OBJ 10
#define CanRxPPEI_Chassis_General_Status_1_HW_CHANNEL 0
#define CanRxLKA_Steering_Torque_Cmd_HS_HW_OBJ 11
#define CanRxLKA_Steering_Torque_Cmd_HS_HW_CHANNEL 0
#define CanRxAntilock_Brake_and_TC_Status_HS_HW_OBJ 12
#define CanRxAntilock_Brake_and_TC_Status_HS_HW_CHANNEL 0
#define CanRxPPEI_Engine_General_Status_1_HW_OBJ 13
#define CanRxPPEI_Engine_General_Status_1_HW_CHANNEL 0
#define CanRxPPEI_NonDrivn_Whl_Rotationl_Stat_HW_OBJ 14
#define CanRxPPEI_NonDrivn_Whl_Rotationl_Stat_HW_CHANNEL 0
#define C_BASIC0_0_HW_OBJ                    128
#define C_BASIC0_0_HW_CHANNEL                0

#define C_TX_NORMAL_1_HW_OBJ                 176
#define C_TX_NORMAL_1_HW_CHANNEL             1
#define CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_OBJ 15
#define CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL 1
#define CanRxDriven_Wheel_Grnd_Velocity_CE_HW_OBJ 16
#define CanRxDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL 1
#define CanRxPark_Assist_Parallel_CE_HW_OBJ  17
#define CanRxPark_Assist_Parallel_CE_HW_CHANNEL 1
#define CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_OBJ 18
#define CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_CHANNEL 1
#define CanRxSteering_Torque_Command_CE_HW_OBJ 19
#define CanRxSteering_Torque_Command_CE_HW_CHANNEL 1
#define C_BASIC0_1_HW_OBJ                    129
#define C_BASIC0_1_HW_CHANNEL                1




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\can_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __CAN_PAR_H__ */
