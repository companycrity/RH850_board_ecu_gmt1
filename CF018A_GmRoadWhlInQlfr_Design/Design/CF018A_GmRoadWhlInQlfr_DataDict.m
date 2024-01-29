%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Nov-2016 08:58:08       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF018A = DataDict.FDD;
CF018A.Version = '1.4.X';
CF018A.LongName = 'GM Road Wheel Input Qualifier';
CF018A.ShoName  = 'GmRoadWhlInQlfr';
CF018A.DesignASIL = 'D';
CF018A.Description = [...
  'Road Wheel Input Qualifier module for General Motors vehicles. This mo' ...
  'dule verifies that wheel signals from the vehicle can be used by the N' ...
  'exteer function Wheel Imbalance Rejection.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmRoadWhlInQlfrInit1 = DataDict.Runnable;
GmRoadWhlInQlfrInit1.Context = 'Rte';
GmRoadWhlInQlfrInit1.TimeStep = 0;
GmRoadWhlInQlfrInit1.Description = 'Runnable for Initialization';

GmRoadWhlInQlfrPer1 = DataDict.Runnable;
GmRoadWhlInQlfrPer1.Context = 'Rte';
GmRoadWhlInQlfrPer1.TimeStep = 0.002;
GmRoadWhlInQlfrPer1.Description = 'Runnable for Periodic 1';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'GmRoadWhlInQlfrPer1'};
GetRefTmr100MicroSec32bit.Description = 'Client definition to return the reference time in counts';
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
GetTiSpan100MicroSec32bit.CallLocation = {'GmRoadWhlInQlfrPer1'};
GetTiSpan100MicroSec32bit.Description = 'Client definition to determine elapse time';
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


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'GmRoadWhlInQlfrInit1','GmRoadWhlInQlfrPer1'};
SetNtcSts.Description = 'Client definition to set NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
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
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
WhlLeDstPlsCntr = DataDict.IpSignal;
WhlLeDstPlsCntr.LongName = 'Left Wheel Distance Pulse Counter';
WhlLeDstPlsCntr.Description = 'Left Wheel Distance Pulse Counter';
WhlLeDstPlsCntr.DocUnits = 'Cnt';
WhlLeDstPlsCntr.EngDT = dt.u16;
WhlLeDstPlsCntr.EngInit = 0;
WhlLeDstPlsCntr.EngMin = 0;
WhlLeDstPlsCntr.EngMax = 1023;
WhlLeDstPlsCntr.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlLeDstPlsCntr.ReadType = 'Rte';


WhlLeDstTiStamp = DataDict.IpSignal;
WhlLeDstTiStamp.LongName = 'Left Wheel Distance Time Stamp';
WhlLeDstTiStamp.Description = 'Left Wheel Distance Time Stamp';
WhlLeDstTiStamp.DocUnits = 'Cnt';
WhlLeDstTiStamp.EngDT = dt.u16;
WhlLeDstTiStamp.EngInit = 0;
WhlLeDstTiStamp.EngMin = 0;
WhlLeDstTiStamp.EngMax = 65535;
WhlLeDstTiStamp.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlLeDstTiStamp.ReadType = 'Rte';


WhlLeDstVld = DataDict.IpSignal;
WhlLeDstVld.LongName = 'Left Wheel Distance Valid';
WhlLeDstVld.Description = 'Left Wheel Distance Valid';
WhlLeDstVld.DocUnits = 'Cnt';
WhlLeDstVld.EngDT = dt.lgc;
WhlLeDstVld.EngInit = 0;
WhlLeDstVld.EngMin = 0;
WhlLeDstVld.EngMax = 1;
WhlLeDstVld.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlLeDstVld.ReadType = 'Rte';


WhlPlsPerRev = DataDict.IpSignal;
WhlPlsPerRev.LongName = 'Wheel Pulses Per Revolution';
WhlPlsPerRev.Description = 'Wheel Pulses Per Revolution';
WhlPlsPerRev.DocUnits = 'CntPerRoadWhlRev';
WhlPlsPerRev.EngDT = dt.u08;
WhlPlsPerRev.EngInit = 1;
WhlPlsPerRev.EngMin = 1;
WhlPlsPerRev.EngMax = 127;
WhlPlsPerRev.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlPlsPerRev.ReadType = 'Rte';


