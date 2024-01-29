%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Sep-2016 09:48:16       %
%                                  Created with tool release: 2.45.0     %
%                                  Synergy file: %version: 8 %           %
%                                  Derived by: %derived_by: cz68ds %          %
%%-----------------------------------------------------------------------%

ES229A = DataDict.FDD;
ES229A.Version = '3.2.X';
ES229A.LongName = 'Handwheel Torque Corrleation';
ES229A.ShoName  = 'HwTqCorrln';
ES229A.DesignASIL = 'D';
ES229A.Description = [...
  'Function is responsible for immediate and long term correlation checks' ...
  ' on the torque sensor signals'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTqCorrlnInit1 = DataDict.Runnable;
HwTqCorrlnInit1.Context = 'Rte';
HwTqCorrlnInit1.TimeStep = 0;
HwTqCorrlnInit1.Description = 'Initialization function';

HwTqCorrlnPer1 = DataDict.Runnable;
HwTqCorrlnPer1.Context = 'Rte';
HwTqCorrlnPer1.TimeStep = 0.002;
HwTqCorrlnPer1.Description = 'Signal Availability Calculation';

HwTqCorrlnPer2 = DataDict.Runnable;
HwTqCorrlnPer2.Context = 'Rte';
HwTqCorrlnPer2.TimeStep = 0.004;
HwTqCorrlnPer2.Description = 'Idpt Calculation';

HwTqCorrlnPer3 = DataDict.Runnable;
HwTqCorrlnPer3.Context = 'Rte';
HwTqCorrlnPer3.TimeStep = 0.1;
HwTqCorrlnPer3.Description = 'Steady state Fault evaluation';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'HwTqCorrlnPer2'};
FltInj_u08.Description = 'Fault Injection function';
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).TestTolerance = 999;
FltInj_u08.Arguments(1).Units = 'Cnt';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(1).Description = '';
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];
FltInj_u08.Arguments(2).Description = '';


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTqCorrlnPer1','HwTqCorrlnPer2'};
GetNtcQlfrSts.Description = 'Get NTC Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = '';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = '';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = '';


HwTqChACmnModCmpLpFilSt_SetRamBlockStatus = DataDict.Client;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.CallLocation = {'HwTqCorrlnPer3'};
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Description = 'Common Mode Filter Ch A';
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Return.Type = 'Standard';
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Return.Min = 0;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Return.Max = 1;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Return.TestTolerance = 0;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Return.Description = '';
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwTqChACmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Description = '';


HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus = DataDict.Client;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.CallLocation = {'HwTqCorrlnPer3'};
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Description = 'Common Mode Filter Ch B';
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Return.Type = 'Standard';
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Return.Min = 0;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Return.Max = 1;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Return.TestTolerance = 0;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Return.Description = '';
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwTqChBCmnModCmpLpFilSt_SetRamBlockStatus.Arguments(1).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwTqCorrlnPer2'};
SetNtcSts.Description = 'NTC Client Call Diag Manager';
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
HwTqA = DataDict.IpSignal;
HwTqA.LongName = 'Handwheel Torque A';
HwTqA.Description = 'Handwheel Torque Sensor A Value';
HwTqA.DocUnits = 'HwNwtMtr';
HwTqA.EngDT = dt.float32;
HwTqA.EngInit = 0;
HwTqA.EngMin = -10;
HwTqA.EngMax = 10;
HwTqA.ReadIn = {'HwTqCorrlnPer1','HwTqCorrlnPer2'};
HwTqA.ReadType = 'Rte';


HwTqAQlfr = DataDict.IpSignal;
HwTqAQlfr.LongName = 'Handwheel Torque A Qualifier';
HwTqAQlfr.Description = 'Handwheel Torque Sensor A Qualifier';
HwTqAQlfr.DocUnits = 'Cnt';
HwTqAQlfr.EngDT = enum.SigQlfr1;
HwTqAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqAQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqAQlfr.ReadType = 'Rte';


HwTqARollgCntr = DataDict.IpSignal;
HwTqARollgCntr.LongName = 'Handwheel Torque Sensor A Rolling Counter';
HwTqARollgCntr.Description = 'Instantaneous Error Indicator';
HwTqARollgCntr.DocUnits = 'Cnt';
HwTqARollgCntr.EngDT = dt.u08;
HwTqARollgCntr.EngInit = 0;
HwTqARollgCntr.EngMin = 0;
HwTqARollgCntr.EngMax = 255;
HwTqARollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqARollgCntr.ReadType = 'Rte';


HwTqB = DataDict.IpSignal;
HwTqB.LongName = 'Handwheel Torque B';
HwTqB.Description = 'Handwheel Torque Sensor B Value';
HwTqB.DocUnits = 'HwNwtMtr';
HwTqB.EngDT = dt.float32;
HwTqB.EngInit = 0;
HwTqB.EngMin = -10;
HwTqB.EngMax = 10;
HwTqB.ReadIn = {'HwTqCorrlnPer1','HwTqCorrlnPer2'};
HwTqB.ReadType = 'Rte';


HwTqBQlfr = DataDict.IpSignal;
HwTqBQlfr.LongName = 'Handwheel Torque B Qualifier';
HwTqBQlfr.Description = 'Qualified Error Indicator';
HwTqBQlfr.DocUnits = 'Cnt';
HwTqBQlfr.EngDT = enum.SigQlfr1;
HwTqBQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqBQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqBQlfr.ReadType = 'Rte';


HwTqBRollgCntr = DataDict.IpSignal;
HwTqBRollgCntr.LongName = 'Handwheel Torque B Rolling Counter';
HwTqBRollgCntr.Description = 'Instantaneous Error Indicator';
HwTqBRollgCntr.DocUnits = 'Cnt';
HwTqBRollgCntr.EngDT = dt.u08;
HwTqBRollgCntr.EngInit = 0;
HwTqBRollgCntr.EngMin = 0;
HwTqBRollgCntr.EngMax = 255;
HwTqBRollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqBRollgCntr.ReadType = 'Rte';


HwTqC = DataDict.IpSignal;
HwTqC.LongName = 'Handwheel Torque C';
HwTqC.Description = 'Handwheel Torque Sensor C Value';
HwTqC.DocUnits = 'HwNwtMtr';
HwTqC.EngDT = dt.float32;
HwTqC.EngInit = 0;
HwTqC.EngMin = -10;
HwTqC.EngMax = 10;
HwTqC.ReadIn = {'HwTqCorrlnPer1','HwTqCorrlnPer2'};
HwTqC.ReadType = 'Rte';


HwTqCQlfr = DataDict.IpSignal;
HwTqCQlfr.LongName = 'Handwheel Torque C Qualifier';
HwTqCQlfr.Description = 'Qualified Error Indicator';
HwTqCQlfr.DocUnits = 'Cnt';
HwTqCQlfr.EngDT = enum.SigQlfr1;
HwTqCQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqCQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqCQlfr.ReadType = 'Rte';


HwTqCRollgCntr = DataDict.IpSignal;
HwTqCRollgCntr.LongName = 'Handwheel Torque C Rolling Counter';
HwTqCRollgCntr.Description = 'Instantaneous Error Indicator';
HwTqCRollgCntr.DocUnits = 'Cnt';
HwTqCRollgCntr.EngDT = dt.u08;
HwTqCRollgCntr.EngInit = 0;
HwTqCRollgCntr.EngMin = 0;
HwTqCRollgCntr.EngMax = 255;
HwTqCRollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqCRollgCntr.ReadType = 'Rte';


HwTqChA = DataDict.IpSignal;
HwTqChA.LongName = 'Handwheel Torque Channel A';
HwTqChA.Description = 'Channel A Value';
HwTqChA.DocUnits = 'HwNwtMtr';
HwTqChA.EngDT = dt.float32;
HwTqChA.EngInit = 0;
HwTqChA.EngMin = -10;
HwTqChA.EngMax = 10;
HwTqChA.ReadIn = {'HwTqCorrlnPer3'};
HwTqChA.ReadType = 'Rte';


HwTqChB = DataDict.IpSignal;
HwTqChB.LongName = 'Handwheel Torque Channel B';
HwTqChB.Description = 'Channel B Value';
HwTqChB.DocUnits = 'HwNwtMtr';
HwTqChB.EngDT = dt.float32;
HwTqChB.EngInit = 0;
HwTqChB.EngMin = -10;
HwTqChB.EngMax = 10;
HwTqChB.ReadIn = {'HwTqCorrlnPer3'};
HwTqChB.ReadType = 'Rte';


HwTqD = DataDict.IpSignal;
HwTqD.LongName = 'Handwheel Torque D';
HwTqD.Description = 'Handwheel Torque Sensor D Value';
HwTqD.DocUnits = 'HwNwtMtr';
HwTqD.EngDT = dt.float32;
HwTqD.EngInit = 0;
HwTqD.EngMin = -10;
HwTqD.EngMax = 10;
HwTqD.ReadIn = {'HwTqCorrlnPer1','HwTqCorrlnPer2'};
HwTqD.ReadType = 'Rte';


HwTqDQlfr = DataDict.IpSignal;
HwTqDQlfr.LongName = 'Handwheel Torque D Qualifier';
HwTqDQlfr.Description = 'qualified Error Indicator';
HwTqDQlfr.DocUnits = 'Cnt';
HwTqDQlfr.EngDT = enum.SigQlfr1;
HwTqDQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqDQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqDQlfr.ReadType = 'Rte';


HwTqDRollgCntr = DataDict.IpSignal;
HwTqDRollgCntr.LongName = 'Handwheel Torque Sensor D Rolling Counter';
HwTqDRollgCntr.Description = 'Instantaneous Error Indicator';
HwTqDRollgCntr.DocUnits = 'Cnt';
HwTqDRollgCntr.EngDT = dt.u08;
HwTqDRollgCntr.EngInit = 0;
HwTqDRollgCntr.EngMin = 0;
HwTqDRollgCntr.EngMax = 255;
HwTqDRollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqDRollgCntr.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTqChACorrlnTraErr = DataDict.OpSignal;
HwTqChACorrlnTraErr.LongName = 'Handwheel Torque Channel A  Correlation Transient Error';
HwTqChACorrlnTraErr.Description = [...
  'Difference between the Transient LPF output and the limited CMC LPF ou' ...
  'tput used in Ch A long term correlation diagnostic'];
