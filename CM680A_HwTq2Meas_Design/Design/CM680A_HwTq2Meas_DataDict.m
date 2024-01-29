%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Mar-2016 17:20:39       %
%                                  Created with tool release: 2.35.0     %
%                                  Synergy file: 2.0.0                   %
%                                  Date Modified: 15 MAR 2016            %
%                                  Derived by: Keyur Patel               %
%%-----------------------------------------------------------------------%

CM680A = DataDict.FDD;
CM680A.Version = '2.1.X';
CM680A.LongName = 'Handwheel Torque 2 Measurement';
CM680A.ShoName  = 'HwTq2Meas';
CM680A.DesignASIL = 'D';
CM680A.Description = [...
  'HandWheel Torque Sensor 2 Measurement'];
CM680A.Dependencies = ...
	{'ElecGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTq2MeasInit1 = DataDict.Runnable;
HwTq2MeasInit1.Context = 'Rte';
HwTq2MeasInit1.TimeStep = 0;

HwTq2MeasPer1 = DataDict.Runnable;
HwTq2MeasPer1.Context = 'Rte';
HwTq2MeasPer1.TimeStep = 0.002;

HwTq2MeasPer2 = DataDict.Runnable;
HwTq2MeasPer2.Context = 'Rte';
HwTq2MeasPer2.TimeStep = 0.1;

HwTq2MeasHwTq2AutTrim = DataDict.SrvRunnable;
HwTq2MeasHwTq2AutTrim.Context = 'Rte';
HwTq2MeasHwTq2AutTrim.Return = DataDict.CSReturn;
HwTq2MeasHwTq2AutTrim.Return.Type = 'None';
HwTq2MeasHwTq2AutTrim.Return.Min = [];
HwTq2MeasHwTq2AutTrim.Return.Max = [];
HwTq2MeasHwTq2AutTrim.Return.TestTolerance = [];

HwTq2MeasHwTq2ClrTrim = DataDict.SrvRunnable;
HwTq2MeasHwTq2ClrTrim.Context = 'Rte';
HwTq2MeasHwTq2ClrTrim.Return = DataDict.CSReturn;
HwTq2MeasHwTq2ClrTrim.Return.Type = 'None';
HwTq2MeasHwTq2ClrTrim.Return.Min = [];
HwTq2MeasHwTq2ClrTrim.Return.Max = [];
HwTq2MeasHwTq2ClrTrim.Return.TestTolerance = [];

HwTq2MeasHwTq2ReadTrim = DataDict.SrvRunnable;
HwTq2MeasHwTq2ReadTrim.Context = 'Rte';
HwTq2MeasHwTq2ReadTrim.Return = DataDict.CSReturn;
HwTq2MeasHwTq2ReadTrim.Return.Type = 'None';
HwTq2MeasHwTq2ReadTrim.Return.Min = [];
HwTq2MeasHwTq2ReadTrim.Return.Max = [];
HwTq2MeasHwTq2ReadTrim.Return.TestTolerance = [];
HwTq2MeasHwTq2ReadTrim.Arguments(1) = DataDict.CSArguments;
HwTq2MeasHwTq2ReadTrim.Arguments(1).Name = 'HwTqReadTrimData';
HwTq2MeasHwTq2ReadTrim.Arguments(1).EngMin = -10;
HwTq2MeasHwTq2ReadTrim.Arguments(1).EngMax = 10;
HwTq2MeasHwTq2ReadTrim.Arguments(1).EngDT = dt.float32;
HwTq2MeasHwTq2ReadTrim.Arguments(1).Units = 'HwNm';
HwTq2MeasHwTq2ReadTrim.Arguments(1).Direction = 'Out';
HwTq2MeasHwTq2ReadTrim.Arguments(1).InitRowCol = [1  1];

HwTq2MeasHwTq2TrimPrfmdSts = DataDict.SrvRunnable;
HwTq2MeasHwTq2TrimPrfmdSts.Context = 'Rte';
HwTq2MeasHwTq2TrimPrfmdSts.Return = DataDict.CSReturn;
HwTq2MeasHwTq2TrimPrfmdSts.Return.Type = 'None';
HwTq2MeasHwTq2TrimPrfmdSts.Return.Min = [];
HwTq2MeasHwTq2TrimPrfmdSts.Return.Max = [];
HwTq2MeasHwTq2TrimPrfmdSts.Return.TestTolerance = [];
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1).Name = 'HwTqOffsTrimPrfmdStsData';
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1).EngMin = 0;
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1).EngMax = 1;
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwTq2MeasHwTq2TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];

