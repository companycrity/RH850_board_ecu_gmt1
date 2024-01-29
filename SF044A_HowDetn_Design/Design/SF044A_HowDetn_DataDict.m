
%% EA4 Component Data Dictionary - Created on 02-Nov-2016 11:08:20       %
%                                  Created with tool release: 2.49.0     %
%                                  Synergy file: %version: 6 %           %
%                                  Derived by: %derived_by: xzb1db %          %
%%-----------------------------------------------------------------------%

SF044A = DataDict.FDD;
SF044A.Version = '2.0.X';
SF044A.LongName = 'HOW Detection';
SF044A.ShoName  = 'HowDetn';
SF044A.DesignASIL = 'QM';
SF044A.Description = [...
  'Determine a continuous valued estimate that represents the likelyhood ' ...
  'that a driver hands areon the steering wheel (value =1) or off the ste' ...
  'ering wheel (value=0).  A discrete value correspondingto the the confi' ...
  'dence of the estimate is also specified.This function applies for vehicle operation on smooth dry roads only. Function shall meet performance requirements for occasional road imperfections, such as pot holes, bumps and cracks.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HowDetnInit1 = DataDict.Runnable;
HowDetnInit1.Context = 'Rte';
HowDetnInit1.TimeStep = 0;
HowDetnInit1.Description = [...
  'Hand On Wheel Detection Initialization'];

HowDetnPer1 = DataDict.Runnable;
HowDetnPer1.Context = 'Rte';
HowDetnPer1.TimeStep = 0.002;
HowDetnPer1.Description = 'Hands On Wheel Detection Periodic';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'HowDetnPer1'};
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
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'HowDetnPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time fromSimnTi value, handles counter wrapping' ...
  ', and subtracts RefTmr,provides the TiSpan'];
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Wrapped value of the current time';
%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque in HwNwtMtr';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'HowDetnPer1'};
HwTq.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed in Kph';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'HowDetnPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HowDetnEstimn = DataDict.OpSignal;
HowDetnEstimn.LongName = 'HOW Detection Estimation';
HowDetnEstimn.Description = [...
  'Continous variable indicating confidence level that hands are on steer' ...
  'ing wheel.  0=off, 0.5=unknown, 1=on'];
HowDetnEstimn.DocUnits = 'Uls';
HowDetnEstimn.SwcShoName = 'HowDetn';
HowDetnEstimn.EngDT = dt.float32;
HowDetnEstimn.EngInit = 0.5;
HowDetnEstimn.EngMin = 0;
HowDetnEstimn.EngMax = 1;
HowDetnEstimn.TestTolerance = 0.01;
HowDetnEstimn.WrittenIn = {'HowDetnPer1'};
HowDetnEstimn.WriteType = 'Rte';


HowDetnFlg = DataDict.OpSignal;
HowDetnFlg.LongName = 'HOW Detection Flag';
HowDetnFlg.Description = [...
  'Flag with 0 indicating Hands Off and 1 indicating Hands On.'];
HowDetnFlg.DocUnits = 'Cnt';
HowDetnFlg.SwcShoName = 'HowDetn';
HowDetnFlg.EngDT = dt.lgc;
HowDetnFlg.EngInit = 1;
HowDetnFlg.EngMin = 0;
HowDetnFlg.EngMax = 1;
HowDetnFlg.TestTolerance = 0;
HowDetnFlg.WrittenIn = {'HowDetnPer1'};
HowDetnFlg.WriteType = 'Rte';


HowDetnSt = DataDict.OpSignal;
HowDetnSt.LongName = 'HOW Detection State';
HowDetnSt.Description = [...
  'Confidence level that hands are on the wheel. -3=High Confidence Off. ' ...
  '+3=High Confidence on.'];
HowDetnSt.DocUnits = 'Cnt';
HowDetnSt.SwcShoName = 'HowDetn';
HowDetnSt.EngDT = dt.s08;
HowDetnSt.EngInit = 0;
HowDetnSt.EngMin = -3;
HowDetnSt.EngMax = 3;
HowDetnSt.TestTolerance = 1;
HowDetnSt.WrittenIn = {'HowDetnPer1'};
HowDetnSt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HowDetnEstimLpFilFrq = DataDict.Calibration;
HowDetnEstimLpFilFrq.LongName = 'Estimation Low-pass filter frequency ';
HowDetnEstimLpFilFrq.Description = [...
  'Low-Pass Filter Corner Frequency for HOW_Estimate'];
HowDetnEstimLpFilFrq.DocUnits = 'Hz';
HowDetnEstimLpFilFrq.EngDT = dt.float32;
HowDetnEstimLpFilFrq.EngVal = 0.5;
HowDetnEstimLpFilFrq.EngMin = 0.01;
HowDetnEstimLpFilFrq.EngMax = 250;
HowDetnEstimLpFilFrq.Cardinality = 'Cmn';
HowDetnEstimLpFilFrq.CustomerVisible = false;
HowDetnEstimLpFilFrq.Online = false;
HowDetnEstimLpFilFrq.Impact = 'L';
HowDetnEstimLpFilFrq.TuningOwner = 'CSE';
HowDetnEstimLpFilFrq.GraphLink = {''};
HowDetnEstimLpFilFrq.Monotony = 'None';
HowDetnEstimLpFilFrq.MaxGrad = 0;
HowDetnEstimLpFilFrq.PortName = 'HowDetnEstimLpFilFrq';


