%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 09-Sep-2016 11:41:07       %
%                                  Created with tool release: 2.45.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

SF020A = DataDict.FDD;
SF020A.Version = '1.6.X';
SF020A.LongName = 'Handwheel Angle Tracking Servo';
SF020A.ShoName  = 'HwAgTrakgServo';
SF020A.DesignASIL = 'B';
SF020A.Description = [...
  'This function provides the ability for the EPS system to track a posit' ...
  'ion input command.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgTrakgServoInit1 = DataDict.Runnable;
HwAgTrakgServoInit1.Context = 'Rte';
HwAgTrakgServoInit1.TimeStep = 0;
HwAgTrakgServoInit1.Description = [...
  'Handwheel Tracking Initialization Runnable'];

HwAgTrakgServoPer1 = DataDict.Runnable;
HwAgTrakgServoPer1.Context = 'Rte';
HwAgTrakgServoPer1.TimeStep = 0.002;
HwAgTrakgServoPer1.Description = [...
  'Handwheel Tracking Periodic Runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'HwAgTrakgServoPer1'};
HwAg.ReadType = 'Rte';


HwAgTrakgServoCmd = DataDict.IpSignal;
HwAgTrakgServoCmd.LongName = 'Handwheel Angle Tracking Servo Command';
HwAgTrakgServoCmd.Description = [...
  'Handwheel Angle Tracking Servo Command'];
HwAgTrakgServoCmd.DocUnits = 'HwDeg';
HwAgTrakgServoCmd.EngDT = dt.float32;
HwAgTrakgServoCmd.EngInit = 0;
HwAgTrakgServoCmd.EngMin = -1440;
HwAgTrakgServoCmd.EngMax = 1440;
HwAgTrakgServoCmd.ReadIn = {'HwAgTrakgServoPer1'};
HwAgTrakgServoCmd.ReadType = 'Rte';


HwAgTrakgServoEna = DataDict.IpSignal;
HwAgTrakgServoEna.LongName = 'Handwheel Angle Tracking Servo Enable';
HwAgTrakgServoEna.Description = [...
  'Handwheel Angle Tracking Servo Enable'];
HwAgTrakgServoEna.DocUnits = 'Uls';
HwAgTrakgServoEna.EngDT = dt.lgc;
HwAgTrakgServoEna.EngInit = 0;
HwAgTrakgServoEna.EngMin = 0;
HwAgTrakgServoEna.EngMax = 1;
HwAgTrakgServoEna.ReadIn = {'HwAgTrakgServoPer1'};
HwAgTrakgServoEna.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'HwAgTrakgServoPer1'};
HwTq.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity CRF';
MotVelCrf.Description = 'Motor Velocity CRF';
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'HwAgTrakgServoPer1'};
MotVelCrf.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'HwAgTrakgServoPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotTqServoCmd = DataDict.OpSignal;
MotTqServoCmd.LongName = 'Motor Torque Servo Command';
MotTqServoCmd.Description = 'Motor Torque Servo Output';
MotTqServoCmd.DocUnits = 'MotNwtMtr';
MotTqServoCmd.SwcShoName = 'HwAgTrakgServo';
MotTqServoCmd.EngDT = dt.float32;
MotTqServoCmd.EngInit = 0;
MotTqServoCmd.EngMin = -8.8;
MotTqServoCmd.EngMax = 8.8;
MotTqServoCmd.TestTolerance = 2e-07;
MotTqServoCmd.WrittenIn = {'HwAgTrakgServoPer1'};
MotTqServoCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAgTrakgServoDampgTqX = DataDict.Calibration;
HwAgTrakgServoDampgTqX.LongName = 'Damping Torque X';
HwAgTrakgServoDampgTqX.Description = [...
  'X Table of Motor Velocity Values for determining Damping Torque '];
HwAgTrakgServoDampgTqX.DocUnits = 'MotRadPerSec';
HwAgTrakgServoDampgTqX.EngDT = dt.u11p5;
HwAgTrakgServoDampgTqX.EngVal =  ...
   [0               50              100         167.5625         175.9375            188.5         201.0625         217.8125          230.375         259.6875          335.125              377          418.875];
HwAgTrakgServoDampgTqX.EngMin = 0;
HwAgTrakgServoDampgTqX.EngMax = 1350;
HwAgTrakgServoDampgTqX.Cardinality = 'Inin';
HwAgTrakgServoDampgTqX.CustomerVisible = false;
HwAgTrakgServoDampgTqX.Online = false;
HwAgTrakgServoDampgTqX.Impact = 'L';
HwAgTrakgServoDampgTqX.TuningOwner = 'CSE';
HwAgTrakgServoDampgTqX.GraphLink = {''};
HwAgTrakgServoDampgTqX.Monotony = 'Strictly_Increasing';
HwAgTrakgServoDampgTqX.MaxGrad = 998;
HwAgTrakgServoDampgTqX.PortName = 'HwAgTrakgServoDampgTqX';


HwAgTrakgServoDampgTqY = DataDict.Calibration;
HwAgTrakgServoDampgTqY.LongName = 'Damping Torque';
HwAgTrakgServoDampgTqY.Description = [...
  'Y axis of the look up table for Damping Torque'];
HwAgTrakgServoDampgTqY.DocUnits = 'MotNwtMtr';
HwAgTrakgServoDampgTqY.EngDT = dt.u4p12;
HwAgTrakgServoDampgTqY.EngVal =  ...
   [0                0                0
    0.35             0.35             0.35
    0.7              0.7              0.7
    1.1729           1.1729           1.1729
    1.2443           1.2443           1.2443
    1.3654           1.3654           1.3654
    1.5075           1.5075           1.5075
    1.6995           1.6995           1.6995
    1.8543           1.8543           1.8543
    2.1928           2.1928           2.1928
    2.9626           2.9626           2.9626
    3.3392           3.3392           3.3392
    3.6821           3.6821           3.6821];
