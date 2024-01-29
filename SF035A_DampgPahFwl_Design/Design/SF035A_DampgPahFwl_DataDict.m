%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Feb-2016 16:49:44       %
%                                  Created with tool release: 2.28.0     %
%                                  Synergy file: %version: 2 %           %
%                                  Date Modified: 10-Feb-2016            %
%                                  Derived by: Sneha Pegdal(KPIT)        %
%%-----------------------------------------------------------------------%

SF035A = DataDict.FDD;
SF035A.Version = '1.1.X';
SF035A.LongName = 'Damping Firewall';
SF035A.ShoName  = 'DampgPahFwl';
SF035A.DesignASIL = 'D';
SF035A.Description = [...
  'This is a firewall function applied to motor command functions whose p' ...
  'rimary input is motor velocity.  There are two such functions providin' ...
  'g input, and the method of limiting is customized to each.  Also, ther' ...
  'e is a sub-function to add additional damping into the system when thi' ...
  's or another firewall detects an abnormality in command value.The fire' ...
  'wall boundary limited commands are summed prior to providing the funct' ...
  'ion output.  If detected undesired command behavior persists,the signa' ...
  'l limiting strategy is replaced with implementation of a simple defaul' ...
  't damping table lookup. Switching the limited commands to default tabl' ...
  'e occurs via a Pstep/Nstep counter.'];
SF035A.Dependencies = ...
	{'ArchGlbPrm', 'SysGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DampgPahFwlInit1 = DataDict.Runnable;
DampgPahFwlInit1.Context = 'Rte';
DampgPahFwlInit1.TimeStep = 0;

DampgPahFwlPer1 = DataDict.Runnable;
DampgPahFwlPer1.Context = 'Rte';
DampgPahFwlPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'DampgPahFwlPer1'};
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];

SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'DampgPahFwlInit1','DampgPahFwlPer1'};
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiPahLimrActv = DataDict.IpSignal;
AssiPahLimrActv.LongName = 'Assist Path Limiter Active';
AssiPahLimrActv.DocUnits = 'Uls';
AssiPahLimrActv.EngDT = dt.float32;
AssiPahLimrActv.EngInit = 0;
AssiPahLimrActv.EngMin = 0;
AssiPahLimrActv.EngMax = 1;
AssiPahLimrActv.ReadIn = {'DampgPahFwlPer1'};
AssiPahLimrActv.ReadType = 'Rte';


DampgCmdBas = DataDict.IpSignal;
DampgCmdBas.LongName = 'Damping Command Base';
DampgCmdBas.DocUnits = 'MotNwtMtr';
DampgCmdBas.EngDT = dt.float32;
DampgCmdBas.EngInit = 0;
DampgCmdBas.EngMin = -8.8;
DampgCmdBas.EngMax = 8.8;
DampgCmdBas.ReadIn = {'DampgPahFwlPer1'};
DampgCmdBas.ReadType = 'Rte';


DampgCmdBasDi = DataDict.IpSignal;
DampgCmdBasDi.LongName = 'Damping Command Base Disable';
DampgCmdBasDi.DocUnits = 'Cnt';
DampgCmdBasDi.EngDT = dt.lgc;
DampgCmdBasDi.EngInit = 0;
DampgCmdBasDi.EngMin = 0;
DampgCmdBasDi.EngMax = 1;
DampgCmdBasDi.ReadIn = {'DampgPahFwlPer1'};
DampgCmdBasDi.ReadType = 'Rte';


InertiaCmpVelCmd = DataDict.IpSignal;
InertiaCmpVelCmd.LongName = 'Inertia Compensation Velocity Command';
InertiaCmpVelCmd.DocUnits = 'MotNwtMtr';
InertiaCmpVelCmd.EngDT = dt.float32;
InertiaCmpVelCmd.EngInit = 0;
InertiaCmpVelCmd.EngMin = -8.8;
InertiaCmpVelCmd.EngMax = 8.8;
InertiaCmpVelCmd.ReadIn = {'DampgPahFwlPer1'};
InertiaCmpVelCmd.ReadType = 'Rte';


MfgEnaSt = DataDict.IpSignal;
MfgEnaSt.LongName = 'Manufacturing Enable State';
MfgEnaSt.DocUnits = 'Cnt';
MfgEnaSt.EngDT = enum.MfgEnaSt1;
MfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MfgEnaSt.ReadIn = {'DampgPahFwlPer1'};
MfgEnaSt.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Core Reference Frame';
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1118;
MotVelCrf.EngMax = 1118;
MotVelCrf.ReadIn = {'DampgPahFwlPer1'};
MotVelCrf.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'DampgPahFwlPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DampgCmd = DataDict.OpSignal;
DampgCmd.LongName = 'Damping Command';
DampgCmd.Description = 'Combined motor torque commands.';
DampgCmd.DocUnits = 'MotNwtMtr';
DampgCmd.SwcShoName = 'DampgPahFwl';
DampgCmd.EngDT = dt.float32;
DampgCmd.EngInit = 0;
DampgCmd.EngMin = -8.8;
DampgCmd.EngMax = 8.8;
DampgCmd.TestTolerance = 0.0005;
DampgCmd.WrittenIn = {'DampgPahFwlPer1'};
DampgCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DampgPahFwlActvFwlLpFilFrq = DataDict.Calibration;
DampgPahFwlActvFwlLpFilFrq.LongName = 'Damping Firewall Active LP Cutoff Freq';
DampgPahFwlActvFwlLpFilFrq.Description = [...
  'Low Pass Cutoff Frequency for Damping Firewall Active Output'];
