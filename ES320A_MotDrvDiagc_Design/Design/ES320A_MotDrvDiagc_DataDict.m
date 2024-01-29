%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Mar-2016 17:38:21       %
%                                  Created with tool release: 2.34.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by:  %krishna(kpit)          %
%%-----------------------------------------------------------------------%

ES320A = DataDict.FDD;
ES320A.Version = '1.4.X';
ES320A.LongName = 'Motor Drive Diagnostic';
ES320A.ShoName  = 'MotDrvDiagc';
ES320A.DesignASIL = 'D';
ES320A.Description = [...
  'Motor Drive Diagnostics verifies the actual measured Phase On Times ag' ...
  'ainst the expected Phase On Times for each phase of the motor'];
ES320A.Dependencies = ...
	{'ArchGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotDrvDiagcInit1 = DataDict.Runnable;
MotDrvDiagcInit1.Context = 'Rte';
MotDrvDiagcInit1.TimeStep = 0;

MotDrvDiagcPer1 = DataDict.Runnable;
MotDrvDiagcPer1.Context = 'Rte';
MotDrvDiagcPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'MotDrvDiagcPer1'};
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
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 1;
SetNtcSts.Arguments(3).EngDT = dt.lgc;
SetNtcSts.Arguments(3).Units = 'Uls';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Inverter 1 Inactive Status from the Diagnostic Manager';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'MotDrvDiagcPer1'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.IpSignal;
DiagcStsIvtr2Inactv.LongName = 'Inverter 2 Inactive Status from the Diagnostic Manager';
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.ReadIn = {'MotDrvDiagcPer1'};
DiagcStsIvtr2Inactv.ReadType = 'Rte';


PhaOnTiMeasdA = DataDict.IpSignal;
PhaOnTiMeasdA.LongName = 'Phase on Time Measured A';
PhaOnTiMeasdA.DocUnits = 'NanoSec';
PhaOnTiMeasdA.EngDT = dt.u32;
PhaOnTiMeasdA.EngInit = 0;
PhaOnTiMeasdA.EngMin = 0;
PhaOnTiMeasdA.EngMax = 4294967295;
PhaOnTiMeasdA.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiMeasdA.ReadType = 'Rte';


PhaOnTiMeasdB = DataDict.IpSignal;
PhaOnTiMeasdB.LongName = 'Phase on Time Measured B';
PhaOnTiMeasdB.DocUnits = 'NanoSec';
PhaOnTiMeasdB.EngDT = dt.u32;
PhaOnTiMeasdB.EngInit = 0;
PhaOnTiMeasdB.EngMin = 0;
PhaOnTiMeasdB.EngMax = 4294967295;
PhaOnTiMeasdB.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiMeasdB.ReadType = 'Rte';


PhaOnTiMeasdC = DataDict.IpSignal;
PhaOnTiMeasdC.LongName = 'Phase on Time Measured C';
PhaOnTiMeasdC.DocUnits = 'NanoSec';
PhaOnTiMeasdC.EngDT = dt.u32;
PhaOnTiMeasdC.EngInit = 0;
PhaOnTiMeasdC.EngMin = 0;
PhaOnTiMeasdC.EngMax = 4294967295;
PhaOnTiMeasdC.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiMeasdC.ReadType = 'Rte';


PhaOnTiMeasdD = DataDict.IpSignal;
PhaOnTiMeasdD.LongName = 'Phase on Time Measured D';
PhaOnTiMeasdD.DocUnits = 'NanoSec';
PhaOnTiMeasdD.EngDT = dt.u32;
PhaOnTiMeasdD.EngInit = 0;
PhaOnTiMeasdD.EngMin = 0;
PhaOnTiMeasdD.EngMax = 4294967295;
PhaOnTiMeasdD.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiMeasdD.ReadType = 'Rte';


PhaOnTiMeasdE = DataDict.IpSignal;
PhaOnTiMeasdE.LongName = 'Phase on Time Measured E';
PhaOnTiMeasdE.DocUnits = 'NanoSec';
PhaOnTiMeasdE.EngDT = dt.u32;
PhaOnTiMeasdE.EngInit = 0;
PhaOnTiMeasdE.EngMin = 0;
PhaOnTiMeasdE.EngMax = 4294967295;
PhaOnTiMeasdE.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiMeasdE.ReadType = 'Rte';