HwAgTrakgServoDampgTqY.EngMin = 0;
HwAgTrakgServoDampgTqY.EngMax = 8.88;
HwAgTrakgServoDampgTqY.Cardinality = 'Inin';
HwAgTrakgServoDampgTqY.CustomerVisible = false;
HwAgTrakgServoDampgTqY.Online = false;
HwAgTrakgServoDampgTqY.Impact = 'L';
HwAgTrakgServoDampgTqY.TuningOwner = 'CSE';
HwAgTrakgServoDampgTqY.GraphLink = {'HwAgTrakgServoDampgTqX','HwAgTrakgServoVehSpdBasd'};
HwAgTrakgServoDampgTqY.Monotony = 'None';
HwAgTrakgServoDampgTqY.MaxGrad = 998;
HwAgTrakgServoDampgTqY.PortName = 'HwAgTrakgServoDampgTqY';


HwAgTrakgServoDftlGainY = DataDict.Calibration;
HwAgTrakgServoDftlGainY.LongName = 'Differential Gain Y';
HwAgTrakgServoDftlGainY.Description = 'Differential Gain of PID control';
HwAgTrakgServoDftlGainY.DocUnits = 'MotNwtMtrPerHwDegPerSec';
HwAgTrakgServoDftlGainY.EngDT = dt.u0p16;
HwAgTrakgServoDftlGainY.EngVal =  ...
   [0.006            0.006            0.006];
HwAgTrakgServoDftlGainY.EngMin = 0;
HwAgTrakgServoDftlGainY.EngMax = 0.128;
HwAgTrakgServoDftlGainY.Cardinality = 'Inin';
HwAgTrakgServoDftlGainY.CustomerVisible = false;
HwAgTrakgServoDftlGainY.Online = false;
HwAgTrakgServoDftlGainY.Impact = 'L';
HwAgTrakgServoDftlGainY.TuningOwner = 'CSE';
HwAgTrakgServoDftlGainY.GraphLink = {'HwAgTrakgServoVehSpdBasd'};
HwAgTrakgServoDftlGainY.Monotony = 'None';
HwAgTrakgServoDftlGainY.MaxGrad = 998;
HwAgTrakgServoDftlGainY.PortName = 'HwAgTrakgServoDftlGainY';


HwAgTrakgServoDftlTermLpFilFrq = DataDict.Calibration;
HwAgTrakgServoDftlTermLpFilFrq.LongName = 'Differential Term LowPass Filter Frequency';
HwAgTrakgServoDftlTermLpFilFrq.Description = [...
  'Low pass filter freqeuncy for the Differential term in PID'];
HwAgTrakgServoDftlTermLpFilFrq.DocUnits = 'Hz';
HwAgTrakgServoDftlTermLpFilFrq.EngDT = dt.float32;
HwAgTrakgServoDftlTermLpFilFrq.EngVal = 10;
HwAgTrakgServoDftlTermLpFilFrq.EngMin = 1;
HwAgTrakgServoDftlTermLpFilFrq.EngMax = 100;
HwAgTrakgServoDftlTermLpFilFrq.Cardinality = 'Inin';
HwAgTrakgServoDftlTermLpFilFrq.CustomerVisible = false;
HwAgTrakgServoDftlTermLpFilFrq.Online = false;
HwAgTrakgServoDftlTermLpFilFrq.Impact = 'L';
HwAgTrakgServoDftlTermLpFilFrq.TuningOwner = 'CSE';
HwAgTrakgServoDftlTermLpFilFrq.GraphLink = {''};
HwAgTrakgServoDftlTermLpFilFrq.Monotony = 'None';
HwAgTrakgServoDftlTermLpFilFrq.MaxGrad = 998;
HwAgTrakgServoDftlTermLpFilFrq.PortName = 'HwAgTrakgServoDftlTermLpFilFrq';


HwAgTrakgServoDiRateX = DataDict.Calibration;
HwAgTrakgServoDiRateX.LongName = 'Disable Rate X';
HwAgTrakgServoDiRateX.Description = [...
  'X axis of Disable Rate Lookup of the Position Servo Algorithm'];
HwAgTrakgServoDiRateX.DocUnits = 'HwNwtMtr';
HwAgTrakgServoDiRateX.EngDT = dt.u4p12;
HwAgTrakgServoDiRateX.EngVal =  ...
   [0                1                2                3                4                7];
HwAgTrakgServoDiRateX.EngMin = 0;
HwAgTrakgServoDiRateX.EngMax = 10;
HwAgTrakgServoDiRateX.Cardinality = 'Inin';
HwAgTrakgServoDiRateX.CustomerVisible = false;
HwAgTrakgServoDiRateX.Online = false;
HwAgTrakgServoDiRateX.Impact = 'L';
HwAgTrakgServoDiRateX.TuningOwner = 'CSE';
HwAgTrakgServoDiRateX.GraphLink = {''};
HwAgTrakgServoDiRateX.Monotony = 'Strictly_Increasing';
HwAgTrakgServoDiRateX.MaxGrad = 998;
HwAgTrakgServoDiRateX.PortName = 'HwAgTrakgServoDiRateX';


HwAgTrakgServoDiRateY = DataDict.Calibration;
HwAgTrakgServoDiRateY.LongName = 'Disable Rate Y';
HwAgTrakgServoDiRateY.Description = [...
  'Y axis of Disable Rate Lookup of the Position Servo Algorithm'];
HwAgTrakgServoDiRateY.DocUnits = 'UlsPerSec';
HwAgTrakgServoDiRateY.EngDT = dt.u7p9;
HwAgTrakgServoDiRateY.EngVal =  ...
   [0.3              0.4              0.5                1                2                5];