DampgPahFwlActvFwlLpFilFrq.DocUnits = 'Hz';
DampgPahFwlActvFwlLpFilFrq.EngDT = dt.float32;
DampgPahFwlActvFwlLpFilFrq.EngVal = 10;
DampgPahFwlActvFwlLpFilFrq.EngMin = 0.1;
DampgPahFwlActvFwlLpFilFrq.EngMax = 100;
DampgPahFwlActvFwlLpFilFrq.Cardinality = 'Cmn';
DampgPahFwlActvFwlLpFilFrq.CustomerVisible = false;
DampgPahFwlActvFwlLpFilFrq.Online = false;
DampgPahFwlActvFwlLpFilFrq.Impact = 'H';
DampgPahFwlActvFwlLpFilFrq.TuningOwner = 'Safety';
DampgPahFwlActvFwlLpFilFrq.GraphLink = {''};
DampgPahFwlActvFwlLpFilFrq.Monotony = 'None';
DampgPahFwlActvFwlLpFilFrq.MaxGrad = 99.9;
DampgPahFwlActvFwlLpFilFrq.PortName = 'DampgPahFwlActvFwlLpFilFrq';


DampgPahFwlAssiAddlDampgX = DataDict.Calibration;
DampgPahFwlAssiAddlDampgX.LongName = 'Damping Firewall Assist Additional Damping X-Axis';
DampgPahFwlAssiAddlDampgX.Description = [...
  'Damping Firewall Assist Added Damping Table X-axis'];
DampgPahFwlAssiAddlDampgX.DocUnits = 'MotRadPerSec';
DampgPahFwlAssiAddlDampgX.EngDT = dt.u11p5;
DampgPahFwlAssiAddlDampgX.EngVal =  ...
   [0              100              200              300              400              800             1023             1118];
DampgPahFwlAssiAddlDampgX.EngMin = 0;
DampgPahFwlAssiAddlDampgX.EngMax = 1118;
DampgPahFwlAssiAddlDampgX.Cardinality = 'Cmn';
DampgPahFwlAssiAddlDampgX.CustomerVisible = false;
DampgPahFwlAssiAddlDampgX.Online = false;
DampgPahFwlAssiAddlDampgX.Impact = 'H';
DampgPahFwlAssiAddlDampgX.TuningOwner = 'Safety';
DampgPahFwlAssiAddlDampgX.GraphLink = {''};
DampgPahFwlAssiAddlDampgX.Monotony = 'Strictly_Increasing';
DampgPahFwlAssiAddlDampgX.MaxGrad = 1118;
DampgPahFwlAssiAddlDampgX.PortName = 'DampgPahFwlAssiAddlDampgX';


DampgPahFwlAssiAddlDampgY = DataDict.Calibration;
DampgPahFwlAssiAddlDampgY.LongName = 'Damping Firewall Assist Additional Damping Y-Axis';
DampgPahFwlAssiAddlDampgY.Description = [...
  'Damping Firewall Assist Added Damping Table Y-axis'];
DampgPahFwlAssiAddlDampgY.DocUnits = 'MotNwtMtr';
DampgPahFwlAssiAddlDampgY.EngDT = dt.u5p11;
DampgPahFwlAssiAddlDampgY.EngVal =  ...
   [0                3                7                7                7                7                7                7];
DampgPahFwlAssiAddlDampgY.EngMin = 0;
DampgPahFwlAssiAddlDampgY.EngMax = 8.8;
DampgPahFwlAssiAddlDampgY.Cardinality = 'Cmn';
DampgPahFwlAssiAddlDampgY.CustomerVisible = false;
DampgPahFwlAssiAddlDampgY.Online = false;
DampgPahFwlAssiAddlDampgY.Impact = 'H';
DampgPahFwlAssiAddlDampgY.TuningOwner = 'Safety';
DampgPahFwlAssiAddlDampgY.GraphLink = {''};
DampgPahFwlAssiAddlDampgY.Monotony = 'None';
DampgPahFwlAssiAddlDampgY.MaxGrad = 8.8;
DampgPahFwlAssiAddlDampgY.PortName = 'DampgPahFwlAssiAddlDampgY';


DampgPahFwlDampgCmdAddlDampgX = DataDict.Calibration;
DampgPahFwlDampgCmdAddlDampgX.LongName = 'Damping Firewall Damping command Additioanl Damping X-Axis';
DampgPahFwlDampgCmdAddlDampgX.Description = [...
  'Damping Firewall Damp Added Damping Table X-axis'];
DampgPahFwlDampgCmdAddlDampgX.DocUnits = 'MotRadPerSec';
DampgPahFwlDampgCmdAddlDampgX.EngDT = dt.u11p5;
DampgPahFwlDampgCmdAddlDampgX.EngVal =  ...
   [0              100              200              300              400              800             1023             1118];
DampgPahFwlDampgCmdAddlDampgX.EngMin = 0;
DampgPahFwlDampgCmdAddlDampgX.EngMax = 1118;
DampgPahFwlDampgCmdAddlDampgX.Cardinality = 'Cmn';
DampgPahFwlDampgCmdAddlDampgX.CustomerVisible = false;
DampgPahFwlDampgCmdAddlDampgX.Online = false;
DampgPahFwlDampgCmdAddlDampgX.Impact = 'H';
DampgPahFwlDampgCmdAddlDampgX.TuningOwner = 'Safety';
DampgPahFwlDampgCmdAddlDampgX.GraphLink = {''};
DampgPahFwlDampgCmdAddlDampgX.Monotony = 'Strictly_Increasing';
DampgPahFwlDampgCmdAddlDampgX.MaxGrad = 1118;
DampgPahFwlDampgCmdAddlDampgX.PortName = 'DampgPahFwlDampgCmdAddlDampgX';


DampgPahFwlDampgCmdAddlDampgY = DataDict.Calibration;
DampgPahFwlDampgCmdAddlDampgY.LongName = 'Damping Firewall Damping Command Additioanl Damping Y-Axis';
DampgPahFwlDampgCmdAddlDampgY.Description = [...
  'Damping Firewall Assist Added Damping Table Y-axis'];
DampgPahFwlDampgCmdAddlDampgY.DocUnits = 'MotNwtMtr';
DampgPahFwlDampgCmdAddlDampgY.EngDT = dt.u5p11;
DampgPahFwlDampgCmdAddlDampgY.EngVal =  ...
   [0                3                7                7                7                7                7                7];