WhlRiDstPlsCntr = DataDict.IpSignal;
WhlRiDstPlsCntr.LongName = 'Right Wheel Distance Pulse Counter';
WhlRiDstPlsCntr.Description = 'Right Wheel Distance Pulse Counter';
WhlRiDstPlsCntr.DocUnits = 'Cnt';
WhlRiDstPlsCntr.EngDT = dt.u16;
WhlRiDstPlsCntr.EngInit = 0;
WhlRiDstPlsCntr.EngMin = 0;
WhlRiDstPlsCntr.EngMax = 1023;
WhlRiDstPlsCntr.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlRiDstPlsCntr.ReadType = 'Rte';


WhlRiDstTiStamp = DataDict.IpSignal;
WhlRiDstTiStamp.LongName = 'Right Wheel Distance Time Stamp';
WhlRiDstTiStamp.Description = 'Right Wheel Distance Time Stamp';
WhlRiDstTiStamp.DocUnits = 'Cnt';
WhlRiDstTiStamp.EngDT = dt.u16;
WhlRiDstTiStamp.EngInit = 0;
WhlRiDstTiStamp.EngMin = 0;
WhlRiDstTiStamp.EngMax = 65535;
WhlRiDstTiStamp.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlRiDstTiStamp.ReadType = 'Rte';


WhlRiDstVld = DataDict.IpSignal;
WhlRiDstVld.LongName = 'Right Wheel Distance Valid';
WhlRiDstVld.Description = 'Right Wheel Distance Valid';
WhlRiDstVld.DocUnits = 'Cnt';
WhlRiDstVld.EngDT = dt.lgc;
WhlRiDstVld.EngInit = 0;
WhlRiDstVld.EngMin = 0;
WhlRiDstVld.EngMax = 1;
WhlRiDstVld.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlRiDstVld.ReadType = 'Rte';


WhlRotlStsTiStampResl = DataDict.IpSignal;
WhlRotlStsTiStampResl.LongName = 'Wheel Rotational Status Time Stamp Resolution';
WhlRotlStsTiStampResl.Description = 'Wheel Rotational Status Time Stamp Resolution';
WhlRotlStsTiStampResl.DocUnits = 'SecPerCnt';
WhlRotlStsTiStampResl.EngDT = dt.float32;
WhlRotlStsTiStampResl.EngInit = 2e-09;
WhlRotlStsTiStampResl.EngMin = 2e-09;
WhlRotlStsTiStampResl.EngMax = 4.094e-06;
WhlRotlStsTiStampResl.ReadIn = {'GmRoadWhlInQlfrPer1'};
WhlRotlStsTiStampResl.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
WhlFrqVld = DataDict.OpSignal;
WhlFrqVld.LongName = 'Wheel Frequency Valid';
WhlFrqVld.Description = [...
  'It indicates the wheel frequency is valid.'];
WhlFrqVld.DocUnits = 'Cnt';
WhlFrqVld.SwcShoName = 'GmRoadWhlInQlfr';
WhlFrqVld.EngDT = dt.lgc;
WhlFrqVld.EngInit = 0;
WhlFrqVld.EngMin = 0;
WhlFrqVld.EngMax = 1;
WhlFrqVld.TestTolerance = 0;
WhlFrqVld.WrittenIn = {'GmRoadWhlInQlfrPer1'};
WhlFrqVld.WriteType = 'Rte';


WhlLeFrq = DataDict.OpSignal;
WhlLeFrq.LongName = 'Left Wheel Frequency';
WhlLeFrq.Description = 'Left Wheel Frequency';
WhlLeFrq.DocUnits = 'Hz';
WhlLeFrq.SwcShoName = 'GmRoadWhlInQlfr';
WhlLeFrq.EngDT = dt.float32;
WhlLeFrq.EngInit = 0.01;
WhlLeFrq.EngMin = 0.01;
WhlLeFrq.EngMax = 60;
WhlLeFrq.TestTolerance = 0;
WhlLeFrq.WrittenIn = {'GmRoadWhlInQlfrPer1'};
WhlLeFrq.WriteType = 'Rte';


