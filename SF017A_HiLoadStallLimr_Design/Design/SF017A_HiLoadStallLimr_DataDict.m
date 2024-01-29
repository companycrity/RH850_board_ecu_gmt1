%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 11-Aug-2015 13:45:45       %
%                                  Created with tool release: 2.17.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: qzwc4r %          %
%%-----------------------------------------------------------------------%

SF017A = DataDict.FDD;
SF017A.Version = '1.0.X';
SF017A.LongName = 'High Load Stall Limiter';
SF017A.ShoName  = 'HiLoadStallLimr';
SF017A.DesignASIL = 'QM';
SF017A.Description = [...
  'The High Load Stall Thermal Management algorithm protects the system f' ...
  'rom prolonged intervals of high assist torque at near-stall conditions' ...
  '. In other words, it quickly limits large torque commands if the motor' ...
  ' velocity is below a calibratable threshold. The algorithm uses a low-' ...
  'pass filter (LPF) and a torque limit table to reduce the maximum allow' ...
  'ed torque command under certain operating conditions. When motor veloc' ...
  'ity is equal to or falls below the calibratable threshold, the torque ' ...
  'command is applied to the input of the low-pass filter. The output of ' ...
  'the filter ramps up and indexes into the torque limit table. The outpu' ...
  't of this table is the maximum allowed torque command. A slew limit ca' ...
  'libration governs the transition rate of the table output.'];
SF017A.Dependencies = ...
	{'ArchGlbPrm','SysGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HiLoadStallLimrInit1 = DataDict.Runnable;
HiLoadStallLimrInit1.TimeStep = 0;

HiLoadStallLimrPer1 = DataDict.Runnable;
HiLoadStallLimrPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotTqCmdLimdPreStall = DataDict.IpSignal;
MotTqCmdLimdPreStall.LongName = 'Motor Torque Command Limited Pre-Stall';
MotTqCmdLimdPreStall.DocUnits = 'MotNwtMtr';
MotTqCmdLimdPreStall.EngDT = dt.float32;
MotTqCmdLimdPreStall.EngInit = 0;
MotTqCmdLimdPreStall.EngMin = 0;
MotTqCmdLimdPreStall.EngMax = 8.8;
MotTqCmdLimdPreStall.ReadIn = {'HiLoadStallLimrPer1'};
MotTqCmdLimdPreStall.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Core Reference Frame';
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'HiLoadStallLimrPer1'};
MotVelCrf.ReadType = 'Rte';


StallMotTqLimDi = DataDict.IpSignal;
StallMotTqLimDi.LongName = 'Motor Torque Stall Limit Disable';
StallMotTqLimDi.DocUnits = 'Cnt';
StallMotTqLimDi.EngDT = dt.lgc;
StallMotTqLimDi.EngInit = 0;
StallMotTqLimDi.EngMin = 0;
StallMotTqLimDi.EngMax = 1;
StallMotTqLimDi.ReadIn = {'HiLoadStallLimrPer1'};
StallMotTqLimDi.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
StallMotTqLim = DataDict.OpSignal;
StallMotTqLim.LongName = 'Stall Motor Torque Limit';
StallMotTqLim.Description = [...
  'Limited assist torque command based on high torque levels at low motor' ...
  ' speeds.'];
StallMotTqLim.DocUnits = 'MotNwtMtr';
StallMotTqLim.SwcShoName = 'HiLoadStallLimr';
StallMotTqLim.EngDT = dt.float32;
StallMotTqLim.EngInit = 8.8;
StallMotTqLim.EngMin = 0;
StallMotTqLim.EngMax = 8.8;
StallMotTqLim.TestTolerance = 0.000488281;
StallMotTqLim.WrittenIn = {'HiLoadStallLimrPer1'};
StallMotTqLim.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HiLoadStallLimrMotTqCmdFilFrq = DataDict.Calibration;
HiLoadStallLimrMotTqCmdFilFrq.LongName = 'End of Travel Thermal Part Low Pass Filter';
HiLoadStallLimrMotTqCmdFilFrq.Description = [...
  '(Calibration value to set cutoff frequency of the low pass filter.'];