HwTq2MeasHwTq2WrTrim = DataDict.SrvRunnable;
HwTq2MeasHwTq2WrTrim.Context = 'Rte';
HwTq2MeasHwTq2WrTrim.Return = DataDict.CSReturn;
HwTq2MeasHwTq2WrTrim.Return.Type = 'None';
HwTq2MeasHwTq2WrTrim.Return.Min = [];
HwTq2MeasHwTq2WrTrim.Return.Max = [];
HwTq2MeasHwTq2WrTrim.Return.TestTolerance = [];
HwTq2MeasHwTq2WrTrim.Arguments(1) = DataDict.CSArguments;
HwTq2MeasHwTq2WrTrim.Arguments(1).Name = 'HwTqWrOffsTrimData';
HwTq2MeasHwTq2WrTrim.Arguments(1).EngMin = -10;
HwTq2MeasHwTq2WrTrim.Arguments(1).EngMax = 10;
HwTq2MeasHwTq2WrTrim.Arguments(1).EngDT = dt.float32;
HwTq2MeasHwTq2WrTrim.Arguments(1).Units = 'HwNm';
HwTq2MeasHwTq2WrTrim.Arguments(1).Direction = 'In';
HwTq2MeasHwTq2WrTrim.Arguments(1).InitRowCol = [1  1];

HwTq2MeasTrigStrt = DataDict.SrvRunnable;
HwTq2MeasTrigStrt.Context = 'Both';
HwTq2MeasTrigStrt.Return = DataDict.CSReturn;
HwTq2MeasTrigStrt.Return.Type = 'None';
HwTq2MeasTrigStrt.Return.Min = [];
HwTq2MeasTrigStrt.Return.Max = [];
HwTq2MeasTrigStrt.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'HwTq2MeasPer1'};
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTq2MeasPer1'};
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'HwTq2MeasInit1', 'HwTq2MeasTrigStrt'};
GetRefTmr1MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr1MicroSec32bit.Return.Type = 'None';
GetRefTmr1MicroSec32bit.Return.Min = [];
GetRefTmr1MicroSec32bit.Return.Max = [];
GetRefTmr1MicroSec32bit.Return.TestTolerance = [];
GetRefTmr1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr1MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr1MicroSec32bit.Arguments(1).InitRowCol = [1  1];


GetTiSpan1MicroSec32bit = DataDict.Client;
GetTiSpan1MicroSec32bit.CallLocation = {'HwTq2MeasInit1', 'HwTq2MeasTrigStrt'};
GetTiSpan1MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan1MicroSec32bit.Return.Type = 'Standard';
GetTiSpan1MicroSec32bit.Return.Min = 0;
GetTiSpan1MicroSec32bit.Return.Max = 1;
GetTiSpan1MicroSec32bit.Return.TestTolerance = [];
GetTiSpan1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan1MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan1MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan1MicroSec32bit.Arguments(2).InitRowCol = [1  1];


HwTq2Offs_SetRamBlockStatus = DataDict.Client;
HwTq2Offs_SetRamBlockStatus.CallLocation = {'HwTq2MeasHwTq2AutTrim','HwTq2MeasHwTq2ClrTrim','HwTq2MeasHwTq2WrTrim'};
HwTq2Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTq2Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwTq2Offs_SetRamBlockStatus.Return.Min = 0;
HwTq2Offs_SetRamBlockStatus.Return.Max = 1;
HwTq2Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwTq2Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTq2Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTq2Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTq2Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTq2Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTq2Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTq2Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTq2Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];


