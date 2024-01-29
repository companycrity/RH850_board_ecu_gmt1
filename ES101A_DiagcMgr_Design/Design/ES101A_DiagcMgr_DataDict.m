%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2016 18:50:11       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 12 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: nzg49t %          %
%%-----------------------------------------------------------------------%

ES101A = DataDict.FDD;
ES101A.Version = '4.6.X';
ES101A.LongName = 'Diagnostic Manager';
ES101A.ShoName  = 'DiagcMgr';
ES101A.DesignASIL = 'D';
ES101A.Description = [...
  'This function is responsible for handling all the NTCs that are used b' ...
  'y different FDDs. The Diagnostic Manager sets the NTC called by any co' ...
  'mponent and requests the system to either ramp down to Disable or take' ...
  ' no action'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DiagcMgrPer1 = DataDict.Runnable;
DiagcMgrPer1.Context = 'Rte';
DiagcMgrPer1.TimeStep = 0.002;
DiagcMgrPer1.Description = 'Diagnostic Manager Core Periodic 1';

DiagcMgrPer2 = DataDict.Runnable;
DiagcMgrPer2.Context = 'Rte';
DiagcMgrPer2.TimeStep = 0.1;
DiagcMgrPer2.Description = 'Diagnostic Manager Core Periodic 2';

ClrAllDiagc = DataDict.SrvRunnable;
ClrAllDiagc.Context = 'Rte';
ClrAllDiagc.Description = [...
  'A function to clear all Diagnostics. NTCs and DTCs'];
ClrAllDiagc.Return = DataDict.CSReturn;
ClrAllDiagc.Return.Type = 'None';
ClrAllDiagc.Return.Min = [];
ClrAllDiagc.Return.Max = [];
ClrAllDiagc.Return.TestTolerance = [];
ClrAllDiagc.Return.Description = '';

ClrSnpshtData = DataDict.SrvRunnable;
ClrSnpshtData.Context = 'Rte';
ClrSnpshtData.Description = 'Clear Snapshot Data';
ClrSnpshtData.Return = DataDict.CSReturn;
ClrSnpshtData.Return.Type = 'None';
ClrSnpshtData.Return.Min = [];
ClrSnpshtData.Return.Max = [];
ClrSnpshtData.Return.TestTolerance = [];
ClrSnpshtData.Return.Description = '';

DiagcMgrIninCore = DataDict.SrvRunnable;
DiagcMgrIninCore.Context = 'Rte';
DiagcMgrIninCore.Description = [...
  'Used to initialize the data from NVM, Initialize NtcInfoAry, Initializ' ...
  'e DiagcSts and DiagcMgrActv'];
DiagcMgrIninCore.Return = DataDict.CSReturn;
DiagcMgrIninCore.Return.Type = 'None';
DiagcMgrIninCore.Return.Min = [];
DiagcMgrIninCore.Return.Max = [];
DiagcMgrIninCore.Return.TestTolerance = [];
DiagcMgrIninCore.Return.Description = '';
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

DiagcMgrPwrDwn = DataDict.SrvRunnable;
DiagcMgrPwrDwn.Context = 'Rte';
DiagcMgrPwrDwn.Description = 'Diagnostic Manager Power Down';
DiagcMgrPwrDwn.Return = DataDict.CSReturn;
DiagcMgrPwrDwn.Return.Type = 'None';
DiagcMgrPwrDwn.Return.Min = [];
DiagcMgrPwrDwn.Return.Max = [];
DiagcMgrPwrDwn.Return.TestTolerance = [];
DiagcMgrPwrDwn.Return.Description = '';

GetNtcActvCore = DataDict.SrvRunnable;
GetNtcActvCore.Context = 'Rte';
GetNtcActvCore.Description = 'Get NTC Active Core';
GetNtcActvCore.Return = DataDict.CSReturn;
GetNtcActvCore.Return.Type = 'None';
GetNtcActvCore.Return.Min = [];
GetNtcActvCore.Return.Max = [];
GetNtcActvCore.Return.TestTolerance = [];
GetNtcActvCore.Return.Description = '';
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

GetNtcQlfrStsCore = DataDict.SrvRunnable;
GetNtcQlfrStsCore.Context = 'Rte';
GetNtcQlfrStsCore.Description = 'Get NTC Qualifier Status Core';
GetNtcQlfrStsCore.Return = DataDict.CSReturn;
GetNtcQlfrStsCore.Return.Type = 'None';
GetNtcQlfrStsCore.Return.Min = [];
GetNtcQlfrStsCore.Return.Max = [];
GetNtcQlfrStsCore.Return.TestTolerance = [];
GetNtcQlfrStsCore.Return.Description = '';
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

GetNtcStsCore = DataDict.SrvRunnable;
GetNtcStsCore.Context = 'Rte';
GetNtcStsCore.Description = 'Get NTC Status Core';
GetNtcStsCore.Return = DataDict.CSReturn;
GetNtcStsCore.Return.Type = 'None';
GetNtcStsCore.Return.Min = [];
GetNtcStsCore.Return.Max = [];
GetNtcStsCore.Return.TestTolerance = [];
GetNtcStsCore.Return.Description = '';
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

ReadNtcFltAry = DataDict.SrvRunnable;
ReadNtcFltAry.Context = 'Rte';
ReadNtcFltAry.Description = 'Read NTC Fault Array';
ReadNtcFltAry.Return = DataDict.CSReturn;
ReadNtcFltAry.Return.Type = 'None';
ReadNtcFltAry.Return.Min = [];
ReadNtcFltAry.Return.Max = [];
ReadNtcFltAry.Return.TestTolerance = [];
ReadNtcFltAry.Return.Description = '';
ReadNtcFltAry.Arguments(1) = DataDict.CSArguments;
ReadNtcFltAry.Arguments(1).Name = 'DiagcMgrReadFltInfo';
ReadNtcFltAry.Arguments(1).EngDT = struct.ReadFltInfoRec1;
ReadNtcFltAry.Arguments(1).EngMin = [struct('NtcNr',0,'AgiCntr',0,'Sts',0,'NtcStInfo',0)];
ReadNtcFltAry.Arguments(1).EngMax = [struct('NtcNr',511,'AgiCntr',255,'Sts',255,'NtcStInfo',255)];
ReadNtcFltAry.Arguments(1).Units = 'Cnt';
ReadNtcFltAry.Arguments(1).Direction = 'Out';
ReadNtcFltAry.Arguments(1).InitRowCol = [1  20];
ReadNtcFltAry.Arguments(1).Description = 'Diagnostic Manager Read Fault Info';

ReadNtcInfoAndDebCntr = DataDict.SrvRunnable;
ReadNtcInfoAndDebCntr.Context = 'Rte';
ReadNtcInfoAndDebCntr.Description = 'Read NTC Info and Debounce Counter';
ReadNtcInfoAndDebCntr.Return = DataDict.CSReturn;
ReadNtcInfoAndDebCntr.Return.Type = 'None';
ReadNtcInfoAndDebCntr.Return.Min = [];
ReadNtcInfoAndDebCntr.Return.Max = [];
ReadNtcInfoAndDebCntr.Return.TestTolerance = [];
ReadNtcInfoAndDebCntr.Return.Description = '';
ReadNtcInfoAndDebCntr.Arguments(1) = DataDict.CSArguments;
ReadNtcInfoAndDebCntr.Arguments(1).Name = 'NtcNr';
ReadNtcInfoAndDebCntr.Arguments(1).EngDT = enum.NtcNr1;
ReadNtcInfoAndDebCntr.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
ReadNtcInfoAndDebCntr.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
ReadNtcInfoAndDebCntr.Arguments(1).Units = 'Cnt';
ReadNtcInfoAndDebCntr.Arguments(1).Direction = 'In';
ReadNtcInfoAndDebCntr.Arguments(1).InitRowCol = [1  1];
ReadNtcInfoAndDebCntr.Arguments(1).Description = 'NTC Number';
ReadNtcInfoAndDebCntr.Arguments(2) = DataDict.CSArguments;
ReadNtcInfoAndDebCntr.Arguments(2).Name = 'NtcInfo';
ReadNtcInfoAndDebCntr.Arguments(2).EngDT = struct.NtcInfoRec4;
ReadNtcInfoAndDebCntr.Arguments(2).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
ReadNtcInfoAndDebCntr.Arguments(2).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
ReadNtcInfoAndDebCntr.Arguments(2).Units = 'Cnt';
ReadNtcInfoAndDebCntr.Arguments(2).Direction = 'Out';
ReadNtcInfoAndDebCntr.Arguments(2).InitRowCol = [1  1];
ReadNtcInfoAndDebCntr.Arguments(2).Description = '';
ReadNtcInfoAndDebCntr.Arguments(3) = DataDict.CSArguments;
ReadNtcInfoAndDebCntr.Arguments(3).Name = 'DebCntr';
ReadNtcInfoAndDebCntr.Arguments(3).EngDT = dt.s16;
ReadNtcInfoAndDebCntr.Arguments(3).EngMin = -32768;
ReadNtcInfoAndDebCntr.Arguments(3).EngMax = 32767;
ReadNtcInfoAndDebCntr.Arguments(3).Units = 'Cnt';
ReadNtcInfoAndDebCntr.Arguments(3).Direction = 'Out';
ReadNtcInfoAndDebCntr.Arguments(3).InitRowCol = [1  1];
ReadNtcInfoAndDebCntr.Arguments(3).Description = 'Debounce Counter of that NTC';

ReadSnpshtData = DataDict.SrvRunnable;
ReadSnpshtData.Context = 'Rte';
ReadSnpshtData.Description = 'Read Snapshot Data';
ReadSnpshtData.Return = DataDict.CSReturn;
ReadSnpshtData.Return.Type = 'None';
ReadSnpshtData.Return.Min = [];
ReadSnpshtData.Return.Max = [];
ReadSnpshtData.Return.TestTolerance = [];
ReadSnpshtData.Return.Description = '';
ReadSnpshtData.Arguments(1) = DataDict.CSArguments;
ReadSnpshtData.Arguments(1).Name = 'ReadSnpshtAry';
ReadSnpshtData.Arguments(1).EngDT = struct.SnpshtDataRec1;
ReadSnpshtData.Arguments(1).EngMin = [struct('MicroDiagcData',0,'HwTq',0,'MotTq',0,'IgnCntr',0,'BrdgVltg',0,'EcuT',0,'NtcNr',0,'NtcStInfo',0,'SysSt',0,'VehSpd',0)];
ReadSnpshtData.Arguments(1).EngMax = [struct('MicroDiagcData',255,'HwTq',10,'MotTq',8.8,'IgnCntr',255,'BrdgVltg',40,'EcuT',150,'NtcNr',255,'NtcStInfo',255,'SysSt',4,'VehSpd',255)];
ReadSnpshtData.Arguments(1).Units = 'Cnt';
ReadSnpshtData.Arguments(1).Direction = 'Out';
ReadSnpshtData.Arguments(1).InitRowCol = [8  1];
ReadSnpshtData.Arguments(1).Description = 'Outputs the Array of Snapshot Data';

RestoreNtcFltAryDft = DataDict.SrvRunnable;
RestoreNtcFltAryDft.Context = 'NonRte';
RestoreNtcFltAryDft.Description = [...
  'Resotre NTC Fault Array to Default Values'];
RestoreNtcFltAryDft.Return = DataDict.CSReturn;
RestoreNtcFltAryDft.Return.Type = 'None';
RestoreNtcFltAryDft.Return.Min = [];
RestoreNtcFltAryDft.Return.Max = [];
RestoreNtcFltAryDft.Return.TestTolerance = [];
RestoreNtcFltAryDft.Return.Description = '';

RestoreSnpshtAryDft = DataDict.SrvRunnable;
RestoreSnpshtAryDft.Context = 'NonRte';
RestoreSnpshtAryDft.Description = [...
  'Resotre Snapshot Array to Default Values'];
RestoreSnpshtAryDft.Return = DataDict.CSReturn;
RestoreSnpshtAryDft.Return.Type = 'None';
RestoreSnpshtAryDft.Return.Min = [];
RestoreSnpshtAryDft.Return.Max = [];
RestoreSnpshtAryDft.Return.TestTolerance = [];
RestoreSnpshtAryDft.Return.Description = '';

SetNtcStsCore = DataDict.SrvRunnable;
SetNtcStsCore.Context = 'Rte';
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

UpdDtcEnaCdn = DataDict.SrvRunnable;
UpdDtcEnaCdn.Context = 'NonRte';
UpdDtcEnaCdn.Description = 'Update DTC Enable Condition';
UpdDtcEnaCdn.Return = DataDict.CSReturn;
UpdDtcEnaCdn.Return.Type = 'None';
UpdDtcEnaCdn.Return.Min = [];
UpdDtcEnaCdn.Return.Max = [];
UpdDtcEnaCdn.Return.TestTolerance = [];
UpdDtcEnaCdn.Return.Description = '';
UpdDtcEnaCdn.Arguments(1) = DataDict.CSArguments;
UpdDtcEnaCdn.Arguments(1).Name = 'DtcEnaCdnSts';
UpdDtcEnaCdn.Arguments(1).EngDT = dt.lgc;
UpdDtcEnaCdn.Arguments(1).EngMin = 0;
UpdDtcEnaCdn.Arguments(1).EngMax = 1;
UpdDtcEnaCdn.Arguments(1).Units = 'Cnt';
UpdDtcEnaCdn.Arguments(1).Direction = 'In';
UpdDtcEnaCdn.Arguments(1).InitRowCol = [1  1];
UpdDtcEnaCdn.Arguments(1).Description = 'DTC Enable Condition Status';
UpdDtcEnaCdn.Arguments(2) = DataDict.CSArguments;
UpdDtcEnaCdn.Arguments(2).Name = 'DtcEnaCdnId';
UpdDtcEnaCdn.Arguments(2).EngDT = dt.u08;
UpdDtcEnaCdn.Arguments(2).EngMin = 0;
UpdDtcEnaCdn.Arguments(2).EngMax = 15;
UpdDtcEnaCdn.Arguments(2).Units = 'Cnt';
UpdDtcEnaCdn.Arguments(2).Direction = 'In';
UpdDtcEnaCdn.Arguments(2).InitRowCol = [1  1];
UpdDtcEnaCdn.Arguments(2).Description = 'DTC Enable Condition Id';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Dem_ClearDTC = DataDict.Client;
Dem_ClearDTC.CallLocation = {'DiagcMgrPer2'};
Dem_ClearDTC.Description = 'DEM Clear DTC';
Dem_ClearDTC.Return = DataDict.CSReturn;
Dem_ClearDTC.Return.Type = 'Dem_ReturnClearDTCType';
Dem_ClearDTC.Return.Min = 0;
Dem_ClearDTC.Return.Max = 1;
Dem_ClearDTC.Return.TestTolerance = [];
Dem_ClearDTC.Return.Description = 'DEM Return Type';
Dem_ClearDTC.Arguments(1) = DataDict.CSArguments;
Dem_ClearDTC.Arguments(1).Name = 'DTC';
Dem_ClearDTC.Arguments(1).EngDT = dt.u32;
Dem_ClearDTC.Arguments(1).EngMin = 0;
Dem_ClearDTC.Arguments(1).EngMax = 4294967295;
Dem_ClearDTC.Arguments(1).Units = 'Cnt';
Dem_ClearDTC.Arguments(1).Direction = 'In';
Dem_ClearDTC.Arguments(1).InitRowCol = [1  1];
Dem_ClearDTC.Arguments(1).Description = 'DTC';
Dem_ClearDTC.Arguments(2) = DataDict.CSArguments;
Dem_ClearDTC.Arguments(2).Name = 'DTCFormat';
Dem_ClearDTC.Arguments(2).EngDT = enum.Dem_DTCFormatType;
Dem_ClearDTC.Arguments(2).EngMin = Dem_DTCFormatType.DEM_DTC_FORMAT_OBD;
Dem_ClearDTC.Arguments(2).EngMax = Dem_DTCFormatType.DEM_DTC_FORMAT_UDS;
Dem_ClearDTC.Arguments(2).Units = 'Cnt';
Dem_ClearDTC.Arguments(2).Direction = 'In';
Dem_ClearDTC.Arguments(2).InitRowCol = [1  1];
Dem_ClearDTC.Arguments(2).Description = 'DTCFormat';
Dem_ClearDTC.Arguments(3) = DataDict.CSArguments;
Dem_ClearDTC.Arguments(3).Name = 'DTCOrigin';
Dem_ClearDTC.Arguments(3).EngDT = enum.Dem_DTCOriginType;
Dem_ClearDTC.Arguments(3).EngMin = Dem_DTCOriginType.DEM_DTC_ORIGIN_PRIMARY_MEMORY;
Dem_ClearDTC.Arguments(3).EngMax = Dem_DTCOriginType.DEM_DTC_ORIGIN_SECONDARY_MEMORY;
Dem_ClearDTC.Arguments(3).Units = 'Cnt';
Dem_ClearDTC.Arguments(3).Direction = 'In';
Dem_ClearDTC.Arguments(3).InitRowCol = [1  1];
Dem_ClearDTC.Arguments(3).Description = 'DTCOrigin';


Dem_GetDTCOfEvent = DataDict.Client;
Dem_GetDTCOfEvent.CallLocation = {'DiagcMgrPer2'};
Dem_GetDTCOfEvent.Description = 'DEM Get DTC of Event';
Dem_GetDTCOfEvent.Return = DataDict.CSReturn;
Dem_GetDTCOfEvent.Return.Type = 'Standard';
Dem_GetDTCOfEvent.Return.Min = 0;
Dem_GetDTCOfEvent.Return.Max = 1;
Dem_GetDTCOfEvent.Return.TestTolerance = [];
Dem_GetDTCOfEvent.Return.Description = 'Standard';
Dem_GetDTCOfEvent.Arguments(1) = DataDict.CSArguments;
Dem_GetDTCOfEvent.Arguments(1).Name = 'EventID';
Dem_GetDTCOfEvent.Arguments(1).EngDT = dt.u16;
Dem_GetDTCOfEvent.Arguments(1).EngMin = 1;
Dem_GetDTCOfEvent.Arguments(1).EngMax = 65535;
Dem_GetDTCOfEvent.Arguments(1).Units = 'Cnt';
Dem_GetDTCOfEvent.Arguments(1).Direction = 'In';
Dem_GetDTCOfEvent.Arguments(1).InitRowCol = [1  1];
Dem_GetDTCOfEvent.Arguments(1).Description = 'EventID';
Dem_GetDTCOfEvent.Arguments(2) = DataDict.CSArguments;
Dem_GetDTCOfEvent.Arguments(2).Name = 'DTCFormat';
Dem_GetDTCOfEvent.Arguments(2).EngDT = enum.Dem_DTCFormatType;
Dem_GetDTCOfEvent.Arguments(2).EngMin = Dem_DTCFormatType.DEM_DTC_FORMAT_OBD;
Dem_GetDTCOfEvent.Arguments(2).EngMax = Dem_DTCFormatType.DEM_DTC_FORMAT_UDS;
Dem_GetDTCOfEvent.Arguments(2).Units = 'Cnt';
Dem_GetDTCOfEvent.Arguments(2).Direction = 'In';
Dem_GetDTCOfEvent.Arguments(2).InitRowCol = [1  1];
Dem_GetDTCOfEvent.Arguments(2).Description = 'DTCFormat';
Dem_GetDTCOfEvent.Arguments(3) = DataDict.CSArguments;
Dem_GetDTCOfEvent.Arguments(3).Name = 'DTCOfEvent';
Dem_GetDTCOfEvent.Arguments(3).EngDT = dt.u32;
Dem_GetDTCOfEvent.Arguments(3).EngMin = 0;
Dem_GetDTCOfEvent.Arguments(3).EngMax = 4294967295;
Dem_GetDTCOfEvent.Arguments(3).Units = 'Cnt';
Dem_GetDTCOfEvent.Arguments(3).Direction = 'Out';
Dem_GetDTCOfEvent.Arguments(3).InitRowCol = [1  1];
Dem_GetDTCOfEvent.Arguments(3).Description = 'DTCOfEvent';


Dem_SetEventStatus = DataDict.Client;
Dem_SetEventStatus.CallLocation = {'DiagcMgrPer2'};
Dem_SetEventStatus.Description = 'DEM Set Event Status';
Dem_SetEventStatus.Return = DataDict.CSReturn;
Dem_SetEventStatus.Return.Type = 'Standard';
Dem_SetEventStatus.Return.Min = 0;
Dem_SetEventStatus.Return.Max = 1;
Dem_SetEventStatus.Return.TestTolerance = [];
Dem_SetEventStatus.Return.Description = 'Standard';
Dem_SetEventStatus.Arguments(1) = DataDict.CSArguments;
Dem_SetEventStatus.Arguments(1).Name = 'EventId';
Dem_SetEventStatus.Arguments(1).EngDT = dt.u16;
Dem_SetEventStatus.Arguments(1).EngMin = 1;
Dem_SetEventStatus.Arguments(1).EngMax = 65535;
Dem_SetEventStatus.Arguments(1).Units = 'Cnt';
Dem_SetEventStatus.Arguments(1).Direction = 'In';
Dem_SetEventStatus.Arguments(1).InitRowCol = [1  1];
Dem_SetEventStatus.Arguments(1).Description = 'EventId';
Dem_SetEventStatus.Arguments(2) = DataDict.CSArguments;
Dem_SetEventStatus.Arguments(2).Name = 'EventStatus';
Dem_SetEventStatus.Arguments(2).EngDT = enum.Dem_EventStatusType;
Dem_SetEventStatus.Arguments(2).EngMin = Dem_EventStatusType.DEM_EVENT_STATUS_PASSED;
Dem_SetEventStatus.Arguments(2).EngMax = Dem_EventStatusType.DEM_EVENT_STATUS_PREFAILED;
Dem_SetEventStatus.Arguments(2).Units = 'Cnt';
Dem_SetEventStatus.Arguments(2).Direction = 'In';
Dem_SetEventStatus.Arguments(2).InitRowCol = [1  1];
Dem_SetEventStatus.Arguments(2).Description = 'EventStatus';


DiagcMgrNtcFltAry_SetRamBlockStatus = DataDict.Client;
DiagcMgrNtcFltAry_SetRamBlockStatus.CallLocation = {'DiagcMgrPwrDwn'};
DiagcMgrNtcFltAry_SetRamBlockStatus.Description = [...
  'Diagnostic Manager NTC Fault Array - Set RAM Block Status'];
DiagcMgrNtcFltAry_SetRamBlockStatus.Return = DataDict.CSReturn;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Type = 'Standard';
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Min = 0;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Max = 1;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.TestTolerance = 0;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Description = 'None';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).EngMin = 0;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).EngMax = 1;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Direction = 'In';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Description = 'BlockChanged';

