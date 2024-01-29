%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Aug-2016 13:21:31       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM104A = DataDict.FDD;
CM104A.Version = '4.0.X';
CM104A.LongName = 'ECM Output and Diagnostics';
CM104A.ShoName  = 'EcmOutpAndDiagc';
CM104A.DesignASIL = 'D';
CM104A.Description = [...
  'Controls the ErrorOut Pin and contains the ECM Startup Master/Checker ' ...
  'nERROR Output Control Fault Test'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
EcmOutpAndDiagcInit1 = DataDict.Runnable;
EcmOutpAndDiagcInit1.Context = 'NonRte';
EcmOutpAndDiagcInit1.TimeStep = 0;
EcmOutpAndDiagcInit1.Description = 'None';

EcmOutpAndDiagcInit2 = DataDict.Runnable;
EcmOutpAndDiagcInit2.Context = 'Rte';
EcmOutpAndDiagcInit2.TimeStep = 0;
EcmOutpAndDiagcInit2.Description = 'None';

EcmOutpAndDiagcInit3 = DataDict.Runnable;
EcmOutpAndDiagcInit3.Context = 'NonRte';
EcmOutpAndDiagcInit3.TimeStep = 0;
EcmOutpAndDiagcInit3.Description = 'None';

EcmOutpAndDiagcInit4 = DataDict.Runnable;
EcmOutpAndDiagcInit4.Context = 'NonRte';
EcmOutpAndDiagcInit4.TimeStep = 0;
EcmOutpAndDiagcInit4.Description = 'None';

CtrlErrOut = DataDict.SrvRunnable;
CtrlErrOut.Context = 'Both';
CtrlErrOut.Description = 'None';
CtrlErrOut.Return = DataDict.CSReturn;
CtrlErrOut.Return.Type = 'None';
CtrlErrOut.Return.Min = [];
CtrlErrOut.Return.Max = [];
CtrlErrOut.Return.TestTolerance = [];
CtrlErrOut.Arguments(1) = DataDict.CSArguments;
CtrlErrOut.Arguments(1).Name = 'PinSt';
CtrlErrOut.Arguments(1).EngDT = dt.lgc;
CtrlErrOut.Arguments(1).EngMin = 0;
CtrlErrOut.Arguments(1).EngMax = 1;
CtrlErrOut.Arguments(1).Units = 'Cnt';
CtrlErrOut.Arguments(1).Direction = 'In';
CtrlErrOut.Arguments(1).InitRowCol = [1  1];
CtrlErrOut.Arguments(1).Description = 'None';
CtrlErrOut.Arguments(2) = DataDict.CSArguments;
CtrlErrOut.Arguments(2).Name = 'TrigReg';
CtrlErrOut.Arguments(2).EngDT = enum.TrigReg1;
CtrlErrOut.Arguments(2).EngMin = 0;
CtrlErrOut.Arguments(2).EngMax = 255;
CtrlErrOut.Arguments(2).Units = 'Cnt';
CtrlErrOut.Arguments(2).Direction = 'In';
CtrlErrOut.Arguments(2).InitRowCol = [1  1];
CtrlErrOut.Arguments(2).Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ChkForStrtUpTest = DataDict.Client;
ChkForStrtUpTest.CallLocation = {'EcmOutpAndDiagcInit4','EcmOutpAndDiagcInit3','EcmOutpAndDiagcInit1'};
ChkForStrtUpTest.Description = 'None';
ChkForStrtUpTest.Return = DataDict.CSReturn;
ChkForStrtUpTest.Return.Type = 'None';
ChkForStrtUpTest.Return.Min = [];
ChkForStrtUpTest.Return.Max = [];
ChkForStrtUpTest.Return.TestTolerance = [];
ChkForStrtUpTest.Arguments(1) = DataDict.CSArguments;
ChkForStrtUpTest.Arguments(1).Name = 'ExecStrtUpTest';
ChkForStrtUpTest.Arguments(1).EngDT = dt.lgc;
ChkForStrtUpTest.Arguments(1).EngMin = 0;
ChkForStrtUpTest.Arguments(1).EngMax = 1;
ChkForStrtUpTest.Arguments(1).TestTolerance = 0;
ChkForStrtUpTest.Arguments(1).Units = 'Cnt';
ChkForStrtUpTest.Arguments(1).Direction = 'Out';
ChkForStrtUpTest.Arguments(1).InitRowCol = [1  1];
ChkForStrtUpTest.Arguments(1).Description = 'None';


GetMcuDiagcIdnData = DataDict.Client;
GetMcuDiagcIdnData.CallLocation = {'EcmOutpAndDiagcInit1'};
GetMcuDiagcIdnData.Description = 'None';
GetMcuDiagcIdnData.Return = DataDict.CSReturn;
GetMcuDiagcIdnData.Return.Type = 'None';
GetMcuDiagcIdnData.Return.Min = [];
GetMcuDiagcIdnData.Return.Max = [];
GetMcuDiagcIdnData.Return.TestTolerance = [];
GetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
GetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
GetMcuDiagcIdnData.Arguments(1).EngMin = 0;
GetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcIdnData.Arguments(1).TestTolerance = 0;
GetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
GetMcuDiagcIdnData.Arguments(1).Direction = 'Out';
GetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
GetMcuDiagcIdnData.Arguments(1).Description = 'None';


SetMcuDiagcIdnData = DataDict.Client;
SetMcuDiagcIdnData.CallLocation = {'EcmOutpAndDiagcInit4','EcmOutpAndDiagcInit3','EcmOutpAndDiagcInit1'};
SetMcuDiagcIdnData.Description = 'None';
SetMcuDiagcIdnData.Return = DataDict.CSReturn;
SetMcuDiagcIdnData.Return.Type = 'None';
SetMcuDiagcIdnData.Return.Min = [];
SetMcuDiagcIdnData.Return.Max = [];
SetMcuDiagcIdnData.Return.TestTolerance = [];
SetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
SetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
SetMcuDiagcIdnData.Arguments(1).EngMin = 0;
SetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(1).Direction = 'In';
SetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(1).Description = 'None';
SetMcuDiagcIdnData.Arguments(2) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(2).Name = 'McuDiagcData1';
SetMcuDiagcIdnData.Arguments(2).EngDT = dt.u32;
SetMcuDiagcIdnData.Arguments(2).EngMin = 0;
SetMcuDiagcIdnData.Arguments(2).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(2).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(2).Direction = 'In';
SetMcuDiagcIdnData.Arguments(2).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(2).Description = 'None';



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
STD_HIGH = DataDict.Constant;
STD_HIGH.LongName = 'Standard High';
STD_HIGH.Description = [...
  'AUTOSAR value representing a physical high state.  To be used as a alt' ...
  'ernative to TRUE/FALSE as appropriate.'];
STD_HIGH.DocUnits = 'Cnt';
STD_HIGH.EngDT = dt.u08;
STD_HIGH.EngVal = 1;
STD_HIGH.Define = 'Global';


STD_LOW = DataDict.Constant;
STD_LOW.LongName = 'Standard Low';
STD_LOW.Description = [...
  'AUTOSAR value representing a physical low state.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_LOW.DocUnits = 'Cnt';
STD_LOW.EngDT = dt.u08;
STD_LOW.EngVal = 0;
STD_LOW.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
