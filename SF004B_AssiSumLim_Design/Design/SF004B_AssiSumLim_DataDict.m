%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Jun-2015 13:17:03       %
%                                  Created with tool release: 2.13.0     %
%%-----------------------------------------------------------------------%

SF004B = DataDict.FDD;
SF004B.Version = '1.2.X';
SF004B.LongName = 'Assist Summation and Limiting';
SF004B.ShoName  = 'AssiSumLim';
SF004B.DesignASIL = 'D';
SF004B.Description = [...
  'This function sums torque commands from various functions and then lim' ...
  'its the net command.  Before summation, it allows for application of s' ...
  'afety overwrites of incoming signal values. Stub input and output vari' ...
  'ables are used for now.'];
SF004B.Ntc = ...
	{'NTCNR_0X0C4','Deb'
	 };



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AssiSumLimInit1 = DataDict.Runnable;
AssiSumLimInit1.TimeStep = 0;

AssiSumLimPer1 = DataDict.Runnable;
AssiSumLimPer1.TimeStep = 0.002;

SetManTqCmd = DataDict.SrvRunnable;
SetManTqCmd.Context = 'Rte';
SetManTqCmd.Return = DataDict.CSReturn;
SetManTqCmd.Return.Name = '';
SetManTqCmd.Return.Type = 'Standard';
SetManTqCmd.Return.Min = 0;
SetManTqCmd.Return.Max = 1;
SetManTqCmd.Return.TestTolerance = [];
SetManTqCmd.Arguments(1) = DataDict.CSArguments;
SetManTqCmd.Arguments(1).Name = 'ManTqCmd';
SetManTqCmd.Arguments(1).EngMin = -8.8;
SetManTqCmd.Arguments(1).EngMax = 8.8;
SetManTqCmd.Arguments(1).EngDT = dt.float32;
SetManTqCmd.Arguments(1).Units = 'MotNwtMtr';
SetManTqCmd.Arguments(1).Direction = 'In';
SetManTqCmd.Arguments(1).InitRowCol = [1  1];
SetManTqCmd.Arguments(2) = DataDict.CSArguments;
SetManTqCmd.Arguments(2).Name = 'ManTqCmdEna';
SetManTqCmd.Arguments(2).EngMin = 0;
SetManTqCmd.Arguments(2).EngMax = 1;
SetManTqCmd.Arguments(2).EngDT = dt.lgc;
SetManTqCmd.Arguments(2).Units = 'Cnt';
SetManTqCmd.Arguments(2).Direction = 'In';
SetManTqCmd.Arguments(2).InitRowCol = [1  1];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'AssiSumLimPer1'};
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Name = '';
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
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


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'AssiSumLimPer1'};
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Name = '';
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
AssiCmd = DataDict.IpSignal;
AssiCmd.LongName = 'Assist Command';
AssiCmd.DocUnits = 'MotNwtMtr';
AssiCmd.EngDT = dt.float32;
AssiCmd.EngInit = 0;
AssiCmd.EngMin = -8.8;
AssiCmd.EngMax = 8.8;
AssiCmd.ReadIn = {'AssiSumLimPer1'};
AssiCmd.ReadType = 'Rte';


DampgCmd = DataDict.IpSignal;
DampgCmd.LongName = 'Damping Command';
DampgCmd.DocUnits = 'MotNwtMtr';
DampgCmd.EngDT = dt.float32;
DampgCmd.EngInit = 0;
DampgCmd.EngMin = -8.8;
DampgCmd.EngMax = 8.8;
DampgCmd.ReadIn = {'AssiSumLimPer1'};
DampgCmd.ReadType = 'Rte';


EotActvCmd = DataDict.IpSignal;
EotActvCmd.LongName = 'End of Travel Active Command';
EotActvCmd.DocUnits = 'MotNwtMtr';
EotActvCmd.EngDT = dt.float32;
EotActvCmd.EngInit = 0;
EotActvCmd.EngMin = -8.8;
EotActvCmd.EngMax = 8.8;
EotActvCmd.ReadIn = {'AssiSumLimPer1'};
EotActvCmd.ReadType = 'Rte';