WhlRiFrq = DataDict.OpSignal;
WhlRiFrq.LongName = 'Right Wheel Frequency';
WhlRiFrq.Description = 'Right Wheel Frequency';
WhlRiFrq.DocUnits = 'Hz';
WhlRiFrq.SwcShoName = 'GmRoadWhlInQlfr';
WhlRiFrq.EngDT = dt.float32;
WhlRiFrq.EngInit = 0.01;
WhlRiFrq.EngMin = 0.01;
WhlRiFrq.EngMax = 60;
WhlRiFrq.TestTolerance = 0;
WhlRiFrq.WrittenIn = {'GmRoadWhlInQlfrPer1'};
WhlRiFrq.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GmRoadWhlInQlfrMaxAllwblFrq = DataDict.Calibration;
GmRoadWhlInQlfrMaxAllwblFrq.LongName = 'GM Road Wheel Input Qualifier Maximum Allowable frequency';
GmRoadWhlInQlfrMaxAllwblFrq.Description = [...
  'Maximum frequency allowed by the customer vehicle build variants.'];
GmRoadWhlInQlfrMaxAllwblFrq.DocUnits = 'Hz';
GmRoadWhlInQlfrMaxAllwblFrq.EngDT = dt.float32;
GmRoadWhlInQlfrMaxAllwblFrq.EngVal = 55.48;
GmRoadWhlInQlfrMaxAllwblFrq.EngMin = 0.01;
GmRoadWhlInQlfrMaxAllwblFrq.EngMax = 60;
GmRoadWhlInQlfrMaxAllwblFrq.Cardinality = 'Inin';
GmRoadWhlInQlfrMaxAllwblFrq.CustomerVisible = false;
GmRoadWhlInQlfrMaxAllwblFrq.Online = true;
GmRoadWhlInQlfrMaxAllwblFrq.Impact = 'H';
GmRoadWhlInQlfrMaxAllwblFrq.TuningOwner = 'CSE';
GmRoadWhlInQlfrMaxAllwblFrq.GraphLink = {''};
GmRoadWhlInQlfrMaxAllwblFrq.Monotony = 'None';
GmRoadWhlInQlfrMaxAllwblFrq.MaxGrad = 998;
GmRoadWhlInQlfrMaxAllwblFrq.PortName = 'GmRoadWhlInQlfrMaxAllwblFrq';


GmRoadWhlInQlfrMaxFrqChg = DataDict.Calibration;
GmRoadWhlInQlfrMaxFrqChg.LongName = 'GM Road Wheel Input Qualifier Maximum Frequency Change';
GmRoadWhlInQlfrMaxFrqChg.Description = [...
  'The Maximum Frequency Change between two valid raw wheel frequency.'];
GmRoadWhlInQlfrMaxFrqChg.DocUnits = 'Hz';
GmRoadWhlInQlfrMaxFrqChg.EngDT = dt.float32;
GmRoadWhlInQlfrMaxFrqChg.EngVal = 1.5;
GmRoadWhlInQlfrMaxFrqChg.EngMin = 0.01;
GmRoadWhlInQlfrMaxFrqChg.EngMax = 60;
GmRoadWhlInQlfrMaxFrqChg.Cardinality = 'Inin';
GmRoadWhlInQlfrMaxFrqChg.CustomerVisible = false;
GmRoadWhlInQlfrMaxFrqChg.Online = true;
GmRoadWhlInQlfrMaxFrqChg.Impact = 'H';
GmRoadWhlInQlfrMaxFrqChg.TuningOwner = 'CSE';
GmRoadWhlInQlfrMaxFrqChg.GraphLink = {''};
GmRoadWhlInQlfrMaxFrqChg.Monotony = 'None';
GmRoadWhlInQlfrMaxFrqChg.MaxGrad = 998;
GmRoadWhlInQlfrMaxFrqChg.PortName = 'GmRoadWhlInQlfrMaxFrqChg';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dGmRoadWhlInQlfrLeDeltaPls = DataDict.Display;
dGmRoadWhlInQlfrLeDeltaPls.LongName = 'GM Road Wheel Input Qualifier Left Delta Pulse';
dGmRoadWhlInQlfrLeDeltaPls.Description = [...
  'GM road wheel input qualifier left delta pulse.'];
dGmRoadWhlInQlfrLeDeltaPls.DocUnits = 'Cnt';
dGmRoadWhlInQlfrLeDeltaPls.EngDT = dt.u16;
dGmRoadWhlInQlfrLeDeltaPls.EngMin = 0;
dGmRoadWhlInQlfrLeDeltaPls.EngMax = 1023;
dGmRoadWhlInQlfrLeDeltaPls.InitRowCol = [1  1];


