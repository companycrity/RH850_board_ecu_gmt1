 %%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-April-2015 11:13:32     %
%                                  Created with tool release: 2.8.0      %
%%-----------------------------------------------------------------------%

ES003A = DataDict.FDD;
ES003A.Version = '1.0.X';
ES003A.LongName = 'Power Disconnect';
ES003A.ShoName  = 'PwrDiscnct';
ES003A.DesignASIL = 'B';
ES003A.Description = [...
  'The "Power Disconnect" Function shall verify that the PowerDisconnect i' ...
  's not stuck closed at init once per Ignition Cycle'];
ES003A.Ntc = {'NTCNR_0X042','Deb','NTCNR_0X043','Deb','NTCNR_0X044','Deb','NTCNR_0X04A','Deb','NTCNR_0X04B','Deb','NTCNR_0X04C','Deb'};
ES003A.Dependencies = ...
	{'ES999A', {'ELECGLBPRM_IVTRCNT_CNT_U08'},
	 'ES250A', {'BattVltgSwdMax'}};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PwrDiscnctPer1 = DataDict.Runnable;
PwrDiscnctPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.Return = 'Standard';
GetNtcQlfrSts.CallLocation = {'PwrDiscnctPer1'};
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngMin = 1;
GetNtcQlfrSts.Arguments(1).EngMax = 511;
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngMin = 0;
GetNtcQlfrSts.Arguments(2).EngMax = 2;
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).Units = 'Enum';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';


SetNtcSts = DataDict.Client;
SetNtcSts.Return = 'Standard';
SetNtcSts.CallLocation = {'PwrDiscnctPer1'};
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 7;
BattVltg.EngMin = 6;
BattVltg.EngMax = 26.5;
BattVltg.MinReqdASIL = 'B';
BattVltg.ReadIn = {'PwrDiscnctPer1'};
BattVltg.ReadType = 'Rte';


BattVltgSwd1 = DataDict.IpSignal;
BattVltgSwd1.LongName = 'Switched Battery Voltage 1';
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.EngInit = 7;
BattVltgSwd1.EngMin = 6;
BattVltgSwd1.EngMax = 16;
BattVltgSwd1.MinReqdASIL = 'B';
BattVltgSwd1.ReadIn = {'PwrDiscnctPer1'};
BattVltgSwd1.ReadType = 'Rte';


