%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 03-Feb-2016 17:20:59       %
%                                  Created with tool release: 2.26.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

DF002A = DataDict.FDD;
DF002A.Version = '1.6.X';
DF002A.LongName = 'Sweep';
DF002A.ShoName  = 'Swp';
DF002A.DesignASIL = 'QM';
DF002A.Description = [...
  'This function lets motor generate a sinusoidal chirp command using eit' ...
  'her a MTR (motor) configuration or HW (handwheel) configuration. This ' ...
  'commanded input along with torque-sensor output is used for system ide' ...
  'ntification of the steering gear.The Sweep function has various states' ...
  '. From the time sweep starts till it ends, "sweep state" passes throug' ...
  'hout these states.'];
DF002A.Dependencies = ...
	{'ArchGlbPrm', 'SysGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SwpInit1 = DataDict.Runnable;
SwpInit1.Context = 'Rte';
SwpInit1.TimeStep = 0;

SwpPer1 = DataDict.Runnable;
SwpPer1.Context = 'Rte';
SwpPer1.TimeStep = 0.002;

SwpPer2 = DataDict.Runnable;
SwpPer2.Context = 'Rte';
SwpPer2.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'SwpPer1'};
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'SwpPer1'};
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'SwpPer1'};
HwTq.ReadType = 'Rte';


MotTqCmd = DataDict.IpSignal;
MotTqCmd.LongName = 'Motor Torque Command';
MotTqCmd.DocUnits = 'MotNwtMtr';
MotTqCmd.EngDT = dt.float32;
MotTqCmd.EngInit = 0;
MotTqCmd.EngMin = -8.8;
MotTqCmd.EngMax = 8.8;
MotTqCmd.ReadIn = {'SwpPer2'};
MotTqCmd.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'SwpPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'SwpPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTqSwp = DataDict.OpSignal;
HwTqSwp.LongName = 'Handwheel Torque Sweep';
HwTqSwp.Description = 'Output Handwheel Torque';
HwTqSwp.DocUnits = 'HwNwtMtr';
HwTqSwp.SwcShoName = 'Swp';
HwTqSwp.EngDT = dt.float32;
HwTqSwp.EngInit = 0;
HwTqSwp.EngMin = -10;
HwTqSwp.EngMax = 10;
HwTqSwp.TestTolerance = 0.0005;
HwTqSwp.WrittenIn = {'SwpPer1'};
HwTqSwp.WriteType = 'Rte';


MotTqCmdSwp = DataDict.OpSignal;
MotTqCmdSwp.LongName = 'Motor Torque Command Sweep';
MotTqCmdSwp.Description = 'Output Motor Torque Command';
MotTqCmdSwp.DocUnits = 'MotNwtMtr';
MotTqCmdSwp.SwcShoName = 'Swp';
MotTqCmdSwp.EngDT = dt.float32;
MotTqCmdSwp.EngInit = 0;
MotTqCmdSwp.EngMin = -8.8;
MotTqCmdSwp.EngMax = 8.8;
MotTqCmdSwp.TestTolerance = 0.0005;
MotTqCmdSwp.WrittenIn = {'SwpPer2'};
MotTqCmdSwp.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
SwpSinTq = DataDict.IRV;
SwpSinTq.LongName = 'Sine Torque';
SwpSinTq.Description = [...
  'Sine of phase angle scaled and modified. Inter Runnable Variable betwe' ...
  'en Periodic 1 and 2'];
SwpSinTq.DocUnits = 'HwNwtMtr';
SwpSinTq.EngDT = dt.float32;
SwpSinTq.EngInit = 0;
SwpSinTq.EngMin = -10;
SwpSinTq.EngMax = 10;
SwpSinTq.ReadIn = {'SwpPer2'};
SwpSinTq.WrittenIn = {'SwpPer1'};



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
SwpCfg = DataDict.PIM;
SwpCfg.LongName = 'Configuration';
SwpCfg.Description = [...
  'User Manipulated Parameter. Switch to select type of sweep between mot' ...
  'or (default) and handwheel configuration'];
SwpCfg.DocUnits = 'Cnt';
SwpCfg.EngDT = dt.u16;
SwpCfg.EngMin = 1;
SwpCfg.EngMax = 2;
SwpCfg.InitRowCol = [1  1];


SwpCosTq = DataDict.PIM;
SwpCosTq.LongName = 'Cosine Torque';
SwpCosTq.Description = [...
  'Cosine of phase angle scaled and modified. This signal is used by eToo' ...
  'l for post-processing data to get frequency response'];
SwpCosTq.DocUnits = 'HwNwtMtr';
SwpCosTq.EngDT = dt.float32;
SwpCosTq.EngMin = -10;
SwpCosTq.EngMax = 10;
SwpCosTq.InitRowCol = [1  1];


SwpDwellStrtTi = DataDict.PIM;
SwpDwellStrtTi.LongName = 'Dwell Start Time';
SwpDwellStrtTi.Description = [...
  'Reference start time for dwell state'];