SnpshtDataAry_SetRamBlockStatus = DataDict.Client;
SnpshtDataAry_SetRamBlockStatus.CallLocation = {'SetNtcStsCore'};
SnpshtDataAry_SetRamBlockStatus.Description = [...
  'Snapshot Data Array - Set RAM Block Status'];
SnpshtDataAry_SetRamBlockStatus.Return = DataDict.CSReturn;
SnpshtDataAry_SetRamBlockStatus.Return.Type = 'Standard';
SnpshtDataAry_SetRamBlockStatus.Return.Min = 0;
SnpshtDataAry_SetRamBlockStatus.Return.Max = 1;
SnpshtDataAry_SetRamBlockStatus.Return.TestTolerance = 0;
SnpshtDataAry_SetRamBlockStatus.Return.Description = 'None';
SnpshtDataAry_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
SnpshtDataAry_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).EngMin = 0;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).EngMax = 1;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Direction = 'In';
SnpshtDataAry_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Description = 'BlockChanged';

FltInj_logl = DataDict.Client;
FltInj_logl.CallLocation = {'DiagcMgrPer1'};
FltInj_logl.Description = [...
  'FltInj_logl runnable determines whether overwriting the SigPah signal.' ...
  ''];
FltInj_logl.Return = DataDict.CSReturn;
FltInj_logl.Return.Type = 'None';
FltInj_logl.Return.Min = [];
FltInj_logl.Return.Max = [];
FltInj_logl.Return.TestTolerance = [];
FltInj_logl.Return.Description = '';
FltInj_logl.Arguments(1) = DataDict.CSArguments;
FltInj_logl.Arguments(1).Name = 'SigPah';
FltInj_logl.Arguments(1).EngDT = dt.lgc;
FltInj_logl.Arguments(1).EngMin = 0;
FltInj_logl.Arguments(1).EngMax = 1;
FltInj_logl.Arguments(1).Units = 'Cnt';
FltInj_logl.Arguments(1).Direction = 'InOut';
FltInj_logl.Arguments(1).InitRowCol = [1  1];
FltInj_logl.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_logl runnable is trigge' ...
  'red.'];