dGmRoadWhlInQlfrLeDeltaTiStamp = DataDict.Display;
dGmRoadWhlInQlfrLeDeltaTiStamp.LongName = 'GM Road Wheel Input Qualifier Left Delta Time Stamp';
dGmRoadWhlInQlfrLeDeltaTiStamp.Description = [...
  'GM road wheel input qualifier left delta time stamp.'];
dGmRoadWhlInQlfrLeDeltaTiStamp.DocUnits = 'Cnt';
dGmRoadWhlInQlfrLeDeltaTiStamp.EngDT = dt.u16;
dGmRoadWhlInQlfrLeDeltaTiStamp.EngMin = 0;
dGmRoadWhlInQlfrLeDeltaTiStamp.EngMax = 65535;
dGmRoadWhlInQlfrLeDeltaTiStamp.InitRowCol = [1  1];


dGmRoadWhlInQlfrLeWhlFrqVld = DataDict.Display;
dGmRoadWhlInQlfrLeWhlFrqVld.LongName = 'GM Road Wheel Input Qualifier Left Wheel Frequency Valid';
dGmRoadWhlInQlfrLeWhlFrqVld.Description = [...
  'It indicates whether the left wheel frequency is valid.'];
dGmRoadWhlInQlfrLeWhlFrqVld.DocUnits = 'Cnt';
dGmRoadWhlInQlfrLeWhlFrqVld.EngDT = dt.lgc;
dGmRoadWhlInQlfrLeWhlFrqVld.EngMin = 0;
dGmRoadWhlInQlfrLeWhlFrqVld.EngMax = 1;
dGmRoadWhlInQlfrLeWhlFrqVld.InitRowCol = [1  1];


dGmRoadWhlInQlfrRawLeWhlFrq = DataDict.Display;
dGmRoadWhlInQlfrRawLeWhlFrq.LongName = 'GM Road Wheel Input Qualifier Raw Left Wheel Frequency';
dGmRoadWhlInQlfrRawLeWhlFrq.Description = [...
  'GM road wheel input qualifier raw left wheel frequency.'];
dGmRoadWhlInQlfrRawLeWhlFrq.DocUnits = 'Hz';
dGmRoadWhlInQlfrRawLeWhlFrq.EngDT = dt.float32;
dGmRoadWhlInQlfrRawLeWhlFrq.EngMin = 0.0293;
dGmRoadWhlInQlfrRawLeWhlFrq.EngMax = 5.115e+11;
dGmRoadWhlInQlfrRawLeWhlFrq.InitRowCol = [1  1];


dGmRoadWhlInQlfrRawRiWhlFrq = DataDict.Display;
dGmRoadWhlInQlfrRawRiWhlFrq.LongName = 'GM Road Wheel Input Qualifier Raw Right Wheel Frequency';
dGmRoadWhlInQlfrRawRiWhlFrq.Description = [...
  'GM road wheel input qualifier raw right wheel frequency.'];
dGmRoadWhlInQlfrRawRiWhlFrq.DocUnits = 'Hz';
dGmRoadWhlInQlfrRawRiWhlFrq.EngDT = dt.float32;
dGmRoadWhlInQlfrRawRiWhlFrq.EngMin = 0.0293;
dGmRoadWhlInQlfrRawRiWhlFrq.EngMax = 5.115e+11;
dGmRoadWhlInQlfrRawRiWhlFrq.InitRowCol = [1  1];


dGmRoadWhlInQlfrRiDeltaPls = DataDict.Display;
dGmRoadWhlInQlfrRiDeltaPls.LongName = 'GM Road Wheel Input Qualifier Right Delta Pulse';
dGmRoadWhlInQlfrRiDeltaPls.Description = [...
  'GM road wheel input qualifier Right delta pulse.'];
dGmRoadWhlInQlfrRiDeltaPls.DocUnits = 'Cnt';
dGmRoadWhlInQlfrRiDeltaPls.EngDT = dt.u16;
dGmRoadWhlInQlfrRiDeltaPls.EngMin = 0;
dGmRoadWhlInQlfrRiDeltaPls.EngMax = 1023;
dGmRoadWhlInQlfrRiDeltaPls.InitRowCol = [1  1];


