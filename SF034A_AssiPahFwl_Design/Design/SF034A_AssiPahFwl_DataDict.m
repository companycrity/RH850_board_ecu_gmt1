%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Feb-2016 17:03:41       %
%                                  Created with tool release: 2.28.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: 10-Feb-2016            %
%                                  Derived by: Sneha Pegdal(KPIT)        %
%%-----------------------------------------------------------------------%

SF034A = DataDict.FDD;
SF034A.Version = '1.1.X';
SF034A.LongName = 'Assist Path Firewall';
SF034A.ShoName  = 'AssiPahFwl';
SF034A.DesignASIL = 'D';
SF034A.Description = [...
  'This function sums and bounds motor torque commands from system functi' ...
  'ons whose primary input is handwheel torqueAfter summation, output is ' ...
  'limited when the signals low-frequency content exceeds calibrated boun' ...
  'dariesIf undesired behavior persists, the signal-limiting strategy is ' ...
  'replaced with implementation of a simple default assist table lookup.S' ...
  'witching limiter to default table occurs via a debounce logic.  The fu' ...
  'nction also outputs a scale factor for the application of additional d' ...
  'amping.'];
SF034A.Dependencies = ...
	{'ArchGlbPrm', 'SysGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AssiPahFwlInit1 = DataDict.Runnable;
AssiPahFwlInit1.Context = 'Rte';
AssiPahFwlInit1.TimeStep = 0;

AssiPahFwlPer1 = DataDict.Runnable;
AssiPahFwlPer1.Context = 'Rte';
AssiPahFwlPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'AssiPahFwlPer1'};
GetNtcQlfrSts.Return = DataDict.CSReturn;
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
SetNtcSts.CallLocation = {'AssiPahFwlInit1','AssiPahFwlPer1'};
SetNtcSts.Return = DataDict.CSReturn;
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
AssiCmdBas = DataDict.IpSignal;
AssiCmdBas.LongName = 'Assist Command Base';
AssiCmdBas.DocUnits = 'MotNwtMtr';
AssiCmdBas.EngDT = dt.float32;
AssiCmdBas.EngInit = 0;
AssiCmdBas.EngMin = -8.8;
AssiCmdBas.EngMax = 8.8;
AssiCmdBas.ReadIn = {'AssiPahFwlPer1'};
AssiCmdBas.ReadType = 'Rte';


AssiHiFrqCmd = DataDict.IpSignal;
AssiHiFrqCmd.LongName = 'Assist High Frequency Command';
AssiHiFrqCmd.DocUnits = 'MotNwtMtr';
AssiHiFrqCmd.EngDT = dt.float32;
AssiHiFrqCmd.EngInit = 0;
AssiHiFrqCmd.EngMin = -8.8;
AssiHiFrqCmd.EngMax = 8.8;
AssiHiFrqCmd.ReadIn = {'AssiPahFwlPer1'};
AssiHiFrqCmd.ReadType = 'Rte';


AssiLnrGainEna = DataDict.IpSignal;
AssiLnrGainEna.LongName = 'Assist Linear Gain Enable';
AssiLnrGainEna.DocUnits = 'Cnt';
AssiLnrGainEna.EngDT = dt.lgc;
AssiLnrGainEna.EngInit = 0;
AssiLnrGainEna.EngMin = 0;
AssiLnrGainEna.EngMax = 1;
AssiLnrGainEna.ReadIn = {'AssiPahFwlPer1'};
AssiLnrGainEna.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'AssiPahFwlPer1'};
HwTq.ReadType = 'Rte';


HwTqOvrl = DataDict.IpSignal;
HwTqOvrl.LongName = 'Handwheel Torque Overlay';
HwTqOvrl.DocUnits = 'HwNwtMtr';
HwTqOvrl.EngDT = dt.float32;
HwTqOvrl.EngInit = 0;
HwTqOvrl.EngMin = -10;
HwTqOvrl.EngMax = 10;
HwTqOvrl.ReadIn = {'AssiPahFwlPer1'};
HwTqOvrl.ReadType = 'Rte';


HysCmpCmd = DataDict.IpSignal;
HysCmpCmd.LongName = 'Hysteresis Compensation Command';
HysCmpCmd.DocUnits = 'MotNwtMtr';
HysCmpCmd.EngDT = dt.float32;
HysCmpCmd.EngInit = 0;
HysCmpCmd.EngMin = -8.8;
HysCmpCmd.EngMax = 8.8;
HysCmpCmd.ReadIn = {'AssiPahFwlPer1'};
HysCmpCmd.ReadType = 'Rte';


MfgEnaSt = DataDict.IpSignal;
MfgEnaSt.LongName = 'Manufacturing Enable State';
MfgEnaSt.DocUnits = 'Cnt';
MfgEnaSt.EngDT = enum.MfgEnaSt1;
MfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MfgEnaSt.ReadIn = {'AssiPahFwlPer1'};
MfgEnaSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'AssiPahFwlPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiCmdSum = DataDict.OpSignal;
AssiCmdSum.LongName = 'Assist Command Sum';
AssiCmdSum.Description = 'Combined motor torque commands';
AssiCmdSum.DocUnits = 'MotNwtMtr';
AssiCmdSum.SwcShoName = 'AssiPahFwl';
AssiCmdSum.EngDT = dt.float32;
AssiCmdSum.EngInit = 0;
AssiCmdSum.EngMin = -8.8;
AssiCmdSum.EngMax = 8.8;
AssiCmdSum.TestTolerance = 0.0005;
AssiCmdSum.WrittenIn = {'AssiPahFwlPer1'};
AssiCmdSum.WriteType = 'Rte';


AssiPahLimrActv = DataDict.OpSignal;
AssiPahLimrActv.LongName = 'Assist Path Limiter Active';
AssiPahLimrActv.Description = [...
  'Assist Firewall Active indicates a firewall boundary has been exceeded' ...
  ' for the debounce time period'];
