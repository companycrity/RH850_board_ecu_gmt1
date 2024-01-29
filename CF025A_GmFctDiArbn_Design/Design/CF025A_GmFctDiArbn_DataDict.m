%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2016 15:27:49       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF025A = DataDict.FDD;
CF025A.Version = '1.1.X';
CF025A.LongName = 'GM Function Disable Arbitration';
CF025A.ShoName  = 'GmFctDiArbn';
CF025A.DesignASIL = 'QM';
CF025A.Description = [...
  'Function Disable Arbitration module for General Motors vehicles.This m' ...
  'odule disables functions based on General Motors requirements.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmFctDiArbnInit1 = DataDict.Runnable;
GmFctDiArbnInit1.Context = 'Rte';
GmFctDiArbnInit1.TimeStep = 0;
GmFctDiArbnInit1.Description = 'Empty init function';

GmFctDiArbnPer1 = DataDict.Runnable;
GmFctDiArbnPer1.Context = 'Rte';
GmFctDiArbnPer1.TimeStep = 0.010;
GmFctDiArbnPer1.Description = [...
  'Runnable to check system conditions to enable/disable some functionali' ...
  'ty.'];

GmFctDiReq = DataDict.SrvRunnable;
GmFctDiReq.Context = 'Rte';
GmFctDiReq.Description = [...
  'Server to call when you want to disable.'];
GmFctDiReq.Return = DataDict.CSReturn;
GmFctDiReq.Return.Type = 'None';
GmFctDiReq.Return.Min = [];
GmFctDiReq.Return.Max = [];
GmFctDiReq.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'GmFctDiArbnPer1'};
GetRefTmr100MicroSec32bit.Description = 'Get current system time.';
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
GetTiSpan100MicroSec32bit.CallLocation = {'GmFctDiArbnPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Get time difference between the RefTmr and current system time.'];
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
ApaEna = DataDict.IpSignal;
ApaEna.LongName = 'APA Enable';
ApaEna.Description = 'Enable for APA';
ApaEna.DocUnits = 'Cnt';
ApaEna.EngDT = dt.lgc;
ApaEna.EngInit = 0;
ApaEna.EngMin = 0;
ApaEna.EngMax = 1;
ApaEna.ReadIn = {'GmFctDiArbnPer1'};
ApaEna.ReadType = 'Rte';


EscEna = DataDict.IpSignal;
EscEna.LongName = 'ESC Enable';
EscEna.Description = 'Enable for ESC';
EscEna.DocUnits = 'Cnt';
EscEna.EngDT = dt.lgc;
EscEna.EngInit = 0;
EscEna.EngMin = 0;
EscEna.EngMax = 1;
EscEna.ReadIn = {'GmFctDiArbnPer1'};
EscEna.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Measured Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'GmFctDiArbnPer1'};
HwAg.ReadType = 'Rte';


HwAgEotCcw = DataDict.IpSignal;
HwAgEotCcw.LongName = 'Handwheel Angle End of Travel Counter Clockwise';
HwAgEotCcw.Description = [...
  'End of travel learned position in the counter-clockwise direction.  Th' ...
  'is is an NVM value that is both an input and output for the function.'];
HwAgEotCcw.DocUnits = 'HwDeg';
HwAgEotCcw.EngDT = dt.float32;
HwAgEotCcw.EngInit = -360;
HwAgEotCcw.EngMin = -900;
HwAgEotCcw.EngMax = -360;
HwAgEotCcw.ReadIn = {'GmFctDiArbnPer1'};
HwAgEotCcw.ReadType = 'Rte';


HwAgEotCw = DataDict.IpSignal;
HwAgEotCw.LongName = 'Handwheel Angle End of Travel ClockWise';
HwAgEotCw.Description = [...
  'End of travel learned position in the clockwise direction.  This is an' ...
  ' NVM value that is both an input and output for the function.'];
