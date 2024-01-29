%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Mar-2016 16:16:16       %
%                                  Created with tool release: 2.36.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

SF019B = DataDict.FDD;
SF019B.Version = '1.3.X';
SF019B.LongName = 'Power Limit- Current Mode';
SF019B.ShoName  = 'PwrLimr';
SF019B.DesignASIL = 'QM';
SF019B.Description = [...
  'The purpose of the Power Limit function is to limit the system output ' ...
  'power in a manner to enforce a desired limit on the system supply curr' ...
  'ent draw.  The Power Limit function limits system output power as a fu' ...
  'nction of available voltage at the inverter (DC Link Voltage) and Moto' ...
  'r Velocity.  Additionally, a function is included to prevent excessive' ...
  ' motor currents from being requested when the system is very hot (i.e.' ...
  ', in Extended Operating Conditions for temperature). In additional to ' ...
  'calculation of the Power Limit, the Power Limit Function also calculat' ...
  'es a level of degradation from Standard Operating Conditions full perf' ...
  'ormance and sets flags appropriately for a DTC (Log Only). *** PosSrvo' ...
  'Enable_Cnt_lgc is in documentation, but not in code. ***'];
SF019B.Dependencies = ...
	{'ArchGlbPrm', 'ElecGlbPrm', 'SysGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PwrLimrInit1 = DataDict.Runnable;
PwrLimrInit1.Context = 'Rte';
PwrLimrInit1.TimeStep = 0;
PwrLimrInit1.Description = '';

PwrLimrPer1 = DataDict.Runnable;
PwrLimrPer1.Context = 'Rte';
PwrLimrPer1.TimeStep = 0.002;
PwrLimrPer1.Description = '';

PwrLimrPer2 = DataDict.Runnable;
PwrLimrPer2.Context = 'Rte';
PwrLimrPer2.TimeStep = 0.01;
PwrLimrPer2.Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'PwrLimrPer2'};
GetRefTmr100MicroSec32bit.Description = '';
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Return.Description = '';
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = '';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'PwrLimrPer2'};
GetTiSpan100MicroSec32bit.Description = '';
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Return.Description = '';
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
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'PwrLimrPer2'};
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
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AltFltActv = DataDict.IpSignal;
AltFltActv.LongName = 'Alternator Fault Active';
AltFltActv.Description = '';
AltFltActv.DocUnits = 'Cnt';
AltFltActv.EngDT = dt.lgc;
AltFltActv.EngInit = 0;
AltFltActv.EngMin = 0;
AltFltActv.EngMax = 1;
AltFltActv.ReadIn = {'PwrLimrPer1'};
AltFltActv.ReadType = 'Rte';
AltFltActv.Description = '';


BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = '';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'PwrLimrPer1','PwrLimrPer2'};
BrdgVltg.ReadType = 'Rte';
BrdgVltg.Description = '';


IvtrLoaMtgtnEna = DataDict.IpSignal;
IvtrLoaMtgtnEna.LongName = 'Inverter Loss of Assist Mitigation Enable';
IvtrLoaMtgtnEna.Description = '';
IvtrLoaMtgtnEna.DocUnits = 'Cnt';
IvtrLoaMtgtnEna.EngDT = dt.lgc;
IvtrLoaMtgtnEna.EngInit = 0;
IvtrLoaMtgtnEna.EngMin = 0;
IvtrLoaMtgtnEna.EngMax = 1;
IvtrLoaMtgtnEna.ReadIn = {'PwrLimrPer1'};
IvtrLoaMtgtnEna.ReadType = 'Rte';
IvtrLoaMtgtnEna.Description = '';


MotBackEmfConEstimd = DataDict.IpSignal;
MotBackEmfConEstimd.LongName = 'Motor Back Emf Constant Estimated';
MotBackEmfConEstimd.Description = '';
MotBackEmfConEstimd.DocUnits = 'VoltPerMotRadPerSec';
MotBackEmfConEstimd.EngDT = dt.float32;
MotBackEmfConEstimd.EngInit = 0.025;
MotBackEmfConEstimd.EngMin = 0.025;
MotBackEmfConEstimd.EngMax = 0.075;
MotBackEmfConEstimd.ReadIn = {'PwrLimrPer1'};
MotBackEmfConEstimd.ReadType = 'Rte';
MotBackEmfConEstimd.Description = '';


MotTqCmdMrf = DataDict.IpSignal;
MotTqCmdMrf.LongName = 'Control Disable Motor Torque Command Motor Reference Frame';
MotTqCmdMrf.Description = '';
MotTqCmdMrf.DocUnits = 'MotNwtMtr';
MotTqCmdMrf.EngDT = dt.float32;
MotTqCmdMrf.EngInit = 0;
MotTqCmdMrf.EngMin = -8.8;
MotTqCmdMrf.EngMax = 8.8;
MotTqCmdMrf.ReadIn = {'PwrLimrPer1','PwrLimrPer2'};
MotTqCmdMrf.ReadType = 'Rte';
MotTqCmdMrf.Description = '';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotVelMrf.Description = '';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'PwrLimrPer1'};
MotVelMrf.ReadType = 'Rte';
MotVelMrf.Description = '';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotTqCmdPwrLimd = DataDict.OpSignal;
MotTqCmdPwrLimd.LongName = 'Motor Torque Command Power Limited';
MotTqCmdPwrLimd.Description = [...
  'Motor Torque Command Power Limited.'];
MotTqCmdPwrLimd.DocUnits = 'MotNwtMtr';
MotTqCmdPwrLimd.SwcShoName = 'PwrLimr';
MotTqCmdPwrLimd.EngDT = dt.float32;
MotTqCmdPwrLimd.EngInit = 0;
MotTqCmdPwrLimd.EngMin = -8.8;
MotTqCmdPwrLimd.EngMax = 8.8;
MotTqCmdPwrLimd.TestTolerance = 0.000488281;
MotTqCmdPwrLimd.WrittenIn = {'PwrLimrPer1'};
MotTqCmdPwrLimd.WriteType = 'Rte';


