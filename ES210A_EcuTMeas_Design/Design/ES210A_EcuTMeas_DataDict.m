%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 28-Apr-2016 17:26:34       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

ES210A = DataDict.FDD;
ES210A.Version = '1.5.X';
ES210A.LongName = 'Ecu Temperature Measurement';
ES210A.ShoName  = 'EcuTMeas';
ES210A.DesignASIL = 'QM';
ES210A.Description = [...
  'Measures and diagnoses thermistor on ECU'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
EcuTMeasInit = DataDict.Runnable;
EcuTMeasInit.Context = 'Rte';
EcuTMeasInit.TimeStep = 0;
EcuTMeasInit.Description = 'Init Function';

EcuTMeasPer1 = DataDict.Runnable;
EcuTMeasPer1.Context = 'Rte';
EcuTMeasPer1.TimeStep = 0.1;
EcuTMeasPer1.Description = 'Periodic';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'EcuTMeasPer1'};
SetNtcSts.Description = 'ECU Temperature Periodic 1';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'None';
SetNtcSts.Return.Min = [];
SetNtcSts.Return.Max = [];
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'None';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC Number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NTC State Info';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce Step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DiagcStsLimdTPrfmnc = DataDict.IpSignal;
DiagcStsLimdTPrfmnc.LongName = 'Limited Performance Flag for Ecu Temperature';
DiagcStsLimdTPrfmnc.Description = 'Limited Performance Flag for Ecu Temperature';
DiagcStsLimdTPrfmnc.DocUnits = 'Cnt';
DiagcStsLimdTPrfmnc.EngDT = dt.lgc;
DiagcStsLimdTPrfmnc.EngInit = 0;
DiagcStsLimdTPrfmnc.EngMin = 0;
DiagcStsLimdTPrfmnc.EngMax = 1;
DiagcStsLimdTPrfmnc.ReadIn = {'EcuTMeasPer1'};
DiagcStsLimdTPrfmnc.ReadType = 'Rte';


EcuT = DataDict.IpSignal;
EcuT.LongName = 'Ecu Temperature from ADC';
EcuT.Description = 'Ecu Temperature from ADC';
EcuT.DocUnits = 'Volt';
EcuT.EngDT = dt.float32;
EcuT.EngInit = 0;
EcuT.EngMin = 0;
EcuT.EngMax = 5;
EcuT.ReadIn = {'EcuTMeasInit','EcuTMeasPer1'};
EcuT.ReadType = 'Rte';


EcuTAdcFaild = DataDict.IpSignal;
EcuTAdcFaild.LongName = 'Ecu Temperature Adc Failed';
EcuTAdcFaild.Description = 'Ecu Temperature Adc Failed';
EcuTAdcFaild.DocUnits = 'Cnt';
EcuTAdcFaild.EngDT = dt.lgc;
EcuTAdcFaild.EngInit = 0;
EcuTAdcFaild.EngMin = 0;
EcuTAdcFaild.EngMax = 1;
EcuTAdcFaild.ReadIn = {'EcuTMeasPer1'};
EcuTAdcFaild.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
EcuTFild = DataDict.OpSignal;
EcuTFild.LongName = 'Ecu Temperature Filtered';
EcuTFild.Description = 'Filtered temperature';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.SwcShoName = 'EcuTMeas';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.TestTolerance = 1;
EcuTFild.WrittenIn = {'EcuTMeasPer1'};
EcuTFild.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
EcuTMeasDftT = DataDict.Calibration;
EcuTMeasDftT.LongName = 'Default Temperature Used in Fault Cases';
EcuTMeasDftT.Description = 'Default Temp for fault conditions';
EcuTMeasDftT.DocUnits = 'DegCgrd';
EcuTMeasDftT.EngDT = dt.float32;
EcuTMeasDftT.EngVal = 60;
EcuTMeasDftT.EngMin = -50;
EcuTMeasDftT.EngMax = 150;
EcuTMeasDftT.Cardinality = 'Cmn';
EcuTMeasDftT.CustomerVisible = false;
EcuTMeasDftT.Online = false;
EcuTMeasDftT.Impact = 'L';
EcuTMeasDftT.TuningOwner = 'EPDT';
EcuTMeasDftT.GraphLink = {''};
EcuTMeasDftT.Monotony = 'None';
EcuTMeasDftT.MaxGrad = 0;
EcuTMeasDftT.PortName = 'EcuTMeasDftT';


EcuTMeasFilTau = DataDict.Calibration;
EcuTMeasFilTau.LongName = 'Temperature Software Filter Time Constant';
EcuTMeasFilTau.Description = ...
  'Sets the time constant for filtering the temperature measurement';
