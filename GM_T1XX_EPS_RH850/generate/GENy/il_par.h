/* -----------------------------------------------------------------------------
  Filename:    il_par.h
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

#if !defined(__IL_PAR_H__)
#define __IL_PAR_H__

/* -----------------------------------------------------------------------------
    &&&~ Message Handles
 ----------------------------------------------------------------------------- */

#define IlRxMsgHndT1_HostToTarget            0
#define IlRxMsgHndWheel_Pulses_HS            1
#define IlRxMsgHndPPEI_Engine_General_Status_5 2
#define IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests 3
#define IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS 4
#define IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS 5
#define IlRxMsgHndDriving_Mode_Control_HS    6
#define IlRxMsgHndBrake_Pedal_Driver_Status_HS 7
#define IlRxMsgHndPPEI_Trans_General_Status_2 8
#define IlRxMsgHndPPEI_Platform_General_Status 9
#define IlRxMsgHndPPEI_Chassis_General_Status_1 10
#define IlRxMsgHndLKA_Steering_Torque_Cmd_HS 11
#define IlRxMsgHndAntilock_Brake_and_TC_Status_HS 12
#define IlRxMsgHndPPEI_Engine_General_Status_1 13
#define IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat 14
#define IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE 15
#define IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE 16
#define IlRxMsgHndPark_Assist_Parallel_CE    17
#define IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE 18
#define IlRxMsgHndSteering_Torque_Command_CE 19
#define IlTxMsgHndDTC_Triggered_778          0
#define IlTxMsgHndPPEI_Steering_Wheel_Angle  1
#define IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS 2
#define IlTxMsgHndPower_Steering_Information_HS 3
#define IlTxMsgHndElectric_Power_Steering_CE 4
#define IlTxMsgHndPPEI_Steering_Wheel_Angle_CE 5
#define IlTxMsgHndSteering_Torque_Overlay_Stat_CE 6


/* -----------------------------------------------------------------------------
    &&&~ Signal Handles
 ----------------------------------------------------------------------------- */

#define IlRxSigHndT1_HostToTarget            IlRxMsgHndT1_HostToTarget
#define IlRxSigHndWhlPlsPerRevDrvn_0         IlRxMsgHndWheel_Pulses_HS
#define IlRxSigHndWhlPlsPerRevNonDrvn_0      IlRxMsgHndWheel_Pulses_HS
#define IlRxSigHndWhlRotStatTmstmpRes        IlRxMsgHndWheel_Pulses_HS
#define IlRxSigHndEngOilTmpV                 IlRxMsgHndPPEI_Engine_General_Status_5
#define IlRxSigHndEngOilTmp                  IlRxMsgHndPPEI_Engine_General_Status_5
#define IlRxSigHndEngOilTmpGroup             IlRxMsgHndPPEI_Engine_General_Status_5
#define IlRxSigHndEngOffTmExtRngV            IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndEngOffTmExtRng             IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndEngOffTmExtRngGroup        IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndEngOffTmVDA                IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndOtsAirTmpCrValV            IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndOtsAirTmpCrVal             IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndOtsAirTmpCrValGroup        IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndOtsAirTmpCrValMsk          IlRxMsgHndPPEI_Platform_Eng_Cntrl_Requests
#define IlRxSigHndWhlGrndVlctyLftNnDrvn_0    IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyLftNnDrvnV_0   IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyLftNnDrvnGroup_0 IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyRtNnDrvn_0     IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyRtNnDrvnV_0    IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyRtNnDrvnGroup_0 IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlRotDrctnlSRtNDrvn       IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlRotDrctnlStLfNDrvn      IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyLftDrvn_0      IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyLftDrvnV_0     IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyLftDrvnGroup_0 IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyRtDrvn_0       IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyRtDrvnV_0      IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlGrndVlctyRtDrvnGroup_0  IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlRotDrctnlStRtDrvn       IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndWhlRotDrctnlStLftDrvn      IlRxMsgHndDriven_Wheel_Grnd_Velocity_HS
#define IlRxSigHndStgSysPerfMdRq             IlRxMsgHndDriving_Mode_Control_HS
#define IlRxSigHndDrvMdCntrlState            IlRxMsgHndDriving_Mode_Control_HS
#define IlRxSigHndAutoBrkngAvlbl             IlRxMsgHndBrake_Pedal_Driver_Status_HS
#define IlRxSigHndRedntVSEActARC             IlRxMsgHndBrake_Pedal_Driver_Status_HS
#define IlRxSigHndRedntVSEAct                IlRxMsgHndBrake_Pedal_Driver_Status_HS
#define IlRxSigHndABSActvProtPVal            IlRxMsgHndBrake_Pedal_Driver_Status_HS
#define IlRxSigHndABSActvProtARC             IlRxMsgHndBrake_Pedal_Driver_Status_HS
#define IlRxSigHndABSActvProt                IlRxMsgHndBrake_Pedal_Driver_Status_HS
#define IlRxSigHndTransEstGear               IlRxMsgHndPPEI_Trans_General_Status_2
#define IlRxSigHndTransEstGearV              IlRxMsgHndPPEI_Trans_General_Status_2
#define IlRxSigHndTransEstGearGroup          IlRxMsgHndPPEI_Trans_General_Status_2
#define IlRxSigHndTrnsShftLvrPos             IlRxMsgHndPPEI_Trans_General_Status_2
#define IlRxSigHndTrnsShftLvrPosV            IlRxMsgHndPPEI_Trans_General_Status_2
#define IlRxSigHndTrnsShftLvrPosGroup        IlRxMsgHndPPEI_Trans_General_Status_2
#define IlRxSigHndTrnShftPtrnActStat         IlRxMsgHndPPEI_Trans_General_Status_2
#define IlRxSigHndSysPwrMd                   IlRxMsgHndPPEI_Platform_General_Status
#define IlRxSigHndSysBkUpPwrMd               IlRxMsgHndPPEI_Platform_General_Status
#define IlRxSigHndSysBkupPwrMdEn             IlRxMsgHndPPEI_Platform_General_Status
#define IlRxSigHndBkupPwrModeMstrVDA         IlRxMsgHndPPEI_Platform_General_Status
#define IlRxSigHndBkupPwrModeMstrGroup       IlRxMsgHndPPEI_Platform_General_Status
#define IlRxSigHndTrStLgMdAtv                IlRxMsgHndPPEI_Platform_General_Status
#define IlRxSigHndVSELatAcc                  IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVSELatAccV                 IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVSELatAccGroup             IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndBrkPdlDrvAppPrsDetcd       IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndBrkPdlDrvAppPrsDetcdV      IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndBrkPdlDrvAppPrsDetcdGroup  IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVSEAct_0                   IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndTracCntrlSysDrIntnt        IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndTCSysEnbld                 IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndTCSysAtv                   IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndABSFld                     IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndABSAtv_0                   IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVehDynYawRate              IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVehDynYawRateV             IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVehDynYawRateGroup         IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVhDynCntlSysSt             IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVehDynOvrUndrStr_0         IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVehDynOvrUndrStrV_0        IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndVehDynOvrUndrStrGroup_0    IlRxMsgHndPPEI_Chassis_General_Status_1
#define IlRxSigHndLKATODC_TrqVl              IlRxMsgHndLKA_Steering_Torque_Cmd_HS
#define IlRxSigHndLKATODC_TrqRqAct           IlRxMsgHndLKA_Steering_Torque_Cmd_HS
#define IlRxSigHndLKATqOvrDltCmd             IlRxMsgHndLKA_Steering_Torque_Cmd_HS
#define IlRxSigHndLKATqOvrDltCmdRC           IlRxMsgHndLKA_Steering_Torque_Cmd_HS
#define IlRxSigHndLKATqOvrDltCmdPrtVl        IlRxMsgHndLKA_Steering_Torque_Cmd_HS
#define IlRxSigHndVehStabEnhmntStat_0        IlRxMsgHndAntilock_Brake_and_TC_Status_HS
#define IlRxSigHndTCSysOpMd                  IlRxMsgHndAntilock_Brake_and_TC_Status_HS
#define IlRxSigHndEngSpdStat                 IlRxMsgHndPPEI_Engine_General_Status_1
#define IlRxSigHndPT_CrnkAct                 IlRxMsgHndPPEI_Engine_General_Status_1
#define IlRxSigHndEngRunAtv                  IlRxMsgHndPPEI_Engine_General_Status_1
#define IlRxSigHndEngSpd                     IlRxMsgHndPPEI_Engine_General_Status_1
#define IlRxSigHndEng12vStrtrMtrCmmdOn       IlRxMsgHndPPEI_Engine_General_Status_1
#define IlRxSigHndWRSLNDWhlDistPCntr         IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSLNDWhlDistVal           IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSLNDWhlRotStRst          IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSLNDSeqNum               IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSLNDWhlDisTpRC           IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSLNDWhlDistTstm          IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWhlRotStatLftNDrvn         IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSRNDWhlDistPCntr         IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSRNDWhlDistVal           IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSRNDWhlRotStRst          IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSRNDSeqNum               IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSRNDWhlDisTpRC           IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWRSRNDWhlDistTstm          IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWhlRotStatRghtNDrvn        IlRxMsgHndPPEI_NonDrivn_Whl_Rotationl_Stat
#define IlRxSigHndWhlGrndVlctyLftNnDrvn_1    IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyLftNnDrvnV_1   IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyLftNnDrvnGroup_1 IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyRtNnDrvn_1     IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyRtNnDrvnV_1    IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyRtNnDrvnGroup_1 IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlPlsPerRevNonDrvn_1      IlRxMsgHndNonDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyLftDrvn_1      IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyLftDrvnV_1     IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyLftDrvnGroup_1 IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyRtDrvn_1       IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyRtDrvnV_1      IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlGrndVlctyRtDrvnGroup_1  IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndWhlPlsPerRevDrvn_1         IlRxMsgHndDriven_Wheel_Grnd_Velocity_CE
#define IlRxSigHndStrWhlTctlFdbkReqActRC     IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndStrWhlTctlFdbkReqAct       IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndStrWhlTctlFdbkReqActProtVal IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndSWAR_ReqActV               IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndSWAR_ReqAct                IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndSWAR_TrgtAng               IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndStrWhlAngReq               IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndStrWhlAngReqPrtVal         IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndStrWhlAngReqARC            IlRxMsgHndPark_Assist_Parallel_CE
#define IlRxSigHndVSEAct_1                   IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndVSELongAccLoResV           IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndVSELongAccLoRes            IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndVSELongAccLoResGroup       IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndVehStabEnhmntStat_1        IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndVehDynOvrUndrStr_1         IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndVehDynOvrUndrStrV_1        IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndVehDynOvrUndrStrGroup_1    IlRxMsgHndVehicle_Dynamics_ESC_Hyb_CE
#define IlRxSigHndTqOvrDltTqCmdVl            IlRxMsgHndSteering_Torque_Command_CE
#define IlRxSigHndTqOvrDltTqCmdAct           IlRxMsgHndSteering_Torque_Command_CE
#define IlRxSigHndTrqOvrlARC                 IlRxMsgHndSteering_Torque_Command_CE
#define IlRxSigHndTrqOvrlCmdChksm            IlRxMsgHndSteering_Torque_Command_CE
#define IlTxSigHndDTCI_DTCTriggered_778      IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCIUnused7_778            IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCIUnused6_778            IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCIUnused5_778            IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCIUnused4_778            IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCIUnused3_778            IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCIUnused2_778            IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCIUnused1_778            IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_DTCSource_778         IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_DTCNumber_778         IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_DTCFailType_778       IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_CodeSupported_778     IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_CurrentStatus_778     IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_TstNPsdCdClrdSt_778   IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_TstFldCdClrdStat_778  IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_HistStat_778          IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_TstNPsdPwrUpSt_778    IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_TstFldPwrUpSt_778     IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_WrnIndRqdSt_778       IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCI_DTCFaultType_778      IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndDTCInfo_778                IlTxMsgHndDTC_Triggered_778
#define IlTxSigHndStrWhAngMsk_0              IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhlAngSenTyp_0          IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhlAngSenCalStat_0      IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhAngV_0                IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhAng_0                 IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhAngGroup_0            IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhAngGrdMsk_0           IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStWhlAngAliveRollCnt_0     IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhAngGrd_0              IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhAngGrdV_0             IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrWhAngGrdGroup_0         IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndStrAngSnsChksm_0           IlTxMsgHndPPEI_Steering_Wheel_Angle
#define IlTxSigHndLKAElPwrStTtlTqDlvd        IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndLKATrqOvrlTrqDStat         IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndLKATrqOvrlDltTrqDlvd       IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndHndsOffStrWhlDtMd          IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndHndsOffStrWhlDtSt          IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndHndsOffStrWhlDtStV         IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndHndsOffStrWhlDtStGroup     IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndLKATrqOvrlStatChksm        IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndLKATrqOvrlDlvdRC           IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndLKADrvAppldTrq             IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndLKADrvAppldTrqV            IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndLKADrvAppldTrqGroup        IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS
#define IlTxSigHndPwrStrIO                   IlTxMsgHndPower_Steering_Information_HS
#define IlTxSigHndStrngAsstRdcdIO            IlTxMsgHndPower_Steering_Information_HS
#define IlTxSigHndStrAsstRdcdLvl2IO          IlTxMsgHndPower_Steering_Information_HS
#define IlTxSigHndStrAsstRdcdLvl3IO          IlTxMsgHndPower_Steering_Information_HS
#define IlTxSigHndElecPwrStrAvalStat         IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndDrvStrIntfrDtcdV           IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndDrvStrIntfrDtcd            IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndDrvStrIntfrDtcdGroup       IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndDrvStrIntfrDetARC          IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndDrvStrIntfrDetPrtVal       IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndElcPwrStrAvalStatARC       IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndElcPwrStrAvalStatPVal      IlTxMsgHndElectric_Power_Steering_CE
#define IlTxSigHndStrWhAngMsk_1              IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhlAngSenTyp_1          IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhlAngSenCalStat_1      IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhAngV_1                IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhAng_1                 IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhAngGroup_1            IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhAngGrdMsk_1           IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStWhlAngAliveRollCnt_1     IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhAngGrd_1              IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhAngGrdV_1             IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrWhAngGrdGroup_1         IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndStrAngSnsChksm_1           IlTxMsgHndPPEI_Steering_Wheel_Angle_CE
#define IlTxSigHndElPwrStTtlTqDlrd           IlTxMsgHndSteering_Torque_Overlay_Stat_CE
#define IlTxSigHndTrqOvrlTrqDStat            IlTxMsgHndSteering_Torque_Overlay_Stat_CE
#define IlTxSigHndTrqOvrlDvrdARC             IlTxMsgHndSteering_Torque_Overlay_Stat_CE
#define IlTxSigHndTrqOvrlDltTrqDlrd          IlTxMsgHndSteering_Torque_Overlay_Stat_CE
#define IlTxSigHndTrqOvrlDChksm              IlTxMsgHndSteering_Torque_Overlay_Stat_CE


/* -----------------------------------------------------------------------------
    &&&~ Critical section macros for signals
 ----------------------------------------------------------------------------- */