SwpDwellStrtTi.DocUnits = 'Cnt';
SwpDwellStrtTi.EngDT = dt.u32;
SwpDwellStrtTi.EngMin = 0;
SwpDwellStrtTi.EngMax = 4294967295;
SwpDwellStrtTi.InitRowCol = [1  1];


SwpDwellTi = DataDict.PIM;
SwpDwellTi.LongName = 'Dwell Time';
SwpDwellTi.Description = [...
  'User Manipulated Parameter.One-dimensional table for dwell time at eac' ...
  'h frequency'];
SwpDwellTi.DocUnits = 'MilliSec';
SwpDwellTi.EngDT = dt.u16p0;
SwpDwellTi.EngMin = 0;
SwpDwellTi.EngMax = 65535;
SwpDwellTi.InitRowCol = [1  100];


SwpFrqIdx = DataDict.PIM;
SwpFrqIdx.LongName = 'Frequency Index';
SwpFrqIdx.Description = 'Index of the Frequency being used.';
SwpFrqIdx.DocUnits = 'Cnt';
SwpFrqIdx.EngDT = dt.u16;
SwpFrqIdx.EngMin = 0;
SwpFrqIdx.EngMax = 100;
SwpFrqIdx.InitRowCol = [1  1];


SwpFrqList = DataDict.PIM;
SwpFrqList.LongName = 'Frequency List';
SwpFrqList.Description = [...
  'User Manipulated Parameter. One-dimensional table for sweep frequencie' ...
  's'];
SwpFrqList.DocUnits = 'Hz';
SwpFrqList.EngDT = dt.float32;
SwpFrqList.EngMin = 0;
SwpFrqList.EngMax = 127;
SwpFrqList.InitRowCol = [1  100];


SwpGain = DataDict.PIM;
SwpGain.LongName = 'Gain';
SwpGain.Description = [...
  'User Manipulated Parameter. For default (MTR) sweep mode, sweep torque' ...
  ' gets multiplied with sweep gain value to get final output motor torqu' ...
  'e'];
SwpGain.DocUnits = 'MotNwtMtrPerHwNwtMtr';
SwpGain.EngDT = dt.float32;
SwpGain.EngMin = 0;
SwpGain.EngMax = 1;
SwpGain.InitRowCol = [1  1];


SwpGenHwTq = DataDict.PIM;
SwpGenHwTq.LongName = 'Generate Handwheel Torque';
SwpGenHwTq.Description = [...
  'User Manipulated Parameter.Starts actual sweep process when activated ' ...
  '(1) and stops sweep process when deactivated (0: default). Also, goes ' ...
  'to 0 value when sweep is complete.'];
SwpGenHwTq.DocUnits = 'Cnt';
SwpGenHwTq.EngDT = dt.lgc;
SwpGenHwTq.EngMin = 0;
SwpGenHwTq.EngMax = 1;
SwpGenHwTq.InitRowCol = [1  1];


SwpInstsFrq = DataDict.PIM;
SwpInstsFrq.LongName = 'Instantaneous Frequency';
SwpInstsFrq.Description = ' Current Frequency of the sinusoid';
SwpInstsFrq.DocUnits = 'Hz';
SwpInstsFrq.EngDT = dt.float32;
SwpInstsFrq.EngMin = 0;
SwpInstsFrq.EngMax = 128;
SwpInstsFrq.InitRowCol = [1  1];


SwpLstStSinArg = DataDict.PIM;
SwpLstStSinArg.LongName = 'Last State Argument';
SwpLstStSinArg.Description = [...
  'Phase angle (from last state) for sin calculation.'];
SwpLstStSinArg.DocUnits = 'MatRad';
SwpLstStSinArg.EngDT = dt.float32;
SwpLstStSinArg.EngMin = 0;
SwpLstStSinArg.EngMax = 11000000;
SwpLstStSinArg.InitRowCol = [1  1];


SwpModEna = DataDict.PIM;
SwpModEna.LongName = 'Mode Enable';
SwpModEna.Description = [...
  'User Manipulated Parameter. Enables the sweep mode when value is one (' ...
  'no assist condition). Value of zero (default) disables sweep mode.'];
SwpModEna.DocUnits = 'Cnt';
SwpModEna.EngDT = dt.lgc;
SwpModEna.EngMin = 0;
SwpModEna.EngMax = 1;
SwpModEna.InitRowCol = [1  1];


SwpOffs = DataDict.PIM;
SwpOffs.LongName = 'Offset';
SwpOffs.Description = [...
  'User Manipulated Parameter.Offset for the generated sweep torque in Hw' ...
  'NwtMtr.'];
SwpOffs.DocUnits = 'HwNwtMtr';
SwpOffs.EngDT = dt.float32;
SwpOffs.EngMin = -10;
SwpOffs.EngMax = 10;
SwpOffs.InitRowCol = [1  1];


SwpSinAmp = DataDict.PIM;
SwpSinAmp.LongName = 'Sine Amplitude';
SwpSinAmp.Description = [...
  'User Manipulated Parameter. Amplitude of the sinusoidal signal in gene' ...
  'rated sweep torque in HwNwtMtr.'];