HwAgEotCw.DocUnits = 'HwDeg';
HwAgEotCw.EngDT = dt.float32;
HwAgEotCw.EngInit = 360;
HwAgEotCw.EngMin = 360;
HwAgEotCw.EngMax = 900;
HwAgEotCw.ReadIn = {'GmFctDiArbnPer1'};
HwAgEotCw.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel/Hardware Torque';
HwTq.Description = 'Measured Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'GmFctDiArbnPer1'};
HwTq.ReadType = 'Rte';


LkaEna = DataDict.IpSignal;
LkaEna.LongName = 'LKA Enable';
LkaEna.Description = 'Enable for LKA';
LkaEna.DocUnits = 'Cnt';
LkaEna.EngDT = dt.lgc;
LkaEna.EngInit = 0;
LkaEna.EngMin = 0;
LkaEna.EngMax = 1;
LkaEna.ReadIn = {'GmFctDiArbnPer1'};
LkaEna.ReadType = 'Rte';


LoaSt = DataDict.IpSignal;
LoaSt.LongName = 'LOA State';
LoaSt.Description = 'System Loss of Assist State';
LoaSt.DocUnits = 'Cnt';
LoaSt.EngDT = enum.LoaSt1;
LoaSt.EngInit = 0;
LoaSt.EngMin = LoaSt1.LOAST_NORM;
LoaSt.EngMax = LoaSt1.LOAST_IMDTSHTDWNREQD;
LoaSt.ReadIn = {'GmFctDiArbnPer1'};
LoaSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
ApaEnaArbn = DataDict.OpSignal;
ApaEnaArbn.LongName = 'APA Enable Arbitration';
ApaEnaArbn.Description = [...
  'APA Enable flag that has been arbitrated.'];
ApaEnaArbn.DocUnits = 'Cnt';
ApaEnaArbn.SwcShoName = 'GmFctDiArbn';
ApaEnaArbn.EngDT = dt.lgc;
ApaEnaArbn.EngInit = 0;
ApaEnaArbn.EngMin = 0;
ApaEnaArbn.EngMax = 1;
ApaEnaArbn.TestTolerance = 0;
ApaEnaArbn.WrittenIn = {'GmFctDiArbnPer1'};
ApaEnaArbn.WriteType = 'Rte';


EscEnaArbn = DataDict.OpSignal;
EscEnaArbn.LongName = 'ESC Enable Arbitration';
EscEnaArbn.Description = [...
  'ESC Enable flag that has been arbitrated.'];
EscEnaArbn.DocUnits = 'Cnt';
EscEnaArbn.SwcShoName = 'GmFctDiArbn';
EscEnaArbn.EngDT = dt.lgc;
EscEnaArbn.EngInit = 0;
EscEnaArbn.EngMin = 0;
EscEnaArbn.EngMax = 1;
EscEnaArbn.TestTolerance = 0;
EscEnaArbn.WrittenIn = {'GmFctDiArbnPer1'};
EscEnaArbn.WriteType = 'Rte';


GmFctDiSts = DataDict.OpSignal;
GmFctDiSts.LongName = 'GM Function Disable Status';
GmFctDiSts.Description = [...
  'Status of the GmFctDiArbn function.'];
GmFctDiSts.DocUnits = 'Cnt';
GmFctDiSts.SwcShoName = 'GmFctDiArbn';
GmFctDiSts.EngDT = enum.GmFctDiArbnSts1;
GmFctDiSts.EngInit = 0;
GmFctDiSts.EngMin = GmFctDiArbnSts1.GMFCTDIARBNSTS_WAIT;
GmFctDiSts.EngMax = GmFctDiArbnSts1.GMFCTDIARBNSTS_TIMEOUTFAIL;
GmFctDiSts.TestTolerance = 0;
GmFctDiSts.WrittenIn = {'GmFctDiArbnPer1'};
GmFctDiSts.WriteType = 'Rte';