AssiPahLimrActv.DocUnits = 'Uls';
AssiPahLimrActv.SwcShoName = 'AssiPahFwl';
AssiPahLimrActv.EngDT = dt.float32;
AssiPahLimrActv.EngInit = 0;
AssiPahLimrActv.EngMin = 0;
AssiPahLimrActv.EngMax = 1;
AssiPahLimrActv.TestTolerance = 0.001;
AssiPahLimrActv.WrittenIn = {'AssiPahFwlPer1'};
AssiPahLimrActv.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
AssiPahFwlCmdSplitLpFilFrq = DataDict.Calibration;
AssiPahFwlCmdSplitLpFilFrq.LongName = 'Assist Firewall Command Split Lowpass Filter Frequency';
AssiPahFwlCmdSplitLpFilFrq.Description = [...
  'Low Pass Cutoff Frequency for pre-firewall boundary command path split' ...
  ''];
AssiPahFwlCmdSplitLpFilFrq.DocUnits = 'Hz';
AssiPahFwlCmdSplitLpFilFrq.EngDT = dt.float32;
AssiPahFwlCmdSplitLpFilFrq.EngVal = 50;
AssiPahFwlCmdSplitLpFilFrq.EngMin = 0.1;
AssiPahFwlCmdSplitLpFilFrq.EngMax = 100;
AssiPahFwlCmdSplitLpFilFrq.Cardinality = 'Cmn';
AssiPahFwlCmdSplitLpFilFrq.CustomerVisible = false;
AssiPahFwlCmdSplitLpFilFrq.Online = false;
AssiPahFwlCmdSplitLpFilFrq.Impact = 'H';
AssiPahFwlCmdSplitLpFilFrq.TuningOwner = 'Safety';
AssiPahFwlCmdSplitLpFilFrq.GraphLink = {''};
AssiPahFwlCmdSplitLpFilFrq.Monotony = 'None';
AssiPahFwlCmdSplitLpFilFrq.MaxGrad = 99.9;
AssiPahFwlCmdSplitLpFilFrq.PortName = 'AssiPahFwlCmdSplitLpFilFrq';


AssiPahFwlDftAssiX = DataDict.Calibration;
AssiPahFwlDftAssiX.LongName = 'Assist Firewall Default Assist X';
AssiPahFwlDftAssiX.Description = [...
  'Assist Firewall Default Assist Table X-axis'];
AssiPahFwlDftAssiX.DocUnits = 'HwNwtMtr';
AssiPahFwlDftAssiX.EngDT = dt.u8p8;
AssiPahFwlDftAssiX.EngVal =  ...
   [0            1.602            1.797            1.859            1.965            2.059             2.18            2.285            2.418            2.535            2.645            2.773            2.883            3.004            3.113            3.219                4            4.781              7.5               10];
AssiPahFwlDftAssiX.EngMin = 0;
AssiPahFwlDftAssiX.EngMax = 10;
AssiPahFwlDftAssiX.Cardinality = 'Inin';
AssiPahFwlDftAssiX.CustomerVisible = false;
AssiPahFwlDftAssiX.Online = false;
AssiPahFwlDftAssiX.Impact = 'H';
AssiPahFwlDftAssiX.TuningOwner = 'Safety';
AssiPahFwlDftAssiX.GraphLink = {''};
AssiPahFwlDftAssiX.Monotony = 'Strictly_Increasing';
AssiPahFwlDftAssiX.MaxGrad = 10;
AssiPahFwlDftAssiX.PortName = 'AssiPahFwlDftAssiX';


AssiPahFwlDftAssiY = DataDict.Calibration;
AssiPahFwlDftAssiY.LongName = 'Assist Firewall Default Assist Y';
AssiPahFwlDftAssiY.Description = [...
  'Assist Firewall Default Assist Table Y-axis'];
AssiPahFwlDftAssiY.DocUnits = 'MotNwtMtr';
AssiPahFwlDftAssiY.EngDT = dt.s4p11;
AssiPahFwlDftAssiY.EngVal =  ...
   [0                0                0                0            0.003             0.01            0.021            0.032            0.047            0.062            0.076            0.094            0.112            0.134            0.156            0.178            0.384            0.663            1.775              2.5];
AssiPahFwlDftAssiY.EngMin = -0.1;
AssiPahFwlDftAssiY.EngMax = 8.8;
AssiPahFwlDftAssiY.Cardinality = 'Inin';
AssiPahFwlDftAssiY.CustomerVisible = false;
AssiPahFwlDftAssiY.Online = false;
AssiPahFwlDftAssiY.Impact = 'H';
AssiPahFwlDftAssiY.TuningOwner = 'Safety';
AssiPahFwlDftAssiY.GraphLink = {''};
AssiPahFwlDftAssiY.Monotony = 'None';
AssiPahFwlDftAssiY.MaxGrad = 8.9;
AssiPahFwlDftAssiY.PortName = 'AssiPahFwlDftAssiY';


AssiPahFwlDiRcvr = DataDict.Calibration;
AssiPahFwlDiRcvr.LongName = 'Assist Firewall Disable Recover ';
AssiPahFwlDiRcvr.Description = [...
  'Flag to Disable Assist Firewall Recovery Feature back to Input Command' ...
  's'];
AssiPahFwlDiRcvr.DocUnits = 'Cnt';
AssiPahFwlDiRcvr.EngDT = dt.lgc;
AssiPahFwlDiRcvr.EngVal = 0;
AssiPahFwlDiRcvr.EngMin = 0;
AssiPahFwlDiRcvr.EngMax = 1;
AssiPahFwlDiRcvr.Cardinality = 'Cmn';
AssiPahFwlDiRcvr.CustomerVisible = false;
AssiPahFwlDiRcvr.Online = false;
AssiPahFwlDiRcvr.Impact = 'H';
AssiPahFwlDiRcvr.TuningOwner = 'Safety';
AssiPahFwlDiRcvr.GraphLink = {''};
AssiPahFwlDiRcvr.Monotony = 'None';
AssiPahFwlDiRcvr.MaxGrad = 1;
AssiPahFwlDiRcvr.PortName = 'AssiPahFwlDiRcvr';


