%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 17-Dec-2015 12:30:55       %
%                                  Created with tool release: 2.26.0     %
%                                  Synergy file: 1.8.0                   %
%                                  Date Modified: 12/17/2015             %
%                                  Derived by: Keyur Patel               %
%%-----------------------------------------------------------------------%

CM650A = DataDict.FDD;
CM650A.Version = '1.12.x';
CM650A.LongName = 'Handwheel Torque 0 Measurement';
CM650A.ShoName  = 'HwTq0Meas';
CM650A.DesignASIL = 'D';
CM650A.Description = [...
  'HandWheel Torque Sensor 0 Measurement'];
CM650A.Dependencies = ...
	{'ElecGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTq0MeasInit1 = DataDict.Runnable;
HwTq0MeasInit1.Context = 'Rte';
HwTq0MeasInit1.TimeStep = 0;

HwTq0MeasPer1 = DataDict.Runnable;
HwTq0MeasPer1.Context = 'Rte';
HwTq0MeasPer1.TimeStep = 0.002;

HwTq0MeasPer2 = DataDict.Runnable;
HwTq0MeasPer2.Context = 'Rte';
HwTq0MeasPer2.TimeStep = 0.1;

HwTq0MeasHwTq0AutTrim = DataDict.SrvRunnable;
HwTq0MeasHwTq0AutTrim.Context = 'Rte';
HwTq0MeasHwTq0AutTrim.Return = DataDict.CSReturn;
HwTq0MeasHwTq0AutTrim.Return.Type = 'None';
HwTq0MeasHwTq0AutTrim.Return.Min = [];
HwTq0MeasHwTq0AutTrim.Return.Max = [];
HwTq0MeasHwTq0AutTrim.Return.TestTolerance = [];

HwTq0MeasHwTq0ClrTrim = DataDict.SrvRunnable;
HwTq0MeasHwTq0ClrTrim.Context = 'Rte';
HwTq0MeasHwTq0ClrTrim.Return = DataDict.CSReturn;
HwTq0MeasHwTq0ClrTrim.Return.Type = 'None';
HwTq0MeasHwTq0ClrTrim.Return.Min = [];
HwTq0MeasHwTq0ClrTrim.Return.Max = [];
HwTq0MeasHwTq0ClrTrim.Return.TestTolerance = [];

HwTq0MeasHwTq0ReadTrim = DataDict.SrvRunnable;
HwTq0MeasHwTq0ReadTrim.Context = 'Rte';
HwTq0MeasHwTq0ReadTrim.Return = DataDict.CSReturn;
HwTq0MeasHwTq0ReadTrim.Return.Type = 'None';
HwTq0MeasHwTq0ReadTrim.Return.Min = [];
HwTq0MeasHwTq0ReadTrim.Return.Max = [];
HwTq0MeasHwTq0ReadTrim.Return.TestTolerance = [];
HwTq0MeasHwTq0ReadTrim.Arguments(1) = DataDict.CSArguments;
HwTq0MeasHwTq0ReadTrim.Arguments(1).Name = 'HwTqReadTrimData';
HwTq0MeasHwTq0ReadTrim.Arguments(1).EngMin = -10;
HwTq0MeasHwTq0ReadTrim.Arguments(1).EngMax = 10;
HwTq0MeasHwTq0ReadTrim.Arguments(1).EngDT = dt.float32;
HwTq0MeasHwTq0ReadTrim.Arguments(1).Units = 'HwNm';
HwTq0MeasHwTq0ReadTrim.Arguments(1).Direction = 'Out';
HwTq0MeasHwTq0ReadTrim.Arguments(1).InitRowCol = [1  1];

HwTq0MeasHwTq0TrimPrfmdSts = DataDict.SrvRunnable;
HwTq0MeasHwTq0TrimPrfmdSts.Context = 'Rte';
HwTq0MeasHwTq0TrimPrfmdSts.Return = DataDict.CSReturn;
HwTq0MeasHwTq0TrimPrfmdSts.Return.Type = 'None';
HwTq0MeasHwTq0TrimPrfmdSts.Return.Min = [];
HwTq0MeasHwTq0TrimPrfmdSts.Return.Max = [];
HwTq0MeasHwTq0TrimPrfmdSts.Return.TestTolerance = [];
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1).Name = 'HwTqOffsTrimPrfmdStsData';
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1).EngMin = 0;
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1).EngMax = 1;
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwTq0MeasHwTq0TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];

