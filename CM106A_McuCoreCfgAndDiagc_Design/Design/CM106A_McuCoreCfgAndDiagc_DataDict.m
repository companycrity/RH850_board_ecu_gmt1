%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Oct-2015 14:41:36       %
%                                  Created with tool release: 2.23.0     %
%                                  Synergy file: %version: 3 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: qzt3f8 %          %
%%-----------------------------------------------------------------------%

CM106A = DataDict.FDD;
CM106A.Version = '2.2.X';
CM106A.LongName = 'MicroController Core Configuration And Diagnostics';
CM106A.ShoName  = 'McuCoreCfgAndDiagc';
CM106A.DesignASIL = 'D';
CM106A.Description = [...
  'This function describes some of the basic MCU setup and diagnostics of' ...
  ' the RH850/P1x microcontroller such as: Field BIST (built-in self-test' ...
  ')and Lockstep Dual Core (LSDC) for PE.'];
CM106A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
McuCoreCfgAndDiagcInit1 = DataDict.Runnable;
McuCoreCfgAndDiagcInit1.TimeStep = 0;
McuCoreCfgAndDiagcInit1.Context = 'Non-Rte';

McuCoreCfgAndDiagcInit2 = DataDict.Runnable;
McuCoreCfgAndDiagcInit2.TimeStep = 0;
McuCoreCfgAndDiagcInit2.Context = 'Non-Rte';

McuCoreCfgAndDiagcInit3 = DataDict.Runnable;
McuCoreCfgAndDiagcInit3.TimeStep = 0;
McuCoreCfgAndDiagcInit3.Context = 'Rte';

%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ChkForStrtUpTest = DataDict.Client;
ChkForStrtUpTest.CallLocation = {'McuCoreCfgAndDiagcInit2'};
ChkForStrtUpTest.Return = DataDict.CSReturn;
ChkForStrtUpTest.Return.Type = 'None';
ChkForStrtUpTest.Return.Min = [];
ChkForStrtUpTest.Return.Max = [];
ChkForStrtUpTest.Return.TestTolerance = [];
ChkForStrtUpTest.Arguments(1) = DataDict.CSArguments;
ChkForStrtUpTest.Arguments(1).Name = 'ExecStrtUpTest';
ChkForStrtUpTest.Arguments(1).EngMin = 0;
ChkForStrtUpTest.Arguments(1).EngMax = 1;
ChkForStrtUpTest.Arguments(1).EngDT = dt.lgc;
ChkForStrtUpTest.Arguments(1).Units = 'Cnt';
ChkForStrtUpTest.Arguments(1).Direction = 'Out';
ChkForStrtUpTest.Arguments(1).InitRowCol = [1  1];

GetMcuDiagcIdnData = DataDict.Client;
GetMcuDiagcIdnData.CallLocation = {'McuCoreCfgAndDiagcInit1'};
GetMcuDiagcIdnData.Return = DataDict.CSReturn;
GetMcuDiagcIdnData.Return.Type = 'None';
GetMcuDiagcIdnData.Return.Min = [];
GetMcuDiagcIdnData.Return.Max = [];
GetMcuDiagcIdnData.Return.TestTolerance = [];
GetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
GetMcuDiagcIdnData.Arguments(1).EngMin = 0;
GetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
GetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
GetMcuDiagcIdnData.Arguments(1).Direction = 'Out';
GetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];

SetMcuDiagcIdnData = DataDict.Client;
SetMcuDiagcIdnData.CallLocation = {'McuCoreCfgAndDiagcInit1','McuCoreCfgAndDiagcInit2'};
SetMcuDiagcIdnData.Return = DataDict.CSReturn;
SetMcuDiagcIdnData.Return.Type = 'None';
SetMcuDiagcIdnData.Return.Min = [];
SetMcuDiagcIdnData.Return.Max = [];
SetMcuDiagcIdnData.Return.TestTolerance = [];
SetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
SetMcuDiagcIdnData.Arguments(1).EngMin = 0;
SetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
SetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(1).Direction = 'In';
SetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(2) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(2).Name = 'McuDiagcData1';
SetMcuDiagcIdnData.Arguments(2).EngMin = 0;
SetMcuDiagcIdnData.Arguments(2).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(2).EngDT = dt.u32;
SetMcuDiagcIdnData.Arguments(2).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(2).Direction = 'In';
SetMcuDiagcIdnData.Arguments(2).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

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
CoreCompTestRegRead = DataDict.PIM;
CoreCompTestRegRead.LongName = 'Read Comparison Register 0';
CoreCompTestRegRead.Description = ...
  'PIM that is used to read the TESTCOMPREG0';
CoreCompTestRegRead.DocUnits = 'Cnt';
CoreCompTestRegRead.EngDT = dt.u32;
CoreCompTestRegRead.EngMin = 0;
CoreCompTestRegRead.EngMax = 4294967295;
CoreCompTestRegRead.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