HwAgTrakgServoDiRateY.EngMin = 0;
HwAgTrakgServoDiRateY.EngMax = 100;
HwAgTrakgServoDiRateY.Cardinality = 'Inin';
HwAgTrakgServoDiRateY.CustomerVisible = false;
HwAgTrakgServoDiRateY.Online = false;
HwAgTrakgServoDiRateY.Impact = 'L';
HwAgTrakgServoDiRateY.TuningOwner = 'CSE';
HwAgTrakgServoDiRateY.GraphLink = {'HwAgTrakgServoDiRateX'};
HwAgTrakgServoDiRateY.Monotony = 'None';
HwAgTrakgServoDiRateY.MaxGrad = 998;
HwAgTrakgServoDiRateY.PortName = 'HwAgTrakgServoDiRateY';


HwAgTrakgServoEnaRate = DataDict.Calibration;
HwAgTrakgServoEnaRate.LongName = 'Enable Rate';
HwAgTrakgServoEnaRate.Description = 'Enable Rate for the Position Servo';
HwAgTrakgServoEnaRate.DocUnits = 'UlsPerSec';
HwAgTrakgServoEnaRate.EngDT = dt.float32;
HwAgTrakgServoEnaRate.EngVal = 0;
HwAgTrakgServoEnaRate.EngMin = 0;
HwAgTrakgServoEnaRate.EngMax = 100;
HwAgTrakgServoEnaRate.Cardinality = 'Inin';
HwAgTrakgServoEnaRate.CustomerVisible = false;
HwAgTrakgServoEnaRate.Online = false;
HwAgTrakgServoEnaRate.Impact = 'L';
HwAgTrakgServoEnaRate.TuningOwner = 'CSE';
HwAgTrakgServoEnaRate.GraphLink = {''};
HwAgTrakgServoEnaRate.Monotony = 'None';
HwAgTrakgServoEnaRate.MaxGrad = 998;
HwAgTrakgServoEnaRate.PortName = 'HwAgTrakgServoEnaRate';


HwAgTrakgServoExecRate = DataDict.Calibration;
HwAgTrakgServoExecRate.LongName = 'Execute Rate';
HwAgTrakgServoExecRate.Description = [...
  ' Rate at which the Handwheel angle servo function is executed '];
HwAgTrakgServoExecRate.DocUnits = 'UlsPerSec';
HwAgTrakgServoExecRate.EngDT = dt.float32;
HwAgTrakgServoExecRate.EngVal = 500;
HwAgTrakgServoExecRate.EngMin = 0;
HwAgTrakgServoExecRate.EngMax = 500;
HwAgTrakgServoExecRate.Cardinality = 'Inin';
HwAgTrakgServoExecRate.CustomerVisible = false;
HwAgTrakgServoExecRate.Online = false;
HwAgTrakgServoExecRate.Impact = 'L';
HwAgTrakgServoExecRate.TuningOwner = 'CSE';
HwAgTrakgServoExecRate.GraphLink = {''};
HwAgTrakgServoExecRate.Monotony = 'None';
HwAgTrakgServoExecRate.MaxGrad = 998;
HwAgTrakgServoExecRate.PortName = 'HwAgTrakgServoExecRate';


HwAgTrakgServoHwAgLpFilFrq = DataDict.Calibration;
HwAgTrakgServoHwAgLpFilFrq.LongName = 'Handwheel Angle LowPass Filter Frequency';
HwAgTrakgServoHwAgLpFilFrq.Description = [...
  'Cut off frequency for Lowpass filter on Handwheel Angle'];
HwAgTrakgServoHwAgLpFilFrq.DocUnits = 'Hz';
HwAgTrakgServoHwAgLpFilFrq.EngDT = dt.float32;
HwAgTrakgServoHwAgLpFilFrq.EngVal = 2;
HwAgTrakgServoHwAgLpFilFrq.EngMin = 0.1;
HwAgTrakgServoHwAgLpFilFrq.EngMax = 20;
HwAgTrakgServoHwAgLpFilFrq.Cardinality = 'Inin';
HwAgTrakgServoHwAgLpFilFrq.CustomerVisible = false;
HwAgTrakgServoHwAgLpFilFrq.Online = false;
HwAgTrakgServoHwAgLpFilFrq.Impact = 'L';
HwAgTrakgServoHwAgLpFilFrq.TuningOwner = 'CSE';
HwAgTrakgServoHwAgLpFilFrq.GraphLink = {''};
HwAgTrakgServoHwAgLpFilFrq.Monotony = 'None';
HwAgTrakgServoHwAgLpFilFrq.MaxGrad = 998;
HwAgTrakgServoHwAgLpFilFrq.PortName = 'HwAgTrakgServoHwAgLpFilFrq';


HwAgTrakgServoHwAgRateLim = DataDict.Calibration;
HwAgTrakgServoHwAgRateLim.LongName = 'Handwheel Angle Rate Limit';
HwAgTrakgServoHwAgRateLim.Description = [...
  'Handwheel Angle Rate Limiter based on Vehicle Speed'];
HwAgTrakgServoHwAgRateLim.DocUnits = 'HwDegPerSec';
HwAgTrakgServoHwAgRateLim.EngDT = dt.u10p6;
HwAgTrakgServoHwAgRateLim.EngVal =  ...
   [600              600              600];
HwAgTrakgServoHwAgRateLim.EngMin = 0;
HwAgTrakgServoHwAgRateLim.EngMax = 1000;
HwAgTrakgServoHwAgRateLim.Cardinality = 'Inin';
HwAgTrakgServoHwAgRateLim.CustomerVisible = false;
HwAgTrakgServoHwAgRateLim.Online = false;
HwAgTrakgServoHwAgRateLim.Impact = 'L';
HwAgTrakgServoHwAgRateLim.TuningOwner = 'CSE';
HwAgTrakgServoHwAgRateLim.GraphLink = {''};
HwAgTrakgServoHwAgRateLim.Monotony = 'None';
HwAgTrakgServoHwAgRateLim.MaxGrad = 998;
HwAgTrakgServoHwAgRateLim.PortName = 'HwAgTrakgServoHwAgRateLim';