HwTq0MeasHwTq0WrTrim = DataDict.SrvRunnable;
HwTq0MeasHwTq0WrTrim.Context = 'Rte';
HwTq0MeasHwTq0WrTrim.Return = DataDict.CSReturn;
HwTq0MeasHwTq0WrTrim.Return.Type = 'None';
HwTq0MeasHwTq0WrTrim.Return.Min = [];
HwTq0MeasHwTq0WrTrim.Return.Max = [];
HwTq0MeasHwTq0WrTrim.Return.TestTolerance = [];
HwTq0MeasHwTq0WrTrim.Arguments(1) = DataDict.CSArguments;
HwTq0MeasHwTq0WrTrim.Arguments(1).Name = 'HwTqWrOffsTrimData';
HwTq0MeasHwTq0WrTrim.Arguments(1).EngMin = -10;
HwTq0MeasHwTq0WrTrim.Arguments(1).EngMax = 10;
HwTq0MeasHwTq0WrTrim.Arguments(1).EngDT = dt.float32;
HwTq0MeasHwTq0WrTrim.Arguments(1).Units = 'HwNm';
HwTq0MeasHwTq0WrTrim.Arguments(1).Direction = 'In';
HwTq0MeasHwTq0WrTrim.Arguments(1).InitRowCol = [1  1];

HwTq0MeasTrigStrt = DataDict.SrvRunnable;
HwTq0MeasTrigStrt.Context = 'Both';
HwTq0MeasTrigStrt.Return = DataDict.CSReturn;
HwTq0MeasTrigStrt.Return.Type = 'None';
HwTq0MeasTrigStrt.Return.Min = [];
HwTq0MeasTrigStrt.Return.Max = [];
HwTq0MeasTrigStrt.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'HwTq0MeasPer1'};
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


FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'HwTq0MeasPer1'};
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).Units = 'Uls';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTq0MeasPer1'};
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
GetRefTmr1MicroSec32bit.CallLocation = {'HwTq0MeasInit1','HwTq0MeasTrigStrt'};
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
GetTiSpan1MicroSec32bit.CallLocation = {'HwTq0MeasInit1','HwTq0MeasTrigStrt'};
GetTiSpan1MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan1MicroSec32bit.Return.Type = 'None';
GetTiSpan1MicroSec32bit.Return.Min = [];
GetTiSpan1MicroSec32bit.Return.Max = [];
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


HwTq0Offs_SetRamBlockStatus = DataDict.Client;
HwTq0Offs_SetRamBlockStatus.CallLocation = {'HwTq0MeasHwTq0AutTrim','HwTq0MeasHwTq0ClrTrim','HwTq0MeasHwTq0WrTrim'};
HwTq0Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTq0Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwTq0Offs_SetRamBlockStatus.Return.Min = 0;
HwTq0Offs_SetRamBlockStatus.Return.Max = 1;
HwTq0Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwTq0Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTq0Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTq0Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTq0Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTq0Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTq0Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTq0Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTq0Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];


IoHwAb_SetFctPrphlHwTq0 = DataDict.Client;
IoHwAb_SetFctPrphlHwTq0.CallLocation = {'HwTq0MeasInit1'};
IoHwAb_SetFctPrphlHwTq0.Return = DataDict.CSReturn;
IoHwAb_SetFctPrphlHwTq0.Return.Type = 'Standard';
IoHwAb_SetFctPrphlHwTq0.Return.Min = 0;
IoHwAb_SetFctPrphlHwTq0.Return.Max = 1;
IoHwAb_SetFctPrphlHwTq0.Return.TestTolerance = [];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwTq0MeasPer1','HwTq0MeasPer2'};
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