PhaOnTiMeasdF = DataDict.IpSignal;
PhaOnTiMeasdF.LongName = 'Phase on Time Measured F';
PhaOnTiMeasdF.DocUnits = 'NanoSec';
PhaOnTiMeasdF.EngDT = dt.u32;
PhaOnTiMeasdF.EngInit = 0;
PhaOnTiMeasdF.EngMin = 0;
PhaOnTiMeasdF.EngMax = 4294967295;
PhaOnTiMeasdF.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiMeasdF.ReadType = 'Rte';


PhaOnTiSumA = DataDict.IpSignal;
PhaOnTiSumA.LongName = 'Phase on Time Summation A';
PhaOnTiSumA.DocUnits = 'NanoSec';
PhaOnTiSumA.EngDT = dt.u32;
PhaOnTiSumA.EngInit = 0;
PhaOnTiSumA.EngMin = 0;
PhaOnTiSumA.EngMax = 4294967295;
PhaOnTiSumA.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiSumA.ReadType = 'Rte';


PhaOnTiSumB = DataDict.IpSignal;
PhaOnTiSumB.LongName = 'Phase on Time Summation B';
PhaOnTiSumB.DocUnits = 'NanoSec';
PhaOnTiSumB.EngDT = dt.u32;
PhaOnTiSumB.EngInit = 0;
PhaOnTiSumB.EngMin = 0;
PhaOnTiSumB.EngMax = 4294967295;
PhaOnTiSumB.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiSumB.ReadType = 'Rte';


PhaOnTiSumC = DataDict.IpSignal;
PhaOnTiSumC.LongName = 'Phase on Time Summation C';
PhaOnTiSumC.DocUnits = 'NanoSec';
PhaOnTiSumC.EngDT = dt.u32;
PhaOnTiSumC.EngInit = 0;
PhaOnTiSumC.EngMin = 0;
PhaOnTiSumC.EngMax = 4294967295;
PhaOnTiSumC.ReadIn = {'MotDrvDiagcPer1'};
PhaOnTiSumC.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'The New System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'MotDrvDiagcPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotDrvErrA = DataDict.OpSignal;
MotDrvErrA.LongName = 'Motor Drive Error A';
MotDrvErrA.Description = [...
  'Filtered value of difference between PhaOnTiSumAExp with MotDrvDiagAEr' ...
  'rOffs and PhaOnTiMeasdA'];
MotDrvErrA.DocUnits = 'NanoSec';
MotDrvErrA.SwcShoName = 'MotDrvDiagc';
MotDrvErrA.EngDT = dt.float32;
MotDrvErrA.EngInit = 0;
MotDrvErrA.EngMin = 0;
MotDrvErrA.EngMax = 40000000;
MotDrvErrA.TestTolerance = 1;
MotDrvErrA.WrittenIn = {'MotDrvDiagcPer1'};
MotDrvErrA.WriteType = 'Rte';


MotDrvErrB = DataDict.OpSignal;
MotDrvErrB.LongName = 'Motor Drive Error B';
MotDrvErrB.Description = [...
  'Filtered value of difference between PhaOnTiSumBExp with MotDrvDiagBEr' ...
  'rOffs and PhaOnTiMeasdB'];
MotDrvErrB.DocUnits = 'NanoSec';
MotDrvErrB.SwcShoName = 'MotDrvDiagc';
MotDrvErrB.EngDT = dt.float32;
MotDrvErrB.EngInit = 0;
MotDrvErrB.EngMin = 0;
MotDrvErrB.EngMax = 40000000;
MotDrvErrB.TestTolerance = 1;
MotDrvErrB.WrittenIn = {'MotDrvDiagcPer1'};
MotDrvErrB.WriteType = 'Rte';


