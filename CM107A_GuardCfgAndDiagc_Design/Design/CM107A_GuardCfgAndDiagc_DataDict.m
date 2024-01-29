%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Oct-2015 15:35:26       %
%                                  Created with tool release: 2.22.0     %
%                                  Synergy file: %version: 4 %           %
%                                  Date Modified: %date_modified: 11-Dec-2015 15:35:26 %    %
%                                  Derived by: %derived_by: qzt3f8 %          %
%%-----------------------------------------------------------------------%

CM107A = DataDict.FDD;
CM107A.Version = '3.0.X';
CM107A.LongName = 'Guard Configuration And Diagnostic';
CM107A.ShoName  = 'GuardCfgAndDiagc';
CM107A.DesignASIL = 'D';
CM107A.Description = ...
  'This function describes the guard register initialization.';
CM107A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GuardCfgAndDiagcInit1 = DataDict.Runnable;
GuardCfgAndDiagcInit1.TimeStep = 0;
GuardCfgAndDiagcInit1.Context = 'Non-Rte';

GuardCfgAndDiagcInit2 = DataDict.Runnable;
GuardCfgAndDiagcInit2.TimeStep = 0;
GuardCfgAndDiagcInit2.Context = 'Rte';

GuardCfgAndDiagcInit3 = DataDict.Runnable;
GuardCfgAndDiagcInit3.TimeStep = 0;
GuardCfgAndDiagcInit3.Context = 'Non-Rte';

%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ChkForStrtUpTest = DataDict.Client;
ChkForStrtUpTest.CallLocation = {' '};
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

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------


%end of Data Dictionary
