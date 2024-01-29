%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 09-Feb-2017 13:20:32       %
%                                  Created with tool release: 2.53.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF010A = DataDict.FDD;
CF010A.Version = '3.1.x';
CF010A.LongName = 'GM Torque Arbitration';
CF010A.ShoName  = 'GmTqArbn';
CF010A.DesignASIL = 'D';
CF010A.Description = [...
  'This module uses the signals from external modules, other functions an' ...
  'd enable flags from CF-09 to determine the amount of input and output ' ...
  'torque overlay to apply to SF-01 and SF-04 respectively and the amount' ...
  ' of scaling to apply to Assist, Return and Damping'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmTqArbnInit1 = DataDict.Runnable;
GmTqArbnInit1.Context = 'Rte';
GmTqArbnInit1.TimeStep = 0;
GmTqArbnInit1.Description = [...
  'Gm Torque Arbitration initialization runnable'];

GmTqArbnPer1 = DataDict.Runnable;
GmTqArbnPer1.Context = 'Rte';
GmTqArbnPer1.TimeStep = 0.002;
GmTqArbnPer1.Description = [...
  'Gm Torque Arbitration periodic runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EscCmd = DataDict.IpSignal;
EscCmd.LongName = 'ESC Command';
EscCmd.Description = [...
  'Enhanced Stability Control Torque Commanded'];
EscCmd.DocUnits = 'HwNwtMtr';
EscCmd.EngDT = dt.float32;
EscCmd.EngInit = 0;
EscCmd.EngMin = -10;
EscCmd.EngMax = 10;
EscCmd.ReadIn = {'GmTqArbnPer1'};
EscCmd.ReadType = 'Rte';


EscSt = DataDict.IpSignal;
EscSt.LongName = 'ESC State';
EscSt.Description = 'Enhanced Stability Control State';
EscSt.DocUnits = 'Cnt';
EscSt.EngDT = enum.GmTqArbnEscSt1;
EscSt.EngInit = GmTqArbnEscSt1.GMTQARBNESCST_INACTV;
EscSt.EngMin = GmTqArbnEscSt1.GMTQARBNESCST_INACTV;
EscSt.EngMax = GmTqArbnEscSt1.GMTQARBNESCST_MFGDI;
EscSt.ReadIn = {'GmTqArbnPer1'};
EscSt.ReadType = 'Rte';


HwAgServoEna = DataDict.IpSignal;
HwAgServoEna.LongName = 'Handwheel Angle Servo Smoothing Enable';
HwAgServoEna.Description = [...
  'Enable smoothing on Position Servo Torque Commanded'];
HwAgServoEna.DocUnits = 'Cnt';
HwAgServoEna.EngDT = dt.lgc;
HwAgServoEna.EngInit = 0;
HwAgServoEna.EngMin = 0;
HwAgServoEna.EngMax = 1;
HwAgServoEna.ReadIn = {'GmTqArbnPer1'};
HwAgServoEna.ReadType = 'Rte';


HwOscnEna = DataDict.IpSignal;
HwOscnEna.LongName = 'Torque Oscillation Enable';
HwOscnEna.Description = [...
  'Enable Handwheel Oscillation Torque Commanded to be added to Motor Tor' ...
  'que Overlay'];
HwOscnEna.DocUnits = 'Cnt';
HwOscnEna.EngDT = dt.lgc;
HwOscnEna.EngInit = 0;
HwOscnEna.EngMin = 0;
HwOscnEna.EngMax = 1;
HwOscnEna.ReadIn = {'GmTqArbnPer1'};
HwOscnEna.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'GmTqArbnPer1'};
HwTq.ReadType = 'Rte';


HwTqOscCmd = DataDict.IpSignal;
HwTqOscCmd.LongName = 'Handwheel Torque Oscillate Command';
HwTqOscCmd.Description = [...
  'Handwheel Torque Oscillate Commanded'];
HwTqOscCmd.DocUnits = 'MotNwtMtr';
HwTqOscCmd.EngDT = dt.float32;
HwTqOscCmd.EngInit = 0;
HwTqOscCmd.EngMin = -8.8;
HwTqOscCmd.EngMax = 8.8;
HwTqOscCmd.ReadIn = {'GmTqArbnPer1'};
HwTqOscCmd.ReadType = 'Rte';


LkaSt = DataDict.IpSignal;
LkaSt.LongName = 'LKA State';
LkaSt.Description = 'Lane Keeping Assist State';
LkaSt.DocUnits = 'Cnt';
LkaSt.EngDT = enum.GmTqArbnLkaSt1;
LkaSt.EngInit = GmTqArbnLkaSt1.GMTQARBNLKAST_INACTV;
LkaSt.EngMin = GmTqArbnLkaSt1.GMTQARBNLKAST_INACTV;
LkaSt.EngMax = GmTqArbnLkaSt1.GMTQARBNLKAST_MFGDI;
LkaSt.ReadIn = {'GmTqArbnPer1'};
LkaSt.ReadType = 'Rte';


LkaTqCmd = DataDict.IpSignal;
LkaTqCmd.LongName = 'LKA Command';
LkaTqCmd.Description = [...
  'Lane Keeping Assist Torque Commanded'];
LkaTqCmd.DocUnits = 'HwNwtMtr';
LkaTqCmd.EngDT = dt.float32;
LkaTqCmd.EngInit = 0;
LkaTqCmd.EngMin = -10;
LkaTqCmd.EngMax = 10;
LkaTqCmd.ReadIn = {'GmTqArbnPer1'};
LkaTqCmd.ReadType = 'Rte';


MotTqServoCmd = DataDict.IpSignal;
MotTqServoCmd.LongName = 'Motor Torque Servo Command';
MotTqServoCmd.Description = 'Motor Torque Servo Command';
MotTqServoCmd.DocUnits = 'HwNwtMtr';
MotTqServoCmd.EngDT = dt.float32;
MotTqServoCmd.EngInit = 0;
MotTqServoCmd.EngMin = -8.8;
MotTqServoCmd.EngMax = 8.8;
MotTqServoCmd.ReadIn = {'GmTqArbnPer1'};
MotTqServoCmd.ReadType = 'Rte';


VehSpdMaxSecur = DataDict.IpSignal;
VehSpdMaxSecur.LongName = 'Maximum Secure Vehicle Speed';
VehSpdMaxSecur.Description = 'Maximum Secure Vehicle Speed';
VehSpdMaxSecur.DocUnits = 'Kph';
VehSpdMaxSecur.EngDT = dt.float32;
VehSpdMaxSecur.EngInit = 0;
VehSpdMaxSecur.EngMin = 0;
VehSpdMaxSecur.EngMax = 511;
VehSpdMaxSecur.ReadIn = {'GmTqArbnPer1'};
VehSpdMaxSecur.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiCmdBasSca = DataDict.OpSignal;
AssiCmdBasSca.LongName = 'Assist Command Base Scale';
AssiCmdBasSca.Description = [...
  'Assist Command Base Scale used to scale assist function'];
AssiCmdBasSca.DocUnits = 'Uls';
AssiCmdBasSca.SwcShoName = 'GmTqArbn';
AssiCmdBasSca.EngDT = dt.float32;
AssiCmdBasSca.EngInit = 0;
AssiCmdBasSca.EngMin = 0;
AssiCmdBasSca.EngMax = 1;
AssiCmdBasSca.TestTolerance = 0.001;
AssiCmdBasSca.WrittenIn = {'GmTqArbnPer1'};
AssiCmdBasSca.WriteType = 'Rte';


DampgCmdSca = DataDict.OpSignal;
DampgCmdSca.LongName = 'Damping Command Scale';
DampgCmdSca.Description = [...
  'Damping Command Scale used for damping function'];
DampgCmdSca.DocUnits = 'Uls';
DampgCmdSca.SwcShoName = 'GmTqArbn';
DampgCmdSca.EngDT = dt.float32;
DampgCmdSca.EngInit = 0;
DampgCmdSca.EngMin = 0;
DampgCmdSca.EngMax = 1;
DampgCmdSca.TestTolerance = 0.001;
DampgCmdSca.WrittenIn = {'GmTqArbnPer1'};
DampgCmdSca.WriteType = 'Rte';


EscCmdArbd = DataDict.OpSignal;
EscCmdArbd.LongName = 'ESC Command Arbitrated';
EscCmdArbd.Description = 'ESC output torque';
EscCmdArbd.DocUnits = 'HwNwtMtr';
EscCmdArbd.SwcShoName = 'GmTqArbn';
EscCmdArbd.EngDT = dt.float32;
EscCmdArbd.EngInit = 0;
EscCmdArbd.EngMin = -3;
EscCmdArbd.EngMax = 3;
EscCmdArbd.TestTolerance = 0.01;
EscCmdArbd.WrittenIn = {'GmTqArbnPer1'};
EscCmdArbd.WriteType = 'Rte';


EscLimdActv = DataDict.OpSignal;
EscLimdActv.LongName = 'ESC Limited Active';
EscLimdActv.Description = 'to determine if ESC is Limited';
EscLimdActv.DocUnits = 'Cnt';
EscLimdActv.SwcShoName = 'GmTqArbn';
EscLimdActv.EngDT = dt.lgc;
EscLimdActv.EngInit = 0;
EscLimdActv.EngMin = 0;
EscLimdActv.EngMax = 1;
EscLimdActv.TestTolerance = 0;
EscLimdActv.WrittenIn = {'GmTqArbnPer1'};
EscLimdActv.WriteType = 'Rte';


HwTqOvrl = DataDict.OpSignal;
HwTqOvrl.LongName = 'Handwheel Torque Overlay';
HwTqOvrl.Description = 'Handwheel Torque Overlay Command';
HwTqOvrl.DocUnits = 'HwNwtMtr';
HwTqOvrl.SwcShoName = 'GmTqArbn';
HwTqOvrl.EngDT = dt.float32;
HwTqOvrl.EngInit = 0;
HwTqOvrl.EngMin = -3;
HwTqOvrl.EngMax = 3;
HwTqOvrl.TestTolerance = 0.01;
HwTqOvrl.WrittenIn = {'GmTqArbnPer1'};
HwTqOvrl.WriteType = 'Rte';


LkaTqCmdCdnd = DataDict.OpSignal;
LkaTqCmdCdnd.LongName = 'LKA Torque Command Conditioned';
LkaTqCmdCdnd.Description = 'Lane Keep Assist Torque Command';
LkaTqCmdCdnd.DocUnits = 'HwNwtMtr';
LkaTqCmdCdnd.SwcShoName = 'GmTqArbn';
LkaTqCmdCdnd.EngDT = dt.float32;
LkaTqCmdCdnd.EngInit = 0;
LkaTqCmdCdnd.EngMin = -3;
LkaTqCmdCdnd.EngMax = 3;
LkaTqCmdCdnd.TestTolerance = 0.01;
LkaTqCmdCdnd.WrittenIn = {'GmTqArbnPer1'};
LkaTqCmdCdnd.WriteType = 'Rte';


MotTqCmdOvrl = DataDict.OpSignal;
MotTqCmdOvrl.LongName = 'Motor Torque Command Overlay';
MotTqCmdOvrl.Description = [...
  'Motor Torque Command Overlay used for SF04'];
MotTqCmdOvrl.DocUnits = 'MotNwtMtr';
MotTqCmdOvrl.SwcShoName = 'GmTqArbn';
MotTqCmdOvrl.EngDT = dt.float32;
MotTqCmdOvrl.EngInit = 0;
MotTqCmdOvrl.EngMin = -8.8;
MotTqCmdOvrl.EngMax = 8.8;
MotTqCmdOvrl.TestTolerance = 0.01;
MotTqCmdOvrl.WrittenIn = {'GmTqArbnPer1'};
MotTqCmdOvrl.WriteType = 'Rte';


PullCmpCustLrngDi = DataDict.OpSignal;
PullCmpCustLrngDi.LongName = 'Pull Compensation Customer Learning Disable';
PullCmpCustLrngDi.Description = [...
  'Trigger used to disable Pull Compensation Learning in SF013A.'];
PullCmpCustLrngDi.DocUnits = 'Cnt';
PullCmpCustLrngDi.SwcShoName = 'GmTqArbn';
PullCmpCustLrngDi.EngDT = dt.lgc;
PullCmpCustLrngDi.EngInit = 0;
PullCmpCustLrngDi.EngMin = 0;
PullCmpCustLrngDi.EngMax = 1;
PullCmpCustLrngDi.TestTolerance = 0;
PullCmpCustLrngDi.WrittenIn = {'GmTqArbnPer1'};
PullCmpCustLrngDi.WriteType = 'Rte';


RtnCmdSca = DataDict.OpSignal;
RtnCmdSca.LongName = 'Return Command Scale';
RtnCmdSca.Description = [...
  'Return Command Scale used for return function'];
RtnCmdSca.DocUnits = 'Uls';
RtnCmdSca.SwcShoName = 'GmTqArbn';
RtnCmdSca.EngDT = dt.float32;
RtnCmdSca.EngInit = 0;
RtnCmdSca.EngMin = 0;
RtnCmdSca.EngMax = 1;
RtnCmdSca.TestTolerance = 0.01;
RtnCmdSca.WrittenIn = {'GmTqArbnPer1'};
RtnCmdSca.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GmTqArbnApaAssiScaEna = DataDict.Calibration;
GmTqArbnApaAssiScaEna.LongName = 'APA Assist Scale Enable';
GmTqArbnApaAssiScaEna.Description = [...
  'Logical value determining if APA being active should ramp out assist (' ...
  '1 == ramp out ; 0 == do not ramp out)'];
GmTqArbnApaAssiScaEna.DocUnits = 'Cnt';
GmTqArbnApaAssiScaEna.EngDT = dt.lgc;
GmTqArbnApaAssiScaEna.EngVal = 1;
GmTqArbnApaAssiScaEna.EngMin = 0;
GmTqArbnApaAssiScaEna.EngMax = 1;
GmTqArbnApaAssiScaEna.Cardinality = 'Inin';
GmTqArbnApaAssiScaEna.CustomerVisible = false;
GmTqArbnApaAssiScaEna.Online = false;
GmTqArbnApaAssiScaEna.Impact = 'L';
GmTqArbnApaAssiScaEna.TuningOwner = 'CSE';
GmTqArbnApaAssiScaEna.GraphLink = {''};
GmTqArbnApaAssiScaEna.Monotony = 'None';
GmTqArbnApaAssiScaEna.MaxGrad = 998;
GmTqArbnApaAssiScaEna.PortName = 'GmTqArbnApaAssiScaEna';


GmTqArbnApaDampgScaEna = DataDict.Calibration;
GmTqArbnApaDampgScaEna.LongName = 'APA Damping Scale Enable';
GmTqArbnApaDampgScaEna.Description = [...
  'Logical value determining if APA being active should ramp out damping ' ...
  '(1 == ramp out ; 0 == do not ramp out)'];
GmTqArbnApaDampgScaEna.DocUnits = 'Cnt';
GmTqArbnApaDampgScaEna.EngDT = dt.lgc;
GmTqArbnApaDampgScaEna.EngVal = 1;
GmTqArbnApaDampgScaEna.EngMin = 0;
GmTqArbnApaDampgScaEna.EngMax = 1;
GmTqArbnApaDampgScaEna.Cardinality = 'Inin';
GmTqArbnApaDampgScaEna.CustomerVisible = false;
GmTqArbnApaDampgScaEna.Online = false;
GmTqArbnApaDampgScaEna.Impact = 'L';
GmTqArbnApaDampgScaEna.TuningOwner = 'CSE';
GmTqArbnApaDampgScaEna.GraphLink = {''};
GmTqArbnApaDampgScaEna.Monotony = 'None';
GmTqArbnApaDampgScaEna.MaxGrad = 998;
GmTqArbnApaDampgScaEna.PortName = 'GmTqArbnApaDampgScaEna';


GmTqArbnApaDiRateX = DataDict.Calibration;
GmTqArbnApaDiRateX.LongName = 'APA Disable Rate X';
GmTqArbnApaDiRateX.Description = [...
  'Independent axis (input torque) of lookup table of APA command ramp-ou' ...
  't rate vs. input torque'];
GmTqArbnApaDiRateX.DocUnits = 'HwNwtMtr';
GmTqArbnApaDiRateX.EngDT = dt.u4p12;
GmTqArbnApaDiRateX.EngVal =  ...
   [0                1                2                3                4                7];
GmTqArbnApaDiRateX.EngMin = 0;
GmTqArbnApaDiRateX.EngMax = 10;
GmTqArbnApaDiRateX.Cardinality = 'Inin';
GmTqArbnApaDiRateX.CustomerVisible = false;
GmTqArbnApaDiRateX.Online = false;
GmTqArbnApaDiRateX.Impact = 'H';
GmTqArbnApaDiRateX.TuningOwner = 'CSE';
GmTqArbnApaDiRateX.GraphLink = {''};
GmTqArbnApaDiRateX.Monotony = 'Strictly_Increasing';
GmTqArbnApaDiRateX.MaxGrad = 998;
GmTqArbnApaDiRateX.PortName = 'GmTqArbnApaDiRateX';


GmTqArbnApaDiRateY = DataDict.Calibration;
GmTqArbnApaDiRateY.LongName = 'APA Disable Rate Y';
GmTqArbnApaDiRateY.Description = [...
  'Dependent axis (ramp-out rate) of lookup table of APA command ramp-out' ...
  ' rate vs. input torque'];
GmTqArbnApaDiRateY.DocUnits = 'UlsPerSec';
GmTqArbnApaDiRateY.EngDT = dt.u7p9;
GmTqArbnApaDiRateY.EngVal =  ...
   [0.3              0.4              0.5                1                2                5];
GmTqArbnApaDiRateY.EngMin = 0;
GmTqArbnApaDiRateY.EngMax = 127;
GmTqArbnApaDiRateY.Cardinality = 'Rt';
GmTqArbnApaDiRateY.CustomerVisible = true;
GmTqArbnApaDiRateY.Online = true;
GmTqArbnApaDiRateY.Impact = 'H';
GmTqArbnApaDiRateY.TuningOwner = 'CSE';
GmTqArbnApaDiRateY.GraphLink = {'GmTqArbnApaDiRateX'};
GmTqArbnApaDiRateY.Monotony = 'Increasing';
GmTqArbnApaDiRateY.MaxGrad = 998;
GmTqArbnApaDiRateY.PortName = 'GmTqArbnApaDiRateY';


GmTqArbnApaEnaRate = DataDict.Calibration;
GmTqArbnApaEnaRate.LongName = 'APA Enable Rate';
GmTqArbnApaEnaRate.Description = [...
  'Rate at which an APA command can have the [pre-smoothing] ramp-in calc' ...
  'ulated, in scale factor per second'];
GmTqArbnApaEnaRate.DocUnits = 'UlsPerSec';
GmTqArbnApaEnaRate.EngDT = dt.float32;
GmTqArbnApaEnaRate.EngVal = 0.5;
GmTqArbnApaEnaRate.EngMin = 0;
GmTqArbnApaEnaRate.EngMax = 500;
GmTqArbnApaEnaRate.Cardinality = 'Rt';
GmTqArbnApaEnaRate.CustomerVisible = true;
GmTqArbnApaEnaRate.Online = true;
GmTqArbnApaEnaRate.Impact = 'H';
GmTqArbnApaEnaRate.TuningOwner = 'CSE';
GmTqArbnApaEnaRate.GraphLink = {''};
GmTqArbnApaEnaRate.Monotony = 'None';
GmTqArbnApaEnaRate.MaxGrad = 998;
GmTqArbnApaEnaRate.PortName = 'GmTqArbnApaEnaRate';


GmTqArbnApaRtnScaEna = DataDict.Calibration;
GmTqArbnApaRtnScaEna.LongName = 'APA Return Scale Enable';
GmTqArbnApaRtnScaEna.Description = [...
  'Logical value determining if APA being active should ramp out return (' ...
  '1 == ramp out ; 0 == do not ramp out)'];
GmTqArbnApaRtnScaEna.DocUnits = 'Cnt';
GmTqArbnApaRtnScaEna.EngDT = dt.lgc;
GmTqArbnApaRtnScaEna.EngVal = 1;
GmTqArbnApaRtnScaEna.EngMin = 0;
GmTqArbnApaRtnScaEna.EngMax = 1;
GmTqArbnApaRtnScaEna.Cardinality = 'Inin';
GmTqArbnApaRtnScaEna.CustomerVisible = false;
GmTqArbnApaRtnScaEna.Online = false;
GmTqArbnApaRtnScaEna.Impact = 'L';
GmTqArbnApaRtnScaEna.TuningOwner = 'CSE';
GmTqArbnApaRtnScaEna.GraphLink = {''};
GmTqArbnApaRtnScaEna.Monotony = 'None';
GmTqArbnApaRtnScaEna.MaxGrad = 998;
GmTqArbnApaRtnScaEna.PortName = 'GmTqArbnApaRtnScaEna';


GmTqArbnApaSmotngHwTqLpFilFrq = DataDict.Calibration;
GmTqArbnApaSmotngHwTqLpFilFrq.LongName = 'APA Smoothing Handwheel Torque Lowpass Filter Frequency';
GmTqArbnApaSmotngHwTqLpFilFrq.Description = [...
  'HWTrq filter Cutoff Frequency for APA (PosServo) smoothing ramp down'];
GmTqArbnApaSmotngHwTqLpFilFrq.DocUnits = 'Hz';
GmTqArbnApaSmotngHwTqLpFilFrq.EngDT = dt.float32;
GmTqArbnApaSmotngHwTqLpFilFrq.EngVal = 3;
GmTqArbnApaSmotngHwTqLpFilFrq.EngMin = 0.1;
GmTqArbnApaSmotngHwTqLpFilFrq.EngMax = 100;
GmTqArbnApaSmotngHwTqLpFilFrq.Cardinality = 'Rt';
GmTqArbnApaSmotngHwTqLpFilFrq.CustomerVisible = true;
GmTqArbnApaSmotngHwTqLpFilFrq.Online = true;
GmTqArbnApaSmotngHwTqLpFilFrq.Impact = 'H';
GmTqArbnApaSmotngHwTqLpFilFrq.TuningOwner = 'CSE';
GmTqArbnApaSmotngHwTqLpFilFrq.GraphLink = {''};
GmTqArbnApaSmotngHwTqLpFilFrq.Monotony = 'None';
GmTqArbnApaSmotngHwTqLpFilFrq.MaxGrad = 998;
GmTqArbnApaSmotngHwTqLpFilFrq.PortName = 'GmTqArbnApaSmotngHwTqLpFilFrq';


GmTqArbnApaSmotngX = DataDict.Calibration;
GmTqArbnApaSmotngX.LongName = 'APA Smoothing X';
GmTqArbnApaSmotngX.Description = [...
  'Independent axis (desired ramp) of APA smoothing lookup table of smoot' ...
  'hed ramp vs. desired ramp'];
GmTqArbnApaSmotngX.DocUnits = 'Uls';
GmTqArbnApaSmotngX.EngDT = dt.u1p15;
GmTqArbnApaSmotngX.EngVal =  ...
   [0              0.1              0.2              0.3              0.4              0.6              0.7              0.8              0.9                1];
GmTqArbnApaSmotngX.EngMin = 0;
GmTqArbnApaSmotngX.EngMax = 1;
GmTqArbnApaSmotngX.Cardinality = 'Rt';
GmTqArbnApaSmotngX.CustomerVisible = true;
GmTqArbnApaSmotngX.Online = true;
GmTqArbnApaSmotngX.Impact = 'H';
GmTqArbnApaSmotngX.TuningOwner = 'CSE';
GmTqArbnApaSmotngX.GraphLink = {''};
GmTqArbnApaSmotngX.Monotony = 'Strictly_Increasing';
GmTqArbnApaSmotngX.MaxGrad = 998;
GmTqArbnApaSmotngX.PortName = 'GmTqArbnApaSmotngX';


GmTqArbnApaSmotngY = DataDict.Calibration;
GmTqArbnApaSmotngY.LongName = 'APA Smoothing Y';
GmTqArbnApaSmotngY.Description = [...
  'Dependent axis (smoothed ramp) of APA smoothing lookup table of smooth' ...
  'ed ramp vs. desired ramp'];
GmTqArbnApaSmotngY.DocUnits = 'Uls';
GmTqArbnApaSmotngY.EngDT = dt.u1p15;
GmTqArbnApaSmotngY.EngVal =  ...
   [0            0.024            0.095            0.206            0.345            0.655            0.794            0.905            0.976                1];
GmTqArbnApaSmotngY.EngMin = 0;
GmTqArbnApaSmotngY.EngMax = 1;
GmTqArbnApaSmotngY.Cardinality = 'Rt';
GmTqArbnApaSmotngY.CustomerVisible = true;
GmTqArbnApaSmotngY.Online = true;
GmTqArbnApaSmotngY.Impact = 'H';
GmTqArbnApaSmotngY.TuningOwner = 'CSE';
GmTqArbnApaSmotngY.GraphLink = {'GmTqArbnApaSmotngX'};
GmTqArbnApaSmotngY.Monotony = 'Increasing';
GmTqArbnApaSmotngY.MaxGrad = 998;
GmTqArbnApaSmotngY.PortName = 'GmTqArbnApaSmotngY';


GmTqArbnEscMaxTq = DataDict.Calibration;
GmTqArbnEscMaxTq.LongName = 'ESC Maximum Torque';
GmTqArbnEscMaxTq.Description = 'ESC Max Torque';
GmTqArbnEscMaxTq.DocUnits = 'HwNwtMtr';
GmTqArbnEscMaxTq.EngDT = dt.float32;
GmTqArbnEscMaxTq.EngVal = 3;
GmTqArbnEscMaxTq.EngMin = 0;
GmTqArbnEscMaxTq.EngMax = 5;
GmTqArbnEscMaxTq.Cardinality = 'Inin';
GmTqArbnEscMaxTq.CustomerVisible = false;
GmTqArbnEscMaxTq.Online = false;
GmTqArbnEscMaxTq.Impact = 'H';
GmTqArbnEscMaxTq.TuningOwner = 'CSE';
GmTqArbnEscMaxTq.GraphLink = {''};
GmTqArbnEscMaxTq.Monotony = 'None';
GmTqArbnEscMaxTq.MaxGrad = 998;
GmTqArbnEscMaxTq.PortName = 'GmTqArbnEscMaxTq';


GmTqArbnLkaOutpOvrlUpprLim = DataDict.Calibration;
GmTqArbnLkaOutpOvrlUpprLim.LongName = 'Lane Keep Assist Output Overlay Torque Upper Limit';
GmTqArbnLkaOutpOvrlUpprLim.Description = 'Maximum allow LKA MotNwtMtr';
GmTqArbnLkaOutpOvrlUpprLim.DocUnits = 'MotNwtMtr';
GmTqArbnLkaOutpOvrlUpprLim.EngDT = dt.float32;
GmTqArbnLkaOutpOvrlUpprLim.EngVal = 0.15;
GmTqArbnLkaOutpOvrlUpprLim.EngMin = 0;
GmTqArbnLkaOutpOvrlUpprLim.EngMax = 8.8;
GmTqArbnLkaOutpOvrlUpprLim.Cardinality = 'Inin';
GmTqArbnLkaOutpOvrlUpprLim.CustomerVisible = false;
GmTqArbnLkaOutpOvrlUpprLim.Online = false;
GmTqArbnLkaOutpOvrlUpprLim.Impact = 'H';
GmTqArbnLkaOutpOvrlUpprLim.TuningOwner = 'Safety';
GmTqArbnLkaOutpOvrlUpprLim.GraphLink = {''};
GmTqArbnLkaOutpOvrlUpprLim.Monotony = 'None';
GmTqArbnLkaOutpOvrlUpprLim.MaxGrad = 998;
GmTqArbnLkaOutpOvrlUpprLim.PortName = 'GmTqArbnLkaOutpOvrlUpprLim';


GmTqArbnLkaOutpOvrlX = DataDict.Calibration;
GmTqArbnLkaOutpOvrlX.LongName = 'LKA Output Overlay X';
GmTqArbnLkaOutpOvrlX.Description = [...
  'Independent axis (LKA torque request) of LKA output overlay lookup tab' ...
  'le of LKA Torque request vs. vehicle speed'];
GmTqArbnLkaOutpOvrlX.DocUnits = 'HwNwtMtr';
GmTqArbnLkaOutpOvrlX.EngDT = dt.u4p12;
GmTqArbnLkaOutpOvrlX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0.0066625        0.0066625        0.0066625        0.0066625        0.0066625        0.0066625        0.0066625        0.0066625        0.0066625        0.0066625        0.0066625        0.0066625
    0.013325         0.013325         0.013325         0.013325         0.013325         0.013325         0.013325         0.013325         0.013325         0.013325         0.013325         0.013325
    0.0199875        0.0199875        0.0199875        0.0199875        0.0199875        0.0199875        0.0199875        0.0199875        0.0199875        0.0199875        0.0199875        0.0199875
    0.02665          0.02665          0.02665          0.02665          0.02665          0.02665          0.02665          0.02665          0.02665          0.02665          0.02665          0.02665
    0.0333125        0.0333125        0.0333125        0.0333125        0.0333125        0.0333125        0.0333125        0.0333125        0.0333125        0.0333125        0.0333125        0.0333125
    0.039975         0.039975         0.039975         0.039975         0.039975         0.039975         0.039975         0.039975         0.039975         0.039975         0.039975         0.039975
    0.0466375        0.0466375        0.0466375        0.0466375        0.0466375        0.0466375        0.0466375        0.0466375        0.0466375        0.0466375        0.0466375        0.0466375
    0.0533           0.0533           0.0533           0.0533           0.0533           0.0533           0.0533           0.0533           0.0533           0.0533           0.0533           0.0533
    0.0599625        0.0599625        0.0599625        0.0599625        0.0599625        0.0599625        0.0599625        0.0599625        0.0599625        0.0599625        0.0599625        0.0599625
    0.066625         0.066625         0.066625         0.066625         0.066625         0.066625         0.066625         0.066625         0.066625         0.066625         0.066625         0.066625
    0.0732875        0.0732875        0.0732875        0.0732875        0.0732875        0.0732875        0.0732875        0.0732875        0.0732875        0.0732875        0.0732875        0.0732875
    0.07995          0.07995          0.07995          0.07995          0.07995          0.07995          0.07995          0.07995          0.07995          0.07995          0.07995          0.07995
    0.0866125        0.0866125        0.0866125        0.0866125        0.0866125        0.0866125        0.0866125        0.0866125        0.0866125        0.0866125        0.0866125        0.0866125
    0.093275         0.093275         0.093275         0.093275         0.093275         0.093275         0.093275         0.093275         0.093275         0.093275         0.093275         0.093275
    0.1066           0.1066           0.1066           0.1066           0.1066           0.1066           0.1066           0.1066           0.1066           0.1066           0.1066           0.1066
    1.352894462      1.352894462      1.352894462      1.352894462      1.352894462      1.352894462      1.352894462      1.352894462      1.352894462      1.352894462      1.352894462      1.352894462
    3.083004466      3.083004466      3.083004466      3.083004466      3.083004466      3.083004466      3.083004466      3.083004466      3.083004466      3.083004466      3.083004466      3.083004466
    4.014008931      4.014008931      4.014008931      4.014008931      4.014008931      4.014008931      4.014008931      4.014008931      4.014008931      4.014008931      4.014008931      4.014008931];