HwTq0Polarity = DataDict.IpSignal;
HwTq0Polarity.LongName = 'HandWheel Torque 0 Polarity';
HwTq0Polarity.DocUnits = 'Uls';
HwTq0Polarity.EngDT = dt.s08;
HwTq0Polarity.EngInit = 1;
HwTq0Polarity.EngMin = -1;
HwTq0Polarity.EngMax = 1;
HwTq0Polarity.ReadIn = {'HwTq0MeasPer1'};
HwTq0Polarity.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTq0 = DataDict.OpSignal;
HwTq0.LongName = 'HandWheel Torque 0';
HwTq0.Description = 'HandWheel Torque 0 Output';
HwTq0.DocUnits = 'HwNwtMtr';
HwTq0.SwcShoName = 'HwTq0Meas';
HwTq0.EngDT = dt.float32;
HwTq0.EngInit = 0;
HwTq0.EngMin = -10;
HwTq0.EngMax = 10;
HwTq0.TestTolerance = 0.0049;
HwTq0.WrittenIn = {'HwTq0MeasPer1'};
HwTq0.WriteType = 'Rte';


HwTq0Qlfr = DataDict.OpSignal;
HwTq0Qlfr.LongName = 'Handwheel Torque 0 Qualifier';
HwTq0Qlfr.Description = [...
  'HandWheel Torque 0 Qualifier - NTC Status return'];
HwTq0Qlfr.DocUnits = 'Cnt';
HwTq0Qlfr.SwcShoName = 'HwTq0Meas';
HwTq0Qlfr.EngDT = enum.SigQlfr1;
HwTq0Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTq0Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTq0Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTq0Qlfr.TestTolerance = 0;
HwTq0Qlfr.WrittenIn = {'HwTq0MeasPer1'};
HwTq0Qlfr.WriteType = 'Rte';


HwTq0RollgCntr = DataDict.OpSignal;
HwTq0RollgCntr.LongName = 'HandWheel Torque 0 Rolling Counter';
HwTq0RollgCntr.Description = 'HandWheel Torque 0 Heart Bit';
HwTq0RollgCntr.DocUnits = 'Cnt';
HwTq0RollgCntr.SwcShoName = 'HwTq0Meas';
HwTq0RollgCntr.EngDT = dt.u08;
HwTq0RollgCntr.EngInit = 0;
HwTq0RollgCntr.EngMin = 0;
HwTq0RollgCntr.EngMax = 255;
HwTq0RollgCntr.TestTolerance = 0;
HwTq0RollgCntr.WrittenIn = {'HwTq0MeasPer1'};
HwTq0RollgCntr.WriteType = 'Rte';


RackLimrCcwEotSig0 = DataDict.OpSignal;
RackLimrCcwEotSig0.LongName = 'Rack Limiter Counter Clockwise End of Travel Signal0';
RackLimrCcwEotSig0.Description = 'CCW EOT0';
RackLimrCcwEotSig0.DocUnits = 'HwDeg';
RackLimrCcwEotSig0.SwcShoName = 'HwTq0Meas';
RackLimrCcwEotSig0.EngDT = dt.float32;
RackLimrCcwEotSig0.EngInit = 0;
RackLimrCcwEotSig0.EngMin = -800;
RackLimrCcwEotSig0.EngMax = 0;
RackLimrCcwEotSig0.TestTolerance = 0.2;
RackLimrCcwEotSig0.WrittenIn = {'HwTq0MeasPer1'};
RackLimrCcwEotSig0.WriteType = 'Rte';