DampgPahFwlDampgCmdAddlDampgY.EngMin = 0;
DampgPahFwlDampgCmdAddlDampgY.EngMax = 8.8;
DampgPahFwlDampgCmdAddlDampgY.Cardinality = 'Cmn';
DampgPahFwlDampgCmdAddlDampgY.CustomerVisible = false;
DampgPahFwlDampgCmdAddlDampgY.Online = false;
DampgPahFwlDampgCmdAddlDampgY.Impact = 'H';
DampgPahFwlDampgCmdAddlDampgY.TuningOwner = 'Safety';
DampgPahFwlDampgCmdAddlDampgY.GraphLink = {''};
DampgPahFwlDampgCmdAddlDampgY.Monotony = 'None';
DampgPahFwlDampgCmdAddlDampgY.MaxGrad = 8.8;
DampgPahFwlDampgCmdAddlDampgY.PortName = 'DampgPahFwlDampgCmdAddlDampgY';


DampgPahFwlDampgCmdFwlOverLimDiagcFailStep = DataDict.Calibration;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.LongName = 'Damping Command Firewall Over Limit Diagnostic Fail Step';
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.Description = [...
  'Diagnosis Fail Step when Damping Command input crosses boundary limits' ...
  '.Default value of 1311 equates to 50 ms in fail direction'];
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.DocUnits = 'Cnt';
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.EngDT = dt.u16;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.EngVal = 1311;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.EngMin = 0;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.EngMax = 65535;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.Cardinality = 'Cmn';
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.CustomerVisible = false;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.Online = false;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.Impact = 'H';
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.TuningOwner = 'Safety';
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.GraphLink = {''};
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.Monotony = 'None';
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.MaxGrad = 65535;
DampgPahFwlDampgCmdFwlOverLimDiagcFailStep.PortName = 'DampgPahFwlDampgCmdFwlOverLimDiagcFailStep';


DampgPahFwlDampgCmdFwlOverLimDiagcPassStep = DataDict.Calibration;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.LongName = 'Damping Command Firewall Over Limit Diagnostic Pass Step';
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.Description = [...
  'Diagnosis Pass Step when Damping Command Firewall input crosses bounda' ...
  'ry limits.Default value of 1311 equates to 100 ms in pass direction'];
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.DocUnits = 'Cnt';
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.EngDT = dt.u16;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.EngVal = 1311;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.EngMin = 0;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.EngMax = 65535;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.Cardinality = 'Cmn';
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.CustomerVisible = false;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.Online = false;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.Impact = 'H';
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.TuningOwner = 'Safety';
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.GraphLink = {''};
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.Monotony = 'None';
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.MaxGrad = 65535;
DampgPahFwlDampgCmdFwlOverLimDiagcPassStep.PortName = 'DampgPahFwlDampgCmdFwlOverLimDiagcPassStep';


DampgPahFwlDampgCmdLpFilFrq = DataDict.Calibration;
DampgPahFwlDampgCmdLpFilFrq.LongName = 'Damping Firewall Damping command Lowpass Filter Frequency';
DampgPahFwlDampgCmdLpFilFrq.Description = [...
  'Low Pass Cutoff Frequency for boundary phase match with Damping Cmd'];
DampgPahFwlDampgCmdLpFilFrq.DocUnits = 'Hz';
DampgPahFwlDampgCmdLpFilFrq.EngDT = dt.float32;
DampgPahFwlDampgCmdLpFilFrq.EngVal = 50;
DampgPahFwlDampgCmdLpFilFrq.EngMin = 0.1;
DampgPahFwlDampgCmdLpFilFrq.EngMax = 100;
DampgPahFwlDampgCmdLpFilFrq.Cardinality = 'Cmn';
DampgPahFwlDampgCmdLpFilFrq.CustomerVisible = false;
DampgPahFwlDampgCmdLpFilFrq.Online = false;
DampgPahFwlDampgCmdLpFilFrq.Impact = 'H';
DampgPahFwlDampgCmdLpFilFrq.TuningOwner = 'Safety';
DampgPahFwlDampgCmdLpFilFrq.GraphLink = {''};
DampgPahFwlDampgCmdLpFilFrq.Monotony = 'None';
DampgPahFwlDampgCmdLpFilFrq.MaxGrad = 99.9;
DampgPahFwlDampgCmdLpFilFrq.PortName = 'DampgPahFwlDampgCmdLpFilFrq';


DampgPahFwlDampgCmdUpprLimX = DataDict.Calibration;
DampgPahFwlDampgCmdUpprLimX.LongName = 'Damping Firewall Upper Boundary X-Axis';
DampgPahFwlDampgCmdUpprLimX.Description = [...
  'Upper boundary X-axis.  Vehicle speed dependent.  Tuning occurs in qua' ...
  'drants 1 & 2 of motor velocity(X) vs motor torque(Y).'];
DampgPahFwlDampgCmdUpprLimX.DocUnits = 'MotRadPerSec';
DampgPahFwlDampgCmdUpprLimX.EngDT = dt.s11p4;
DampgPahFwlDampgCmdUpprLimX.EngVal =  ...
   [-600             -100                0               40               80              120              200              280              360              480              600];
DampgPahFwlDampgCmdUpprLimX.EngMin = -1118;
DampgPahFwlDampgCmdUpprLimX.EngMax = 1118;
DampgPahFwlDampgCmdUpprLimX.Cardinality = 'Inin';
DampgPahFwlDampgCmdUpprLimX.CustomerVisible = true;
DampgPahFwlDampgCmdUpprLimX.Online = false;
DampgPahFwlDampgCmdUpprLimX.Impact = 'H';
DampgPahFwlDampgCmdUpprLimX.TuningOwner = 'Safety';
DampgPahFwlDampgCmdUpprLimX.GraphLink = {''};
DampgPahFwlDampgCmdUpprLimX.Monotony = 'Strictly_Increasing';
DampgPahFwlDampgCmdUpprLimX.MaxGrad = 2236;
DampgPahFwlDampgCmdUpprLimX.PortName = 'DampgPahFwlDampgCmdUpprLimX';