GmTqArbnLkaOutpOvrlX.EngMin = 0;
GmTqArbnLkaOutpOvrlX.EngMax = 10;
GmTqArbnLkaOutpOvrlX.Cardinality = 'Rt';
GmTqArbnLkaOutpOvrlX.CustomerVisible = true;
GmTqArbnLkaOutpOvrlX.Online = true;
GmTqArbnLkaOutpOvrlX.Impact = 'H';
GmTqArbnLkaOutpOvrlX.TuningOwner = 'CSE';
GmTqArbnLkaOutpOvrlX.GraphLink = {''};
GmTqArbnLkaOutpOvrlX.Monotony = 'Strictly_Increasing';
GmTqArbnLkaOutpOvrlX.MaxGrad = 998;
GmTqArbnLkaOutpOvrlX.PortName = 'GmTqArbnLkaOutpOvrlX';


GmTqArbnLkaOutpOvrlY = DataDict.Calibration;
GmTqArbnLkaOutpOvrlY.LongName = 'LKA Output Overlay Y';
GmTqArbnLkaOutpOvrlY.Description = [...
  'Dependent axis (LKA torque request) of LKA output overlay lookup table' ...
  ' of LKA Torque request vs. vehicle speed'];
GmTqArbnLkaOutpOvrlY.DocUnits = 'MotNwtMtr';
GmTqArbnLkaOutpOvrlY.EngDT = dt.u4p12;
GmTqArbnLkaOutpOvrlY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0];
GmTqArbnLkaOutpOvrlY.EngMin = 0;
GmTqArbnLkaOutpOvrlY.EngMax = 8.8;
GmTqArbnLkaOutpOvrlY.Cardinality = 'Rt';
GmTqArbnLkaOutpOvrlY.CustomerVisible = true;
GmTqArbnLkaOutpOvrlY.Online = true;
GmTqArbnLkaOutpOvrlY.Impact = 'H';
GmTqArbnLkaOutpOvrlY.TuningOwner = 'CSE';
GmTqArbnLkaOutpOvrlY.GraphLink = {''};
GmTqArbnLkaOutpOvrlY.Monotony = 'Strictly_Increasing';
GmTqArbnLkaOutpOvrlY.MaxGrad = 998;
GmTqArbnLkaOutpOvrlY.PortName = 'GmTqArbnLkaOutpOvrlY';