PwrLimrRednFac = DataDict.OpSignal;
PwrLimrRednFac.LongName = 'Power Limiter Reduction Factor';
PwrLimrRednFac.Description = 'Power Limiter Reduction Factor.';
PwrLimrRednFac.DocUnits = 'Uls';
PwrLimrRednFac.SwcShoName = 'PwrLimr';
PwrLimrRednFac.EngDT = dt.float32;
PwrLimrRednFac.EngInit = 0;
PwrLimrRednFac.EngMin = 0;
PwrLimrRednFac.EngMax = 1;
PwrLimrRednFac.TestTolerance = 0.00390625;
PwrLimrRednFac.WrittenIn = {'PwrLimrPer2'};
PwrLimrRednFac.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
MinStdOperLim = DataDict.IRV;
MinStdOperLim.LongName = 'Minimum Standard Operation Limit';
MinStdOperLim.Description = [...
  'Maximum allowable magnitude of net assist when operating at minimum st' ...
  'andard operating conditions.'];
MinStdOperLim.DocUnits = 'MotNwtMtr';
MinStdOperLim.EngDT = dt.float32;
MinStdOperLim.EngInit = 8.8;
MinStdOperLim.EngMin = 0;
MinStdOperLim.EngMax = 8.8;
MinStdOperLim.ReadIn = {'PwrLimrPer2'};
MinStdOperLim.WrittenIn = {'PwrLimrPer1'};


MotEnvlpSpd = DataDict.IRV;
MotEnvlpSpd.LongName = 'Motor Envelope Speed';
MotEnvlpSpd.Description = '';
MotEnvlpSpd.DocUnits = 'MotRadPerSec';
MotEnvlpSpd.EngDT = dt.float32;
MotEnvlpSpd.EngInit = 0;
MotEnvlpSpd.EngMin = -2700;
MotEnvlpSpd.EngMax = 2700;
MotEnvlpSpd.ReadIn = {'PwrLimrPer2'};
MotEnvlpSpd.WrittenIn = {'PwrLimrPer1'};


TqEnvlpLim1 = DataDict.IRV;
TqEnvlpLim1.LongName = 'Torque Envelope Limit 1';
TqEnvlpLim1.Description = [...
  'Abs(MotTqCmd)must be > this, otherwise torque limit = zero.'];
