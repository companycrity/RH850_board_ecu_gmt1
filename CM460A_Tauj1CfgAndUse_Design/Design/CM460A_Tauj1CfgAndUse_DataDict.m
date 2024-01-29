%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-Feb-2016 18:07:02       %
%                                  Created with tool release: 2.32.0     %
%                                  Synergy file: %version: 2 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: fzg88y %          %
%%-----------------------------------------------------------------------%

CM460A = DataDict.FDD;
CM460A.Version = '1.2.X';
CM460A.LongName = 'Tauj1 Configuration And Use';
CM460A.ShoName  = 'Tauj1CfgAndUse';
CM460A.DesignASIL = 'B';
CM460A.Description = [...
  'This FDD details the configuration and use of the Tauj1 peripheral.  T' ...
  'his peripheral is used to sample and accumulate instances where the ph' ...
  'ase voltages of the motor are greater than a threshold.'];
CM460A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
Tauj1CfgAndUseInit1 = DataDict.Runnable;
Tauj1CfgAndUseInit1.Context = 'Rte';
Tauj1CfgAndUseInit1.TimeStep = 0;

Tauj1CfgAndUsePer1 = DataDict.Runnable;
Tauj1CfgAndUsePer1.Context = 'Rte';
Tauj1CfgAndUsePer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
PhaFbD = DataDict.IpSignal;
PhaFbD.LongName = 'Phase D Feedback';
PhaFbD.DocUnits = 'Volt';
PhaFbD.EngDT = dt.Phy;
PhaFbD.EngInit = 0;
PhaFbD.EngMin = 0;
PhaFbD.EngMax = 3;
PhaFbD.ReadIn = {};
PhaFbD.ReadType = 'Phy';


PhaFbE = DataDict.IpSignal;
PhaFbE.LongName = 'Phase E Feedback';
PhaFbE.DocUnits = 'Volt';
PhaFbE.EngDT = dt.Phy;
PhaFbE.EngInit = 0;
PhaFbE.EngMin = 0;
PhaFbE.EngMax = 3;
PhaFbE.ReadIn = {};
PhaFbE.ReadType = 'Phy';


PhaFbF = DataDict.IpSignal;
PhaFbF.LongName = 'Phase F Feedback';
PhaFbF.DocUnits = 'Volt';
PhaFbF.EngDT = dt.Phy;
PhaFbF.EngInit = 0;
PhaFbF.EngMin = 0;
PhaFbF.EngMax = 3;
PhaFbF.ReadIn = {};
PhaFbF.ReadType = 'Phy';


RegInpTAUJ1CNT0 = DataDict.IpSignal;
RegInpTAUJ1CNT0.LongName = 'Register TAUJ1CNT0';
RegInpTAUJ1CNT0.DocUnits = 'Cnt';
RegInpTAUJ1CNT0.EngDT = dt.u32;
RegInpTAUJ1CNT0.EngInit = 0;
RegInpTAUJ1CNT0.EngMin = 0;
RegInpTAUJ1CNT0.EngMax = 4294967295;
RegInpTAUJ1CNT0.ReadIn = {'Tauj1CfgAndUsePer1'};
RegInpTAUJ1CNT0.ReadType = 'Phy';


RegInpTAUJ1CNT1 = DataDict.IpSignal;
RegInpTAUJ1CNT1.LongName = 'Register TAUJ1CNT1';
RegInpTAUJ1CNT1.DocUnits = 'Cnt';
RegInpTAUJ1CNT1.EngDT = dt.u32;
RegInpTAUJ1CNT1.EngInit = 0;
RegInpTAUJ1CNT1.EngMin = 0;
RegInpTAUJ1CNT1.EngMax = 4294967295;
RegInpTAUJ1CNT1.ReadIn = {'Tauj1CfgAndUsePer1'};
RegInpTAUJ1CNT1.ReadType = 'Phy';


