%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-May-2016 14:39:06       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 4 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: sz7vy6 %          %
%%-----------------------------------------------------------------------%

CF012A = DataDict.FDD;
CF012A.Version = '1.3.X';
CF012A.LongName = 'GM Start Stop';
CF012A.ShoName  = 'GmStrtStop';
CF012A.DesignASIL = 'QM';
CF012A.Description = [...
  '12V Stop Start feature allows vehicle engine to be turned off during v' ...
  'ehicle idle. When vehicle enters stopRunnable mode, EPS shall transiti' ...
  'on smoothly from normal mode to intermediate 1mode, then to stop mode ' ...
  'tuning calibration.  When vehicle exits stop mode (engine restart) or ' ...
  'vehicle start to move, EPS shall transition smoothly from stop mode to' ...
  ' intermediate 2 mode, back to normal tuning calibration.  The transiti' ...
  'on rate shall be calibratable.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmStrtStopInit1 = DataDict.Runnable;
GmStrtStopInit1.Context = 'Rte';
GmStrtStopInit1.TimeStep = 0;
GmStrtStopInit1.Description = [...
  'GM Start Stop initialization runnable'];

GmStrtStopPer1 = DataDict.Runnable;
GmStrtStopPer1.Context = 'Rte';
GmStrtStopPer1.TimeStep = 0.01;
GmStrtStopPer1.Description = 'GM Start Stop periodic runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'GmStrtStopInit1','GmStrtStopPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'GM Start Stop System reference time'];
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
GetTiSpan100MicroSec32bit.CallLocation = {'GmStrtStopPer1'};
GetTiSpan100MicroSec32bit.Description = 'GM Start Stop span time';
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



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EngSpd = DataDict.IpSignal;
EngSpd.LongName = 'Engine Speed';
EngSpd.Description = 'Engine speed';
EngSpd.DocUnits = 'Rpm';
EngSpd.EngDT = dt.float32;
EngSpd.EngInit = 0;
EngSpd.EngMin = 0;
EngSpd.EngMax = 5110;
EngSpd.ReadIn = {'GmStrtStopPer1'};
EngSpd.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'GmStrtStopPer1'};
HwTq.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = 'Handwheel velocity';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'GmStrtStopPer1'};
HwVel.ReadType = 'Rte';


Msg0C9BusHiSpdInvld = DataDict.IpSignal;
Msg0C9BusHiSpdInvld.LongName = 'High Speed CAN Bus 0C9 Message Invalid';
Msg0C9BusHiSpdInvld.Description = [...
  'High speed CAN bus 0C9 message invalid'];
Msg0C9BusHiSpdInvld.DocUnits = 'Cnt';
Msg0C9BusHiSpdInvld.EngDT = dt.lgc;
Msg0C9BusHiSpdInvld.EngInit = 0;
Msg0C9BusHiSpdInvld.EngMin = 0;
Msg0C9BusHiSpdInvld.EngMax = 1;
Msg0C9BusHiSpdInvld.ReadIn = {'GmStrtStopPer1'};
Msg0C9BusHiSpdInvld.ReadType = 'Rte';


Msg0C9BusHiSpdMiss = DataDict.IpSignal;
Msg0C9BusHiSpdMiss.LongName = 'High Speed CAN Bus 0C9 Message Missing';
Msg0C9BusHiSpdMiss.Description = [...
  'High speed CAN bus 0C9 message missing'];
Msg0C9BusHiSpdMiss.DocUnits = 'Cnt';
Msg0C9BusHiSpdMiss.EngDT = dt.lgc;
Msg0C9BusHiSpdMiss.EngInit = 0;
Msg0C9BusHiSpdMiss.EngMin = 0;
Msg0C9BusHiSpdMiss.EngMax = 1;
Msg0C9BusHiSpdMiss.ReadIn = {'GmStrtStopPer1'};
Msg0C9BusHiSpdMiss.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'GmStrtStopPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = 'Vehicle speed validity';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'GmStrtStopPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
VehStrtStopMotTqCmdSca = DataDict.OpSignal;
VehStrtStopMotTqCmdSca.LongName = 'Vehicle Start Stop Motor Torque Command Scale';
VehStrtStopMotTqCmdSca.Description = [...
  'This parameter gets multiplied by the torque to receive the actual tor' ...
  'que assist'];
VehStrtStopMotTqCmdSca.DocUnits = 'Uls';
VehStrtStopMotTqCmdSca.SwcShoName = 'GmStrtStop';
VehStrtStopMotTqCmdSca.EngDT = dt.float32;
VehStrtStopMotTqCmdSca.EngInit = 1;
VehStrtStopMotTqCmdSca.EngMin = 0;
VehStrtStopMotTqCmdSca.EngMax = 1;
VehStrtStopMotTqCmdSca.TestTolerance = 0.01;
VehStrtStopMotTqCmdSca.WrittenIn = {'GmStrtStopPer1'};
VehStrtStopMotTqCmdSca.WriteType = 'Rte';


VehStrtStopRampRate = DataDict.OpSignal;
VehStrtStopRampRate.LongName = 'Vehicle Start Stop Ramp Rate';
VehStrtStopRampRate.Description = [...
  'This parameter describes the slew rate of Start Stop Scale Factor'];