InertiaCmpDecelGainDi = DataDict.OpSignal;
InertiaCmpDecelGainDi.LongName = 'Inertia Compensation Deceleration Gain Disable';
InertiaCmpDecelGainDi.Description = [...
  'Boolean value that is used to enable/disable Interia Compensation'];
InertiaCmpDecelGainDi.DocUnits = 'Cnt';
InertiaCmpDecelGainDi.SwcShoName = 'GmFctDiArbn';
InertiaCmpDecelGainDi.EngDT = dt.lgc;
InertiaCmpDecelGainDi.EngInit = 0;
InertiaCmpDecelGainDi.EngMin = 0;
InertiaCmpDecelGainDi.EngMax = 1;
InertiaCmpDecelGainDi.TestTolerance = 0;
InertiaCmpDecelGainDi.WrittenIn = {'GmFctDiArbnPer1'};
InertiaCmpDecelGainDi.WriteType = 'Rte';


LkaEnaArbn = DataDict.OpSignal;
LkaEnaArbn.LongName = 'LKA Enable Arbitration';
LkaEnaArbn.Description = [...
  'LKA Enable flag that has been arbitrated.'];
LkaEnaArbn.DocUnits = 'Cnt';
LkaEnaArbn.SwcShoName = 'GmFctDiArbn';
LkaEnaArbn.EngDT = dt.lgc;
LkaEnaArbn.EngInit = 0;
LkaEnaArbn.EngMin = 0;
LkaEnaArbn.EngMax = 1;
LkaEnaArbn.TestTolerance = 0;
LkaEnaArbn.WrittenIn = {'GmFctDiArbnPer1'};
LkaEnaArbn.WriteType = 'Rte';


PullCmpActvDi = DataDict.OpSignal;
PullCmpActvDi.LongName = 'Pull Compensation Active Disable';
PullCmpActvDi.Description = [...
  'Boolean value that is used to enable/disable Active Pull Compensation.' ...
  ];
PullCmpActvDi.DocUnits = 'Cnt';
PullCmpActvDi.SwcShoName = 'GmFctDiArbn';
PullCmpActvDi.EngDT = dt.lgc;
PullCmpActvDi.EngInit = 0;
PullCmpActvDi.EngMin = 0;
PullCmpActvDi.EngMax = 1;
PullCmpActvDi.TestTolerance = 0;
PullCmpActvDi.WrittenIn = {'GmFctDiArbnPer1'};
PullCmpActvDi.WriteType = 'Rte';


TunSetRtDi = DataDict.OpSignal;
TunSetRtDi.LongName = 'Tuning Set Runtime Disable';
TunSetRtDi.Description = [...
  'Boolean that is used to prevent Tuning Sets from changing during LOA.'];
TunSetRtDi.DocUnits = 'Cnt';
TunSetRtDi.SwcShoName = 'GmFctDiArbn';
TunSetRtDi.EngDT = dt.lgc;
TunSetRtDi.EngInit = 0;
TunSetRtDi.EngMin = 0;
TunSetRtDi.EngMax = 1;
TunSetRtDi.TestTolerance = 0;
TunSetRtDi.WrittenIn = {'GmFctDiArbnPer1'};
TunSetRtDi.WriteType = 'Rte';


WhlImbRejctnDi = DataDict.OpSignal;
WhlImbRejctnDi.LongName = 'Wheel Imbalance Rejection Disable';
WhlImbRejctnDi.Description = [...
  'Boolean that is used to enable/disable WIR.'];
WhlImbRejctnDi.DocUnits = 'Cnt';
WhlImbRejctnDi.SwcShoName = 'GmFctDiArbn';
WhlImbRejctnDi.EngDT = dt.lgc;
WhlImbRejctnDi.EngInit = 0;
WhlImbRejctnDi.EngMin = 0;
WhlImbRejctnDi.EngMax = 1;
WhlImbRejctnDi.TestTolerance = 0;
WhlImbRejctnDi.WrittenIn = {'GmFctDiArbnPer1'};
WhlImbRejctnDi.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
FctDiReq = DataDict.IRV;
FctDiReq.LongName = 'Function Disable Request';
FctDiReq.Description = [...
  'Boolean flag to see if the request to disable has been sent.'];
