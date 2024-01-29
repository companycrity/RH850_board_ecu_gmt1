/* -----------------------------------------------------------------------------
  Filename:    drv_par.h
  Description: Toolversion: 01.01.24.01.40.03.46.00.00.00
               
               
                              BETA VERSION!!
               
               
               Serial Number: CBD1400346
               Customer Info: Nexteer Automotive Corporation
                              Package: GMLAN 3.1
                              Micro: R7F701308
                              Compiler: GHS 2013.5.5
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyDriverBase
               
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

#if !defined(__DRV_PAR_H__)
#define __DRV_PAR_H__

#include "nm_cfg.h"

/* -----------------------------------------------------------------------------
    &&&~ Signal Structures
 ----------------------------------------------------------------------------- */

typedef struct _c_Xcp_Slave_Msg_msgTypeTag
{
  vbittype Xcp_Slave_Byte0 : 8;
  vbittype Xcp_Slave_Byte1 : 8;
  vbittype Xcp_Slave_Byte2 : 8;
  vbittype Xcp_Slave_Byte3 : 8;
  vbittype Xcp_Slave_Byte4 : 8;
  vbittype Xcp_Slave_Byte5 : 8;
  vbittype Xcp_Slave_Byte6 : 8;
  vbittype Xcp_Slave_Byte7 : 8;
} _c_Xcp_Slave_Msg_msgType;
typedef struct _c_Xcp_Master_Msg_msgTypeTag
{
  vbittype Xcp_Master_Byte0 : 8;
  vbittype Xcp_Master_Byte1 : 8;
  vbittype Xcp_Master_Byte2 : 8;
  vbittype Xcp_Master_Byte3 : 8;
  vbittype Xcp_Master_Byte4 : 8;
  vbittype Xcp_Master_Byte5 : 8;
  vbittype Xcp_Master_Byte6 : 8;
  vbittype Xcp_Master_Byte7 : 8;
} _c_Xcp_Master_Msg_msgType;
typedef struct _c_T1_HostToTarget_msgTypeTag
{
  vbittype T1_HostToTarget_0 : 8;
  vbittype T1_HostToTarget_1 : 8;
  vbittype T1_HostToTarget_2 : 8;
  vbittype T1_HostToTarget_3 : 8;
  vbittype T1_HostToTarget_4 : 8;
  vbittype T1_HostToTarget_5 : 8;
  vbittype T1_HostToTarget_6 : 8;
  vbittype T1_HostToTarget_7 : 8;
} _c_T1_HostToTarget_msgType;
typedef struct _c_LKA_Steering_Trq_Overlay_Stat_HS_msgTypeTag
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
} _c_LKA_Steering_Trq_Overlay_Stat_HS_msgType;
typedef struct _c_LKA_Steering_Trq_Overlay_Stat_HS_HndsOffStrWhlDtStGroup_msgTypeTag
{
  vbittype cunused1 : 3;
  vbittype cunused2 : 3;
  vbittype unused0 : 2;
  vbittype cunused0 : 8;
  vbittype cunused4 : 3;
  vbittype cunused5 : 2;
  vbittype HndsOffStrWhlDtStGroup : 2;
  vbittype unused1 : 1;
  vbittype cunused3 : 8;
  vbittype cunused7 : 3;
  vbittype cunused8 : 4;
  vbittype unused2 : 1;
  vbittype cunused6 : 8;
  vbittype cunused10 : 4;
  vbittype unused3 : 4;
  vbittype cunused9 : 8;
} _c_LKA_Steering_Trq_Overlay_Stat_HS_HndsOffStrWhlDtStGroup_msgType;
typedef struct _c_LKA_Steering_Trq_Overlay_Stat_HS_LKADrvAppldTrqGroup_msgTypeTag
{
  vbittype cunused1 : 3;
  vbittype cunused2 : 3;
  vbittype unused0 : 2;
  vbittype cunused0 : 8;
  vbittype cunused4 : 3;
  vbittype cunused5 : 2;
  vbittype cunused6 : 2;
  vbittype unused1 : 1;
  vbittype cunused3 : 8;
  vbittype cunused8 : 3;
  vbittype cunused9 : 4;
  vbittype unused2 : 1;
  vbittype cunused7 : 8;
  vbittype LKADrvAppldTrqGroup_1 : 4;
  vbittype unused3 : 4;
  vbittype LKADrvAppldTrqGroup_0 : 8;
} _c_LKA_Steering_Trq_Overlay_Stat_HS_LKADrvAppldTrqGroup_msgType;
typedef struct _c_LKA_Steering_Torque_Cmd_HS_msgTypeTag
{
  vbittype LKATODC_TrqVl_1 : 3;
  vbittype LKATODC_TrqRqAct : 1;
  vbittype LKATqOvrDltCmdRC : 2;
  vbittype unused0 : 2;
  vbittype LKATODC_TrqVl_0 : 8;
  vbittype LKATqOvrDltCmdPrtVl_1 : 4;
  vbittype unused1 : 4;
  vbittype LKATqOvrDltCmdPrtVl_0 : 8;
} _c_LKA_Steering_Torque_Cmd_HS_msgType;
typedef struct _c_LKA_Steering_Torque_Cmd_HS_LKATqOvrDltCmd_msgTypeTag
{
  vbittype LKATqOvrDltCmd_1 : 4;
  vbittype cunused0 : 2;
  vbittype unused0 : 2;
  vbittype LKATqOvrDltCmd_0 : 8;
  vbittype cunused2 : 4;
  vbittype unused1 : 4;
  vbittype cunused1 : 8;
} _c_LKA_Steering_Torque_Cmd_HS_LKATqOvrDltCmd_msgType;
typedef struct _c_Wheel_Pulses_HS_msgTypeTag
{
  vbittype WhlPlsPerRevDrvn_0 : 7;
  vbittype unused0 : 1;
  vbittype WhlPlsPerRevNonDrvn_0 : 7;
  vbittype unused1 : 1;
  vbittype WhlRotStatTmstmpRes_1 : 3;
  vbittype unused2 : 5;
  vbittype WhlRotStatTmstmpRes_0 : 8;
} _c_Wheel_Pulses_HS_msgType;
typedef struct _c_Driving_Mode_Control_HS_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 3;
  vbittype StgSysPerfMdRq : 3;
  vbittype unused4 : 2;
  vbittype DrvMdCntrlState : 8;
} _c_Driving_Mode_Control_HS_msgType;
typedef struct _c_Brake_Pedal_Driver_Status_HS_msgTypeTag
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
} _c_Brake_Pedal_Driver_Status_HS_msgType;
typedef struct _c_Power_Steering_Information_HS_msgTypeTag
{
  vbittype PwrStrIO : 1;
  vbittype StrngAsstRdcdIO : 1;
  vbittype StrAsstRdcdLvl2IO : 1;
  vbittype StrAsstRdcdLvl3IO : 1;
  vbittype unused0 : 4;
} _c_Power_Steering_Information_HS_msgType;
typedef struct _c_DTC_Triggered_778_msgTypeTag
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
} _c_DTC_Triggered_778_msgType;
typedef struct _c_DTC_Triggered_778_DTCInfo_778_msgTypeTag
{
  vbittype DTCInfo_778_6 : 8;
  vbittype DTCInfo_778_5 : 8;
  vbittype DTCInfo_778_4 : 8;
  vbittype DTCInfo_778_3 : 8;
  vbittype DTCInfo_778_2 : 8;
  vbittype DTCInfo_778_1 : 8;
  vbittype DTCInfo_778_0 : 8;
} _c_DTC_Triggered_778_DTCInfo_778_msgType;
typedef struct _c_PPEI_Steering_Wheel_Angle_msgTypeTag
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
} _c_PPEI_Steering_Wheel_Angle_msgType;
typedef struct _c_PPEI_Steering_Wheel_Angle_StrWhAngGroup_0_msgTypeTag
{
  vbittype StrWhAngGroup_0_2 : 8;
  vbittype StrWhAngGroup_0_1 : 8;
  vbittype StrWhAngGroup_0_0 : 8;
  vbittype cunused6 : 8;
  vbittype cunused5 : 8;
  vbittype unused0 : 8;
  vbittype cunused8 : 3;
  vbittype unused1 : 5;
  vbittype cunused7 : 8;
} _c_PPEI_Steering_Wheel_Angle_StrWhAngGroup_0_msgType;
typedef struct _c_PPEI_Steering_Wheel_Angle_StrWhAngGrdGroup_0_msgTypeTag
{
  vbittype cunused5 : 8;
  vbittype cunused4 : 8;
  vbittype cunused3 : 8;
  vbittype StrWhAngGrdGroup_0_1 : 8;
  vbittype StrWhAngGrdGroup_0_0 : 8;
  vbittype unused0 : 8;
  vbittype cunused9 : 3;
  vbittype unused1 : 5;
  vbittype cunused8 : 8;
} _c_PPEI_Steering_Wheel_Angle_StrWhAngGrdGroup_0_msgType;
typedef struct _c_NonDriven_Wheel_Grnd_Velocity_HS_msgTypeTag
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
} _c_NonDriven_Wheel_Grnd_Velocity_HS_msgType;
typedef struct _c_NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftNnDrvnGroup_0_msgTypeTag
{
  vbittype WhlGrndVlctyLftNnDrvnGroup_0_1 : 7;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftNnDrvnGroup_0_0 : 8;
  vbittype cunused1 : 7;
  vbittype unused1 : 1;
  vbittype cunused0 : 8;
  vbittype cunused2 : 3;
  vbittype cunused3 : 3;
  vbittype unused2 : 2;
} _c_NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftNnDrvnGroup_0_msgType;
typedef struct _c_NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtNnDrvnGroup_0_msgTypeTag
{
  vbittype cunused1 : 7;
  vbittype unused0 : 1;
  vbittype cunused0 : 8;
  vbittype WhlGrndVlctyRtNnDrvnGroup_0_1 : 7;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtNnDrvnGroup_0_0 : 8;
  vbittype cunused2 : 3;
  vbittype cunused3 : 3;
  vbittype unused2 : 2;
} _c_NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtNnDrvnGroup_0_msgType;
typedef struct _c_PPEI_Engine_General_Status_5_msgTypeTag
{
  vbittype unused0 : 7;
  vbittype EngOilTmpV : 1;
  vbittype EngOilTmp : 8;
} _c_PPEI_Engine_General_Status_5_msgType;
typedef struct _c_PPEI_Engine_General_Status_5_EngOilTmpGroup_msgTypeTag
{
  vbittype EngOilTmpGroup_1 : 8;
  vbittype EngOilTmpGroup_0 : 8;
} _c_PPEI_Engine_General_Status_5_EngOilTmpGroup_msgType;
typedef struct _c_PPEI_Engine_General_Status_1_msgTypeTag
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
} _c_PPEI_Engine_General_Status_1_msgType;
typedef struct _c_PPEI_Trans_General_Status_2_msgTypeTag
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
} _c_PPEI_Trans_General_Status_2_msgType;
typedef struct _c_PPEI_Trans_General_Status_2_TransEstGearGroup_msgTypeTag
{
  vbittype TransEstGearGroup : 5;
  vbittype unused0 : 3;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype cunused0 : 5;
  vbittype unused3 : 3;
  vbittype unused4 : 8;
  vbittype unused5 : 2;
  vbittype cunused1 : 3;
  vbittype unused6 : 3;
} _c_PPEI_Trans_General_Status_2_TransEstGearGroup_msgType;
typedef struct _c_PPEI_Trans_General_Status_2_TrnsShftLvrPosGroup_msgTypeTag
{
  vbittype cunused0 : 5;
  vbittype unused0 : 3;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype TrnsShftLvrPosGroup : 5;
  vbittype unused3 : 3;
  vbittype unused4 : 8;
  vbittype unused5 : 2;
  vbittype cunused1 : 3;
  vbittype unused6 : 3;
} _c_PPEI_Trans_General_Status_2_TrnsShftLvrPosGroup_msgType;
typedef struct _c_PPEI_NonDrivn_Whl_Rotationl_Stat_msgTypeTag
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
} _c_PPEI_NonDrivn_Whl_Rotationl_Stat_msgType;
typedef struct _c_PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatLftNDrvn_msgTypeTag
{
  vbittype WhlRotStatLftNDrvn_3 : 8;
  vbittype WhlRotStatLftNDrvn_2 : 8;
  vbittype WhlRotStatLftNDrvn_1 : 8;
  vbittype WhlRotStatLftNDrvn_0 : 8;
  vbittype cunused3 : 8;
  vbittype cunused2 : 8;
  vbittype cunused1 : 8;
  vbittype cunused0 : 8;
} _c_PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatLftNDrvn_msgType;
typedef struct _c_PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatRghtNDrvn_msgTypeTag
{
  vbittype cunused3 : 8;
  vbittype cunused2 : 8;
  vbittype cunused1 : 8;
  vbittype cunused0 : 8;
  vbittype WhlRotStatRghtNDrvn_3 : 8;
  vbittype WhlRotStatRghtNDrvn_2 : 8;
  vbittype WhlRotStatRghtNDrvn_1 : 8;
  vbittype WhlRotStatRghtNDrvn_0 : 8;
} _c_PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatRghtNDrvn_msgType;
typedef struct _c_PPEI_Platform_Eng_Cntrl_Requests_msgTypeTag
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
} _c_PPEI_Platform_Eng_Cntrl_Requests_msgType;
typedef struct _c_PPEI_Platform_Eng_Cntrl_Requests_EngOffTmExtRngGroup_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype EngOffTmExtRngGroup_1 : 3;
  vbittype cunused0 : 1;
  vbittype unused3 : 4;
  vbittype EngOffTmExtRngGroup_0 : 8;
  vbittype unused4 : 8;
  vbittype cunused2 : 1;
  vbittype unused5 : 2;
  vbittype cunused3 : 1;
  vbittype unused6 : 4;
  vbittype cunused1 : 8;
} _c_PPEI_Platform_Eng_Cntrl_Requests_EngOffTmExtRngGroup_msgType;
typedef struct _c_PPEI_Platform_Eng_Cntrl_Requests_OtsAirTmpCrValGroup_msgTypeTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype cunused1 : 3;
  vbittype cunused2 : 1;
  vbittype unused3 : 4;
  vbittype cunused0 : 8;
  vbittype unused4 : 8;
  vbittype OtsAirTmpCrValGroup_1 : 1;
  vbittype unused5 : 2;
  vbittype cunused3 : 1;
  vbittype unused6 : 4;
  vbittype OtsAirTmpCrValGroup_0 : 8;
} _c_PPEI_Platform_Eng_Cntrl_Requests_OtsAirTmpCrValGroup_msgType;
typedef struct _c_PPEI_Platform_General_Status_msgTypeTag
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
} _c_PPEI_Platform_General_Status_msgType;
typedef struct _c_PPEI_Platform_General_Status_BkupPwrModeMstrGroup_msgTypeTag
{
  vbittype cunused0 : 2;
  vbittype unused0 : 2;
  vbittype cunused1 : 2;
  vbittype cunused2 : 1;
  vbittype unused1 : 1;
  vbittype BkupPwrModeMstrGroup_6 : 8;
  vbittype BkupPwrModeMstrGroup_5 : 8;
  vbittype BkupPwrModeMstrGroup_4 : 8;
  vbittype BkupPwrModeMstrGroup_3 : 8;
  vbittype BkupPwrModeMstrGroup_2 : 8;
  vbittype BkupPwrModeMstrGroup_1 : 8;
  vbittype unused2 : 5;
  vbittype BkupPwrModeMstrGroup_0 : 3;
} _c_PPEI_Platform_General_Status_BkupPwrModeMstrGroup_msgType;
typedef struct _c_Driven_Wheel_Grnd_Velocity_HS_msgTypeTag
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
} _c_Driven_Wheel_Grnd_Velocity_HS_msgType;
typedef struct _c_Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftDrvnGroup_0_msgTypeTag
{
  vbittype WhlGrndVlctyLftDrvnGroup_0_1 : 7;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftDrvnGroup_0_0 : 8;
  vbittype cunused1 : 7;
  vbittype unused1 : 1;
  vbittype cunused0 : 8;
  vbittype cunused2 : 3;
  vbittype cunused3 : 3;
  vbittype unused2 : 2;
} _c_Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftDrvnGroup_0_msgType;
typedef struct _c_Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtDrvnGroup_0_msgTypeTag
{
  vbittype cunused1 : 7;
  vbittype unused0 : 1;
  vbittype cunused0 : 8;
  vbittype WhlGrndVlctyRtDrvnGroup_0_1 : 7;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtDrvnGroup_0_0 : 8;
  vbittype cunused2 : 3;
  vbittype cunused3 : 3;
  vbittype unused2 : 2;
} _c_Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtDrvnGroup_0_msgType;
typedef struct _c_PPEI_Chassis_General_Status_1_msgTypeTag
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
} _c_PPEI_Chassis_General_Status_1_msgType;
typedef struct _c_PPEI_Chassis_General_Status_1_VSELatAccGroup_msgTypeTag
{
  vbittype VSELatAccGroup_1 : 5;
  vbittype unused0 : 1;
  vbittype cunused0 : 2;
  vbittype VSELatAccGroup_0 : 8;
  vbittype unused1 : 8;
  vbittype cunused1 : 1;
  vbittype unused2 : 1;
  vbittype cunused2 : 1;
  vbittype cunused3 : 1;
  vbittype cunused4 : 1;
  vbittype cunused5 : 1;
  vbittype cunused6 : 1;
  vbittype unused3 : 1;
  vbittype cunused8 : 5;
  vbittype cunused9 : 3;
  vbittype cunused7 : 8;
  vbittype cunused11 : 3;
  vbittype unused4 : 5;
  vbittype cunused10 : 8;
} _c_PPEI_Chassis_General_Status_1_VSELatAccGroup_msgType;
typedef struct _c_PPEI_Chassis_General_Status_1_BrkPdlDrvAppPrsDetcdGroup_msgTypeTag
{
  vbittype cunused1 : 5;
  vbittype unused0 : 1;
  vbittype BrkPdlDrvAppPrsDetcdGroup : 2;
  vbittype cunused0 : 8;
  vbittype unused1 : 8;
  vbittype cunused2 : 1;
  vbittype unused2 : 1;
  vbittype cunused3 : 1;
  vbittype cunused4 : 1;
  vbittype cunused5 : 1;
  vbittype cunused6 : 1;
  vbittype cunused7 : 1;
  vbittype unused3 : 1;
  vbittype cunused9 : 5;
  vbittype cunused10 : 3;
  vbittype cunused8 : 8;
  vbittype cunused12 : 3;
  vbittype unused4 : 5;
  vbittype cunused11 : 8;
} _c_PPEI_Chassis_General_Status_1_BrkPdlDrvAppPrsDetcdGroup_msgType;
typedef struct _c_PPEI_Chassis_General_Status_1_VehDynYawRateGroup_msgTypeTag
{
  vbittype cunused1 : 5;
  vbittype unused0 : 1;
  vbittype cunused2 : 2;
  vbittype cunused0 : 8;
  vbittype unused1 : 8;
  vbittype cunused3 : 1;
  vbittype unused2 : 1;
  vbittype cunused4 : 1;
  vbittype cunused5 : 1;
  vbittype cunused6 : 1;
  vbittype cunused7 : 1;
  vbittype cunused8 : 1;
  vbittype unused3 : 1;
  vbittype VehDynYawRateGroup_1 : 5;
  vbittype cunused9 : 3;
  vbittype VehDynYawRateGroup_0 : 8;
  vbittype cunused11 : 3;
  vbittype unused4 : 5;
  vbittype cunused10 : 8;
} _c_PPEI_Chassis_General_Status_1_VehDynYawRateGroup_msgType;
typedef struct _c_PPEI_Chassis_General_Status_1_VehDynOvrUndrStrGroup_0_msgTypeTag
{
  vbittype cunused1 : 5;
  vbittype unused0 : 1;
  vbittype cunused2 : 2;
  vbittype cunused0 : 8;
  vbittype unused1 : 8;
  vbittype cunused3 : 1;
  vbittype unused2 : 1;
  vbittype cunused4 : 1;
  vbittype cunused5 : 1;
  vbittype cunused6 : 1;
  vbittype cunused7 : 1;
  vbittype cunused8 : 1;
  vbittype unused3 : 1;
  vbittype cunused10 : 5;
  vbittype cunused11 : 3;
  vbittype cunused9 : 8;
  vbittype VehDynOvrUndrStrGroup_0_1 : 3;
  vbittype unused4 : 5;
  vbittype VehDynOvrUndrStrGroup_0_0 : 8;
} _c_PPEI_Chassis_General_Status_1_VehDynOvrUndrStrGroup_0_msgType;
typedef struct _c_Antilock_Brake_and_TC_Status_HS_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype VehStabEnhmntStat_0 : 3;
  vbittype TCSysOpMd : 3;
} _c_Antilock_Brake_and_TC_Status_HS_msgType;
typedef struct _c_UUDT_Resp_From_EHPS_EPS_HS_msgTypeTag
{
  vbittype DgnInf_HS542_7 : 8;
  vbittype DgnInf_HS542_6 : 8;
  vbittype DgnInf_HS542_5 : 8;
  vbittype DgnInf_HS542_4 : 8;
  vbittype DgnInf_HS542_3 : 8;
  vbittype DgnInf_HS542_2 : 8;
  vbittype DgnInf_HS542_1 : 8;
  vbittype DgnInf_HS542_0 : 8;
} _c_UUDT_Resp_From_EHPS_EPS_HS_msgType;
typedef struct _c_USDT_Resp_From_EHPS_EPS_HS_msgTypeTag
{
  vbittype DgnInf_0_7 : 8;
  vbittype DgnInf_0_6 : 8;
  vbittype DgnInf_0_5 : 8;
  vbittype DgnInf_0_4 : 8;
  vbittype DgnInf_0_3 : 8;
  vbittype DgnInf_0_2 : 8;
  vbittype DgnInf_0_1 : 8;
  vbittype DgnInf_0_0 : 8;
} _c_USDT_Resp_From_EHPS_EPS_HS_msgType;
typedef struct _c_CmnMfgSrvResp_msgTypeTag
{
  vbittype DgnInf_0_7 : 8;
  vbittype DgnInf_0_6 : 8;
  vbittype DgnInf_0_5 : 8;
  vbittype DgnInf_0_4 : 8;
  vbittype DgnInf_0_3 : 8;
  vbittype DgnInf_0_2 : 8;
  vbittype DgnInf_0_1 : 8;
  vbittype DgnInf_0_0 : 8;
} _c_CmnMfgSrvResp_msgType;
typedef struct _c_Vehicle_Dynamics_ESC_Hyb_CE_msgTypeTag
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
} _c_Vehicle_Dynamics_ESC_Hyb_CE_msgType;
typedef struct _c_Vehicle_Dynamics_ESC_Hyb_CE_VSELongAccLoResGroup_msgTypeTag
{
  vbittype cunused0 : 1;
  vbittype unused0 : 7;
  vbittype VSELongAccLoResGroup_1 : 8;
  vbittype VSELongAccLoResGroup_0 : 8;
  vbittype cunused3 : 3;
  vbittype unused1 : 5;
  vbittype cunused2 : 8;
} _c_Vehicle_Dynamics_ESC_Hyb_CE_VSELongAccLoResGroup_msgType;
typedef struct _c_Vehicle_Dynamics_ESC_Hyb_CE_VehDynOvrUndrStrGroup_1_msgTypeTag
{
  vbittype cunused0 : 1;
  vbittype unused0 : 7;
  vbittype cunused2 : 8;
  vbittype cunused1 : 8;
  vbittype VehDynOvrUndrStrGroup_1_1 : 3;
  vbittype unused1 : 5;
  vbittype VehDynOvrUndrStrGroup_1_0 : 8;
} _c_Vehicle_Dynamics_ESC_Hyb_CE_VehDynOvrUndrStrGroup_1_msgType;
typedef struct _c_NonDriven_Wheel_Grnd_Velocity_CE_msgTypeTag
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
} _c_NonDriven_Wheel_Grnd_Velocity_CE_msgType;
typedef struct _c_NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftNnDrvnGroup_1_msgTypeTag
{
  vbittype WhlGrndVlctyLftNnDrvnGroup_1_1 : 7;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftNnDrvnGroup_1_0 : 8;
  vbittype cunused1 : 7;
  vbittype unused1 : 1;
  vbittype cunused0 : 8;
  vbittype cunused2 : 7;
  vbittype unused2 : 1;
} _c_NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftNnDrvnGroup_1_msgType;
typedef struct _c_NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtNnDrvnGroup_1_msgTypeTag
{
  vbittype cunused1 : 7;
  vbittype unused0 : 1;
  vbittype cunused0 : 8;
  vbittype WhlGrndVlctyRtNnDrvnGroup_1_1 : 7;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtNnDrvnGroup_1_0 : 8;
  vbittype cunused2 : 7;
  vbittype unused2 : 1;
} _c_NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtNnDrvnGroup_1_msgType;
typedef struct _c_Driven_Wheel_Grnd_Velocity_CE_msgTypeTag
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
} _c_Driven_Wheel_Grnd_Velocity_CE_msgType;
typedef struct _c_Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftDrvnGroup_1_msgTypeTag
{
  vbittype WhlGrndVlctyLftDrvnGroup_1_1 : 7;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftDrvnGroup_1_0 : 8;
  vbittype cunused1 : 7;
  vbittype unused1 : 1;
  vbittype cunused0 : 8;
  vbittype cunused2 : 7;
  vbittype unused2 : 1;
} _c_Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftDrvnGroup_1_msgType;
typedef struct _c_Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtDrvnGroup_1_msgTypeTag
{
  vbittype cunused1 : 7;
  vbittype unused0 : 1;
  vbittype cunused0 : 8;
  vbittype WhlGrndVlctyRtDrvnGroup_1_1 : 7;
  vbittype unused1 : 1;
  vbittype WhlGrndVlctyRtDrvnGroup_1_0 : 8;
  vbittype cunused2 : 7;
  vbittype unused2 : 1;
} _c_Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtDrvnGroup_1_msgType;
typedef struct _c_PPEI_Steering_Wheel_Angle_CE_msgTypeTag
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
} _c_PPEI_Steering_Wheel_Angle_CE_msgType;
typedef struct _c_PPEI_Steering_Wheel_Angle_CE_StrWhAngGroup_1_msgTypeTag
{
  vbittype StrWhAngGroup_1_2 : 8;
  vbittype StrWhAngGroup_1_1 : 8;
  vbittype StrWhAngGroup_1_0 : 8;
  vbittype cunused6 : 8;
  vbittype cunused5 : 8;
  vbittype unused0 : 8;
  vbittype cunused8 : 3;
  vbittype unused1 : 5;
  vbittype cunused7 : 8;
} _c_PPEI_Steering_Wheel_Angle_CE_StrWhAngGroup_1_msgType;
typedef struct _c_PPEI_Steering_Wheel_Angle_CE_StrWhAngGrdGroup_1_msgTypeTag
{
  vbittype cunused5 : 8;
  vbittype cunused4 : 8;
  vbittype cunused3 : 8;
  vbittype StrWhAngGrdGroup_1_1 : 8;
  vbittype StrWhAngGrdGroup_1_0 : 8;
  vbittype unused0 : 8;
  vbittype cunused9 : 3;
  vbittype unused1 : 5;
  vbittype cunused8 : 8;
} _c_PPEI_Steering_Wheel_Angle_CE_StrWhAngGrdGroup_1_msgType;
typedef struct _c_Steering_Torque_Command_CE_msgTypeTag
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
} _c_Steering_Torque_Command_CE_msgType;
typedef struct _c_Park_Assist_Parallel_CE_msgTypeTag
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
} _c_Park_Assist_Parallel_CE_msgType;
typedef struct _c_Park_Assist_Parallel_CE_StrWhlAngReq_msgTypeTag
{
  vbittype cunused0 : 2;
  vbittype unused0 : 1;
  vbittype cunused1 : 1;
  vbittype cunused2 : 2;
  vbittype unused1 : 2;
  vbittype StrWhlAngReq_2 : 2;
  vbittype unused2 : 6;
  vbittype StrWhlAngReq_1 : 8;
  vbittype StrWhlAngReq_0 : 8;
  vbittype cunused5 : 2;
  vbittype cunused6 : 2;
  vbittype unused3 : 4;
  vbittype cunused4 : 8;
  vbittype cunused3 : 8;
} _c_Park_Assist_Parallel_CE_StrWhlAngReq_msgType;
typedef struct _c_Electric_Power_Steering_CE_msgTypeTag
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
} _c_Electric_Power_Steering_CE_msgType;
typedef struct _c_Electric_Power_Steering_CE_DrvStrIntfrDtcdGroup_msgTypeTag
{
  vbittype cunused0 : 2;
  vbittype DrvStrIntfrDtcdGroup : 2;
  vbittype cunused1 : 2;
  vbittype cunused2 : 2;
  vbittype cunused3 : 2;
  vbittype cunused4 : 2;
  vbittype unused0 : 4;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
} _c_Electric_Power_Steering_CE_DrvStrIntfrDtcdGroup_msgType;
typedef struct _c_UUDT_Resp_From_EPS_EPS_JR_CE_msgTypeTag
{
  vbittype DgnInf_CE542_7 : 8;
  vbittype DgnInf_CE542_6 : 8;
  vbittype DgnInf_CE542_5 : 8;
  vbittype DgnInf_CE542_4 : 8;
  vbittype DgnInf_CE542_3 : 8;
  vbittype DgnInf_CE542_2 : 8;
  vbittype DgnInf_CE542_1 : 8;
  vbittype DgnInf_CE542_0 : 8;
} _c_UUDT_Resp_From_EPS_EPS_JR_CE_msgType;
typedef struct _c_USDT_Resp_From_EPS_EPS_JR_CE_msgTypeTag
{
  vbittype DgnInf_1_7 : 8;
  vbittype DgnInf_1_6 : 8;
  vbittype DgnInf_1_5 : 8;
  vbittype DgnInf_1_4 : 8;
  vbittype DgnInf_1_3 : 8;
  vbittype DgnInf_1_2 : 8;
  vbittype DgnInf_1_1 : 8;
  vbittype DgnInf_1_0 : 8;
} _c_USDT_Resp_From_EPS_EPS_JR_CE_msgType;
typedef struct _c_Steering_Torque_Overlay_Stat_CE_msgTypeTag
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
} _c_Steering_Torque_Overlay_Stat_CE_msgType;
/* -----------------------------------------------------------------------------
    &&&~ Signal Structures for group signals
 ----------------------------------------------------------------------------- */

