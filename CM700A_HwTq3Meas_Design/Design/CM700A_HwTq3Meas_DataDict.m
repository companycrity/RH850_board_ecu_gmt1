%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-Mar-2016 16:54:21       %
%                                  Created with tool release: 2.35.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM700A = DataDict.FDD;
CM700A.Version = '2.1.x';
CM700A.LongName = 'Handwheel Torque 3 Measurement';
CM700A.ShoName  = 'HwTq3Meas';
CM700A.DesignASIL = 'D';
CM700A.Description = [...
  'HandWheel Torque Sensor 3 Measurement'];
CM700A.Dependencies = ...
	{'ElecGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTq3MeasInit1 = DataDict.Runnable;
HwTq3MeasInit1.Context = 'Rte';
HwTq3MeasInit1.TimeStep = 0;

HwTq3MeasPer1 = DataDict.Runnable;
HwTq3MeasPer1.Context = 'Rte';
HwTq3MeasPer1.TimeStep = 0.002;

HwTq3MeasPer2 = DataDict.Runnable;
HwTq3MeasPer2.Context = 'Rte';
HwTq3MeasPer2.TimeStep = 0.1;

HwTq3MeasHwTq3AutTrim = DataDict.SrvRunnable;
HwTq3MeasHwTq3AutTrim.Context = 'Rte';
HwTq3MeasHwTq3AutTrim.Return = DataDict.CSReturn;
HwTq3MeasHwTq3AutTrim.Return.Type = 'None';
HwTq3MeasHwTq3AutTrim.Return.Min = [];
HwTq3MeasHwTq3AutTrim.Return.Max = [];
HwTq3MeasHwTq3AutTrim.Return.TestTolerance = [];

HwTq3MeasHwTq3ClrTrim = DataDict.SrvRunnable;
HwTq3MeasHwTq3ClrTrim.Context = 'Rte';
HwTq3MeasHwTq3ClrTrim.Return = DataDict.CSReturn;
HwTq3MeasHwTq3ClrTrim.Return.Type = 'None';
HwTq3MeasHwTq3ClrTrim.Return.Min = [];
HwTq3MeasHwTq3ClrTrim.Return.Max = [];
HwTq3MeasHwTq3ClrTrim.Return.TestTolerance = [];

HwTq3MeasHwTq3ReadTrim = DataDict.SrvRunnable;
HwTq3MeasHwTq3ReadTrim.Context = 'Rte';
HwTq3MeasHwTq3ReadTrim.Return = DataDict.CSReturn;
HwTq3MeasHwTq3ReadTrim.Return.Type = 'None';
HwTq3MeasHwTq3ReadTrim.Return.Min = [];
HwTq3MeasHwTq3ReadTrim.Return.Max = [];
HwTq3MeasHwTq3ReadTrim.Return.TestTolerance = [];
HwTq3MeasHwTq3ReadTrim.Arguments(1) = DataDict.CSArguments;
HwTq3MeasHwTq3ReadTrim.Arguments(1).Name = 'HwTqReadTrimData';
HwTq3MeasHwTq3ReadTrim.Arguments(1).EngMin = -10;
HwTq3MeasHwTq3ReadTrim.Arguments(1).EngMax = 10;
HwTq3MeasHwTq3ReadTrim.Arguments(1).EngDT = dt.float32;
HwTq3MeasHwTq3ReadTrim.Arguments(1).Units = 'HwNm';
HwTq3MeasHwTq3ReadTrim.Arguments(1).Direction = 'Out';
HwTq3MeasHwTq3ReadTrim.Arguments(1).InitRowCol = [1  1];

HwTq3MeasHwTq3TrimPrfmdSts = DataDict.SrvRunnable;
HwTq3MeasHwTq3TrimPrfmdSts.Context = 'Rte';
HwTq3MeasHwTq3TrimPrfmdSts.Return = DataDict.CSReturn;
HwTq3MeasHwTq3TrimPrfmdSts.Return.Type = 'None';
HwTq3MeasHwTq3TrimPrfmdSts.Return.Min = [];
HwTq3MeasHwTq3TrimPrfmdSts.Return.Max = [];
HwTq3MeasHwTq3TrimPrfmdSts.Return.TestTolerance = [];
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1).Name = 'HwTqOffsTrimPrfmdStsData';
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1).EngMin = 0;
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1).EngMax = 1;
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwTq3MeasHwTq3TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];

