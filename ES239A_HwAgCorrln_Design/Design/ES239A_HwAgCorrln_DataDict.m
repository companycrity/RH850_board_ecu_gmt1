%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 28-Oct-2015 10:28:00       %
%                                  Created with tool release: 2.25.0     %
%                                  Synergy file: version: 1.3.0          %
%                                  Date Modified: 28-Oct-2015            %
%                                  Derived by: Muragesh Asundi(KPIT)     %
%%-----------------------------------------------------------------------%

ES239A = DataDict.FDD;
ES239A.Version = '1.3.X';
ES239A.LongName = 'Handwheel Angle Correlation';
ES239A.ShoName  = 'HwAgCorrln';
ES239A.DesignASIL = 'D';
ES239A.Description = [...
  'Provides signal correlation for handwheel angle per the SSI design.'];
ES239A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgCorrlnPer1 = DataDict.Runnable;
HwAgCorrlnPer1.Context = 'Rte';
HwAgCorrlnPer1.TimeStep = 0.004;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'HwAgCorrlnPer1'};
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).Units = 'Cnt';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];

GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwAgCorrlnPer1'};
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
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr0x092';
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwAgCorrlnPer1'};
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
HwAgA = DataDict.IpSignal;
HwAgA.LongName = 'Handwheel Angle A';
HwAgA.DocUnits = 'HwDeg';
HwAgA.EngDT = dt.float32;
HwAgA.EngInit = 0;
HwAgA.EngMin = -900;
HwAgA.EngMax = 900;
HwAgA.ReadIn = {'HwAgCorrlnPer1'};
HwAgA.ReadType = 'Rte';


HwAgAQlfr = DataDict.IpSignal;
HwAgAQlfr.LongName = 'Handwheel Angle a Qualifier';
HwAgAQlfr.DocUnits = 'Cnt';
HwAgAQlfr.EngDT = enum.SigQlfr1;
HwAgAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAgAQlfr.ReadIn = {'HwAgCorrlnPer1'};
HwAgAQlfr.ReadType = 'Rte';


HwAgARollgCntr = DataDict.IpSignal;
HwAgARollgCntr.LongName = 'Handwheel Angle a Rolling Counter';
HwAgARollgCntr.DocUnits = 'Cnt';
HwAgARollgCntr.EngDT = dt.u08;
HwAgARollgCntr.EngInit = 0;
HwAgARollgCntr.EngMin = 0;
HwAgARollgCntr.EngMax = 255;
HwAgARollgCntr.ReadIn = {'HwAgCorrlnPer1'};
HwAgARollgCntr.ReadType = 'Rte';


HwAgB = DataDict.IpSignal;
HwAgB.LongName = 'Handwheel Angle B';
HwAgB.DocUnits = 'HwDeg';
HwAgB.EngDT = dt.float32;
HwAgB.EngInit = 0;
HwAgB.EngMin = -900;
HwAgB.EngMax = 900;
HwAgB.ReadIn = {'HwAgCorrlnPer1'};
HwAgB.ReadType = 'Rte';


HwAgBQlfr = DataDict.IpSignal;
HwAgBQlfr.LongName = 'Handwheel Angle B Qualifier';
HwAgBQlfr.DocUnits = 'Cnt';
HwAgBQlfr.EngDT = enum.SigQlfr1;
HwAgBQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAgBQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAgBQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAgBQlfr.ReadIn = {'HwAgCorrlnPer1'};
HwAgBQlfr.ReadType = 'Rte';


HwAgBRollgCntr = DataDict.IpSignal;
HwAgBRollgCntr.LongName = 'Handwheel Angle B Rolling Counter';
HwAgBRollgCntr.DocUnits = 'Cnt';
HwAgBRollgCntr.EngDT = dt.u08;
HwAgBRollgCntr.EngInit = 0;
HwAgBRollgCntr.EngMin = 0;
HwAgBRollgCntr.EngMax = 255;
HwAgBRollgCntr.ReadIn = {'HwAgCorrlnPer1'};
HwAgBRollgCntr.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgCorrlnSt = DataDict.OpSignal;
HwAgCorrlnSt.LongName = 'Handwheel Angle Correlation Status';
HwAgCorrlnSt.Description = [...
  'Indicates the correlation status of handwheel angle'];