DampgPahFwlDampgCmdUpprLimY = DataDict.Calibration;
DampgPahFwlDampgCmdUpprLimY.LongName = 'Damping Firewall Upper Boundary Y-Axis';
DampgPahFwlDampgCmdUpprLimY.Description = [...
  'Upper boundary Y-axis.  Vehicle speed dependent.  Tuning occurs in qua' ...
  'drants 1 & 2 of motor velocity(X) vs motor torque(Y).'];
DampgPahFwlDampgCmdUpprLimY.DocUnits = 'MotNwtMtr';
DampgPahFwlDampgCmdUpprLimY.EngDT = dt.s7p8;
DampgPahFwlDampgCmdUpprLimY.EngVal =  ...
   [8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8];
DampgPahFwlDampgCmdUpprLimY.EngMin = -8.8;
DampgPahFwlDampgCmdUpprLimY.EngMax = 8.8;
DampgPahFwlDampgCmdUpprLimY.Cardinality = 'Inin';
DampgPahFwlDampgCmdUpprLimY.CustomerVisible = true;
DampgPahFwlDampgCmdUpprLimY.Online = false;
DampgPahFwlDampgCmdUpprLimY.Impact = 'H';
DampgPahFwlDampgCmdUpprLimY.TuningOwner = 'Safety';
DampgPahFwlDampgCmdUpprLimY.GraphLink = {''};
DampgPahFwlDampgCmdUpprLimY.Monotony = 'None';
DampgPahFwlDampgCmdUpprLimY.MaxGrad = 17.6;
DampgPahFwlDampgCmdUpprLimY.PortName = 'DampgPahFwlDampgCmdUpprLimY';


DampgPahFwlDftDampgX = DataDict.Calibration;
DampgPahFwlDftDampgX.LongName = 'Damping Firewall Default Damping X-Axis';
DampgPahFwlDftDampgX.Description = [...
  'Damping Firewall Default Damping Table X-axis'];
DampgPahFwlDftDampgX.DocUnits = 'MotRadPerSec';
DampgPahFwlDftDampgX.EngDT = dt.u11p5;
DampgPahFwlDftDampgX.EngVal =  ...
   [0               37               74              111              148              185              222              259              296              333              370];
DampgPahFwlDftDampgX.EngMin = 0;
DampgPahFwlDftDampgX.EngMax = 1118;
DampgPahFwlDftDampgX.Cardinality = 'Cmn';
DampgPahFwlDftDampgX.CustomerVisible = false;
DampgPahFwlDftDampgX.Online = false;
DampgPahFwlDftDampgX.Impact = 'H';
DampgPahFwlDftDampgX.TuningOwner = 'Safety';
DampgPahFwlDftDampgX.GraphLink = {''};
DampgPahFwlDftDampgX.Monotony = 'Strictly_Increasing';
DampgPahFwlDftDampgX.MaxGrad = 1118;
DampgPahFwlDftDampgX.PortName = 'DampgPahFwlDftDampgX';


DampgPahFwlDftDampgY = DataDict.Calibration;
DampgPahFwlDftDampgY.LongName = 'Damping Firewall Default Damping Y-Axis';
DampgPahFwlDftDampgY.Description = [...
  'Damping Firewall Default Damping Table X-axis'];
DampgPahFwlDftDampgY.DocUnits = 'MotNwtMtr';
DampgPahFwlDftDampgY.EngDT = dt.u5p11;
DampgPahFwlDftDampgY.EngVal =  ...
   [0          0.04932          0.11328          0.19189          0.28613          0.39404          0.51807          0.65869          0.81201            0.979          1.16016];
DampgPahFwlDftDampgY.EngMin = 0;
DampgPahFwlDftDampgY.EngMax = 8.8;
DampgPahFwlDftDampgY.Cardinality = 'Inin';
DampgPahFwlDftDampgY.CustomerVisible = false;
DampgPahFwlDftDampgY.Online = false;
DampgPahFwlDftDampgY.Impact = 'H';
DampgPahFwlDftDampgY.TuningOwner = 'Safety';
DampgPahFwlDftDampgY.GraphLink = {''};
DampgPahFwlDftDampgY.Monotony = 'Increasing';
DampgPahFwlDftDampgY.MaxGrad = 8.8;
DampgPahFwlDftDampgY.PortName = 'DampgPahFwlDftDampgY';


DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep = DataDict.Calibration;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.LongName = 'Inertia Compensation Command Firewall Over Limit Diagnostic Fail Step';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.Description = [...
  'Diagnosis Fail Step when VBIC Command input crosses boundary limits.De' ...
  'fault value of 1311 equates to 50 ms in fail direction'];
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.DocUnits = 'Cnt';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.EngDT = dt.u16;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.EngVal = 1311;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.EngMin = 0;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.EngMax = 65535;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.Cardinality = 'Cmn';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.CustomerVisible = false;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.Online = false;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.Impact = 'H';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.TuningOwner = 'Safety';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.GraphLink = {''};
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.Monotony = 'None';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.MaxGrad = 65535;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep.PortName = 'DampgPahFwlInertiaCmpCmdFwlOverLimDiagcFailStep';


DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep = DataDict.Calibration;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.LongName = 'Inertia Compensation Command Firewall Over Limit Diagnostic Pass Step';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.Description = [...
  'Diagnosis Pass Step when VBIC Command Firewall input crosses boundary ' ...
  'limits.Default value of 1311 equates to 100 ms in pass direction'];
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.DocUnits = 'Cnt';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.EngDT = dt.u16;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.EngVal = 1311;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.EngMin = 0;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.EngMax = 65535;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.Cardinality = 'Cmn';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.CustomerVisible = false;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.Online = false;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.Impact = 'H';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.TuningOwner = 'Safety';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.GraphLink = {''};
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.Monotony = 'None';
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.MaxGrad = 65535;
DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep.PortName = 'DampgPahFwlInertiaCmpCmdFwlOverLimDiagcPassStep';