HwTq3MeasHwTq3WrTrim = DataDict.SrvRunnable;
HwTq3MeasHwTq3WrTrim.Context = 'Rte';
HwTq3MeasHwTq3WrTrim.Return = DataDict.CSReturn;
HwTq3MeasHwTq3WrTrim.Return.Type = 'None';
HwTq3MeasHwTq3WrTrim.Return.Min = [];
HwTq3MeasHwTq3WrTrim.Return.Max = [];
HwTq3MeasHwTq3WrTrim.Return.TestTolerance = [];
HwTq3MeasHwTq3WrTrim.Arguments(1) = DataDict.CSArguments;
HwTq3MeasHwTq3WrTrim.Arguments(1).Name = 'HwTqWrOffsTrimData';
HwTq3MeasHwTq3WrTrim.Arguments(1).EngMin = -10;
HwTq3MeasHwTq3WrTrim.Arguments(1).EngMax = 10;
HwTq3MeasHwTq3WrTrim.Arguments(1).EngDT = dt.float32;
HwTq3MeasHwTq3WrTrim.Arguments(1).Units = 'HwNm';
HwTq3MeasHwTq3WrTrim.Arguments(1).Direction = 'In';
HwTq3MeasHwTq3WrTrim.Arguments(1).InitRowCol = [1  1];

HwTq3MeasTrigStrt = DataDict.SrvRunnable;
HwTq3MeasTrigStrt.Context = 'Both';
HwTq3MeasTrigStrt.Return = DataDict.CSReturn;
HwTq3MeasTrigStrt.Return.Type = 'None';
HwTq3MeasTrigStrt.Return.Min = [];
HwTq3MeasTrigStrt.Return.Max = [];
HwTq3MeasTrigStrt.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTq3MeasPer1'};
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
GetRefTmr1MicroSec32bit.CallLocation = {'HwTq3MeasInit1','HwTq3MeasTrigStrt'};
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
GetTiSpan1MicroSec32bit.CallLocation = {'HwTq3MeasInit1','HwTq3MeasTrigStrt'};
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


HwTq3Offs_SetRamBlockStatus = DataDict.Client;
HwTq3Offs_SetRamBlockStatus.CallLocation = {'HwTq3MeasHwTq3AutTrim','HwTq3MeasHwTq3ClrTrim','HwTq3MeasHwTq3WrTrim'};
HwTq3Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTq3Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwTq3Offs_SetRamBlockStatus.Return.Min = 0;
HwTq3Offs_SetRamBlockStatus.Return.Max = 1;
HwTq3Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwTq3Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTq3Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTq3Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTq3Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTq3Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTq3Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTq3Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTq3Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];


IoHwAb_SetFctPrphlHwTq3 = DataDict.Client;
IoHwAb_SetFctPrphlHwTq3.CallLocation = {'HwTq3MeasInit1'};
IoHwAb_SetFctPrphlHwTq3.Return = DataDict.CSReturn;
IoHwAb_SetFctPrphlHwTq3.Return.Type = 'Standard';
IoHwAb_SetFctPrphlHwTq3.Return.Min = 0;
IoHwAb_SetFctPrphlHwTq3.Return.Max = 1;
IoHwAb_SetFctPrphlHwTq3.Return.TestTolerance = [];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwTq3MeasPer1','HwTq3MeasPer2'};
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
HwTq3Polarity = DataDict.IpSignal;
HwTq3Polarity.LongName = 'HandWheel Torque 3 Polarity';
HwTq3Polarity.DocUnits = 'Uls';
HwTq3Polarity.EngDT = dt.s08;
HwTq3Polarity.EngInit = 1;
HwTq3Polarity.EngMin = -1;
HwTq3Polarity.EngMax = 1;
HwTq3Polarity.ReadIn = {'HwTq3MeasPer1'};
HwTq3Polarity.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
GearIdn2 = DataDict.OpSignal;
GearIdn2.LongName = 'Gear Identification 2';
GearIdn2.Description = 'C Factor & Bushing ';
GearIdn2.DocUnits = 'Cnt';
GearIdn2.SwcShoName = 'HwTq3Meas';
GearIdn2.EngDT = dt.u08;
GearIdn2.EngInit = 0;
GearIdn2.EngMin = 0;
GearIdn2.EngMax = 63;
GearIdn2.TestTolerance = 0;
GearIdn2.WrittenIn = {'HwTq3MeasPer1'};
GearIdn2.WriteType = 'Rte';