#define IlEnterCriticalDTCI_DTCTriggered_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_DTCTriggered_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCIUnused7_778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCIUnused7_778()     CanGlobalInterruptRestore()
#define IlEnterCriticalDTCIUnused6_778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCIUnused6_778()     CanGlobalInterruptRestore()
#define IlEnterCriticalDTCIUnused5_778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCIUnused5_778()     CanGlobalInterruptRestore()
#define IlEnterCriticalDTCIUnused4_778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCIUnused4_778()     CanGlobalInterruptRestore()
#define IlEnterCriticalDTCIUnused3_778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCIUnused3_778()     CanGlobalInterruptRestore()
#define IlEnterCriticalDTCIUnused2_778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCIUnused2_778()     CanGlobalInterruptRestore()
#define IlEnterCriticalDTCIUnused1_778()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCIUnused1_778()     CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_DTCSource_778()  CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_DTCSource_778()  CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_DTCNumber_778()  CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_DTCNumber_778()  CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_DTCFailType_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_DTCFailType_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_CodeSupported_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_CodeSupported_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_CurrentStatus_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_CurrentStatus_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_TstNPsdCdClrdSt_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_TstNPsdCdClrdSt_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_TstFldCdClrdStat_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_TstFldCdClrdStat_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_HistStat_778()   CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_HistStat_778()   CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_TstNPsdPwrUpSt_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_TstNPsdPwrUpSt_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_TstFldPwrUpSt_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_TstFldPwrUpSt_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_WrnIndRqdSt_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_WrnIndRqdSt_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCI_DTCFaultType_778() CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCI_DTCFaultType_778() CanGlobalInterruptRestore()
#define IlEnterCriticalDTCInfo_778()         CanGlobalInterruptDisable()
#define IlLeaveCriticalDTCInfo_778()         CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngMsk_0()       CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngMsk_0()       CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlAngSenTyp_0()   CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlAngSenTyp_0()   CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlAngSenCalStat_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlAngSenCalStat_0() CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngV_0()         CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngV_0()         CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAng_0()          CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAng_0()          CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGroup_0()     CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGroup_0()     CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrdMsk_0()    CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrdMsk_0()    CanGlobalInterruptRestore()
#define IlEnterCriticalStWhlAngAliveRollCnt_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalStWhlAngAliveRollCnt_0() CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrd_0()       CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrd_0()       CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrdV_0()      CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrdV_0()      CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrdGroup_0()  CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrdGroup_0()  CanGlobalInterruptRestore()
#define IlEnterCriticalStrAngSnsChksm_0()    CanGlobalInterruptDisable()
#define IlLeaveCriticalStrAngSnsChksm_0()    CanGlobalInterruptRestore()
#define IlEnterCriticalLKAElPwrStTtlTqDlvd() CanGlobalInterruptDisable()
#define IlLeaveCriticalLKAElPwrStTtlTqDlvd() CanGlobalInterruptRestore()
#define IlEnterCriticalLKATrqOvrlTrqDStat()  CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATrqOvrlTrqDStat()  CanGlobalInterruptRestore()
#define IlEnterCriticalLKATrqOvrlDltTrqDlvd() CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATrqOvrlDltTrqDlvd() CanGlobalInterruptRestore()
#define IlEnterCriticalHndsOffStrWhlDtMd()   CanGlobalInterruptDisable()
#define IlLeaveCriticalHndsOffStrWhlDtMd()   CanGlobalInterruptRestore()
#define IlEnterCriticalHndsOffStrWhlDtSt()   CanGlobalInterruptDisable()
#define IlLeaveCriticalHndsOffStrWhlDtSt()   CanGlobalInterruptRestore()
#define IlEnterCriticalHndsOffStrWhlDtStV()  CanGlobalInterruptDisable()
#define IlLeaveCriticalHndsOffStrWhlDtStV()  CanGlobalInterruptRestore()
#define IlEnterCriticalHndsOffStrWhlDtStGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalHndsOffStrWhlDtStGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalLKATrqOvrlStatChksm() CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATrqOvrlStatChksm() CanGlobalInterruptRestore()
#define IlEnterCriticalLKATrqOvrlDlvdRC()    CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATrqOvrlDlvdRC()    CanGlobalInterruptRestore()
#define IlEnterCriticalLKADrvAppldTrq()      CanGlobalInterruptDisable()
#define IlLeaveCriticalLKADrvAppldTrq()      CanGlobalInterruptRestore()
#define IlEnterCriticalLKADrvAppldTrqV()     CanGlobalInterruptDisable()
#define IlLeaveCriticalLKADrvAppldTrqV()     CanGlobalInterruptRestore()
#define IlEnterCriticalLKADrvAppldTrqGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalLKADrvAppldTrqGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalPwrStrIO()            CanGlobalInterruptDisable()
#define IlLeaveCriticalPwrStrIO()            CanGlobalInterruptRestore()
#define IlEnterCriticalStrngAsstRdcdIO()     CanGlobalInterruptDisable()
#define IlLeaveCriticalStrngAsstRdcdIO()     CanGlobalInterruptRestore()
#define IlEnterCriticalStrAsstRdcdLvl2IO()   CanGlobalInterruptDisable()
#define IlLeaveCriticalStrAsstRdcdLvl2IO()   CanGlobalInterruptRestore()
#define IlEnterCriticalStrAsstRdcdLvl3IO()   CanGlobalInterruptDisable()
#define IlLeaveCriticalStrAsstRdcdLvl3IO()   CanGlobalInterruptRestore()
#define IlEnterCriticalElecPwrStrAvalStat()  CanGlobalInterruptDisable()
#define IlLeaveCriticalElecPwrStrAvalStat()  CanGlobalInterruptRestore()
#define IlEnterCriticalDrvStrIntfrDtcdV()    CanGlobalInterruptDisable()
#define IlLeaveCriticalDrvStrIntfrDtcdV()    CanGlobalInterruptRestore()
#define IlEnterCriticalDrvStrIntfrDtcd()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDrvStrIntfrDtcd()     CanGlobalInterruptRestore()
#define IlEnterCriticalDrvStrIntfrDtcdGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalDrvStrIntfrDtcdGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalDrvStrIntfrDetARC()   CanGlobalInterruptDisable()
#define IlLeaveCriticalDrvStrIntfrDetARC()   CanGlobalInterruptRestore()
#define IlEnterCriticalDrvStrIntfrDetPrtVal() CanGlobalInterruptDisable()
#define IlLeaveCriticalDrvStrIntfrDetPrtVal() CanGlobalInterruptRestore()
#define IlEnterCriticalElcPwrStrAvalStatARC() CanGlobalInterruptDisable()
#define IlLeaveCriticalElcPwrStrAvalStatARC() CanGlobalInterruptRestore()
#define IlEnterCriticalElcPwrStrAvalStatPVal() CanGlobalInterruptDisable()
#define IlLeaveCriticalElcPwrStrAvalStatPVal() CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngMsk_1()       CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngMsk_1()       CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlAngSenTyp_1()   CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlAngSenTyp_1()   CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlAngSenCalStat_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlAngSenCalStat_1() CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngV_1()         CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngV_1()         CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAng_1()          CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAng_1()          CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGroup_1()     CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGroup_1()     CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrdMsk_1()    CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrdMsk_1()    CanGlobalInterruptRestore()
#define IlEnterCriticalStWhlAngAliveRollCnt_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalStWhlAngAliveRollCnt_1() CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrd_1()       CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrd_1()       CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrdV_1()      CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrdV_1()      CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhAngGrdGroup_1()  CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhAngGrdGroup_1()  CanGlobalInterruptRestore()
#define IlEnterCriticalStrAngSnsChksm_1()    CanGlobalInterruptDisable()
#define IlLeaveCriticalStrAngSnsChksm_1()    CanGlobalInterruptRestore()
#define IlEnterCriticalElPwrStTtlTqDlrd()    CanGlobalInterruptDisable()
#define IlLeaveCriticalElPwrStTtlTqDlrd()    CanGlobalInterruptRestore()
#define IlEnterCriticalTrqOvrlTrqDStat()     CanGlobalInterruptDisable()
#define IlLeaveCriticalTrqOvrlTrqDStat()     CanGlobalInterruptRestore()
#define IlEnterCriticalTrqOvrlDvrdARC()      CanGlobalInterruptDisable()
#define IlLeaveCriticalTrqOvrlDvrdARC()      CanGlobalInterruptRestore()
#define IlEnterCriticalTrqOvrlDltTrqDlrd()   CanGlobalInterruptDisable()
#define IlLeaveCriticalTrqOvrlDltTrqDlrd()   CanGlobalInterruptRestore()
#define IlEnterCriticalTrqOvrlDChksm()       CanGlobalInterruptDisable()
#define IlLeaveCriticalTrqOvrlDChksm()       CanGlobalInterruptRestore()
#define IlEnterCriticalT1_HostToTarget()     CanGlobalInterruptDisable()
#define IlLeaveCriticalT1_HostToTarget()     CanGlobalInterruptRestore()
#define IlEnterCriticalWhlPlsPerRevDrvn_0()  CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlPlsPerRevDrvn_0()  CanGlobalInterruptRestore()
#define IlEnterCriticalWhlPlsPerRevNonDrvn_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlPlsPerRevNonDrvn_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlRotStatTmstmpRes() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlRotStatTmstmpRes() CanGlobalInterruptRestore()
#define IlEnterCriticalEngOilTmpV()          CanGlobalInterruptDisable()
#define IlLeaveCriticalEngOilTmpV()          CanGlobalInterruptRestore()
#define IlEnterCriticalEngOilTmp()           CanGlobalInterruptDisable()
#define IlLeaveCriticalEngOilTmp()           CanGlobalInterruptRestore()
#define IlEnterCriticalEngOilTmpGroup()      CanGlobalInterruptDisable()
#define IlLeaveCriticalEngOilTmpGroup()      CanGlobalInterruptRestore()
#define IlEnterCriticalEngOffTmExtRngV()     CanGlobalInterruptDisable()
#define IlLeaveCriticalEngOffTmExtRngV()     CanGlobalInterruptRestore()
#define IlEnterCriticalEngOffTmExtRng()      CanGlobalInterruptDisable()
#define IlLeaveCriticalEngOffTmExtRng()      CanGlobalInterruptRestore()
#define IlEnterCriticalEngOffTmExtRngGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalEngOffTmExtRngGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalEngOffTmVDA()         CanGlobalInterruptDisable()
#define IlLeaveCriticalEngOffTmVDA()         CanGlobalInterruptRestore()
#define IlEnterCriticalOtsAirTmpCrValV()     CanGlobalInterruptDisable()
#define IlLeaveCriticalOtsAirTmpCrValV()     CanGlobalInterruptRestore()
#define IlEnterCriticalOtsAirTmpCrVal()      CanGlobalInterruptDisable()
#define IlLeaveCriticalOtsAirTmpCrVal()      CanGlobalInterruptRestore()
#define IlEnterCriticalOtsAirTmpCrValGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalOtsAirTmpCrValGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalOtsAirTmpCrValMsk()   CanGlobalInterruptDisable()
#define IlLeaveCriticalOtsAirTmpCrValMsk()   CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftNnDrvn_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftNnDrvn_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftNnDrvnV_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftNnDrvnV_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftNnDrvnGroup_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftNnDrvnGroup_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtNnDrvn_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtNnDrvn_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtNnDrvnV_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtNnDrvnV_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtNnDrvnGroup_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtNnDrvnGroup_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlRotDrctnlSRtNDrvn() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlRotDrctnlSRtNDrvn() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlRotDrctnlStLfNDrvn() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlRotDrctnlStLfNDrvn() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftDrvn_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftDrvn_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftDrvnV_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftDrvnV_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftDrvnGroup_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftDrvnGroup_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtDrvn_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtDrvn_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtDrvnV_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtDrvnV_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtDrvnGroup_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtDrvnGroup_0() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlRotDrctnlStRtDrvn() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlRotDrctnlStRtDrvn() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlRotDrctnlStLftDrvn() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlRotDrctnlStLftDrvn() CanGlobalInterruptRestore()
#define IlEnterCriticalStgSysPerfMdRq()      CanGlobalInterruptDisable()
#define IlLeaveCriticalStgSysPerfMdRq()      CanGlobalInterruptRestore()
#define IlEnterCriticalDrvMdCntrlState()     CanGlobalInterruptDisable()
#define IlLeaveCriticalDrvMdCntrlState()     CanGlobalInterruptRestore()
#define IlEnterCriticalAutoBrkngAvlbl()      CanGlobalInterruptDisable()
#define IlLeaveCriticalAutoBrkngAvlbl()      CanGlobalInterruptRestore()
#define IlEnterCriticalRedntVSEActARC()      CanGlobalInterruptDisable()
#define IlLeaveCriticalRedntVSEActARC()      CanGlobalInterruptRestore()
#define IlEnterCriticalRedntVSEAct()         CanGlobalInterruptDisable()
#define IlLeaveCriticalRedntVSEAct()         CanGlobalInterruptRestore()
#define IlEnterCriticalABSActvProtPVal()     CanGlobalInterruptDisable()
#define IlLeaveCriticalABSActvProtPVal()     CanGlobalInterruptRestore()
#define IlEnterCriticalABSActvProtARC()      CanGlobalInterruptDisable()
#define IlLeaveCriticalABSActvProtARC()      CanGlobalInterruptRestore()
#define IlEnterCriticalABSActvProt()         CanGlobalInterruptDisable()
#define IlLeaveCriticalABSActvProt()         CanGlobalInterruptRestore()
#define IlEnterCriticalTransEstGear()        CanGlobalInterruptDisable()
#define IlLeaveCriticalTransEstGear()        CanGlobalInterruptRestore()
#define IlEnterCriticalTransEstGearV()       CanGlobalInterruptDisable()
#define IlLeaveCriticalTransEstGearV()       CanGlobalInterruptRestore()
#define IlEnterCriticalTransEstGearGroup()   CanGlobalInterruptDisable()
#define IlLeaveCriticalTransEstGearGroup()   CanGlobalInterruptRestore()
#define IlEnterCriticalTrnsShftLvrPos()      CanGlobalInterruptDisable()
#define IlLeaveCriticalTrnsShftLvrPos()      CanGlobalInterruptRestore()
#define IlEnterCriticalTrnsShftLvrPosV()     CanGlobalInterruptDisable()
#define IlLeaveCriticalTrnsShftLvrPosV()     CanGlobalInterruptRestore()
#define IlEnterCriticalTrnsShftLvrPosGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalTrnsShftLvrPosGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalTrnShftPtrnActStat()  CanGlobalInterruptDisable()
#define IlLeaveCriticalTrnShftPtrnActStat()  CanGlobalInterruptRestore()
#define IlEnterCriticalSysPwrMd()            CanGlobalInterruptDisable()
#define IlLeaveCriticalSysPwrMd()            CanGlobalInterruptRestore()
#define IlEnterCriticalSysBkUpPwrMd()        CanGlobalInterruptDisable()
#define IlLeaveCriticalSysBkUpPwrMd()        CanGlobalInterruptRestore()
#define IlEnterCriticalSysBkupPwrMdEn()      CanGlobalInterruptDisable()
#define IlLeaveCriticalSysBkupPwrMdEn()      CanGlobalInterruptRestore()
#define IlEnterCriticalBkupPwrModeMstrVDA()  CanGlobalInterruptDisable()
#define IlLeaveCriticalBkupPwrModeMstrVDA()  CanGlobalInterruptRestore()
#define IlEnterCriticalBkupPwrModeMstrGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalBkupPwrModeMstrGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalTrStLgMdAtv()         CanGlobalInterruptDisable()
#define IlLeaveCriticalTrStLgMdAtv()         CanGlobalInterruptRestore()
#define IlEnterCriticalVSELatAcc()           CanGlobalInterruptDisable()
#define IlLeaveCriticalVSELatAcc()           CanGlobalInterruptRestore()
#define IlEnterCriticalVSELatAccV()          CanGlobalInterruptDisable()
#define IlLeaveCriticalVSELatAccV()          CanGlobalInterruptRestore()
#define IlEnterCriticalVSELatAccGroup()      CanGlobalInterruptDisable()
#define IlLeaveCriticalVSELatAccGroup()      CanGlobalInterruptRestore()
#define IlEnterCriticalBrkPdlDrvAppPrsDetcd() CanGlobalInterruptDisable()
#define IlLeaveCriticalBrkPdlDrvAppPrsDetcd() CanGlobalInterruptRestore()
#define IlEnterCriticalBrkPdlDrvAppPrsDetcdV() CanGlobalInterruptDisable()
#define IlLeaveCriticalBrkPdlDrvAppPrsDetcdV() CanGlobalInterruptRestore()
#define IlEnterCriticalBrkPdlDrvAppPrsDetcdGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalBrkPdlDrvAppPrsDetcdGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalVSEAct_0()            CanGlobalInterruptDisable()
#define IlLeaveCriticalVSEAct_0()            CanGlobalInterruptRestore()
#define IlEnterCriticalTracCntrlSysDrIntnt() CanGlobalInterruptDisable()
#define IlLeaveCriticalTracCntrlSysDrIntnt() CanGlobalInterruptRestore()
#define IlEnterCriticalTCSysEnbld()          CanGlobalInterruptDisable()
#define IlLeaveCriticalTCSysEnbld()          CanGlobalInterruptRestore()
#define IlEnterCriticalTCSysAtv()            CanGlobalInterruptDisable()
#define IlLeaveCriticalTCSysAtv()            CanGlobalInterruptRestore()
#define IlEnterCriticalABSFld()              CanGlobalInterruptDisable()
#define IlLeaveCriticalABSFld()              CanGlobalInterruptRestore()
#define IlEnterCriticalABSAtv_0()            CanGlobalInterruptDisable()
#define IlLeaveCriticalABSAtv_0()            CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynYawRate()       CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynYawRate()       CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynYawRateV()      CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynYawRateV()      CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynYawRateGroup()  CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynYawRateGroup()  CanGlobalInterruptRestore()
#define IlEnterCriticalVhDynCntlSysSt()      CanGlobalInterruptDisable()
#define IlLeaveCriticalVhDynCntlSysSt()      CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynOvrUndrStr_0()  CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynOvrUndrStr_0()  CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynOvrUndrStrV_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynOvrUndrStrV_0() CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynOvrUndrStrGroup_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynOvrUndrStrGroup_0() CanGlobalInterruptRestore()
#define IlEnterCriticalLKATODC_TrqVl()       CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATODC_TrqVl()       CanGlobalInterruptRestore()
#define IlEnterCriticalLKATODC_TrqRqAct()    CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATODC_TrqRqAct()    CanGlobalInterruptRestore()
#define IlEnterCriticalLKATqOvrDltCmd()      CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATqOvrDltCmd()      CanGlobalInterruptRestore()
#define IlEnterCriticalLKATqOvrDltCmdRC()    CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATqOvrDltCmdRC()    CanGlobalInterruptRestore()
#define IlEnterCriticalLKATqOvrDltCmdPrtVl() CanGlobalInterruptDisable()
#define IlLeaveCriticalLKATqOvrDltCmdPrtVl() CanGlobalInterruptRestore()
#define IlEnterCriticalVehStabEnhmntStat_0() CanGlobalInterruptDisable()
#define IlLeaveCriticalVehStabEnhmntStat_0() CanGlobalInterruptRestore()
#define IlEnterCriticalTCSysOpMd()           CanGlobalInterruptDisable()
#define IlLeaveCriticalTCSysOpMd()           CanGlobalInterruptRestore()
#define IlEnterCriticalEngSpdStat()          CanGlobalInterruptDisable()
#define IlLeaveCriticalEngSpdStat()          CanGlobalInterruptRestore()
#define IlEnterCriticalPT_CrnkAct()          CanGlobalInterruptDisable()
#define IlLeaveCriticalPT_CrnkAct()          CanGlobalInterruptRestore()
#define IlEnterCriticalEngRunAtv()           CanGlobalInterruptDisable()
#define IlLeaveCriticalEngRunAtv()           CanGlobalInterruptRestore()
#define IlEnterCriticalEngSpd()              CanGlobalInterruptDisable()
#define IlLeaveCriticalEngSpd()              CanGlobalInterruptRestore()
#define IlEnterCriticalEng12vStrtrMtrCmmdOn() CanGlobalInterruptDisable()
#define IlLeaveCriticalEng12vStrtrMtrCmmdOn() CanGlobalInterruptRestore()
#define IlEnterCriticalWRSLNDWhlDistPCntr()  CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSLNDWhlDistPCntr()  CanGlobalInterruptRestore()
#define IlEnterCriticalWRSLNDWhlDistVal()    CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSLNDWhlDistVal()    CanGlobalInterruptRestore()
#define IlEnterCriticalWRSLNDWhlRotStRst()   CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSLNDWhlRotStRst()   CanGlobalInterruptRestore()
#define IlEnterCriticalWRSLNDSeqNum()        CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSLNDSeqNum()        CanGlobalInterruptRestore()
#define IlEnterCriticalWRSLNDWhlDisTpRC()    CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSLNDWhlDisTpRC()    CanGlobalInterruptRestore()
#define IlEnterCriticalWRSLNDWhlDistTstm()   CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSLNDWhlDistTstm()   CanGlobalInterruptRestore()
#define IlEnterCriticalWhlRotStatLftNDrvn()  CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlRotStatLftNDrvn()  CanGlobalInterruptRestore()
#define IlEnterCriticalWRSRNDWhlDistPCntr()  CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSRNDWhlDistPCntr()  CanGlobalInterruptRestore()
#define IlEnterCriticalWRSRNDWhlDistVal()    CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSRNDWhlDistVal()    CanGlobalInterruptRestore()
#define IlEnterCriticalWRSRNDWhlRotStRst()   CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSRNDWhlRotStRst()   CanGlobalInterruptRestore()
#define IlEnterCriticalWRSRNDSeqNum()        CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSRNDSeqNum()        CanGlobalInterruptRestore()
#define IlEnterCriticalWRSRNDWhlDisTpRC()    CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSRNDWhlDisTpRC()    CanGlobalInterruptRestore()
#define IlEnterCriticalWRSRNDWhlDistTstm()   CanGlobalInterruptDisable()
#define IlLeaveCriticalWRSRNDWhlDistTstm()   CanGlobalInterruptRestore()
#define IlEnterCriticalWhlRotStatRghtNDrvn() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlRotStatRghtNDrvn() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftNnDrvn_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftNnDrvn_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftNnDrvnV_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftNnDrvnV_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftNnDrvnGroup_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftNnDrvnGroup_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtNnDrvn_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtNnDrvn_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtNnDrvnV_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtNnDrvnV_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtNnDrvnGroup_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtNnDrvnGroup_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlPlsPerRevNonDrvn_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlPlsPerRevNonDrvn_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftDrvn_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftDrvn_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftDrvnV_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftDrvnV_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyLftDrvnGroup_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyLftDrvnGroup_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtDrvn_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtDrvn_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtDrvnV_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtDrvnV_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlGrndVlctyRtDrvnGroup_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlGrndVlctyRtDrvnGroup_1() CanGlobalInterruptRestore()
#define IlEnterCriticalWhlPlsPerRevDrvn_1()  CanGlobalInterruptDisable()
#define IlLeaveCriticalWhlPlsPerRevDrvn_1()  CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlTctlFdbkReqActRC() CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlTctlFdbkReqActRC() CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlTctlFdbkReqAct() CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlTctlFdbkReqAct() CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlTctlFdbkReqActProtVal() CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlTctlFdbkReqActProtVal() CanGlobalInterruptRestore()
#define IlEnterCriticalSWAR_ReqActV()        CanGlobalInterruptDisable()
#define IlLeaveCriticalSWAR_ReqActV()        CanGlobalInterruptRestore()
#define IlEnterCriticalSWAR_ReqAct()         CanGlobalInterruptDisable()
#define IlLeaveCriticalSWAR_ReqAct()         CanGlobalInterruptRestore()
#define IlEnterCriticalSWAR_TrgtAng()        CanGlobalInterruptDisable()
#define IlLeaveCriticalSWAR_TrgtAng()        CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlAngReq()        CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlAngReq()        CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlAngReqPrtVal()  CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlAngReqPrtVal()  CanGlobalInterruptRestore()
#define IlEnterCriticalStrWhlAngReqARC()     CanGlobalInterruptDisable()
#define IlLeaveCriticalStrWhlAngReqARC()     CanGlobalInterruptRestore()
#define IlEnterCriticalVSEAct_1()            CanGlobalInterruptDisable()
#define IlLeaveCriticalVSEAct_1()            CanGlobalInterruptRestore()
#define IlEnterCriticalVSELongAccLoResV()    CanGlobalInterruptDisable()
#define IlLeaveCriticalVSELongAccLoResV()    CanGlobalInterruptRestore()
#define IlEnterCriticalVSELongAccLoRes()     CanGlobalInterruptDisable()
#define IlLeaveCriticalVSELongAccLoRes()     CanGlobalInterruptRestore()
#define IlEnterCriticalVSELongAccLoResGroup() CanGlobalInterruptDisable()
#define IlLeaveCriticalVSELongAccLoResGroup() CanGlobalInterruptRestore()
#define IlEnterCriticalVehStabEnhmntStat_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalVehStabEnhmntStat_1() CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynOvrUndrStr_1()  CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynOvrUndrStr_1()  CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynOvrUndrStrV_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynOvrUndrStrV_1() CanGlobalInterruptRestore()
#define IlEnterCriticalVehDynOvrUndrStrGroup_1() CanGlobalInterruptDisable()
#define IlLeaveCriticalVehDynOvrUndrStrGroup_1() CanGlobalInterruptRestore()
#define IlEnterCriticalTqOvrDltTqCmdVl()     CanGlobalInterruptDisable()
#define IlLeaveCriticalTqOvrDltTqCmdVl()     CanGlobalInterruptRestore()
#define IlEnterCriticalTqOvrDltTqCmdAct()    CanGlobalInterruptDisable()
#define IlLeaveCriticalTqOvrDltTqCmdAct()    CanGlobalInterruptRestore()
#define IlEnterCriticalTrqOvrlARC()          CanGlobalInterruptDisable()
#define IlLeaveCriticalTrqOvrlARC()          CanGlobalInterruptRestore()
#define IlEnterCriticalTrqOvrlCmdChksm()     CanGlobalInterruptDisable()
#define IlLeaveCriticalTrqOvrlCmdChksm()     CanGlobalInterruptRestore()