FltInj_logl.Arguments(2) = DataDict.CSArguments;
FltInj_logl.Arguments(2).Name = 'LocnKey';
FltInj_logl.Arguments(2).EngDT = dt.u16;
FltInj_logl.Arguments(2).EngMin = 0;
FltInj_logl.Arguments(2).EngMax = 65535;
FltInj_logl.Arguments(2).Units = 'Cnt';
FltInj_logl.Arguments(2).Direction = 'In';
FltInj_logl.Arguments(2).InitRowCol = [1  1];
FltInj_logl.Arguments(2).Description = [...
  'It determines whether FltInj_logl runnable is triggered.'];


GetDiagcDataApplX = DataDict.Client;
GetDiagcDataApplX.CallLocation = {'DiagcMgrPer1'};
GetDiagcDataApplX.Description = 'Get Diagnostic Data Application X';
GetDiagcDataApplX.Return = DataDict.CSReturn;
GetDiagcDataApplX.Return.Type = 'None';
GetDiagcDataApplX.Return.Min = [];
GetDiagcDataApplX.Return.Max = [];
GetDiagcDataApplX.Return.TestTolerance = [];
GetDiagcDataApplX.Return.Description = '';
GetDiagcDataApplX.Arguments(1) = DataDict.CSArguments;
GetDiagcDataApplX.Arguments(1).Name = 'DiagcData';
GetDiagcDataApplX.Arguments(1).EngDT = struct.DiagcDataRec1;
GetDiagcDataApplX.Arguments(1).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
GetDiagcDataApplX.Arguments(1).EngMax = [struct('DiagcSts',65535,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
GetDiagcDataApplX.Arguments(1).Units = 'Cnt';
GetDiagcDataApplX.Arguments(1).Direction = 'Out';
GetDiagcDataApplX.Arguments(1).InitRowCol = [1  1];
GetDiagcDataApplX.Arguments(1).Description = 'Diagnostic Data';


GetNtcDebCntrApplX = DataDict.Client;
GetNtcDebCntrApplX.CallLocation = {'ReadNtcInfoAndDebCntr'};
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


GetNtcInfoApplX = DataDict.Client;
GetNtcInfoApplX.CallLocation = {'ReadNtcFltAry','DiagcMgrPwrDown','GetNtcActvCore','GetNtcQlfrStsCore','GetNtcStsCore'};
GetNtcInfoApplX.Description = 'Get NTC Info Application X';
GetNtcInfoApplX.Return = DataDict.CSReturn;
GetNtcInfoApplX.Return.Type = 'None';
GetNtcInfoApplX.Return.Min = [];
GetNtcInfoApplX.Return.Max = [];
GetNtcInfoApplX.Return.TestTolerance = [];
GetNtcInfoApplX.Return.Description = '';
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



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = 'Output Bridge Voltage';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'SetNtcStsCore'};
BrdgVltg.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'Ecu Temperature Filtered';
EcuTFild.Description = 'Filtered temperature';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'SetNtcStsCore'};
EcuTFild.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque Value';
HwTq.Description = [...
  'Value of the Handwheel Torque output '];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'SetNtcStsCore'};