HwAgTrakgServoHwTqLpFilFrq = DataDict.Calibration;
HwAgTrakgServoHwTqLpFilFrq.LongName = 'Handwheel Torque LowPass Filter Frequency';
HwAgTrakgServoHwTqLpFilFrq.Description = [...
  'Low pass filter corner frequency for enable'];
HwAgTrakgServoHwTqLpFilFrq.DocUnits = 'Hz';
HwAgTrakgServoHwTqLpFilFrq.EngDT = dt.float32;
HwAgTrakgServoHwTqLpFilFrq.EngVal = 2;
HwAgTrakgServoHwTqLpFilFrq.EngMin = 0.1;
HwAgTrakgServoHwTqLpFilFrq.EngMax = 20;
HwAgTrakgServoHwTqLpFilFrq.Cardinality = 'Inin';
HwAgTrakgServoHwTqLpFilFrq.CustomerVisible = false;
HwAgTrakgServoHwTqLpFilFrq.Online = false;
HwAgTrakgServoHwTqLpFilFrq.Impact = 'L';
HwAgTrakgServoHwTqLpFilFrq.TuningOwner = 'CSE';
HwAgTrakgServoHwTqLpFilFrq.GraphLink = {''};
HwAgTrakgServoHwTqLpFilFrq.Monotony = 'None';
HwAgTrakgServoHwTqLpFilFrq.MaxGrad = 998;
HwAgTrakgServoHwTqLpFilFrq.PortName = 'HwAgTrakgServoHwTqLpFilFrq';


HwAgTrakgServoIntglGainY = DataDict.Calibration;
HwAgTrakgServoIntglGainY.LongName = 'Integral Gain Y';
HwAgTrakgServoIntglGainY.Description = 'Integral Gain of the PID Control';
HwAgTrakgServoIntglGainY.DocUnits = 'MotNwtMtrPerHwDegSec';
HwAgTrakgServoIntglGainY.EngDT = dt.u2p14;
HwAgTrakgServoIntglGainY.EngVal =  ...
   [0.3              0.3              0.3];
HwAgTrakgServoIntglGainY.EngMin = 0;
HwAgTrakgServoIntglGainY.EngMax = 2;
HwAgTrakgServoIntglGainY.Cardinality = 'Inin';
HwAgTrakgServoIntglGainY.CustomerVisible = false;
HwAgTrakgServoIntglGainY.Online = false;
HwAgTrakgServoIntglGainY.Impact = 'L';
HwAgTrakgServoIntglGainY.TuningOwner = 'CSE';
HwAgTrakgServoIntglGainY.GraphLink = {'HwAgTrakgServoVehSpdBasd'};
HwAgTrakgServoIntglGainY.Monotony = 'None';
HwAgTrakgServoIntglGainY.MaxGrad = 998;
HwAgTrakgServoIntglGainY.PortName = 'HwAgTrakgServoIntglGainY';


HwAgTrakgServoIntglTermAntiWdupLimY = DataDict.Calibration;
HwAgTrakgServoIntglTermAntiWdupLimY.LongName = 'Integral Term Anti Windup Limit Y';
HwAgTrakgServoIntglTermAntiWdupLimY.Description = [...
  'Anti windup limit of the Integral term of the PID Control'];
HwAgTrakgServoIntglTermAntiWdupLimY.DocUnits = 'MotNwtMtr';
HwAgTrakgServoIntglTermAntiWdupLimY.EngDT = dt.u10p6;
HwAgTrakgServoIntglTermAntiWdupLimY.EngVal =  ...
   [2              1.5                1];
HwAgTrakgServoIntglTermAntiWdupLimY.EngMin = 0;
HwAgTrakgServoIntglTermAntiWdupLimY.EngMax = 512;
HwAgTrakgServoIntglTermAntiWdupLimY.Cardinality = 'Inin';
HwAgTrakgServoIntglTermAntiWdupLimY.CustomerVisible = false;
HwAgTrakgServoIntglTermAntiWdupLimY.Online = false;
HwAgTrakgServoIntglTermAntiWdupLimY.Impact = 'L';
HwAgTrakgServoIntglTermAntiWdupLimY.TuningOwner = 'CSE';
HwAgTrakgServoIntglTermAntiWdupLimY.GraphLink = {'HwAgTrakgServoVehSpdBasd'};
HwAgTrakgServoIntglTermAntiWdupLimY.Monotony = 'None';
HwAgTrakgServoIntglTermAntiWdupLimY.MaxGrad = 998;
HwAgTrakgServoIntglTermAntiWdupLimY.PortName = 'HwAgTrakgServoIntglTermAntiWdupLimY';


HwAgTrakgServoMaxCmdX = DataDict.Calibration;
HwAgTrakgServoMaxCmdX.LongName = 'Maximum Command X';
HwAgTrakgServoMaxCmdX.Description = [...
  'X Table for Saturation of Final Position Servo Command based on Vehicl' ...
  'e Speed'];
HwAgTrakgServoMaxCmdX.DocUnits = 'Kph';
HwAgTrakgServoMaxCmdX.EngDT = dt.u8p8;
HwAgTrakgServoMaxCmdX.EngVal =  ...
   [0                5               12             12.1];
HwAgTrakgServoMaxCmdX.EngMin = 0;
HwAgTrakgServoMaxCmdX.EngMax = 255;
HwAgTrakgServoMaxCmdX.Cardinality = 'Inin';
HwAgTrakgServoMaxCmdX.CustomerVisible = false;
HwAgTrakgServoMaxCmdX.Online = false;
HwAgTrakgServoMaxCmdX.Impact = 'L';
HwAgTrakgServoMaxCmdX.TuningOwner = 'CSE';
HwAgTrakgServoMaxCmdX.GraphLink = {''};
HwAgTrakgServoMaxCmdX.Monotony = 'None';
HwAgTrakgServoMaxCmdX.MaxGrad = 998;
HwAgTrakgServoMaxCmdX.PortName = 'HwAgTrakgServoMaxCmdX';


