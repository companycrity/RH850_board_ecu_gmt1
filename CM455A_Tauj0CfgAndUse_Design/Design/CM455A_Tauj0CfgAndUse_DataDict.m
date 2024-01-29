%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-Feb-2016 17:56:39       %
%                                  Created with tool release: 2.32.0     %
%                                  Synergy file: %version: 2 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: fzg88y %          %
%%-----------------------------------------------------------------------%

CM455A = DataDict.FDD;
CM455A.Version = '1.1.X';
CM455A.LongName = 'Tauj0 Configuration And Use';
CM455A.ShoName  = 'Tauj0CfgAndUse';
CM455A.DesignASIL = 'B';
CM455A.Description = [...
  'This FDD details the configuration and use of the Tauj0 peripheral.  T' ...
  'his peripheral is used to sample and accumulate instances where the ph' ...
  'ase voltages of the motor are greater than a threshold.'];
CM455A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
Tauj0CfgAndUseInit1 = DataDict.Runnable;
Tauj0CfgAndUseInit1.Context = 'Rte';
Tauj0CfgAndUseInit1.TimeStep = 0;

Tauj0CfgAndUsePer1 = DataDict.Runnable;
Tauj0CfgAndUsePer1.Context = 'Rte';
Tauj0CfgAndUsePer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
PhaFbA = DataDict.IpSignal;
PhaFbA.LongName = 'Phase A Feedback';
PhaFbA.DocUnits = 'Volt';
PhaFbA.EngDT = dt.Phy;
PhaFbA.EngInit = 0;
PhaFbA.EngMin = 0;
PhaFbA.EngMax = 3;
PhaFbA.ReadIn = {};
PhaFbA.ReadType = 'Phy';


PhaFbB = DataDict.IpSignal;
PhaFbB.LongName = 'Phase B Feedback';
PhaFbB.DocUnits = 'Volt';
PhaFbB.EngDT = dt.Phy;
PhaFbB.EngInit = 0;
PhaFbB.EngMin = 0;
PhaFbB.EngMax = 3;
PhaFbB.ReadIn = {};
PhaFbB.ReadType = 'Phy';


PhaFbC = DataDict.IpSignal;
PhaFbC.LongName = 'Phase C Feedback';
PhaFbC.DocUnits = 'Volt';
PhaFbC.EngDT = dt.Phy;
PhaFbC.EngInit = 0;
PhaFbC.EngMin = 0;
PhaFbC.EngMax = 3;
PhaFbC.ReadIn = {};
PhaFbC.ReadType = 'Phy';


RegInpTAUJ0CNT0 = DataDict.IpSignal;
RegInpTAUJ0CNT0.LongName = 'Register TAUJ0CNT0';
RegInpTAUJ0CNT0.DocUnits = 'Cnt';
RegInpTAUJ0CNT0.EngDT = dt.u32;
RegInpTAUJ0CNT0.EngInit = 0;
RegInpTAUJ0CNT0.EngMin = 0;
RegInpTAUJ0CNT0.EngMax = 4294967295;
RegInpTAUJ0CNT0.ReadIn = {'Tauj0CfgAndUsePer1'};
RegInpTAUJ0CNT0.ReadType = 'Phy';


RegInpTAUJ0CNT1 = DataDict.IpSignal;
RegInpTAUJ0CNT1.LongName = 'Register TAUJ0CNT1';
RegInpTAUJ0CNT1.DocUnits = 'Cnt';
RegInpTAUJ0CNT1.EngDT = dt.u32;
RegInpTAUJ0CNT1.EngInit = 0;
RegInpTAUJ0CNT1.EngMin = 0;
RegInpTAUJ0CNT1.EngMax = 4294967295;
RegInpTAUJ0CNT1.ReadIn = {'Tauj0CfgAndUsePer1'};
RegInpTAUJ0CNT1.ReadType = 'Phy';


RegInpTAUJ0CNT3 = DataDict.IpSignal;
RegInpTAUJ0CNT3.LongName = 'Register TAUJ0CNT3';
RegInpTAUJ0CNT3.DocUnits = 'Cnt';
RegInpTAUJ0CNT3.EngDT = dt.u32;
RegInpTAUJ0CNT3.EngInit = 0;
RegInpTAUJ0CNT3.EngMin = 0;
RegInpTAUJ0CNT3.EngMax = 4294967295;
RegInpTAUJ0CNT3.ReadIn = {'Tauj0CfgAndUsePer1'};
RegInpTAUJ0CNT3.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
PhaOnTiMeasdA = DataDict.OpSignal;
PhaOnTiMeasdA.LongName = 'Phase on Time Measured A';
PhaOnTiMeasdA.Description = 'Measured On Time for Phase A';
PhaOnTiMeasdA.DocUnits = 'NanoSec';
PhaOnTiMeasdA.SwcShoName = 'Tauj0CfgAndUse';
PhaOnTiMeasdA.EngDT = dt.u32;
PhaOnTiMeasdA.EngInit = 0;
PhaOnTiMeasdA.EngMin = 0;
PhaOnTiMeasdA.EngMax = 4294967295;
PhaOnTiMeasdA.TestTolerance = 0;
PhaOnTiMeasdA.WrittenIn = {'Tauj0CfgAndUsePer1'};
PhaOnTiMeasdA.WriteType = 'Rte';


