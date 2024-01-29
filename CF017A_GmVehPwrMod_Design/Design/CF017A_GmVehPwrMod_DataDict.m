%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 19-Dec-2016 14:59:19       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF017A = DataDict.FDD;
CF017A.Version = '2.3.X';
CF017A.LongName = 'GM Vehicle Power Mode';
CF017A.ShoName  = 'GmVehPwrMod';
CF017A.DesignASIL = 'D';
CF017A.Description = [...
  'GmVehPwrMod defines when the ECU turns On, goes into Run mode, and exi' ...
  'ts Run modeThis data dictionary uses requirements from DOORS Baseline ' ...
  '1.1.0. Located at:/GM T1XX/SubSystem Specifications/Customer Functions' ...
  ''];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmVehPwrModInit1 = DataDict.Runnable;
GmVehPwrModInit1.Context = 'Rte';
GmVehPwrModInit1.TimeStep = 0;
GmVehPwrModInit1.Description = [...
  'This runnable does nothing in this component.'];

GmVehPwrModPer1 = DataDict.Runnable;
GmVehPwrModPer1.Context = 'Rte';
GmVehPwrModPer1.TimeStep = 0.002;
GmVehPwrModPer1.Description = [...
  'This runnable is used condition various system inputs for use later.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetGpioMcuEna = DataDict.Client;
GetGpioMcuEna.CallLocation = {'GmVehPwrModPer1'};
GetGpioMcuEna.Description = [...
  'It is used to get the status of Communication Enable.'];
GetGpioMcuEna.Return = DataDict.CSReturn;
GetGpioMcuEna.Return.Type = 'Standard';
GetGpioMcuEna.Return.Min = 0;
GetGpioMcuEna.Return.Max = 1;
GetGpioMcuEna.Return.TestTolerance = 0;
GetGpioMcuEna.Return.Description = '';
GetGpioMcuEna.Arguments(1) = DataDict.CSArguments;
GetGpioMcuEna.Arguments(1).Name = 'PinSt';
GetGpioMcuEna.Arguments(1).EngDT = dt.lgc;
GetGpioMcuEna.Arguments(1).EngMin = 0;
GetGpioMcuEna.Arguments(1).EngMax = 1;
GetGpioMcuEna.Arguments(1).TestTolerance = 999;
GetGpioMcuEna.Arguments(1).Units = 'Cnt';
GetGpioMcuEna.Arguments(1).Direction = 'Out';
GetGpioMcuEna.Arguments(1).InitRowCol = [1  1];
GetGpioMcuEna.Arguments(1).Description = '';


GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'GmVehPwrModPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'Client definition to return the reference time in counts.'];
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
GetTiSpan100MicroSec32bit.CallLocation = {'GmVehPwrModPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Client definition to determine elapse time.'];
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



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BusOffHiSpd = DataDict.IpSignal;
BusOffHiSpd.LongName = 'Bus Off High Speed';
BusOffHiSpd.Description = [...
  'Bus Off High Speed, used to determine System State Request Enable.'];
BusOffHiSpd.DocUnits = 'Cnt';
BusOffHiSpd.EngDT = dt.lgc;
BusOffHiSpd.EngInit = 0;
BusOffHiSpd.EngMin = 0;
BusOffHiSpd.EngMax = 1;
BusOffHiSpd.ReadIn = {'GmVehPwrModPer1'};
BusOffHiSpd.ReadType = 'Rte';


EngRunActv = DataDict.IpSignal;
EngRunActv.LongName = 'Engine Run Active';
EngRunActv.Description = [...
  'Engine Run Active, used to determine System State Request Enable.'];
EngRunActv.DocUnits = 'Cnt';
EngRunActv.EngDT = dt.lgc;
EngRunActv.EngInit = 0;
EngRunActv.EngMin = 0;
EngRunActv.EngMax = 1;
EngRunActv.ReadIn = {'GmVehPwrModPer1'};
EngRunActv.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = [...
  'Handwheel Angle, used to determine System State Request Enable.'];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'GmVehPwrModPer1'};
HwTq.ReadType = 'Rte';


PrpnSysActvMsgInvld = DataDict.IpSignal;
PrpnSysActvMsgInvld.LongName = 'Propulsion System Active Message Invalid';
PrpnSysActvMsgInvld.Description = [...
  'Propulsion System Active Message Invalid, used to determine System Sta' ...
  'te Request Enable.'];