typedef struct _c_DTCInfo_778_msgTypeTag
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
} _c_DTCInfo_778_msgType;
typedef struct _c_StrWhAngGroup_0_msgTypeTag
{
  vbittype unused0 : 7;
  vbittype StrWhAngV_0 : 1;
  vbittype StrWhAng_0_1 : 8;
  vbittype StrWhAng_0_0 : 8;
} _c_StrWhAngGroup_0_msgType;
typedef struct _c_StrWhAngGrdGroup_0_msgTypeTag
{
  vbittype StrWhAngGrd_0_1 : 4;
  vbittype unused0 : 3;
  vbittype StrWhAngGrdV_0 : 1;
  vbittype StrWhAngGrd_0_0 : 8;
} _c_StrWhAngGrdGroup_0_msgType;
typedef struct _c_HndsOffStrWhlDtStGroup_msgTypeTag
{
  vbittype unused0 : 5;
  vbittype HndsOffStrWhlDtSt : 1;
  vbittype HndsOffStrWhlDtStV : 1;
  vbittype unused1 : 1;
} _c_HndsOffStrWhlDtStGroup_msgType;
typedef struct _c_LKADrvAppldTrqGroup_msgTypeTag
{
  vbittype LKADrvAppldTrq_1 : 3;
  vbittype LKADrvAppldTrqV : 1;
  vbittype unused0 : 4;
  vbittype LKADrvAppldTrq_0 : 8;
} _c_LKADrvAppldTrqGroup_msgType;
typedef struct _c_DrvStrIntfrDtcdGroup_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype DrvStrIntfrDtcdV : 1;
  vbittype DrvStrIntfrDtcd : 1;
  vbittype unused1 : 4;
} _c_DrvStrIntfrDtcdGroup_msgType;
typedef struct _c_StrWhAngGroup_1_msgTypeTag
{
  vbittype unused0 : 7;
  vbittype StrWhAngV_1 : 1;
  vbittype StrWhAng_1_1 : 8;
  vbittype StrWhAng_1_0 : 8;
} _c_StrWhAngGroup_1_msgType;
typedef struct _c_StrWhAngGrdGroup_1_msgTypeTag
{
  vbittype StrWhAngGrd_1_1 : 4;
  vbittype unused0 : 3;
  vbittype StrWhAngGrdV_1 : 1;
  vbittype StrWhAngGrd_1_0 : 8;
} _c_StrWhAngGrdGroup_1_msgType;
typedef struct _c_EngOilTmpGroup_msgTypeTag
{
  vbittype unused0 : 7;
  vbittype EngOilTmpV : 1;
  vbittype EngOilTmp : 8;
} _c_EngOilTmpGroup_msgType;
typedef struct _c_EngOffTmExtRngGroup_msgTypeTag
{
  vbittype unused0 : 2;
  vbittype EngOffTmExtRngV : 1;
  vbittype unused1 : 5;
  vbittype EngOffTmExtRng : 8;
} _c_EngOffTmExtRngGroup_msgType;
typedef struct _c_OtsAirTmpCrValGroup_msgTypeTag
{
  vbittype OtsAirTmpCrValV : 1;
  vbittype unused0 : 7;
  vbittype OtsAirTmpCrVal : 8;
} _c_OtsAirTmpCrValGroup_msgType;
typedef struct _c_WhlGrndVlctyLftNnDrvnGroup_0_msgTypeTag
{
  vbittype WhlGrndVlctyLftNnDrvn_0_1 : 6;
  vbittype WhlGrndVlctyLftNnDrvnV_0 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftNnDrvn_0_0 : 8;
} _c_WhlGrndVlctyLftNnDrvnGroup_0_msgType;
typedef struct _c_WhlGrndVlctyRtNnDrvnGroup_0_msgTypeTag
{
  vbittype WhlGrndVlctyRtNnDrvn_0_1 : 6;
  vbittype WhlGrndVlctyRtNnDrvnV_0 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyRtNnDrvn_0_0 : 8;
} _c_WhlGrndVlctyRtNnDrvnGroup_0_msgType;
typedef struct _c_WhlGrndVlctyLftDrvnGroup_0_msgTypeTag
{
  vbittype WhlGrndVlctyLftDrvn_0_1 : 6;
  vbittype WhlGrndVlctyLftDrvnV_0 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftDrvn_0_0 : 8;
} _c_WhlGrndVlctyLftDrvnGroup_0_msgType;
typedef struct _c_WhlGrndVlctyRtDrvnGroup_0_msgTypeTag
{
  vbittype WhlGrndVlctyRtDrvn_0_1 : 6;
  vbittype WhlGrndVlctyRtDrvnV_0 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyRtDrvn_0_0 : 8;
} _c_WhlGrndVlctyRtDrvnGroup_0_msgType;
typedef struct _c_TransEstGearGroup_msgTypeTag
{
  vbittype TransEstGear : 4;
  vbittype TransEstGearV : 1;
  vbittype unused0 : 3;
} _c_TransEstGearGroup_msgType;
typedef struct _c_TrnsShftLvrPosGroup_msgTypeTag
{
  vbittype TrnsShftLvrPos : 4;
  vbittype TrnsShftLvrPosV : 1;
  vbittype unused0 : 3;
} _c_TrnsShftLvrPosGroup_msgType;
typedef struct _c_BkupPwrModeMstrGroup_msgTypeTag
{
  vbittype unused0 : 7;
  vbittype BkupPwrModeMstrVDA : 1;
} _c_BkupPwrModeMstrGroup_msgType;
typedef struct _c_VSELatAccGroup_msgTypeTag
{
  vbittype VSELatAcc_1 : 4;
  vbittype VSELatAccV : 1;
  vbittype unused0 : 3;
  vbittype VSELatAcc_0 : 8;
} _c_VSELatAccGroup_msgType;
typedef struct _c_BrkPdlDrvAppPrsDetcdGroup_msgTypeTag
{
  vbittype unused0 : 6;
  vbittype BrkPdlDrvAppPrsDetcd : 1;
  vbittype BrkPdlDrvAppPrsDetcdV : 1;
} _c_BrkPdlDrvAppPrsDetcdGroup_msgType;
typedef struct _c_VehDynYawRateGroup_msgTypeTag
{
  vbittype VehDynYawRate_1 : 4;
  vbittype VehDynYawRateV : 1;
  vbittype unused0 : 3;
  vbittype VehDynYawRate_0 : 8;
} _c_VehDynYawRateGroup_msgType;
typedef struct _c_VehDynOvrUndrStrGroup_0_msgTypeTag
{
  vbittype VehDynOvrUndrStr_0_1 : 2;
  vbittype VehDynOvrUndrStrV_0 : 1;
  vbittype unused0 : 5;
  vbittype VehDynOvrUndrStr_0_0 : 8;
} _c_VehDynOvrUndrStrGroup_0_msgType;
typedef struct _c_LKATqOvrDltCmd_msgTypeTag
{
  vbittype LKATODC_TrqVl_1 : 3;
  vbittype LKATODC_TrqRqAct : 1;
  vbittype unused0 : 4;
  vbittype LKATODC_TrqVl_0 : 8;
} _c_LKATqOvrDltCmd_msgType;
typedef struct _c_WhlRotStatLftNDrvn_msgTypeTag
{
  vbittype WRSLNDWhlDistPCntr_1 : 2;
  vbittype WRSLNDWhlDistVal : 1;
  vbittype WRSLNDWhlRotStRst : 1;
  vbittype WRSLNDSeqNum : 2;
  vbittype WRSLNDWhlDisTpRC : 2;
  vbittype WRSLNDWhlDistPCntr_0 : 8;
  vbittype WRSLNDWhlDistTstm_1 : 8;
  vbittype WRSLNDWhlDistTstm_0 : 8;
} _c_WhlRotStatLftNDrvn_msgType;
typedef struct _c_WhlRotStatRghtNDrvn_msgTypeTag
{
  vbittype WRSRNDWhlDistPCntr_1 : 2;
  vbittype WRSRNDWhlDistVal : 1;
  vbittype WRSRNDWhlRotStRst : 1;
  vbittype WRSRNDSeqNum : 2;
  vbittype WRSRNDWhlDisTpRC : 2;
  vbittype WRSRNDWhlDistPCntr_0 : 8;
  vbittype WRSRNDWhlDistTstm_1 : 8;
  vbittype WRSRNDWhlDistTstm_0 : 8;
} _c_WhlRotStatRghtNDrvn_msgType;
typedef struct _c_WhlGrndVlctyLftNnDrvnGroup_1_msgTypeTag
{
  vbittype WhlGrndVlctyLftNnDrvn_1_1 : 6;
  vbittype WhlGrndVlctyLftNnDrvnV_1 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftNnDrvn_1_0 : 8;
} _c_WhlGrndVlctyLftNnDrvnGroup_1_msgType;
typedef struct _c_WhlGrndVlctyRtNnDrvnGroup_1_msgTypeTag
{
  vbittype WhlGrndVlctyRtNnDrvn_1_1 : 6;
  vbittype WhlGrndVlctyRtNnDrvnV_1 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyRtNnDrvn_1_0 : 8;
} _c_WhlGrndVlctyRtNnDrvnGroup_1_msgType;
typedef struct _c_WhlGrndVlctyLftDrvnGroup_1_msgTypeTag
{
  vbittype WhlGrndVlctyLftDrvn_1_1 : 6;
  vbittype WhlGrndVlctyLftDrvnV_1 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyLftDrvn_1_0 : 8;
} _c_WhlGrndVlctyLftDrvnGroup_1_msgType;
typedef struct _c_WhlGrndVlctyRtDrvnGroup_1_msgTypeTag
{
  vbittype WhlGrndVlctyRtDrvn_1_1 : 6;
  vbittype WhlGrndVlctyRtDrvnV_1 : 1;
  vbittype unused0 : 1;
  vbittype WhlGrndVlctyRtDrvn_1_0 : 8;
} _c_WhlGrndVlctyRtDrvnGroup_1_msgType;
typedef struct _c_StrWhlAngReq_msgTypeTag
{
  vbittype SWAR_ReqActV : 1;
  vbittype SWAR_ReqAct : 1;
  vbittype unused0 : 6;
  vbittype SWAR_TrgtAng_1 : 8;
  vbittype SWAR_TrgtAng_0 : 8;
} _c_StrWhlAngReq_msgType;
typedef struct _c_VSELongAccLoResGroup_msgTypeTag
{
  vbittype unused0 : 3;
  vbittype VSELongAccLoResV : 1;
  vbittype unused1 : 4;
  vbittype VSELongAccLoRes_1 : 2;
  vbittype unused2 : 6;
  vbittype VSELongAccLoRes_0 : 8;
} _c_VSELongAccLoResGroup_msgType;
typedef struct _c_VehDynOvrUndrStrGroup_1_msgTypeTag
{
  vbittype VehDynOvrUndrStr_1_1 : 2;
  vbittype VehDynOvrUndrStrV_1 : 1;
  vbittype unused0 : 5;
  vbittype VehDynOvrUndrStr_1_0 : 8;
} _c_VehDynOvrUndrStrGroup_1_msgType;