GmTqArbnLkaSlewEna = DataDict.Calibration;
GmTqArbnLkaSlewEna.LongName = 'LKA Slew Enable';
GmTqArbnLkaSlewEna.Description = [...
  'Logical value determining if LKA slew should be controlled by the cali' ...
  'brated lookup table or by the VDTOM equation (1 == calibrated lookup t' ...
  'able ; 0 == VDTOM)'];
GmTqArbnLkaSlewEna.DocUnits = 'Cnt';
GmTqArbnLkaSlewEna.EngDT = dt.lgc;
GmTqArbnLkaSlewEna.EngVal = 0;
GmTqArbnLkaSlewEna.EngMin = 0;
GmTqArbnLkaSlewEna.EngMax = 1;
GmTqArbnLkaSlewEna.Cardinality = 'Inin';
GmTqArbnLkaSlewEna.CustomerVisible = false;
GmTqArbnLkaSlewEna.Online = false;
GmTqArbnLkaSlewEna.Impact = 'L';
GmTqArbnLkaSlewEna.TuningOwner = 'CSE';
GmTqArbnLkaSlewEna.GraphLink = {''};
GmTqArbnLkaSlewEna.Monotony = 'None';
GmTqArbnLkaSlewEna.MaxGrad = 998;
GmTqArbnLkaSlewEna.PortName = 'GmTqArbnLkaSlewEna';


