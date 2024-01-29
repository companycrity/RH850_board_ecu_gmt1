/* header file for contract folder of CM200A */

#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

typedef struct
{
	uint32 DummyVar1;
	uint32 DummyVar2;
	uint32 DummyVar3;
	uint32 DummyVar4;
} MotCtrlFromTwoMilliSecRec1;

typedef struct
{
	uint32 DummyVar1;
	uint32 DummyVar2;
	uint32 DummyVar3;
	uint32 DummyVar4;
} TwoMilliSecToMotCtrlRec1;

typedef struct
{
	uint32 DummyVar1;
	uint32 DummyVar2;
	uint32 DummyVar3;
	uint32 DummyVar4;
} MotCtrlToTwoMilliSecRec1;

typedef struct
{
	uint32 DummyVar1;
	uint32 DummyVar2;
	uint32 DummyVar3;
	uint32 DummyVar4;
} TwoMilliSecFromMotCtrlRec1;

extern uint32 MOTCTRLMGR_MotCtrlMotAg0RawRes[];
extern uint32 MOTCTRLMGR_MotCtrlMotAg1RawRes[]; 
extern uint32 MOTCTRLMGR_MotCtrlAdc0RawRes[];
extern uint32 MOTCTRLMGR_MotCtrlTSG31DCMP0E;
extern uint32 MOTCTRLMGR_MotCtrlTSG31CMPWE;
extern TwoMilliSecToMotCtrlRec1 MotCtrlMgr_TwoMilliSecToMotCtrl_Rec;
extern MotCtrlFromTwoMilliSecRec1 MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec;
extern uint32 MOTCTRLMGR_MotCtrlAdc1RawRes[];
extern MotCtrlToTwoMilliSecRec1 MotCtrlMgr_MotCtrlToTwoMilliSec_Rec;
extern TwoMilliSecFromMotCtrlRec1 MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec;

#endif

