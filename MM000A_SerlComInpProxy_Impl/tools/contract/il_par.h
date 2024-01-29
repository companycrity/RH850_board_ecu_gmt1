#ifndef IL_PAR_H
#define IL_PAR_H

/* -----[ CAN Channel Handles ]----- */
#define CanRxPPEI_Engine_General_Status_1_HW_CHANNEL 1U
#define CanRxAntilock_Brake_and_TC_Status_HS_HW_CHANNEL 1U
#define CanRxLKA_Steering_Torque_Cmd_HS_HW_CHANNEL 1U
#define CanRxPPEI_Chassis_General_Status_1_HW_CHANNEL 1U
#define CanRxPPEI_Platform_General_Status_HW_CHANNEL 1U
#define CanRxPPEI_Trans_General_Status_2_HW_CHANNEL 1U
#define CanRxBrake_Pedal_Driver_Status_HS_HW_CHANNEL 1U
#define CanRxDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL 1U
#define CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL 1U
#define CanRxPPEI_Vehicle_Speed_and_Distance_HW_CHANNEL 1U
#define CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_CHANNEL 1U
#define CanRxPPEI_Engine_General_Status_5_HW_CHANNEL 1U
#define CanRxSteering_Torque_Command_CE_HW_CHANNEL 1U
#define CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_CHANNEL 1U
#define CanRxPark_Assist_Parallel_CE_HW_CHANNEL 1U
#define CanRxDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL 1U
#define CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL 1U
#define CanRxDriving_Mode_Control_HS_HW_CHANNEL 1U
#define CanRxPPEI_NonDrivn_Whl_Rotationl_Stat_HW_CHANNEL 1U
#define CanRxWheel_Pulses_HS_HW_CHANNEL 1U

/* -----[ CAN Message Handles ]----- */
#define CanRxPPEI_Engine_General_Status_1_HW_OBJ 1U
#define CanRxAntilock_Brake_and_TC_Status_HS_HW_OBJ 1U
#define CanRxLKA_Steering_Torque_Cmd_HS_HW_OBJ 1U
#define CanRxPPEI_Chassis_General_Status_1_HW_OBJ 1U
#define CanRxPPEI_Platform_General_Status_HW_OBJ 1U
#define CanRxPPEI_Trans_General_Status_2_HW_OBJ 1U
#define CanRxBrake_Pedal_Driver_Status_HS_HW_OBJ 1U
#define CanRxDriven_Wheel_Grnd_Velocity_HS_HW_OBJ 1U
#define CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_OBJ 1U
#define CanRxPPEI_Vehicle_Speed_and_Distance_HW_OBJ 1U
#define CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_OBJ 1U
#define CanRxPPEI_Engine_General_Status_5_HW_OBJ 1U
#define CanRxSteering_Torque_Command_CE_HW_OBJ 1U
#define CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_OBJ 1U
#define CanRxPark_Assist_Parallel_CE_HW_OBJ 1U
#define CanRxDriven_Wheel_Grnd_Velocity_CE_HW_OBJ 1U
#define CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_OBJ 1U
#define CanRxDriving_Mode_Control_HS_HW_OBJ 1U
#define CanRxPPEI_NonDrivn_Whl_Rotationl_Stat_HW_OBJ 1U
#define CanRxWheel_Pulses_HS_HW_OBJ 1U


/* -----[ "Indication Flags" ]----- */
extern uint8 PPEI_Engine_General_Status_1_ind_b;
extern uint8 Antilock_Brake_and_TC_Status_HS_ind_b;
extern uint8 LKA_Steering_Torque_Cmd_HS_ind_b;
extern uint8 PPEI_Chassis_General_Status_1_ind_b;
extern uint8 PPEI_Platform_General_Status_ind_b;
extern uint8 PPEI_Trans_General_Status_2_ind_b;
extern uint8 Brake_Pedal_Driver_Status_HS_ind_b;
extern uint8 Driven_Wheel_Grnd_Velocity_HS_ind_b;
extern uint8 NonDriven_Wheel_Grnd_Velocity_HS_ind_b;
extern uint8 PPEI_Vehicle_Speed_and_Distance_ind_b;
extern uint8 PPEI_Platform_Eng_Cntrl_Requests_ind_b;
extern uint8 PPEI_Engine_General_Status_5_ind_b;
extern uint8 Steering_Torque_Command_CE_ind_b;
extern uint8 Vehicle_Dynamics_ESC_Hyb_CE_ind_b;
extern uint8 Park_Assist_Parallel_CE_ind_b;
extern uint8 Driven_Wheel_Grnd_Velocity_CE_ind_b;
extern uint8 NonDriven_Wheel_Grnd_Velocity_CE_ind_b;
extern uint8 Driving_Mode_Control_HS_ind_b;
extern uint8 Wheel_Pulses_HS_ind_b;
extern uint8 PPEI_NonDrivn_Whl_Rotationl_Stat_ind_b;

FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Engine_General_Status_1_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncAntilock_Brake_and_TC_Status_HS_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncLKA_Steering_Torque_Cmd_HS_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Chassis_General_Status_1_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Platform_General_Status_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Trans_General_Status_2_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncBrake_Pedal_Driver_Status_HS_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncDriven_Wheel_Grnd_Velocity_HS_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncNonDriven_Wheel_Grnd_Velocity_HS_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Vehicle_Speed_and_Distance_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Platform_Eng_Cntrl_Requests_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Engine_General_Status_5_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncSteering_Torque_Command_CE_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncVehicle_Dynamics_ESC_Hyb_CE_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPark_Assist_Parallel_CE_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncDriven_Wheel_Grnd_Velocity_CE_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncNonDriven_Wheel_Grnd_Velocity_CE_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncDriving_Mode_Control_HS_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncWheel_Pulses_HS_ind_b(VAR(uint8, AUTOMATIC) Flag);
FUNC(void, AUTOMATIC) CanWriteSyncPPEI_NonDrivn_Whl_Rotationl_Stat_ind_b(VAR(uint8, AUTOMATIC) Flag);

/* -----[ Signal Access Macros ]----- */
FUNC(uint8, AUTOMATIC) IlGetRxEngRunAtv(void);
FUNC(uint16, AUTOMATIC) IlGetRxEngSpd(void);
FUNC(uint8, AUTOMATIC) IlGetRxEngSpdStat(void);
FUNC(uint8, AUTOMATIC) IlGetRxPT_CrnkAct(void);
FUNC(uint8, AUTOMATIC) IlGetRxVehStabEnhmntStat_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxLKATqOvrDltCmdPrtVl(void);
FUNC(uint8, AUTOMATIC) IlGetRxLKATqOvrDltCmdRC(void);
FUNC(uint8, AUTOMATIC) IlGetRxLKATODC_TrqRqAct(void);
FUNC(uint16, AUTOMATIC) IlGetRxLKATODC_TrqVl(void);
FUNC(uint8, AUTOMATIC) IlGetRxABSAtv_0(void);
FUNC(uint8, AUTOMATIC) IlGetRxABSFld(void);
FUNC(uint8, AUTOMATIC) IlGetRxTCSysAtv(void);
FUNC(uint8, AUTOMATIC) IlGetRxTCSysEnbld(void);
FUNC(uint8, AUTOMATIC) IlGetRxVhDynCntlSysSt(void);
FUNC(uint16, AUTOMATIC) IlGetRxVehDynYawRate(void);
FUNC(uint8, AUTOMATIC) IlGetRxVehDynYawRateV(void);
FUNC(uint8, AUTOMATIC) IlGetRxVSEAct_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxVSELatAcc(void);
FUNC(uint8, AUTOMATIC) IlGetRxVSELatAccV(void);
FUNC(uint8, AUTOMATIC) IlGetRxSysPwrMd(void);
FUNC(uint8, AUTOMATIC) IlGetRxSysBkUpPwrMd(void);
FUNC(uint8, AUTOMATIC) IlGetRxSysBkupPwrMdEn(void);
FUNC(uint8, AUTOMATIC) IlGetRxBkupPwrModeMstrVDA(void);
FUNC(uint8, AUTOMATIC) IlGetRxTrnsShftLvrPos(void);
FUNC(uint8, AUTOMATIC) IlGetRxTrnsShftLvrPosV(void);
FUNC(uint8, AUTOMATIC) IlGetRxABSActvProtPVal(void);
FUNC(uint8, AUTOMATIC) IlGetRxABSActvProt(void);
FUNC(uint8, AUTOMATIC) IlGetRxABSActvProtARC(void);
FUNC(uint8, AUTOMATIC) IlGetRxRedntVSEAct(void);
FUNC(uint8, AUTOMATIC) IlGetRxRedntVSEActARC(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyLftDrvn_0(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyLftDrvnV_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyRtDrvn_0(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyRtDrvnV_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyLftNnDrvn_0(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyLftNnDrvnV_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyRtNnDrvn_0(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyRtNnDrvnV_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxVehSpdAvgNDrvn(void);
FUNC(uint8, AUTOMATIC) IlGetRxVehSpdAvgNDrvnV(void);
FUNC(uint8, AUTOMATIC) IlGetRxOtsAirTmpCrVal(void);
FUNC(uint8, AUTOMATIC) IlGetRxOtsAirTmpCrValMsk(void);
FUNC(uint8, AUTOMATIC) IlGetRxOtsAirTmpCrValV(void);
FUNC(uint8, AUTOMATIC) IlGetRxEngOilTmp(void);
FUNC(uint8, AUTOMATIC) IlGetRxEngOilTmpV(void);
FUNC(uint8, AUTOMATIC) IlGetRxTrqOvrlARC(void);
FUNC(uint16, AUTOMATIC) IlGetRxTrqOvrlCmdChksm(void);
FUNC(uint8, AUTOMATIC) IlGetRxTqOvrDltTqCmdAct(void);
FUNC(uint16, AUTOMATIC) IlGetRxTqOvrDltTqCmdVl(void);
FUNC(uint8, AUTOMATIC) IlGetRxVehDynOvrUndrStrV_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxVSELongAccLoRes(void);
FUNC(uint8, AUTOMATIC) IlGetRxVSELongAccLoResV(void);
FUNC(uint8, AUTOMATIC) IlGetRxSWAR_ReqAct(void);
FUNC(uint8, AUTOMATIC) IlGetRxSWAR_ReqActV(void);
FUNC(uint32, AUTOMATIC) IlGetRxStrWhlAngReqPrtVal(void);
FUNC(uint8, AUTOMATIC) IlGetRxStrWhlAngReqARC(void);
FUNC(uint16, AUTOMATIC) IlGetRxSWAR_TrgtAng(void);
FUNC(uint8, AUTOMATIC) IlGetRxStrWhlTctlFdbkReqActProtVal(void);
FUNC(uint8, AUTOMATIC) IlGetRxStrWhlTctlFdbkReqAct(void);
FUNC(uint8, AUTOMATIC) IlGetRxStrWhlTctlFdbkReqActRC(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyLftDrvn_1(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyLftDrvnV_1(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyRtDrvn_1(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyRtDrvnV_1(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyLftNnDrvn_1(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyLftNnDrvnV_1(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlGrndVlctyRtNnDrvn_1(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlGrndVlctyRtNnDrvnV_1(void);
FUNC(uint8, AUTOMATIC) IlGetRxStgSysPerfMdRq(void);
FUNC(uint16, AUTOMATIC) IlGetRxWRSLNDWhlDistPCntr(void);
FUNC(uint16, AUTOMATIC) IlGetRxWRSLNDWhlDistTstm(void);
FUNC(uint16, AUTOMATIC) IlGetRxWRSRNDWhlDistPCntr(void);
FUNC(uint16, AUTOMATIC) IlGetRxWRSRNDWhlDistTstm(void);
FUNC(uint8, AUTOMATIC) IlGetRxWRSLNDWhlDistVal(void);
FUNC(uint8, AUTOMATIC) IlGetRxWRSLNDWhlRotStRst(void);
FUNC(uint8, AUTOMATIC) IlGetRxWRSLNDSeqNum(void);
FUNC(uint8, AUTOMATIC) IlGetRxWRSRNDWhlDistVal(void);
FUNC(uint8, AUTOMATIC) IlGetRxWRSRNDWhlRotStRst(void);
FUNC(uint8, AUTOMATIC) IlGetRxWRSRNDSeqNum(void);
FUNC(uint8, AUTOMATIC) IlGetRxWhlPlsPerRevNonDrvn_0(void);
FUNC(uint16, AUTOMATIC) IlGetRxWhlRotStatTmstmpRes(void);



/* -----[ Group Copy Macros ]----- */
FUNC(void, AUTOMATIC) IlGetRxVehDynOvrUndrStrGroup_0(void);
FUNC(void, AUTOMATIC) IlGetRxLKATqOvrDltCmd(void);
FUNC(void, AUTOMATIC) IlGetRxVSELatAccGroup(void);
FUNC(void, AUTOMATIC) IlGetRxBrkPdlDrvAppPrsDetcdGroup(void);
FUNC(void, AUTOMATIC) IlGetRxVehDynYawRateGroup(void);
FUNC(void, AUTOMATIC) IlGetRxBkupPwrModeMstrGroup(void);
FUNC(void, AUTOMATIC) IlGetRxTrnsShftLvrPosGroup(void);
FUNC(void, AUTOMATIC) IlGetRxTransEstGearGroup(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyLftDrvnGroup_0(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyRtDrvnGroup_0(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyLftNnDrvnGroup_0(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyRtNnDrvnGroup_0(void);
FUNC(void, AUTOMATIC) IlGetRxVehSpdAvgDrvnGroup_0(void);
FUNC(void, AUTOMATIC) IlGetRxVehSpdAvgNDrvnGroup(void);
FUNC(void, AUTOMATIC) IlGetRxDistRollCntAvgDrvnGroup(void);
FUNC(void, AUTOMATIC) IlGetRxDstRolCntAvgNonDrvnGroup(void);
FUNC(void, AUTOMATIC) IlGetRxEngOffTmExtRngGroup(void);
FUNC(void, AUTOMATIC) IlGetRxEngOilTmpGroup(void);
FUNC(void, AUTOMATIC) IlGetRxOtsAirTmpCrValGroup(void);
FUNC(void, AUTOMATIC) IlGetRxVSELongAccLoResGroup(void);
FUNC(void, AUTOMATIC) IlGetRxVehDynOvrUndrStrGroup_1(void);
FUNC(void, AUTOMATIC) IlGetRxStrWhlAngReq(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyLftDrvnGroup_1(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyRtDrvnGroup_1(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyLftNnDrvnGroup_1(void);
FUNC(void, AUTOMATIC) IlGetRxWhlGrndVlctyRtNnDrvnGroup_1(void);
FUNC(void, AUTOMATIC) IlGetRxWhlRotStatLftNDrvn(void);
FUNC(void, AUTOMATIC) IlGetRxWhlRotStatRghtNDrvn(void);

#endif
