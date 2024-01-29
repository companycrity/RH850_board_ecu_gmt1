%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Apr-2016 14:06:39       %
%                                  Created with tool release: 2.37.0     %
%                                  Synergy file: %version: 3 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: xzb1db %          %
%%-----------------------------------------------------------------------%

SF021A = DataDict.FDD;
SF021A.Version = '1.2.X';
SF021A.LongName = 'Handwheel Angle Trajectory Generation';
SF021A.ShoName  = 'HwAgTrajGenn';
SF021A.DesignASIL = 'QM';
SF021A.Description = [...
  'Generate a position vs. time command from the current handwheel positi' ...
  'on to a specified angle that does not exceed a specified maximum angul' ...
  'ar acceleration and velocity.'];
SF021A.Dependencies = ...
	{'ArchGlbPrm', 'SysGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgTrajGennInit1 = DataDict.Runnable;
HwAgTrajGennInit1.Context = 'Rte';
HwAgTrajGennInit1.TimeStep = 0;
HwAgTrajGennInit1.Description = '';

HwAgTrajGennPer1 = DataDict.Runnable;
HwAgTrajGennPer1.Context = 'Rte';
HwAgTrajGennPer1.TimeStep = 0.002;
HwAgTrajGennPer1.Description = '';

SetTrajTarPrm = DataDict.SrvRunnable;
SetTrajTarPrm.Context = 'Rte';
SetTrajTarPrm.Description = '';
SetTrajTarPrm.Return = DataDict.CSReturn;
SetTrajTarPrm.Return.Type = 'None';
SetTrajTarPrm.Return.Min = [];
SetTrajTarPrm.Return.Max = [];
SetTrajTarPrm.Return.TestTolerance = [];
SetTrajTarPrm.Return.Description = '';
SetTrajTarPrm.Arguments(1) = DataDict.CSArguments;
SetTrajTarPrm.Arguments(1).Name = 'HwAgTrajGennHwAgTar';
SetTrajTarPrm.Arguments(1).EngDT = dt.float32;
SetTrajTarPrm.Arguments(1).EngMin = -800;
SetTrajTarPrm.Arguments(1).EngMax = 800;
SetTrajTarPrm.Arguments(1).Units = 'HwDeg';
SetTrajTarPrm.Arguments(1).Direction = 'In';
SetTrajTarPrm.Arguments(1).InitRowCol = [1  1];
SetTrajTarPrm.Arguments(1).Description = '';
SetTrajTarPrm.Arguments(2) = DataDict.CSArguments;
SetTrajTarPrm.Arguments(2).Name = 'HwAgTrajGennHwVelTar';
SetTrajTarPrm.Arguments(2).EngDT = dt.float32;
SetTrajTarPrm.Arguments(2).EngMin = 10;
SetTrajTarPrm.Arguments(2).EngMax = 1000;
SetTrajTarPrm.Arguments(2).Units = 'HwDegPerSec';
SetTrajTarPrm.Arguments(2).Direction = 'In';
SetTrajTarPrm.Arguments(2).InitRowCol = [1  1];
SetTrajTarPrm.Arguments(2).Description = '';
SetTrajTarPrm.Arguments(3) = DataDict.CSArguments;
SetTrajTarPrm.Arguments(3).Name = 'HwAgTrajGennHwATar';
SetTrajTarPrm.Arguments(3).EngDT = dt.float32;
SetTrajTarPrm.Arguments(3).EngMin = 10;
SetTrajTarPrm.Arguments(3).EngMax = 2000;
SetTrajTarPrm.Arguments(3).Units = 'HwDegPerSecPerSec';
SetTrajTarPrm.Arguments(3).Direction = 'In';
SetTrajTarPrm.Arguments(3).InitRowCol = [1  1];
SetTrajTarPrm.Arguments(3).Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = '';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'HwAgTrajGennPer1'};
HwAg.ReadType = 'Rte';