RackLimrCwEotSig0 = DataDict.OpSignal;
RackLimrCwEotSig0.LongName = 'Rack Limiter Clockwise End of Travel Signal0';
RackLimrCwEotSig0.Description = 'CW EOT0';
RackLimrCwEotSig0.DocUnits = 'HwDeg';
RackLimrCwEotSig0.SwcShoName = 'HwTq0Meas';
RackLimrCwEotSig0.EngDT = dt.float32;
RackLimrCwEotSig0.EngInit = 0;
RackLimrCwEotSig0.EngMin = 0;
RackLimrCwEotSig0.EngMax = 800;
RackLimrCwEotSig0.TestTolerance = 0.2;
RackLimrCwEotSig0.WrittenIn = {'HwTq0MeasPer1'};
RackLimrCwEotSig0.WriteType = 'Rte';


RackLimrEotSig0Avl = DataDict.OpSignal;
RackLimrEotSig0Avl.LongName = 'Rack Limiter End of Travel Signal0 Available';
RackLimrEotSig0Avl.Description = 'Rack Limiter End of Travel';
RackLimrEotSig0Avl.DocUnits = 'Uls';
RackLimrEotSig0Avl.SwcShoName = 'HwTq0Meas';
RackLimrEotSig0Avl.EngDT = dt.lgc;
RackLimrEotSig0Avl.EngInit = 0;
RackLimrEotSig0Avl.EngMin = 0;
RackLimrEotSig0Avl.EngMax = 1;
RackLimrEotSig0Avl.TestTolerance = 0;
RackLimrEotSig0Avl.WrittenIn = {'HwTq0MeasPer1'};
RackLimrEotSig0Avl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTq0MeasHwTq0PrtclFltFailStep = DataDict.Calibration;
HwTq0MeasHwTq0PrtclFltFailStep.LongName = 'HandWheel Torque0 Measurement HandWheel Torque0 Protocol Fault Fail Step';
HwTq0MeasHwTq0PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwTq0MeasHwTq0PrtclFltFailStep.DocUnits = 'Cnt';
HwTq0MeasHwTq0PrtclFltFailStep.EngDT = dt.u16;
HwTq0MeasHwTq0PrtclFltFailStep.EngVal = 2521;
HwTq0MeasHwTq0PrtclFltFailStep.EngMin = 0;
HwTq0MeasHwTq0PrtclFltFailStep.EngMax = 65535;
HwTq0MeasHwTq0PrtclFltFailStep.Cardinality = 'Inin';
HwTq0MeasHwTq0PrtclFltFailStep.CustomerVisible = false;
HwTq0MeasHwTq0PrtclFltFailStep.Online = false;
HwTq0MeasHwTq0PrtclFltFailStep.Impact = 'H';
HwTq0MeasHwTq0PrtclFltFailStep.TuningOwner = 'FDD';
HwTq0MeasHwTq0PrtclFltFailStep.GraphLink = {''};
HwTq0MeasHwTq0PrtclFltFailStep.Monotony = 'None';
HwTq0MeasHwTq0PrtclFltFailStep.MaxGrad = 0;
HwTq0MeasHwTq0PrtclFltFailStep.PortName = 'HwTq0MeasHwTq0PrtclFltFailStep';


HwTq0MeasHwTq0PrtclFltPassStep = DataDict.Calibration;
HwTq0MeasHwTq0PrtclFltPassStep.LongName = 'HandWheel Torque0 Measurement HandWheel Torque0 Protocol Fault Pass Step';
HwTq0MeasHwTq0PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwTq0MeasHwTq0PrtclFltPassStep.DocUnits = 'Cnt';
HwTq0MeasHwTq0PrtclFltPassStep.EngDT = dt.u16;
HwTq0MeasHwTq0PrtclFltPassStep.EngVal = 1000;
HwTq0MeasHwTq0PrtclFltPassStep.EngMin = 0;
HwTq0MeasHwTq0PrtclFltPassStep.EngMax = 65535;
HwTq0MeasHwTq0PrtclFltPassStep.Cardinality = 'Inin';
HwTq0MeasHwTq0PrtclFltPassStep.CustomerVisible = false;
HwTq0MeasHwTq0PrtclFltPassStep.Online = false;
HwTq0MeasHwTq0PrtclFltPassStep.Impact = 'H';
HwTq0MeasHwTq0PrtclFltPassStep.TuningOwner = 'FDD';
HwTq0MeasHwTq0PrtclFltPassStep.GraphLink = {''};
HwTq0MeasHwTq0PrtclFltPassStep.Monotony = 'None';
HwTq0MeasHwTq0PrtclFltPassStep.MaxGrad = 0;
HwTq0MeasHwTq0PrtclFltPassStep.PortName = 'HwTq0MeasHwTq0PrtclFltPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwTq0Offs = DataDict.NVM;
HwTq0Offs.LongName = 'Handwheel Torque 0 Offset';
HwTq0Offs.Description = [...
  'Handwheel Torque 0 Offset NVM store'];
