%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 26-Jan-2017 17:39:29       %
%                                  Created with tool release: 2.45.0     %
%                                  Synergy file: %version: 28 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

AR300A = DataDict.FDD;
AR300A.Version = '1.0.X';
AR300A.LongName = 'Motor Control Manager';
AR300A.ShoName  = 'MotCtrlMgr';
AR300A.DesignASIL = 'D';
AR300A.Description = [...
  'This component handles runnable scheduling of MotorControl and MotorCo' ...
  'ntrolx2 runnables.  This also defines all of the Motor Control related' ...
  ' data and is resposible for the runnables providing the data interface' ...
  ' to the RTE.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotCtrlMgrPer1 = DataDict.Runnable;
MotCtrlMgrPer1.Context = 'Rte';
MotCtrlMgrPer1.TimeStep = 0.002;
MotCtrlMgrPer1.Description = '';

MotCtrlMgrPer2 = DataDict.Runnable;
MotCtrlMgrPer2.Context = 'Rte';
MotCtrlMgrPer2.TimeStep = 0.002;
MotCtrlMgrPer2.Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
DmaEna2MilliSecToMotCtrlTrf = DataDict.Client;
DmaEna2MilliSecToMotCtrlTrf.CallLocation = {'MotCtrlMgrPer2'};
DmaEna2MilliSecToMotCtrlTrf.Description = '';
DmaEna2MilliSecToMotCtrlTrf.Return = DataDict.CSReturn;
DmaEna2MilliSecToMotCtrlTrf.Return.Type = 'None';
DmaEna2MilliSecToMotCtrlTrf.Return.Min = [];
DmaEna2MilliSecToMotCtrlTrf.Return.Max = [];
DmaEna2MilliSecToMotCtrlTrf.Return.TestTolerance = [];


DmaWaitForMotCtrlTo2MilliSecTrf = DataDict.Client;
DmaWaitForMotCtrlTo2MilliSecTrf.CallLocation = {'MotCtrlMgrPer1'};
DmaWaitForMotCtrlTo2MilliSecTrf.Description = '';
DmaWaitForMotCtrlTo2MilliSecTrf.Return = DataDict.CSReturn;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Type = 'Standard';
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Min = 0;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Max = 1;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.TestTolerance = [];
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AdcDiagcEndPtrOutp = DataDict.IpSignal;
AdcDiagcEndPtrOutp.LongName = 'AdcDiagcEndPtrOutp';
AdcDiagcEndPtrOutp.Description = '';
AdcDiagcEndPtrOutp.DocUnits = 'Cnt';
AdcDiagcEndPtrOutp.EngDT = dt.u08;
AdcDiagcEndPtrOutp.EngInit = 23;
AdcDiagcEndPtrOutp.EngMin = 21;
AdcDiagcEndPtrOutp.EngMax = 23;
AdcDiagcEndPtrOutp.ReadIn = {'MotCtrlMgrPer2'};
AdcDiagcEndPtrOutp.ReadType = 'Rte';


AdcDiagcStrtPtrOutp = DataDict.IpSignal;
AdcDiagcStrtPtrOutp.LongName = 'AdcDiagcStrtPtrOutp';
AdcDiagcStrtPtrOutp.Description = '';
AdcDiagcStrtPtrOutp.DocUnits = 'Cnt';
AdcDiagcStrtPtrOutp.EngDT = dt.u08;
AdcDiagcStrtPtrOutp.EngInit = 21;
AdcDiagcStrtPtrOutp.EngMin = 21;
AdcDiagcStrtPtrOutp.EngMax = 23;
AdcDiagcStrtPtrOutp.ReadIn = {'MotCtrlMgrPer2'};
AdcDiagcStrtPtrOutp.ReadType = 'Rte';


BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'BrdgVltg';
BrdgVltg.Description = '';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 2;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'MotCtrlMgrPer2'};
BrdgVltg.ReadType = 'Rte';


CurrMeasCorrlnSts = DataDict.IpSignal;
CurrMeasCorrlnSts.LongName = 'CurrMeasCorrlnSts';
CurrMeasCorrlnSts.Description = '';
CurrMeasCorrlnSts.DocUnits = 'Cnt';
CurrMeasCorrlnSts.EngDT = dt.u08;
CurrMeasCorrlnSts.EngInit = 63;
CurrMeasCorrlnSts.EngMin = 0;
CurrMeasCorrlnSts.EngMax = 63;
CurrMeasCorrlnSts.ReadIn = {'MotCtrlMgrPer2'};
CurrMeasCorrlnSts.ReadType = 'Rte';


CurrMeasLoaMtgtnEna = DataDict.IpSignal;
CurrMeasLoaMtgtnEna.LongName = 'CurrMeasLoaMtgtnEna';
CurrMeasLoaMtgtnEna.Description = '';
CurrMeasLoaMtgtnEna.DocUnits = 'Cnt';
CurrMeasLoaMtgtnEna.EngDT = dt.lgc;
CurrMeasLoaMtgtnEna.EngInit = 0;
CurrMeasLoaMtgtnEna.EngMin = 0;
CurrMeasLoaMtgtnEna.EngMax = 1;
CurrMeasLoaMtgtnEna.ReadIn = {'MotCtrlMgrPer2'};
CurrMeasLoaMtgtnEna.ReadType = 'Rte';


CurrMeasWrmIninTestCmpl = DataDict.IpSignal;
CurrMeasWrmIninTestCmpl.LongName = 'CurrMeasWrmIninTestCmpl';
CurrMeasWrmIninTestCmpl.Description = '';
CurrMeasWrmIninTestCmpl.DocUnits = 'Cnt';
CurrMeasWrmIninTestCmpl.EngDT = dt.lgc;
CurrMeasWrmIninTestCmpl.EngInit = 0;
CurrMeasWrmIninTestCmpl.EngMin = 0;
CurrMeasWrmIninTestCmpl.EngMax = 1;
CurrMeasWrmIninTestCmpl.ReadIn = {'MotCtrlMgrPer2'};
CurrMeasWrmIninTestCmpl.ReadType = 'Rte';


DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'DiagcStsIvtr1Inactv';
DiagcStsIvtr1Inactv.Description = '';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'MotCtrlMgrPer2'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.IpSignal;
DiagcStsIvtr2Inactv.LongName = 'DiagcStsIvtr2Inactv';
DiagcStsIvtr2Inactv.Description = '';
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.ReadIn = {'MotCtrlMgrPer2'};
DiagcStsIvtr2Inactv.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'EcuTFild';
EcuTFild.Description = '';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'MotCtrlMgrPer2'};
EcuTFild.ReadType = 'Rte';


IvtrLoaMtgtnEna = DataDict.IpSignal;
IvtrLoaMtgtnEna.LongName = 'IvtrLoaMtgtnEna';
IvtrLoaMtgtnEna.Description = '';
IvtrLoaMtgtnEna.DocUnits = 'Cnt';
IvtrLoaMtgtnEna.EngDT = dt.lgc;
IvtrLoaMtgtnEna.EngInit = 0;
IvtrLoaMtgtnEna.EngMin = 0;
IvtrLoaMtgtnEna.EngMax = 1;
IvtrLoaMtgtnEna.ReadIn = {'MotCtrlMgrPer2'};
IvtrLoaMtgtnEna.ReadType = 'Rte';