HwAgTrajGennEna = DataDict.IpSignal;
HwAgTrajGennEna.LongName = 'Handwheel Angle Trajectory Generation Enable';
HwAgTrajGennEna.Description = '';
HwAgTrajGennEna.DocUnits = 'Cnt';
HwAgTrajGennEna.EngDT = dt.lgc;
HwAgTrajGennEna.EngInit = 0;
HwAgTrajGennEna.EngMin = 0;
HwAgTrajGennEna.EngMax = 1;
HwAgTrajGennEna.ReadIn = {'HwAgTrajGennPer1'};
HwAgTrajGennEna.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgTrakgServoCmd = DataDict.OpSignal;
HwAgTrakgServoCmd.LongName = 'Handwheel Angle Tracking Servo Command';
HwAgTrakgServoCmd.Description = [...
  'Time-based handwheel angle command signal in handwheel degree'];
HwAgTrakgServoCmd.DocUnits = 'HwDeg';
HwAgTrakgServoCmd.SwcShoName = 'HwAgTrajGenn';
HwAgTrakgServoCmd.EngDT = dt.float32;
HwAgTrakgServoCmd.EngInit = 0;
HwAgTrakgServoCmd.EngMin = -1440;
HwAgTrakgServoCmd.EngMax = 1440;
HwAgTrakgServoCmd.TestTolerance = 0.04395;
HwAgTrakgServoCmd.WrittenIn = {'HwAgTrajGennPer1'};
HwAgTrakgServoCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
HwATar = DataDict.IRV;
HwATar.LongName = 'Handwheel Acceleration Target';
HwATar.Description = [...
  'Target handwheel acceleration, the value set through engineering inter' ...
  'face'];
HwATar.DocUnits = 'HwDegPerSecPerSec';
HwATar.EngDT = dt.float32;
HwATar.EngInit = 10;
HwATar.EngMin = 10;
HwATar.EngMax = 2000;
HwATar.ReadIn = {'HwAgTrajGennPer1'};
HwATar.WrittenIn = {'SetTrajTarPrm'};


HwAgTar = DataDict.IRV;
HwAgTar.LongName = 'Handwheel Angle Target';
HwAgTar.Description = [...
  'Target handwheel angle, the value set through engineering interface'];
HwAgTar.DocUnits = 'HwDeg';
HwAgTar.EngDT = dt.float32;
HwAgTar.EngInit = 0;
HwAgTar.EngMin = -800;
HwAgTar.EngMax = 800;
HwAgTar.ReadIn = {'HwAgTrajGennPer1'};
HwAgTar.WrittenIn = {'SetTrajTarPrm'};


HwVelTar = DataDict.IRV;
HwVelTar.LongName = 'Handwheel Velocity Target';
HwVelTar.Description = [...
  'Target handwheel velocity, the value set through engineering interface' ...
  ''];