VehStrtStopRampRate.DocUnits = 'UlsPerSec';
VehStrtStopRampRate.SwcShoName = 'GmStrtStop';
VehStrtStopRampRate.EngDT = dt.float32;
VehStrtStopRampRate.EngInit = 0;
VehStrtStopRampRate.EngMin = 0;
VehStrtStopRampRate.EngMax = 5;
VehStrtStopRampRate.TestTolerance = 0.1;
VehStrtStopRampRate.WrittenIn = {'GmStrtStopPer1'};
VehStrtStopRampRate.WriteType = 'Rte';


VehStrtStopSt = DataDict.OpSignal;
VehStrtStopSt.LongName = 'Vehicle Start Stop State';
VehStrtStopSt.Description = 'This parameter describes the state';
VehStrtStopSt.DocUnits = 'Cnt';
VehStrtStopSt.SwcShoName = 'GmStrtStop';
VehStrtStopSt.EngDT = dt.u08;
VehStrtStopSt.EngInit = 0;
VehStrtStopSt.EngMin = 0;
VehStrtStopSt.EngMax = 5;
VehStrtStopSt.TestTolerance = 0;
VehStrtStopSt.WrittenIn = {'GmStrtStopPer1'};
VehStrtStopSt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GmStrtStopEna = DataDict.Calibration;
GmStrtStopEna.LongName = 'GM Start Stop Enable';
GmStrtStopEna.Description = [...
  'The flag to enable the start stop function'];
GmStrtStopEna.DocUnits = 'Cnt';
GmStrtStopEna.EngDT = dt.lgc;
GmStrtStopEna.EngVal = 1;
GmStrtStopEna.EngMin = 0;
GmStrtStopEna.EngMax = 1;
GmStrtStopEna.Cardinality = 'Inin';
GmStrtStopEna.CustomerVisible = false;
GmStrtStopEna.Online = false;
GmStrtStopEna.Impact = 'H';
GmStrtStopEna.TuningOwner = 'CSE';
GmStrtStopEna.GraphLink = {''};
GmStrtStopEna.Monotony = 'None';
GmStrtStopEna.MaxGrad = 999;
GmStrtStopEna.PortName = 'GmStrtStopEna';


GmStrtStopFltRateLim = DataDict.Calibration;
GmStrtStopFltRateLim.LongName = 'GM Start Stop Fault Rate Limit';
GmStrtStopFltRateLim.Description = [...
  'Ramp rate to transition from Intermediate 1 Mode or Stop Mode or Inter' ...
  'mediate 2 Mode to Normal Mode due to a fault'];
GmStrtStopFltRateLim.DocUnits = 'UlsPerSec';
GmStrtStopFltRateLim.EngDT = dt.float32;
GmStrtStopFltRateLim.EngVal = 2;
GmStrtStopFltRateLim.EngMin = 0;
GmStrtStopFltRateLim.EngMax = 5;
GmStrtStopFltRateLim.Cardinality = 'Inin';
GmStrtStopFltRateLim.CustomerVisible = false;
GmStrtStopFltRateLim.Online = false;
GmStrtStopFltRateLim.Impact = 'L';
GmStrtStopFltRateLim.TuningOwner = 'CSE';
GmStrtStopFltRateLim.GraphLink = {''};
GmStrtStopFltRateLim.Monotony = 'None';
GmStrtStopFltRateLim.MaxGrad = 999;
GmStrtStopFltRateLim.PortName = 'GmStrtStopFltRateLim';


GmStrtStopMod1EngTranThd = DataDict.Calibration;
GmStrtStopMod1EngTranThd.LongName = 'GM Start Stop Mode 1 Engine Transition Threshold';
GmStrtStopMod1EngTranThd.Description = [...
  'Engine RPM threshold for transition from Normal Mode to Intermediate 1' ...
  ' Mode'];
GmStrtStopMod1EngTranThd.DocUnits = 'Rpm';
GmStrtStopMod1EngTranThd.EngDT = dt.float32;
GmStrtStopMod1EngTranThd.EngVal = 3000;
GmStrtStopMod1EngTranThd.EngMin = 0;
GmStrtStopMod1EngTranThd.EngMax = 5110;
GmStrtStopMod1EngTranThd.Cardinality = 'Inin';
GmStrtStopMod1EngTranThd.CustomerVisible = false;
GmStrtStopMod1EngTranThd.Online = false;
GmStrtStopMod1EngTranThd.Impact = 'M';
GmStrtStopMod1EngTranThd.TuningOwner = 'CSE';
GmStrtStopMod1EngTranThd.GraphLink = {''};
GmStrtStopMod1EngTranThd.Monotony = 'None';
GmStrtStopMod1EngTranThd.MaxGrad = 999;
GmStrtStopMod1EngTranThd.PortName = 'GmStrtStopMod1EngTranThd';


GmStrtStopMod1Sca = DataDict.Calibration;
GmStrtStopMod1Sca.LongName = 'GM Start Stop Mode 1 Scale';
GmStrtStopMod1Sca.Description = [...
  'Scale factor applied to limit motor output when in Intermediate 1 Mode' ...
  ''];
GmStrtStopMod1Sca.DocUnits = 'Uls';
GmStrtStopMod1Sca.EngDT = dt.float32;
GmStrtStopMod1Sca.EngVal = 0.5;
GmStrtStopMod1Sca.EngMin = 0;
GmStrtStopMod1Sca.EngMax = 1;
GmStrtStopMod1Sca.Cardinality = 'Inin';
GmStrtStopMod1Sca.CustomerVisible = false;
GmStrtStopMod1Sca.Online = false;
GmStrtStopMod1Sca.Impact = 'H';
GmStrtStopMod1Sca.TuningOwner = 'CSE';
GmStrtStopMod1Sca.GraphLink = {''};
GmStrtStopMod1Sca.Monotony = 'None';
GmStrtStopMod1Sca.MaxGrad = 999;
GmStrtStopMod1Sca.PortName = 'GmStrtStopMod1Sca';