EotAssiSca = DataDict.IpSignal;
EotAssiSca.LongName = 'End of Travel Assist Scale';
EotAssiSca.DocUnits = 'Uls';
EotAssiSca.EngDT = dt.float32;
EotAssiSca.EngInit = 1;
EotAssiSca.EngMin = 0;
EotAssiSca.EngMax = 1;
EotAssiSca.ReadIn = {'AssiSumLimPer1'};
EotAssiSca.ReadType = 'Rte';


EotDampgCmd = DataDict.IpSignal;
EotDampgCmd.LongName = 'End of Travel Damping Command';
EotDampgCmd.DocUnits = 'MotNwtMtr';
EotDampgCmd.EngDT = dt.float32;
EotDampgCmd.EngInit = 0;
EotDampgCmd.EngMin = -8.8;
EotDampgCmd.EngMax = 8.8;
EotDampgCmd.ReadIn = {'AssiSumLimPer1'};
EotDampgCmd.ReadType = 'Rte';


EotMotTqLim = DataDict.IpSignal;
EotMotTqLim.LongName = 'End of Travel Motor Torque Limit';
EotMotTqLim.DocUnits = 'MotNwtMtr';
EotMotTqLim.EngDT = dt.float32;
EotMotTqLim.EngInit = 8.8;
EotMotTqLim.EngMin = 0;
EotMotTqLim.EngMax = 8.8;
EotMotTqLim.ReadIn = {'AssiSumLimPer1'};
EotMotTqLim.ReadType = 'Rte';


HwTqLoaMtgtnEna = DataDict.IpSignal;
HwTqLoaMtgtnEna.LongName = 'Handwheel Torque Loss of Assist Mitigation Enable';
HwTqLoaMtgtnEna.DocUnits = 'Cnt';
HwTqLoaMtgtnEna.EngDT = dt.lgc;
HwTqLoaMtgtnEna.EngInit = 0;
HwTqLoaMtgtnEna.EngMin = 0;
HwTqLoaMtgtnEna.EngMax = 1;
HwTqLoaMtgtnEna.ReadIn = {'AssiSumLimPer1'};
HwTqLoaMtgtnEna.ReadType = 'Rte';


MotTqCmdLimDi = DataDict.IpSignal;
MotTqCmdLimDi.LongName = 'Motor Torque Command Limit Disable';
MotTqCmdLimDi.DocUnits = 'Cnt';
MotTqCmdLimDi.EngDT = dt.lgc;
MotTqCmdLimDi.EngInit = 0;
MotTqCmdLimDi.EngMin = 0;
MotTqCmdLimDi.EngMax = 1;
MotTqCmdLimDi.ReadIn = {'AssiSumLimPer1'};
MotTqCmdLimDi.ReadType = 'Rte';


MotTqCmdOvrl = DataDict.IpSignal;
MotTqCmdOvrl.LongName = 'Motor Torque Command Overlay';
MotTqCmdOvrl.DocUnits = 'MotNwtMtr';
MotTqCmdOvrl.EngDT = dt.float32;
MotTqCmdOvrl.EngInit = 0;
MotTqCmdOvrl.EngMin = -8.8;
MotTqCmdOvrl.EngMax = 8.8;
MotTqCmdOvrl.ReadIn = {'AssiSumLimPer1'};
MotTqCmdOvrl.ReadType = 'Rte';


PinionCentrLrnCmd = DataDict.IpSignal;
PinionCentrLrnCmd.LongName = 'Pinion Center Learn Command';
PinionCentrLrnCmd.DocUnits = 'MotNwtMtr';
PinionCentrLrnCmd.EngDT = dt.float32;
PinionCentrLrnCmd.EngInit = 0;
PinionCentrLrnCmd.EngMin = -8.8;
PinionCentrLrnCmd.EngMax = 8.8;
PinionCentrLrnCmd.ReadIn = {'AssiSumLimPer1'};
PinionCentrLrnCmd.ReadType = 'Rte';