HwVelTar.DocUnits = 'HwDegPerSec';
HwVelTar.EngDT = dt.float32;
HwVelTar.EngInit = 10;
HwVelTar.EngMin = 10;
HwVelTar.EngMax = 1000;
HwVelTar.ReadIn = {'HwAgTrajGennPer1'};
HwVelTar.WrittenIn = {'SetTrajTarPrm'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAgTrajGennAMax = DataDict.Calibration;
HwAgTrajGennAMax.LongName = 'Handwheel Angle Trajectory Generation Acceleration Maximum';
HwAgTrajGennAMax.Description = [...
  'Maximum allowed commanded acceleration'];
HwAgTrajGennAMax.DocUnits = 'HwDegPerSecPerSec';
HwAgTrajGennAMax.EngDT = dt.float32;
HwAgTrajGennAMax.EngVal = 500;
HwAgTrajGennAMax.EngMin = 0.125;
HwAgTrajGennAMax.EngMax = 10000;
HwAgTrajGennAMax.Cardinality = 'Cmn';
HwAgTrajGennAMax.CustomerVisible = false;
HwAgTrajGennAMax.Online = false;
HwAgTrajGennAMax.Impact = 'H';
HwAgTrajGennAMax.TuningOwner = 'CSE';
HwAgTrajGennAMax.GraphLink = {''};
HwAgTrajGennAMax.Monotony = 'None';
HwAgTrajGennAMax.MaxGrad = 0;
HwAgTrajGennAMax.PortName = 'HwAgTrajGennAMax';


HwAgTrajGennAgMax = DataDict.Calibration;
HwAgTrajGennAgMax.LongName = 'Handwheel Angle Trajectory Generation Angle Maximum';
HwAgTrajGennAgMax.Description = 'Maximum allowed commanded position';
HwAgTrajGennAgMax.DocUnits = 'HwDeg';
HwAgTrajGennAgMax.EngDT = dt.float32;
HwAgTrajGennAgMax.EngVal = 100;
HwAgTrajGennAgMax.EngMin = 0;
HwAgTrajGennAgMax.EngMax = 2000;
HwAgTrajGennAgMax.Cardinality = 'Cmn';
HwAgTrajGennAgMax.CustomerVisible = false;
HwAgTrajGennAgMax.Online = false;
HwAgTrajGennAgMax.Impact = 'H';
HwAgTrajGennAgMax.TuningOwner = 'CSE';
HwAgTrajGennAgMax.GraphLink = {''};
HwAgTrajGennAgMax.Monotony = 'None';
HwAgTrajGennAgMax.MaxGrad = 0;
HwAgTrajGennAgMax.PortName = 'HwAgTrajGennAgMax';


HwAgTrajGennVelMax = DataDict.Calibration;
HwAgTrajGennVelMax.LongName = 'Handwheel Angle Trajectory Generation Velocity Maximum';
HwAgTrajGennVelMax.Description = 'Maximum allowed commanded velocity';
HwAgTrajGennVelMax.DocUnits = 'HwDegPerSec';
HwAgTrajGennVelMax.EngDT = dt.float32;
HwAgTrajGennVelMax.EngVal = 50;
HwAgTrajGennVelMax.EngMin = 0.125;
HwAgTrajGennVelMax.EngMax = 1000;
HwAgTrajGennVelMax.Cardinality = 'Cmn';
HwAgTrajGennVelMax.CustomerVisible = false;
HwAgTrajGennVelMax.Online = false;
HwAgTrajGennVelMax.Impact = 'H';
HwAgTrajGennVelMax.TuningOwner = 'CSE';
HwAgTrajGennVelMax.GraphLink = {''};
HwAgTrajGennVelMax.Monotony = 'None';
HwAgTrajGennVelMax.MaxGrad = 0;
HwAgTrajGennVelMax.PortName = 'HwAgTrajGennVelMax';



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
AMax = DataDict.PIM;
AMax.LongName = 'Acceleration Maximum';
AMax.Description = [...
  'State variable of maximum handwheel acceleration desired'];
AMax.DocUnits = 'HwDegPerSecPerSec';
AMax.EngDT = dt.float32;
AMax.EngMin = 0.125;
AMax.EngMax = 10000;
AMax.InitRowCol = [1  1];


CalcFlg = DataDict.PIM;
CalcFlg.LongName = 'Calculation Flag';
CalcFlg.Description = [...
  'State variable of enable flag of the function'];
CalcFlg.DocUnits = 'Cnt';
CalcFlg.EngDT = dt.lgc;
CalcFlg.EngMin = 0;
CalcFlg.EngMax = 1;
CalcFlg.InitRowCol = [1  1];


CmdSt = DataDict.PIM;
CmdSt.LongName = 'Command State';
CmdSt.Description = [...
  'State variable of the current command state'];
CmdSt.DocUnits = 'Cnt';
CmdSt.EngDT = enum.HwAgTrajCmdSt1;
CmdSt.EngMin = HwAgTrajCmdSt1.HWAGTRAJCMDST_WAIT;
CmdSt.EngMax = HwAgTrajCmdSt1.HWAGTRAJCMDST_HLD;
CmdSt.InitRowCol = [1  1];


HwPosnIni = DataDict.PIM;
HwPosnIni.LongName = 'Handwheel Position Initial';
HwPosnIni.Description = [...
  'State variable of initial handwheel position'];
HwPosnIni.DocUnits = 'HwDeg';
HwPosnIni.EngDT = dt.float32;
HwPosnIni.EngMin = -1440;
HwPosnIni.EngMax = 1440;
HwPosnIni.InitRowCol = [1  1];


HwPosnOffs = DataDict.PIM;
HwPosnOffs.LongName = 'Handwheel Position Offset';
HwPosnOffs.Description = [...
  'State variable of handwheel position offset'];
HwPosnOffs.DocUnits = 'HwDeg';
HwPosnOffs.EngDT = dt.float32;
HwPosnOffs.EngMin = -1440;
HwPosnOffs.EngMax = 1440;
HwPosnOffs.InitRowCol = [1  1];


SignHwPosnDelta = DataDict.PIM;
SignHwPosnDelta.LongName = 'Sign Handwheel Position Delta';
SignHwPosnDelta.Description = [...
  'State variable of sign of delta handwheel position'];
SignHwPosnDelta.DocUnits = 'Uls';
SignHwPosnDelta.EngDT = dt.float32;
SignHwPosnDelta.EngMin = -1;
SignHwPosnDelta.EngMax = 1;
SignHwPosnDelta.InitRowCol = [1  1];


TiDeltaA = DataDict.PIM;
TiDeltaA.LongName = 'Time Delta Acceleration';
TiDeltaA.Description = [...
  'State variable of delta time to reach maximum acceleration'];
TiDeltaA.DocUnits = 'Sec';
TiDeltaA.EngDT = dt.float32;
TiDeltaA.EngMin = 0;
TiDeltaA.EngMax = 10000;
TiDeltaA.InitRowCol = [1  1];


TiDeltaVel = DataDict.PIM;
TiDeltaVel.LongName = 'Time Delta Velocity';
TiDeltaVel.Description = [...
  'State variable of delta time to reach maximum velocity'];
TiDeltaVel.DocUnits = 'Sec';
TiDeltaVel.EngDT = dt.float32;
TiDeltaVel.EngMin = 0;
TiDeltaVel.EngMax = 10000;
TiDeltaVel.InitRowCol = [1  1];


TiSt = DataDict.PIM;
TiSt.LongName = 'Time State';
TiSt.Description = [...
  'State variable of duration time for each state'];
TiSt.DocUnits = 'Sec';
TiSt.EngDT = dt.float32;
TiSt.EngMin = 0;
TiSt.EngMax = 10000;
TiSt.InitRowCol = [1  1];


VelMax = DataDict.PIM;
VelMax.LongName = 'Velocity Maximum';
VelMax.Description = [...
  'State variable of maximum handwheel velocity desired'];
VelMax.DocUnits = 'HwDegPerSec';
VelMax.EngDT = dt.float32;
VelMax.EngMin = 0.125;
VelMax.EngMax = 1000;
VelMax.InitRowCol = [1  1];



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


MINATAR_HWDEGPERSECPERSEC_F32 = DataDict.Constant;
MINATAR_HWDEGPERSECPERSEC_F32.LongName = 'Minimum Acceleration Target';
MINATAR_HWDEGPERSECPERSEC_F32.Description = 'Minimum target acceleration value';
MINATAR_HWDEGPERSECPERSEC_F32.DocUnits = 'HwDegPerSecPerSec';
MINATAR_HWDEGPERSECPERSEC_F32.EngDT = dt.float32;
MINATAR_HWDEGPERSECPERSEC_F32.EngVal = 0.125;
MINATAR_HWDEGPERSECPERSEC_F32.Header = '';
MINATAR_HWDEGPERSECPERSEC_F32.Define = 'Local';


MINVELTAR_HWDEGPERSEC_F32 = DataDict.Constant;
MINVELTAR_HWDEGPERSEC_F32.LongName = 'Minimum Velocity Target';
MINVELTAR_HWDEGPERSEC_F32.Description = 'Minimum target velocity value';
MINVELTAR_HWDEGPERSEC_F32.DocUnits = 'HwDegPerSec';
MINVELTAR_HWDEGPERSEC_F32.EngDT = dt.float32;
MINVELTAR_HWDEGPERSEC_F32.EngVal = 0.125;
MINVELTAR_HWDEGPERSEC_F32.Header = '';
MINVELTAR_HWDEGPERSEC_F32.Define = 'Local';


SYSGLBPRM_HWAGHILIM_HWDEG_F32 = DataDict.Constant;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.LongName = 'Handwheel Angle High Limit';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Description = [...
  'Limit on the maximum value allowed for Handwheel Angle.'];
SYSGLBPRM_HWAGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngDT = dt.float32;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngVal = 1440;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Define = 'Global';


SYSGLBPRM_HWAGLOLIM_HWDEG_F32 = DataDict.Constant;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.LongName = 'Handwheel Angle Low Limit';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Description = [...
  'Limit on the minimum value allowed for Handwheel Angle'];
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.EngDT = dt.float32;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.EngVal = -1440;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