FctDiReq.DocUnits = 'Cnt';
FctDiReq.EngDT = dt.lgc;
FctDiReq.EngInit = 0;
FctDiReq.EngMin = 0;
FctDiReq.EngMax = 1;
FctDiReq.ReadIn = {'GmFctDiArbnPer1'};
FctDiReq.WrittenIn = {'GmFctDiReq'};


FctDiStrtTi = DataDict.IRV;
FctDiStrtTi.LongName = 'Function Disable Start Time';
FctDiStrtTi.Description = [...
  'System time captured when GmFctDiReq is called.'];
FctDiStrtTi.DocUnits = 'MicroSec';
FctDiStrtTi.EngDT = dt.u32;
FctDiStrtTi.EngInit = 0;
FctDiStrtTi.EngMin = 0;
FctDiStrtTi.EngMax = 10000000;
FctDiStrtTi.ReadIn = {'GmFctDiArbnPer1'};
FctDiStrtTi.WrittenIn = {'GmFctDiReq'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GmFctDiArbnEotHwAgThd = DataDict.Calibration;
GmFctDiArbnEotHwAgThd.LongName = 'GM Function Disable Arbitration End of Travel Handwheel Angle Threshold';
GmFctDiArbnEotHwAgThd.Description = [...
  'HwAg Eot threshold that must be satisfied for disable.'];
GmFctDiArbnEotHwAgThd.DocUnits = 'HwDeg';
GmFctDiArbnEotHwAgThd.EngDT = dt.float32;
GmFctDiArbnEotHwAgThd.EngVal = 20;
GmFctDiArbnEotHwAgThd.EngMin = 0;
GmFctDiArbnEotHwAgThd.EngMax = 50;
GmFctDiArbnEotHwAgThd.Cardinality = 'Cmn';
GmFctDiArbnEotHwAgThd.CustomerVisible = false;
GmFctDiArbnEotHwAgThd.Online = false;
GmFctDiArbnEotHwAgThd.Impact = 'L';
GmFctDiArbnEotHwAgThd.TuningOwner = 'CSE';
GmFctDiArbnEotHwAgThd.GraphLink = {''};
GmFctDiArbnEotHwAgThd.Monotony = 'None';
GmFctDiArbnEotHwAgThd.MaxGrad = 0;
GmFctDiArbnEotHwAgThd.PortName = 'GmFctDiArbnEotHwAgThd';


GmFctDiArbnEotTi = DataDict.Calibration;
GmFctDiArbnEotTi.LongName = 'GM Function Disable Arbitration End of Travel Time';
GmFctDiArbnEotTi.Description = [...
  'Time that HwAg must be within the desired Eot bounds for disable.'];
GmFctDiArbnEotTi.DocUnits = 'Sec';
GmFctDiArbnEotTi.EngDT = dt.float32;
GmFctDiArbnEotTi.EngVal = 1;
GmFctDiArbnEotTi.EngMin = 1;
GmFctDiArbnEotTi.EngMax = 5;
GmFctDiArbnEotTi.Cardinality = 'Cmn';
GmFctDiArbnEotTi.CustomerVisible = false;
GmFctDiArbnEotTi.Online = false;
GmFctDiArbnEotTi.Impact = 'L';
GmFctDiArbnEotTi.TuningOwner = 'CSE';
GmFctDiArbnEotTi.GraphLink = {''};
GmFctDiArbnEotTi.Monotony = 'None';
GmFctDiArbnEotTi.MaxGrad = 0;
GmFctDiArbnEotTi.PortName = 'GmFctDiArbnEotTi';


GmFctDiArbnOnCentrHwAgThd = DataDict.Calibration;
GmFctDiArbnOnCentrHwAgThd.LongName = 'GM Function Disable Arbitration On Center Handwheel Angle Threshold';
GmFctDiArbnOnCentrHwAgThd.Description = [...
  'HwAg On Center threshold that must be satisfied for disable.'];
GmFctDiArbnOnCentrHwAgThd.DocUnits = 'HwDeg';
GmFctDiArbnOnCentrHwAgThd.EngDT = dt.float32;
GmFctDiArbnOnCentrHwAgThd.EngVal = 5;
GmFctDiArbnOnCentrHwAgThd.EngMin = 5;
GmFctDiArbnOnCentrHwAgThd.EngMax = 100;
GmFctDiArbnOnCentrHwAgThd.Cardinality = 'Cmn';
GmFctDiArbnOnCentrHwAgThd.CustomerVisible = false;
GmFctDiArbnOnCentrHwAgThd.Online = false;
GmFctDiArbnOnCentrHwAgThd.Impact = 'L';
GmFctDiArbnOnCentrHwAgThd.TuningOwner = 'CSE';
GmFctDiArbnOnCentrHwAgThd.GraphLink = {''};
GmFctDiArbnOnCentrHwAgThd.Monotony = 'None';
GmFctDiArbnOnCentrHwAgThd.MaxGrad = 0;
GmFctDiArbnOnCentrHwAgThd.PortName = 'GmFctDiArbnOnCentrHwAgThd';


GmFctDiArbnOnCentrHwTqThd = DataDict.Calibration;
GmFctDiArbnOnCentrHwTqThd.LongName = 'GM Function Disable Arbitration On Center Handwheel Torque Threshold';
GmFctDiArbnOnCentrHwTqThd.Description = [...
  'HwTq On Center threshold that must be satisfied for disable.'];
GmFctDiArbnOnCentrHwTqThd.DocUnits = 'HwNwtMtr';
GmFctDiArbnOnCentrHwTqThd.EngDT = dt.float32;
GmFctDiArbnOnCentrHwTqThd.EngVal = 0;
GmFctDiArbnOnCentrHwTqThd.EngMin = -1;
GmFctDiArbnOnCentrHwTqThd.EngMax = 1;
GmFctDiArbnOnCentrHwTqThd.Cardinality = 'Cmn';
GmFctDiArbnOnCentrHwTqThd.CustomerVisible = false;
GmFctDiArbnOnCentrHwTqThd.Online = false;
GmFctDiArbnOnCentrHwTqThd.Impact = 'L';
GmFctDiArbnOnCentrHwTqThd.TuningOwner = 'CSE';
GmFctDiArbnOnCentrHwTqThd.GraphLink = {''};
GmFctDiArbnOnCentrHwTqThd.Monotony = 'None';
GmFctDiArbnOnCentrHwTqThd.MaxGrad = 0;
GmFctDiArbnOnCentrHwTqThd.PortName = 'GmFctDiArbnOnCentrHwTqThd';


GmFctDiArbnOnCentrTi = DataDict.Calibration;
GmFctDiArbnOnCentrTi.LongName = 'GM Function Disable Arbitration On Center Time';
GmFctDiArbnOnCentrTi.Description = [...
  'Time that HwTq and HwAg must be within the desired On Center bounds fo' ...
  'r disable.'];
GmFctDiArbnOnCentrTi.DocUnits = 'Sec';
GmFctDiArbnOnCentrTi.EngDT = dt.float32;
GmFctDiArbnOnCentrTi.EngVal = 1;
GmFctDiArbnOnCentrTi.EngMin = 0;
GmFctDiArbnOnCentrTi.EngMax = 15;
GmFctDiArbnOnCentrTi.Cardinality = 'Cmn';
GmFctDiArbnOnCentrTi.CustomerVisible = false;
GmFctDiArbnOnCentrTi.Online = false;
GmFctDiArbnOnCentrTi.Impact = 'L';
GmFctDiArbnOnCentrTi.TuningOwner = 'CSE';
GmFctDiArbnOnCentrTi.GraphLink = {''};
GmFctDiArbnOnCentrTi.Monotony = 'None';
GmFctDiArbnOnCentrTi.MaxGrad = 0;
GmFctDiArbnOnCentrTi.PortName = 'GmFctDiArbnOnCentrTi';


GmFctDiArbnSrvTi = DataDict.Calibration;
GmFctDiArbnSrvTi.LongName = 'GM Function Disable Arbitration Service Time';
GmFctDiArbnSrvTi.Description = [...
  'Total time allowed for the disable service procedure to be done in.'];
GmFctDiArbnSrvTi.DocUnits = 'Sec';
GmFctDiArbnSrvTi.EngDT = dt.float32;
GmFctDiArbnSrvTi.EngVal = 15;
GmFctDiArbnSrvTi.EngMin = 15;
GmFctDiArbnSrvTi.EngMax = 60;
GmFctDiArbnSrvTi.Cardinality = 'Cmn';
GmFctDiArbnSrvTi.CustomerVisible = false;
GmFctDiArbnSrvTi.Online = false;
GmFctDiArbnSrvTi.Impact = 'L';
GmFctDiArbnSrvTi.TuningOwner = 'CSE';
GmFctDiArbnSrvTi.GraphLink = {''};
GmFctDiArbnSrvTi.Monotony = 'None';
GmFctDiArbnSrvTi.MaxGrad = 0;
GmFctDiArbnSrvTi.PortName = 'GmFctDiArbnSrvTi';



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
CcwEotEnad = DataDict.PIM;
CcwEotEnad.LongName = 'Counter Clockwise End of Travel Enabled';
CcwEotEnad.Description = [...
  'Variable that tracks if the conditions for disable have been met for C' ...
  'cw Eot.'];
CcwEotEnad.DocUnits = 'Cnt';
CcwEotEnad.EngDT = dt.lgc;
CcwEotEnad.EngMin = 0;
CcwEotEnad.EngMax = 1;
CcwEotEnad.InitRowCol = [1  1];


CwEotEnad = DataDict.PIM;
CwEotEnad.LongName = 'ClockWise End of Travel Enabled';
CwEotEnad.Description = [...
  'Variable that tracks if the conditions for disable have been met for C' ...
  'w Eot.'];
CwEotEnad.DocUnits = 'Cnt';
CwEotEnad.EngDT = dt.lgc;
CwEotEnad.EngMin = 0;
CwEotEnad.EngMax = 1;
CwEotEnad.InitRowCol = [1  1];


FctDiLtch = DataDict.PIM;
FctDiLtch.LongName = 'Function Disable Latch';
FctDiLtch.Description = [...
  'Variable that tracks if the conditions for disable have been met and i' ...
  'f they have stays true until the next full key cycle.'];
FctDiLtch.DocUnits = 'Cnt';
FctDiLtch.EngDT = dt.lgc;
FctDiLtch.EngMin = 0;
FctDiLtch.EngMax = 1;
FctDiLtch.InitRowCol = [1  1];


InCcwEotRng = DataDict.PIM;
InCcwEotRng.LongName = 'In Counter Clockwise End of Travel Range';
InCcwEotRng.Description = [...
  'Variable that tracks if the handwheel angle is within the desired thre' ...
  'shold of Ccw EoT.'];
InCcwEotRng.DocUnits = 'Cnt';
InCcwEotRng.EngDT = dt.lgc;
InCcwEotRng.EngMin = 0;
InCcwEotRng.EngMax = 1;
InCcwEotRng.InitRowCol = [1  1];


InCcwEotRngElpdTi = DataDict.PIM;
InCcwEotRngElpdTi.LongName = 'In Counter Clockwise End of Travel Range Elapsed Time';
InCcwEotRngElpdTi.Description = [...
  'Time that the handwheel angle has been within the desired bound of Ccw' ...
  ' Eot bounds.'];
InCcwEotRngElpdTi.DocUnits = 'Sec';
InCcwEotRngElpdTi.EngDT = dt.u32;
InCcwEotRngElpdTi.EngMin = 0;
InCcwEotRngElpdTi.EngMax = 10000000;
InCcwEotRngElpdTi.InitRowCol = [1  1];


InCwEotRng = DataDict.PIM;
InCwEotRng.LongName = 'In ClockWise End of Travel Range';
InCwEotRng.Description = [...
  'Variable that tracks if the handwheel angle is within the desired thre' ...
  'shold of Cw EoT.'];
InCwEotRng.DocUnits = 'Cnt';
InCwEotRng.EngDT = dt.lgc;
InCwEotRng.EngMin = 0;
InCwEotRng.EngMax = 1;
InCwEotRng.InitRowCol = [1  1];


InCwEotRngElpdTi = DataDict.PIM;
InCwEotRngElpdTi.LongName = 'In ClockWise End of Travel Range Elapsed Time';
InCwEotRngElpdTi.Description = [...
  'Time that the handwheel angle has been within the desired bound of Cw ' ...
  'Eot bounds.'];
InCwEotRngElpdTi.DocUnits = 'Sec';
InCwEotRngElpdTi.EngDT = dt.u32;
InCwEotRngElpdTi.EngMin = 0;
InCwEotRngElpdTi.EngMax = 10000000;
InCwEotRngElpdTi.InitRowCol = [1  1];


InOnCentrRng = DataDict.PIM;
InOnCentrRng.LongName = 'In On Center Range';
InOnCentrRng.Description = [...
  'Variable that tracks if the handwheel angle and torque are within the ' ...
  'desired thresholds.'];
InOnCentrRng.DocUnits = 'Cnt';
InOnCentrRng.EngDT = dt.lgc;
InOnCentrRng.EngMin = 0;
InOnCentrRng.EngMax = 1;
InOnCentrRng.InitRowCol = [1  1];


OnCentrElpdTi = DataDict.PIM;
OnCentrElpdTi.LongName = 'On Center Elapsed Time';
OnCentrElpdTi.Description = [...
  'Time that the handwheel angle and torque have been within the desired ' ...
  'thresholds.'];
OnCentrElpdTi.DocUnits = 'Sec';
OnCentrElpdTi.EngDT = dt.u32;
OnCentrElpdTi.EngMin = 0;
OnCentrElpdTi.EngMax = 10000000;
OnCentrElpdTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
MICROSECTOSEC_ULS_F32 = DataDict.Constant;
MICROSECTOSEC_ULS_F32.LongName = 'Microsecond to Second';
MICROSECTOSEC_ULS_F32.Description = [...
  'Number of 100 microseconds in one second'];
MICROSECTOSEC_ULS_F32.DocUnits = 'Uls';
MICROSECTOSEC_ULS_F32.EngDT = dt.float32;
MICROSECTOSEC_ULS_F32.EngVal = 0.0001;
MICROSECTOSEC_ULS_F32.Define = 'Local';


ZEROHWAG_HWDEG_F32 = DataDict.Constant;
ZEROHWAG_HWDEG_F32.LongName = 'Zero Handwheel Angle';
ZEROHWAG_HWDEG_F32.Description = [...
  'Constant value to represent Zero handwheel angle'];
ZEROHWAG_HWDEG_F32.DocUnits = 'HwDeg';
ZEROHWAG_HWDEG_F32.EngDT = dt.float32;
ZEROHWAG_HWDEG_F32.EngVal = 0;
ZEROHWAG_HWDEG_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