PrpnSysActvMsgInvld.DocUnits = 'Cnt';
PrpnSysActvMsgInvld.EngDT = dt.lgc;
PrpnSysActvMsgInvld.EngInit = 0;
PrpnSysActvMsgInvld.EngMin = 0;
PrpnSysActvMsgInvld.EngMax = 1;
PrpnSysActvMsgInvld.ReadIn = {'GmVehPwrModPer1'};
PrpnSysActvMsgInvld.ReadType = 'Rte';


SysPwrModMsgInvld = DataDict.IpSignal;
SysPwrModMsgInvld.LongName = 'System Power Mode Message Invalid';
SysPwrModMsgInvld.Description = [...
  'System Power Mode Message Invalid, used to determine System State Requ' ...
  'est Enable.'];
SysPwrModMsgInvld.DocUnits = 'Cnt';
SysPwrModMsgInvld.EngDT = dt.lgc;
SysPwrModMsgInvld.EngInit = 0;
SysPwrModMsgInvld.EngMin = 0;
SysPwrModMsgInvld.EngMax = 1;
SysPwrModMsgInvld.ReadIn = {'GmVehPwrModPer1'};
SysPwrModMsgInvld.ReadType = 'Rte';


SysPwrModRun = DataDict.IpSignal;
SysPwrModRun.LongName = 'System Power Mode Run';
SysPwrModRun.Description = [...
  'System Power Mode Run, used to determine System State Request Enable.'];
SysPwrModRun.DocUnits = 'Cnt';
SysPwrModRun.EngDT = dt.lgc;
SysPwrModRun.EngInit = 0;
SysPwrModRun.EngMin = 0;
SysPwrModRun.EngMax = 1;
SysPwrModRun.ReadIn = {'GmVehPwrModPer1'};
SysPwrModRun.ReadType = 'Rte';


SysStEnaReqOvrd = DataDict.IpSignal;
SysStEnaReqOvrd.LongName = 'System State Enable Request Override';
SysStEnaReqOvrd.Description = [...
  'It is used to determine which method is used for System State Request ' ...
  'Enable.'];
SysStEnaReqOvrd.DocUnits = 'Cnt';
SysStEnaReqOvrd.EngDT = dt.lgc;
SysStEnaReqOvrd.EngInit = 0;
SysStEnaReqOvrd.EngMin = 0;
SysStEnaReqOvrd.EngMax = 1;
SysStEnaReqOvrd.ReadIn = {'GmVehPwrModPer1'};
SysStEnaReqOvrd.ReadType = 'Rte';


SysStFltOutpReqDi = DataDict.IpSignal;
SysStFltOutpReqDi.LongName = 'System State Fault Output Request Disable';
SysStFltOutpReqDi.Description = [...
  'It is used to determine Power Supply Enable Request.'];
SysStFltOutpReqDi.DocUnits = 'Cnt';
SysStFltOutpReqDi.EngDT = dt.lgc;
SysStFltOutpReqDi.EngInit = 0;
SysStFltOutpReqDi.EngMin = 0;
SysStFltOutpReqDi.EngMax = 1;
SysStFltOutpReqDi.ReadIn = {'GmVehPwrModPer1'};
SysStFltOutpReqDi.ReadType = 'Rte';


VehSpdArbd = DataDict.IpSignal;
VehSpdArbd.LongName = 'Vehicle Speed Arbitrated';
VehSpdArbd.Description = [...
  'It is used to determine whether to activate assist or keep assist.'];
VehSpdArbd.DocUnits = 'Kph';
VehSpdArbd.EngDT = dt.float32;
VehSpdArbd.EngInit = 0;
VehSpdArbd.EngMin = 0;
VehSpdArbd.EngMax = 255;
VehSpdArbd.ReadIn = {'GmVehPwrModPer1'};
VehSpdArbd.ReadType = 'Rte';


VehSpdSnsrVld = DataDict.IpSignal;
VehSpdSnsrVld.LongName = 'Vehicle Speed Sensor Valid';
VehSpdSnsrVld.Description = [...
  'Vehicle Speed Sensro Valid, used to determine System State Request Ena' ...
  'ble.'];
VehSpdSnsrVld.DocUnits = 'Cnt';
VehSpdSnsrVld.EngDT = dt.lgc;
VehSpdSnsrVld.EngInit = 0;
VehSpdSnsrVld.EngMin = 0;
VehSpdSnsrVld.EngMax = 1;
VehSpdSnsrVld.ReadIn = {'GmVehPwrModPer1'};
VehSpdSnsrVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
PwrSplyEnaReq = DataDict.OpSignal;
PwrSplyEnaReq.LongName = 'Power Supply Enable Request';
PwrSplyEnaReq.Description = [...
  'Criteria needed to turn on all power supplies'];
