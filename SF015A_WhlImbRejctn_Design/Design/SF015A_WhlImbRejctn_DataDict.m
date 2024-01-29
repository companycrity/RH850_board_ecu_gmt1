%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Feb-2017 11:07:43       %
%                                  Created with tool release: 2.53.0     %
%                                  Synergy file: %version: 15 %           %
%                                  Derived by: %derived_by: vzbtjx %          %
%%-----------------------------------------------------------------------%

SF015A = DataDict.FDD;
SF015A.Version = '1.11.X';
SF015A.LongName = 'Wheel Imbalance Rejection';
SF015A.ShoName  = 'WhlImbRejctn';
SF015A.DesignASIL = 'D';
SF015A.Description = [...
  'The Wheel Imbalance Rejection (WIR) Function corrects Handwheel vibrat' ...
  'ion or oscillation issues by canceling out the appropriate HW torque d' ...
  'isturbances detected by the steering system. This compensation is enab' ...
  'led at the appropriate highway speeds or near highway speeds. When the' ...
  ' compensation is applied, the wheel shake felt by the driver is greatl' ...
  'y reduced.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
WhlImbRejctnInit1 = DataDict.Runnable;
WhlImbRejctnInit1.Context = 'Rte';
WhlImbRejctnInit1.TimeStep = 0;
WhlImbRejctnInit1.Description = 'WIR Initialization Runnable';

WhlImbRejctnPer1 = DataDict.Runnable;
WhlImbRejctnPer1.Context = 'Rte';
WhlImbRejctnPer1.TimeStep = 0.002;
WhlImbRejctnPer1.Description = [...
  'WIR Periodic Runnable two milliseconds'];

WhlImbRejctnPer2 = DataDict.Runnable;
WhlImbRejctnPer2.Context = 'Rte';
WhlImbRejctnPer2.TimeStep = 0.004;
WhlImbRejctnPer2.Description = [...
  'WIR Periodic Runnable four milliseconds'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'WhlImbRejctnPer1','WhlImbRejctnPer2'};
GetRefTmr100MicroSec32bit.Description = 'Reference Timer Client';
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 999;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = '';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'WhlImbRejctnPer1','WhlImbRejctnPer2'};
GetTiSpan100MicroSec32bit.Description = 'Time Span Client';
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = '';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'WhlImbRejctnPer1'};
SetNtcSts.Description = 'NTC Status Client';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NTCActv';
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
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'WhlImbRejctnPer1'};
HwTq.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'WhlImbRejctnPer1'};
SysSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'WhlImbRejctnPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = 'Vehicle Speed Valid';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 1;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'WhlImbRejctnPer1'};
VehSpdVld.ReadType = 'Rte';


WhlFrqVld = DataDict.IpSignal;
WhlFrqVld.LongName = 'Wheel Frequency Valid';
WhlFrqVld.Description = 'Wheel Frequency Valid';
WhlFrqVld.DocUnits = 'Cnt';
WhlFrqVld.EngDT = dt.lgc;
WhlFrqVld.EngInit = 1;
WhlFrqVld.EngMin = 0;
WhlFrqVld.EngMax = 1;
WhlFrqVld.ReadIn = {'WhlImbRejctnPer1'};
WhlFrqVld.ReadType = 'Rte';


WhlImbRejctnCustEna = DataDict.IpSignal;
WhlImbRejctnCustEna.LongName = 'Wheel Imbalance Rejection Customer Enable';
WhlImbRejctnCustEna.Description = [...
  'Wheel Imbalance Rejection Customer Enable'];
WhlImbRejctnCustEna.DocUnits = 'Cnt';
WhlImbRejctnCustEna.EngDT = dt.lgc;
WhlImbRejctnCustEna.EngInit = 1;
WhlImbRejctnCustEna.EngMin = 0;
WhlImbRejctnCustEna.EngMax = 1;
WhlImbRejctnCustEna.ReadIn = {'WhlImbRejctnPer1'};
WhlImbRejctnCustEna.ReadType = 'Rte';


WhlImbRejctnDi = DataDict.IpSignal;
WhlImbRejctnDi.LongName = 'Wheel Imbalance Rejection Disable';
WhlImbRejctnDi.Description = 'Wheel Imbalance Rejection Disable';
WhlImbRejctnDi.DocUnits = 'Cnt';
WhlImbRejctnDi.EngDT = dt.lgc;
WhlImbRejctnDi.EngInit = 0;
WhlImbRejctnDi.EngMin = 0;
WhlImbRejctnDi.EngMax = 1;
WhlImbRejctnDi.ReadIn = {'WhlImbRejctnPer1'};
WhlImbRejctnDi.ReadType = 'Rte';


WhlLeFrq = DataDict.IpSignal;
WhlLeFrq.LongName = 'Left Wheel Frequency';
WhlLeFrq.Description = 'Left Wheel Frequency';
WhlLeFrq.DocUnits = 'Hz';
WhlLeFrq.EngDT = dt.float32;
WhlLeFrq.EngInit = 0.01;
WhlLeFrq.EngMin = 0.01;
WhlLeFrq.EngMax = 60;
WhlLeFrq.ReadIn = {'WhlImbRejctnPer1'};
WhlLeFrq.ReadType = 'Rte';


WhlRiFrq = DataDict.IpSignal;
WhlRiFrq.LongName = 'Right Wheel Frequency';
WhlRiFrq.Description = 'Right Wheel Frequency';
WhlRiFrq.DocUnits = 'Hz';
WhlRiFrq.EngDT = dt.float32;
WhlRiFrq.EngInit = 0.01;
WhlRiFrq.EngMin = 0.01;
WhlRiFrq.EngMax = 60;
WhlRiFrq.ReadIn = {'WhlImbRejctnPer1'};
WhlRiFrq.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
WhlImbRejctnActv = DataDict.OpSignal;
WhlImbRejctnActv.LongName = 'Wheel Imbalance Rejection Active';
WhlImbRejctnActv.Description = [...
  'Wheel Imbalance Rejection Active- Output showing whether function is o' ...
  'n or off.'];
WhlImbRejctnActv.DocUnits = 'Cnt';
WhlImbRejctnActv.SwcShoName = 'WhlImbRejctn';
WhlImbRejctnActv.EngDT = dt.lgc;
WhlImbRejctnActv.EngInit = 0;
WhlImbRejctnActv.EngMin = 0;
WhlImbRejctnActv.EngMax = 1;
WhlImbRejctnActv.TestTolerance = 0;
WhlImbRejctnActv.WrittenIn = {'WhlImbRejctnPer1'};
WhlImbRejctnActv.WriteType = 'Rte';


WhlImbRejctnAmp = DataDict.OpSignal;
WhlImbRejctnAmp.LongName = 'Wheel Imbalance Rejection Amplitude';
WhlImbRejctnAmp.Description = [...
  'Wheel Imbalance Rejection Command Amplitude for blended tuning to corr' ...
  'ect on center steering feel degradation.'];
WhlImbRejctnAmp.DocUnits = 'MotNwtMtr';
WhlImbRejctnAmp.SwcShoName = 'WhlImbRejctn';
WhlImbRejctnAmp.EngDT = dt.float32;
WhlImbRejctnAmp.EngInit = 0;
WhlImbRejctnAmp.EngMin = 0;
WhlImbRejctnAmp.EngMax = 8.8;
WhlImbRejctnAmp.TestTolerance = 0.00390625;
WhlImbRejctnAmp.WrittenIn = {'WhlImbRejctnPer1'};
WhlImbRejctnAmp.WriteType = 'Rte';


WhlImbRejctnCmd = DataDict.OpSignal;
WhlImbRejctnCmd.LongName = 'Wheel Imbalance Rejection Command';
WhlImbRejctnCmd.Description = [...
  'Wheel Imbalance Rejection Command,  Output torque command to the Assis' ...
  't module.'];
WhlImbRejctnCmd.DocUnits = 'MotNwtMtr';
WhlImbRejctnCmd.SwcShoName = 'WhlImbRejctn';
WhlImbRejctnCmd.EngDT = dt.float32;
WhlImbRejctnCmd.EngInit = 0;
WhlImbRejctnCmd.EngMin = -8.8;
WhlImbRejctnCmd.EngMax = 8.8;
WhlImbRejctnCmd.TestTolerance = 0.00390625;
WhlImbRejctnCmd.WrittenIn = {'WhlImbRejctnPer1'};
WhlImbRejctnCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
CmdAmp = DataDict.IRV;
CmdAmp.LongName = 'Command Amplitude';
CmdAmp.Description = [...
  'Amplitude of the generated rejection command'];
CmdAmp.DocUnits = 'MotNwtMtr';
CmdAmp.EngDT = dt.float32;
CmdAmp.EngInit = 0;
CmdAmp.EngMin = 0;
CmdAmp.EngMax = 8.8;
CmdAmp.ReadIn = {'WhlImbRejctnPer2'};
CmdAmp.WrittenIn = {'WhlImbRejctnPer1'};


CurrMgnSlewRate = DataDict.IRV;
CurrMgnSlewRate.LongName = 'Current Magnitude Slew Rate';
CurrMgnSlewRate.Description = [...
  'Current Magnitude Slew Rate for rate limit'];
CurrMgnSlewRate.DocUnits = 'UlsPerSec';
CurrMgnSlewRate.EngDT = dt.float32;
CurrMgnSlewRate.EngInit = 0;
CurrMgnSlewRate.EngMin = 0;
CurrMgnSlewRate.EngMax = 500;
CurrMgnSlewRate.ReadIn = {'WhlImbRejctnPer1'};
CurrMgnSlewRate.WrittenIn = {'WhlImbRejctnInit1'};


DcTrendFlt = DataDict.IRV;
DcTrendFlt.LongName = 'DC Trend Fault';
DcTrendFlt.Description = [...
  'Logic variable indicating DC trend fault.  Sent to Per2 for attempting' ...
  ' fault recovery.'];
DcTrendFlt.DocUnits = 'Cnt';
DcTrendFlt.EngDT = dt.lgc;
DcTrendFlt.EngInit = 0;
DcTrendFlt.EngMin = 0;
DcTrendFlt.EngMax = 1;
DcTrendFlt.ReadIn = {'WhlImbRejctnPer2'};
DcTrendFlt.WrittenIn = {'WhlImbRejctnPer1'};


EnaSlewRate = DataDict.IRV;
EnaSlewRate.LongName = 'Enable Slew Rate';
EnaSlewRate.Description = 'Enable Slew Rate for rate limit';
EnaSlewRate.DocUnits = 'UlsPerSec';
EnaSlewRate.EngDT = dt.float32;
EnaSlewRate.EngInit = 0;
EnaSlewRate.EngMin = 0;
EnaSlewRate.EngMax = 500;
EnaSlewRate.ReadIn = {'WhlImbRejctnPer1'};
EnaSlewRate.WrittenIn = {'WhlImbRejctnInit1'};


FrqDiagcFlt = DataDict.IRV;
FrqDiagcFlt.LongName = 'Frequency Diagnostic Fault';
FrqDiagcFlt.Description = [...
  'Logic variable indicating Frequency diagnostic fault.  Sent to Per2 fo' ...
  'r attempting fault recovery.'];
FrqDiagcFlt.DocUnits = 'Cnt';
FrqDiagcFlt.EngDT = dt.lgc;
FrqDiagcFlt.EngInit = 0;
FrqDiagcFlt.EngMin = 0;
FrqDiagcFlt.EngMax = 1;
FrqDiagcFlt.ReadIn = {'WhlImbRejctnPer2'};
FrqDiagcFlt.WrittenIn = {'WhlImbRejctnPer1'};


IniCmpFlt = DataDict.IRV;
IniCmpFlt.LongName = 'Initial Compensation Fault';
IniCmpFlt.Description = [...
  'Logic variable indicating Compensation/Persistence Fault.  Sent to Per' ...
  '1 for aNTC setting. This is checked with NVm variables during init'];
IniCmpFlt.DocUnits = 'Cnt';
IniCmpFlt.EngDT = dt.lgc;
IniCmpFlt.EngInit = 0;
IniCmpFlt.EngMin = 0;
IniCmpFlt.EngMax = 1;
IniCmpFlt.ReadIn = {'WhlImbRejctnPer1'};
IniCmpFlt.WrittenIn = {'WhlImbRejctnInit1'};


MaxMgnFlt = DataDict.IRV;
MaxMgnFlt.LongName = 'Maximum Magnitude Fault';
MaxMgnFlt.Description = [...
  'Logic variable indicating Maximum magnitude fault.  Sent to Per2 for a' ...
  'ttempting fault recovery.'];
MaxMgnFlt.DocUnits = 'Cnt';
MaxMgnFlt.EngDT = dt.lgc;
MaxMgnFlt.EngInit = 0;
MaxMgnFlt.EngMin = 0;
MaxMgnFlt.EngMax = 1;
MaxMgnFlt.ReadIn = {'WhlImbRejctnPer2'};
MaxMgnFlt.WrittenIn = {'WhlImbRejctnPer1'};


SlowSpdDiagc = DataDict.IRV;
SlowSpdDiagc.LongName = 'Slow Speed Diagnostic';
SlowSpdDiagc.Description = [...
  'Slow Speed Diagnostic flag sent to Periodic 1 for ramped enable'];
SlowSpdDiagc.DocUnits = 'Cnt';
SlowSpdDiagc.EngDT = dt.lgc;
SlowSpdDiagc.EngInit = 0;
SlowSpdDiagc.EngMin = 0;
SlowSpdDiagc.EngMax = 1;
SlowSpdDiagc.ReadIn = {'WhlImbRejctnPer1'};
SlowSpdDiagc.WrittenIn = {'WhlImbRejctnPer2'};


WhlSpdCorrlnFlt = DataDict.IRV;
WhlSpdCorrlnFlt.LongName = 'Wheel Speed Correlation Fault';
WhlSpdCorrlnFlt.Description = [...
  'Logic variable indicating Wheel Speed Correlation fault. Sent to Per2 ' ...
  'for attempting fault recovery.'];