PinionCentrLrnEna = DataDict.IpSignal;
PinionCentrLrnEna.LongName = 'Pinion Center Learn Enable';
PinionCentrLrnEna.DocUnits = 'Cnt';
PinionCentrLrnEna.EngDT = dt.lgc;
PinionCentrLrnEna.EngInit = 0;
PinionCentrLrnEna.EngMin = 0;
PinionCentrLrnEna.EngMax = 1;
PinionCentrLrnEna.ReadIn = {'AssiSumLimPer1'};
PinionCentrLrnEna.ReadType = 'Rte';


PullCmpCmd = DataDict.IpSignal;
PullCmpCmd.LongName = 'Pull Compensation Command';
PullCmpCmd.DocUnits = 'MotNwtMtr';
PullCmpCmd.EngDT = dt.float32;
PullCmpCmd.EngInit = 0;
PullCmpCmd.EngMin = -8.8;
PullCmpCmd.EngMax = 8.8;
PullCmpCmd.ReadIn = {'AssiSumLimPer1'};
PullCmpCmd.ReadType = 'Rte';


PwrLimrRednFac = DataDict.IpSignal;
PwrLimrRednFac.LongName = 'Power Limit Reduction Factor';
PwrLimrRednFac.DocUnits = 'Uls';
PwrLimrRednFac.EngDT = dt.float32;
PwrLimrRednFac.EngInit = 0;
PwrLimrRednFac.EngMin = 0;
PwrLimrRednFac.EngMax = 1;
PwrLimrRednFac.ReadIn = {'AssiSumLimPer1'};
PwrLimrRednFac.ReadType = 'Rte';


RtnCmd = DataDict.IpSignal;
RtnCmd.LongName = 'Return Command';
RtnCmd.DocUnits = 'MotNwtMtr';
RtnCmd.EngDT = dt.float32;
RtnCmd.EngInit = 0;
RtnCmd.EngMin = -8.8;
RtnCmd.EngMax = 8.8;
RtnCmd.ReadIn = {'AssiSumLimPer1'};
RtnCmd.ReadType = 'Rte';


StallMotTqLim = DataDict.IpSignal;
StallMotTqLim.LongName = 'Stall Motor Torque Limit';
StallMotTqLim.DocUnits = 'MotNwtMtr';
StallMotTqLim.EngDT = dt.float32;
StallMotTqLim.EngInit = 8.8;
StallMotTqLim.EngMin = 0;
StallMotTqLim.EngMax = 8.8;
StallMotTqLim.ReadIn = {'AssiSumLimPer1'};
StallMotTqLim.ReadType = 'Rte';


SysMotTqCmdSca = DataDict.IpSignal;
SysMotTqCmdSca.LongName = 'System Motor Torque Command Scale';
SysMotTqCmdSca.DocUnits = 'Uls';
SysMotTqCmdSca.EngDT = dt.float32;
SysMotTqCmdSca.EngInit = 1;
SysMotTqCmdSca.EngMin = 0;
SysMotTqCmdSca.EngMax = 1;
SysMotTqCmdSca.ReadIn = {'AssiSumLimPer1'};
SysMotTqCmdSca.ReadType = 'Rte';


ThermMotTqLim = DataDict.IpSignal;
ThermMotTqLim.LongName = 'Thermal Motor Torque Limit';
ThermMotTqLim.DocUnits = 'MotNwtMtr';
ThermMotTqLim.EngDT = dt.float32;
ThermMotTqLim.EngInit = 8.8;
ThermMotTqLim.EngMin = 0;
ThermMotTqLim.EngMax = 8.8;
ThermMotTqLim.ReadIn = {'AssiSumLimPer1'};
ThermMotTqLim.ReadType = 'Rte';


ThermRednFac = DataDict.IpSignal;
ThermRednFac.LongName = 'Thermal Reduction Factor';
ThermRednFac.DocUnits = 'Uls';
ThermRednFac.EngDT = dt.float32;
ThermRednFac.EngInit = 0;
ThermRednFac.EngMin = 0;
ThermRednFac.EngMax = 1;
ThermRednFac.ReadIn = {'AssiSumLimPer1'};
ThermRednFac.ReadType = 'Rte';