HowDetnHiFrqGainY = DataDict.Calibration;
HowDetnHiFrqGainY.LongName = 'High Frequency Gain Y';
HowDetnHiFrqGainY.Description = 'High Frequency Rate Table';
HowDetnHiFrqGainY.DocUnits = 'Uls';
HowDetnHiFrqGainY.EngDT = dt.u9p7;
HowDetnHiFrqGainY.EngVal =  ...
   [17.4             17.4             17.4             17.4             17.4             17.4             17.4             17.4             17.4];
HowDetnHiFrqGainY.EngMin = 0;
HowDetnHiFrqGainY.EngMax = 100;
HowDetnHiFrqGainY.Cardinality = 'Inin';
HowDetnHiFrqGainY.CustomerVisible = false;
HowDetnHiFrqGainY.Online = false;
HowDetnHiFrqGainY.Impact = 'L';
HowDetnHiFrqGainY.TuningOwner = 'CSE';
HowDetnHiFrqGainY.GraphLink = {'HowDetnVehSpd'};
HowDetnHiFrqGainY.Monotony = 'None';
HowDetnHiFrqGainY.MaxGrad = 100;
HowDetnHiFrqGainY.PortName = 'HowDetnHiFrqGainY';


HowDetnHiFrqRateX = DataDict.Calibration;
HowDetnHiFrqRateX.LongName = 'High Frequency Rate X';
HowDetnHiFrqRateX.Description = [...
  'High-Frequency Content Rate X-Table'];
HowDetnHiFrqRateX.DocUnits = 'HwNwtMtr';
HowDetnHiFrqRateX.EngDT = dt.u8p8;
HowDetnHiFrqRateX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0
    0.1              0.1              0.1              0.1              0.1              0.1              0.1              0.1              0.1
    0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    0.3              0.3              0.3              0.3              0.3              0.3              0.3              0.3              0.3
    0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5
    1                1                1                1                1                1                1                1                1];
HowDetnHiFrqRateX.EngMin = 0;
HowDetnHiFrqRateX.EngMax = 10;
HowDetnHiFrqRateX.Cardinality = 'Inin';
HowDetnHiFrqRateX.CustomerVisible = false;
HowDetnHiFrqRateX.Online = false;
HowDetnHiFrqRateX.Impact = 'L';
HowDetnHiFrqRateX.TuningOwner = 'CSE';
HowDetnHiFrqRateX.GraphLink = {''};
HowDetnHiFrqRateX.Monotony = 'Strictly_Increasing';
HowDetnHiFrqRateX.MaxGrad = 10;
HowDetnHiFrqRateX.PortName = 'HowDetnHiFrqRateX';


HowDetnHiFrqRateY = DataDict.Calibration;
HowDetnHiFrqRateY.LongName = 'High Frequency Rate Y';
HowDetnHiFrqRateY.Description = [...
  'High-Frequency Content Rate Y-Table'];
HowDetnHiFrqRateY.DocUnits = 'UlsPerSec';
HowDetnHiFrqRateY.EngDT = dt.s7p8;
HowDetnHiFrqRateY.EngVal =  ...
   [-5               -5               -5               -5               -5               -5               -5               -5               -5
    -1               -1               -1               -1               -1               -1               -1               -1               -1
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    20               20               20               20               20               20               20               20               20
    20               20               20               20               20               20               20               20               20];
HowDetnHiFrqRateY.EngMin = -100;
HowDetnHiFrqRateY.EngMax = 100;
HowDetnHiFrqRateY.Cardinality = 'Inin';
HowDetnHiFrqRateY.CustomerVisible = false;
HowDetnHiFrqRateY.Online = false;
HowDetnHiFrqRateY.Impact = 'L';
HowDetnHiFrqRateY.TuningOwner = 'CSE';
HowDetnHiFrqRateY.GraphLink = {'HowDetnHiFrqRateX','HowDetnVehSpd'};
HowDetnHiFrqRateY.Monotony = 'Increasing';
HowDetnHiFrqRateY.MaxGrad = 200;
HowDetnHiFrqRateY.PortName = 'HowDetnHiFrqRateY';