/* -----------------------------------------------------------------------------
    &&&~ Access to Indication flags
 ----------------------------------------------------------------------------- */

#define IlGetWhlRotStatLftNDrvnIndication()  (((vuint8) (ilRxIndicationFlags[0] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlGetTqOvrDltTqCmdVlIndication()     (((vuint8) (ilRxIndicationFlags[1] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlSetWhlRotStatLftNDrvnIndication()  (ilRxIndicationFlags[0] |= (vuint8) 0x01)
#define IlSetTqOvrDltTqCmdVlIndication()     (ilRxIndicationFlags[1] |= (vuint8) 0x01)
#define IlClrWhlRotStatLftNDrvnIndication()  (ilRxIndicationFlags[0] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlClrTqOvrDltTqCmdVlIndication()     (ilRxIndicationFlags[1] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlGetClrWhlRotStatLftNDrvnIndication() IlGetSignalIndicationFlag(0)
#define IlGetClrTqOvrDltTqCmdVlIndication()  IlGetSignalIndicationFlag(1)


/* -----------------------------------------------------------------------------
    &&&~ Access to RxTimeout flags
 ----------------------------------------------------------------------------- */

#define IlGetWhlRotStatTmstmpResRxTimeout()  (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlGetEngOilTmpRxTimeout()            (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x02)) != (vuint8) 0x00)
#define IlGetOtsAirTmpCrValRxTimeout()       (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x04)) != (vuint8) 0x00)
#define IlGetWhlGrndVlctyRtNnDrvn_0RxTimeout() (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x08)) != (vuint8) 0x00)
#define IlGetWhlRotDrctnlSRtNDrvnRxTimeout() (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x10)) != (vuint8) 0x00)
#define IlGetWhlRotDrctnlStLfNDrvnRxTimeout() (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x20)) != (vuint8) 0x00)
#define IlGetWhlGrndVlctyRtDrvn_0RxTimeout() (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x40)) != (vuint8) 0x00)
#define IlGetWhlRotDrctnlStRtDrvnRxTimeout() (((vuint8) (ilRxTimeoutFlags[0] & (vuint8) 0x80)) != (vuint8) 0x00)
#define IlGetWhlRotDrctnlStLftDrvnRxTimeout() (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlGetStgSysPerfMdRqRxTimeout()       (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x02)) != (vuint8) 0x00)
#define IlGetAutoBrkngAvlblRxTimeout()       (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x04)) != (vuint8) 0x00)
#define IlGetRedntVSEActRxTimeout()          (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x08)) != (vuint8) 0x00)
#define IlGetABSActvProtRxTimeout()          (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x10)) != (vuint8) 0x00)
#define IlGetTrnsShftLvrPosRxTimeout()       (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x20)) != (vuint8) 0x00)
#define IlGetSysPwrMdRxTimeout()             (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x40)) != (vuint8) 0x00)
#define IlGetVSELatAccRxTimeout()            (((vuint8) (ilRxTimeoutFlags[1] & (vuint8) 0x80)) != (vuint8) 0x00)
#define IlGetBrkPdlDrvAppPrsDetcdRxTimeout() (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlGetTracCntrlSysDrIntntRxTimeout()  (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x02)) != (vuint8) 0x00)
#define IlGetVehDynOvrUndrStr_0RxTimeout()   (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x04)) != (vuint8) 0x00)
#define IlGetLKATODC_TrqVlRxTimeout()        (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x08)) != (vuint8) 0x00)
#define IlGetLKATODC_TrqRqActRxTimeout()     (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x10)) != (vuint8) 0x00)
#define IlGetLKATqOvrDltCmdRCRxTimeout()     (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x20)) != (vuint8) 0x00)
#define IlGetLKATqOvrDltCmdPrtVlRxTimeout()  (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x40)) != (vuint8) 0x00)
#define IlGetVehStabEnhmntStat_0RxTimeout()  (((vuint8) (ilRxTimeoutFlags[2] & (vuint8) 0x80)) != (vuint8) 0x00)
#define IlGetTCSysOpMdRxTimeout()            (((vuint8) (ilRxTimeoutFlags[3] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlGetEngSpdStatRxTimeout()           (((vuint8) (ilRxTimeoutFlags[3] & (vuint8) 0x02)) != (vuint8) 0x00)
#define IlGetPT_CrnkActRxTimeout()           (((vuint8) (ilRxTimeoutFlags[3] & (vuint8) 0x04)) != (vuint8) 0x00)
#define IlGetEngRunAtvRxTimeout()            (((vuint8) (ilRxTimeoutFlags[3] & (vuint8) 0x08)) != (vuint8) 0x00)
#define IlGetEngSpdRxTimeout()               (((vuint8) (ilRxTimeoutFlags[3] & (vuint8) 0x10)) != (vuint8) 0x00)
#define IlGetEng12vStrtrMtrCmmdOnRxTimeout() (((vuint8) (ilRxTimeoutFlags[3] & (vuint8) 0x20)) != (vuint8) 0x00)
#define IlGetWhlGrndVlctyLftNnDrvn_1RxTimeout() (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlGetWhlGrndVlctyRtNnDrvn_1RxTimeout() (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x02)) != (vuint8) 0x00)
#define IlGetWhlPlsPerRevNonDrvn_1RxTimeout() (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x04)) != (vuint8) 0x00)
#define IlGetWhlGrndVlctyLftDrvn_1RxTimeout() (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x08)) != (vuint8) 0x00)
#define IlGetWhlGrndVlctyRtDrvn_1RxTimeout() (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x10)) != (vuint8) 0x00)
#define IlGetWhlPlsPerRevDrvn_1RxTimeout()   (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x20)) != (vuint8) 0x00)
#define IlGetStrWhlTctlFdbkReqActProtValRxTimeout() (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x40)) != (vuint8) 0x00)
#define IlGetSWAR_ReqActVRxTimeout()         (((vuint8) (ilRxTimeoutFlags[4] & (vuint8) 0x80)) != (vuint8) 0x00)
#define IlGetSWAR_ReqActRxTimeout()          (((vuint8) (ilRxTimeoutFlags[5] & (vuint8) 0x01)) != (vuint8) 0x00)
#define IlGetSWAR_TrgtAngRxTimeout()         (((vuint8) (ilRxTimeoutFlags[5] & (vuint8) 0x02)) != (vuint8) 0x00)
#define IlGetStrWhlAngReqPrtValRxTimeout()   (((vuint8) (ilRxTimeoutFlags[5] & (vuint8) 0x04)) != (vuint8) 0x00)
#define IlGetStrWhlAngReqARCRxTimeout()      (((vuint8) (ilRxTimeoutFlags[5] & (vuint8) 0x08)) != (vuint8) 0x00)
#define IlGetVSEAct_1RxTimeout()             (((vuint8) (ilRxTimeoutFlags[5] & (vuint8) 0x10)) != (vuint8) 0x00)
#define IlGetVehDynOvrUndrStr_1RxTimeout()   (((vuint8) (ilRxTimeoutFlags[5] & (vuint8) 0x20)) != (vuint8) 0x00)
#define IlSetWhlRotStatTmstmpResRxTimeout()  (ilRxTimeoutFlags[0] |= (vuint8) 0x01)
#define IlSetEngOilTmpRxTimeout()            (ilRxTimeoutFlags[0] |= (vuint8) 0x02)
#define IlSetOtsAirTmpCrValRxTimeout()       (ilRxTimeoutFlags[0] |= (vuint8) 0x04)
#define IlSetWhlGrndVlctyRtNnDrvn_0RxTimeout() (ilRxTimeoutFlags[0] |= (vuint8) 0x08)
#define IlSetWhlRotDrctnlSRtNDrvnRxTimeout() (ilRxTimeoutFlags[0] |= (vuint8) 0x10)
#define IlSetWhlRotDrctnlStLfNDrvnRxTimeout() (ilRxTimeoutFlags[0] |= (vuint8) 0x20)
#define IlSetWhlGrndVlctyRtDrvn_0RxTimeout() (ilRxTimeoutFlags[0] |= (vuint8) 0x40)
#define IlSetWhlRotDrctnlStRtDrvnRxTimeout() (ilRxTimeoutFlags[0] |= (vuint8) 0x80)
#define IlSetWhlRotDrctnlStLftDrvnRxTimeout() (ilRxTimeoutFlags[1] |= (vuint8) 0x01)
#define IlSetStgSysPerfMdRqRxTimeout()       (ilRxTimeoutFlags[1] |= (vuint8) 0x02)
#define IlSetAutoBrkngAvlblRxTimeout()       (ilRxTimeoutFlags[1] |= (vuint8) 0x04)
#define IlSetRedntVSEActRxTimeout()          (ilRxTimeoutFlags[1] |= (vuint8) 0x08)
#define IlSetABSActvProtRxTimeout()          (ilRxTimeoutFlags[1] |= (vuint8) 0x10)
#define IlSetTrnsShftLvrPosRxTimeout()       (ilRxTimeoutFlags[1] |= (vuint8) 0x20)
#define IlSetSysPwrMdRxTimeout()             (ilRxTimeoutFlags[1] |= (vuint8) 0x40)
#define IlSetVSELatAccRxTimeout()            (ilRxTimeoutFlags[1] |= (vuint8) 0x80)
#define IlSetBrkPdlDrvAppPrsDetcdRxTimeout() (ilRxTimeoutFlags[2] |= (vuint8) 0x01)
#define IlSetTracCntrlSysDrIntntRxTimeout()  (ilRxTimeoutFlags[2] |= (vuint8) 0x02)
#define IlSetVehDynOvrUndrStr_0RxTimeout()   (ilRxTimeoutFlags[2] |= (vuint8) 0x04)
#define IlSetLKATODC_TrqVlRxTimeout()        (ilRxTimeoutFlags[2] |= (vuint8) 0x08)
#define IlSetLKATODC_TrqRqActRxTimeout()     (ilRxTimeoutFlags[2] |= (vuint8) 0x10)
#define IlSetLKATqOvrDltCmdRCRxTimeout()     (ilRxTimeoutFlags[2] |= (vuint8) 0x20)
#define IlSetLKATqOvrDltCmdPrtVlRxTimeout()  (ilRxTimeoutFlags[2] |= (vuint8) 0x40)
#define IlSetVehStabEnhmntStat_0RxTimeout()  (ilRxTimeoutFlags[2] |= (vuint8) 0x80)
#define IlSetTCSysOpMdRxTimeout()            (ilRxTimeoutFlags[3] |= (vuint8) 0x01)
#define IlSetEngSpdStatRxTimeout()           (ilRxTimeoutFlags[3] |= (vuint8) 0x02)
#define IlSetPT_CrnkActRxTimeout()           (ilRxTimeoutFlags[3] |= (vuint8) 0x04)
#define IlSetEngRunAtvRxTimeout()            (ilRxTimeoutFlags[3] |= (vuint8) 0x08)
#define IlSetEngSpdRxTimeout()               (ilRxTimeoutFlags[3] |= (vuint8) 0x10)
#define IlSetEng12vStrtrMtrCmmdOnRxTimeout() (ilRxTimeoutFlags[3] |= (vuint8) 0x20)
#define IlSetWhlGrndVlctyLftNnDrvn_1RxTimeout() (ilRxTimeoutFlags[4] |= (vuint8) 0x01)
#define IlSetWhlGrndVlctyRtNnDrvn_1RxTimeout() (ilRxTimeoutFlags[4] |= (vuint8) 0x02)
#define IlSetWhlPlsPerRevNonDrvn_1RxTimeout() (ilRxTimeoutFlags[4] |= (vuint8) 0x04)
#define IlSetWhlGrndVlctyLftDrvn_1RxTimeout() (ilRxTimeoutFlags[4] |= (vuint8) 0x08)
#define IlSetWhlGrndVlctyRtDrvn_1RxTimeout() (ilRxTimeoutFlags[4] |= (vuint8) 0x10)
#define IlSetWhlPlsPerRevDrvn_1RxTimeout()   (ilRxTimeoutFlags[4] |= (vuint8) 0x20)
#define IlSetStrWhlTctlFdbkReqActProtValRxTimeout() (ilRxTimeoutFlags[4] |= (vuint8) 0x40)
#define IlSetSWAR_ReqActVRxTimeout()         (ilRxTimeoutFlags[4] |= (vuint8) 0x80)
#define IlSetSWAR_ReqActRxTimeout()          (ilRxTimeoutFlags[5] |= (vuint8) 0x01)
#define IlSetSWAR_TrgtAngRxTimeout()         (ilRxTimeoutFlags[5] |= (vuint8) 0x02)
#define IlSetStrWhlAngReqPrtValRxTimeout()   (ilRxTimeoutFlags[5] |= (vuint8) 0x04)
#define IlSetStrWhlAngReqARCRxTimeout()      (ilRxTimeoutFlags[5] |= (vuint8) 0x08)
#define IlSetVSEAct_1RxTimeout()             (ilRxTimeoutFlags[5] |= (vuint8) 0x10)
#define IlSetVehDynOvrUndrStr_1RxTimeout()   (ilRxTimeoutFlags[5] |= (vuint8) 0x20)
#define IlClrWhlRotStatTmstmpResRxTimeout()  (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlClrEngOilTmpRxTimeout()            (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0xFD))
#define IlClrOtsAirTmpCrValRxTimeout()       (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0xFB))
#define IlClrWhlGrndVlctyRtNnDrvn_0RxTimeout() (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0xF7))
#define IlClrWhlRotDrctnlSRtNDrvnRxTimeout() (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0xEF))
#define IlClrWhlRotDrctnlStLfNDrvnRxTimeout() (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0xDF))
#define IlClrWhlGrndVlctyRtDrvn_0RxTimeout() (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0xBF))
#define IlClrWhlRotDrctnlStRtDrvnRxTimeout() (ilRxTimeoutFlags[0] &= (vuint8) (0xFF & (vuint8) 0x7F))
#define IlClrWhlRotDrctnlStLftDrvnRxTimeout() (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlClrStgSysPerfMdRqRxTimeout()       (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0xFD))
#define IlClrAutoBrkngAvlblRxTimeout()       (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0xFB))
#define IlClrRedntVSEActRxTimeout()          (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0xF7))
#define IlClrABSActvProtRxTimeout()          (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0xEF))
#define IlClrTrnsShftLvrPosRxTimeout()       (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0xDF))
#define IlClrSysPwrMdRxTimeout()             (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0xBF))
#define IlClrVSELatAccRxTimeout()            (ilRxTimeoutFlags[1] &= (vuint8) (0xFF & (vuint8) 0x7F))
#define IlClrBrkPdlDrvAppPrsDetcdRxTimeout() (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlClrTracCntrlSysDrIntntRxTimeout()  (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0xFD))
#define IlClrVehDynOvrUndrStr_0RxTimeout()   (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0xFB))
#define IlClrLKATODC_TrqVlRxTimeout()        (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0xF7))
#define IlClrLKATODC_TrqRqActRxTimeout()     (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0xEF))
#define IlClrLKATqOvrDltCmdRCRxTimeout()     (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0xDF))
#define IlClrLKATqOvrDltCmdPrtVlRxTimeout()  (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0xBF))
#define IlClrVehStabEnhmntStat_0RxTimeout()  (ilRxTimeoutFlags[2] &= (vuint8) (0xFF & (vuint8) 0x7F))
#define IlClrTCSysOpMdRxTimeout()            (ilRxTimeoutFlags[3] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlClrEngSpdStatRxTimeout()           (ilRxTimeoutFlags[3] &= (vuint8) (0xFF & (vuint8) 0xFD))
#define IlClrPT_CrnkActRxTimeout()           (ilRxTimeoutFlags[3] &= (vuint8) (0xFF & (vuint8) 0xFB))
#define IlClrEngRunAtvRxTimeout()            (ilRxTimeoutFlags[3] &= (vuint8) (0xFF & (vuint8) 0xF7))
#define IlClrEngSpdRxTimeout()               (ilRxTimeoutFlags[3] &= (vuint8) (0xFF & (vuint8) 0xEF))
#define IlClrEng12vStrtrMtrCmmdOnRxTimeout() (ilRxTimeoutFlags[3] &= (vuint8) (0xFF & (vuint8) 0xDF))
#define IlClrWhlGrndVlctyLftNnDrvn_1RxTimeout() (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlClrWhlGrndVlctyRtNnDrvn_1RxTimeout() (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0xFD))
#define IlClrWhlPlsPerRevNonDrvn_1RxTimeout() (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0xFB))
#define IlClrWhlGrndVlctyLftDrvn_1RxTimeout() (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0xF7))
#define IlClrWhlGrndVlctyRtDrvn_1RxTimeout() (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0xEF))
#define IlClrWhlPlsPerRevDrvn_1RxTimeout()   (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0xDF))
#define IlClrStrWhlTctlFdbkReqActProtValRxTimeout() (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0xBF))
#define IlClrSWAR_ReqActVRxTimeout()         (ilRxTimeoutFlags[4] &= (vuint8) (0xFF & (vuint8) 0x7F))
#define IlClrSWAR_ReqActRxTimeout()          (ilRxTimeoutFlags[5] &= (vuint8) (0xFF & (vuint8) 0xFE))
#define IlClrSWAR_TrgtAngRxTimeout()         (ilRxTimeoutFlags[5] &= (vuint8) (0xFF & (vuint8) 0xFD))
#define IlClrStrWhlAngReqPrtValRxTimeout()   (ilRxTimeoutFlags[5] &= (vuint8) (0xFF & (vuint8) 0xFB))
#define IlClrStrWhlAngReqARCRxTimeout()      (ilRxTimeoutFlags[5] &= (vuint8) (0xFF & (vuint8) 0xF7))
#define IlClrVSEAct_1RxTimeout()             (ilRxTimeoutFlags[5] &= (vuint8) (0xFF & (vuint8) 0xEF))
#define IlClrVehDynOvrUndrStr_1RxTimeout()   (ilRxTimeoutFlags[5] &= (vuint8) (0xFF & (vuint8) 0xDF))