DampgPahFwlInertiaCmpLpFilFrq = DataDict.Calibration;
DampgPahFwlInertiaCmpLpFilFrq.LongName = 'Damping Firewall InertiaComp LP Cutoff Freq';
DampgPahFwlInertiaCmpLpFilFrq.Description = [...
  'Low Pass Cutoff Frequency for pre-boundary Inertia Comp command path s' ...
  'plit'];
DampgPahFwlInertiaCmpLpFilFrq.DocUnits = 'Hz';
DampgPahFwlInertiaCmpLpFilFrq.EngDT = dt.float32;
DampgPahFwlInertiaCmpLpFilFrq.EngVal = 50;
DampgPahFwlInertiaCmpLpFilFrq.EngMin = 0.1;
DampgPahFwlInertiaCmpLpFilFrq.EngMax = 100;
DampgPahFwlInertiaCmpLpFilFrq.Cardinality = 'Inin';
DampgPahFwlInertiaCmpLpFilFrq.CustomerVisible = false;
DampgPahFwlInertiaCmpLpFilFrq.Online = false;
DampgPahFwlInertiaCmpLpFilFrq.Impact = 'H';
DampgPahFwlInertiaCmpLpFilFrq.TuningOwner = 'Safety';
DampgPahFwlInertiaCmpLpFilFrq.GraphLink = {''};
DampgPahFwlInertiaCmpLpFilFrq.Monotony = 'None';
DampgPahFwlInertiaCmpLpFilFrq.MaxGrad = 99.9;
DampgPahFwlInertiaCmpLpFilFrq.PortName = 'DampgPahFwlInertiaCmpLpFilFrq';


DampgPahFwlInertiaCmpUpprLimX = DataDict.Calibration;
DampgPahFwlInertiaCmpUpprLimX.LongName = 'Damping Firewall Inertia Comp Firewall Upper Limit X-Axis';
DampgPahFwlInertiaCmpUpprLimX.Description = [...
  'Upper boundary X-axis.  Vehicle speed dependent.  Tuning occurs in qua' ...
  'drants 1 & 2 of motor velocity(X) vs motor torque(Y).'];
DampgPahFwlInertiaCmpUpprLimX.DocUnits = 'MotRadPerSec';
DampgPahFwlInertiaCmpUpprLimX.EngDT = dt.s11p4;
DampgPahFwlInertiaCmpUpprLimX.EngVal =  ...
   [-600             -100                0               40               80              120              200              280              360              480              600];
DampgPahFwlInertiaCmpUpprLimX.EngMin = -1118;
DampgPahFwlInertiaCmpUpprLimX.EngMax = 1118;
DampgPahFwlInertiaCmpUpprLimX.Cardinality = 'Inin';
DampgPahFwlInertiaCmpUpprLimX.CustomerVisible = true;
DampgPahFwlInertiaCmpUpprLimX.Online = false;
DampgPahFwlInertiaCmpUpprLimX.Impact = 'H';
DampgPahFwlInertiaCmpUpprLimX.TuningOwner = 'Safety';
DampgPahFwlInertiaCmpUpprLimX.GraphLink = {''};
DampgPahFwlInertiaCmpUpprLimX.Monotony = 'Strictly_Increasing';
DampgPahFwlInertiaCmpUpprLimX.MaxGrad = 2236;
DampgPahFwlInertiaCmpUpprLimX.PortName = 'DampgPahFwlInertiaCmpUpprLimX';


DampgPahFwlInertiaCmpUpprLimY = DataDict.Calibration;
DampgPahFwlInertiaCmpUpprLimY.LongName = 'Damping Firewall Inertia Comp Upper Boundary Y-Axis';
DampgPahFwlInertiaCmpUpprLimY.Description = [...
  'Upper boundary Y-axis.  Vehicle speed dependent.  Tuning occurs in qua' ...
  'drants 1 & 2 of motor velocity(X) vs motor torque(Y).'];
DampgPahFwlInertiaCmpUpprLimY.DocUnits = 'MotNwtMtr';
DampgPahFwlInertiaCmpUpprLimY.EngDT = dt.s7p8;
DampgPahFwlInertiaCmpUpprLimY.EngVal =  ...
   [8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8];
DampgPahFwlInertiaCmpUpprLimY.EngMin = -8.8;
DampgPahFwlInertiaCmpUpprLimY.EngMax = 8.8;
DampgPahFwlInertiaCmpUpprLimY.Cardinality = 'Inin';
DampgPahFwlInertiaCmpUpprLimY.CustomerVisible = true;
DampgPahFwlInertiaCmpUpprLimY.Online = false;
DampgPahFwlInertiaCmpUpprLimY.Impact = 'H';
DampgPahFwlInertiaCmpUpprLimY.TuningOwner = 'Safety';
DampgPahFwlInertiaCmpUpprLimY.GraphLink = {''};
DampgPahFwlInertiaCmpUpprLimY.Monotony = 'None';
DampgPahFwlInertiaCmpUpprLimY.MaxGrad = 17.6;
DampgPahFwlInertiaCmpUpprLimY.PortName = 'DampgPahFwlInertiaCmpUpprLimY';


DampgPahFwlVehSpd = DataDict.Calibration;
DampgPahFwlVehSpd.LongName = 'Damping Firewall Vehicle Speed';
DampgPahFwlVehSpd.Description = [...
  'Damping Firewall Vehicle Speed Table for Boundary Lookup'];
DampgPahFwlVehSpd.DocUnits = 'Kph';
DampgPahFwlVehSpd.EngDT = dt.u9p7;
DampgPahFwlVehSpd.EngVal =  ...
   [0                2               10               25               50               75              100              150              200              249              250              251];