dGmRoadWhlInQlfrRiDeltaTiStamp = DataDict.Display;
dGmRoadWhlInQlfrRiDeltaTiStamp.LongName = 'GM Road Wheel Input Qualifier Right Delta Time Stamp';
dGmRoadWhlInQlfrRiDeltaTiStamp.Description = [...
  'GM road wheel input qualifier right delta time stamp.'];
dGmRoadWhlInQlfrRiDeltaTiStamp.DocUnits = 'Cnt';
dGmRoadWhlInQlfrRiDeltaTiStamp.EngDT = dt.u16;
dGmRoadWhlInQlfrRiDeltaTiStamp.EngMin = 0;
dGmRoadWhlInQlfrRiDeltaTiStamp.EngMax = 65535;
dGmRoadWhlInQlfrRiDeltaTiStamp.InitRowCol = [1  1];


dGmRoadWhlInQlfrRiWhlFrqVld = DataDict.Display;
dGmRoadWhlInQlfrRiWhlFrqVld.LongName = 'GM Road Wheel Input Qualifier Right Wheel Frequency Valid';
dGmRoadWhlInQlfrRiWhlFrqVld.Description = [...
  'It indicates whether the right wheel frequency is valid.'];
dGmRoadWhlInQlfrRiWhlFrqVld.DocUnits = 'Cnt';
dGmRoadWhlInQlfrRiWhlFrqVld.EngDT = dt.lgc;
dGmRoadWhlInQlfrRiWhlFrqVld.EngMin = 0;
dGmRoadWhlInQlfrRiWhlFrqVld.EngMax = 1;
dGmRoadWhlInQlfrRiWhlFrqVld.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
PrevLeWhlFrq = DataDict.PIM;
PrevLeWhlFrq.LongName = 'Previous Left Wheel Frequency';
PrevLeWhlFrq.Description = 'Previous left wheel frequency';
PrevLeWhlFrq.DocUnits = 'Hz';
PrevLeWhlFrq.EngDT = dt.float32;
PrevLeWhlFrq.EngMin = 0.01;
PrevLeWhlFrq.EngMax = 60;
PrevLeWhlFrq.InitRowCol = [1  1];


PrevLeWhlFrqVld = DataDict.PIM;
PrevLeWhlFrqVld.LongName = 'Previous Left Wheel Frequency Valid';
PrevLeWhlFrqVld.Description = [...
  'Previous left wheel frequency Valid'];
PrevLeWhlFrqVld.DocUnits = 'Cnt';
PrevLeWhlFrqVld.EngDT = dt.lgc;
PrevLeWhlFrqVld.EngMin = 0;
PrevLeWhlFrqVld.EngMax = 1;
PrevLeWhlFrqVld.InitRowCol = [1  1];


PrevRawLeWhlFrq = DataDict.PIM;
PrevRawLeWhlFrq.LongName = 'Previous Raw Left Wheel Frequency';
PrevRawLeWhlFrq.Description = 'Previous raw left wheel frequency';
PrevRawLeWhlFrq.DocUnits = 'Hz';
PrevRawLeWhlFrq.EngDT = dt.float32;
PrevRawLeWhlFrq.EngMin = 0.0293;
PrevRawLeWhlFrq.EngMax = 5.115e+11;
PrevRawLeWhlFrq.InitRowCol = [1  1];


PrevRawRiWhlFrq = DataDict.PIM;
PrevRawRiWhlFrq.LongName = 'Previous Raw Right Wheel Frequency';
PrevRawRiWhlFrq.Description = 'Previous raw right wheel frequency';
PrevRawRiWhlFrq.DocUnits = 'Hz';
PrevRawRiWhlFrq.EngDT = dt.float32;
PrevRawRiWhlFrq.EngMin = 0.0293;
PrevRawRiWhlFrq.EngMax = 5.115e+11;
PrevRawRiWhlFrq.InitRowCol = [1  1];


PrevRiWhlFrq = DataDict.PIM;
PrevRiWhlFrq.LongName = 'Previous Right Wheel Frequency';
PrevRiWhlFrq.Description = 'Previous Right wheel frequency';
PrevRiWhlFrq.DocUnits = 'Hz';
PrevRiWhlFrq.EngDT = dt.float32;
PrevRiWhlFrq.EngMin = 0.01;
PrevRiWhlFrq.EngMax = 60;
PrevRiWhlFrq.InitRowCol = [1  1];