GmStrtStopMod1ToStopRateLim = DataDict.Calibration;
GmStrtStopMod1ToStopRateLim.LongName = 'GM Start Stop Mode 1 to Stop Rate Limit';
GmStrtStopMod1ToStopRateLim.Description = [...
  'Ramp rate to transition between Stop mode and Intermediate 1 Mode'];
GmStrtStopMod1ToStopRateLim.DocUnits = 'UlsPerSec';
GmStrtStopMod1ToStopRateLim.EngDT = dt.float32;
GmStrtStopMod1ToStopRateLim.EngVal = 0.8;
GmStrtStopMod1ToStopRateLim.EngMin = 0;
GmStrtStopMod1ToStopRateLim.EngMax = 5;
GmStrtStopMod1ToStopRateLim.Cardinality = 'Inin';
GmStrtStopMod1ToStopRateLim.CustomerVisible = false;
GmStrtStopMod1ToStopRateLim.Online = false;
GmStrtStopMod1ToStopRateLim.Impact = 'L';
GmStrtStopMod1ToStopRateLim.TuningOwner = 'CSE';
GmStrtStopMod1ToStopRateLim.GraphLink = {''};
GmStrtStopMod1ToStopRateLim.Monotony = 'None';
GmStrtStopMod1ToStopRateLim.MaxGrad = 999;
GmStrtStopMod1ToStopRateLim.PortName = 'GmStrtStopMod1ToStopRateLim';


GmStrtStopMod1VehSpdTranThd = DataDict.Calibration;
GmStrtStopMod1VehSpdTranThd.LongName = 'GM Start Stop Mode 1 Vehicle Speed Transition Threshold';
GmStrtStopMod1VehSpdTranThd.Description = [...
  'Vehicle Speed threshold for transition from Normal Mode to Intermediat' ...
  'e 1 Mode'];
GmStrtStopMod1VehSpdTranThd.DocUnits = 'Kph';
GmStrtStopMod1VehSpdTranThd.EngDT = dt.float32;
GmStrtStopMod1VehSpdTranThd.EngVal = 10;
GmStrtStopMod1VehSpdTranThd.EngMin = 0;
GmStrtStopMod1VehSpdTranThd.EngMax = 511;
GmStrtStopMod1VehSpdTranThd.Cardinality = 'Inin';
GmStrtStopMod1VehSpdTranThd.CustomerVisible = false;
GmStrtStopMod1VehSpdTranThd.Online = false;
GmStrtStopMod1VehSpdTranThd.Impact = 'M';
GmStrtStopMod1VehSpdTranThd.TuningOwner = 'CSE';
GmStrtStopMod1VehSpdTranThd.GraphLink = {''};
GmStrtStopMod1VehSpdTranThd.Monotony = 'None';
GmStrtStopMod1VehSpdTranThd.MaxGrad = 999;
GmStrtStopMod1VehSpdTranThd.PortName = 'GmStrtStopMod1VehSpdTranThd';


GmStrtStopMod2Sca = DataDict.Calibration;
GmStrtStopMod2Sca.LongName = 'GM Start Stop Mode 2 Scale';
GmStrtStopMod2Sca.Description = [...
  'Scale factor applied to limit motor output when in Intermediate 2 Mode' ...
  ''];
GmStrtStopMod2Sca.DocUnits = 'Uls';
GmStrtStopMod2Sca.EngDT = dt.float32;
GmStrtStopMod2Sca.EngVal = 0.5;
GmStrtStopMod2Sca.EngMin = 0.001;
GmStrtStopMod2Sca.EngMax = 1;
GmStrtStopMod2Sca.Cardinality = 'Inin';
GmStrtStopMod2Sca.CustomerVisible = false;
GmStrtStopMod2Sca.Online = false;
GmStrtStopMod2Sca.Impact = 'H';
GmStrtStopMod2Sca.TuningOwner = 'CSE';
GmStrtStopMod2Sca.GraphLink = {''};
GmStrtStopMod2Sca.Monotony = 'None';
GmStrtStopMod2Sca.MaxGrad = 999;
GmStrtStopMod2Sca.PortName = 'GmStrtStopMod2Sca';


GmStrtStopNormModEngTranThd = DataDict.Calibration;
GmStrtStopNormModEngTranThd.LongName = 'GM Start Stop Normal Mode Engine Transition Threshold';
GmStrtStopNormModEngTranThd.Description = [...
  'Engine RPM threshold for transition from Intermediate 1 Mode or Stop M' ...
  'ode or Intermediate 2 Mode to Normal Mode'];
GmStrtStopNormModEngTranThd.DocUnits = 'Rpm';
GmStrtStopNormModEngTranThd.EngDT = dt.float32;
GmStrtStopNormModEngTranThd.EngVal = 3000;
GmStrtStopNormModEngTranThd.EngMin = 0;
GmStrtStopNormModEngTranThd.EngMax = 5110;
GmStrtStopNormModEngTranThd.Cardinality = 'Inin';
GmStrtStopNormModEngTranThd.CustomerVisible = false;
GmStrtStopNormModEngTranThd.Online = false;
GmStrtStopNormModEngTranThd.Impact = 'M';
GmStrtStopNormModEngTranThd.TuningOwner = 'CSE';
GmStrtStopNormModEngTranThd.GraphLink = {''};
GmStrtStopNormModEngTranThd.Monotony = 'None';
GmStrtStopNormModEngTranThd.MaxGrad = 999;
GmStrtStopNormModEngTranThd.PortName = 'GmStrtStopNormModEngTranThd';