HwTq.ReadType = 'Rte';


IgnCntr = DataDict.IpSignal;
IgnCntr.LongName = 'Ignition Counter';
IgnCntr.Description = [...
  'Conditioned Value For System-Wide Usage.'];
IgnCntr.DocUnits = 'Kph';
IgnCntr.EngDT = dt.u32;
IgnCntr.EngInit = 0;
IgnCntr.EngMin = 0;
IgnCntr.EngMax = 4294967295;
IgnCntr.ReadIn = {'SetNtcStsCore'};
IgnCntr.ReadType = 'Rte';


MfgDiagcInhb = DataDict.IpSignal;
MfgDiagcInhb.LongName = 'Manufacture Diagnostic Inhibit';
MfgDiagcInhb.Description = 'Manufacture Diagnostic Inhibit';
MfgDiagcInhb.DocUnits = 'Cnt';
MfgDiagcInhb.EngDT = dt.lgc;
MfgDiagcInhb.EngInit = 0;
MfgDiagcInhb.EngMin = 0;
MfgDiagcInhb.EngMax = 1;
MfgDiagcInhb.ReadIn = {'SetNtcStsCore'};
MfgDiagcInhb.ReadType = 'Rte';


MfgEnaSt = DataDict.IpSignal;
MfgEnaSt.LongName = 'Manufacture Enable State';
MfgEnaSt.Description = 'Manufacture Enable State';
MfgEnaSt.DocUnits = 'Cnt';
MfgEnaSt.EngDT = enum.MfgEnaSt1;
MfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MfgEnaSt.ReadIn = {'SetNtcStsCore'};
MfgEnaSt.ReadType = 'Rte';


MotTqCmdMrfScad = DataDict.IpSignal;
MotTqCmdMrfScad.LongName = 'Mrf Motor Torque Command Scaled';
MotTqCmdMrfScad.Description = [...
  'Scaled version of Mrf Motor Torque Command'];
MotTqCmdMrfScad.DocUnits = 'MotNwtMtr';
MotTqCmdMrfScad.EngDT = dt.float32;
MotTqCmdMrfScad.EngInit = 0;
MotTqCmdMrfScad.EngMin = -8.8;
MotTqCmdMrfScad.EngMax = 8.8;
MotTqCmdMrfScad.ReadIn = {'SetNtcStsCore'};
MotTqCmdMrfScad.ReadType = 'Rte';