PwrSplyEnaReq.DocUnits = 'Cnt';
PwrSplyEnaReq.SwcShoName = 'GmVehPwrMod';
PwrSplyEnaReq.EngDT = dt.lgc;
PwrSplyEnaReq.EngInit = 0;
PwrSplyEnaReq.EngMin = 0;
PwrSplyEnaReq.EngMax = 1;
PwrSplyEnaReq.TestTolerance = 0;
PwrSplyEnaReq.WrittenIn = {'GmVehPwrModPer1'};
PwrSplyEnaReq.WriteType = 'Rte';


SysOperMotTqCmdSca = DataDict.OpSignal;
SysOperMotTqCmdSca.LongName = 'System Operational Motor Torque Command Scale';
SysOperMotTqCmdSca.Description = [...
  'Motor Torque Command Scale applied when the System State Request Enabl' ...
  'e is True'];
SysOperMotTqCmdSca.DocUnits = 'Uls';
SysOperMotTqCmdSca.SwcShoName = 'GmVehPwrMod';
SysOperMotTqCmdSca.EngDT = dt.float32;
SysOperMotTqCmdSca.EngInit = 0;
SysOperMotTqCmdSca.EngMin = 0;
SysOperMotTqCmdSca.EngMax = 1;
SysOperMotTqCmdSca.TestTolerance = 0;
SysOperMotTqCmdSca.WrittenIn = {'GmVehPwrModPer1'};
SysOperMotTqCmdSca.WriteType = 'Rte';


SysOperRampRate = DataDict.OpSignal;
SysOperRampRate.LongName = 'System Operational Ramp Rate';
SysOperRampRate.Description = [...
  'Ramp rate allied to System Operate Motor Torque Command Scale'];
SysOperRampRate.DocUnits = 'UlsPerSec';
SysOperRampRate.SwcShoName = 'GmVehPwrMod';
SysOperRampRate.EngDT = dt.float32;
SysOperRampRate.EngInit = 0.1;
SysOperRampRate.EngMin = 0.1;
SysOperRampRate.EngMax = 500;
SysOperRampRate.TestTolerance = 0;
SysOperRampRate.WrittenIn = {'GmVehPwrModPer1'};
SysOperRampRate.WriteType = 'Rte';


SysStReqEna = DataDict.OpSignal;
SysStReqEna.LongName = 'System State Request Enable';
SysStReqEna.Description = 'Criteria needed to provide assist';
SysStReqEna.DocUnits = 'Cnt';
SysStReqEna.SwcShoName = 'GmVehPwrMod';
SysStReqEna.EngDT = dt.lgc;
SysStReqEna.EngInit = 0;
SysStReqEna.EngMin = 0;
SysStReqEna.EngMax = 1;
SysStReqEna.TestTolerance = 0;
SysStReqEna.WrittenIn = {'GmVehPwrModPer1'};
SysStReqEna.WriteType = 'Rte';


VehPwrModDftVehSpdEna = DataDict.OpSignal;
VehPwrModDftVehSpdEna.LongName = 'Vehicle Power Mode Default Vehicle Speed Enable';
VehPwrModDftVehSpdEna.Description = [...
  'Based on vehicle mode default vehicle speed assist is needed when enab' ...
  'led'];
VehPwrModDftVehSpdEna.DocUnits = 'Cnt';
VehPwrModDftVehSpdEna.SwcShoName = 'GmVehPwrMod';
VehPwrModDftVehSpdEna.EngDT = dt.lgc;
VehPwrModDftVehSpdEna.EngInit = 0;
VehPwrModDftVehSpdEna.EngMin = 0;
VehPwrModDftVehSpdEna.EngMax = 1;
VehPwrModDftVehSpdEna.TestTolerance = 0;
VehPwrModDftVehSpdEna.WrittenIn = {'GmVehPwrModPer1'};
VehPwrModDftVehSpdEna.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GmVehPwrModHwTqMinKeepAssi = DataDict.Calibration;
GmVehPwrModHwTqMinKeepAssi.LongName = 'Handwheel Torque Minimum Keep Assist';
GmVehPwrModHwTqMinKeepAssi.Description = [...
  'Minimum torque needed to maintain assist once provided '];