HwAgTrakgServoMaxCmdY = DataDict.Calibration;
HwAgTrakgServoMaxCmdY.LongName = 'Maximum Command Y';
HwAgTrakgServoMaxCmdY.Description = [...
  'Y table for Saturation of Final Position Servo Command based on Vehicl' ...
  'e Speed'];
HwAgTrakgServoMaxCmdY.DocUnits = 'MotNwtMtr';
HwAgTrakgServoMaxCmdY.EngDT = dt.u4p12;
HwAgTrakgServoMaxCmdY.EngVal =  ...
   [8.8              8.8              8.8              8.8];
HwAgTrakgServoMaxCmdY.EngMin = 0;
HwAgTrakgServoMaxCmdY.EngMax = 8.8;
HwAgTrakgServoMaxCmdY.Cardinality = 'Inin';
HwAgTrakgServoMaxCmdY.CustomerVisible = false;
HwAgTrakgServoMaxCmdY.Online = false;
HwAgTrakgServoMaxCmdY.Impact = 'L';
HwAgTrakgServoMaxCmdY.TuningOwner = 'CSE';
HwAgTrakgServoMaxCmdY.GraphLink = {'HwAgTrakgServoMaxCmdX'};
HwAgTrakgServoMaxCmdY.Monotony = 'None';
HwAgTrakgServoMaxCmdY.MaxGrad = 998;
HwAgTrakgServoMaxCmdY.PortName = 'HwAgTrakgServoMaxCmdY';


HwAgTrakgServoMaxRamp = DataDict.Calibration;
HwAgTrakgServoMaxRamp.LongName = 'Maximum Ramp';
HwAgTrakgServoMaxRamp.Description = 'Maximum Ramp';
HwAgTrakgServoMaxRamp.DocUnits = 'Uls';
HwAgTrakgServoMaxRamp.EngDT = dt.float32;
HwAgTrakgServoMaxRamp.EngVal = 1;
HwAgTrakgServoMaxRamp.EngMin = 0;
HwAgTrakgServoMaxRamp.EngMax = 1;
HwAgTrakgServoMaxRamp.Cardinality = 'Inin';
HwAgTrakgServoMaxRamp.CustomerVisible = false;
HwAgTrakgServoMaxRamp.Online = false;
HwAgTrakgServoMaxRamp.Impact = 'L';
HwAgTrakgServoMaxRamp.TuningOwner = 'CSE';
HwAgTrakgServoMaxRamp.GraphLink = {''};
HwAgTrakgServoMaxRamp.Monotony = 'None';
HwAgTrakgServoMaxRamp.MaxGrad = 998;
HwAgTrakgServoMaxRamp.PortName = 'HwAgTrakgServoMaxRamp';


HwAgTrakgServoMinRamp = DataDict.Calibration;
HwAgTrakgServoMinRamp.LongName = 'Minimum Ramp';
HwAgTrakgServoMinRamp.Description = 'Minimum Ramp';
HwAgTrakgServoMinRamp.DocUnits = 'Uls';
HwAgTrakgServoMinRamp.EngDT = dt.float32;
HwAgTrakgServoMinRamp.EngVal = 0;
HwAgTrakgServoMinRamp.EngMin = 0;
HwAgTrakgServoMinRamp.EngMax = 1;
HwAgTrakgServoMinRamp.Cardinality = 'Inin';
HwAgTrakgServoMinRamp.CustomerVisible = false;
HwAgTrakgServoMinRamp.Online = false;
HwAgTrakgServoMinRamp.Impact = 'L';
HwAgTrakgServoMinRamp.TuningOwner = 'CSE';
HwAgTrakgServoMinRamp.GraphLink = {''};
HwAgTrakgServoMinRamp.Monotony = 'None';
HwAgTrakgServoMinRamp.MaxGrad = 998;
HwAgTrakgServoMinRamp.PortName = 'HwAgTrakgServoMinRamp';


HwAgTrakgServoPidLim = DataDict.Calibration;
HwAgTrakgServoPidLim.LongName = 'PID Limit';
HwAgTrakgServoPidLim.Description = 'Limit for the PID output';
HwAgTrakgServoPidLim.DocUnits = 'MotNwtMtr';
HwAgTrakgServoPidLim.EngDT = dt.float32;
HwAgTrakgServoPidLim.EngVal = 3.2578125;
HwAgTrakgServoPidLim.EngMin = 0;
HwAgTrakgServoPidLim.EngMax = 8.8;
HwAgTrakgServoPidLim.Cardinality = 'Inin';
HwAgTrakgServoPidLim.CustomerVisible = false;
HwAgTrakgServoPidLim.Online = false;
HwAgTrakgServoPidLim.Impact = 'L';
HwAgTrakgServoPidLim.TuningOwner = 'CSE';
HwAgTrakgServoPidLim.GraphLink = {''};
HwAgTrakgServoPidLim.Monotony = 'None';
HwAgTrakgServoPidLim.MaxGrad = 998;
HwAgTrakgServoPidLim.PortName = 'HwAgTrakgServoPidLim';


HwAgTrakgServoPropGainX = DataDict.Calibration;
HwAgTrakgServoPropGainX.LongName = 'Proportional Gain X';
HwAgTrakgServoPropGainX.Description = [...
  'Proportional part of PID control-Lookup table based on Handhweel posit' ...
  'ion'];
HwAgTrakgServoPropGainX.DocUnits = 'HwDeg';
HwAgTrakgServoPropGainX.EngDT = dt.u12p4;
HwAgTrakgServoPropGainX.EngVal =  ...
   [0                2                4                8               20               25               30];
HwAgTrakgServoPropGainX.EngMin = 0;
HwAgTrakgServoPropGainX.EngMax = 1000;
HwAgTrakgServoPropGainX.Cardinality = 'Inin';
HwAgTrakgServoPropGainX.CustomerVisible = false;
HwAgTrakgServoPropGainX.Online = false;
HwAgTrakgServoPropGainX.Impact = 'L';
HwAgTrakgServoPropGainX.TuningOwner = 'CSE';
HwAgTrakgServoPropGainX.GraphLink = {''};
HwAgTrakgServoPropGainX.Monotony = 'None';
HwAgTrakgServoPropGainX.MaxGrad = 998;
HwAgTrakgServoPropGainX.PortName = 'HwAgTrakgServoPropGainX';