/* -----------------------------------------------------------------------------
    &&&~ Declaration Confirmation Functions
 ----------------------------------------------------------------------------- */

/* Application signal confirmation callback functions */


/* -----------------------------------------------------------------------------
    &&&~ Declaration Indication Functions
 ----------------------------------------------------------------------------- */

/* Application signal indication callback functions */


/* -----------------------------------------------------------------------------
    &&&~ Declaration User Timeout Functions
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals smaller or equal 8bit
 ----------------------------------------------------------------------------- */

/* Handle:    1,Name:             WhlPlsPerRevDrvn_0,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlPlsPerRevDrvn_0()          (Wheel_Pulses_HS.Wheel_Pulses_HS.WhlPlsPerRevDrvn_0)
#endif

/* Handle:    2,Name:          WhlPlsPerRevNonDrvn_0,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlPlsPerRevNonDrvn_0()       (Wheel_Pulses_HS.Wheel_Pulses_HS.WhlPlsPerRevNonDrvn_0)
#endif

/* Handle:   10,Name:                    EngOffTmVDA,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEngOffTmVDA()                 (PPEI_Platform_Eng_Cntrl_Requests.PPEI_Platform_Eng_Cntrl_Requests.EngOffTmVDA)
#endif

/* Handle:   14,Name:              OtsAirTmpCrValMsk,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxOtsAirTmpCrValMsk()           (PPEI_Platform_Eng_Cntrl_Requests.PPEI_Platform_Eng_Cntrl_Requests.OtsAirTmpCrValMsk)
#endif

/* Handle:   21,Name:           WhlRotDrctnlSRtNDrvn,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlRotDrctnlSRtNDrvn()        (NonDriven_Wheel_Grnd_Velocity_HS.NonDriven_Wheel_Grnd_Velocity_HS.WhlRotDrctnlSRtNDrvn)
#endif

/* Handle:   22,Name:          WhlRotDrctnlStLfNDrvn,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlRotDrctnlStLfNDrvn()       (NonDriven_Wheel_Grnd_Velocity_HS.NonDriven_Wheel_Grnd_Velocity_HS.WhlRotDrctnlStLfNDrvn)
#endif

/* Handle:   29,Name:           WhlRotDrctnlStRtDrvn,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlRotDrctnlStRtDrvn()        (Driven_Wheel_Grnd_Velocity_HS.Driven_Wheel_Grnd_Velocity_HS.WhlRotDrctnlStRtDrvn)
#endif

/* Handle:   30,Name:          WhlRotDrctnlStLftDrvn,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlRotDrctnlStLftDrvn()       (Driven_Wheel_Grnd_Velocity_HS.Driven_Wheel_Grnd_Velocity_HS.WhlRotDrctnlStLftDrvn)
#endif

/* Handle:   31,Name:                 StgSysPerfMdRq,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxStgSysPerfMdRq()              (Driving_Mode_Control_HS.Driving_Mode_Control_HS.StgSysPerfMdRq)
#endif

/* Handle:   32,Name:                DrvMdCntrlState,Size:  8,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxDrvMdCntrlState()             (Driving_Mode_Control_HS.Driving_Mode_Control_HS.DrvMdCntrlState)
#endif

/* Handle:   33,Name:                 AutoBrkngAvlbl,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxAutoBrkngAvlbl()              (Brake_Pedal_Driver_Status_HS.Brake_Pedal_Driver_Status_HS.AutoBrkngAvlbl)
#endif

/* Handle:   34,Name:                 RedntVSEActARC,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxRedntVSEActARC()              (Brake_Pedal_Driver_Status_HS.Brake_Pedal_Driver_Status_HS.RedntVSEActARC)
#endif

/* Handle:   35,Name:                    RedntVSEAct,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxRedntVSEAct()                 (Brake_Pedal_Driver_Status_HS.Brake_Pedal_Driver_Status_HS.RedntVSEAct)
#endif

/* Handle:   36,Name:                ABSActvProtPVal,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxABSActvProtPVal()             (Brake_Pedal_Driver_Status_HS.Brake_Pedal_Driver_Status_HS.ABSActvProtPVal)
#endif

/* Handle:   37,Name:                 ABSActvProtARC,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxABSActvProtARC()              (Brake_Pedal_Driver_Status_HS.Brake_Pedal_Driver_Status_HS.ABSActvProtARC)
#endif

/* Handle:   38,Name:                    ABSActvProt,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxABSActvProt()                 (Brake_Pedal_Driver_Status_HS.Brake_Pedal_Driver_Status_HS.ABSActvProt)
#endif

/* Handle:   45,Name:             TrnShftPtrnActStat,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTrnShftPtrnActStat()          (PPEI_Trans_General_Status_2.PPEI_Trans_General_Status_2.TrnShftPtrnActStat)
#endif

/* Handle:   46,Name:                       SysPwrMd,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxSysPwrMd()                    (PPEI_Platform_General_Status.PPEI_Platform_General_Status.SysPwrMd)
#endif

/* Handle:   47,Name:                   SysBkUpPwrMd,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxSysBkUpPwrMd()                (PPEI_Platform_General_Status.PPEI_Platform_General_Status.SysBkUpPwrMd)
#endif

/* Handle:   48,Name:                 SysBkupPwrMdEn,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxSysBkupPwrMdEn()              (PPEI_Platform_General_Status.PPEI_Platform_General_Status.SysBkupPwrMdEn)
#endif

/* Handle:   51,Name:                    TrStLgMdAtv,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTrStLgMdAtv()                 (PPEI_Platform_General_Status.PPEI_Platform_General_Status.TrStLgMdAtv)
#endif

/* Handle:   58,Name:                       VSEAct_0,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVSEAct_0()                    (PPEI_Chassis_General_Status_1.PPEI_Chassis_General_Status_1.VSEAct_0)
#endif

/* Handle:   59,Name:            TracCntrlSysDrIntnt,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTracCntrlSysDrIntnt()         (PPEI_Chassis_General_Status_1.PPEI_Chassis_General_Status_1.TracCntrlSysDrIntnt)
#endif

/* Handle:   60,Name:                     TCSysEnbld,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTCSysEnbld()                  (PPEI_Chassis_General_Status_1.PPEI_Chassis_General_Status_1.TCSysEnbld)
#endif

/* Handle:   61,Name:                       TCSysAtv,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTCSysAtv()                    (PPEI_Chassis_General_Status_1.PPEI_Chassis_General_Status_1.TCSysAtv)
#endif

/* Handle:   62,Name:                         ABSFld,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxABSFld()                      (PPEI_Chassis_General_Status_1.PPEI_Chassis_General_Status_1.ABSFld)
#endif

/* Handle:   63,Name:                       ABSAtv_0,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxABSAtv_0()                    (PPEI_Chassis_General_Status_1.PPEI_Chassis_General_Status_1.ABSAtv_0)
#endif

/* Handle:   67,Name:                 VhDynCntlSysSt,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVhDynCntlSysSt()              (PPEI_Chassis_General_Status_1.PPEI_Chassis_General_Status_1.VhDynCntlSysSt)
#endif

/* Handle:   74,Name:               LKATqOvrDltCmdRC,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxLKATqOvrDltCmdRC()            (LKA_Steering_Torque_Cmd_HS.LKA_Steering_Torque_Cmd_HS.LKATqOvrDltCmdRC)
#endif

/* Handle:   76,Name:            VehStabEnhmntStat_0,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehStabEnhmntStat_0()         (Antilock_Brake_and_TC_Status_HS.Antilock_Brake_and_TC_Status_HS.VehStabEnhmntStat_0)
#endif

/* Handle:   77,Name:                      TCSysOpMd,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTCSysOpMd()                   (Antilock_Brake_and_TC_Status_HS.Antilock_Brake_and_TC_Status_HS.TCSysOpMd)
#endif

/* Handle:   78,Name:                     EngSpdStat,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEngSpdStat()                  (PPEI_Engine_General_Status_1.PPEI_Engine_General_Status_1.EngSpdStat)
#endif

/* Handle:   79,Name:                     PT_CrnkAct,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxPT_CrnkAct()                  (PPEI_Engine_General_Status_1.PPEI_Engine_General_Status_1.PT_CrnkAct)
#endif

/* Handle:   80,Name:                      EngRunAtv,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEngRunAtv()                   (PPEI_Engine_General_Status_1.PPEI_Engine_General_Status_1.EngRunAtv)
#endif

/* Handle:   82,Name:           Eng12vStrtrMtrCmmdOn,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEng12vStrtrMtrCmmdOn()        (PPEI_Engine_General_Status_1.PPEI_Engine_General_Status_1.Eng12vStrtrMtrCmmdOn)
#endif

/* Handle:  103,Name:          WhlPlsPerRevNonDrvn_1,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlPlsPerRevNonDrvn_1()       (NonDriven_Wheel_Grnd_Velocity_CE.NonDriven_Wheel_Grnd_Velocity_CE.WhlPlsPerRevNonDrvn_1)
#endif

/* Handle:  110,Name:             WhlPlsPerRevDrvn_1,Size:  7,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlPlsPerRevDrvn_1()          (Driven_Wheel_Grnd_Velocity_CE.Driven_Wheel_Grnd_Velocity_CE.WhlPlsPerRevDrvn_1)
#endif

/* Handle:  111,Name:         StrWhlTctlFdbkReqActRC,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxStrWhlTctlFdbkReqActRC()      (Park_Assist_Parallel_CE.Park_Assist_Parallel_CE.StrWhlTctlFdbkReqActRC)
#endif

/* Handle:  112,Name:           StrWhlTctlFdbkReqAct,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxStrWhlTctlFdbkReqAct()        (Park_Assist_Parallel_CE.Park_Assist_Parallel_CE.StrWhlTctlFdbkReqAct)
#endif

/* Handle:  113,Name:    StrWhlTctlFdbkReqActProtVal,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxStrWhlTctlFdbkReqActProtVal() (Park_Assist_Parallel_CE.Park_Assist_Parallel_CE.StrWhlTctlFdbkReqActProtVal)
#endif

/* Handle:  119,Name:                StrWhlAngReqARC,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxStrWhlAngReqARC()             (Park_Assist_Parallel_CE.Park_Assist_Parallel_CE.StrWhlAngReqARC)
#endif

/* Handle:  120,Name:                       VSEAct_1,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVSEAct_1()                    (Vehicle_Dynamics_ESC_Hyb_CE.Vehicle_Dynamics_ESC_Hyb_CE.VSEAct_1)
#endif

/* Handle:  124,Name:            VehStabEnhmntStat_1,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehStabEnhmntStat_1()         (Vehicle_Dynamics_ESC_Hyb_CE.Vehicle_Dynamics_ESC_Hyb_CE.VehStabEnhmntStat_1)
#endif

/* Handle:  129,Name:               TqOvrDltTqCmdAct,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTqOvrDltTqCmdAct()            (Steering_Torque_Command_CE.Steering_Torque_Command_CE.TqOvrDltTqCmdAct)
#endif

/* Handle:  130,Name:                     TrqOvrlARC,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTrqOvrlARC()                  (Steering_Torque_Command_CE.Steering_Torque_Command_CE.TrqOvrlARC)
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals smaller or equal 8bit Redefine
 ----------------------------------------------------------------------------- */