WhlSpdCorrlnFlt.DocUnits = 'Cnt';
WhlSpdCorrlnFlt.EngDT = dt.lgc;
WhlSpdCorrlnFlt.EngInit = 0;
WhlSpdCorrlnFlt.EngMin = 0;
WhlSpdCorrlnFlt.EngMax = 1;
WhlSpdCorrlnFlt.ReadIn = {'WhlImbRejctnPer2'};
WhlSpdCorrlnFlt.WrittenIn = {'WhlImbRejctnPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
WhlImbRejctnAdpvFac = DataDict.Calibration;
WhlImbRejctnAdpvFac.LongName = 'Adaptive Factor';
WhlImbRejctnAdpvFac.Description = [...
  'Controls how fast rejection command is learned – higher number = faste' ...
  'r, but less stable.'];
WhlImbRejctnAdpvFac.DocUnits = 'Uls';
WhlImbRejctnAdpvFac.EngDT = dt.float32;
WhlImbRejctnAdpvFac.EngVal = 0.199997;
WhlImbRejctnAdpvFac.EngMin = 0;
WhlImbRejctnAdpvFac.EngMax = 1;
WhlImbRejctnAdpvFac.Cardinality = 'Inin';
WhlImbRejctnAdpvFac.CustomerVisible = false;
WhlImbRejctnAdpvFac.Online = true;
WhlImbRejctnAdpvFac.Impact = 'H';
WhlImbRejctnAdpvFac.TuningOwner = 'CSE';
WhlImbRejctnAdpvFac.GraphLink = {''};
WhlImbRejctnAdpvFac.Monotony = 'None';
WhlImbRejctnAdpvFac.MaxGrad = 998;
WhlImbRejctnAdpvFac.PortName = 'WhlImbRejctnAdpvFac';


WhlImbRejctnAutScaEna = DataDict.Calibration;
WhlImbRejctnAutScaEna.LongName = 'Auto Scale Enable';
WhlImbRejctnAutScaEna.Description = [...
  'Flag to enable auto-scale feature on wheel speed signals.'];
WhlImbRejctnAutScaEna.DocUnits = 'Cnt';
WhlImbRejctnAutScaEna.EngDT = dt.lgc;
WhlImbRejctnAutScaEna.EngVal = 1;
WhlImbRejctnAutScaEna.EngMin = 0;
WhlImbRejctnAutScaEna.EngMax = 1;
WhlImbRejctnAutScaEna.Cardinality = 'Cmn';
WhlImbRejctnAutScaEna.CustomerVisible = false;
WhlImbRejctnAutScaEna.Online = false;
WhlImbRejctnAutScaEna.Impact = 'M';
WhlImbRejctnAutScaEna.TuningOwner = 'CSE';
WhlImbRejctnAutScaEna.GraphLink = {''};
WhlImbRejctnAutScaEna.Monotony = 'None';
WhlImbRejctnAutScaEna.MaxGrad = 998;
WhlImbRejctnAutScaEna.PortName = 'WhlImbRejctnAutScaEna';


WhlImbRejctnAutScaTar = DataDict.Calibration;
WhlImbRejctnAutScaTar.LongName = 'Auto Scale Target';
WhlImbRejctnAutScaTar.Description = [...
  'Target to which the wheel frequency signals will be scaled.'];
WhlImbRejctnAutScaTar.DocUnits = 'MotRadPerSec';
WhlImbRejctnAutScaTar.EngDT = dt.float32;
WhlImbRejctnAutScaTar.EngVal = 0.199219;
WhlImbRejctnAutScaTar.EngMin = 0.01;
WhlImbRejctnAutScaTar.EngMax = 127;
WhlImbRejctnAutScaTar.Cardinality = 'Cmn';
WhlImbRejctnAutScaTar.CustomerVisible = false;
WhlImbRejctnAutScaTar.Online = true;
WhlImbRejctnAutScaTar.Impact = 'M';
WhlImbRejctnAutScaTar.TuningOwner = 'CSE';
WhlImbRejctnAutScaTar.GraphLink = {''};
WhlImbRejctnAutScaTar.Monotony = 'None';
WhlImbRejctnAutScaTar.MaxGrad = 998;
WhlImbRejctnAutScaTar.PortName = 'WhlImbRejctnAutScaTar';


WhlImbRejctnBlndCmdMgnLp1FilFrq = DataDict.Calibration;
WhlImbRejctnBlndCmdMgnLp1FilFrq.LongName = 'Blend Command Magnitude Low Pass Filter 1';
WhlImbRejctnBlndCmdMgnLp1FilFrq.Description = [...
  'Filter Coeff #1 for Amplitude Calculation.'];
WhlImbRejctnBlndCmdMgnLp1FilFrq.DocUnits = 'Hz';
WhlImbRejctnBlndCmdMgnLp1FilFrq.EngDT = dt.float32;
WhlImbRejctnBlndCmdMgnLp1FilFrq.EngVal = 5;
WhlImbRejctnBlndCmdMgnLp1FilFrq.EngMin = 0.001;
WhlImbRejctnBlndCmdMgnLp1FilFrq.EngMax = 100;
WhlImbRejctnBlndCmdMgnLp1FilFrq.Cardinality = 'Inin';
WhlImbRejctnBlndCmdMgnLp1FilFrq.CustomerVisible = false;
WhlImbRejctnBlndCmdMgnLp1FilFrq.Online = false;
WhlImbRejctnBlndCmdMgnLp1FilFrq.Impact = 'M';
WhlImbRejctnBlndCmdMgnLp1FilFrq.TuningOwner = 'CSE';
WhlImbRejctnBlndCmdMgnLp1FilFrq.GraphLink = {''};
WhlImbRejctnBlndCmdMgnLp1FilFrq.Monotony = 'None';
WhlImbRejctnBlndCmdMgnLp1FilFrq.MaxGrad = 998;
WhlImbRejctnBlndCmdMgnLp1FilFrq.PortName = 'WhlImbRejctnBlndCmdMgnLp1FilFrq';


WhlImbRejctnBlndCmdMgnLp2FilFrq = DataDict.Calibration;
WhlImbRejctnBlndCmdMgnLp2FilFrq.LongName = 'Blend Command Magnitude Low Pass Filter 2';
WhlImbRejctnBlndCmdMgnLp2FilFrq.Description = [...
  'Filter Coeff #1 for Amplitude Calculation.'];
WhlImbRejctnBlndCmdMgnLp2FilFrq.DocUnits = 'Hz';
WhlImbRejctnBlndCmdMgnLp2FilFrq.EngDT = dt.float32;
WhlImbRejctnBlndCmdMgnLp2FilFrq.EngVal = 5;
WhlImbRejctnBlndCmdMgnLp2FilFrq.EngMin = 0.001;
WhlImbRejctnBlndCmdMgnLp2FilFrq.EngMax = 100;
WhlImbRejctnBlndCmdMgnLp2FilFrq.Cardinality = 'Inin';
WhlImbRejctnBlndCmdMgnLp2FilFrq.CustomerVisible = false;
WhlImbRejctnBlndCmdMgnLp2FilFrq.Online = false;
WhlImbRejctnBlndCmdMgnLp2FilFrq.Impact = 'M';
WhlImbRejctnBlndCmdMgnLp2FilFrq.TuningOwner = 'CSE';
WhlImbRejctnBlndCmdMgnLp2FilFrq.GraphLink = {''};
WhlImbRejctnBlndCmdMgnLp2FilFrq.Monotony = 'None';
WhlImbRejctnBlndCmdMgnLp2FilFrq.MaxGrad = 998;
WhlImbRejctnBlndCmdMgnLp2FilFrq.PortName = 'WhlImbRejctnBlndCmdMgnLp2FilFrq';


WhlImbRejctnCmdMgnLp1FilFrq = DataDict.Calibration;
WhlImbRejctnCmdMgnLp1FilFrq.LongName = 'Command Magnitude Low Pass Filter 1';
WhlImbRejctnCmdMgnLp1FilFrq.Description = [...
  'Filter Freq #1 for amplitude calculation.'];
WhlImbRejctnCmdMgnLp1FilFrq.DocUnits = 'Hz';
WhlImbRejctnCmdMgnLp1FilFrq.EngDT = dt.float32;
WhlImbRejctnCmdMgnLp1FilFrq.EngVal = 5;
WhlImbRejctnCmdMgnLp1FilFrq.EngMin = 0.001;
WhlImbRejctnCmdMgnLp1FilFrq.EngMax = 100;
WhlImbRejctnCmdMgnLp1FilFrq.Cardinality = 'Cmn';
WhlImbRejctnCmdMgnLp1FilFrq.CustomerVisible = false;
WhlImbRejctnCmdMgnLp1FilFrq.Online = false;
WhlImbRejctnCmdMgnLp1FilFrq.Impact = 'M';
WhlImbRejctnCmdMgnLp1FilFrq.TuningOwner = 'CSE';
WhlImbRejctnCmdMgnLp1FilFrq.GraphLink = {''};
WhlImbRejctnCmdMgnLp1FilFrq.Monotony = 'None';
WhlImbRejctnCmdMgnLp1FilFrq.MaxGrad = 998;
WhlImbRejctnCmdMgnLp1FilFrq.PortName = 'WhlImbRejctnCmdMgnLp1FilFrq';


WhlImbRejctnCmdMgnLp2FilFrq = DataDict.Calibration;
WhlImbRejctnCmdMgnLp2FilFrq.LongName = 'Command Magnitude Low Pass Filter 2';
WhlImbRejctnCmdMgnLp2FilFrq.Description = [...
  'Filter Freq #2 for amplitude calculation.'];
WhlImbRejctnCmdMgnLp2FilFrq.DocUnits = 'Hz';
WhlImbRejctnCmdMgnLp2FilFrq.EngDT = dt.float32;
WhlImbRejctnCmdMgnLp2FilFrq.EngVal = 5;
WhlImbRejctnCmdMgnLp2FilFrq.EngMin = 0.001;
WhlImbRejctnCmdMgnLp2FilFrq.EngMax = 100;
WhlImbRejctnCmdMgnLp2FilFrq.Cardinality = 'Cmn';
WhlImbRejctnCmdMgnLp2FilFrq.CustomerVisible = false;
WhlImbRejctnCmdMgnLp2FilFrq.Online = false;
WhlImbRejctnCmdMgnLp2FilFrq.Impact = 'M';
WhlImbRejctnCmdMgnLp2FilFrq.TuningOwner = 'CSE';
WhlImbRejctnCmdMgnLp2FilFrq.GraphLink = {''};
WhlImbRejctnCmdMgnLp2FilFrq.Monotony = 'None';
WhlImbRejctnCmdMgnLp2FilFrq.MaxGrad = 998;
WhlImbRejctnCmdMgnLp2FilFrq.PortName = 'WhlImbRejctnCmdMgnLp2FilFrq';


WhlImbRejctnCurrMgnSlewPerLoop = DataDict.Calibration;
WhlImbRejctnCurrMgnSlewPerLoop.LongName = 'Current Magnitude Slew per Loop';
WhlImbRejctnCurrMgnSlewPerLoop.Description = [...
  'Slew limit on rate of change of autoscale function.'];
WhlImbRejctnCurrMgnSlewPerLoop.DocUnits = 'Uls';
WhlImbRejctnCurrMgnSlewPerLoop.EngDT = dt.float32;
WhlImbRejctnCurrMgnSlewPerLoop.EngVal = 0.002;
WhlImbRejctnCurrMgnSlewPerLoop.EngMin = 1e-05;
WhlImbRejctnCurrMgnSlewPerLoop.EngMax = 1;
WhlImbRejctnCurrMgnSlewPerLoop.Cardinality = 'Inin';
WhlImbRejctnCurrMgnSlewPerLoop.CustomerVisible = false;
WhlImbRejctnCurrMgnSlewPerLoop.Online = true;
WhlImbRejctnCurrMgnSlewPerLoop.Impact = 'M';
WhlImbRejctnCurrMgnSlewPerLoop.TuningOwner = 'CSE';
WhlImbRejctnCurrMgnSlewPerLoop.GraphLink = {''};
WhlImbRejctnCurrMgnSlewPerLoop.Monotony = 'None';
WhlImbRejctnCurrMgnSlewPerLoop.MaxGrad = 998;
WhlImbRejctnCurrMgnSlewPerLoop.PortName = 'WhlImbRejctnCurrMgnSlewPerLoop';


WhlImbRejctnDcTrendFltRcvryDly = DataDict.Calibration;
WhlImbRejctnDcTrendFltRcvryDly.LongName = 'DC Trend Fault Recovery Delay';
WhlImbRejctnDcTrendFltRcvryDly.Description = [...
  'Time delay before fault recovery it attempted.'];
WhlImbRejctnDcTrendFltRcvryDly.DocUnits = 'Mins';
WhlImbRejctnDcTrendFltRcvryDly.EngDT = dt.float32;
WhlImbRejctnDcTrendFltRcvryDly.EngVal = 5;
WhlImbRejctnDcTrendFltRcvryDly.EngMin = 0;
WhlImbRejctnDcTrendFltRcvryDly.EngMax = 255;
WhlImbRejctnDcTrendFltRcvryDly.Cardinality = 'Cmn';
WhlImbRejctnDcTrendFltRcvryDly.CustomerVisible = false;
WhlImbRejctnDcTrendFltRcvryDly.Online = true;
WhlImbRejctnDcTrendFltRcvryDly.Impact = 'M';
WhlImbRejctnDcTrendFltRcvryDly.TuningOwner = 'CSE';
WhlImbRejctnDcTrendFltRcvryDly.GraphLink = {''};
WhlImbRejctnDcTrendFltRcvryDly.Monotony = 'None';
WhlImbRejctnDcTrendFltRcvryDly.MaxGrad = 998;
WhlImbRejctnDcTrendFltRcvryDly.PortName = 'WhlImbRejctnDcTrendFltRcvryDly';


WhlImbRejctnDcTrendFltRcvryNegStep = DataDict.Calibration;
WhlImbRejctnDcTrendFltRcvryNegStep.LongName = 'DC Trend Fault Recovery Negative Step';
WhlImbRejctnDcTrendFltRcvryNegStep.Description = [...
  'Calibratable threshold for DC Trend fault recovery step size towards p' ...
  'assed.'];
WhlImbRejctnDcTrendFltRcvryNegStep.DocUnits = 'Uls';
WhlImbRejctnDcTrendFltRcvryNegStep.EngDT = dt.float32;
WhlImbRejctnDcTrendFltRcvryNegStep.EngVal = 10;
WhlImbRejctnDcTrendFltRcvryNegStep.EngMin = 0;
WhlImbRejctnDcTrendFltRcvryNegStep.EngMax = 200;
WhlImbRejctnDcTrendFltRcvryNegStep.Cardinality = 'Inin';
WhlImbRejctnDcTrendFltRcvryNegStep.CustomerVisible = false;
WhlImbRejctnDcTrendFltRcvryNegStep.Online = true;
WhlImbRejctnDcTrendFltRcvryNegStep.Impact = 'M';
WhlImbRejctnDcTrendFltRcvryNegStep.TuningOwner = 'CSE';
WhlImbRejctnDcTrendFltRcvryNegStep.GraphLink = {''};
WhlImbRejctnDcTrendFltRcvryNegStep.Monotony = 'None';
WhlImbRejctnDcTrendFltRcvryNegStep.MaxGrad = 998;
WhlImbRejctnDcTrendFltRcvryNegStep.PortName = 'WhlImbRejctnDcTrendFltRcvryNegStep';


WhlImbRejctnDcTrendFltRcvryPosStep = DataDict.Calibration;
WhlImbRejctnDcTrendFltRcvryPosStep.LongName = 'DC Trend Fault Recovery Positive Step';
WhlImbRejctnDcTrendFltRcvryPosStep.Description = [...
  'Calibratable threshold for DC Trend fault recovery step size towards f' ...
  'ailed.'];
WhlImbRejctnDcTrendFltRcvryPosStep.DocUnits = 'Uls';
WhlImbRejctnDcTrendFltRcvryPosStep.EngDT = dt.float32;
WhlImbRejctnDcTrendFltRcvryPosStep.EngVal = 10;
WhlImbRejctnDcTrendFltRcvryPosStep.EngMin = 0;
WhlImbRejctnDcTrendFltRcvryPosStep.EngMax = 200;
WhlImbRejctnDcTrendFltRcvryPosStep.Cardinality = 'Inin';
WhlImbRejctnDcTrendFltRcvryPosStep.CustomerVisible = false;
WhlImbRejctnDcTrendFltRcvryPosStep.Online = true;
WhlImbRejctnDcTrendFltRcvryPosStep.Impact = 'M';
WhlImbRejctnDcTrendFltRcvryPosStep.TuningOwner = 'CSE';
WhlImbRejctnDcTrendFltRcvryPosStep.GraphLink = {''};
WhlImbRejctnDcTrendFltRcvryPosStep.Monotony = 'None';
WhlImbRejctnDcTrendFltRcvryPosStep.MaxGrad = 998;
WhlImbRejctnDcTrendFltRcvryPosStep.PortName = 'WhlImbRejctnDcTrendFltRcvryPosStep';


WhlImbRejctnDcTrendFltRcvryThd = DataDict.Calibration;
WhlImbRejctnDcTrendFltRcvryThd.LongName = 'DC Trend Fault Recovery Threshold';
WhlImbRejctnDcTrendFltRcvryThd.Description = [...
  'Calibratable threshold for DC Trend fault recovery threshold.'];
WhlImbRejctnDcTrendFltRcvryThd.DocUnits = 'Uls';
WhlImbRejctnDcTrendFltRcvryThd.EngDT = dt.float32;
WhlImbRejctnDcTrendFltRcvryThd.EngVal = 100;
WhlImbRejctnDcTrendFltRcvryThd.EngMin = 0;
WhlImbRejctnDcTrendFltRcvryThd.EngMax = 200;
WhlImbRejctnDcTrendFltRcvryThd.Cardinality = 'Inin';
WhlImbRejctnDcTrendFltRcvryThd.CustomerVisible = true;
WhlImbRejctnDcTrendFltRcvryThd.Online = false;
WhlImbRejctnDcTrendFltRcvryThd.Impact = 'M';
WhlImbRejctnDcTrendFltRcvryThd.TuningOwner = 'CSE';
WhlImbRejctnDcTrendFltRcvryThd.GraphLink = {''};
WhlImbRejctnDcTrendFltRcvryThd.Monotony = 'None';
WhlImbRejctnDcTrendFltRcvryThd.MaxGrad = 998;
WhlImbRejctnDcTrendFltRcvryThd.PortName = 'WhlImbRejctnDcTrendFltRcvryThd';


WhlImbRejctnDcTrendLpFil = DataDict.Calibration;
WhlImbRejctnDcTrendLpFil.LongName = 'DC Trend Low Pass Filter';
WhlImbRejctnDcTrendLpFil.Description = 'Filter for DC Trend Diagnostic.';
WhlImbRejctnDcTrendLpFil.DocUnits = 'Hz';
WhlImbRejctnDcTrendLpFil.EngDT = dt.float32;
WhlImbRejctnDcTrendLpFil.EngVal = 0.2;
WhlImbRejctnDcTrendLpFil.EngMin = 0.001;
WhlImbRejctnDcTrendLpFil.EngMax = 100;
WhlImbRejctnDcTrendLpFil.Cardinality = 'Cmn';
WhlImbRejctnDcTrendLpFil.CustomerVisible = false;
WhlImbRejctnDcTrendLpFil.Online = false;
WhlImbRejctnDcTrendLpFil.Impact = 'M';
WhlImbRejctnDcTrendLpFil.TuningOwner = 'CSE';
WhlImbRejctnDcTrendLpFil.GraphLink = {''};
WhlImbRejctnDcTrendLpFil.Monotony = 'None';
WhlImbRejctnDcTrendLpFil.MaxGrad = 998;
WhlImbRejctnDcTrendLpFil.PortName = 'WhlImbRejctnDcTrendLpFil';


WhlImbRejctnDcTrendTh2Tq = DataDict.Calibration;
WhlImbRejctnDcTrendTh2Tq.LongName = 'DC Trend Th2 Torque';
WhlImbRejctnDcTrendTh2Tq.Description = [...
  'Maximum allowed DC content #2. This cal should be set based on gear ra' ...
  'tio, value equivalent to no greater than 3Nm Hw Torque.'];
WhlImbRejctnDcTrendTh2Tq.DocUnits = 'MotNwtMtr';
WhlImbRejctnDcTrendTh2Tq.EngDT = dt.float32;
WhlImbRejctnDcTrendTh2Tq.EngVal = 0.1;
WhlImbRejctnDcTrendTh2Tq.EngMin = 0;
WhlImbRejctnDcTrendTh2Tq.EngMax = 8.8;
WhlImbRejctnDcTrendTh2Tq.Cardinality = 'Inin';
WhlImbRejctnDcTrendTh2Tq.CustomerVisible = false;
WhlImbRejctnDcTrendTh2Tq.Online = true;
WhlImbRejctnDcTrendTh2Tq.Impact = 'M';
WhlImbRejctnDcTrendTh2Tq.TuningOwner = 'CSE';
WhlImbRejctnDcTrendTh2Tq.GraphLink = {''};
WhlImbRejctnDcTrendTh2Tq.Monotony = 'None';
WhlImbRejctnDcTrendTh2Tq.MaxGrad = 998;
WhlImbRejctnDcTrendTh2Tq.PortName = 'WhlImbRejctnDcTrendTh2Tq';


WhlImbRejctnDcTrendThTq = DataDict.Calibration;
WhlImbRejctnDcTrendThTq.LongName = 'DC Trend Th Torque';
WhlImbRejctnDcTrendThTq.Description = 'Maximum allowed DC content.';
WhlImbRejctnDcTrendThTq.DocUnits = 'MotNwtMtr';
WhlImbRejctnDcTrendThTq.EngDT = dt.float32;
WhlImbRejctnDcTrendThTq.EngVal = 0.05;
WhlImbRejctnDcTrendThTq.EngMin = 0;
WhlImbRejctnDcTrendThTq.EngMax = 8.8;
WhlImbRejctnDcTrendThTq.Cardinality = 'Inin';
WhlImbRejctnDcTrendThTq.CustomerVisible = false;
WhlImbRejctnDcTrendThTq.Online = true;
WhlImbRejctnDcTrendThTq.Impact = 'M';
WhlImbRejctnDcTrendThTq.TuningOwner = 'CSE';
WhlImbRejctnDcTrendThTq.GraphLink = {''};
WhlImbRejctnDcTrendThTq.Monotony = 'None';
WhlImbRejctnDcTrendThTq.MaxGrad = 998;
WhlImbRejctnDcTrendThTq.PortName = 'WhlImbRejctnDcTrendThTq';


WhlImbRejctnDcTrendTi2Sec = DataDict.Calibration;
WhlImbRejctnDcTrendTi2Sec.LongName = 'DC Trend Time 2 Second';
WhlImbRejctnDcTrendTi2Sec.Description = [...
  'Maximum time allowed for DC content to be present #2. This value shoul' ...
  'd be set based on maximum time allowed for unintended assist / lane de' ...
  'parture requirement.'];
WhlImbRejctnDcTrendTi2Sec.DocUnits = 'Sec';
WhlImbRejctnDcTrendTi2Sec.EngDT = dt.float32;
WhlImbRejctnDcTrendTi2Sec.EngVal = 0.014;
WhlImbRejctnDcTrendTi2Sec.EngMin = 0;
WhlImbRejctnDcTrendTi2Sec.EngMax = 4090;
WhlImbRejctnDcTrendTi2Sec.Cardinality = 'Inin';
WhlImbRejctnDcTrendTi2Sec.CustomerVisible = false;
WhlImbRejctnDcTrendTi2Sec.Online = true;
WhlImbRejctnDcTrendTi2Sec.Impact = 'M';
WhlImbRejctnDcTrendTi2Sec.TuningOwner = 'CSE';
WhlImbRejctnDcTrendTi2Sec.GraphLink = {''};
WhlImbRejctnDcTrendTi2Sec.Monotony = 'None';
WhlImbRejctnDcTrendTi2Sec.MaxGrad = 998;
WhlImbRejctnDcTrendTi2Sec.PortName = 'WhlImbRejctnDcTrendTi2Sec';


WhlImbRejctnDcTrendTiSec = DataDict.Calibration;
WhlImbRejctnDcTrendTiSec.LongName = 'DC Trend Time Second';
WhlImbRejctnDcTrendTiSec.Description = [...
  'Maximum time allowed for DC content to be present.'];
WhlImbRejctnDcTrendTiSec.DocUnits = 'Sec';
WhlImbRejctnDcTrendTiSec.EngDT = dt.float32;
WhlImbRejctnDcTrendTiSec.EngVal = 0.125;
WhlImbRejctnDcTrendTiSec.EngMin = 0;
WhlImbRejctnDcTrendTiSec.EngMax = 4090;
WhlImbRejctnDcTrendTiSec.Cardinality = 'Inin';
WhlImbRejctnDcTrendTiSec.CustomerVisible = false;
WhlImbRejctnDcTrendTiSec.Online = true;
WhlImbRejctnDcTrendTiSec.Impact = 'M';
WhlImbRejctnDcTrendTiSec.TuningOwner = 'CSE';
WhlImbRejctnDcTrendTiSec.GraphLink = {''};
WhlImbRejctnDcTrendTiSec.Monotony = 'None';
WhlImbRejctnDcTrendTiSec.MaxGrad = 998;
WhlImbRejctnDcTrendTiSec.PortName = 'WhlImbRejctnDcTrendTiSec';


WhlImbRejctnDistbnMgnLpFil = DataDict.Calibration;
WhlImbRejctnDistbnMgnLpFil.LongName = 'Distribution Magnitude Low Pass Filter';
WhlImbRejctnDistbnMgnLpFil.Description = [...
  'Low Pass Filter constant on wheel speed input of DistMag function.'];
WhlImbRejctnDistbnMgnLpFil.DocUnits = 'Hz';
WhlImbRejctnDistbnMgnLpFil.EngDT = dt.float32;
WhlImbRejctnDistbnMgnLpFil.EngVal = 0.5;
WhlImbRejctnDistbnMgnLpFil.EngMin = 0.01;
WhlImbRejctnDistbnMgnLpFil.EngMax = 100;
WhlImbRejctnDistbnMgnLpFil.Cardinality = 'Inin';
WhlImbRejctnDistbnMgnLpFil.CustomerVisible = false;
WhlImbRejctnDistbnMgnLpFil.Online = false;
WhlImbRejctnDistbnMgnLpFil.Impact = 'M';
WhlImbRejctnDistbnMgnLpFil.TuningOwner = 'CSE';
WhlImbRejctnDistbnMgnLpFil.GraphLink = {''};
WhlImbRejctnDistbnMgnLpFil.Monotony = 'None';
WhlImbRejctnDistbnMgnLpFil.MaxGrad = 998;
WhlImbRejctnDistbnMgnLpFil.PortName = 'WhlImbRejctnDistbnMgnLpFil';


WhlImbRejctnEnaSlewPerLoop = DataDict.Calibration;
WhlImbRejctnEnaSlewPerLoop.LongName = 'Enable Slew per Loop';
WhlImbRejctnEnaSlewPerLoop.Description = [...
  'Slew Limit on rate of change of enable signal.'];
WhlImbRejctnEnaSlewPerLoop.DocUnits = 'Uls';
WhlImbRejctnEnaSlewPerLoop.EngDT = dt.float32;
WhlImbRejctnEnaSlewPerLoop.EngVal = 0.01;
WhlImbRejctnEnaSlewPerLoop.EngMin = 0;
WhlImbRejctnEnaSlewPerLoop.EngMax = 1;
WhlImbRejctnEnaSlewPerLoop.Cardinality = 'Inin';
WhlImbRejctnEnaSlewPerLoop.CustomerVisible = false;
WhlImbRejctnEnaSlewPerLoop.Online = false;
WhlImbRejctnEnaSlewPerLoop.Impact = 'M';
WhlImbRejctnEnaSlewPerLoop.TuningOwner = 'CSE';
WhlImbRejctnEnaSlewPerLoop.GraphLink = {''};
WhlImbRejctnEnaSlewPerLoop.Monotony = 'None';
WhlImbRejctnEnaSlewPerLoop.MaxGrad = 998;
WhlImbRejctnEnaSlewPerLoop.PortName = 'WhlImbRejctnEnaSlewPerLoop';


WhlImbRejctnFctEna = DataDict.Calibration;
WhlImbRejctnFctEna.LongName = 'Function Enable';
WhlImbRejctnFctEna.Description = [...
  'Function enable calibration to provide access for turning WIR on or of' ...
  'f. Customer visibility can be specific to requirements'];
WhlImbRejctnFctEna.DocUnits = 'Cnt';
WhlImbRejctnFctEna.EngDT = dt.lgc;
WhlImbRejctnFctEna.EngVal = 1;
WhlImbRejctnFctEna.EngMin = 0;
WhlImbRejctnFctEna.EngMax = 1;
WhlImbRejctnFctEna.Cardinality = 'Cmn';
WhlImbRejctnFctEna.CustomerVisible = false;
WhlImbRejctnFctEna.Online = false;
WhlImbRejctnFctEna.Impact = 'M';
WhlImbRejctnFctEna.TuningOwner = 'CSE';
WhlImbRejctnFctEna.GraphLink = {''};
WhlImbRejctnFctEna.Monotony = 'None';
WhlImbRejctnFctEna.MaxGrad = 998;
WhlImbRejctnFctEna.PortName = 'WhlImbRejctnFctEna';


WhlImbRejctnFrqDiagcAmpThd = DataDict.Calibration;
WhlImbRejctnFrqDiagcAmpThd.LongName = 'Frequency Diagnostic Amplitude Threshold';
WhlImbRejctnFrqDiagcAmpThd.Description = [...
  'Minimum command amplitude necessary for frequency diagnostic to operat' ...
  'e.'];
WhlImbRejctnFrqDiagcAmpThd.DocUnits = 'MotNwtMtr';
WhlImbRejctnFrqDiagcAmpThd.EngDT = dt.float32;
WhlImbRejctnFrqDiagcAmpThd.EngVal = 0.0507813;
WhlImbRejctnFrqDiagcAmpThd.EngMin = 0;
WhlImbRejctnFrqDiagcAmpThd.EngMax = 8.8;
WhlImbRejctnFrqDiagcAmpThd.Cardinality = 'Inin';
WhlImbRejctnFrqDiagcAmpThd.CustomerVisible = false;
WhlImbRejctnFrqDiagcAmpThd.Online = true;
WhlImbRejctnFrqDiagcAmpThd.Impact = 'M';
WhlImbRejctnFrqDiagcAmpThd.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcAmpThd.GraphLink = {''};
WhlImbRejctnFrqDiagcAmpThd.Monotony = 'None';
WhlImbRejctnFrqDiagcAmpThd.MaxGrad = 998;
WhlImbRejctnFrqDiagcAmpThd.PortName = 'WhlImbRejctnFrqDiagcAmpThd';


WhlImbRejctnFrqDiagcEna = DataDict.Calibration;
WhlImbRejctnFrqDiagcEna.LongName = 'Frequency Diagnostic Enable';
WhlImbRejctnFrqDiagcEna.Description = [...
  'Flag to enable frequency diagnostic.'];
WhlImbRejctnFrqDiagcEna.DocUnits = 'Cnt';
WhlImbRejctnFrqDiagcEna.EngDT = dt.lgc;
WhlImbRejctnFrqDiagcEna.EngVal = 1;
WhlImbRejctnFrqDiagcEna.EngMin = 0;
WhlImbRejctnFrqDiagcEna.EngMax = 1;
WhlImbRejctnFrqDiagcEna.Cardinality = 'Cmn';
WhlImbRejctnFrqDiagcEna.CustomerVisible = false;
WhlImbRejctnFrqDiagcEna.Online = false;
WhlImbRejctnFrqDiagcEna.Impact = 'M';
WhlImbRejctnFrqDiagcEna.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcEna.GraphLink = {''};
WhlImbRejctnFrqDiagcEna.Monotony = 'None';
WhlImbRejctnFrqDiagcEna.MaxGrad = 998;
WhlImbRejctnFrqDiagcEna.PortName = 'WhlImbRejctnFrqDiagcEna';


WhlImbRejctnFrqDiagcFltRcvryDly = DataDict.Calibration;
WhlImbRejctnFrqDiagcFltRcvryDly.LongName = 'Frequency Diagnostic Fault Recovery Delay';
WhlImbRejctnFrqDiagcFltRcvryDly.Description = [...
  'Time delay before fault recovery is attempted.'];
WhlImbRejctnFrqDiagcFltRcvryDly.DocUnits = 'Mins';
WhlImbRejctnFrqDiagcFltRcvryDly.EngDT = dt.float32;
WhlImbRejctnFrqDiagcFltRcvryDly.EngVal = 5;
WhlImbRejctnFrqDiagcFltRcvryDly.EngMin = 0;
WhlImbRejctnFrqDiagcFltRcvryDly.EngMax = 255;
WhlImbRejctnFrqDiagcFltRcvryDly.Cardinality = 'Cmn';
WhlImbRejctnFrqDiagcFltRcvryDly.CustomerVisible = false;
WhlImbRejctnFrqDiagcFltRcvryDly.Online = true;
WhlImbRejctnFrqDiagcFltRcvryDly.Impact = 'M';
WhlImbRejctnFrqDiagcFltRcvryDly.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcFltRcvryDly.GraphLink = {''};
WhlImbRejctnFrqDiagcFltRcvryDly.Monotony = 'None';
WhlImbRejctnFrqDiagcFltRcvryDly.MaxGrad = 998;
WhlImbRejctnFrqDiagcFltRcvryDly.PortName = 'WhlImbRejctnFrqDiagcFltRcvryDly';


WhlImbRejctnFrqDiagcFltRcvryNegStep = DataDict.Calibration;
WhlImbRejctnFrqDiagcFltRcvryNegStep.LongName = 'Frequency Diagnostic Fault Recovery Negative Step';
WhlImbRejctnFrqDiagcFltRcvryNegStep.Description = [...
  'Calibratable threshold for frequency diagnostic fault recovery step si' ...
  'ze towards passed.'];
WhlImbRejctnFrqDiagcFltRcvryNegStep.DocUnits = 'Uls';
WhlImbRejctnFrqDiagcFltRcvryNegStep.EngDT = dt.float32;
WhlImbRejctnFrqDiagcFltRcvryNegStep.EngVal = 10;
WhlImbRejctnFrqDiagcFltRcvryNegStep.EngMin = 0;
WhlImbRejctnFrqDiagcFltRcvryNegStep.EngMax = 200;
WhlImbRejctnFrqDiagcFltRcvryNegStep.Cardinality = 'Inin';
WhlImbRejctnFrqDiagcFltRcvryNegStep.CustomerVisible = false;
WhlImbRejctnFrqDiagcFltRcvryNegStep.Online = true;
WhlImbRejctnFrqDiagcFltRcvryNegStep.Impact = 'M';
WhlImbRejctnFrqDiagcFltRcvryNegStep.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcFltRcvryNegStep.GraphLink = {''};
WhlImbRejctnFrqDiagcFltRcvryNegStep.Monotony = 'None';
WhlImbRejctnFrqDiagcFltRcvryNegStep.MaxGrad = 998;
WhlImbRejctnFrqDiagcFltRcvryNegStep.PortName = 'WhlImbRejctnFrqDiagcFltRcvryNegStep';


WhlImbRejctnFrqDiagcFltRcvryPosStep = DataDict.Calibration;
WhlImbRejctnFrqDiagcFltRcvryPosStep.LongName = 'Frequency Diagnostic Fault Recovery Positive Step';
WhlImbRejctnFrqDiagcFltRcvryPosStep.Description = [...
  'Calibratable threshold for Frequency diagnostic fault recovery step si' ...
  'ze towards failed.'];
WhlImbRejctnFrqDiagcFltRcvryPosStep.DocUnits = 'Uls';
WhlImbRejctnFrqDiagcFltRcvryPosStep.EngDT = dt.float32;
WhlImbRejctnFrqDiagcFltRcvryPosStep.EngVal = 10;
WhlImbRejctnFrqDiagcFltRcvryPosStep.EngMin = 0;
WhlImbRejctnFrqDiagcFltRcvryPosStep.EngMax = 200;
WhlImbRejctnFrqDiagcFltRcvryPosStep.Cardinality = 'Inin';
WhlImbRejctnFrqDiagcFltRcvryPosStep.CustomerVisible = false;
WhlImbRejctnFrqDiagcFltRcvryPosStep.Online = true;
WhlImbRejctnFrqDiagcFltRcvryPosStep.Impact = 'M';
WhlImbRejctnFrqDiagcFltRcvryPosStep.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcFltRcvryPosStep.GraphLink = {''};
WhlImbRejctnFrqDiagcFltRcvryPosStep.Monotony = 'None';
WhlImbRejctnFrqDiagcFltRcvryPosStep.MaxGrad = 998;
WhlImbRejctnFrqDiagcFltRcvryPosStep.PortName = 'WhlImbRejctnFrqDiagcFltRcvryPosStep';


WhlImbRejctnFrqDiagcFltRcvryThd = DataDict.Calibration;
WhlImbRejctnFrqDiagcFltRcvryThd.LongName = 'Frequency Diagnostic Fault Recovery Threshold';
WhlImbRejctnFrqDiagcFltRcvryThd.Description = [...
  'Calibratable threshold for frequency diagnostic fault recovery thresho' ...
  'ld.'];
WhlImbRejctnFrqDiagcFltRcvryThd.DocUnits = 'Uls';
WhlImbRejctnFrqDiagcFltRcvryThd.EngDT = dt.float32;
WhlImbRejctnFrqDiagcFltRcvryThd.EngVal = 100;
WhlImbRejctnFrqDiagcFltRcvryThd.EngMin = 0;
WhlImbRejctnFrqDiagcFltRcvryThd.EngMax = 200;
WhlImbRejctnFrqDiagcFltRcvryThd.Cardinality = 'Inin';
WhlImbRejctnFrqDiagcFltRcvryThd.CustomerVisible = false;
WhlImbRejctnFrqDiagcFltRcvryThd.Online = true;
WhlImbRejctnFrqDiagcFltRcvryThd.Impact = 'M';
WhlImbRejctnFrqDiagcFltRcvryThd.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcFltRcvryThd.GraphLink = {''};
WhlImbRejctnFrqDiagcFltRcvryThd.Monotony = 'None';
WhlImbRejctnFrqDiagcFltRcvryThd.MaxGrad = 998;
WhlImbRejctnFrqDiagcFltRcvryThd.PortName = 'WhlImbRejctnFrqDiagcFltRcvryThd';


WhlImbRejctnFrqDiagcLpFil = DataDict.Calibration;
WhlImbRejctnFrqDiagcLpFil.LongName = 'Frequency Diagnostic Low Pass Filter';
WhlImbRejctnFrqDiagcLpFil.Description = 'Filter Frequency for LPF Filter.';
WhlImbRejctnFrqDiagcLpFil.DocUnits = 'Hz';
WhlImbRejctnFrqDiagcLpFil.EngDT = dt.float32;
WhlImbRejctnFrqDiagcLpFil.EngVal = 2;
WhlImbRejctnFrqDiagcLpFil.EngMin = 0.01;
WhlImbRejctnFrqDiagcLpFil.EngMax = 100;
WhlImbRejctnFrqDiagcLpFil.Cardinality = 'Cmn';
WhlImbRejctnFrqDiagcLpFil.CustomerVisible = false;
WhlImbRejctnFrqDiagcLpFil.Online = false;
WhlImbRejctnFrqDiagcLpFil.Impact = 'M';
WhlImbRejctnFrqDiagcLpFil.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcLpFil.GraphLink = {''};
WhlImbRejctnFrqDiagcLpFil.Monotony = 'None';
WhlImbRejctnFrqDiagcLpFil.MaxGrad = 998;
WhlImbRejctnFrqDiagcLpFil.PortName = 'WhlImbRejctnFrqDiagcLpFil';


WhlImbRejctnFrqDiagcThd = DataDict.Calibration;
WhlImbRejctnFrqDiagcThd.LongName = 'Frequency Diagnostic Threshold';
WhlImbRejctnFrqDiagcThd.Description = 'Threshold to trip diagnostic.';
WhlImbRejctnFrqDiagcThd.DocUnits = 'MotNwtMtr';
WhlImbRejctnFrqDiagcThd.EngDT = dt.float32;
WhlImbRejctnFrqDiagcThd.EngVal = 0.0117188;
WhlImbRejctnFrqDiagcThd.EngMin = 0;
WhlImbRejctnFrqDiagcThd.EngMax = 8.8;
WhlImbRejctnFrqDiagcThd.Cardinality = 'Inin';
WhlImbRejctnFrqDiagcThd.CustomerVisible = false;
WhlImbRejctnFrqDiagcThd.Online = true;
WhlImbRejctnFrqDiagcThd.Impact = 'M';
WhlImbRejctnFrqDiagcThd.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcThd.GraphLink = {''};
WhlImbRejctnFrqDiagcThd.Monotony = 'None';
WhlImbRejctnFrqDiagcThd.MaxGrad = 998;
WhlImbRejctnFrqDiagcThd.PortName = 'WhlImbRejctnFrqDiagcThd';


WhlImbRejctnFrqDiagcTout = DataDict.Calibration;
WhlImbRejctnFrqDiagcTout.LongName = 'Frequency Diagnostic Timeout';
WhlImbRejctnFrqDiagcTout.Description = 'Time required to trip diagnostic.';
WhlImbRejctnFrqDiagcTout.DocUnits = 'MilliSec';
WhlImbRejctnFrqDiagcTout.EngDT = dt.u16p0;
WhlImbRejctnFrqDiagcTout.EngVal = 500;
WhlImbRejctnFrqDiagcTout.EngMin = 0;
WhlImbRejctnFrqDiagcTout.EngMax = 65500;
WhlImbRejctnFrqDiagcTout.Cardinality = 'Inin';
WhlImbRejctnFrqDiagcTout.CustomerVisible = false;
WhlImbRejctnFrqDiagcTout.Online = false;
WhlImbRejctnFrqDiagcTout.Impact = 'M';
WhlImbRejctnFrqDiagcTout.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcTout.GraphLink = {''};
WhlImbRejctnFrqDiagcTout.Monotony = 'None';
WhlImbRejctnFrqDiagcTout.MaxGrad = 998;
WhlImbRejctnFrqDiagcTout.PortName = 'WhlImbRejctnFrqDiagcTout';


WhlImbRejctnFrqDiagcUgrPoleMgn = DataDict.Calibration;
WhlImbRejctnFrqDiagcUgrPoleMgn.LongName = 'Frequency Diagnostic UGR Pole Magnitude';
WhlImbRejctnFrqDiagcUgrPoleMgn.Description = 'Pole Magnitude for UGR Filter.';
WhlImbRejctnFrqDiagcUgrPoleMgn.DocUnits = 'Uls';
WhlImbRejctnFrqDiagcUgrPoleMgn.EngDT = dt.float32;
WhlImbRejctnFrqDiagcUgrPoleMgn.EngVal = 0.949997;
WhlImbRejctnFrqDiagcUgrPoleMgn.EngMin = 0;
WhlImbRejctnFrqDiagcUgrPoleMgn.EngMax = 1;
WhlImbRejctnFrqDiagcUgrPoleMgn.Cardinality = 'Cmn';
WhlImbRejctnFrqDiagcUgrPoleMgn.CustomerVisible = false;
WhlImbRejctnFrqDiagcUgrPoleMgn.Online = true;
WhlImbRejctnFrqDiagcUgrPoleMgn.Impact = 'M';
WhlImbRejctnFrqDiagcUgrPoleMgn.TuningOwner = 'CSE';
WhlImbRejctnFrqDiagcUgrPoleMgn.GraphLink = {''};
WhlImbRejctnFrqDiagcUgrPoleMgn.Monotony = 'None';
WhlImbRejctnFrqDiagcUgrPoleMgn.MaxGrad = 998;
WhlImbRejctnFrqDiagcUgrPoleMgn.PortName = 'WhlImbRejctnFrqDiagcUgrPoleMgn';


WhlImbRejctnFrqScaTblX = DataDict.Calibration;
WhlImbRejctnFrqScaTblX.LongName = 'Frequency Scale Table X';
WhlImbRejctnFrqScaTblX.Description = [...
  'Uses first & last value from frequency scale table to check if wheel f' ...
  'requency is in valid range.'];
WhlImbRejctnFrqScaTblX.DocUnits = 'Hz';
WhlImbRejctnFrqScaTblX.EngDT = dt.u6p10;
WhlImbRejctnFrqScaTblX.EngVal =  ...
   [8                9               10               23               24               25];
WhlImbRejctnFrqScaTblX.EngMin = 5;
WhlImbRejctnFrqScaTblX.EngMax = 40;
WhlImbRejctnFrqScaTblX.Cardinality = 'Inin';
WhlImbRejctnFrqScaTblX.CustomerVisible = false;
WhlImbRejctnFrqScaTblX.Online = false;
WhlImbRejctnFrqScaTblX.Impact = 'M';
WhlImbRejctnFrqScaTblX.TuningOwner = 'CSE';
WhlImbRejctnFrqScaTblX.GraphLink = {''};
WhlImbRejctnFrqScaTblX.Monotony = 'Strictly_Increasing';
WhlImbRejctnFrqScaTblX.MaxGrad = 998;
WhlImbRejctnFrqScaTblX.PortName = 'WhlImbRejctnFrqScaTblX';


WhlImbRejctnFrqScaTblY = DataDict.Calibration;
WhlImbRejctnFrqScaTblY.LongName = 'Frequency Scale Table Y';
WhlImbRejctnFrqScaTblY.Description = [...
  'Uses first & last value from frequency scale table to check if wheel f' ...
  'requency is in valid range.'];
WhlImbRejctnFrqScaTblY.DocUnits = 'Uls';
WhlImbRejctnFrqScaTblY.EngDT = dt.u1p15;
WhlImbRejctnFrqScaTblY.EngVal =  ...
   [0              0.5                1                1              0.5                0];
WhlImbRejctnFrqScaTblY.EngMin = 0;
WhlImbRejctnFrqScaTblY.EngMax = 1;
WhlImbRejctnFrqScaTblY.Cardinality = 'Inin';
WhlImbRejctnFrqScaTblY.CustomerVisible = false;
WhlImbRejctnFrqScaTblY.Online = false;
WhlImbRejctnFrqScaTblY.Impact = 'M';
WhlImbRejctnFrqScaTblY.TuningOwner = 'CSE';
WhlImbRejctnFrqScaTblY.GraphLink = {'WhlImbRejctnFrqScaTblX'};
WhlImbRejctnFrqScaTblY.Monotony = 'None';
WhlImbRejctnFrqScaTblY.MaxGrad = 998;
WhlImbRejctnFrqScaTblY.PortName = 'WhlImbRejctnFrqScaTblY';


WhlImbRejctnMaxDurn = DataDict.Calibration;
WhlImbRejctnMaxDurn.LongName = 'Maximum Duration';
WhlImbRejctnMaxDurn.Description = [...
  'Limit of weighted operation time allowed per one vehicle life.'];
WhlImbRejctnMaxDurn.DocUnits = 'Cnt';
WhlImbRejctnMaxDurn.EngDT = dt.u16;
WhlImbRejctnMaxDurn.EngVal = 8000;
WhlImbRejctnMaxDurn.EngMin = 0;
WhlImbRejctnMaxDurn.EngMax = 65500;
WhlImbRejctnMaxDurn.Cardinality = 'Inin';
WhlImbRejctnMaxDurn.CustomerVisible = false;
WhlImbRejctnMaxDurn.Online = false;
WhlImbRejctnMaxDurn.Impact = 'M';
WhlImbRejctnMaxDurn.TuningOwner = 'CSE';
WhlImbRejctnMaxDurn.GraphLink = {''};
WhlImbRejctnMaxDurn.Monotony = 'None';
WhlImbRejctnMaxDurn.MaxGrad = 998;
WhlImbRejctnMaxDurn.PortName = 'WhlImbRejctnMaxDurn';


WhlImbRejctnMaxMgn = DataDict.Calibration;
WhlImbRejctnMaxMgn.LongName = 'Maximum Magnitude';
WhlImbRejctnMaxMgn.Description = [...
  'Maximum allowed WIR command amplitude.'];
WhlImbRejctnMaxMgn.DocUnits = 'MotNwtMtr';
WhlImbRejctnMaxMgn.EngDT = dt.float32;
WhlImbRejctnMaxMgn.EngVal = 0.2;
WhlImbRejctnMaxMgn.EngMin = 0.01;
WhlImbRejctnMaxMgn.EngMax = 8.8;
WhlImbRejctnMaxMgn.Cardinality = 'Inin';
WhlImbRejctnMaxMgn.CustomerVisible = false;
WhlImbRejctnMaxMgn.Online = true;
WhlImbRejctnMaxMgn.Impact = 'M';
WhlImbRejctnMaxMgn.TuningOwner = 'CSE';
WhlImbRejctnMaxMgn.GraphLink = {''};
WhlImbRejctnMaxMgn.Monotony = 'None';
WhlImbRejctnMaxMgn.MaxGrad = 998;
WhlImbRejctnMaxMgn.PortName = 'WhlImbRejctnMaxMgn';


WhlImbRejctnMaxMgnFltNegStep = DataDict.Calibration;
WhlImbRejctnMaxMgnFltNegStep.LongName = 'Maximum Magnitude Fault Negative Step';
WhlImbRejctnMaxMgnFltNegStep.Description = [...
  'Calibratable threshold for Max magnitude fault step size towards passe' ...
  'd.'];
WhlImbRejctnMaxMgnFltNegStep.DocUnits = 'Uls';
WhlImbRejctnMaxMgnFltNegStep.EngDT = dt.float32;
WhlImbRejctnMaxMgnFltNegStep.EngVal = 10;
WhlImbRejctnMaxMgnFltNegStep.EngMin = 0;
WhlImbRejctnMaxMgnFltNegStep.EngMax = 200;
WhlImbRejctnMaxMgnFltNegStep.Cardinality = 'Inin';
WhlImbRejctnMaxMgnFltNegStep.CustomerVisible = false;
WhlImbRejctnMaxMgnFltNegStep.Online = true;
WhlImbRejctnMaxMgnFltNegStep.Impact = 'M';
WhlImbRejctnMaxMgnFltNegStep.TuningOwner = 'CSE';
WhlImbRejctnMaxMgnFltNegStep.GraphLink = {''};
WhlImbRejctnMaxMgnFltNegStep.Monotony = 'None';
WhlImbRejctnMaxMgnFltNegStep.MaxGrad = 998;
WhlImbRejctnMaxMgnFltNegStep.PortName = 'WhlImbRejctnMaxMgnFltNegStep';


WhlImbRejctnMaxMgnFltPosStep = DataDict.Calibration;
WhlImbRejctnMaxMgnFltPosStep.LongName = 'Maximum Magnitude Fault Positive Step';
WhlImbRejctnMaxMgnFltPosStep.Description = [...
  'Calibratable threshold for Max magnitude fault step size towards faile' ...
  'd.'];
WhlImbRejctnMaxMgnFltPosStep.DocUnits = 'Uls';
WhlImbRejctnMaxMgnFltPosStep.EngDT = dt.float32;
WhlImbRejctnMaxMgnFltPosStep.EngVal = 10;
WhlImbRejctnMaxMgnFltPosStep.EngMin = 0;
WhlImbRejctnMaxMgnFltPosStep.EngMax = 200;
WhlImbRejctnMaxMgnFltPosStep.Cardinality = 'Inin';
WhlImbRejctnMaxMgnFltPosStep.CustomerVisible = false;
WhlImbRejctnMaxMgnFltPosStep.Online = true;
WhlImbRejctnMaxMgnFltPosStep.Impact = 'M';
WhlImbRejctnMaxMgnFltPosStep.TuningOwner = 'CSE';
WhlImbRejctnMaxMgnFltPosStep.GraphLink = {''};
WhlImbRejctnMaxMgnFltPosStep.Monotony = 'None';
WhlImbRejctnMaxMgnFltPosStep.MaxGrad = 998;
WhlImbRejctnMaxMgnFltPosStep.PortName = 'WhlImbRejctnMaxMgnFltPosStep';


WhlImbRejctnMaxMgnFltRcvryDly = DataDict.Calibration;
WhlImbRejctnMaxMgnFltRcvryDly.LongName = 'Maximum Magnitude Fault Recovery Delay';
WhlImbRejctnMaxMgnFltRcvryDly.Description = [...
  'Time delay before fault recovery it attempted.'];
WhlImbRejctnMaxMgnFltRcvryDly.DocUnits = 'Mins';
WhlImbRejctnMaxMgnFltRcvryDly.EngDT = dt.float32;
WhlImbRejctnMaxMgnFltRcvryDly.EngVal = 5;
WhlImbRejctnMaxMgnFltRcvryDly.EngMin = 0;
WhlImbRejctnMaxMgnFltRcvryDly.EngMax = 255;
WhlImbRejctnMaxMgnFltRcvryDly.Cardinality = 'Cmn';
WhlImbRejctnMaxMgnFltRcvryDly.CustomerVisible = false;
WhlImbRejctnMaxMgnFltRcvryDly.Online = true;
WhlImbRejctnMaxMgnFltRcvryDly.Impact = 'M';
WhlImbRejctnMaxMgnFltRcvryDly.TuningOwner = 'CSE';
WhlImbRejctnMaxMgnFltRcvryDly.GraphLink = {''};
WhlImbRejctnMaxMgnFltRcvryDly.Monotony = 'None';
WhlImbRejctnMaxMgnFltRcvryDly.MaxGrad = 998;
WhlImbRejctnMaxMgnFltRcvryDly.PortName = 'WhlImbRejctnMaxMgnFltRcvryDly';


WhlImbRejctnMaxMgnFltRcvryNegStep = DataDict.Calibration;
WhlImbRejctnMaxMgnFltRcvryNegStep.LongName = 'Maximum Magnitude Fault Recovery Negative Step';
WhlImbRejctnMaxMgnFltRcvryNegStep.Description = [...
  'Calibratable threshold for Max magnitude fault recovery step size towa' ...
  'rds passed.'];
WhlImbRejctnMaxMgnFltRcvryNegStep.DocUnits = 'Uls';
WhlImbRejctnMaxMgnFltRcvryNegStep.EngDT = dt.float32;
WhlImbRejctnMaxMgnFltRcvryNegStep.EngVal = 10;
WhlImbRejctnMaxMgnFltRcvryNegStep.EngMin = 0;
WhlImbRejctnMaxMgnFltRcvryNegStep.EngMax = 200;
WhlImbRejctnMaxMgnFltRcvryNegStep.Cardinality = 'Inin';
WhlImbRejctnMaxMgnFltRcvryNegStep.CustomerVisible = false;
WhlImbRejctnMaxMgnFltRcvryNegStep.Online = true;
WhlImbRejctnMaxMgnFltRcvryNegStep.Impact = 'M';
WhlImbRejctnMaxMgnFltRcvryNegStep.TuningOwner = 'CSE';
WhlImbRejctnMaxMgnFltRcvryNegStep.GraphLink = {''};
WhlImbRejctnMaxMgnFltRcvryNegStep.Monotony = 'None';
WhlImbRejctnMaxMgnFltRcvryNegStep.MaxGrad = 998;
WhlImbRejctnMaxMgnFltRcvryNegStep.PortName = 'WhlImbRejctnMaxMgnFltRcvryNegStep';


WhlImbRejctnMaxMgnFltRcvryPosStep = DataDict.Calibration;
WhlImbRejctnMaxMgnFltRcvryPosStep.LongName = 'Maximum Magnitude Fault Recovery Positive Step';
WhlImbRejctnMaxMgnFltRcvryPosStep.Description = [...
  'Calibratable threshold for Max magnitude fault recovery step size towa' ...
  'rds failed.'];
WhlImbRejctnMaxMgnFltRcvryPosStep.DocUnits = 'Uls';
WhlImbRejctnMaxMgnFltRcvryPosStep.EngDT = dt.float32;
WhlImbRejctnMaxMgnFltRcvryPosStep.EngVal = 10;
WhlImbRejctnMaxMgnFltRcvryPosStep.EngMin = 0;
WhlImbRejctnMaxMgnFltRcvryPosStep.EngMax = 200;
WhlImbRejctnMaxMgnFltRcvryPosStep.Cardinality = 'Inin';
WhlImbRejctnMaxMgnFltRcvryPosStep.CustomerVisible = false;
WhlImbRejctnMaxMgnFltRcvryPosStep.Online = true;
WhlImbRejctnMaxMgnFltRcvryPosStep.Impact = 'M';
WhlImbRejctnMaxMgnFltRcvryPosStep.TuningOwner = 'CSE';
WhlImbRejctnMaxMgnFltRcvryPosStep.GraphLink = {''};
WhlImbRejctnMaxMgnFltRcvryPosStep.Monotony = 'None';
WhlImbRejctnMaxMgnFltRcvryPosStep.MaxGrad = 998;
WhlImbRejctnMaxMgnFltRcvryPosStep.PortName = 'WhlImbRejctnMaxMgnFltRcvryPosStep';


WhlImbRejctnMaxMgnFltRcvryThd = DataDict.Calibration;
WhlImbRejctnMaxMgnFltRcvryThd.LongName = 'Maximum Magnitude Fault Recovery Threshold';
WhlImbRejctnMaxMgnFltRcvryThd.Description = [...
  'Calibratable threshold for Max magnitude fault recovery threshold.'];
WhlImbRejctnMaxMgnFltRcvryThd.DocUnits = 'Uls';
WhlImbRejctnMaxMgnFltRcvryThd.EngDT = dt.float32;
WhlImbRejctnMaxMgnFltRcvryThd.EngVal = 100;
WhlImbRejctnMaxMgnFltRcvryThd.EngMin = 0;
WhlImbRejctnMaxMgnFltRcvryThd.EngMax = 200;
WhlImbRejctnMaxMgnFltRcvryThd.Cardinality = 'Inin';
WhlImbRejctnMaxMgnFltRcvryThd.CustomerVisible = false;
WhlImbRejctnMaxMgnFltRcvryThd.Online = true;
WhlImbRejctnMaxMgnFltRcvryThd.Impact = 'M';
WhlImbRejctnMaxMgnFltRcvryThd.TuningOwner = 'CSE';
WhlImbRejctnMaxMgnFltRcvryThd.GraphLink = {''};
WhlImbRejctnMaxMgnFltRcvryThd.Monotony = 'None';
WhlImbRejctnMaxMgnFltRcvryThd.MaxGrad = 998;
WhlImbRejctnMaxMgnFltRcvryThd.PortName = 'WhlImbRejctnMaxMgnFltRcvryThd';


WhlImbRejctnMaxMgnFltThd = DataDict.Calibration;
WhlImbRejctnMaxMgnFltThd.LongName = 'Maximum Magnitude Fault Threshold';
WhlImbRejctnMaxMgnFltThd.Description = [...
  'Calibratable threshold for Max magnitude fault threshold.'];
WhlImbRejctnMaxMgnFltThd.DocUnits = 'Uls';
WhlImbRejctnMaxMgnFltThd.EngDT = dt.float32;
WhlImbRejctnMaxMgnFltThd.EngVal = 100;
WhlImbRejctnMaxMgnFltThd.EngMin = 0;
WhlImbRejctnMaxMgnFltThd.EngMax = 200;
WhlImbRejctnMaxMgnFltThd.Cardinality = 'Inin';
WhlImbRejctnMaxMgnFltThd.CustomerVisible = false;
WhlImbRejctnMaxMgnFltThd.Online = true;
WhlImbRejctnMaxMgnFltThd.Impact = 'M';
WhlImbRejctnMaxMgnFltThd.TuningOwner = 'CSE';
WhlImbRejctnMaxMgnFltThd.GraphLink = {''};
WhlImbRejctnMaxMgnFltThd.Monotony = 'None';
WhlImbRejctnMaxMgnFltThd.MaxGrad = 998;
WhlImbRejctnMaxMgnFltThd.PortName = 'WhlImbRejctnMaxMgnFltThd';


WhlImbRejctnMgnEstimnDeltaSca = DataDict.Calibration;
WhlImbRejctnMgnEstimnDeltaSca.LongName = 'Magnitude Estimation Delta Scale';
WhlImbRejctnMgnEstimnDeltaSca.Description = [...
  'Controls rate of learning of an increase in disturbance magnitude. Hig' ...
  'her value to learn faster.'];
WhlImbRejctnMgnEstimnDeltaSca.DocUnits = 'Uls';
WhlImbRejctnMgnEstimnDeltaSca.EngDT = dt.float32;
WhlImbRejctnMgnEstimnDeltaSca.EngVal = 0.0005;
WhlImbRejctnMgnEstimnDeltaSca.EngMin = 0;
WhlImbRejctnMgnEstimnDeltaSca.EngMax = 1;
WhlImbRejctnMgnEstimnDeltaSca.Cardinality = 'Inin';
WhlImbRejctnMgnEstimnDeltaSca.CustomerVisible = false;
WhlImbRejctnMgnEstimnDeltaSca.Online = true;
WhlImbRejctnMgnEstimnDeltaSca.Impact = 'M';
WhlImbRejctnMgnEstimnDeltaSca.TuningOwner = 'CSE';
WhlImbRejctnMgnEstimnDeltaSca.GraphLink = {''};
WhlImbRejctnMgnEstimnDeltaSca.Monotony = 'None';
WhlImbRejctnMgnEstimnDeltaSca.MaxGrad = 998;
WhlImbRejctnMgnEstimnDeltaSca.PortName = 'WhlImbRejctnMgnEstimnDeltaSca';


WhlImbRejctnMgnEstimnDiThd = DataDict.Calibration;
WhlImbRejctnMgnEstimnDiThd.LongName = 'Magnitude Estimation Disable Threshold';
WhlImbRejctnMgnEstimnDiThd.Description = [...
  'WIR function is disabled when measured disturbance falls below this va' ...
  'lue.'];
WhlImbRejctnMgnEstimnDiThd.DocUnits = 'Uls';
WhlImbRejctnMgnEstimnDiThd.EngDT = dt.float32;
WhlImbRejctnMgnEstimnDiThd.EngVal = 0.209;
WhlImbRejctnMgnEstimnDiThd.EngMin = 0;
WhlImbRejctnMgnEstimnDiThd.EngMax = 127;
WhlImbRejctnMgnEstimnDiThd.Cardinality = 'Inin';
WhlImbRejctnMgnEstimnDiThd.CustomerVisible = false;
WhlImbRejctnMgnEstimnDiThd.Online = true;
WhlImbRejctnMgnEstimnDiThd.Impact = 'M';
WhlImbRejctnMgnEstimnDiThd.TuningOwner = 'CSE';
WhlImbRejctnMgnEstimnDiThd.GraphLink = {''};
WhlImbRejctnMgnEstimnDiThd.Monotony = 'None';
WhlImbRejctnMgnEstimnDiThd.MaxGrad = 998;
WhlImbRejctnMgnEstimnDiThd.PortName = 'WhlImbRejctnMgnEstimnDiThd';


WhlImbRejctnMgnEstimnEnaThd = DataDict.Calibration;
WhlImbRejctnMgnEstimnEnaThd.LongName = 'Magnitude Estimation Enable Threshold';
WhlImbRejctnMgnEstimnEnaThd.Description = [...
  'WIR Function is enabled when measured disturbance exceeds this value.'];
WhlImbRejctnMgnEstimnEnaThd.DocUnits = 'Uls';
WhlImbRejctnMgnEstimnEnaThd.EngDT = dt.float32;
WhlImbRejctnMgnEstimnEnaThd.EngVal = 0.21;
WhlImbRejctnMgnEstimnEnaThd.EngMin = 0;
WhlImbRejctnMgnEstimnEnaThd.EngMax = 127;
WhlImbRejctnMgnEstimnEnaThd.Cardinality = 'Inin';
WhlImbRejctnMgnEstimnEnaThd.CustomerVisible = false;
WhlImbRejctnMgnEstimnEnaThd.Online = true;
WhlImbRejctnMgnEstimnEnaThd.Impact = 'M';
WhlImbRejctnMgnEstimnEnaThd.TuningOwner = 'CSE';
WhlImbRejctnMgnEstimnEnaThd.GraphLink = {''};
WhlImbRejctnMgnEstimnEnaThd.Monotony = 'None';
WhlImbRejctnMgnEstimnEnaThd.MaxGrad = 998;
WhlImbRejctnMgnEstimnEnaThd.PortName = 'WhlImbRejctnMgnEstimnEnaThd';


WhlImbRejctnMgnEstimnFrq = DataDict.Calibration;
WhlImbRejctnMgnEstimnFrq.LongName = 'Magnitude Estimation Frequency';
WhlImbRejctnMgnEstimnFrq.Description = [...
  'Center frequency of range over which to estimate disturbance magnitude' ...
  '.'];
WhlImbRejctnMgnEstimnFrq.DocUnits = 'Hz';
WhlImbRejctnMgnEstimnFrq.EngDT = dt.float32;
WhlImbRejctnMgnEstimnFrq.EngVal = 14;
WhlImbRejctnMgnEstimnFrq.EngMin = 0.001;
WhlImbRejctnMgnEstimnFrq.EngMax = 40;
WhlImbRejctnMgnEstimnFrq.Cardinality = 'Inin';
WhlImbRejctnMgnEstimnFrq.CustomerVisible = false;
WhlImbRejctnMgnEstimnFrq.Online = true;
WhlImbRejctnMgnEstimnFrq.Impact = 'M';
WhlImbRejctnMgnEstimnFrq.TuningOwner = 'CSE';
WhlImbRejctnMgnEstimnFrq.GraphLink = {''};
WhlImbRejctnMgnEstimnFrq.Monotony = 'None';
WhlImbRejctnMgnEstimnFrq.MaxGrad = 998;
WhlImbRejctnMgnEstimnFrq.PortName = 'WhlImbRejctnMgnEstimnFrq';


WhlImbRejctnMgnEstimnFrqDelta = DataDict.Calibration;
WhlImbRejctnMgnEstimnFrqDelta.LongName = 'Magnitude Estimation Frequency Delta';
WhlImbRejctnMgnEstimnFrqDelta.Description = [...
  'Frequency range over which to estimate disturbance magnitude.'];
WhlImbRejctnMgnEstimnFrqDelta.DocUnits = 'Hz';
WhlImbRejctnMgnEstimnFrqDelta.EngDT = dt.float32;
WhlImbRejctnMgnEstimnFrqDelta.EngVal = 4;
WhlImbRejctnMgnEstimnFrqDelta.EngMin = 0.001;
WhlImbRejctnMgnEstimnFrqDelta.EngMax = 40;
WhlImbRejctnMgnEstimnFrqDelta.Cardinality = 'Inin';
WhlImbRejctnMgnEstimnFrqDelta.CustomerVisible = false;
WhlImbRejctnMgnEstimnFrqDelta.Online = true;
WhlImbRejctnMgnEstimnFrqDelta.Impact = 'M';
WhlImbRejctnMgnEstimnFrqDelta.TuningOwner = 'CSE';
WhlImbRejctnMgnEstimnFrqDelta.GraphLink = {''};
WhlImbRejctnMgnEstimnFrqDelta.Monotony = 'None';
WhlImbRejctnMgnEstimnFrqDelta.MaxGrad = 998;
WhlImbRejctnMgnEstimnFrqDelta.PortName = 'WhlImbRejctnMgnEstimnFrqDelta';


WhlImbRejctnMgnEstimnLeak = DataDict.Calibration;
WhlImbRejctnMgnEstimnLeak.LongName = 'Magnitude Estimation Leak';
WhlImbRejctnMgnEstimnLeak.Description = [...
  'Controls rate of learning a decrease in disturbance magnitude. Values ' ...
  'less than 1 and further from 1 learn faster.'];
WhlImbRejctnMgnEstimnLeak.DocUnits = 'Uls';
WhlImbRejctnMgnEstimnLeak.EngDT = dt.float32;
WhlImbRejctnMgnEstimnLeak.EngVal = 1;
WhlImbRejctnMgnEstimnLeak.EngMin = 0;
WhlImbRejctnMgnEstimnLeak.EngMax = 1;
WhlImbRejctnMgnEstimnLeak.Cardinality = 'Inin';
WhlImbRejctnMgnEstimnLeak.CustomerVisible = false;
WhlImbRejctnMgnEstimnLeak.Online = true;
WhlImbRejctnMgnEstimnLeak.Impact = 'M';
WhlImbRejctnMgnEstimnLeak.TuningOwner = 'CSE';
WhlImbRejctnMgnEstimnLeak.GraphLink = {''};
WhlImbRejctnMgnEstimnLeak.Monotony = 'None';
WhlImbRejctnMgnEstimnLeak.MaxGrad = 998;
WhlImbRejctnMgnEstimnLeak.PortName = 'WhlImbRejctnMgnEstimnLeak';


WhlImbRejctnPhaAdjX = DataDict.Calibration;
WhlImbRejctnPhaAdjX.LongName = 'Phase Adjust X';
WhlImbRejctnPhaAdjX.Description = [...
  'Phase Adjust Table, provides compensation phase adjustment based on wh' ...
  'eel frequency.'];
WhlImbRejctnPhaAdjX.DocUnits = 'Hz';
WhlImbRejctnPhaAdjX.EngDT = dt.u7p9;
WhlImbRejctnPhaAdjX.EngVal =  ...
   [10               20               30];
WhlImbRejctnPhaAdjX.EngMin = 5;
WhlImbRejctnPhaAdjX.EngMax = 40;
WhlImbRejctnPhaAdjX.Cardinality = 'Inin';
WhlImbRejctnPhaAdjX.CustomerVisible = false;
WhlImbRejctnPhaAdjX.Online = true;
WhlImbRejctnPhaAdjX.Impact = 'H';
WhlImbRejctnPhaAdjX.TuningOwner = 'CSE';
WhlImbRejctnPhaAdjX.GraphLink = {''};
WhlImbRejctnPhaAdjX.Monotony = 'Strictly_Increasing';
WhlImbRejctnPhaAdjX.MaxGrad = 998;
WhlImbRejctnPhaAdjX.PortName = 'WhlImbRejctnPhaAdjX';


WhlImbRejctnPhaAdjY = DataDict.Calibration;
WhlImbRejctnPhaAdjY.LongName = 'Phase Adjust Y';
WhlImbRejctnPhaAdjY.Description = [...
  'Phase Adjust Table, provides compensation phase adjustment based on wh' ...
  'eel frequency.'];
WhlImbRejctnPhaAdjY.DocUnits = 'HwDeg';
WhlImbRejctnPhaAdjY.EngDT = dt.s8p7;
WhlImbRejctnPhaAdjY.EngVal =  ...
   [135              120              120];
WhlImbRejctnPhaAdjY.EngMin = -180;
WhlImbRejctnPhaAdjY.EngMax = 180;
WhlImbRejctnPhaAdjY.Cardinality = 'Inin';
WhlImbRejctnPhaAdjY.CustomerVisible = false;
WhlImbRejctnPhaAdjY.Online = true;
WhlImbRejctnPhaAdjY.Impact = 'H';
WhlImbRejctnPhaAdjY.TuningOwner = 'CSE';
WhlImbRejctnPhaAdjY.GraphLink = {'WhlImbRejctnPhaAdjX'};
WhlImbRejctnPhaAdjY.Monotony = 'None';
WhlImbRejctnPhaAdjY.MaxGrad = 998;
WhlImbRejctnPhaAdjY.PortName = 'WhlImbRejctnPhaAdjY';


WhlImbRejctnRampDwnTi = DataDict.Calibration;
WhlImbRejctnRampDwnTi.LongName = 'Ramp Down Time';
WhlImbRejctnRampDwnTi.Description = [...
  'Time in ms in which to ramp down the enable command when a WIR fault b' ...
  'ecomes present.'];
WhlImbRejctnRampDwnTi.DocUnits = 'MilliSec';
WhlImbRejctnRampDwnTi.EngDT = dt.u16p0;
WhlImbRejctnRampDwnTi.EngVal = 2000;
WhlImbRejctnRampDwnTi.EngMin = 8;
WhlImbRejctnRampDwnTi.EngMax = 5000;
WhlImbRejctnRampDwnTi.Cardinality = 'Cmn';
WhlImbRejctnRampDwnTi.CustomerVisible = false;
WhlImbRejctnRampDwnTi.Online = true;
WhlImbRejctnRampDwnTi.Impact = 'M';
WhlImbRejctnRampDwnTi.TuningOwner = 'CSE';
WhlImbRejctnRampDwnTi.GraphLink = {''};
WhlImbRejctnRampDwnTi.Monotony = 'None';
WhlImbRejctnRampDwnTi.MaxGrad = 998;
WhlImbRejctnRampDwnTi.PortName = 'WhlImbRejctnRampDwnTi';


WhlImbRejctnScaCncl = DataDict.Calibration;
WhlImbRejctnScaCncl.LongName = 'Scale Cancel';
WhlImbRejctnScaCncl.Description = 'Scale on output of WIR Cmd.';
WhlImbRejctnScaCncl.DocUnits = 'Uls';
WhlImbRejctnScaCncl.EngDT = dt.float32;
WhlImbRejctnScaCncl.EngVal = 0.1;
WhlImbRejctnScaCncl.EngMin = -2;
WhlImbRejctnScaCncl.EngMax = 2;
WhlImbRejctnScaCncl.Cardinality = 'Cmn';
WhlImbRejctnScaCncl.CustomerVisible = false;
WhlImbRejctnScaCncl.Online = true;
WhlImbRejctnScaCncl.Impact = 'H';
WhlImbRejctnScaCncl.TuningOwner = 'CSE';
WhlImbRejctnScaCncl.GraphLink = {''};
WhlImbRejctnScaCncl.Monotony = 'None';
WhlImbRejctnScaCncl.MaxGrad = 998;
WhlImbRejctnScaCncl.PortName = 'WhlImbRejctnScaCncl';


WhlImbRejctnUgrPoleMgn = DataDict.Calibration;
WhlImbRejctnUgrPoleMgn.LongName = 'UGR Pole Magnitude';
WhlImbRejctnUgrPoleMgn.Description = [...
  'UGR Filter Pole Magnitude – controls how “peaky” filter acts.'];
WhlImbRejctnUgrPoleMgn.DocUnits = 'Uls';
WhlImbRejctnUgrPoleMgn.EngDT = dt.float32;
WhlImbRejctnUgrPoleMgn.EngVal = 1;
WhlImbRejctnUgrPoleMgn.EngMin = 0;
WhlImbRejctnUgrPoleMgn.EngMax = 1;
WhlImbRejctnUgrPoleMgn.Cardinality = 'Cmn';
WhlImbRejctnUgrPoleMgn.CustomerVisible = false;
WhlImbRejctnUgrPoleMgn.Online = true;
WhlImbRejctnUgrPoleMgn.Impact = 'M';
WhlImbRejctnUgrPoleMgn.TuningOwner = 'CSE';
WhlImbRejctnUgrPoleMgn.GraphLink = {''};
WhlImbRejctnUgrPoleMgn.Monotony = 'None';
WhlImbRejctnUgrPoleMgn.MaxGrad = 998;
WhlImbRejctnUgrPoleMgn.PortName = 'WhlImbRejctnUgrPoleMgn';


WhlImbRejctnVehSpdEna = DataDict.Calibration;
WhlImbRejctnVehSpdEna.LongName = 'Vehicle Speed Enable';
WhlImbRejctnVehSpdEna.Description = [...
  'WIR Function is disabled when vehicle speed is below this value.'];
WhlImbRejctnVehSpdEna.DocUnits = 'Kph';
WhlImbRejctnVehSpdEna.EngDT = dt.float32;
WhlImbRejctnVehSpdEna.EngVal = 0;
WhlImbRejctnVehSpdEna.EngMin = 0;
WhlImbRejctnVehSpdEna.EngMax = 511;
WhlImbRejctnVehSpdEna.Cardinality = 'Inin';
WhlImbRejctnVehSpdEna.CustomerVisible = false;
WhlImbRejctnVehSpdEna.Online = true;
WhlImbRejctnVehSpdEna.Impact = 'M';
WhlImbRejctnVehSpdEna.TuningOwner = 'CSE';
WhlImbRejctnVehSpdEna.GraphLink = {''};
WhlImbRejctnVehSpdEna.Monotony = 'None';
WhlImbRejctnVehSpdEna.MaxGrad = 998;
WhlImbRejctnVehSpdEna.PortName = 'WhlImbRejctnVehSpdEna';


WhlImbRejctnWhlSpdCorrlnFltRcvryDly = DataDict.Calibration;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.LongName = 'Wheel Speed Correlation Fault Recovery Delay';
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.Description = [...
  'Time delay before fault recovery is attempted.'];
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.DocUnits = 'Mins';
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.EngDT = dt.float32;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.EngVal = 5;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.EngMin = 0;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.EngMax = 255;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.Cardinality = 'Cmn';
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.CustomerVisible = false;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.Online = true;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.Impact = 'M';
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.TuningOwner = 'CSE';
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.GraphLink = {''};
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.Monotony = 'None';
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.MaxGrad = 998;
WhlImbRejctnWhlSpdCorrlnFltRcvryDly.PortName = 'WhlImbRejctnWhlSpdCorrlnFltRcvryDly';


WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep = DataDict.Calibration;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.LongName = 'Wheel Speed Correlation Fault Recovery Negative Step';
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.Description = [...
  'Calibratable threshold for Wheel Speed Correlation fault recovery step' ...
  ' size towards passed.'];
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.DocUnits = 'Uls';
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.EngDT = dt.float32;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.EngVal = 10;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.EngMin = 0;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.EngMax = 200;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.Cardinality = 'Inin';
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.CustomerVisible = false;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.Online = true;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.Impact = 'M';
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.TuningOwner = 'CSE';
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.GraphLink = {''};
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.Monotony = 'None';
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.MaxGrad = 998;
WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep.PortName = 'WhlImbRejctnWhlSpdCorrlnFltRcvryNegStep';


WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep = DataDict.Calibration;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.LongName = 'Wheel Speed Correlation Fault Recovery Positive Step';
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.Description = [...
  'Calibratable threshold for Wheel Speed Correlation fault recovery step' ...
  ' size towards failed.'];
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.DocUnits = 'Uls';
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.EngDT = dt.float32;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.EngVal = 10;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.EngMin = 0;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.EngMax = 200;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.Cardinality = 'Inin';
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.CustomerVisible = false;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.Online = true;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.Impact = 'M';
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.TuningOwner = 'CSE';
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.GraphLink = {''};
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.Monotony = 'None';
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.MaxGrad = 998;
WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep.PortName = 'WhlImbRejctnWhlSpdCorrlnFltRcvryPosStep';


WhlImbRejctnWhlSpdCorrlnFltRcvryThd = DataDict.Calibration;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.LongName = 'Wheel Speed Correlation Fault Recovery Threshold';
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.Description = [...
  'Calibratable threshold for Wheel Speed Correlation fault recovery thre' ...
  'shold.'];
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.DocUnits = 'Uls';
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.EngDT = dt.float32;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.EngVal = 100;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.EngMin = 0;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.EngMax = 200;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.Cardinality = 'Inin';
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.CustomerVisible = false;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.Online = true;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.Impact = 'M';
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.TuningOwner = 'CSE';
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.GraphLink = {''};
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.Monotony = 'None';
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.MaxGrad = 998;
WhlImbRejctnWhlSpdCorrlnFltRcvryThd.PortName = 'WhlImbRejctnWhlSpdCorrlnFltRcvryThd';


WhlImbRejctnWhlSpdCorrlnThd = DataDict.Calibration;
WhlImbRejctnWhlSpdCorrlnThd.LongName = 'Wheel Speed Correlation Threshold';
WhlImbRejctnWhlSpdCorrlnThd.Description = [...
  '(*** The code is actually producting a 0-100 value, but that the funct' ...
  'ion should be reworked as a 0-1 Uls for consistency with other functio' ...
  'ns. ***) Minimum Correlation Percent allowed between L and R wheel fre' ...
  'quencies.'];
WhlImbRejctnWhlSpdCorrlnThd.DocUnits = 'Uls';
WhlImbRejctnWhlSpdCorrlnThd.EngDT = dt.float32;
WhlImbRejctnWhlSpdCorrlnThd.EngVal = 90;
WhlImbRejctnWhlSpdCorrlnThd.EngMin = 5;
WhlImbRejctnWhlSpdCorrlnThd.EngMax = 100;
WhlImbRejctnWhlSpdCorrlnThd.Cardinality = 'Inin';
WhlImbRejctnWhlSpdCorrlnThd.CustomerVisible = false;
WhlImbRejctnWhlSpdCorrlnThd.Online = true;
WhlImbRejctnWhlSpdCorrlnThd.Impact = 'M';
WhlImbRejctnWhlSpdCorrlnThd.TuningOwner = 'CSE';
WhlImbRejctnWhlSpdCorrlnThd.GraphLink = {''};
WhlImbRejctnWhlSpdCorrlnThd.Monotony = 'None';
WhlImbRejctnWhlSpdCorrlnThd.MaxGrad = 998;
WhlImbRejctnWhlSpdCorrlnThd.PortName = 'WhlImbRejctnWhlSpdCorrlnThd';


WhlImbRejctnWhlSpdCorrlnTi = DataDict.Calibration;
WhlImbRejctnWhlSpdCorrlnTi.LongName = 'Wheel Speed Correlation Time';
WhlImbRejctnWhlSpdCorrlnTi.Description = [...
  'Time below threshold after which diagniostic will trip.'];
WhlImbRejctnWhlSpdCorrlnTi.DocUnits = 'MilliSec';
WhlImbRejctnWhlSpdCorrlnTi.EngDT = dt.u16p0;
WhlImbRejctnWhlSpdCorrlnTi.EngVal = 500;
WhlImbRejctnWhlSpdCorrlnTi.EngMin = 0;
WhlImbRejctnWhlSpdCorrlnTi.EngMax = 65500;
WhlImbRejctnWhlSpdCorrlnTi.Cardinality = 'Inin';
WhlImbRejctnWhlSpdCorrlnTi.CustomerVisible = false;
WhlImbRejctnWhlSpdCorrlnTi.Online = true;
WhlImbRejctnWhlSpdCorrlnTi.Impact = 'M';
WhlImbRejctnWhlSpdCorrlnTi.TuningOwner = 'CSE';
WhlImbRejctnWhlSpdCorrlnTi.GraphLink = {''};
WhlImbRejctnWhlSpdCorrlnTi.Monotony = 'None';
WhlImbRejctnWhlSpdCorrlnTi.MaxGrad = 998;
WhlImbRejctnWhlSpdCorrlnTi.PortName = 'WhlImbRejctnWhlSpdCorrlnTi';


WhlImbRejctnWhlSpdLpFil = DataDict.Calibration;
WhlImbRejctnWhlSpdLpFil.LongName = 'Wheel Speed Low Pass Filter';
WhlImbRejctnWhlSpdLpFil.Description = [...
  'Filter Coefficent for LPF on incoming wheel frequency.'];
WhlImbRejctnWhlSpdLpFil.DocUnits = 'Hz';
WhlImbRejctnWhlSpdLpFil.EngDT = dt.float32;
WhlImbRejctnWhlSpdLpFil.EngVal = 3;
WhlImbRejctnWhlSpdLpFil.EngMin = 0.1;
WhlImbRejctnWhlSpdLpFil.EngMax = 100;
WhlImbRejctnWhlSpdLpFil.Cardinality = 'Inin';
WhlImbRejctnWhlSpdLpFil.CustomerVisible = false;
WhlImbRejctnWhlSpdLpFil.Online = false;
WhlImbRejctnWhlSpdLpFil.Impact = 'M';
WhlImbRejctnWhlSpdLpFil.TuningOwner = 'CSE';
WhlImbRejctnWhlSpdLpFil.GraphLink = {''};
WhlImbRejctnWhlSpdLpFil.Monotony = 'None';
WhlImbRejctnWhlSpdLpFil.MaxGrad = 998;
WhlImbRejctnWhlSpdLpFil.PortName = 'WhlImbRejctnWhlSpdLpFil';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
CmpPeakData = DataDict.NVM;
CmpPeakData.LongName = 'Wheel Imbalance Rejection Data';
CmpPeakData.Description = [...
  'Active, Max Compenstation Data and Peak Values.'];
CmpPeakData.DocUnits = 'Uls';
CmpPeakData.EngDT = struct.WhlImbRejctnCmpPeakRec1;
CmpPeakData.EngInit = [struct('LePeakPrev',0,'RiPeakPrev',0,'MaxCompPerc',0,'ActvCmpBand1',0,'ActvCmpBand2',0,'ActvCmpBand3',0)];
CmpPeakData.EngMin = [struct('LePeakPrev',0,'RiPeakPrev',0,'MaxCompPerc',0,'ActvCmpBand1',0,'ActvCmpBand2',0,'ActvCmpBand3',0)];
CmpPeakData.EngMax = [struct('LePeakPrev',127,'RiPeakPrev',127,'MaxCompPerc',1,'ActvCmpBand1',4294967294,'ActvCmpBand2',4294967294,'ActvCmpBand3',4294967294)];
CmpPeakData.CustomerVisible = false;
CmpPeakData.Impact = 'H';
CmpPeakData.TuningOwner = 'CSE';
CmpPeakData.CoderInfo.Alias = 'CmpPeakData';
CmpPeakData.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dWhlImbRejctnCnclTqOutp = DataDict.Display;
dWhlImbRejctnCnclTqOutp.LongName = 'Cancel Torque Output';
dWhlImbRejctnCnclTqOutp.Description = [...
  'WIR cancellation torque command, before limiting to k_WhlImbCmdMax.'];
dWhlImbRejctnCnclTqOutp.DocUnits = 'MotNwtMtr';
dWhlImbRejctnCnclTqOutp.EngDT = dt.float32;
dWhlImbRejctnCnclTqOutp.EngMin = -8.8;
dWhlImbRejctnCnclTqOutp.EngMax = 8.8;
dWhlImbRejctnCnclTqOutp.InitRowCol = [1  1];


dWhlImbRejctnCurrMgnLe = DataDict.Display;
dWhlImbRejctnCurrMgnLe.LongName = 'Current Magnitude Left';
dWhlImbRejctnCurrMgnLe.Description = [...
  'Current (existing) magnitude of disturbance (left side), usde to gener' ...
  'ate autoscale factor.'];
dWhlImbRejctnCurrMgnLe.DocUnits = 'Uls';
dWhlImbRejctnCurrMgnLe.EngDT = dt.float32;
dWhlImbRejctnCurrMgnLe.EngMin = 0;
dWhlImbRejctnCurrMgnLe.EngMax = 127;
dWhlImbRejctnCurrMgnLe.InitRowCol = [1  1];


dWhlImbRejctnCurrMgnRi = DataDict.Display;
dWhlImbRejctnCurrMgnRi.LongName = 'Current Magnitude Right';
dWhlImbRejctnCurrMgnRi.Description = [...
  'Current (existing) magnitude of disturbance (right side), usde to gene' ...
  'rate autoscale factor.'];
dWhlImbRejctnCurrMgnRi.DocUnits = 'Uls';
dWhlImbRejctnCurrMgnRi.EngDT = dt.float32;
dWhlImbRejctnCurrMgnRi.EngMin = 0;
dWhlImbRejctnCurrMgnRi.EngMax = 127;
dWhlImbRejctnCurrMgnRi.InitRowCol = [1  1];


dWhlImbRejctnFildWhlSpdLe = DataDict.Display;
dWhlImbRejctnFildWhlSpdLe.LongName = 'Filtered Wheel Speed Left';
dWhlImbRejctnFildWhlSpdLe.Description = [...
  'Wheel speed (left side) without DC content, before scaling'];
dWhlImbRejctnFildWhlSpdLe.DocUnits = 'MotRadPerSec';
dWhlImbRejctnFildWhlSpdLe.EngDT = dt.float32;
dWhlImbRejctnFildWhlSpdLe.EngMin = 0;
dWhlImbRejctnFildWhlSpdLe.EngMax = 127;
dWhlImbRejctnFildWhlSpdLe.InitRowCol = [1  1];


dWhlImbRejctnFildWhlSpdRi = DataDict.Display;
dWhlImbRejctnFildWhlSpdRi.LongName = 'Filtered Wheel Speed Right';
dWhlImbRejctnFildWhlSpdRi.Description = [...
  'Wheel speed (right side) without DC content, before scaling'];
dWhlImbRejctnFildWhlSpdRi.DocUnits = 'MotRadPerSec';
dWhlImbRejctnFildWhlSpdRi.EngDT = dt.float32;
dWhlImbRejctnFildWhlSpdRi.EngMin = 0;
dWhlImbRejctnFildWhlSpdRi.EngMax = 127;
dWhlImbRejctnFildWhlSpdRi.InitRowCol = [1  1];


dWhlImbRejctnLMSqdOutLe = DataDict.Display;
dWhlImbRejctnLMSqdOutLe.LongName = 'Least Mean Squared Out Left';
dWhlImbRejctnLMSqdOutLe.Description = [...
  'Output of least mean squared adaptive filter (left side)'];
dWhlImbRejctnLMSqdOutLe.DocUnits = 'Uls';
dWhlImbRejctnLMSqdOutLe.EngDT = dt.float32;
dWhlImbRejctnLMSqdOutLe.EngMin = -2048;
dWhlImbRejctnLMSqdOutLe.EngMax = 2048;
dWhlImbRejctnLMSqdOutLe.InitRowCol = [1  1];


dWhlImbRejctnLMSqdOutRi = DataDict.Display;
dWhlImbRejctnLMSqdOutRi.LongName = 'Least Mean Squared Out Right';
dWhlImbRejctnLMSqdOutRi.Description = [...
  'Output of least mean squared adaptive filter (right side)'];
dWhlImbRejctnLMSqdOutRi.DocUnits = 'Uls';
dWhlImbRejctnLMSqdOutRi.EngDT = dt.float32;
dWhlImbRejctnLMSqdOutRi.EngMin = -2048;
dWhlImbRejctnLMSqdOutRi.EngMax = 2048;
dWhlImbRejctnLMSqdOutRi.InitRowCol = [1  1];


dWhlImbRejctnScaLe = DataDict.Display;
dWhlImbRejctnScaLe.LongName = 'Scale Left';
dWhlImbRejctnScaLe.Description = [...
  'Scale factor applied to wheel speed (left side)'];
dWhlImbRejctnScaLe.DocUnits = 'Uls';
dWhlImbRejctnScaLe.EngDT = dt.float32;
dWhlImbRejctnScaLe.EngMin = 0;
dWhlImbRejctnScaLe.EngMax = 1;
dWhlImbRejctnScaLe.InitRowCol = [1  1];


dWhlImbRejctnScaRi = DataDict.Display;
dWhlImbRejctnScaRi.LongName = 'Scale Right';
dWhlImbRejctnScaRi.Description = [...
  'Scale factor applied to wheel speed (right side)'];
dWhlImbRejctnScaRi.DocUnits = 'Uls';
dWhlImbRejctnScaRi.EngDT = dt.float32;
dWhlImbRejctnScaRi.EngMin = 0;
dWhlImbRejctnScaRi.EngMax = 1;
dWhlImbRejctnScaRi.InitRowCol = [1  1];


dWhlImbRejctnWhlSpdCorrPerc = DataDict.Display;
dWhlImbRejctnWhlSpdCorrPerc.LongName = 'Wheel Speed Correct Percent';
dWhlImbRejctnWhlSpdCorrPerc.Description = [...
  '(*** The code is actually producting a 0-100 value, but that the funct' ...
  'ion should be reworked as a 0-1 Uls for consistency with other functio' ...
  'ns. ***  Wheel speed correlation diagnostic represents one wheel speed' ...
  ' divided by the other.)'];
dWhlImbRejctnWhlSpdCorrPerc.DocUnits = 'Uls';
dWhlImbRejctnWhlSpdCorrPerc.EngDT = dt.float32;
dWhlImbRejctnWhlSpdCorrPerc.EngMin = 0;
dWhlImbRejctnWhlSpdCorrPerc.EngMax = 100;
dWhlImbRejctnWhlSpdCorrPerc.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
BlndCmdMgnLp1Fil = DataDict.PIM;
BlndCmdMgnLp1Fil.LongName = 'Blend Command Magnitude Lowpass Filter 1';
BlndCmdMgnLp1Fil.Description = [...
  '1st Lowpass Filter Frequency of the Blend command magnitude'];
BlndCmdMgnLp1Fil.DocUnits = 'Hz';
BlndCmdMgnLp1Fil.EngDT = struct.FilLpRec1;
BlndCmdMgnLp1Fil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
BlndCmdMgnLp1Fil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
BlndCmdMgnLp1Fil.InitRowCol = [1  1];


BlndCmdMgnLp2Fil = DataDict.PIM;
BlndCmdMgnLp2Fil.LongName = 'Blend Command Magnitude Lowpass Filter 2';
BlndCmdMgnLp2Fil.Description = [...
  '2nd Lowpass Filter Frequency of the Blend command magnitude'];
BlndCmdMgnLp2Fil.DocUnits = 'Hz';
BlndCmdMgnLp2Fil.EngDT = struct.FilLpRec1;
BlndCmdMgnLp2Fil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
BlndCmdMgnLp2Fil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
BlndCmdMgnLp2Fil.InitRowCol = [1  1];


CmdMgnLp1Fil = DataDict.PIM;
CmdMgnLp1Fil.LongName = 'Command Magnitude Lowpass Filter 1';
CmdMgnLp1Fil.Description = [...
  '1st Lowpass Filter Frequency of the command magnitude diagnostics'];
CmdMgnLp1Fil.DocUnits = 'Hz';
CmdMgnLp1Fil.EngDT = struct.FilLpRec1;
CmdMgnLp1Fil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
CmdMgnLp1Fil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
CmdMgnLp1Fil.InitRowCol = [1  1];


CmdMgnLp2Fil = DataDict.PIM;
CmdMgnLp2Fil.LongName = 'Command Magnitude Lowpass Filter 2';
CmdMgnLp2Fil.Description = [...
  '2nd Lowpass Filter Frequency of the command magnitude diagnostics'];
CmdMgnLp2Fil.DocUnits = 'Hz';
CmdMgnLp2Fil.EngDT = struct.FilLpRec1;
CmdMgnLp2Fil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
CmdMgnLp2Fil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
CmdMgnLp2Fil.InitRowCol = [1  1];


DcTrendFltFaild = DataDict.PIM;
DcTrendFltFaild.LongName = 'DC Trend Fault Failed';
DcTrendFltFaild.Description = [...
  'DC Trend Diagnostic Fault Failed for setting RampNo to 1'];
DcTrendFltFaild.DocUnits = 'Cnt';
DcTrendFltFaild.EngDT = dt.lgc;
DcTrendFltFaild.EngMin = 0;
DcTrendFltFaild.EngMax = 1;
DcTrendFltFaild.InitRowCol = [1  1];


DcTrendFltRcvry = DataDict.PIM;
DcTrendFltRcvry.LongName = 'DC Trend Fault Recovery';
DcTrendFltRcvry.Description = [...
  'Struct variable corresponding to DC trend fault recovery'];
DcTrendFltRcvry.DocUnits = 'Cnt';
DcTrendFltRcvry.EngDT = struct.PassFailCntrDiagcRec1;
DcTrendFltRcvry.EngMin = [struct('Cntr',0,'Thd',0,'NegStep',0,'PosStep',0,'Sts',SigQlfr1.SIGQLFR_NORES)];
DcTrendFltRcvry.EngMax = [struct('Cntr',1e+10,'Thd',1e+10,'NegStep',1e+10,'PosStep',1e+10,'Sts',SigQlfr1.SIGQLFR_FAILD)];
DcTrendFltRcvry.InitRowCol = [1  1];


DcTrendFltRst = DataDict.PIM;
DcTrendFltRst.LongName = 'DC Trend Fault Reset';
DcTrendFltRst.Description = [...
  'DC Trend Diagnostic Fault Reset for resetting RampNo to 0'];
DcTrendFltRst.DocUnits = 'Cnt';
DcTrendFltRst.EngDT = dt.lgc;
DcTrendFltRst.EngMin = 0;
DcTrendFltRst.EngMax = 1;
DcTrendFltRst.InitRowCol = [1  1];


DcTrendLpFil = DataDict.PIM;
DcTrendLpFil.LongName = 'DC Trend Lowpass Filter';
DcTrendLpFil.Description = [...
  'Lowpass Filter Frequency of the DC trend diagnostics'];
DcTrendLpFil.DocUnits = 'Hz';
DcTrendLpFil.EngDT = struct.FilLpRec1;
DcTrendLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
DcTrendLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
DcTrendLpFil.InitRowCol = [1  1];


DcTrendLrngEnaPrev = DataDict.PIM;
DcTrendLrngEnaPrev.LongName = 'DC Trend Learning Enable Previous';
DcTrendLrngEnaPrev.Description = [...
  'Previous value of fault status learned - Variable used while setting P' ...
  'refailed NTC'];
DcTrendLrngEnaPrev.DocUnits = 'Cnt';
DcTrendLrngEnaPrev.EngDT = dt.lgc;
DcTrendLrngEnaPrev.EngMin = 0;
DcTrendLrngEnaPrev.EngMax = 1;
DcTrendLrngEnaPrev.InitRowCol = [1  1];


DcTrendLrngEnaPrevTmr1 = DataDict.PIM;
DcTrendLrngEnaPrevTmr1.LongName = 'DC Trend Learning Enable Previous Timer 1';
DcTrendLrngEnaPrevTmr1.Description = [...
  'Elapsed time counter in DC trend diagnostic'];
DcTrendLrngEnaPrevTmr1.DocUnits = 'Cnt';
DcTrendLrngEnaPrevTmr1.EngDT = dt.lgc;
DcTrendLrngEnaPrevTmr1.EngMin = 0;
DcTrendLrngEnaPrevTmr1.EngMax = 1;
DcTrendLrngEnaPrevTmr1.InitRowCol = [1  1];


DcTrendLrngEnaPrevTmr2 = DataDict.PIM;
DcTrendLrngEnaPrevTmr2.LongName = 'DC Trend Learning Enable Previous Timer 2';
DcTrendLrngEnaPrevTmr2.Description = [...
  'Elapsed time counter in DC trend diagnostic'];
DcTrendLrngEnaPrevTmr2.DocUnits = 'Cnt';
DcTrendLrngEnaPrevTmr2.EngDT = dt.lgc;
DcTrendLrngEnaPrevTmr2.EngMin = 0;
DcTrendLrngEnaPrevTmr2.EngMax = 1;
DcTrendLrngEnaPrevTmr2.InitRowCol = [1  1];


DcTrendRefTiEnaLrng = DataDict.PIM;
DcTrendRefTiEnaLrng.LongName = 'DC Trend Reference Time Enable Learning';
DcTrendRefTiEnaLrng.Description = [...
  'Elapsed time counter for DC Trend fault recovery - pre failed'];
DcTrendRefTiEnaLrng.DocUnits = 'Sec';
DcTrendRefTiEnaLrng.EngDT = dt.u32;
DcTrendRefTiEnaLrng.EngMin = 0;
DcTrendRefTiEnaLrng.EngMax = 0.5;
DcTrendRefTiEnaLrng.InitRowCol = [1  1];


DcTrendRefTiEnaLrngTmr1 = DataDict.PIM;
DcTrendRefTiEnaLrngTmr1.LongName = 'DC Trend Reference Time Enable Learning Timer 1';
DcTrendRefTiEnaLrngTmr1.Description = [...
  'Elapsed time counter for DC Trend diagnostic'];
DcTrendRefTiEnaLrngTmr1.DocUnits = 'Sec';
DcTrendRefTiEnaLrngTmr1.EngDT = dt.u32;
DcTrendRefTiEnaLrngTmr1.EngMin = 0;
DcTrendRefTiEnaLrngTmr1.EngMax = 0.5;
DcTrendRefTiEnaLrngTmr1.InitRowCol = [1  1];


DcTrendRefTiEnaLrngTmr2 = DataDict.PIM;
DcTrendRefTiEnaLrngTmr2.LongName = 'DC Trend Reference Time Enable Learning Timer 2';
DcTrendRefTiEnaLrngTmr2.Description = [...
  'Elapsed time counter for DC trend diagnostic'];
DcTrendRefTiEnaLrngTmr2.DocUnits = 'Sec';
DcTrendRefTiEnaLrngTmr2.EngDT = dt.u32;
DcTrendRefTiEnaLrngTmr2.EngMin = 0;
DcTrendRefTiEnaLrngTmr2.EngMax = 0.5;
DcTrendRefTiEnaLrngTmr2.InitRowCol = [1  1];


DistbnMagEnadPrev = DataDict.PIM;
DistbnMagEnadPrev.LongName = 'Previous Distribution Magnitude Enabled';
DistbnMagEnadPrev.Description = [...
  'Previous Value of the Disturbance Magnitude Enabled variable'];
DistbnMagEnadPrev.DocUnits = 'Cnt';
DistbnMagEnadPrev.EngDT = dt.lgc;
DistbnMagEnadPrev.EngMin = 0;
DistbnMagEnadPrev.EngMax = 1;
DistbnMagEnadPrev.InitRowCol = [1  1];


DistbnMgnLeLpFil = DataDict.PIM;
DistbnMgnLeLpFil.LongName = 'Distribution Magnitude Lowpass Filter Left';
DistbnMgnLeLpFil.Description = [...
  'Lowpass Filter Frequency of the distribution magnitude diagnostics'];
DistbnMgnLeLpFil.DocUnits = 'Hz';
DistbnMgnLeLpFil.EngDT = struct.FilLpRec1;
DistbnMgnLeLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
DistbnMgnLeLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
DistbnMgnLeLpFil.InitRowCol = [1  1];


DistbnMgnRiLpFil = DataDict.PIM;
DistbnMgnRiLpFil.LongName = 'Distribution Magnitude Lowpass Filter Right';
DistbnMgnRiLpFil.Description = [...
  'Lowpass Filter Frequency of the distribution magnitude diagnostics'];
DistbnMgnRiLpFil.DocUnits = 'Hz';
DistbnMgnRiLpFil.EngDT = struct.FilLpRec1;
DistbnMgnRiLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
DistbnMgnRiLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
DistbnMgnRiLpFil.InitRowCol = [1  1];


EnaSlewPerLoop = DataDict.PIM;
EnaSlewPerLoop.LongName = 'Enable Slew Per Loop';
EnaSlewPerLoop.Description = [...
  'PIM Variable corresponding to Slew per loop rate limiter'];
EnaSlewPerLoop.DocUnits = 'Uls';
EnaSlewPerLoop.EngDT = dt.float32;
EnaSlewPerLoop.EngMin = 0;
EnaSlewPerLoop.EngMax = 500;
EnaSlewPerLoop.InitRowCol = [1  1];


FrqDiagcFltFaild = DataDict.PIM;
FrqDiagcFltFaild.LongName = 'Frequency Diagnostic Fault Failed';
FrqDiagcFltFaild.Description = [...
  'Frequency Diagnostic Fault Failed for setting RampNo to 1'];
FrqDiagcFltFaild.DocUnits = 'Cnt';
FrqDiagcFltFaild.EngDT = dt.lgc;
FrqDiagcFltFaild.EngMin = 0;
FrqDiagcFltFaild.EngMax = 1;
FrqDiagcFltFaild.InitRowCol = [1  1];


FrqDiagcFltRcvry = DataDict.PIM;
FrqDiagcFltRcvry.LongName = 'Frequency Diagnostic Fault Recovery';
FrqDiagcFltRcvry.Description = [...
  'Struct variable corresponding to frequency diagnostic fault recovery'];
FrqDiagcFltRcvry.DocUnits = 'Cnt';
FrqDiagcFltRcvry.EngDT = struct.PassFailCntrDiagcRec1;
FrqDiagcFltRcvry.EngMin = [struct('Cntr',0,'Thd',0,'NegStep',0,'PosStep',0,'Sts',SigQlfr1.SIGQLFR_NORES)];
FrqDiagcFltRcvry.EngMax = [struct('Cntr',1e+10,'Thd',1e+10,'NegStep',1e+10,'PosStep',1e+10,'Sts',SigQlfr1.SIGQLFR_FAILD)];
FrqDiagcFltRcvry.InitRowCol = [1  1];


FrqDiagcFltRst = DataDict.PIM;
FrqDiagcFltRst.LongName = 'Frequency Diagnostic Fault Reset';
FrqDiagcFltRst.Description = [...
  'Frequency Diagnostic Fault Reset for resetting RampNo to 0'];
FrqDiagcFltRst.DocUnits = 'Cnt';
FrqDiagcFltRst.EngDT = dt.lgc;
FrqDiagcFltRst.EngMin = 0;
FrqDiagcFltRst.EngMax = 1;
FrqDiagcFltRst.InitRowCol = [1  1];


FrqDiagcLpFil = DataDict.PIM;
FrqDiagcLpFil.LongName = 'Frequency Diagnostic Lowpass Filter';
FrqDiagcLpFil.Description = [...
  'Lowpass Filter Frequency of the frequency diagnostics'];
FrqDiagcLpFil.DocUnits = 'Hz';
FrqDiagcLpFil.EngDT = struct.FilLpRec1;
FrqDiagcLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
FrqDiagcLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
FrqDiagcLpFil.InitRowCol = [1  1];


FrqDiagcLrngEnaPrev = DataDict.PIM;
FrqDiagcLrngEnaPrev.LongName = 'Frequency Diagnostic Learning Enable Previous';
FrqDiagcLrngEnaPrev.Description = [...
  'Previous value of fault status learned - Variable used while setting P' ...
  'refailed NTC'];
FrqDiagcLrngEnaPrev.DocUnits = 'Cnt';
FrqDiagcLrngEnaPrev.EngDT = dt.lgc;
FrqDiagcLrngEnaPrev.EngMin = 0;
FrqDiagcLrngEnaPrev.EngMax = 1;
FrqDiagcLrngEnaPrev.InitRowCol = [1  1];


FrqDiagcLrngEnaPrevTiOut = DataDict.PIM;
FrqDiagcLrngEnaPrevTiOut.LongName = 'Frequency Diagnostic Learning Enable Previous Time Out';
FrqDiagcLrngEnaPrevTiOut.Description = [...
  'Previous value of fault status learned -wheel speed diagnostic'];
FrqDiagcLrngEnaPrevTiOut.DocUnits = 'Cnt';
FrqDiagcLrngEnaPrevTiOut.EngDT = dt.lgc;
FrqDiagcLrngEnaPrevTiOut.EngMin = 0;
FrqDiagcLrngEnaPrevTiOut.EngMax = 1;
FrqDiagcLrngEnaPrevTiOut.InitRowCol = [1  1];


FrqDiagcRefTiEnaLrng = DataDict.PIM;
FrqDiagcRefTiEnaLrng.LongName = 'Frequency Diagnostic Reference Time Enable Learning';
FrqDiagcRefTiEnaLrng.Description = [...
  'Elapsed time counter for Maximum magnitude fault recovery - pre failed' ...
  ''];
FrqDiagcRefTiEnaLrng.DocUnits = 'Sec';
FrqDiagcRefTiEnaLrng.EngDT = dt.u32;
FrqDiagcRefTiEnaLrng.EngMin = 0;
FrqDiagcRefTiEnaLrng.EngMax = 0.5;
FrqDiagcRefTiEnaLrng.InitRowCol = [1  1];


FrqDiagcRefTiEnaLrngTiOut = DataDict.PIM;
FrqDiagcRefTiEnaLrngTiOut.LongName = 'Frequency Diagnostic Reference Time Enable Learning Time out';
FrqDiagcRefTiEnaLrngTiOut.Description = [...
  'Elapsed timer variable of frequency diagnostic'];
FrqDiagcRefTiEnaLrngTiOut.DocUnits = 'Sec';
FrqDiagcRefTiEnaLrngTiOut.EngDT = dt.u32;
FrqDiagcRefTiEnaLrngTiOut.EngMin = 0;
FrqDiagcRefTiEnaLrngTiOut.EngMax = 0.5;
FrqDiagcRefTiEnaLrngTiOut.InitRowCol = [1  1];


FrqDiagcUgr1 = DataDict.PIM;
FrqDiagcUgr1.LongName = 'Frequency Diagnostic UGR 1';
FrqDiagcUgr1.Description = [...
  'The 1st PIM variable corresponding to UGR in Frequency Diagnostic'];
FrqDiagcUgr1.DocUnits = 'MotRadPerSec';
FrqDiagcUgr1.EngDT = dt.float32;
FrqDiagcUgr1.EngMin = 0;
FrqDiagcUgr1.EngMax = 256;
FrqDiagcUgr1.InitRowCol = [1  1];


FrqDiagcUgr2 = DataDict.PIM;
FrqDiagcUgr2.LongName = 'Frequency Diagnostic UGR 2';
FrqDiagcUgr2.Description = [...
  'The 2nd PIM variable corresponding to UGR in Frequency Diagnostic'];
FrqDiagcUgr2.DocUnits = 'MotRadPerSec';
FrqDiagcUgr2.EngDT = dt.float32;
FrqDiagcUgr2.EngMin = 0;
FrqDiagcUgr2.EngMax = 256;
FrqDiagcUgr2.InitRowCol = [1  1];


LeCurrMgnSlewPerLoop = DataDict.PIM;
LeCurrMgnSlewPerLoop.LongName = 'Left Current Magnitude Slew Per Loop';
LeCurrMgnSlewPerLoop.Description = [...
  'PIM Variable corresponding to Left Current Magnitude Slew Per Loop'];
LeCurrMgnSlewPerLoop.DocUnits = 'Uls';
LeCurrMgnSlewPerLoop.EngDT = dt.float32;
LeCurrMgnSlewPerLoop.EngMin = 0;
LeCurrMgnSlewPerLoop.EngMax = 127;
LeCurrMgnSlewPerLoop.InitRowCol = [1  1];


LeStDlyUpd = DataDict.PIM;
LeStDlyUpd.LongName = 'Left State Delay Update';
LeStDlyUpd.Description = [...
  'Previous Value of the state delay in the Adaptive filter of Left Wheel' ...
  ''];
LeStDlyUpd.DocUnits = 'RoadWhlRadPerSec';
LeStDlyUpd.EngDT = dt.float32;
LeStDlyUpd.EngMin = -2048;
LeStDlyUpd.EngMax = 2048;
LeStDlyUpd.InitRowCol = [1  30];


LeStVariUpd = DataDict.PIM;
LeStVariUpd.LongName = 'Left State Variable Update';
LeStVariUpd.Description = [...
  'Previous Value of the state variable in the Adaptive filter of Left Wh' ...
  'eel'];
LeStVariUpd.DocUnits = 'RoadWhlRadPerSec';
LeStVariUpd.EngDT = dt.float32;
LeStVariUpd.EngMin = -2048;
LeStVariUpd.EngMax = 2048;
LeStVariUpd.InitRowCol = [1  30];


MaxMgnFltFaild = DataDict.PIM;
MaxMgnFltFaild.LongName = 'Maximum Magnitude Fault Failed';
MaxMgnFltFaild.Description = [...
  'Maximum Magnitude Diagnostic Fault Failed for setting RampNo to 1'];
MaxMgnFltFaild.DocUnits = 'Cnt';
MaxMgnFltFaild.EngDT = dt.lgc;
MaxMgnFltFaild.EngMin = 0;
MaxMgnFltFaild.EngMax = 1;
MaxMgnFltFaild.InitRowCol = [1  1];


MaxMgnFltRcvry = DataDict.PIM;
MaxMgnFltRcvry.LongName = 'Maximum Magnitude Fault Recovery';
MaxMgnFltRcvry.Description = [...
  'Struct variable corresponding to Max magnitude fault recovery'];
MaxMgnFltRcvry.DocUnits = 'Cnt';
MaxMgnFltRcvry.EngDT = struct.PassFailCntrDiagcRec1;
MaxMgnFltRcvry.EngMin = [struct('Cntr',0,'Thd',0,'NegStep',0,'PosStep',0,'Sts',SigQlfr1.SIGQLFR_NORES)];
MaxMgnFltRcvry.EngMax = [struct('Cntr',1e+10,'Thd',1e+10,'NegStep',1e+10,'PosStep',1e+10,'Sts',SigQlfr1.SIGQLFR_FAILD)];
MaxMgnFltRcvry.InitRowCol = [1  1];


MaxMgnFltRst = DataDict.PIM;
MaxMgnFltRst.LongName = 'Maximum Magnitude Fault Reset';
MaxMgnFltRst.Description = [...
  'Maximum Magnitude Diagnostic Fault Reset for resetting RampNo to 0'];
MaxMgnFltRst.DocUnits = 'Cnt';
MaxMgnFltRst.EngDT = dt.lgc;
MaxMgnFltRst.EngMin = 0;
MaxMgnFltRst.EngMax = 1;
MaxMgnFltRst.InitRowCol = [1  1];


MaxMgnLrngEnaPrev = DataDict.PIM;
MaxMgnLrngEnaPrev.LongName = 'Maximum Magnitude Learning Enable Previous';
MaxMgnLrngEnaPrev.Description = [...
  'Previous value of fault status learned - Variable used while setting P' ...
  'refailed NTC'];
MaxMgnLrngEnaPrev.DocUnits = 'Cnt';
MaxMgnLrngEnaPrev.EngDT = dt.lgc;
MaxMgnLrngEnaPrev.EngMin = 0;
MaxMgnLrngEnaPrev.EngMax = 1;
MaxMgnLrngEnaPrev.InitRowCol = [1  1];


MaxMgnRefTiEnaLrng = DataDict.PIM;
MaxMgnRefTiEnaLrng.LongName = 'Maximum Magnitude Reference Time Enable Learning';
MaxMgnRefTiEnaLrng.Description = [...
  'Elapsed time counter for Maximum magnitude fault recovery - pre failed' ...
  ''];
MaxMgnRefTiEnaLrng.DocUnits = 'Sec';
MaxMgnRefTiEnaLrng.EngDT = dt.u32;
MaxMgnRefTiEnaLrng.EngMin = 0;
MaxMgnRefTiEnaLrng.EngMax = 0.5;
MaxMgnRefTiEnaLrng.InitRowCol = [1  1];


PhaAdjFil1Coeff1 = DataDict.PIM;
PhaAdjFil1Coeff1.LongName = 'Phase Adjust Filter 1 Coefficient 1';
PhaAdjFil1Coeff1.Description = [...
  'PIM variable corresponding to Phase Adjust Filter 1 Coefficient 1'];
PhaAdjFil1Coeff1.DocUnits = 'Uls';
PhaAdjFil1Coeff1.EngDT = dt.float32;
PhaAdjFil1Coeff1.EngMin = -2048;
PhaAdjFil1Coeff1.EngMax = 2048;
PhaAdjFil1Coeff1.InitRowCol = [1  1];


PhaAdjFil1Coeff2 = DataDict.PIM;
PhaAdjFil1Coeff2.LongName = 'Phase Adjust Filter 1 Coefficien 2';
PhaAdjFil1Coeff2.Description = [...
  'PIM variable corresponding to Phase Adjust Filter 1 Coefficient 2'];
PhaAdjFil1Coeff2.DocUnits = 'Uls';
PhaAdjFil1Coeff2.EngDT = dt.float32;
PhaAdjFil1Coeff2.EngMin = -2048;
PhaAdjFil1Coeff2.EngMax = 2048;
PhaAdjFil1Coeff2.InitRowCol = [1  1];


PhaAdjFil2Coeff1 = DataDict.PIM;
PhaAdjFil2Coeff1.LongName = 'Phase Adjust Filter 2 Coefficien 1';
PhaAdjFil2Coeff1.Description = [...
  'The 2nd PIM variable corresponding to UGR Right wheel filter'];
PhaAdjFil2Coeff1.DocUnits = 'Uls';
PhaAdjFil2Coeff1.EngDT = dt.float32;
PhaAdjFil2Coeff1.EngMin = -2048;
PhaAdjFil2Coeff1.EngMax = 2048;
PhaAdjFil2Coeff1.InitRowCol = [1  1];


PhaAdjFil2Coeff2 = DataDict.PIM;
PhaAdjFil2Coeff2.LongName = 'Phase Adjust Filter 2 Coefficien 2';
PhaAdjFil2Coeff2.Description = [...
  'The 2nd PIM variable corresponding to UGR Right wheel filter'];
PhaAdjFil2Coeff2.DocUnits = 'Uls';
PhaAdjFil2Coeff2.EngDT = dt.float32;
PhaAdjFil2Coeff2.EngMin = -2048;
PhaAdjFil2Coeff2.EngMax = 2048;
PhaAdjFil2Coeff2.InitRowCol = [1  1];


PrevFlt = DataDict.PIM;
PrevFlt.LongName = 'Previous Fault';
PrevFlt.Description = [...
  'Previous Fault in Max magintude PN counters'];
PrevFlt.DocUnits = 'Uls';
PrevFlt.EngDT = dt.float32;
PrevFlt.EngMin = 0;
PrevFlt.EngMax = 200;
PrevFlt.InitRowCol = [1  1];


PrevHwTq = DataDict.PIM;
PrevHwTq.LongName = 'Previous Handwheel Torque';
PrevHwTq.Description = 'Previous Value of Handwheel Torque';
PrevHwTq.DocUnits = 'HwNwtMtr';
PrevHwTq.EngDT = dt.float32;
PrevHwTq.EngMin = -10;
PrevHwTq.EngMax = 10;
PrevHwTq.InitRowCol = [1  1];


PrevSts = DataDict.PIM;
PrevSts.LongName = 'Previous Status';
PrevSts.Description = 'Previous Status in PN Counter';
PrevSts.DocUnits = 'Cnt';
PrevSts.EngDT = dt.lgc;
PrevSts.EngMin = 0;
PrevSts.EngMax = 1;
PrevSts.InitRowCol = [1  1];


RampNo = DataDict.PIM;
RampNo.LongName = 'Ramp No';
RampNo.Description = [...
  'The PIM corresponding to Ramped enable-No'];
RampNo.DocUnits = 'Cnt';
RampNo.EngDT = dt.lgc;
RampNo.EngMin = 0;
RampNo.EngMax = 1;
RampNo.InitRowCol = [1  1];


RampYes = DataDict.PIM;
RampYes.LongName = 'Ramp Yes';
RampYes.Description = [...
  'The PIM corresponding to Ramped enable-Yes'];
RampYes.DocUnits = 'Cnt';
RampYes.EngDT = dt.lgc;
RampYes.EngMin = 0;
RampYes.EngMax = 1;
RampYes.InitRowCol = [1  1];


RiCurrMgnSlewPerLoop = DataDict.PIM;
RiCurrMgnSlewPerLoop.LongName = 'Right Current Magnitude Slew Per Loop';
RiCurrMgnSlewPerLoop.Description = [...
  'PIM Variable corresponding to Right Current Magnitude Slew Per Loop'];
RiCurrMgnSlewPerLoop.DocUnits = 'Uls';
RiCurrMgnSlewPerLoop.EngDT = dt.float32;
RiCurrMgnSlewPerLoop.EngMin = 0;
RiCurrMgnSlewPerLoop.EngMax = 127;
RiCurrMgnSlewPerLoop.InitRowCol = [1  1];


RiStDlyUpd = DataDict.PIM;
RiStDlyUpd.LongName = 'Right State Delay Update';
RiStDlyUpd.Description = [...
  'Previous Value of the state delay in the Adaptive filter of Right Whee' ...
  'l'];
RiStDlyUpd.DocUnits = 'RoadWhlRadPerSec';
RiStDlyUpd.EngDT = dt.float32;
RiStDlyUpd.EngMin = -2048;
RiStDlyUpd.EngMax = 2048;
RiStDlyUpd.InitRowCol = [1  30];


RiStVariUpd = DataDict.PIM;
RiStVariUpd.LongName = 'Right State Variable Update';
RiStVariUpd.Description = [...
  'Previous Value of the state variable in the Adaptive filter of Right W' ...
  'heel'];
RiStVariUpd.DocUnits = 'RoadWhlRadPerSec';
RiStVariUpd.EngDT = dt.float32;
RiStVariUpd.EngMin = -2048;
RiStVariUpd.EngMax = 2048;
RiStVariUpd.InitRowCol = [1  30];


ScaLe = DataDict.PIM;
ScaLe.LongName = 'Scale Left';
ScaLe.Description = 'Wheel Speed Scale - Left';
ScaLe.DocUnits = 'Uls';
ScaLe.EngDT = dt.float32;
ScaLe.EngMin = 0;
ScaLe.EngMax = 1;
ScaLe.InitRowCol = [1  1];


ScaRi = DataDict.PIM;
ScaRi.LongName = 'Scale Right';
ScaRi.Description = 'Wheel Speed Scale - right';
ScaRi.DocUnits = 'Uls';
ScaRi.EngDT = dt.float32;
ScaRi.EngMin = 0;
ScaRi.EngMax = 1;
ScaRi.InitRowCol = [1  1];


SlowSpdDiagcLrngEnaPrevTmr = DataDict.PIM;
SlowSpdDiagcLrngEnaPrevTmr.LongName = 'Slow Speed Correlation Diagnostic Learning Enable Previous Timer';
SlowSpdDiagcLrngEnaPrevTmr.Description = [...
  'Previous value of fault status learned -slow speed diagnostic'];
SlowSpdDiagcLrngEnaPrevTmr.DocUnits = 'Cnt';
SlowSpdDiagcLrngEnaPrevTmr.EngDT = dt.lgc;
SlowSpdDiagcLrngEnaPrevTmr.EngMin = 0;
SlowSpdDiagcLrngEnaPrevTmr.EngMax = 1;
SlowSpdDiagcLrngEnaPrevTmr.InitRowCol = [1  1];


SlowSpdDiagcRefTiEnaLrngTmr = DataDict.PIM;
SlowSpdDiagcRefTiEnaLrngTmr.LongName = 'Slow Speed Correlation Diagnostic Reference Time Enable Learning Timer';
SlowSpdDiagcRefTiEnaLrngTmr.Description = [...
  'Elapsed time counter for Slow Speed Correlation Diagnostic'];
SlowSpdDiagcRefTiEnaLrngTmr.DocUnits = 'Sec';
SlowSpdDiagcRefTiEnaLrngTmr.EngDT = dt.u32;
SlowSpdDiagcRefTiEnaLrngTmr.EngMin = 0;
SlowSpdDiagcRefTiEnaLrngTmr.EngMax = 0.5;
SlowSpdDiagcRefTiEnaLrngTmr.InitRowCol = [1  1];


StordValLe = DataDict.PIM;
StordValLe.LongName = 'Stored Value Left';
StordValLe.Description = [...
  'Stored value in tapped delay - Left'];
StordValLe.DocUnits = 'Uls';
StordValLe.EngDT = dt.float32;
StordValLe.EngMin = 0;
StordValLe.EngMax = 30;
StordValLe.InitRowCol = [30   1];


StordValRi = DataDict.PIM;
StordValRi.LongName = 'Stored Value Right';
StordValRi.Description = [...
  'Stored value in tapped delay - Right'];
StordValRi.DocUnits = 'Uls';
StordValRi.EngDT = dt.float32;
StordValRi.EngMin = 0;
StordValRi.EngMax = 30;
StordValRi.InitRowCol = [30   1];


UgrLe1 = DataDict.PIM;
UgrLe1.LongName = 'UGR Left 1';
UgrLe1.Description = [...
  'The 1st PIM variable corresponding to UGR Left wheel filter'];
UgrLe1.DocUnits = 'MotRadPerSec';
UgrLe1.EngDT = dt.float32;
UgrLe1.EngMin = 0;
UgrLe1.EngMax = 380;
UgrLe1.InitRowCol = [1  1];


UgrLe2 = DataDict.PIM;
UgrLe2.LongName = 'UGR Left 2';
UgrLe2.Description = [...
  'The 2nd PIM variable corresponding to UGR Left wheel filter'];
UgrLe2.DocUnits = 'MotRadPerSec';
UgrLe2.EngDT = dt.float32;
UgrLe2.EngMin = 0;
UgrLe2.EngMax = 380;
UgrLe2.InitRowCol = [1  1];


UgrRi1 = DataDict.PIM;
UgrRi1.LongName = 'UGR Right 1';
UgrRi1.Description = [...
  'The 1st PIM variable corresponding to UGR Right wheel filter'];
UgrRi1.DocUnits = 'MotRadPerSec';
UgrRi1.EngDT = dt.float32;
UgrRi1.EngMin = 0;
UgrRi1.EngMax = 380;
UgrRi1.InitRowCol = [1  1];


UgrRi2 = DataDict.PIM;
UgrRi2.LongName = 'UGR Right 2';
UgrRi2.Description = [...
  'The 2nd PIM variable corresponding to UGR Right wheel filte'];
UgrRi2.DocUnits = 'MotRadPerSec';
UgrRi2.EngDT = dt.float32;
UgrRi2.EngMin = 0;
UgrRi2.EngMax = 380;
UgrRi2.InitRowCol = [1  1];


WhlSpdCorrFltFaild = DataDict.PIM;
WhlSpdCorrFltFaild.LongName = 'Wheel Speed Correlation Fault Failed';
WhlSpdCorrFltFaild.Description = [...
  'Wheel Speed Correlation Diagnostic Fault Failed for setting RampNo to ' ...
  '1'];
WhlSpdCorrFltFaild.DocUnits = 'Cnt';
WhlSpdCorrFltFaild.EngDT = dt.lgc;
WhlSpdCorrFltFaild.EngMin = 0;
WhlSpdCorrFltFaild.EngMax = 1;
WhlSpdCorrFltFaild.InitRowCol = [1  1];


WhlSpdCorrFltRst = DataDict.PIM;
WhlSpdCorrFltRst.LongName = 'Wheel Speed Correlation Fault Reset';
WhlSpdCorrFltRst.Description = [...
  'Wheel Speed Correlation Diagnostic Fault reset for resetting RampNo to' ...
  ' 0'];
WhlSpdCorrFltRst.DocUnits = 'Cnt';
WhlSpdCorrFltRst.EngDT = dt.lgc;
WhlSpdCorrFltRst.EngMin = 0;
WhlSpdCorrFltRst.EngMax = 1;
WhlSpdCorrFltRst.InitRowCol = [1  1];


WhlSpdCorrlnDiagcLrngEnaPrev = DataDict.PIM;
WhlSpdCorrlnDiagcLrngEnaPrev.LongName = 'Wheel Speed Correlation Diagnostic Learning Enable Previous';
WhlSpdCorrlnDiagcLrngEnaPrev.Description = [...
  'Previous value of fault status learned - Variable used while setting P' ...
  'refailed NTC'];
WhlSpdCorrlnDiagcLrngEnaPrev.DocUnits = 'Cnt';
WhlSpdCorrlnDiagcLrngEnaPrev.EngDT = dt.lgc;
WhlSpdCorrlnDiagcLrngEnaPrev.EngMin = 0;
WhlSpdCorrlnDiagcLrngEnaPrev.EngMax = 1;
WhlSpdCorrlnDiagcLrngEnaPrev.InitRowCol = [1  1];


WhlSpdCorrlnDiagcRefTiEnaLrng = DataDict.PIM;
WhlSpdCorrlnDiagcRefTiEnaLrng.LongName = 'Wheel Speed Correlation Diagnostic Reference Time Enable Learning';
WhlSpdCorrlnDiagcRefTiEnaLrng.Description = [...
  'Elapsed time counter for Wheel Speed Correlation Diagnostic fault reco' ...
  'very - pre failed'];
WhlSpdCorrlnDiagcRefTiEnaLrng.DocUnits = 'Sec';
WhlSpdCorrlnDiagcRefTiEnaLrng.EngDT = dt.u32;
WhlSpdCorrlnDiagcRefTiEnaLrng.EngMin = 0;
WhlSpdCorrlnDiagcRefTiEnaLrng.EngMax = 0.5;
WhlSpdCorrlnDiagcRefTiEnaLrng.InitRowCol = [1  1];


WhlSpdCorrlnFltRcvry = DataDict.PIM;
WhlSpdCorrlnFltRcvry.LongName = 'Wheel Speed Correlation Fault Recovery';
WhlSpdCorrlnFltRcvry.Description = [...
  'Struct variable corresponding to Wheel speed correlation fault recover' ...
  'y'];
WhlSpdCorrlnFltRcvry.DocUnits = 'Cnt';
WhlSpdCorrlnFltRcvry.EngDT = struct.PassFailCntrDiagcRec1;
WhlSpdCorrlnFltRcvry.EngMin = [struct('Cntr',0,'Thd',0,'NegStep',0,'PosStep',0,'Sts',SigQlfr1.SIGQLFR_NORES)];
WhlSpdCorrlnFltRcvry.EngMax = [struct('Cntr',1e+10,'Thd',1e+10,'NegStep',1e+10,'PosStep',1e+10,'Sts',SigQlfr1.SIGQLFR_FAILD)];
WhlSpdCorrlnFltRcvry.InitRowCol = [1  1];


WhlSpdCorrlnLrngEnaPrevTmr = DataDict.PIM;
WhlSpdCorrlnLrngEnaPrevTmr.LongName = 'Wheel Speed Correlation Diagnostic Learning Enable Previous Timer';
WhlSpdCorrlnLrngEnaPrevTmr.Description = [...
  'Previous value of fault status learned -wheel speed diagnostic'];
WhlSpdCorrlnLrngEnaPrevTmr.DocUnits = 'Cnt';
WhlSpdCorrlnLrngEnaPrevTmr.EngDT = dt.lgc;
WhlSpdCorrlnLrngEnaPrevTmr.EngMin = 0;
WhlSpdCorrlnLrngEnaPrevTmr.EngMax = 1;
WhlSpdCorrlnLrngEnaPrevTmr.InitRowCol = [1  1];


WhlSpdCorrlnRefTiEnaLrngTmr = DataDict.PIM;
WhlSpdCorrlnRefTiEnaLrngTmr.LongName = 'Wheel Speed Correlation Diagnostic Reference Time Enable Learning Timer';
WhlSpdCorrlnRefTiEnaLrngTmr.Description = [...
  'Elapsed time counter for Wheel Speed Correlation Diagnostic'];
WhlSpdCorrlnRefTiEnaLrngTmr.DocUnits = 'Sec';
WhlSpdCorrlnRefTiEnaLrngTmr.EngDT = dt.u32;
WhlSpdCorrlnRefTiEnaLrngTmr.EngMin = 0;
WhlSpdCorrlnRefTiEnaLrngTmr.EngMax = 0.5;
WhlSpdCorrlnRefTiEnaLrngTmr.InitRowCol = [1  1];


WhlSpdLeLpFil = DataDict.PIM;
WhlSpdLeLpFil.LongName = 'Wheel Speed Left Lowpass filter';
WhlSpdLeLpFil.Description = [...
  'Wheel speed left lowpass filter variable'];
WhlSpdLeLpFil.DocUnits = 'Hz';
WhlSpdLeLpFil.EngDT = struct.FilLpRec1;
WhlSpdLeLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
WhlSpdLeLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
WhlSpdLeLpFil.InitRowCol = [1  1];


WhlSpdRiLpFil = DataDict.PIM;
WhlSpdRiLpFil.LongName = 'Wheel Speed Right Lowpass filter';
WhlSpdRiLpFil.Description = [...
  'Wheel speed right lowpass filter variable'];
WhlSpdRiLpFil.DocUnits = 'Hz';
WhlSpdRiLpFil.EngDT = struct.FilLpRec1;
WhlSpdRiLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
WhlSpdRiLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
WhlSpdRiLpFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ACTIVBANDMAX_ULS_U32 = DataDict.Constant;
ACTIVBANDMAX_ULS_U32.LongName = 'Active Band Maximum';
ACTIVBANDMAX_ULS_U32.Description = [...
  'Maximum of NVM variables in Persistance diagnostic- NVM data check'];
ACTIVBANDMAX_ULS_U32.DocUnits = 'Uls';
ACTIVBANDMAX_ULS_U32.EngDT = dt.u32;
ACTIVBANDMAX_ULS_U32.EngVal = 4294967294;
ACTIVBANDMAX_ULS_U32.Define = 'Local';


ADAPVFILMAX_ULS_F32 = DataDict.Constant;
ADAPVFILMAX_ULS_F32.LongName = 'Adaptive Filter Maximum';
ADAPVFILMAX_ULS_F32.Description = [...
  'Magnitude limit of LMS filter state variable, based on p13 resolution ' ...
  'input requirement.'];
ADAPVFILMAX_ULS_F32.DocUnits = 'Uls';
ADAPVFILMAX_ULS_F32.EngDT = dt.float32;
ADAPVFILMAX_ULS_F32.EngVal = 2048;
ADAPVFILMAX_ULS_F32.Define = 'Local';


ADJOUTPMAX_ULS_F32 = DataDict.Constant;
ADJOUTPMAX_ULS_F32.LongName = 'Adjust Output Maximum';
ADJOUTPMAX_ULS_F32.Description = 'Adjust Output Maximum';
ADJOUTPMAX_ULS_F32.DocUnits = 'Uls';
ADJOUTPMAX_ULS_F32.EngDT = dt.float32;
ADJOUTPMAX_ULS_F32.EngVal = 127;
ADJOUTPMAX_ULS_F32.Define = 'Local';


ARCHGLBPRM_180OVERPI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_180OVERPI_ULS_F32.LongName = '180 Degrees Over Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.Description = '180 divided by Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_180OVERPI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_180OVERPI_ULS_F32.EngVal = 57.29578;
ARCHGLBPRM_180OVERPI_ULS_F32.Define = 'Global';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Pi Over 180 Degrees';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = 'Pi divided by 180 ';
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.017453293;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER2_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER2_ULS_F32.LongName = 'Pi Over Two';
ARCHGLBPRM_PIOVER2_ULS_F32.Description = 'Pi divided by 2';
ARCHGLBPRM_PIOVER2_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER2_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER2_ULS_F32.EngVal = 1.57079633;
ARCHGLBPRM_PIOVER2_ULS_F32.Define = 'Global';


ARCHGLBPRM_PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PI_ULS_F32.LongName = 'Pi';
ARCHGLBPRM_PI_ULS_F32.Description = 'Value of Pi';
ARCHGLBPRM_PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PI_ULS_F32.EngVal = 3.1415927;
ARCHGLBPRM_PI_ULS_F32.Define = 'Global';


CALMINSPERCOUNT_ULS_F32 = DataDict.Constant;
CALMINSPERCOUNT_ULS_F32.LongName = 'Calibration Minutes per Count';
CALMINSPERCOUNT_ULS_F32.Description = [...
  'Conversion factor from counts to minutes when calculating total durati' ...
  'on of compensation persistence.'];
CALMINSPERCOUNT_ULS_F32.DocUnits = 'Uls';
CALMINSPERCOUNT_ULS_F32.EngDT = dt.float32;
CALMINSPERCOUNT_ULS_F32.EngVal = 10;
CALMINSPERCOUNT_ULS_F32.Define = 'Local';


DURATIONDISABLE_CNT_U16 = DataDict.Constant;
DURATIONDISABLE_CNT_U16.LongName = 'Duration Disable';
DURATIONDISABLE_CNT_U16.Description = 'Step used when NtcType is None';
DURATIONDISABLE_CNT_U16.DocUnits = 'Cnt';
DURATIONDISABLE_CNT_U16.EngDT = dt.u16;
DURATIONDISABLE_CNT_U16.EngVal = 18500;
DURATIONDISABLE_CNT_U16.Define = 'Local';


FILTWHLSPDMAX_MOTRADPERSEC_F32 = DataDict.Constant;
FILTWHLSPDMAX_MOTRADPERSEC_F32.LongName = 'Filtered Wheel Speed Max';
FILTWHLSPDMAX_MOTRADPERSEC_F32.Description = [...
  'Magnitude limit of filtered wheel speeds, both left and right.'];
FILTWHLSPDMAX_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
FILTWHLSPDMAX_MOTRADPERSEC_F32.EngDT = dt.float32;
FILTWHLSPDMAX_MOTRADPERSEC_F32.EngVal = 100;
FILTWHLSPDMAX_MOTRADPERSEC_F32.Define = 'Local';


FRQMIN_ULS_F32 = DataDict.Constant;
FRQMIN_ULS_F32.LongName = 'Frequency Minimum ';
FRQMIN_ULS_F32.Description = [...
  'Constant declaration of Wheel Freq Min Resoultion '];
FRQMIN_ULS_F32.DocUnits = 'Uls';
FRQMIN_ULS_F32.EngDT = dt.float32;
FRQMIN_ULS_F32.EngVal = 0.01;
FRQMIN_ULS_F32.Define = 'Local';


MICROSECTOMILLISEC_ULS_F32 = DataDict.Constant;
MICROSECTOMILLISEC_ULS_F32.LongName = 'Micro Second to Milli Second';
MICROSECTOMILLISEC_ULS_F32.Description = [...
  'Conversion from 100 Micro sec to Milli second'];
MICROSECTOMILLISEC_ULS_F32.DocUnits = 'Uls';
MICROSECTOMILLISEC_ULS_F32.EngDT = dt.float32;
MICROSECTOMILLISEC_ULS_F32.EngVal = 0.1;
MICROSECTOMILLISEC_ULS_F32.Define = 'Local';


MINSTOMILLISEC_ULS_F32 = DataDict.Constant;
MINSTOMILLISEC_ULS_F32.LongName = 'Minutes to Milli Second';
MINSTOMILLISEC_ULS_F32.Description = [...
  'Conversion from Minutes to Milli second'];
MINSTOMILLISEC_ULS_F32.DocUnits = 'Uls';
MINSTOMILLISEC_ULS_F32.EngDT = dt.float32;
MINSTOMILLISEC_ULS_F32.EngVal = 60000;
MINSTOMILLISEC_ULS_F32.Define = 'Local';


NINETY_ULS_F32 = DataDict.Constant;
NINETY_ULS_F32.LongName = 'Ninety';
NINETY_ULS_F32.Description = [...
  'Phase adjust checking condition - deg phase'];
NINETY_ULS_F32.DocUnits = 'Uls';
NINETY_ULS_F32.EngDT = dt.float32;
NINETY_ULS_F32.EngVal = 90;
NINETY_ULS_F32.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = 'Step used when NtcType is None';
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


NROFDLY_CNT_U08 = DataDict.Constant;
NROFDLY_CNT_U08.LongName = 'Number of Delay';
NROFDLY_CNT_U08.Description = 'Number of Taps for Tapped Delay.';
NROFDLY_CNT_U08.DocUnits = 'Cnt';
NROFDLY_CNT_U08.EngDT = dt.u08;
NROFDLY_CNT_U08.EngVal = 29;
NROFDLY_CNT_U08.Define = 'Local';


ONEHALF_ULS_F32 = DataDict.Constant;
ONEHALF_ULS_F32.LongName = 'One Half';
ONEHALF_ULS_F32.Description = 'Constant declaration of One Half';
ONEHALF_ULS_F32.DocUnits = 'Uls';
ONEHALF_ULS_F32.EngDT = dt.float32;
ONEHALF_ULS_F32.EngVal = 0.5;
ONEHALF_ULS_F32.Define = 'Local';


ONEHUNDRED_ULS_F32 = DataDict.Constant;
ONEHUNDRED_ULS_F32.LongName = 'One Hundred';
ONEHUNDRED_ULS_F32.Description = [...
  'Constant declaration of 100 Percent'];
ONEHUNDRED_ULS_F32.DocUnits = 'Uls';
ONEHUNDRED_ULS_F32.EngDT = dt.float32;
ONEHUNDRED_ULS_F32.EngVal = 100;
ONEHUNDRED_ULS_F32.Define = 'Local';


ONEOVRTHREE_ULS_F32 = DataDict.Constant;
ONEOVRTHREE_ULS_F32.LongName = 'One Over Three';
ONEOVRTHREE_ULS_F32.Description = 'One thirds value';
ONEOVRTHREE_ULS_F32.DocUnits = 'Uls';
ONEOVRTHREE_ULS_F32.EngDT = dt.float32;
ONEOVRTHREE_ULS_F32.EngVal = 0.33;
ONEOVRTHREE_ULS_F32.Define = 'Local';


ONEOVRTWENTY_ULS_F32 = DataDict.Constant;
ONEOVRTWENTY_ULS_F32.LongName = 'One over Twenty';
ONEOVRTWENTY_ULS_F32.Description = 'One over twenty value';
ONEOVRTWENTY_ULS_F32.DocUnits = 'Uls';
ONEOVRTWENTY_ULS_F32.EngDT = dt.float32;
ONEOVRTWENTY_ULS_F32.EngVal = 0.05;
ONEOVRTWENTY_ULS_F32.Define = 'Local';


ONETHOUSAND_ULS_F32 = DataDict.Constant;
ONETHOUSAND_ULS_F32.LongName = 'One Thousand';
ONETHOUSAND_ULS_F32.Description = [...
  'One thousand -converting milli sec to sec'];
ONETHOUSAND_ULS_F32.DocUnits = 'Uls';
ONETHOUSAND_ULS_F32.EngDT = dt.float32;
ONETHOUSAND_ULS_F32.EngVal = 1000;
ONETHOUSAND_ULS_F32.Define = 'Local';


PEAKMAX_ULS_F32 = DataDict.Constant;
PEAKMAX_ULS_F32.LongName = 'Peak Maximum';
PEAKMAX_ULS_F32.Description = [...
  'Maximum of NVM variables in Enable Calculation- NVM data check'];
PEAKMAX_ULS_F32.DocUnits = 'Uls';
PEAKMAX_ULS_F32.EngDT = dt.float32;
PEAKMAX_ULS_F32.EngVal = 127;
PEAKMAX_ULS_F32.Define = 'Local';


PEAKMIN_ULS_F32 = DataDict.Constant;
PEAKMIN_ULS_F32.LongName = 'Peak Minimum';
PEAKMIN_ULS_F32.Description = [...
  'Minimum of NVM variables in Enable Calculation- NVM data check'];
PEAKMIN_ULS_F32.DocUnits = 'Uls';
PEAKMIN_ULS_F32.EngDT = dt.float32;
PEAKMIN_ULS_F32.EngVal = 0;
PEAKMIN_ULS_F32.Define = 'Local';


PHAADJMAX_ULS_F32 = DataDict.Constant;
PHAADJMAX_ULS_F32.LongName = 'Phase Adjust Maximum';
PHAADJMAX_ULS_F32.Description = [...
  'Magnitude limit of adaptive filter phase adjustment.'];
PHAADJMAX_ULS_F32.DocUnits = 'Uls';
PHAADJMAX_ULS_F32.EngDT = dt.float32;
PHAADJMAX_ULS_F32.EngVal = 65535;
PHAADJMAX_ULS_F32.Define = 'Local';


PITIMESSAMPLETIME_ULS_F32 = DataDict.Constant;
PITIMESSAMPLETIME_ULS_F32.LongName = 'PI Times Sample Time';
PITIMESSAMPLETIME_ULS_F32.Description = [...
  'Constant declaration of PI * Sample Time'];
PITIMESSAMPLETIME_ULS_F32.DocUnits = 'Uls';
PITIMESSAMPLETIME_ULS_F32.EngDT = dt.float32;
PITIMESSAMPLETIME_ULS_F32.EngVal = 0.006283185;
PITIMESSAMPLETIME_ULS_F32.Define = 'Local';


STOREDMINSPERCOUNT_ULS_F32 = DataDict.Constant;
STOREDMINSPERCOUNT_ULS_F32.LongName = 'Stored Minutes per Count';
STOREDMINSPERCOUNT_ULS_F32.Description = [...
  'Counts-to-minutes conversion factor for weighted average calculation o' ...
  'f Total Duration.'];
STOREDMINSPERCOUNT_ULS_F32.DocUnits = 'Uls';
STOREDMINSPERCOUNT_ULS_F32.EngDT = dt.float32;
STOREDMINSPERCOUNT_ULS_F32.EngVal = 0.0001333333;
STOREDMINSPERCOUNT_ULS_F32.Define = 'Local';


TWOOVRTHREE_ULS_F32 = DataDict.Constant;
TWOOVRTHREE_ULS_F32.LongName = 'Two over three';
TWOOVRTHREE_ULS_F32.Description = 'Two thirds value';
TWOOVRTHREE_ULS_F32.DocUnits = 'Uls';
TWOOVRTHREE_ULS_F32.EngDT = dt.float32;
TWOOVRTHREE_ULS_F32.EngVal = 0.66;
TWOOVRTHREE_ULS_F32.Define = 'Local';


TWO_ULS_F32 = DataDict.Constant;
TWO_ULS_F32.LongName = 'Two';
TWO_ULS_F32.Description = 'Two';
TWO_ULS_F32.DocUnits = 'Uls';
TWO_ULS_F32.EngDT = dt.float32;
TWO_ULS_F32.EngVal = 2;
TWO_ULS_F32.Define = 'Local';


UGRFILMAX_ULS_F32 = DataDict.Constant;
UGRFILMAX_ULS_F32.LongName = 'Ugr Filter Maximum';
UGRFILMAX_ULS_F32.Description = 'Ugr Filter Maximum';
UGRFILMAX_ULS_F32.DocUnits = 'Uls';
UGRFILMAX_ULS_F32.EngDT = dt.float32;
UGRFILMAX_ULS_F32.EngVal = 256;
UGRFILMAX_ULS_F32.Define = 'Local';


WIRCMDMAX_MOTNWTMTR_F32 = DataDict.Constant;
WIRCMDMAX_MOTNWTMTR_F32.LongName = 'WIR Command Max';
WIRCMDMAX_MOTNWTMTR_F32.Description = [...
  'Magnitude limit of function output.'];
WIRCMDMAX_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
WIRCMDMAX_MOTNWTMTR_F32.EngDT = dt.float32;
WIRCMDMAX_MOTNWTMTR_F32.EngVal = 3;
WIRCMDMAX_MOTNWTMTR_F32.Define = 'Local';


ZERO_ULS_F32 = DataDict.Constant;
ZERO_ULS_F32.LongName = 'Zero';
ZERO_ULS_F32.Description = 'Constant declaration of Zero';
ZERO_ULS_F32.DocUnits = 'Uls';
ZERO_ULS_F32.EngDT = dt.float32;
ZERO_ULS_F32.EngVal = 0;
ZERO_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
WhlImbRejctnFltNtc = DataDict.NTC;
WhlImbRejctnFltNtc.NtcNr = NtcNr1.NTCNR_0X0A5;
WhlImbRejctnFltNtc.NtcTyp = 'None';
WhlImbRejctnFltNtc.LongName = 'Wheel Imbalance Rejection Fault NTC';
WhlImbRejctnFltNtc.Description = 'F3 resoponse- trouble code 0X0A5';
WhlImbRejctnFltNtc.NtcStInfo = DataDict.NtcStInfoBitPacked;
WhlImbRejctnFltNtc.NtcStInfo.Bit0Descr = 'Maximum Magintude Fault';
WhlImbRejctnFltNtc.NtcStInfo.Bit1Descr = '';
WhlImbRejctnFltNtc.NtcStInfo.Bit2Descr = 'DC Trend Fault';
WhlImbRejctnFltNtc.NtcStInfo.Bit3Descr = 'Freqeuncy Diagnostic Fault';
WhlImbRejctnFltNtc.NtcStInfo.Bit4Descr = 'Wheel Speed Correlation Fault';
WhlImbRejctnFltNtc.NtcStInfo.Bit5Descr = 'Maximum Persistance Fault';
WhlImbRejctnFltNtc.NtcStInfo.Bit6Descr = 'Unused';
WhlImbRejctnFltNtc.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