GmStrtStopNormModVehSpdTranThd = DataDict.Calibration;
GmStrtStopNormModVehSpdTranThd.LongName = 'GM Start Stop Normal Mode Vehicle Speed Transition Threshold';
GmStrtStopNormModVehSpdTranThd.Description = [...
  'Vehicle Speed threshold for transition from Intermediate 2 Mode to Nor' ...
  'mal Mode'];
GmStrtStopNormModVehSpdTranThd.DocUnits = 'Kph';
GmStrtStopNormModVehSpdTranThd.EngDT = dt.float32;
GmStrtStopNormModVehSpdTranThd.EngVal = 12;
GmStrtStopNormModVehSpdTranThd.EngMin = 0;
GmStrtStopNormModVehSpdTranThd.EngMax = 511;
GmStrtStopNormModVehSpdTranThd.Cardinality = 'Inin';
GmStrtStopNormModVehSpdTranThd.CustomerVisible = false;
GmStrtStopNormModVehSpdTranThd.Online = false;
GmStrtStopNormModVehSpdTranThd.Impact = 'M';
GmStrtStopNormModVehSpdTranThd.TuningOwner = 'CSE';
GmStrtStopNormModVehSpdTranThd.GraphLink = {''};
GmStrtStopNormModVehSpdTranThd.Monotony = 'None';
GmStrtStopNormModVehSpdTranThd.MaxGrad = 999;
GmStrtStopNormModVehSpdTranThd.PortName = 'GmStrtStopNormModVehSpdTranThd';


GmStrtStopNormRateLim = DataDict.Calibration;
GmStrtStopNormRateLim.LongName = 'GM Start Stop Normal Rate Limit';
GmStrtStopNormRateLim.Description = [...
  'Ramp rate to transition from Stop Mode to Intermediate 2 Mode'];
GmStrtStopNormRateLim.DocUnits = 'UlsPerSec';
GmStrtStopNormRateLim.EngDT = dt.float32;
GmStrtStopNormRateLim.EngVal = 0.4;
GmStrtStopNormRateLim.EngMin = 0;
GmStrtStopNormRateLim.EngMax = 5;
GmStrtStopNormRateLim.Cardinality = 'Inin';
GmStrtStopNormRateLim.CustomerVisible = false;
GmStrtStopNormRateLim.Online = false;
GmStrtStopNormRateLim.Impact = 'L';
GmStrtStopNormRateLim.TuningOwner = 'CSE';
GmStrtStopNormRateLim.GraphLink = {''};
GmStrtStopNormRateLim.Monotony = 'None';
GmStrtStopNormRateLim.MaxGrad = 999;
GmStrtStopNormRateLim.PortName = 'GmStrtStopNormRateLim';


GmStrtStopNormToMod1RateLim = DataDict.Calibration;
GmStrtStopNormToMod1RateLim.LongName = 'GM Start Stop Normal to Mode 1 Rate Limit';
GmStrtStopNormToMod1RateLim.Description = [...
  'Ramp rate to transition between Normal mode and Intermediate 1 Mode'];
GmStrtStopNormToMod1RateLim.DocUnits = 'UlsPerSec';
GmStrtStopNormToMod1RateLim.EngDT = dt.float32;
GmStrtStopNormToMod1RateLim.EngVal = 1.5;
GmStrtStopNormToMod1RateLim.EngMin = 0;
GmStrtStopNormToMod1RateLim.EngMax = 5;
GmStrtStopNormToMod1RateLim.Cardinality = 'Inin';
GmStrtStopNormToMod1RateLim.CustomerVisible = false;
GmStrtStopNormToMod1RateLim.Online = false;
GmStrtStopNormToMod1RateLim.Impact = 'M';
GmStrtStopNormToMod1RateLim.TuningOwner = 'CSE';
GmStrtStopNormToMod1RateLim.GraphLink = {''};
GmStrtStopNormToMod1RateLim.Monotony = 'None';
GmStrtStopNormToMod1RateLim.MaxGrad = 999;
GmStrtStopNormToMod1RateLim.PortName = 'GmStrtStopNormToMod1RateLim';


GmStrtStopStopAndMod2RateLim = DataDict.Calibration;
GmStrtStopStopAndMod2RateLim.LongName = 'GM Start Stop Stop and Mode2 Rate Limit';
GmStrtStopStopAndMod2RateLim.Description = [...
  'Ramp rate to transition between Intermediate 2 Mode and Stop Mode'];
GmStrtStopStopAndMod2RateLim.DocUnits = 'UlsPerSec';
GmStrtStopStopAndMod2RateLim.EngDT = dt.float32;
GmStrtStopStopAndMod2RateLim.EngVal = 0.5;
GmStrtStopStopAndMod2RateLim.EngMin = 0;
GmStrtStopStopAndMod2RateLim.EngMax = 5;
GmStrtStopStopAndMod2RateLim.Cardinality = 'Inin';
GmStrtStopStopAndMod2RateLim.CustomerVisible = false;
GmStrtStopStopAndMod2RateLim.Online = false;
GmStrtStopStopAndMod2RateLim.Impact = 'L';
GmStrtStopStopAndMod2RateLim.TuningOwner = 'CSE';
GmStrtStopStopAndMod2RateLim.GraphLink = {''};
GmStrtStopStopAndMod2RateLim.Monotony = 'None';
GmStrtStopStopAndMod2RateLim.MaxGrad = 999;
GmStrtStopStopAndMod2RateLim.PortName = 'GmStrtStopStopAndMod2RateLim';