LoopCntr2MilliSec = DataDict.IpSignal;
LoopCntr2MilliSec.LongName = 'LoopCntr2MilliSec';
LoopCntr2MilliSec.Description = '';
LoopCntr2MilliSec.DocUnits = 'Cnt';
LoopCntr2MilliSec.EngDT = dt.u16;
LoopCntr2MilliSec.EngInit = 0;
LoopCntr2MilliSec.EngMin = 0;
LoopCntr2MilliSec.EngMax = 65535;
LoopCntr2MilliSec.ReadIn = {'MotCtrlMgrPer2'};
LoopCntr2MilliSec.ReadType = 'Rte';


MotAgElecDly = DataDict.IpSignal;
MotAgElecDly.LongName = 'MotAgElecDly';
MotAgElecDly.Description = '';
MotAgElecDly.DocUnits = 'MotRad';
MotAgElecDly.EngDT = dt.float32;
MotAgElecDly.EngInit = 0;
MotAgElecDly.EngMin = -1.5;
MotAgElecDly.EngMax = 1.5;
MotAgElecDly.ReadIn = {'MotCtrlMgrPer2'};
MotAgElecDly.ReadType = 'Rte';


MotAgElecDlyRpl = DataDict.IpSignal;
MotAgElecDlyRpl.LongName = 'MotAgElecDlyRpl';
MotAgElecDlyRpl.Description = '';
MotAgElecDlyRpl.DocUnits = 'MotRad';
MotAgElecDlyRpl.EngDT = dt.float32;
MotAgElecDlyRpl.EngInit = 0;
MotAgElecDlyRpl.EngMin = -1.62;
MotAgElecDlyRpl.EngMax = 1.62;
MotAgElecDlyRpl.ReadIn = {'MotCtrlMgrPer2'};
MotAgElecDlyRpl.ReadType = 'Rte';


MotAgMecl0Polarity = DataDict.IpSignal;
MotAgMecl0Polarity.LongName = 'MotAgMecl0Polarity';
MotAgMecl0Polarity.Description = '';
MotAgMecl0Polarity.DocUnits = 'Uls';
MotAgMecl0Polarity.EngDT = dt.s08;
MotAgMecl0Polarity.EngInit = 1;
MotAgMecl0Polarity.EngMin = -1;
MotAgMecl0Polarity.EngMax = 1;
MotAgMecl0Polarity.ReadIn = {'MotCtrlMgrPer2'};
MotAgMecl0Polarity.ReadType = 'Rte';


MotAgMecl1Polarity = DataDict.IpSignal;
MotAgMecl1Polarity.LongName = 'MotAgMecl1Polarity';
MotAgMecl1Polarity.Description = '';
MotAgMecl1Polarity.DocUnits = 'Uls';
MotAgMecl1Polarity.EngDT = dt.s08;
MotAgMecl1Polarity.EngInit = 1;
MotAgMecl1Polarity.EngMin = -1;
MotAgMecl1Polarity.EngMax = 1;
MotAgMecl1Polarity.ReadIn = {'MotCtrlMgrPer2'};
MotAgMecl1Polarity.ReadType = 'Rte';


MotAgMeclCorrlnSt = DataDict.IpSignal;
MotAgMeclCorrlnSt.LongName = 'MotAgMeclCorrlnSt';
MotAgMeclCorrlnSt.Description = '';
MotAgMeclCorrlnSt.DocUnits = 'Cnt';
MotAgMeclCorrlnSt.EngDT = dt.u08;
MotAgMeclCorrlnSt.EngInit = 7;
MotAgMeclCorrlnSt.EngMin = 0;
MotAgMeclCorrlnSt.EngMax = 7;
MotAgMeclCorrlnSt.ReadIn = {'MotCtrlMgrPer2'};
MotAgMeclCorrlnSt.ReadType = 'Rte';


MotCurrAdcVlyAAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyAAdcFaild.LongName = 'MotCurrAdcVlyAAdcFaild';
MotCurrAdcVlyAAdcFaild.Description = '';
MotCurrAdcVlyAAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyAAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyAAdcFaild.EngInit = 0;
MotCurrAdcVlyAAdcFaild.EngMin = 0;
MotCurrAdcVlyAAdcFaild.EngMax = 1;
MotCurrAdcVlyAAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyAAdcFaild.ReadType = 'Rte';


MotCurrAdcVlyBAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyBAdcFaild.LongName = 'MotCurrAdcVlyBAdcFaild';
MotCurrAdcVlyBAdcFaild.Description = '';
MotCurrAdcVlyBAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyBAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyBAdcFaild.EngInit = 0;
MotCurrAdcVlyBAdcFaild.EngMin = 0;
MotCurrAdcVlyBAdcFaild.EngMax = 1;
MotCurrAdcVlyBAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyBAdcFaild.ReadType = 'Rte';


MotCurrAdcVlyCAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyCAdcFaild.LongName = 'MotCurrAdcVlyCAdcFaild';
MotCurrAdcVlyCAdcFaild.Description = '';
MotCurrAdcVlyCAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyCAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyCAdcFaild.EngInit = 0;
MotCurrAdcVlyCAdcFaild.EngMin = 0;
MotCurrAdcVlyCAdcFaild.EngMax = 1;
MotCurrAdcVlyCAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyCAdcFaild.ReadType = 'Rte';


MotCurrAdcVlyDAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyDAdcFaild.LongName = 'MotCurrAdcVlyDAdcFaild';
MotCurrAdcVlyDAdcFaild.Description = '';
MotCurrAdcVlyDAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyDAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyDAdcFaild.EngInit = 0;
MotCurrAdcVlyDAdcFaild.EngMin = 0;
MotCurrAdcVlyDAdcFaild.EngMax = 1;
MotCurrAdcVlyDAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyDAdcFaild.ReadType = 'Rte';


MotCurrAdcVlyEAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyEAdcFaild.LongName = 'MotCurrAdcVlyEAdcFaild';
MotCurrAdcVlyEAdcFaild.Description = '';
MotCurrAdcVlyEAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyEAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyEAdcFaild.EngInit = 0;
MotCurrAdcVlyEAdcFaild.EngMin = 0;
MotCurrAdcVlyEAdcFaild.EngMax = 1;
MotCurrAdcVlyEAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyEAdcFaild.ReadType = 'Rte';


MotCurrAdcVlyFAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyFAdcFaild.LongName = 'MotCurrAdcVlyFAdcFaild';
MotCurrAdcVlyFAdcFaild.Description = '';
MotCurrAdcVlyFAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyFAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyFAdcFaild.EngInit = 0;
MotCurrAdcVlyFAdcFaild.EngMin = 0;
MotCurrAdcVlyFAdcFaild.EngMax = 1;
MotCurrAdcVlyFAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyFAdcFaild.ReadType = 'Rte';


MotCurrDaxCmd = DataDict.IpSignal;
MotCurrDaxCmd.LongName = 'MotCurrDaxCmd';
MotCurrDaxCmd.Description = '';
MotCurrDaxCmd.DocUnits = 'Ampr';
MotCurrDaxCmd.EngDT = dt.float32;
MotCurrDaxCmd.EngInit = 0;
MotCurrDaxCmd.EngMin = 0;
MotCurrDaxCmd.EngMax = 200;
MotCurrDaxCmd.ReadIn = {'MotCtrlMgrPer2'};
MotCurrDaxCmd.ReadType = 'Rte';