IoHwAb_SetFctPrphlHwTq2 = DataDict.Client;
IoHwAb_SetFctPrphlHwTq2.CallLocation = {'HwTq2MeasInit1'};
IoHwAb_SetFctPrphlHwTq2.Return = DataDict.CSReturn;
IoHwAb_SetFctPrphlHwTq2.Return.Type = 'Standard';
IoHwAb_SetFctPrphlHwTq2.Return.Min = 0;
IoHwAb_SetFctPrphlHwTq2.Return.Max = 1;
IoHwAb_SetFctPrphlHwTq2.Return.TestTolerance = [];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwTq2MeasPer1','HwTq2MeasPer2'};
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq2Polarity = DataDict.IpSignal;
HwTq2Polarity.LongName = 'HandWheel Torque 2 Polarity';
HwTq2Polarity.DocUnits = 'Uls';
HwTq2Polarity.EngDT = dt.s08;
HwTq2Polarity.EngInit = 1;
HwTq2Polarity.EngMin = -1;
HwTq2Polarity.EngMax = 1;
HwTq2Polarity.ReadIn = {'HwTq2MeasPer1'};
HwTq2Polarity.ReadType = 'Rte';


%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
GearIdn1 = DataDict.OpSignal;
GearIdn1.LongName = 'Gear Identification 1';
GearIdn1.Description = 'C Factor & Bushing ';
GearIdn1.DocUnits = 'Cnt';
GearIdn1.SwcShoName = 'HwTq2Meas';
GearIdn1.EngDT = dt.u08;
GearIdn1.EngInit = 0;
GearIdn1.EngMin = 0;
GearIdn1.EngMax = 63;
GearIdn1.TestTolerance = 0;
GearIdn1.WrittenIn = {'HwTq2MeasPer1'};
GearIdn1.WriteType = 'Rte';


GearIdn1Vld = DataDict.OpSignal;
GearIdn1Vld.LongName = 'Gear Identification 1 Valid';
GearIdn1Vld.Description = [...
  'C Factor & Bushing signal available Flag '];
GearIdn1Vld.DocUnits = 'Cnt';
GearIdn1Vld.SwcShoName = 'HwTq2Meas';
GearIdn1Vld.EngDT = dt.lgc;
GearIdn1Vld.EngInit = 0;
GearIdn1Vld.EngMin = 0;
GearIdn1Vld.EngMax = 1;
GearIdn1Vld.TestTolerance = 0;
GearIdn1Vld.WrittenIn = {'HwTq2MeasPer1'};
GearIdn1Vld.WriteType = 'Rte';


HwTq2 = DataDict.OpSignal;
HwTq2.LongName = 'HandWheel Torque 2';
HwTq2.Description = 'HandWheel Torque 2 Output';
HwTq2.DocUnits = 'HwNwtMtr';
HwTq2.SwcShoName = 'HwTq2Meas';
HwTq2.EngDT = dt.float32;
HwTq2.EngInit = 0;
HwTq2.EngMin = -10;
HwTq2.EngMax = 10;
HwTq2.TestTolerance = 0.0049;
HwTq2.WrittenIn = {'HwTq2MeasPer1'};
HwTq2.WriteType = 'Rte';


HwTq2Qlfr = DataDict.OpSignal;
HwTq2Qlfr.LongName = 'Handwheel Torque 2 Qualifier';
HwTq2Qlfr.Description = [...
  'HandWheel Torque 2 Qualifier - NTC Status return'];
HwTq2Qlfr.DocUnits = 'Cnt';
HwTq2Qlfr.SwcShoName = 'HwTq2Meas';
HwTq2Qlfr.EngDT = enum.SigQlfr1;
HwTq2Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTq2Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTq2Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTq2Qlfr.TestTolerance = 0;
HwTq2Qlfr.WrittenIn = {'HwTq2MeasPer1'};
HwTq2Qlfr.WriteType = 'Rte';