GmStrtStopStopMod1HwTqTranThd = DataDict.Calibration;
GmStrtStopStopMod1HwTqTranThd.LongName = 'GM Start Stop Stop Mode 1 Handwheel Torque Transition Threshold';
GmStrtStopStopMod1HwTqTranThd.Description = [...
  'Handwheel Torque threshold for transition from Intermediate 1 Mode to ' ...
  'Stop Mode'];
GmStrtStopStopMod1HwTqTranThd.DocUnits = 'HwNwtMtr';
GmStrtStopStopMod1HwTqTranThd.EngDT = dt.float32;
GmStrtStopStopMod1HwTqTranThd.EngVal = 1;
GmStrtStopStopMod1HwTqTranThd.EngMin = 0;
GmStrtStopStopMod1HwTqTranThd.EngMax = 10;
GmStrtStopStopMod1HwTqTranThd.Cardinality = 'Inin';
GmStrtStopStopMod1HwTqTranThd.CustomerVisible = false;
GmStrtStopStopMod1HwTqTranThd.Online = false;
GmStrtStopStopMod1HwTqTranThd.Impact = 'M';
GmStrtStopStopMod1HwTqTranThd.TuningOwner = 'CSE';
GmStrtStopStopMod1HwTqTranThd.GraphLink = {''};
GmStrtStopStopMod1HwTqTranThd.Monotony = 'None';
GmStrtStopStopMod1HwTqTranThd.MaxGrad = 999;
GmStrtStopStopMod1HwTqTranThd.PortName = 'GmStrtStopStopMod1HwTqTranThd';


GmStrtStopStopMod1HwVelTranThd = DataDict.Calibration;
GmStrtStopStopMod1HwVelTranThd.LongName = 'GM Start Stop Stop Mode 1 Handwheel Velocity Transition Threshold';
GmStrtStopStopMod1HwVelTranThd.Description = [...
  'Handwheel Velocity threshold for transition from Intermediate 1 Mode t' ...
  'o Stop Mode'];
GmStrtStopStopMod1HwVelTranThd.DocUnits = 'HwDegPerSec';
GmStrtStopStopMod1HwVelTranThd.EngDT = dt.float32;
GmStrtStopStopMod1HwVelTranThd.EngVal = 10;
GmStrtStopStopMod1HwVelTranThd.EngMin = 0;
GmStrtStopStopMod1HwVelTranThd.EngMax = 250;
GmStrtStopStopMod1HwVelTranThd.Cardinality = 'Inin';
GmStrtStopStopMod1HwVelTranThd.CustomerVisible = false;
GmStrtStopStopMod1HwVelTranThd.Online = false;
GmStrtStopStopMod1HwVelTranThd.Impact = 'M';
GmStrtStopStopMod1HwVelTranThd.TuningOwner = 'CSE';
GmStrtStopStopMod1HwVelTranThd.GraphLink = {''};
GmStrtStopStopMod1HwVelTranThd.Monotony = 'None';
GmStrtStopStopMod1HwVelTranThd.MaxGrad = 999;
GmStrtStopStopMod1HwVelTranThd.PortName = 'GmStrtStopStopMod1HwVelTranThd';


GmStrtStopStopMod1Tmr = DataDict.Calibration;
GmStrtStopStopMod1Tmr.LongName = 'GM Start Stop Stop Mode 1 Timer';
GmStrtStopStopMod1Tmr.Description = [...
  'Timer before transition between Intermediate 1 Mode and Stop Mode'];
GmStrtStopStopMod1Tmr.DocUnits = 'MilliSec';
GmStrtStopStopMod1Tmr.EngDT = dt.float32;
GmStrtStopStopMod1Tmr.EngVal = 100;
GmStrtStopStopMod1Tmr.EngMin = 0;
GmStrtStopStopMod1Tmr.EngMax = 5000;
GmStrtStopStopMod1Tmr.Cardinality = 'Inin';
GmStrtStopStopMod1Tmr.CustomerVisible = false;
GmStrtStopStopMod1Tmr.Online = false;
GmStrtStopStopMod1Tmr.Impact = 'M';
GmStrtStopStopMod1Tmr.TuningOwner = 'CSE';
GmStrtStopStopMod1Tmr.GraphLink = {''};
GmStrtStopStopMod1Tmr.Monotony = 'None';
GmStrtStopStopMod1Tmr.MaxGrad = 999;
GmStrtStopStopMod1Tmr.PortName = 'GmStrtStopStopMod1Tmr';


GmStrtStopStopMod1VehSpdTranThd = DataDict.Calibration;
GmStrtStopStopMod1VehSpdTranThd.LongName = 'GM Start Stop Stop Mode 1 Vehicle Speed Transition Threshold';
GmStrtStopStopMod1VehSpdTranThd.Description = [...
  'Vehicle Speed threshold for transition from Intermediate 1 Mode to Sto' ...
  'p Mode'];