MotCurrDaxMax = DataDict.IpSignal;
MotCurrDaxMax.LongName = 'MotCurrDaxMax';
MotCurrDaxMax.Description = '';
MotCurrDaxMax.DocUnits = 'Ampr';
MotCurrDaxMax.EngDT = dt.float32;
MotCurrDaxMax.EngInit = 0;
MotCurrDaxMax.EngMin = 0;
MotCurrDaxMax.EngMax = 200;
MotCurrDaxMax.ReadIn = {'MotCtrlMgrPer2'};
MotCurrDaxMax.ReadType = 'Rte';


MotCurrEolCalSt = DataDict.IpSignal;
MotCurrEolCalSt.LongName = 'MotCurrEolCalSt';
MotCurrEolCalSt.Description = '';
MotCurrEolCalSt.DocUnits = 'Cnt';
MotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMin = 0;
MotCurrEolCalSt.EngMax = 8;
MotCurrEolCalSt.ReadIn = {'MotCtrlMgrPer2'};
MotCurrEolCalSt.ReadType = 'Rte';


MotCurrQaxCmd = DataDict.IpSignal;
MotCurrQaxCmd.LongName = 'MotCurrQaxCmd';
MotCurrQaxCmd.Description = '';
MotCurrQaxCmd.DocUnits = 'Ampr';
MotCurrQaxCmd.EngDT = dt.float32;
MotCurrQaxCmd.EngInit = 0;
MotCurrQaxCmd.EngMin = -200;
MotCurrQaxCmd.EngMax = 200;
MotCurrQaxCmd.ReadIn = {'MotCtrlMgrPer2'};
MotCurrQaxCmd.ReadType = 'Rte';


MotCurrQaxToMotTqGain = DataDict.IpSignal;
MotCurrQaxToMotTqGain.LongName = 'MotCurrQaxToMotTqGain';
MotCurrQaxToMotTqGain.Description = '';
MotCurrQaxToMotTqGain.DocUnits = 'VoltPerMotRadPerSec';
MotCurrQaxToMotTqGain.EngDT = dt.float32;
MotCurrQaxToMotTqGain.EngInit = 0.021651;
MotCurrQaxToMotTqGain.EngMin = 0.021651;
MotCurrQaxToMotTqGain.EngMax = 0.406952;
MotCurrQaxToMotTqGain.ReadIn = {'MotCtrlMgrPer2'};
MotCurrQaxToMotTqGain.ReadType = 'Rte';


MotCurrQlfr1 = DataDict.IpSignal;
MotCurrQlfr1.LongName = 'MotCurrQlfr1';
MotCurrQlfr1.Description = '';
MotCurrQlfr1.DocUnits = 'Cnt';
MotCurrQlfr1.EngDT = enum.SigQlfr1;
MotCurrQlfr1.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr1.EngMin = 0;
MotCurrQlfr1.EngMax = 2;
MotCurrQlfr1.ReadIn = {'MotCtrlMgrPer2'};
MotCurrQlfr1.ReadType = 'Rte';


MotCurrQlfr2 = DataDict.IpSignal;
MotCurrQlfr2.LongName = 'MotCurrQlfr2';
MotCurrQlfr2.Description = '';
MotCurrQlfr2.DocUnits = 'Cnt';
MotCurrQlfr2.EngDT = enum.SigQlfr1;
MotCurrQlfr2.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr2.EngMin = 0;
MotCurrQlfr2.EngMax = 2;
MotCurrQlfr2.ReadIn = {'MotCtrlMgrPer2'};
MotCurrQlfr2.ReadType = 'Rte';


MotDampgDax = DataDict.IpSignal;
MotDampgDax.LongName = 'MotDampgDax';
MotDampgDax.Description = '';
MotDampgDax.DocUnits = 'Ohm';
MotDampgDax.EngDT = dt.float32;
MotDampgDax.EngInit = 0;
MotDampgDax.EngMin = -0.11;
MotDampgDax.EngMax = 5.5;
MotDampgDax.ReadIn = {'MotCtrlMgrPer2'};
MotDampgDax.ReadType = 'Rte';


MotDampgQax = DataDict.IpSignal;
MotDampgQax.LongName = 'MotDampgQax';
MotDampgQax.Description = '';
MotDampgQax.DocUnits = 'Ohm';
MotDampgQax.EngDT = dt.float32;
MotDampgQax.EngInit = 0;
MotDampgQax.EngMin = -0.11;
MotDampgQax.EngMax = 5.5;
MotDampgQax.ReadIn = {'MotCtrlMgrPer2'};
MotDampgQax.ReadType = 'Rte';


MotElecMeclPolarity = DataDict.IpSignal;
MotElecMeclPolarity.LongName = 'MotElecMeclPolarity';
MotElecMeclPolarity.Description = '';
MotElecMeclPolarity.DocUnits = 'Uls';
MotElecMeclPolarity.EngDT = dt.s08;
MotElecMeclPolarity.EngInit = 1;
MotElecMeclPolarity.EngMin = -1;
MotElecMeclPolarity.EngMax = 1;
MotElecMeclPolarity.ReadIn = {'MotCtrlMgrPer2'};
MotElecMeclPolarity.ReadType = 'Rte';


MotIntglGainDax = DataDict.IpSignal;
MotIntglGainDax.LongName = 'MotIntglGainDax';
MotIntglGainDax.Description = '';
MotIntglGainDax.DocUnits = 'Ohm';
MotIntglGainDax.EngDT = dt.float32;
MotIntglGainDax.EngInit = 0;
MotIntglGainDax.EngMin = 0;
MotIntglGainDax.EngMax = 0.6;
MotIntglGainDax.ReadIn = {'MotCtrlMgrPer2'};
MotIntglGainDax.ReadType = 'Rte';


MotIntglGainQax = DataDict.IpSignal;
MotIntglGainQax.LongName = 'MotIntglGainQax';
MotIntglGainQax.Description = '';
MotIntglGainQax.DocUnits = 'Ohm';
MotIntglGainQax.EngDT = dt.float32;
MotIntglGainQax.EngInit = 0;
MotIntglGainQax.EngMin = 0;
MotIntglGainQax.EngMax = 0.6;
MotIntglGainQax.ReadIn = {'MotCtrlMgrPer2'};
MotIntglGainQax.ReadType = 'Rte';


MotPropGainDax = DataDict.IpSignal;
MotPropGainDax.LongName = 'MotPropGainDax';
MotPropGainDax.Description = '';
MotPropGainDax.DocUnits = 'Ohm';
MotPropGainDax.EngDT = dt.float32;
MotPropGainDax.EngInit = 0;
MotPropGainDax.EngMin = 0;
MotPropGainDax.EngMax = 2.25;
MotPropGainDax.ReadIn = {'MotCtrlMgrPer2'};
MotPropGainDax.ReadType = 'Rte';


MotPropGainQax = DataDict.IpSignal;
MotPropGainQax.LongName = 'MotPropGainQax';
MotPropGainQax.Description = '';
MotPropGainQax.DocUnits = 'Ohm';
MotPropGainQax.EngDT = dt.float32;
MotPropGainQax.EngInit = 0;
MotPropGainQax.EngMin = 0;
MotPropGainQax.EngMax = 2.25;
MotPropGainQax.ReadIn = {'MotCtrlMgrPer2'};
MotPropGainQax.ReadType = 'Rte';