GearIdn2Vld = DataDict.OpSignal;
GearIdn2Vld.LongName = 'Gear Identification 2 Valid';
GearIdn2Vld.Description = [...
  'C Factor & Bushing signal available Flag '];
GearIdn2Vld.DocUnits = 'Cnt';
GearIdn2Vld.SwcShoName = 'HwTq3Meas';
GearIdn2Vld.EngDT = dt.lgc;
GearIdn2Vld.EngInit = 0;
GearIdn2Vld.EngMin = 0;
GearIdn2Vld.EngMax = 1;
GearIdn2Vld.TestTolerance = 0;
GearIdn2Vld.WrittenIn = {'HwTq3MeasPer1'};
GearIdn2Vld.WriteType = 'Rte';


HwTq3 = DataDict.OpSignal;
HwTq3.LongName = 'HandWheel Torque 3';
HwTq3.Description = 'HandWheel Torque 3 Output';
HwTq3.DocUnits = 'HwNwtMtr';
HwTq3.SwcShoName = 'HwTq3Meas';
HwTq3.EngDT = dt.float32;
HwTq3.EngInit = 0;
HwTq3.EngMin = -10;
HwTq3.EngMax = 10;
HwTq3.TestTolerance = 0.0049;
HwTq3.WrittenIn = {'HwTq3MeasPer1'};
HwTq3.WriteType = 'Rte';


HwTq3Qlfr = DataDict.OpSignal;
HwTq3Qlfr.LongName = 'Handwheel Torque 3 Qualifier';
HwTq3Qlfr.Description = [...
  'HandWheel Torque 3 Qualifier - NTC Status return'];
HwTq3Qlfr.DocUnits = 'Cnt';
HwTq3Qlfr.SwcShoName = 'HwTq3Meas';
HwTq3Qlfr.EngDT = enum.SigQlfr1;
HwTq3Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTq3Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTq3Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTq3Qlfr.TestTolerance = 0;
HwTq3Qlfr.WrittenIn = {'HwTq3MeasPer1'};
HwTq3Qlfr.WriteType = 'Rte';


HwTq3RollgCntr = DataDict.OpSignal;
HwTq3RollgCntr.LongName = 'HandWheel Torque 3 Rolling Counter';
HwTq3RollgCntr.Description = 'HandWheel Torque 3 Heart Bit';
HwTq3RollgCntr.DocUnits = 'Cnt';
HwTq3RollgCntr.SwcShoName = 'HwTq3Meas';
HwTq3RollgCntr.EngDT = dt.u08;
HwTq3RollgCntr.EngInit = 0;
HwTq3RollgCntr.EngMin = 0;
HwTq3RollgCntr.EngMax = 255;
HwTq3RollgCntr.TestTolerance = 0;
HwTq3RollgCntr.WrittenIn = {'HwTq3MeasPer1'};
HwTq3RollgCntr.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTq3MeasHwTq3PrtclFltFailStep = DataDict.Calibration;
HwTq3MeasHwTq3PrtclFltFailStep.LongName = 'HandWheel Torque 3 Measurement HandWheel Torque 3 Protocol Fault Fail Step';
HwTq3MeasHwTq3PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwTq3MeasHwTq3PrtclFltFailStep.DocUnits = 'Cnt';
HwTq3MeasHwTq3PrtclFltFailStep.EngDT = dt.u16;
HwTq3MeasHwTq3PrtclFltFailStep.EngVal = 2521;
HwTq3MeasHwTq3PrtclFltFailStep.EngMin = 0;
HwTq3MeasHwTq3PrtclFltFailStep.EngMax = 65535;
HwTq3MeasHwTq3PrtclFltFailStep.Cardinality = 'Inin';
HwTq3MeasHwTq3PrtclFltFailStep.CustomerVisible = false;
HwTq3MeasHwTq3PrtclFltFailStep.Online = false;
HwTq3MeasHwTq3PrtclFltFailStep.Impact = 'H';
HwTq3MeasHwTq3PrtclFltFailStep.TuningOwner = 'EPDT';
HwTq3MeasHwTq3PrtclFltFailStep.GraphLink = {''};
HwTq3MeasHwTq3PrtclFltFailStep.Monotony = 'None';
HwTq3MeasHwTq3PrtclFltFailStep.MaxGrad = 0;
HwTq3MeasHwTq3PrtclFltFailStep.PortName = 'HwTq3MeasHwTq3PrtclFltFailStep';


