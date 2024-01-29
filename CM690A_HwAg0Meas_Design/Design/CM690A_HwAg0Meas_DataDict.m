%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-Jun-2016 09:27:47       %
%                                  Created with tool release: 2.40.0     %
%                                  Synergy file: %version: 12 %           %
%                                  Derived by: %derived_by: cz68ds %          %
%%-----------------------------------------------------------------------%

CM690A = DataDict.FDD;
CM690A.Version = '1.11.x';
CM690A.LongName = 'Handwheel Angle 0 Measurement';
CM690A.ShoName  = 'HwAg0Meas';
CM690A.DesignASIL = 'D';
CM690A.Description = [...
  'HandWheel Angle Sensor 0 Measurement Function reads 10th Tooth and 11t' ...
  'h Tooth Spur Handwheel angles over SENT and compute absolute Handwheel' ...
  ' Angle 0. Function also provides Fault Injection and Trim Manufacturin' ...
  'g services'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAg0MeasInit1 = DataDict.Runnable;
HwAg0MeasInit1.Context = 'Rte';
HwAg0MeasInit1.TimeStep = 0;
HwAg0MeasInit1.Description = 'Initialization';

HwAg0MeasPer1 = DataDict.Runnable;
HwAg0MeasPer1.Context = 'Rte';
HwAg0MeasPer1.TimeStep = 0.002;
HwAg0MeasPer1.Description = 'Trigger';

HwAg0MeasPer2 = DataDict.Runnable;
HwAg0MeasPer2.Context = 'Rte';
HwAg0MeasPer2.TimeStep = 0.002;
HwAg0MeasPer2.Description = 'Read 10th tooth sensor';

HwAg0MeasPer3 = DataDict.Runnable;
HwAg0MeasPer3.Context = 'Rte';
HwAg0MeasPer3.TimeStep = 0.002;
HwAg0MeasPer3.Description = 'Read 11th tooth sensor';

HwAg0MeasPer4 = DataDict.Runnable;
HwAg0MeasPer4.Context = 'Rte';
HwAg0MeasPer4.TimeStep = 0.002;
HwAg0MeasPer4.Description = 'HwAg Computation';

HwAg0MeasPer5 = DataDict.Runnable;
HwAg0MeasPer5.Context = 'Rte';
HwAg0MeasPer5.TimeStep = 0.1;
HwAg0MeasPer5.Description = 'Trim Performed Diagnostic';

HwAg0MeasHwAg0AutTrim = DataDict.SrvRunnable;
HwAg0MeasHwAg0AutTrim.Context = 'Rte';
HwAg0MeasHwAg0AutTrim.Description = '';
HwAg0MeasHwAg0AutTrim.Return = DataDict.CSReturn;
HwAg0MeasHwAg0AutTrim.Return.Type = 'None';
HwAg0MeasHwAg0AutTrim.Return.Min = [];
HwAg0MeasHwAg0AutTrim.Return.Max = [];
HwAg0MeasHwAg0AutTrim.Return.TestTolerance = [];

HwAg0MeasHwAg0ClrTrim = DataDict.SrvRunnable;
HwAg0MeasHwAg0ClrTrim.Context = 'Rte';
HwAg0MeasHwAg0ClrTrim.Description = '';
HwAg0MeasHwAg0ClrTrim.Return = DataDict.CSReturn;
HwAg0MeasHwAg0ClrTrim.Return.Type = 'None';
HwAg0MeasHwAg0ClrTrim.Return.Min = [];
HwAg0MeasHwAg0ClrTrim.Return.Max = [];
HwAg0MeasHwAg0ClrTrim.Return.TestTolerance = [];

HwAg0MeasHwAg0ReadTrim = DataDict.SrvRunnable;
HwAg0MeasHwAg0ReadTrim.Context = 'Rte';
HwAg0MeasHwAg0ReadTrim.Description = '';
HwAg0MeasHwAg0ReadTrim.Return = DataDict.CSReturn;
HwAg0MeasHwAg0ReadTrim.Return.Type = 'None';
HwAg0MeasHwAg0ReadTrim.Return.Min = [];
HwAg0MeasHwAg0ReadTrim.Return.Max = [];
HwAg0MeasHwAg0ReadTrim.Return.TestTolerance = [];
HwAg0MeasHwAg0ReadTrim.Arguments(1) = DataDict.CSArguments;
HwAg0MeasHwAg0ReadTrim.Arguments(1).Name = 'HwAgReadTrimData';
HwAg0MeasHwAg0ReadTrim.Arguments(1).EngDT = dt.float32;
HwAg0MeasHwAg0ReadTrim.Arguments(1).EngMin = -900;
HwAg0MeasHwAg0ReadTrim.Arguments(1).EngMax = 900;
HwAg0MeasHwAg0ReadTrim.Arguments(1).Units = 'HwDeg';
HwAg0MeasHwAg0ReadTrim.Arguments(1).Direction = 'Out';
HwAg0MeasHwAg0ReadTrim.Arguments(1).InitRowCol = [0  0];
HwAg0MeasHwAg0ReadTrim.Arguments(1).Description = '';

HwAg0MeasHwAg0TrimPrfmdSts = DataDict.SrvRunnable;
HwAg0MeasHwAg0TrimPrfmdSts.Context = 'Rte';
HwAg0MeasHwAg0TrimPrfmdSts.Description = '';
HwAg0MeasHwAg0TrimPrfmdSts.Return = DataDict.CSReturn;
HwAg0MeasHwAg0TrimPrfmdSts.Return.Type = 'None';
HwAg0MeasHwAg0TrimPrfmdSts.Return.Min = [];
HwAg0MeasHwAg0TrimPrfmdSts.Return.Max = [];
HwAg0MeasHwAg0TrimPrfmdSts.Return.TestTolerance = [];
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).Name = 'HwAgOffsTrimPrfmdStsData';
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).EngMin = 0;
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).EngMax = 1;
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).InitRowCol = [0  0];
HwAg0MeasHwAg0TrimPrfmdSts.Arguments(1).Description = '';

HwAg0MeasHwAg0WrTrim = DataDict.SrvRunnable;
HwAg0MeasHwAg0WrTrim.Context = 'Rte';
HwAg0MeasHwAg0WrTrim.Description = '';
HwAg0MeasHwAg0WrTrim.Return = DataDict.CSReturn;
HwAg0MeasHwAg0WrTrim.Return.Type = 'None';
HwAg0MeasHwAg0WrTrim.Return.Min = [];
HwAg0MeasHwAg0WrTrim.Return.Max = [];
HwAg0MeasHwAg0WrTrim.Return.TestTolerance = [];
HwAg0MeasHwAg0WrTrim.Arguments(1) = DataDict.CSArguments;
HwAg0MeasHwAg0WrTrim.Arguments(1).Name = 'HwAgWrOffsTrimData';
HwAg0MeasHwAg0WrTrim.Arguments(1).EngDT = dt.float32;
HwAg0MeasHwAg0WrTrim.Arguments(1).EngMin = -900;
HwAg0MeasHwAg0WrTrim.Arguments(1).EngMax = 900;
HwAg0MeasHwAg0WrTrim.Arguments(1).Units = 'HwDeg';
HwAg0MeasHwAg0WrTrim.Arguments(1).Direction = 'In';
HwAg0MeasHwAg0WrTrim.Arguments(1).InitRowCol = [0  0];
HwAg0MeasHwAg0WrTrim.Arguments(1).Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'HwAg0MeasPer4'};
FltInj_f32.Description = 'Fault Injection';
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = '';
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = '';


FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'HwAg0MeasPer2'};
FltInj_u08.Description = 'Fault Injection';
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).Units = 'Uls';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(1).Description = '';
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];
FltInj_u08.Arguments(2).Description = '';


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwAg0MeasPer4'};
GetNtcQlfrSts.Description = 'Get Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Return.Description = '';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = 1;
GetNtcQlfrSts.Arguments(1).EngMax = 511;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = '';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = 0;
GetNtcQlfrSts.Arguments(2).EngMax = 2;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = '';


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'HwAg0MeasInit1','HwAg0MeasPer1'};
GetRefTmr1MicroSec32bit.Description = 'Timer';
GetRefTmr1MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr1MicroSec32bit.Return.Type = 'None';
GetRefTmr1MicroSec32bit.Return.Min = [];
GetRefTmr1MicroSec32bit.Return.Max = [];
GetRefTmr1MicroSec32bit.Return.TestTolerance = [];
GetRefTmr1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr1MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr1MicroSec32bit.Arguments(1).Description = '';


GetTiSpan1MicroSec32bit = DataDict.Client;
GetTiSpan1MicroSec32bit.CallLocation = {'HwAg0MeasInit1','HwAg0MeasPer1'};
GetTiSpan1MicroSec32bit.Description = 'Timer';
GetTiSpan1MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan1MicroSec32bit.Return.Type = 'None';
GetTiSpan1MicroSec32bit.Return.Min = [];
GetTiSpan1MicroSec32bit.Return.Max = [];
GetTiSpan1MicroSec32bit.Return.TestTolerance = [];
GetTiSpan1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(1).Description = '';
GetTiSpan1MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan1MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan1MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(2).Description = '';


HwAg0Offs_SetRamBlockStatus = DataDict.Client;
HwAg0Offs_SetRamBlockStatus.CallLocation = {'HwAg0MeasHwAg0AutTrim','HwAg0MeasHwAg0ClrTrim','HwAg0MeasHwAg0WrTrim'};
HwAg0Offs_SetRamBlockStatus.Description = 'NVM';
HwAg0Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwAg0Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwAg0Offs_SetRamBlockStatus.Return.Min = 0;
HwAg0Offs_SetRamBlockStatus.Return.Max = 1;
HwAg0Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwAg0Offs_SetRamBlockStatus.Return.Description = '';
HwAg0Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwAg0Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwAg0Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwAg0Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwAg0Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwAg0Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwAg0Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwAg0Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwAg0Offs_SetRamBlockStatus.Arguments(1).Description = '';


IoHwAb_SetFctPrphlHwAg0 = DataDict.Client;
IoHwAb_SetFctPrphlHwAg0.CallLocation = {'HwAg0MeasInit1'};
IoHwAb_SetFctPrphlHwAg0.Description = '';
IoHwAb_SetFctPrphlHwAg0.Return = DataDict.CSReturn;
IoHwAb_SetFctPrphlHwAg0.Return.Type = 'Standard';
IoHwAb_SetFctPrphlHwAg0.Return.Min = 0;
IoHwAb_SetFctPrphlHwAg0.Return.Max = 1;
IoHwAb_SetFctPrphlHwAg0.Return.TestTolerance = [];
IoHwAb_SetFctPrphlHwAg0.Return.Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwAg0MeasPer3','HwAg0MeasPer4','HwAg0MeasPer5','HwAg0MeasPer2'};
SetNtcSts.Description = '';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = '';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = '';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg0Phy = DataDict.IpSignal;
HwAg0Phy.LongName = 'Hand Wheel Angle 0 Physical';
HwAg0Phy.Description = '';
HwAg0Phy.DocUnits = 'Volt';
HwAg0Phy.EngDT = dt.Phy;
HwAg0Phy.EngInit = 0;
HwAg0Phy.EngMin = 0;
HwAg0Phy.EngMax = 5;
HwAg0Phy.ReadIn = {''};
HwAg0Phy.ReadType = 'Phy';


HwAg0Polarity = DataDict.IpSignal;
HwAg0Polarity.LongName = 'HandWheel Angle 0 Polarity';
HwAg0Polarity.Description = '';
HwAg0Polarity.DocUnits = 'Uls';
HwAg0Polarity.EngDT = dt.s08;
HwAg0Polarity.EngInit = 1;
HwAg0Polarity.EngMin = -1;
HwAg0Polarity.EngMax = 1;
HwAg0Polarity.ReadIn = {'HwAg0MeasPer4'};
HwAg0Polarity.ReadType = 'Rte';


RegInpRSENT4CS = DataDict.IpSignal;
RegInpRSENT4CS.LongName = 'Register Input RSENT4 Comm Stat';
RegInpRSENT4CS.Description = '';
RegInpRSENT4CS.DocUnits = 'Cnt';
RegInpRSENT4CS.EngDT = dt.u32;
RegInpRSENT4CS.EngInit = 0;
RegInpRSENT4CS.EngMin = 0;
RegInpRSENT4CS.EngMax = 4294967295;
RegInpRSENT4CS.ReadIn = {'HwAg0MeasPer2','HwAg0MeasPer3'};
RegInpRSENT4CS.ReadType = 'Phy';


RegInpRSENT4FND = DataDict.IpSignal;
RegInpRSENT4FND.LongName = 'Register Input RSENT4 FND';
RegInpRSENT4FND.Description = '';
RegInpRSENT4FND.DocUnits = 'Cnt';
RegInpRSENT4FND.EngDT = dt.u08;
RegInpRSENT4FND.EngInit = 0;
RegInpRSENT4FND.EngMin = 0;
RegInpRSENT4FND.EngMax = 1;
RegInpRSENT4FND.ReadIn = {'HwAg0MeasPer1'};
RegInpRSENT4FND.ReadType = 'Phy';


RegInpRSENT4FRS = DataDict.IpSignal;
RegInpRSENT4FRS.LongName = 'Register Input RSENT4 FSM';
RegInpRSENT4FRS.Description = '';
RegInpRSENT4FRS.DocUnits = 'Cnt';
RegInpRSENT4FRS.EngDT = dt.u08;
RegInpRSENT4FRS.EngInit = 0;
RegInpRSENT4FRS.EngMin = 0;
RegInpRSENT4FRS.EngMax = 1;
RegInpRSENT4FRS.ReadIn = {'HwAg0MeasPer1'};
RegInpRSENT4FRS.ReadType = 'Phy';


RegInpRSENT4FRXD = DataDict.IpSignal;
RegInpRSENT4FRXD.LongName = 'Register Input RSENT4 Fast Receive Data';
RegInpRSENT4FRXD.Description = '';
RegInpRSENT4FRXD.DocUnits = 'Cnt';
RegInpRSENT4FRXD.EngDT = dt.u32;
RegInpRSENT4FRXD.EngInit = 0;
RegInpRSENT4FRXD.EngMin = 0;
RegInpRSENT4FRXD.EngMax = 4294967295;
RegInpRSENT4FRXD.ReadIn = {'HwAg0MeasPer2','HwAg0MeasPer3'};
RegInpRSENT4FRXD.ReadType = 'Phy';


RegInpRSENT4NRS = DataDict.IpSignal;
RegInpRSENT4NRS.LongName = 'Register Input RSENT4 NRS';
RegInpRSENT4NRS.Description = '';
RegInpRSENT4NRS.DocUnits = 'Cnt';
RegInpRSENT4NRS.EngDT = dt.lgc;
RegInpRSENT4NRS.EngInit = 0;
RegInpRSENT4NRS.EngMin = 0;
RegInpRSENT4NRS.EngMax = 1;
RegInpRSENT4NRS.ReadIn = {'HwAg0MeasPer1','HwAg0MeasPer2','HwAg0MeasPer3'};
RegInpRSENT4NRS.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAg0 = DataDict.OpSignal;
HwAg0.LongName = 'HandWheel Angle 0';
HwAg0.Description = 'HandWheel Angle 0 Output';
HwAg0.DocUnits = 'HwDeg';
HwAg0.SwcShoName = 'HwAg0Meas';
HwAg0.EngDT = dt.float32;
HwAg0.EngInit = 0;
HwAg0.EngMin = -900;
HwAg0.EngMax = 900;
HwAg0.TestTolerance = 0.088;
HwAg0.WrittenIn = {'HwAg0MeasPer4'};
HwAg0.WriteType = 'Rte';