MotDrvErrC = DataDict.OpSignal;
MotDrvErrC.LongName = 'Motor Drive Error C';
MotDrvErrC.Description = [...
  'Filtered value of difference between PhaOnTiSumCExp with MotDrvDiagCEr' ...
  'rOffs and PhaOnTiMeasdC'];
MotDrvErrC.DocUnits = 'NanoSec';
MotDrvErrC.SwcShoName = 'MotDrvDiagc';
MotDrvErrC.EngDT = dt.float32;
MotDrvErrC.EngInit = 0;
MotDrvErrC.EngMin = 0;
MotDrvErrC.EngMax = 40000000;
MotDrvErrC.TestTolerance = 1;
MotDrvErrC.WrittenIn = {'MotDrvDiagcPer1'};
MotDrvErrC.WriteType = 'Rte';


MotDrvErrD = DataDict.OpSignal;
MotDrvErrD.LongName = 'Motor Drive Error D';
MotDrvErrD.Description = [...
  'Filtered value of difference between PhaOnTiSumDExp with MotDrvDiagDEr' ...
  'rOffs and PhaOnTiMeasdD'];
MotDrvErrD.DocUnits = 'NanoSec';
MotDrvErrD.SwcShoName = 'MotDrvDiagc';
MotDrvErrD.EngDT = dt.float32;
MotDrvErrD.EngInit = 0;
MotDrvErrD.EngMin = 0;
MotDrvErrD.EngMax = 40000000;
MotDrvErrD.TestTolerance = 1;
MotDrvErrD.WrittenIn = {'MotDrvDiagcPer1'};
MotDrvErrD.WriteType = 'Rte';


MotDrvErrE = DataDict.OpSignal;
MotDrvErrE.LongName = 'Motor Drive Error E';
MotDrvErrE.Description = [...
  'Filtered value of difference between PhaOnTiSumEExp with MotDrvDiagEEr' ...
  'rOffs and PhaOnTiMeasdE'];
MotDrvErrE.DocUnits = 'NanoSec';
MotDrvErrE.SwcShoName = 'MotDrvDiagc';
MotDrvErrE.EngDT = dt.float32;
MotDrvErrE.EngInit = 0;
MotDrvErrE.EngMin = 0;
MotDrvErrE.EngMax = 40000000;
MotDrvErrE.TestTolerance = 1;
MotDrvErrE.WrittenIn = {'MotDrvDiagcPer1'};
MotDrvErrE.WriteType = 'Rte';


MotDrvErrF = DataDict.OpSignal;
MotDrvErrF.LongName = 'Motor Drive Error F';
MotDrvErrF.Description = [...
  'Filtered value of difference between PhaOnTiSumFExp with MotDrvDiagFEr' ...
  'rOffs and PhaOnTiMeasdF'];
MotDrvErrF.DocUnits = 'NanoSec';
MotDrvErrF.SwcShoName = 'MotDrvDiagc';
MotDrvErrF.EngDT = dt.float32;
MotDrvErrF.EngInit = 0;
MotDrvErrF.EngMin = 0;
MotDrvErrF.EngMax = 40000000;
MotDrvErrF.TestTolerance = 1;
MotDrvErrF.WrittenIn = {'MotDrvDiagcPer1'};
MotDrvErrF.WriteType = 'Rte';

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotDrvDiagcErrFilFrq = DataDict.Calibration;
MotDrvDiagcErrFilFrq.LongName = 'Motor Drive Diagnostic Error Filter Frequency';
MotDrvDiagcErrFilFrq.Description = [...
  'Calibration for setting the tau of the error filter'];
MotDrvDiagcErrFilFrq.DocUnits = 'Hz';
MotDrvDiagcErrFilFrq.EngDT = dt.float32;
MotDrvDiagcErrFilFrq.EngVal = 1.8;
MotDrvDiagcErrFilFrq.EngMin = 0;
MotDrvDiagcErrFilFrq.EngMax = 250;
MotDrvDiagcErrFilFrq.Cardinality = 'Cmn';
MotDrvDiagcErrFilFrq.CustomerVisible = false;
MotDrvDiagcErrFilFrq.Online = false;
MotDrvDiagcErrFilFrq.Impact = 'H';
MotDrvDiagcErrFilFrq.TuningOwner = 'Safety';
MotDrvDiagcErrFilFrq.GraphLink = {''};
MotDrvDiagcErrFilFrq.Monotony = 'None';
MotDrvDiagcErrFilFrq.MaxGrad = 999;
MotDrvDiagcErrFilFrq.PortName = 'MotDrvDiagcErrFilFrq';