PrevRiWhlFrqVld = DataDict.PIM;
PrevRiWhlFrqVld.LongName = 'Previous Right Wheel Frequency Valid';
PrevRiWhlFrqVld.Description = [...
  'Previous Right wheel frequency Valid'];
PrevRiWhlFrqVld.DocUnits = 'Cnt';
PrevRiWhlFrqVld.EngDT = dt.lgc;
PrevRiWhlFrqVld.EngMin = 0;
PrevRiWhlFrqVld.EngMax = 1;
PrevRiWhlFrqVld.InitRowCol = [1  1];


PrevVldLeWhlDstPlsCntr = DataDict.PIM;
PrevVldLeWhlDstPlsCntr.LongName = 'Previous Valid Left Wheel Distance Pulse Counter';
PrevVldLeWhlDstPlsCntr.Description = [...
  'Previous valid left wheel distance pulse counter'];
PrevVldLeWhlDstPlsCntr.DocUnits = 'Cnt';
PrevVldLeWhlDstPlsCntr.EngDT = dt.u16;
PrevVldLeWhlDstPlsCntr.EngMin = 0;
PrevVldLeWhlDstPlsCntr.EngMax = 1023;
PrevVldLeWhlDstPlsCntr.InitRowCol = [1  1];


PrevVldLeWhlDstTiStamp = DataDict.PIM;
PrevVldLeWhlDstTiStamp.LongName = 'Previous Valid Left Wheel Distance Time Stamp';
PrevVldLeWhlDstTiStamp.Description = [...
  'Previous valid left wheel distance time stamp'];
PrevVldLeWhlDstTiStamp.DocUnits = 'Cnt';
PrevVldLeWhlDstTiStamp.EngDT = dt.u16;
PrevVldLeWhlDstTiStamp.EngMin = 0;
PrevVldLeWhlDstTiStamp.EngMax = 65535;
PrevVldLeWhlDstTiStamp.InitRowCol = [1  1];


PrevVldRiWhlDstPlsCntr = DataDict.PIM;
PrevVldRiWhlDstPlsCntr.LongName = 'Previous Valid Right Wheel Distance Pulse Counter';
PrevVldRiWhlDstPlsCntr.Description = [...
  'Previous valid right wheel distance pulse counter'];
PrevVldRiWhlDstPlsCntr.DocUnits = 'Cnt';
PrevVldRiWhlDstPlsCntr.EngDT = dt.u16;
PrevVldRiWhlDstPlsCntr.EngMin = 0;
PrevVldRiWhlDstPlsCntr.EngMax = 1023;
PrevVldRiWhlDstPlsCntr.InitRowCol = [1  1];


PrevVldRiWhlDstTiStamp = DataDict.PIM;
PrevVldRiWhlDstTiStamp.LongName = 'Previous Valid Right Wheel Distance Time Stamp';
PrevVldRiWhlDstTiStamp.Description = [...
  'Previous valid right wheel distance time stamp'];
PrevVldRiWhlDstTiStamp.DocUnits = 'Cnt';
PrevVldRiWhlDstTiStamp.EngDT = dt.u16;
PrevVldRiWhlDstTiStamp.EngMin = 0;
PrevVldRiWhlDstTiStamp.EngMax = 65535;
PrevVldRiWhlDstTiStamp.InitRowCol = [1  1];


PrevVldTiLeFrqChg = DataDict.PIM;
PrevVldTiLeFrqChg.LongName = 'Previous Valid Time Left Frequency Change';
PrevVldTiLeFrqChg.Description = [...
  'Previous valid time left frequency change'];
PrevVldTiLeFrqChg.DocUnits = 'Cnt';
PrevVldTiLeFrqChg.EngDT = dt.u32;
PrevVldTiLeFrqChg.EngMin = 0;
PrevVldTiLeFrqChg.EngMax = 4294967295;
PrevVldTiLeFrqChg.InitRowCol = [1  1];


PrevVldTiRiFrqChg = DataDict.PIM;
PrevVldTiRiFrqChg.LongName = 'Previous Valid Time Right Frequency Change';
PrevVldTiRiFrqChg.Description = [...
  'Previous Valid Time Right Frequency Change'];