SwpSinAmp.DocUnits = 'HwNwtMtr';
SwpSinAmp.EngDT = dt.float32;
SwpSinAmp.EngMin = 0;
SwpSinAmp.EngMax = 10;
SwpSinAmp.InitRowCol = [1  1];


SwpSwtSt = DataDict.PIM;
SwpSwtSt.LongName = 'Switch State';
SwpSwtSt.Description = 'Sweep State Counter';
SwpSwtSt.DocUnits = 'Cnt';
SwpSwtSt.EngDT = dt.u16;
SwpSwtSt.EngMin = 0;
SwpSwtSt.EngMax = 5;
SwpSwtSt.InitRowCol = [1  1];


SwpTranStrtTi = DataDict.PIM;
SwpTranStrtTi.LongName = 'Transition Start Time';
SwpTranStrtTi.Description = [...
  'Reference start time for transition state'];
SwpTranStrtTi.DocUnits = 'Cnt';
SwpTranStrtTi.EngDT = dt.u32;
SwpTranStrtTi.EngMin = 0;
SwpTranStrtTi.EngMax = 4294967295;
SwpTranStrtTi.InitRowCol = [1  1];


SwpTranTi = DataDict.PIM;
SwpTranTi.LongName = 'Transition Time';
SwpTranTi.Description = [...
  'User Manipulated Parameter. One-dimensional table for transition time ' ...
  'between the frequencies'];
SwpTranTi.DocUnits = 'MilliSec';
SwpTranTi.EngDT = dt.u16p0;
SwpTranTi.EngMin = 0;
SwpTranTi.EngMax = 65535;
SwpTranTi.InitRowCol = [1  100];


SwpVehSpdChkEna = DataDict.PIM;
SwpVehSpdChkEna.LongName = 'Enable Vehicle Speed Check';
SwpVehSpdChkEna.Description = [...
  'User Manipulated Parameter. Checks if vehicle speed is below maximum a' ...
  'llowed when activated'];
SwpVehSpdChkEna.DocUnits = 'Cnt';
SwpVehSpdChkEna.EngDT = dt.lgc;
SwpVehSpdChkEna.EngMin = 0;
SwpVehSpdChkEna.EngMax = 1;
SwpVehSpdChkEna.InitRowCol = [1  1];


SwpVehSpdMax = DataDict.PIM;
SwpVehSpdMax.LongName = 'Maximum Vehicle Speed';
SwpVehSpdMax.Description = [...
  'User Manipulated Parameter. Vehicle speed (Kph) below which vehicle ca' ...
  'n do sweep process'];
SwpVehSpdMax.DocUnits = 'Kph';
SwpVehSpdMax.EngDT = dt.float32;
SwpVehSpdMax.EngMin = 0;
SwpVehSpdMax.EngMax = 511;
SwpVehSpdMax.InitRowCol = [1  1];



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


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


SWPENA = DataDict.ConfigParam;
SWPENA.LongName = 'SWEEP ENABLE';
SWPENA.Description = [...
  'Configuration Parameter to indicate whether Sweep build or not.1=TRUE ' ...
  '0=FALSE. '];
SWPENA.IsBuildPrm = true;
SWPENA.DocUnits = 'Cnt';
SWPENA.EngDT = dt.lgc;
SWPENA.EngVal = 1;
SWPENA.EngMin = 0;
SWPENA.EngMax = 1;
SWPENA.Header = 'Swp.h';
SWPENA.Define = 'Local';


SWPHWTQHILIM = DataDict.Constant;
SWPHWTQHILIM.LongName = 'Handwheel Torque High Limit';
SWPHWTQHILIM.Description = [...
  'High limit on Handwheel torque output signal'];
SWPHWTQHILIM.DocUnits = 'HwNwtMtr';
SWPHWTQHILIM.EngDT = dt.float32;
SWPHWTQHILIM.EngVal = 10;
SWPHWTQHILIM.Header = 'Swp.h';
SWPHWTQHILIM.Define = 'Local';


SWPHWTQLOLIM = DataDict.Constant;
SWPHWTQLOLIM.LongName = 'Handwheel Torque Low Limit';
SWPHWTQLOLIM.Description = [...
  'Low limit on Handwheel torque output signal'];
SWPHWTQLOLIM.DocUnits = 'HwNwtMtr';
SWPHWTQLOLIM.EngDT = dt.float32;
SWPHWTQLOLIM.EngVal = -10;
SWPHWTQLOLIM.Header = 'Swp.h';
SWPHWTQLOLIM.Define = 'Local';


SWPTIUNITCNVN = DataDict.Constant;
SWPTIUNITCNVN.LongName = 'Time Unit COnversion';
SWPTIUNITCNVN.Description = [...
  'Gain to convert counts to milliseconds'];
SWPTIUNITCNVN.DocUnits = 'MilliSecPerCnt';
SWPTIUNITCNVN.EngDT = dt.float32;
SWPTIUNITCNVN.EngVal = 0.1;
SWPTIUNITCNVN.Header = 'Swp.h';
SWPTIUNITCNVN.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