/* Handle:    4,Name:                     EngOilTmpV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEngOilTmpV()                  (IlGetRxEngOilTmpVShadowBuffer(&EngOilTmpGroup))
#endif

/* Handle:    5,Name:                      EngOilTmp,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEngOilTmp()                   (IlGetRxEngOilTmpShadowBuffer(&EngOilTmpGroup))
#endif

/* Handle:    7,Name:                EngOffTmExtRngV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEngOffTmExtRngV()             (IlGetRxEngOffTmExtRngVShadowBuffer(&EngOffTmExtRngGroup))
#endif

/* Handle:    8,Name:                 EngOffTmExtRng,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxEngOffTmExtRng()              (IlGetRxEngOffTmExtRngShadowBuffer(&EngOffTmExtRngGroup))
#endif

/* Handle:   11,Name:                OtsAirTmpCrValV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxOtsAirTmpCrValV()             (IlGetRxOtsAirTmpCrValVShadowBuffer(&OtsAirTmpCrValGroup))
#endif

/* Handle:   12,Name:                 OtsAirTmpCrVal,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxOtsAirTmpCrVal()              (IlGetRxOtsAirTmpCrValShadowBuffer(&OtsAirTmpCrValGroup))
#endif

/* Handle:   16,Name:       WhlGrndVlctyLftNnDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftNnDrvnV_0()    (IlGetRxWhlGrndVlctyLftNnDrvnV_0ShadowBuffer(&WhlGrndVlctyLftNnDrvnGroup_0))
#endif

/* Handle:   19,Name:        WhlGrndVlctyRtNnDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtNnDrvnV_0()     (IlGetRxWhlGrndVlctyRtNnDrvnV_0ShadowBuffer(&WhlGrndVlctyRtNnDrvnGroup_0))
#endif

/* Handle:   24,Name:         WhlGrndVlctyLftDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftDrvnV_0()      (IlGetRxWhlGrndVlctyLftDrvnV_0ShadowBuffer(&WhlGrndVlctyLftDrvnGroup_0))
#endif

/* Handle:   27,Name:          WhlGrndVlctyRtDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtDrvnV_0()       (IlGetRxWhlGrndVlctyRtDrvnV_0ShadowBuffer(&WhlGrndVlctyRtDrvnGroup_0))
#endif

/* Handle:   39,Name:                   TransEstGear,Size:  4,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTransEstGear()                (IlGetRxTransEstGearShadowBuffer(&TransEstGearGroup))
#endif

/* Handle:   40,Name:                  TransEstGearV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTransEstGearV()               (IlGetRxTransEstGearVShadowBuffer(&TransEstGearGroup))
#endif

/* Handle:   42,Name:                 TrnsShftLvrPos,Size:  4,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTrnsShftLvrPos()              (IlGetRxTrnsShftLvrPosShadowBuffer(&TrnsShftLvrPosGroup))
#endif

/* Handle:   43,Name:                TrnsShftLvrPosV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxTrnsShftLvrPosV()             (IlGetRxTrnsShftLvrPosVShadowBuffer(&TrnsShftLvrPosGroup))
#endif

/* Handle:   49,Name:             BkupPwrModeMstrVDA,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxBkupPwrModeMstrVDA()          (IlGetRxBkupPwrModeMstrVDAShadowBuffer(&BkupPwrModeMstrGroup))
#endif

/* Handle:   53,Name:                     VSELatAccV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVSELatAccV()                  (IlGetRxVSELatAccVShadowBuffer(&VSELatAccGroup))
#endif

/* Handle:   55,Name:           BrkPdlDrvAppPrsDetcd,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxBrkPdlDrvAppPrsDetcd()        (IlGetRxBrkPdlDrvAppPrsDetcdShadowBuffer(&BrkPdlDrvAppPrsDetcdGroup))
#endif

/* Handle:   56,Name:          BrkPdlDrvAppPrsDetcdV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxBrkPdlDrvAppPrsDetcdV()       (IlGetRxBrkPdlDrvAppPrsDetcdVShadowBuffer(&BrkPdlDrvAppPrsDetcdGroup))
#endif

/* Handle:   65,Name:                 VehDynYawRateV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehDynYawRateV()              (IlGetRxVehDynYawRateVShadowBuffer(&VehDynYawRateGroup))
#endif

/* Handle:   69,Name:            VehDynOvrUndrStrV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehDynOvrUndrStrV_0()         (IlGetRxVehDynOvrUndrStrV_0ShadowBuffer(&VehDynOvrUndrStrGroup_0))
#endif

/* Handle:   72,Name:               LKATODC_TrqRqAct,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxLKATODC_TrqRqAct()            (IlGetRxLKATODC_TrqRqActShadowBuffer(&LKATqOvrDltCmd))
#endif

/* Handle:   84,Name:               WRSLNDWhlDistVal,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSLNDWhlDistVal()            (IlGetRxWRSLNDWhlDistValShadowBuffer(&WhlRotStatLftNDrvn))
#endif

/* Handle:   85,Name:              WRSLNDWhlRotStRst,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSLNDWhlRotStRst()           (IlGetRxWRSLNDWhlRotStRstShadowBuffer(&WhlRotStatLftNDrvn))
#endif

/* Handle:   86,Name:                   WRSLNDSeqNum,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSLNDSeqNum()                (IlGetRxWRSLNDSeqNumShadowBuffer(&WhlRotStatLftNDrvn))
#endif

/* Handle:   87,Name:               WRSLNDWhlDisTpRC,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSLNDWhlDisTpRC()            (IlGetRxWRSLNDWhlDisTpRCShadowBuffer(&WhlRotStatLftNDrvn))
#endif

/* Handle:   91,Name:               WRSRNDWhlDistVal,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSRNDWhlDistVal()            (IlGetRxWRSRNDWhlDistValShadowBuffer(&WhlRotStatRghtNDrvn))
#endif

/* Handle:   92,Name:              WRSRNDWhlRotStRst,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSRNDWhlRotStRst()           (IlGetRxWRSRNDWhlRotStRstShadowBuffer(&WhlRotStatRghtNDrvn))
#endif

/* Handle:   93,Name:                   WRSRNDSeqNum,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSRNDSeqNum()                (IlGetRxWRSRNDSeqNumShadowBuffer(&WhlRotStatRghtNDrvn))
#endif

/* Handle:   94,Name:               WRSRNDWhlDisTpRC,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSRNDWhlDisTpRC()            (IlGetRxWRSRNDWhlDisTpRCShadowBuffer(&WhlRotStatRghtNDrvn))
#endif

/* Handle:   98,Name:       WhlGrndVlctyLftNnDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftNnDrvnV_1()    (IlGetRxWhlGrndVlctyLftNnDrvnV_1ShadowBuffer(&WhlGrndVlctyLftNnDrvnGroup_1))
#endif

/* Handle:  101,Name:        WhlGrndVlctyRtNnDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtNnDrvnV_1()     (IlGetRxWhlGrndVlctyRtNnDrvnV_1ShadowBuffer(&WhlGrndVlctyRtNnDrvnGroup_1))
#endif

/* Handle:  105,Name:         WhlGrndVlctyLftDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftDrvnV_1()      (IlGetRxWhlGrndVlctyLftDrvnV_1ShadowBuffer(&WhlGrndVlctyLftDrvnGroup_1))
#endif

/* Handle:  108,Name:          WhlGrndVlctyRtDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtDrvnV_1()       (IlGetRxWhlGrndVlctyRtDrvnV_1ShadowBuffer(&WhlGrndVlctyRtDrvnGroup_1))
#endif

/* Handle:  114,Name:                   SWAR_ReqActV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxSWAR_ReqActV()                (IlGetRxSWAR_ReqActVShadowBuffer(&StrWhlAngReq))
#endif

/* Handle:  115,Name:                    SWAR_ReqAct,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxSWAR_ReqAct()                 (IlGetRxSWAR_ReqActShadowBuffer(&StrWhlAngReq))
#endif

/* Handle:  121,Name:               VSELongAccLoResV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVSELongAccLoResV()            (IlGetRxVSELongAccLoResVShadowBuffer(&VSELongAccLoResGroup))
#endif

/* Handle:  126,Name:            VehDynOvrUndrStrV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehDynOvrUndrStrV_1()         (IlGetRxVehDynOvrUndrStrV_1ShadowBuffer(&VehDynOvrUndrStrGroup_1))
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Partial Signal Access for signals smaller or equal 8bit
 ----------------------------------------------------------------------------- */