HwAgCorrlnSt.DocUnits = 'Cnt';
HwAgCorrlnSt.SwcShoName = 'HwAgCorrln';
HwAgCorrlnSt.EngDT = dt.b08;
HwAgCorrlnSt.EngInit = 3;
HwAgCorrlnSt.EngMin = 0;
HwAgCorrlnSt.EngMax = 3;
HwAgCorrlnSt.TestTolerance = 0;
HwAgCorrlnSt.WrittenIn = {'HwAgCorrlnPer1'};
HwAgCorrlnSt.WriteType = 'Rte';


HwAgIdptSig = DataDict.OpSignal;
HwAgIdptSig.LongName = 'Handwheel Angle Independent Signals';
HwAgIdptSig.Description = [...
  'Number of valid independent signals'];
HwAgIdptSig.DocUnits = 'Cnt';
HwAgIdptSig.SwcShoName = 'HwAgCorrln';
HwAgIdptSig.EngDT = dt.u08;
HwAgIdptSig.EngInit = 2;
HwAgIdptSig.EngMin = 0;
HwAgIdptSig.EngMax = 2;
HwAgIdptSig.TestTolerance = 0;
HwAgIdptSig.WrittenIn = {'HwAgCorrlnPer1'};
HwAgIdptSig.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAgCorrlnHwAgAbsltDif = DataDict.Calibration;
HwAgCorrlnHwAgAbsltDif.LongName = 'Handwheel Angle Correlation Handwheel Angle Absolute Difference';
HwAgCorrlnHwAgAbsltDif.Description = [...
  'Max difference allowed between angle sensors'];
HwAgCorrlnHwAgAbsltDif.DocUnits = 'HwDeg';
HwAgCorrlnHwAgAbsltDif.EngDT = dt.float32;
HwAgCorrlnHwAgAbsltDif.EngVal = 15;
HwAgCorrlnHwAgAbsltDif.EngMin = 0;
HwAgCorrlnHwAgAbsltDif.EngMax = 900;
HwAgCorrlnHwAgAbsltDif.Cardinality = 'Cmn';
HwAgCorrlnHwAgAbsltDif.CustomerVisible = false;
HwAgCorrlnHwAgAbsltDif.Online = false;
HwAgCorrlnHwAgAbsltDif.Impact = 'H';
HwAgCorrlnHwAgAbsltDif.TuningOwner = 'Safety';
HwAgCorrlnHwAgAbsltDif.GraphLink = {''};
HwAgCorrlnHwAgAbsltDif.Monotony = 'None';
HwAgCorrlnHwAgAbsltDif.MaxGrad = 999;
HwAgCorrlnHwAgAbsltDif.PortName = 'UNDEFINED';


HwAgCorrlnHwAgMaxStall = DataDict.Calibration;
HwAgCorrlnHwAgMaxStall.LongName = 'Handwheel Angle Arbitration Handwheel Angle Max Stall';
HwAgCorrlnHwAgMaxStall.Description = [...
  'Stall counter for handwheel angle arbitration'];
HwAgCorrlnHwAgMaxStall.DocUnits = 'Cnt';
HwAgCorrlnHwAgMaxStall.EngDT = dt.u08;
HwAgCorrlnHwAgMaxStall.EngVal = 25;
HwAgCorrlnHwAgMaxStall.EngMin = 0;
HwAgCorrlnHwAgMaxStall.EngMax = 255;
HwAgCorrlnHwAgMaxStall.Cardinality = 'Cmn';
HwAgCorrlnHwAgMaxStall.CustomerVisible = false;
HwAgCorrlnHwAgMaxStall.Online = false;
HwAgCorrlnHwAgMaxStall.Impact = 'H';
HwAgCorrlnHwAgMaxStall.TuningOwner = 'Safety';
HwAgCorrlnHwAgMaxStall.GraphLink = {''};
HwAgCorrlnHwAgMaxStall.Monotony = 'None';
HwAgCorrlnHwAgMaxStall.MaxGrad = 999;
HwAgCorrlnHwAgMaxStall.PortName = 'UNDEFINED';


HwAgCorrlnNtc0x092FailStep = DataDict.Calibration;
HwAgCorrlnNtc0x092FailStep.LongName = 'Handwheel Angle Correlation NTC 0x092 Fail Step';
HwAgCorrlnNtc0x092FailStep.Description = [...
  'Fail Step for handwheel angle correlation diagnostic'];