MotDrvDiagcErrOffs = DataDict.Calibration;
MotDrvDiagcErrOffs.LongName = 'Motor Drive Diagnostic Error Offset';
MotDrvDiagcErrOffs.Description = [...
  'A value representing a known divergence between the measured and the e' ...
  'xpected on times'];
MotDrvDiagcErrOffs.DocUnits = 'NanoSec';
MotDrvDiagcErrOffs.EngDT = dt.u32;
MotDrvDiagcErrOffs.EngVal = 0;
MotDrvDiagcErrOffs.EngMin = 0;
MotDrvDiagcErrOffs.EngMax = 1000;
MotDrvDiagcErrOffs.Cardinality = 'Cmn';
MotDrvDiagcErrOffs.CustomerVisible = false;
MotDrvDiagcErrOffs.Online = false;
MotDrvDiagcErrOffs.Impact = 'H';
MotDrvDiagcErrOffs.TuningOwner = 'Safety';
MotDrvDiagcErrOffs.GraphLink = {''};
MotDrvDiagcErrOffs.Monotony = 'None';
MotDrvDiagcErrOffs.MaxGrad = 999;
MotDrvDiagcErrOffs.PortName = 'MotDrvDiagcErrOffs';


MotDrvDiagcErrThd = DataDict.Calibration;
MotDrvDiagcErrThd.LongName = 'Motor Drive Diagnostic Error Threshold';
MotDrvDiagcErrThd.Description = [...
  'Error Threshold default value is based on the EA3 value 180,000 NanoSe' ...
  'c, where 1 Cnt = 12.5 NanoSec'];
MotDrvDiagcErrThd.DocUnits = 'NanoSec';
MotDrvDiagcErrThd.EngDT = dt.u32;
MotDrvDiagcErrThd.EngVal = 180000;
MotDrvDiagcErrThd.EngMin = 0;
MotDrvDiagcErrThd.EngMax = 40000000;
MotDrvDiagcErrThd.Cardinality = 'Cmn';
MotDrvDiagcErrThd.CustomerVisible = false;
MotDrvDiagcErrThd.Online = false;
MotDrvDiagcErrThd.Impact = 'H';
MotDrvDiagcErrThd.TuningOwner = 'Safety';
MotDrvDiagcErrThd.GraphLink = {''};
MotDrvDiagcErrThd.Monotony = 'None';
MotDrvDiagcErrThd.MaxGrad = 999;
MotDrvDiagcErrThd.PortName = 'MotDrvDiagcErrThd';



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
MotDrvDiagcPhaAFilLp = DataDict.PIM;
MotDrvDiagcPhaAFilLp.LongName = 'Motor Drive Diagnostic Lowpass Filter Status Variable for Phase A';
MotDrvDiagcPhaAFilLp.Description = [...
  'Status of phase voltage on time for Lowpass filter'];
MotDrvDiagcPhaAFilLp.DocUnits = 'Cnt';
MotDrvDiagcPhaAFilLp.EngDT = struct.FilLpRec1;
MotDrvDiagcPhaAFilLp.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotDrvDiagcPhaAFilLp.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotDrvDiagcPhaAFilLp.InitRowCol = [1  1];


MotDrvDiagcPhaBFilLp = DataDict.PIM;
MotDrvDiagcPhaBFilLp.LongName = 'Motor Drive Diagnostic Lowpass Filter Status Variable for Phase B';
MotDrvDiagcPhaBFilLp.Description = [...
  'Status of phase voltage on time for Lowpass filter'];
MotDrvDiagcPhaBFilLp.DocUnits = 'Cnt';
MotDrvDiagcPhaBFilLp.EngDT = struct.FilLpRec1;
MotDrvDiagcPhaBFilLp.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotDrvDiagcPhaBFilLp.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotDrvDiagcPhaBFilLp.InitRowCol = [1  1];