/* Handle:    4,Name:                     EngOilTmpV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxEngOilTmpVShadowBuffer(_c_EngOilTmpGroup_buf* pBuffer);
#endif

/* Handle:    5,Name:                      EngOilTmp,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxEngOilTmpShadowBuffer(_c_EngOilTmpGroup_buf* pBuffer);
#endif

/* Handle:    7,Name:                EngOffTmExtRngV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxEngOffTmExtRngVShadowBuffer(_c_EngOffTmExtRngGroup_buf* pBuffer);
#endif

/* Handle:    8,Name:                 EngOffTmExtRng,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxEngOffTmExtRngShadowBuffer(_c_EngOffTmExtRngGroup_buf* pBuffer);
#endif

/* Handle:   11,Name:                OtsAirTmpCrValV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxOtsAirTmpCrValVShadowBuffer(_c_OtsAirTmpCrValGroup_buf* pBuffer);
#endif

/* Handle:   12,Name:                 OtsAirTmpCrVal,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxOtsAirTmpCrValShadowBuffer(_c_OtsAirTmpCrValGroup_buf* pBuffer);
#endif

/* Handle:   16,Name:       WhlGrndVlctyLftNnDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyLftNnDrvnV_0ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   19,Name:        WhlGrndVlctyRtNnDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyRtNnDrvnV_0ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   24,Name:         WhlGrndVlctyLftDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyLftDrvnV_0ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   27,Name:          WhlGrndVlctyRtDrvnV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyRtDrvnV_0ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   39,Name:                   TransEstGear,Size:  4,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxTransEstGearShadowBuffer(_c_TransEstGearGroup_buf* pBuffer);
#endif

/* Handle:   40,Name:                  TransEstGearV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxTransEstGearVShadowBuffer(_c_TransEstGearGroup_buf* pBuffer);
#endif

/* Handle:   42,Name:                 TrnsShftLvrPos,Size:  4,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxTrnsShftLvrPosShadowBuffer(_c_TrnsShftLvrPosGroup_buf* pBuffer);
#endif

/* Handle:   43,Name:                TrnsShftLvrPosV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxTrnsShftLvrPosVShadowBuffer(_c_TrnsShftLvrPosGroup_buf* pBuffer);
#endif

/* Handle:   49,Name:             BkupPwrModeMstrVDA,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxBkupPwrModeMstrVDAShadowBuffer(_c_BkupPwrModeMstrGroup_buf* pBuffer);
#endif

/* Handle:   53,Name:                     VSELatAccV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxVSELatAccVShadowBuffer(_c_VSELatAccGroup_buf* pBuffer);
#endif

/* Handle:   55,Name:           BrkPdlDrvAppPrsDetcd,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxBrkPdlDrvAppPrsDetcdShadowBuffer(_c_BrkPdlDrvAppPrsDetcdGroup_buf* pBuffer);
#endif

/* Handle:   56,Name:          BrkPdlDrvAppPrsDetcdV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxBrkPdlDrvAppPrsDetcdVShadowBuffer(_c_BrkPdlDrvAppPrsDetcdGroup_buf* pBuffer);
#endif

/* Handle:   65,Name:                 VehDynYawRateV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxVehDynYawRateVShadowBuffer(_c_VehDynYawRateGroup_buf* pBuffer);
#endif

/* Handle:   69,Name:            VehDynOvrUndrStrV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxVehDynOvrUndrStrV_0ShadowBuffer(_c_VehDynOvrUndrStrGroup_0_buf* pBuffer);
#endif

/* Handle:   72,Name:               LKATODC_TrqRqAct,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxLKATODC_TrqRqActShadowBuffer(_c_LKATqOvrDltCmd_buf* pBuffer);
#endif

/* Handle:   84,Name:               WRSLNDWhlDistVal,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSLNDWhlDistValShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer);
#endif

/* Handle:   85,Name:              WRSLNDWhlRotStRst,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSLNDWhlRotStRstShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer);
#endif

/* Handle:   86,Name:                   WRSLNDSeqNum,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSLNDSeqNumShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer);
#endif

/* Handle:   87,Name:               WRSLNDWhlDisTpRC,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSLNDWhlDisTpRCShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer);
#endif

/* Handle:   91,Name:               WRSRNDWhlDistVal,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSRNDWhlDistValShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer);
#endif

/* Handle:   92,Name:              WRSRNDWhlRotStRst,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSRNDWhlRotStRstShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer);
#endif

/* Handle:   93,Name:                   WRSRNDSeqNum,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSRNDSeqNumShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer);
#endif

/* Handle:   94,Name:               WRSRNDWhlDisTpRC,Size:  2,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWRSRNDWhlDisTpRCShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer);
#endif

/* Handle:   98,Name:       WhlGrndVlctyLftNnDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyLftNnDrvnV_1ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  101,Name:        WhlGrndVlctyRtNnDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyRtNnDrvnV_1ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  105,Name:         WhlGrndVlctyLftDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyLftDrvnV_1ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  108,Name:          WhlGrndVlctyRtDrvnV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxWhlGrndVlctyRtDrvnV_1ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  114,Name:                   SWAR_ReqActV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxSWAR_ReqActVShadowBuffer(_c_StrWhlAngReq_buf* pBuffer);
#endif

/* Handle:  115,Name:                    SWAR_ReqAct,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxSWAR_ReqActShadowBuffer(_c_StrWhlAngReq_buf* pBuffer);
#endif

/* Handle:  121,Name:               VSELongAccLoResV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxVSELongAccLoResVShadowBuffer(_c_VSELongAccLoResGroup_buf* pBuffer);
#endif

/* Handle:  126,Name:            VehDynOvrUndrStrV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint8 IlGetRxVehDynOvrUndrStrV_1ShadowBuffer(_c_VehDynOvrUndrStrGroup_1_buf* pBuffer);
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 8bit and smaller or equal 32bit
 ----------------------------------------------------------------------------- */

/* Handle:    3,Name:            WhlRotStatTmstmpRes,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlRotStatTmstmpRes(void);
#endif

/* Handle:   15,Name:        WhlGrndVlctyLftNnDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyLftNnDrvn_0ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   18,Name:         WhlGrndVlctyRtNnDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyRtNnDrvn_0ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   23,Name:          WhlGrndVlctyLftDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyLftDrvn_0ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   26,Name:           WhlGrndVlctyRtDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyRtDrvn_0ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_0_buf* pBuffer);
#endif

/* Handle:   52,Name:                      VSELatAcc,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxVSELatAccShadowBuffer(_c_VSELatAccGroup_buf* pBuffer);
#endif

/* Handle:   64,Name:                  VehDynYawRate,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxVehDynYawRateShadowBuffer(_c_VehDynYawRateGroup_buf* pBuffer);
#endif

/* Handle:   68,Name:             VehDynOvrUndrStr_0,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxVehDynOvrUndrStr_0ShadowBuffer(_c_VehDynOvrUndrStrGroup_0_buf* pBuffer);
#endif

/* Handle:   71,Name:                  LKATODC_TrqVl,Size: 11,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxLKATODC_TrqVlShadowBuffer(_c_LKATqOvrDltCmd_buf* pBuffer);
#endif

/* Handle:   75,Name:            LKATqOvrDltCmdPrtVl,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxLKATqOvrDltCmdPrtVl(void);
#endif

/* Handle:   81,Name:                         EngSpd,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxEngSpd(void);
#endif

/* Handle:   83,Name:             WRSLNDWhlDistPCntr,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWRSLNDWhlDistPCntrShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer);
#endif

/* Handle:   88,Name:              WRSLNDWhlDistTstm,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWRSLNDWhlDistTstmShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer);
#endif

/* Handle:   90,Name:             WRSRNDWhlDistPCntr,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWRSRNDWhlDistPCntrShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer);
#endif

/* Handle:   95,Name:              WRSRNDWhlDistTstm,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWRSRNDWhlDistTstmShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer);
#endif

/* Handle:   97,Name:        WhlGrndVlctyLftNnDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyLftNnDrvn_1ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  100,Name:         WhlGrndVlctyRtNnDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyRtNnDrvn_1ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  104,Name:          WhlGrndVlctyLftDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyLftDrvn_1ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  107,Name:           WhlGrndVlctyRtDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxWhlGrndVlctyRtDrvn_1ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_1_buf* pBuffer);
#endif

/* Handle:  116,Name:                   SWAR_TrgtAng,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxSWAR_TrgtAngShadowBuffer(_c_StrWhlAngReq_buf* pBuffer);
#endif

/* Handle:  118,Name:             StrWhlAngReqPrtVal,Size: 18,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint32 IlGetRxStrWhlAngReqPrtVal(void);
#endif

/* Handle:  122,Name:                VSELongAccLoRes,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxVSELongAccLoResShadowBuffer(_c_VSELongAccLoResGroup_buf* pBuffer);
#endif

/* Handle:  125,Name:             VehDynOvrUndrStr_1,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxVehDynOvrUndrStr_1ShadowBuffer(_c_VehDynOvrUndrStrGroup_1_buf* pBuffer);
#endif

/* Handle:  128,Name:                TqOvrDltTqCmdVl,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxTqOvrDltTqCmdVl(void);
#endif

/* Handle:  131,Name:                TrqOvrlCmdChksm,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
extern vuint16 IlGetRxTrqOvrlCmdChksm(void);
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 8bit and smaller or equal 32bit Redefine
 ----------------------------------------------------------------------------- */

/* Handle:   15,Name:        WhlGrndVlctyLftNnDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftNnDrvn_0()     (IlGetRxWhlGrndVlctyLftNnDrvn_0ShadowBuffer(&WhlGrndVlctyLftNnDrvnGroup_0))
#endif

/* Handle:   18,Name:         WhlGrndVlctyRtNnDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtNnDrvn_0()      (IlGetRxWhlGrndVlctyRtNnDrvn_0ShadowBuffer(&WhlGrndVlctyRtNnDrvnGroup_0))
#endif

/* Handle:   23,Name:          WhlGrndVlctyLftDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftDrvn_0()       (IlGetRxWhlGrndVlctyLftDrvn_0ShadowBuffer(&WhlGrndVlctyLftDrvnGroup_0))
#endif

/* Handle:   26,Name:           WhlGrndVlctyRtDrvn_0,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtDrvn_0()        (IlGetRxWhlGrndVlctyRtDrvn_0ShadowBuffer(&WhlGrndVlctyRtDrvnGroup_0))
#endif

/* Handle:   52,Name:                      VSELatAcc,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVSELatAcc()                   (IlGetRxVSELatAccShadowBuffer(&VSELatAccGroup))
#endif

/* Handle:   64,Name:                  VehDynYawRate,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehDynYawRate()               (IlGetRxVehDynYawRateShadowBuffer(&VehDynYawRateGroup))
#endif

/* Handle:   68,Name:             VehDynOvrUndrStr_0,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehDynOvrUndrStr_0()          (IlGetRxVehDynOvrUndrStr_0ShadowBuffer(&VehDynOvrUndrStrGroup_0))
#endif

/* Handle:   71,Name:                  LKATODC_TrqVl,Size: 11,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxLKATODC_TrqVl()               (IlGetRxLKATODC_TrqVlShadowBuffer(&LKATqOvrDltCmd))
#endif

/* Handle:   83,Name:             WRSLNDWhlDistPCntr,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSLNDWhlDistPCntr()          (IlGetRxWRSLNDWhlDistPCntrShadowBuffer(&WhlRotStatLftNDrvn))
#endif

/* Handle:   88,Name:              WRSLNDWhlDistTstm,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSLNDWhlDistTstm()           (IlGetRxWRSLNDWhlDistTstmShadowBuffer(&WhlRotStatLftNDrvn))
#endif

/* Handle:   90,Name:             WRSRNDWhlDistPCntr,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSRNDWhlDistPCntr()          (IlGetRxWRSRNDWhlDistPCntrShadowBuffer(&WhlRotStatRghtNDrvn))
#endif

/* Handle:   95,Name:              WRSRNDWhlDistTstm,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWRSRNDWhlDistTstm()           (IlGetRxWRSRNDWhlDistTstmShadowBuffer(&WhlRotStatRghtNDrvn))
#endif

/* Handle:   97,Name:        WhlGrndVlctyLftNnDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftNnDrvn_1()     (IlGetRxWhlGrndVlctyLftNnDrvn_1ShadowBuffer(&WhlGrndVlctyLftNnDrvnGroup_1))
#endif

/* Handle:  100,Name:         WhlGrndVlctyRtNnDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtNnDrvn_1()      (IlGetRxWhlGrndVlctyRtNnDrvn_1ShadowBuffer(&WhlGrndVlctyRtNnDrvnGroup_1))
#endif

/* Handle:  104,Name:          WhlGrndVlctyLftDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyLftDrvn_1()       (IlGetRxWhlGrndVlctyLftDrvn_1ShadowBuffer(&WhlGrndVlctyLftDrvnGroup_1))
#endif

/* Handle:  107,Name:           WhlGrndVlctyRtDrvn_1,Size: 14,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxWhlGrndVlctyRtDrvn_1()        (IlGetRxWhlGrndVlctyRtDrvn_1ShadowBuffer(&WhlGrndVlctyRtDrvnGroup_1))
#endif

/* Handle:  116,Name:                   SWAR_TrgtAng,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxSWAR_TrgtAng()                (IlGetRxSWAR_TrgtAngShadowBuffer(&StrWhlAngReq))
#endif

/* Handle:  122,Name:                VSELongAccLoRes,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVSELongAccLoRes()             (IlGetRxVSELongAccLoResShadowBuffer(&VSELongAccLoResGroup))
#endif

/* Handle:  125,Name:             VehDynOvrUndrStr_1,Size: 10,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_RX
#define IlGetRxVehDynOvrUndrStr_1()          (IlGetRxVehDynOvrUndrStr_1ShadowBuffer(&VehDynOvrUndrStrGroup_1))
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 32bit
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:                T1_HostToTarget,Size: 64,UsedBytes:  8,SingleSignal */
#ifdef IL_ENABLE_RX
extern void IlGetRxT1_HostToTarget(vuint8* pBuffer);
#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access for signals smaller or equal 8bit, SendType cyclic or none
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:          DTCI_DTCTriggered_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_DTCTriggered_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    1,Name:                DTCIUnused7_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCIUnused7_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    2,Name:                DTCIUnused6_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCIUnused6_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    3,Name:                DTCIUnused5_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCIUnused5_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    4,Name:                DTCIUnused4_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCIUnused4_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    5,Name:                DTCIUnused3_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCIUnused3_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    6,Name:                DTCIUnused2_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCIUnused2_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    7,Name:                DTCIUnused1_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCIUnused1_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    8,Name:             DTCI_DTCSource_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_DTCSource_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   10,Name:           DTCI_DTCFailType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_DTCFailType_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   11,Name:         DTCI_CodeSupported_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_CodeSupported_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   12,Name:         DTCI_CurrentStatus_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_CurrentStatus_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   13,Name:       DTCI_TstNPsdCdClrdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_TstNPsdCdClrdSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   14,Name:      DTCI_TstFldCdClrdStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_TstFldCdClrdStat_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   15,Name:              DTCI_HistStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_HistStat_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   16,Name:        DTCI_TstNPsdPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_TstNPsdPwrUpSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   17,Name:         DTCI_TstFldPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_TstFldPwrUpSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   18,Name:           DTCI_WrnIndRqdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_WrnIndRqdSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   19,Name:          DTCI_DTCFaultType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDTCI_DTCFaultType_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   21,Name:                  StrWhAngMsk_0,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngMsk_0(c) \
{ \
  IlEnterCriticalStrWhAngMsk_0(); \
  PPEI_Steering_Wheel_Angle.PPEI_Steering_Wheel_Angle.StrWhAngMsk_0 = (c); \
  IlLeaveCriticalStrWhAngMsk_0(); \
}
#endif