HiLoadStallLimrMotTqCmdFilFrq.DocUnits = 'Hz';
HiLoadStallLimrMotTqCmdFilFrq.EngDT = dt.float32;
HiLoadStallLimrMotTqCmdFilFrq.EngVal = 2;
HiLoadStallLimrMotTqCmdFilFrq.EngMin = 0.01;
HiLoadStallLimrMotTqCmdFilFrq.EngMax = 10;
HiLoadStallLimrMotTqCmdFilFrq.ProgrammedBy = 'Nexteer';
HiLoadStallLimrMotTqCmdFilFrq.Cardinality = 'I';
HiLoadStallLimrMotTqCmdFilFrq.CustomerVisible = false;
HiLoadStallLimrMotTqCmdFilFrq.Online = false;
HiLoadStallLimrMotTqCmdFilFrq.Impact = 'H';
HiLoadStallLimrMotTqCmdFilFrq.TuningOwner = 'ThermMngt';
HiLoadStallLimrMotTqCmdFilFrq.GraphLink = '';
HiLoadStallLimrMotTqCmdFilFrq.Monotony = 'None';
HiLoadStallLimrMotTqCmdFilFrq.MaxGrad = 0;
HiLoadStallLimrMotTqCmdFilFrq.PortName = 'HiLoadStallLimrMotTqCmdFilFrq';


HiLoadStallLimrMotVelMgnThd = DataDict.Calibration;
HiLoadStallLimrMotVelMgnThd.LongName = 'Motor Velocity Magnitude Threshold';
HiLoadStallLimrMotVelMgnThd.Description = [...
  'Calibration used to define a breakpoint motor velocity to determine to' ...
  'rque input into low pass filter.'];
HiLoadStallLimrMotVelMgnThd.DocUnits = 'MotRadPerSec';
HiLoadStallLimrMotVelMgnThd.EngDT = dt.float32;
HiLoadStallLimrMotVelMgnThd.EngVal = 1.375;
HiLoadStallLimrMotVelMgnThd.EngMin = -1350;
HiLoadStallLimrMotVelMgnThd.EngMax = 1350;
HiLoadStallLimrMotVelMgnThd.ProgrammedBy = 'Nexteer';
HiLoadStallLimrMotVelMgnThd.Cardinality = 'I';
HiLoadStallLimrMotVelMgnThd.CustomerVisible = false;
HiLoadStallLimrMotVelMgnThd.Online = false;
HiLoadStallLimrMotVelMgnThd.Impact = 'H';
HiLoadStallLimrMotVelMgnThd.TuningOwner = 'ThermMngt';
HiLoadStallLimrMotVelMgnThd.GraphLink = '';
HiLoadStallLimrMotVelMgnThd.Monotony = 'None';
HiLoadStallLimrMotVelMgnThd.MaxGrad = 0;
HiLoadStallLimrMotVelMgnThd.PortName = 'HiLoadStallLimrMotVelMgnThd';


HiLoadStallLimrStallMotTqCmdLimX = DataDict.Calibration;
HiLoadStallLimrStallMotTqCmdLimX.LongName = 'Motor Torque Stall Limit X';
HiLoadStallLimrStallMotTqCmdLimX.Description = [...
  'Table to determine Y-axis of EOT Thermal Protection Limit Table.'];
HiLoadStallLimrStallMotTqCmdLimX.DocUnits = 'MotNwtMtr';
HiLoadStallLimrStallMotTqCmdLimX.EngDT = dt.u8p8;
HiLoadStallLimrStallMotTqCmdLimX.EngVal =  ...
   [0 2.2 2.5 2.8 3 3];