GmVehPwrModHwTqMinKeepAssi.DocUnits = 'HwNwtMtr';
GmVehPwrModHwTqMinKeepAssi.EngDT = dt.float32;
GmVehPwrModHwTqMinKeepAssi.EngVal = 0.8;
GmVehPwrModHwTqMinKeepAssi.EngMin = 0;
GmVehPwrModHwTqMinKeepAssi.EngMax = 10;
GmVehPwrModHwTqMinKeepAssi.Cardinality = 'Inin';
GmVehPwrModHwTqMinKeepAssi.CustomerVisible = false;
GmVehPwrModHwTqMinKeepAssi.Online = false;
GmVehPwrModHwTqMinKeepAssi.Impact = 'H';
GmVehPwrModHwTqMinKeepAssi.TuningOwner = 'CSE';
GmVehPwrModHwTqMinKeepAssi.GraphLink = {''};
GmVehPwrModHwTqMinKeepAssi.Monotony = 'None';
GmVehPwrModHwTqMinKeepAssi.MaxGrad = 999;
GmVehPwrModHwTqMinKeepAssi.PortName = 'GmVehPwrModHwTqMinKeepAssi';


GmVehPwrModHwTqMinKeepTmr = DataDict.Calibration;
GmVehPwrModHwTqMinKeepTmr.LongName = 'Handwheel Torque Minimum Keep Timer';
GmVehPwrModHwTqMinKeepTmr.Description = [...
  'Timer to detect torque not present and ok to shutdown'];
GmVehPwrModHwTqMinKeepTmr.DocUnits = 'Sec';
GmVehPwrModHwTqMinKeepTmr.EngDT = dt.u32;
GmVehPwrModHwTqMinKeepTmr.EngVal = 10;
GmVehPwrModHwTqMinKeepTmr.EngMin = 0;
GmVehPwrModHwTqMinKeepTmr.EngMax = 50;
GmVehPwrModHwTqMinKeepTmr.Cardinality = 'Inin';
GmVehPwrModHwTqMinKeepTmr.CustomerVisible = false;
GmVehPwrModHwTqMinKeepTmr.Online = false;
GmVehPwrModHwTqMinKeepTmr.Impact = 'H';
GmVehPwrModHwTqMinKeepTmr.TuningOwner = 'CSE';
GmVehPwrModHwTqMinKeepTmr.GraphLink = {''};
GmVehPwrModHwTqMinKeepTmr.Monotony = 'None';
GmVehPwrModHwTqMinKeepTmr.MaxGrad = 999;
GmVehPwrModHwTqMinKeepTmr.PortName = 'GmVehPwrModHwTqMinKeepTmr';


GmVehPwrModOperRampRate = DataDict.Calibration;
GmVehPwrModOperRampRate.LongName = 'Operational Ramp Rate';
GmVehPwrModOperRampRate.Description = [...
  'Ramp rate for any transition of applying System Operate Motor Torque C' ...
  'ommand Scale'];
GmVehPwrModOperRampRate.DocUnits = 'UlsPerSec';
GmVehPwrModOperRampRate.EngDT = dt.float32;
GmVehPwrModOperRampRate.EngVal = 0.5;
GmVehPwrModOperRampRate.EngMin = 0.1;
GmVehPwrModOperRampRate.EngMax = 500;
GmVehPwrModOperRampRate.Cardinality = 'Inin';
GmVehPwrModOperRampRate.CustomerVisible = false;
GmVehPwrModOperRampRate.Online = false;
GmVehPwrModOperRampRate.Impact = 'H';
GmVehPwrModOperRampRate.TuningOwner = 'CSE';
GmVehPwrModOperRampRate.GraphLink = {''};
GmVehPwrModOperRampRate.Monotony = 'None';
GmVehPwrModOperRampRate.MaxGrad = 999;
GmVehPwrModOperRampRate.PortName = 'GmVehPwrModOperRampRate';


GmVehPwrModVehSpdAssiOnMin = DataDict.Calibration;
GmVehPwrModVehSpdAssiOnMin.LongName = 'Vehicle Speed Assist on Minimum';
GmVehPwrModVehSpdAssiOnMin.Description = [...
  'Minimum vehicle speed in order to provide assist if Engine Run is fals' ...
  'e'];