HowDetnLoFrqRateX = DataDict.Calibration;
HowDetnLoFrqRateX.LongName = 'Low Frequency Rate X';
HowDetnLoFrqRateX.Description = 'Low-Frequency Content Rate X-Table';
HowDetnLoFrqRateX.DocUnits = 'HwNwtMtr';
HowDetnLoFrqRateX.EngDT = dt.u8p8;
HowDetnLoFrqRateX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0
    0.07421875       0.07421875       0.07421875       0.07421875       0.07421875       0.07421875       0.07421875       0.07421875       0.07421875
    0.19921875       0.19921875       0.19921875       0.19921875       0.19921875       0.19921875       0.19921875       0.19921875       0.19921875
    0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    1                1                1                1                1                1                1                1                1];
HowDetnLoFrqRateX.EngMin = 0;
HowDetnLoFrqRateX.EngMax = 10;
HowDetnLoFrqRateX.Cardinality = 'Inin';
HowDetnLoFrqRateX.CustomerVisible = false;
HowDetnLoFrqRateX.Online = false;
HowDetnLoFrqRateX.Impact = 'L';
HowDetnLoFrqRateX.TuningOwner = 'CSE';
HowDetnLoFrqRateX.GraphLink = {''};
HowDetnLoFrqRateX.Monotony = 'Strictly_Increasing';
HowDetnLoFrqRateX.MaxGrad = 10;
HowDetnLoFrqRateX.PortName = 'HowDetnLoFrqRateX';


HowDetnLoFrqRateY = DataDict.Calibration;
HowDetnLoFrqRateY.LongName = 'Low Frequency Rate Y';
HowDetnLoFrqRateY.Description = 'Low-Frequency Torque Rate Table';
HowDetnLoFrqRateY.DocUnits = 'UlsPerSec';
HowDetnLoFrqRateY.EngDT = dt.s7p8;
HowDetnLoFrqRateY.EngVal =  ...
   [-2               -2               -2               -2               -2               -2               -2               -2               -2
    -0.5             -0.5             -0.5             -0.5             -0.5             -0.5             -0.5             -0.5             -0.5
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    90               90               90               90               90               90               90               90               90];
HowDetnLoFrqRateY.EngMin = -100;
HowDetnLoFrqRateY.EngMax = 100;
HowDetnLoFrqRateY.Cardinality = 'Inin';
HowDetnLoFrqRateY.CustomerVisible = false;
HowDetnLoFrqRateY.Online = false;
HowDetnLoFrqRateY.Impact = 'L';
HowDetnLoFrqRateY.TuningOwner = 'CSE';
HowDetnLoFrqRateY.GraphLink = {'HowDetnLoFrqRateX','HowDetnVehSpd'};
HowDetnLoFrqRateY.Monotony = 'Increasing';
HowDetnLoFrqRateY.MaxGrad = 200;
HowDetnLoFrqRateY.PortName = 'HowDetnLoFrqRateY';


HowDetnMinVehSpd = DataDict.Calibration;
HowDetnMinVehSpd.LongName = 'Minimum Vehicle Speed';
HowDetnMinVehSpd.Description = [...
  'Minimum vehicle speed to attempt to estimate Hands On/Off'];
HowDetnMinVehSpd.DocUnits = 'Kph';
HowDetnMinVehSpd.EngDT = dt.float32;
HowDetnMinVehSpd.EngVal = 10;
HowDetnMinVehSpd.EngMin = 0;
HowDetnMinVehSpd.EngMax = 511;
HowDetnMinVehSpd.Cardinality = 'Cmn';
HowDetnMinVehSpd.CustomerVisible = false;
HowDetnMinVehSpd.Online = false;
HowDetnMinVehSpd.Impact = 'L';
HowDetnMinVehSpd.TuningOwner = 'CSE';
HowDetnMinVehSpd.GraphLink = {''};
HowDetnMinVehSpd.Monotony = 'None';
HowDetnMinVehSpd.MaxGrad = 0;
HowDetnMinVehSpd.PortName = 'HowDetnMinVehSpd';


HowDetnPercOfPrevHowEstim = DataDict.Calibration;
HowDetnPercOfPrevHowEstim.LongName = 'Percentage of Previous Hands on Wheel Estimation';
HowDetnPercOfPrevHowEstim.Description = [...
  'Pecentage of previous HOW Estimate to use in current calculation'];
HowDetnPercOfPrevHowEstim.DocUnits = 'Uls';
HowDetnPercOfPrevHowEstim.EngDT = dt.float32;
HowDetnPercOfPrevHowEstim.EngVal = 0.99;
HowDetnPercOfPrevHowEstim.EngMin = 0;
HowDetnPercOfPrevHowEstim.EngMax = 1;
HowDetnPercOfPrevHowEstim.Cardinality = 'Cmn';
HowDetnPercOfPrevHowEstim.CustomerVisible = false;
HowDetnPercOfPrevHowEstim.Online = false;
HowDetnPercOfPrevHowEstim.Impact = 'L';
HowDetnPercOfPrevHowEstim.TuningOwner = 'CSE';
HowDetnPercOfPrevHowEstim.GraphLink = {''};
HowDetnPercOfPrevHowEstim.Monotony = 'None';
HowDetnPercOfPrevHowEstim.MaxGrad = 0;
HowDetnPercOfPrevHowEstim.PortName = 'HowDetnPercOfPrevHowEstim';