RegInpTAUJ1CNT2 = DataDict.IpSignal;
RegInpTAUJ1CNT2.LongName = 'Register TAUJ1CNT2';
RegInpTAUJ1CNT2.DocUnits = 'Cnt';
RegInpTAUJ1CNT2.EngDT = dt.u32;
RegInpTAUJ1CNT2.EngInit = 0;
RegInpTAUJ1CNT2.EngMin = 0;
RegInpTAUJ1CNT2.EngMax = 4294967295;
RegInpTAUJ1CNT2.ReadIn = {'Tauj1CfgAndUsePer1'};
RegInpTAUJ1CNT2.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
PhaOnTiMeasdD = DataDict.OpSignal;
PhaOnTiMeasdD.LongName = 'Phase on Time Measured D';
PhaOnTiMeasdD.Description = 'Measured On Time for Phase D';
PhaOnTiMeasdD.DocUnits = 'NanoSec';
PhaOnTiMeasdD.SwcShoName = 'Tauj1CfgAndUse';
PhaOnTiMeasdD.EngDT = dt.u32;
PhaOnTiMeasdD.EngInit = 0;
PhaOnTiMeasdD.EngMin = 0;
PhaOnTiMeasdD.EngMax = 4294967295;
PhaOnTiMeasdD.TestTolerance = 0;
PhaOnTiMeasdD.WrittenIn = {'Tauj1CfgAndUsePer1'};
PhaOnTiMeasdD.WriteType = 'Rte';


PhaOnTiMeasdE = DataDict.OpSignal;
PhaOnTiMeasdE.LongName = 'Phase on Time Measured E';
PhaOnTiMeasdE.Description = 'Measured On Time for Phase E';
PhaOnTiMeasdE.DocUnits = 'NanoSec';
PhaOnTiMeasdE.SwcShoName = 'Tauj1CfgAndUse';
PhaOnTiMeasdE.EngDT = dt.u32;
PhaOnTiMeasdE.EngInit = 0;
PhaOnTiMeasdE.EngMin = 0;
PhaOnTiMeasdE.EngMax = 4294967295;
PhaOnTiMeasdE.TestTolerance = 0;
PhaOnTiMeasdE.WrittenIn = {'Tauj1CfgAndUsePer1'};
PhaOnTiMeasdE.WriteType = 'Rte';


PhaOnTiMeasdF = DataDict.OpSignal;
PhaOnTiMeasdF.LongName = 'Phase on Time Measured F';
PhaOnTiMeasdF.Description = 'Measured On Time for Phase F';
PhaOnTiMeasdF.DocUnits = 'NanoSec';
PhaOnTiMeasdF.SwcShoName = 'Tauj1CfgAndUse';
PhaOnTiMeasdF.EngDT = dt.u32;
PhaOnTiMeasdF.EngInit = 0;
PhaOnTiMeasdF.EngMin = 0;
PhaOnTiMeasdF.EngMax = 4294967295;
PhaOnTiMeasdF.TestTolerance = 0;
PhaOnTiMeasdF.WrittenIn = {'Tauj1CfgAndUsePer1'};
PhaOnTiMeasdF.WriteType = 'Rte';



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
PhaOnTiCntrDPrev = DataDict.PIM;
PhaOnTiCntrDPrev.LongName = 'Phase D On Time Counter Previous';
PhaOnTiCntrDPrev.Description = [...
  'Previous instance of the Phase D On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrDPrev.DocUnits = 'Cnt';
PhaOnTiCntrDPrev.EngDT = dt.u32;
PhaOnTiCntrDPrev.EngMin = 0;
PhaOnTiCntrDPrev.EngMax = 4294967295;
PhaOnTiCntrDPrev.InitRowCol = [1  1];


PhaOnTiCntrEPrev = DataDict.PIM;
PhaOnTiCntrEPrev.LongName = 'Phase E On Time Counter Previous';
PhaOnTiCntrEPrev.Description = [...
  'Previous instance of the Phase E On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrEPrev.DocUnits = 'Cnt';
PhaOnTiCntrEPrev.EngDT = dt.u32;
PhaOnTiCntrEPrev.EngMin = 0;
PhaOnTiCntrEPrev.EngMax = 4294967295;
PhaOnTiCntrEPrev.InitRowCol = [1  1];


PhaOnTiCntrFPrev = DataDict.PIM;
PhaOnTiCntrFPrev.LongName = 'Phase F On Time Counter Previous';
PhaOnTiCntrFPrev.Description = [...
  'Previous instance of the Phase F On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrFPrev.DocUnits = 'Cnt';
PhaOnTiCntrFPrev.EngDT = dt.u32;
PhaOnTiCntrFPrev.EngMin = 0;
PhaOnTiCntrFPrev.EngMax = 4294967295;
PhaOnTiCntrFPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1 = DataDict.Constant;
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1.LongName = 'Tauj1 Time per Count';
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1.Description = [...
  'The Tauj1 counter will be sampling the phase feedback signals at a rat' ...
  'e of 80 MHz.  This constant represents the amount of time per count.'];
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1.DocUnits = 'NanoSecPerCnt';
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1.EngDT = dt.u15p1;
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1.EngVal = 12.5;
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1.Header = 'None';
TAUJ1TIPERCNT_NANOSECPERCNT_U15P1.Define = 'Local';

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