PhaOnTiMeasdB = DataDict.OpSignal;
PhaOnTiMeasdB.LongName = 'Phase on Time Measured B';
PhaOnTiMeasdB.Description = 'Measured On Time for Phase B';
PhaOnTiMeasdB.DocUnits = 'NanoSec';
PhaOnTiMeasdB.SwcShoName = 'Tauj0CfgAndUse';
PhaOnTiMeasdB.EngDT = dt.u32;
PhaOnTiMeasdB.EngInit = 0;
PhaOnTiMeasdB.EngMin = 0;
PhaOnTiMeasdB.EngMax = 4294967295;
PhaOnTiMeasdB.TestTolerance = 0;
PhaOnTiMeasdB.WrittenIn = {'Tauj0CfgAndUsePer1'};
PhaOnTiMeasdB.WriteType = 'Rte';


PhaOnTiMeasdC = DataDict.OpSignal;
PhaOnTiMeasdC.LongName = 'Phase on Time Measured C';
PhaOnTiMeasdC.Description = 'Measured On Time for Phase C';
PhaOnTiMeasdC.DocUnits = 'NanoSec';
PhaOnTiMeasdC.SwcShoName = 'Tauj0CfgAndUse';
PhaOnTiMeasdC.EngDT = dt.u32;
PhaOnTiMeasdC.EngInit = 0;
PhaOnTiMeasdC.EngMin = 0;
PhaOnTiMeasdC.EngMax = 4294967295;
PhaOnTiMeasdC.TestTolerance = 0;
PhaOnTiMeasdC.WrittenIn = {'Tauj0CfgAndUsePer1'};
PhaOnTiMeasdC.WriteType = 'Rte';



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
PhaOnTiCntrAPrev = DataDict.PIM;
PhaOnTiCntrAPrev.LongName = 'Phase A On Time Counter Previous';
PhaOnTiCntrAPrev.Description = [...
  'Previous instance of the Phase A On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrAPrev.DocUnits = 'Cnt';
PhaOnTiCntrAPrev.EngDT = dt.u32;
PhaOnTiCntrAPrev.EngMin = 0;
PhaOnTiCntrAPrev.EngMax = 4294967295;
PhaOnTiCntrAPrev.InitRowCol = [1  1];


PhaOnTiCntrBPrev = DataDict.PIM;
PhaOnTiCntrBPrev.LongName = 'Phase B On Time Counter Previous';
PhaOnTiCntrBPrev.Description = [...
  'Previous instance of the Phase B On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrBPrev.DocUnits = 'Cnt';
PhaOnTiCntrBPrev.EngDT = dt.u32;
PhaOnTiCntrBPrev.EngMin = 0;
PhaOnTiCntrBPrev.EngMax = 4294967295;
PhaOnTiCntrBPrev.InitRowCol = [1  1];


PhaOnTiCntrCPrev = DataDict.PIM;
PhaOnTiCntrCPrev.LongName = 'Phase C On Time Counter Previous';
PhaOnTiCntrCPrev.Description = [...
  'Previous instance of the Phase C On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrCPrev.DocUnits = 'Cnt';
PhaOnTiCntrCPrev.EngDT = dt.u32;
PhaOnTiCntrCPrev.EngMin = 0;
PhaOnTiCntrCPrev.EngMax = 4294967295;
PhaOnTiCntrCPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1 = DataDict.Constant;
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1.LongName = 'Tauj0 Time per Count';
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1.Description = [...
  'The Tauj0 counter will be sampling the phase feedback signals at a rat' ...
  'e of 80 MHz.  This constant represents the amount of time per count.'];
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1.DocUnits = 'NanoSecPerCnt';
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1.EngDT = dt.u15p1;
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1.EngVal = 12.5;
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1.Header = 'None';
TAUJ0TIPERCNT_NANOSECPERCNT_U15P1.Define = 'Local';

PHAONTIMEASDMAX_NANOSEC_U32 = DataDict.Constant;
PHAONTIMEASDMAX_NANOSEC_U32.LongName = 'Phase On Time Measured Maximum';
PHAONTIMEASDMAX_NANOSEC_U32.Description = ['Maximum value of Phase On Time Measured'];
PHAONTIMEASDMAX_NANOSEC_U32.DocUnits = 'NanoSec';
PHAONTIMEASDMAX_NANOSEC_U32.EngDT = dt.u32;
PHAONTIMEASDMAX_NANOSEC_U32.EngVal = 4294967295;
PHAONTIMEASDMAX_NANOSEC_U32.Header = 'None';
PHAONTIMEASDMAX_NANOSEC_U32.Define = 'Local';

PHAFBDELTACNTMAX_CNT_U32 = DataDict.Constant;
PHAFBDELTACNTMAX_CNT_U32.LongName = 'Phase Feedback Delta Count Maximum';
PHAFBDELTACNTMAX_CNT_U32.Description = ['This constant represents maximum value between present and previous value of motor phase feedback signal accumulator'];
PHAFBDELTACNTMAX_CNT_U32.DocUnits = 'Cnt';
PHAFBDELTACNTMAX_CNT_U32.EngDT = dt.u32;
PHAFBDELTACNTMAX_CNT_U32.EngVal = 320000;
PHAFBDELTACNTMAX_CNT_U32.Header = 'None';
PHAFBDELTACNTMAX_CNT_U32.Define = 'Local';

PHAFBDELTACNTMIN_CNT_U32 = DataDict.Constant;
PHAFBDELTACNTMIN_CNT_U32.LongName = 'Phase Feedback Delta Count Minimum';
PHAFBDELTACNTMIN_CNT_U32.Description = ['This constant represents minimum value between present and previous value of motor phase feedback signal accumulator'];
PHAFBDELTACNTMIN_CNT_U32.DocUnits = 'Cnt';
PHAFBDELTACNTMIN_CNT_U32.EngDT = dt.u32;
PHAFBDELTACNTMIN_CNT_U32.EngVal = 0;
PHAFBDELTACNTMIN_CNT_U32.Header = 'None';
PHAFBDELTACNTMIN_CNT_U32.Define = 'Local';

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