TqLoaCmd = DataDict.IpSignal;
TqLoaCmd.LongName = 'Toque Loss of Assist Command';
TqLoaCmd.DocUnits = 'MotNwtMtr';
TqLoaCmd.EngDT = dt.float32;
TqLoaCmd.EngInit = 0;
TqLoaCmd.EngMin = -8.8;
TqLoaCmd.EngMax = 8.8;
TqLoaCmd.ReadIn = {'AssiSumLimPer1'};
TqLoaCmd.ReadType = 'Rte';


TqSteerMtgtnCmd = DataDict.IpSignal;
TqSteerMtgtnCmd.LongName = 'Torque Steer Mitigation Command';
TqSteerMtgtnCmd.DocUnits = 'MotNwtMtr';
TqSteerMtgtnCmd.EngDT = dt.float32;
TqSteerMtgtnCmd.EngInit = 0;
TqSteerMtgtnCmd.EngMin = -3;
TqSteerMtgtnCmd.EngMax = 3;
TqSteerMtgtnCmd.ReadIn = {'AssiSumLimPer1'};
TqSteerMtgtnCmd.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'SetManTqCmd','AssiSumLimPer1'};
VehSpd.ReadType = 'Rte';


VehSpdMotTqLim = DataDict.IpSignal;
VehSpdMotTqLim.LongName = 'Vehicle Speed Motor Torque Limit';
VehSpdMotTqLim.DocUnits = 'MotNwtMtr';
VehSpdMotTqLim.EngDT = dt.float32;
VehSpdMotTqLim.EngInit = 8.8;
VehSpdMotTqLim.EngMin = 0;
VehSpdMotTqLim.EngMax = 8.8;
VehSpdMotTqLim.ReadIn = {'AssiSumLimPer1'};
VehSpdMotTqLim.ReadType = 'Rte';


WhlImbRejctnCmd = DataDict.IpSignal;
WhlImbRejctnCmd.LongName = 'Wheel Imbalance Rejection Command';
WhlImbRejctnCmd.DocUnits = 'MotNwtMtr';
WhlImbRejctnCmd.EngDT = dt.float32;
WhlImbRejctnCmd.EngInit = 0;
WhlImbRejctnCmd.EngMin = -8;
WhlImbRejctnCmd.EngMax = 8;
WhlImbRejctnCmd.ReadIn = {'AssiSumLimPer1'};
WhlImbRejctnCmd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotTqCmd = DataDict.OpSignal;
MotTqCmd.LongName = 'Motor Torque Command';
MotTqCmd.Description = [...
  'Signal with some limiting – used by SF19B - power limit function'];
MotTqCmd.DocUnits = 'MotNwtMtr';
MotTqCmd.SwcShoName = 'AssiSumLim';
MotTqCmd.EngDT = dt.float32;
MotTqCmd.EngInit = 0;
MotTqCmd.EngMin = -8.8;
MotTqCmd.EngMax = 8.8;
MotTqCmd.TestTolerance = 0.000488281;
MotTqCmd.WrittenIn = {'AssiSumLimPer1'};
MotTqCmd.WriteType = 'Rte';


MotTqCmdLimdPreStall = DataDict.OpSignal;
MotTqCmdLimdPreStall.LongName = 'Motor Torque Command Limited Pre-Stall';
MotTqCmdLimdPreStall.Description = [...
  'Signal with some limiting – used for stall algorithm'];
MotTqCmdLimdPreStall.DocUnits = 'MotNwtMtr';
MotTqCmdLimdPreStall.SwcShoName = 'AssiSumLim';
MotTqCmdLimdPreStall.EngDT = dt.float32;
MotTqCmdLimdPreStall.EngInit = 0;
MotTqCmdLimdPreStall.EngMin = 0;
MotTqCmdLimdPreStall.EngMax = 8.8;
MotTqCmdLimdPreStall.TestTolerance = 0.000488281;
MotTqCmdLimdPreStall.WrittenIn = {'AssiSumLimPer1'};
MotTqCmdLimdPreStall.WriteType = 'Rte';