HwAgTrakgServoPropGainY = DataDict.Calibration;
HwAgTrakgServoPropGainY.LongName = 'Proportional Gain Y';
HwAgTrakgServoPropGainY.Description = 'Proportional Gain of PID control';
HwAgTrakgServoPropGainY.DocUnits = 'MotNwtMtr';
HwAgTrakgServoPropGainY.EngDT = dt.u10p6;
HwAgTrakgServoPropGainY.EngVal =  ...
   [0                0                0
    0.09             0.09             0.09
    0.25             0.25             0.25
    0.74             0.74             0.74
    2.8              2.8              2.8
    3.2              3.2              3.2
    3.257            3.257            3.257];
HwAgTrakgServoPropGainY.EngMin = 0;
HwAgTrakgServoPropGainY.EngMax = 512;
HwAgTrakgServoPropGainY.Cardinality = 'Inin';
HwAgTrakgServoPropGainY.CustomerVisible = false;
HwAgTrakgServoPropGainY.Online = false;
HwAgTrakgServoPropGainY.Impact = 'M';
HwAgTrakgServoPropGainY.TuningOwner = 'CSE';
HwAgTrakgServoPropGainY.GraphLink = {'HwAgTrakgServoPropGainX','HwAgTrakgServoVehSpdBasd'};
HwAgTrakgServoPropGainY.Monotony = 'None';
HwAgTrakgServoPropGainY.MaxGrad = 998;
HwAgTrakgServoPropGainY.PortName = 'HwAgTrakgServoPropGainY';


HwAgTrakgServoRampCmpl = DataDict.Calibration;
HwAgTrakgServoRampCmpl.LongName = 'Ramp Complete';
HwAgTrakgServoRampCmpl.Description = 'Ramp Complete';
HwAgTrakgServoRampCmpl.DocUnits = 'Uls';
HwAgTrakgServoRampCmpl.EngDT = dt.float32;
HwAgTrakgServoRampCmpl.EngVal = 0;
HwAgTrakgServoRampCmpl.EngMin = 0;
HwAgTrakgServoRampCmpl.EngMax = 1;
HwAgTrakgServoRampCmpl.Cardinality = 'Inin';
HwAgTrakgServoRampCmpl.CustomerVisible = false;
HwAgTrakgServoRampCmpl.Online = false;
HwAgTrakgServoRampCmpl.Impact = 'L';
HwAgTrakgServoRampCmpl.TuningOwner = 'CSE';
HwAgTrakgServoRampCmpl.GraphLink = {''};
HwAgTrakgServoRampCmpl.Monotony = 'None';
HwAgTrakgServoRampCmpl.MaxGrad = 998;
HwAgTrakgServoRampCmpl.PortName = 'HwAgTrakgServoRampCmpl';


HwAgTrakgServoSmotngX = DataDict.Calibration;
HwAgTrakgServoSmotngX.LongName = 'Smoothing X';
HwAgTrakgServoSmotngX.Description = 'X table for Smoothing function';
HwAgTrakgServoSmotngX.DocUnits = 'Uls';
HwAgTrakgServoSmotngX.EngDT = dt.u1p15;
HwAgTrakgServoSmotngX.EngVal =  ...
   [0              0.1              0.2              0.3              0.4              0.6              0.7              0.8              0.9                1];
HwAgTrakgServoSmotngX.EngMin = 0;
HwAgTrakgServoSmotngX.EngMax = 1;
HwAgTrakgServoSmotngX.Cardinality = 'Inin';
HwAgTrakgServoSmotngX.CustomerVisible = false;
HwAgTrakgServoSmotngX.Online = false;
HwAgTrakgServoSmotngX.Impact = 'L';
HwAgTrakgServoSmotngX.TuningOwner = 'CSE';
HwAgTrakgServoSmotngX.GraphLink = {''};
HwAgTrakgServoSmotngX.Monotony = 'None';
HwAgTrakgServoSmotngX.MaxGrad = 998;
HwAgTrakgServoSmotngX.PortName = 'HwAgTrakgServoSmotngX';


HwAgTrakgServoSmotngY = DataDict.Calibration;
HwAgTrakgServoSmotngY.LongName = 'Smoothing Y';
HwAgTrakgServoSmotngY.Description = 'Y table for Smoothing function';
HwAgTrakgServoSmotngY.DocUnits = 'Uls';
HwAgTrakgServoSmotngY.EngDT = dt.u1p15;
HwAgTrakgServoSmotngY.EngVal =  ...
   [0            0.024            0.095            0.206            0.345            0.655            0.794            0.905            0.976                1];
HwAgTrakgServoSmotngY.EngMin = 0;
HwAgTrakgServoSmotngY.EngMax = 1;
HwAgTrakgServoSmotngY.Cardinality = 'Inin';
HwAgTrakgServoSmotngY.CustomerVisible = false;
HwAgTrakgServoSmotngY.Online = false;
HwAgTrakgServoSmotngY.Impact = 'M';
HwAgTrakgServoSmotngY.TuningOwner = 'CSE';
HwAgTrakgServoSmotngY.GraphLink = {'HwAgTrakgServoSmotngX'};
HwAgTrakgServoSmotngY.Monotony = 'None';
HwAgTrakgServoSmotngY.MaxGrad = 998;
HwAgTrakgServoSmotngY.PortName = 'HwAgTrakgServoSmotngY';


HwAgTrakgServoVehSpdBasd = DataDict.Calibration;
HwAgTrakgServoVehSpdBasd.LongName = 'Vehicle Speed Based';
HwAgTrakgServoVehSpdBasd.Description = [...
  'Set of Vehicle Speed values to be used in PID lookups. 3 point vector.' ...
  ''];