GmVehPwrModVehSpdAssiOnMin.DocUnits = 'Kph';
GmVehPwrModVehSpdAssiOnMin.EngDT = dt.float32;
GmVehPwrModVehSpdAssiOnMin.EngVal = 0.1;
GmVehPwrModVehSpdAssiOnMin.EngMin = 0;
GmVehPwrModVehSpdAssiOnMin.EngMax = 511;
GmVehPwrModVehSpdAssiOnMin.Cardinality = 'Inin';
GmVehPwrModVehSpdAssiOnMin.CustomerVisible = false;
GmVehPwrModVehSpdAssiOnMin.Online = false;
GmVehPwrModVehSpdAssiOnMin.Impact = 'H';
GmVehPwrModVehSpdAssiOnMin.TuningOwner = 'CSE';
GmVehPwrModVehSpdAssiOnMin.GraphLink = {''};
GmVehPwrModVehSpdAssiOnMin.Monotony = 'None';
GmVehPwrModVehSpdAssiOnMin.MaxGrad = 999;
GmVehPwrModVehSpdAssiOnMin.PortName = 'GmVehPwrModVehSpdAssiOnMin';


GmVehPwrModVehSpdMinKeepAssi = DataDict.Calibration;
GmVehPwrModVehSpdMinKeepAssi.LongName = 'Vehicle Speed Minimum Keep Assist';
GmVehPwrModVehSpdMinKeepAssi.Description = [...
  'Minimum vehicle speed needed to maintain assist once provided'];
GmVehPwrModVehSpdMinKeepAssi.DocUnits = 'Kph';
GmVehPwrModVehSpdMinKeepAssi.EngDT = dt.float32;
GmVehPwrModVehSpdMinKeepAssi.EngVal = 3;
GmVehPwrModVehSpdMinKeepAssi.EngMin = 0;
GmVehPwrModVehSpdMinKeepAssi.EngMax = 511;
GmVehPwrModVehSpdMinKeepAssi.Cardinality = 'Inin';
GmVehPwrModVehSpdMinKeepAssi.CustomerVisible = false;
GmVehPwrModVehSpdMinKeepAssi.Online = false;
GmVehPwrModVehSpdMinKeepAssi.Impact = 'H';
GmVehPwrModVehSpdMinKeepAssi.TuningOwner = 'CSE';
GmVehPwrModVehSpdMinKeepAssi.GraphLink = {''};
GmVehPwrModVehSpdMinKeepAssi.Monotony = 'None';
GmVehPwrModVehSpdMinKeepAssi.MaxGrad = 999;
GmVehPwrModVehSpdMinKeepAssi.PortName = 'GmVehPwrModVehSpdMinKeepAssi';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dGmVehPwrModHwTqKeepAssi = DataDict.Display;
dGmVehPwrModHwTqKeepAssi.LongName = 'GM Vehicle Power Mode Hand Wheel Torque Keep Assist';
dGmVehPwrModHwTqKeepAssi.Description = [...
  'It indicates whether the abs value of the hand wheel torque is smaller' ...
  ' than a threshold.'];
dGmVehPwrModHwTqKeepAssi.DocUnits = 'Cnt';
dGmVehPwrModHwTqKeepAssi.EngDT = dt.lgc;
dGmVehPwrModHwTqKeepAssi.EngMin = 0;
dGmVehPwrModHwTqKeepAssi.EngMax = 1;
dGmVehPwrModHwTqKeepAssi.InitRowCol = [1  1];


dGmVehPwrModVehSpdAssiKeepMin = DataDict.Display;
dGmVehPwrModVehSpdAssiKeepMin.LongName = 'GM Vehicle Power Mode Vehicle Speed Assist Keep Minimum';
dGmVehPwrModVehSpdAssiKeepMin.Description = [...
  'It indicates whether the vehicle speed arbitration is greater than a t' ...
  'hreshold.'];
dGmVehPwrModVehSpdAssiKeepMin.DocUnits = 'Cnt';
dGmVehPwrModVehSpdAssiKeepMin.EngDT = dt.lgc;
dGmVehPwrModVehSpdAssiKeepMin.EngMin = 0;
dGmVehPwrModVehSpdAssiKeepMin.EngMax = 1;
dGmVehPwrModVehSpdAssiKeepMin.InitRowCol = [1  1];


dGmVehPwrModVehSpdAssiOnMin = DataDict.Display;
dGmVehPwrModVehSpdAssiOnMin.LongName = 'GM Vehicle Power Mode Vehicle Speed Assist On Minimum';
dGmVehPwrModVehSpdAssiOnMin.Description = [...
  'It indicates whether the vehicle speed arbitration is greater than a t' ...
  'hreshold.'];
