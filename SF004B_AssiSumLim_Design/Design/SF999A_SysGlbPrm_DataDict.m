%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Mar-2015 21:57:29       %
%                                  Created with tool release: 2.4.0      %
%%-----------------------------------------------------------------------%

SF999A = DataDict.FDD;
SF999A.Version = '1.0.X';
SF999A.LongName = 'System Global Parameters';
SF999A.ShoName  = 'SysGlbPrm';
SF999A.DesignASIL = '';
SF999A.Description = [...
  'SF999A is a global collection of calibrations and constants that commo' ...
  'nly get shared across software components.'];
SF999A.Ntc = {};
SF999A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------

%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

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
SysGlbPrmSysKinRatio = DataDict.Calibration;
SysGlbPrmSysKinRatio.LongName = 'System Kinematic Ratio';
SysGlbPrmSysKinRatio.Description = [...
  'Kinematic ratio between handwheel and motor.'];
SysGlbPrmSysKinRatio.DocUnits = 'MotDegPerHwDeg';
SysGlbPrmSysKinRatio.EngDT = dt.float32;
SysGlbPrmSysKinRatio.EngVal = 22;
SysGlbPrmSysKinRatio.EngMin = 10;
SysGlbPrmSysKinRatio.EngMax = 40;
SysGlbPrmSysKinRatio.ProgrammedBy = 'Nexteer';
SysGlbPrmSysKinRatio.Cardinality = 'I';
SysGlbPrmSysKinRatio.CustomerVisible = false;
SysGlbPrmSysKinRatio.Online = false;
SysGlbPrmSysKinRatio.Impact = 'H';
SysGlbPrmSysKinRatio.SafetyRating = 'n/a';
SysGlbPrmSysKinRatio.TuningOwner = 'CSE';
SysGlbPrmSysKinRatio.GraphLink = '';
SysGlbPrmSysKinRatio.Monotony = 'None';
SysGlbPrmSysKinRatio.MaxGrad = 0;
SysGlbPrmSysKinRatio.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';


SysGlbPrmSysTrqRatio = DataDict.Calibration;
SysGlbPrmSysTrqRatio.LongName = 'System Torque Ratio';
SysGlbPrmSysTrqRatio.Description = [...
  'Ratio between handwheel and motor, with consideration given to load-de' ...
  'pendent losses.  Generally set as TrqRatio = KinRatio * Efficiency.'];
SysGlbPrmSysTrqRatio.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTrqRatio.EngDT = dt.float32;
SysGlbPrmSysTrqRatio.EngVal = 20;
SysGlbPrmSysTrqRatio.EngMin = 10;
SysGlbPrmSysTrqRatio.EngMax = 40;
SysGlbPrmSysTrqRatio.ProgrammedBy = 'Nexteer';
SysGlbPrmSysTrqRatio.Cardinality = 'I';
SysGlbPrmSysTrqRatio.CustomerVisible = false;
SysGlbPrmSysTrqRatio.Online = false;
SysGlbPrmSysTrqRatio.Impact = 'H';
SysGlbPrmSysTrqRatio.SafetyRating = 'n/a';
SysGlbPrmSysTrqRatio.TuningOwner = 'CSE';
SysGlbPrmSysTrqRatio.GraphLink = '';
SysGlbPrmSysTrqRatio.Monotony = 'None';
SysGlbPrmSysTrqRatio.MaxGrad = 0;
SysGlbPrmSysTrqRatio.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';


SysGlbPrmTbarStiff = DataDict.Calibration;
SysGlbPrmTbarStiff.LongName = 'Tbar Stiffness';
SysGlbPrmTbarStiff.Description = 'T-bar stiffness, Nm/deg';
SysGlbPrmTbarStiff.DocUnits = 'HwNwtMtrPerHwDeg';
SysGlbPrmTbarStiff.EngDT = dt.float32;
SysGlbPrmTbarStiff.EngVal = 2.5;
SysGlbPrmTbarStiff.EngMin = 0.500;
SysGlbPrmTbarStiff.EngMax = 10;
SysGlbPrmTbarStiff.ProgrammedBy = 'Nexteer';
SysGlbPrmTbarStiff.Cardinality = 'I';
SysGlbPrmTbarStiff.CustomerVisible = false;
SysGlbPrmTbarStiff.CustomerVisible = false;
SysGlbPrmTbarStiff.Impact = 'H';
SysGlbPrmTbarStiff.SafetyRating = 'n/a';
SysGlbPrmTbarStiff.TuningOwner = 'CSE';
SysGlbPrmTbarStiff.GraphLink = '';
SysGlbPrmTbarStiff.Monotony = 'None';
SysGlbPrmTbarStiff.MaxGrad = 0;
SysGlbPrmTbarStiff.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';


SysGlbPrmMotPoleCnt = DataDict.Calibration;
SysGlbPrmMotPoleCnt.LongName = 'Motor Pole Count';
SysGlbPrmMotPoleCnt.Description = 'Motor Pole Count, Counts';
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.ProgrammedBy = 'Nexteer';
SysGlbPrmMotPoleCnt.Cardinality = 'I';
SysGlbPrmMotPoleCnt.CustomerVisible = false;
SysGlbPrmMotPoleCnt.Online = false;
SysGlbPrmMotPoleCnt.Impact = 'H';
SysGlbPrmMotPoleCnt.SafetyRating = 'n/a';
SysGlbPrmMotPoleCnt.TuningOwner = 'CSE';
SysGlbPrmMotPoleCnt.GraphLink = '';
SysGlbPrmMotPoleCnt.Monotony = 'None';
SysGlbPrmMotPoleCnt.MaxGrad = 0;
SysGlbPrmMotPoleCnt.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';


SysGlbPrmVehSpd = DataDict.Calibration;
SysGlbPrmVehSpd.LongName = 'Vehicle Speed';
SysGlbPrmVehSpd.Description = [...
  '1-D vehicle speed table.  12 tuning points, common to multiple functio' ...
  'ns.'];
SysGlbPrmVehSpd.DocUnits = 'Kph';
SysGlbPrmVehSpd.EngDT = dt.u9p7;
SysGlbPrmVehSpd.EngVal =  ...
   [0             5            15            30            60            80           100           120           150           180           200           220];
SysGlbPrmVehSpd.EngMin = 0;
SysGlbPrmVehSpd.EngMax = 511;
SysGlbPrmVehSpd.ProgrammedBy = 'Nexteer';
SysGlbPrmVehSpd.Cardinality = 'I';
SysGlbPrmVehSpd.CustomerVisible = false;
SysGlbPrmVehSpd.Online = false;
SysGlbPrmVehSpd.Impact = 'H';
SysGlbPrmVehSpd.SafetyRating = 'n/a';
SysGlbPrmVehSpd.TuningOwner = 'CSE';
SysGlbPrmVehSpd.GraphLink = '';
SysGlbPrmVehSpd.Monotony = 'Strictly_Increasing';
SysGlbPrmVehSpd.MaxGrad = 511;
SysGlbPrmVehSpd.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';



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
SYSGLBPRMMOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRMMOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRMMOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRMMOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRMMOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRMMOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;


SYSGLBPRMMOTTQCMDLOWRLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRMMOTTQCMDLOWRLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Lower Limit';
SYSGLBPRMMOTTQCMDLOWRLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRMMOTTQCMDLOWRLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRMMOTTQCMDLOWRLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRMMOTTQCMDLOWRLIM_MOTNWTMTR_F32.EngVal = -8.8;

%end of Data Dictionary