GmTqArbnLkaSlewX = DataDict.Calibration;
GmTqArbnLkaSlewX.LongName = 'LKA Slew X';
GmTqArbnLkaSlewX.Description = [...
  'Independent axis (vehicle speed) of LKA slew lookup table of slew rate' ...
  ' vs. vehicle speed'];
GmTqArbnLkaSlewX.DocUnits = 'Kph';
GmTqArbnLkaSlewX.EngDT = dt.u8p8;
GmTqArbnLkaSlewX.EngVal =  ...
   [10               40               70              100              130              180];
GmTqArbnLkaSlewX.EngMin = 0;
GmTqArbnLkaSlewX.EngMax = 220;
GmTqArbnLkaSlewX.Cardinality = 'Rt';
GmTqArbnLkaSlewX.CustomerVisible = true;
GmTqArbnLkaSlewX.Online = true;
GmTqArbnLkaSlewX.Impact = 'H';
GmTqArbnLkaSlewX.TuningOwner = 'CSE';
GmTqArbnLkaSlewX.GraphLink = {''};
GmTqArbnLkaSlewX.Monotony = 'Strictly_Increasing';
GmTqArbnLkaSlewX.MaxGrad = 998;
GmTqArbnLkaSlewX.PortName = 'GmTqArbnLkaSlewX';


