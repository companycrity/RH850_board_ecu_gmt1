%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2016 18:54:34       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

ES101A = DataDict.FDD;
ES101A.Version = '4.6.X';
ES101A.LongName = 'Diagnostic Manager Proxy X';
ES101A.ShoName  = 'DiagcMgrProxyX';
ES101A.DesignASIL = 'D';
ES101A.Description = [...
  'This function is responsible for storing NTC Information, clearing NTC' ...
  's on a periodic basis and providing an interface to access DiagcMgr to' ...
  ' other components in each application. This is accomplished by having ' ...
  'a copy of this component in each of the appication. The "X" that is be' ...
  'ing used across the function signifies the which appication it belongs' ...
  ' to. This is a generic copy and this copy shall be duplicated in each ' ...
  'application with "X" being replaced by the application number.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DiagcMgrProxyApplXInit1 = DataDict.Runnable;
DiagcMgrProxyApplXInit1.Context = 'Rte';
DiagcMgrProxyApplXInit1.TimeStep = 0;
DiagcMgrProxyApplXInit1.Description = 'Diagnostic Manager Init';

DiagcMgrProxyApplXPer1 = DataDict.Runnable;
DiagcMgrProxyApplXPer1.Context = 'Rte';
DiagcMgrProxyApplXPer1.TimeStep = 0.01;
DiagcMgrProxyApplXPer1.Description = 'Diagnostic Manager Periodic 1';

GetDiagcDataApplX = DataDict.SrvRunnable;
GetDiagcDataApplX.Context = 'Rte';
GetDiagcDataApplX.Description = [...
  'Get Diagnostic Data Application X. X - Application Number'];
GetDiagcDataApplX.Return = DataDict.CSReturn;
GetDiagcDataApplX.Return.Type = 'None';
GetDiagcDataApplX.Return.Min = [];
GetDiagcDataApplX.Return.Max = [];
GetDiagcDataApplX.Return.TestTolerance = [];
GetDiagcDataApplX.Return.Description = 'None';
GetDiagcDataApplX.Arguments(1) = DataDict.CSArguments;
GetDiagcDataApplX.Arguments(1).Name = 'DiagcData';
GetDiagcDataApplX.Arguments(1).EngDT = struct.DiagcDataRec1;
GetDiagcDataApplX.Arguments(1).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
GetDiagcDataApplX.Arguments(1).EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
GetDiagcDataApplX.Arguments(1).Units = 'Cnt';
GetDiagcDataApplX.Arguments(1).Direction = 'Out';
GetDiagcDataApplX.Arguments(1).InitRowCol = [1  1];
GetDiagcDataApplX.Arguments(1).Description = 'Diagnostic Data';

GetNtcActvX = DataDict.SrvRunnable;
GetNtcActvX.Context = 'Both';
GetNtcActvX.Description = 'Get NTC Active X';
GetNtcActvX.Return = DataDict.CSReturn;
GetNtcActvX.Return.Type = 'Standard';
GetNtcActvX.Return.Min = 0;
GetNtcActvX.Return.Max = 1;
GetNtcActvX.Return.TestTolerance = 0;
GetNtcActvX.Return.Description = 'None';
GetNtcActvX.Arguments(1) = DataDict.CSArguments;
GetNtcActvX.Arguments(1).Name = 'NtcNr';
GetNtcActvX.Arguments(1).EngDT = enum.NtcNr1;
GetNtcActvX.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcActvX.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcActvX.Arguments(1).Units = 'Cnt';
GetNtcActvX.Arguments(1).Direction = 'In';
GetNtcActvX.Arguments(1).InitRowCol = [1  1];
GetNtcActvX.Arguments(1).Description = '';
GetNtcActvX.Arguments(2) = DataDict.CSArguments;
GetNtcActvX.Arguments(2).Name = 'NtcActv';
GetNtcActvX.Arguments(2).EngDT = dt.lgc;
GetNtcActvX.Arguments(2).EngMin = 0;
GetNtcActvX.Arguments(2).EngMax = 1;
GetNtcActvX.Arguments(2).Units = 'Cnt';
GetNtcActvX.Arguments(2).Direction = 'Out';
GetNtcActvX.Arguments(2).InitRowCol = [1  1];
GetNtcActvX.Arguments(2).Description = '';

GetNtcDebCntrApplX = DataDict.SrvRunnable;
GetNtcDebCntrApplX.Context = 'Both';
GetNtcDebCntrApplX.Description = [...
  'Get NTC Debounce Counter Application X'];
GetNtcDebCntrApplX.Return = DataDict.CSReturn;
GetNtcDebCntrApplX.Return.Type = 'None';
GetNtcDebCntrApplX.Return.Min = [];
GetNtcDebCntrApplX.Return.Max = [];
GetNtcDebCntrApplX.Return.TestTolerance = [];
GetNtcDebCntrApplX.Return.Description = 'None';
GetNtcDebCntrApplX.Arguments(1) = DataDict.CSArguments;
GetNtcDebCntrApplX.Arguments(1).Name = 'DebCntrIdx';
GetNtcDebCntrApplX.Arguments(1).EngDT = dt.u08;
GetNtcDebCntrApplX.Arguments(1).EngMin = 0;
GetNtcDebCntrApplX.Arguments(1).EngMax = 255;
GetNtcDebCntrApplX.Arguments(1).Units = 'Cnt';
GetNtcDebCntrApplX.Arguments(1).Direction = 'In';
GetNtcDebCntrApplX.Arguments(1).InitRowCol = [1  1];
GetNtcDebCntrApplX.Arguments(1).Description = 'NTC Debounce Counter Index';
GetNtcDebCntrApplX.Arguments(2) = DataDict.CSArguments;
GetNtcDebCntrApplX.Arguments(2).Name = 'DebCntr';
GetNtcDebCntrApplX.Arguments(2).EngDT = dt.s16;
GetNtcDebCntrApplX.Arguments(2).EngMin = -32768;
GetNtcDebCntrApplX.Arguments(2).EngMax = 32767;
GetNtcDebCntrApplX.Arguments(2).Units = 'Cnt';
GetNtcDebCntrApplX.Arguments(2).Direction = 'Out';
GetNtcDebCntrApplX.Arguments(2).InitRowCol = [1  1];
GetNtcDebCntrApplX.Arguments(2).Description = 'Debounce Counter Value of the NTC';

GetNtcInfoApplX = DataDict.SrvRunnable;
GetNtcInfoApplX.Context = 'Both';
GetNtcInfoApplX.Description = 'Get NTC Info Application X';
GetNtcInfoApplX.Return = DataDict.CSReturn;
GetNtcInfoApplX.Return.Type = 'None';
GetNtcInfoApplX.Return.Min = [];
GetNtcInfoApplX.Return.Max = [];
GetNtcInfoApplX.Return.TestTolerance = [];
GetNtcInfoApplX.Return.Description = 'None';
GetNtcInfoApplX.Arguments(1) = DataDict.CSArguments;
GetNtcInfoApplX.Arguments(1).Name = 'NtcInfoIdx';
GetNtcInfoApplX.Arguments(1).EngDT = dt.u08;
GetNtcInfoApplX.Arguments(1).EngMin = 0;
GetNtcInfoApplX.Arguments(1).EngMax = 255;
GetNtcInfoApplX.Arguments(1).Units = 'Cnt';
GetNtcInfoApplX.Arguments(1).Direction = 'In';
GetNtcInfoApplX.Arguments(1).InitRowCol = [1  1];
GetNtcInfoApplX.Arguments(1).Description = 'NTC Info Index';
GetNtcInfoApplX.Arguments(2) = DataDict.CSArguments;
GetNtcInfoApplX.Arguments(2).Name = 'NtcInfo';
GetNtcInfoApplX.Arguments(2).EngDT = struct.NtcInfoRec4;
GetNtcInfoApplX.Arguments(2).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
GetNtcInfoApplX.Arguments(2).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
GetNtcInfoApplX.Arguments(2).Units = 'Cnt';
GetNtcInfoApplX.Arguments(2).Direction = 'Out';
GetNtcInfoApplX.Arguments(2).InitRowCol = [1  1];
GetNtcInfoApplX.Arguments(2).Description = 'NTC Info';

GetNtcQlfrStsX = DataDict.SrvRunnable;
GetNtcQlfrStsX.Context = 'Both';
GetNtcQlfrStsX.Description = 'Get NTC Qualifier Status X';
GetNtcQlfrStsX.Return = DataDict.CSReturn;
GetNtcQlfrStsX.Return.Type = 'Standard';
GetNtcQlfrStsX.Return.Min = 0;
GetNtcQlfrStsX.Return.Max = 1;
GetNtcQlfrStsX.Return.TestTolerance = 0;
GetNtcQlfrStsX.Return.Description = '';
GetNtcQlfrStsX.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrStsX.Arguments(1).Name = 'NtcNr';
GetNtcQlfrStsX.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrStsX.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrStsX.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrStsX.Arguments(1).Units = 'Cnt';
GetNtcQlfrStsX.Arguments(1).Direction = 'In';
GetNtcQlfrStsX.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrStsX.Arguments(1).Description = 'NTC Number';
GetNtcQlfrStsX.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrStsX.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrStsX.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrStsX.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrStsX.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrStsX.Arguments(2).Units = 'Cnt';
GetNtcQlfrStsX.Arguments(2).Direction = 'Out';
GetNtcQlfrStsX.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrStsX.Arguments(2).Description = 'NTC Qualifier';

GetNtcStsX = DataDict.SrvRunnable;
GetNtcStsX.Context = 'Rte';
GetNtcStsX.Description = 'Get NTC Status X';
GetNtcStsX.Return = DataDict.CSReturn;
GetNtcStsX.Return.Type = 'Standard';
GetNtcStsX.Return.Min = 0;
GetNtcStsX.Return.Max = 1;
GetNtcStsX.Return.TestTolerance = 0;
GetNtcStsX.Return.Description = 'None';
GetNtcStsX.Arguments(1) = DataDict.CSArguments;
GetNtcStsX.Arguments(1).Name = 'NtcNr';
GetNtcStsX.Arguments(1).EngDT = enum.NtcNr1;
GetNtcStsX.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcStsX.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcStsX.Arguments(1).Units = 'Cnt';
GetNtcStsX.Arguments(1).Direction = 'In';
GetNtcStsX.Arguments(1).InitRowCol = [1  1];
GetNtcStsX.Arguments(1).Description = 'NTC Number';
GetNtcStsX.Arguments(2) = DataDict.CSArguments;
GetNtcStsX.Arguments(2).Name = 'NtcInfoSts';
GetNtcStsX.Arguments(2).EngDT = dt.b08;
GetNtcStsX.Arguments(2).EngMin = 0;
GetNtcStsX.Arguments(2).EngMax = 255;
GetNtcStsX.Arguments(2).Units = 'Cnt';
GetNtcStsX.Arguments(2).Direction = 'Out';
GetNtcStsX.Arguments(2).InitRowCol = [1  1];
GetNtcStsX.Arguments(2).Description = 'NTC Info Status';

SetNtcStsX = DataDict.SrvRunnable;
SetNtcStsX.Context = 'Both';
SetNtcStsX.Description = 'Set NTC Status X';
SetNtcStsX.Return = DataDict.CSReturn;
SetNtcStsX.Return.Type = 'Standard';
SetNtcStsX.Return.Min = 0;
SetNtcStsX.Return.Max = 1;
SetNtcStsX.Return.TestTolerance = 0;
SetNtcStsX.Return.Description = 'None';
SetNtcStsX.Arguments(1) = DataDict.CSArguments;
SetNtcStsX.Arguments(1).Name = 'NtcNr';
SetNtcStsX.Arguments(1).EngDT = enum.NtcNr1;
SetNtcStsX.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcStsX.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcStsX.Arguments(1).Units = 'Cnt';
SetNtcStsX.Arguments(1).Direction = 'In';
SetNtcStsX.Arguments(1).InitRowCol = [1  1];
SetNtcStsX.Arguments(1).Description = 'NTC Number';
SetNtcStsX.Arguments(2) = DataDict.CSArguments;
SetNtcStsX.Arguments(2).Name = 'NtcStInfo';
SetNtcStsX.Arguments(2).EngDT = dt.u08;
SetNtcStsX.Arguments(2).EngMin = 0;
SetNtcStsX.Arguments(2).EngMax = 255;
SetNtcStsX.Arguments(2).Units = 'Cnt';
SetNtcStsX.Arguments(2).Direction = 'In';
SetNtcStsX.Arguments(2).InitRowCol = [1  1];
SetNtcStsX.Arguments(2).Description = 'NTC State Info';
SetNtcStsX.Arguments(3) = DataDict.CSArguments;
SetNtcStsX.Arguments(3).Name = 'NtcSts';
SetNtcStsX.Arguments(3).EngDT = enum.NtcSts1;
SetNtcStsX.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcStsX.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcStsX.Arguments(3).Units = 'Cnt';
SetNtcStsX.Arguments(3).Direction = 'In';
SetNtcStsX.Arguments(3).InitRowCol = [1  1];
SetNtcStsX.Arguments(3).Description = 'NTC Status';
SetNtcStsX.Arguments(4) = DataDict.CSArguments;
SetNtcStsX.Arguments(4).Name = 'DebStep';
SetNtcStsX.Arguments(4).EngDT = dt.u16;
SetNtcStsX.Arguments(4).EngMin = 0;
SetNtcStsX.Arguments(4).EngMax = 65535;
SetNtcStsX.Arguments(4).Units = 'Cnt';
SetNtcStsX.Arguments(4).Direction = 'In';
SetNtcStsX.Arguments(4).InitRowCol = [1  1];
SetNtcStsX.Arguments(4).Description = 'Debounce Step';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
DiagcMgrIninCore = DataDict.Client;
DiagcMgrIninCore.CallLocation = {'DiagcMgrProxyApplXInit1'};
DiagcMgrIninCore.Description = [...
  'Used to initialize the data from NVM, Initialize NtcInfoAry, Initializ' ...
  'e DiagcSts and DiagcMgrActv'];
DiagcMgrIninCore.Return = DataDict.CSReturn;
DiagcMgrIninCore.Return.Type = 'None';
DiagcMgrIninCore.Return.Min = [];
DiagcMgrIninCore.Return.Max = [];
DiagcMgrIninCore.Return.TestTolerance = [];
DiagcMgrIninCore.Return.Description = 'None';
DiagcMgrIninCore.Arguments(1) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(1).Name = 'ApplIdx';
DiagcMgrIninCore.Arguments(1).EngDT = dt.u08;
DiagcMgrIninCore.Arguments(1).EngMin = 0;
DiagcMgrIninCore.Arguments(1).EngMax = 255;
DiagcMgrIninCore.Arguments(1).Units = 'Cnt';
DiagcMgrIninCore.Arguments(1).Direction = 'In';
DiagcMgrIninCore.Arguments(1).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(1).Description = 'Application Index';
DiagcMgrIninCore.Arguments(2) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(2).Name = 'NtcInfoArySize';
DiagcMgrIninCore.Arguments(2).EngDT = dt.u08;
DiagcMgrIninCore.Arguments(2).EngMin = 0;
DiagcMgrIninCore.Arguments(2).EngMax = 255;
DiagcMgrIninCore.Arguments(2).Units = 'Cnt';
DiagcMgrIninCore.Arguments(2).Direction = 'In';
DiagcMgrIninCore.Arguments(2).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(2).Description = 'NTC Info Array Size';
DiagcMgrIninCore.Arguments(3) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(3).Name = 'NtcInfoAry';
DiagcMgrIninCore.Arguments(3).EngDT = struct.NtcInfoRec4;
DiagcMgrIninCore.Arguments(3).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
DiagcMgrIninCore.Arguments(3).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
DiagcMgrIninCore.Arguments(3).Units = 'Cnt';
DiagcMgrIninCore.Arguments(3).Direction = 'InOut';
DiagcMgrIninCore.Arguments(3).InitRowCol = [65535      1];
DiagcMgrIninCore.Arguments(3).Description = 'NTC Info Array of Config length';
DiagcMgrIninCore.Arguments(4) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(4).Name = 'DiagcData';
DiagcMgrIninCore.Arguments(4).EngDT = struct.DiagcDataRec1;
DiagcMgrIninCore.Arguments(4).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
DiagcMgrIninCore.Arguments(4).EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
DiagcMgrIninCore.Arguments(4).Units = 'Cnt';
DiagcMgrIninCore.Arguments(4).Direction = 'Out';
DiagcMgrIninCore.Arguments(4).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(4).Description = 'Diagnostic Data';
DiagcMgrIninCore.Arguments(5) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(5).Name = 'ProxySetNtcData';
DiagcMgrIninCore.Arguments(5).EngDT = struct.DiagcDataRec1;
DiagcMgrIninCore.Arguments(5).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
DiagcMgrIninCore.Arguments(5).EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
DiagcMgrIninCore.Arguments(5).Units = 'Cnt';
DiagcMgrIninCore.Arguments(5).Direction = 'Out';
DiagcMgrIninCore.Arguments(5).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(5).Description = 'Proxy Set NTC Data';


GetNtcActvCore = DataDict.Client;
GetNtcActvCore.CallLocation = {'GetNtcActvX'};
GetNtcActvCore.Description = 'Get NTC Active Core';
GetNtcActvCore.Return = DataDict.CSReturn;
GetNtcActvCore.Return.Type = 'None';
GetNtcActvCore.Return.Min = [];
GetNtcActvCore.Return.Max = [];
GetNtcActvCore.Return.TestTolerance = [];
GetNtcActvCore.Return.Description = 'Nonee';
GetNtcActvCore.Arguments(1) = DataDict.CSArguments;
GetNtcActvCore.Arguments(1).Name = 'NtcNr';
GetNtcActvCore.Arguments(1).EngDT = enum.NtcNr1;
GetNtcActvCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcActvCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcActvCore.Arguments(1).Units = 'Cnt';
GetNtcActvCore.Arguments(1).Direction = 'In';
GetNtcActvCore.Arguments(1).InitRowCol = [1  1];
GetNtcActvCore.Arguments(1).Description = 'NTC Number';
GetNtcActvCore.Arguments(2) = DataDict.CSArguments;
GetNtcActvCore.Arguments(2).Name = 'NtcActv';
GetNtcActvCore.Arguments(2).EngDT = dt.lgc;
GetNtcActvCore.Arguments(2).EngMin = 0;
GetNtcActvCore.Arguments(2).EngMax = 1;
GetNtcActvCore.Arguments(2).Units = 'Cnt';
GetNtcActvCore.Arguments(2).Direction = 'Out';
GetNtcActvCore.Arguments(2).InitRowCol = [1  1];
GetNtcActvCore.Arguments(2).Description = 'NTC Active';


GetNtcQlfrStsCore = DataDict.Client;
GetNtcQlfrStsCore.CallLocation = {'GetNtcQlfrStsX'};
GetNtcQlfrStsCore.Description = 'Get NTC Qualifier Status Core';
GetNtcQlfrStsCore.Return = DataDict.CSReturn;
GetNtcQlfrStsCore.Return.Type = 'None';
GetNtcQlfrStsCore.Return.Min = [];
GetNtcQlfrStsCore.Return.Max = [];
GetNtcQlfrStsCore.Return.TestTolerance = [];
GetNtcQlfrStsCore.Return.Description = 'None';
GetNtcQlfrStsCore.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrStsCore.Arguments(1).Name = 'NtcNr';
GetNtcQlfrStsCore.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrStsCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrStsCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrStsCore.Arguments(1).Units = 'Cnt';
GetNtcQlfrStsCore.Arguments(1).Direction = 'In';
GetNtcQlfrStsCore.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrStsCore.Arguments(1).Description = 'NTC Number';
GetNtcQlfrStsCore.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrStsCore.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrStsCore.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrStsCore.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrStsCore.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrStsCore.Arguments(2).Units = 'Cnt';
GetNtcQlfrStsCore.Arguments(2).Direction = 'Out';
GetNtcQlfrStsCore.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrStsCore.Arguments(2).Description = 'NTC Qualifier';


GetNtcStsCore = DataDict.Client;
GetNtcStsCore.CallLocation = {'GetNtcStsX'};
GetNtcStsCore.Description = 'Get NTC Status Core';
GetNtcStsCore.Return = DataDict.CSReturn;
GetNtcStsCore.Return.Type = 'None';
GetNtcStsCore.Return.Min = [];
GetNtcStsCore.Return.Max = [];
GetNtcStsCore.Return.TestTolerance = [];
GetNtcStsCore.Return.Description = 'None';
GetNtcStsCore.Arguments(1) = DataDict.CSArguments;
GetNtcStsCore.Arguments(1).Name = 'NtcNr';
GetNtcStsCore.Arguments(1).EngDT = enum.NtcNr1;
GetNtcStsCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcStsCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcStsCore.Arguments(1).Units = 'Cnt';
GetNtcStsCore.Arguments(1).Direction = 'In';
GetNtcStsCore.Arguments(1).InitRowCol = [1  1];
GetNtcStsCore.Arguments(1).Description = 'NTC Number';
GetNtcStsCore.Arguments(2) = DataDict.CSArguments;
GetNtcStsCore.Arguments(2).Name = 'NtcInfoSts';
GetNtcStsCore.Arguments(2).EngDT = dt.u08;
GetNtcStsCore.Arguments(2).EngMin = 0;
GetNtcStsCore.Arguments(2).EngMax = 255;
GetNtcStsCore.Arguments(2).Units = 'Cnt';
GetNtcStsCore.Arguments(2).Direction = 'Out';
GetNtcStsCore.Arguments(2).InitRowCol = [1  1];
GetNtcStsCore.Arguments(2).Description = 'NTC Info Status';


SetNtcStsCore = DataDict.Client;
SetNtcStsCore.CallLocation = {'SetNtcStsX'};
SetNtcStsCore.Description = 'Set NTC Status Core';
SetNtcStsCore.Return = DataDict.CSReturn;
SetNtcStsCore.Return.Type = 'Standard';
SetNtcStsCore.Return.Min = 0;
SetNtcStsCore.Return.Max = 1;
SetNtcStsCore.Return.TestTolerance = 0;
SetNtcStsCore.Return.Description = 'None';
SetNtcStsCore.Arguments(1) = DataDict.CSArguments;
SetNtcStsCore.Arguments(1).Name = 'NtcNr';
SetNtcStsCore.Arguments(1).EngDT = enum.NtcNr1;
SetNtcStsCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcStsCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcStsCore.Arguments(1).Units = 'Cnt';
SetNtcStsCore.Arguments(1).Direction = 'In';
SetNtcStsCore.Arguments(1).InitRowCol = [1  1];
SetNtcStsCore.Arguments(1).Description = 'NTC Number';
SetNtcStsCore.Arguments(2) = DataDict.CSArguments;
SetNtcStsCore.Arguments(2).Name = 'NtcStInfo';
SetNtcStsCore.Arguments(2).EngDT = dt.u08;
SetNtcStsCore.Arguments(2).EngMin = 0;
SetNtcStsCore.Arguments(2).EngMax = 255;
SetNtcStsCore.Arguments(2).Units = 'Cnt';
SetNtcStsCore.Arguments(2).Direction = 'In';
SetNtcStsCore.Arguments(2).InitRowCol = [1  1];
SetNtcStsCore.Arguments(2).Description = 'NTC State Info';
SetNtcStsCore.Arguments(3) = DataDict.CSArguments;
SetNtcStsCore.Arguments(3).Name = 'NtcSts';
SetNtcStsCore.Arguments(3).EngDT = enum.NtcSts1;
SetNtcStsCore.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcStsCore.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcStsCore.Arguments(3).Units = 'Cnt';
SetNtcStsCore.Arguments(3).Direction = 'In';
SetNtcStsCore.Arguments(3).InitRowCol = [1  1];
SetNtcStsCore.Arguments(3).Description = 'NTC Status';
SetNtcStsCore.Arguments(4) = DataDict.CSArguments;
SetNtcStsCore.Arguments(4).Name = 'DebStep';
SetNtcStsCore.Arguments(4).EngDT = dt.u16;
SetNtcStsCore.Arguments(4).EngMin = 0;
SetNtcStsCore.Arguments(4).EngMax = 65535;
SetNtcStsCore.Arguments(4).Units = 'Cnt';
SetNtcStsCore.Arguments(4).Direction = 'In';
SetNtcStsCore.Arguments(4).InitRowCol = [1  1];
SetNtcStsCore.Arguments(4).Description = 'Debounce Step';
SetNtcStsCore.Arguments(5) = DataDict.CSArguments;
SetNtcStsCore.Arguments(5).Name = 'DiagcData';
SetNtcStsCore.Arguments(5).EngDT = struct.DiagcDataRec1;
SetNtcStsCore.Arguments(5).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
SetNtcStsCore.Arguments(5).EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
SetNtcStsCore.Arguments(5).Units = 'Cnt';
SetNtcStsCore.Arguments(5).Direction = 'InOut';
SetNtcStsCore.Arguments(5).InitRowCol = [1  1];
SetNtcStsCore.Arguments(5).Description = 'Diagnostic Data';
SetNtcStsCore.Arguments(6) = DataDict.CSArguments;
SetNtcStsCore.Arguments(6).Name = 'ProxySetNtcData';
SetNtcStsCore.Arguments(6).EngDT = struct.DiagcDataRec1;
SetNtcStsCore.Arguments(6).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
SetNtcStsCore.Arguments(6).EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
SetNtcStsCore.Arguments(6).Units = 'Cnt';
SetNtcStsCore.Arguments(6).Direction = 'InOut';
SetNtcStsCore.Arguments(6).InitRowCol = [1  1];
SetNtcStsCore.Arguments(6).Description = 'Proxy Set NTC Data';
SetNtcStsCore.Arguments(7) = DataDict.CSArguments;
SetNtcStsCore.Arguments(7).Name = 'NtcInfo';
SetNtcStsCore.Arguments(7).EngDT = struct.NtcInfoRec4;
SetNtcStsCore.Arguments(7).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
SetNtcStsCore.Arguments(7).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
SetNtcStsCore.Arguments(7).Units = 'Cnt';
SetNtcStsCore.Arguments(7).Direction = 'InOut';
SetNtcStsCore.Arguments(7).InitRowCol = [1  1];
SetNtcStsCore.Arguments(7).Description = 'NTC Info';
SetNtcStsCore.Arguments(8) = DataDict.CSArguments;
SetNtcStsCore.Arguments(8).Name = 'NtcInfoDebCntr';
SetNtcStsCore.Arguments(8).EngDT = dt.s16;
SetNtcStsCore.Arguments(8).EngMin = -32768;
SetNtcStsCore.Arguments(8).EngMax = 32767;
SetNtcStsCore.Arguments(8).Units = 'Cnt';
SetNtcStsCore.Arguments(8).Direction = 'InOut';
SetNtcStsCore.Arguments(8).InitRowCol = [1  1];
SetNtcStsCore.Arguments(8).Description = 'NTC Info Debounce Counter';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
ClrDiagcFlgProxy = DataDict.IpSignal;
ClrDiagcFlgProxy.LongName = 'Clear Diagnostics Flag Proxy';
ClrDiagcFlgProxy.Description = 'Clear Diagnostics Flag Proxy';
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'DiagcMgrProxyApplXPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DiagcMgrFltResp = DataDict.Calibration;
DiagcMgrFltResp.LongName = 'Fault Response';
DiagcMgrFltResp.Description = [...
  'Default value Hex: 0x80000F00 (Ntc Enabled and F3 type NTCs). Table of' ...
  ' 512 elements that each NTC is mapped to which contains the bits that ' ...
  'are responsible for driving the output response'];
DiagcMgrFltResp.DocUnits = 'Cnt';
DiagcMgrFltResp.EngDT = dt.b32;
DiagcMgrFltResp.EngVal =  ...
   [0       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488       2147487488];
DiagcMgrFltResp.EngMin = 0;
DiagcMgrFltResp.EngMax = 4294967295;
DiagcMgrFltResp.Cardinality = 'Cmn';
DiagcMgrFltResp.CustomerVisible = false;
DiagcMgrFltResp.Online = false;
DiagcMgrFltResp.Impact = 'H';
DiagcMgrFltResp.TuningOwner = 'EPDT';
DiagcMgrFltResp.GraphLink = {''};
DiagcMgrFltResp.Monotony = 'None';
DiagcMgrFltResp.MaxGrad = 4294967295;
DiagcMgrFltResp.PortName = 'DiagcMgrFltResp';



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
DiagcDataX = DataDict.PIM;
DiagcDataX.LongName = 'Proxy Set Ntc Diagnostic Status X';
DiagcDataX.Description = [...
  'Diagnostic Status that get updated each time SetNtcSts is called. X in' ...
  'dicates the application number(0 to 10).'];
DiagcDataX.DocUnits = 'Cnt';
DiagcDataX.EngDT = struct.DiagcData1;
DiagcDataX.EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
DiagcDataX.EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
DiagcDataX.InitRowCol = [1  1];


DiagcMgrNtcInfoXAry = DataDict.PIM;
DiagcMgrNtcInfoXAry.LongName = 'Diagnostic Manager NTC Information X Array';
DiagcMgrNtcInfoXAry.Description = [...
  'Array of Structure of NtcInfoRec4 for Application X with a length desc' ...
  'ribed by the number of NTCs in that Application.'];
DiagcMgrNtcInfoXAry.DocUnits = 'Cnt';
DiagcMgrNtcInfoXAry.EngDT = struct.NtcInfoRec4;
DiagcMgrNtcInfoXAry.EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
DiagcMgrNtcInfoXAry.EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
DiagcMgrNtcInfoXAry.InitRowCol = [65535      1];


DiagcMgrNtcInfoXDebCntrAry = DataDict.PIM;
DiagcMgrNtcInfoXDebCntrAry.LongName = 'Diagnostic Manager NTC Information X Debounce Counter Array';
DiagcMgrNtcInfoXDebCntrAry.Description = 'Array of Debounce Counters';
DiagcMgrNtcInfoXDebCntrAry.DocUnits = 'Cnt';
DiagcMgrNtcInfoXDebCntrAry.EngDT = dt.s16;
DiagcMgrNtcInfoXDebCntrAry.EngMin = -32768;
DiagcMgrNtcInfoXDebCntrAry.EngMax = 32767;
DiagcMgrNtcInfoXDebCntrAry.InitRowCol = [512    1];


PrevClrNtcFlgX = DataDict.PIM;
PrevClrNtcFlgX.LongName = 'Previous Clear NTC Flag X';
PrevClrNtcFlgX.Description = [...
  'Flag in each application that is used toggled everytime Clear All NTCs' ...
  ' function is called'];
PrevClrNtcFlgX.DocUnits = 'Cnt';
PrevClrNtcFlgX.EngDT = dt.u08;
PrevClrNtcFlgX.EngMin = 0;
PrevClrNtcFlgX.EngMax = 1;
PrevClrNtcFlgX.InitRowCol = [1  1];


ProxySetNtcDataX = DataDict.PIM;
ProxySetNtcDataX.LongName = 'Proxy Set Ntc Diagnostic Status X';
ProxySetNtcDataX.Description = [...
  'Copy of Diagnostic Status that get updated along with DiagcMgrDiagcSts' ...
  '. X indicates the application number(0 to 10).'];
ProxySetNtcDataX.DocUnits = 'Cnt';
ProxySetNtcDataX.EngDT = struct.DiagcData1;
ProxySetNtcDataX.EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
ProxySetNtcDataX.EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
ProxySetNtcDataX.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
APPLIDX0_CNT_U08 = DataDict.Constant;
APPLIDX0_CNT_U08.LongName = 'Application Index';
APPLIDX0_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 0'];
APPLIDX0_CNT_U08.DocUnits = 'Cnt';
APPLIDX0_CNT_U08.EngDT = dt.u08;
APPLIDX0_CNT_U08.EngVal = 0;
APPLIDX0_CNT_U08.Define = 'Local';


APPLIDX10_CNT_U08 = DataDict.Constant;
APPLIDX10_CNT_U08.LongName = 'Application Index';
APPLIDX10_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 10'];
APPLIDX10_CNT_U08.DocUnits = 'Cnt';
APPLIDX10_CNT_U08.EngDT = dt.u08;
APPLIDX10_CNT_U08.EngVal = 10;
APPLIDX10_CNT_U08.Define = 'Local';


APPLIDX1_CNT_U08 = DataDict.Constant;
APPLIDX1_CNT_U08.LongName = 'Application Index';
APPLIDX1_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 1'];
APPLIDX1_CNT_U08.DocUnits = 'Cnt';
APPLIDX1_CNT_U08.EngDT = dt.u08;
APPLIDX1_CNT_U08.EngVal = 1;
APPLIDX1_CNT_U08.Define = 'Local';


APPLIDX2_CNT_U08 = DataDict.Constant;
APPLIDX2_CNT_U08.LongName = 'Application Index';
APPLIDX2_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 2'];
APPLIDX2_CNT_U08.DocUnits = 'Cnt';
APPLIDX2_CNT_U08.EngDT = dt.u08;
APPLIDX2_CNT_U08.EngVal = 2;
APPLIDX2_CNT_U08.Define = 'Local';


APPLIDX3_CNT_U08 = DataDict.Constant;
APPLIDX3_CNT_U08.LongName = 'Application Index';
APPLIDX3_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 3'];
APPLIDX3_CNT_U08.DocUnits = 'Cnt';
APPLIDX3_CNT_U08.EngDT = dt.u08;
APPLIDX3_CNT_U08.EngVal = 3;
APPLIDX3_CNT_U08.Define = 'Local';


APPLIDX4_CNT_U08 = DataDict.Constant;
APPLIDX4_CNT_U08.LongName = 'Application Index';
APPLIDX4_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 4'];
APPLIDX4_CNT_U08.DocUnits = 'Cnt';
APPLIDX4_CNT_U08.EngDT = dt.u08;
APPLIDX4_CNT_U08.EngVal = 4;
APPLIDX4_CNT_U08.Define = 'Local';


APPLIDX5_CNT_U08 = DataDict.Constant;
APPLIDX5_CNT_U08.LongName = 'Application Index';
APPLIDX5_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 5'];
APPLIDX5_CNT_U08.DocUnits = 'Cnt';
APPLIDX5_CNT_U08.EngDT = dt.u08;
APPLIDX5_CNT_U08.EngVal = 5;
APPLIDX5_CNT_U08.Define = 'Local';


APPLIDX6_CNT_U08 = DataDict.Constant;
APPLIDX6_CNT_U08.LongName = 'Application Index';
APPLIDX6_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 6'];
APPLIDX6_CNT_U08.DocUnits = 'Cnt';
APPLIDX6_CNT_U08.EngDT = dt.u08;
APPLIDX6_CNT_U08.EngVal = 6;
APPLIDX6_CNT_U08.Define = 'Local';


APPLIDX7_CNT_U08 = DataDict.Constant;
APPLIDX7_CNT_U08.LongName = 'Application Index';
APPLIDX7_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 7'];
APPLIDX7_CNT_U08.DocUnits = 'Cnt';
APPLIDX7_CNT_U08.EngDT = dt.u08;
APPLIDX7_CNT_U08.EngVal = 7;
APPLIDX7_CNT_U08.Define = 'Local';


APPLIDX8_CNT_U08 = DataDict.Constant;
APPLIDX8_CNT_U08.LongName = 'Application Index';
APPLIDX8_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 8'];
APPLIDX8_CNT_U08.DocUnits = 'Cnt';
APPLIDX8_CNT_U08.EngDT = dt.u08;
APPLIDX8_CNT_U08.EngVal = 8;
APPLIDX8_CNT_U08.Define = 'Local';


APPLIDX9_CNT_U08 = DataDict.Constant;
APPLIDX9_CNT_U08.LongName = 'Application Index';
APPLIDX9_CNT_U08.Description = [...
  'Diagnostic Manager Application Index 9'];
APPLIDX9_CNT_U08.DocUnits = 'Cnt';
APPLIDX9_CNT_U08.EngDT = dt.u08;
APPLIDX9_CNT_U08.EngVal = 9;
APPLIDX9_CNT_U08.Define = 'Local';


DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.LongName = 'NTC Info Status Fault Set';
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.Description = [...
  'Hex: 0x01. Bit Mask to access the "TestFailed" bit in NTC Status Byte'];
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.EngVal = 1;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.Define = 'Global';


DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.LongName = 'NTC Info Status Test Not Complete This Ignition Cycle';
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.Description = [...
  'Hex: 0x40. Bit Mask to access the "TestNotCompleteThisIgnitionCycle" b' ...
  'it in NTC Status Byte'];
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.EngVal = 64;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.Define = 'Global';


DIAGCSTSININVAL_CNT_U16 = DataDict.Constant;
DIAGCSTSININVAL_CNT_U16.LongName = 'Diagnostic Status Initialization Value';
DIAGCSTSININVAL_CNT_U16.Description = [...
  'Value with Diagnostic Status is initialized'];
DIAGCSTSININVAL_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSININVAL_CNT_U16.EngDT = dt.u16;
DIAGCSTSININVAL_CNT_U16.EngVal = 0;
DIAGCSTSININVAL_CNT_U16.Define = 'Local';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Electrical Global Parameter Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMax = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.Header = '';
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Local';


E_OK = DataDict.Constant;
E_OK.LongName = 'E Ok';
E_OK.Description = [...
  'AUTOSAR Standard Return Type OK value'];
E_OK.DocUnits = 'Cnt';
E_OK.EngDT = dt.u08;
E_OK.EngVal = 0;
E_OK.Define = 'Global';


FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32 = DataDict.Constant;
FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32.LongName = 'Fault Response Default HandWheel Angle Serial Communication Export Value';
FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32.Description = [...
  'Hex: 0x4000000. Bit Mask to access the "Default HandWheel Angle Serial' ...
  ' Communication Export Value" bit in Fault Response Table'];
FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32.DocUnits = 'Cnt';
FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32.EngDT = dt.b32;
FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32.EngVal = 67108864;
FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32.Define = 'Local';


FLTRESPDFTHWAG_CNT_U32 = DataDict.Constant;
FLTRESPDFTHWAG_CNT_U32.LongName = 'Fault Response Default HandWheel Angle';
FLTRESPDFTHWAG_CNT_U32.Description = [...
  'Hex: 0x20000000. Bit Mask to access the "Default HandWheel Angle" bit ' ...
  'in Fault Response Table'];
FLTRESPDFTHWAG_CNT_U32.DocUnits = 'Cnt';
FLTRESPDFTHWAG_CNT_U32.EngDT = dt.b32;
FLTRESPDFTHWAG_CNT_U32.EngVal = 536870912;
FLTRESPDFTHWAG_CNT_U32.Define = 'Local';


FLTRESPDFTVEHSPD_CNT_U32 = DataDict.Constant;
FLTRESPDFTVEHSPD_CNT_U32.LongName = 'Fault Response Default Vehicle Speed';
FLTRESPDFTVEHSPD_CNT_U32.Description = [...
  'Hex: 0x10000000. Bit Mask to access the "Default Vehicle Speed" bit in' ...
  ' Fault Response Table'];
FLTRESPDFTVEHSPD_CNT_U32.DocUnits = 'Cnt';
FLTRESPDFTVEHSPD_CNT_U32.EngDT = dt.b32;
FLTRESPDFTVEHSPD_CNT_U32.EngVal = 268435456;
FLTRESPDFTVEHSPD_CNT_U32.Define = 'Local';


FLTRESPIVTR1INACTV_CNT_U32 = DataDict.Constant;
FLTRESPIVTR1INACTV_CNT_U32.LongName = 'Fault Response Inverter 1 Inactive';
FLTRESPIVTR1INACTV_CNT_U32.Description = [...
  'Hex: 0x8000. Bit Mask to access the "Inverter 1 Inactive" bit in Fault' ...
  ' Response Table'];
FLTRESPIVTR1INACTV_CNT_U32.DocUnits = 'Cnt';
FLTRESPIVTR1INACTV_CNT_U32.EngDT = dt.b32;
FLTRESPIVTR1INACTV_CNT_U32.EngVal = 32768;
FLTRESPIVTR1INACTV_CNT_U32.Define = 'Local';


FLTRESPIVTR2INACTV_CNT_U32 = DataDict.Constant;
FLTRESPIVTR2INACTV_CNT_U32.LongName = 'Fault Response Inverter 2 Inactive';
FLTRESPIVTR2INACTV_CNT_U32.Description = [...
  'Hex: 0x10000. Bit Mask to access the "Inverter 2 Inactive" bit in Faul' ...
  't Response Table'];
FLTRESPIVTR2INACTV_CNT_U32.DocUnits = 'Cnt';
FLTRESPIVTR2INACTV_CNT_U32.EngDT = dt.b32;
FLTRESPIVTR2INACTV_CNT_U32.EngVal = 65536;
FLTRESPIVTR2INACTV_CNT_U32.Define = 'Local';


FLTRESPLIMDTPRFMNC_CNT_U32 = DataDict.Constant;
FLTRESPLIMDTPRFMNC_CNT_U32.LongName = 'Fault Response Limited Temperature Performance';
FLTRESPLIMDTPRFMNC_CNT_U32.Description = [...
  'Hex: 0x8000000. Bit Mask to access the "Limited Temperature Performanc' ...
  'e" bit in Fault Response Table'];
FLTRESPLIMDTPRFMNC_CNT_U32.DocUnits = 'Cnt';
FLTRESPLIMDTPRFMNC_CNT_U32.EngDT = dt.b32;
FLTRESPLIMDTPRFMNC_CNT_U32.EngVal = 134217728;
FLTRESPLIMDTPRFMNC_CNT_U32.Define = 'Local';


FLTRESPRAMPBITS_CNT_U32 = DataDict.Constant;
FLTRESPRAMPBITS_CNT_U32.LongName = 'Fault Response Ramp Bits';
FLTRESPRAMPBITS_CNT_U32.Description = [...
  'Hex: 0xF00. Bit Mask to access the "Ramp Bits" bit in Fault Response T' ...
  'able'];
FLTRESPRAMPBITS_CNT_U32.DocUnits = 'Cnt';
FLTRESPRAMPBITS_CNT_U32.EngDT = dt.b32;
FLTRESPRAMPBITS_CNT_U32.EngVal = 3840;
FLTRESPRAMPBITS_CNT_U32.Define = 'Local';


FLTRESPSTSLOCKDTHISIGNCYC_CNT_U32 = DataDict.Constant;
FLTRESPSTSLOCKDTHISIGNCYC_CNT_U32.LongName = 'Fault Response Status Locked This Ignition Cycle';
FLTRESPSTSLOCKDTHISIGNCYC_CNT_U32.Description = [...
  'Hex: 0x00001000. Bit Mask to access the "Status Locked This Ignition C' ...
  'ycle Bit" in Fault Response Table'];
FLTRESPSTSLOCKDTHISIGNCYC_CNT_U32.DocUnits = 'Cnt';
FLTRESPSTSLOCKDTHISIGNCYC_CNT_U32.EngDT = dt.b32;
FLTRESPSTSLOCKDTHISIGNCYC_CNT_U32.EngVal = 4096;
FLTRESPSTSLOCKDTHISIGNCYC_CNT_U32.Define = 'Local';


FLTRESPWHLIMBREJCTNDI_CNT_U32 = DataDict.Constant;
FLTRESPWHLIMBREJCTNDI_CNT_U32.LongName = 'Fault Response Wheel Imbalance Rejection Disable';
FLTRESPWHLIMBREJCTNDI_CNT_U32.Description = [...
  'Hex: 0x800000. Bit Mask to access the "Wheel Imbalance Rejection Disab' ...
  'le" bit in Fault Response Table'];
FLTRESPWHLIMBREJCTNDI_CNT_U32.DocUnits = 'Cnt';
FLTRESPWHLIMBREJCTNDI_CNT_U32.EngDT = dt.b32;
FLTRESPWHLIMBREJCTNDI_CNT_U32.EngVal = 8388608;
FLTRESPWHLIMBREJCTNDI_CNT_U32.Define = 'Local';


MAXRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MAXRAMPRATE_ULSPERSEC_F32.LongName = 'Maximum Ramp Rate';
MAXRAMPRATE_ULSPERSEC_F32.Description = [...
  'Maximum Ramp Rate at which the system goes to shutdown'];
MAXRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MAXRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MAXRAMPRATE_ULSPERSEC_F32.EngVal = 500;
MAXRAMPRATE_ULSPERSEC_F32.Define = 'Local';


MINRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MINRAMPRATE_ULSPERSEC_F32.LongName = 'Minimum Ramp Rate Value';
MINRAMPRATE_ULSPERSEC_F32.Description = 'The minimum value of the RampRate';
MINRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MINRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MINRAMPRATE_ULSPERSEC_F32.EngVal = 0.1;
MINRAMPRATE_ULSPERSEC_F32.Define = 'Local';


SCAMOTTQCMDTOONE_ULS_F32 = DataDict.Constant;
SCAMOTTQCMDTOONE_ULS_F32.LongName = 'Scale Motor Torque Command to One';
SCAMOTTQCMDTOONE_ULS_F32.Description = [...
  'Initialize Scale Motor Torque Command to One during intialization or d' ...
  'uring updating Scale value every 10ms'];
SCAMOTTQCMDTOONE_ULS_F32.DocUnits = 'Uls';
SCAMOTTQCMDTOONE_ULS_F32.EngDT = dt.float32;
SCAMOTTQCMDTOONE_ULS_F32.EngVal = 1;
SCAMOTTQCMDTOONE_ULS_F32.Define = 'Local';


SCAMOTTQCMDTOZERO_ULS_F32 = DataDict.Constant;
SCAMOTTQCMDTOZERO_ULS_F32.LongName = 'Scale Motor Torque Command to Zero';
SCAMOTTQCMDTOZERO_ULS_F32.Description = [...
  'Scale Motor Torque Command to Zero when a fault that ramps the system ' ...
  'down to 0 is set'];
SCAMOTTQCMDTOZERO_ULS_F32.DocUnits = 'Uls';
SCAMOTTQCMDTOZERO_ULS_F32.EngDT = dt.float32;
SCAMOTTQCMDTOZERO_ULS_F32.EngVal = 0;
SCAMOTTQCMDTOZERO_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
