%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-May-2016 13:39:41       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 2 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: nzg49t %          %
%%-----------------------------------------------------------------------%

ES250A = DataDict.FDD;
ES250A.Version = '2.0.X';
ES250A.LongName = 'Battery or Switched Battery Voltage Measurement and Arbitration';
ES250A.ShoName  = 'BattVltg';
ES250A.DesignASIL = 'B';
ES250A.Description = [...
  'Function produces an output voltage that is used by the software appli' ...
  'cation'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
BattVltgPer1 = DataDict.Runnable;
BattVltgPer1.Context = 'Rte';
BattVltgPer1.TimeStep = 0.002;
BattVltgPer1.Description = 'Battery Voltage Periodic 1';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BattSwdVltgCorrlnSts = DataDict.IpSignal;
BattSwdVltgCorrlnSts.LongName = 'Battery Switched Voltage Correlation Status';
BattSwdVltgCorrlnSts.Description = ...
  'Battery Switched Voltage Correlation Status';
BattSwdVltgCorrlnSts.DocUnits = 'Cnt';
BattSwdVltgCorrlnSts.EngDT = dt.u08;
BattSwdVltgCorrlnSts.EngInit = 7;
BattSwdVltgCorrlnSts.EngMin = 0;
BattSwdVltgCorrlnSts.EngMax = 7;
BattSwdVltgCorrlnSts.ReadIn = {'BattVltgPer1'};
BattSwdVltgCorrlnSts.ReadType = 'Rte';


BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.Description = 'Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 0;
BattVltg.EngMin = 0;
BattVltg.EngMax = 40;
BattVltg.ReadIn = {'BattVltgPer1'};
BattVltg.ReadType = 'Rte';


BattVltgSwd1 = DataDict.IpSignal;
BattVltgSwd1.LongName = 'Switched Battery Voltage 1';
BattVltgSwd1.Description = 'Switched Battery Voltage 1';
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.EngInit = 0;
BattVltgSwd1.EngMin = 0;
BattVltgSwd1.EngMax = 40;
BattVltgSwd1.ReadIn = {'BattVltgPer1'};
BattVltgSwd1.ReadType = 'Rte';


BattVltgSwd2 = DataDict.IpSignal;
BattVltgSwd2.LongName = 'Switched Battery Voltage 2';
BattVltgSwd2.Description = 'Switched Battery Voltage 2';
BattVltgSwd2.DocUnits = 'Volt';
BattVltgSwd2.EngDT = dt.float32;
BattVltgSwd2.EngInit = 0;
BattVltgSwd2.EngMin = 0;
BattVltgSwd2.EngMax = 40;
BattVltgSwd2.ReadIn = {'BattVltgPer1'};
BattVltgSwd2.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
BrdgVltg = DataDict.OpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = 'Output Bridge Voltage';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.SwcShoName = 'BattVltg';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 2;
BrdgVltg.EngMax = 26.5;
BrdgVltg.TestTolerance = 0.0078125;
BrdgVltg.WrittenIn = {'BattVltgPer1'};
BrdgVltg.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
BattVltgSwdMax = DataDict.Calibration;
BattVltgSwdMax.LongName = 'Switched Maximum Voltage';
BattVltgSwdMax.Description = ...
  'Maximum voltage at which switched voltage saturates';
BattVltgSwdMax.DocUnits = 'Volt';
BattVltgSwdMax.EngDT = dt.float32;
BattVltgSwdMax.EngVal = 16;
BattVltgSwdMax.EngMin = 6;
BattVltgSwdMax.EngMax = 26.5;
BattVltgSwdMax.Cardinality = 'Cmn';
BattVltgSwdMax.CustomerVisible = false;
BattVltgSwdMax.Online = false;
BattVltgSwdMax.Impact = 'L';
BattVltgSwdMax.TuningOwner = 'FDD';
BattVltgSwdMax.GraphLink = {''};
BattVltgSwdMax.Monotony = 'None';
BattVltgSwdMax.MaxGrad = 999;
BattVltgSwdMax.PortName = 'BattVltgSwdMax';

BrdgVltgMax = DataDict.Calibration;
BrdgVltgMax.LongName = 'Switched Maximum Voltage';
BrdgVltgMax.Description = ...
  'Maximum voltage at which battery voltage saturates';
BrdgVltgMax.DocUnits = 'Volt';
BrdgVltgMax.EngDT = dt.float32;
BrdgVltgMax.EngVal = 26.5;
BrdgVltgMax.EngMin = 2;
BrdgVltgMax.EngMax = 40;
BrdgVltgMax.Cardinality = 'Cmn';
BrdgVltgMax.CustomerVisible = false;
BrdgVltgMax.Online = false;
BrdgVltgMax.Impact = 'L';
BrdgVltgMax.TuningOwner = 'FDD';
BrdgVltgMax.GraphLink = {''};
BrdgVltgMax.Monotony = 'None';
BrdgVltgMax.MaxGrad = 999;
BrdgVltgMax.PortName = 'BrdgVltgMax';

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
BattVltgCorrlnSysMinVltg = DataDict.ImprtdCal;
BattVltgCorrlnSysMinVltg.DocUnits = 'Volt';
BattVltgCorrlnSysMinVltg.EngDT = dt.float32;
BattVltgCorrlnSysMinVltg.EngVal = 6;
BattVltgCorrlnSysMinVltg.EngMin = 2;
BattVltgCorrlnSysMinVltg.EngMax = 12;
BattVltgCorrlnSysMinVltg.PortName = 'BattVltgCorrlnSysMinVltg';
BattVltgCorrlnSysMinVltg.Description = 'Minimum System Voltage';



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
BRDGFLTVLTG_VOLT_F32 = DataDict.Constant;
BRDGFLTVLTG_VOLT_F32.LongName = 'Bridge Fault Voltage';
BRDGFLTVLTG_VOLT_F32.Description = ...
  'Value that is output by this FDD if BattVltg signal is at fault';
BRDGFLTVLTG_VOLT_F32.DocUnits = 'Volt';
BRDGFLTVLTG_VOLT_F32.EngDT = dt.float32;
BRDGFLTVLTG_VOLT_F32.EngVal = 18;
BRDGFLTVLTG_VOLT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