MotREstimd = DataDict.IpSignal;
MotREstimd.LongName = 'MotREstimd';
MotREstimd.Description = '';
MotREstimd.DocUnits = 'Ohm';
MotREstimd.EngDT = dt.float32;
MotREstimd.EngInit = 0.005;
MotREstimd.EngMin = 0.005;
MotREstimd.EngMax = 0.12565;
MotREstimd.ReadIn = {'MotCtrlMgrPer2'};
MotREstimd.ReadType = 'Rte';


MotReacncDax = DataDict.IpSignal;
MotReacncDax.LongName = 'MotReacncDax';
MotReacncDax.Description = '';
MotReacncDax.DocUnits = 'Ohm';
MotReacncDax.EngDT = dt.float32;
MotReacncDax.EngInit = 0;
MotReacncDax.EngMin = -2.87607;
MotReacncDax.EngMax = 2.87607;
MotReacncDax.ReadIn = {'MotCtrlMgrPer2'};
MotReacncDax.ReadType = 'Rte';


MotReacncQax = DataDict.IpSignal;
MotReacncQax.LongName = 'MotReacncQax';
MotReacncQax.Description = '';
MotReacncQax.DocUnits = 'Ohm';
MotReacncQax.EngDT = dt.float32;
MotReacncQax.EngInit = 0;
MotReacncQax.EngMin = -2.87607;
MotReacncQax.EngMax = 2.87607;
MotReacncQax.ReadIn = {'MotCtrlMgrPer2'};
MotReacncQax.ReadType = 'Rte';


MotTqRplCoggOrder1Mgn = DataDict.IpSignal;
MotTqRplCoggOrder1Mgn.LongName = 'MotTqRplCoggOrder1Mgn';
MotTqRplCoggOrder1Mgn.Description = '';
MotTqRplCoggOrder1Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder1Mgn.EngDT = dt.float32;
MotTqRplCoggOrder1Mgn.EngInit = 0;
MotTqRplCoggOrder1Mgn.EngMin = 0;
MotTqRplCoggOrder1Mgn.EngMax = 0.5;
MotTqRplCoggOrder1Mgn.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder1Mgn.ReadType = 'Rte';


MotTqRplCoggOrder1Pha = DataDict.IpSignal;
MotTqRplCoggOrder1Pha.LongName = 'MotTqRplCoggOrder1Pha';
MotTqRplCoggOrder1Pha.Description = '';
MotTqRplCoggOrder1Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder1Pha.EngDT = dt.float32;
MotTqRplCoggOrder1Pha.EngInit = 0;
MotTqRplCoggOrder1Pha.EngMin = 0;
MotTqRplCoggOrder1Pha.EngMax = 6.2831853;
MotTqRplCoggOrder1Pha.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder1Pha.ReadType = 'Rte';


MotTqRplCoggOrder2Mgn = DataDict.IpSignal;
MotTqRplCoggOrder2Mgn.LongName = 'MotTqRplCoggOrder2Mgn';
MotTqRplCoggOrder2Mgn.Description = '';
MotTqRplCoggOrder2Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder2Mgn.EngDT = dt.float32;
MotTqRplCoggOrder2Mgn.EngInit = 0;
MotTqRplCoggOrder2Mgn.EngMin = 0;
MotTqRplCoggOrder2Mgn.EngMax = 0.5;
MotTqRplCoggOrder2Mgn.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder2Mgn.ReadType = 'Rte';


MotTqRplCoggOrder2Pha = DataDict.IpSignal;
MotTqRplCoggOrder2Pha.LongName = 'MotTqRplCoggOrder2Pha';
MotTqRplCoggOrder2Pha.Description = '';
MotTqRplCoggOrder2Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder2Pha.EngDT = dt.float32;
MotTqRplCoggOrder2Pha.EngInit = 0;
MotTqRplCoggOrder2Pha.EngMin = 0;
MotTqRplCoggOrder2Pha.EngMax = 6.2831853;
MotTqRplCoggOrder2Pha.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder2Pha.ReadType = 'Rte';


MotTqRplCoggOrder3Mgn = DataDict.IpSignal;
MotTqRplCoggOrder3Mgn.LongName = 'MotTqRplCoggOrder3Mgn';
MotTqRplCoggOrder3Mgn.Description = '';
MotTqRplCoggOrder3Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder3Mgn.EngDT = dt.float32;
MotTqRplCoggOrder3Mgn.EngInit = 0;
MotTqRplCoggOrder3Mgn.EngMin = 0;
MotTqRplCoggOrder3Mgn.EngMax = 0.5;
MotTqRplCoggOrder3Mgn.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder3Mgn.ReadType = 'Rte';


MotTqRplCoggOrder3Pha = DataDict.IpSignal;
MotTqRplCoggOrder3Pha.LongName = 'MotTqRplCoggOrder3Pha';
MotTqRplCoggOrder3Pha.Description = '';
MotTqRplCoggOrder3Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder3Pha.EngDT = dt.float32;
MotTqRplCoggOrder3Pha.EngInit = 0;
MotTqRplCoggOrder3Pha.EngMin = 0;
MotTqRplCoggOrder3Pha.EngMax = 6.2831853;
MotTqRplCoggOrder3Pha.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder3Pha.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'MotVelMrf';
MotVelMrf.Description = '';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'MotCtrlMgrPer2'};
MotVelMrf.ReadType = 'Rte';


MotVltgDaxFf = DataDict.IpSignal;
MotVltgDaxFf.LongName = 'MotVltgDaxFf';
MotVltgDaxFf.Description = '';
MotVltgDaxFf.DocUnits = 'Volt';
MotVltgDaxFf.EngDT = dt.float32;
MotVltgDaxFf.EngInit = 0;
MotVltgDaxFf.EngMin = -26.5;
MotVltgDaxFf.EngMax = 26.5;
MotVltgDaxFf.ReadIn = {'MotCtrlMgrPer2'};
MotVltgDaxFf.ReadType = 'Rte';


