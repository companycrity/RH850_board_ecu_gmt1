/* -----------------------------------------------------------------------------
  Filename:    can_par.c
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

#define C_DRV_INTERNAL
#include "can_inc.h"
#include "can_par.h"
#include "v_inc.h"

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanTxId0 V_MEMROM2 CanTxId0[kCanNumberOfTxObjects] = 
{
  MK_STDID0(0x778) /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  MK_STDID0(0x710) /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  MK_STDID0(0x706) /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  MK_STDID0(0x642) /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  MK_STDID0(0x542) /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  MK_STDID0(0x1E5) /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  MK_STDID0(0x184) /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  MK_STDID0(0x148) /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  MK_STDID0(0x642) /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  MK_STDID0(0x542) /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  MK_STDID0(0x335) /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  MK_STDID0(0x1E5) /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  MK_STDID0(0x1CA) /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxDLC[kCanNumberOfTxObjects] = 
{
  MK_TX_DLC(7) /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  MK_TX_DLC(8) /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  MK_TX_DLC(1) /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  MK_TX_DLC(8) /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  MK_TX_DLC(8) /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 1 END */


#ifdef C_ENABLE_COPY_TX_DATA
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 TxDataPtr V_MEMROM2 CanTxDataPtr[kCanNumberOfTxObjects] = 
{
  (TxDataPtr) DTC_Triggered_778._c /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  (TxDataPtr) CmnMfgSrvResp._c /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  (TxDataPtr) Xcp_Slave_Msg._c /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  (TxDataPtr) USDT_Resp_From_EHPS_EPS_HS._c /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  (TxDataPtr) UUDT_Resp_From_EHPS_EPS_HS._c /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  (TxDataPtr) PPEI_Steering_Wheel_Angle._c /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  (TxDataPtr) LKA_Steering_Trq_Overlay_Stat_HS._c /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  (TxDataPtr) Power_Steering_Information_HS._c /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  (TxDataPtr) USDT_Resp_From_EPS_EPS_JR_CE._c /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  (TxDataPtr) UUDT_Resp_From_EPS_EPS_JR_CE._c /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  (TxDataPtr) Electric_Power_Steering_CE._c /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  (TxDataPtr) PPEI_Steering_Wheel_Angle_CE._c /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  (TxDataPtr) Steering_Torque_Overlay_Stat_CE._c /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PRETRANSMIT_FCT
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplPreTransmitFct V_MEMROM2 CanTxApplPreTransmitPtr[kCanNumberOfTxObjects] = 
{
  V_NULL /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  V_NULL /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  V_NULL /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  V_NULL /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  V_NULL /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  V_NULL /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  V_NULL /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  V_NULL /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  V_NULL /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  V_NULL /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  V_NULL /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  V_NULL /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  V_NULL /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_CONFIRMATION_FCT
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplConfirmationFct V_MEMROM2 CanTxApplConfirmationPtr[kCanNumberOfTxObjects] = 
{
  V_NULL /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  TpDrvConfirmation /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  XcpConfirmation /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  TpDrvConfirmation /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  DescUudtConfirmation /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  SerlComOutpProxy_1E5HiSpdCfmFct /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  SerlComOutpProxy_184CfmFct /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  V_NULL /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  TpDrvConfirmation /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  GgdaUudtConfirmation /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  SerlComOutpProxy_335CfmFct /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  SerlComOutpProxy_1E5ChassisExpCfmFct /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  SerlComOutpProxy_1CACfmFct /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PART_OFFLINE
/* ROM CATEGORY 2 START */

V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxSendMask[kCanNumberOfTxObjects] = 
{
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};

/* ROM CATEGORY 2 END */

#endif


#ifdef C_ENABLE_CONFIRMATION_FLAG
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanConfirmationOffset[kCanNumberOfTxObjects] = 
{
  0 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  0 /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  0 /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  0 /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0 /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  0 /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  0 /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  0 /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0 /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0 /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  0 /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  0 /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanConfirmationMask[kCanNumberOfTxObjects] = 
{
  0x01 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  0x00 /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  0x00 /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  0x00 /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0x00 /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0x02 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  0x04 /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  0x08 /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  0x00 /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0x00 /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0x10 /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  0x20 /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  0x40 /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 1 END */


#endif




/* Id table depending on search algorithm */
/* Linear search */
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanRxId0 V_MEMROM2 CanRxId0[kCanNumberOfRxObjects] = 
{
  MK_STDID0(0x712) /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  MK_STDID0(0x708) /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  MK_STDID0(0x242) /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  MK_STDID0(0x101) /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  MK_STDID0(0x7CB) /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  MK_STDID0(0x500) /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  MK_STDID0(0x4D1) /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  MK_STDID0(0x3F1) /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  MK_STDID0(0x34A) /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  MK_STDID0(0x348) /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  MK_STDID0(0x232) /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  MK_STDID0(0x214) /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  MK_STDID0(0x1F5) /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  MK_STDID0(0x1F1) /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  MK_STDID0(0x1E9) /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  MK_STDID0(0x180) /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  MK_STDID0(0x17D) /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  MK_STDID0(0x0C9) /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  MK_STDID0(0x0C5) /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  MK_STDID0(0x242) /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  MK_STDID0(0x101) /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */, 
  MK_STDID0(0x34A) /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  MK_STDID0(0x348) /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  MK_STDID0(0x337) /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  MK_STDID0(0x182) /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  MK_STDID0(0x180) /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanReceiveHandle V_MEMROM2 CanRxMsgIndirection[kCanNumberOfRxObjects] = 
{
  20 /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq */, 
  21 /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg */, 
  22 /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS */, 
  23 /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs */, 
  0 /* ID: 0x000007cb, Handle: 0, T1_HostToTarget */, 
  1 /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS */, 
  2 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 */, 
  3 /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests */, 
  4 /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS */, 
  5 /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS */, 
  6 /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS */, 
  7 /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS */, 
  8 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 */, 
  9 /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status */, 
  10 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 */, 
  11 /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS */, 
  12 /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS */, 
  13 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 */, 
  14 /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat */, 
  24 /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE */, 
  25 /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs */, 
  15 /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE */, 
  16 /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE */, 
  17 /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE */, 
  18 /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE */, 
  19 /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanRxDataLen[kCanNumberOfRxObjects] = 
{
  8 /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  4 /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  2 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  8 /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  5 /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  5 /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  5 /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  6 /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  6 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  8 /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  8 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  4 /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  1 /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  7 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  8 /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  5 /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  5 /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  7 /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  5 /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  8 /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  0 /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  8 /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  0 /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  0 /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  0 /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  0 /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
/* ROM CATEGORY 1 END */


#ifdef C_ENABLE_COPY_RX_DATA
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 RxDataPtr V_MEMROM2 CanRxDataPtr[kCanNumberOfRxObjects] = 
{
  (RxDataPtr) T1_HostToTarget._c /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  (RxDataPtr) Wheel_Pulses_HS._c /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  (RxDataPtr) PPEI_Engine_General_Status_5._c /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  (RxDataPtr) PPEI_Platform_Eng_Cntrl_Requests._c /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  (RxDataPtr) NonDriven_Wheel_Grnd_Velocity_HS._c /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  (RxDataPtr) Driven_Wheel_Grnd_Velocity_HS._c /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  (RxDataPtr) Driving_Mode_Control_HS._c /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  (RxDataPtr) Brake_Pedal_Driver_Status_HS._c /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  (RxDataPtr) PPEI_Trans_General_Status_2._c /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  (RxDataPtr) PPEI_Platform_General_Status._c /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  (RxDataPtr) PPEI_Chassis_General_Status_1._c /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  (RxDataPtr) LKA_Steering_Torque_Cmd_HS._c /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  (RxDataPtr) Antilock_Brake_and_TC_Status_HS._c /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  (RxDataPtr) PPEI_Engine_General_Status_1._c /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  (RxDataPtr) PPEI_NonDrivn_Whl_Rotationl_Stat._c /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  (RxDataPtr) NonDriven_Wheel_Grnd_Velocity_CE._c /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  (RxDataPtr) Driven_Wheel_Grnd_Velocity_CE._c /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  (RxDataPtr) Park_Assist_Parallel_CE._c /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  (RxDataPtr) Vehicle_Dynamics_ESC_Hyb_CE._c /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  (RxDataPtr) Steering_Torque_Command_CE._c /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  (RxDataPtr) 0 /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  (RxDataPtr) Xcp_Master_Msg._c /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  (RxDataPtr) 0 /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  (RxDataPtr) 0 /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  (RxDataPtr) 0 /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  (RxDataPtr) 0 /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PRECOPY_FCT
/* CODE CATEGORY 1 START */
/* CODE CATEGORY 1 END */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplPrecopyFct V_MEMROM2 CanRxApplPrecopyPtr[kCanNumberOfRxObjects] = 
{
  V_NULL /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  IlMsgWheel_Pulses_HSPreCopy /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  IlMsgPPEI_Engine_General_Status_5PreCopy /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  IlMsgPPEI_Platform_Eng_Cntrl_RequestsPreCopy /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  IlMsgNonDriven_Wheel_Grnd_Velocity_HSPreCopy /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlMsgDriven_Wheel_Grnd_Velocity_HSPreCopy /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  IlMsgDriving_Mode_Control_HSPreCopy /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  IlMsgBrake_Pedal_Driver_Status_HSPreCopy /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  IlMsgPPEI_Trans_General_Status_2PreCopy /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  IlMsgPPEI_Platform_General_StatusPreCopy /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  IlMsgPPEI_Chassis_General_Status_1PreCopy /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  IlMsgLKA_Steering_Torque_Cmd_HSPreCopy /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  IlMsgAntilock_Brake_and_TC_Status_HSPreCopy /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  IlMsgPPEI_Engine_General_Status_1PreCopy /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  V_NULL /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  IlMsgNonDriven_Wheel_Grnd_Velocity_CEPreCopy /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlMsgDriven_Wheel_Grnd_Velocity_CEPreCopy /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  IlMsgPark_Assist_Parallel_CEPreCopy /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  IlMsgVehicle_Dynamics_ESC_Hyb_CEPreCopy /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  V_NULL /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  TpPrecopy /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  XcpPreCopy /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  TpPrecopy /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  TpFuncPrecopy /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  TpPrecopy /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  GgdaFuncPrecopy /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_INDICATION_FCT
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplIndicationFct V_MEMROM2 CanRxApplIndicationPtr[kCanNumberOfRxObjects] = 
{
  V_NULL /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  V_NULL /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  V_NULL /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  V_NULL /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  V_NULL /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  V_NULL /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  V_NULL /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  V_NULL /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  V_NULL /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  V_NULL /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  V_NULL /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  V_NULL /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  V_NULL /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  V_NULL /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  V_NULL /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  V_NULL /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  V_NULL /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  V_NULL /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  V_NULL /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  V_NULL /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  V_NULL /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  V_NULL /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  V_NULL /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  V_NULL /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  V_NULL /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  V_NULL /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_INDICATION_FLAG
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanIndicationOffset[kCanNumberOfRxObjects] = 
{
  0 /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  0 /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  0 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  0 /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  0 /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  0 /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  0 /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  0 /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  0 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  1 /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  1 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  1 /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  1 /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  1 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  1 /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  1 /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  1 /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  2 /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  2 /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  2 /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  0 /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  2 /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  0 /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  0 /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  0 /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  0 /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanIndicationMask[kCanNumberOfRxObjects] = 
{
  0x00 /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  0x01 /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  0x02 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  0x04 /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  0x08 /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  0x10 /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  0x20 /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  0x40 /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  0x80 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  0x01 /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  0x02 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  0x04 /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  0x08 /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  0x10 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  0x20 /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  0x40 /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  0x80 /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  0x01 /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  0x02 /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  0x04 /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  0x00 /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  0x08 /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  0x00 /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  0x00 /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  0x00 /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  0x00 /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
/* ROM CATEGORY 1 END */


#endif




/* -----------------------------------------------------------------------------
    &&&~ Init structures
 ----------------------------------------------------------------------------- */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanInitObjectStartIndex[3] = 
{
  0, 
  1, 
  2
};

/* ROM CATEGORY 4 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 tCanFilterRulesBc V_MEMROM2 CanFilterRulesBc_0[4] = 
{
  
  {
    0x0712u, 
    0x07FFu
  }, 
  
  {
    0x0708u, 
    0x07FFu
  }, 
  
  {
    0x0242u, 
    0x07FFu
  }, 
  
  {
    0x0101u, 
    0x07FFu
  }
};
V_MEMROM0 V_MEMROM1 tCanFilterRulesBc V_MEMROM2 CanFilterRulesBc_1[2] = 
{
  
  {
    0x0242u, 
    0x07FFu
  }, 
  
  {
    0x0101u, 
    0x07FFu
  }
};
V_MEMROM0 V_MEMROM1 vuint32 V_MEMROM2 CanInitBCFG[2] = 
{
  0x022B0004u, 
  0x022B0004u
};
/* ROM CATEGORY 4 END */



/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanTransmitHandle V_MEMROM2 CanTxDynRomStartIndex[kCanNumberOfChannels] = 
{
  8, 
  13
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 1 START */

V_MEMROM0 V_MEMROM1 CanTransmitHandle V_MEMROM2 CanTxDynRamStartIndex[kCanNumberOfChannels+1] = 
{
  0, 
  0, 
  0
};

/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanChannelObject V_MEMROM2 CanChannelObject[kCanNumberOfChannels] = 
{
  
  {
    ApplCanChannelDummy, 
    CAN_RECEIVE_FCT_DUMMY, 
    
    {
      CAN_RANGE_FCT_DUMMY, 
      CAN_RANGE_FCT_DUMMY, 
      CAN_RANGE_FCT_DUMMY, 
      CAN_RANGE_FCT_DUMMY
    }, 
    NmCanError, 
    IlCanCancelNotification, 
    ApplCanChannelDummy, 
    
    {
      MK_RX_RANGE_MASK_IDSTD(0x00), 
      MK_RX_RANGE_MASK_IDSTD(0x00), 
      MK_RX_RANGE_MASK_IDSTD(0x00), 
      MK_RX_RANGE_MASK_IDSTD(0x00)
    }, 
    
    {
      MK_RX_RANGE_CODE_IDSTD(0x00), 
      MK_RX_RANGE_CODE_IDSTD(0x00), 
      MK_RX_RANGE_CODE_IDSTD(0x00), 
      MK_RX_RANGE_CODE_IDSTD(0x00)
    }, 
    0x00, 
    
    {
      kCanIdTypeStd, 
      kCanIdTypeStd, 
      kCanIdTypeStd, 
      kCanIdTypeStd
    }
  }, 
  
  {
    ApplCanChannelDummy, 
    CAN_RECEIVE_FCT_DUMMY, 
    
    {
      CAN_RANGE_FCT_DUMMY, 
      CAN_RANGE_FCT_DUMMY, 
      CAN_RANGE_FCT_DUMMY, 
      CAN_RANGE_FCT_DUMMY
    }, 
    NmCanError, 
    IlCanCancelNotification, 
    ApplCanChannelDummy, 
    
    {
      MK_RX_RANGE_MASK_IDSTD(0x00), 
      MK_RX_RANGE_MASK_IDSTD(0x00), 
      MK_RX_RANGE_MASK_IDSTD(0x00), 
      MK_RX_RANGE_MASK_IDSTD(0x00)
    }, 
    
    {
      MK_RX_RANGE_CODE_IDSTD(0x00), 
      MK_RX_RANGE_CODE_IDSTD(0x00), 
      MK_RX_RANGE_CODE_IDSTD(0x00), 
      MK_RX_RANGE_CODE_IDSTD(0x00)
    }, 
    0x00, 
    
    {
      kCanIdTypeStd, 
      kCanIdTypeStd, 
      kCanIdTypeStd, 
      kCanIdTypeStd
    }
  }
};
/* ROM CATEGORY 1 END */

#if defined(C_ENABLE_MULTI_ECU_CONFIG)
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanPhysToLogChannel[kVNumberOfIdentities][kCanNumberOfPhysChannels] = 
{
  
  {
    0, 
    1
  }
};
/* ROM CATEGORY 1 END */

#endif

#if defined(C_ENABLE_MULTI_ECU_CONFIG)
/* ROM CATEGORY 2 START */

V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanChannelIdentityAssignment[kCanNumberOfChannels] = 
{
  0x01, 
  0x01
};

/* ROM CATEGORY 2 END */

#endif

#if defined(C_ENABLE_MULTI_ECU_PHYS)
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanRxIdentityAssignment[kCanNumberOfRxObjects] = 
{
  0x01 /* ID: 0x000007cb, Handle: 0, T1_HostToTarget [FC] */, 
  0x01 /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS [FC] */, 
  0x01 /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 [FC] */, 
  0x01 /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests [FC] */, 
  0x01 /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS [FC] */, 
  0x01 /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS [FC] */, 
  0x01 /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS [FC] */, 
  0x01 /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS [FC] */, 
  0x01 /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 [FC] */, 
  0x01 /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status [FC] */, 
  0x01 /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 [FC] */, 
  0x01 /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS [FC] */, 
  0x01 /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS [FC] */, 
  0x01 /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 [FC] */, 
  0x01 /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat [FC] */, 
  0x01 /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE [FC] */, 
  0x01 /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE [FC] */, 
  0x01 /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE [FC] */, 
  0x01 /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE [FC] */, 
  0x01 /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE [FC] */, 
  0x01 /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq [BC] */, 
  0x01 /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg [BC] */, 
  0x01 /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS [BC] */, 
  0x01 /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs [BC] */, 
  0x01 /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE [BC] */, 
  0x01 /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs [BC] */
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanTxIdentityAssignment[kCanNumberOfTxObjects] = 
{
  0x01 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  0x01 /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  0x01 /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  0x01 /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0x01 /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0x01 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  0x01 /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  0x01 /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  0x01 /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0x01 /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0x01 /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  0x01 /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  0x01 /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
/* ROM CATEGORY 4 END */

#endif


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxQueuePadBits[kCanNumberOfChannels] = 
{
  0, 
  24
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanSignedTxHandle V_MEMROM2 CanTxQueueStartIndex[kCanNumberOfChannels+1] = 
{
  0, 
  1, 
  2
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 2 START */
V_MEMROM0 V_MEMROM1 CanChannelHandle V_MEMROM2 CanTxMsgHandleToChannel[kCanNumberOfTxObjects] = 
{
  0, 
  0, 
  0, 
  0, 
  0, 
  0, 
  0, 
  0, 
  1, 
  1, 
  1, 
  1, 
  1
};
/* ROM CATEGORY 2 END */


/* ROM CATEGORY 1 START */

V_MEMROM0 V_MEMROM1 CanTransmitHandle V_MEMROM2 CanTxStartIndex[kCanNumberOfChannels+1] = 
{
  0, 
  8, 
  13
};

/* ROM CATEGORY 1 END */


/* ROM CATEGORY 2 START */
V_MEMROM0 V_MEMROM1 CanReceiveHandle V_MEMROM2 CanRxStartIndex[kCanNumberOfChannels+1] = 
{
  0, 
  19, 
  26
};
/* ROM CATEGORY 2 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanReceiveHandle V_MEMROM2 CanRxBasicStartIndex[kCanNumberOfChannels+1] = 
{
  0, 
  19, 
  26
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanReceiveHandle V_MEMROM2 CanRxFullStartIndex[kCanNumberOfChannels+1] = 
{
  4, 
  21, 
  26
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 2 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanLogHwTxStartIndex[kCanNumberOfChannels+1] = 
{
  0, 
  1, 
  2
};
/* ROM CATEGORY 2 END */


/* ROM CATEGORY 2 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwTxStartIndex[kCanNumberOfChannels] = 
{
  160, 
  176
};
/* ROM CATEGORY 2 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwRxFullStartIndex[kCanNumberOfChannels] = 
{
  0, 
  15
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwRxBasicStartIndex[kCanNumberOfChannels] = 
{
  128, 
  129
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 4 START */

V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwUnusedStartIndex[kCanNumberOfChannels] = 
{
  1, 
  57
};

/* ROM CATEGORY 4 END */


/* ROM CATEGORY 2 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwTxStopIndex[kCanNumberOfChannels] = 
{
  161, 
  177
};
/* ROM CATEGORY 2 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwRxFullStopIndex[kCanNumberOfChannels] = 
{
  15, 
  20
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwRxBasicStopIndex[kCanNumberOfChannels] = 
{
  129, 
  130
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 4 START */

V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwUnusedStopIndex[kCanNumberOfChannels] = 
{
  40, 
  106
};

/* ROM CATEGORY 4 END */


#ifdef C_ENABLE_TX_FULLCAN_OBJECTS
/* ROM CATEGORY 2 START */
#ifdef C_ENABLE_HW_OBJ_EXCEED_255_DRV
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanTxHwObj[kCanNumberOfTxObjects] = 
{
  0xA0 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  0xA0 /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  0xA0 /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  0xA0 /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0xA0 /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0xA0 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  0xA0 /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  0xA0 /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  0xB0 /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0xB0 /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0xB0 /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  0xB0 /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  0xB0 /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
#else
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxHwObj[kCanNumberOfTxObjects] = 
{
  0xA0 /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 [BC] */, 
  0xA0 /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp [BC] */, 
  0xA0 /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg [BC] */, 
  0xA0 /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0xA0 /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS [BC] */, 
  0xA0 /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle [BC] */, 
  0xA0 /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS [BC] */, 
  0xA0 /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS [BC] */, 
  0xB0 /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0xB0 /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE [BC] */, 
  0xB0 /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE [BC] */, 
  0xB0 /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE [BC] */, 
  0xB0 /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE [BC] */
};
#endif

/* ROM CATEGORY 2 END */

#endif



/* ROM CATEGORY 1 START */

V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanHwTxNormalIndex[kCanNumberOfChannels] = 
{
  160, 
  176
};

/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */

V_MEMROM0 V_MEMROM1 vsintx V_MEMROM2 CanTxOffsetHwToLog[kCanNumberOfChannels] = 
{
  -160, 
  -175
};

/* ROM CATEGORY 1 END */



/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanHwObjIndivPolling[1][kCanNumberOfHwObjIndivPolling] = 
{
  
  {
    0 /* HS, T1_HostToTarget */, 
    1 /* HS, Wheel_Pulses_HS */, 
    1 /* HS, PPEI_Engine_General_Status_5 */, 
    1 /* HS, PPEI_Platform_Eng_Cntrl_Requests */, 
    1 /* HS, NonDriven_Wheel_Grnd_Velocity_HS */, 
    1 /* HS, Driven_Wheel_Grnd_Velocity_HS */, 
    1 /* HS, Driving_Mode_Control_HS */, 
    1 /* HS, Brake_Pedal_Driver_Status_HS */, 
    1 /* HS, PPEI_Trans_General_Status_2 */, 
    1 /* HS, PPEI_Platform_General_Status */, 
    1 /* HS, PPEI_Chassis_General_Status_1 */, 
    1 /* HS, LKA_Steering_Torque_Cmd_HS */, 
    1 /* HS, Antilock_Brake_and_TC_Status_HS */, 
    1 /* HS, PPEI_Engine_General_Status_1 */, 
    1 /* HS, PPEI_NonDrivn_Whl_Rotationl_Stat */, 
    1 /* CE, NonDriven_Wheel_Grnd_Velocity_CE */, 
    1 /* CE, Driven_Wheel_Grnd_Velocity_CE */, 
    1 /* CE, Park_Assist_Parallel_CE */, 
    1 /* CE, Vehicle_Dynamics_ESC_Hyb_CE */, 
    0 /* CE, Steering_Torque_Command_CE */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* HS, BasicCAN0 Rx Polling */, 
    0 /* CE, BasicCAN0 Rx Polling */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* HS, Normal Tx Polling */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* CE, Normal Tx Polling */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */, 
    0 /* Unused */
  }
};
/* ROM CATEGORY 1 END */

/* -----------------------------------------------------------------------------
    &&&~ Hw specific
 ----------------------------------------------------------------------------- */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanLogToPhys[kCanNumberOfHwChannels] = 
{
  0u, 
  1u
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanTxBufOffset[kCanNumberOfHwChannels] = 
{
  kCanTxBufOffset_0, 
  kCanTxBufOffset_1
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanChannelData V_MEMROM2 CanChannelData[kCanNumberOfHwChannels] = 
{
  
  {
    CanRxFifoDepth_0 /* CanRxFifoDepth */, 
    CanFilterRulesBc_0 /* CanFilterRulesBc */, 
    0xFFFFB172u /* CanIntcChTxBaseAdr */, 
    0xFFFFB16Eu /* CanIntcChErrorBaseAdr */, 
    { 0x00007FFFu } /* CanRxFcMask */, 
    0u /* CanFilterRulesStartIndex */, 
    0x13u /* CanFilterRulesTotalCount */, 
    4u /* CanFilterRulesBcCount */, 
    0x01u /* CanRxBcMask */, 
    0x08u /* CanRxBcMsgProcessCount */, 
    0u /* CanRxBcStartIndex */, 
    1u /* CanRxBcStopIndex */, 
    15u /* CanIntPrio */
  }, 
  
  {
    CanRxFifoDepth_1 /* CanRxFifoDepth */, 
    CanFilterRulesBc_1 /* CanFilterRulesBc */, 
    0xFFFFB178u /* CanIntcChTxBaseAdr */, 
    0xFFFFB174u /* CanIntcChErrorBaseAdr */, 
    { 0x000F8000u } /* CanRxFcMask */, 
    19u /* CanFilterRulesStartIndex */, 
    0x07u /* CanFilterRulesTotalCount */, 
    2u /* CanFilterRulesBcCount */, 
    0x02u /* CanRxBcMask */, 
    0x08u /* CanRxBcMsgProcessCount */, 
    1u /* CanRxBcStartIndex */, 
    2u /* CanRxBcStopIndex */, 
    15u /* CanIntPrio */
  }
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanFifoToLogChannel[kVNumberOfIdentities][kCanNumberOfRxFifos] = 
{
  
  {
    0, 
    1
  }
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanRxFifoDepth_0[1] = 
{
  0x01u
};
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanRxFifoDepth_1[1] = 
{
  0x01u
};
/* ROM CATEGORY 4 END */





/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\can_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\can_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