GmStrtStopStopMod1VehSpdTranThd.DocUnits = 'Kph';
GmStrtStopStopMod1VehSpdTranThd.EngDT = dt.float32;
GmStrtStopStopMod1VehSpdTranThd.EngVal = 5;
GmStrtStopStopMod1VehSpdTranThd.EngMin = 0;
GmStrtStopStopMod1VehSpdTranThd.EngMax = 200;
GmStrtStopStopMod1VehSpdTranThd.Cardinality = 'Inin';
GmStrtStopStopMod1VehSpdTranThd.CustomerVisible = false;
GmStrtStopStopMod1VehSpdTranThd.Online = false;
GmStrtStopStopMod1VehSpdTranThd.Impact = 'M';
GmStrtStopStopMod1VehSpdTranThd.TuningOwner = 'CSE';
GmStrtStopStopMod1VehSpdTranThd.GraphLink = {''};
GmStrtStopStopMod1VehSpdTranThd.Monotony = 'None';
GmStrtStopStopMod1VehSpdTranThd.MaxGrad = 999;
GmStrtStopStopMod1VehSpdTranThd.PortName = 'GmStrtStopStopMod1VehSpdTranThd';


GmStrtStopStopMod2HwTqTranThd = DataDict.Calibration;
GmStrtStopStopMod2HwTqTranThd.LongName = 'GM Start Stop Stop Mode 2 Handwheel Torque Transition Threshold';
GmStrtStopStopMod2HwTqTranThd.Description = [...
  'Handwheel Torque threshold for transition from Intermediate 2 Mode to ' ...
  'Stop Mode'];
GmStrtStopStopMod2HwTqTranThd.DocUnits = 'HwNwtMtr';
GmStrtStopStopMod2HwTqTranThd.EngDT = dt.float32;
GmStrtStopStopMod2HwTqTranThd.EngVal = 1;
GmStrtStopStopMod2HwTqTranThd.EngMin = 0;
GmStrtStopStopMod2HwTqTranThd.EngMax = 10;
GmStrtStopStopMod2HwTqTranThd.Cardinality = 'Inin';
GmStrtStopStopMod2HwTqTranThd.CustomerVisible = false;
GmStrtStopStopMod2HwTqTranThd.Online = false;
GmStrtStopStopMod2HwTqTranThd.Impact = 'M';
GmStrtStopStopMod2HwTqTranThd.TuningOwner = 'CSE';
GmStrtStopStopMod2HwTqTranThd.GraphLink = {''};
GmStrtStopStopMod2HwTqTranThd.Monotony = 'None';
GmStrtStopStopMod2HwTqTranThd.MaxGrad = 999;
GmStrtStopStopMod2HwTqTranThd.PortName = 'GmStrtStopStopMod2HwTqTranThd';


GmStrtStopStopMod2HwVelTranThd = DataDict.Calibration;
GmStrtStopStopMod2HwVelTranThd.LongName = 'GM Start Stop Stop Mode 2 Handwheel Velocity Transition Threshold';
GmStrtStopStopMod2HwVelTranThd.Description = [...
  'Handwheel Velocity threshold for transition from Intermediate 2 Mode t' ...
  'o Stop Mode'];
GmStrtStopStopMod2HwVelTranThd.DocUnits = 'HwDegPerSec';
GmStrtStopStopMod2HwVelTranThd.EngDT = dt.float32;
GmStrtStopStopMod2HwVelTranThd.EngVal = 10;
GmStrtStopStopMod2HwVelTranThd.EngMin = 0;
GmStrtStopStopMod2HwVelTranThd.EngMax = 250;
GmStrtStopStopMod2HwVelTranThd.Cardinality = 'Inin';
GmStrtStopStopMod2HwVelTranThd.CustomerVisible = false;
GmStrtStopStopMod2HwVelTranThd.Online = false;
GmStrtStopStopMod2HwVelTranThd.Impact = 'M';
GmStrtStopStopMod2HwVelTranThd.TuningOwner = 'CSE';
GmStrtStopStopMod2HwVelTranThd.GraphLink = {''};
GmStrtStopStopMod2HwVelTranThd.Monotony = 'None';
GmStrtStopStopMod2HwVelTranThd.MaxGrad = 999;
GmStrtStopStopMod2HwVelTranThd.PortName = 'GmStrtStopStopMod2HwVelTranThd';


GmStrtStopStopMod2Tmr = DataDict.Calibration;
GmStrtStopStopMod2Tmr.LongName = 'GM Start Stop Stop Mode 2 Timer';
GmStrtStopStopMod2Tmr.Description = [...
  'Timer before transition between Intermediate 2 Mode and Stop Mode'];
GmStrtStopStopMod2Tmr.DocUnits = 'MilliSec';
GmStrtStopStopMod2Tmr.EngDT = dt.float32;
GmStrtStopStopMod2Tmr.EngVal = 100;
GmStrtStopStopMod2Tmr.EngMin = 0;
GmStrtStopStopMod2Tmr.EngMax = 5000;
GmStrtStopStopMod2Tmr.Cardinality = 'Inin';
GmStrtStopStopMod2Tmr.CustomerVisible = false;
GmStrtStopStopMod2Tmr.Online = false;
GmStrtStopStopMod2Tmr.Impact = 'M';
GmStrtStopStopMod2Tmr.TuningOwner = 'CSE';
GmStrtStopStopMod2Tmr.GraphLink = {''};
GmStrtStopStopMod2Tmr.Monotony = 'None';
GmStrtStopStopMod2Tmr.MaxGrad = 999;
GmStrtStopStopMod2Tmr.PortName = 'GmStrtStopStopMod2Tmr';


GmStrtStopStopMod2VehSpdTranThd = DataDict.Calibration;
GmStrtStopStopMod2VehSpdTranThd.LongName = 'GM Start Stop Stop Mode 2 Vehicle Speed Transition Threshold';
GmStrtStopStopMod2VehSpdTranThd.Description = [...
  'Vehicle Speed threshold for transition from Stop Mode to Intermediate ' ...
  '2 Mode'];