HowDetnSlewRate = DataDict.Calibration;
HowDetnSlewRate.LongName = 'Slew Rate';
HowDetnSlewRate.Description = [...
  'Rate limit on change in HOW Estimate'];
HowDetnSlewRate.DocUnits = 'HwNwtMtrPerSec';
HowDetnSlewRate.EngDT = dt.float32;
HowDetnSlewRate.EngVal = 2;
HowDetnSlewRate.EngMin = 0;
HowDetnSlewRate.EngMax = 1000;
HowDetnSlewRate.Cardinality = 'Inin';
HowDetnSlewRate.CustomerVisible = false;
HowDetnSlewRate.Online = false;
HowDetnSlewRate.Impact = 'L';
HowDetnSlewRate.TuningOwner = 'CSE';
HowDetnSlewRate.GraphLink = {''};
HowDetnSlewRate.Monotony = 'None';
HowDetnSlewRate.MaxGrad = 0;
HowDetnSlewRate.PortName = 'HowDetnSlewRate';


HowDetnStLpFilFrq = DataDict.Calibration;
HowDetnStLpFilFrq.LongName = 'State Low-pass Filter Frequency';
HowDetnStLpFilFrq.Description = [...
  'Low-Pass Filter Corner Frequency on HOW State, prior to enumeration'];
HowDetnStLpFilFrq.DocUnits = 'Hz';
HowDetnStLpFilFrq.EngDT = dt.float32;
HowDetnStLpFilFrq.EngVal = 2;
HowDetnStLpFilFrq.EngMin = 0.01;
HowDetnStLpFilFrq.EngMax = 250;
HowDetnStLpFilFrq.Cardinality = 'Inin';
HowDetnStLpFilFrq.CustomerVisible = false;
HowDetnStLpFilFrq.Online = false;
HowDetnStLpFilFrq.Impact = 'L';
HowDetnStLpFilFrq.TuningOwner = 'CSE';
HowDetnStLpFilFrq.GraphLink = {''};
HowDetnStLpFilFrq.Monotony = 'None';
HowDetnStLpFilFrq.MaxGrad = 0;
HowDetnStLpFilFrq.PortName = 'HowDetnStLpFilFrq';


HowDetnStThdX = DataDict.Calibration;
HowDetnStThdX.LongName = 'State Threshold';
HowDetnStThdX.Description = [...
  'Conversion levels from HOW Estimate to HOW State'];
HowDetnStThdX.DocUnits = 'Uls';
HowDetnStThdX.EngDT = dt.u8p8;
HowDetnStThdX.EngVal =  ...
   [0            0.059             0.25             0.35             0.65             0.75             0.94];
HowDetnStThdX.EngMin = 0;
HowDetnStThdX.EngMax = 1;
HowDetnStThdX.Cardinality = 'Inin';
HowDetnStThdX.CustomerVisible = false;
HowDetnStThdX.Online = false;
HowDetnStThdX.Impact = 'L';
HowDetnStThdX.TuningOwner = 'CSE';
HowDetnStThdX.GraphLink = {''};
HowDetnStThdX.Monotony = 'Strictly_Increasing';
HowDetnStThdX.MaxGrad = 1;
HowDetnStThdX.PortName = 'HowDetnStThdX';


HowDetnTqFinalLpFilFrq = DataDict.Calibration;
HowDetnTqFinalLpFilFrq.LongName = 'Torque Final Low-pass Filter Frequency';
HowDetnTqFinalLpFilFrq.Description = [...
  'Low-Pass Filter Corner Frequency on final processing of high-frequency' ...
  ' torque calculation'];
HowDetnTqFinalLpFilFrq.DocUnits = 'Hz';
HowDetnTqFinalLpFilFrq.EngDT = dt.float32;
HowDetnTqFinalLpFilFrq.EngVal = 1;
HowDetnTqFinalLpFilFrq.EngMin = 0.01;
HowDetnTqFinalLpFilFrq.EngMax = 250;
HowDetnTqFinalLpFilFrq.Cardinality = 'Inin';
HowDetnTqFinalLpFilFrq.CustomerVisible = false;
HowDetnTqFinalLpFilFrq.Online = false;
HowDetnTqFinalLpFilFrq.Impact = 'L';
HowDetnTqFinalLpFilFrq.TuningOwner = 'CSE';
HowDetnTqFinalLpFilFrq.GraphLink = {''};
HowDetnTqFinalLpFilFrq.Monotony = 'None';
HowDetnTqFinalLpFilFrq.MaxGrad = 0;
HowDetnTqFinalLpFilFrq.PortName = 'HowDetnTqFinalLpFilFrq';


HowDetnTqHpFilFrq = DataDict.Calibration;
HowDetnTqHpFilFrq.LongName = 'Torque High-pass Filter Frequency';
HowDetnTqHpFilFrq.Description = [...
  'High-Pass Filter Corner Frequency of high-frequency Torque calculation' ...
  ''];