HwAg0Qlfr = DataDict.OpSignal;
HwAg0Qlfr.LongName = 'Handwheel Angle 0 Qualifier';
HwAg0Qlfr.Description = [...
  'HandWheel Angle 0 Qualifier - NTC Status return'];
HwAg0Qlfr.DocUnits = 'Cnt';
HwAg0Qlfr.SwcShoName = 'HwAg0Meas';
HwAg0Qlfr.EngDT = enum.SigQlfr1;
HwAg0Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAg0Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAg0Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAg0Qlfr.TestTolerance = 0;
HwAg0Qlfr.WrittenIn = {'HwAg0MeasPer4'};
HwAg0Qlfr.WriteType = 'Rte';


HwAg0RollgCntr = DataDict.OpSignal;
HwAg0RollgCntr.LongName = 'HandWheel Angle 0 Rolling Counter';
HwAg0RollgCntr.Description = 'HandWheel Angle 0 Heart Bit';
HwAg0RollgCntr.DocUnits = 'Cnt';
HwAg0RollgCntr.SwcShoName = 'HwAg0Meas';
HwAg0RollgCntr.EngDT = dt.u08;
HwAg0RollgCntr.EngInit = 0;
HwAg0RollgCntr.EngMin = 0;
HwAg0RollgCntr.EngMax = 255;
HwAg0RollgCntr.TestTolerance = 0;
HwAg0RollgCntr.WrittenIn = {'HwAg0MeasPer4'};
HwAg0RollgCntr.WriteType = 'Rte';


RegOutRSENT4NRC = DataDict.OpSignal;
RegOutRSENT4NRC.LongName = 'Register Input RSENT4 NRC Trigger';
RegOutRSENT4NRC.Description = 'NRC Trigger';
RegOutRSENT4NRC.DocUnits = 'Cnt';
RegOutRSENT4NRC.SwcShoName = 'HwAg0Meas';
RegOutRSENT4NRC.EngDT = dt.lgc;
RegOutRSENT4NRC.EngInit = 0;
RegOutRSENT4NRC.EngMin = 0;
RegOutRSENT4NRC.EngMax = 1;
RegOutRSENT4NRC.TestTolerance = 0;
RegOutRSENT4NRC.WrittenIn = {'HwAg0MeasPer1','HwAg0MeasPer4'};
RegOutRSENT4NRC.WriteType = 'Phy';


RegOutRSENT4SPCT = DataDict.OpSignal;
RegOutRSENT4SPCT.LongName = 'Register Input RSENT4 SPC Trigger';
RegOutRSENT4SPCT.Description = 'SPC Trigger';
RegOutRSENT4SPCT.DocUnits = 'Cnt';
RegOutRSENT4SPCT.SwcShoName = 'HwAg0Meas';
RegOutRSENT4SPCT.EngDT = dt.u32;
RegOutRSENT4SPCT.EngInit = 0;
RegOutRSENT4SPCT.EngMin = 0;
RegOutRSENT4SPCT.EngMax = 4294967295;
RegOutRSENT4SPCT.TestTolerance = 0;
RegOutRSENT4SPCT.WrittenIn = {'HwAg0MeasPer2'};
RegOutRSENT4SPCT.WriteType = 'Phy';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
HwAg0Snsr0Raw = DataDict.IRV;
HwAg0Snsr0Raw.LongName = 'Handwheel Angle 0 Sensor 0 Raw';
HwAg0Snsr0Raw.Description = 'Sensor 0, 10th Tooth Raw data';
HwAg0Snsr0Raw.DocUnits = 'Cnt';
HwAg0Snsr0Raw.EngDT = dt.u16;
HwAg0Snsr0Raw.EngInit = 0;
HwAg0Snsr0Raw.EngMin = 0;
HwAg0Snsr0Raw.EngMax = 4095;
HwAg0Snsr0Raw.ReadIn = {'HwAg0MeasPer4'};
HwAg0Snsr0Raw.WrittenIn = {'HwAg0MeasPer2'};


HwAg0Snsr0TestOk = DataDict.IRV;
HwAg0Snsr0TestOk.LongName = 'Handwheel Angle 0 Sensor 0 Test Ok';
HwAg0Snsr0TestOk.Description = 'Sensor 0, 10th Tooth Test Ok';
HwAg0Snsr0TestOk.DocUnits = 'Cnt';
HwAg0Snsr0TestOk.EngDT = dt.u08;
HwAg0Snsr0TestOk.EngInit = 0;
HwAg0Snsr0TestOk.EngMin = 0;
HwAg0Snsr0TestOk.EngMax = 3;
HwAg0Snsr0TestOk.ReadIn = {'HwAg0MeasPer4'};
HwAg0Snsr0TestOk.WrittenIn = {'HwAg0MeasPer2'};


HwAg0Snsr1Raw = DataDict.IRV;
HwAg0Snsr1Raw.LongName = 'Handwheel Angle 0 Sensor 1 Raw';
HwAg0Snsr1Raw.Description = 'Sensor 1, 11th Tooth Raw data';
HwAg0Snsr1Raw.DocUnits = 'Cnt';
HwAg0Snsr1Raw.EngDT = dt.u16;
HwAg0Snsr1Raw.EngInit = 0;
HwAg0Snsr1Raw.EngMin = 0;
HwAg0Snsr1Raw.EngMax = 4095;
HwAg0Snsr1Raw.ReadIn = {'HwAg0MeasPer4'};
HwAg0Snsr1Raw.WrittenIn = {'HwAg0MeasPer3'};