HwTqChACorrlnTraErr.DocUnits = 'HwNwtMtr';
HwTqChACorrlnTraErr.SwcShoName = 'HwTqCorrln';
HwTqChACorrlnTraErr.EngDT = dt.float32;
HwTqChACorrlnTraErr.EngInit = 0;
HwTqChACorrlnTraErr.EngMin = -10;
HwTqChACorrlnTraErr.EngMax = 10;
HwTqChACorrlnTraErr.TestTolerance = 0.0049;
HwTqChACorrlnTraErr.WrittenIn = {'HwTqCorrlnPer2'};
HwTqChACorrlnTraErr.WriteType = 'Rte';


HwTqChBCorrlnTraErr = DataDict.OpSignal;
HwTqChBCorrlnTraErr.LongName = 'Handwheel Torque Channel B Correlation Transient Error';
HwTqChBCorrlnTraErr.Description = [...
  'Difference between the Transient LPF output and the limited CMC LPF ou' ...
  'tput used in Ch B long term correlation diagnostic'];
HwTqChBCorrlnTraErr.DocUnits = 'HwNwtMtr';
HwTqChBCorrlnTraErr.SwcShoName = 'HwTqCorrln';
HwTqChBCorrlnTraErr.EngDT = dt.float32;
HwTqChBCorrlnTraErr.EngInit = 0;
HwTqChBCorrlnTraErr.EngMin = -10;
HwTqChBCorrlnTraErr.EngMax = 10;
HwTqChBCorrlnTraErr.TestTolerance = 0.0049;
HwTqChBCorrlnTraErr.WrittenIn = {'HwTqCorrlnPer2'};
HwTqChBCorrlnTraErr.WriteType = 'Rte';


HwTqCorrlnSts = DataDict.OpSignal;
HwTqCorrlnSts.LongName = 'Handwheel Torque Correlation Status';
HwTqCorrlnSts.Description = [...
  'Each bit corresponds to Signal N, indicating if immediate correlation ' ...
  'check passed / failed'];
HwTqCorrlnSts.DocUnits = 'Cnt';
HwTqCorrlnSts.SwcShoName = 'HwTqCorrln';
HwTqCorrlnSts.EngDT = dt.u08;
HwTqCorrlnSts.EngInit = 15;
HwTqCorrlnSts.EngMin = 0;
HwTqCorrlnSts.EngMax = 255;
HwTqCorrlnSts.TestTolerance = 0;
HwTqCorrlnSts.WrittenIn = {'HwTqCorrlnPer1'};
HwTqCorrlnSts.WriteType = 'Rte';


HwTqIdptSig = DataDict.OpSignal;
HwTqIdptSig.LongName = 'Handwheel Torque Independent Signals';
HwTqIdptSig.Description = [...
  'Number of independent signals available for LOA mgr'];
HwTqIdptSig.DocUnits = 'Cnt';
HwTqIdptSig.SwcShoName = 'HwTqCorrln';
HwTqIdptSig.EngDT = dt.u08;
HwTqIdptSig.EngInit = 4;
HwTqIdptSig.EngMin = 0;
HwTqIdptSig.EngMax = 4;
HwTqIdptSig.TestTolerance = 0;
HwTqIdptSig.WrittenIn = {'HwTqCorrlnPer2'};
HwTqIdptSig.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
HwTqChAAvl = DataDict.IRV;
HwTqChAAvl.LongName = 'Handwheel Torque Channel A Available';
HwTqChAAvl.Description = [...
  'Handwheel Torque Channel A Available for correlation '];
HwTqChAAvl.DocUnits = 'Cnt';
HwTqChAAvl.EngDT = dt.lgc;
HwTqChAAvl.EngInit = 1;
HwTqChAAvl.EngMin = 0;
HwTqChAAvl.EngMax = 1;
HwTqChAAvl.ReadIn = {'HwTqCorrlnPer2'};
HwTqChAAvl.WrittenIn = {'HwTqCorrlnPer1'};


HwTqChATqSumLim = DataDict.IRV;
HwTqChATqSumLim.LongName = 'Handwheel Torque Channel A Torque Sum Limit';
HwTqChATqSumLim.Description = 'Limited torque sum error for Ch A ';
HwTqChATqSumLim.DocUnits = 'HwNwtMtr';
HwTqChATqSumLim.EngDT = dt.float32;
HwTqChATqSumLim.EngInit = 0;
HwTqChATqSumLim.EngMin = -10;
HwTqChATqSumLim.EngMax = 10;
HwTqChATqSumLim.ReadIn = {'HwTqCorrlnPer3'};
HwTqChATqSumLim.WrittenIn = {'HwTqCorrlnPer2'};


HwTqChBAvl = DataDict.IRV;
HwTqChBAvl.LongName = 'Handwheel Torque Channel B Available';
HwTqChBAvl.Description = [...
  'Handwheel Torque Channel B Available for correlation '];
HwTqChBAvl.DocUnits = 'Cnt';
HwTqChBAvl.EngDT = dt.lgc;
HwTqChBAvl.EngInit = 1;
HwTqChBAvl.EngMin = 0;
HwTqChBAvl.EngMax = 1;
HwTqChBAvl.ReadIn = {'HwTqCorrlnPer2'};
HwTqChBAvl.WrittenIn = {'HwTqCorrlnPer1'};