GmTqArbnLkaSlewY = DataDict.Calibration;
GmTqArbnLkaSlewY.LongName = 'LKA Slew Y';
GmTqArbnLkaSlewY.Description = [...
  'Dependent axis (slew rate) of LKA slew lookup table of slew rate vs. v' ...
  'ehicle speed'];
GmTqArbnLkaSlewY.DocUnits = 'HwNwtMtrPerSec';
GmTqArbnLkaSlewY.EngDT = dt.u4p12;
GmTqArbnLkaSlewY.EngVal =  ...
   [3                3                3                3                3                3];
GmTqArbnLkaSlewY.EngMin = 0;
GmTqArbnLkaSlewY.EngMax = 13.5;
GmTqArbnLkaSlewY.Cardinality = 'Rt';
GmTqArbnLkaSlewY.CustomerVisible = true;
GmTqArbnLkaSlewY.Online = true;
GmTqArbnLkaSlewY.Impact = 'H';
GmTqArbnLkaSlewY.TuningOwner = 'CSE';
GmTqArbnLkaSlewY.GraphLink = {'GmTqArbnLkaSlewX'};
GmTqArbnLkaSlewY.Monotony = 'None';
GmTqArbnLkaSlewY.MaxGrad = 998;
GmTqArbnLkaSlewY.PortName = 'GmTqArbnLkaSlewY';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmVehSpdBilnrSeln = DataDict.ImprtdCal;
SysGlbPrmVehSpdBilnrSeln.DocUnits = 'Kph';
SysGlbPrmVehSpdBilnrSeln.EngDT = dt.u9p7;
SysGlbPrmVehSpdBilnrSeln.EngVal =  ...
   [0                5               15               30               60               80              100              120              150              180              200              220];