HwTq2RollgCntr = DataDict.OpSignal;
HwTq2RollgCntr.LongName = 'HandWheel Torque 2 Rolling Counter';
HwTq2RollgCntr.Description = 'HandWheel Torque 2 Heart Bit';
HwTq2RollgCntr.DocUnits = 'Cnt';
HwTq2RollgCntr.SwcShoName = 'HwTq2Meas';
HwTq2RollgCntr.EngDT = dt.u08;
HwTq2RollgCntr.EngInit = 0;
HwTq2RollgCntr.EngMin = 0;
HwTq2RollgCntr.EngMax = 255;
HwTq2RollgCntr.TestTolerance = 0;
HwTq2RollgCntr.WrittenIn = {'HwTq2MeasPer1'};
HwTq2RollgCntr.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTq2MeasHwTq2PrtclFltFailStep = DataDict.Calibration;
HwTq2MeasHwTq2PrtclFltFailStep.LongName = 'HandWheel Torque 2 Measurement HandWheel Torque 2 Protocol Fault Fail Step';
HwTq2MeasHwTq2PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwTq2MeasHwTq2PrtclFltFailStep.DocUnits = 'Cnt';
HwTq2MeasHwTq2PrtclFltFailStep.EngDT = dt.u16;
HwTq2MeasHwTq2PrtclFltFailStep.EngVal = 2521;
HwTq2MeasHwTq2PrtclFltFailStep.EngMin = 0;
HwTq2MeasHwTq2PrtclFltFailStep.EngMax = 65535;
HwTq2MeasHwTq2PrtclFltFailStep.Cardinality = 'Inin';
HwTq2MeasHwTq2PrtclFltFailStep.CustomerVisible = false;
HwTq2MeasHwTq2PrtclFltFailStep.Online = false;
HwTq2MeasHwTq2PrtclFltFailStep.Impact = 'H';
HwTq2MeasHwTq2PrtclFltFailStep.TuningOwner = 'EPDT';
HwTq2MeasHwTq2PrtclFltFailStep.GraphLink = {''};
HwTq2MeasHwTq2PrtclFltFailStep.Monotony = 'None';
HwTq2MeasHwTq2PrtclFltFailStep.MaxGrad = 0;
HwTq2MeasHwTq2PrtclFltFailStep.PortName = 'HwTq2MeasHwTq2PrtclFltFailStep';


HwTq2MeasHwTq2PrtclFltPassStep = DataDict.Calibration;
HwTq2MeasHwTq2PrtclFltPassStep.LongName = 'HandWheel Torque 2 Measurement HandWheel Torque 2 Protocol Fault Pass Step';
HwTq2MeasHwTq2PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwTq2MeasHwTq2PrtclFltPassStep.DocUnits = 'Cnt';
HwTq2MeasHwTq2PrtclFltPassStep.EngDT = dt.u16;
HwTq2MeasHwTq2PrtclFltPassStep.EngVal = 1000;
HwTq2MeasHwTq2PrtclFltPassStep.EngMin = 0;
HwTq2MeasHwTq2PrtclFltPassStep.EngMax = 65535;
HwTq2MeasHwTq2PrtclFltPassStep.Cardinality = 'Inin';
HwTq2MeasHwTq2PrtclFltPassStep.CustomerVisible = false;
HwTq2MeasHwTq2PrtclFltPassStep.Online = false;
HwTq2MeasHwTq2PrtclFltPassStep.Impact = 'H';
HwTq2MeasHwTq2PrtclFltPassStep.TuningOwner = 'EPDT';
HwTq2MeasHwTq2PrtclFltPassStep.GraphLink = {''};
HwTq2MeasHwTq2PrtclFltPassStep.Monotony = 'None';
HwTq2MeasHwTq2PrtclFltPassStep.MaxGrad = 0;
HwTq2MeasHwTq2PrtclFltPassStep.PortName = 'HwTq2MeasHwTq2PrtclFltPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwTq2Offs = DataDict.NVM;
HwTq2Offs.LongName = 'Handwheel Torque 2 Offset';
HwTq2Offs.Description = [...
  'Handwheel Torque 2 Offset NVM store'];
