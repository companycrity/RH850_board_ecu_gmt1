/* -----------------------------------------------------------------------------
  Filename:    tp_par.c
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Tp_Iso15765
               
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

#include "can_inc.h"
#include "tpmc.h"
#include "v_inc.h"
V_MEMROM0 V_MEMROM1 CanTransmitHandle V_MEMROM2 kTpTxHandle_Field[kTpTxChannelCount] = {
	  CanTxUSDT_Resp_From_EHPS_EPS_HS
	, CanTxUSDT_Resp_From_EPS_EPS_JR_CE
	, CanTxCmnMfgSrvResp
};


V_MEMROM0 V_MEMROM1 TxDataPtr V_MEMROM2 kTpTxData_Field[kTpTxChannelCount] = {
	  USDT_Resp_From_EHPS_EPS_HS._c
	, USDT_Resp_From_EPS_EPS_JR_CE._c
	, CmnMfgSrvResp._c
};


vuint8 DummyCopyToCan(TpCopyToCanInfoStructPtr infoStruct)
{
	__ApplTpTxCopyToCAN_mem(infoStruct);
	return 0;
}


V_MEMROM0 V_MEMROM1 ApplTpIndicationFct V_MEMROM2 TpRxIndication[kTpRxChannelCount] = {
	  DescPhysReqInd
	, GgdaPhysReqInd
	, ApplTpRxIndication
};

V_MEMROM0 V_MEMROM1 ApplTpRxErrorIndicationFct V_MEMROM2 TpRxErrorIndication[kTpRxChannelCount] = {
	  DescRxErrorIndication
	, GgdaRxErrorIndication
	, ApplTpRxErrorIndication
};

V_MEMROM0 V_MEMROM1 ApplTpConfirmationFct V_MEMROM2 TpTxConfirmation[kTpTxChannelCount] = {
	  DescConfirmation
	, GgdaConfirmation
	, ApplTpTxConfirmation
};

V_MEMROM0 V_MEMROM1 ApplTpGetRxBufferFct V_MEMROM2 TpGetRxBuffer[kTpRxChannelCount] = {
	  DescGetBuffer
	, GgdaPhysGetBuffer
	, ApplTpRxGetBuffer
};

V_MEMROM0 V_MEMROM1 ApplTpTxErrorIndicationFct V_MEMROM2 TpTxErrorIndication[kTpTxChannelCount] = {
	  DescTxErrorIndication
	, GgdaTxErrorIndication
	, ApplTpTxErrorIndication
};

V_MEMROM0 V_MEMROM1 ApplTpCopyToCanFct V_MEMROM2 TpTxCopyToCan[kTpTxChannelCount] = {
	  DescCopyToCAN
	, DummyCopyToCan
	, DummyCopyToCan
};

V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 TpRxHandleToChannel[] = 
{
  0xFF /* ID: 0x000007cb, Handle: 0, T1_HostToTarget */, 
  0xFF /* ID: 0x00000500, Handle: 1, Wheel_Pulses_HS */, 
  0xFF /* ID: 0x000004d1, Handle: 2, PPEI_Engine_General_Status_5 */, 
  0xFF /* ID: 0x000003f1, Handle: 3, PPEI_Platform_Eng_Cntrl_Requests */, 
  0xFF /* ID: 0x0000034a, Handle: 4, NonDriven_Wheel_Grnd_Velocity_HS */, 
  0xFF /* ID: 0x00000348, Handle: 5, Driven_Wheel_Grnd_Velocity_HS */, 
  0xFF /* ID: 0x00000232, Handle: 6, Driving_Mode_Control_HS */, 
  0xFF /* ID: 0x00000214, Handle: 7, Brake_Pedal_Driver_Status_HS */, 
  0xFF /* ID: 0x000001f5, Handle: 8, PPEI_Trans_General_Status_2 */, 
  0xFF /* ID: 0x000001f1, Handle: 9, PPEI_Platform_General_Status */, 
  0xFF /* ID: 0x000001e9, Handle: 10, PPEI_Chassis_General_Status_1 */, 
  0xFF /* ID: 0x00000180, Handle: 11, LKA_Steering_Torque_Cmd_HS */, 
  0xFF /* ID: 0x0000017d, Handle: 12, Antilock_Brake_and_TC_Status_HS */, 
  0xFF /* ID: 0x000000c9, Handle: 13, PPEI_Engine_General_Status_1 */, 
  0xFF /* ID: 0x000000c5, Handle: 14, PPEI_NonDrivn_Whl_Rotationl_Stat */, 
  0xFF /* ID: 0x0000034a, Handle: 15, NonDriven_Wheel_Grnd_Velocity_CE */, 
  0xFF /* ID: 0x00000348, Handle: 16, Driven_Wheel_Grnd_Velocity_CE */, 
  0xFF /* ID: 0x00000337, Handle: 17, Park_Assist_Parallel_CE */, 
  0xFF /* ID: 0x00000182, Handle: 18, Vehicle_Dynamics_ESC_Hyb_CE */, 
  0xFF /* ID: 0x00000180, Handle: 19, Steering_Torque_Command_CE */, 
  2 /* ID: 0x00000712, Handle: 20, CmnMfgSrvReq */, 
  0xFF /* ID: 0x00000708, Handle: 21, Xcp_Master_Msg */, 
  0 /* ID: 0x00000242, Handle: 22, USDT_Req_to_EHPS_EPS_HS */, 
  0xFF /* ID: 0x00000101, Handle: 23, USDT_Req_to_All_HS_ECUs */, 
  1 /* ID: 0x00000242, Handle: 24, USDT_Req_to_EPS_EPS_JR_CE */, 
  0xFF /* ID: 0x00000101, Handle: 25, USDT_Req_to_All_CE_ECUs */
};
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 TpTxHandleToChannel[] = 
{
  0xFF /* ID: 0x00000778, Handle: 0, DTC_Triggered_778 */, 
  2 /* ID: 0x00000710, Handle: 1, CmnMfgSrvResp */, 
  0xFF /* ID: 0x00000706, Handle: 2, Xcp_Slave_Msg */, 
  0 /* ID: 0x00000642, Handle: 3, USDT_Resp_From_EHPS_EPS_HS */, 
  0xFF /* ID: 0x00000542, Handle: 4, UUDT_Resp_From_EHPS_EPS_HS */, 
  0xFF /* ID: 0x000001e5, Handle: 5, PPEI_Steering_Wheel_Angle */, 
  0xFF /* ID: 0x00000184, Handle: 6, LKA_Steering_Trq_Overlay_Stat_HS */, 
  0xFF /* ID: 0x00000148, Handle: 7, Power_Steering_Information_HS */, 
  1 /* ID: 0x00000642, Handle: 8, USDT_Resp_From_EPS_EPS_JR_CE */, 
  0xFF /* ID: 0x00000542, Handle: 9, UUDT_Resp_From_EPS_EPS_JR_CE */, 
  0xFF /* ID: 0x00000335, Handle: 10, Electric_Power_Steering_CE */, 
  0xFF /* ID: 0x000001e5, Handle: 11, PPEI_Steering_Wheel_Angle_CE */, 
  0xFF /* ID: 0x000001ca, Handle: 12, Steering_Torque_Overlay_Stat_CE */
};

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\tp_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\tp_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