HwAgCorrlnNtc0x092FailStep.DocUnits = 'Cnt';
HwAgCorrlnNtc0x092FailStep.EngDT = dt.u16;
HwAgCorrlnNtc0x092FailStep.EngVal = 400;
HwAgCorrlnNtc0x092FailStep.EngMin = 0;
HwAgCorrlnNtc0x092FailStep.EngMax = 65535;
HwAgCorrlnNtc0x092FailStep.Cardinality = 'Cmn';
HwAgCorrlnNtc0x092FailStep.CustomerVisible = false;
HwAgCorrlnNtc0x092FailStep.Online = false;
HwAgCorrlnNtc0x092FailStep.Impact = 'H';
HwAgCorrlnNtc0x092FailStep.TuningOwner = 'Safety';
HwAgCorrlnNtc0x092FailStep.GraphLink = {''};
HwAgCorrlnNtc0x092FailStep.Monotony = 'None';
HwAgCorrlnNtc0x092FailStep.MaxGrad = 999;
HwAgCorrlnNtc0x092FailStep.PortName = 'UNDEFINED';


HwAgCorrlnNtc0x092PassStep = DataDict.Calibration;
HwAgCorrlnNtc0x092PassStep.LongName = 'Handwheel Angle Correlation NTC 0x092 Pass Step';
HwAgCorrlnNtc0x092PassStep.Description = [...
  'Pass Step for handwheel angle correlation diagnostic'];
HwAgCorrlnNtc0x092PassStep.DocUnits = 'Cnt';
HwAgCorrlnNtc0x092PassStep.EngDT = dt.u16;
HwAgCorrlnNtc0x092PassStep.EngVal = 4000;
HwAgCorrlnNtc0x092PassStep.EngMin = 0;
HwAgCorrlnNtc0x092PassStep.EngMax = 65535;
HwAgCorrlnNtc0x092PassStep.Cardinality = 'Cmn';
HwAgCorrlnNtc0x092PassStep.CustomerVisible = false;
HwAgCorrlnNtc0x092PassStep.Online = false;
HwAgCorrlnNtc0x092PassStep.Impact = 'H';
HwAgCorrlnNtc0x092PassStep.TuningOwner = 'Safety';
HwAgCorrlnNtc0x092PassStep.GraphLink = {''};
HwAgCorrlnNtc0x092PassStep.Monotony = 'None';
HwAgCorrlnNtc0x092PassStep.MaxGrad = 999;
HwAgCorrlnNtc0x092PassStep.PortName = 'UNDEFINED';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwAgCorrlnAgAAvl = DataDict.Display;
dHwAgCorrlnAgAAvl.LongName = 'Handwheel Angle Correlation Channel a Available';
dHwAgCorrlnAgAAvl.Description = [...
  'Handwheel Angle Correlation Channel A Available'];
dHwAgCorrlnAgAAvl.DocUnits = 'Cnt';
dHwAgCorrlnAgAAvl.EngDT = dt.lgc;
dHwAgCorrlnAgAAvl.EngMin = 0;
dHwAgCorrlnAgAAvl.EngMax = 1;
dHwAgCorrlnAgAAvl.InitRowCol = [1  1];


dHwAgCorrlnAgBAvl = DataDict.Display;
dHwAgCorrlnAgBAvl.LongName = 'Handwheel Angle Correlation Channel B Available';
dHwAgCorrlnAgBAvl.Description = [...
  'Handwheel Angle Correlation Channel B Available'];
dHwAgCorrlnAgBAvl.DocUnits = 'Cnt';
dHwAgCorrlnAgBAvl.EngDT = dt.lgc;
dHwAgCorrlnAgBAvl.EngMin = 0;
dHwAgCorrlnAgBAvl.EngMax = 1;
dHwAgCorrlnAgBAvl.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAgARollgCntPrev = DataDict.PIM;
HwAgARollgCntPrev.LongName = 'Handwheel Angle Correlation Handwheel Angle a Rolling Counter Previous';
HwAgARollgCntPrev.Description = [...
  'Previous value of rolling counter for sensor A'];
HwAgARollgCntPrev.DocUnits = 'Cnt';
HwAgARollgCntPrev.EngDT = dt.u08;
HwAgARollgCntPrev.EngMin = 0;
HwAgARollgCntPrev.EngMax = 255;
HwAgARollgCntPrev.InitRowCol = [1  1];


HwAgAStallCntPrev = DataDict.PIM;
HwAgAStallCntPrev.LongName = 'Handwheel Angle a Stall Counter Previous';
HwAgAStallCntPrev.Description = [...
  'Handwheel Angle a Stall Counter Previous'];