RegInBRAMDAT1 = DataDict.IpSignal;
RegInBRAMDAT1.LongName = 'BRAMDAT1';
RegInBRAMDAT1.Description = 'BRAMDAT1';
RegInBRAMDAT1.DocUnits = 'Cnt';
RegInBRAMDAT1.EngDT = dt.b32;
RegInBRAMDAT1.EngInit = 0;
RegInBRAMDAT1.EngMin = 0;
RegInBRAMDAT1.EngMax = 4294967295;
RegInBRAMDAT1.ReadIn = {'SetNtcStsCore'};
RegInBRAMDAT1.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'system state';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'SetNtcStsCore'};
SysSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = [...
  'Conditioned Value For System-Wide Usage.'];
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'SetNtcStsCore'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
ClrDiagcFlgProxy = DataDict.OpSignal;
ClrDiagcFlgProxy.LongName = 'Clear Diagnostics Flag Proxy';
ClrDiagcFlgProxy.Description = [...
  'Clear Flag to Clear all NTCs and DTCs and runs to the Proxy DiagcMgr'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.SwcShoName = 'DiagcMgr';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.TestTolerance = 0;
ClrDiagcFlgProxy.WrittenIn = {'ClrAllDiagc'};
ClrDiagcFlgProxy.WriteType = 'Rte';


DiagcStsCtrldShtDwnFltPrsnt = DataDict.OpSignal;
DiagcStsCtrldShtDwnFltPrsnt.LongName = 'Diagnostic Status Controlled Shutdown Fault Present';
DiagcStsCtrldShtDwnFltPrsnt.Description = [...
  'Controlled Shutdown Fault Present flag'];
DiagcStsCtrldShtDwnFltPrsnt.DocUnits = 'Cnt';
DiagcStsCtrldShtDwnFltPrsnt.SwcShoName = 'DiagcMgr';
DiagcStsCtrldShtDwnFltPrsnt.EngDT = dt.lgc;
DiagcStsCtrldShtDwnFltPrsnt.EngInit = 0;
DiagcStsCtrldShtDwnFltPrsnt.EngMin = 0;
DiagcStsCtrldShtDwnFltPrsnt.EngMax = 1;
DiagcStsCtrldShtDwnFltPrsnt.TestTolerance = 0;
DiagcStsCtrldShtDwnFltPrsnt.WrittenIn = {'DiagcMgrPer1'};
DiagcStsCtrldShtDwnFltPrsnt.WriteType = 'Rte';


DiagcStsDftHwAg = DataDict.OpSignal;
DiagcStsDftHwAg.LongName = 'Diagnostic Status Default Handwheel Angle';
DiagcStsDftHwAg.Description = 'Default Handwheel Angle Flag';
DiagcStsDftHwAg.DocUnits = 'Cnt';
DiagcStsDftHwAg.SwcShoName = 'DiagcMgr';
DiagcStsDftHwAg.EngDT = dt.lgc;
DiagcStsDftHwAg.EngInit = 0;
DiagcStsDftHwAg.EngMin = 0;
DiagcStsDftHwAg.EngMax = 1;
DiagcStsDftHwAg.TestTolerance = 0;
DiagcStsDftHwAg.WrittenIn = {'DiagcMgrPer1'};
DiagcStsDftHwAg.WriteType = 'Rte';


DiagcStsDftHwAgSerlComExprtVal = DataDict.OpSignal;
DiagcStsDftHwAgSerlComExprtVal.LongName = 'Diagnostic Status Default Handwheel Angle Serial Communication Export Value';
DiagcStsDftHwAgSerlComExprtVal.Description = [...
  'Default Handwheel Angle Serial Communication Export Value Flag'];
DiagcStsDftHwAgSerlComExprtVal.DocUnits = 'Cnt';
DiagcStsDftHwAgSerlComExprtVal.SwcShoName = 'DiagcMgr';
DiagcStsDftHwAgSerlComExprtVal.EngDT = dt.lgc;
DiagcStsDftHwAgSerlComExprtVal.EngInit = 0;
DiagcStsDftHwAgSerlComExprtVal.EngMin = 0;
DiagcStsDftHwAgSerlComExprtVal.EngMax = 1;
DiagcStsDftHwAgSerlComExprtVal.TestTolerance = 0;
DiagcStsDftHwAgSerlComExprtVal.WrittenIn = {'DiagcMgrPer1'};
DiagcStsDftHwAgSerlComExprtVal.WriteType = 'Rte';


DiagcStsDftVehSpd = DataDict.OpSignal;
DiagcStsDftVehSpd.LongName = 'Diagnostic Status Default Vehicle Speed';
DiagcStsDftVehSpd.Description = 'Default Vehicle Speed Flag';
DiagcStsDftVehSpd.DocUnits = 'Cnt';
DiagcStsDftVehSpd.SwcShoName = 'DiagcMgr';
DiagcStsDftVehSpd.EngDT = dt.lgc;
DiagcStsDftVehSpd.EngInit = 0;
DiagcStsDftVehSpd.EngMin = 0;
DiagcStsDftVehSpd.EngMax = 1;
DiagcStsDftVehSpd.TestTolerance = 0;
DiagcStsDftVehSpd.WrittenIn = {'DiagcMgrPer1'};
DiagcStsDftVehSpd.WriteType = 'Rte';


DiagcStsIvtr1Inactv = DataDict.OpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = 'Inverter 1 inactive flag';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.SwcShoName = 'DiagcMgr';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.TestTolerance = 0;
DiagcStsIvtr1Inactv.WrittenIn = {'DiagcMgrPer1'};
DiagcStsIvtr1Inactv.WriteType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.OpSignal;
DiagcStsIvtr2Inactv.LongName = 'Diagnostic Status Inverter 2 Inactive';
DiagcStsIvtr2Inactv.Description = 'Inverter 2 Inactive flag';
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.SwcShoName = 'DiagcMgr';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.TestTolerance = 0;
DiagcStsIvtr2Inactv.WrittenIn = {'DiagcMgrPer1'};
DiagcStsIvtr2Inactv.WriteType = 'Rte';


DiagcStsLimdTPrfmnc = DataDict.OpSignal;
DiagcStsLimdTPrfmnc.LongName = 'Diagnostic Status Limited Temperature Performance';
DiagcStsLimdTPrfmnc.Description = [...
  'Flag that indicates the connected components to use the Default Temper' ...
  'ature value'];
DiagcStsLimdTPrfmnc.DocUnits = 'Cnt';
DiagcStsLimdTPrfmnc.SwcShoName = 'DiagcMgr';
DiagcStsLimdTPrfmnc.EngDT = dt.lgc;
DiagcStsLimdTPrfmnc.EngInit = 0;
DiagcStsLimdTPrfmnc.EngMin = 0;
DiagcStsLimdTPrfmnc.EngMax = 1;
DiagcStsLimdTPrfmnc.TestTolerance = 0;
DiagcStsLimdTPrfmnc.WrittenIn = {'DiagcMgrPer1'};
DiagcStsLimdTPrfmnc.WriteType = 'Rte';


DiagcStsWhlImbRejctnDi = DataDict.OpSignal;
DiagcStsWhlImbRejctnDi.LongName = 'Diagnostic Status Default Wheel Imbalance Rejection Disable';
DiagcStsWhlImbRejctnDi.Description = [...
  'Default Wheel Imbalance Rejection Disable Flag'];
DiagcStsWhlImbRejctnDi.DocUnits = 'Cnt';
DiagcStsWhlImbRejctnDi.SwcShoName = 'DiagcMgr';
DiagcStsWhlImbRejctnDi.EngDT = dt.lgc;
DiagcStsWhlImbRejctnDi.EngInit = 0;
DiagcStsWhlImbRejctnDi.EngMin = 0;
DiagcStsWhlImbRejctnDi.EngMax = 1;
DiagcStsWhlImbRejctnDi.TestTolerance = 0;
DiagcStsWhlImbRejctnDi.WrittenIn = {'DiagcMgrPer1'};
DiagcStsWhlImbRejctnDi.WriteType = 'Rte';


SysDiMotTqCmdSca = DataDict.OpSignal;
SysDiMotTqCmdSca.LongName = 'System Disable Motor Torque Command Scale';
SysDiMotTqCmdSca.Description = [...
  'Ramp down value to which the System shall be scaled down to after an N' ...
  'TC has been set'];
SysDiMotTqCmdSca.DocUnits = 'Uls';
SysDiMotTqCmdSca.SwcShoName = 'DiagcMgr';
SysDiMotTqCmdSca.EngDT = dt.float32;
SysDiMotTqCmdSca.EngInit = 1;
SysDiMotTqCmdSca.EngMin = 0;
SysDiMotTqCmdSca.EngMax = 1;
SysDiMotTqCmdSca.TestTolerance = 0.001;
SysDiMotTqCmdSca.WrittenIn = {'DiagcMgrPer1'};
SysDiMotTqCmdSca.WriteType = 'Rte';


SysDiRampRate = DataDict.OpSignal;
SysDiRampRate.LongName = 'System Disable Ramp Rate';
SysDiRampRate.Description = [...
  'Rate at which the system ramps down to Zero'];
SysDiRampRate.DocUnits = 'UlsPerSec';
SysDiRampRate.SwcShoName = 'DiagcMgr';
SysDiRampRate.EngDT = dt.float32;
SysDiRampRate.EngInit = 0.1;
SysDiRampRate.EngMin = 0.1;
SysDiRampRate.EngMax = 500;
SysDiRampRate.TestTolerance = 0.002;
SysDiRampRate.WrittenIn = {'DiagcMgrPer1'};
SysDiRampRate.WriteType = 'Rte';


SysStFltOutpReqDi = DataDict.OpSignal;
SysStFltOutpReqDi.LongName = 'System State Fault Output Request Disable';
SysStFltOutpReqDi.Description = [...
  'Logical output which indicates that a fault has occured that is rampin' ...
  'g the system down to Zero (or Disable)'];
SysStFltOutpReqDi.DocUnits = 'Cnt';
SysStFltOutpReqDi.SwcShoName = 'DiagcMgr';
SysStFltOutpReqDi.EngDT = dt.lgc;
SysStFltOutpReqDi.EngInit = 0;
SysStFltOutpReqDi.EngMin = 0;
SysStFltOutpReqDi.EngMax = 1;
SysStFltOutpReqDi.TestTolerance = 0;
SysStFltOutpReqDi.WrittenIn = {'DiagcMgrPer1'};
SysStFltOutpReqDi.WriteType = 'Rte';



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
DiagcMgrNtcFltAry = DataDict.NVM;
DiagcMgrNtcFltAry.LongName = 'Diagnostic Manager NTC Fault Array';
DiagcMgrNtcFltAry.Description = [...
  'Contains information of 20 most recent NTCs that are set in an ignitio' ...
  'n cycle'];
DiagcMgrNtcFltAry.DocUnits = 'Cnt';
DiagcMgrNtcFltAry.EngDT = struct.NtcFltInfoRec2;
DiagcMgrNtcFltAry.EngInit = [struct('NtcNr',[],'AgiCntr',[],'Sts',[])];
DiagcMgrNtcFltAry.EngMin = [struct('NtcNr',0,'AgiCntr',0,'Sts',0)];
DiagcMgrNtcFltAry.EngMax = [struct('NtcNr',511,'AgiCntr',255,'Sts',255)];
DiagcMgrNtcFltAry.CustomerVisible = false;
DiagcMgrNtcFltAry.Impact = 'L';
DiagcMgrNtcFltAry.TuningOwner = 'EPDT';
DiagcMgrNtcFltAry.CoderInfo.Alias = '';
DiagcMgrNtcFltAry.InitRowCol = [1  1];


SnpshtDataAry = DataDict.NVM;
SnpshtDataAry.LongName = 'Diagnostic Manager NTC Fault Array';
SnpshtDataAry.Description = [...
  'Contains information of 20 most recent NTCs that are set in an ignitio' ...
  'n cycle - Must be placed in Global Shared Memory'];
SnpshtDataAry.DocUnits = 'Cnt';
SnpshtDataAry.EngDT = struct.SnpshtDataRec1;
SnpshtDataAry.EngInit = [struct('MicroDiagcData',0,'HwTq',0,'MotTq',0,'IgnCntr',0,'BrdgVltg',0,'EcuT',0,'NtcNr',0,'NtcStInfo',0,'SysSt',0,'VehSpd',0)];
SnpshtDataAry.EngMin = [struct('MicroDiagcData',0,'HwTq',-10,'MotTq',-8.8,'IgnCntr',0,'BrdgVltg',0,'EcuT',-50,'NtcNr',0,'NtcStInfo',0,'SysSt',0,'VehSpd',0)];
SnpshtDataAry.EngMax = [struct('MicroDiagcData',4294967295,'HwTq',10,'MotTq',8.8,'IgnCntr',4294967295,'BrdgVltg',40,'EcuT',150,'NtcNr',511,'NtcStInfo',255,'SysSt',4,'VehSpd',511)];
SnpshtDataAry.CustomerVisible = false;
SnpshtDataAry.Impact = 'L';
SnpshtDataAry.TuningOwner = 'EPDT';
SnpshtDataAry.CoderInfo.Alias = '';
SnpshtDataAry.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
ClrDiagcFlg = DataDict.PIM;
ClrDiagcFlg.LongName = 'Clear Diagnostic Flag';
ClrDiagcFlg.Description = [...
  'Flag that is used to toggle everytime Clear All Diagnostics function i' ...
  's called'];
ClrDiagcFlg.DocUnits = 'Cnt';
ClrDiagcFlg.EngDT = dt.u08;
ClrDiagcFlg.EngMin = 0;
ClrDiagcFlg.EngMax = 1;
ClrDiagcFlg.InitRowCol = [1  1];


DtcEnaSts = DataDict.PIM;
DtcEnaSts.LongName = 'DTC Enable Status';
DtcEnaSts.Description = 'DTC Enable Current Status';
DtcEnaSts.DocUnits = 'Cnt';
DtcEnaSts.EngDT = dt.u16;
DtcEnaSts.EngMin = 0;
DtcEnaSts.EngMax = 65535;
DtcEnaSts.InitRowCol = [1  1];


DtcIdxPrevSts = DataDict.PIM;
DtcIdxPrevSts.LongName = 'DTC Index Previous Status';
DtcIdxPrevSts.Description = [...
  'DTC Index Previous Status. Length of this Array is defined by the tota' ...
  'l number of DTCs present in the Porgram.'];
DtcIdxPrevSts.DocUnits = 'Cnt';
DtcIdxPrevSts.EngDT = dt.u08;
DtcIdxPrevSts.EngMin = 0;
DtcIdxPrevSts.EngMax = 131;
DtcIdxPrevSts.InitRowCol = [65535      1];


PrevClrDtcFlg = DataDict.PIM;
PrevClrDtcFlg.LongName = 'Previous Clear DTC Flag';
PrevClrDtcFlg.Description = [...
  'Flag that is used to check for Clearing All DTCs information'];
PrevClrDtcFlg.DocUnits = 'Cnt';
PrevClrDtcFlg.EngDT = dt.u08;
PrevClrDtcFlg.EngMin = 0;
PrevClrDtcFlg.EngMax = 1;
PrevClrDtcFlg.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DEM_CLEAR_PENDING = DataDict.Constant;
DEM_CLEAR_PENDING.LongName = 'DEM Clear Pending';
DEM_CLEAR_PENDING.Description = [...
  'Return Type from DEM. This constant is defined in the Dem header file.' ...
  ' The intent is use to use the same name as that defined in DEM and not' ...
  ' create another constant with Nexteer Naming Convention'];
DEM_CLEAR_PENDING.DocUnits = 'Cnt';
DEM_CLEAR_PENDING.EngDT = dt.u08;
DEM_CLEAR_PENDING.EngVal = 4;
DEM_CLEAR_PENDING.Define = 'Local';


DEM_DTC_GROUP_ALL_DTCS = DataDict.Constant;
DEM_DTC_GROUP_ALL_DTCS.LongName = 'DEM DTC Group All DTCs';
DEM_DTC_GROUP_ALL_DTCS.Description = [...
  'Input argument to DEM to clear all DTCs'];
DEM_DTC_GROUP_ALL_DTCS.DocUnits = 'Cnt';
DEM_DTC_GROUP_ALL_DTCS.EngDT = dt.u32;
DEM_DTC_GROUP_ALL_DTCS.EngVal = 16777215;
DEM_DTC_GROUP_ALL_DTCS.Define = 'Local';


DFTAGICNTR_CNT_U08 = DataDict.Constant;
DFTAGICNTR_CNT_U08.LongName = 'Default Aging Counter';
DFTAGICNTR_CNT_U08.Description = [...
  'Hex:0xFF. Default value of aging counter at initialization'];
DFTAGICNTR_CNT_U08.DocUnits = 'Cnt';
DFTAGICNTR_CNT_U08.EngDT = dt.u08;
DFTAGICNTR_CNT_U08.EngVal = 255;
DFTAGICNTR_CNT_U08.Define = 'Local';


DIAGCMGR_NTCINFOCFMDNTC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.LongName = 'NTC Info Status Confirmed NTC';
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.Description = [...
  'Hex: 0x08. Bit Mask to access the "ConfirmedBit" bit in NTC Status Byt' ...
  'e'];
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.EngVal = 8;
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.Define = 'Global';


DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.LongName = 'NTC Info Status Fault Set This Ignition Cycle';
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.Description = [...
  'Hex: 0x02. Bit Mask to access the "TestFailedThisIgnitionCycle" bit in' ...
  ' NTC Status Byte'];
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.EngVal = 2;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.Define = 'Global';


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


DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16 = DataDict.Constant;
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16.LongName = 'Diagnostc Status Controlled Shutdown Fault Present';
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16.Description = [...
  'Hex:0x40. Bit Mask to access the "Controlled Shutdown Fault Present" b' ...
  'it in Diagnostic Status Word'];
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16.EngDT = dt.b16;
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16.EngVal = 64;
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16.Define = 'Local';


DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16 = DataDict.Constant;
DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16.LongName = 'Diagnostc Status Default Handwheel Angle Serial Communication Export Value';
DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16.Description = [...
  'Hex:0x100. Bit Mask to access the "Default Handwheel Angle Serial Comm' ...
  'unication Export Value" bit in Diagnostic Status Word'];
DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16.EngDT = dt.b16;
DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16.EngVal = 256;
DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16.Define = 'Local';


DIAGCSTSDFTHWAG_CNT_U16 = DataDict.Constant;
DIAGCSTSDFTHWAG_CNT_U16.LongName = 'Diagnostc Status Default Handwheel Angle';
DIAGCSTSDFTHWAG_CNT_U16.Description = [...
  'Hex:0x400. Bit Mask to access the "Default Handwheel Angle" bit in Dia' ...
  'gnostic Status Word'];
DIAGCSTSDFTHWAG_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSDFTHWAG_CNT_U16.EngDT = dt.b16;
DIAGCSTSDFTHWAG_CNT_U16.EngVal = 1024;
DIAGCSTSDFTHWAG_CNT_U16.Define = 'Local';


DIAGCSTSDFTVEHSPD_CNT_U16 = DataDict.Constant;
DIAGCSTSDFTVEHSPD_CNT_U16.LongName = 'Diagnostc Status Default Vehicle Speed';
DIAGCSTSDFTVEHSPD_CNT_U16.Description = [...
  'Hex:0x200. Bit Mask to access the "Default Vehicle Speed" bit in Diagn' ...
  'ostic Status Word'];
DIAGCSTSDFTVEHSPD_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSDFTVEHSPD_CNT_U16.EngDT = dt.b16;
DIAGCSTSDFTVEHSPD_CNT_U16.EngVal = 512;
DIAGCSTSDFTVEHSPD_CNT_U16.Define = 'Local';


DIAGCSTSININVAL_CNT_U16 = DataDict.Constant;
DIAGCSTSININVAL_CNT_U16.LongName = 'Diagnostic Status Initialization Value';
DIAGCSTSININVAL_CNT_U16.Description = [...
  'Value with Diagnostic Status is initialized'];
DIAGCSTSININVAL_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSININVAL_CNT_U16.EngDT = dt.u16;
DIAGCSTSININVAL_CNT_U16.EngVal = 0;
DIAGCSTSININVAL_CNT_U16.Define = 'Local';


DIAGCSTSIVTR1INACTV_CNT_U16 = DataDict.Constant;
DIAGCSTSIVTR1INACTV_CNT_U16.LongName = 'Diagnostc Status Inverter 1 Inactive';
DIAGCSTSIVTR1INACTV_CNT_U16.Description = [...
  'Hex:0x1000. Bit Mask to access the "Inverter 1 Inactive" bit in Diagno' ...
  'stic Status Word'];
DIAGCSTSIVTR1INACTV_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSIVTR1INACTV_CNT_U16.EngDT = dt.b16;
DIAGCSTSIVTR1INACTV_CNT_U16.EngVal = 4096;
DIAGCSTSIVTR1INACTV_CNT_U16.Define = 'Local';


DIAGCSTSIVTR2INACTV_CNT_U16 = DataDict.Constant;
DIAGCSTSIVTR2INACTV_CNT_U16.LongName = 'Diagnostc Status Inverter 2 Inactive';
DIAGCSTSIVTR2INACTV_CNT_U16.Description = [...
  'Hex:0x800. Bit Mask to access the "Inverter 2 Inactive" bit in Diagnos' ...
  'tic Status Word'];
DIAGCSTSIVTR2INACTV_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSIVTR2INACTV_CNT_U16.EngDT = dt.b16;
DIAGCSTSIVTR2INACTV_CNT_U16.EngVal = 2048;
DIAGCSTSIVTR2INACTV_CNT_U16.Define = 'Local';


DIAGCSTSLIMDTPRFMNC_CNT_U16 = DataDict.Constant;
DIAGCSTSLIMDTPRFMNC_CNT_U16.LongName = 'Diagnostic Status Limited Temperature Performance';
DIAGCSTSLIMDTPRFMNC_CNT_U16.Description = [...
  'Hex:0x8000. Bit Mask to access the "Limited Temperature Performance" b' ...
  'it in Diagnostic Status Word'];
DIAGCSTSLIMDTPRFMNC_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSLIMDTPRFMNC_CNT_U16.EngDT = dt.b16;
DIAGCSTSLIMDTPRFMNC_CNT_U16.EngVal = 32768;
DIAGCSTSLIMDTPRFMNC_CNT_U16.Define = 'Local';


DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16 = DataDict.Constant;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.LongName = 'Diagnostic Status Ramp to Zero Fault Present';
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.Description = [...
  'Hex:0x4000. Bit Mask to access the "Ramp to Zero Fault Present" bit in' ...
  ' Diagnostic Status Word'];
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.EngDT = dt.b16;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.EngVal = 16384;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.Define = 'Local';


DIAGCSTSWHLIMBREJCTNDI_CNT_U16 = DataDict.Constant;
DIAGCSTSWHLIMBREJCTNDI_CNT_U16.LongName = 'Diagnostic Status Wheel Imbalance Rejection Disable';
DIAGCSTSWHLIMBREJCTNDI_CNT_U16.Description = [...
  'Hex:0x80. Bit Mask to access the "Wheel Imbalance Rejection Disable" b' ...
  'it in Diagnostic Status Word'];
DIAGCSTSWHLIMBREJCTNDI_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSWHLIMBREJCTNDI_CNT_U16.EngDT = dt.b16;
DIAGCSTSWHLIMBREJCTNDI_CNT_U16.EngVal = 128;
DIAGCSTSWHLIMBREJCTNDI_CNT_U16.Define = 'Local';


DTCIDXSTSFAIL_CNT_U08 = DataDict.Constant;
DTCIDXSTSFAIL_CNT_U08.LongName = 'DTC Index Status Fail';
DTCIDXSTSFAIL_CNT_U08.Description = 'DTC Index Status Fail';
DTCIDXSTSFAIL_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSFAIL_CNT_U08.EngDT = dt.u08;
DTCIDXSTSFAIL_CNT_U08.EngVal = 2;
DTCIDXSTSFAIL_CNT_U08.Define = 'Local';


DTCIDXSTSNONTC_CNT_U08 = DataDict.Constant;
DTCIDXSTSNONTC_CNT_U08.LongName = 'DTC Index Status No NTC';
DTCIDXSTSNONTC_CNT_U08.Description = 'DTC Index Status No NTC';
DTCIDXSTSNONTC_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSNONTC_CNT_U08.EngDT = dt.u08;
DTCIDXSTSNONTC_CNT_U08.EngVal = 3;
DTCIDXSTSNONTC_CNT_U08.Define = 'Local';


DTCIDXSTSNORES_CNT_U08 = DataDict.Constant;
DTCIDXSTSNORES_CNT_U08.LongName = 'DTC Index Status No Result';
DTCIDXSTSNORES_CNT_U08.Description = 'DTC Index Status No Result';
DTCIDXSTSNORES_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSNORES_CNT_U08.EngDT = dt.u08;
DTCIDXSTSNORES_CNT_U08.EngVal = 0;
DTCIDXSTSNORES_CNT_U08.Define = 'Local';


DTCIDXSTSPASS_CNT_U08 = DataDict.Constant;
DTCIDXSTSPASS_CNT_U08.LongName = 'DTC Index Status Pass';
DTCIDXSTSPASS_CNT_U08.Description = 'DTC Index Status Pass';
DTCIDXSTSPASS_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSPASS_CNT_U08.EngDT = dt.u08;
DTCIDXSTSPASS_CNT_U08.EngVal = 1;
DTCIDXSTSPASS_CNT_U08.Define = 'Local';


DTCIDXSTSUPDCFMD_CNT_U08 = DataDict.Constant;
DTCIDXSTSUPDCFMD_CNT_U08.LongName = 'DTC Index Status Update Confirmed';
DTCIDXSTSUPDCFMD_CNT_U08.Description = 'DTC Index Status Update Confirmed';
DTCIDXSTSUPDCFMD_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSUPDCFMD_CNT_U08.EngDT = dt.u08;
DTCIDXSTSUPDCFMD_CNT_U08.EngVal = 128;
DTCIDXSTSUPDCFMD_CNT_U08.Define = 'Local';


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


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


E_OK = DataDict.Constant;
E_OK.LongName = 'E Ok';
E_OK.Description = [...
  'AUTOSAR Standard Return Type OK value'];
E_OK.DocUnits = 'Cnt';
E_OK.EngDT = dt.u08;
E_OK.EngVal = 0;
E_OK.Define = 'Global';


FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV = DataDict.Constant;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.LongName = 'Fault Injection Diagnostic Manager Diagnostic Status Inverter 1 Inactive';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.Description = [...
  'Output signal of Diagnostics Manager'];
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.DocUnits = 'Cnt';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.EngDT = dt.u16;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.EngVal = 31;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.Define = 'Global';


FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV = DataDict.Constant;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.LongName = 'Fault Injection Diagnostic Manager Diagnostic Status Inverter 2 Inactive';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.Description = [...
  'Output signal of Diagnostics Manager'];
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.DocUnits = 'Cnt';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.EngDT = dt.u16;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.EngVal = 32;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.Define = 'Global';


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


FLTRESPDTCIDX_CNT_U32 = DataDict.Constant;
FLTRESPDTCIDX_CNT_U32.LongName = 'Fault Response DTC Index';
FLTRESPDTCIDX_CNT_U32.Description = [...
  'Hex: 0x0000000F. Bit Mask to access the "DTC Index" bits in the Fault ' ...
  'Response'];
FLTRESPDTCIDX_CNT_U32.DocUnits = 'Cnt';
FLTRESPDTCIDX_CNT_U32.EngDT = dt.b32;
FLTRESPDTCIDX_CNT_U32.EngVal = 255;
FLTRESPDTCIDX_CNT_U32.Define = 'Local';


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


FLTRESPMFGINHBINENAST_CNT_U32 = DataDict.Constant;
FLTRESPMFGINHBINENAST_CNT_U32.LongName = 'Fault Response Disable NTC in Manufacturing Mode Enable State';
FLTRESPMFGINHBINENAST_CNT_U32.Description = [...
  'Hex: 0x4000. Bit Mask to access the "Disable NTC In Manufacturing Mode' ...
  ' Enable State" bit in Fault Response Table'];
FLTRESPMFGINHBINENAST_CNT_U32.DocUnits = 'Cnt';
FLTRESPMFGINHBINENAST_CNT_U32.EngDT = dt.b32;
FLTRESPMFGINHBINENAST_CNT_U32.EngVal = 16384;
FLTRESPMFGINHBINENAST_CNT_U32.Define = 'Local';


FLTRESPMFGINHBNOTINENAST_CNT_U32 = DataDict.Constant;
FLTRESPMFGINHBNOTINENAST_CNT_U32.LongName = 'Fault Response Disable NTC in Manufacturing Mode Warm Init State';
FLTRESPMFGINHBNOTINENAST_CNT_U32.Description = [...
  'Hex: 0x2000. Bit Mask to access the "Disable NTC In Manufacturing Mode' ...
  ' Warm Init State" bit in Fault Response Table'];
FLTRESPMFGINHBNOTINENAST_CNT_U32.DocUnits = 'Cnt';
FLTRESPMFGINHBNOTINENAST_CNT_U32.EngDT = dt.b32;
FLTRESPMFGINHBNOTINENAST_CNT_U32.EngVal = 8192;
FLTRESPMFGINHBNOTINENAST_CNT_U32.Define = 'Local';


FLTRESPNTCENAD_CNT_U32 = DataDict.Constant;
FLTRESPNTCENAD_CNT_U32.LongName = 'Fault Response NTC Enabled';
FLTRESPNTCENAD_CNT_U32.Description = [...
  'Hex: 0x80000000. Bit Mask to access the "NTC Enabled" bit in Fault Res' ...
  'ponse Table'];
FLTRESPNTCENAD_CNT_U32.DocUnits = 'Cnt';
FLTRESPNTCENAD_CNT_U32.EngDT = dt.b32;
FLTRESPNTCENAD_CNT_U32.EngVal = 2147483648;
FLTRESPNTCENAD_CNT_U32.Define = 'Local';


FLTRESPRAMPBITS_CNT_U32 = DataDict.Constant;
FLTRESPRAMPBITS_CNT_U32.LongName = 'Fault Response Ramp Bits';
FLTRESPRAMPBITS_CNT_U32.Description = [...
  'Hex: 0xF00. Bit Mask to access the "Ramp Bits" bit in Fault Response T' ...
  'able'];
FLTRESPRAMPBITS_CNT_U32.DocUnits = 'Cnt';
FLTRESPRAMPBITS_CNT_U32.EngDT = dt.b32;
FLTRESPRAMPBITS_CNT_U32.EngVal = 3840;
FLTRESPRAMPBITS_CNT_U32.Define = 'Local';


FLTRESPRCVRLFLT_CNT_U32 = DataDict.Constant;
FLTRESPRCVRLFLT_CNT_U32.LongName = 'Fault Response Recoverable Bit';
FLTRESPRCVRLFLT_CNT_U32.Description = [...
  'Hex: 0x40000000. Bit Mask to access the "Recoverable Bit" in Fault Res' ...
  'ponse Table'];
FLTRESPRCVRLFLT_CNT_U32.DocUnits = 'Cnt';
FLTRESPRCVRLFLT_CNT_U32.EngDT = dt.b32;
FLTRESPRCVRLFLT_CNT_U32.EngVal = 1073741824;
FLTRESPRCVRLFLT_CNT_U32.Define = 'Local';


FLTRESPSNPSHTDATAENAD_CNT_U32 = DataDict.Constant;
FLTRESPSNPSHTDATAENAD_CNT_U32.LongName = 'Fault Response Snapshot Data Enabled';
FLTRESPSNPSHTDATAENAD_CNT_U32.Description = [...
  'Hex: 0x400000. Bit Mask to access the "Recoverable Bit" in Fault Respo' ...
  'nse Table'];
FLTRESPSNPSHTDATAENAD_CNT_U32.DocUnits = 'Cnt';
FLTRESPSNPSHTDATAENAD_CNT_U32.EngDT = dt.b32;
FLTRESPSNPSHTDATAENAD_CNT_U32.EngVal = 4194304;
FLTRESPSNPSHTDATAENAD_CNT_U32.Define = 'Local';


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


MAXDEBCNTRVAL_CNT_S16 = DataDict.Constant;
MAXDEBCNTRVAL_CNT_S16.LongName = 'Maximum Debounce Counter Value';
MAXDEBCNTRVAL_CNT_S16.Description = [...
  'The maximum value of the debounce counter'];
MAXDEBCNTRVAL_CNT_S16.DocUnits = 'Cnt';
MAXDEBCNTRVAL_CNT_S16.EngDT = dt.s16;
MAXDEBCNTRVAL_CNT_S16.EngVal = 32767;
MAXDEBCNTRVAL_CNT_S16.Define = 'Local';


MAXRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MAXRAMPRATE_ULSPERSEC_F32.LongName = 'Maximum Ramp Rate';
MAXRAMPRATE_ULSPERSEC_F32.Description = [...
  'Maximum Ramp Rate at which the system goes to shutdown'];
MAXRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MAXRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MAXRAMPRATE_ULSPERSEC_F32.EngVal = 500;
MAXRAMPRATE_ULSPERSEC_F32.Define = 'Local';


MINDEBCNTRVAL_CNT_S16 = DataDict.Constant;
MINDEBCNTRVAL_CNT_S16.LongName = 'Minimum Debounce Counter Value';
MINDEBCNTRVAL_CNT_S16.Description = [...
  'The minimum value of the debounce counter'];
MINDEBCNTRVAL_CNT_S16.DocUnits = 'Cnt';
MINDEBCNTRVAL_CNT_S16.EngDT = dt.s16;
MINDEBCNTRVAL_CNT_S16.EngVal = -32768;
MINDEBCNTRVAL_CNT_S16.Define = 'Local';


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