GmStrtStopStopMod2VehSpdTranThd.DocUnits = 'Kph';
GmStrtStopStopMod2VehSpdTranThd.EngDT = dt.float32;
GmStrtStopStopMod2VehSpdTranThd.EngVal = 8;
GmStrtStopStopMod2VehSpdTranThd.EngMin = 0;
GmStrtStopStopMod2VehSpdTranThd.EngMax = 200;
GmStrtStopStopMod2VehSpdTranThd.Cardinality = 'Inin';
GmStrtStopStopMod2VehSpdTranThd.CustomerVisible = false;
GmStrtStopStopMod2VehSpdTranThd.Online = false;
GmStrtStopStopMod2VehSpdTranThd.Impact = 'M';
GmStrtStopStopMod2VehSpdTranThd.TuningOwner = 'CSE';
GmStrtStopStopMod2VehSpdTranThd.GraphLink = {''};
GmStrtStopStopMod2VehSpdTranThd.Monotony = 'None';
GmStrtStopStopMod2VehSpdTranThd.MaxGrad = 999;
GmStrtStopStopMod2VehSpdTranThd.PortName = 'GmStrtStopStopMod2VehSpdTranThd';


GmStrtStopStopModSca = DataDict.Calibration;
GmStrtStopStopModSca.LongName = 'GM Start Stop Stop Mode Scale';
GmStrtStopStopModSca.Description = [...
  'Scale factor applied to limit motor output when in Stop Mode'];
GmStrtStopStopModSca.DocUnits = 'Uls';
GmStrtStopStopModSca.EngDT = dt.float32;
GmStrtStopStopModSca.EngVal = 0.001;
GmStrtStopStopModSca.EngMin = 0.001;
GmStrtStopStopModSca.EngMax = 1;
GmStrtStopStopModSca.Cardinality = 'Inin';
GmStrtStopStopModSca.CustomerVisible = false;
GmStrtStopStopModSca.Online = false;
GmStrtStopStopModSca.Impact = 'H';
GmStrtStopStopModSca.TuningOwner = 'CSE';
GmStrtStopStopModSca.GraphLink = {''};
GmStrtStopStopModSca.Monotony = 'None';
GmStrtStopStopModSca.MaxGrad = 999;
GmStrtStopStopModSca.PortName = 'GmStrtStopStopModSca';



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
Mod1RefTmr = DataDict.PIM;
Mod1RefTmr.LongName = 'Mode 1 Reference Timer';
Mod1RefTmr.Description = 'Mode 1 Reference Timer';
Mod1RefTmr.DocUnits = 'Cnt';
Mod1RefTmr.EngDT = dt.u32;
Mod1RefTmr.EngMin = 0;
Mod1RefTmr.EngMax = 4294967295;
Mod1RefTmr.InitRowCol = [1  1];


Mod2RefTmr = DataDict.PIM;
Mod2RefTmr.LongName = 'Mode 2 Reference Timer';
Mod2RefTmr.Description = 'Mode 2 Reference Timer';
Mod2RefTmr.DocUnits = 'Cnt';
Mod2RefTmr.EngDT = dt.u32;
Mod2RefTmr.EngMin = 0;
Mod2RefTmr.EngMax = 4294967295;
Mod2RefTmr.InitRowCol = [1  1];


PrevActSt = DataDict.PIM;
PrevActSt.LongName = 'Previous Active State';
PrevActSt.Description = 'Previous Active State';
PrevActSt.DocUnits = 'Cnt';
PrevActSt.EngDT = dt.u08;
PrevActSt.EngMin = 0;
PrevActSt.EngMax = 5;
PrevActSt.InitRowCol = [1  1];


PrevStrtStopSt = DataDict.PIM;
PrevStrtStopSt.LongName = 'Previous Start Stop State';
PrevStrtStopSt.Description = 'Previous Start Stop State';
PrevStrtStopSt.DocUnits = 'Cnt';
PrevStrtStopSt.EngDT = dt.u08;
PrevStrtStopSt.EngMin = 0;
PrevStrtStopSt.EngMax = 5;
PrevStrtStopSt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32 = DataDict.Constant;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.LongName = 'Convert to Milliseconds';
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.Description = [...
  'Multiply by this constant to convert count to milliseconds'];
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.DocUnits = 'MilliSecPerCnt';
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.EngDT = dt.float32;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.EngVal = 0.1;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.Define = 'Local';


DISMODRATE_ULSPERSEC_F32 = DataDict.Constant;
DISMODRATE_ULSPERSEC_F32.LongName = 'Disable Mode Rate';
DISMODRATE_ULSPERSEC_F32.Description = 'Disable Mode Rate';
DISMODRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
DISMODRATE_ULSPERSEC_F32.EngDT = dt.float32;
DISMODRATE_ULSPERSEC_F32.EngVal = 0;
DISMODRATE_ULSPERSEC_F32.Define = 'Local';


DISMOD_CNT_U08 = DataDict.Constant;
DISMOD_CNT_U08.LongName = 'Disable Mode';
DISMOD_CNT_U08.Description = [...
  'It shows the start-stop is in Disable Mode.'];
DISMOD_CNT_U08.DocUnits = 'Cnt';
DISMOD_CNT_U08.EngDT = dt.u08;
DISMOD_CNT_U08.EngVal = 5;
DISMOD_CNT_U08.Define = 'Local';