DampgPahFwlVehSpd.EngMin = 0;
DampgPahFwlVehSpd.EngMax = 511;
DampgPahFwlVehSpd.Cardinality = 'Cmn';
DampgPahFwlVehSpd.CustomerVisible = false;
DampgPahFwlVehSpd.Online = false;
DampgPahFwlVehSpd.Impact = 'H';
DampgPahFwlVehSpd.TuningOwner = 'Safety';
DampgPahFwlVehSpd.GraphLink = {''};
DampgPahFwlVehSpd.Monotony = 'Strictly_Increasing';
DampgPahFwlVehSpd.MaxGrad = 511;
DampgPahFwlVehSpd.PortName = 'DampgPahFwlVehSpd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dDampgPahFwlActvRaw = DataDict.Display;
dDampgPahFwlActvRaw.LongName = 'Damping Firewall Active Raw';
dDampgPahFwlActvRaw.Description = [...
  'Display variable for the Damping FW Active before LP Filtering'];
dDampgPahFwlActvRaw.DocUnits = 'Uls';
dDampgPahFwlActvRaw.EngDT = dt.float32;
dDampgPahFwlActvRaw.EngMin = 0;
dDampgPahFwlActvRaw.EngMax = 1;
dDampgPahFwlActvRaw.InitRowCol = [1  1];


dDampgPahFwlAddDampg = DataDict.Display;
dDampgPahFwlAddDampg.LongName = 'Damping FW Additive Damping';
dDampgPahFwlAddDampg.Description = [...
  'Display variable for the Added Damping Cmd'];
dDampgPahFwlAddDampg.DocUnits = 'MotNwtMtr';
dDampgPahFwlAddDampg.EngDT = dt.float32;
dDampgPahFwlAddDampg.EngMin = -8.8;
dDampgPahFwlAddDampg.EngMax = 8.8;
dDampgPahFwlAddDampg.InitRowCol = [1  1];


dDampgPahFwlDampgCmdLimd = DataDict.Display;
dDampgPahFwlDampgCmdLimd.LongName = 'Damping Firewall Damping Command Limited';
dDampgPahFwlDampgCmdLimd.Description = [...
  'Display variable for the Damping Cmd after firewall boundary applied'];
dDampgPahFwlDampgCmdLimd.DocUnits = 'MotNwtMtr';
dDampgPahFwlDampgCmdLimd.EngDT = dt.float32;
dDampgPahFwlDampgCmdLimd.EngMin = -8.8;
dDampgPahFwlDampgCmdLimd.EngMax = 8.8;
dDampgPahFwlDampgCmdLimd.InitRowCol = [1  1];


dDampgPahFwlDampgCmdLowrLimFild = DataDict.Display;
dDampgPahFwlDampgCmdLowrLimFild.LongName = 'Damping Command Lower Limit Filtered';
dDampgPahFwlDampgCmdLowrLimFild.Description = [...
  'Display variable for the Filtered Damping Cmd Lower Boundary'];
dDampgPahFwlDampgCmdLowrLimFild.DocUnits = 'MotNwtMtr';
dDampgPahFwlDampgCmdLowrLimFild.EngDT = dt.float32;
dDampgPahFwlDampgCmdLowrLimFild.EngMin = -8.8;
dDampgPahFwlDampgCmdLowrLimFild.EngMax = 8.8;
dDampgPahFwlDampgCmdLowrLimFild.InitRowCol = [1  1];


dDampgPahFwlDampgCmdOverLim = DataDict.Display;
dDampgPahFwlDampgCmdOverLim.LongName = 'Damping FW DampCmd Over Limit';
dDampgPahFwlDampgCmdOverLim.Description = [...
  'Display variable for the Damping Cmd Over Boundary Flag'];
dDampgPahFwlDampgCmdOverLim.DocUnits = 'Cnt';
dDampgPahFwlDampgCmdOverLim.EngDT = dt.lgc;
dDampgPahFwlDampgCmdOverLim.EngMin = 0;
dDampgPahFwlDampgCmdOverLim.EngMax = 1;
dDampgPahFwlDampgCmdOverLim.InitRowCol = [1  1];


dDampgPahFwlDampgCmdUpprLimFild = DataDict.Display;
dDampgPahFwlDampgCmdUpprLimFild.LongName = 'Damping Command Upper Limit Filtered';
dDampgPahFwlDampgCmdUpprLimFild.Description = [...
  'Display variable for the Filtered Damping Cmd Upper Limit'];
dDampgPahFwlDampgCmdUpprLimFild.DocUnits = 'MotNwtMtr';
dDampgPahFwlDampgCmdUpprLimFild.EngDT = dt.float32;
dDampgPahFwlDampgCmdUpprLimFild.EngMin = -8.8;
dDampgPahFwlDampgCmdUpprLimFild.EngMax = 8.8;
dDampgPahFwlDampgCmdUpprLimFild.InitRowCol = [1  1];


dDampgPahFwlInertiaCmpHpPah = DataDict.Display;
dDampgPahFwlInertiaCmpHpPah.LongName = 'Inertia Comparison Highpass Path';
dDampgPahFwlInertiaCmpHpPah.Description = [...
  'Display varaiable for Inertia comparison Highpass Filtered Component'];
dDampgPahFwlInertiaCmpHpPah.DocUnits = 'MotNwtMtr';
dDampgPahFwlInertiaCmpHpPah.EngDT = dt.float32;
dDampgPahFwlInertiaCmpHpPah.EngMin = -8.8;
dDampgPahFwlInertiaCmpHpPah.EngMax = 8.8;
dDampgPahFwlInertiaCmpHpPah.InitRowCol = [1  1];


dDampgPahFwlInertiaCmpLowrLimFild = DataDict.Display;
dDampgPahFwlInertiaCmpLowrLimFild.LongName = 'Damping Firewall Inertia Comparison Lower Boundary Filtered';
dDampgPahFwlInertiaCmpLowrLimFild.Description = [...
  'Display variable for the InertiaComp Filtered Lower Boundary'];
dDampgPahFwlInertiaCmpLowrLimFild.DocUnits = 'MotNwtMtr';
dDampgPahFwlInertiaCmpLowrLimFild.EngDT = dt.float32;
dDampgPahFwlInertiaCmpLowrLimFild.EngMin = -8.8;
dDampgPahFwlInertiaCmpLowrLimFild.EngMax = 8.8;
dDampgPahFwlInertiaCmpLowrLimFild.InitRowCol = [1  1];