AssiPahFwlFwlActvLpFilFrq = DataDict.Calibration;
AssiPahFwlFwlActvLpFilFrq.LongName = 'Assist Firewall Firewall Active Lowpass Filter Frequency';
AssiPahFwlFwlActvLpFilFrq.Description = [...
  'Low Pass Cutoff Frequency for Asst Firewall Active Output'];
AssiPahFwlFwlActvLpFilFrq.DocUnits = 'Hz';
AssiPahFwlFwlActvLpFilFrq.EngDT = dt.float32;
AssiPahFwlFwlActvLpFilFrq.EngVal = 0.1;
AssiPahFwlFwlActvLpFilFrq.EngMin = 0.1;
AssiPahFwlFwlActvLpFilFrq.EngMax = 100;
AssiPahFwlFwlActvLpFilFrq.Cardinality = 'Cmn';
AssiPahFwlFwlActvLpFilFrq.CustomerVisible = false;
AssiPahFwlFwlActvLpFilFrq.Online = false;
AssiPahFwlFwlActvLpFilFrq.Impact = 'H';
AssiPahFwlFwlActvLpFilFrq.TuningOwner = 'Safety';
AssiPahFwlFwlActvLpFilFrq.GraphLink = {''};
AssiPahFwlFwlActvLpFilFrq.Monotony = 'None';
AssiPahFwlFwlActvLpFilFrq.MaxGrad = 99.9;
AssiPahFwlFwlActvLpFilFrq.PortName = 'AssiPahFwlFwlActvLpFilFrq';


AssiPahFwlHiFrqUpprLimY = DataDict.Calibration;
AssiPahFwlHiFrqUpprLimY.LongName = 'Assist Firewall High Frequency Upper Limit Y';
AssiPahFwlHiFrqUpprLimY.Description = [...
  'Upper boundary Y-axis.  Vehicle speed dependent.  Tuning occurs in qua' ...
  'drants 1 & 2 of driver torque(X) vs motor torque(Y).'];
AssiPahFwlHiFrqUpprLimY.DocUnits = 'MotNwtMtr';
AssiPahFwlHiFrqUpprLimY.EngDT = dt.s4p11;
AssiPahFwlHiFrqUpprLimY.EngVal =  ...
   [8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8];
AssiPahFwlHiFrqUpprLimY.EngMin = -8.8;
AssiPahFwlHiFrqUpprLimY.EngMax = 8.8;
AssiPahFwlHiFrqUpprLimY.Cardinality = 'Inin';
AssiPahFwlHiFrqUpprLimY.CustomerVisible = true;
AssiPahFwlHiFrqUpprLimY.Online = false;
AssiPahFwlHiFrqUpprLimY.Impact = 'H';
AssiPahFwlHiFrqUpprLimY.TuningOwner = 'Safety';
AssiPahFwlHiFrqUpprLimY.GraphLink = {''};
AssiPahFwlHiFrqUpprLimY.Monotony = 'None';
AssiPahFwlHiFrqUpprLimY.MaxGrad = 17.6;
AssiPahFwlHiFrqUpprLimY.PortName = 'AssiPahFwlHiFrqUpprLimY';


AssiPahFwlHysCmpLim = DataDict.Calibration;
AssiPahFwlHysCmpLim.LongName = 'Hysteresis Compensation Limit';
AssiPahFwlHysCmpLim.Description = [...
  'Safety-driven saturation limit applied to Hysteresis Compensation inpu' ...
  't.  Tunable to support safety case of various vehicle programs.'];
AssiPahFwlHysCmpLim.DocUnits = 'MotNwtMtr';
AssiPahFwlHysCmpLim.EngDT = dt.float32;
AssiPahFwlHysCmpLim.EngVal = 0.15;
AssiPahFwlHysCmpLim.EngMin = 0;
AssiPahFwlHysCmpLim.EngMax = 8.8;
AssiPahFwlHysCmpLim.Cardinality = 'Inin';
AssiPahFwlHysCmpLim.CustomerVisible = false;
AssiPahFwlHysCmpLim.Online = false;
AssiPahFwlHysCmpLim.Impact = 'H';
AssiPahFwlHysCmpLim.TuningOwner = 'Safety';
AssiPahFwlHysCmpLim.GraphLink = {''};
AssiPahFwlHysCmpLim.Monotony = 'None';
AssiPahFwlHysCmpLim.MaxGrad = 8.8;
AssiPahFwlHysCmpLim.PortName = 'AssiPahFwlHysCmpLim';


AssiPahFwlRestoreThd = DataDict.Calibration;
AssiPahFwlRestoreThd.LongName = 'Assist Firewall Restore Threshold';
AssiPahFwlRestoreThd.Description = [...
  'Allowable difference in torque command when function reverts fromdefau' ...
  'lt assist table to normal operation.'];
AssiPahFwlRestoreThd.DocUnits = 'MotNwtMtr';
AssiPahFwlRestoreThd.EngDT = dt.float32;
AssiPahFwlRestoreThd.EngVal = 0.01;
AssiPahFwlRestoreThd.EngMin = 0;
AssiPahFwlRestoreThd.EngMax = 8.8;
AssiPahFwlRestoreThd.Cardinality = 'Inin';
AssiPahFwlRestoreThd.CustomerVisible = false;
AssiPahFwlRestoreThd.Online = false;
AssiPahFwlRestoreThd.Impact = 'H';
AssiPahFwlRestoreThd.TuningOwner = 'Safety';
AssiPahFwlRestoreThd.GraphLink = {''};
AssiPahFwlRestoreThd.Monotony = 'None';
AssiPahFwlRestoreThd.MaxGrad = 8.8;
AssiPahFwlRestoreThd.PortName = 'AssiPahFwlRestoreThd';


AssiPahFwlUpprLimX = DataDict.Calibration;
AssiPahFwlUpprLimX.LongName = 'Assist Firewall Upper Limit X';
AssiPahFwlUpprLimX.Description = [...
  'Upper boundary X-axis.  Vehicle speed dependent.  Tuning occurs in qua' ...
  'drants 1 & 2 of driver torque(X) vs motor torque(Y).'];