HowDetnTqHpFilFrq.DocUnits = 'Hz';
HowDetnTqHpFilFrq.EngDT = dt.float32;
HowDetnTqHpFilFrq.EngVal = 7;
HowDetnTqHpFilFrq.EngMin = 0.01;
HowDetnTqHpFilFrq.EngMax = 500;
HowDetnTqHpFilFrq.Cardinality = 'Inin';
HowDetnTqHpFilFrq.CustomerVisible = false;
HowDetnTqHpFilFrq.Online = false;
HowDetnTqHpFilFrq.Impact = 'L';
HowDetnTqHpFilFrq.TuningOwner = 'CSE';
HowDetnTqHpFilFrq.GraphLink = {''};
HowDetnTqHpFilFrq.Monotony = 'None';
HowDetnTqHpFilFrq.MaxGrad = 0;
HowDetnTqHpFilFrq.PortName = 'HowDetnTqHpFilFrq';


HowDetnTqInitLpFilFrq = DataDict.Calibration;
HowDetnTqInitLpFilFrq.LongName = 'Torque Initialization Low-pass Filter Frequency';
HowDetnTqInitLpFilFrq.Description = [...
  'Low-Pass Filter Corner Frequency of initial filter'];
HowDetnTqInitLpFilFrq.DocUnits = 'Hz';
HowDetnTqInitLpFilFrq.EngDT = dt.float32;
HowDetnTqInitLpFilFrq.EngVal = 7;
HowDetnTqInitLpFilFrq.EngMin = 0.01;
HowDetnTqInitLpFilFrq.EngMax = 250;
HowDetnTqInitLpFilFrq.Cardinality = 'Inin';
HowDetnTqInitLpFilFrq.CustomerVisible = false;
HowDetnTqInitLpFilFrq.Online = false;
HowDetnTqInitLpFilFrq.Impact = 'L';
HowDetnTqInitLpFilFrq.TuningOwner = 'CSE';
HowDetnTqInitLpFilFrq.GraphLink = {''};
HowDetnTqInitLpFilFrq.Monotony = 'None';
HowDetnTqInitLpFilFrq.MaxGrad = 0;
HowDetnTqInitLpFilFrq.PortName = 'HowDetnTqInitLpFilFrq';


HowDetnVehSpd = DataDict.Calibration;
HowDetnVehSpd.LongName = 'Vehicle Speed';
HowDetnVehSpd.Description = 'HOW function vehicle speed table';
HowDetnVehSpd.DocUnits = 'Kph';
HowDetnVehSpd.EngDT = dt.u9p7;
HowDetnVehSpd.EngVal =  ...
   [10               20               30               40               50               60               70               80              100];
HowDetnVehSpd.EngMin = 0;
HowDetnVehSpd.EngMax = 511;
HowDetnVehSpd.Cardinality = 'Inin';
HowDetnVehSpd.CustomerVisible = false;
HowDetnVehSpd.Online = false;
HowDetnVehSpd.Impact = 'L';
HowDetnVehSpd.TuningOwner = 'CSE';
HowDetnVehSpd.GraphLink = {''};
HowDetnVehSpd.Monotony = 'None';
HowDetnVehSpd.MaxGrad = 511;
HowDetnVehSpd.PortName = 'HowDetnVehSpd';


HowDetnOffThd = DataDict.Calibration;
HowDetnOffThd.LongName = 'Hands Off Detection Threshold';
HowDetnOffThd.Description = 'Hands Off Detection Threshold';
HowDetnOffThd.DocUnits = 'Uls';
HowDetnOffThd.EngDT = dt.float32;
HowDetnOffThd.EngVal = 0.01;
HowDetnOffThd.EngMin = 0;
HowDetnOffThd.EngMax = 1;
HowDetnOffThd.Cardinality = 'Inin';
HowDetnOffThd.CustomerVisible = false;
HowDetnOffThd.Online = false;
HowDetnOffThd.Impact = 'L';
HowDetnOffThd.TuningOwner = 'CSE';
HowDetnOffThd.GraphLink = {''};
HowDetnOffThd.Monotony = 'None';
HowDetnOffThd.MaxGrad = 0;
HowDetnOffThd.PortName = 'HowDetnOffThd';


HowDetnOffTi = DataDict.Calibration;
HowDetnOffTi.LongName = 'Hands Off Detection Elapsed Time';
HowDetnOffTi.Description = 'Hands Off Detection Elapsed Time';
HowDetnOffTi.DocUnits = 'Sec';
HowDetnOffTi.EngDT = dt.float32;
HowDetnOffTi.EngVal = 0;
HowDetnOffTi.EngMin = 0;
HowDetnOffTi.EngMax = 60;
HowDetnOffTi.Cardinality = 'Inin';
HowDetnOffTi.CustomerVisible = false;
HowDetnOffTi.Online = false;
HowDetnOffTi.Impact = 'L';
HowDetnOffTi.TuningOwner = 'CSE';
HowDetnOffTi.GraphLink = {''};
HowDetnOffTi.Monotony = 'None';
HowDetnOffTi.MaxGrad = 0;
HowDetnOffTi.PortName = 'HowDetnOffTi';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHowDetnAbsHiFrqTq = DataDict.Display;
dHowDetnAbsHiFrqTq.LongName = 'Absolute High Frequency Torque';
dHowDetnAbsHiFrqTq.Description = [...
  'High-Frequency Handhwheel Torque for determining HOW Estimate'];