BattVltgSwd2 = DataDict.IpSignal;
BattVltgSwd2.LongName = 'Switched Battery Voltage 2';
BattVltgSwd2.DocUnits = 'Volt';
BattVltgSwd2.EngDT = dt.float32;
BattVltgSwd2.EngInit = 7;
BattVltgSwd2.EngMin = 6;
BattVltgSwd2.EngMax = 16;
BattVltgSwd2.MinReqdASIL = 'B';
BattVltgSwd2.ReadIn = {'PwrDiscnctPer1'};
BattVltgSwd2.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;  
StrtUpSt.EngMax = 255;
StrtUpSt.MinReqdASIL = 'D';
StrtUpSt.ReadIn = {'PwrDiscnctPer1'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'The New System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.MinReqdASIL = 'B';
SysSt.ReadIn = {'PwrDiscnctPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
PwrDiscnctATestCmpl = DataDict.OpSignal;
PwrDiscnctATestCmpl.LongName = 'Power Disconnect ATest Complete';
PwrDiscnctATestCmpl.Description = [...
  'Flag indicating that the Power Disconnect Sequence A is completeor not' ...
  ''];
PwrDiscnctATestCmpl.DocUnits = 'Cnt';
PwrDiscnctATestCmpl.SwcShoName = 'PwrDiscnct';
PwrDiscnctATestCmpl.EngDT = dt.lgc;
PwrDiscnctATestCmpl.EngInit = 0;
PwrDiscnctATestCmpl.EngMin = 0;
PwrDiscnctATestCmpl.EngMax = 1;
PwrDiscnctATestCmpl.TestTolerance = 0;
PwrDiscnctATestCmpl.WrittenIn = {'PwrDiscnctPer1'};
PwrDiscnctATestCmpl.WriteType = 'Rte';


PwrDiscnctBTestCmpl = DataDict.OpSignal;
PwrDiscnctBTestCmpl.LongName = 'Power Disconnect BTest Complete';
PwrDiscnctBTestCmpl.Description = [...
  'Flag indicating that the Power Disconnect Sequence A is completeor not' ...
  ''];
PwrDiscnctBTestCmpl.DocUnits = 'Cnt';
PwrDiscnctBTestCmpl.SwcShoName = 'PwrDiscnct';
PwrDiscnctBTestCmpl.EngDT = dt.lgc;
PwrDiscnctBTestCmpl.EngInit = 0;
PwrDiscnctBTestCmpl.EngMin = 0;
PwrDiscnctBTestCmpl.EngMax = 1;
PwrDiscnctBTestCmpl.TestTolerance = 0;
PwrDiscnctBTestCmpl.WrittenIn = {'PwrDiscnctPer1'};
PwrDiscnctBTestCmpl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PwrDiscnctNtc0x042FailStep = DataDict.Calibration;
PwrDiscnctNtc0x042FailStep.LongName = 'Power Disconnect NTC 0x042 Fail/P-Step';
PwrDiscnctNtc0x042FailStep.Description = 'P-Step to determine NTC Qualifier';
PwrDiscnctNtc0x042FailStep.DocUnits = 'Cnt';
PwrDiscnctNtc0x042FailStep.EngDT = dt.u16;
PwrDiscnctNtc0x042FailStep.EngVal = 1024;
PwrDiscnctNtc0x042FailStep.EngMin = 0;
PwrDiscnctNtc0x042FailStep.EngMax = 65535;
PwrDiscnctNtc0x042FailStep.ProgrammedBy = 'Nexteer';
PwrDiscnctNtc0x042FailStep.Cardinality = 'I';
PwrDiscnctNtc0x042FailStep.CustomerVisible = false;
PwrDiscnctNtc0x042FailStep.Online = false;
PwrDiscnctNtc0x042FailStep.Impact = 'H';
PwrDiscnctNtc0x042FailStep.SafetyRating = 'D';
PwrDiscnctNtc0x042FailStep.TuningOwner = 'EPDT';
PwrDiscnctNtc0x042FailStep.GraphLink = '';
PwrDiscnctNtc0x042FailStep.Monotony = 'None';
PwrDiscnctNtc0x042FailStep.MaxGrad = 10;
PwrDiscnctNtc0x042FailStep.CoderInfo.CustomAttributes.PortName = 'PwrDiscnctNtc0x042FailStep';


PwrDiscnctNtc0x042PassStep = DataDict.Calibration;
PwrDiscnctNtc0x042PassStep.LongName = 'Power Disconnect NTC 0x042 Pass/N-Step';
PwrDiscnctNtc0x042PassStep.Description = 'N-Step to determine NTC Qualifier';
PwrDiscnctNtc0x042PassStep.DocUnits = 'Cnt';
PwrDiscnctNtc0x042PassStep.EngDT = dt.u16;
PwrDiscnctNtc0x042PassStep.EngVal = 4096;
PwrDiscnctNtc0x042PassStep.EngMin = 0;
PwrDiscnctNtc0x042PassStep.EngMax = 65535;
PwrDiscnctNtc0x042PassStep.ProgrammedBy = 'Nexteer';
PwrDiscnctNtc0x042PassStep.Cardinality = 'I';
PwrDiscnctNtc0x042PassStep.CustomerVisible = false;
PwrDiscnctNtc0x042PassStep.Online = false;
PwrDiscnctNtc0x042PassStep.Impact = 'H';
PwrDiscnctNtc0x042PassStep.SafetyRating = 'D';
PwrDiscnctNtc0x042PassStep.TuningOwner = 'EPDT';
PwrDiscnctNtc0x042PassStep.GraphLink = '';
PwrDiscnctNtc0x042PassStep.Monotony = 'None';
PwrDiscnctNtc0x042PassStep.MaxGrad = 10;
PwrDiscnctNtc0x042PassStep.CoderInfo.CustomAttributes.PortName = 'PwrDiscnctNtc0x042PassStep';


PwrDiscnctNtc0x04AFailStep = DataDict.Calibration;
PwrDiscnctNtc0x04AFailStep.LongName = 'Power Disconnect NTC 0x04A Fail Step';
PwrDiscnctNtc0x04AFailStep.Description = 'P-Step to determine NTC Qualifier';
PwrDiscnctNtc0x04AFailStep.DocUnits = 'Cnt';
PwrDiscnctNtc0x04AFailStep.EngDT = dt.u16;
PwrDiscnctNtc0x04AFailStep.EngVal = 1024;
PwrDiscnctNtc0x04AFailStep.EngMin = 0;
PwrDiscnctNtc0x04AFailStep.EngMax = 65535;
PwrDiscnctNtc0x04AFailStep.ProgrammedBy = 'Nexteer';
PwrDiscnctNtc0x04AFailStep.Cardinality = 'I';
PwrDiscnctNtc0x04AFailStep.CustomerVisible = false;
PwrDiscnctNtc0x04AFailStep.Online = false;
PwrDiscnctNtc0x04AFailStep.Impact = 'H';
PwrDiscnctNtc0x04AFailStep.SafetyRating = 'D';
PwrDiscnctNtc0x04AFailStep.TuningOwner = 'EPDT';
PwrDiscnctNtc0x04AFailStep.GraphLink = '';
PwrDiscnctNtc0x04AFailStep.Monotony = 'None';
PwrDiscnctNtc0x04AFailStep.MaxGrad = 10;
PwrDiscnctNtc0x04AFailStep.CoderInfo.CustomAttributes.PortName = 'PwrDiscnctNtc0x04AFailStep';


PwrDiscnctNtc0x04APassStep = DataDict.Calibration;
PwrDiscnctNtc0x04APassStep.LongName = 'Power Disconnect NTC 0x04A Pass Step';
PwrDiscnctNtc0x04APassStep.Description = 'N-Step to determine NTC Qualifier';
PwrDiscnctNtc0x04APassStep.DocUnits = 'Cnt';
PwrDiscnctNtc0x04APassStep.EngDT = dt.u16;
PwrDiscnctNtc0x04APassStep.EngVal = 4096;
PwrDiscnctNtc0x04APassStep.EngMin = 0;
PwrDiscnctNtc0x04APassStep.EngMax = 65535;
PwrDiscnctNtc0x04APassStep.ProgrammedBy = 'Nexteer';
PwrDiscnctNtc0x04APassStep.Cardinality = 'I';
PwrDiscnctNtc0x04APassStep.CustomerVisible = false;
PwrDiscnctNtc0x04APassStep.Online = false;
PwrDiscnctNtc0x04APassStep.Impact = 'H';
PwrDiscnctNtc0x04APassStep.SafetyRating = 'D';
PwrDiscnctNtc0x04APassStep.TuningOwner = 'EPDT';
PwrDiscnctNtc0x04APassStep.GraphLink = '';
PwrDiscnctNtc0x04APassStep.Monotony = 'None';
PwrDiscnctNtc0x04APassStep.MaxGrad = 10;
PwrDiscnctNtc0x04APassStep.CoderInfo.CustomAttributes.PortName = 'PwrDiscnctNtc0x04APassStep';


PwrDiscnctOpenThd = DataDict.Calibration;
PwrDiscnctOpenThd.LongName = 'Power Disconnect Open Threshold';
PwrDiscnctOpenThd.Description = [...
  'Voltage threshold for determining BattVltgSwd1 and BattVltgSwd2' ...
  'is open'];
PwrDiscnctOpenThd.DocUnits = 'Volt';
PwrDiscnctOpenThd.EngDT = dt.float32;
PwrDiscnctOpenThd.EngVal = 2;
PwrDiscnctOpenThd.EngMin = 0;
PwrDiscnctOpenThd.EngMax = 26.5; %%% Battery Voltage = 26.5 --> Threshold
PwrDiscnctOpenThd.ProgrammedBy = 'Nexteer';
PwrDiscnctOpenThd.Cardinality = 'N';
PwrDiscnctOpenThd.CustomerVisible = false;
PwrDiscnctOpenThd.Online = false;
PwrDiscnctOpenThd.Impact = 'L';
PwrDiscnctOpenThd.SafetyRating = 'B';
PwrDiscnctOpenThd.TuningOwner = 'FDD';
PwrDiscnctOpenThd.GraphLink = '';
PwrDiscnctOpenThd.Monotony = 'None';
PwrDiscnctOpenThd.MaxGrad = 10;
PwrDiscnctOpenThd.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------




%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
PwrDiscnctSeqATestCmplPrev = DataDict.PIM;
PwrDiscnctSeqATestCmplPrev.LongName = 'Power Disconnect First Run Complete';
PwrDiscnctSeqATestCmplPrev.Description = [...
  'Determines if the PwrDiscnctSequenceA has computes once per IGN Cycle'];
PwrDiscnctSeqATestCmplPrev.DocUnits = 'Boolean';
PwrDiscnctSeqATestCmplPrev.EngDT = dt.lgc;
PwrDiscnctSeqATestCmplPrev.EngInit = 0;
PwrDiscnctSeqATestCmplPrev.EngMin = 0;
PwrDiscnctSeqATestCmplPrev.EngMax = 1;

PwrDiscnctDeltaVltg1 = DataDict.PIM;
PwrDiscnctDeltaVltg1.LongName = 'Power Disconnect Delta Voltage 1';
PwrDiscnctDeltaVltg1.Description = 'Delta Voltage for Inverter 1';
PwrDiscnctDeltaVltg1.DocUnits = 'Volt';
PwrDiscnctDeltaVltg1.EngDT = dt.float32;
PwrDiscnctDeltaVltg1.EngInit = 0;
PwrDiscnctDeltaVltg1.EngMin = 0;
PwrDiscnctDeltaVltg1.EngMax = 16; 

PwrDiscnctDeltaVltg2 = DataDict.PIM;
PwrDiscnctDeltaVltg2.LongName = 'Power Disconnect Delta Voltage 2';
PwrDiscnctDeltaVltg2.Description = 'Delta Voltage for Inverter 2';
PwrDiscnctDeltaVltg2.DocUnits = 'Volt';
PwrDiscnctDeltaVltg2.EngDT = dt.float32;
PwrDiscnctDeltaVltg2.EngInit = 0;
PwrDiscnctDeltaVltg2.EngMin = 0;
PwrDiscnctDeltaVltg2.EngMax = 16;



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
%end of Data Dictionary