HwTq3MeasHwTq3PrtclFltPassStep = DataDict.Calibration;
HwTq3MeasHwTq3PrtclFltPassStep.LongName = 'HandWheel Torque 3 Measurement HandWheel Torque 3 Protocol Fault Pass Step';
HwTq3MeasHwTq3PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwTq3MeasHwTq3PrtclFltPassStep.DocUnits = 'Cnt';
HwTq3MeasHwTq3PrtclFltPassStep.EngDT = dt.u16;
HwTq3MeasHwTq3PrtclFltPassStep.EngVal = 1000;
HwTq3MeasHwTq3PrtclFltPassStep.EngMin = 0;
HwTq3MeasHwTq3PrtclFltPassStep.EngMax = 65535;
HwTq3MeasHwTq3PrtclFltPassStep.Cardinality = 'Inin';
HwTq3MeasHwTq3PrtclFltPassStep.CustomerVisible = false;
HwTq3MeasHwTq3PrtclFltPassStep.Online = false;
HwTq3MeasHwTq3PrtclFltPassStep.Impact = 'H';
HwTq3MeasHwTq3PrtclFltPassStep.TuningOwner = 'EPDT';
HwTq3MeasHwTq3PrtclFltPassStep.GraphLink = {''};
HwTq3MeasHwTq3PrtclFltPassStep.Monotony = 'None';
HwTq3MeasHwTq3PrtclFltPassStep.MaxGrad = 0;
HwTq3MeasHwTq3PrtclFltPassStep.PortName = 'HwTq3MeasHwTq3PrtclFltPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwTq3Offs = DataDict.NVM;
HwTq3Offs.LongName = 'Handwheel Torque 3 Offset';
HwTq3Offs.Description = [...
  'Handwheel Torque 3 Offset NVM store'];
HwTq3Offs.DocUnits = 'Uls';
HwTq3Offs.EngDT = struct.HwTqOffsRec1;
HwTq3Offs.EngInit = [struct('OffsTrim',0,'OffsTrimPrfmdSts',0)];
HwTq3Offs.EngMin = [struct('OffsTrim',-10,'OffsTrimPrfmdSts',0)];
HwTq3Offs.EngMax = [struct('OffsTrim',10,'OffsTrimPrfmdSts',1)];
HwTq3Offs.CustomerVisible = false;
HwTq3Offs.Impact = 'H';
HwTq3Offs.TuningOwner = 'EPDT';
HwTq3Offs.CoderInfo.Alias = '';
HwTq3Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
GearIdn2Avl = DataDict.PIM;
GearIdn2Avl.LongName = 'Gear Identification1 Available';
GearIdn2Avl.Description = 'Gear Identification 2 Valid Flag';
GearIdn2Avl.DocUnits = 'Cnt';
GearIdn2Avl.EngDT = dt.lgc;
GearIdn2Avl.EngMin = 0;
GearIdn2Avl.EngMax = 1;
GearIdn2Avl.InitRowCol = [1  1];


GearIdn2Data = DataDict.PIM;
GearIdn2Data.LongName = 'Gear Identification1 Data';
GearIdn2Data.Description = 'Slow Serial Scratchpad ID2 Gear Identification 2 Data';
GearIdn2Data.DocUnits = 'Cnt';
GearIdn2Data.EngDT = dt.u08;
GearIdn2Data.EngMin = 0;
GearIdn2Data.EngMax = 63;
GearIdn2Data.InitRowCol = [1  1];