dHowDetnAbsHiFrqTq.DocUnits = 'HwNwtMtr';
dHowDetnAbsHiFrqTq.EngDT = dt.float32;
dHowDetnAbsHiFrqTq.EngMin = 0;
dHowDetnAbsHiFrqTq.EngMax = 1000;
dHowDetnAbsHiFrqTq.InitRowCol = [1  1];


dHowDetnAbsLoFrqTq = DataDict.Display;
dHowDetnAbsLoFrqTq.LongName = 'Absolute Low Frequency Torque';
dHowDetnAbsLoFrqTq.Description = [...
  'Low-Frequency Handhwheel Torque for determining HOW Estimate'];
dHowDetnAbsLoFrqTq.DocUnits = 'HwNwtMtr';
dHowDetnAbsLoFrqTq.EngDT = dt.float32;
dHowDetnAbsLoFrqTq.EngMin = 0;
dHowDetnAbsLoFrqTq.EngMax = 10;
dHowDetnAbsLoFrqTq.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
EstimLpFil = DataDict.PIM;
EstimLpFil.LongName = 'Estimation Low-pass Filter';
EstimLpFil.Description = 'Estimation Low-pass Filter';
EstimLpFil.DocUnits = 'Uls';
EstimLpFil.EngDT = struct.FilLpRec1;
EstimLpFil.EngMin = [struct('FilSt',-0.5,'FilGain',0.0001256)];
EstimLpFil.EngMax = [struct('FilSt',0.5,'FilGain',0.956786)];
EstimLpFil.InitRowCol = [1  1];


FinalLpFil = DataDict.PIM;
FinalLpFil.LongName = 'Final Low-pass Filter';
FinalLpFil.Description = 'Final Low-pass Filter';
FinalLpFil.DocUnits = 'Uls';
FinalLpFil.EngDT = struct.FilLpRec1;
FinalLpFil.EngMin = [struct('FilSt',0,'FilGain',0.0001256)];
FinalLpFil.EngMax = [struct('FilSt',1000,'FilGain',0.956786)];
FinalLpFil.InitRowCol = [1  1];


HowOffPrev = DataDict.PIM;
HowOffPrev.LongName = 'Hands Off Wheel Previous';
HowOffPrev.Description = [...
  'Previous Value of Hands Off Wheel Status'];
HowOffPrev.DocUnits = 'Cnt';
HowOffPrev.EngDT = dt.lgc;
HowOffPrev.EngMin = 0;
HowOffPrev.EngMax = 1;
HowOffPrev.InitRowCol = [1  1];


IniLpFil1 = DataDict.PIM;
IniLpFil1.LongName = 'Initialization Low-pass Filter 1';
IniLpFil1.Description = 'Initialization Low-pass Filter 1';
IniLpFil1.DocUnits = 'Uls';
IniLpFil1.EngDT = struct.FilLpRec1;
IniLpFil1.EngMin = [struct('FilSt',-10,'FilGain',0.0001256)];
IniLpFil1.EngMax = [struct('FilSt',10,'FilGain',0.956786)];
IniLpFil1.InitRowCol = [1  1];


IniLpFil2 = DataDict.PIM;
IniLpFil2.LongName = 'Initialization Low-pass Filter 2';
IniLpFil2.Description = 'Initialization Low-pass Filter 2';
IniLpFil2.DocUnits = 'Uls';
IniLpFil2.EngDT = struct.FilLpRec1;
IniLpFil2.EngMin = [struct('FilSt',-10,'FilGain',0.0001256)];
IniLpFil2.EngMax = [struct('FilSt',10,'FilGain',0.956786)];
IniLpFil2.InitRowCol = [1  1];


IniLpFil3 = DataDict.PIM;
IniLpFil3.LongName = 'Initialization Low-pass Filter 3';
IniLpFil3.Description = 'Initialization Low-pass Filter 3';
IniLpFil3.DocUnits = 'Uls';
IniLpFil3.EngDT = struct.FilLpRec1;
IniLpFil3.EngMin = [struct('FilSt',-10,'FilGain',0.0001256)];
IniLpFil3.EngMax = [struct('FilSt',10,'FilGain',0.956786)];
IniLpFil3.InitRowCol = [1  1];


PrevCalcdHowEstim = DataDict.PIM;
PrevCalcdHowEstim.LongName = 'Previous Calculated Hands on Wheel Estimation';
PrevCalcdHowEstim.Description = [...
  'Previous Calculated Hands on Wheel Estimation'];