PrevVldTiRiFrqChg.DocUnits = 'Cnt';
PrevVldTiRiFrqChg.EngDT = dt.u32;
PrevVldTiRiFrqChg.EngMin = 0;
PrevVldTiRiFrqChg.EngMax = 4294967295;
PrevVldTiRiFrqChg.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DELTAPLSROLLOVR_CNT_S16 = DataDict.Constant;
DELTAPLSROLLOVR_CNT_S16.LongName = 'Delta Pulse Rollover';
DELTAPLSROLLOVR_CNT_S16.Description = [...
  'Add by 1024 when the delta pulse is smaller than zero'];
DELTAPLSROLLOVR_CNT_S16.DocUnits = 'Cnt';
DELTAPLSROLLOVR_CNT_S16.EngDT = dt.s16;
DELTAPLSROLLOVR_CNT_S16.EngVal = 1024;
DELTAPLSROLLOVR_CNT_S16.Define = 'Local';


DELTATISTAMPCNTROLLOVR_CNT_S32 = DataDict.Constant;
DELTATISTAMPCNTROLLOVR_CNT_S32.LongName = 'Delta Time Stamp Count Rollover';
DELTATISTAMPCNTROLLOVR_CNT_S32.Description = [...
  'Add by 65536 when the delta time stamp in "cnt" is smaller than zero'];
DELTATISTAMPCNTROLLOVR_CNT_S32.DocUnits = 'Cnt';
DELTATISTAMPCNTROLLOVR_CNT_S32.EngDT = dt.s32;
DELTATISTAMPCNTROLLOVR_CNT_S32.EngVal = 65536;
DELTATISTAMPCNTROLLOVR_CNT_S32.Define = 'Local';


LEFRQCHGOUTOFRNG_CNT_U08 = DataDict.Constant;
LEFRQCHGOUTOFRNG_CNT_U08.LongName = 'Left Wheel Frequency Change Out of Range';
LEFRQCHGOUTOFRNG_CNT_U08.Description = [...
  'Set bit 1 status to 1 when the raw frequency jump is greater than the ' ...
  'max frequency change'];
LEFRQCHGOUTOFRNG_CNT_U08.DocUnits = 'Cnt';
LEFRQCHGOUTOFRNG_CNT_U08.EngDT = dt.u08;
LEFRQCHGOUTOFRNG_CNT_U08.EngVal = 2;
LEFRQCHGOUTOFRNG_CNT_U08.Define = 'Local';


LEFRQOUTOFRNG_CNT_U08 = DataDict.Constant;
LEFRQOUTOFRNG_CNT_U08.LongName = 'Left Wheel Frequency Out of Range';
LEFRQOUTOFRNG_CNT_U08.Description = [...
  'Set bit 0 status to 1 when the raw frequency is greater than the max a' ...
  'llowable frequency'];
LEFRQOUTOFRNG_CNT_U08.DocUnits = 'Cnt';
LEFRQOUTOFRNG_CNT_U08.EngDT = dt.u08;
LEFRQOUTOFRNG_CNT_U08.EngVal = 1;
LEFRQOUTOFRNG_CNT_U08.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = 'Step used when NtcType is None';
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


PARKDURN_CNT_F32 = DataDict.Constant;
PARKDURN_CNT_F32.LongName = 'Park Duration';
PARKDURN_CNT_F32.Description = [...
  'The amount of time to compare to the last valid wheel time stamp to de' ...
  'termine if the vehicle has been parked and should not calculate a new ' ...
  'frequency.'];
PARKDURN_CNT_F32.DocUnits = 'Cnt';
PARKDURN_CNT_F32.EngDT = dt.float32;
PARKDURN_CNT_F32.EngVal = 65000000;
PARKDURN_CNT_F32.Define = 'Local';


PREVRAWWHLFRQMIN_HZ_F32 = DataDict.Constant;
PREVRAWWHLFRQMIN_HZ_F32.LongName = 'Minimum Previous Raw Wheel Frequency';
PREVRAWWHLFRQMIN_HZ_F32.Description = [...
  'Minimum wheel frequency for previous raw wheel frequency initializatio' ...
  'n'];