HwTq2Offs.DocUnits = 'Uls';
HwTq2Offs.EngDT = struct.HwTqOffsRec1;
HwTq2Offs.EngInit = [struct('OffsTrim',0,'OffsTrimPrfmdSts',0)];
HwTq2Offs.EngMin = [struct('OffsTrim',-10,'OffsTrimPrfmdSts',0)];
HwTq2Offs.EngMax = [struct('OffsTrim',10,'OffsTrimPrfmdSts',1)];
HwTq2Offs.CustomerVisible = false;
HwTq2Offs.Impact = 'H';
HwTq2Offs.TuningOwner = 'EPDT';
HwTq2Offs.CoderInfo.Alias = '';
HwTq2Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
GearIdn1Avl = DataDict.PIM;
GearIdn1Avl.LongName = 'Gear Identification1 Available';
GearIdn1Avl.Description = 'True = Signal data is available';
GearIdn1Avl.DocUnits = 'Cnt';
GearIdn1Avl.EngDT = dt.lgc;
GearIdn1Avl.EngMin = 0;
GearIdn1Avl.EngMax = 1;
GearIdn1Avl.InitRowCol = [1  1];


GearIdn1Data = DataDict.PIM;
GearIdn1Data.LongName = 'Gear Identification1 Data';
GearIdn1Data.Description = 'Slow Serial Scratchpad ID2 Gear Identification 1 Data';
GearIdn1Data.DocUnits = 'Cnt';
GearIdn1Data.EngDT = dt.u08;
GearIdn1Data.EngMin = 0;
GearIdn1Data.EngMax = 63;
GearIdn1Data.InitRowCol = [1  1];


HwTq2ComStsErrCntr = DataDict.PIM;
HwTq2ComStsErrCntr.LongName = 'Handwheel Torque 2 Communication Status Error Counter';
HwTq2ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwTq2ComStsErrCntr.DocUnits = 'Cnt';
HwTq2ComStsErrCntr.EngDT = dt.u08;
HwTq2ComStsErrCntr.EngMin = 0;
HwTq2ComStsErrCntr.EngMax = 255;
HwTq2ComStsErrCntr.InitRowCol = [1  1];


HwTq2IntSnsrErrCntr = DataDict.PIM;
HwTq2IntSnsrErrCntr.LongName = 'Handwheel Torque 2 Internal Sensor Error Counter';
HwTq2IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwTq2IntSnsrErrCntr.DocUnits = 'Cnt';
HwTq2IntSnsrErrCntr.EngDT = dt.u08;
HwTq2IntSnsrErrCntr.EngMin = 0;
HwTq2IntSnsrErrCntr.EngMax = 255;
HwTq2IntSnsrErrCntr.InitRowCol = [1  1];


HwTq2MeasPrevHwTq2 = DataDict.PIM;
HwTq2MeasPrevHwTq2.LongName = 'Handwheel Torque 2 Measurement Previous Handwheel Torque 2';
HwTq2MeasPrevHwTq2.Description = 'Previous Handwheel Torque 2';
HwTq2MeasPrevHwTq2.DocUnits = 'HwNwtMtr';
HwTq2MeasPrevHwTq2.EngDT = dt.float32;
HwTq2MeasPrevHwTq2.EngMin = -10;
HwTq2MeasPrevHwTq2.EngMax = 10;
HwTq2MeasPrevHwTq2.InitRowCol = [1  1];


HwTq2MeasPrevRollgCntr = DataDict.PIM;
HwTq2MeasPrevRollgCntr.LongName = 'Handwheel Torque 2 Measurement Previous Rolling Count';
HwTq2MeasPrevRollgCntr.Description = 'Previous Roll Count';
HwTq2MeasPrevRollgCntr.DocUnits = 'Cnt';
HwTq2MeasPrevRollgCntr.EngDT = dt.u08;
HwTq2MeasPrevRollgCntr.EngMin = 0;
HwTq2MeasPrevRollgCntr.EngMax = 255;
HwTq2MeasPrevRollgCntr.InitRowCol = [1  1];