PrevCalcdHowEstim.DocUnits = 'Uls';
PrevCalcdHowEstim.EngDT = dt.float32;
PrevCalcdHowEstim.EngMin = 0;
PrevCalcdHowEstim.EngMax = 1;
PrevCalcdHowEstim.InitRowCol = [1  1];


PrevHowEstim = DataDict.PIM;
PrevHowEstim.LongName = 'Previous Hands on Wheel Estimation';
PrevHowEstim.Description = 'Previous Hands on Wheel Estimation';
PrevHowEstim.DocUnits = 'Uls';
PrevHowEstim.EngDT = dt.float32;
PrevHowEstim.EngMin = 0;
PrevHowEstim.EngMax = 1;
PrevHowEstim.InitRowCol = [1  1];


RefTiHowOff = DataDict.PIM;
RefTiHowOff.LongName = 'Hands Off Wheel Reference Time';
RefTiHowOff.Description = 'Hands Off Wheel Reference Time';
RefTiHowOff.DocUnits = 'Cnt';
RefTiHowOff.EngDT = dt.u32;
RefTiHowOff.EngMin = 0;
RefTiHowOff.EngMax = 4294967295;
RefTiHowOff.InitRowCol = [1  1];


StLpFil = DataDict.PIM;
StLpFil.LongName = 'State Low-pass Filter';
StLpFil.Description = 'State Low-pass Filter';
StLpFil.DocUnits = 'Uls';
StLpFil.EngDT = struct.FilLpRec1;
StLpFil.EngMin = [struct('FilSt',0,'FilGain',0.0001256)];
StLpFil.EngMax = [struct('FilSt',1,'FilGain',0.956786)];
StLpFil.InitRowCol = [1  1];


TqHpFil = DataDict.PIM;
TqHpFil.LongName = 'Torque High-pass Filter';
TqHpFil.Description = 'Torque High-pass Filter';
TqHpFil.DocUnits = 'Uls';
TqHpFil.EngDT = struct.FilHpRec1;
TqHpFil.EngMin = [struct('FilLpRec',[struct('FilSt',-10,'FilGain',0.0001256)],'CorrnFac',1)];
TqHpFil.EngMax = [struct('FilLpRec',[struct('FilSt',10,'FilGain',0.9981326)],'CorrnFac',119.96326)];
TqHpFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ABSLTHIFRQTQHILIM_HWNWTMTR_F32 = DataDict.Constant;
ABSLTHIFRQTQHILIM_HWNWTMTR_F32.LongName = 'Absolute High Frequency Torque High Limit ';
ABSLTHIFRQTQHILIM_HWNWTMTR_F32.Description = [...
  'Absolute High Frequency Torque High Limit'];
ABSLTHIFRQTQHILIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ABSLTHIFRQTQHILIM_HWNWTMTR_F32.EngDT = dt.float32;
ABSLTHIFRQTQHILIM_HWNWTMTR_F32.EngVal = 255;
ABSLTHIFRQTQHILIM_HWNWTMTR_F32.Define = 'Local';


ABSLTHIFRQTQLOLIM_HWNWTMTR_F32 = DataDict.Constant;
ABSLTHIFRQTQLOLIM_HWNWTMTR_F32.LongName = 'Absolute High Frequency Torque Low Limit ';
ABSLTHIFRQTQLOLIM_HWNWTMTR_F32.Description = [...
  'Absolute High Frequency Torque Low Limit'];
ABSLTHIFRQTQLOLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ABSLTHIFRQTQLOLIM_HWNWTMTR_F32.EngDT = dt.float32;
ABSLTHIFRQTQLOLIM_HWNWTMTR_F32.EngVal = 0;
ABSLTHIFRQTQLOLIM_HWNWTMTR_F32.Define = 'Local';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


HOWDETNESTIMNHILIM_ULS_F32 = DataDict.Constant;
HOWDETNESTIMNHILIM_ULS_F32.LongName = 'Hands on Wheel Detection Estimation High Limit';
HOWDETNESTIMNHILIM_ULS_F32.Description = [...
  'Hands on Wheel Detection Estimation High Limit used to limit the outpu' ...
  't'];
HOWDETNESTIMNHILIM_ULS_F32.DocUnits = 'Uls';
HOWDETNESTIMNHILIM_ULS_F32.EngDT = dt.float32;
HOWDETNESTIMNHILIM_ULS_F32.EngVal = 1;
HOWDETNESTIMNHILIM_ULS_F32.Define = 'Local';


HOWDETNESTIMNLIM_ULS_F32 = DataDict.Constant;
HOWDETNESTIMNLIM_ULS_F32.LongName = 'Hands on Wheel Detection estimation Limit';
HOWDETNESTIMNLIM_ULS_F32.Description = [...
  'Hands on Wheel Detection Estimation Limit.'];