HwTq0Offs.DocUnits = 'Uls';
HwTq0Offs.EngDT = struct.HwTqOffsRec1;
HwTq0Offs.EngInit = [struct('OffsTrim',0,'OffsTrimPrfmdSts',0)];
HwTq0Offs.EngMin = [struct('OffsTrim',-10,'OffsTrimPrfmdSts',0)];
HwTq0Offs.EngMax = [struct('OffsTrim',10,'OffsTrimPrfmdSts',1)];
HwTq0Offs.CustomerVisible = false;
HwTq0Offs.Impact = 'H';
HwTq0Offs.TuningOwner = 'FDD';
HwTq0Offs.CoderInfo.Alias = 'HwTqOffsRec1';
HwTq0Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTq0ComStsErrCntr = DataDict.PIM;
HwTq0ComStsErrCntr.LongName = 'Handwheel Torque 0 Communication Status Error Counter';
HwTq0ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwTq0ComStsErrCntr.DocUnits = 'Cnt';
HwTq0ComStsErrCntr.EngDT = dt.u08;
HwTq0ComStsErrCntr.EngMin = 0;
HwTq0ComStsErrCntr.EngMax = 255;
HwTq0ComStsErrCntr.InitRowCol = [1  1];


HwTq0IntSnsrErrCntr = DataDict.PIM;
HwTq0IntSnsrErrCntr.LongName = 'Handwheel Torque 0 Internal Sensor Error Counter';
HwTq0IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwTq0IntSnsrErrCntr.DocUnits = 'Cnt';
HwTq0IntSnsrErrCntr.EngDT = dt.u08;
HwTq0IntSnsrErrCntr.EngMin = 0;
HwTq0IntSnsrErrCntr.EngMax = 255;
HwTq0IntSnsrErrCntr.InitRowCol = [1  1];


HwTq0MeasPrevHwTq0 = DataDict.PIM;
HwTq0MeasPrevHwTq0.LongName = 'Handwheel Torque0 Measurement Previous Handwheel Torque 0';
HwTq0MeasPrevHwTq0.Description = 'Previous Handwheel Torque0';
HwTq0MeasPrevHwTq0.DocUnits = 'HwNwtMtr';
HwTq0MeasPrevHwTq0.EngDT = dt.float32;
HwTq0MeasPrevHwTq0.EngMin = -10;
HwTq0MeasPrevHwTq0.EngMax = 10;
HwTq0MeasPrevHwTq0.InitRowCol = [1  1];


HwTq0MeasPrevRollgCntr = DataDict.PIM;
HwTq0MeasPrevRollgCntr.LongName = 'Handwheel Torque 0 Measurement Previous Rolling Count';
HwTq0MeasPrevRollgCntr.Description = 'Previous Roll Count';
HwTq0MeasPrevRollgCntr.DocUnits = 'Cnt';
HwTq0MeasPrevRollgCntr.EngDT = dt.u08;
HwTq0MeasPrevRollgCntr.EngMin = 0;
HwTq0MeasPrevRollgCntr.EngMax = 255;
HwTq0MeasPrevRollgCntr.InitRowCol = [1  1];