HwTq2MsgMissRxCnt = DataDict.PIM;
HwTq2MsgMissRxCnt.LongName = 'Handwheel Torque2 Message Missing Receive Count';
HwTq2MsgMissRxCnt.Description = 'Torque2 Missing Counter';
HwTq2MsgMissRxCnt.DocUnits = 'Cnt';
HwTq2MsgMissRxCnt.EngDT = dt.u32;
HwTq2MsgMissRxCnt.EngMin = 0;
HwTq2MsgMissRxCnt.EngMax = 4294967295;
HwTq2MsgMissRxCnt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.LongName = 'Handwheel Torque Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Description = 'Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Header = 'None';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Lower Limit';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value min limit to -10'];
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Header = 'None';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Upper Limit';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value max limit to 10'];
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Header = 'None';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSCA_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSCA_ULS_F32.LongName = 'Handwheel Torque Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.Description = 'Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWTQSCA_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSCA_ULS_F32.EngVal = 0.004884005;
ELECGLBPRM_HWTQSCA_ULS_F32.Header = 'None';
ELECGLBPRM_HWTQSCA_ULS_F32.Define = 'Global';


ELECGLBPRM_NOFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_NOFLT_CNT_U08.LongName = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.Description = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_NOFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_NOFLT_CNT_U08.EngVal = 0;
ELECGLBPRM_NOFLT_CNT_U08.Header = 'None';
ELECGLBPRM_NOFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08 = DataDict.Constant;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.LongName = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Description = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngVal = 1;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Header = 'None';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Define = 'Global';


ELECGLBPRM_PRTCLFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_PRTCLFLT_CNT_U08.LongName = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.Description = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_PRTCLFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_PRTCLFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_PRTCLFLT_CNT_U08.Header = 'None';
ELECGLBPRM_PRTCLFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SNSRINTFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SNSRINTFLT_CNT_U08.LongName = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Description = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_SNSRINTFLT_CNT_U08.Header = 'None';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Define = 'Global';


FLTINJ_HWTQ2MEAS_HWTQ2 = DataDict.Constant;
FLTINJ_HWTQ2MEAS_HWTQ2.LongName = 'Fault Injection Handwheel Torque 2 Measure Handwheel Torque 2';
FLTINJ_HWTQ2MEAS_HWTQ2.Description = [...
  'Fault Injection Handwheel Torque 2 Measure Handwheel Torque 2 Constant' ...
  ''];
FLTINJ_HWTQ2MEAS_HWTQ2.DocUnits = 'Uls';
FLTINJ_HWTQ2MEAS_HWTQ2.EngDT = dt.u16;
FLTINJ_HWTQ2MEAS_HWTQ2.EngVal = 26;
FLTINJ_HWTQ2MEAS_HWTQ2.Header = 'FltInj.h';
FLTINJ_HWTQ2MEAS_HWTQ2.Define = 'Global';


HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 2 Manufacturing Ntc Number';
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.Description = 'HwTq2 Manufacturing Ntc Number';
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X1E0;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X1E3;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.Header = '';
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 2 Ntc Number';
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.Description = 'HwTq2 Ntc Number';
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X073;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X073;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X07A;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.Header = '';
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTq2MfgFlt = DataDict.NTC;
HwTq2MfgFlt.NtcNr = NtcNr1.NTCNR_0X1E2;
HwTq2MfgFlt.NtcTyp = 'None';
HwTq2MfgFlt.LongName = 'Handwheel Torque 2 Manufacturing Fault';
HwTq2MfgFlt.Description = ' HwTq2MfgFlt.NtcNr = HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16';
HwTq2MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq2MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwTq2MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTq2MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq2MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq2MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq2MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq2MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq2MfgFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTq2PrtclFlt = DataDict.NTC;
HwTq2PrtclFlt.NtcNr = NtcNr1.NTCNR_0X077;
HwTq2PrtclFlt.NtcTyp = 'Deb';
HwTq2PrtclFlt.LongName = 'Handwheel Torque 2 Protocol Fault';
HwTq2PrtclFlt.Description = 'HwTq2PrtclFlt.NtcNr = HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16';
HwTq2PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq2PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwTq2PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwTq2PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq2PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq2PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq2PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq2PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq2PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