HwAgTrakgServoVehSpdBasd.DocUnits = 'Kph';
HwAgTrakgServoVehSpdBasd.EngDT = dt.u9p7;
HwAgTrakgServoVehSpdBasd.EngVal =  ...
   [0                2                5];
HwAgTrakgServoVehSpdBasd.EngMin = 0;
HwAgTrakgServoVehSpdBasd.EngMax = 511;
HwAgTrakgServoVehSpdBasd.Cardinality = 'Inin';
HwAgTrakgServoVehSpdBasd.CustomerVisible = false;
HwAgTrakgServoVehSpdBasd.Online = false;
HwAgTrakgServoVehSpdBasd.Impact = 'L';
HwAgTrakgServoVehSpdBasd.TuningOwner = 'CSE';
HwAgTrakgServoVehSpdBasd.GraphLink = {''};
HwAgTrakgServoVehSpdBasd.Monotony = 'None';
HwAgTrakgServoVehSpdBasd.MaxGrad = 998;
HwAgTrakgServoVehSpdBasd.PortName = 'HwAgTrakgServoVehSpdBasd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwAgTrakgServoDftlTerm = DataDict.Display;
dHwAgTrakgServoDftlTerm.LongName = 'Handwheel Angle Tracking  Servo Differential Term';
dHwAgTrakgServoDftlTerm.Description = [...
  'Differential Term output for the PID'];
dHwAgTrakgServoDftlTerm.DocUnits = 'MotNwtMtr';
dHwAgTrakgServoDftlTerm.EngDT = dt.float32;
dHwAgTrakgServoDftlTerm.EngMin = -255;
dHwAgTrakgServoDftlTerm.EngMax = 255;
dHwAgTrakgServoDftlTerm.InitRowCol = [1  1];


dHwAgTrakgServoHwAgTarFild = DataDict.Display;
dHwAgTrakgServoHwAgTarFild.LongName = 'Handwheel Angle Tracking  Servo Handwheel Angle Target Filtered';
dHwAgTrakgServoHwAgTarFild.Description = 'Handwheel Angle Target';
dHwAgTrakgServoHwAgTarFild.DocUnits = 'HwDeg';
dHwAgTrakgServoHwAgTarFild.EngDT = dt.float32;
dHwAgTrakgServoHwAgTarFild.EngMin = -1440;
dHwAgTrakgServoHwAgTarFild.EngMax = 1440;
dHwAgTrakgServoHwAgTarFild.InitRowCol = [1  1];


dHwAgTrakgServoIntglTerm = DataDict.Display;
dHwAgTrakgServoIntglTerm.LongName = 'Handwheel Angle Tracking  Servo Integral Term';
dHwAgTrakgServoIntglTerm.Description = 'Integral Term output for the PID';
dHwAgTrakgServoIntglTerm.DocUnits = 'MotNwtMtr';
dHwAgTrakgServoIntglTerm.EngDT = dt.float32;
dHwAgTrakgServoIntglTerm.EngMin = -100;
dHwAgTrakgServoIntglTerm.EngMax = 100;
dHwAgTrakgServoIntglTerm.InitRowCol = [1  1];


dHwAgTrakgServoPidCmd = DataDict.Display;
dHwAgTrakgServoPidCmd.LongName = 'Handwheel Angle Tracking  Servo PID Command';
dHwAgTrakgServoPidCmd.Description = 'PID output command';
dHwAgTrakgServoPidCmd.DocUnits = 'MotNwtMtr';
dHwAgTrakgServoPidCmd.EngDT = dt.float32;
dHwAgTrakgServoPidCmd.EngMin = -8.8;
dHwAgTrakgServoPidCmd.EngMax = 8.8;
dHwAgTrakgServoPidCmd.InitRowCol = [1  1];


dHwAgTrakgServoPropTerm = DataDict.Display;
dHwAgTrakgServoPropTerm.LongName = 'Handwheel Angle Tracking  Servo Proportional Term';
dHwAgTrakgServoPropTerm.Description = [...
  'Proportional Term output for the PID'];
dHwAgTrakgServoPropTerm.DocUnits = 'MotNwtMtr';
dHwAgTrakgServoPropTerm.EngDT = dt.float32;
dHwAgTrakgServoPropTerm.EngMin = -512;
dHwAgTrakgServoPropTerm.EngMax = 512;
dHwAgTrakgServoPropTerm.InitRowCol = [1  1];


dHwAgTrakgServoRampCmpl = DataDict.Display;
dHwAgTrakgServoRampCmpl.LongName = 'Handwheel/Hardware Angle Tracking  Servo Ramp Complete';
dHwAgTrakgServoRampCmpl.Description = [...
  'Indication of the Ramp complete variable'];
dHwAgTrakgServoRampCmpl.DocUnits = 'Uls';
dHwAgTrakgServoRampCmpl.EngDT = dt.lgc;
dHwAgTrakgServoRampCmpl.EngMin = 0;
dHwAgTrakgServoRampCmpl.EngMax = 1;
dHwAgTrakgServoRampCmpl.InitRowCol = [1  1];


dHwAgTrakgServoRtnScaFac = DataDict.Display;
dHwAgTrakgServoRtnScaFac.LongName = 'Handwheel/Hardware Angle Tracking  Servo Return Scale Factor';
dHwAgTrakgServoRtnScaFac.Description = [...
  'Return Scale Factor in Transition Control of the function'];
dHwAgTrakgServoRtnScaFac.DocUnits = 'Uls';
dHwAgTrakgServoRtnScaFac.EngDT = dt.float32;
dHwAgTrakgServoRtnScaFac.EngMin = 0;
dHwAgTrakgServoRtnScaFac.EngMax = 1;
dHwAgTrakgServoRtnScaFac.InitRowCol = [1  1];