HwTq0MsgMissRxCnt = DataDict.PIM;
HwTq0MsgMissRxCnt.LongName = 'Handwheel Torque0 Message Missing Receive Count';
HwTq0MsgMissRxCnt.Description = [...
  'Torque0 Missing Counter- Troubleshooting Purpose'];
HwTq0MsgMissRxCnt.DocUnits = 'Cnt';
HwTq0MsgMissRxCnt.EngDT = dt.u32;
HwTq0MsgMissRxCnt.EngMin = 0;
HwTq0MsgMissRxCnt.EngMax = 4294967295;
HwTq0MsgMissRxCnt.InitRowCol = [1  1];


RackLimrCcwEot0 = DataDict.PIM;
RackLimrCcwEot0.LongName = 'Rack Limiter Counter Clockwise End of Travel0';
RackLimrCcwEot0.Description = 'CCW EOT';
RackLimrCcwEot0.DocUnits = 'HwDeg';
RackLimrCcwEot0.EngDT = dt.float32;
RackLimrCcwEot0.EngMin = -800;
RackLimrCcwEot0.EngMax = 0;
RackLimrCcwEot0.InitRowCol = [1  1];


RackLimrCwEot0 = DataDict.PIM;
RackLimrCwEot0.LongName = 'Rack Limiter Clockwise End of Travel0';
RackLimrCwEot0.Description = 'CW EOT';
RackLimrCwEot0.DocUnits = 'HwDeg';
RackLimrCwEot0.EngDT = dt.float32;
RackLimrCwEot0.EngMin = 0;
RackLimrCwEot0.EngMax = 800;
RackLimrCwEot0.InitRowCol = [1  1];


RackLimrEot0Avl = DataDict.PIM;
RackLimrEot0Avl.LongName = 'Rack Limiter End of Travel0 Available';
RackLimrEot0Avl.Description = 'EOT Signal Available';
RackLimrEot0Avl.DocUnits = 'Uls';
RackLimrEot0Avl.EngDT = dt.lgc;
RackLimrEot0Avl.EngMin = 0;
RackLimrEot0Avl.EngMax = 1;
RackLimrEot0Avl.InitRowCol = [1  1];


RackLimrEot0Data0 = DataDict.PIM;
RackLimrEot0Data0.LongName = 'Rack Limiter End of Travel0 Data0';
RackLimrEot0Data0.Description = 'Scratchpad Data0 of ID 2';
RackLimrEot0Data0.DocUnits = 'Cnt';
RackLimrEot0Data0.EngDT = dt.u08;
RackLimrEot0Data0.EngMin = 0;
RackLimrEot0Data0.EngMax = 255;
RackLimrEot0Data0.InitRowCol = [1  1];


RackLimrEot0Data1 = DataDict.PIM;
RackLimrEot0Data1.LongName = 'Rack Limiter End of Travel0 Data1';
RackLimrEot0Data1.Description = 'Scratchpad Data0 of ID 3';
RackLimrEot0Data1.DocUnits = 'Cnt';
RackLimrEot0Data1.EngDT = dt.u08;
RackLimrEot0Data1.EngMin = 0;
RackLimrEot0Data1.EngMax = 255;
RackLimrEot0Data1.InitRowCol = [1  1];


RackLimrEot0Data2 = DataDict.PIM;
RackLimrEot0Data2.LongName = 'Rack Limiter End of Travel0 Data2';
RackLimrEot0Data2.Description = 'Scratchpad Data0 of ID 4';
RackLimrEot0Data2.DocUnits = 'Cnt';
RackLimrEot0Data2.EngDT = dt.u08;
RackLimrEot0Data2.EngMin = 0;
RackLimrEot0Data2.EngMax = 255;
RackLimrEot0Data2.InitRowCol = [1  1];