MotTqCmdLimrMin = DataDict.OpSignal;
MotTqCmdLimrMin.LongName = 'Motor Torque Command Limiter Minimum';
MotTqCmdLimrMin.Description = [...
  'The overall minimum of limits applied by EOT Limit, Veh Spd Limit, Sta' ...
  'll Limit and Thermal Limit'];
MotTqCmdLimrMin.DocUnits = 'MotNwtMtr';
MotTqCmdLimrMin.SwcShoName = 'AssiSumLim';
MotTqCmdLimrMin.EngDT = dt.float32;
MotTqCmdLimrMin.EngInit = 8.8;
MotTqCmdLimrMin.EngMin = 0;
MotTqCmdLimrMin.EngMax = 8.8;
MotTqCmdLimrMin.TestTolerance = 0.000488281;
MotTqCmdLimrMin.WrittenIn = {'AssiSumLimPer1'};
MotTqCmdLimrMin.WriteType = 'Rte';


MotTqCmdPreLim = DataDict.OpSignal;
MotTqCmdPreLim.LongName = 'Motor Torque Command Pre-Limit';
MotTqCmdPreLim.Description = [...
  'The final summation of all torque command signals prior to any limitin' ...
  'g being applied.'];
MotTqCmdPreLim.DocUnits = 'MotNwtMtr';
MotTqCmdPreLim.SwcShoName = 'AssiSumLim';
MotTqCmdPreLim.EngDT = dt.float32;
MotTqCmdPreLim.EngInit = 0;
MotTqCmdPreLim.EngMin = -8.8;
MotTqCmdPreLim.EngMax = 8.8;
MotTqCmdPreLim.TestTolerance = 0.000488281;
MotTqCmdPreLim.WrittenIn = {'AssiSumLimPer1'};
MotTqCmdPreLim.WriteType = 'Rte';


SysProtnRednFac = DataDict.OpSignal;
SysProtnRednFac.LongName = 'System Protection Reduction Factor';
SysProtnRednFac.Description = [...
  'This term identifies the amount of limiting (based on the thermal duty' ...
  ' cycle and power limiting terms) for diagnostic uses.  The algorithm p' ...
  'rovides out the maximum amount of limiting between the two algorithms.' ...
  ''];
SysProtnRednFac.DocUnits = 'Uls';
SysProtnRednFac.SwcShoName = 'AssiSumLim';
SysProtnRednFac.EngDT = dt.float32;
SysProtnRednFac.EngInit = 0;
SysProtnRednFac.EngMin = 0;
SysProtnRednFac.EngMax = 1;
SysProtnRednFac.TestTolerance = 0.00012207;
SysProtnRednFac.WrittenIn = {'AssiSumLimPer1'};
SysProtnRednFac.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
ProcdManTqCmd = DataDict.IRV;
ProcdManTqCmd.LongName = 'Processed Manual Torque Command';
ProcdManTqCmd.Description = [...
  'This is the final processed value of Manual Torque Command.'];
ProcdManTqCmd.DocUnits = 'MotNwtMtr';
ProcdManTqCmd.EngDT = dt.float32;
ProcdManTqCmd.EngInit = 0;
ProcdManTqCmd.EngMin = -8.8;
ProcdManTqCmd.EngMax = 8.8;
ProcdManTqCmd.ReadIn = {'AssiSumLimPer1'};
ProcdManTqCmd.WrittenIn = {'SetManTqCmd'};


ProcdManTqCmdEna = DataDict.IRV;
ProcdManTqCmdEna.LongName = 'Processed Manual Torque Command Enable';
ProcdManTqCmdEna.Description = [...
  'This is the final processed value of Manual Torque Command Enable.'];