dDampgPahFwlInertiaCmpLpLimd = DataDict.Display;
dDampgPahFwlInertiaCmpLpLimd.LongName = 'Damping Firewall Inertia Comparison Low Pass Limited';
dDampgPahFwlInertiaCmpLpLimd.Description = [...
  'Display variable for the Low Pass Filtered InertiaComp Cmd after bound' ...
  'ary applied'];
dDampgPahFwlInertiaCmpLpLimd.DocUnits = 'MotNwtMtr';
dDampgPahFwlInertiaCmpLpLimd.EngDT = dt.float32;
dDampgPahFwlInertiaCmpLpLimd.EngMin = -8.8;
dDampgPahFwlInertiaCmpLpLimd.EngMax = 8.8;
dDampgPahFwlInertiaCmpLpLimd.InitRowCol = [1  1];


dDampgPahFwlInertiaCmpLpPah = DataDict.Display;
dDampgPahFwlInertiaCmpLpPah.LongName = 'Inertia Comparison Lowpass Path';
dDampgPahFwlInertiaCmpLpPah.Description = [...
  'Display varaiable for Inertia comparison lowpass Filtered Component'];
dDampgPahFwlInertiaCmpLpPah.DocUnits = 'MotNwtMtr';
dDampgPahFwlInertiaCmpLpPah.EngDT = dt.float32;
dDampgPahFwlInertiaCmpLpPah.EngMin = -8.8;
dDampgPahFwlInertiaCmpLpPah.EngMax = 8.8;
dDampgPahFwlInertiaCmpLpPah.InitRowCol = [1  1];


dDampgPahFwlInertiaCmpOverLim = DataDict.Display;
dDampgPahFwlInertiaCmpOverLim.LongName = 'Damping Firewall Inertia Comparision Over Limit';
dDampgPahFwlInertiaCmpOverLim.Description = [...
  'Display variable for the InertiaComp Cmd Over Boundary Flag'];
dDampgPahFwlInertiaCmpOverLim.DocUnits = 'Cnt';
dDampgPahFwlInertiaCmpOverLim.EngDT = dt.lgc;
dDampgPahFwlInertiaCmpOverLim.EngMin = 0;
dDampgPahFwlInertiaCmpOverLim.EngMax = 1;
dDampgPahFwlInertiaCmpOverLim.InitRowCol = [1  1];


dDampgPahFwlInertiaCmpUpprLimFild = DataDict.Display;
dDampgPahFwlInertiaCmpUpprLimFild.LongName = 'Damping Firewall Inertia Comparison Upper Boundary Filtered';
dDampgPahFwlInertiaCmpUpprLimFild.Description = [...
  'Display variable for the InertiaComp Filtered Upper Boundary'];
dDampgPahFwlInertiaCmpUpprLimFild.DocUnits = 'MotNwtMtr';
dDampgPahFwlInertiaCmpUpprLimFild.EngDT = dt.float32;
dDampgPahFwlInertiaCmpUpprLimFild.EngMin = -8.8;
dDampgPahFwlInertiaCmpUpprLimFild.EngMax = 8.8;
dDampgPahFwlInertiaCmpUpprLimFild.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DampgCmdLpFilLowrLim = DataDict.PIM;
DampgCmdLpFilLowrLim.LongName = 'Damping Command Lowpass Filter Lower Limit';
DampgCmdLpFilLowrLim.Description = [...
  'State variable for Lower Limit of Damping Command Lowpass Filter'];
DampgCmdLpFilLowrLim.DocUnits = 'Uls';
DampgCmdLpFilLowrLim.EngDT = struct.FilLpRec1;
DampgCmdLpFilLowrLim.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
DampgCmdLpFilLowrLim.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
DampgCmdLpFilLowrLim.InitRowCol = [1  1];


DampgCmdLpFilUpprLim = DataDict.PIM;
DampgCmdLpFilUpprLim.LongName = 'Damping Command Lowpass Filter Upper Limit';
DampgCmdLpFilUpprLim.Description = [...
  'State variable for Upper Limit of Damping Command Lowpass Filter'];
DampgCmdLpFilUpprLim.DocUnits = 'Uls';
DampgCmdLpFilUpprLim.EngDT = struct.FilLpRec1;
DampgCmdLpFilUpprLim.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
DampgCmdLpFilUpprLim.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
DampgCmdLpFilUpprLim.InitRowCol = [1  1];


DampgDecPrfmncPrev = DataDict.PIM;
DampgDecPrfmncPrev.LongName = 'Damping Decrease Performance Previous';
DampgDecPrfmncPrev.Description = [...
  'Delayed value of Damping Reduced performance signal'];
DampgDecPrfmncPrev.DocUnits = 'Uls';
DampgDecPrfmncPrev.EngDT = dt.lgc;
DampgDecPrfmncPrev.EngMin = 0;
DampgDecPrfmncPrev.EngMax = 1;
DampgDecPrfmncPrev.InitRowCol = [1  1];


FwlActvLpFil = DataDict.PIM;
FwlActvLpFil.LongName = 'Firewall Active Lowpass Filter';
FwlActvLpFil.Description = [...
  'State variable for Firewall Active Lowpass Filter'];
FwlActvLpFil.DocUnits = 'Uls';
FwlActvLpFil.EngDT = struct.FilLpRec1;
FwlActvLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
FwlActvLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
FwlActvLpFil.InitRowCol = [1  1];


InertiaCmpLpFil = DataDict.PIM;
InertiaCmpLpFil.LongName = 'Inertia Comparision Lowpass Filter';
InertiaCmpLpFil.Description = [...
  'State variable for Inertia Comparision Lowpass Filter'];
InertiaCmpLpFil.DocUnits = 'Uls';
InertiaCmpLpFil.EngDT = struct.FilLpRec1;
InertiaCmpLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
InertiaCmpLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
InertiaCmpLpFil.InitRowCol = [1  1];