RackLimrEot0Id2DataReadCmpl = DataDict.PIM;
RackLimrEot0Id2DataReadCmpl.LongName = 'Rack Limiter End of Travel0 Id2 Data Read Complete';
RackLimrEot0Id2DataReadCmpl.Description = 'Scratchpad message ID2 data';
RackLimrEot0Id2DataReadCmpl.DocUnits = 'Uls';
RackLimrEot0Id2DataReadCmpl.EngDT = dt.lgc;
RackLimrEot0Id2DataReadCmpl.EngMin = 0;
RackLimrEot0Id2DataReadCmpl.EngMax = 1;
RackLimrEot0Id2DataReadCmpl.InitRowCol = [1  1];


RackLimrEot0Id3DataReadCmpl = DataDict.PIM;
RackLimrEot0Id3DataReadCmpl.LongName = 'Rack Limiter End of Travel0 Id3 Data Read Complete';
RackLimrEot0Id3DataReadCmpl.Description = 'Scratchpad message ID3 data';
RackLimrEot0Id3DataReadCmpl.DocUnits = 'Uls';
RackLimrEot0Id3DataReadCmpl.EngDT = dt.lgc;
RackLimrEot0Id3DataReadCmpl.EngMin = 0;
RackLimrEot0Id3DataReadCmpl.EngMax = 1;
RackLimrEot0Id3DataReadCmpl.InitRowCol = [1  1];


RackLimrEot0Id4DataReadCmpl = DataDict.PIM;
RackLimrEot0Id4DataReadCmpl.LongName = 'Rack Limiter End of Travel0 Id4 Data Read Complete';
RackLimrEot0Id4DataReadCmpl.Description = 'Scratchpad message ID4 data';
RackLimrEot0Id4DataReadCmpl.DocUnits = 'Uls';
RackLimrEot0Id4DataReadCmpl.EngDT = dt.lgc;
RackLimrEot0Id4DataReadCmpl.EngMin = 0;
RackLimrEot0Id4DataReadCmpl.EngMax = 1;
RackLimrEot0Id4DataReadCmpl.InitRowCol = [1  1];



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


FLTINJ_HWTQ0MEAS_HWTQ0 = DataDict.Constant;
FLTINJ_HWTQ0MEAS_HWTQ0.LongName = 'Fault Injection Handwheel Torque 0 Measure Handwheel Torque 0';
FLTINJ_HWTQ0MEAS_HWTQ0.Description = [...
  'Fault Injection Handwheel Torque 0 Measure Handwheel Torque 0 Constant' ...
  ''];
FLTINJ_HWTQ0MEAS_HWTQ0.DocUnits = 'Uls';
FLTINJ_HWTQ0MEAS_HWTQ0.EngDT = dt.u16;
FLTINJ_HWTQ0MEAS_HWTQ0.EngVal = 24;
FLTINJ_HWTQ0MEAS_HWTQ0.Header = 'FltInj.h';
FLTINJ_HWTQ0MEAS_HWTQ0.Define = 'Global';


FLTINJ_HWTQ0MEAS_TESTOK0 = DataDict.Constant;
FLTINJ_HWTQ0MEAS_TESTOK0.LongName = 'Fault Injection Handwheel Torque 0 Measure Test OK 0';
FLTINJ_HWTQ0MEAS_TESTOK0.Description = [...
  'Fault Injection Handwheel Torque 0 Measure Test OK 0 Constant'];
FLTINJ_HWTQ0MEAS_TESTOK0.DocUnits = 'Uls';
FLTINJ_HWTQ0MEAS_TESTOK0.EngDT = dt.u16;
FLTINJ_HWTQ0MEAS_TESTOK0.EngVal = 25;
FLTINJ_HWTQ0MEAS_TESTOK0.Header = 'FltInj.h';
FLTINJ_HWTQ0MEAS_TESTOK0.Define = 'Global';


HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 0 Manufacturing Ntc Number';
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.Description = 'HwTq0 Manufacturing Ntc Number';
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X1E0;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X1E3;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.Header = 'None';
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 0 Ntc Number';
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.Description = 'HwTq0 Ntc Number';
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X073;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X073;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X07A;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.Header = 'None';
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.Define = 'Global';