dGmVehPwrModVehSpdAssiOnMin.DocUnits = 'Cnt';
dGmVehPwrModVehSpdAssiOnMin.EngDT = dt.lgc;
dGmVehPwrModVehSpdAssiOnMin.EngMin = 0;
dGmVehPwrModVehSpdAssiOnMin.EngMax = 1;
dGmVehPwrModVehSpdAssiOnMin.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
PrevSysStReqEnaVal = DataDict.PIM;
PrevSysStReqEnaVal.LongName = 'Previous System State Request Enable Value';
PrevSysStReqEnaVal.Description = [...
  'State variable used determine what the previous System State Requestva' ...
  'lue is. This is use to determine to look at requirements to set System' ...
  'State Request Enable to True or to look at requirements to set SystemS' ...
  'tate Request Enable to False.'];
PrevSysStReqEnaVal.DocUnits = 'Cnt';
PrevSysStReqEnaVal.EngDT = dt.lgc;
PrevSysStReqEnaVal.EngMin = 0;
PrevSysStReqEnaVal.EngMax = 1;
PrevSysStReqEnaVal.InitRowCol = [1  1];


TqRefTi = DataDict.PIM;
TqRefTi.LongName = 'Torque Reference Time';
TqRefTi.Description = [...
  'A snapshot of system time used to calculate elapsed time in this loop ' ...
  'to compare torque to a threshold.'];
TqRefTi.DocUnits = 'Cnt';
TqRefTi.EngDT = dt.u32;
TqRefTi.EngMin = 0;
TqRefTi.EngMax = 4294967295;
TqRefTi.InitRowCol = [1  1];


TqRefTiActv = DataDict.PIM;
TqRefTiActv.LongName = 'Torque Reference Timer Active';
TqRefTiActv.Description = [...
  'Indicates whether the Torque reference timer is active or not'];
TqRefTiActv.DocUnits = 'Cnt';
TqRefTiActv.EngDT = dt.lgc;
TqRefTiActv.EngMin = 0;
TqRefTiActv.EngMax = 1;
TqRefTiActv.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ASSIKEEPMINIDX_CNT_U16 = DataDict.Constant;
ASSIKEEPMINIDX_CNT_U16.LongName = 'Assist Keep Min';
ASSIKEEPMINIDX_CNT_U16.Description = [...
  'To get look up index number, assign 32 when the assist keep min is tru' ...
  'e'];
ASSIKEEPMINIDX_CNT_U16.DocUnits = 'Cnt';
ASSIKEEPMINIDX_CNT_U16.EngDT = dt.u16;
ASSIKEEPMINIDX_CNT_U16.EngVal = 32;
ASSIKEEPMINIDX_CNT_U16.Define = 'Local';


BUSOFFHISPDIDX_CNT_U16 = DataDict.Constant;
BUSOFFHISPDIDX_CNT_U16.LongName = ' Bus Off Hi Speed Index';
BUSOFFHISPDIDX_CNT_U16.Description = [...
  'To get look up index number, assign 2 when the bus off hi speed is tru' ...
  'e'];
BUSOFFHISPDIDX_CNT_U16.DocUnits = 'Cnt';
BUSOFFHISPDIDX_CNT_U16.EngDT = dt.u16;
BUSOFFHISPDIDX_CNT_U16.EngVal = 2;
BUSOFFHISPDIDX_CNT_U16.Define = 'Local';


CNTTOSEC_ULS_U32 = DataDict.Constant;
CNTTOSEC_ULS_U32.LongName = 'Count to Second';
CNTTOSEC_ULS_U32.Description = [...
  'Convert Counts(100MicroSeconds) to seconds'];
CNTTOSEC_ULS_U32.DocUnits = 'Uls';
CNTTOSEC_ULS_U32.EngDT = dt.u32;
CNTTOSEC_ULS_U32.EngVal = 10000;
CNTTOSEC_ULS_U32.Define = 'Local';


ENGRUNACTVIDX_CNT_U16 = DataDict.Constant;
ENGRUNACTVIDX_CNT_U16.LongName = 'Engine Run Active Index';
ENGRUNACTVIDX_CNT_U16.Description = [...
  'To get look up index number, assign 64 when the engine run active is t' ...
  'rue'];
ENGRUNACTVIDX_CNT_U16.DocUnits = 'Cnt';
ENGRUNACTVIDX_CNT_U16.EngDT = dt.u16;
ENGRUNACTVIDX_CNT_U16.EngVal = 64;
ENGRUNACTVIDX_CNT_U16.Define = 'Local';