HwAgAStallCntPrev.DocUnits = 'Cnt';
HwAgAStallCntPrev.EngDT = dt.u08;
HwAgAStallCntPrev.EngMin = 0;
HwAgAStallCntPrev.EngMax = 255;
HwAgAStallCntPrev.InitRowCol = [1  1];


HwAgBRollgCntPrev = DataDict.PIM;
HwAgBRollgCntPrev.LongName = 'Handwheel Angle B Rolling Counter Previous';
HwAgBRollgCntPrev.Description = [...
  'Previous value of rolling counter for sensor B'];
HwAgBRollgCntPrev.DocUnits = 'Cnt';
HwAgBRollgCntPrev.EngDT = dt.u08;
HwAgBRollgCntPrev.EngMin = 0;
HwAgBRollgCntPrev.EngMax = 255;
HwAgBRollgCntPrev.InitRowCol = [1  1];


HwAgBStallCntPrev = DataDict.PIM;
HwAgBStallCntPrev.LongName = 'Handwheel Angle B Stall Counter Previous';
HwAgBStallCntPrev.Description = [...
  'Handwheel Angle B Stall Counter Previous'];
HwAgBStallCntPrev.DocUnits = 'Cnt';
HwAgBStallCntPrev.EngDT = dt.u08;
HwAgBStallCntPrev.EngMin = 0;
HwAgBStallCntPrev.EngMax = 255;
HwAgBStallCntPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CORRLNSTSMAXVAL_CNT_U08 = DataDict.Constant;
CORRLNSTSMAXVAL_CNT_U08.LongName = 'Correlation Status Maximum Value';
CORRLNSTSMAXVAL_CNT_U08.Description = 'Correlation Status Maximum Value';
CORRLNSTSMAXVAL_CNT_U08.DocUnits = 'Cnt';
CORRLNSTSMAXVAL_CNT_U08.EngDT = dt.u08;
CORRLNSTSMAXVAL_CNT_U08.EngVal = 3;
CORRLNSTSMAXVAL_CNT_U08.Header = '';
CORRLNSTSMAXVAL_CNT_U08.Define = 'Local';


CORRLNSTSMINVAL_CNT_U08 = DataDict.Constant;
CORRLNSTSMINVAL_CNT_U08.LongName = 'Correlation Status Minimum Value';
CORRLNSTSMINVAL_CNT_U08.Description = 'Correlation Status Minimum Value';
CORRLNSTSMINVAL_CNT_U08.DocUnits = 'Cnt';
CORRLNSTSMINVAL_CNT_U08.EngDT = dt.u08;
CORRLNSTSMINVAL_CNT_U08.EngVal = 0;
CORRLNSTSMINVAL_CNT_U08.Header = '';
CORRLNSTSMINVAL_CNT_U08.Define = 'Local';


FLTINJ_HWAGCORRLN_HWAGIDPTSIG = DataDict.Constant;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.LongName = 'Handwheel Angle Correlation Handhweel Angle Independent Signals';
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.Description = [...
  'Output signal of Handwheel Angle Correlation function.'];
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.DocUnits = 'Uls';
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.EngDT = dt.u16;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.EngVal = 35;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.Header = 'FltInj.h';
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.Define = 'Global';


NRVLDSIGMAX_CNT_U08 = DataDict.Constant;
NRVLDSIGMAX_CNT_U08.LongName = 'Number of Valid Signals Maximum';
NRVLDSIGMAX_CNT_U08.Description = [...
  'Maximum number of valid handwheel angle signals allowed'];
NRVLDSIGMAX_CNT_U08.DocUnits = 'Cnt';
NRVLDSIGMAX_CNT_U08.EngDT = dt.u08;
NRVLDSIGMAX_CNT_U08.EngVal = 2;
NRVLDSIGMAX_CNT_U08.Header = '';
NRVLDSIGMAX_CNT_U08.Define = 'Local';


NRVLDSIGMIN_CNT_U08 = DataDict.Constant;
NRVLDSIGMIN_CNT_U08.LongName = 'Number of Valid Signals Minimum';
NRVLDSIGMIN_CNT_U08.Description = [...
  'Minimum number of valid handwheel angle signals allowed'];
NRVLDSIGMIN_CNT_U08.DocUnits = 'Cnt';
NRVLDSIGMIN_CNT_U08.EngDT = dt.u08;
NRVLDSIGMIN_CNT_U08.EngVal = 0;
NRVLDSIGMIN_CNT_U08.Header = '';
NRVLDSIGMIN_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