SysGlbPrmVehSpdBilnrSeln.EngMin = 0;
SysGlbPrmVehSpdBilnrSeln.EngMax = 511;
SysGlbPrmVehSpdBilnrSeln.PortName = 'SysGlbPrmVehSpdBilnrSeln';
SysGlbPrmVehSpdBilnrSeln.Description = [...
  '1-D vehicle speed table.  12 tuning points, common to multiple functio' ...
  'ns. This cal is imported from SF999A.'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dGmTqArbnDesLkaTqCmd = DataDict.Display;
dGmTqArbnDesLkaTqCmd.LongName = 'Desired LKA Torque Command';
dGmTqArbnDesLkaTqCmd.Description = [...
  'The desired LKA Torque Command, used to calculate the output LKA Torqu' ...
  'e Command'];
dGmTqArbnDesLkaTqCmd.DocUnits = 'HwNwtMtr';
dGmTqArbnDesLkaTqCmd.EngDT = dt.float32;
dGmTqArbnDesLkaTqCmd.EngMin = -3;
dGmTqArbnDesLkaTqCmd.EngMax = 3;
dGmTqArbnDesLkaTqCmd.InitRowCol = [1  1];


dGmTqArbnEscTqCmd = DataDict.Display;
dGmTqArbnEscTqCmd.LongName = 'Arbitration ESC Torque Command';
dGmTqArbnEscTqCmd.Description = [...
  'ESC Arbitration Torque Command, which is used for final arbitration'];
dGmTqArbnEscTqCmd.DocUnits = 'HwNwtMtr';
dGmTqArbnEscTqCmd.EngDT = dt.float32;
dGmTqArbnEscTqCmd.EngMin = -3;
dGmTqArbnEscTqCmd.EngMax = 3;
dGmTqArbnEscTqCmd.InitRowCol = [1  1];


dGmTqArbnLkaOutpTqReq = DataDict.Display;
dGmTqArbnLkaOutpTqReq.LongName = 'LKA Output Torque Request';
dGmTqArbnLkaOutpTqReq.Description = 'LKA Output Torque Request';
dGmTqArbnLkaOutpTqReq.DocUnits = 'MotNwtMtr';
dGmTqArbnLkaOutpTqReq.EngDT = dt.float32;
dGmTqArbnLkaOutpTqReq.EngMin = -8.8;
dGmTqArbnLkaOutpTqReq.EngMax = 8.8;
dGmTqArbnLkaOutpTqReq.InitRowCol = [1  1];


dGmTqArbnLkaTqCmd = DataDict.Display;
dGmTqArbnLkaTqCmd.LongName = 'LKA Torque Command';
dGmTqArbnLkaTqCmd.Description = [...
  'LKA Torque Command, which is used for final arbitration'];
dGmTqArbnLkaTqCmd.DocUnits = 'HwNwtMtr';
dGmTqArbnLkaTqCmd.EngDT = dt.float32;
dGmTqArbnLkaTqCmd.EngMin = -3;
dGmTqArbnLkaTqCmd.EngMax = 3;
dGmTqArbnLkaTqCmd.InitRowCol = [1  1];


dGmTqArbnPosnServoSmotngLowrLim = DataDict.Display;
dGmTqArbnPosnServoSmotngLowrLim.LongName = 'Position Servo Smoothing Lower Limit';
dGmTqArbnPosnServoSmotngLowrLim.Description = [...
  'Position Servo Smooth Lower Limit, used to set the slew limit for PosS' ...
  'rvoSmoothEnable'];
dGmTqArbnPosnServoSmotngLowrLim.DocUnits = 'UlsPerSec';
dGmTqArbnPosnServoSmotngLowrLim.EngDT = dt.float32;
dGmTqArbnPosnServoSmotngLowrLim.EngMin = -0.2;
dGmTqArbnPosnServoSmotngLowrLim.EngMax = 10;
dGmTqArbnPosnServoSmotngLowrLim.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
ActPosnServoCmd = DataDict.PIM;
ActPosnServoCmd.LongName = 'Actual Position Servo Command';
ActPosnServoCmd.Description = 'Actual Position Servo Command';
ActPosnServoCmd.DocUnits = 'MotNwtMtr';
ActPosnServoCmd.EngDT = dt.float32;
ActPosnServoCmd.EngMin = -8.8;
ActPosnServoCmd.EngMax = 8.8;
ActPosnServoCmd.InitRowCol = [1  1];


ApaSmotngHwTqLpFil = DataDict.PIM;
ApaSmotngHwTqLpFil.LongName = 'APA Smooth Handwheel Torque Low Pass Filter';
ApaSmotngHwTqLpFil.Description = [...
  'APA Smooth Handwheel Torque Low Pass Filter'];
ApaSmotngHwTqLpFil.DocUnits = 'Hz';
ApaSmotngHwTqLpFil.EngDT = struct.FilLpRec1;
ApaSmotngHwTqLpFil.EngMin = [struct('FilSt',-10,'FilGain',0.0013)];
ApaSmotngHwTqLpFil.EngMax = [struct('FilSt',10,'FilGain',0.7154)];
ApaSmotngHwTqLpFil.InitRowCol = [1  1];


DesLkaTqCmdRateLim = DataDict.PIM;
DesLkaTqCmdRateLim.LongName = 'Desired LKA Torque Command Rate Limiter';
DesLkaTqCmdRateLim.Description = [...
  'Desired LKA Torque Command Rate Limiter'];
DesLkaTqCmdRateLim.DocUnits = 'HwNwtMtrPerSec';
DesLkaTqCmdRateLim.EngDT = dt.float32;
DesLkaTqCmdRateLim.EngMin = -3;
DesLkaTqCmdRateLim.EngMax = 3;
DesLkaTqCmdRateLim.InitRowCol = [1  1];


PosnServoSmotngEnaRateLim = DataDict.PIM;
PosnServoSmotngEnaRateLim.LongName = 'Position Servo Smoothing Enable Rate Limiter';
PosnServoSmotngEnaRateLim.Description = [...
  'Position Servo Smooth Enable Rate Limiter'];
PosnServoSmotngEnaRateLim.DocUnits = 'UlsPerSec';
PosnServoSmotngEnaRateLim.EngDT = dt.float32;
PosnServoSmotngEnaRateLim.EngMin = 0;
PosnServoSmotngEnaRateLim.EngMax = 5;
PosnServoSmotngEnaRateLim.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ESCTQCMDOVRLLIM_HWNWTMTR_F32 = DataDict.Constant;
ESCTQCMDOVRLLIM_HWNWTMTR_F32.LongName = 'LKA State Temporarily Limited';
ESCTQCMDOVRLLIM_HWNWTMTR_F32.Description = [...
  'The upper limit of handwheel torque command overlay.'];
ESCTQCMDOVRLLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ESCTQCMDOVRLLIM_HWNWTMTR_F32.EngDT = dt.float32;
ESCTQCMDOVRLLIM_HWNWTMTR_F32.EngVal = 3;
ESCTQCMDOVRLLIM_HWNWTMTR_F32.Define = 'Local';


FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32 = DataDict.Constant;
FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32.LongName = 'Velocity Dependant Torque Overlay Metric Lower Slew Limit';
FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32.Description = [...
  'Used to compare with the calculated slew'];
FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32.DocUnits = 'HwNwtMtrPerSec';
FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32.EngDT = dt.float32;
FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32.EngVal = 3;
FINALSLEWLWRLIM_HWNWTMTRPERSEC_F32.Define = 'Local';


HWTQCMDOVRLLIM_HWNWTMTR_F32 = DataDict.Constant;
HWTQCMDOVRLLIM_HWNWTMTR_F32.LongName = 'LKA State Temporarily Limited';
HWTQCMDOVRLLIM_HWNWTMTR_F32.Description = [...
  'The upper limit of handwheel torque command overlay.'];
HWTQCMDOVRLLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
HWTQCMDOVRLLIM_HWNWTMTR_F32.EngDT = dt.float32;
HWTQCMDOVRLLIM_HWNWTMTR_F32.EngVal = 3;
HWTQCMDOVRLLIM_HWNWTMTR_F32.Define = 'Local';


LKACMDHILIM_HWNWTMTR_F32 = DataDict.Constant;
LKACMDHILIM_HWNWTMTR_F32.LongName = 'Lane Keep Assist Command Higher Limit';
LKACMDHILIM_HWNWTMTR_F32.Description = [...
  'Lane Keep Assist Command Higher Limit'];
LKACMDHILIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
LKACMDHILIM_HWNWTMTR_F32.EngDT = dt.float32;
LKACMDHILIM_HWNWTMTR_F32.EngVal = 3;
LKACMDHILIM_HWNWTMTR_F32.Define = 'Local';


LKAOUTPOVRLLIM_MOTNWTMTR_F32 = DataDict.Constant;
LKAOUTPOVRLLIM_MOTNWTMTR_F32.LongName = 'Lane Keep Assist Output Overlay Torque Lower Limit';
LKAOUTPOVRLLIM_MOTNWTMTR_F32.Description = [...
  'Lower Limit of LKA Output Overlay Command.'];
LKAOUTPOVRLLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
LKAOUTPOVRLLIM_MOTNWTMTR_F32.EngDT = dt.float32;
LKAOUTPOVRLLIM_MOTNWTMTR_F32.EngVal = 0;
LKAOUTPOVRLLIM_MOTNWTMTR_F32.Define = 'Local';


LKATQCMDOVRLLIM_HWNWTMTR_F32 = DataDict.Constant;
LKATQCMDOVRLLIM_HWNWTMTR_F32.LongName = 'LKA State Temporarily Limited';
LKATQCMDOVRLLIM_HWNWTMTR_F32.Description = [...
  'The upper limit of handwheel torque command overlay.'];
LKATQCMDOVRLLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
LKATQCMDOVRLLIM_HWNWTMTR_F32.EngDT = dt.float32;
LKATQCMDOVRLLIM_HWNWTMTR_F32.EngVal = 3;
LKATQCMDOVRLLIM_HWNWTMTR_F32.Define = 'Local';


MOTTQCMDOVRLLIM_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQCMDOVRLLIM_MOTNWTMTR_F32.LongName = 'LKA State Temporarily Limited';
MOTTQCMDOVRLLIM_MOTNWTMTR_F32.Description = [...
  'The upper limit of motor torque command overlay.'];
MOTTQCMDOVRLLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQCMDOVRLLIM_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQCMDOVRLLIM_MOTNWTMTR_F32.EngVal = 8.8;
MOTTQCMDOVRLLIM_MOTNWTMTR_F32.Define = 'Local';


OUTPCMDHILIM_ULS_F32 = DataDict.Constant;
OUTPCMDHILIM_ULS_F32.LongName = 'Output Command High Limit';
OUTPCMDHILIM_ULS_F32.Description = [...
  'The upper limit of the output command scale.'];
OUTPCMDHILIM_ULS_F32.DocUnits = 'Uls';
OUTPCMDHILIM_ULS_F32.EngDT = dt.float32;
OUTPCMDHILIM_ULS_F32.EngVal = 1;
OUTPCMDHILIM_ULS_F32.Define = 'Local';


OUTPCMDLOWRLIM_ULS_F32 = DataDict.Constant;
OUTPCMDLOWRLIM_ULS_F32.LongName = 'Output Command Lower Limit';
OUTPCMDLOWRLIM_ULS_F32.Description = [...
  'The lower limit of the output command scale.'];
OUTPCMDLOWRLIM_ULS_F32.DocUnits = 'Uls';
OUTPCMDLOWRLIM_ULS_F32.EngDT = dt.float32;
OUTPCMDLOWRLIM_ULS_F32.EngVal = 0;
OUTPCMDLOWRLIM_ULS_F32.Define = 'Local';


POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32 = DataDict.Constant;
POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32.LongName = 'Position Servo Smooth Minimum Lower Limit';
POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32.Description = [...
  'Used to compare with the actual Position Servo Smooth Lower Limit'];
POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32.EngDT = dt.float32;
POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32.EngVal = -0.2;
POSNSERVOSMOOTHMINLWRLIM_ULSPERSEC_F32.Define = 'Local';


VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32 = DataDict.Constant;
VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32.LongName = 'Velocity Dependant Torque Overlay Metric Offset';
VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32.Description = [...
  'Used to compare with the calculated slew'];
VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32.DocUnits = 'HwNwtMtrPerSec';
VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32.EngDT = dt.float32;
VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32.EngVal = 13.5;
VELDPTTQOVRLMTRCOFFS_HWNWTMTRPERSEC_F32.Define = 'Local';


VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32 = DataDict.Constant;
VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32.LongName = 'Velocity Dependant Torque Overlay Metric Torque Over Velocity Dependant Torque Overlay Metric Vehicle Speed';
VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32.Description = [...
  'Used to calculate slew using an equation'];
VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32.DocUnits = 'HwNwtMtrPerSecPerKph';
VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32.EngDT = dt.float32;
VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32.EngVal = -0.058333;
VELDPTTQOVRLMTRCTQPERVEHSPD_HWNWTMTRPERSECPERKPH_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