GMVEHPWRMODSYSSTREQENA_CNT_LOGL = DataDict.Constant;
GMVEHPWRMODSYSSTREQENA_CNT_LOGL.LongName = 'System State Request Enable';
GMVEHPWRMODSYSSTREQENA_CNT_LOGL.Description = [...
  'Truth tables for system state request enable'];
GMVEHPWRMODSYSSTREQENA_CNT_LOGL.DocUnits = 'Cnt';
GMVEHPWRMODSYSSTREQENA_CNT_LOGL.EngDT = dt.lgc;
GMVEHPWRMODSYSSTREQENA_CNT_LOGL.EngVal =  ...
   [0                0                0                1                0                0                0                1                0                0                0                1                0                0                0                1                0                1                0                1                0                1                0                1                0                1                0                1                0                1                0                1                0                0                0                1                0                0                0                1                1                1                0                1                1                1                0                1                0                1                0                1                0                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                0                1                0                1                0                1                0                1                0                1                0                1                0                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                0                1                0                1                0                1                0                1                1                1                0                1                1                1                0                1                1                0                0                1                0                0                0                1                0                0                0                1                0                0                0                1                1                1                0                1                0                1                0                1                0                1                0                1                0                1                0                1                1                0                0                1                0                0                0                1                1                1                0                1                1                1                0                1                1                1                0                1                0                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                0                1                0                1                0                1                0                1                0                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                1                1                0                1                0                1                0                1                1                1                0                1                1                1                0                1                1                1                1                1                1                1                1                1                0                0                1                1                1                1                1                1                1                1                1                1                1                1                0                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                0                0                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1                1];
GMVEHPWRMODSYSSTREQENA_CNT_LOGL.Define = 'Local';


GMVEHPWRMODVAREFF_CNT_LOGL = DataDict.Constant;
GMVEHPWRMODVAREFF_CNT_LOGL.LongName = 'Variable Effort';
GMVEHPWRMODVAREFF_CNT_LOGL.Description = 'Truth table for wariable effort';
GMVEHPWRMODVAREFF_CNT_LOGL.DocUnits = 'Cnt';
GMVEHPWRMODVAREFF_CNT_LOGL.EngDT = dt.lgc;
GMVEHPWRMODVAREFF_CNT_LOGL.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                1                0                0                0                0                0                0                0                0                0                0                0                1                0                0                0                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                0                1                0                0                0                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                1                0                0                0                0                0                0                0                0                0                0                0                1                0                0                0                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                0                1                0                0                0                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                0                0                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                0                0                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0                0                0                0                0                0                0                0                0                1                1                0                0                1                1                0                0];
GMVEHPWRMODVAREFF_CNT_LOGL.Define = 'Local';


GPIOMCUENAIDX_CNT_U16 = DataDict.Constant;
GPIOMCUENAIDX_CNT_U16.LongName = 'Communication Enable Index';
GPIOMCUENAIDX_CNT_U16.Description = [...
  'To get look up index number, assign 256 when the communication enable ' ...
  'is true'];
GPIOMCUENAIDX_CNT_U16.DocUnits = 'Cnt';
GPIOMCUENAIDX_CNT_U16.EngDT = dt.u16;
GPIOMCUENAIDX_CNT_U16.EngVal = 256;
GPIOMCUENAIDX_CNT_U16.Define = 'Local';


KEEPASSIIDX_CNT_U16 = DataDict.Constant;
KEEPASSIIDX_CNT_U16.LongName = 'Keep Assist Index';
KEEPASSIIDX_CNT_U16.Description = [...
  'To get look up index number, assign 1 when the the keep assist tempora' ...
  'ry variable is true'];
KEEPASSIIDX_CNT_U16.DocUnits = 'Cnt';
KEEPASSIIDX_CNT_U16.EngDT = dt.u16;
KEEPASSIIDX_CNT_U16.EngVal = 1;
KEEPASSIIDX_CNT_U16.Define = 'Local';


MAXMOTTQCMDSCA_ULS_F32 = DataDict.Constant;
MAXMOTTQCMDSCA_ULS_F32.LongName = 'Minimum Motor Torque Command Scale';
MAXMOTTQCMDSCA_ULS_F32.Description = [...
  'The minimum value that can be applied to motor torque command scale'];
MAXMOTTQCMDSCA_ULS_F32.DocUnits = 'Uls';
MAXMOTTQCMDSCA_ULS_F32.EngDT = dt.float32;
MAXMOTTQCMDSCA_ULS_F32.EngVal = 1;
MAXMOTTQCMDSCA_ULS_F32.Define = 'Local';


MAXRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MAXRAMPRATE_ULSPERSEC_F32.LongName = 'Maximum Ramp Rate';
MAXRAMPRATE_ULSPERSEC_F32.Description = 'Ramp Rate maximum value';
MAXRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MAXRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MAXRAMPRATE_ULSPERSEC_F32.EngVal = 500;
MAXRAMPRATE_ULSPERSEC_F32.Define = 'Local';


MINMOTTQCMDSCA_ULS_F32 = DataDict.Constant;
MINMOTTQCMDSCA_ULS_F32.LongName = 'Minimum Motor Torque Command Scale';
MINMOTTQCMDSCA_ULS_F32.Description = [...
  'The minimum value that can be applied to motor torque command scale'];
MINMOTTQCMDSCA_ULS_F32.DocUnits = 'Uls';
MINMOTTQCMDSCA_ULS_F32.EngDT = dt.float32;
MINMOTTQCMDSCA_ULS_F32.EngVal = 0;
MINMOTTQCMDSCA_ULS_F32.Define = 'Local';


MINRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MINRAMPRATE_ULSPERSEC_F32.LongName = 'Minimum Ramp Rate';
MINRAMPRATE_ULSPERSEC_F32.Description = 'Ramp Rate minimum value';
MINRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MINRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MINRAMPRATE_ULSPERSEC_F32.EngVal = 0;
MINRAMPRATE_ULSPERSEC_F32.Define = 'Local';


PRPNSYSACTVMSGINVLDIDX_CNT_U16 = DataDict.Constant;
PRPNSYSACTVMSGINVLDIDX_CNT_U16.LongName = 'Propulsion System Active Message Invalid';
PRPNSYSACTVMSGINVLDIDX_CNT_U16.Description = [...
  'To get look up index number, assign 16 when the Message Invalid is tru' ...
  'e'];
PRPNSYSACTVMSGINVLDIDX_CNT_U16.DocUnits = 'Cnt';
PRPNSYSACTVMSGINVLDIDX_CNT_U16.EngDT = dt.u16;
PRPNSYSACTVMSGINVLDIDX_CNT_U16.EngVal = 16;
PRPNSYSACTVMSGINVLDIDX_CNT_U16.Define = 'Local';


SYSPWRMODMSGINVLDIDX_CNT_U16 = DataDict.Constant;
SYSPWRMODMSGINVLDIDX_CNT_U16.LongName = 'System Power Mode Message Invalid';
SYSPWRMODMSGINVLDIDX_CNT_U16.Description = [...
  'To get look up index number, assign 4 when the Message Invalid is true' ...
  ''];
SYSPWRMODMSGINVLDIDX_CNT_U16.DocUnits = 'Cnt';
SYSPWRMODMSGINVLDIDX_CNT_U16.EngDT = dt.u16;
SYSPWRMODMSGINVLDIDX_CNT_U16.EngVal = 4;
SYSPWRMODMSGINVLDIDX_CNT_U16.Define = 'Local';


SYSPWRMODRUNIDX_CNT_U16 = DataDict.Constant;
SYSPWRMODRUNIDX_CNT_U16.LongName = 'System Power Mode Run Index';
SYSPWRMODRUNIDX_CNT_U16.Description = [...
  'To get look up index number, assign 128 when the system power mode Run' ...
  ' is true'];
SYSPWRMODRUNIDX_CNT_U16.DocUnits = 'Cnt';
SYSPWRMODRUNIDX_CNT_U16.EngDT = dt.u16;
SYSPWRMODRUNIDX_CNT_U16.EngVal = 128;
SYSPWRMODRUNIDX_CNT_U16.Define = 'Local';


VEHSPDSNSRVLDIDX_CNT_U16 = DataDict.Constant;
VEHSPDSNSRVLDIDX_CNT_U16.LongName = 'Vehicle Speed Sensor Valid';
VEHSPDSNSRVLDIDX_CNT_U16.Description = [...
  'To get look up index number, assign 8 when the vehicle speed sensor va' ...
  'lid is true'];
VEHSPDSNSRVLDIDX_CNT_U16.DocUnits = 'Cnt';
VEHSPDSNSRVLDIDX_CNT_U16.EngDT = dt.u16;
VEHSPDSNSRVLDIDX_CNT_U16.EngVal = 8;
VEHSPDSNSRVLDIDX_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