AssiPahFwlUpprLimX.DocUnits = 'HwNwtMtr';
AssiPahFwlUpprLimX.EngDT = dt.s4p11;
AssiPahFwlUpprLimX.EngVal =  ...
   [-10              -10              -10              -10              -10              -10              -10              -10              -10              -10              -10              -10
    -7.5             -7.5             -7.5             -7.5             -7.5             -7.5             -7.5             -7.5             -7.5             -7.5             -7.5             -7.5
    -3               -3               -3               -3               -3               -3               -3               -3               -3               -3               -3               -3
    -2               -2               -2               -2               -2               -2               -2               -2               -2               -2               -2               -2
    -1               -1               -1               -1             -0.3             -0.3            -0.18            -0.18            -0.18            -0.18            -0.18            -0.18
    0                0                0                0                0                0                0                0                0                0                0                0
    1                1                1                1                1                1                1                1                1                1                1                1
    2                2                2                2                2                2                2                2                2                2                2                2
    3                3                3                3                3                3                3                3                3                3                3                3
    7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5
    10               10               10               10               10               10               10               10               10               10               10               10];
AssiPahFwlUpprLimX.EngMin = -10;
AssiPahFwlUpprLimX.EngMax = 10;
AssiPahFwlUpprLimX.Cardinality = 'Inin';
AssiPahFwlUpprLimX.CustomerVisible = true;
AssiPahFwlUpprLimX.Online = false;
AssiPahFwlUpprLimX.Impact = 'H';
AssiPahFwlUpprLimX.TuningOwner = 'Safety';
AssiPahFwlUpprLimX.GraphLink = {''};
AssiPahFwlUpprLimX.Monotony = 'Strictly_Increasing';
AssiPahFwlUpprLimX.MaxGrad = 20;
AssiPahFwlUpprLimX.PortName = 'AssiPahFwlUpprLimX';


AssiPahFwlUpprLimY = DataDict.Calibration;
AssiPahFwlUpprLimY.LongName = 'Assist Firewall Upper Limit Y';
AssiPahFwlUpprLimY.Description = [...
  'Upper boundary Y-axis.  Vehicle speed dependent.  Tuning occurs in qua' ...
  'drants 1 & 2 of driver torque(X) vs motor torque(Y).'];
AssiPahFwlUpprLimY.DocUnits = 'MotNwtMtr';
AssiPahFwlUpprLimY.EngDT = dt.s4p11;
AssiPahFwlUpprLimY.EngVal =  ...
   [8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8];
AssiPahFwlUpprLimY.EngMin = -8.8;
AssiPahFwlUpprLimY.EngMax = 8.8;
AssiPahFwlUpprLimY.Cardinality = 'Inin';
AssiPahFwlUpprLimY.CustomerVisible = true;
AssiPahFwlUpprLimY.Online = false;
AssiPahFwlUpprLimY.Impact = 'H';
AssiPahFwlUpprLimY.TuningOwner = 'Safety';
AssiPahFwlUpprLimY.GraphLink = {''};
AssiPahFwlUpprLimY.Monotony = 'None';
AssiPahFwlUpprLimY.MaxGrad = 17.6;
AssiPahFwlUpprLimY.PortName = 'AssiPahFwlUpprLimY';


AssiPahFwlVehSpd = DataDict.Calibration;
AssiPahFwlVehSpd.LongName = 'Assist Firewall Vehicle Speed';
AssiPahFwlVehSpd.Description = [...
  'Assist Firewall Vehicle Speed Table for Boundary Lookup'];
AssiPahFwlVehSpd.DocUnits = 'Kph';
AssiPahFwlVehSpd.EngDT = dt.u9p7;
AssiPahFwlVehSpd.EngVal =  ...
   [0                2               10               25               50               75              100              150              200              249              250              251];
AssiPahFwlVehSpd.EngMin = 0;
AssiPahFwlVehSpd.EngMax = 511;
AssiPahFwlVehSpd.Cardinality = 'Cmn';
AssiPahFwlVehSpd.CustomerVisible = false;
AssiPahFwlVehSpd.Online = false;
AssiPahFwlVehSpd.Impact = 'H';
AssiPahFwlVehSpd.TuningOwner = 'Safety';
AssiPahFwlVehSpd.GraphLink = {''};
AssiPahFwlVehSpd.Monotony = 'Strictly_Increasing';
AssiPahFwlVehSpd.MaxGrad = 511;
AssiPahFwlVehSpd.PortName = 'AssiPahFwlVehSpd';


BasAssiPahFwlOverLimDiagcFailStep = DataDict.Calibration;
BasAssiPahFwlOverLimDiagcFailStep.LongName = 'Base Assist Firewall Over Limit Diagnostic Fail Step';
BasAssiPahFwlOverLimDiagcFailStep.Description = [...
  'Diagnosis Fail Step when Base Assist Command input crosses boundary li' ...
  'mits. Default value of 1311 equates to 50 ms in fail direction'];
BasAssiPahFwlOverLimDiagcFailStep.DocUnits = 'Cnt';
BasAssiPahFwlOverLimDiagcFailStep.EngDT = dt.u16;
BasAssiPahFwlOverLimDiagcFailStep.EngVal = 1311;
BasAssiPahFwlOverLimDiagcFailStep.EngMin = 0;
BasAssiPahFwlOverLimDiagcFailStep.EngMax = 65535;
BasAssiPahFwlOverLimDiagcFailStep.Cardinality = 'Cmn';
BasAssiPahFwlOverLimDiagcFailStep.CustomerVisible = false;
BasAssiPahFwlOverLimDiagcFailStep.Online = false;
BasAssiPahFwlOverLimDiagcFailStep.Impact = 'H';
BasAssiPahFwlOverLimDiagcFailStep.TuningOwner = 'Safety';
BasAssiPahFwlOverLimDiagcFailStep.GraphLink = {''};
BasAssiPahFwlOverLimDiagcFailStep.Monotony = 'None';
BasAssiPahFwlOverLimDiagcFailStep.MaxGrad = 65535;
BasAssiPahFwlOverLimDiagcFailStep.PortName = 'BasAssiPahFwlOverLimDiagcFailStep';