InertiaCmpLpFilLowrLim = DataDict.PIM;
InertiaCmpLpFilLowrLim.LongName = 'Inertia Comparision Lowpass Filter Lower Limit';
InertiaCmpLpFilLowrLim.Description = [...
  'State variable for Lower Limit of Inertia Comparision Lowpass Filter'];
InertiaCmpLpFilLowrLim.DocUnits = 'Uls';
InertiaCmpLpFilLowrLim.EngDT = struct.FilLpRec1;
InertiaCmpLpFilLowrLim.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
InertiaCmpLpFilLowrLim.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
InertiaCmpLpFilLowrLim.InitRowCol = [1  1];


InertiaCmpLpFilUpprLim = DataDict.PIM;
InertiaCmpLpFilUpprLim.LongName = 'Inertia Comparision Lowpass Filter Upper Limit';
InertiaCmpLpFilUpprLim.Description = [...
  'State variable for Upper Limit of Inertia Comparision Lowpass Filter'];
InertiaCmpLpFilUpprLim.DocUnits = 'Uls';
InertiaCmpLpFilUpprLim.EngDT = struct.FilLpRec1;
InertiaCmpLpFilUpprLim.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
InertiaCmpLpFilUpprLim.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
InertiaCmpLpFilUpprLim.InitRowCol = [1  1];



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


DMPGCMDREACHED_CNT_U08 = DataDict.Constant;
DMPGCMDREACHED_CNT_U08.LongName = 'Damping Command Reached';
DMPGCMDREACHED_CNT_U08.Description = [...
  'Bit Location of Damping Command boundary Reached'];
DMPGCMDREACHED_CNT_U08.DocUnits = 'Cnt';
DMPGCMDREACHED_CNT_U08.EngDT = dt.u08;
DMPGCMDREACHED_CNT_U08.EngVal = 1;
DMPGCMDREACHED_CNT_U08.Header = 'None';
DMPGCMDREACHED_CNT_U08.Define = 'Local';


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


VBICCMDREACHED_CNT_U08 = DataDict.Constant;
VBICCMDREACHED_CNT_U08.LongName = 'VBIC Command Reached';
VBICCMDREACHED_CNT_U08.Description = [...
  'Bit Location of VBIC Command boundary Reached'];
VBICCMDREACHED_CNT_U08.DocUnits = 'Cnt';
VBICCMDREACHED_CNT_U08.EngDT = dt.u08;
VBICCMDREACHED_CNT_U08.EngVal = 2;
VBICCMDREACHED_CNT_U08.Header = 'None';
VBICCMDREACHED_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
DampgCmdFwlFlt = DataDict.NTC;
DampgCmdFwlFlt.NtcNr = NtcNr1.NTCNR_0X0D4;
DampgCmdFwlFlt.NtcTyp = 'Deb';
DampgCmdFwlFlt.LongName = 'Damping Command Firewall Fault';
DampgCmdFwlFlt.Description = 'Damping Command Firewall Fault NTC is set ';
DampgCmdFwlFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
DampgCmdFwlFlt.NtcStInfo.Bit0Descr = 'Unused';
DampgCmdFwlFlt.NtcStInfo.Bit1Descr = 'Unused';
DampgCmdFwlFlt.NtcStInfo.Bit2Descr = 'Unused';
DampgCmdFwlFlt.NtcStInfo.Bit3Descr = 'Unused';
DampgCmdFwlFlt.NtcStInfo.Bit4Descr = 'Unused';
DampgCmdFwlFlt.NtcStInfo.Bit5Descr = 'Unused';
DampgCmdFwlFlt.NtcStInfo.Bit6Descr = 'Unused';
DampgCmdFwlFlt.NtcStInfo.Bit7Descr = 'Unused';


DampgFwlTouchd = DataDict.NTC;
DampgFwlTouchd.NtcNr = NtcNr1.NTCNR_0X0C5;
DampgFwlTouchd.NtcTyp = 'None';
DampgFwlTouchd.LongName = 'Damping Firewall Touched';
DampgFwlTouchd.Description = 'Damping Firewall Reached NTC is set';
DampgFwlTouchd.NtcStInfo = DataDict.NtcStInfoBitPacked;
DampgFwlTouchd.NtcStInfo.Bit0Descr = 'Damping command boundary reached';
DampgFwlTouchd.NtcStInfo.Bit1Descr = 'VBIC command boundary reached';
DampgFwlTouchd.NtcStInfo.Bit2Descr = 'Unused';
DampgFwlTouchd.NtcStInfo.Bit3Descr = 'Unused';
DampgFwlTouchd.NtcStInfo.Bit4Descr = 'Unused';
DampgFwlTouchd.NtcStInfo.Bit5Descr = 'Unused';
DampgFwlTouchd.NtcStInfo.Bit6Descr = 'Unused';
DampgFwlTouchd.NtcStInfo.Bit7Descr = 'Unused';


InertiaCmpCmdFwlFlt = DataDict.NTC;
InertiaCmpCmdFwlFlt.NtcNr = NtcNr1.NTCNR_0X0D5;
InertiaCmpCmdFwlFlt.NtcTyp = 'Deb';
InertiaCmpCmdFwlFlt.LongName = 'Inertia Compensation Command Firewall Fault';
InertiaCmpCmdFwlFlt.Description = 'VBIC Command Firewall Fault NTC is set ';
InertiaCmpCmdFwlFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
InertiaCmpCmdFwlFlt.NtcStInfo.Bit0Descr = 'Unused';
InertiaCmpCmdFwlFlt.NtcStInfo.Bit1Descr = 'Unused';
InertiaCmpCmdFwlFlt.NtcStInfo.Bit2Descr = 'Unused';
InertiaCmpCmdFwlFlt.NtcStInfo.Bit3Descr = 'Unused';
InertiaCmpCmdFwlFlt.NtcStInfo.Bit4Descr = 'Unused';
InertiaCmpCmdFwlFlt.NtcStInfo.Bit5Descr = 'Unused';
InertiaCmpCmdFwlFlt.NtcStInfo.Bit6Descr = 'Unused';
InertiaCmpCmdFwlFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