HiLoadStallLimrStallMotTqCmdLimX.EngMin = 0;
HiLoadStallLimrStallMotTqCmdLimX.EngMax = 8.8;
HiLoadStallLimrStallMotTqCmdLimX.ProgrammedBy = 'Nexteer';
HiLoadStallLimrStallMotTqCmdLimX.Cardinality = 'I';
HiLoadStallLimrStallMotTqCmdLimX.CustomerVisible = false;
HiLoadStallLimrStallMotTqCmdLimX.Online = false;
HiLoadStallLimrStallMotTqCmdLimX.Impact = 'H';
HiLoadStallLimrStallMotTqCmdLimX.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqCmdLimX.GraphLink = '';
HiLoadStallLimrStallMotTqCmdLimX.Monotony = 'Increasing';
HiLoadStallLimrStallMotTqCmdLimX.MaxGrad = 8.8;
HiLoadStallLimrStallMotTqCmdLimX.PortName = 'HiLoadStallLimrStallMotTqCmdLimX';


HiLoadStallLimrStallMotTqCmdLimY = DataDict.Calibration;
HiLoadStallLimrStallMotTqCmdLimY.LongName = 'Motor Torque Stall Limit Y';
HiLoadStallLimrStallMotTqCmdLimY.Description = [...
  'Table to determine X-axis (Filtered Modified PreLimit Torque) of the E' ...
  'OT Thermal Protection Limit Table.'];
HiLoadStallLimrStallMotTqCmdLimY.DocUnits = 'MotNwtMtr';
HiLoadStallLimrStallMotTqCmdLimY.EngDT = dt.u8p8;
HiLoadStallLimrStallMotTqCmdLimY.EngVal =  ...
   [3 3 2 1 0 0];
HiLoadStallLimrStallMotTqCmdLimY.EngMin = 0;
HiLoadStallLimrStallMotTqCmdLimY.EngMax = 8.8;
HiLoadStallLimrStallMotTqCmdLimY.ProgrammedBy = 'Nexteer';
HiLoadStallLimrStallMotTqCmdLimY.Cardinality = 'I';
HiLoadStallLimrStallMotTqCmdLimY.CustomerVisible = false;
HiLoadStallLimrStallMotTqCmdLimY.Online = false;
HiLoadStallLimrStallMotTqCmdLimY.Impact = 'H';
HiLoadStallLimrStallMotTqCmdLimY.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqCmdLimY.GraphLink = 'HiLoadStallLimrStallMotTqCmdLimX';
HiLoadStallLimrStallMotTqCmdLimY.Monotony = 'Decreasing';
HiLoadStallLimrStallMotTqCmdLimY.MaxGrad = 8.8;
HiLoadStallLimrStallMotTqCmdLimY.PortName = 'HiLoadStallLimrStallMotTqCmdLimY';


HiLoadStallLimrStallMotTqLimSlewRate = DataDict.Calibration;
HiLoadStallLimrStallMotTqLimSlewRate.LongName = 'Motor Torque Stall Limit Slew Rate';
HiLoadStallLimrStallMotTqLimSlewRate.Description = [...
  'Calibration to determine slew rate.'];