BasAssiPahFwlOverLimDiagcPassStep = DataDict.Calibration;
BasAssiPahFwlOverLimDiagcPassStep.LongName = 'Base Assist Firewall Over Limit Diagnostic Pass Step';
BasAssiPahFwlOverLimDiagcPassStep.Description = [...
  'Diagnosis Pass Step when Base Assist Command input crosses boundary li' ...
  'mits.Default value of 1311 equates to 100 ms in pass direction'];
BasAssiPahFwlOverLimDiagcPassStep.DocUnits = 'Cnt';
BasAssiPahFwlOverLimDiagcPassStep.EngDT = dt.u16;
BasAssiPahFwlOverLimDiagcPassStep.EngVal = 1311;
BasAssiPahFwlOverLimDiagcPassStep.EngMin = 0;
BasAssiPahFwlOverLimDiagcPassStep.EngMax = 65535;
BasAssiPahFwlOverLimDiagcPassStep.Cardinality = 'Cmn';
BasAssiPahFwlOverLimDiagcPassStep.CustomerVisible = false;
BasAssiPahFwlOverLimDiagcPassStep.Online = false;
BasAssiPahFwlOverLimDiagcPassStep.Impact = 'H';
BasAssiPahFwlOverLimDiagcPassStep.TuningOwner = 'Safety';
BasAssiPahFwlOverLimDiagcPassStep.GraphLink = {''};
BasAssiPahFwlOverLimDiagcPassStep.Monotony = 'None';
BasAssiPahFwlOverLimDiagcPassStep.MaxGrad = 65535;
BasAssiPahFwlOverLimDiagcPassStep.PortName = 'BasAssiPahFwlOverLimDiagcPassStep';


HiFrqAssiPahFwlOverLimDiagcFailStep = DataDict.Calibration;
HiFrqAssiPahFwlOverLimDiagcFailStep.LongName = 'High Frequency Assist Firewall Over Limit Diagnostic Fail Step';
HiFrqAssiPahFwlOverLimDiagcFailStep.Description = [...
  'Diagnosis Fail Step when High Frequency Assist Command input crosses b' ...
  'oundary limits. Default value of 1311 equates to 50 ms in fail directi' ...
  'on'];
HiFrqAssiPahFwlOverLimDiagcFailStep.DocUnits = 'Cnt';
HiFrqAssiPahFwlOverLimDiagcFailStep.EngDT = dt.u16;
HiFrqAssiPahFwlOverLimDiagcFailStep.EngVal = 1311;
HiFrqAssiPahFwlOverLimDiagcFailStep.EngMin = 0;
HiFrqAssiPahFwlOverLimDiagcFailStep.EngMax = 65535;
HiFrqAssiPahFwlOverLimDiagcFailStep.Cardinality = 'Cmn';
HiFrqAssiPahFwlOverLimDiagcFailStep.CustomerVisible = false;
HiFrqAssiPahFwlOverLimDiagcFailStep.Online = false;
HiFrqAssiPahFwlOverLimDiagcFailStep.Impact = 'H';
HiFrqAssiPahFwlOverLimDiagcFailStep.TuningOwner = 'Safety';
HiFrqAssiPahFwlOverLimDiagcFailStep.GraphLink = {''};
HiFrqAssiPahFwlOverLimDiagcFailStep.Monotony = 'None';
HiFrqAssiPahFwlOverLimDiagcFailStep.MaxGrad = 65535;
HiFrqAssiPahFwlOverLimDiagcFailStep.PortName = 'HiFrqAssiPahFwlOverLimDiagcFailStep';


HiFrqAssiPahFwlOverLimDiagcPassStep = DataDict.Calibration;
HiFrqAssiPahFwlOverLimDiagcPassStep.LongName = 'High Frequency Assist Firewall Over Limit Diagnostic Pass Step';
HiFrqAssiPahFwlOverLimDiagcPassStep.Description = [...
  'Diagnosis Pass Step when High Frequency Assist Command input crosses b' ...
  'oundary limits.Default value of 1311 equates to 100 ms in pass directi' ...
  'on'];
HiFrqAssiPahFwlOverLimDiagcPassStep.DocUnits = 'Cnt';
HiFrqAssiPahFwlOverLimDiagcPassStep.EngDT = dt.u16;
HiFrqAssiPahFwlOverLimDiagcPassStep.EngVal = 1311;
HiFrqAssiPahFwlOverLimDiagcPassStep.EngMin = 0;
HiFrqAssiPahFwlOverLimDiagcPassStep.EngMax = 65535;
HiFrqAssiPahFwlOverLimDiagcPassStep.Cardinality = 'Cmn';
HiFrqAssiPahFwlOverLimDiagcPassStep.CustomerVisible = false;
HiFrqAssiPahFwlOverLimDiagcPassStep.Online = false;
HiFrqAssiPahFwlOverLimDiagcPassStep.Impact = 'H';
HiFrqAssiPahFwlOverLimDiagcPassStep.TuningOwner = 'Safety';
HiFrqAssiPahFwlOverLimDiagcPassStep.GraphLink = {''};
HiFrqAssiPahFwlOverLimDiagcPassStep.Monotony = 'None';
HiFrqAssiPahFwlOverLimDiagcPassStep.MaxGrad = 65535;
HiFrqAssiPahFwlOverLimDiagcPassStep.PortName = 'HiFrqAssiPahFwlOverLimDiagcPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dAssiPahFwlActvRaw = DataDict.Display;
dAssiPahFwlActvRaw.LongName = 'Assist Firewall Active Raw';
dAssiPahFwlActvRaw.Description = [...
  'Display variable for the Assist FW Active before LP Filtering'];
dAssiPahFwlActvRaw.DocUnits = 'Uls';
dAssiPahFwlActvRaw.EngDT = dt.float32;
dAssiPahFwlActvRaw.EngMin = 0;
dAssiPahFwlActvRaw.EngMax = 1;
dAssiPahFwlActvRaw.InitRowCol = [1  1];