HwTqChBTqSumLim = DataDict.IRV;
HwTqChBTqSumLim.LongName = 'Handwheel Torque Channel B Torque Sum Limit';
HwTqChBTqSumLim.Description = 'Limited torque sum error for Ch B';
HwTqChBTqSumLim.DocUnits = 'HwNwtMtr';
HwTqChBTqSumLim.EngDT = dt.float32;
HwTqChBTqSumLim.EngInit = 0;
HwTqChBTqSumLim.EngMin = -10;
HwTqChBTqSumLim.EngMax = 10;
HwTqChBTqSumLim.ReadIn = {'HwTqCorrlnPer3'};
HwTqChBTqSumLim.WrittenIn = {'HwTqCorrlnPer2'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTqCorrlnChACmnModCmpLpFilActvnThd = DataDict.Calibration;
HwTqCorrlnChACmnModCmpLpFilActvnThd.LongName = 'Handwheel Torque Correlation Channel A Common Mode Compensation Low Pass Filter Activation Threshold';
HwTqCorrlnChACmnModCmpLpFilActvnThd.Description = [...
  'Minimum Threshold required to activate the long term compensation CMC ' ...
  'LPF for Channel A'];
HwTqCorrlnChACmnModCmpLpFilActvnThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChACmnModCmpLpFilActvnThd.EngDT = dt.float32;
HwTqCorrlnChACmnModCmpLpFilActvnThd.EngVal = 0.2857143;
HwTqCorrlnChACmnModCmpLpFilActvnThd.EngMin = 0;
HwTqCorrlnChACmnModCmpLpFilActvnThd.EngMax = 20;
HwTqCorrlnChACmnModCmpLpFilActvnThd.Cardinality = 'Cmn';
HwTqCorrlnChACmnModCmpLpFilActvnThd.CustomerVisible = false;
HwTqCorrlnChACmnModCmpLpFilActvnThd.Online = false;
HwTqCorrlnChACmnModCmpLpFilActvnThd.Impact = 'L';
HwTqCorrlnChACmnModCmpLpFilActvnThd.TuningOwner = 'Safety';
HwTqCorrlnChACmnModCmpLpFilActvnThd.GraphLink = {''};
HwTqCorrlnChACmnModCmpLpFilActvnThd.Monotony = 'None';
HwTqCorrlnChACmnModCmpLpFilActvnThd.MaxGrad = 999;
HwTqCorrlnChACmnModCmpLpFilActvnThd.PortName = 'HwTqCorrlnChACmnModCmpLpFilActvnThd';


HwTqCorrlnChACmnModCmpLpFilFrq = DataDict.Calibration;
HwTqCorrlnChACmnModCmpLpFilFrq.LongName = 'Handwheel Torque Correlation Channel A Common Mode Compensation Low Pass Filter Cutoff Frequency';
HwTqCorrlnChACmnModCmpLpFilFrq.Description = [...
  'Cutoff freq corresponding to the Ch A CMC LPF'];
HwTqCorrlnChACmnModCmpLpFilFrq.DocUnits = 'Hz';
HwTqCorrlnChACmnModCmpLpFilFrq.EngDT = dt.float32;
HwTqCorrlnChACmnModCmpLpFilFrq.EngVal = 0.01989437;
HwTqCorrlnChACmnModCmpLpFilFrq.EngMin = 0;
HwTqCorrlnChACmnModCmpLpFilFrq.EngMax = 37.5;
HwTqCorrlnChACmnModCmpLpFilFrq.Cardinality = 'Cmn';
HwTqCorrlnChACmnModCmpLpFilFrq.CustomerVisible = false;
HwTqCorrlnChACmnModCmpLpFilFrq.Online = false;
HwTqCorrlnChACmnModCmpLpFilFrq.Impact = 'L';
HwTqCorrlnChACmnModCmpLpFilFrq.TuningOwner = 'Safety';
HwTqCorrlnChACmnModCmpLpFilFrq.GraphLink = {''};
HwTqCorrlnChACmnModCmpLpFilFrq.Monotony = 'None';
HwTqCorrlnChACmnModCmpLpFilFrq.MaxGrad = 999;
HwTqCorrlnChACmnModCmpLpFilFrq.PortName = 'HwTqCorrlnChACmnModCmpLpFilFrq';


HwTqCorrlnChACmnModCmpLpFilOutpLim = DataDict.Calibration;
HwTqCorrlnChACmnModCmpLpFilOutpLim.LongName = 'Handwheel Torque Correlation Channel A Common Mode Compensation Low Pass Filter Output Limit';
HwTqCorrlnChACmnModCmpLpFilOutpLim.Description = [...
  'Saturation Limit on the output of CMC LPF for Ch A long term correlati' ...
  'on diagnostic'];
HwTqCorrlnChACmnModCmpLpFilOutpLim.DocUnits = 'HwNwtMtr';
HwTqCorrlnChACmnModCmpLpFilOutpLim.EngDT = dt.float32;
HwTqCorrlnChACmnModCmpLpFilOutpLim.EngVal = 0.5714;
HwTqCorrlnChACmnModCmpLpFilOutpLim.EngMin = 0;
HwTqCorrlnChACmnModCmpLpFilOutpLim.EngMax = 20;
HwTqCorrlnChACmnModCmpLpFilOutpLim.Cardinality = 'Cmn';
HwTqCorrlnChACmnModCmpLpFilOutpLim.CustomerVisible = false;
HwTqCorrlnChACmnModCmpLpFilOutpLim.Online = false;
HwTqCorrlnChACmnModCmpLpFilOutpLim.Impact = 'H';
HwTqCorrlnChACmnModCmpLpFilOutpLim.TuningOwner = 'Safety';
HwTqCorrlnChACmnModCmpLpFilOutpLim.GraphLink = {''};
HwTqCorrlnChACmnModCmpLpFilOutpLim.Monotony = 'None';
HwTqCorrlnChACmnModCmpLpFilOutpLim.MaxGrad = 999;
HwTqCorrlnChACmnModCmpLpFilOutpLim.PortName = 'HwTqCorrlnChACmnModCmpLpFilOutpLim';


HwTqCorrlnChAImdtCorrlnChkFailThd = DataDict.Calibration;
HwTqCorrlnChAImdtCorrlnChkFailThd.LongName = 'Handwheel Torque Correlation Channel A Immediate Correlation Check Fail Threshold';
HwTqCorrlnChAImdtCorrlnChkFailThd.Description = [...
  'Handwheel Torque Correlation Channel A Immediate Correlation Check Fai' ...
  'l Threshold'];
HwTqCorrlnChAImdtCorrlnChkFailThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChAImdtCorrlnChkFailThd.EngDT = dt.float32;
HwTqCorrlnChAImdtCorrlnChkFailThd.EngVal = 2.85;
HwTqCorrlnChAImdtCorrlnChkFailThd.EngMin = 0;
HwTqCorrlnChAImdtCorrlnChkFailThd.EngMax = 20;
HwTqCorrlnChAImdtCorrlnChkFailThd.Cardinality = 'Cmn';
HwTqCorrlnChAImdtCorrlnChkFailThd.CustomerVisible = false;
HwTqCorrlnChAImdtCorrlnChkFailThd.Online = false;
HwTqCorrlnChAImdtCorrlnChkFailThd.Impact = 'H';
HwTqCorrlnChAImdtCorrlnChkFailThd.TuningOwner = 'Safety';
HwTqCorrlnChAImdtCorrlnChkFailThd.GraphLink = {''};
HwTqCorrlnChAImdtCorrlnChkFailThd.Monotony = 'None';
HwTqCorrlnChAImdtCorrlnChkFailThd.MaxGrad = 999;
HwTqCorrlnChAImdtCorrlnChkFailThd.PortName = 'HwTqCorrlnChAImdtCorrlnChkFailThd';


HwTqCorrlnChAImdtCorrlnChkPassThd = DataDict.Calibration;
HwTqCorrlnChAImdtCorrlnChkPassThd.LongName = 'Handwheel Torque Correlation Channel A Immediate Correlation Check Pass Threshold';
HwTqCorrlnChAImdtCorrlnChkPassThd.Description = [...
  'Handwheel Torque Correlation Channel A Immediate Correlation Check Pas' ...
  's Threshold'];
HwTqCorrlnChAImdtCorrlnChkPassThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChAImdtCorrlnChkPassThd.EngDT = dt.float32;
HwTqCorrlnChAImdtCorrlnChkPassThd.EngVal = 2;
HwTqCorrlnChAImdtCorrlnChkPassThd.EngMin = 0;
HwTqCorrlnChAImdtCorrlnChkPassThd.EngMax = 20;
HwTqCorrlnChAImdtCorrlnChkPassThd.Cardinality = 'Cmn';
HwTqCorrlnChAImdtCorrlnChkPassThd.CustomerVisible = false;
HwTqCorrlnChAImdtCorrlnChkPassThd.Online = false;
HwTqCorrlnChAImdtCorrlnChkPassThd.Impact = 'H';
HwTqCorrlnChAImdtCorrlnChkPassThd.TuningOwner = 'Safety';
HwTqCorrlnChAImdtCorrlnChkPassThd.GraphLink = {''};
HwTqCorrlnChAImdtCorrlnChkPassThd.Monotony = 'None';
HwTqCorrlnChAImdtCorrlnChkPassThd.MaxGrad = 999;
HwTqCorrlnChAImdtCorrlnChkPassThd.PortName = 'HwTqCorrlnChAImdtCorrlnChkPassThd';


HwTqCorrlnChAStabStClrFltThd = DataDict.Calibration;
HwTqCorrlnChAStabStClrFltThd.LongName = 'Handwheel Torque Correlation Channel A Steady State Clear Fault Threshold';
HwTqCorrlnChAStabStClrFltThd.Description = [...
  'Clear Fault threshold for the steady state error corresponding to ChA ' ...
  'long term correlation diagnostic'];
HwTqCorrlnChAStabStClrFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChAStabStClrFltThd.EngDT = dt.float32;
HwTqCorrlnChAStabStClrFltThd.EngVal = 2.515;
HwTqCorrlnChAStabStClrFltThd.EngMin = 0;
HwTqCorrlnChAStabStClrFltThd.EngMax = 20;
HwTqCorrlnChAStabStClrFltThd.Cardinality = 'Cmn';
HwTqCorrlnChAStabStClrFltThd.CustomerVisible = false;
HwTqCorrlnChAStabStClrFltThd.Online = false;
HwTqCorrlnChAStabStClrFltThd.Impact = 'H';
HwTqCorrlnChAStabStClrFltThd.TuningOwner = 'Safety';
HwTqCorrlnChAStabStClrFltThd.GraphLink = {''};
HwTqCorrlnChAStabStClrFltThd.Monotony = 'None';
HwTqCorrlnChAStabStClrFltThd.MaxGrad = 999;
HwTqCorrlnChAStabStClrFltThd.PortName = 'HwTqCorrlnChAStabStClrFltThd';


HwTqCorrlnChAStabStLpFilFrq = DataDict.Calibration;
HwTqCorrlnChAStabStLpFilFrq.LongName = 'Handwheel Torque Correlation Channel A Stable State Low Pass Filter Frequency';
HwTqCorrlnChAStabStLpFilFrq.Description = [...
  'Cutoff Frequency of the Steady State Low Pass Filter for Channel A hw ' ...
  'trq'];
HwTqCorrlnChAStabStLpFilFrq.DocUnits = 'Hz';
HwTqCorrlnChAStabStLpFilFrq.EngDT = dt.float32;
HwTqCorrlnChAStabStLpFilFrq.EngVal = 0.01989437;
HwTqCorrlnChAStabStLpFilFrq.EngMin = 0;
HwTqCorrlnChAStabStLpFilFrq.EngMax = 37.5;
HwTqCorrlnChAStabStLpFilFrq.Cardinality = 'Cmn';
HwTqCorrlnChAStabStLpFilFrq.CustomerVisible = false;
HwTqCorrlnChAStabStLpFilFrq.Online = false;
HwTqCorrlnChAStabStLpFilFrq.Impact = 'L';
HwTqCorrlnChAStabStLpFilFrq.TuningOwner = 'Safety';
HwTqCorrlnChAStabStLpFilFrq.GraphLink = {''};
HwTqCorrlnChAStabStLpFilFrq.Monotony = 'None';
HwTqCorrlnChAStabStLpFilFrq.MaxGrad = 999;
HwTqCorrlnChAStabStLpFilFrq.PortName = 'HwTqCorrlnChAStabStLpFilFrq';


HwTqCorrlnChAStabStSetFltThd = DataDict.Calibration;
HwTqCorrlnChAStabStSetFltThd.LongName = 'Handwheel Torque Correlation Channel A Stable State Set Fault Threshold';
HwTqCorrlnChAStabStSetFltThd.Description = [...
  'Steady/Stable State Fault Set Threshold for Channel A long term correl' ...
  'ation diagnostic'];
HwTqCorrlnChAStabStSetFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChAStabStSetFltThd.EngDT = dt.float32;
HwTqCorrlnChAStabStSetFltThd.EngVal = 2.85;
HwTqCorrlnChAStabStSetFltThd.EngMin = 0;
HwTqCorrlnChAStabStSetFltThd.EngMax = 20;
HwTqCorrlnChAStabStSetFltThd.Cardinality = 'Cmn';
HwTqCorrlnChAStabStSetFltThd.CustomerVisible = false;
HwTqCorrlnChAStabStSetFltThd.Online = false;
HwTqCorrlnChAStabStSetFltThd.Impact = 'H';
HwTqCorrlnChAStabStSetFltThd.TuningOwner = 'Safety';
HwTqCorrlnChAStabStSetFltThd.GraphLink = {''};
HwTqCorrlnChAStabStSetFltThd.Monotony = 'None';
HwTqCorrlnChAStabStSetFltThd.MaxGrad = 999;
HwTqCorrlnChAStabStSetFltThd.PortName = 'HwTqCorrlnChAStabStSetFltThd';


HwTqCorrlnChATqSumMaxLim = DataDict.Calibration;
HwTqCorrlnChATqSumMaxLim.LongName = 'Handwheel Torque Correlation Channel A Torque Sum Maximum Error';
HwTqCorrlnChATqSumMaxLim.Description = [...
  'Maximum limit imposed on the trq error used in immediate correlation c' ...
  'heck and long term correlation diagnostic'];
HwTqCorrlnChATqSumMaxLim.DocUnits = 'HwNwtMtr';
HwTqCorrlnChATqSumMaxLim.EngDT = dt.float32;
HwTqCorrlnChATqSumMaxLim.EngVal = 20;
HwTqCorrlnChATqSumMaxLim.EngMin = 0;
HwTqCorrlnChATqSumMaxLim.EngMax = 20;
HwTqCorrlnChATqSumMaxLim.Cardinality = 'Cmn';
HwTqCorrlnChATqSumMaxLim.CustomerVisible = false;
HwTqCorrlnChATqSumMaxLim.Online = false;
HwTqCorrlnChATqSumMaxLim.Impact = 'H';
HwTqCorrlnChATqSumMaxLim.TuningOwner = 'Safety';
HwTqCorrlnChATqSumMaxLim.GraphLink = {''};
HwTqCorrlnChATqSumMaxLim.Monotony = 'None';
HwTqCorrlnChATqSumMaxLim.MaxGrad = 999;
HwTqCorrlnChATqSumMaxLim.PortName = 'HwTqCorrlnChATqSumMaxLim';


HwTqCorrlnChATraLpFilX = DataDict.Calibration;
HwTqCorrlnChATraLpFilX.LongName = 'Handwheel Torque Correlation Channel A Transient Low Pass Filter Xaxis';
HwTqCorrlnChATraLpFilX.Description = [...
  'X axis representing the limited trq sum error used for interpolating t' ...
  'he Fc for the transient fault LPF'];
HwTqCorrlnChATraLpFilX.DocUnits = 'HwNwtMtr';
HwTqCorrlnChATraLpFilX.EngDT = dt.u5p11;
HwTqCorrlnChATraLpFilX.EngVal =  ...
   [0        0.8704144         1.738175          2.60859         3.479004         4.346765         5.217179         6.087593         6.955354         7.825769         8.696183         9.563944         10.43436         11.30477         12.17519         13.04295         13.91336];
HwTqCorrlnChATraLpFilX.EngMin = 0;
HwTqCorrlnChATraLpFilX.EngMax = 20;
HwTqCorrlnChATraLpFilX.Cardinality = 'Cmn';
HwTqCorrlnChATraLpFilX.CustomerVisible = false;
HwTqCorrlnChATraLpFilX.Online = false;
HwTqCorrlnChATraLpFilX.Impact = 'H';
HwTqCorrlnChATraLpFilX.TuningOwner = 'Safety';
HwTqCorrlnChATraLpFilX.GraphLink = {''};
HwTqCorrlnChATraLpFilX.Monotony = 'None';
HwTqCorrlnChATraLpFilX.MaxGrad = 0;
HwTqCorrlnChATraLpFilX.PortName = 'HwTqCorrlnChATraLpFilX';


HwTqCorrlnChATraLpFilY = DataDict.Calibration;
HwTqCorrlnChATraLpFilY.LongName = 'Handwheel Torque Correlation Channel A Transient Low Pass Filter Yaxis';
HwTqCorrlnChATraLpFilY.Description = [...
  'Y axis representing the interpolated cut off frequency for the transie' ...
  'nt fault LPF'];
HwTqCorrlnChATraLpFilY.DocUnits = 'Hz';
HwTqCorrlnChATraLpFilY.EngDT = dt.u6p10;
HwTqCorrlnChATraLpFilY.EngVal =  ...
   [34.05611         34.05611         34.05611         34.05611         19.44378         12.11994         8.983818         7.178144         5.993545         5.148004         4.514262         4.022228         3.626641         3.302396         3.031686         2.802849         2.605716];
HwTqCorrlnChATraLpFilY.EngMin = 0;
HwTqCorrlnChATraLpFilY.EngMax = 37.5;
HwTqCorrlnChATraLpFilY.Cardinality = 'Cmn';
HwTqCorrlnChATraLpFilY.CustomerVisible = false;
HwTqCorrlnChATraLpFilY.Online = false;
HwTqCorrlnChATraLpFilY.Impact = 'H';
HwTqCorrlnChATraLpFilY.TuningOwner = 'Safety';
HwTqCorrlnChATraLpFilY.GraphLink = {''};
HwTqCorrlnChATraLpFilY.Monotony = 'None';
HwTqCorrlnChATraLpFilY.MaxGrad = 0;
HwTqCorrlnChATraLpFilY.PortName = 'HwTqCorrlnChATraLpFilY';


HwTqCorrlnChATraSumClrFltThd = DataDict.Calibration;
HwTqCorrlnChATraSumClrFltThd.LongName = 'Handwheel Torque Correlation Channel A Transient Sum Clear Fault Threshold';
HwTqCorrlnChATraSumClrFltThd.Description = [...
  'Fault Clear Threshold corresponding to the transient plus common mode ' ...
  'compensation summation fault node for Channel A long term correlation ' ...
  'diagnostic'];
HwTqCorrlnChATraSumClrFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChATraSumClrFltThd.EngDT = dt.float32;
HwTqCorrlnChATraSumClrFltThd.EngVal = 1.425;
HwTqCorrlnChATraSumClrFltThd.EngMin = 0;
HwTqCorrlnChATraSumClrFltThd.EngMax = 20;
HwTqCorrlnChATraSumClrFltThd.Cardinality = 'Cmn';
HwTqCorrlnChATraSumClrFltThd.CustomerVisible = false;
HwTqCorrlnChATraSumClrFltThd.Online = false;
HwTqCorrlnChATraSumClrFltThd.Impact = 'H';
HwTqCorrlnChATraSumClrFltThd.TuningOwner = 'Safety';
HwTqCorrlnChATraSumClrFltThd.GraphLink = {''};
HwTqCorrlnChATraSumClrFltThd.Monotony = 'None';
HwTqCorrlnChATraSumClrFltThd.MaxGrad = 999;
HwTqCorrlnChATraSumClrFltThd.PortName = 'HwTqCorrlnChATraSumClrFltThd';


HwTqCorrlnChATraSumSetFltThd = DataDict.Calibration;
HwTqCorrlnChATraSumSetFltThd.LongName = 'Handwheel Torque Correlation Channel A Transient Sum Set Fault Threshold';
HwTqCorrlnChATraSumSetFltThd.Description = [...
  'Handwheel Torque Correlation Channel A Immediate Correlation Check Pas' ...
  's Threshold'];
HwTqCorrlnChATraSumSetFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChATraSumSetFltThd.EngDT = dt.float32;
HwTqCorrlnChATraSumSetFltThd.EngVal = 2.85;
HwTqCorrlnChATraSumSetFltThd.EngMin = 0;
HwTqCorrlnChATraSumSetFltThd.EngMax = 20;
HwTqCorrlnChATraSumSetFltThd.Cardinality = 'Cmn';
HwTqCorrlnChATraSumSetFltThd.CustomerVisible = false;
HwTqCorrlnChATraSumSetFltThd.Online = false;
HwTqCorrlnChATraSumSetFltThd.Impact = 'H';
HwTqCorrlnChATraSumSetFltThd.TuningOwner = 'Safety';
HwTqCorrlnChATraSumSetFltThd.GraphLink = {''};
HwTqCorrlnChATraSumSetFltThd.Monotony = 'None';
HwTqCorrlnChATraSumSetFltThd.MaxGrad = 999;
HwTqCorrlnChATraSumSetFltThd.PortName = 'HwTqCorrlnChATraSumSetFltThd';


HwTqCorrlnChBCmnModCmpLpFilActvnThd = DataDict.Calibration;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.LongName = 'Handhweel Torque Correlation Channel B Common Mode Compensation Low Pass Filter Activation Threshold';
HwTqCorrlnChBCmnModCmpLpFilActvnThd.Description = [...
  'Minimum Threshold required to activate the long term compensation CMC ' ...
  'LPF for Channel B'];
HwTqCorrlnChBCmnModCmpLpFilActvnThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBCmnModCmpLpFilActvnThd.EngDT = dt.float32;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.EngVal = 0.2857143;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.EngMin = 0;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.EngMax = 20;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.Cardinality = 'Cmn';
HwTqCorrlnChBCmnModCmpLpFilActvnThd.CustomerVisible = false;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.Online = false;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.Impact = 'L';
HwTqCorrlnChBCmnModCmpLpFilActvnThd.TuningOwner = 'Safety';
HwTqCorrlnChBCmnModCmpLpFilActvnThd.GraphLink = {''};
HwTqCorrlnChBCmnModCmpLpFilActvnThd.Monotony = 'None';
HwTqCorrlnChBCmnModCmpLpFilActvnThd.MaxGrad = 999;
HwTqCorrlnChBCmnModCmpLpFilActvnThd.PortName = 'HwTqCorrlnChBCmnModCmpLpFilActvnThd';


HwTqCorrlnChBCmnModCmpLpFilFrq = DataDict.Calibration;
HwTqCorrlnChBCmnModCmpLpFilFrq.LongName = 'Handwheel Torque Correlation Channel B Common Mode Compensation Low Pass Filter Cutoff Frequency';
HwTqCorrlnChBCmnModCmpLpFilFrq.Description = [...
  'Cutoff freq corresponding to the Ch B CMC LPF'];
HwTqCorrlnChBCmnModCmpLpFilFrq.DocUnits = 'Hz';
HwTqCorrlnChBCmnModCmpLpFilFrq.EngDT = dt.float32;
HwTqCorrlnChBCmnModCmpLpFilFrq.EngVal = 0.01989437;
HwTqCorrlnChBCmnModCmpLpFilFrq.EngMin = 0;
HwTqCorrlnChBCmnModCmpLpFilFrq.EngMax = 37.5;
HwTqCorrlnChBCmnModCmpLpFilFrq.Cardinality = 'Cmn';
HwTqCorrlnChBCmnModCmpLpFilFrq.CustomerVisible = false;
HwTqCorrlnChBCmnModCmpLpFilFrq.Online = false;
HwTqCorrlnChBCmnModCmpLpFilFrq.Impact = 'L';
HwTqCorrlnChBCmnModCmpLpFilFrq.TuningOwner = 'Safety';
HwTqCorrlnChBCmnModCmpLpFilFrq.GraphLink = {''};
HwTqCorrlnChBCmnModCmpLpFilFrq.Monotony = 'None';
HwTqCorrlnChBCmnModCmpLpFilFrq.MaxGrad = 999;
HwTqCorrlnChBCmnModCmpLpFilFrq.PortName = 'HwTqCorrlnChBCmnModCmpLpFilFrq';


HwTqCorrlnChBCmnModCmpLpFilOutpLim = DataDict.Calibration;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.LongName = 'Handwheel Torque Correlation Channel B Common Mode Compensation Low Pass Filter Output Limit';
HwTqCorrlnChBCmnModCmpLpFilOutpLim.Description = [...
  'Saturation Limit on the output of CMC LPF for Ch B long term correlati' ...
  'on diagnostic'];
HwTqCorrlnChBCmnModCmpLpFilOutpLim.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBCmnModCmpLpFilOutpLim.EngDT = dt.float32;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.EngVal = 0.5714;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.EngMin = 0;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.EngMax = 20;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.Cardinality = 'Cmn';
HwTqCorrlnChBCmnModCmpLpFilOutpLim.CustomerVisible = false;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.Online = false;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.Impact = 'H';
HwTqCorrlnChBCmnModCmpLpFilOutpLim.TuningOwner = 'Safety';
HwTqCorrlnChBCmnModCmpLpFilOutpLim.GraphLink = {''};
HwTqCorrlnChBCmnModCmpLpFilOutpLim.Monotony = 'None';
HwTqCorrlnChBCmnModCmpLpFilOutpLim.MaxGrad = 999;
HwTqCorrlnChBCmnModCmpLpFilOutpLim.PortName = 'HwTqCorrlnChBCmnModCmpLpFilOutpLim';


HwTqCorrlnChBImdtCorrlnChkFailThd = DataDict.Calibration;
HwTqCorrlnChBImdtCorrlnChkFailThd.LongName = 'Handwheel Torque Correlation Channel B Immediate Correlation Check Fail Threshold';
HwTqCorrlnChBImdtCorrlnChkFailThd.Description = [...
  'Handwheel Torque Correlation Channel B Immediate Correlation Check Fai' ...
  'l Threshold'];
HwTqCorrlnChBImdtCorrlnChkFailThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBImdtCorrlnChkFailThd.EngDT = dt.float32;
HwTqCorrlnChBImdtCorrlnChkFailThd.EngVal = 2.85;
HwTqCorrlnChBImdtCorrlnChkFailThd.EngMin = 0;
HwTqCorrlnChBImdtCorrlnChkFailThd.EngMax = 20;
HwTqCorrlnChBImdtCorrlnChkFailThd.Cardinality = 'Cmn';
HwTqCorrlnChBImdtCorrlnChkFailThd.CustomerVisible = false;
HwTqCorrlnChBImdtCorrlnChkFailThd.Online = false;
HwTqCorrlnChBImdtCorrlnChkFailThd.Impact = 'H';
HwTqCorrlnChBImdtCorrlnChkFailThd.TuningOwner = 'Safety';
HwTqCorrlnChBImdtCorrlnChkFailThd.GraphLink = {''};
HwTqCorrlnChBImdtCorrlnChkFailThd.Monotony = 'None';
HwTqCorrlnChBImdtCorrlnChkFailThd.MaxGrad = 999;
HwTqCorrlnChBImdtCorrlnChkFailThd.PortName = 'HwTqCorrlnChBImdtCorrlnChkFailThd';


HwTqCorrlnChBImdtCorrlnChkPassThd = DataDict.Calibration;
HwTqCorrlnChBImdtCorrlnChkPassThd.LongName = 'Handwheel Torque Correlation Channel B Immediate Correlation Check Pass Threshold';
HwTqCorrlnChBImdtCorrlnChkPassThd.Description = [...
  'Handwheel Torque Correlation Channel B Immediate Correlation Check Pas' ...
  's Threshold'];
HwTqCorrlnChBImdtCorrlnChkPassThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBImdtCorrlnChkPassThd.EngDT = dt.float32;
HwTqCorrlnChBImdtCorrlnChkPassThd.EngVal = 2;
HwTqCorrlnChBImdtCorrlnChkPassThd.EngMin = 0;
HwTqCorrlnChBImdtCorrlnChkPassThd.EngMax = 20;
HwTqCorrlnChBImdtCorrlnChkPassThd.Cardinality = 'Cmn';
HwTqCorrlnChBImdtCorrlnChkPassThd.CustomerVisible = false;
HwTqCorrlnChBImdtCorrlnChkPassThd.Online = false;
HwTqCorrlnChBImdtCorrlnChkPassThd.Impact = 'H';
HwTqCorrlnChBImdtCorrlnChkPassThd.TuningOwner = 'Safety';
HwTqCorrlnChBImdtCorrlnChkPassThd.GraphLink = {''};
HwTqCorrlnChBImdtCorrlnChkPassThd.Monotony = 'None';
HwTqCorrlnChBImdtCorrlnChkPassThd.MaxGrad = 999;
HwTqCorrlnChBImdtCorrlnChkPassThd.PortName = 'HwTqCorrlnChBImdtCorrlnChkPassThd';


HwTqCorrlnChBStabStClrFltThd = DataDict.Calibration;
HwTqCorrlnChBStabStClrFltThd.LongName = 'Handwheel Torque Correlation Channel B Steady State Clear Fault Threshold';
HwTqCorrlnChBStabStClrFltThd.Description = [...
  'Clear Fault threshold for the steady state error corresponding to ChB'];
HwTqCorrlnChBStabStClrFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBStabStClrFltThd.EngDT = dt.float32;
HwTqCorrlnChBStabStClrFltThd.EngVal = 2.515;
HwTqCorrlnChBStabStClrFltThd.EngMin = 0;
HwTqCorrlnChBStabStClrFltThd.EngMax = 20;
HwTqCorrlnChBStabStClrFltThd.Cardinality = 'Cmn';
HwTqCorrlnChBStabStClrFltThd.CustomerVisible = false;
HwTqCorrlnChBStabStClrFltThd.Online = false;
HwTqCorrlnChBStabStClrFltThd.Impact = 'H';
HwTqCorrlnChBStabStClrFltThd.TuningOwner = 'Safety';
HwTqCorrlnChBStabStClrFltThd.GraphLink = {''};
HwTqCorrlnChBStabStClrFltThd.Monotony = 'None';
HwTqCorrlnChBStabStClrFltThd.MaxGrad = 999;
HwTqCorrlnChBStabStClrFltThd.PortName = 'HwTqCorrlnChBStabStClrFltThd';


HwTqCorrlnChBStabStLpFilFrq = DataDict.Calibration;
HwTqCorrlnChBStabStLpFilFrq.LongName = 'Handwheel Torque Correlation Channel B Stable State Low Pass Filter Frequency';
HwTqCorrlnChBStabStLpFilFrq.Description = [...
  'Cutoff Frequency of the Steady State Low Pass Filter for Channel B hw ' ...
  'trq'];
HwTqCorrlnChBStabStLpFilFrq.DocUnits = 'Hz';
HwTqCorrlnChBStabStLpFilFrq.EngDT = dt.float32;
HwTqCorrlnChBStabStLpFilFrq.EngVal = 0.01989437;
HwTqCorrlnChBStabStLpFilFrq.EngMin = 0;
HwTqCorrlnChBStabStLpFilFrq.EngMax = 37.5;
HwTqCorrlnChBStabStLpFilFrq.Cardinality = 'Cmn';
HwTqCorrlnChBStabStLpFilFrq.CustomerVisible = false;
HwTqCorrlnChBStabStLpFilFrq.Online = false;
HwTqCorrlnChBStabStLpFilFrq.Impact = 'L';
HwTqCorrlnChBStabStLpFilFrq.TuningOwner = 'Safety';
HwTqCorrlnChBStabStLpFilFrq.GraphLink = {''};
HwTqCorrlnChBStabStLpFilFrq.Monotony = 'None';
HwTqCorrlnChBStabStLpFilFrq.MaxGrad = 999;
HwTqCorrlnChBStabStLpFilFrq.PortName = 'HwTqCorrlnChBStabStLpFilFrq';


HwTqCorrlnChBStabStSetFltThd = DataDict.Calibration;
HwTqCorrlnChBStabStSetFltThd.LongName = 'Handwheel Torque Correlation Channel B Stable State Set Fault Threshold';
HwTqCorrlnChBStabStSetFltThd.Description = [...
  'Steady/Stable State Fault Set Threshold for Channel B long term correl' ...
  'ation diagnostic'];
HwTqCorrlnChBStabStSetFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBStabStSetFltThd.EngDT = dt.float32;
HwTqCorrlnChBStabStSetFltThd.EngVal = 2.85;
HwTqCorrlnChBStabStSetFltThd.EngMin = 0;
HwTqCorrlnChBStabStSetFltThd.EngMax = 20;
HwTqCorrlnChBStabStSetFltThd.Cardinality = 'Cmn';
HwTqCorrlnChBStabStSetFltThd.CustomerVisible = false;
HwTqCorrlnChBStabStSetFltThd.Online = false;
HwTqCorrlnChBStabStSetFltThd.Impact = 'H';
HwTqCorrlnChBStabStSetFltThd.TuningOwner = 'Safety';
HwTqCorrlnChBStabStSetFltThd.GraphLink = {''};
HwTqCorrlnChBStabStSetFltThd.Monotony = 'None';
HwTqCorrlnChBStabStSetFltThd.MaxGrad = 999;
HwTqCorrlnChBStabStSetFltThd.PortName = 'HwTqCorrlnChBStabStSetFltThd';


HwTqCorrlnChBTqSumMaxLim = DataDict.Calibration;
HwTqCorrlnChBTqSumMaxLim.LongName = 'Handwheel Torque Correlation Channel B Torque Sum Maximum Error';
HwTqCorrlnChBTqSumMaxLim.Description = [...
  'Maximum limit imposed on the trq error used in immediate correlation c' ...
  'heck and long term correlation diagnostic'];
HwTqCorrlnChBTqSumMaxLim.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBTqSumMaxLim.EngDT = dt.float32;
HwTqCorrlnChBTqSumMaxLim.EngVal = 20;
HwTqCorrlnChBTqSumMaxLim.EngMin = 0;
HwTqCorrlnChBTqSumMaxLim.EngMax = 20;
HwTqCorrlnChBTqSumMaxLim.Cardinality = 'Cmn';
HwTqCorrlnChBTqSumMaxLim.CustomerVisible = false;
HwTqCorrlnChBTqSumMaxLim.Online = false;
HwTqCorrlnChBTqSumMaxLim.Impact = 'H';
HwTqCorrlnChBTqSumMaxLim.TuningOwner = 'Safety';
HwTqCorrlnChBTqSumMaxLim.GraphLink = {''};
HwTqCorrlnChBTqSumMaxLim.Monotony = 'None';
HwTqCorrlnChBTqSumMaxLim.MaxGrad = 999;
HwTqCorrlnChBTqSumMaxLim.PortName = 'HwTqCorrlnChBTqSumMaxLim';


HwTqCorrlnChBTraLpFilX = DataDict.Calibration;
HwTqCorrlnChBTraLpFilX.LongName = 'Handwheel Torque Correlation Channel B Transient Low Pass Filter Xaxis';
HwTqCorrlnChBTraLpFilX.Description = [...
  'X axis representing the limited trq sum error used for interpolating t' ...
  'he Fc for the transient fault LPF'];
HwTqCorrlnChBTraLpFilX.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBTraLpFilX.EngDT = dt.u5p11;
HwTqCorrlnChBTraLpFilX.EngVal =  ...
   [0        0.8704144         1.738175          2.60859         3.479004         4.346765         5.217179         6.087593         6.955354         7.825769         8.696183         9.563944         10.43436         11.30477         12.17519         13.04295         13.91336];
HwTqCorrlnChBTraLpFilX.EngMin = 0;
HwTqCorrlnChBTraLpFilX.EngMax = 20;
HwTqCorrlnChBTraLpFilX.Cardinality = 'Cmn';
HwTqCorrlnChBTraLpFilX.CustomerVisible = false;
HwTqCorrlnChBTraLpFilX.Online = false;
HwTqCorrlnChBTraLpFilX.Impact = 'H';
HwTqCorrlnChBTraLpFilX.TuningOwner = 'Safety';
HwTqCorrlnChBTraLpFilX.GraphLink = {''};
HwTqCorrlnChBTraLpFilX.Monotony = 'None';
HwTqCorrlnChBTraLpFilX.MaxGrad = 0;
HwTqCorrlnChBTraLpFilX.PortName = 'HwTqCorrlnChBTraLpFilX';


HwTqCorrlnChBTraLpFilY = DataDict.Calibration;
HwTqCorrlnChBTraLpFilY.LongName = 'Handwheel Torque Correlation Channel B Transient Low Pass Filter Yaxis';
HwTqCorrlnChBTraLpFilY.Description = [...
  'Y axis representing the interpolated cut off frequency for the transie' ...
  'nt fault LPF'];
HwTqCorrlnChBTraLpFilY.DocUnits = 'Hz';
HwTqCorrlnChBTraLpFilY.EngDT = dt.u6p10;
HwTqCorrlnChBTraLpFilY.EngVal =  ...
   [34.05611         34.05611         34.05611         34.05611         19.44378         12.11994         8.983818         7.178144         5.993545         5.148004         4.514262         4.022228         3.626641         3.302396         3.031686         2.802849         2.605716];
HwTqCorrlnChBTraLpFilY.EngMin = 0;
HwTqCorrlnChBTraLpFilY.EngMax = 37.5;
HwTqCorrlnChBTraLpFilY.Cardinality = 'Cmn';
HwTqCorrlnChBTraLpFilY.CustomerVisible = false;
HwTqCorrlnChBTraLpFilY.Online = false;
HwTqCorrlnChBTraLpFilY.Impact = 'H';
HwTqCorrlnChBTraLpFilY.TuningOwner = 'Safety';
HwTqCorrlnChBTraLpFilY.GraphLink = {''};
HwTqCorrlnChBTraLpFilY.Monotony = 'None';
HwTqCorrlnChBTraLpFilY.MaxGrad = 0;
HwTqCorrlnChBTraLpFilY.PortName = 'HwTqCorrlnChBTraLpFilY';


HwTqCorrlnChBTraSumClrFltThd = DataDict.Calibration;
HwTqCorrlnChBTraSumClrFltThd.LongName = 'Handwheel Torque Correlation Channel B Transient Sum Clear Fault Threshold';
HwTqCorrlnChBTraSumClrFltThd.Description = [...
  'Fault Clear Threshold corresponding to the transient plus common mode ' ...
  'compensation summation fault node for Channel B long term correlation ' ...
  'diagnostic'];
HwTqCorrlnChBTraSumClrFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBTraSumClrFltThd.EngDT = dt.float32;
HwTqCorrlnChBTraSumClrFltThd.EngVal = 1.425;
HwTqCorrlnChBTraSumClrFltThd.EngMin = 0;
HwTqCorrlnChBTraSumClrFltThd.EngMax = 20;
HwTqCorrlnChBTraSumClrFltThd.Cardinality = 'Cmn';
HwTqCorrlnChBTraSumClrFltThd.CustomerVisible = false;
HwTqCorrlnChBTraSumClrFltThd.Online = false;
HwTqCorrlnChBTraSumClrFltThd.Impact = 'H';
HwTqCorrlnChBTraSumClrFltThd.TuningOwner = 'Safety';
HwTqCorrlnChBTraSumClrFltThd.GraphLink = {''};
HwTqCorrlnChBTraSumClrFltThd.Monotony = 'None';
HwTqCorrlnChBTraSumClrFltThd.MaxGrad = 999;
HwTqCorrlnChBTraSumClrFltThd.PortName = 'HwTqCorrlnChBTraSumClrFltThd';


HwTqCorrlnChBTraSumSetFltThd = DataDict.Calibration;
HwTqCorrlnChBTraSumSetFltThd.LongName = 'Handwheel Torque Correlation Channel B Transient Sum Set Fault Threshold';
HwTqCorrlnChBTraSumSetFltThd.Description = [...
  'Fault Set Threshold corresponding to the transient plus common mode co' ...
  'mpensation summation fault node for Channel B long term correlation di' ...
  'agnostic'];
HwTqCorrlnChBTraSumSetFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBTraSumSetFltThd.EngDT = dt.float32;
HwTqCorrlnChBTraSumSetFltThd.EngVal = 2.85;
HwTqCorrlnChBTraSumSetFltThd.EngMin = 0;
HwTqCorrlnChBTraSumSetFltThd.EngMax = 20;
HwTqCorrlnChBTraSumSetFltThd.Cardinality = 'Cmn';
HwTqCorrlnChBTraSumSetFltThd.CustomerVisible = false;
HwTqCorrlnChBTraSumSetFltThd.Online = false;
HwTqCorrlnChBTraSumSetFltThd.Impact = 'H';
HwTqCorrlnChBTraSumSetFltThd.TuningOwner = 'Safety';
HwTqCorrlnChBTraSumSetFltThd.GraphLink = {''};
HwTqCorrlnChBTraSumSetFltThd.Monotony = 'None';
HwTqCorrlnChBTraSumSetFltThd.MaxGrad = 999;
HwTqCorrlnChBTraSumSetFltThd.PortName = 'HwTqCorrlnChBTraSumSetFltThd';


HwTqCorrlnMaxStallTqA = DataDict.Calibration;
HwTqCorrlnMaxStallTqA.LongName = 'Handwheel Torque Correlation Maximum Stall Torque A';
HwTqCorrlnMaxStallTqA.Description = [...
  'Maximum value reached by stall counter to indicate torque sensor signa' ...
  'l A availability for the immediate correlation check'];
HwTqCorrlnMaxStallTqA.DocUnits = 'Cnt';
HwTqCorrlnMaxStallTqA.EngDT = dt.u08;
HwTqCorrlnMaxStallTqA.EngVal = 10;
HwTqCorrlnMaxStallTqA.EngMin = 0;
HwTqCorrlnMaxStallTqA.EngMax = 255;
HwTqCorrlnMaxStallTqA.Cardinality = 'Cmn';
HwTqCorrlnMaxStallTqA.CustomerVisible = false;
HwTqCorrlnMaxStallTqA.Online = false;
HwTqCorrlnMaxStallTqA.Impact = 'H';
HwTqCorrlnMaxStallTqA.TuningOwner = 'FDD';
HwTqCorrlnMaxStallTqA.GraphLink = {''};
HwTqCorrlnMaxStallTqA.Monotony = 'None';
HwTqCorrlnMaxStallTqA.MaxGrad = 999;
HwTqCorrlnMaxStallTqA.PortName = 'HwTqCorrlnMaxStallTqA';


HwTqCorrlnMaxStallTqB = DataDict.Calibration;
HwTqCorrlnMaxStallTqB.LongName = 'Handwheel Torque Correlation Maximum Stall Torque B';
HwTqCorrlnMaxStallTqB.Description = [...
  'Maximum value reached by stall counter to indicate torque sensor signa' ...
  'l B availabilityfor immediate correlation check'];
HwTqCorrlnMaxStallTqB.DocUnits = 'Cnt';
HwTqCorrlnMaxStallTqB.EngDT = dt.u08;
HwTqCorrlnMaxStallTqB.EngVal = 10;
HwTqCorrlnMaxStallTqB.EngMin = 0;
HwTqCorrlnMaxStallTqB.EngMax = 255;
HwTqCorrlnMaxStallTqB.Cardinality = 'Cmn';
HwTqCorrlnMaxStallTqB.CustomerVisible = false;
HwTqCorrlnMaxStallTqB.Online = false;
HwTqCorrlnMaxStallTqB.Impact = 'H';
HwTqCorrlnMaxStallTqB.TuningOwner = 'FDD';
HwTqCorrlnMaxStallTqB.GraphLink = {''};
HwTqCorrlnMaxStallTqB.Monotony = 'None';
HwTqCorrlnMaxStallTqB.MaxGrad = 0;
HwTqCorrlnMaxStallTqB.PortName = 'HwTqCorrlnMaxStallTqB';


HwTqCorrlnMaxStallTqC = DataDict.Calibration;
HwTqCorrlnMaxStallTqC.LongName = 'Handwheel Torque Correlation Maximum Stall Torque C';
HwTqCorrlnMaxStallTqC.Description = [...
  'Maximum value reached by stall counter to indicate torque sensor signa' ...
  'l C availability for immediate correlation check.'];
HwTqCorrlnMaxStallTqC.DocUnits = 'Cnt';
HwTqCorrlnMaxStallTqC.EngDT = dt.u08;
HwTqCorrlnMaxStallTqC.EngVal = 10;
HwTqCorrlnMaxStallTqC.EngMin = 0;
HwTqCorrlnMaxStallTqC.EngMax = 255;
HwTqCorrlnMaxStallTqC.Cardinality = 'Cmn';
HwTqCorrlnMaxStallTqC.CustomerVisible = false;
HwTqCorrlnMaxStallTqC.Online = false;
HwTqCorrlnMaxStallTqC.Impact = 'H';
HwTqCorrlnMaxStallTqC.TuningOwner = 'FDD';
HwTqCorrlnMaxStallTqC.GraphLink = {''};
HwTqCorrlnMaxStallTqC.Monotony = 'None';
HwTqCorrlnMaxStallTqC.MaxGrad = 0;
HwTqCorrlnMaxStallTqC.PortName = 'HwTqCorrlnMaxStallTqC';


HwTqCorrlnMaxStallTqD = DataDict.Calibration;
HwTqCorrlnMaxStallTqD.LongName = 'Handwheel Torque Correlation Maximum Stall Torque B';
HwTqCorrlnMaxStallTqD.Description = [...
  'Maximum value reached by stall counter to indicate torque sensor signa' ...
  'l D availabilityfor immediate correlation check'];
HwTqCorrlnMaxStallTqD.DocUnits = 'Cnt';
HwTqCorrlnMaxStallTqD.EngDT = dt.u08;
HwTqCorrlnMaxStallTqD.EngVal = 10;
HwTqCorrlnMaxStallTqD.EngMin = 0;
HwTqCorrlnMaxStallTqD.EngMax = 255;
HwTqCorrlnMaxStallTqD.Cardinality = 'Cmn';
HwTqCorrlnMaxStallTqD.CustomerVisible = false;
HwTqCorrlnMaxStallTqD.Online = false;
HwTqCorrlnMaxStallTqD.Impact = 'H';
HwTqCorrlnMaxStallTqD.TuningOwner = 'FDD';
HwTqCorrlnMaxStallTqD.GraphLink = {''};
HwTqCorrlnMaxStallTqD.Monotony = 'None';
HwTqCorrlnMaxStallTqD.MaxGrad = 0;
HwTqCorrlnMaxStallTqD.PortName = 'HwTqCorrlnMaxStallTqD';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwTqChACmnModCmpLpFilSt = DataDict.NVM;
HwTqChACmnModCmpLpFilSt.LongName = 'Handwheel Torque Correlation Channel A Common Mode Compensation Low Pass Filter State';
HwTqChACmnModCmpLpFilSt.Description = [...
  'State variable of the CMC LPF used in Ch A long term correlation diagn' ...
  'ostic'];
HwTqChACmnModCmpLpFilSt.DocUnits = 'HwNwtMtr';
HwTqChACmnModCmpLpFilSt.EngDT = dt.float32;
HwTqChACmnModCmpLpFilSt.EngInit = 0;
HwTqChACmnModCmpLpFilSt.EngMin = -10;
HwTqChACmnModCmpLpFilSt.EngMax = 10;
HwTqChACmnModCmpLpFilSt.CustomerVisible = false;
HwTqChACmnModCmpLpFilSt.Impact = 'L';
HwTqChACmnModCmpLpFilSt.TuningOwner = 'Safety';
HwTqChACmnModCmpLpFilSt.CoderInfo.Alias = 'HwTqChACmnModCmpLpFilSt';
HwTqChACmnModCmpLpFilSt.InitRowCol = [1  1];


HwTqChBCmnModCmpLpFilSt = DataDict.NVM;
HwTqChBCmnModCmpLpFilSt.LongName = 'Handwheel Torque Correlation Channel B Common Mode Compensation Low Pass Filter State';
HwTqChBCmnModCmpLpFilSt.Description = [...
  'State variable of the CMC LPF used in Ch B long term correlation diagn' ...
  'ostic'];
HwTqChBCmnModCmpLpFilSt.DocUnits = 'HwNwtMtr';
HwTqChBCmnModCmpLpFilSt.EngDT = dt.float32;
HwTqChBCmnModCmpLpFilSt.EngInit = 0;
HwTqChBCmnModCmpLpFilSt.EngMin = -10;
HwTqChBCmnModCmpLpFilSt.EngMax = 10;
HwTqChBCmnModCmpLpFilSt.CustomerVisible = false;
HwTqChBCmnModCmpLpFilSt.Impact = 'L';
HwTqChBCmnModCmpLpFilSt.TuningOwner = 'Safety';
HwTqChBCmnModCmpLpFilSt.CoderInfo.Alias = 'HwTqChBCmnModCmpLpFilSt';
HwTqChBCmnModCmpLpFilSt.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTqARollgCntrPrev = DataDict.PIM;
HwTqARollgCntrPrev.LongName = 'Handwheel Torque A Rolling Counter Previous';
HwTqARollgCntrPrev.Description = [...
  'Previous value of Hw trq A rolling counter'];
HwTqARollgCntrPrev.DocUnits = 'Cnt';
HwTqARollgCntrPrev.EngDT = dt.u08;
HwTqARollgCntrPrev.EngMin = 0;
HwTqARollgCntrPrev.EngMax = 255;
HwTqARollgCntrPrev.InitRowCol = [1  1];


HwTqAStallCntrPrev = DataDict.PIM;
HwTqAStallCntrPrev.LongName = 'Handwheel Torque A Stall Counter Previous';
HwTqAStallCntrPrev.Description = [...
  'Previous value of Hw trq A Stall counter'];
HwTqAStallCntrPrev.DocUnits = 'Cnt';
HwTqAStallCntrPrev.EngDT = dt.u08;
HwTqAStallCntrPrev.EngMin = 0;
HwTqAStallCntrPrev.EngMax = 255;
HwTqAStallCntrPrev.InitRowCol = [1  1];


HwTqBRollgCntrPrev = DataDict.PIM;
HwTqBRollgCntrPrev.LongName = 'Handwheel Torque B Rolling Counter Previous';
HwTqBRollgCntrPrev.Description = [...
  'Previous value of Hw trq B rolling counter'];
HwTqBRollgCntrPrev.DocUnits = 'Cnt';
HwTqBRollgCntrPrev.EngDT = dt.u08;
HwTqBRollgCntrPrev.EngMin = 0;
HwTqBRollgCntrPrev.EngMax = 255;
HwTqBRollgCntrPrev.InitRowCol = [1  1];


HwTqBStallCntrPrev = DataDict.PIM;
HwTqBStallCntrPrev.LongName = 'Handwheel Torque B Stall Counter Previous';
HwTqBStallCntrPrev.Description = [...
  'Previous value of Hw trq B Stall counter'];
HwTqBStallCntrPrev.DocUnits = 'Cnt';
HwTqBStallCntrPrev.EngDT = dt.u08;
HwTqBStallCntrPrev.EngMin = 0;
HwTqBStallCntrPrev.EngMax = 255;
HwTqBStallCntrPrev.InitRowCol = [1  1];


HwTqCRollgCntrPrev = DataDict.PIM;
HwTqCRollgCntrPrev.LongName = 'Handwheel Torque C Rolling Counter Previous';
HwTqCRollgCntrPrev.Description = [...
  'Previous value of Hw trq C rolling counter'];
HwTqCRollgCntrPrev.DocUnits = 'Cnt';
HwTqCRollgCntrPrev.EngDT = dt.u08;
HwTqCRollgCntrPrev.EngMin = 0;
HwTqCRollgCntrPrev.EngMax = 255;
HwTqCRollgCntrPrev.InitRowCol = [1  1];


HwTqCStallCntrPrev = DataDict.PIM;
HwTqCStallCntrPrev.LongName = 'Handwheel Torque C Stall Counter Previous';
HwTqCStallCntrPrev.Description = [...
  'Previous value of Hw trq C stall counter'];
HwTqCStallCntrPrev.DocUnits = 'Cnt';
HwTqCStallCntrPrev.EngDT = dt.u08;
HwTqCStallCntrPrev.EngMin = 0;
HwTqCStallCntrPrev.EngMax = 255;
HwTqCStallCntrPrev.InitRowCol = [1  1];


HwTqChACmnModCmpLpFil = DataDict.PIM;
HwTqChACmnModCmpLpFil.LongName = 'Handwheel Torque Channel A Common Mode Compensation Low Pass Filter';
HwTqChACmnModCmpLpFil.Description = [...
  'Structure defining filter state and gain for the CMC LPF used in Ch A ' ...
  'long term correlation diagnostic'];
HwTqChACmnModCmpLpFil.DocUnits = 'Cnt';
HwTqChACmnModCmpLpFil.EngDT = struct.FilLpRec1;
HwTqChACmnModCmpLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqChACmnModCmpLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqChACmnModCmpLpFil.InitRowCol = [1  1];


HwTqChAImdtCorrlnChk = DataDict.PIM;
HwTqChAImdtCorrlnChk.LongName = 'Handwheel Torque Channel A Immediate Correlation Check';
HwTqChAImdtCorrlnChk.Description = [...
  'Handwheel Torque Channel A Immediate Correlation Check'];
HwTqChAImdtCorrlnChk.DocUnits = 'Cnt';
HwTqChAImdtCorrlnChk.EngDT = dt.lgc;
HwTqChAImdtCorrlnChk.EngMin = 0;
HwTqChAImdtCorrlnChk.EngMax = 1;
HwTqChAImdtCorrlnChk.InitRowCol = [1  1];


HwTqChAStabStLpFil = DataDict.PIM;
HwTqChAStabStLpFil.LongName = 'Handwheel Torque Channel A Stable State Low Pass Filter';
HwTqChAStabStLpFil.Description = [...
  'Structure defining filter state and gain for the Steady State LPF used' ...
  ' in Ch A long term correlation diagnostic'];
HwTqChAStabStLpFil.DocUnits = 'Cnt';
HwTqChAStabStLpFil.EngDT = struct.FilLpRec1;
HwTqChAStabStLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqChAStabStLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqChAStabStLpFil.InitRowCol = [1  1];


HwTqChATraLpFil = DataDict.PIM;
HwTqChATraLpFil.LongName = 'Handwheel Torque Channel A Transient Low Pass Filter';
HwTqChATraLpFil.Description = [...
  'Structure defining filter state and gain for the Transient LPF used in' ...
  ' Ch A long term correlation diagnostic'];
HwTqChATraLpFil.DocUnits = 'Cnt';
HwTqChATraLpFil.EngDT = struct.FilLpRec1;
HwTqChATraLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqChATraLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqChATraLpFil.InitRowCol = [1  1];


HwTqChBCmnModCmpLpFil = DataDict.PIM;
HwTqChBCmnModCmpLpFil.LongName = 'Handwheel Torque Channel B Common Mode Compensation Low Pass Filter';
HwTqChBCmnModCmpLpFil.Description = [...
  'Structure defining filter state and gain for the CMC LPF used in Ch B ' ...
  'long term correlation diagnostic'];
HwTqChBCmnModCmpLpFil.DocUnits = 'Cnt';
HwTqChBCmnModCmpLpFil.EngDT = struct.FilLpRec1;
HwTqChBCmnModCmpLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqChBCmnModCmpLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqChBCmnModCmpLpFil.InitRowCol = [1  1];


HwTqChBImdtCorrlnChk = DataDict.PIM;
HwTqChBImdtCorrlnChk.LongName = 'Handwheel Torque Channel B Immediate Correlation Check';
HwTqChBImdtCorrlnChk.Description = [...
  'Handwheel Torque Channel B Immediate Correlation Check'];
HwTqChBImdtCorrlnChk.DocUnits = 'Cnt';
HwTqChBImdtCorrlnChk.EngDT = dt.lgc;
HwTqChBImdtCorrlnChk.EngMin = 0;
HwTqChBImdtCorrlnChk.EngMax = 1;
HwTqChBImdtCorrlnChk.InitRowCol = [1  1];


HwTqChBStabStLpFil = DataDict.PIM;
HwTqChBStabStLpFil.LongName = 'Handwheel Torque Channel B Stable State Low Pass Filter';
HwTqChBStabStLpFil.Description = [...
  'Structure defining filter state and gain for the Steady State LPF used' ...
  ' in Ch B long term correlation diagnostic'];
HwTqChBStabStLpFil.DocUnits = 'Cnt';
HwTqChBStabStLpFil.EngDT = struct.FilLpRec1;
HwTqChBStabStLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqChBStabStLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqChBStabStLpFil.InitRowCol = [1  1];


HwTqChBTraLpFil = DataDict.PIM;
HwTqChBTraLpFil.LongName = 'Handwheel Torque Channel B Transient Low Pass Filter';
HwTqChBTraLpFil.Description = [...
  'Structure defining filter state and gain for the Transient LPF used in' ...
  ' Ch B long term correlation diagnostic'];
HwTqChBTraLpFil.DocUnits = 'Cnt';
HwTqChBTraLpFil.EngDT = struct.FilLpRec1;
HwTqChBTraLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqChBTraLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqChBTraLpFil.InitRowCol = [1  1];


HwTqDRollgCntrPrev = DataDict.PIM;
HwTqDRollgCntrPrev.LongName = 'Handwheel Torque D Rolling Counter Previous';
HwTqDRollgCntrPrev.Description = [...
  'Previous value of Hw trq D rolling counter'];
HwTqDRollgCntrPrev.DocUnits = 'Cnt';
HwTqDRollgCntrPrev.EngDT = dt.u08;
HwTqDRollgCntrPrev.EngMin = 0;
HwTqDRollgCntrPrev.EngMax = 255;
HwTqDRollgCntrPrev.InitRowCol = [1  1];


HwTqDStallCntrPrev = DataDict.PIM;
HwTqDStallCntrPrev.LongName = 'Handwheel Torque D Stall Counter Previous';
HwTqDStallCntrPrev.Description = [...
  'Previous value of Hw trq D stall counter'];
HwTqDStallCntrPrev.DocUnits = 'Cnt';
HwTqDStallCntrPrev.EngDT = dt.u08;
HwTqDStallCntrPrev.EngMin = 0;
HwTqDStallCntrPrev.EngMax = 255;
HwTqDStallCntrPrev.InitRowCol = [1  1];



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


FLTINJ_HWTQCORRLN_HWTQIDPTSIG = DataDict.Constant;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.LongName = 'Fault Injection Handwheel Torque Correlation Handwheel Torque Independent Signal';
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.Description = [...
  'Output signal of Handwheel Torque Correlation function.'];
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.DocUnits = 'Cnt';
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.EngDT = dt.u16;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.EngVal = 27;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.Define = 'Global';


HWTQCORRLNSTSMAXLMT_CNT_U08 = DataDict.Constant;
HWTQCORRLNSTSMAXLMT_CNT_U08.LongName = 'Handwheel Torque Correlation Status Signal Maximum Limit';
HWTQCORRLNSTSMAXLMT_CNT_U08.Description = [...
  'Maximum legal range of the hw tq correlation status signal '];
HWTQCORRLNSTSMAXLMT_CNT_U08.DocUnits = 'Cnt';
HWTQCORRLNSTSMAXLMT_CNT_U08.EngDT = dt.u08;
HWTQCORRLNSTSMAXLMT_CNT_U08.EngVal = 15;
HWTQCORRLNSTSMAXLMT_CNT_U08.Define = 'Local';


HWTQCORRLNSTSMINLMT_CNT_U08 = DataDict.Constant;
HWTQCORRLNSTSMINLMT_CNT_U08.LongName = 'Handwheel Torque Correlation Status Signal Minimum Limit';
HWTQCORRLNSTSMINLMT_CNT_U08.Description = [...
  'Minimum legal range of the hw tq correlation status signal '];
HWTQCORRLNSTSMINLMT_CNT_U08.DocUnits = 'Cnt';
HWTQCORRLNSTSMINLMT_CNT_U08.EngDT = dt.u08;
HWTQCORRLNSTSMINLMT_CNT_U08.EngVal = 0;
HWTQCORRLNSTSMINLMT_CNT_U08.Define = 'Local';


HWTQIDPDTSIGMAXLMT_CNT_U08 = DataDict.Constant;
HWTQIDPDTSIGMAXLMT_CNT_U08.LongName = 'Handwheel Torque Independent Signal Maximum Limit';
HWTQIDPDTSIGMAXLMT_CNT_U08.Description = [...
  'Maximum legal range of the hw tq independent signal '];
HWTQIDPDTSIGMAXLMT_CNT_U08.DocUnits = 'Cnt';
HWTQIDPDTSIGMAXLMT_CNT_U08.EngDT = dt.u08;
HWTQIDPDTSIGMAXLMT_CNT_U08.EngVal = 4;
HWTQIDPDTSIGMAXLMT_CNT_U08.Define = 'Local';


HWTQIDPDTSIGMINLMT_CNT_U08 = DataDict.Constant;
HWTQIDPDTSIGMINLMT_CNT_U08.LongName = 'Handwheel Torque Independent Signal Minimum Limit';
HWTQIDPDTSIGMINLMT_CNT_U08.Description = [...
  'Minimum legal range of the hw tq independent signal '];
HWTQIDPDTSIGMINLMT_CNT_U08.DocUnits = 'Cnt';
HWTQIDPDTSIGMINLMT_CNT_U08.EngDT = dt.u08;
HWTQIDPDTSIGMINLMT_CNT_U08.EngVal = 0;
HWTQIDPDTSIGMINLMT_CNT_U08.Define = 'Local';


HWTQSCA_CNT_U08 = DataDict.Constant;
HWTQSCA_CNT_U08.LongName = 'Handwheel Torque Scale';
HWTQSCA_CNT_U08.Description = [...
  'Scaling used to generate hw diff trq'];
HWTQSCA_CNT_U08.DocUnits = 'Cnt';
HWTQSCA_CNT_U08.EngDT = dt.u08;
HWTQSCA_CNT_U08.EngVal = 2;
HWTQSCA_CNT_U08.Define = 'Local';


PARAMETERBYTE_CNT_U08 = DataDict.Constant;
PARAMETERBYTE_CNT_U08.LongName = 'Parameter Byte';
PARAMETERBYTE_CNT_U08.Description = [...
  'Parameter byte for Bit 0 used in long term correlation Ntcs'];
PARAMETERBYTE_CNT_U08.DocUnits = 'Cnt';
PARAMETERBYTE_CNT_U08.EngDT = dt.u08;
PARAMETERBYTE_CNT_U08.EngVal = 1;
PARAMETERBYTE_CNT_U08.Define = 'Local';


STABSTLPFILSTVARIDELTALIM_HWNWTMTR_F32 = DataDict.Constant;
STABSTLPFILSTVARIDELTALIM_HWNWTMTR_F32.LongName = 'Stability State Low Pass Filter State Variable Delta Limit';
STABSTLPFILSTVARIDELTALIM_HWNWTMTR_F32.Description = [...
  'Delta to be added to existing Steady State LPF Set Fault Threshold to ' ...
  'determine limit on the Steady State LPF state variable for both channe' ...
  'ls A and B'];
STABSTLPFILSTVARIDELTALIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
STABSTLPFILSTVARIDELTALIM_HWNWTMTR_F32.EngDT = dt.float32;
STABSTLPFILSTVARIDELTALIM_HWNWTMTR_F32.EngVal = 0.1;
STABSTLPFILSTVARIDELTALIM_HWNWTMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTqSnsrChACorrlnFlt = DataDict.NTC;
HwTqSnsrChACorrlnFlt.NtcNr = NtcNr1.NTCNR_0X070;
HwTqSnsrChACorrlnFlt.NtcTyp = 'None';
HwTqSnsrChACorrlnFlt.LongName = 'Handwheel Torque Sensor Channel A Correlation Fault';
HwTqSnsrChACorrlnFlt.Description = 'Channel A trq sensor sub system correlation fault';
HwTqSnsrChACorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit0Descr = 'Channel A Correlation Fault';
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTqSnsrChACorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTqSnsrChBCorrlnFlt = DataDict.NTC;
HwTqSnsrChBCorrlnFlt.NtcNr = NtcNr1.NTCNR_0X071;
HwTqSnsrChBCorrlnFlt.NtcTyp = 'None';
HwTqSnsrChBCorrlnFlt.LongName = 'Handwheel Torque Sensor Channel B Correlation Fault';
HwTqSnsrChBCorrlnFlt.Description = 'Channel B trq sensor sub system correlation fault';
HwTqSnsrChBCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit0Descr = 'Channel B Correlation Fault';
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTqSnsrChBCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