PREVRAWWHLFRQMIN_HZ_F32.DocUnits = 'Hz';
PREVRAWWHLFRQMIN_HZ_F32.EngDT = dt.float32;
PREVRAWWHLFRQMIN_HZ_F32.EngVal = 0.0293;
PREVRAWWHLFRQMIN_HZ_F32.Define = 'Local';


RIFRQCHGOUTOFRNG_CNT_U08 = DataDict.Constant;
RIFRQCHGOUTOFRNG_CNT_U08.LongName = 'Right Wheel Frequency Change Out of Range';
RIFRQCHGOUTOFRNG_CNT_U08.Description = [...
  'Set bit 5 status to 1 when the raw frequency jump is greater than the ' ...
  'max frequency change'];
RIFRQCHGOUTOFRNG_CNT_U08.DocUnits = 'Cnt';
RIFRQCHGOUTOFRNG_CNT_U08.EngDT = dt.u08;
RIFRQCHGOUTOFRNG_CNT_U08.EngVal = 32;
RIFRQCHGOUTOFRNG_CNT_U08.Define = 'Local';


RIFRQOUTOFRNG_CNT_U08 = DataDict.Constant;
RIFRQOUTOFRNG_CNT_U08.LongName = 'Right Wheel Frequency Out of Range';
RIFRQOUTOFRNG_CNT_U08.Description = [...
  'Set bit 4 status to 1 when the raw frequency is greater than the max a' ...
  'llowable frequency'];
RIFRQOUTOFRNG_CNT_U08.DocUnits = 'Cnt';
RIFRQOUTOFRNG_CNT_U08.EngDT = dt.u08;
RIFRQOUTOFRNG_CNT_U08.EngVal = 16;
RIFRQOUTOFRNG_CNT_U08.Define = 'Local';


SECTO100MICROSECCNVN_CNT_F32 = DataDict.Constant;
SECTO100MICROSECCNVN_CNT_F32.LongName = 'Second to 100 microsecond conversion';
SECTO100MICROSECCNVN_CNT_F32.Description = [...
  'Convert the scale from second to 100 microsecond'];
SECTO100MICROSECCNVN_CNT_F32.DocUnits = 'Cnt';
SECTO100MICROSECCNVN_CNT_F32.EngDT = dt.float32;
SECTO100MICROSECCNVN_CNT_F32.EngVal = 10000;
SECTO100MICROSECCNVN_CNT_F32.Define = 'Local';


WHLFRQMAX_HZ_F32 = DataDict.Constant;
WHLFRQMAX_HZ_F32.LongName = 'Maximum Wheel Frequency';
WHLFRQMAX_HZ_F32.Description = [...
  'Maximum wheel frequency for the output limiter'];
WHLFRQMAX_HZ_F32.DocUnits = 'Hz';
WHLFRQMAX_HZ_F32.EngDT = dt.float32;
WHLFRQMAX_HZ_F32.EngVal = 60;
WHLFRQMAX_HZ_F32.Define = 'Local';


WHLFRQMIN_HZ_F32 = DataDict.Constant;
WHLFRQMIN_HZ_F32.LongName = 'Minimum Wheel Frequency';
WHLFRQMIN_HZ_F32.Description = [...
  'Minimum wheel frequency for the output limiter'];
WHLFRQMIN_HZ_F32.DocUnits = 'Hz';
WHLFRQMIN_HZ_F32.EngDT = dt.float32;
WHLFRQMIN_HZ_F32.EngVal = 0.01;
WHLFRQMIN_HZ_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
RoadWhlFrqInCalcOutOfRng = DataDict.NTC;
RoadWhlFrqInCalcOutOfRng.NtcNr = NtcNr1.NTCNR_0X0E3;
RoadWhlFrqInCalcOutOfRng.NtcTyp = 'None';
RoadWhlFrqInCalcOutOfRng.LongName = 'Road Wheel Frequency Input Calculated Out Of Range';
RoadWhlFrqInCalcOutOfRng.Description = 'Road Wheel Frequency Input Calculated Out Of Range';
RoadWhlFrqInCalcOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit0Descr = 'Left Frequency Out Of Range';
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit1Descr = 'Left Frequency Change Out Of Range';
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit2Descr = 'Unused';
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit3Descr = 'Unused';
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit4Descr = 'Right Frequency Out Of Range';
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit5Descr = 'Right Frequency Change Out Of Range';
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
RoadWhlFrqInCalcOutOfRng.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