MotDrvDiagcPhaCFilLp = DataDict.PIM;
MotDrvDiagcPhaCFilLp.LongName = 'Motor Drive Diagnostic Lowpass Filter Status Variable for Phase C';
MotDrvDiagcPhaCFilLp.Description = [...
  'Status of phase voltage on time for Lowpass filter'];
MotDrvDiagcPhaCFilLp.DocUnits = 'Cnt';
MotDrvDiagcPhaCFilLp.EngDT = struct.FilLpRec1;
MotDrvDiagcPhaCFilLp.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotDrvDiagcPhaCFilLp.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotDrvDiagcPhaCFilLp.InitRowCol = [1  1];


MotDrvDiagcPhaDFilLp = DataDict.PIM;
MotDrvDiagcPhaDFilLp.LongName = 'Motor Drive Diagnostic Lowpass Filter Status Variable for Phase D';
MotDrvDiagcPhaDFilLp.Description = [...
  'Status of phase voltage on time for Lowpass filter'];
MotDrvDiagcPhaDFilLp.DocUnits = 'Cnt';
MotDrvDiagcPhaDFilLp.EngDT = struct.FilLpRec1;
MotDrvDiagcPhaDFilLp.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotDrvDiagcPhaDFilLp.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotDrvDiagcPhaDFilLp.InitRowCol = [1  1];


MotDrvDiagcPhaEFilLp = DataDict.PIM;
MotDrvDiagcPhaEFilLp.LongName = 'Motor Drive Diagnostic Lowpass Filter Status Variable for Phase E';
MotDrvDiagcPhaEFilLp.Description = [...
  'Status of phase voltage on time for Lowpass filter'];
MotDrvDiagcPhaEFilLp.DocUnits = 'Cnt';
MotDrvDiagcPhaEFilLp.EngDT = struct.FilLpRec1;
MotDrvDiagcPhaEFilLp.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotDrvDiagcPhaEFilLp.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotDrvDiagcPhaEFilLp.InitRowCol = [1  1];


MotDrvDiagcPhaFFilLp = DataDict.PIM;
MotDrvDiagcPhaFFilLp.LongName = 'Motor Drive Diagnostic Lowpass Filter Status Variable for Phase C';
MotDrvDiagcPhaFFilLp.Description = [...
  'Status of phase voltage on time for Lowpass filter'];
MotDrvDiagcPhaFFilLp.DocUnits = 'Cnt';
MotDrvDiagcPhaFFilLp.EngDT = struct.FilLpRec1;
MotDrvDiagcPhaFFilLp.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotDrvDiagcPhaFFilLp.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotDrvDiagcPhaFFilLp.InitRowCol = [1  1];


MotDrvDiagcPhaOnTiSumAPrev = DataDict.PIM;
MotDrvDiagcPhaOnTiSumAPrev.LongName = 'Phase on Time Summation a Previous';
MotDrvDiagcPhaOnTiSumAPrev.Description = [...
  'Motor Drive Diagnostic Phase On Time Sum A Prev'];
MotDrvDiagcPhaOnTiSumAPrev.DocUnits = 'NanoSec';
MotDrvDiagcPhaOnTiSumAPrev.EngDT = dt.u32;
MotDrvDiagcPhaOnTiSumAPrev.EngMin = 0;
MotDrvDiagcPhaOnTiSumAPrev.EngMax = 4294967295;
MotDrvDiagcPhaOnTiSumAPrev.InitRowCol = [1  1];


MotDrvDiagcPhaOnTiSumBPrev = DataDict.PIM;
MotDrvDiagcPhaOnTiSumBPrev.LongName = 'Phase on Time Summation B Previous';
MotDrvDiagcPhaOnTiSumBPrev.Description = [...
  'Motor Drive Diagnostic Phase On Time Sum B Prev'];