EcuTMeasFilTau.DocUnits = 'Hz';
EcuTMeasFilTau.EngDT = dt.float32;
EcuTMeasFilTau.EngVal = 0.5;
EcuTMeasFilTau.EngMin = 0.1;
EcuTMeasFilTau.EngMax = 10;
EcuTMeasFilTau.Cardinality = 'Cmn';
EcuTMeasFilTau.CustomerVisible = false;
EcuTMeasFilTau.Online = false;
EcuTMeasFilTau.Impact = 'M';
EcuTMeasFilTau.TuningOwner = 'FDD';
EcuTMeasFilTau.GraphLink = {''};
EcuTMeasFilTau.Monotony = 'None';
EcuTMeasFilTau.MaxGrad = 0;
EcuTMeasFilTau.PortName = 'EcuTMeasFilTau';


EcuTMeasNtc0x045FailStep = DataDict.Calibration;
EcuTMeasNtc0x045FailStep.LongName = 'Error Accumulator Test Step Size for Failed Ecu Temperature Test';
EcuTMeasNtc0x045FailStep.Description = 'Increments the error accumulator';
EcuTMeasNtc0x045FailStep.DocUnits = 'Cnt';
EcuTMeasNtc0x045FailStep.EngDT = dt.u16;
EcuTMeasNtc0x045FailStep.EngVal = 3000;
EcuTMeasNtc0x045FailStep.EngMin = 0;
EcuTMeasNtc0x045FailStep.EngMax = 65535;
EcuTMeasNtc0x045FailStep.Cardinality = 'Cmn';
EcuTMeasNtc0x045FailStep.CustomerVisible = false;
EcuTMeasNtc0x045FailStep.Online = false;
EcuTMeasNtc0x045FailStep.Impact = 'M';
EcuTMeasNtc0x045FailStep.TuningOwner = 'FDD';
EcuTMeasNtc0x045FailStep.GraphLink = {''};
EcuTMeasNtc0x045FailStep.Monotony = 'None';
EcuTMeasNtc0x045FailStep.MaxGrad = 0;
EcuTMeasNtc0x045FailStep.PortName = 'EcuTMeasNtc0x045FailStep';


EcuTMeasNtc0x045PassStep = DataDict.Calibration;
EcuTMeasNtc0x045PassStep.LongName = 'Error Accumulator Test Step Size for Pass Ecu Temperature Test';
EcuTMeasNtc0x045PassStep.Description = 'Decrements the error accumulator';
EcuTMeasNtc0x045PassStep.DocUnits = 'Cnt';
EcuTMeasNtc0x045PassStep.EngDT = dt.u16;
EcuTMeasNtc0x045PassStep.EngVal = 3000;
EcuTMeasNtc0x045PassStep.EngMin = 0;
EcuTMeasNtc0x045PassStep.EngMax = 65535;
EcuTMeasNtc0x045PassStep.Cardinality = 'Cmn';
EcuTMeasNtc0x045PassStep.CustomerVisible = false;
EcuTMeasNtc0x045PassStep.Online = false;
EcuTMeasNtc0x045PassStep.Impact = 'M';
EcuTMeasNtc0x045PassStep.TuningOwner = 'FDD';
EcuTMeasNtc0x045PassStep.GraphLink = {''};
EcuTMeasNtc0x045PassStep.Monotony = 'None';
EcuTMeasNtc0x045PassStep.MaxGrad = 0;
EcuTMeasNtc0x045PassStep.PortName = 'EcuTMeasNtc0x045PassStep';


EcuTMeasRngDiagcMax = DataDict.Calibration;
EcuTMeasRngDiagcMax.LongName = 'Diagnostic Maximum Temperature Limit';
EcuTMeasRngDiagcMax.Description = [...
  'Identifies the max temperature allowed to accumulate a diagnostic erro' ...
  'r'];
EcuTMeasRngDiagcMax.DocUnits = 'DegCgrd';
EcuTMeasRngDiagcMax.EngDT = dt.float32;
EcuTMeasRngDiagcMax.EngVal = 145;
EcuTMeasRngDiagcMax.EngMin = -50;
EcuTMeasRngDiagcMax.EngMax = 200;
EcuTMeasRngDiagcMax.Cardinality = 'Cmn';
EcuTMeasRngDiagcMax.CustomerVisible = false;
EcuTMeasRngDiagcMax.Online = false;
EcuTMeasRngDiagcMax.Impact = 'M';
EcuTMeasRngDiagcMax.TuningOwner = 'FDD';
EcuTMeasRngDiagcMax.GraphLink = {''};
EcuTMeasRngDiagcMax.Monotony = 'None';
EcuTMeasRngDiagcMax.MaxGrad = 0;
EcuTMeasRngDiagcMax.PortName = 'EcuTMeasRngDiagcMax';


EcuTMeasRngDiagcMin = DataDict.Calibration;
EcuTMeasRngDiagcMin.LongName = 'Diagnostic Minimum Temperature Limit';
EcuTMeasRngDiagcMin.Description = [...
  'Identifies the min temperature allowed to accumulate a diagnostic erro' ...
  'r'];