/* -----------------------------------------------------------------------------
    &&&~ Signal value names
 ----------------------------------------------------------------------------- */



/* -----------------------------------------------------------------------------
    &&&~ Message Unions
 ----------------------------------------------------------------------------- */

typedef union _c_Xcp_Slave_Msg_bufTag
{
  vuint8 _c[8];
  _c_Xcp_Slave_Msg_msgType Xcp_Slave_Msg;
} _c_Xcp_Slave_Msg_buf;
typedef union _c_Xcp_Master_Msg_bufTag
{
  vuint8 _c[8];
  _c_Xcp_Master_Msg_msgType Xcp_Master_Msg;
} _c_Xcp_Master_Msg_buf;
typedef union _c_T1_HostToTarget_bufTag
{
  vuint8 _c[8];
  _c_T1_HostToTarget_msgType T1_HostToTarget;
} _c_T1_HostToTarget_buf;
typedef union _c_LKA_Steering_Trq_Overlay_Stat_HS_bufTag
{
  vuint8 _c[8];
  _c_LKA_Steering_Trq_Overlay_Stat_HS_msgType LKA_Steering_Trq_Overlay_Stat_HS;
  _c_LKA_Steering_Trq_Overlay_Stat_HS_HndsOffStrWhlDtStGroup_msgType LKA_Steering_Trq_Overlay_Stat_HS_HndsOffStrWhlDtStGroup;
  _c_LKA_Steering_Trq_Overlay_Stat_HS_LKADrvAppldTrqGroup_msgType LKA_Steering_Trq_Overlay_Stat_HS_LKADrvAppldTrqGroup;
} _c_LKA_Steering_Trq_Overlay_Stat_HS_buf;
typedef union _c_LKA_Steering_Torque_Cmd_HS_bufTag
{
  vuint8 _c[4];
  _c_LKA_Steering_Torque_Cmd_HS_msgType LKA_Steering_Torque_Cmd_HS;
  _c_LKA_Steering_Torque_Cmd_HS_LKATqOvrDltCmd_msgType LKA_Steering_Torque_Cmd_HS_LKATqOvrDltCmd;
} _c_LKA_Steering_Torque_Cmd_HS_buf;
typedef union _c_Wheel_Pulses_HS_bufTag
{
  vuint8 _c[4];
  _c_Wheel_Pulses_HS_msgType Wheel_Pulses_HS;
} _c_Wheel_Pulses_HS_buf;
typedef union _c_Driving_Mode_Control_HS_bufTag
{
  vuint8 _c[5];
  _c_Driving_Mode_Control_HS_msgType Driving_Mode_Control_HS;
} _c_Driving_Mode_Control_HS_buf;
typedef union _c_Brake_Pedal_Driver_Status_HS_bufTag
{
  vuint8 _c[6];
  _c_Brake_Pedal_Driver_Status_HS_msgType Brake_Pedal_Driver_Status_HS;
} _c_Brake_Pedal_Driver_Status_HS_buf;
typedef union _c_Power_Steering_Information_HS_bufTag
{
  vuint8 _c[1];
  _c_Power_Steering_Information_HS_msgType Power_Steering_Information_HS;
} _c_Power_Steering_Information_HS_buf;
typedef union _c_DTC_Triggered_778_bufTag
{
  vuint8 _c[7];
  _c_DTC_Triggered_778_msgType DTC_Triggered_778;
  _c_DTC_Triggered_778_DTCInfo_778_msgType DTC_Triggered_778_DTCInfo_778;
} _c_DTC_Triggered_778_buf;
typedef union _c_PPEI_Steering_Wheel_Angle_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Steering_Wheel_Angle_msgType PPEI_Steering_Wheel_Angle;
  _c_PPEI_Steering_Wheel_Angle_StrWhAngGroup_0_msgType PPEI_Steering_Wheel_Angle_StrWhAngGroup_0;
  _c_PPEI_Steering_Wheel_Angle_StrWhAngGrdGroup_0_msgType PPEI_Steering_Wheel_Angle_StrWhAngGrdGroup_0;
} _c_PPEI_Steering_Wheel_Angle_buf;
typedef union _c_NonDriven_Wheel_Grnd_Velocity_HS_bufTag
{
  vuint8 _c[5];
  _c_NonDriven_Wheel_Grnd_Velocity_HS_msgType NonDriven_Wheel_Grnd_Velocity_HS;
  _c_NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftNnDrvnGroup_0_msgType NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftNnDrvnGroup_0;
  _c_NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtNnDrvnGroup_0_msgType NonDriven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtNnDrvnGroup_0;
} _c_NonDriven_Wheel_Grnd_Velocity_HS_buf;
typedef union _c_PPEI_Engine_General_Status_5_bufTag
{
  vuint8 _c[2];
  _c_PPEI_Engine_General_Status_5_msgType PPEI_Engine_General_Status_5;
  _c_PPEI_Engine_General_Status_5_EngOilTmpGroup_msgType PPEI_Engine_General_Status_5_EngOilTmpGroup;
} _c_PPEI_Engine_General_Status_5_buf;
typedef union _c_PPEI_Engine_General_Status_1_bufTag
{
  vuint8 _c[7];
  _c_PPEI_Engine_General_Status_1_msgType PPEI_Engine_General_Status_1;
} _c_PPEI_Engine_General_Status_1_buf;
typedef union _c_PPEI_Trans_General_Status_2_bufTag
{
  vuint8 _c[6];
  _c_PPEI_Trans_General_Status_2_msgType PPEI_Trans_General_Status_2;
  _c_PPEI_Trans_General_Status_2_TransEstGearGroup_msgType PPEI_Trans_General_Status_2_TransEstGearGroup;
  _c_PPEI_Trans_General_Status_2_TrnsShftLvrPosGroup_msgType PPEI_Trans_General_Status_2_TrnsShftLvrPosGroup;
} _c_PPEI_Trans_General_Status_2_buf;
typedef union _c_PPEI_NonDrivn_Whl_Rotationl_Stat_bufTag
{
  vuint8 _c[8];
  _c_PPEI_NonDrivn_Whl_Rotationl_Stat_msgType PPEI_NonDrivn_Whl_Rotationl_Stat;
  _c_PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatLftNDrvn_msgType PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatLftNDrvn;
  _c_PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatRghtNDrvn_msgType PPEI_NonDrivn_Whl_Rotationl_Stat_WhlRotStatRghtNDrvn;
} _c_PPEI_NonDrivn_Whl_Rotationl_Stat_buf;
typedef union _c_PPEI_Platform_Eng_Cntrl_Requests_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Platform_Eng_Cntrl_Requests_msgType PPEI_Platform_Eng_Cntrl_Requests;
  _c_PPEI_Platform_Eng_Cntrl_Requests_EngOffTmExtRngGroup_msgType PPEI_Platform_Eng_Cntrl_Requests_EngOffTmExtRngGroup;
  _c_PPEI_Platform_Eng_Cntrl_Requests_OtsAirTmpCrValGroup_msgType PPEI_Platform_Eng_Cntrl_Requests_OtsAirTmpCrValGroup;
} _c_PPEI_Platform_Eng_Cntrl_Requests_buf;
typedef union _c_PPEI_Platform_General_Status_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Platform_General_Status_msgType PPEI_Platform_General_Status;
  _c_PPEI_Platform_General_Status_BkupPwrModeMstrGroup_msgType PPEI_Platform_General_Status_BkupPwrModeMstrGroup;
} _c_PPEI_Platform_General_Status_buf;
typedef union _c_Driven_Wheel_Grnd_Velocity_HS_bufTag
{
  vuint8 _c[5];
  _c_Driven_Wheel_Grnd_Velocity_HS_msgType Driven_Wheel_Grnd_Velocity_HS;
  _c_Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftDrvnGroup_0_msgType Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyLftDrvnGroup_0;
  _c_Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtDrvnGroup_0_msgType Driven_Wheel_Grnd_Velocity_HS_WhlGrndVlctyRtDrvnGroup_0;
} _c_Driven_Wheel_Grnd_Velocity_HS_buf;
typedef union _c_PPEI_Chassis_General_Status_1_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Chassis_General_Status_1_msgType PPEI_Chassis_General_Status_1;
  _c_PPEI_Chassis_General_Status_1_VSELatAccGroup_msgType PPEI_Chassis_General_Status_1_VSELatAccGroup;
  _c_PPEI_Chassis_General_Status_1_BrkPdlDrvAppPrsDetcdGroup_msgType PPEI_Chassis_General_Status_1_BrkPdlDrvAppPrsDetcdGroup;
  _c_PPEI_Chassis_General_Status_1_VehDynYawRateGroup_msgType PPEI_Chassis_General_Status_1_VehDynYawRateGroup;
  _c_PPEI_Chassis_General_Status_1_VehDynOvrUndrStrGroup_0_msgType PPEI_Chassis_General_Status_1_VehDynOvrUndrStrGroup_0;
} _c_PPEI_Chassis_General_Status_1_buf;
typedef union _c_Antilock_Brake_and_TC_Status_HS_bufTag
{
  vuint8 _c[1];
  _c_Antilock_Brake_and_TC_Status_HS_msgType Antilock_Brake_and_TC_Status_HS;
} _c_Antilock_Brake_and_TC_Status_HS_buf;
typedef union _c_UUDT_Resp_From_EHPS_EPS_HS_bufTag
{
  vuint8 _c[8];
  _c_UUDT_Resp_From_EHPS_EPS_HS_msgType UUDT_Resp_From_EHPS_EPS_HS;
} _c_UUDT_Resp_From_EHPS_EPS_HS_buf;
typedef union _c_USDT_Resp_From_EHPS_EPS_HS_bufTag
{
  vuint8 _c[8];
  _c_USDT_Resp_From_EHPS_EPS_HS_msgType USDT_Resp_From_EHPS_EPS_HS;
} _c_USDT_Resp_From_EHPS_EPS_HS_buf;
typedef union _c_CmnMfgSrvResp_bufTag
{
  vuint8 _c[8];
  _c_CmnMfgSrvResp_msgType CmnMfgSrvResp;
} _c_CmnMfgSrvResp_buf;
typedef union _c_Vehicle_Dynamics_ESC_Hyb_CE_bufTag
{
  vuint8 _c[5];
  _c_Vehicle_Dynamics_ESC_Hyb_CE_msgType Vehicle_Dynamics_ESC_Hyb_CE;
  _c_Vehicle_Dynamics_ESC_Hyb_CE_VSELongAccLoResGroup_msgType Vehicle_Dynamics_ESC_Hyb_CE_VSELongAccLoResGroup;
  _c_Vehicle_Dynamics_ESC_Hyb_CE_VehDynOvrUndrStrGroup_1_msgType Vehicle_Dynamics_ESC_Hyb_CE_VehDynOvrUndrStrGroup_1;
} _c_Vehicle_Dynamics_ESC_Hyb_CE_buf;
typedef union _c_NonDriven_Wheel_Grnd_Velocity_CE_bufTag
{
  vuint8 _c[5];
  _c_NonDriven_Wheel_Grnd_Velocity_CE_msgType NonDriven_Wheel_Grnd_Velocity_CE;
  _c_NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftNnDrvnGroup_1_msgType NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftNnDrvnGroup_1;
  _c_NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtNnDrvnGroup_1_msgType NonDriven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtNnDrvnGroup_1;
} _c_NonDriven_Wheel_Grnd_Velocity_CE_buf;
typedef union _c_Driven_Wheel_Grnd_Velocity_CE_bufTag
{
  vuint8 _c[5];
  _c_Driven_Wheel_Grnd_Velocity_CE_msgType Driven_Wheel_Grnd_Velocity_CE;
  _c_Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftDrvnGroup_1_msgType Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyLftDrvnGroup_1;
  _c_Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtDrvnGroup_1_msgType Driven_Wheel_Grnd_Velocity_CE_WhlGrndVlctyRtDrvnGroup_1;
} _c_Driven_Wheel_Grnd_Velocity_CE_buf;
typedef union _c_PPEI_Steering_Wheel_Angle_CE_bufTag
{
  vuint8 _c[8];
  _c_PPEI_Steering_Wheel_Angle_CE_msgType PPEI_Steering_Wheel_Angle_CE;
  _c_PPEI_Steering_Wheel_Angle_CE_StrWhAngGroup_1_msgType PPEI_Steering_Wheel_Angle_CE_StrWhAngGroup_1;
  _c_PPEI_Steering_Wheel_Angle_CE_StrWhAngGrdGroup_1_msgType PPEI_Steering_Wheel_Angle_CE_StrWhAngGrdGroup_1;
} _c_PPEI_Steering_Wheel_Angle_CE_buf;
typedef union _c_Steering_Torque_Command_CE_bufTag
{
  vuint8 _c[8];
  _c_Steering_Torque_Command_CE_msgType Steering_Torque_Command_CE;
} _c_Steering_Torque_Command_CE_buf;
typedef union _c_Park_Assist_Parallel_CE_bufTag
{
  vuint8 _c[7];
  _c_Park_Assist_Parallel_CE_msgType Park_Assist_Parallel_CE;
  _c_Park_Assist_Parallel_CE_StrWhlAngReq_msgType Park_Assist_Parallel_CE_StrWhlAngReq;
} _c_Park_Assist_Parallel_CE_buf;
typedef union _c_Electric_Power_Steering_CE_bufTag
{
  vuint8 _c[4];
  _c_Electric_Power_Steering_CE_msgType Electric_Power_Steering_CE;
  _c_Electric_Power_Steering_CE_DrvStrIntfrDtcdGroup_msgType Electric_Power_Steering_CE_DrvStrIntfrDtcdGroup;
} _c_Electric_Power_Steering_CE_buf;
typedef union _c_UUDT_Resp_From_EPS_EPS_JR_CE_bufTag
{
  vuint8 _c[8];
  _c_UUDT_Resp_From_EPS_EPS_JR_CE_msgType UUDT_Resp_From_EPS_EPS_JR_CE;
} _c_UUDT_Resp_From_EPS_EPS_JR_CE_buf;
typedef union _c_USDT_Resp_From_EPS_EPS_JR_CE_bufTag
{
  vuint8 _c[8];
  _c_USDT_Resp_From_EPS_EPS_JR_CE_msgType USDT_Resp_From_EPS_EPS_JR_CE;
} _c_USDT_Resp_From_EPS_EPS_JR_CE_buf;
typedef union _c_Steering_Torque_Overlay_Stat_CE_bufTag
{
  vuint8 _c[8];
  _c_Steering_Torque_Overlay_Stat_CE_msgType Steering_Torque_Overlay_Stat_CE;
} _c_Steering_Torque_Overlay_Stat_CE_buf;
/* -----------------------------------------------------------------------------
    &&&~ Signal Unions for group signals
 ----------------------------------------------------------------------------- */