TqEnvlpLim1.DocUnits = 'MotNwtMtr';
TqEnvlpLim1.EngDT = dt.float32;
TqEnvlpLim1.EngInit = 0;
TqEnvlpLim1.EngMin = 0;
TqEnvlpLim1.EngMax = 8.8;
TqEnvlpLim1.ReadIn = {'PwrLimrPer2'};
TqEnvlpLim1.WrittenIn = {'PwrLimrPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PwrLimrAssiRednLpFilFrq = DataDict.Calibration;
PwrLimrAssiRednLpFilFrq.LongName = 'Assist Reduction Low Pass Filter Frequency';
PwrLimrAssiRednLpFilFrq.Description = [...
  'Calibration value to set the cutoff frequency of the low pass filter f' ...
  'or the calculated limit percentage.'];
PwrLimrAssiRednLpFilFrq.DocUnits = 'Hz';
PwrLimrAssiRednLpFilFrq.EngDT = dt.float32;
PwrLimrAssiRednLpFilFrq.EngVal = 0.365;
PwrLimrAssiRednLpFilFrq.EngMin = 0.1;
PwrLimrAssiRednLpFilFrq.EngMax = 1;
PwrLimrAssiRednLpFilFrq.Cardinality = 'Cmn';
PwrLimrAssiRednLpFilFrq.CustomerVisible = false;
PwrLimrAssiRednLpFilFrq.Online = false;
PwrLimrAssiRednLpFilFrq.Impact = 'H';
PwrLimrAssiRednLpFilFrq.TuningOwner = '?';
PwrLimrAssiRednLpFilFrq.GraphLink = {''};
PwrLimrAssiRednLpFilFrq.Monotony = 'None';
PwrLimrAssiRednLpFilFrq.MaxGrad = 0.9;
PwrLimrAssiRednLpFilFrq.PortName = 'PwrLimrAssiRednLpFilFrq';


PwrLimrBackEmfConStdT = DataDict.Calibration;
PwrLimrBackEmfConStdT.LongName = 'Back EMF Constant Standard Temperature';
PwrLimrBackEmfConStdT.Description = [...
  'Calibration value representing the minimum expected value of the Ke es' ...
  'timate while operating in the Standard Operating conditions temperatur' ...
  'e range.'];
PwrLimrBackEmfConStdT.DocUnits = 'VoltPerMotRadPerSec';
PwrLimrBackEmfConStdT.EngDT = dt.float32;
PwrLimrBackEmfConStdT.EngVal = 0.0335999;
PwrLimrBackEmfConStdT.EngMin = 0.025;
PwrLimrBackEmfConStdT.EngMax = 0.075;
PwrLimrBackEmfConStdT.Cardinality = 'Cmn';
PwrLimrBackEmfConStdT.CustomerVisible = false;
PwrLimrBackEmfConStdT.Online = false;
PwrLimrBackEmfConStdT.Impact = 'H';
PwrLimrBackEmfConStdT.TuningOwner = '?';
PwrLimrBackEmfConStdT.GraphLink = {''};
PwrLimrBackEmfConStdT.Monotony = 'None';
PwrLimrBackEmfConStdT.MaxGrad = 0.05;
PwrLimrBackEmfConStdT.PortName = 'PwrLimrBackEmfConStdT';


PwrLimrBrdgVltgAdjSlew = DataDict.Calibration;
PwrLimrBrdgVltgAdjSlew.LongName = 'Bridge Voltage Adjust Slew';
PwrLimrBrdgVltgAdjSlew.Description = [...
  'Calibration value to set the slew limit rate at which the Vecu Adjust ' ...
  'value can change. It was Volts/Loop, now it is Volts/Sec'];
PwrLimrBrdgVltgAdjSlew.DocUnits = 'VoltPerSec';
PwrLimrBrdgVltgAdjSlew.EngDT = dt.float32;
PwrLimrBrdgVltgAdjSlew.EngVal = 0.5;
PwrLimrBrdgVltgAdjSlew.EngMin = 0.244;
PwrLimrBrdgVltgAdjSlew.EngMax = 5;
PwrLimrBrdgVltgAdjSlew.Cardinality = 'Cmn';
PwrLimrBrdgVltgAdjSlew.CustomerVisible = false;
PwrLimrBrdgVltgAdjSlew.Online = false;
PwrLimrBrdgVltgAdjSlew.Impact = 'H';
PwrLimrBrdgVltgAdjSlew.TuningOwner = '?';
PwrLimrBrdgVltgAdjSlew.GraphLink = {''};
PwrLimrBrdgVltgAdjSlew.Monotony = 'None';
PwrLimrBrdgVltgAdjSlew.MaxGrad = 4.756;
PwrLimrBrdgVltgAdjSlew.PortName = 'PwrLimrBrdgVltgAdjSlew';


PwrLimrBrdgVltgAltFltAdj = DataDict.Calibration;
PwrLimrBrdgVltgAltFltAdj.LongName = 'Bridge Voltage Alternator Fault Adjustment';
PwrLimrBrdgVltgAltFltAdj.Description = [...
  'Calibration value representing the amount by which Vecu should be redu' ...
  'ced during an alternator fault.'];
PwrLimrBrdgVltgAltFltAdj.DocUnits = 'Volt';
PwrLimrBrdgVltgAltFltAdj.EngDT = dt.float32;
PwrLimrBrdgVltgAltFltAdj.EngVal = 1;
PwrLimrBrdgVltgAltFltAdj.EngMin = 0;
PwrLimrBrdgVltgAltFltAdj.EngMax = 3;
PwrLimrBrdgVltgAltFltAdj.Cardinality = 'Cmn';
PwrLimrBrdgVltgAltFltAdj.CustomerVisible = false;
PwrLimrBrdgVltgAltFltAdj.Online = false;
PwrLimrBrdgVltgAltFltAdj.Impact = 'H';
PwrLimrBrdgVltgAltFltAdj.TuningOwner = '?';
PwrLimrBrdgVltgAltFltAdj.GraphLink = {''};
PwrLimrBrdgVltgAltFltAdj.Monotony = 'None';
PwrLimrBrdgVltgAltFltAdj.MaxGrad = 3;
PwrLimrBrdgVltgAltFltAdj.PortName = 'PwrLimrBrdgVltgAltFltAdj';


PwrLimrFilAssiRednThd = DataDict.Calibration;
PwrLimrFilAssiRednThd.LongName = 'Filter Assist Reduction Threshold';
PwrLimrFilAssiRednThd.Description = [...
  'Calibration value above which a Nexteer DTC should be set.'];
PwrLimrFilAssiRednThd.DocUnits = 'Uls';
PwrLimrFilAssiRednThd.EngDT = dt.float32;
PwrLimrFilAssiRednThd.EngVal = 0.6;
PwrLimrFilAssiRednThd.EngMin = 0;
PwrLimrFilAssiRednThd.EngMax = 1;
PwrLimrFilAssiRednThd.Cardinality = 'Cmn';
PwrLimrFilAssiRednThd.CustomerVisible = false;
PwrLimrFilAssiRednThd.Online = false;
PwrLimrFilAssiRednThd.Impact = 'H';
PwrLimrFilAssiRednThd.TuningOwner = '?';
PwrLimrFilAssiRednThd.GraphLink = {''};
PwrLimrFilAssiRednThd.Monotony = 'None';
PwrLimrFilAssiRednThd.MaxGrad = 1;
PwrLimrFilAssiRednThd.PortName = 'PwrLimrFilAssiRednThd';


PwrLimrLoVoltAssiRcvrThd = DataDict.Calibration;
PwrLimrLoVoltAssiRcvrThd.LongName = 'Low Volt Assist Recover Threshold';
PwrLimrLoVoltAssiRcvrThd.Description = [...
  'Calibration value representing the voltage level at which the output f' ...
  'lag(s) can be reset.'];
PwrLimrLoVoltAssiRcvrThd.DocUnits = 'Volt';
PwrLimrLoVoltAssiRcvrThd.EngDT = dt.float32;
PwrLimrLoVoltAssiRcvrThd.EngVal = 13.5;
PwrLimrLoVoltAssiRcvrThd.EngMin = 0;
PwrLimrLoVoltAssiRcvrThd.EngMax = 18;
PwrLimrLoVoltAssiRcvrThd.Cardinality = 'Cmn';
PwrLimrLoVoltAssiRcvrThd.CustomerVisible = false;
PwrLimrLoVoltAssiRcvrThd.Online = false;
PwrLimrLoVoltAssiRcvrThd.Impact = 'H';
PwrLimrLoVoltAssiRcvrThd.TuningOwner = '?';
PwrLimrLoVoltAssiRcvrThd.GraphLink = {''};
PwrLimrLoVoltAssiRcvrThd.Monotony = 'None';
PwrLimrLoVoltAssiRcvrThd.MaxGrad = 18;
PwrLimrLoVoltAssiRcvrThd.PortName = 'PwrLimrLoVoltAssiRcvrThd';


PwrLimrLoVoltAssiRcvrTi = DataDict.Calibration;
PwrLimrLoVoltAssiRcvrTi.LongName = 'Low Volt Assist Recover Time';
PwrLimrLoVoltAssiRcvrTi.Description = [...
  'Calibration value representing how much time Vecu must be above the ca' ...
  'libratable voltage threshold (defined below) in order to reset output ' ...
  'flag status.'];
PwrLimrLoVoltAssiRcvrTi.DocUnits = 'MilliSec';
PwrLimrLoVoltAssiRcvrTi.EngDT = dt.u16;
PwrLimrLoVoltAssiRcvrTi.EngVal = 2000;
PwrLimrLoVoltAssiRcvrTi.EngMin = 0;
PwrLimrLoVoltAssiRcvrTi.EngMax = 65535;
PwrLimrLoVoltAssiRcvrTi.Cardinality = 'Cmn';
PwrLimrLoVoltAssiRcvrTi.CustomerVisible = false;
PwrLimrLoVoltAssiRcvrTi.Online = false;
PwrLimrLoVoltAssiRcvrTi.Impact = 'H';
PwrLimrLoVoltAssiRcvrTi.TuningOwner = '?';
PwrLimrLoVoltAssiRcvrTi.GraphLink = {''};
PwrLimrLoVoltAssiRcvrTi.Monotony = 'None';
PwrLimrLoVoltAssiRcvrTi.MaxGrad = 65535;
PwrLimrLoVoltAssiRcvrTi.PortName = 'PwrLimrLoVoltAssiRcvrTi';


PwrLimrMotEnvlpX = DataDict.Calibration;
PwrLimrMotEnvlpX.LongName = 'Motor Envelope X';
PwrLimrMotEnvlpX.Description = [...
  'Table to determine motor velocity dependent torque limit (nominal) – M' ...
  'otor Envelope (X Axis).'];
PwrLimrMotEnvlpX.DocUnits = 'MotRadPerSec';
PwrLimrMotEnvlpX.EngDT = dt.s11p4;
PwrLimrMotEnvlpX.EngVal =  ...
   [-1100             -800             -650             -550        -353.5625           -287.5        -218.6875        -108.1875                0         108.1875         218.6875            287.5         353.5625              550];
PwrLimrMotEnvlpX.EngMin = -1350;
PwrLimrMotEnvlpX.EngMax = 1350;
PwrLimrMotEnvlpX.Cardinality = 'Cmn';
PwrLimrMotEnvlpX.CustomerVisible = false;
PwrLimrMotEnvlpX.Online = false;
PwrLimrMotEnvlpX.Impact = 'H';
PwrLimrMotEnvlpX.TuningOwner = '?';
PwrLimrMotEnvlpX.GraphLink = {''};
PwrLimrMotEnvlpX.Monotony = 'Strictly_Increasing';
PwrLimrMotEnvlpX.MaxGrad = 2700;
PwrLimrMotEnvlpX.PortName = 'PwrLimrMotEnvlpX';


PwrLimrMotEnvlpY = DataDict.Calibration;
PwrLimrMotEnvlpY.LongName = 'Motor Envelope Y';
PwrLimrMotEnvlpY.Description = [...
  'Table to determine motor velocity dependent torque limit (nominal) – M' ...
  'otor Envelope (Y Axis).'];
PwrLimrMotEnvlpY.DocUnits = 'MotNwtMtr';
PwrLimrMotEnvlpY.EngDT = dt.u5p11;
PwrLimrMotEnvlpY.EngVal =  ...
   [0.7202148         1.399902         1.899902         2.299805              3.5         4.100098         4.631836         4.631836         4.631836         4.631836         3.553223         2.926758         2.200195                0];
PwrLimrMotEnvlpY.EngMin = 0;
PwrLimrMotEnvlpY.EngMax = 8.8;
PwrLimrMotEnvlpY.Cardinality = 'Cmn';
PwrLimrMotEnvlpY.CustomerVisible = false;
PwrLimrMotEnvlpY.Online = false;
PwrLimrMotEnvlpY.Impact = 'H';
PwrLimrMotEnvlpY.TuningOwner = '?';
PwrLimrMotEnvlpY.GraphLink = {'PwrLimrMotEnvlpX'};
PwrLimrMotEnvlpY.Monotony = 'None';
PwrLimrMotEnvlpY.MaxGrad = 8.79;
PwrLimrMotEnvlpY.PortName = 'PwrLimrMotEnvlpY';


PwrLimrMotVelLpFilFrq = DataDict.Calibration;
PwrLimrMotVelLpFilFrq.LongName = 'Motor Velocity Low Pass Filter Frequency';
PwrLimrMotVelLpFilFrq.Description = [...
  'Calibratable Cut off frequency for Motor Velocity Filter – specific to' ...
  ' Brush EPS. Can be calibrated to a very high value to turn off the fil' ...
  'ter for Brushless applications.'];
PwrLimrMotVelLpFilFrq.DocUnits = 'Hz';
PwrLimrMotVelLpFilFrq.EngDT = dt.float32;
PwrLimrMotVelLpFilFrq.EngVal = 100;
PwrLimrMotVelLpFilFrq.EngMin = 0.005;
PwrLimrMotVelLpFilFrq.EngMax = 250;
PwrLimrMotVelLpFilFrq.Cardinality = 'Cmn';
PwrLimrMotVelLpFilFrq.CustomerVisible = false;
PwrLimrMotVelLpFilFrq.Online = false;
PwrLimrMotVelLpFilFrq.Impact = 'H';
PwrLimrMotVelLpFilFrq.TuningOwner = '?';
PwrLimrMotVelLpFilFrq.GraphLink = {''};
PwrLimrMotVelLpFilFrq.Monotony = 'None';
PwrLimrMotVelLpFilFrq.MaxGrad = 249.995;
PwrLimrMotVelLpFilFrq.PortName = 'PwrLimrMotVelLpFilFrq';


PwrLimrSpdAdjSlewDec = DataDict.Calibration;
PwrLimrSpdAdjSlewDec.LongName = 'Speed Adjust Slew Decrease';
PwrLimrSpdAdjSlewDec.Description = [...
  'Calibration value to set the slew limit rate at which the Offset Outpu' ...
  't Velocity value after slew limiting can change when the Offset Output' ...
  ' Velocity value is decreasing.'...
  'Siva - Discussed with Prerit on 30-Mar-2016 about the new values.'];
PwrLimrSpdAdjSlewDec.DocUnits = 'MotRadPerSecPerSec';
PwrLimrSpdAdjSlewDec.EngDT = dt.float32;
PwrLimrSpdAdjSlewDec.EngVal = 3.125;
PwrLimrSpdAdjSlewDec.EngMin = 0.5;
PwrLimrSpdAdjSlewDec.EngMax = 250000;
PwrLimrSpdAdjSlewDec.Cardinality = 'Cmn';
PwrLimrSpdAdjSlewDec.CustomerVisible = false;
PwrLimrSpdAdjSlewDec.Online = false;
PwrLimrSpdAdjSlewDec.Impact = 'H';
PwrLimrSpdAdjSlewDec.TuningOwner = '?';
PwrLimrSpdAdjSlewDec.GraphLink = {''};
PwrLimrSpdAdjSlewDec.Monotony = 'None';
PwrLimrSpdAdjSlewDec.MaxGrad = 249999.5;
PwrLimrSpdAdjSlewDec.PortName = 'PwrLimrSpdAdjSlewDec';


PwrLimrSpdAdjSlewEna = DataDict.Calibration;
PwrLimrSpdAdjSlewEna.LongName = 'Speed Adjust Slew Enable';
PwrLimrSpdAdjSlewEna.Description = [...
  'Enable for the Offset Output Velocity Slew Rate Limit Function.'];
PwrLimrSpdAdjSlewEna.DocUnits = 'Cnt';
PwrLimrSpdAdjSlewEna.EngDT = dt.lgc;
PwrLimrSpdAdjSlewEna.EngVal = 1;
PwrLimrSpdAdjSlewEna.EngMin = 0;
PwrLimrSpdAdjSlewEna.EngMax = 1;
PwrLimrSpdAdjSlewEna.Cardinality = 'Cmn';
PwrLimrSpdAdjSlewEna.CustomerVisible = false;
PwrLimrSpdAdjSlewEna.Online = false;
PwrLimrSpdAdjSlewEna.Impact = 'H';
PwrLimrSpdAdjSlewEna.TuningOwner = '?';
PwrLimrSpdAdjSlewEna.GraphLink = {''};
PwrLimrSpdAdjSlewEna.Monotony = 'None';
PwrLimrSpdAdjSlewEna.MaxGrad = 1;
PwrLimrSpdAdjSlewEna.PortName = 'PwrLimrSpdAdjSlewEna';


PwrLimrSpdAdjSlewInc = DataDict.Calibration;
PwrLimrSpdAdjSlewInc.LongName = 'Speed Adjust Slew Increase';
PwrLimrSpdAdjSlewInc.Description = [...
  'Calibration value to set the slew limit rate at which the Offset Outpu' ...
  't Velocity value after slew limiting can change when the Offset Output' ...
  ' Velocity value is increasing.'...
  'Siva - Discussed with Prerit on 30-Mar-2016 about the new values.'];
PwrLimrSpdAdjSlewInc.DocUnits = 'MotRadPerSecPerSec';
PwrLimrSpdAdjSlewInc.EngDT = dt.float32;
PwrLimrSpdAdjSlewInc.EngVal = 3125;
PwrLimrSpdAdjSlewInc.EngMin = 0.5;
PwrLimrSpdAdjSlewInc.EngMax = 250000;
PwrLimrSpdAdjSlewInc.Cardinality = 'Cmn';
PwrLimrSpdAdjSlewInc.CustomerVisible = false;
PwrLimrSpdAdjSlewInc.Online = false;
PwrLimrSpdAdjSlewInc.Impact = 'H';
PwrLimrSpdAdjSlewInc.TuningOwner = '?';
PwrLimrSpdAdjSlewInc.GraphLink = {''};
PwrLimrSpdAdjSlewInc.Monotony = 'None';
PwrLimrSpdAdjSlewInc.MaxGrad = 249999.5;
PwrLimrSpdAdjSlewInc.PortName = 'PwrLimrSpdAdjSlewInc';


PwrLimrStdOperMotEnvlpX = DataDict.Calibration;
PwrLimrStdOperMotEnvlpX.LongName = 'Standard Operating Motor Envelope Table X';
PwrLimrStdOperMotEnvlpX.Description = [...
  'Table to determine motor velocity dependent torque limit at minimum St' ...
  'andard Operating Conditions Voltage.'];
PwrLimrStdOperMotEnvlpX.DocUnits = 'MotRadPerSec';
PwrLimrStdOperMotEnvlpX.EngDT = dt.u11p5;
PwrLimrStdOperMotEnvlpX.EngVal =  ...
   [0          68.1875         178.6563         247.4688         313.5625              510];
PwrLimrStdOperMotEnvlpX.EngMin = 0;
PwrLimrStdOperMotEnvlpX.EngMax = 1350;
PwrLimrStdOperMotEnvlpX.Cardinality = 'Cmn';
PwrLimrStdOperMotEnvlpX.CustomerVisible = false;
PwrLimrStdOperMotEnvlpX.Online = false;
PwrLimrStdOperMotEnvlpX.Impact = 'H';
PwrLimrStdOperMotEnvlpX.TuningOwner = '?';
PwrLimrStdOperMotEnvlpX.GraphLink = {''};
PwrLimrStdOperMotEnvlpX.Monotony = 'Strictly_Increasing';
PwrLimrStdOperMotEnvlpX.MaxGrad = 1350;
PwrLimrStdOperMotEnvlpX.PortName = 'PwrLimrStdOperMotEnvlpX';


PwrLimrStdOperMotEnvlpY = DataDict.Calibration;
PwrLimrStdOperMotEnvlpY.LongName = 'Standard Operating Motor Envelope Table Y';
PwrLimrStdOperMotEnvlpY.Description = [...
  'Table to determine motor velocity dependent torque limit at minimum St' ...
  'andard Operating Conditions Voltage.'];
PwrLimrStdOperMotEnvlpY.DocUnits = 'MotNwtMtr';
PwrLimrStdOperMotEnvlpY.EngDT = dt.u4p12;
PwrLimrStdOperMotEnvlpY.EngVal =  ...
   [4.63208          4.63208         3.552979         2.927002         2.199951                0];
PwrLimrStdOperMotEnvlpY.EngMin = 0;
PwrLimrStdOperMotEnvlpY.EngMax = 8.8;
PwrLimrStdOperMotEnvlpY.Cardinality = 'Cmn';
PwrLimrStdOperMotEnvlpY.CustomerVisible = false;
PwrLimrStdOperMotEnvlpY.Online = false;
PwrLimrStdOperMotEnvlpY.Impact = 'H';
PwrLimrStdOperMotEnvlpY.TuningOwner = '?';
PwrLimrStdOperMotEnvlpY.GraphLink = {'PwrLimrStdOperMotEnvlpX'};
PwrLimrStdOperMotEnvlpY.Monotony = 'None';
PwrLimrStdOperMotEnvlpY.MaxGrad = 8.79;
PwrLimrStdOperMotEnvlpY.PortName = 'PwrLimrStdOperMotEnvlpY';


PwrLimrVltgDptMotVelOffsX = DataDict.Calibration;
PwrLimrVltgDptMotVelOffsX.LongName = 'Voltage Dependent Motor Velocity Offset Table X';
PwrLimrVltgDptMotVelOffsX.Description = [...
  'Table to determine Voltage dependent motor velocity offset for use in ' ...
  'Output Velocity Function (X Axis).'];
PwrLimrVltgDptMotVelOffsX.DocUnits = 'Volt';
PwrLimrVltgDptMotVelOffsX.EngDT = dt.u5p11;
PwrLimrVltgDptMotVelOffsX.EngVal =  ...
   [8.542969         9.144531         9.242188          9.34375         9.441406         9.542969         10.04297         10.54297         10.84375         12.34375];
PwrLimrVltgDptMotVelOffsX.EngMin = 5;
PwrLimrVltgDptMotVelOffsX.EngMax = 31;
PwrLimrVltgDptMotVelOffsX.Cardinality = 'Cmn';
PwrLimrVltgDptMotVelOffsX.CustomerVisible = false;
PwrLimrVltgDptMotVelOffsX.Online = false;
PwrLimrVltgDptMotVelOffsX.Impact = 'H';
PwrLimrVltgDptMotVelOffsX.TuningOwner = '?';
PwrLimrVltgDptMotVelOffsX.GraphLink = {''};
PwrLimrVltgDptMotVelOffsX.Monotony = 'Strictly_Increasing';
PwrLimrVltgDptMotVelOffsX.MaxGrad = 26;
PwrLimrVltgDptMotVelOffsX.PortName = 'PwrLimrVltgDptMotVelOffsX';


PwrLimrVltgDptMotVelOffsY = DataDict.Calibration;
PwrLimrVltgDptMotVelOffsY.LongName = 'Voltage Dependent Motor Velocity Offset Table Y';
PwrLimrVltgDptMotVelOffsY.Description = [...
  'Table to determine Voltage dependent motor velocity offset for use in ' ...
  'Output Velocity Function (Y Axis).'];
PwrLimrVltgDptMotVelOffsY.DocUnits = 'MotRadPerSec';
PwrLimrVltgDptMotVelOffsY.EngDT = dt.u11p5;
PwrLimrVltgDptMotVelOffsY.EngVal =  ...
   [106.0938         89.34375         86.53125            83.75         80.96875         78.15625          64.1875            50.25           41.875                0];
PwrLimrVltgDptMotVelOffsY.EngMin = 0;
PwrLimrVltgDptMotVelOffsY.EngMax = 695;
PwrLimrVltgDptMotVelOffsY.Cardinality = 'Cmn';
PwrLimrVltgDptMotVelOffsY.CustomerVisible = false;
PwrLimrVltgDptMotVelOffsY.Online = false;
PwrLimrVltgDptMotVelOffsY.Impact = 'H';
PwrLimrVltgDptMotVelOffsY.TuningOwner = '?';
PwrLimrVltgDptMotVelOffsY.GraphLink = {'PwrLimrVltgDptMotVelOffsX'};
PwrLimrVltgDptMotVelOffsY.Monotony = 'None';
PwrLimrVltgDptMotVelOffsY.MaxGrad = 1350;
PwrLimrVltgDptMotVelOffsY.PortName = 'PwrLimrVltgDptMotVelOffsY';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dPwrLimrFildMotVel = DataDict.Display;
dPwrLimrFildMotVel.LongName = 'Filtered Motor Velocity';
dPwrLimrFildMotVel.Description = [...
  'Motor velocity after low-pass filter.'];
dPwrLimrFildMotVel.DocUnits = 'MotRadPerSec';
dPwrLimrFildMotVel.EngDT = dt.float32;
dPwrLimrFildMotVel.EngMin = -1350;
dPwrLimrFildMotVel.EngMax = 1350;
dPwrLimrFildMotVel.InitRowCol = [1  1];


dPwrLimrLimDif = DataDict.Display;
dPwrLimrLimDif.LongName = 'Limit Difference';
dPwrLimrLimDif.Description = [...
  'Difference between two limiters: TrqEnvLmt1 and MinStdOpmacaulay culki' ...
  'nLmt.'];
dPwrLimrLimDif.DocUnits = 'MotNwtMtr';
dPwrLimrLimDif.EngDT = dt.float32;
dPwrLimrLimDif.EngMin = -8.8;
dPwrLimrLimDif.EngMax = 8.8;
dPwrLimrLimDif.InitRowCol = [1  1];


dPwrLimrMinStdOperLim = DataDict.Display;
dPwrLimrMinStdOperLim.LongName = 'Minimum Standard Operating Limit';
dPwrLimrMinStdOperLim.Description = [...
  'Maximum net assist at minimum voltage defined for Stadand Operating Co' ...
  'ndition.'];
dPwrLimrMinStdOperLim.DocUnits = 'MotNwtMtr';
dPwrLimrMinStdOperLim.EngDT = dt.float32;
dPwrLimrMinStdOperLim.EngMin = -8.8;
dPwrLimrMinStdOperLim.EngMax = 8.8;
dPwrLimrMinStdOperLim.InitRowCol = [1  1];


dPwrLimrMotEnvlpSpd = DataDict.Display;
dPwrLimrMotEnvlpSpd.LongName = 'Motor Envelope Speed';
dPwrLimrMotEnvlpSpd.Description = [...
  'The Sum of Filtered Motor Velocity and Speed Adjust'];
dPwrLimrMotEnvlpSpd.DocUnits = 'MotRadPerSec';
dPwrLimrMotEnvlpSpd.EngDT = dt.float32;
dPwrLimrMotEnvlpSpd.EngMin = -1350;
dPwrLimrMotEnvlpSpd.EngMax = 1350;
dPwrLimrMotEnvlpSpd.InitRowCol = [1  1];


dPwrLimrMotTqCmdIvtrLoaSca = DataDict.Display;
dPwrLimrMotTqCmdIvtrLoaSca.LongName = 'Motor Torque Command Inverter LOA Scale';
dPwrLimrMotTqCmdIvtrLoaSca.Description = [...
  'Motor Torque Command Divided based on Inverter LOA Enabled'];
dPwrLimrMotTqCmdIvtrLoaSca.DocUnits = 'MotNwtMtr';
dPwrLimrMotTqCmdIvtrLoaSca.EngDT = dt.float32;
dPwrLimrMotTqCmdIvtrLoaSca.EngMin = -8.8;
dPwrLimrMotTqCmdIvtrLoaSca.EngMax = 8.8;
dPwrLimrMotTqCmdIvtrLoaSca.InitRowCol = [1  1];


dPwrLimrOutpVelOffs = DataDict.Display;
dPwrLimrOutpVelOffs.LongName = 'Output Velocity Offset';
dPwrLimrOutpVelOffs.Description = [...
  'Based on Vecu, motor velocity is offset this much.'];
dPwrLimrOutpVelOffs.DocUnits = 'MotRadPerSec';
dPwrLimrOutpVelOffs.EngDT = dt.float32;
dPwrLimrOutpVelOffs.EngMin = -1350;
dPwrLimrOutpVelOffs.EngMax = 1350;
dPwrLimrOutpVelOffs.InitRowCol = [1  1];


dPwrLimrSpdAdj = DataDict.Display;
dPwrLimrSpdAdj.LongName = 'Speed Adjust';
dPwrLimrSpdAdj.Description = 'OpVelOffset slewed or not slewed';
dPwrLimrSpdAdj.DocUnits = 'MotRadPerSec';
dPwrLimrSpdAdj.EngDT = dt.float32;
dPwrLimrSpdAdj.EngMin = -1350;
dPwrLimrSpdAdj.EngMax = 1350;
dPwrLimrSpdAdj.InitRowCol = [1  1];


dPwrLimrTLimMaxCurr = DataDict.Display;
dPwrLimrTLimMaxCurr.LongName = 'Torque Limit from Maximum Current';
dPwrLimrTLimMaxCurr.Description = [...
  'Motor command magnitude limt based on estimated Ke.'];
dPwrLimrTLimMaxCurr.DocUnits = 'MotNwtMtr';
dPwrLimrTLimMaxCurr.EngDT = dt.float32;
dPwrLimrTLimMaxCurr.EngMin = -8.8;
dPwrLimrTLimMaxCurr.EngMax = 8.8;
dPwrLimrTLimMaxCurr.InitRowCol = [1  1];


dPwrLimrTqEnvlpLim1 = DataDict.Display;
dPwrLimrTqEnvlpLim1.LongName = 'Torque Envelope Limit 1';
dPwrLimrTqEnvlpLim1.Description = [...
  'Output value from torque envelope lookup table.'];
dPwrLimrTqEnvlpLim1.DocUnits = 'MotNwtMtr';
dPwrLimrTqEnvlpLim1.EngDT = dt.float32;
dPwrLimrTqEnvlpLim1.EngMin = -8.8;
dPwrLimrTqEnvlpLim1.EngMax = 8.8;
dPwrLimrTqEnvlpLim1.InitRowCol = [1  1];


dPwrLimrTqEnvlpLim4 = DataDict.Display;
dPwrLimrTqEnvlpLim4.LongName = 'Torque Envelope Limit 4';
dPwrLimrTqEnvlpLim4.Description = [...
  'Output value from torque envelope lookup table.'];
dPwrLimrTqEnvlpLim4.DocUnits = 'MotNwtMtr';
dPwrLimrTqEnvlpLim4.EngDT = dt.float32;
dPwrLimrTqEnvlpLim4.EngMin = -8.8;
dPwrLimrTqEnvlpLim4.EngMax = 8.8;
dPwrLimrTqEnvlpLim4.InitRowCol = [1  1];


dPwrLimrTqLim = DataDict.Display;
dPwrLimrTqLim.LongName = 'Torque Limit';
dPwrLimrTqLim.Description = [...
  'Amount of assist reduction divided by full performance in minimum stan' ...
  'dard operating condition voltage.'];
dPwrLimrTqLim.DocUnits = 'Uls';
dPwrLimrTqLim.EngDT = dt.float32;
dPwrLimrTqLim.EngMin = 0;
dPwrLimrTqLim.EngMax = 1;
dPwrLimrTqLim.InitRowCol = [1  1];


dPwrLimrTqLim1 = DataDict.Display;
dPwrLimrTqLim1.LongName = 'Torque Limit 1';
dPwrLimrTqLim1.Description = [...
  'Minimum of TrqLmtMaxCurr and TrqEnvLmt1'];
dPwrLimrTqLim1.DocUnits = 'MotNwtMtr';
dPwrLimrTqLim1.EngDT = dt.float32;
dPwrLimrTqLim1.EngMin = -8.8;
dPwrLimrTqLim1.EngMax = 8.8;
dPwrLimrTqLim1.InitRowCol = [1  1];


dPwrLimrTqLim4 = DataDict.Display;
dPwrLimrTqLim4.LongName = 'Torque Limit 4';
dPwrLimrTqLim4.Description = [...
  'Minimum of TrqLmtMaxCurr and TrqEnvLmt4'];
dPwrLimrTqLim4.DocUnits = 'MotNwtMtr';
dPwrLimrTqLim4.EngDT = dt.float32;
dPwrLimrTqLim4.EngMin = -8.8;
dPwrLimrTqLim4.EngMax = 8.8;
dPwrLimrTqLim4.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
BrdgVltgAdjSlewStVari = DataDict.PIM;
BrdgVltgAdjSlewStVari.LongName = 'Bridge Voltage Adjust Slew State Variable';
BrdgVltgAdjSlewStVari.Description = [...
  'Memory storage of the slew value of Bridge Voltage'];
BrdgVltgAdjSlewStVari.DocUnits = 'VoltPerSec';
BrdgVltgAdjSlewStVari.EngDT = dt.float32;
BrdgVltgAdjSlewStVari.EngMin = 0.244;
BrdgVltgAdjSlewStVari.EngMax = 5;
BrdgVltgAdjSlewStVari.InitRowCol = [1  1];


FltRefTi = DataDict.PIM;
FltRefTi.LongName = 'Fault Reference Time';
FltRefTi.Description = [...
  'A snapshot of system time used to calculate elapsed time in this or su' ...
  'bsequent execution loops.'];
FltRefTi.DocUnits = 'Cnt';
FltRefTi.EngDT = dt.u32;
FltRefTi.EngMin = 0;
FltRefTi.EngMax = 4294967295;
FltRefTi.InitRowCol = [1  1];


MotVelLpFil = DataDict.PIM;
MotVelLpFil.LongName = 'Motor Velocity Lowpass Filter';
MotVelLpFil.Description = [...
  'A Structure of Low Pass Filter Gain and State Variable'];
MotVelLpFil.DocUnits = '';
MotVelLpFil.EngDT = struct.FilLpRec1;
MotVelLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotVelLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotVelLpFil.InitRowCol = [1  1];


PrevBrdgVltgAltFltAdjLim = DataDict.PIM;
PrevBrdgVltgAltFltAdjLim.LongName = 'Previous Bridge Voltage Alternator Fault Adjust Limit';
PrevBrdgVltgAltFltAdjLim.Description = [...
  'State variable used in slew rate operation.'];
PrevBrdgVltgAltFltAdjLim.DocUnits = 'Volt';
PrevBrdgVltgAltFltAdjLim.EngDT = dt.float32;
PrevBrdgVltgAltFltAdjLim.EngMin = 0;
PrevBrdgVltgAltFltAdjLim.EngMax = 3;
PrevBrdgVltgAltFltAdjLim.InitRowCol = [1  1];


PrevSpdAdj = DataDict.PIM;
PrevSpdAdj.LongName = 'Previous Speed Adjust';
PrevSpdAdj.Description = [...
  'State variable used in slew rate operation.'];
PrevSpdAdj.DocUnits = 'MotRadPerSec';
PrevSpdAdj.EngDT = dt.float32;
PrevSpdAdj.EngMin = 0;
PrevSpdAdj.EngMax = 695;
PrevSpdAdj.InitRowCol = [1  1];


PrevThd = DataDict.PIM;
PrevThd.LongName = 'Previous Threshold';
PrevThd.Description = [...
  'Stores the state of the previous Limited Assist due to Low Voltage. Th' ...
  'is threshold becomes set when Filtered Torque Limit is greater than Fi' ...
  'ltered Assist Reduction Threshold.'];
PrevThd.DocUnits = 'Cnt';
PrevThd.EngDT = dt.lgc;
PrevThd.EngMin = 0;
PrevThd.EngMax = 1;
PrevThd.InitRowCol = [1  1];


SpdAdjSlewStVari = DataDict.PIM;
SpdAdjSlewStVari.LongName = 'Speed Adjust Slew State Variable';
SpdAdjSlewStVari.Description = [...
  'Memory storage for the slew value of Speed Adjust'];
SpdAdjSlewStVari.DocUnits = 'MotRadPerSec';
SpdAdjSlewStVari.EngDT = dt.float32;
SpdAdjSlewStVari.EngMin = -1350;
SpdAdjSlewStVari.EngMax = 1350;
SpdAdjSlewStVari.InitRowCol = [1  1];


TqLimAssiRednLpFil = DataDict.PIM;
TqLimAssiRednLpFil.LongName = 'Torque Limit Assist Reduction Lowpass Filter';
TqLimAssiRednLpFil.Description = [...
  'A Structure of Low Pass Filter Gain and State Variable'];
TqLimAssiRednLpFil.DocUnits = '';
TqLimAssiRednLpFil.EngDT = struct.FilLpRec1;
TqLimAssiRednLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
TqLimAssiRednLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
TqLimAssiRednLpFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_10MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_10MILLISEC_SEC_F32.LongName = '10 Milliseconds';
ARCHGLBPRM_10MILLISEC_SEC_F32.Description = '10ms periodic loop time step';
ARCHGLBPRM_10MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_10MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_10MILLISEC_SEC_F32.EngVal = 0.01;
ARCHGLBPRM_10MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_10MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMax = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.Header = 'ElecGlbPrm_Cfg.h';
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Global';


PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32 = DataDict.Constant;
PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32.LongName = 'Milliseconds to Seconds';
PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32.Description = [...
  'Conversion from Milliseconds to Seconds'];
PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32.DocUnits = 'SecPerMilliSec';
PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32.EngDT = dt.float32;
PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32.EngVal = 0.001;
PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32.Header = '';
PWRLIMRMILLISECTOSEC_SECPERMILLISEC_F32.Define = 'Local';


PWRLIMRTQLIMHILIM_ULS_F32 = DataDict.Constant;
PWRLIMRTQLIMHILIM_ULS_F32.LongName = 'Filtered Torque Limit High Limit';
PWRLIMRTQLIMHILIM_ULS_F32.Description = [...
  'Maximum allowable value for Torque Limit function output.'];
PWRLIMRTQLIMHILIM_ULS_F32.DocUnits = 'Uls';
PWRLIMRTQLIMHILIM_ULS_F32.EngDT = dt.float32;
PWRLIMRTQLIMHILIM_ULS_F32.EngVal = 1;
PWRLIMRTQLIMHILIM_ULS_F32.Header = '';
PWRLIMRTQLIMHILIM_ULS_F32.Define = 'Local';


PWRLIMRTQLIMLOLIM_ULS_F32 = DataDict.Constant;
PWRLIMRTQLIMLOLIM_ULS_F32.LongName = 'Filtered Torque Limit Low Limit';
PWRLIMRTQLIMLOLIM_ULS_F32.Description = [...
  'Minimum allowable value for Torque Limit function output.'];
PWRLIMRTQLIMLOLIM_ULS_F32.DocUnits = 'Uls';
PWRLIMRTQLIMLOLIM_ULS_F32.EngDT = dt.float32;
PWRLIMRTQLIMLOLIM_ULS_F32.EngVal = 0;
PWRLIMRTQLIMLOLIM_ULS_F32.Header = '';
PWRLIMRTQLIMLOLIM_ULS_F32.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
LimdAssiLoVltg = DataDict.NTC;
LimdAssiLoVltg.NtcNr = NtcNr2.NTCNR_0X0B2;
LimdAssiLoVltg.NtcTyp = 'None';
LimdAssiLoVltg.LongName = 'Limited Assist due to Low Voltage';
LimdAssiLoVltg.Description = 'The NTC flag that is used to set limited assist based on voltage being too low';
LimdAssiLoVltg.NtcStInfo = DataDict.NtcStInfoBitPacked;
LimdAssiLoVltg.NtcStInfo.Bit0Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit1Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit2Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit3Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit4Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit5Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit6Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