EcuTMeasRngDiagcMin.DocUnits = 'DegCgrd';
EcuTMeasRngDiagcMin.EngDT = dt.float32;
EcuTMeasRngDiagcMin.EngVal = -45;
EcuTMeasRngDiagcMin.EngMin = -50;
EcuTMeasRngDiagcMin.EngMax = 200;
EcuTMeasRngDiagcMin.Cardinality = 'Cmn';
EcuTMeasRngDiagcMin.CustomerVisible = false;
EcuTMeasRngDiagcMin.Online = false;
EcuTMeasRngDiagcMin.Impact = 'M';
EcuTMeasRngDiagcMin.TuningOwner = 'FDD';
EcuTMeasRngDiagcMin.GraphLink = {''};
EcuTMeasRngDiagcMin.Monotony = 'None';
EcuTMeasRngDiagcMin.MaxGrad = 0;
EcuTMeasRngDiagcMin.PortName = 'EcuTMeasRngDiagcMin';


EcuTMeasScag = DataDict.Calibration;
EcuTMeasScag.LongName = 'Gain for Temperature Sensor Deg C per Volt';
EcuTMeasScag.Description = 'Gain scaler (Deg C/V)';
EcuTMeasScag.DocUnits = 'DegCgrdPerVolt';
EcuTMeasScag.EngDT = dt.float32;
EcuTMeasScag.EngVal = 100;
EcuTMeasScag.EngMin = 0;
EcuTMeasScag.EngMax = 200;
EcuTMeasScag.Cardinality = 'Cmn';
EcuTMeasScag.CustomerVisible = false;
EcuTMeasScag.Online = false;
EcuTMeasScag.Impact = 'L';
EcuTMeasScag.TuningOwner = 'EPDT';
EcuTMeasScag.GraphLink = {''};
EcuTMeasScag.Monotony = 'None';
EcuTMeasScag.MaxGrad = 999;
EcuTMeasScag.PortName = 'EcuTMeasScag';


EcuTMeasScagOffs = DataDict.Calibration;
EcuTMeasScagOffs.LongName = 'Temperature Scaling Offset';
EcuTMeasScagOffs.Description = 'Offset to convert voltage to Deg C';
EcuTMeasScagOffs.DocUnits = 'DegCgrd';
EcuTMeasScagOffs.EngDT = dt.float32;
EcuTMeasScagOffs.EngVal = -50;
EcuTMeasScagOffs.EngMin = -100;
EcuTMeasScagOffs.EngMax = 150;
EcuTMeasScagOffs.Cardinality = 'Cmn';
EcuTMeasScagOffs.CustomerVisible = false;
EcuTMeasScagOffs.Online = false;
EcuTMeasScagOffs.Impact = 'L';
EcuTMeasScagOffs.TuningOwner = 'EPDT';
EcuTMeasScagOffs.GraphLink = {''};
EcuTMeasScagOffs.Monotony = 'None';
EcuTMeasScagOffs.MaxGrad = 999;
EcuTMeasScagOffs.PortName = 'EcuTMeasScagOffs';



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
EcuTMeasFilStVarPrev = DataDict.PIM;
EcuTMeasFilStVarPrev.LongName = 'Ecu Temperature Measure Filter';
EcuTMeasFilStVarPrev.Description = ...
  'Low pass filter used for ECU temperatire';
EcuTMeasFilStVarPrev.DocUnits = 'Uls';
EcuTMeasFilStVarPrev.EngDT = struct.FilLpRec1;
EcuTMeasFilStVarPrev.EngMin = struct('FilSt',-100,'FilGain',0.06089);
EcuTMeasFilStVarPrev.EngMax = struct('FilSt',1150,'FilGain',0.9981);
EcuTMeasFilStVarPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_100MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_100MILLISEC_SEC_F32.LongName = '100 Milliseconds';
ARCHGLBPRM_100MILLISEC_SEC_F32.Description = '100ms periodic loop time step';
ARCHGLBPRM_100MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_100MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_100MILLISEC_SEC_F32.EngVal = 0.1;
ARCHGLBPRM_100MILLISEC_SEC_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
TMeasFlt = DataDict.NTC;
TMeasFlt.NtcNr = NtcNr1.NTCNR_0X045;
TMeasFlt.NtcTyp = 'None';
TMeasFlt.LongName = 'Temperature Measure Fault';
TMeasFlt.Description = 'Temperature Measure Fault';
TMeasFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
TMeasFlt.NtcStInfo.Bit0Descr = 'High Temperature';
TMeasFlt.NtcStInfo.Bit1Descr = 'Low Temperature';
TMeasFlt.NtcStInfo.Bit2Descr = 'ADC Failed';
TMeasFlt.NtcStInfo.Bit3Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit4Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit5Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit6Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