RACKLIMRCCWEOTSCA_ULS_F32 = DataDict.Constant;
RACKLIMRCCWEOTSCA_ULS_F32.LongName = 'Rack Limiter Counter Clockwise End of Travel Scale';
RACKLIMRCCWEOTSCA_ULS_F32.Description = 'Scale';
RACKLIMRCCWEOTSCA_ULS_F32.DocUnits = 'Uls';
RACKLIMRCCWEOTSCA_ULS_F32.EngDT = dt.float32;
RACKLIMRCCWEOTSCA_ULS_F32.EngVal = -0.1953;
RACKLIMRCCWEOTSCA_ULS_F32.Header = 'None';
RACKLIMRCCWEOTSCA_ULS_F32.Define = 'Local';


RACKLIMRCWEOTSCA_ULS_F32 = DataDict.Constant;
RACKLIMRCWEOTSCA_ULS_F32.LongName = 'Rack Limiter Clockwise End of Travel Scale';
RACKLIMRCWEOTSCA_ULS_F32.Description = 'Scale';
RACKLIMRCWEOTSCA_ULS_F32.DocUnits = 'Uls';
RACKLIMRCWEOTSCA_ULS_F32.EngDT = dt.float32;
RACKLIMRCWEOTSCA_ULS_F32.EngVal = 0.1953;
RACKLIMRCWEOTSCA_ULS_F32.Header = 'None';
RACKLIMRCWEOTSCA_ULS_F32.Define = 'Local';


RACKLIMREOTSIGHILIM_HWDEG_F32 = DataDict.Constant;
RACKLIMREOTSIGHILIM_HWDEG_F32.LongName = 'Rack Limiter End of Travel Signal High Limit';
RACKLIMREOTSIGHILIM_HWDEG_F32.Description = 'High Limit For Rack Limiter';
RACKLIMREOTSIGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
RACKLIMREOTSIGHILIM_HWDEG_F32.EngDT = dt.float32;
RACKLIMREOTSIGHILIM_HWDEG_F32.EngVal = 800;
RACKLIMREOTSIGHILIM_HWDEG_F32.Header = 'None';
RACKLIMREOTSIGHILIM_HWDEG_F32.Define = 'Local';


RACKLIMREOTSIGLOLIM_HWDEG_F32 = DataDict.Constant;
RACKLIMREOTSIGLOLIM_HWDEG_F32.LongName = 'Rack Limiter End of Travel Signal Low Limit';
RACKLIMREOTSIGLOLIM_HWDEG_F32.Description = 'Low Limit For Rack Limiter Counter';
RACKLIMREOTSIGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
RACKLIMREOTSIGLOLIM_HWDEG_F32.EngDT = dt.float32;
RACKLIMREOTSIGLOLIM_HWDEG_F32.EngVal = -800;
RACKLIMREOTSIGLOLIM_HWDEG_F32.Header = 'None';
RACKLIMREOTSIGLOLIM_HWDEG_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTq0MfgFlt = DataDict.NTC;
HwTq0MfgFlt.NtcNr = NtcNr1.NTCNR_0X1E0;
HwTq0MfgFlt.NtcTyp = 'None';
HwTq0MfgFlt.LongName = 'Handwheel Torque 0 Manufacturing Fault';
HwTq0MfgFlt.Description = 'HwTq0MfgFlt.NtcNr = HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16';
HwTq0MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq0MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwTq0MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTq0MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq0MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq0MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq0MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq0MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq0MfgFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTq0PrtclFlt = DataDict.NTC;
HwTq0PrtclFlt.NtcNr = NtcNr1.NTCNR_0X073;
HwTq0PrtclFlt.NtcTyp = 'Deb';
HwTq0PrtclFlt.LongName = 'Handwheel Torque 0 Protocol Fault';
HwTq0PrtclFlt.Description = 'HwTq0PrtclFlt.NtcNr = HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16';
HwTq0PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq0PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwTq0PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwTq0PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq0PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq0PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq0PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq0PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq0PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