MotVltgQaxFf = DataDict.IpSignal;
MotVltgQaxFf.LongName = 'MotVltgQaxFf';
MotVltgQaxFf.Description = '';
MotVltgQaxFf.DocUnits = 'Volt';
MotVltgQaxFf.EngDT = dt.float32;
MotVltgQaxFf.EngInit = 0;
MotVltgQaxFf.EngMin = -101.25;
MotVltgQaxFf.EngMax = 101.25;
MotVltgQaxFf.ReadIn = {'MotCtrlMgrPer2'};
MotVltgQaxFf.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'SysSt';
SysSt.Description = '';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = 0;
SysSt.EngMax = 3;
SysSt.ReadIn = {'MotCtrlMgrPer2'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Adc0ScanGroup2Ref0 = DataDict.OpSignal;
Adc0ScanGroup2Ref0.LongName = 'Adc0ScanGroup2Ref0';
Adc0ScanGroup2Ref0.Description = 'Adc0ScanGroup2Ref0';
Adc0ScanGroup2Ref0.DocUnits = 'Volt';
Adc0ScanGroup2Ref0.SwcShoName = 'MotCtrlMgr';
Adc0ScanGroup2Ref0.EngDT = dt.float32;
Adc0ScanGroup2Ref0.EngInit = 0;
Adc0ScanGroup2Ref0.EngMin = 0;
Adc0ScanGroup2Ref0.EngMax = 5;
Adc0ScanGroup2Ref0.TestTolerance = 0;
Adc0ScanGroup2Ref0.WrittenIn = {'MotCtrlMgrPer1'};
Adc0ScanGroup2Ref0.WriteType = 'Rte';


Adc0ScanGroup2Ref1 = DataDict.OpSignal;
Adc0ScanGroup2Ref1.LongName = 'Adc0ScanGroup2Ref1';
Adc0ScanGroup2Ref1.Description = 'Adc0ScanGroup2Ref1';
Adc0ScanGroup2Ref1.DocUnits = 'Volt';
Adc0ScanGroup2Ref1.SwcShoName = 'MotCtrlMgr';
Adc0ScanGroup2Ref1.EngDT = dt.float32;
Adc0ScanGroup2Ref1.EngInit = 0;
Adc0ScanGroup2Ref1.EngMin = 0;
Adc0ScanGroup2Ref1.EngMax = 5;
Adc0ScanGroup2Ref1.TestTolerance = 0;
Adc0ScanGroup2Ref1.WrittenIn = {'MotCtrlMgrPer1'};
Adc0ScanGroup2Ref1.WriteType = 'Rte';


Adc0ScanGroup3Ref0 = DataDict.OpSignal;
Adc0ScanGroup3Ref0.LongName = 'Adc0ScanGroup3Ref0';
Adc0ScanGroup3Ref0.Description = 'Adc0ScanGroup3Ref0';
Adc0ScanGroup3Ref0.DocUnits = 'Volt';
Adc0ScanGroup3Ref0.SwcShoName = 'MotCtrlMgr';
Adc0ScanGroup3Ref0.EngDT = dt.float32;
Adc0ScanGroup3Ref0.EngInit = 0;
Adc0ScanGroup3Ref0.EngMin = 0;
Adc0ScanGroup3Ref0.EngMax = 5;
Adc0ScanGroup3Ref0.TestTolerance = 0;
Adc0ScanGroup3Ref0.WrittenIn = {'MotCtrlMgrPer1'};
Adc0ScanGroup3Ref0.WriteType = 'Rte';


Adc0ScanGroup3Ref1 = DataDict.OpSignal;
Adc0ScanGroup3Ref1.LongName = 'Adc0ScanGroup3Ref1';
Adc0ScanGroup3Ref1.Description = 'Adc0ScanGroup3Ref1';
Adc0ScanGroup3Ref1.DocUnits = 'Volt';
Adc0ScanGroup3Ref1.SwcShoName = 'MotCtrlMgr';
Adc0ScanGroup3Ref1.EngDT = dt.float32;
Adc0ScanGroup3Ref1.EngInit = 0;
Adc0ScanGroup3Ref1.EngMin = 0;
Adc0ScanGroup3Ref1.EngMax = 5;
Adc0ScanGroup3Ref1.TestTolerance = 0;
Adc0ScanGroup3Ref1.WrittenIn = {'MotCtrlMgrPer1'};
Adc0ScanGroup3Ref1.WriteType = 'Rte';


Adc0SelfDiag0 = DataDict.OpSignal;
Adc0SelfDiag0.LongName = 'Adc0SelfDiag0';
Adc0SelfDiag0.Description = 'Adc0SelfDiag0';
Adc0SelfDiag0.DocUnits = 'Volt';
Adc0SelfDiag0.SwcShoName = 'MotCtrlMgr';
Adc0SelfDiag0.EngDT = dt.float32;
Adc0SelfDiag0.EngInit = 0;
Adc0SelfDiag0.EngMin = 0;
Adc0SelfDiag0.EngMax = 5;
Adc0SelfDiag0.TestTolerance = 0;
Adc0SelfDiag0.WrittenIn = {'MotCtrlMgrPer1'};
Adc0SelfDiag0.WriteType = 'Rte';


Adc0SelfDiag2 = DataDict.OpSignal;
Adc0SelfDiag2.LongName = 'Adc0SelfDiag2';
Adc0SelfDiag2.Description = 'Adc0SelfDiag2';
Adc0SelfDiag2.DocUnits = 'Volt';
Adc0SelfDiag2.SwcShoName = 'MotCtrlMgr';
Adc0SelfDiag2.EngDT = dt.float32;
Adc0SelfDiag2.EngInit = 0;
Adc0SelfDiag2.EngMin = 0;
Adc0SelfDiag2.EngMax = 5;
Adc0SelfDiag2.TestTolerance = 0;
Adc0SelfDiag2.WrittenIn = {'MotCtrlMgrPer1'};
Adc0SelfDiag2.WriteType = 'Rte';


Adc0SelfDiag4 = DataDict.OpSignal;
Adc0SelfDiag4.LongName = 'Adc0SelfDiag4';
Adc0SelfDiag4.Description = 'Adc0SelfDiag4';
Adc0SelfDiag4.DocUnits = 'Volt';
Adc0SelfDiag4.SwcShoName = 'MotCtrlMgr';
Adc0SelfDiag4.EngDT = dt.float32;
Adc0SelfDiag4.EngInit = 0;
Adc0SelfDiag4.EngMin = 0;
Adc0SelfDiag4.EngMax = 5;
Adc0SelfDiag4.TestTolerance = 0;
Adc0SelfDiag4.WrittenIn = {'MotCtrlMgrPer1'};
Adc0SelfDiag4.WriteType = 'Rte';


FastLoopCntr = DataDict.OpSignal;
FastLoopCntr.LongName = 'FastLoopCntr';
FastLoopCntr.Description = 'FastLoopCntr';
FastLoopCntr.DocUnits = 'Cnt';
FastLoopCntr.SwcShoName = 'MotCtrlMgr';
FastLoopCntr.EngDT = dt.u16;
FastLoopCntr.EngInit = 0;
FastLoopCntr.EngMin = 0;
FastLoopCntr.EngMax = 65535;
FastLoopCntr.TestTolerance = 0;
FastLoopCntr.WrittenIn = {'MotCtrlMgrPer1'};
FastLoopCntr.WriteType = 'Rte';


MotAg0ErrReg = DataDict.OpSignal;
MotAg0ErrReg.LongName = 'MotAg0ErrReg';
MotAg0ErrReg.Description = 'MotAg0ErrReg';
MotAg0ErrReg.DocUnits = 'Cnt';
MotAg0ErrReg.SwcShoName = 'MotCtrlMgr';
MotAg0ErrReg.EngDT = dt.u32;
MotAg0ErrReg.EngInit = 0;
MotAg0ErrReg.EngMin = 0;
MotAg0ErrReg.EngMax = 67108863;
MotAg0ErrReg.TestTolerance = 0;
MotAg0ErrReg.WrittenIn = {'MotCtrlMgrPer1'};
MotAg0ErrReg.WriteType = 'Rte';


MotAg0ParFltCnt = DataDict.OpSignal;
MotAg0ParFltCnt.LongName = 'MotAg0ParFltCnt';
MotAg0ParFltCnt.Description = 'MotAg0ParFltCnt';
MotAg0ParFltCnt.DocUnits = 'Cnt';
MotAg0ParFltCnt.SwcShoName = 'MotCtrlMgr';
MotAg0ParFltCnt.EngDT = dt.u16;
MotAg0ParFltCnt.EngInit = 0;
MotAg0ParFltCnt.EngMin = 0;
MotAg0ParFltCnt.EngMax = 65535;
MotAg0ParFltCnt.TestTolerance = 0;
MotAg0ParFltCnt.WrittenIn = {'MotCtrlMgrPer1'};
MotAg0ParFltCnt.WriteType = 'Rte';


MotAg0VltgFltCnt = DataDict.OpSignal;
MotAg0VltgFltCnt.LongName = 'MotAg0VltgFltCnt';
MotAg0VltgFltCnt.Description = 'MotAg0VltgFltCnt';
MotAg0VltgFltCnt.DocUnits = 'Cnt';
MotAg0VltgFltCnt.SwcShoName = 'MotCtrlMgr';
MotAg0VltgFltCnt.EngDT = dt.u16;
MotAg0VltgFltCnt.EngInit = 0;
MotAg0VltgFltCnt.EngMin = 0;
MotAg0VltgFltCnt.EngMax = 65535;
MotAg0VltgFltCnt.TestTolerance = 0;
MotAg0VltgFltCnt.WrittenIn = {'MotCtrlMgrPer1'};
MotAg0VltgFltCnt.WriteType = 'Rte';


MotAg1ErrReg = DataDict.OpSignal;
MotAg1ErrReg.LongName = 'MotAg1ErrReg';
MotAg1ErrReg.Description = 'MotAg1ErrReg';
MotAg1ErrReg.DocUnits = 'Cnt';
MotAg1ErrReg.SwcShoName = 'MotCtrlMgr';
MotAg1ErrReg.EngDT = dt.u32;
MotAg1ErrReg.EngInit = 0;
MotAg1ErrReg.EngMin = 0;
MotAg1ErrReg.EngMax = 67108863;
MotAg1ErrReg.TestTolerance = 0;
MotAg1ErrReg.WrittenIn = {'MotCtrlMgrPer1'};
MotAg1ErrReg.WriteType = 'Rte';


MotAg1ParFltCnt = DataDict.OpSignal;
MotAg1ParFltCnt.LongName = 'MotAg1ParFltCnt';
MotAg1ParFltCnt.Description = 'MotAg1ParFltCnt';
MotAg1ParFltCnt.DocUnits = 'Cnt';
MotAg1ParFltCnt.SwcShoName = 'MotCtrlMgr';
MotAg1ParFltCnt.EngDT = dt.u16;
MotAg1ParFltCnt.EngInit = 0;
MotAg1ParFltCnt.EngMin = 0;
MotAg1ParFltCnt.EngMax = 65535;
MotAg1ParFltCnt.TestTolerance = 0;
MotAg1ParFltCnt.WrittenIn = {'MotCtrlMgrPer1'};
MotAg1ParFltCnt.WriteType = 'Rte';


MotAg1VltgFltCnt = DataDict.OpSignal;
MotAg1VltgFltCnt.LongName = 'MotAg1VltgFltCnt';
MotAg1VltgFltCnt.Description = 'MotAg1VltgFltCnt';
MotAg1VltgFltCnt.DocUnits = 'Cnt';
MotAg1VltgFltCnt.SwcShoName = 'MotCtrlMgr';
MotAg1VltgFltCnt.EngDT = dt.u16;
MotAg1VltgFltCnt.EngInit = 0;
MotAg1VltgFltCnt.EngMin = 0;
MotAg1VltgFltCnt.EngMax = 65535;
MotAg1VltgFltCnt.TestTolerance = 0;
MotAg1VltgFltCnt.WrittenIn = {'MotCtrlMgrPer1'};
MotAg1VltgFltCnt.WriteType = 'Rte';


MotAgBuf = DataDict.OpSignal;
MotAgBuf.LongName = 'MotAgBuf';
MotAgBuf.Description = 'MotAgBuf';
MotAgBuf.DocUnits = 'MotRev';
MotAgBuf.SwcShoName = 'MotCtrlMgr';
MotAgBuf.EngDT = dt.u16;
MotAgBuf.EngInit =  ...
   [0                0                0                0                0                0                0                0];
MotAgBuf.EngMin = 0;
MotAgBuf.EngMax = 0.9999847412;
MotAgBuf.TestTolerance = 0;
MotAgBuf.WrittenIn = {'MotCtrlMgrPer1'};
MotAgBuf.WriteType = 'Rte';


MotAgBufIdx = DataDict.OpSignal;
MotAgBufIdx.LongName = 'MotAgBufIdx';
MotAgBufIdx.Description = 'MotAgBufIdx';
MotAgBufIdx.DocUnits = 'Cnt';
MotAgBufIdx.SwcShoName = 'MotCtrlMgr';
MotAgBufIdx.EngDT = dt.u08;
MotAgBufIdx.EngInit = 0;
MotAgBufIdx.EngMin = 0;
MotAgBufIdx.EngMax = 7;
MotAgBufIdx.TestTolerance = 0;
MotAgBufIdx.WrittenIn = {'MotCtrlMgrPer1'};
MotAgBufIdx.WriteType = 'Rte';


MotAgCumvAlgndMrfRev = DataDict.OpSignal;
MotAgCumvAlgndMrfRev.LongName = 'MotAgCumvAlgndMrfRev';
MotAgCumvAlgndMrfRev.Description = 'MotAgCumvAlgndMrfRev';
MotAgCumvAlgndMrfRev.DocUnits = 'MotRev';
MotAgCumvAlgndMrfRev.SwcShoName = 'MotCtrlMgr';
MotAgCumvAlgndMrfRev.EngDT = dt.s32;
MotAgCumvAlgndMrfRev.EngInit = 0;
MotAgCumvAlgndMrfRev.EngMin = -32768;
MotAgCumvAlgndMrfRev.EngMax = 32767.99998;
MotAgCumvAlgndMrfRev.TestTolerance = 0;
MotAgCumvAlgndMrfRev.WrittenIn = {'MotCtrlMgrPer1'};
MotAgCumvAlgndMrfRev.WriteType = 'Rte';


MotAgCumvInid = DataDict.OpSignal;
MotAgCumvInid.LongName = 'MotAgCumvInid';
MotAgCumvInid.Description = 'MotAgCumvInid';
MotAgCumvInid.DocUnits = 'Cnt';
MotAgCumvInid.SwcShoName = 'MotCtrlMgr';
MotAgCumvInid.EngDT = dt.lgc;
MotAgCumvInid.EngInit = 0;
MotAgCumvInid.EngMin = 0;
MotAgCumvInid.EngMax = 1;
MotAgCumvInid.TestTolerance = 0;
MotAgCumvInid.WrittenIn = {'MotCtrlMgrPer1'};
MotAgCumvInid.WriteType = 'Rte';


MotAgTiBuf = DataDict.OpSignal;
MotAgTiBuf.LongName = 'MotAgTiBuf';
MotAgTiBuf.Description = 'MotAgTiBuf';
MotAgTiBuf.DocUnits = 'MicroSec';
MotAgTiBuf.SwcShoName = 'MotCtrlMgr';
MotAgTiBuf.EngDT = dt.u32;
MotAgTiBuf.EngInit =  ...
   [0               62              125              187              250              312              375              437];
MotAgTiBuf.EngMin = 0;
MotAgTiBuf.EngMax = 4294967295;
MotAgTiBuf.TestTolerance = 0;
MotAgTiBuf.WrittenIn = {'MotCtrlMgrPer1'};
MotAgTiBuf.WriteType = 'Rte';


MotCurrAdcVlyA = DataDict.OpSignal;
MotCurrAdcVlyA.LongName = 'MotCurrAdcVlyA';
MotCurrAdcVlyA.Description = 'MotCurrAdcVlyA';
MotCurrAdcVlyA.DocUnits = 'Volt';
MotCurrAdcVlyA.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyA.EngDT = dt.float32;
MotCurrAdcVlyA.EngInit = 0;
MotCurrAdcVlyA.EngMin = 0;
MotCurrAdcVlyA.EngMax = 5;
MotCurrAdcVlyA.TestTolerance = 0;
MotCurrAdcVlyA.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyA.WriteType = 'Rte';


MotCurrAdcVlyB = DataDict.OpSignal;
MotCurrAdcVlyB.LongName = 'MotCurrAdcVlyB';
MotCurrAdcVlyB.Description = 'MotCurrAdcVlyB';
MotCurrAdcVlyB.DocUnits = 'Volt';
MotCurrAdcVlyB.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyB.EngDT = dt.float32;
MotCurrAdcVlyB.EngInit = 0;
MotCurrAdcVlyB.EngMin = 0;
MotCurrAdcVlyB.EngMax = 5;
MotCurrAdcVlyB.TestTolerance = 0;
MotCurrAdcVlyB.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyB.WriteType = 'Rte';


MotCurrAdcVlyC = DataDict.OpSignal;
MotCurrAdcVlyC.LongName = 'MotCurrAdcVlyC';
MotCurrAdcVlyC.Description = 'MotCurrAdcVlyC';
MotCurrAdcVlyC.DocUnits = 'Volt';
MotCurrAdcVlyC.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyC.EngDT = dt.float32;
MotCurrAdcVlyC.EngInit = 0;
MotCurrAdcVlyC.EngMin = 0;
MotCurrAdcVlyC.EngMax = 5;
MotCurrAdcVlyC.TestTolerance = 0;
MotCurrAdcVlyC.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyC.WriteType = 'Rte';


MotCurrAdcVlyD = DataDict.OpSignal;
MotCurrAdcVlyD.LongName = 'MotCurrAdcVlyD';
MotCurrAdcVlyD.Description = 'MotCurrAdcVlyD';
MotCurrAdcVlyD.DocUnits = 'Volt';
MotCurrAdcVlyD.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyD.EngDT = dt.float32;
MotCurrAdcVlyD.EngInit = 0;
MotCurrAdcVlyD.EngMin = 0;
MotCurrAdcVlyD.EngMax = 5;
MotCurrAdcVlyD.TestTolerance = 0;
MotCurrAdcVlyD.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyD.WriteType = 'Rte';


MotCurrAdcVlyE = DataDict.OpSignal;
MotCurrAdcVlyE.LongName = 'MotCurrAdcVlyE';
MotCurrAdcVlyE.Description = 'MotCurrAdcVlyE';
MotCurrAdcVlyE.DocUnits = 'Volt';
MotCurrAdcVlyE.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyE.EngDT = dt.float32;
MotCurrAdcVlyE.EngInit = 0;
MotCurrAdcVlyE.EngMin = 0;
MotCurrAdcVlyE.EngMax = 5;
MotCurrAdcVlyE.TestTolerance = 0;
MotCurrAdcVlyE.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyE.WriteType = 'Rte';


MotCurrAdcVlyF = DataDict.OpSignal;
MotCurrAdcVlyF.LongName = 'MotCurrAdcVlyF';
MotCurrAdcVlyF.Description = 'MotCurrAdcVlyF';
MotCurrAdcVlyF.DocUnits = 'Volt';
MotCurrAdcVlyF.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyF.EngDT = dt.float32;
MotCurrAdcVlyF.EngInit = 0;
MotCurrAdcVlyF.EngMin = 0;
MotCurrAdcVlyF.EngMax = 5;
MotCurrAdcVlyF.TestTolerance = 0;
MotCurrAdcVlyF.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyF.WriteType = 'Rte';


MotCurrCorrdA = DataDict.OpSignal;
MotCurrCorrdA.LongName = 'MotCurrCorrdA';
MotCurrCorrdA.Description = 'MotCurrCorrdA';
MotCurrCorrdA.DocUnits = 'Ampr';
MotCurrCorrdA.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdA.EngDT = dt.float32;
MotCurrCorrdA.EngInit = 0;
MotCurrCorrdA.EngMin = -200;
MotCurrCorrdA.EngMax = 200;
MotCurrCorrdA.TestTolerance = 0;
MotCurrCorrdA.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdA.WriteType = 'Rte';


MotCurrCorrdB = DataDict.OpSignal;
MotCurrCorrdB.LongName = 'MotCurrCorrdB';
MotCurrCorrdB.Description = 'MotCurrCorrdB';
MotCurrCorrdB.DocUnits = 'Ampr';
MotCurrCorrdB.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdB.EngDT = dt.float32;
MotCurrCorrdB.EngInit = 0;
MotCurrCorrdB.EngMin = -200;
MotCurrCorrdB.EngMax = 200;
MotCurrCorrdB.TestTolerance = 0;
MotCurrCorrdB.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdB.WriteType = 'Rte';


MotCurrCorrdC = DataDict.OpSignal;
MotCurrCorrdC.LongName = 'MotCurrCorrdC';
MotCurrCorrdC.Description = 'MotCurrCorrdC';
MotCurrCorrdC.DocUnits = 'Ampr';
MotCurrCorrdC.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdC.EngDT = dt.float32;
MotCurrCorrdC.EngInit = 0;
MotCurrCorrdC.EngMin = -200;
MotCurrCorrdC.EngMax = 200;
MotCurrCorrdC.TestTolerance = 0;
MotCurrCorrdC.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdC.WriteType = 'Rte';


MotCurrCorrdD = DataDict.OpSignal;
MotCurrCorrdD.LongName = 'MotCurrCorrdD';
MotCurrCorrdD.Description = 'MotCurrCorrdD';
MotCurrCorrdD.DocUnits = 'Ampr';
MotCurrCorrdD.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdD.EngDT = dt.float32;
MotCurrCorrdD.EngInit = 0;
MotCurrCorrdD.EngMin = -200;
MotCurrCorrdD.EngMax = 200;
MotCurrCorrdD.TestTolerance = 0;
MotCurrCorrdD.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdD.WriteType = 'Rte';


MotCurrCorrdE = DataDict.OpSignal;
MotCurrCorrdE.LongName = 'MotCurrCorrdE';
MotCurrCorrdE.Description = 'MotCurrCorrdE';
MotCurrCorrdE.DocUnits = 'Ampr';
MotCurrCorrdE.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdE.EngDT = dt.float32;
MotCurrCorrdE.EngInit = 0;
MotCurrCorrdE.EngMin = -200;
MotCurrCorrdE.EngMax = 200;
MotCurrCorrdE.TestTolerance = 0;
MotCurrCorrdE.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdE.WriteType = 'Rte';


MotCurrCorrdF = DataDict.OpSignal;
MotCurrCorrdF.LongName = 'MotCurrCorrdF';
MotCurrCorrdF.Description = 'MotCurrCorrdF';
MotCurrCorrdF.DocUnits = 'Ampr';
MotCurrCorrdF.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdF.EngDT = dt.float32;
MotCurrCorrdF.EngInit = 0;
MotCurrCorrdF.EngMin = -200;
MotCurrCorrdF.EngMax = 200;
MotCurrCorrdF.TestTolerance = 0;
MotCurrCorrdF.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdF.WriteType = 'Rte';


MotCurrDax = DataDict.OpSignal;
MotCurrDax.LongName = 'MotCurrDax';
MotCurrDax.Description = 'MotCurrDax';
MotCurrDax.DocUnits = 'Ampr';
MotCurrDax.SwcShoName = 'MotCtrlMgr';
MotCurrDax.EngDT = dt.float32;
MotCurrDax.EngInit = 0;
MotCurrDax.EngMin = -200;
MotCurrDax.EngMax = 200;
MotCurrDax.TestTolerance = 0;
MotCurrDax.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrDax.WriteType = 'Rte';


MotCurrQax = DataDict.OpSignal;
MotCurrQax.LongName = 'MotCurrQax';
MotCurrQax.Description = 'MotCurrQax';
MotCurrQax.DocUnits = 'Ampr';
MotCurrQax.SwcShoName = 'MotCtrlMgr';
MotCurrQax.EngDT = dt.float32;
MotCurrQax.EngInit = 0;
MotCurrQax.EngMin = -200;
MotCurrQax.EngMax = 200;
MotCurrQax.TestTolerance = 0;
MotCurrQax.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrQax.WriteType = 'Rte';


MotCurrRollgCntr1 = DataDict.OpSignal;
MotCurrRollgCntr1.LongName = 'MotCurrRollgCntr1';
MotCurrRollgCntr1.Description = 'MotCurrRollgCntr1';
MotCurrRollgCntr1.DocUnits = 'Cnt';
MotCurrRollgCntr1.SwcShoName = 'MotCtrlMgr';
MotCurrRollgCntr1.EngDT = dt.u08;
MotCurrRollgCntr1.EngInit = 0;
MotCurrRollgCntr1.EngMin = 0;
MotCurrRollgCntr1.EngMax = 255;
MotCurrRollgCntr1.TestTolerance = 0;
MotCurrRollgCntr1.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrRollgCntr1.WriteType = 'Rte';


MotCurrRollgCntr2 = DataDict.OpSignal;
MotCurrRollgCntr2.LongName = 'MotCurrRollgCntr2';
MotCurrRollgCntr2.Description = 'MotCurrRollgCntr2';
MotCurrRollgCntr2.DocUnits = 'Cnt';
MotCurrRollgCntr2.SwcShoName = 'MotCtrlMgr';
MotCurrRollgCntr2.EngDT = dt.u08;
MotCurrRollgCntr2.EngInit = 0;
MotCurrRollgCntr2.EngMin = 0;
MotCurrRollgCntr2.EngMax = 255;
MotCurrRollgCntr2.TestTolerance = 0;
MotCurrRollgCntr2.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrRollgCntr2.WriteType = 'Rte';


Ntc5DErrCnt = DataDict.OpSignal;
Ntc5DErrCnt.LongName = 'Ntc5DErrCnt';
Ntc5DErrCnt.Description = 'Ntc5DErrCnt';
Ntc5DErrCnt.DocUnits = 'Cnt';
Ntc5DErrCnt.SwcShoName = 'MotCtrlMgr';
Ntc5DErrCnt.EngDT = dt.u16;
Ntc5DErrCnt.EngInit = 0;
Ntc5DErrCnt.EngMin = 0;
Ntc5DErrCnt.EngMax = 65535;
Ntc5DErrCnt.TestTolerance = 0;
Ntc5DErrCnt.WrittenIn = {'MotCtrlMgrPer1'};
Ntc5DErrCnt.WriteType = 'Rte';


Ntc6DErrCnt = DataDict.OpSignal;
Ntc6DErrCnt.LongName = 'Ntc6DErrCnt';
Ntc6DErrCnt.Description = 'Ntc6DErrCnt';
Ntc6DErrCnt.DocUnits = 'Cnt';
Ntc6DErrCnt.SwcShoName = 'MotCtrlMgr';
Ntc6DErrCnt.EngDT = dt.u16;
Ntc6DErrCnt.EngInit = 0;
Ntc6DErrCnt.EngMin = 0;
Ntc6DErrCnt.EngMax = 65535;
Ntc6DErrCnt.TestTolerance = 0;
Ntc6DErrCnt.WrittenIn = {'MotCtrlMgrPer1'};
Ntc6DErrCnt.WriteType = 'Rte';


PhaOnTiSumA = DataDict.OpSignal;
PhaOnTiSumA.LongName = 'PhaOnTiSumA';
PhaOnTiSumA.Description = 'PhaOnTiSumA';
PhaOnTiSumA.DocUnits = 'NanoSec';
PhaOnTiSumA.SwcShoName = 'MotCtrlMgr';
PhaOnTiSumA.EngDT = dt.u32;
PhaOnTiSumA.EngInit = 0;
PhaOnTiSumA.EngMin = 0;
PhaOnTiSumA.EngMax = 4294967295;
PhaOnTiSumA.TestTolerance = 0;
PhaOnTiSumA.WrittenIn = {'MotCtrlMgrPer1'};
PhaOnTiSumA.WriteType = 'Rte';


PhaOnTiSumB = DataDict.OpSignal;
PhaOnTiSumB.LongName = 'PhaOnTiSumB';
PhaOnTiSumB.Description = 'PhaOnTiSumB';
PhaOnTiSumB.DocUnits = 'NanoSec';
PhaOnTiSumB.SwcShoName = 'MotCtrlMgr';
PhaOnTiSumB.EngDT = dt.u32;
PhaOnTiSumB.EngInit = 0;
PhaOnTiSumB.EngMin = 0;
PhaOnTiSumB.EngMax = 4294967295;
PhaOnTiSumB.TestTolerance = 0;
PhaOnTiSumB.WrittenIn = {'MotCtrlMgrPer1'};
PhaOnTiSumB.WriteType = 'Rte';


PhaOnTiSumC = DataDict.OpSignal;
PhaOnTiSumC.LongName = 'PhaOnTiSumC';
PhaOnTiSumC.Description = 'PhaOnTiSumC';
PhaOnTiSumC.DocUnits = 'NanoSec';
PhaOnTiSumC.SwcShoName = 'MotCtrlMgr';
PhaOnTiSumC.EngDT = dt.u32;
PhaOnTiSumC.EngInit = 0;
PhaOnTiSumC.EngMin = 0;
PhaOnTiSumC.EngMax = 4294967295;
PhaOnTiSumC.TestTolerance = 0;
PhaOnTiSumC.WrittenIn = {'MotCtrlMgrPer1'};
PhaOnTiSumC.WriteType = 'Rte';


SlowLoopCntr = DataDict.OpSignal;
SlowLoopCntr.LongName = 'SlowLoopCntr';
SlowLoopCntr.Description = 'SlowLoopCntr';
SlowLoopCntr.DocUnits = 'Cnt';
SlowLoopCntr.SwcShoName = 'MotCtrlMgr';
SlowLoopCntr.EngDT = dt.u16;
SlowLoopCntr.EngInit = 0;
SlowLoopCntr.EngMin = 0;
SlowLoopCntr.EngMax = 65535;
SlowLoopCntr.TestTolerance = 0;
SlowLoopCntr.WrittenIn = {'MotCtrlMgrPer1'};
SlowLoopCntr.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