/* Handle:   22,Name:              StrWhlAngSenTyp_0,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhlAngSenTyp_0(c) \
{ \
  IlEnterCriticalStrWhlAngSenTyp_0(); \
  PPEI_Steering_Wheel_Angle.PPEI_Steering_Wheel_Angle.StrWhlAngSenTyp_0 = (c); \
  IlLeaveCriticalStrWhlAngSenTyp_0(); \
}
#endif

/* Handle:   23,Name:          StrWhlAngSenCalStat_0,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhlAngSenCalStat_0(c) \
{ \
  IlEnterCriticalStrWhlAngSenCalStat_0(); \
  PPEI_Steering_Wheel_Angle.PPEI_Steering_Wheel_Angle.StrWhlAngSenCalStat_0 = (c); \
  IlLeaveCriticalStrWhlAngSenCalStat_0(); \
}
#endif

/* Handle:   24,Name:                    StrWhAngV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxStrWhAngV_0ShadowBuffer(_c_StrWhAngGroup_0_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   27,Name:               StrWhAngGrdMsk_0,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngGrdMsk_0(c) \
{ \
  IlEnterCriticalStrWhAngGrdMsk_0(); \
  PPEI_Steering_Wheel_Angle.PPEI_Steering_Wheel_Angle.StrWhAngGrdMsk_0 = (c); \
  IlLeaveCriticalStrWhAngGrdMsk_0(); \
}
#endif

/* Handle:   28,Name:         StWhlAngAliveRollCnt_0,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStWhlAngAliveRollCnt_0(c) \
{ \
  IlEnterCriticalStWhlAngAliveRollCnt_0(); \
  PPEI_Steering_Wheel_Angle.PPEI_Steering_Wheel_Angle.StWhlAngAliveRollCnt_0 = (c); \
  IlLeaveCriticalStWhlAngAliveRollCnt_0(); \
}
#endif

/* Handle:   30,Name:                 StrWhAngGrdV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxStrWhAngGrdV_0ShadowBuffer(_c_StrWhAngGrdGroup_0_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   34,Name:             LKATrqOvrlTrqDStat,Size:  3,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLKATrqOvrlTrqDStat(c) \
{ \
  IlEnterCriticalLKATrqOvrlTrqDStat(); \
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKATrqOvrlTrqDStat = (c); \
  IlLeaveCriticalLKATrqOvrlTrqDStat(); \
}
#endif

/* Handle:   36,Name:              HndsOffStrWhlDtMd,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHndsOffStrWhlDtMd(c) \
{ \
  IlEnterCriticalHndsOffStrWhlDtMd(); \
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.HndsOffStrWhlDtMd = (c); \
  IlLeaveCriticalHndsOffStrWhlDtMd(); \
}
#endif

/* Handle:   37,Name:              HndsOffStrWhlDtSt,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxHndsOffStrWhlDtStShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   38,Name:             HndsOffStrWhlDtStV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxHndsOffStrWhlDtStVShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   41,Name:               LKATrqOvrlDlvdRC,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLKATrqOvrlDlvdRC(c) \
{ \
  IlEnterCriticalLKATrqOvrlDlvdRC(); \
  LKA_Steering_Trq_Overlay_Stat_HS.LKA_Steering_Trq_Overlay_Stat_HS.LKATrqOvrlDlvdRC = (c); \
  IlLeaveCriticalLKATrqOvrlDlvdRC(); \
}
#endif

/* Handle:   43,Name:                LKADrvAppldTrqV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxLKADrvAppldTrqVShadowBuffer(_c_LKADrvAppldTrqGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   45,Name:                       PwrStrIO,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxPwrStrIO(c) \
{ \
  IlEnterCriticalPwrStrIO(); \
  Power_Steering_Information_HS.Power_Steering_Information_HS.PwrStrIO = (c); \
  IlLeaveCriticalPwrStrIO(); \
}
#endif

/* Handle:   46,Name:                StrngAsstRdcdIO,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrngAsstRdcdIO(c) \
{ \
  IlEnterCriticalStrngAsstRdcdIO(); \
  Power_Steering_Information_HS.Power_Steering_Information_HS.StrngAsstRdcdIO = (c); \
  IlLeaveCriticalStrngAsstRdcdIO(); \
}
#endif

/* Handle:   47,Name:              StrAsstRdcdLvl2IO,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrAsstRdcdLvl2IO(c) \
{ \
  IlEnterCriticalStrAsstRdcdLvl2IO(); \
  Power_Steering_Information_HS.Power_Steering_Information_HS.StrAsstRdcdLvl2IO = (c); \
  IlLeaveCriticalStrAsstRdcdLvl2IO(); \
}
#endif

/* Handle:   48,Name:              StrAsstRdcdLvl3IO,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrAsstRdcdLvl3IO(c) \
{ \
  IlEnterCriticalStrAsstRdcdLvl3IO(); \
  Power_Steering_Information_HS.Power_Steering_Information_HS.StrAsstRdcdLvl3IO = (c); \
  IlLeaveCriticalStrAsstRdcdLvl3IO(); \
}
#endif

/* Handle:   49,Name:             ElecPwrStrAvalStat,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxElecPwrStrAvalStat(c) \
{ \
  IlEnterCriticalElecPwrStrAvalStat(); \
  Electric_Power_Steering_CE.Electric_Power_Steering_CE.ElecPwrStrAvalStat = (c); \
  IlLeaveCriticalElecPwrStrAvalStat(); \
}
#endif

/* Handle:   50,Name:               DrvStrIntfrDtcdV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDrvStrIntfrDtcdVShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   51,Name:                DrvStrIntfrDtcd,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxDrvStrIntfrDtcdShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   53,Name:              DrvStrIntfrDetARC,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDrvStrIntfrDetARC(c) \
{ \
  IlEnterCriticalDrvStrIntfrDetARC(); \
  Electric_Power_Steering_CE.Electric_Power_Steering_CE.DrvStrIntfrDetARC = (c); \
  IlLeaveCriticalDrvStrIntfrDetARC(); \
}
#endif

/* Handle:   54,Name:           DrvStrIntfrDetPrtVal,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDrvStrIntfrDetPrtVal(c) \
{ \
  IlEnterCriticalDrvStrIntfrDetPrtVal(); \
  Electric_Power_Steering_CE.Electric_Power_Steering_CE.DrvStrIntfrDetPrtVal = (c); \
  IlLeaveCriticalDrvStrIntfrDetPrtVal(); \
}
#endif

/* Handle:   55,Name:           ElcPwrStrAvalStatARC,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxElcPwrStrAvalStatARC(c) \
{ \
  IlEnterCriticalElcPwrStrAvalStatARC(); \
  Electric_Power_Steering_CE.Electric_Power_Steering_CE.ElcPwrStrAvalStatARC = (c); \
  IlLeaveCriticalElcPwrStrAvalStatARC(); \
}
#endif

/* Handle:   56,Name:          ElcPwrStrAvalStatPVal,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxElcPwrStrAvalStatPVal(c) \
{ \
  IlEnterCriticalElcPwrStrAvalStatPVal(); \
  Electric_Power_Steering_CE.Electric_Power_Steering_CE.ElcPwrStrAvalStatPVal = (c); \
  IlLeaveCriticalElcPwrStrAvalStatPVal(); \
}
#endif

/* Handle:   57,Name:                  StrWhAngMsk_1,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngMsk_1(c) \
{ \
  IlEnterCriticalStrWhAngMsk_1(); \
  PPEI_Steering_Wheel_Angle_CE.PPEI_Steering_Wheel_Angle_CE.StrWhAngMsk_1 = (c); \
  IlLeaveCriticalStrWhAngMsk_1(); \
}
#endif

/* Handle:   58,Name:              StrWhlAngSenTyp_1,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhlAngSenTyp_1(c) \
{ \
  IlEnterCriticalStrWhlAngSenTyp_1(); \
  PPEI_Steering_Wheel_Angle_CE.PPEI_Steering_Wheel_Angle_CE.StrWhlAngSenTyp_1 = (c); \
  IlLeaveCriticalStrWhlAngSenTyp_1(); \
}
#endif

/* Handle:   59,Name:          StrWhlAngSenCalStat_1,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhlAngSenCalStat_1(c) \
{ \
  IlEnterCriticalStrWhlAngSenCalStat_1(); \
  PPEI_Steering_Wheel_Angle_CE.PPEI_Steering_Wheel_Angle_CE.StrWhlAngSenCalStat_1 = (c); \
  IlLeaveCriticalStrWhlAngSenCalStat_1(); \
}
#endif

/* Handle:   60,Name:                    StrWhAngV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxStrWhAngV_1ShadowBuffer(_c_StrWhAngGroup_1_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   63,Name:               StrWhAngGrdMsk_1,Size:  1,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngGrdMsk_1(c) \
{ \
  IlEnterCriticalStrWhAngGrdMsk_1(); \
  PPEI_Steering_Wheel_Angle_CE.PPEI_Steering_Wheel_Angle_CE.StrWhAngGrdMsk_1 = (c); \
  IlLeaveCriticalStrWhAngGrdMsk_1(); \
}
#endif

/* Handle:   64,Name:         StWhlAngAliveRollCnt_1,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStWhlAngAliveRollCnt_1(c) \
{ \
  IlEnterCriticalStWhlAngAliveRollCnt_1(); \
  PPEI_Steering_Wheel_Angle_CE.PPEI_Steering_Wheel_Angle_CE.StWhlAngAliveRollCnt_1 = (c); \
  IlLeaveCriticalStWhlAngAliveRollCnt_1(); \
}
#endif

/* Handle:   66,Name:                 StrWhAngGrdV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutRxStrWhAngGrdV_1ShadowBuffer(_c_StrWhAngGrdGroup_1_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   70,Name:                TrqOvrlTrqDStat,Size:  2,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxTrqOvrlTrqDStat(c) \
{ \
  IlEnterCriticalTrqOvrlTrqDStat(); \
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.TrqOvrlTrqDStat = (c); \
  IlLeaveCriticalTrqOvrlTrqDStat(); \
}
#endif

/* Handle:   71,Name:                 TrqOvrlDvrdARC,Size:  4,UsedBytes:  1,SingleSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxTrqOvrlDvrdARC(c) \
{ \
  IlEnterCriticalTrqOvrlDvrdARC(); \
  Steering_Torque_Overlay_Stat_CE.Steering_Torque_Overlay_Stat_CE.TrqOvrlDvrdARC = (c); \
  IlLeaveCriticalTrqOvrlDvrdARC(); \
}
#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access partial signals  - Redefines
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:          DTCI_DTCTriggered_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_DTCTriggered_778(c)      (IlPutTxDTCI_DTCTriggered_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    1,Name:                DTCIUnused7_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCIUnused7_778(c)            (IlPutTxDTCIUnused7_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    2,Name:                DTCIUnused6_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCIUnused6_778(c)            (IlPutTxDTCIUnused6_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    3,Name:                DTCIUnused5_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCIUnused5_778(c)            (IlPutTxDTCIUnused5_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    4,Name:                DTCIUnused4_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCIUnused4_778(c)            (IlPutTxDTCIUnused4_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    5,Name:                DTCIUnused3_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCIUnused3_778(c)            (IlPutTxDTCIUnused3_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    6,Name:                DTCIUnused2_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCIUnused2_778(c)            (IlPutTxDTCIUnused2_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    7,Name:                DTCIUnused1_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCIUnused1_778(c)            (IlPutTxDTCIUnused1_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    8,Name:             DTCI_DTCSource_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_DTCSource_778(c)         (IlPutTxDTCI_DTCSource_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:    9,Name:             DTCI_DTCNumber_778,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_DTCNumber_778(c)         (IlPutTxDTCI_DTCNumber_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   10,Name:           DTCI_DTCFailType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_DTCFailType_778(c)       (IlPutTxDTCI_DTCFailType_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   11,Name:         DTCI_CodeSupported_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_CodeSupported_778(c)     (IlPutTxDTCI_CodeSupported_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   12,Name:         DTCI_CurrentStatus_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_CurrentStatus_778(c)     (IlPutTxDTCI_CurrentStatus_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   13,Name:       DTCI_TstNPsdCdClrdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_TstNPsdCdClrdSt_778(c)   (IlPutTxDTCI_TstNPsdCdClrdSt_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   14,Name:      DTCI_TstFldCdClrdStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_TstFldCdClrdStat_778(c)  (IlPutTxDTCI_TstFldCdClrdStat_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   15,Name:              DTCI_HistStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_HistStat_778(c)          (IlPutTxDTCI_HistStat_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   16,Name:        DTCI_TstNPsdPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_TstNPsdPwrUpSt_778(c)    (IlPutTxDTCI_TstNPsdPwrUpSt_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   17,Name:         DTCI_TstFldPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_TstFldPwrUpSt_778(c)     (IlPutTxDTCI_TstFldPwrUpSt_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   18,Name:           DTCI_WrnIndRqdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_WrnIndRqdSt_778(c)       (IlPutTxDTCI_WrnIndRqdSt_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   19,Name:          DTCI_DTCFaultType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDTCI_DTCFaultType_778(c)      (IlPutTxDTCI_DTCFaultType_778ShadowBuffer(&DTCInfo_778, (c)))
#endif

/* Handle:   24,Name:                    StrWhAngV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngV_0(c)                (IlPutTxStrWhAngV_0ShadowBuffer(&StrWhAngGroup_0, (c)))
#endif

/* Handle:   25,Name:                     StrWhAng_0,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAng_0(c)                 (IlPutTxStrWhAng_0ShadowBuffer(&StrWhAngGroup_0, (c)))
#endif

/* Handle:   29,Name:                  StrWhAngGrd_0,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngGrd_0(c)              (IlPutTxStrWhAngGrd_0ShadowBuffer(&StrWhAngGrdGroup_0, (c)))
#endif

/* Handle:   30,Name:                 StrWhAngGrdV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngGrdV_0(c)             (IlPutTxStrWhAngGrdV_0ShadowBuffer(&StrWhAngGrdGroup_0, (c)))
#endif

/* Handle:   37,Name:              HndsOffStrWhlDtSt,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHndsOffStrWhlDtSt(c)          (IlPutTxHndsOffStrWhlDtStShadowBuffer(&HndsOffStrWhlDtStGroup, (c)))
#endif

/* Handle:   38,Name:             HndsOffStrWhlDtStV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxHndsOffStrWhlDtStV(c)         (IlPutTxHndsOffStrWhlDtStVShadowBuffer(&HndsOffStrWhlDtStGroup, (c)))
#endif

/* Handle:   42,Name:                 LKADrvAppldTrq,Size: 11,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLKADrvAppldTrq(c)             (IlPutTxLKADrvAppldTrqShadowBuffer(&LKADrvAppldTrqGroup, (c)))
#endif

/* Handle:   43,Name:                LKADrvAppldTrqV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxLKADrvAppldTrqV(c)            (IlPutTxLKADrvAppldTrqVShadowBuffer(&LKADrvAppldTrqGroup, (c)))
#endif

/* Handle:   50,Name:               DrvStrIntfrDtcdV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDrvStrIntfrDtcdV(c)           (IlPutTxDrvStrIntfrDtcdVShadowBuffer(&DrvStrIntfrDtcdGroup, (c)))
#endif

/* Handle:   51,Name:                DrvStrIntfrDtcd,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxDrvStrIntfrDtcd(c)            (IlPutTxDrvStrIntfrDtcdShadowBuffer(&DrvStrIntfrDtcdGroup, (c)))
#endif

/* Handle:   60,Name:                    StrWhAngV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngV_1(c)                (IlPutTxStrWhAngV_1ShadowBuffer(&StrWhAngGroup_1, (c)))
#endif

/* Handle:   61,Name:                     StrWhAng_1,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAng_1(c)                 (IlPutTxStrWhAng_1ShadowBuffer(&StrWhAngGroup_1, (c)))
#endif

/* Handle:   65,Name:                  StrWhAngGrd_1,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngGrd_1(c)              (IlPutTxStrWhAngGrd_1ShadowBuffer(&StrWhAngGrdGroup_1, (c)))
#endif

/* Handle:   66,Name:                 StrWhAngGrdV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
#define IlPutTxStrWhAngGrdV_1(c)             (IlPutTxStrWhAngGrdV_1ShadowBuffer(&StrWhAngGrdGroup_1, (c)))
#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access extern decl
 ----------------------------------------------------------------------------- */