FLTMOD_CNT_U08 = DataDict.Constant;
FLTMOD_CNT_U08.LongName = 'Fault Mode';
FLTMOD_CNT_U08.Description = [...
  'It shows the start-stop is in Fault Mode.'];
FLTMOD_CNT_U08.DocUnits = 'Cnt';
FLTMOD_CNT_U08.EngDT = dt.u08;
FLTMOD_CNT_U08.EngVal = 4;
FLTMOD_CNT_U08.Define = 'Local';


FULLASSISCA_ULS_F32 = DataDict.Constant;
FULLASSISCA_ULS_F32.LongName = 'Full Assist Sca';
FULLASSISCA_ULS_F32.Description = [...
  'Full Assist Scale Factor when GMSS is in fault mode, normal mode and d' ...
  'iable mode'];
FULLASSISCA_ULS_F32.DocUnits = 'Uls';
FULLASSISCA_ULS_F32.EngDT = dt.float32;
FULLASSISCA_ULS_F32.EngVal = 1;
FULLASSISCA_ULS_F32.Define = 'Local';


MOD1_CNT_U08 = DataDict.Constant;
MOD1_CNT_U08.LongName = 'Mode 1';
MOD1_CNT_U08.Description = [...
  'It shows the start-stop is in Mode 1.'];
MOD1_CNT_U08.DocUnits = 'Cnt';
MOD1_CNT_U08.EngDT = dt.u08;
MOD1_CNT_U08.EngVal = 1;
MOD1_CNT_U08.Define = 'Local';


MOD2_CNT_U08 = DataDict.Constant;
MOD2_CNT_U08.LongName = 'Mode 2';
MOD2_CNT_U08.Description = [...
  'It shows the start-stop is in Mode 2.'];
MOD2_CNT_U08.DocUnits = 'Cnt';
MOD2_CNT_U08.EngDT = dt.u08;
MOD2_CNT_U08.EngVal = 3;
MOD2_CNT_U08.Define = 'Local';


NORMMOD_CNT_U08 = DataDict.Constant;
NORMMOD_CNT_U08.LongName = 'Normal Mode';
NORMMOD_CNT_U08.Description = [...
  'It shows the start-stop is in Normal Mode.'];
NORMMOD_CNT_U08.DocUnits = 'Cnt';
NORMMOD_CNT_U08.EngDT = dt.u08;
NORMMOD_CNT_U08.EngVal = 0;
NORMMOD_CNT_U08.Define = 'Local';


STOPMOD_CNT_U08 = DataDict.Constant;
STOPMOD_CNT_U08.LongName = 'Stop Mode';
STOPMOD_CNT_U08.Description = [...
  'It shows the start-stop is in Stop Mode.'];
STOPMOD_CNT_U08.DocUnits = 'Cnt';
STOPMOD_CNT_U08.EngDT = dt.u08;
STOPMOD_CNT_U08.EngVal = 2;
STOPMOD_CNT_U08.Define = 'Local';


STRTSTOPRATEHILIM_ULSPERSEC_F32 = DataDict.Constant;
STRTSTOPRATEHILIM_ULSPERSEC_F32.LongName = 'Rate High Limit';
STRTSTOPRATEHILIM_ULSPERSEC_F32.Description = 'Start Stop Rate High Limit';
STRTSTOPRATEHILIM_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
STRTSTOPRATEHILIM_ULSPERSEC_F32.EngDT = dt.float32;
STRTSTOPRATEHILIM_ULSPERSEC_F32.EngVal = 5;
STRTSTOPRATEHILIM_ULSPERSEC_F32.Define = 'Local';


STRTSTOPRATELOWRLIM_ULSPERSEC_F32 = DataDict.Constant;
STRTSTOPRATELOWRLIM_ULSPERSEC_F32.LongName = 'Rate Lower Limit';
STRTSTOPRATELOWRLIM_ULSPERSEC_F32.Description = 'Start Stop Rate Lower Limit';
STRTSTOPRATELOWRLIM_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
STRTSTOPRATELOWRLIM_ULSPERSEC_F32.EngDT = dt.float32;
STRTSTOPRATELOWRLIM_ULSPERSEC_F32.EngVal = 0;
STRTSTOPRATELOWRLIM_ULSPERSEC_F32.Define = 'Local';


STRTSTOPSCAHILIM_ULS_F32 = DataDict.Constant;
STRTSTOPSCAHILIM_ULS_F32.LongName = 'Scale High Limit';
STRTSTOPSCAHILIM_ULS_F32.Description = 'Start Stop Scale High Limit';
STRTSTOPSCAHILIM_ULS_F32.DocUnits = 'Uls';
STRTSTOPSCAHILIM_ULS_F32.EngDT = dt.float32;
STRTSTOPSCAHILIM_ULS_F32.EngVal = 1;
STRTSTOPSCAHILIM_ULS_F32.Define = 'Local';


STRTSTOPSCALOWRLIM_ULS_F32 = DataDict.Constant;
STRTSTOPSCALOWRLIM_ULS_F32.LongName = 'Scale Lower Limit';
STRTSTOPSCALOWRLIM_ULS_F32.Description = 'Start Stop Scale Lower Limit';
STRTSTOPSCALOWRLIM_ULS_F32.DocUnits = 'Uls';
STRTSTOPSCALOWRLIM_ULS_F32.EngDT = dt.float32;
STRTSTOPSCALOWRLIM_ULS_F32.EngVal = 0;
STRTSTOPSCALOWRLIM_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
