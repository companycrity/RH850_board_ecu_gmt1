#ifndef IL_PAR_H
#define IL_PAR_H

typedef uint8 Il_Status;
typedef uint8 IlReceiveHandle;
extern Il_Status IlSetTxMessageEnable(IlReceiveHandle ilRxHnd, uint8 type);

FUNC(void, ATUOMATIC) IlPutTxStrWhAng_0(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngV_0(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngMsk_0(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhlAngSenCalStat_0(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhlAngSenTyp_0(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngGrd_0(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngGrdV_0(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngGrdMsk_0(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStWhlAngAliveRollCnt_0(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrAngSnsChksm_0(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAng_1(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngV_1(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngMsk_1(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhlAngSenCalStat_1(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhlAngSenTyp_1(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngGrd_1(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngGrdV_1(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrWhAngGrdMsk_1(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStWhlAngAliveRollCnt_1(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrAngSnsChksm_1(VAR(uint16, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxLKAElPwrStTtlTqDlvd(VAR(uint16, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxLKATrqOvrlTrqDStat(VAR(uint8, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxLKATrqOvrlDltTrqDlvd(VAR(uint16, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxHndsOffStrWhlDtMd(VAR(uint8, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxHndsOffStrWhlDtSt(VAR(uint8, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxHndsOffStrWhlDtStV(VAR(uint8, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxLKATrqOvrlStatChksm(VAR(uint16, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxLKATrqOvrlDlvdRC(VAR(uint8, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxLKADrvAppldTrq(VAR(uint16, AUTOMATIC) data);
FUNC(void, AUTOMATIC) IlPutTxLKADrvAppldTrqV(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxElPwrStTtlTqDlrd(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxTrqOvrlTrqDStat(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxTrqOvrlDvrdARC(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxTrqOvrlDltTrqDlrd(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxTrqOvrlDChksm(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxElecPwrStrAvalStat(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDrvStrIntfrDtcd(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDrvStrIntfrDtcdV(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDrvStrIntfrDetARC(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDrvStrIntfrDetPrtVal(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxElcPwrStrAvalStatARC(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxElcPwrStrAvalStatPVal(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxPwrStrIO(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrngAsstRdcdIO(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrAsstRdcdLvl2IO(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxStrAsstRdcdLvl3IO(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_CodeSupported_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_CurrentStatus_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_DTCFailType_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_DTCFaultType_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_DTCNumber_778(VAR(uint16, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_DTCSource_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_DTCTriggered_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_HistStat_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_TstFldCdClrdStat_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_TstFldPwrUpSt_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_TstNPsdCdClrdSt_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_TstNPsdPwrUpSt_778(VAR(uint8, AUTOMATIC) data);
FUNC(void, ATUOMATIC) IlPutTxDTCI_WrnIndRqdSt_778(VAR(uint8, AUTOMATIC) data);

FUNC(void, AUTOMATIC) IlPutTxStrWhAngGroup_0(void);
FUNC(void, AUTOMATIC) IlPutTxStrWhAngGrdGroup_0(void);
FUNC(void, AUTOMATIC) IlPutTxStrWhAngGroup_1(void);
FUNC(void, AUTOMATIC) IlPutTxStrWhAngGrdGroup_1(void);
FUNC(void, AUTOMATIC) IlPutTxDrvStrIntfrDtcdGroup(void);
FUNC(void, AUTOMATIC) IlPutTxHndsOffStrWhlDtStGroup(void);
FUNC(void, AUTOMATIC) IlPutTxLKADrvAppldTrqGroup(void);
FUNC(void, AUTOMATIC) IlPutTxDTCInfo_778(void);

#define IlTxMsgHndDTC_Triggered_778          0U
#define IlTxMsgHndPPEI_Steering_Wheel_Angle  1U
#define IlTxMsgHndLKA_Steering_Trq_Overlay_Stat_HS 2U
#define IlTxMsgHndPower_Steering_Information_HS 3U
#define IlTxMsgHndElectric_Power_Steering_CE 4U
#define IlTxMsgHndPPEI_Steering_Wheel_Angle_CE 5U
#define IlTxMsgHndSteering_Torque_Overlay_Stat_CE 6U

#endif