ProcdManTqCmdEna.DocUnits = 'Cnt';
ProcdManTqCmdEna.EngDT = dt.lgc;
ProcdManTqCmdEna.EngInit = 0;
ProcdManTqCmdEna.EngMin = 0;
ProcdManTqCmdEna.EngMax = 1;
ProcdManTqCmdEna.ReadIn = {'AssiSumLimPer1'};
ProcdManTqCmdEna.WrittenIn = {'SetManTqCmd'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
AssiSumLimNtc0x0C4FailStep = DataDict.Calibration;
AssiSumLimNtc0x0C4FailStep.LongName = 'Assist Sum Limit Nexteer Trouble Code 0x0C4 Fail Step';
AssiSumLimNtc0x0C4FailStep.Description = 'Pinion counter Debounce Value';
AssiSumLimNtc0x0C4FailStep.DocUnits = 'Cnt';
AssiSumLimNtc0x0C4FailStep.EngDT = dt.u16;
AssiSumLimNtc0x0C4FailStep.EngVal = 65535;
AssiSumLimNtc0x0C4FailStep.EngMin = 0;
AssiSumLimNtc0x0C4FailStep.EngMax = 65535;
AssiSumLimNtc0x0C4FailStep.ProgrammedBy = 'Nexteer';
AssiSumLimNtc0x0C4FailStep.Cardinality = 'N';
AssiSumLimNtc0x0C4FailStep.CustomerVisible = false;
AssiSumLimNtc0x0C4FailStep.Online = false;
AssiSumLimNtc0x0C4FailStep.Impact = 'M';
AssiSumLimNtc0x0C4FailStep.TuningOwner = 'Safety';
AssiSumLimNtc0x0C4FailStep.GraphLink = '';
AssiSumLimNtc0x0C4FailStep.Monotony = 'None';
AssiSumLimNtc0x0C4FailStep.MaxGrad = 999;
AssiSumLimNtc0x0C4FailStep.CoderInfo.CustomAttributes.PortName = 'AssiSumLimNtc0x0C4FailStep';


AssiSumLimNtc0x0C4PassStep = DataDict.Calibration;
AssiSumLimNtc0x0C4PassStep.LongName = 'Assist Sum Limit Nexteer Trouble Code 0x0C4 Pass Step';
AssiSumLimNtc0x0C4PassStep.Description = 'Pinion counter Debounce Value';
AssiSumLimNtc0x0C4PassStep.DocUnits = 'Cnt';
AssiSumLimNtc0x0C4PassStep.EngDT = dt.u16;
AssiSumLimNtc0x0C4PassStep.EngVal = 65535;
AssiSumLimNtc0x0C4PassStep.EngMin = 0;
AssiSumLimNtc0x0C4PassStep.EngMax = 65535;
AssiSumLimNtc0x0C4PassStep.ProgrammedBy = 'Nexteer';
AssiSumLimNtc0x0C4PassStep.Cardinality = 'N';
AssiSumLimNtc0x0C4PassStep.CustomerVisible = false;
AssiSumLimNtc0x0C4PassStep.Online = false;
AssiSumLimNtc0x0C4PassStep.Impact = 'M';
AssiSumLimNtc0x0C4PassStep.TuningOwner = 'Safety';
AssiSumLimNtc0x0C4PassStep.GraphLink = '';
AssiSumLimNtc0x0C4PassStep.Monotony = 'None';
AssiSumLimNtc0x0C4PassStep.MaxGrad = 999;
AssiSumLimNtc0x0C4PassStep.CoderInfo.CustomAttributes.PortName = 'AssiSumLimNtc0x0C4PassStep';


AssiSumLimPullCmpLim = DataDict.Calibration;
AssiSumLimPullCmpLim.LongName = 'Assist Sum Limit Pull Compensation Limit';
AssiSumLimPullCmpLim.Description = [...
  'SF-13 is not inherently ASIL-D, so using a firewall in this function.'];
AssiSumLimPullCmpLim.DocUnits = 'MotNwtMtr';
AssiSumLimPullCmpLim.EngDT = dt.float32;
AssiSumLimPullCmpLim.EngVal = 8.8;
AssiSumLimPullCmpLim.EngMin = 0;
AssiSumLimPullCmpLim.EngMax = 8.8;
AssiSumLimPullCmpLim.ProgrammedBy = 'Nexteer';
AssiSumLimPullCmpLim.Cardinality = 'N';
AssiSumLimPullCmpLim.CustomerVisible = false;
AssiSumLimPullCmpLim.Online = false;
AssiSumLimPullCmpLim.Impact = 'M';
AssiSumLimPullCmpLim.TuningOwner = 'Safety';
AssiSumLimPullCmpLim.GraphLink = '';
AssiSumLimPullCmpLim.Monotony = 'None';
AssiSumLimPullCmpLim.MaxGrad = 999;
AssiSumLimPullCmpLim.CoderInfo.CustomAttributes.PortName = 'AssiSumLimPullCmpLim';



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
CMDTHD_MOTNWTMTR_F32 = DataDict.Constant;
CMDTHD_MOTNWTMTR_F32.LongName = 'Command Threshold';
CMDTHD_MOTNWTMTR_F32.Description = [...
  'Safety threshold for features like Learn Pinion Center and Manual Torq' ...
  'ue Cmd.'];
CMDTHD_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
CMDTHD_MOTNWTMTR_F32.EngDT = dt.float32;
CMDTHD_MOTNWTMTR_F32.EngVal = 0.01;
CMDTHD_MOTNWTMTR_F32.Header = '';
CMDTHD_MOTNWTMTR_F32.Define = 'Local';


LIMPERCCMPLHILIM_ULS_F32 = DataDict.Constant;
LIMPERCCMPLHILIM_ULS_F32.LongName = 'Limit Percent Complete High Limit';
LIMPERCCMPLHILIM_ULS_F32.Description = [...
  'Upper limit applied to LimitPercentFiltered_Uls_f32'];
LIMPERCCMPLHILIM_ULS_F32.DocUnits = 'Uls';
LIMPERCCMPLHILIM_ULS_F32.EngDT = dt.float32;
LIMPERCCMPLHILIM_ULS_F32.EngVal = 1;
LIMPERCCMPLHILIM_ULS_F32.Header = '';
LIMPERCCMPLHILIM_ULS_F32.Define = 'Local';


LIMPERCCMPLLOLIM_ULS_F32 = DataDict.Constant;
LIMPERCCMPLLOLIM_ULS_F32.LongName = 'Limit Percent Complete Low Limit';
LIMPERCCMPLLOLIM_ULS_F32.Description = [...
  'Lower limit applied to LimitPercentFiltered_Uls_f32'];
LIMPERCCMPLLOLIM_ULS_F32.DocUnits = 'Uls';
LIMPERCCMPLLOLIM_ULS_F32.EngDT = dt.float32;
LIMPERCCMPLLOLIM_ULS_F32.EngVal = 0;
LIMPERCCMPLLOLIM_ULS_F32.Header = '';
LIMPERCCMPLLOLIM_ULS_F32.Define = 'Local';


MOTTQZERO_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQZERO_MOTNWTMTR_F32.LongName = 'Motor Torque Zero';
MOTTQZERO_MOTNWTMTR_F32.Description = [...
  'A way to set or limit motor torque command to zero.'];
MOTTQZERO_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQZERO_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQZERO_MOTNWTMTR_F32.EngVal = 0;
MOTTQZERO_MOTNWTMTR_F32.Header = '';
MOTTQZERO_MOTNWTMTR_F32.Define = 'Local';


VEHSPDTHD_KPH_F32 = DataDict.Constant;
VEHSPDTHD_KPH_F32.LongName = 'Vehicle Speed Threshold';
VEHSPDTHD_KPH_F32.Description = [...
  'Safety threshold for features like Learn Pinion Center and Manual Torq' ...
  'ue Cmd.'];
VEHSPDTHD_KPH_F32.DocUnits = 'Kph';
VEHSPDTHD_KPH_F32.EngDT = dt.float32;
VEHSPDTHD_KPH_F32.EngVal = 3;
VEHSPDTHD_KPH_F32.Header = '';
VEHSPDTHD_KPH_F32.Define = 'Local';


%end of Data Dictionary