MotDrvDiagcPhaOnTiSumBPrev.DocUnits = 'NanoSec';
MotDrvDiagcPhaOnTiSumBPrev.EngDT = dt.u32;
MotDrvDiagcPhaOnTiSumBPrev.EngMin = 0;
MotDrvDiagcPhaOnTiSumBPrev.EngMax = 4294967295;
MotDrvDiagcPhaOnTiSumBPrev.InitRowCol = [1  1];


MotDrvDiagcPhaOnTiSumCPrev = DataDict.PIM;
MotDrvDiagcPhaOnTiSumCPrev.LongName = 'Phase on Time Summation C Previous';
MotDrvDiagcPhaOnTiSumCPrev.Description = [...
  'Motor Drive Diagnostic Phase On Time Sum C Prev'];
MotDrvDiagcPhaOnTiSumCPrev.DocUnits = 'NanoSec';
MotDrvDiagcPhaOnTiSumCPrev.EngDT = dt.u32;
MotDrvDiagcPhaOnTiSumCPrev.EngMin = 0;
MotDrvDiagcPhaOnTiSumCPrev.EngMax = 4294967295;
MotDrvDiagcPhaOnTiSumCPrev.InitRowCol = [1  1];


UnitDly = DataDict.PIM;
UnitDly.LongName = 'Unit Delay';
UnitDly.Description = 'Unit Delay';
UnitDly.DocUnits = 'Uls';
UnitDly.EngDT = dt.lgc;
UnitDly.EngMin = 0;
UnitDly.EngMax = 1;
UnitDly.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


PHAONTISUMMAX_NANOSEC_U32 = DataDict.Constant;
PHAONTISUMMAX_NANOSEC_U32.LongName = 'Phase On Time Summation Maximum';
PHAONTISUMMAX_NANOSEC_U32.Description = 'Phase On Time Summation Maximum';
PHAONTISUMMAX_NANOSEC_U32.DocUnits = 'NanoSec';
PHAONTISUMMAX_NANOSEC_U32.EngDT = dt.u32;
PHAONTISUMMAX_NANOSEC_U32.EngVal = 4294967295;
PHAONTISUMMAX_NANOSEC_U32.Header = '';
PHAONTISUMMAX_NANOSEC_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
MotDrvDiagcPhaABCFlt = DataDict.NTC;
MotDrvDiagcPhaABCFlt.NtcNr = NtcNr2.NTCNR_0X054;
MotDrvDiagcPhaABCFlt.NtcTyp = 'None';
MotDrvDiagcPhaABCFlt.LongName = 'Motor Drive Diagnostic of Phase ABC Fault';
MotDrvDiagcPhaABCFlt.Description = 'Motor Drive Diagnostic of Phase A, Phase B, Phase C fault';
MotDrvDiagcPhaABCFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit0Descr = 'Phase A Measured Under Command Level';
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit1Descr = 'Phase A Measured Over Command Level';
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit2Descr = 'Phase B Measured Under Command Level';
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit3Descr = 'Phase B Measured Over Command Level';
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit4Descr = 'Phase C Measured Under Command Level';
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit5Descr = 'Phase C Measured Over Command Level';
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit6Descr = 'Unused';
MotDrvDiagcPhaABCFlt.NtcStInfo.Bit7Descr = 'Unused';


MotDrvDiagcPhaDEFFlt = DataDict.NTC;
MotDrvDiagcPhaDEFFlt.NtcNr = NtcNr2.NTCNR_0X064;
MotDrvDiagcPhaDEFFlt.NtcTyp = 'None';
MotDrvDiagcPhaDEFFlt.LongName = 'Motor Drive Diagnostic of Phase DEF Fault';
MotDrvDiagcPhaDEFFlt.Description = 'Motor Drive Diagnostic of Phase D, Phase E, Phase F fault';
MotDrvDiagcPhaDEFFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit0Descr = 'Phase D Measured Under Command Level';
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit1Descr = 'Phase D Measured Over Command Level';
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit2Descr = 'Phase E Measured Under Command Level';
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit3Descr = 'Phase E Measured Over Command Level';
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit4Descr = 'Phase F Measured Under Command Level';
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit5Descr = 'Phase F Measured Over Command Level';
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit6Descr = 'Unused';
MotDrvDiagcPhaDEFFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