HwTq3ComStsErrCntr = DataDict.PIM;
HwTq3ComStsErrCntr.LongName = 'Handwheel Torque 3 Communication Status Error Counter';
HwTq3ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwTq3ComStsErrCntr.DocUnits = 'Cnt';
HwTq3ComStsErrCntr.EngDT = dt.u08;
HwTq3ComStsErrCntr.EngMin = 0;
HwTq3ComStsErrCntr.EngMax = 255;
HwTq3ComStsErrCntr.InitRowCol = [1  1];


HwTq3IntSnsrErrCntr = DataDict.PIM;
HwTq3IntSnsrErrCntr.LongName = 'Handwheel Torque 3 Internal Sensor Error Counter';
HwTq3IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwTq3IntSnsrErrCntr.DocUnits = 'Cnt';
HwTq3IntSnsrErrCntr.EngDT = dt.u08;
HwTq3IntSnsrErrCntr.EngMin = 0;
HwTq3IntSnsrErrCntr.EngMax = 255;
HwTq3IntSnsrErrCntr.InitRowCol = [1  1];


HwTq3MeasPrevHwTq3 = DataDict.PIM;
HwTq3MeasPrevHwTq3.LongName = 'Handwheel Torque 3 Measurement Previous Handwheel Torque 3';
HwTq3MeasPrevHwTq3.Description = 'Previous Handwheel Torque 3';
HwTq3MeasPrevHwTq3.DocUnits = 'HwNwtMtr';
HwTq3MeasPrevHwTq3.EngDT = dt.float32;
HwTq3MeasPrevHwTq3.EngMin = -10;
HwTq3MeasPrevHwTq3.EngMax = 10;
HwTq3MeasPrevHwTq3.InitRowCol = [1  1];


HwTq3MeasPrevRollgCntr = DataDict.PIM;
HwTq3MeasPrevRollgCntr.LongName = 'Handwheel Torque 3 Measurement Previous Rolling Count';
HwTq3MeasPrevRollgCntr.Description = 'Previous Roll Count';
HwTq3MeasPrevRollgCntr.DocUnits = 'Cnt';
HwTq3MeasPrevRollgCntr.EngDT = dt.u08;
HwTq3MeasPrevRollgCntr.EngMin = 0;
HwTq3MeasPrevRollgCntr.EngMax = 255;
HwTq3MeasPrevRollgCntr.InitRowCol = [1  1];


HwTq3MsgMissRxCnt = DataDict.PIM;
HwTq3MsgMissRxCnt.LongName = 'Handwheel Torque 3 Message Missing Receive Count';
HwTq3MsgMissRxCnt.Description = 'Torque 3 Missing Counter';
HwTq3MsgMissRxCnt.DocUnits = 'Cnt';
HwTq3MsgMissRxCnt.EngDT = dt.u32;
HwTq3MsgMissRxCnt.EngMin = 0;
HwTq3MsgMissRxCnt.EngMax = 4294967295;
HwTq3MsgMissRxCnt.InitRowCol = [1  1];



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


HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 3 Manufacturing Ntc Number';
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.Description = 'HwTq3 Manufacturing Ntc Number';
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X1E0;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X1E3;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.Header = '';
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 3 Ntc Number';
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.Description = 'HwTq3 Ntc Number';
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X073;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X073;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X07A;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.Header = '';
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTq3MfgFlt = DataDict.NTC;
HwTq3MfgFlt.NtcNr = NtcNr1.NTCNR_0X1E3;
HwTq3MfgFlt.NtcTyp = 'None';
HwTq3MfgFlt.LongName = 'Handwheel Torque 3 Manufacturing Fault';
HwTq3MfgFlt.Description = 'HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16';
HwTq3MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq3MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwTq3MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTq3MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq3MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq3MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq3MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq3MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq3MfgFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTq3PrtclFlt = DataDict.NTC;
HwTq3PrtclFlt.NtcNr = NtcNr1.NTCNR_0X079;
HwTq3PrtclFlt.NtcTyp = 'Deb';
HwTq3PrtclFlt.LongName = 'Handwheel Torque 3 Protocol Fault';
HwTq3PrtclFlt.Description = 'HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16';
HwTq3PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq3PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwTq3PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwTq3PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq3PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq3PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq3PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq3PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq3PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