dAssiPahFwlBasAssiCmdOverLim = DataDict.Display;
dAssiPahFwlBasAssiCmdOverLim.LongName = 'Assist Firewall Base Assist Command Over Limit';
dAssiPahFwlBasAssiCmdOverLim.Description = [...
  'Display variable for the BaseAssist Command Over Boundary Flag'];
dAssiPahFwlBasAssiCmdOverLim.DocUnits = 'Cnt';
dAssiPahFwlBasAssiCmdOverLim.EngDT = dt.lgc;
dAssiPahFwlBasAssiCmdOverLim.EngMin = 0;
dAssiPahFwlBasAssiCmdOverLim.EngMax = 1;
dAssiPahFwlBasAssiCmdOverLim.InitRowCol = [1  1];


dAssiPahFwlBasAssiLimd = DataDict.Display;
dAssiPahFwlBasAssiLimd.LongName = 'Assist Firewall Base Assist Limited';
dAssiPahFwlBasAssiLimd.Description = [...
  'Display variable for the Base Assist Cmd after firewall boundary appli' ...
  'ed'];
dAssiPahFwlBasAssiLimd.DocUnits = 'MotNwtMtr';
dAssiPahFwlBasAssiLimd.EngDT = dt.float32;
dAssiPahFwlBasAssiLimd.EngMin = -16;
dAssiPahFwlBasAssiLimd.EngMax = 16;
dAssiPahFwlBasAssiLimd.InitRowCol = [1  1];


dAssiPahFwlBasAssiLowrLim = DataDict.Display;
dAssiPahFwlBasAssiLowrLim.LongName = 'Assist Firewall Base Assist Lower Limit';
dAssiPahFwlBasAssiLowrLim.Description = [...
  'Display variable for the Base Assist Lower Boundary'];
dAssiPahFwlBasAssiLowrLim.DocUnits = 'MotNwtMtr';
dAssiPahFwlBasAssiLowrLim.EngDT = dt.float32;
dAssiPahFwlBasAssiLowrLim.EngMin = -16;
dAssiPahFwlBasAssiLowrLim.EngMax = 16;
dAssiPahFwlBasAssiLowrLim.InitRowCol = [1  1];


dAssiPahFwlBasAssiUpprLim = DataDict.Display;
dAssiPahFwlBasAssiUpprLim.LongName = 'Assist Firewall Base Assist Upper Limit';
dAssiPahFwlBasAssiUpprLim.Description = [...
  'Display variable for the Base Assist Upper Boundary'];
dAssiPahFwlBasAssiUpprLim.DocUnits = 'MotNwtMtr';
dAssiPahFwlBasAssiUpprLim.EngDT = dt.float32;
dAssiPahFwlBasAssiUpprLim.EngMin = -16;
dAssiPahFwlBasAssiUpprLim.EngMax = 16;
dAssiPahFwlBasAssiUpprLim.InitRowCol = [1  1];


dAssiPahFwlHiFrqAssiLowrLimFild = DataDict.Display;
dAssiPahFwlHiFrqAssiLowrLimFild.LongName = 'Assist Firewall High Frequency Assist Lower Limit Filtered';
dAssiPahFwlHiFrqAssiLowrLimFild.Description = [...
  'Display variable for the High Freq Command Filtered Lower Boundary'];
dAssiPahFwlHiFrqAssiLowrLimFild.DocUnits = 'MotNwtMtr';
dAssiPahFwlHiFrqAssiLowrLimFild.EngDT = dt.float32;
dAssiPahFwlHiFrqAssiLowrLimFild.EngMin = -16;
dAssiPahFwlHiFrqAssiLowrLimFild.EngMax = 16;
dAssiPahFwlHiFrqAssiLowrLimFild.InitRowCol = [1  1];


dAssiPahFwlHiFrqAssiUpprLimFild = DataDict.Display;
dAssiPahFwlHiFrqAssiUpprLimFild.LongName = 'Assist Firewall High Frequency Assist Upper Limit Filtered';
dAssiPahFwlHiFrqAssiUpprLimFild.Description = [...
  'Display variable for the High Freq Cmd Filtered Upper Boundary'];
dAssiPahFwlHiFrqAssiUpprLimFild.DocUnits = 'MotNwtMtr';
dAssiPahFwlHiFrqAssiUpprLimFild.EngDT = dt.float32;
dAssiPahFwlHiFrqAssiUpprLimFild.EngMin = -16;
dAssiPahFwlHiFrqAssiUpprLimFild.EngMax = 16;
dAssiPahFwlHiFrqAssiUpprLimFild.InitRowCol = [1  1];


dAssiPahFwlHiFrqCmdHpPah = DataDict.Display;
dAssiPahFwlHiFrqCmdHpPah.LongName = 'Assist Firewall High Frequency Command Highpass Path';
dAssiPahFwlHiFrqCmdHpPah.Description = [...
  'Display variable for the Assist FW High Pass Filtered HighFreq Cmd'];
dAssiPahFwlHiFrqCmdHpPah.DocUnits = 'MotNwtMtr';
dAssiPahFwlHiFrqCmdHpPah.EngDT = dt.float32;
dAssiPahFwlHiFrqCmdHpPah.EngMin = -16;
dAssiPahFwlHiFrqCmdHpPah.EngMax = 16;
dAssiPahFwlHiFrqCmdHpPah.InitRowCol = [1  1];


dAssiPahFwlHiFrqCmdLpPah = DataDict.Display;
dAssiPahFwlHiFrqCmdLpPah.LongName = 'Assist Firewall High Frequency Command Lowpass Path';
dAssiPahFwlHiFrqCmdLpPah.Description = [...
  'Display variable for the Assist FW Low Pass Filtered HighFreq Cmd'];
dAssiPahFwlHiFrqCmdLpPah.DocUnits = 'MotNwtMtr';
dAssiPahFwlHiFrqCmdLpPah.EngDT = dt.float32;
dAssiPahFwlHiFrqCmdLpPah.EngMin = -16;
dAssiPahFwlHiFrqCmdLpPah.EngMax = 16;
dAssiPahFwlHiFrqCmdLpPah.InitRowCol = [1  1];