HiLoadStallLimrStallMotTqLimSlewRate.DocUnits = 'MotNwtMtrPerSec';
HiLoadStallLimrStallMotTqLimSlewRate.EngDT = dt.float32;
HiLoadStallLimrStallMotTqLimSlewRate.EngVal = 0.101563;
HiLoadStallLimrStallMotTqLimSlewRate.EngMin = 0.008;
HiLoadStallLimrStallMotTqLimSlewRate.EngMax = 8;
HiLoadStallLimrStallMotTqLimSlewRate.ProgrammedBy = 'Nexteer';
HiLoadStallLimrStallMotTqLimSlewRate.Cardinality = 'I';
HiLoadStallLimrStallMotTqLimSlewRate.CustomerVisible = false;
HiLoadStallLimrStallMotTqLimSlewRate.Online = false;
HiLoadStallLimrStallMotTqLimSlewRate.Impact = 'H';
HiLoadStallLimrStallMotTqLimSlewRate.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqLimSlewRate.GraphLink = '';
HiLoadStallLimrStallMotTqLimSlewRate.Monotony = 'None';
HiLoadStallLimrStallMotTqLimSlewRate.MaxGrad = 0;
HiLoadStallLimrStallMotTqLimSlewRate.PortName = 'HiLoadStallLimrStallMotTqLimSlewRate';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHiLoadStallLimrStallMotTqCmd = DataDict.Display;
dHiLoadStallLimrStallMotTqCmd.LongName = 'Stall Motor Torque Command';
dHiLoadStallLimrStallMotTqCmd.Description = [...
  'Modified Prelimit Torque,  the input to low pass filter.  Value equals' ...
  ' either PreLimitForStall or Zero, depending on motor velocity.'];
dHiLoadStallLimrStallMotTqCmd.DocUnits = 'MotNwtMtr';
dHiLoadStallLimrStallMotTqCmd.EngDT = dt.float32;
dHiLoadStallLimrStallMotTqCmd.EngMin = 0;
dHiLoadStallLimrStallMotTqCmd.EngMax = 8.8;
dHiLoadStallLimrStallMotTqCmd.InitRowCol = [1  1];


dHiLoadStallLimrStallMotTqCmdFild = DataDict.Display;
dHiLoadStallLimrStallMotTqCmdFild.LongName = 'Stall Motor Torque Command Filtered';
dHiLoadStallLimrStallMotTqCmdFild.Description = [...
  'Modified Prelimit Torque, after filtering.'];
dHiLoadStallLimrStallMotTqCmdFild.DocUnits = 'MotNwtMtr';
dHiLoadStallLimrStallMotTqCmdFild.EngDT = dt.float32;
dHiLoadStallLimrStallMotTqCmdFild.EngMin = 0;
dHiLoadStallLimrStallMotTqCmdFild.EngMax = 8.8;
dHiLoadStallLimrStallMotTqCmdFild.InitRowCol = [1  1];


dHiLoadStallLimrStallMotTqLim = DataDict.Display;
dHiLoadStallLimrStallMotTqLim.LongName = 'Stall Motor Torque Limit';
dHiLoadStallLimrStallMotTqLim.Description = [...
  'Torque command limit, prior to rate-limiting.'];
dHiLoadStallLimrStallMotTqLim.DocUnits = 'MotNwtMtr';
dHiLoadStallLimrStallMotTqLim.EngDT = dt.float32;
dHiLoadStallLimrStallMotTqLim.EngMin = 0;
dHiLoadStallLimrStallMotTqLim.EngMax = 8.8;
dHiLoadStallLimrStallMotTqLim.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
StallMotTqCmdFil = DataDict.PIM;
StallMotTqCmdFil.LongName = 'Stall Motor Torque Command Filter';
StallMotTqCmdFil.Description = 'Filter state variable structure for the Stall Motor Torque Command.';
StallMotTqCmdFil.DocUnits = 'Cnt';
StallMotTqCmdFil.EngDT = struct.FilLpRec1;
StallMotTqCmdFil.EngMin = 0;
StallMotTqCmdFil.EngMax = 8.8;
StallMotTqCmdFil.InitRowCol = [1  1];


StallMotTqLimPrev = DataDict.PIM;
StallMotTqLimPrev.LongName = 'Motor Torque Stall Limit Previous';
StallMotTqLimPrev.Description = 'State variable used to rate limit the Motor Torque Stall Limit.';
StallMotTqLimPrev.DocUnits = 'MotNwtMtr';
StallMotTqLimPrev.EngDT = dt.float32;
StallMotTqLimPrev.EngMin = 0;
StallMotTqLimPrev.EngMax = 8.8;
StallMotTqLimPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