/* Handle:    9,Name:             DTCI_DTCNumber_778,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_DTCNumber_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint16 sigData);
#endif

/* Handle:   25,Name:                     StrWhAng_0,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAng_0ShadowBuffer(_c_StrWhAngGroup_0_buf* pBuffer, vuint16 sigData);
#endif

/* Handle:   29,Name:                  StrWhAngGrd_0,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAngGrd_0ShadowBuffer(_c_StrWhAngGrdGroup_0_buf* pBuffer, vuint16 sigData);
#endif

/* Handle:   32,Name:               StrAngSnsChksm_0,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrAngSnsChksm_0(vuint16 sigData);
#endif

/* Handle:   33,Name:            LKAElPwrStTtlTqDlvd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxLKAElPwrStTtlTqDlvd(vuint16 sigData);
#endif

/* Handle:   35,Name:           LKATrqOvrlDltTrqDlvd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxLKATrqOvrlDltTrqDlvd(vuint16 sigData);
#endif

/* Handle:   40,Name:            LKATrqOvrlStatChksm,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxLKATrqOvrlStatChksm(vuint16 sigData);
#endif

/* Handle:   42,Name:                 LKADrvAppldTrq,Size: 11,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxLKADrvAppldTrqShadowBuffer(_c_LKADrvAppldTrqGroup_buf* pBuffer, vuint16 sigData);
#endif

/* Handle:   61,Name:                     StrWhAng_1,Size: 16,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAng_1ShadowBuffer(_c_StrWhAngGroup_1_buf* pBuffer, vuint16 sigData);
#endif

/* Handle:   65,Name:                  StrWhAngGrd_1,Size: 12,UsedBytes:  2,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAngGrd_1ShadowBuffer(_c_StrWhAngGrdGroup_1_buf* pBuffer, vuint16 sigData);
#endif

/* Handle:   68,Name:               StrAngSnsChksm_1,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrAngSnsChksm_1(vuint16 sigData);
#endif

/* Handle:   69,Name:               ElPwrStTtlTqDlrd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxElPwrStTtlTqDlrd(vuint16 sigData);
#endif

/* Handle:   72,Name:              TrqOvrlDltTrqDlrd,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxTrqOvrlDltTrqDlrd(vuint16 sigData);
#endif

/* Handle:   73,Name:                  TrqOvrlDChksm,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxTrqOvrlDChksm(vuint16 sigData);
#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Partial Signal Access for signals smaller or equal 8bit extern decl
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:          DTCI_DTCTriggered_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_DTCTriggered_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    1,Name:                DTCIUnused7_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCIUnused7_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    2,Name:                DTCIUnused6_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCIUnused6_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    3,Name:                DTCIUnused5_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCIUnused5_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    4,Name:                DTCIUnused4_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCIUnused4_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    5,Name:                DTCIUnused3_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCIUnused3_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    6,Name:                DTCIUnused2_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCIUnused2_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    7,Name:                DTCIUnused1_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCIUnused1_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:    8,Name:             DTCI_DTCSource_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_DTCSource_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   10,Name:           DTCI_DTCFailType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_DTCFailType_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   11,Name:         DTCI_CodeSupported_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_CodeSupported_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   12,Name:         DTCI_CurrentStatus_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_CurrentStatus_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   13,Name:       DTCI_TstNPsdCdClrdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_TstNPsdCdClrdSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   14,Name:      DTCI_TstFldCdClrdStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_TstFldCdClrdStat_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   15,Name:              DTCI_HistStat_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_HistStat_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   16,Name:        DTCI_TstNPsdPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_TstNPsdPwrUpSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   17,Name:         DTCI_TstFldPwrUpSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_TstFldPwrUpSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   18,Name:           DTCI_WrnIndRqdSt_778,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_WrnIndRqdSt_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   19,Name:          DTCI_DTCFaultType_778,Size:  8,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDTCI_DTCFaultType_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   24,Name:                    StrWhAngV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAngV_0ShadowBuffer(_c_StrWhAngGroup_0_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   30,Name:                 StrWhAngGrdV_0,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAngGrdV_0ShadowBuffer(_c_StrWhAngGrdGroup_0_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   37,Name:              HndsOffStrWhlDtSt,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHndsOffStrWhlDtStShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   38,Name:             HndsOffStrWhlDtStV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxHndsOffStrWhlDtStVShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   43,Name:                LKADrvAppldTrqV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxLKADrvAppldTrqVShadowBuffer(_c_LKADrvAppldTrqGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   50,Name:               DrvStrIntfrDtcdV,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDrvStrIntfrDtcdVShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   51,Name:                DrvStrIntfrDtcd,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxDrvStrIntfrDtcdShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   60,Name:                    StrWhAngV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAngV_1ShadowBuffer(_c_StrWhAngGroup_1_buf* pBuffer, vuint8 sigData);
#endif

/* Handle:   66,Name:                 StrWhAngGrdV_1,Size:  1,UsedBytes:  1,PartialSignal */
#ifdef IL_ENABLE_TX
extern void IlPutTxStrWhAngGrdV_1ShadowBuffer(_c_StrWhAngGrdGroup_1_buf* pBuffer, vuint8 sigData);
#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Group Access 
 ----------------------------------------------------------------------------- */

extern void IlGetRxEngOilTmpGroupShadowBuffer(_c_EngOilTmpGroup_buf* pBuffer);
extern void IlGetRxEngOffTmExtRngGroupShadowBuffer(_c_EngOffTmExtRngGroup_buf* pBuffer);
extern void IlGetRxOtsAirTmpCrValGroupShadowBuffer(_c_OtsAirTmpCrValGroup_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyLftNnDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_0_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyRtNnDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_0_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyLftDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_0_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyRtDrvnGroup_0ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_0_buf* pBuffer);
extern void IlGetRxTransEstGearGroupShadowBuffer(_c_TransEstGearGroup_buf* pBuffer);
extern void IlGetRxTrnsShftLvrPosGroupShadowBuffer(_c_TrnsShftLvrPosGroup_buf* pBuffer);
extern void IlGetRxBkupPwrModeMstrGroupShadowBuffer(_c_BkupPwrModeMstrGroup_buf* pBuffer);
extern void IlGetRxVSELatAccGroupShadowBuffer(_c_VSELatAccGroup_buf* pBuffer);
extern void IlGetRxBrkPdlDrvAppPrsDetcdGroupShadowBuffer(_c_BrkPdlDrvAppPrsDetcdGroup_buf* pBuffer);
extern void IlGetRxVehDynYawRateGroupShadowBuffer(_c_VehDynYawRateGroup_buf* pBuffer);
extern void IlGetRxVehDynOvrUndrStrGroup_0ShadowBuffer(_c_VehDynOvrUndrStrGroup_0_buf* pBuffer);
extern void IlGetRxLKATqOvrDltCmdShadowBuffer(_c_LKATqOvrDltCmd_buf* pBuffer);
extern void IlGetRxWhlRotStatLftNDrvnShadowBuffer(_c_WhlRotStatLftNDrvn_buf* pBuffer);
extern void IlGetRxWhlRotStatRghtNDrvnShadowBuffer(_c_WhlRotStatRghtNDrvn_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyLftNnDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyLftNnDrvnGroup_1_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyRtNnDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyRtNnDrvnGroup_1_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyLftDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyLftDrvnGroup_1_buf* pBuffer);
extern void IlGetRxWhlGrndVlctyRtDrvnGroup_1ShadowBuffer(_c_WhlGrndVlctyRtDrvnGroup_1_buf* pBuffer);
extern void IlGetRxStrWhlAngReqShadowBuffer(_c_StrWhlAngReq_buf* pBuffer);
extern void IlGetRxVSELongAccLoResGroupShadowBuffer(_c_VSELongAccLoResGroup_buf* pBuffer);
extern void IlGetRxVehDynOvrUndrStrGroup_1ShadowBuffer(_c_VehDynOvrUndrStrGroup_1_buf* pBuffer);


/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Group Access Redefines
 ----------------------------------------------------------------------------- */

#define IlGetRxEngOilTmpGroup()              (IlGetRxEngOilTmpGroupShadowBuffer(&EngOilTmpGroup))
#define IlGetRxEngOffTmExtRngGroup()         (IlGetRxEngOffTmExtRngGroupShadowBuffer(&EngOffTmExtRngGroup))
#define IlGetRxOtsAirTmpCrValGroup()         (IlGetRxOtsAirTmpCrValGroupShadowBuffer(&OtsAirTmpCrValGroup))
#define IlGetRxWhlGrndVlctyLftNnDrvnGroup_0() (IlGetRxWhlGrndVlctyLftNnDrvnGroup_0ShadowBuffer(&WhlGrndVlctyLftNnDrvnGroup_0))
#define IlGetRxWhlGrndVlctyRtNnDrvnGroup_0() (IlGetRxWhlGrndVlctyRtNnDrvnGroup_0ShadowBuffer(&WhlGrndVlctyRtNnDrvnGroup_0))
#define IlGetRxWhlGrndVlctyLftDrvnGroup_0()  (IlGetRxWhlGrndVlctyLftDrvnGroup_0ShadowBuffer(&WhlGrndVlctyLftDrvnGroup_0))
#define IlGetRxWhlGrndVlctyRtDrvnGroup_0()   (IlGetRxWhlGrndVlctyRtDrvnGroup_0ShadowBuffer(&WhlGrndVlctyRtDrvnGroup_0))
#define IlGetRxTransEstGearGroup()           (IlGetRxTransEstGearGroupShadowBuffer(&TransEstGearGroup))
#define IlGetRxTrnsShftLvrPosGroup()         (IlGetRxTrnsShftLvrPosGroupShadowBuffer(&TrnsShftLvrPosGroup))
#define IlGetRxBkupPwrModeMstrGroup()        (IlGetRxBkupPwrModeMstrGroupShadowBuffer(&BkupPwrModeMstrGroup))
#define IlGetRxVSELatAccGroup()              (IlGetRxVSELatAccGroupShadowBuffer(&VSELatAccGroup))
#define IlGetRxBrkPdlDrvAppPrsDetcdGroup()   (IlGetRxBrkPdlDrvAppPrsDetcdGroupShadowBuffer(&BrkPdlDrvAppPrsDetcdGroup))
#define IlGetRxVehDynYawRateGroup()          (IlGetRxVehDynYawRateGroupShadowBuffer(&VehDynYawRateGroup))
#define IlGetRxVehDynOvrUndrStrGroup_0()     (IlGetRxVehDynOvrUndrStrGroup_0ShadowBuffer(&VehDynOvrUndrStrGroup_0))
#define IlGetRxLKATqOvrDltCmd()              (IlGetRxLKATqOvrDltCmdShadowBuffer(&LKATqOvrDltCmd))
#define IlGetRxWhlRotStatLftNDrvn()          (IlGetRxWhlRotStatLftNDrvnShadowBuffer(&WhlRotStatLftNDrvn))
#define IlGetRxWhlRotStatRghtNDrvn()         (IlGetRxWhlRotStatRghtNDrvnShadowBuffer(&WhlRotStatRghtNDrvn))
#define IlGetRxWhlGrndVlctyLftNnDrvnGroup_1() (IlGetRxWhlGrndVlctyLftNnDrvnGroup_1ShadowBuffer(&WhlGrndVlctyLftNnDrvnGroup_1))
#define IlGetRxWhlGrndVlctyRtNnDrvnGroup_1() (IlGetRxWhlGrndVlctyRtNnDrvnGroup_1ShadowBuffer(&WhlGrndVlctyRtNnDrvnGroup_1))
#define IlGetRxWhlGrndVlctyLftDrvnGroup_1()  (IlGetRxWhlGrndVlctyLftDrvnGroup_1ShadowBuffer(&WhlGrndVlctyLftDrvnGroup_1))
#define IlGetRxWhlGrndVlctyRtDrvnGroup_1()   (IlGetRxWhlGrndVlctyRtDrvnGroup_1ShadowBuffer(&WhlGrndVlctyRtDrvnGroup_1))
#define IlGetRxStrWhlAngReq()                (IlGetRxStrWhlAngReqShadowBuffer(&StrWhlAngReq))
#define IlGetRxVSELongAccLoResGroup()        (IlGetRxVSELongAccLoResGroupShadowBuffer(&VSELongAccLoResGroup))
#define IlGetRxVehDynOvrUndrStrGroup_1()     (IlGetRxVehDynOvrUndrStrGroup_1ShadowBuffer(&VehDynOvrUndrStrGroup_1))


/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Group Access 
 ----------------------------------------------------------------------------- */

extern void IlPutTxDTCInfo_778ShadowBuffer(_c_DTCInfo_778_buf* pBuffer);
extern void IlPutTxStrWhAngGroup_0ShadowBuffer(_c_StrWhAngGroup_0_buf* pBuffer);
extern void IlPutTxStrWhAngGrdGroup_0ShadowBuffer(_c_StrWhAngGrdGroup_0_buf* pBuffer);
extern void IlPutTxHndsOffStrWhlDtStGroupShadowBuffer(_c_HndsOffStrWhlDtStGroup_buf* pBuffer);
extern void IlPutTxLKADrvAppldTrqGroupShadowBuffer(_c_LKADrvAppldTrqGroup_buf* pBuffer);
extern void IlPutTxDrvStrIntfrDtcdGroupShadowBuffer(_c_DrvStrIntfrDtcdGroup_buf* pBuffer);
extern void IlPutTxStrWhAngGroup_1ShadowBuffer(_c_StrWhAngGroup_1_buf* pBuffer);
extern void IlPutTxStrWhAngGrdGroup_1ShadowBuffer(_c_StrWhAngGrdGroup_1_buf* pBuffer);


/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Group Access Redefines
 ----------------------------------------------------------------------------- */

#define IlPutTxDTCInfo_778()                 (IlPutTxDTCInfo_778ShadowBuffer(&DTCInfo_778))
#define IlPutTxStrWhAngGroup_0()             (IlPutTxStrWhAngGroup_0ShadowBuffer(&StrWhAngGroup_0))
#define IlPutTxStrWhAngGrdGroup_0()          (IlPutTxStrWhAngGrdGroup_0ShadowBuffer(&StrWhAngGrdGroup_0))
#define IlPutTxHndsOffStrWhlDtStGroup()      (IlPutTxHndsOffStrWhlDtStGroupShadowBuffer(&HndsOffStrWhlDtStGroup))
#define IlPutTxLKADrvAppldTrqGroup()         (IlPutTxLKADrvAppldTrqGroupShadowBuffer(&LKADrvAppldTrqGroup))
#define IlPutTxDrvStrIntfrDtcdGroup()        (IlPutTxDrvStrIntfrDtcdGroupShadowBuffer(&DrvStrIntfrDtcdGroup))
#define IlPutTxStrWhAngGroup_1()             (IlPutTxStrWhAngGroup_1ShadowBuffer(&StrWhAngGroup_1))
#define IlPutTxStrWhAngGrdGroup_1()          (IlPutTxStrWhAngGrdGroup_1ShadowBuffer(&StrWhAngGrdGroup_1))


/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gm start
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Declaration of IlRxHndStartIndex table
 ----------------------------------------------------------------------------- */

V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 IlRxHndStartIndex[kIlNrOfPackedRxObjectBytes+1];


/* -----------------------------------------------------------------------------
    &&&~ Il_Vector_Gm end
 ----------------------------------------------------------------------------- */



/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 246078695
      #error "The magic number of the generated file <C:\Hari\Work\SynergyProjects\T1xx_Synergy\BuildPrep\07.02.01_Work\Z_Work_2_6561_8807\GM_T1XX_EPS_RH850\generate\GENy\il_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 246078695
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __IL_PAR_H__ */