typedef union _c_DTCInfo_778_bufTag
{
  vuint8 _c[7];
  _c_DTCInfo_778_msgType DTCInfo_778;
} _c_DTCInfo_778_buf;
typedef union _c_StrWhAngGroup_0_bufTag
{
  vuint8 _c[3];
  _c_StrWhAngGroup_0_msgType StrWhAngGroup_0;
} _c_StrWhAngGroup_0_buf;
typedef union _c_StrWhAngGrdGroup_0_bufTag
{
  vuint8 _c[2];
  _c_StrWhAngGrdGroup_0_msgType StrWhAngGrdGroup_0;
} _c_StrWhAngGrdGroup_0_buf;
typedef union _c_HndsOffStrWhlDtStGroup_bufTag
{
  vuint8 _c[1];
  _c_HndsOffStrWhlDtStGroup_msgType HndsOffStrWhlDtStGroup;
} _c_HndsOffStrWhlDtStGroup_buf;
typedef union _c_LKADrvAppldTrqGroup_bufTag
{
  vuint8 _c[2];
  _c_LKADrvAppldTrqGroup_msgType LKADrvAppldTrqGroup;
} _c_LKADrvAppldTrqGroup_buf;
typedef union _c_DrvStrIntfrDtcdGroup_bufTag
{
  vuint8 _c[1];
  _c_DrvStrIntfrDtcdGroup_msgType DrvStrIntfrDtcdGroup;
} _c_DrvStrIntfrDtcdGroup_buf;
typedef union _c_StrWhAngGroup_1_bufTag
{
  vuint8 _c[3];
  _c_StrWhAngGroup_1_msgType StrWhAngGroup_1;
} _c_StrWhAngGroup_1_buf;
typedef union _c_StrWhAngGrdGroup_1_bufTag
{
  vuint8 _c[2];
  _c_StrWhAngGrdGroup_1_msgType StrWhAngGrdGroup_1;
} _c_StrWhAngGrdGroup_1_buf;
typedef union _c_EngOilTmpGroup_bufTag
{
  vuint8 _c[2];
  _c_EngOilTmpGroup_msgType EngOilTmpGroup;
} _c_EngOilTmpGroup_buf;
typedef union _c_EngOffTmExtRngGroup_bufTag
{
  vuint8 _c[2];
  _c_EngOffTmExtRngGroup_msgType EngOffTmExtRngGroup;
} _c_EngOffTmExtRngGroup_buf;
typedef union _c_OtsAirTmpCrValGroup_bufTag
{
  vuint8 _c[2];
  _c_OtsAirTmpCrValGroup_msgType OtsAirTmpCrValGroup;
} _c_OtsAirTmpCrValGroup_buf;
typedef union _c_WhlGrndVlctyLftNnDrvnGroup_0_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyLftNnDrvnGroup_0_msgType WhlGrndVlctyLftNnDrvnGroup_0;
} _c_WhlGrndVlctyLftNnDrvnGroup_0_buf;
typedef union _c_WhlGrndVlctyRtNnDrvnGroup_0_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyRtNnDrvnGroup_0_msgType WhlGrndVlctyRtNnDrvnGroup_0;
} _c_WhlGrndVlctyRtNnDrvnGroup_0_buf;
typedef union _c_WhlGrndVlctyLftDrvnGroup_0_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyLftDrvnGroup_0_msgType WhlGrndVlctyLftDrvnGroup_0;
} _c_WhlGrndVlctyLftDrvnGroup_0_buf;
typedef union _c_WhlGrndVlctyRtDrvnGroup_0_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyRtDrvnGroup_0_msgType WhlGrndVlctyRtDrvnGroup_0;
} _c_WhlGrndVlctyRtDrvnGroup_0_buf;
typedef union _c_TransEstGearGroup_bufTag
{
  vuint8 _c[1];
  _c_TransEstGearGroup_msgType TransEstGearGroup;
} _c_TransEstGearGroup_buf;
typedef union _c_TrnsShftLvrPosGroup_bufTag
{
  vuint8 _c[1];
  _c_TrnsShftLvrPosGroup_msgType TrnsShftLvrPosGroup;
} _c_TrnsShftLvrPosGroup_buf;
typedef union _c_BkupPwrModeMstrGroup_bufTag
{
  vuint8 _c[1];
  _c_BkupPwrModeMstrGroup_msgType BkupPwrModeMstrGroup;
} _c_BkupPwrModeMstrGroup_buf;
typedef union _c_VSELatAccGroup_bufTag
{
  vuint8 _c[2];
  _c_VSELatAccGroup_msgType VSELatAccGroup;
} _c_VSELatAccGroup_buf;
typedef union _c_BrkPdlDrvAppPrsDetcdGroup_bufTag
{
  vuint8 _c[1];
  _c_BrkPdlDrvAppPrsDetcdGroup_msgType BrkPdlDrvAppPrsDetcdGroup;
} _c_BrkPdlDrvAppPrsDetcdGroup_buf;
typedef union _c_VehDynYawRateGroup_bufTag
{
  vuint8 _c[2];
  _c_VehDynYawRateGroup_msgType VehDynYawRateGroup;
} _c_VehDynYawRateGroup_buf;
typedef union _c_VehDynOvrUndrStrGroup_0_bufTag
{
  vuint8 _c[2];
  _c_VehDynOvrUndrStrGroup_0_msgType VehDynOvrUndrStrGroup_0;
} _c_VehDynOvrUndrStrGroup_0_buf;
typedef union _c_LKATqOvrDltCmd_bufTag
{
  vuint8 _c[2];
  _c_LKATqOvrDltCmd_msgType LKATqOvrDltCmd;
} _c_LKATqOvrDltCmd_buf;
typedef union _c_WhlRotStatLftNDrvn_bufTag
{
  vuint8 _c[4];
  _c_WhlRotStatLftNDrvn_msgType WhlRotStatLftNDrvn;
} _c_WhlRotStatLftNDrvn_buf;
typedef union _c_WhlRotStatRghtNDrvn_bufTag
{
  vuint8 _c[4];
  _c_WhlRotStatRghtNDrvn_msgType WhlRotStatRghtNDrvn;
} _c_WhlRotStatRghtNDrvn_buf;
typedef union _c_WhlGrndVlctyLftNnDrvnGroup_1_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyLftNnDrvnGroup_1_msgType WhlGrndVlctyLftNnDrvnGroup_1;
} _c_WhlGrndVlctyLftNnDrvnGroup_1_buf;
typedef union _c_WhlGrndVlctyRtNnDrvnGroup_1_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyRtNnDrvnGroup_1_msgType WhlGrndVlctyRtNnDrvnGroup_1;
} _c_WhlGrndVlctyRtNnDrvnGroup_1_buf;
typedef union _c_WhlGrndVlctyLftDrvnGroup_1_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyLftDrvnGroup_1_msgType WhlGrndVlctyLftDrvnGroup_1;
} _c_WhlGrndVlctyLftDrvnGroup_1_buf;
typedef union _c_WhlGrndVlctyRtDrvnGroup_1_bufTag
{
  vuint8 _c[2];
  _c_WhlGrndVlctyRtDrvnGroup_1_msgType WhlGrndVlctyRtDrvnGroup_1;
} _c_WhlGrndVlctyRtDrvnGroup_1_buf;
typedef union _c_StrWhlAngReq_bufTag
{
  vuint8 _c[3];
  _c_StrWhlAngReq_msgType StrWhlAngReq;
} _c_StrWhlAngReq_buf;
typedef union _c_VSELongAccLoResGroup_bufTag
{
  vuint8 _c[3];
  _c_VSELongAccLoResGroup_msgType VSELongAccLoResGroup;
} _c_VSELongAccLoResGroup_buf;
typedef union _c_VehDynOvrUndrStrGroup_1_bufTag
{
  vuint8 _c[2];
  _c_VehDynOvrUndrStrGroup_1_msgType VehDynOvrUndrStrGroup_1;
} _c_VehDynOvrUndrStrGroup_1_buf;