dAssiPahFwlHiFrqCmdOverLim = DataDict.Display;
dAssiPahFwlHiFrqCmdOverLim.LongName = 'Assist Firewall High Frequency Command Over Limit';
dAssiPahFwlHiFrqCmdOverLim.Description = [...
  'Display variable for the HighFreq Cmd Over Boundary Flag'];
dAssiPahFwlHiFrqCmdOverLim.DocUnits = 'Cnt';
dAssiPahFwlHiFrqCmdOverLim.EngDT = dt.lgc;
dAssiPahFwlHiFrqCmdOverLim.EngMin = 0;
dAssiPahFwlHiFrqCmdOverLim.EngMax = 1;
dAssiPahFwlHiFrqCmdOverLim.InitRowCol = [1  1];


dAssiPahFwlHiFrqLpLimd = DataDict.Display;
dAssiPahFwlHiFrqLpLimd.LongName = 'Assist Firewall High Frequncy Lowpass Limited';
dAssiPahFwlHiFrqLpLimd.Description = [...
  'Display variable for the Low Pass Filtered High Frequency Cmd after bo' ...
  'undary applied'];
dAssiPahFwlHiFrqLpLimd.DocUnits = 'MotNwtMtr';
dAssiPahFwlHiFrqLpLimd.EngDT = dt.float32;
dAssiPahFwlHiFrqLpLimd.EngMin = -16;
dAssiPahFwlHiFrqLpLimd.EngMax = 16;
dAssiPahFwlHiFrqLpLimd.InitRowCol = [1  1];


dAssiPahFwlSumInp = DataDict.Display;
dAssiPahFwlSumInp.LongName = 'Assist Firewall Sum Input';
dAssiPahFwlSumInp.Description = [...
  'Display variable for the Assist Summation of HiFreqAsst and HysComp'];
dAssiPahFwlSumInp.DocUnits = 'MotNwtMtr';
dAssiPahFwlSumInp.EngDT = dt.float32;
dAssiPahFwlSumInp.EngMin = -18;
dAssiPahFwlSumInp.EngMax = 18;
dAssiPahFwlSumInp.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AssiPrfmncPrev = DataDict.PIM;
AssiPrfmncPrev.LongName = 'Assist Performance Previous';
AssiPrfmncPrev.Description = [...
  'Previous value of Assist Reduced Performance output'];
AssiPrfmncPrev.DocUnits = 'MotNwtMtr';
AssiPrfmncPrev.EngDT = dt.lgc;
AssiPrfmncPrev.EngMin = 0;
AssiPrfmncPrev.EngMax = 1;
AssiPrfmncPrev.InitRowCol = [1  1];


CombdAssiPrev = DataDict.PIM;
CombdAssiPrev.LongName = 'Combined Assist Previous';
CombdAssiPrev.Description = [...
  'Previous value of Combined Assist output'];
CombdAssiPrev.DocUnits = 'MotNwtMtr';
CombdAssiPrev.EngDT = dt.float32;
CombdAssiPrev.EngMin = -8.8;
CombdAssiPrev.EngMax = 8.8;
CombdAssiPrev.InitRowCol = [1  1];


FwlActvLpFilStVari = DataDict.PIM;
FwlActvLpFilStVari.LongName = 'Assist Firewall Firewall Active Lowpass Filter State Variable';
FwlActvLpFilStVari.Description = [...
  'State Variable for Assist Firewall Active Lowpass Filter'];
FwlActvLpFilStVari.DocUnits = 'Uls';
FwlActvLpFilStVari.EngDT = struct.FilLpRec1;
FwlActvLpFilStVari.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
FwlActvLpFilStVari.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
FwlActvLpFilStVari.InitRowCol = [1  1];


HiFrqCmdLpFilStVari = DataDict.PIM;
HiFrqCmdLpFilStVari.LongName = 'Assist Firewall High Frequency Command Lowpass Filter State Variable';
HiFrqCmdLpFilStVari.Description = [...
  'State Variable for High Frequency Lowpass Filter'];
HiFrqCmdLpFilStVari.DocUnits = 'Uls';
HiFrqCmdLpFilStVari.EngDT = struct.FilLpRec1;
HiFrqCmdLpFilStVari.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HiFrqCmdLpFilStVari.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HiFrqCmdLpFilStVari.InitRowCol = [1  1];


LowrLimLpFilStVari = DataDict.PIM;
LowrLimLpFilStVari.LongName = 'Assist Firewall Lower Limit Lowpass Filter State Variable';
LowrLimLpFilStVari.Description = [...
  'State Variable for Lower Limit of Dynamic Assist Commands Lowpass Filt' ...
  'er'];
LowrLimLpFilStVari.DocUnits = 'Uls';
LowrLimLpFilStVari.EngDT = struct.FilLpRec1;
LowrLimLpFilStVari.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
LowrLimLpFilStVari.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
LowrLimLpFilStVari.InitRowCol = [1  1];


UpprLimLpFilStVari = DataDict.PIM;
UpprLimLpFilStVari.LongName = 'Assist Firewall Upper Limit Lowpass Filter State Variable';
UpprLimLpFilStVari.Description = [...
  'State Variable for Upper Limit of Dynamic Assist Commands Lowpass Filt' ...
  'er'];
UpprLimLpFilStVari.DocUnits = 'Uls';
UpprLimLpFilStVari.EngDT = struct.FilLpRec1;
UpprLimLpFilStVari.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
UpprLimLpFilStVari.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
UpprLimLpFilStVari.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = [...
  '2 Milliseconds periodic loop time step'];
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ASSIPAHLIMRACTVHILIM_ULS_F32 = DataDict.Constant;
ASSIPAHLIMRACTVHILIM_ULS_F32.LongName = 'Assist Path Limiter Active High Limit ';
ASSIPAHLIMRACTVHILIM_ULS_F32.Description = [...
  'Limit on high value of Assist Path Limiter Active'];