HOWDETNESTIMNLIM_ULS_F32.DocUnits = 'Uls';
HOWDETNESTIMNLIM_ULS_F32.EngDT = dt.float32;
HOWDETNESTIMNLIM_ULS_F32.EngVal = 0.5;
HOWDETNESTIMNLIM_ULS_F32.Define = 'Local';


HOWDETNESTIMNLOLIM_ULS_F32 = DataDict.Constant;
HOWDETNESTIMNLOLIM_ULS_F32.LongName = 'Hands on Wheel Detection Estimation Low Limit';
HOWDETNESTIMNLOLIM_ULS_F32.Description = [...
  'Hands on Wheel Detection Estimation Low Limit used to limit the output' ...
  ''];
HOWDETNESTIMNLOLIM_ULS_F32.DocUnits = 'Uls';
HOWDETNESTIMNLOLIM_ULS_F32.EngDT = dt.float32;
HOWDETNESTIMNLOLIM_ULS_F32.EngVal = 0;
HOWDETNESTIMNLOLIM_ULS_F32.Define = 'Local';


HOWDETNESTIMNTHD_ULS_F32 = DataDict.Constant;
HOWDETNESTIMNTHD_ULS_F32.LongName = 'Hands on Wheel Detection estimation Threshold';
HOWDETNESTIMNTHD_ULS_F32.Description = [...
  'HOW_Estimate value while the vehicle speed is below a tunablethreshold' ...
  ' (default 10 kph).'];
HOWDETNESTIMNTHD_ULS_F32.DocUnits = 'Uls';
HOWDETNESTIMNTHD_ULS_F32.EngDT = dt.float32;
HOWDETNESTIMNTHD_ULS_F32.EngVal = 0.5;
HOWDETNESTIMNTHD_ULS_F32.Define = 'Local';


HOWDETNSTHILIM_CNT_S08 = DataDict.Constant;
HOWDETNSTHILIM_CNT_S08.LongName = 'Hands on Wheel Detection State High Limit';
HOWDETNSTHILIM_CNT_S08.Description = [...
  'Hands on Wheel Detection State High Limit used to limit the output'];
HOWDETNSTHILIM_CNT_S08.DocUnits = 'Cnt';
HOWDETNSTHILIM_CNT_S08.EngDT = dt.s08;
HOWDETNSTHILIM_CNT_S08.EngVal = 3;
HOWDETNSTHILIM_CNT_S08.Define = 'Local';


HOWDETNSTLOLIM_CNT_S08 = DataDict.Constant;
HOWDETNSTLOLIM_CNT_S08.LongName = 'Hands on Wheel Detection State Low Limit';
HOWDETNSTLOLIM_CNT_S08.Description = [...
  'Hands on Wheel Detection State Low Limit used to limit the output'];
HOWDETNSTLOLIM_CNT_S08.DocUnits = 'Cnt';
HOWDETNSTLOLIM_CNT_S08.EngDT = dt.s08;
HOWDETNSTLOLIM_CNT_S08.EngVal = -3;
HOWDETNSTLOLIM_CNT_S08.Define = 'Local';


HOWSTY_CNT_S15P0 = DataDict.Constant;
HOWSTY_CNT_S15P0.LongName = 'STATEVALUES';
HOWSTY_CNT_S15P0.Description = [...
  'HOW State values: 3=High Confidence On, -3=High Confidence Off'];
HOWSTY_CNT_S15P0.DocUnits = 'Cnt';
HOWSTY_CNT_S15P0.EngDT = dt.s15p0;
HOWSTY_CNT_S15P0.EngVal =  ...
   [-3               -2               -1                0                1                2                3];
HOWSTY_CNT_S15P0.Define = 'Local';


HUNDREDMICROSECTOMILLISEC_ULS_F32 = DataDict.Constant;
HUNDREDMICROSECTOMILLISEC_ULS_F32.LongName = 'Hundred Micro Second to Milli Second';
HUNDREDMICROSECTOMILLISEC_ULS_F32.Description = [...
  'Conversion from 100 Micro sec to Milli second'];
HUNDREDMICROSECTOMILLISEC_ULS_F32.DocUnits = 'Uls';
HUNDREDMICROSECTOMILLISEC_ULS_F32.EngDT = dt.float32;
HUNDREDMICROSECTOMILLISEC_ULS_F32.EngVal = 0.1;
HUNDREDMICROSECTOMILLISEC_ULS_F32.Define = 'Local';


MILLISECTOSEC_ULS_F32 = DataDict.Constant;
MILLISECTOSEC_ULS_F32.LongName = 'Milli Second to Second';
MILLISECTOSEC_ULS_F32.Description = [...
  'Conversion from Milli second to second'];
MILLISECTOSEC_ULS_F32.DocUnits = 'Uls';
MILLISECTOSEC_ULS_F32.EngDT = dt.float32;
MILLISECTOSEC_ULS_F32.EngVal = 0.001;
MILLISECTOSEC_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