/* -----------------------------------------------------------------------------
    &&&~ Message Buffers
 ----------------------------------------------------------------------------- */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Xcp_Slave_Msg_buf V_MEMRAM2 Xcp_Slave_Msg;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Xcp_Master_Msg_buf V_MEMRAM2 Xcp_Master_Msg;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_T1_HostToTarget_buf V_MEMRAM2 T1_HostToTarget;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_LKA_Steering_Trq_Overlay_Stat_HS_buf V_MEMRAM2 LKA_Steering_Trq_Overlay_Stat_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_LKA_Steering_Torque_Cmd_HS_buf V_MEMRAM2 LKA_Steering_Torque_Cmd_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Wheel_Pulses_HS_buf V_MEMRAM2 Wheel_Pulses_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Driving_Mode_Control_HS_buf V_MEMRAM2 Driving_Mode_Control_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Brake_Pedal_Driver_Status_HS_buf V_MEMRAM2 Brake_Pedal_Driver_Status_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Power_Steering_Information_HS_buf V_MEMRAM2 Power_Steering_Information_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_DTC_Triggered_778_buf V_MEMRAM2 DTC_Triggered_778;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Steering_Wheel_Angle_buf V_MEMRAM2 PPEI_Steering_Wheel_Angle;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_NonDriven_Wheel_Grnd_Velocity_HS_buf V_MEMRAM2 NonDriven_Wheel_Grnd_Velocity_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Engine_General_Status_5_buf V_MEMRAM2 PPEI_Engine_General_Status_5;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Engine_General_Status_1_buf V_MEMRAM2 PPEI_Engine_General_Status_1;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Trans_General_Status_2_buf V_MEMRAM2 PPEI_Trans_General_Status_2;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_NonDrivn_Whl_Rotationl_Stat_buf V_MEMRAM2 PPEI_NonDrivn_Whl_Rotationl_Stat;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Platform_Eng_Cntrl_Requests_buf V_MEMRAM2 PPEI_Platform_Eng_Cntrl_Requests;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Platform_General_Status_buf V_MEMRAM2 PPEI_Platform_General_Status;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Driven_Wheel_Grnd_Velocity_HS_buf V_MEMRAM2 Driven_Wheel_Grnd_Velocity_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Chassis_General_Status_1_buf V_MEMRAM2 PPEI_Chassis_General_Status_1;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Antilock_Brake_and_TC_Status_HS_buf V_MEMRAM2 Antilock_Brake_and_TC_Status_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_UUDT_Resp_From_EHPS_EPS_HS_buf V_MEMRAM2 UUDT_Resp_From_EHPS_EPS_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_USDT_Resp_From_EHPS_EPS_HS_buf V_MEMRAM2 USDT_Resp_From_EHPS_EPS_HS;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_CmnMfgSrvResp_buf V_MEMRAM2 CmnMfgSrvResp;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Vehicle_Dynamics_ESC_Hyb_CE_buf V_MEMRAM2 Vehicle_Dynamics_ESC_Hyb_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_NonDriven_Wheel_Grnd_Velocity_CE_buf V_MEMRAM2 NonDriven_Wheel_Grnd_Velocity_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Driven_Wheel_Grnd_Velocity_CE_buf V_MEMRAM2 Driven_Wheel_Grnd_Velocity_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_PPEI_Steering_Wheel_Angle_CE_buf V_MEMRAM2 PPEI_Steering_Wheel_Angle_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Steering_Torque_Command_CE_buf V_MEMRAM2 Steering_Torque_Command_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Park_Assist_Parallel_CE_buf V_MEMRAM2 Park_Assist_Parallel_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Electric_Power_Steering_CE_buf V_MEMRAM2 Electric_Power_Steering_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_UUDT_Resp_From_EPS_EPS_JR_CE_buf V_MEMRAM2 UUDT_Resp_From_EPS_EPS_JR_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_USDT_Resp_From_EPS_EPS_JR_CE_buf V_MEMRAM2 USDT_Resp_From_EPS_EPS_JR_CE;
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
/* RAM CATEGORY 2 END */