ASSIPAHLIMRACTVHILIM_ULS_F32.DocUnits = 'Uls';
ASSIPAHLIMRACTVHILIM_ULS_F32.EngDT = dt.float32;
ASSIPAHLIMRACTVHILIM_ULS_F32.EngVal = 1;
ASSIPAHLIMRACTVHILIM_ULS_F32.Header = '';
ASSIPAHLIMRACTVHILIM_ULS_F32.Define = 'Local';


ASSIPAHLIMRACTVLOLIM_ULS_F32 = DataDict.Constant;
ASSIPAHLIMRACTVLOLIM_ULS_F32.LongName = 'Assist Path Limiter Active Low Limit ';
ASSIPAHLIMRACTVLOLIM_ULS_F32.Description = [...
  'Limit on lower value of Assist Path Limiter Active'];
ASSIPAHLIMRACTVLOLIM_ULS_F32.DocUnits = 'Uls';
ASSIPAHLIMRACTVLOLIM_ULS_F32.EngDT = dt.float32;
ASSIPAHLIMRACTVLOLIM_ULS_F32.EngVal = 0;
ASSIPAHLIMRACTVLOLIM_ULS_F32.Header = '';
ASSIPAHLIMRACTVLOLIM_ULS_F32.Define = 'Local';


BASASSIREACHED_CNT_U08 = DataDict.Constant;
BASASSIREACHED_CNT_U08.LongName = 'Base Assist Reached';
BASASSIREACHED_CNT_U08.Description = [...
  'Bit Location of Base Assist Reached'];
BASASSIREACHED_CNT_U08.DocUnits = 'Cnt';
BASASSIREACHED_CNT_U08.EngDT = dt.u08;
BASASSIREACHED_CNT_U08.EngVal = 2;
BASASSIREACHED_CNT_U08.Header = 'None';
BASASSIREACHED_CNT_U08.Define = 'Local';


HIFRQASSIREACHED_CNT_U08 = DataDict.Constant;
HIFRQASSIREACHED_CNT_U08.LongName = 'High Frequency Assist Reached';
HIFRQASSIREACHED_CNT_U08.Description = [...
  'Bit Location of High Frequency Assist Reached'];
HIFRQASSIREACHED_CNT_U08.DocUnits = 'Cnt';
HIFRQASSIREACHED_CNT_U08.EngDT = dt.u08;
HIFRQASSIREACHED_CNT_U08.EngVal = 1;
HIFRQASSIREACHED_CNT_U08.Header = 'None';
HIFRQASSIREACHED_CNT_U08.Define = 'Local';


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
AssiFwlFlt = DataDict.NTC;
AssiFwlFlt.NtcNr = NtcNr1.NTCNR_0X0C9;
AssiFwlFlt.NtcTyp = 'None';
AssiFwlFlt.LongName = 'Assist Firewall Fault';
AssiFwlFlt.Description = 'NTC to be invoked if assist reaches boundary limits';
AssiFwlFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
AssiFwlFlt.NtcStInfo.Bit0Descr = 'High Frequency Assist Reached';
AssiFwlFlt.NtcStInfo.Bit1Descr = 'Base Assist Reached';
AssiFwlFlt.NtcStInfo.Bit2Descr = 'Unused';
AssiFwlFlt.NtcStInfo.Bit3Descr = 'Unused';
AssiFwlFlt.NtcStInfo.Bit4Descr = 'Unused';
AssiFwlFlt.NtcStInfo.Bit5Descr = 'Unused';
AssiFwlFlt.NtcStInfo.Bit6Descr = 'Unused';
AssiFwlFlt.NtcStInfo.Bit7Descr = 'Unused';


BasAssiPahFwlFlt = DataDict.NTC;
BasAssiPahFwlFlt.NtcNr = NtcNr1.NTCNR_0X0D3;
BasAssiPahFwlFlt.NtcTyp = 'Deb';
BasAssiPahFwlFlt.LongName = 'Base Assist Firewall Fault';
BasAssiPahFwlFlt.Description = 'NTC to be invoked if Base Assist Command input reaches boundary limits ';
BasAssiPahFwlFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
BasAssiPahFwlFlt.NtcStInfo.Bit0Descr = 'Unused';
BasAssiPahFwlFlt.NtcStInfo.Bit1Descr = 'Unused';
BasAssiPahFwlFlt.NtcStInfo.Bit2Descr = 'Unused';
BasAssiPahFwlFlt.NtcStInfo.Bit3Descr = 'Unused';
BasAssiPahFwlFlt.NtcStInfo.Bit4Descr = 'Unused';
BasAssiPahFwlFlt.NtcStInfo.Bit5Descr = 'Unused';
BasAssiPahFwlFlt.NtcStInfo.Bit6Descr = 'Unused';
BasAssiPahFwlFlt.NtcStInfo.Bit7Descr = 'Unused';


HiFrqAssiPahFwlFlt = DataDict.NTC;
HiFrqAssiPahFwlFlt.NtcNr = NtcNr1.NTCNR_0X0D2;
HiFrqAssiPahFwlFlt.NtcTyp = 'Deb';
HiFrqAssiPahFwlFlt.LongName = 'High Frequency Assist Firewall Fault';
HiFrqAssiPahFwlFlt.Description = 'NTC to be invoked if low frequency input reaches boundary limits';
HiFrqAssiPahFwlFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HiFrqAssiPahFwlFlt.NtcStInfo.Bit0Descr = 'Unused';
HiFrqAssiPahFwlFlt.NtcStInfo.Bit1Descr = 'Unused';
HiFrqAssiPahFwlFlt.NtcStInfo.Bit2Descr = 'Unused';
HiFrqAssiPahFwlFlt.NtcStInfo.Bit3Descr = 'Unused';
HiFrqAssiPahFwlFlt.NtcStInfo.Bit4Descr = 'Unused';
HiFrqAssiPahFwlFlt.NtcStInfo.Bit5Descr = 'Unused';
HiFrqAssiPahFwlFlt.NtcStInfo.Bit6Descr = 'Unused';
HiFrqAssiPahFwlFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
