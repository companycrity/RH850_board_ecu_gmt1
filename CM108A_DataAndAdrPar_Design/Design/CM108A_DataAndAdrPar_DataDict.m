%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Nov-2015 16:43:43       %
%                                  Created with tool release: 2.20.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: 11-Dec-2015 15:35:26 %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM108A = DataDict.FDD;
CM108A.Version = '1.1.X';
CM108A.LongName = 'Data And Address Parity';
CM108A.ShoName  = 'DataAndAdrPar';
CM108A.DesignASIL = 'D';
CM108A.Description = [...
  'These functions, initialize parity error detection, post occurance determine which parity error has occurred and sets the corresponding NTC and set the initial NTC "Pass".'];
CM108A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DataAndAdrParInit1 = DataDict.Runnable;
DataAndAdrParInit1.TimeStep = 0;
DataAndAdrParInit1.Context = 'Non-Rte';

DataAndAdrParInit2 = DataDict.Runnable;
DataAndAdrParInit2.TimeStep = 0;
DataAndAdrParInit2.Context = 'Rte';

%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ChkForStrtUpTest = DataDict.Client;
ChkForStrtUpTest.CallLocation = {'DataAndAdrParInit1'};
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