/* RAM CATEGORY 2 START */
V_MEMRAM0 extern  V_MEMRAM1 _c_Steering_Torque_Overlay_Stat_CE_buf V_MEMRAM2 Steering_Torque_Overlay_Stat_CE;
/* RAM CATEGORY 2 END */

/* -----------------------------------------------------------------------------
    &&&~ Extern decl for message buffer for group signals
 ----------------------------------------------------------------------------- */

V_MEMRAM0 extern  V_MEMRAM1 _c_DTCInfo_778_buf V_MEMRAM2 DTCInfo_778;
V_MEMRAM0 extern  V_MEMRAM1 _c_StrWhAngGroup_0_buf V_MEMRAM2 StrWhAngGroup_0;
V_MEMRAM0 extern  V_MEMRAM1 _c_StrWhAngGrdGroup_0_buf V_MEMRAM2 StrWhAngGrdGroup_0;
V_MEMRAM0 extern  V_MEMRAM1 _c_HndsOffStrWhlDtStGroup_buf V_MEMRAM2 HndsOffStrWhlDtStGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_LKADrvAppldTrqGroup_buf V_MEMRAM2 LKADrvAppldTrqGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_DrvStrIntfrDtcdGroup_buf V_MEMRAM2 DrvStrIntfrDtcdGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_StrWhAngGroup_1_buf V_MEMRAM2 StrWhAngGroup_1;
V_MEMRAM0 extern  V_MEMRAM1 _c_StrWhAngGrdGroup_1_buf V_MEMRAM2 StrWhAngGrdGroup_1;
V_MEMRAM0 extern  V_MEMRAM1 _c_EngOilTmpGroup_buf V_MEMRAM2 EngOilTmpGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_EngOffTmExtRngGroup_buf V_MEMRAM2 EngOffTmExtRngGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_OtsAirTmpCrValGroup_buf V_MEMRAM2 OtsAirTmpCrValGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyLftNnDrvnGroup_0_buf V_MEMRAM2 WhlGrndVlctyLftNnDrvnGroup_0;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyRtNnDrvnGroup_0_buf V_MEMRAM2 WhlGrndVlctyRtNnDrvnGroup_0;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyLftDrvnGroup_0_buf V_MEMRAM2 WhlGrndVlctyLftDrvnGroup_0;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyRtDrvnGroup_0_buf V_MEMRAM2 WhlGrndVlctyRtDrvnGroup_0;
V_MEMRAM0 extern  V_MEMRAM1 _c_TransEstGearGroup_buf V_MEMRAM2 TransEstGearGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_TrnsShftLvrPosGroup_buf V_MEMRAM2 TrnsShftLvrPosGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_BkupPwrModeMstrGroup_buf V_MEMRAM2 BkupPwrModeMstrGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_VSELatAccGroup_buf V_MEMRAM2 VSELatAccGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_BrkPdlDrvAppPrsDetcdGroup_buf V_MEMRAM2 BrkPdlDrvAppPrsDetcdGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_VehDynYawRateGroup_buf V_MEMRAM2 VehDynYawRateGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_VehDynOvrUndrStrGroup_0_buf V_MEMRAM2 VehDynOvrUndrStrGroup_0;
V_MEMRAM0 extern  V_MEMRAM1 _c_LKATqOvrDltCmd_buf V_MEMRAM2 LKATqOvrDltCmd;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlRotStatLftNDrvn_buf V_MEMRAM2 WhlRotStatLftNDrvn;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlRotStatRghtNDrvn_buf V_MEMRAM2 WhlRotStatRghtNDrvn;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyLftNnDrvnGroup_1_buf V_MEMRAM2 WhlGrndVlctyLftNnDrvnGroup_1;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyRtNnDrvnGroup_1_buf V_MEMRAM2 WhlGrndVlctyRtNnDrvnGroup_1;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyLftDrvnGroup_1_buf V_MEMRAM2 WhlGrndVlctyLftDrvnGroup_1;
V_MEMRAM0 extern  V_MEMRAM1 _c_WhlGrndVlctyRtDrvnGroup_1_buf V_MEMRAM2 WhlGrndVlctyRtDrvnGroup_1;
V_MEMRAM0 extern  V_MEMRAM1 _c_StrWhlAngReq_buf V_MEMRAM2 StrWhlAngReq;
V_MEMRAM0 extern  V_MEMRAM1 _c_VSELongAccLoResGroup_buf V_MEMRAM2 VSELongAccLoResGroup;
V_MEMRAM0 extern  V_MEMRAM1 _c_VehDynOvrUndrStrGroup_1_buf V_MEMRAM2 VehDynOvrUndrStrGroup_1;







/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\drv_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __DRV_PAR_H__ */