dHwAgTrakgServoSmotngEna = DataDict.Display;
dHwAgTrakgServoSmotngEna.LongName = 'Handwheel/Hardware Angle Tracking  Servo Smoothing Enable';
dHwAgTrakgServoSmotngEna.Description = [...
  'Smoothing Enable in Transition control of the function'];
dHwAgTrakgServoSmotngEna.DocUnits = 'Uls';
dHwAgTrakgServoSmotngEna.EngDT = dt.float32;
dHwAgTrakgServoSmotngEna.EngMin = 0;
dHwAgTrakgServoSmotngEna.EngMax = 1;
dHwAgTrakgServoSmotngEna.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DftlTermLpFil = DataDict.PIM;
DftlTermLpFil.LongName = 'Differential Term Lowpass Filter';
DftlTermLpFil.Description = [...
  'Differential Term Lowpass Filter struct variable'];
DftlTermLpFil.DocUnits = 'Hz';
DftlTermLpFil.EngDT = struct.FilLpRec1;
DftlTermLpFil.EngMin = [struct('FilSt',-255,'FilGain',0.0125)];
DftlTermLpFil.EngMax = [struct('FilSt',255,'FilGain',0.7154)];
DftlTermLpFil.InitRowCol = [1  1];


HwAgLpFil = DataDict.PIM;
HwAgLpFil.LongName = 'Handwheel Angle Lowpass Filter';
HwAgLpFil.Description = [...
  'Handwheel Angle Lowpass Filter struct variable'];
HwAgLpFil.DocUnits = 'Hz';
HwAgLpFil.EngDT = struct.FilLpRec1;
HwAgLpFil.EngMin = [struct('FilSt',-1440,'FilGain',0.0013)];
HwAgLpFil.EngMax = [struct('FilSt',1440,'FilGain',0.2222)];
HwAgLpFil.InitRowCol = [1  1];


HwAgTarRateLim = DataDict.PIM;
HwAgTarRateLim.LongName = 'Handwheel Angle Target Rate Limit';
HwAgTarRateLim.Description = [...
  'State Variable of the Rate limiter used in Handwheel Angle'];
HwAgTarRateLim.DocUnits = 'HwDeg';
HwAgTarRateLim.EngDT = dt.float32;
HwAgTarRateLim.EngMin = -1440;
HwAgTarRateLim.EngMax = 1440;
HwAgTarRateLim.InitRowCol = [1  1];


HwTqLpFil = DataDict.PIM;
HwTqLpFil.LongName = 'Handwheel Torque Lowpass Filter';
HwTqLpFil.Description = [...
  'Handwheel torque Lowpass Filter struct variable'];
HwTqLpFil.DocUnits = 'Hz';
HwTqLpFil.EngDT = struct.FilLpRec1;
HwTqLpFil.EngMin = [struct('FilSt',-10,'FilGain',0.0013)];
HwTqLpFil.EngMax = [struct('FilSt',10,'FilGain',0.2222)];
HwTqLpFil.InitRowCol = [1  1];


PrevDftlErr = DataDict.PIM;
PrevDftlErr.LongName = 'Previous Differential Error';
PrevDftlErr.Description = [...
  'Previous error in the differential control loop of PID'];
PrevDftlErr.DocUnits = 'HwDeg';
PrevDftlErr.EngDT = dt.float32;
PrevDftlErr.EngMin = -2880;
PrevDftlErr.EngMax = 2880;
PrevDftlErr.InitRowCol = [1  1];


PrevHwAgTar = DataDict.PIM;
PrevHwAgTar.LongName = 'Previous Handwheel Angle Target';
PrevHwAgTar.Description = [...
  'Previous target/desired value of handwheel angle'];
PrevHwAgTar.DocUnits = 'HwDeg';
PrevHwAgTar.EngDT = dt.float32;
PrevHwAgTar.EngMin = -1440;
PrevHwAgTar.EngMax = 1440;
PrevHwAgTar.InitRowCol = [1  1];


PrevIntglErr = DataDict.PIM;
PrevIntglErr.LongName = 'Previous Integral Error';
PrevIntglErr.Description = [...
  'Previous error in the integral control loop of PID'];
PrevIntglErr.DocUnits = 'HwDeg';
PrevIntglErr.EngDT = dt.float32;
PrevIntglErr.EngMin = -128000;
PrevIntglErr.EngMax = 128000;
PrevIntglErr.InitRowCol = [1  1];


PrevSmotng = DataDict.PIM;
PrevSmotng.LongName = 'Previous Smoothing';
PrevSmotng.Description = 'Previous Smooth enable value ';
PrevSmotng.DocUnits = 'Uls';
PrevSmotng.EngDT = dt.float32;
PrevSmotng.EngMin = 0;
PrevSmotng.EngMax = 1;
PrevSmotng.InitRowCol = [1  1];



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


DFTLTERMMAX_MOTNWTMTR_F32 = DataDict.Constant;
DFTLTERMMAX_MOTNWTMTR_F32.LongName = 'Differential Term Maximum';
DFTLTERMMAX_MOTNWTMTR_F32.Description = [...
  'Maximum value of Differential Term from the PID system'];
DFTLTERMMAX_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
DFTLTERMMAX_MOTNWTMTR_F32.EngDT = dt.float32;
DFTLTERMMAX_MOTNWTMTR_F32.EngVal = 255;
DFTLTERMMAX_MOTNWTMTR_F32.Define = 'Local';


DFTLTERMMIN_MOTNWTMTR_F32 = DataDict.Constant;
DFTLTERMMIN_MOTNWTMTR_F32.LongName = 'Differential Term Minimum';
DFTLTERMMIN_MOTNWTMTR_F32.Description = [...
  'Minimum value of Differential Term from the PID system'];
DFTLTERMMIN_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
DFTLTERMMIN_MOTNWTMTR_F32.EngDT = dt.float32;
DFTLTERMMIN_MOTNWTMTR_F32.EngVal = -255;
DFTLTERMMIN_MOTNWTMTR_F32.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