HwAg0Snsr1TestOk = DataDict.IRV;
HwAg0Snsr1TestOk.LongName = 'Handwheel Angle 0 Sensor 1 Test Ok';
HwAg0Snsr1TestOk.Description = 'Sensor 1, 11th Tooth Test Ok';
HwAg0Snsr1TestOk.DocUnits = 'Cnt';
HwAg0Snsr1TestOk.EngDT = dt.u08;
HwAg0Snsr1TestOk.EngInit = 0;
HwAg0Snsr1TestOk.EngMin = 0;
HwAg0Snsr1TestOk.EngMax = 3;
HwAg0Snsr1TestOk.ReadIn = {'HwAg0MeasPer4'};
HwAg0Snsr1TestOk.WrittenIn = {'HwAg0MeasPer3'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAg0MeasHwAg0IfFltFailStep = DataDict.Calibration;
HwAg0MeasHwAg0IfFltFailStep.LongName = 'HandWheel Angle0 Measurement HandWheel Angle0 Interface Fault Fail Step';
HwAg0MeasHwAg0IfFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwAg0MeasHwAg0IfFltFailStep.DocUnits = 'Cnt';
HwAg0MeasHwAg0IfFltFailStep.EngDT = dt.u16;
HwAg0MeasHwAg0IfFltFailStep.EngVal = 2521;
HwAg0MeasHwAg0IfFltFailStep.EngMin = 0;
HwAg0MeasHwAg0IfFltFailStep.EngMax = 65535;
HwAg0MeasHwAg0IfFltFailStep.Cardinality = 'Inin';
HwAg0MeasHwAg0IfFltFailStep.CustomerVisible = false;
HwAg0MeasHwAg0IfFltFailStep.Online = false;
HwAg0MeasHwAg0IfFltFailStep.Impact = 'H';
HwAg0MeasHwAg0IfFltFailStep.TuningOwner = 'FDD';
HwAg0MeasHwAg0IfFltFailStep.GraphLink = {''};
HwAg0MeasHwAg0IfFltFailStep.Monotony = 'None';
HwAg0MeasHwAg0IfFltFailStep.MaxGrad = 0;
HwAg0MeasHwAg0IfFltFailStep.PortName = 'HwAg0MeasHwAg0IfFltFailStep';


HwAg0MeasHwAg0IfFltPassStep = DataDict.Calibration;
HwAg0MeasHwAg0IfFltPassStep.LongName = 'HandWheel Angle0 Measurement HandWheel Angle0 Interface Fault Pass Step';
HwAg0MeasHwAg0IfFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwAg0MeasHwAg0IfFltPassStep.DocUnits = 'Cnt';
HwAg0MeasHwAg0IfFltPassStep.EngDT = dt.u16;
HwAg0MeasHwAg0IfFltPassStep.EngVal = 1000;
HwAg0MeasHwAg0IfFltPassStep.EngMin = 0;
HwAg0MeasHwAg0IfFltPassStep.EngMax = 65535;
HwAg0MeasHwAg0IfFltPassStep.Cardinality = 'Inin';
HwAg0MeasHwAg0IfFltPassStep.CustomerVisible = false;
HwAg0MeasHwAg0IfFltPassStep.Online = false;
HwAg0MeasHwAg0IfFltPassStep.Impact = 'H';
HwAg0MeasHwAg0IfFltPassStep.TuningOwner = 'FDD';
HwAg0MeasHwAg0IfFltPassStep.GraphLink = {''};
HwAg0MeasHwAg0IfFltPassStep.Monotony = 'None';
HwAg0MeasHwAg0IfFltPassStep.MaxGrad = 0;
HwAg0MeasHwAg0IfFltPassStep.PortName = 'HwAg0MeasHwAg0IfFltPassStep';


HwAg0MeasHwAg0Snsr0PrtclFltFailStep = DataDict.Calibration;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.LongName = 'HandWheel Angle0 Measurement HandWheel Angle0 Sensor0 Protocol Fault Fail Step';
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.DocUnits = 'Cnt';
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.EngDT = dt.u16;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.EngVal = 2521;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.EngMin = 0;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.EngMax = 65535;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.Cardinality = 'Inin';
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.CustomerVisible = false;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.Online = false;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.Impact = 'H';
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.TuningOwner = 'FDD';
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.GraphLink = {''};
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.Monotony = 'None';
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.MaxGrad = 0;
HwAg0MeasHwAg0Snsr0PrtclFltFailStep.PortName = 'HwAg0MeasHwAg0Snsr0PrtclFltFailStep';


HwAg0MeasHwAg0Snsr0PrtclFltPassStep = DataDict.Calibration;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.LongName = 'HandWheel Angle0 Measurement HandWheel Angle0 Sensor0 Protocol Fault Pass Step';
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.DocUnits = 'Cnt';
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.EngDT = dt.u16;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.EngVal = 1000;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.EngMin = 0;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.EngMax = 65535;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.Cardinality = 'Inin';
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.CustomerVisible = false;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.Online = false;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.Impact = 'H';
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.TuningOwner = 'FDD';
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.GraphLink = {''};
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.Monotony = 'None';
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.MaxGrad = 0;
HwAg0MeasHwAg0Snsr0PrtclFltPassStep.PortName = 'HwAg0MeasHwAg0Snsr0PrtclFltPassStep';


HwAg0MeasHwAg0Snsr1PrtclFltFailStep = DataDict.Calibration;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.LongName = 'HandWheel Angle0 Measurement HandWheel Angle0 Sensor1 Protocol Fault Fail Step';
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.DocUnits = 'Cnt';
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.EngDT = dt.u16;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.EngVal = 2521;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.EngMin = 0;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.EngMax = 65535;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.Cardinality = 'Inin';
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.CustomerVisible = false;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.Online = false;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.Impact = 'H';
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.TuningOwner = 'FDD';
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.GraphLink = {''};
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.Monotony = 'None';
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.MaxGrad = 0;
HwAg0MeasHwAg0Snsr1PrtclFltFailStep.PortName = 'HwAg0MeasHwAg0Snsr1PrtclFltFailStep';


HwAg0MeasHwAg0Snsr1PrtclFltPassStep = DataDict.Calibration;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.LongName = 'HandWheel Angle0 Measurement HandWheel Angle0 Sensor1 Protocol Fault Pass Step';
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.DocUnits = 'Cnt';
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.EngDT = dt.u16;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.EngVal = 1000;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.EngMin = 0;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.EngMax = 65535;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.Cardinality = 'Inin';
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.CustomerVisible = false;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.Online = false;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.Impact = 'H';
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.TuningOwner = 'FDD';
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.GraphLink = {''};
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.Monotony = 'None';
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.MaxGrad = 0;
HwAg0MeasHwAg0Snsr1PrtclFltPassStep.PortName = 'HwAg0MeasHwAg0Snsr1PrtclFltPassStep';


HwAg0MeasSnsr0Rev = DataDict.Calibration;
HwAg0MeasSnsr0Rev.LongName = 'HandWheel Angle0 Measurement Sensor0 Revolution';
HwAg0MeasSnsr0Rev.Description = 'Sensor0 10th Tooth Revolution';
HwAg0MeasSnsr0Rev.DocUnits = 'Cnt';
HwAg0MeasSnsr0Rev.EngDT = dt.u08;
HwAg0MeasSnsr0Rev.EngVal =  ...
   [0                1                1                2                2                3                3                4                4                5                5                6                6                7                7                8                8                9                9               10               10                0];
HwAg0MeasSnsr0Rev.EngMin = 0;
HwAg0MeasSnsr0Rev.EngMax = 255;
HwAg0MeasSnsr0Rev.Cardinality = 'Inin';
HwAg0MeasSnsr0Rev.CustomerVisible = false;
HwAg0MeasSnsr0Rev.Online = false;
HwAg0MeasSnsr0Rev.Impact = 'H';
HwAg0MeasSnsr0Rev.TuningOwner = 'FDD';
HwAg0MeasSnsr0Rev.GraphLink = {''};
HwAg0MeasSnsr0Rev.Monotony = 'None';
HwAg0MeasSnsr0Rev.MaxGrad = 0;
HwAg0MeasSnsr0Rev.PortName = 'HwAg0MeasSnsr0Rev';


HwAg0MeasSnsr1Rev = DataDict.Calibration;
HwAg0MeasSnsr1Rev.LongName = 'HandWheel Angle0 Measurement Sensor1 Revolution';
HwAg0MeasSnsr1Rev.Description = 'Sensor1 11th Tooth Revolution';
HwAg0MeasSnsr1Rev.DocUnits = 'Cnt';
HwAg0MeasSnsr1Rev.EngDT = dt.u08;
HwAg0MeasSnsr1Rev.EngVal =  ...
   [0                0                1                1                2                2                3                3                4                4                5                5                6                6                7                7                8                8                9                9                0                9];
HwAg0MeasSnsr1Rev.EngMin = 0;
HwAg0MeasSnsr1Rev.EngMax = 255;
HwAg0MeasSnsr1Rev.Cardinality = 'Inin';
HwAg0MeasSnsr1Rev.CustomerVisible = false;
HwAg0MeasSnsr1Rev.Online = false;
HwAg0MeasSnsr1Rev.Impact = 'H';
HwAg0MeasSnsr1Rev.TuningOwner = 'FDD';
HwAg0MeasSnsr1Rev.GraphLink = {''};
HwAg0MeasSnsr1Rev.Monotony = 'None';
HwAg0MeasSnsr1Rev.MaxGrad = 0;
HwAg0MeasSnsr1Rev.PortName = 'HwAg0MeasSnsr1Rev';


HwAg0MeasStep = DataDict.Calibration;
HwAg0MeasStep.LongName = 'HandWheel Angle0 Measurement Step';
HwAg0MeasStep.Description = 'Step Level';
HwAg0MeasStep.DocUnits = 'Cnt';
HwAg0MeasStep.EngDT = dt.s16;
HwAg0MeasStep.EngVal =  ...
   [0             -360               36             -324               72             -288              108             -252              144             -216              180             -180              216             -144              252             -108              288              -72              324              -36              360             -396];
HwAg0MeasStep.EngMin = -500;
HwAg0MeasStep.EngMax = 500;
HwAg0MeasStep.Cardinality = 'Inin';
HwAg0MeasStep.CustomerVisible = false;
HwAg0MeasStep.Online = false;
HwAg0MeasStep.Impact = 'H';
HwAg0MeasStep.TuningOwner = 'FDD';
HwAg0MeasStep.GraphLink = {''};
HwAg0MeasStep.Monotony = 'None';
HwAg0MeasStep.MaxGrad = 0;
HwAg0MeasStep.PortName = 'HwAg0MeasStep';


HwAg0MeasVrnrErrThd = DataDict.Calibration;
HwAg0MeasVrnrErrThd.LongName = 'HandWheel Angle0 Measurement Vernier Error Threshold';
HwAg0MeasVrnrErrThd.Description = 'Vernier Error Threshold Value';
HwAg0MeasVrnrErrThd.DocUnits = 'Cnt';
HwAg0MeasVrnrErrThd.EngDT = dt.u08;
HwAg0MeasVrnrErrThd.EngVal = 8;
HwAg0MeasVrnrErrThd.EngMin = 0;
HwAg0MeasVrnrErrThd.EngMax = 20;
HwAg0MeasVrnrErrThd.Cardinality = 'Inin';
HwAg0MeasVrnrErrThd.CustomerVisible = false;
HwAg0MeasVrnrErrThd.Online = false;
HwAg0MeasVrnrErrThd.Impact = 'H';
HwAg0MeasVrnrErrThd.TuningOwner = 'FDD';
HwAg0MeasVrnrErrThd.GraphLink = {''};
HwAg0MeasVrnrErrThd.Monotony = 'None';
HwAg0MeasVrnrErrThd.MaxGrad = 0;
HwAg0MeasVrnrErrThd.PortName = 'HwAg0MeasVrnrErrThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwAg0Offs = DataDict.NVM;
HwAg0Offs.LongName = 'Handwheel Angle0 Offset';
HwAg0Offs.Description = 'Handwheel Angle0 Offset NVM store';
HwAg0Offs.DocUnits = 'Uls';
HwAg0Offs.EngDT = struct.HwAgOffsRec1;
HwAg0Offs.EngInit = [struct('OffsTrim',0,'OffsTrimPrfmdSts',0)];
HwAg0Offs.EngMin = [struct('OffsTrim',-900,'OffsTrimPrfmdSts',0)];
HwAg0Offs.EngMax = [struct('OffsTrim',900,'OffsTrimPrfmdSts',1)];
HwAg0Offs.CustomerVisible = false;
HwAg0Offs.Impact = 'H';
HwAg0Offs.TuningOwner = 'FDD';
HwAg0Offs.CoderInfo.Alias = '';
HwAg0Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwAg0MeasSnsr0Abs = DataDict.Display;
dHwAg0MeasSnsr0Abs.LongName = 'Handwheel Angle 0 Measurement Sensor0 Absolute';
dHwAg0MeasSnsr0Abs.Description = [...
  'Sensor0 (10th tooth) Absolute Angle'];
dHwAg0MeasSnsr0Abs.DocUnits = 'Cnt';
dHwAg0MeasSnsr0Abs.EngDT = dt.float32;
dHwAg0MeasSnsr0Abs.EngMin = -900;
dHwAg0MeasSnsr0Abs.EngMax = 900;
dHwAg0MeasSnsr0Abs.InitRowCol = [1  1];


dHwAg0MeasSnsr0CS = DataDict.Display;
dHwAg0MeasSnsr0CS.LongName = 'Handwheel Angle1 Measurement Sensor0 CS';
dHwAg0MeasSnsr0CS.Description = 'Sensor0 Comm Status';
dHwAg0MeasSnsr0CS.DocUnits = 'Cnt';
dHwAg0MeasSnsr0CS.EngDT = dt.u32;
dHwAg0MeasSnsr0CS.EngMin = 0;
dHwAg0MeasSnsr0CS.EngMax = 4294967295;
dHwAg0MeasSnsr0CS.InitRowCol = [1  1];


dHwAg0MeasSnsr0FRXD = DataDict.Display;
dHwAg0MeasSnsr0FRXD.LongName = 'Handwheel Angle1 Measurement Sensor0 FRXD';
dHwAg0MeasSnsr0FRXD.Description = 'Sensor0 Fast Receive Data';
dHwAg0MeasSnsr0FRXD.DocUnits = 'Cnt';
dHwAg0MeasSnsr0FRXD.EngDT = dt.u32;
dHwAg0MeasSnsr0FRXD.EngMin = 0;
dHwAg0MeasSnsr0FRXD.EngMax = 4294967295;
dHwAg0MeasSnsr0FRXD.InitRowCol = [1  1];


dHwAg0MeasSnsr0Rel = DataDict.Display;
dHwAg0MeasSnsr0Rel.LongName = 'Handwheel Angle 0 Measurement Sensor0 Relative';
dHwAg0MeasSnsr0Rel.Description = [...
  'Sensor0 (10th tooth) Relative Angle'];
dHwAg0MeasSnsr0Rel.DocUnits = 'Cnt';
dHwAg0MeasSnsr0Rel.EngDT = dt.float32;
dHwAg0MeasSnsr0Rel.EngMin = 0;
dHwAg0MeasSnsr0Rel.EngMax = 360;
dHwAg0MeasSnsr0Rel.InitRowCol = [1  1];


dHwAg0MeasSnsr1Abs = DataDict.Display;
dHwAg0MeasSnsr1Abs.LongName = 'Handwheel Angle 0 Measurement Sensor1 Absolute';
dHwAg0MeasSnsr1Abs.Description = [...
  'Sensor1 (11th tooth) Absolute Angle'];
dHwAg0MeasSnsr1Abs.DocUnits = 'Cnt';
dHwAg0MeasSnsr1Abs.EngDT = dt.float32;
dHwAg0MeasSnsr1Abs.EngMin = -900;
dHwAg0MeasSnsr1Abs.EngMax = 900;
dHwAg0MeasSnsr1Abs.InitRowCol = [1  1];


dHwAg0MeasSnsr1CS = DataDict.Display;
dHwAg0MeasSnsr1CS.LongName = 'Handwheel Angle 0 Measurement Sensor1 CS';
dHwAg0MeasSnsr1CS.Description = 'Sensor1 Comm Status';
dHwAg0MeasSnsr1CS.DocUnits = 'Cnt';
dHwAg0MeasSnsr1CS.EngDT = dt.u32;
dHwAg0MeasSnsr1CS.EngMin = 0;
dHwAg0MeasSnsr1CS.EngMax = 4294967295;
dHwAg0MeasSnsr1CS.InitRowCol = [1  1];


dHwAg0MeasSnsr1FRXD = DataDict.Display;
dHwAg0MeasSnsr1FRXD.LongName = 'Handwheel Angle 0 Measurement Sensor1 FRXD';
dHwAg0MeasSnsr1FRXD.Description = 'Sensor1 Fast Receive Data';
dHwAg0MeasSnsr1FRXD.DocUnits = 'Cnt';
dHwAg0MeasSnsr1FRXD.EngDT = dt.u32;
dHwAg0MeasSnsr1FRXD.EngMin = 0;
dHwAg0MeasSnsr1FRXD.EngMax = 4294967295;
dHwAg0MeasSnsr1FRXD.InitRowCol = [1  1];


dHwAg0MeasSnsr1Rel = DataDict.Display;
dHwAg0MeasSnsr1Rel.LongName = 'Handwheel Angle 0 Measurement Sensor1 Relative';
dHwAg0MeasSnsr1Rel.Description = [...
  'Sensor1 (11th tooth) Relative Angle'];
dHwAg0MeasSnsr1Rel.DocUnits = 'Cnt';
dHwAg0MeasSnsr1Rel.EngDT = dt.float32;
dHwAg0MeasSnsr1Rel.EngMin = 0;
dHwAg0MeasSnsr1Rel.EngMax = 360;
dHwAg0MeasSnsr1Rel.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAg0InitStepSeqNrCmpl = DataDict.PIM;
HwAg0InitStepSeqNrCmpl.LongName = 'Handwheel Angle 0 Initialization Step Sequence Number Complete';
HwAg0InitStepSeqNrCmpl.Description = [...
  'Signal use as flag for load intial skip step to prev skip step once at' ...
  ' startup only'];
HwAg0InitStepSeqNrCmpl.DocUnits = 'Cnt';
HwAg0InitStepSeqNrCmpl.EngDT = dt.lgc;
HwAg0InitStepSeqNrCmpl.EngMin = 0;
HwAg0InitStepSeqNrCmpl.EngMax = 1;
HwAg0InitStepSeqNrCmpl.InitRowCol = [1  1];


HwAg0PrevHwAg0 = DataDict.PIM;
HwAg0PrevHwAg0.LongName = 'Handwheel Angle 0 Previous Handwheel Angle 0';
HwAg0PrevHwAg0.Description = 'Previous Handwheel Angle 0 ';
HwAg0PrevHwAg0.DocUnits = 'HwDeg';
HwAg0PrevHwAg0.EngDT = dt.float32;
HwAg0PrevHwAg0.EngMin = -900;
HwAg0PrevHwAg0.EngMax = 900;
HwAg0PrevHwAg0.InitRowCol = [1  1];


HwAg0PrevRollCnt = DataDict.PIM;
HwAg0PrevRollCnt.LongName = 'Handwheel Angle 0 Previous Rolling Count';
HwAg0PrevRollCnt.Description = 'Previous Roll Count';
HwAg0PrevRollCnt.DocUnits = 'Cnt';
HwAg0PrevRollCnt.EngDT = dt.u08;
HwAg0PrevRollCnt.EngMin = 0;
HwAg0PrevRollCnt.EngMax = 255;
HwAg0PrevRollCnt.InitRowCol = [1  1];


HwAg0PrevStepSeqNr = DataDict.PIM;
HwAg0PrevStepSeqNr.LongName = 'Handwheel Angle 0 Previous Step Sequence Number Step';
HwAg0PrevStepSeqNr.Description = 'Previous Roll Count';
HwAg0PrevStepSeqNr.DocUnits = 'Cnt';
HwAg0PrevStepSeqNr.EngDT = dt.u08;
HwAg0PrevStepSeqNr.EngMin = 0;
HwAg0PrevStepSeqNr.EngMax = 22;
HwAg0PrevStepSeqNr.InitRowCol = [1  1];


HwAg0RawDataAvlStrtTi = DataDict.PIM;
HwAg0RawDataAvlStrtTi.LongName = 'Handwheel Angle 0 Data Available Start Time';
HwAg0RawDataAvlStrtTi.Description = 'Data Available Start Time ';
HwAg0RawDataAvlStrtTi.DocUnits = 'Cnt';
HwAg0RawDataAvlStrtTi.EngDT = dt.u32;
HwAg0RawDataAvlStrtTi.EngMin = 0;
HwAg0RawDataAvlStrtTi.EngMax = 4294967295;
HwAg0RawDataAvlStrtTi.InitRowCol = [1  1];


HwAg0Snsr0ComStsErrCntr = DataDict.PIM;
HwAg0Snsr0ComStsErrCntr.LongName = 'Handwheel Angle 0 Sensor 0 Communication Status Error Counter';
HwAg0Snsr0ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwAg0Snsr0ComStsErrCntr.DocUnits = 'Cnt';
HwAg0Snsr0ComStsErrCntr.EngDT = dt.u08;
HwAg0Snsr0ComStsErrCntr.EngMin = 0;
HwAg0Snsr0ComStsErrCntr.EngMax = 255;
HwAg0Snsr0ComStsErrCntr.InitRowCol = [1  1];


HwAg0Snsr0IdErrCntr = DataDict.PIM;
HwAg0Snsr0IdErrCntr.LongName = 'Handwheel Angle 0 Sensor 0 Identifier Error Counter';
HwAg0Snsr0IdErrCntr.Description = [...
  'Id Error Increments this counter -Troubleshooting Purpose '];
HwAg0Snsr0IdErrCntr.DocUnits = 'Cnt';
HwAg0Snsr0IdErrCntr.EngDT = dt.u08;
HwAg0Snsr0IdErrCntr.EngMin = 0;
HwAg0Snsr0IdErrCntr.EngMax = 255;
HwAg0Snsr0IdErrCntr.InitRowCol = [1  1];


HwAg0Snsr0IntSnsrErrCntr = DataDict.PIM;
HwAg0Snsr0IntSnsrErrCntr.LongName = 'Handwheel Angle 0 Sensor 0 Internal Sensor Error Counter';
HwAg0Snsr0IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwAg0Snsr0IntSnsrErrCntr.DocUnits = 'Cnt';
HwAg0Snsr0IntSnsrErrCntr.EngDT = dt.u08;
HwAg0Snsr0IntSnsrErrCntr.EngMin = 0;
HwAg0Snsr0IntSnsrErrCntr.EngMax = 255;
HwAg0Snsr0IntSnsrErrCntr.InitRowCol = [1  1];


HwAg0Snsr0NoMsgErrCntr = DataDict.PIM;
HwAg0Snsr0NoMsgErrCntr.LongName = 'Handwheel Angle 0 Sensor 0 No Message Error Counter';
HwAg0Snsr0NoMsgErrCntr.Description = [...
  'No New Message Increments this counter -Troubleshooting Purpose '];
HwAg0Snsr0NoMsgErrCntr.DocUnits = 'Cnt';
HwAg0Snsr0NoMsgErrCntr.EngDT = dt.u08;
HwAg0Snsr0NoMsgErrCntr.EngMin = 0;
HwAg0Snsr0NoMsgErrCntr.EngMax = 255;
HwAg0Snsr0NoMsgErrCntr.InitRowCol = [1  1];


HwAg0Snsr1ComStsErrCntr = DataDict.PIM;
HwAg0Snsr1ComStsErrCntr.LongName = 'Handwheel Angle 0 Sensor 0 Communication Status Error Counter';
HwAg0Snsr1ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwAg0Snsr1ComStsErrCntr.DocUnits = 'Cnt';
HwAg0Snsr1ComStsErrCntr.EngDT = dt.u08;
HwAg0Snsr1ComStsErrCntr.EngMin = 0;
HwAg0Snsr1ComStsErrCntr.EngMax = 255;
HwAg0Snsr1ComStsErrCntr.InitRowCol = [1  1];


HwAg0Snsr1IdErrCntr = DataDict.PIM;
HwAg0Snsr1IdErrCntr.LongName = 'Handwheel Angle 0 Sensor 1 Identifier Error Counter';
HwAg0Snsr1IdErrCntr.Description = [...
  'Id Error Increments this counter -Troubleshooting Purpose '];
HwAg0Snsr1IdErrCntr.DocUnits = 'Cnt';
HwAg0Snsr1IdErrCntr.EngDT = dt.u08;
HwAg0Snsr1IdErrCntr.EngMin = 0;
HwAg0Snsr1IdErrCntr.EngMax = 255;
HwAg0Snsr1IdErrCntr.InitRowCol = [1  1];


HwAg0Snsr1IntSnsrErrCntr = DataDict.PIM;
HwAg0Snsr1IntSnsrErrCntr.LongName = 'Handwheel Angle 0 Sensor 0 Internal Sensor Error Counter';
HwAg0Snsr1IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwAg0Snsr1IntSnsrErrCntr.DocUnits = 'Cnt';
HwAg0Snsr1IntSnsrErrCntr.EngDT = dt.u08;
HwAg0Snsr1IntSnsrErrCntr.EngMin = 0;
HwAg0Snsr1IntSnsrErrCntr.EngMax = 255;
HwAg0Snsr1IntSnsrErrCntr.InitRowCol = [1  1];


HwAg0Snsr1NoMsgErrCntr = DataDict.PIM;
HwAg0Snsr1NoMsgErrCntr.LongName = 'Handwheel Angle 0 Sensor 0 No Message Error Counter';
HwAg0Snsr1NoMsgErrCntr.Description = [...
  'No New Message Increments this counter -Troubleshooting Purpose '];
HwAg0Snsr1NoMsgErrCntr.DocUnits = 'Cnt';
HwAg0Snsr1NoMsgErrCntr.EngDT = dt.u08;
HwAg0Snsr1NoMsgErrCntr.EngMin = 0;
HwAg0Snsr1NoMsgErrCntr.EngMax = 255;
HwAg0Snsr1NoMsgErrCntr.InitRowCol = [1  1];


HwAg0SnsrTrigNr = DataDict.PIM;
HwAg0SnsrTrigNr.LongName = 'Handwheel Angle 0 Sensor Trigger Number';
HwAg0SnsrTrigNr.Description = 'Sensor Trigger Number';
HwAg0SnsrTrigNr.DocUnits = 'Cnt';
HwAg0SnsrTrigNr.EngDT = dt.u08;
HwAg0SnsrTrigNr.EngMin = 0;
HwAg0SnsrTrigNr.EngMax = 2;
HwAg0SnsrTrigNr.InitRowCol = [1  1];


PrevHwAg0 = DataDict.PIM;
PrevHwAg0.LongName = 'Previous Handwheel Angle 0';
PrevHwAg0.Description = 'final Previous Handwheel Angle 0 ';
PrevHwAg0.DocUnits = 'HwDeg';
PrevHwAg0.EngDT = dt.float32;
PrevHwAg0.EngMin = -900;
PrevHwAg0.EngMax = 900;
PrevHwAg0.InitRowCol = [1  1];


PrevHwAg0Qlfr = DataDict.PIM;
PrevHwAg0Qlfr.LongName = 'Previous Handwheel Angle 0 Qualifier';
PrevHwAg0Qlfr.Description = 'Previous Qualifier value ';
PrevHwAg0Qlfr.DocUnits = 'Cnt';
PrevHwAg0Qlfr.EngDT = enum.SigQlfr1;
PrevHwAg0Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
PrevHwAg0Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
PrevHwAg0Qlfr.InitRowCol = [1  1];


PrevHwAg0Snsr0Raw = DataDict.PIM;
PrevHwAg0Snsr0Raw.LongName = 'Previous Handwheel Angle 0 Sensor 0 Raw';
PrevHwAg0Snsr0Raw.Description = 'Previous Raw value of Sensor 0 ';
PrevHwAg0Snsr0Raw.DocUnits = 'Cnt';
PrevHwAg0Snsr0Raw.EngDT = dt.u16;
PrevHwAg0Snsr0Raw.EngMin = 0;
PrevHwAg0Snsr0Raw.EngMax = 4095;
PrevHwAg0Snsr0Raw.InitRowCol = [1  1];


PrevHwAg0Snsr0TestOk = DataDict.PIM;
PrevHwAg0Snsr0TestOk.LongName = 'Previous Handwheel Angle 0 Sensor 0 Test Ok';
PrevHwAg0Snsr0TestOk.Description = [...
  'Previous Raw value of Sensor 0 Test Ok '];
PrevHwAg0Snsr0TestOk.DocUnits = 'Cnt';
PrevHwAg0Snsr0TestOk.EngDT = dt.u08;
PrevHwAg0Snsr0TestOk.EngMin = 0;
PrevHwAg0Snsr0TestOk.EngMax = 3;
PrevHwAg0Snsr0TestOk.InitRowCol = [1  1];


PrevHwAg0Snsr1Raw = DataDict.PIM;
PrevHwAg0Snsr1Raw.LongName = 'Previous Handwheel Angle 0 Sensor 1 Raw';
PrevHwAg0Snsr1Raw.Description = 'Previous Raw value of Sensor 1 ';
PrevHwAg0Snsr1Raw.DocUnits = 'Cnt';
PrevHwAg0Snsr1Raw.EngDT = dt.u16;
PrevHwAg0Snsr1Raw.EngMin = 0;
PrevHwAg0Snsr1Raw.EngMax = 4095;
PrevHwAg0Snsr1Raw.InitRowCol = [1  1];


PrevHwAg0Snsr1TestOk = DataDict.PIM;
PrevHwAg0Snsr1TestOk.LongName = 'Previous Handwheel Angle 0 Sensor 1 Test Ok';
PrevHwAg0Snsr1TestOk.Description = [...
  'Previous Raw value of Sensor 1 Test Ok '];
PrevHwAg0Snsr1TestOk.DocUnits = 'Cnt';
PrevHwAg0Snsr1TestOk.EngDT = dt.u08;
PrevHwAg0Snsr1TestOk.EngMin = 0;
PrevHwAg0Snsr1TestOk.EngMax = 3;
PrevHwAg0Snsr1TestOk.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_DEGPERREV_DEGPERREV_F32 = DataDict.Constant;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.LongName = 'Degrees per Revolution';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.Description = 'Number of degrees per revolution';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.DocUnits = 'DEGPERREV';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.EngDT = dt.float32;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.EngVal = 360;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.Define = 'Global';


ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.LongName = 'HandWheel Angle Center Offset';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.Description = 'Handwheel Angle Center correction';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.EngVal = 900;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Lower Limit';
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.Description = [...
  'Handwheel Angle value min limit to -900'];
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.EngVal = -900;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Upper Limit';
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.Description = [...
  'Handwheel Angle value max limit to 900'];
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.EngVal = 900;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGSCA_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSCA_ULS_F32.LongName = 'Handwheel Angle Scale';
ELECGLBPRM_HWAGSCA_ULS_F32.Description = 'Scale';
ELECGLBPRM_HWAGSCA_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSCA_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSCA_ULS_F32.EngVal = 0.08789;
ELECGLBPRM_HWAGSCA_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.LongName = 'Handwheel Angle Spur Gear Ratio';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.Description = 'One Rev';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.EngVal = 1.1;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.LongName = 'Handwheel Angle0 Spur to Ring Gear Ratio Sensor 0';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.Description = [...
  '10th Tooth Spur To Ring Gear ratio 10/22'];
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.EngVal = 0.4545;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.LongName = 'Handwheel Angle0 Spur to Ring Gear Ratio Sensor 1';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.Description = [...
  '11th Tooth Spur To Ring Gear ratio 11/22'];
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.EngVal = 0.5;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.Define = 'Global';


ELECGLBPRM_NOFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_NOFLT_CNT_U08.LongName = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.Description = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_NOFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_NOFLT_CNT_U08.EngVal = 0;
ELECGLBPRM_NOFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08 = DataDict.Constant;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.LongName = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.Description = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.EngVal = 1;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.Define = 'Global';


ELECGLBPRM_PRTCLFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_PRTCLFLT_CNT_U08.LongName = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.Description = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_PRTCLFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_PRTCLFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_PRTCLFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SKIPSTEPFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.LongName = 'Skip Step Fault';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.Description = 'Skip Step Fault';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SNSRINTFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SNSRINTFLT_CNT_U08.LongName = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Description = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_SNSRINTFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_VRNRERRFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_VRNRERRFLT_CNT_U08.LongName = 'Vernier Error Fault';
ELECGLBPRM_VRNRERRFLT_CNT_U08.Description = 'Vernier Error Fault';
ELECGLBPRM_VRNRERRFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_VRNRERRFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_VRNRERRFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_VRNRERRFLT_CNT_U08.Define = 'Global';


FLTINJ_HWAG0MEAS_HWAG0 = DataDict.Constant;
FLTINJ_HWAG0MEAS_HWAG0.LongName = 'Fault Injection Handwheel Angle 0 Measure Handwheel Angle 0';
FLTINJ_HWAG0MEAS_HWAG0.Description = [...
  'Fault Injection Handwheel Angle 0 Measure Handwheel Angle 0 Constant'];
FLTINJ_HWAG0MEAS_HWAG0.DocUnits = 'Uls';
FLTINJ_HWAG0MEAS_HWAG0.EngDT = dt.u16;
FLTINJ_HWAG0MEAS_HWAG0.EngVal = 33;
FLTINJ_HWAG0MEAS_HWAG0.Define = 'Global';


FLTINJ_HWAG0MEAS_TESTOK = DataDict.Constant;
FLTINJ_HWAG0MEAS_TESTOK.LongName = 'Fault Injection Handwheel Angle 0 Measure Test Ok';
FLTINJ_HWAG0MEAS_TESTOK.Description = [...
  'Fault Injection Handwheel Angle 0 Measure Test Ok Constant'];
FLTINJ_HWAG0MEAS_TESTOK.DocUnits = 'Uls';
FLTINJ_HWAG0MEAS_TESTOK.EngDT = dt.u16;
FLTINJ_HWAG0MEAS_TESTOK.EngVal = 34;
FLTINJ_HWAG0MEAS_TESTOK.Define = 'Global';


HWAG10THTOOTHTRIG_CNT_U08 = DataDict.ConfigParam;
HWAG10THTOOTHTRIG_CNT_U08.LongName = 'Handwheel Angle 10th tooth Trigger';
HWAG10THTOOTHTRIG_CNT_U08.Description = '10th Tooth Trigger Id';
HWAG10THTOOTHTRIG_CNT_U08.IsBuildPrm = true;
HWAG10THTOOTHTRIG_CNT_U08.DocUnits = 'Cnt';
HWAG10THTOOTHTRIG_CNT_U08.EngDT = dt.u08;
HWAG10THTOOTHTRIG_CNT_U08.EngVal = 1;
HWAG10THTOOTHTRIG_CNT_U08.EngMin = 0;
HWAG10THTOOTHTRIG_CNT_U08.EngMax = 2;
HWAG10THTOOTHTRIG_CNT_U08.Define = 'Local';


HWAG11THTOOTHTRIG_CNT_U08 = DataDict.ConfigParam;
HWAG11THTOOTHTRIG_CNT_U08.LongName = 'Handwheel Angle 11th tooth Trigger';
HWAG11THTOOTHTRIG_CNT_U08.Description = '11th Tooth Trigger Id';
HWAG11THTOOTHTRIG_CNT_U08.IsBuildPrm = true;
HWAG11THTOOTHTRIG_CNT_U08.DocUnits = 'Cnt';
HWAG11THTOOTHTRIG_CNT_U08.EngDT = dt.u08;
HWAG11THTOOTHTRIG_CNT_U08.EngVal = 2;
HWAG11THTOOTHTRIG_CNT_U08.EngMin = 0;
HWAG11THTOOTHTRIG_CNT_U08.EngMax = 2;
HWAG11THTOOTHTRIG_CNT_U08.Define = 'Local';


HWAG0IFNTCNR_ULS_U16 = DataDict.ConfigParam;
HWAG0IFNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Interface Ntc Number';
HWAG0IFNTCNR_ULS_U16.Description = 'HwAg0 Interface Ntc Number';
HWAG0IFNTCNR_ULS_U16.IsBuildPrm = true;
HWAG0IFNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0IFNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0IFNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X094;
HWAG0IFNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X093;
HWAG0IFNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X09A;
HWAG0IFNTCNR_ULS_U16.Define = 'Local';


HWAG0MFGNTCNR_ULS_U16 = DataDict.ConfigParam;
HWAG0MFGNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Manufacturing Ntc Number';
HWAG0MFGNTCNR_ULS_U16.Description = 'HwAg0 Manufacturing Ntc Number';
HWAG0MFGNTCNR_ULS_U16.IsBuildPrm = true;
HWAG0MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1F9;
HWAG0MFGNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X1F9;
HWAG0MFGNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X1FA;
HWAG0MFGNTCNR_ULS_U16.Define = 'Local';


HWAG0SNSR0PRTCLNTCNR_ULS_U16 = DataDict.ConfigParam;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Sensor 0 Ntc Number';
HWAG0SNSR0PRTCLNTCNR_ULS_U16.Description = 'HwAg0 Sensor 0 Ntc Number';
HWAG0SNSR0PRTCLNTCNR_ULS_U16.IsBuildPrm = true;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0SNSR0PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X093;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X093;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X09A;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.Define = 'Local';


HWAG0SNSR1PRTCLNTCNR_ULS_U16 = DataDict.ConfigParam;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Sensor 1 Ntc Number';
HWAG0SNSR1PRTCLNTCNR_ULS_U16.Description = 'HwAg0 Sensor 1 Ntc Number';
HWAG0SNSR1PRTCLNTCNR_ULS_U16.IsBuildPrm = true;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0SNSR1PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X095;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X093;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X09A;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwAg0IfFlt = DataDict.NTC;
HwAg0IfFlt.NtcNr = NtcNr1.NTCNR_0X094;
HwAg0IfFlt.NtcTyp = 'Deb';
HwAg0IfFlt.LongName = 'Handwheel Angle 0 Interface Fault';
HwAg0IfFlt.Description = 'Interface Fault';
HwAg0IfFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg0IfFlt.NtcStInfo.Bit0Descr = 'Skip Step Fault';
HwAg0IfFlt.NtcStInfo.Bit1Descr = 'Vernier Error Fault';
HwAg0IfFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg0IfFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg0IfFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg0IfFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg0IfFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg0IfFlt.NtcStInfo.Bit7Descr = 'Unused';


HwAg0MfgFlt = DataDict.NTC;
HwAg0MfgFlt.NtcNr = NtcNr1.NTCNR_0X1F9;
HwAg0MfgFlt.NtcTyp = 'None';
HwAg0MfgFlt.LongName = 'Handwheel Angle 0 Manufacturing Fault';
HwAg0MfgFlt.Description = 'Manufacturing Fault';
HwAg0MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg0MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwAg0MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwAg0MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg0MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg0MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg0MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg0MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg0MfgFlt.NtcStInfo.Bit7Descr = 'Unused';


HwAg0Snsr0PrtclFlt = DataDict.NTC;
HwAg0Snsr0PrtclFlt.NtcNr = NtcNr1.NTCNR_0X093;
HwAg0Snsr0PrtclFlt.NtcTyp = 'Deb';
HwAg0Snsr0PrtclFlt.LongName = 'Handwheel Angle 0 Sensor0 Protocol Fault';
HwAg0Snsr0PrtclFlt.Description = 'Protocol Fault';
HwAg0Snsr0PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg0Snsr0PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


HwAg0Snsr1PrtclFlt = DataDict.NTC;
HwAg0Snsr1PrtclFlt.NtcNr = NtcNr1.NTCNR_0X095;
HwAg0Snsr1PrtclFlt.NtcTyp = 'Deb';
HwAg0Snsr1PrtclFlt.LongName = 'Handwheel Angle 0 Sensor1 Protocol Fault';
HwAg0Snsr1PrtclFlt.Description = 'Protocol Fault';
HwAg0Snsr1PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg0Snsr1PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
