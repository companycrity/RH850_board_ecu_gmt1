%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Dec-2016 17:04:08       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

SF051A = DataDict.FDD;
SF051A.Version = '1.5.X';
SF051A.LongName = 'Sensor Offset Learning';
SF051A.ShoName  = 'SnsrOffsLrng';
SF051A.DesignASIL = 'QM';
SF051A.Description = [...
  'SnsrOffsLrng monitors the signals Yaw Rate, Hand wheel Position and ha' ...
  'nd wheel Torque in order to estimate their respective sensor offset.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SnsrOffsLrngInit1 = DataDict.Runnable;
SnsrOffsLrngInit1.Context = 'Rte';
SnsrOffsLrngInit1.TimeStep = 0;
SnsrOffsLrngInit1.Description = 'Init Runnable';

SnsrOffsLrngPer1 = DataDict.Runnable;
SnsrOffsLrngPer1.Context = 'Rte';
SnsrOffsLrngPer1.TimeStep = 0.002;
SnsrOffsLrngPer1.Description = 'Periodic Runnable 1';

SnsrOffsLrngPer2 = DataDict.Runnable;
SnsrOffsLrngPer2.Context = 'Rte';
SnsrOffsLrngPer2.TimeStep = 0.01;
SnsrOffsLrngPer2.Description = 'Periodic Runnable 2';

GetHwAgOffs = DataDict.SrvRunnable;
GetHwAgOffs.Context = 'Rte';
GetHwAgOffs.Description = [...
  'Server runnable to read Handwheel Angle Offset'];
GetHwAgOffs.Return = DataDict.CSReturn;
GetHwAgOffs.Return.Type = 'None';
GetHwAgOffs.Return.Min = [];
GetHwAgOffs.Return.Max = [];
GetHwAgOffs.Return.TestTolerance = [];
GetHwAgOffs.Arguments(1) = DataDict.CSArguments;
GetHwAgOffs.Arguments(1).Name = 'HwAgOffs';
GetHwAgOffs.Arguments(1).EngDT = dt.float32;
GetHwAgOffs.Arguments(1).EngMin = -30;
GetHwAgOffs.Arguments(1).EngMax = 30;
GetHwAgOffs.Arguments(1).TestTolerance = 0.01;
GetHwAgOffs.Arguments(1).Units = 'HwDeg';
GetHwAgOffs.Arguments(1).Direction = 'Out';
GetHwAgOffs.Arguments(1).InitRowCol = [1  1];
GetHwAgOffs.Arguments(1).Description = 'Handwheel Angle Offset';
GetHwAgOffs.Arguments(2) = DataDict.CSArguments;
GetHwAgOffs.Arguments(2).Name = 'HwAgLrngStRst';
GetHwAgOffs.Arguments(2).EngDT = dt.lgc;
GetHwAgOffs.Arguments(2).EngMin = 0;
GetHwAgOffs.Arguments(2).EngMax = 1;
GetHwAgOffs.Arguments(2).TestTolerance = 0;
GetHwAgOffs.Arguments(2).Units = 'Cnt';
GetHwAgOffs.Arguments(2).Direction = 'Out';
GetHwAgOffs.Arguments(2).InitRowCol = [1  1];
GetHwAgOffs.Arguments(2).Description = [...
  'Handwheel Angle Offset Learning State Reset'];

GetHwTqOffs = DataDict.SrvRunnable;
GetHwTqOffs.Context = 'Rte';
GetHwTqOffs.Description = [...
  'Server runnable to read Handwheel Torque Offset'];
GetHwTqOffs.Return = DataDict.CSReturn;
GetHwTqOffs.Return.Type = 'None';
GetHwTqOffs.Return.Min = [];
GetHwTqOffs.Return.Max = [];
GetHwTqOffs.Return.TestTolerance = [];
GetHwTqOffs.Arguments(1) = DataDict.CSArguments;
GetHwTqOffs.Arguments(1).Name = 'HwTqOffs';
GetHwTqOffs.Arguments(1).EngDT = dt.float32;
GetHwTqOffs.Arguments(1).EngMin = -4;
GetHwTqOffs.Arguments(1).EngMax = 4;
GetHwTqOffs.Arguments(1).TestTolerance = 0.001;
GetHwTqOffs.Arguments(1).Units = 'HwNwtMtr';
GetHwTqOffs.Arguments(1).Direction = 'Out';
GetHwTqOffs.Arguments(1).InitRowCol = [1  1];
GetHwTqOffs.Arguments(1).Description = 'Handwheel Torque Offset';
GetHwTqOffs.Arguments(2) = DataDict.CSArguments;
GetHwTqOffs.Arguments(2).Name = 'HwTqLrngStRst';
GetHwTqOffs.Arguments(2).EngDT = dt.lgc;
GetHwTqOffs.Arguments(2).EngMin = 0;
GetHwTqOffs.Arguments(2).EngMax = 1;
GetHwTqOffs.Arguments(2).TestTolerance = 0;
GetHwTqOffs.Arguments(2).Units = 'Cnt';
GetHwTqOffs.Arguments(2).Direction = 'Out';
GetHwTqOffs.Arguments(2).InitRowCol = [1  1];
GetHwTqOffs.Arguments(2).Description = [...
  'Handwheel Torque Offset Learning State Reset'];

GetYawRateOffs = DataDict.SrvRunnable;
GetYawRateOffs.Context = 'Rte';
GetYawRateOffs.Description = [...
  'Server runnable to read Yaw rate Offset'];
GetYawRateOffs.Return = DataDict.CSReturn;
GetYawRateOffs.Return.Type = 'None';
GetYawRateOffs.Return.Min = [];
GetYawRateOffs.Return.Max = [];
GetYawRateOffs.Return.TestTolerance = [];
GetYawRateOffs.Arguments(1) = DataDict.CSArguments;
GetYawRateOffs.Arguments(1).Name = 'VehYawRateOffs';
GetYawRateOffs.Arguments(1).EngDT = dt.float32;
GetYawRateOffs.Arguments(1).EngMin = -20;
GetYawRateOffs.Arguments(1).EngMax = 20;
GetYawRateOffs.Arguments(1).TestTolerance = 0.01;
GetYawRateOffs.Arguments(1).Units = 'VehDegPerSec';
GetYawRateOffs.Arguments(1).Direction = 'Out';
GetYawRateOffs.Arguments(1).InitRowCol = [1  1];
GetYawRateOffs.Arguments(1).Description = 'Vehicle Yaw rate Offset';
GetYawRateOffs.Arguments(2) = DataDict.CSArguments;
GetYawRateOffs.Arguments(2).Name = 'VehYawRateLrngStRst';
GetYawRateOffs.Arguments(2).EngDT = dt.lgc;
GetYawRateOffs.Arguments(2).EngMin = 0;
GetYawRateOffs.Arguments(2).EngMax = 1;
GetYawRateOffs.Arguments(2).TestTolerance = 0;
GetYawRateOffs.Arguments(2).Units = 'Cnt';
GetYawRateOffs.Arguments(2).Direction = 'Out';
GetYawRateOffs.Arguments(2).InitRowCol = [1  1];
GetYawRateOffs.Arguments(2).Description = [...
  'Vehicle Yaw rate Offset Learning State Reset'];

RstHwTq = DataDict.SrvRunnable;
RstHwTq.Context = 'Rte';
RstHwTq.Description = [...
  'Server runnable to reset Handwheel Torque Learned Offset'];
RstHwTq.Return = DataDict.CSReturn;
RstHwTq.Return.Type = 'None';
RstHwTq.Return.Min = [];
RstHwTq.Return.Max = [];
RstHwTq.Return.TestTolerance = [];

RstYawAndAg = DataDict.SrvRunnable;
RstYawAndAg.Context = 'Rte';
RstYawAndAg.Description = [...
  'Server runnable to reset Yaw rate and Handwheel Angle Learned Offsets'];
RstYawAndAg.Return = DataDict.CSReturn;
RstYawAndAg.Return.Type = 'None';
RstYawAndAg.Return.Min = [];
RstYawAndAg.Return.Max = [];
RstYawAndAg.Return.TestTolerance = [];

SetHwAgOffs = DataDict.SrvRunnable;
SetHwAgOffs.Context = 'Rte';
SetHwAgOffs.Description = [...
  'Server runnable to set Handwheel Angle Offset'];
SetHwAgOffs.Return = DataDict.CSReturn;
SetHwAgOffs.Return.Type = 'None';
SetHwAgOffs.Return.Min = [];
SetHwAgOffs.Return.Max = [];
SetHwAgOffs.Return.TestTolerance = [];
SetHwAgOffs.Arguments(1) = DataDict.CSArguments;
SetHwAgOffs.Arguments(1).Name = 'HwAgOffs';
SetHwAgOffs.Arguments(1).EngDT = dt.float32;
SetHwAgOffs.Arguments(1).EngMin = -30;
SetHwAgOffs.Arguments(1).EngMax = 30;
SetHwAgOffs.Arguments(1).Units = 'HwDeg';
SetHwAgOffs.Arguments(1).Direction = 'In';
SetHwAgOffs.Arguments(1).InitRowCol = [1  1];
SetHwAgOffs.Arguments(1).Description = 'Handwheel Angle Offset';
SetHwAgOffs.Arguments(2) = DataDict.CSArguments;
SetHwAgOffs.Arguments(2).Name = 'HwAgLrngStRst';
SetHwAgOffs.Arguments(2).EngDT = dt.lgc;
SetHwAgOffs.Arguments(2).EngMin = 0;
SetHwAgOffs.Arguments(2).EngMax = 1;
SetHwAgOffs.Arguments(2).Units = 'Cnt';
SetHwAgOffs.Arguments(2).Direction = 'In';
SetHwAgOffs.Arguments(2).InitRowCol = [1  1];
SetHwAgOffs.Arguments(2).Description = [...
  'Handwheel Angle Offset Learning State Reset'];

SetHwTqOffs = DataDict.SrvRunnable;
SetHwTqOffs.Context = 'Rte';
SetHwTqOffs.Description = [...
  'Server runnable to set Handwheel Torque Offset'];
SetHwTqOffs.Return = DataDict.CSReturn;
SetHwTqOffs.Return.Type = 'None';
SetHwTqOffs.Return.Min = [];
SetHwTqOffs.Return.Max = [];
SetHwTqOffs.Return.TestTolerance = [];
SetHwTqOffs.Arguments(1) = DataDict.CSArguments;
SetHwTqOffs.Arguments(1).Name = 'HwTqOffs';
SetHwTqOffs.Arguments(1).EngDT = dt.float32;
SetHwTqOffs.Arguments(1).EngMin = -4;
SetHwTqOffs.Arguments(1).EngMax = 4;
SetHwTqOffs.Arguments(1).Units = 'HwNwtMtr';
SetHwTqOffs.Arguments(1).Direction = 'In';
SetHwTqOffs.Arguments(1).InitRowCol = [1  1];
SetHwTqOffs.Arguments(1).Description = 'Handwheel Torque Offset';
SetHwTqOffs.Arguments(2) = DataDict.CSArguments;
SetHwTqOffs.Arguments(2).Name = 'HwTqLrngStRst';
SetHwTqOffs.Arguments(2).EngDT = dt.lgc;
SetHwTqOffs.Arguments(2).EngMin = 0;
SetHwTqOffs.Arguments(2).EngMax = 1;
SetHwTqOffs.Arguments(2).Units = 'Cnt';
SetHwTqOffs.Arguments(2).Direction = 'In';
SetHwTqOffs.Arguments(2).InitRowCol = [1  1];
SetHwTqOffs.Arguments(2).Description = [...
  'Handwheel Torque Offset Learning State Reset'];

SetYawRateOffs = DataDict.SrvRunnable;
SetYawRateOffs.Context = 'Rte';
SetYawRateOffs.Description = [...
  'Server runnable to set Yaw Rate Offset'];
SetYawRateOffs.Return = DataDict.CSReturn;
SetYawRateOffs.Return.Type = 'None';
SetYawRateOffs.Return.Min = [];
SetYawRateOffs.Return.Max = [];
SetYawRateOffs.Return.TestTolerance = [];
SetYawRateOffs.Arguments(1) = DataDict.CSArguments;
SetYawRateOffs.Arguments(1).Name = 'VehYawRateOffs';
SetYawRateOffs.Arguments(1).EngDT = dt.float32;
SetYawRateOffs.Arguments(1).EngMin = -20;
SetYawRateOffs.Arguments(1).EngMax = 20;
SetYawRateOffs.Arguments(1).Units = 'VehDegPerSec';
SetYawRateOffs.Arguments(1).Direction = 'In';
SetYawRateOffs.Arguments(1).InitRowCol = [1  1];
SetYawRateOffs.Arguments(1).Description = 'Vehicle Yaw Rate Offset';
SetYawRateOffs.Arguments(2) = DataDict.CSArguments;
SetYawRateOffs.Arguments(2).Name = 'VehYawRateLrngStRst';
SetYawRateOffs.Arguments(2).EngDT = dt.lgc;
SetYawRateOffs.Arguments(2).EngMin = 0;
SetYawRateOffs.Arguments(2).EngMax = 1;
SetYawRateOffs.Arguments(2).Units = 'Cnt';
SetYawRateOffs.Arguments(2).Direction = 'In';
SetYawRateOffs.Arguments(2).InitRowCol = [1  1];
SetYawRateOffs.Arguments(2).Description = [...
  'Vehicle Yaw Rate Offset Learning State Reset'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'SetHwTqOffs','RstHwTq','SnsrOffsLrngPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'Client definition to return the reference time in counts'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 999;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Return reference time in counts';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'SnsrOffsLrngPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Client definition to determine elapse time'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = '';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Return elapsed time in counts';


SnsrOffsLrnd_GetErrorStatus = DataDict.Client;
SnsrOffsLrnd_GetErrorStatus.CallLocation = {'SnsrOffsLrngInit1'};
SnsrOffsLrnd_GetErrorStatus.Description = [...
  'Client defintion to determine the validity of NVM'];
SnsrOffsLrnd_GetErrorStatus.Return = DataDict.CSReturn;
SnsrOffsLrnd_GetErrorStatus.Return.Type = 'Standard';
SnsrOffsLrnd_GetErrorStatus.Return.Min = 0;
SnsrOffsLrnd_GetErrorStatus.Return.Max = 1;
SnsrOffsLrnd_GetErrorStatus.Return.TestTolerance = 0;
SnsrOffsLrnd_GetErrorStatus.Return.Description = '';
SnsrOffsLrnd_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
SnsrOffsLrnd_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
SnsrOffsLrnd_GetErrorStatus.Arguments(1).EngDT = dt.u08;
SnsrOffsLrnd_GetErrorStatus.Arguments(1).EngMin = 0;
SnsrOffsLrnd_GetErrorStatus.Arguments(1).EngMax = 8;
SnsrOffsLrnd_GetErrorStatus.Arguments(1).TestTolerance = 999;
SnsrOffsLrnd_GetErrorStatus.Arguments(1).Units = 'Cnt';
SnsrOffsLrnd_GetErrorStatus.Arguments(1).Direction = 'Out';
SnsrOffsLrnd_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
SnsrOffsLrnd_GetErrorStatus.Arguments(1).Description = 'Enum to indicate the NVM status';


SnsrOffsLrnd_SetRamBlockStatus = DataDict.Client;
SnsrOffsLrnd_SetRamBlockStatus.CallLocation = {'SnsrOffsLrngInit1','SetYawRateOffs','SetHwTqOffs','SetHwAgOffs','RstYawAndAg','RstHwTq'};
SnsrOffsLrnd_SetRamBlockStatus.Description = [...
  'Client definition to update the NVM during ignition off'];
SnsrOffsLrnd_SetRamBlockStatus.Return = DataDict.CSReturn;
SnsrOffsLrnd_SetRamBlockStatus.Return.Type = 'Standard';
SnsrOffsLrnd_SetRamBlockStatus.Return.Min = 0;
SnsrOffsLrnd_SetRamBlockStatus.Return.Max = 1;
SnsrOffsLrnd_SetRamBlockStatus.Return.TestTolerance = 0;
SnsrOffsLrnd_SetRamBlockStatus.Return.Description = '';
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).EngMin = 0;
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).EngMax = 1;
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).Direction = 'In';
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
SnsrOffsLrnd_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean to indicate whether Nvm block Changed or not'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = [...
  'Handwheel Angle for use by the application'];
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'SnsrOffsLrngPer1','SnsrOffsLrngPer2'};
HwAg.ReadType = 'Rte';


HwAgAuthy = DataDict.IpSignal;
HwAgAuthy.LongName = 'Handwheel Authority';
HwAgAuthy.Description = [...
  'Determines the Handwheel Angle Confidence'];
HwAgAuthy.DocUnits = 'Uls';
HwAgAuthy.EngDT = dt.float32;
HwAgAuthy.EngInit = 0;
HwAgAuthy.EngMin = 0;
HwAgAuthy.EngMax = 1;
HwAgAuthy.ReadIn = {'SnsrOffsLrngPer1','SnsrOffsLrngPer2'};
HwAgAuthy.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = [...
  'Handwheel Torque for use by the application '];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'SnsrOffsLrngPer1','SnsrOffsLrngPer2'};
HwTq.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = [...
  'Handwheel Velocity for use by the application '];
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'SnsrOffsLrngPer1','SnsrOffsLrngPer2'};
HwVel.ReadType = 'Rte';


MotTqCmdCrf = DataDict.IpSignal;
MotTqCmdCrf.LongName = 'Torque Command Core Reference Frame';
MotTqCmdCrf.Description = [...
  'Torque Command Core Reference Frame'];
MotTqCmdCrf.DocUnits = 'MotNwtMtr';
MotTqCmdCrf.EngDT = dt.float32;
MotTqCmdCrf.EngInit = 0;
MotTqCmdCrf.EngMin = -8.8;
MotTqCmdCrf.EngMax = 8.8;
MotTqCmdCrf.ReadIn = {'SnsrOffsLrngPer2'};
MotTqCmdCrf.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Conditioned Value of Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'SnsrOffsLrngPer1','SnsrOffsLrngPer2'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = [...
  'Boolean to indicate Vehicle Speed validity'];
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'SnsrOffsLrngPer1','SnsrOffsLrngPer2'};
VehSpdVld.ReadType = 'Rte';


VehYawRate = DataDict.IpSignal;
VehYawRate.LongName = 'Vehicle Yaw Rate';
VehYawRate.Description = [...
  'Conditioned Value of Vehicle Yaw Rate'];
VehYawRate.DocUnits = 'VehDegPerSec';
VehYawRate.EngDT = dt.float32;
VehYawRate.EngInit = 0;
VehYawRate.EngMin = -120;
VehYawRate.EngMax = 120;
VehYawRate.ReadIn = {'SnsrOffsLrngPer2'};
VehYawRate.ReadType = 'Rte';


VehYawRateVld = DataDict.IpSignal;
VehYawRateVld.LongName = 'Vehicle Yaw Rate Valid';
VehYawRateVld.Description = [...
  'Boolean to indicate Vehicle Yaw rate validity'];
VehYawRateVld.DocUnits = 'Cnt';
VehYawRateVld.EngDT = dt.lgc;
VehYawRateVld.EngInit = 0;
VehYawRateVld.EngMin = 0;
VehYawRateVld.EngMax = 1;
VehYawRateVld.ReadIn = {'SnsrOffsLrngPer2'};
VehYawRateVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgOffs = DataDict.OpSignal;
HwAgOffs.LongName = 'Handwheel Angle Offset';
HwAgOffs.Description = [...
  'Learned bias of handwheel angle sensor. Last value learnt in theprevio' ...
  'us ignition cycle.'];
HwAgOffs.DocUnits = 'HwDeg';
HwAgOffs.SwcShoName = 'SnsrOffsLrng';
HwAgOffs.EngDT = dt.float32;
HwAgOffs.EngInit = 0;
HwAgOffs.EngMin = -30;
HwAgOffs.EngMax = 30;
HwAgOffs.TestTolerance = 0.01;
HwAgOffs.WrittenIn = {'SnsrOffsLrngInit1'};
HwAgOffs.WriteType = 'Rte';


HwTqOffs = DataDict.OpSignal;
HwTqOffs.LongName = 'Handwheel Torque Offset';
HwTqOffs.Description = [...
  'Learned bias of handwheel torque sensor. Last value learnt in theprevi' ...
  'ous ignition cycle.'];
HwTqOffs.DocUnits = 'HwNwtMtr';
HwTqOffs.SwcShoName = 'SnsrOffsLrng';
HwTqOffs.EngDT = dt.float32;
HwTqOffs.EngInit = 0;
HwTqOffs.EngMin = -4;
HwTqOffs.EngMax = 4;
HwTqOffs.TestTolerance = 0.001;
HwTqOffs.WrittenIn = {'SnsrOffsLrngInit1'};
HwTqOffs.WriteType = 'Rte';


VehYawRateOffs = DataDict.OpSignal;
VehYawRateOffs.LongName = 'Vehicle Yaw Rate Offset';
VehYawRateOffs.Description = [...
  'Learned bias of vehicle yaw rate sensor. Last value learnt in theprevi' ...
  'ous ignition cycle.'];
VehYawRateOffs.DocUnits = 'VehDegPerSec';
VehYawRateOffs.SwcShoName = 'SnsrOffsLrng';
VehYawRateOffs.EngDT = dt.float32;
VehYawRateOffs.EngInit = 0;
VehYawRateOffs.EngMin = -20;
VehYawRateOffs.EngMax = 20;
VehYawRateOffs.TestTolerance = 0.01;
VehYawRateOffs.WrittenIn = {'SnsrOffsLrngInit1'};
VehYawRateOffs.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
HwTqLrngSts = DataDict.IRV;
HwTqLrngSts.LongName = 'Handwheel Torque Learning Status';
HwTqLrngSts.Description = [...
  'Provides the learning Status of the HandWheel Torque Offset'];
HwTqLrngSts.DocUnits = 'Cnt';
HwTqLrngSts.EngDT = dt.u08;
HwTqLrngSts.EngInit = 0;
HwTqLrngSts.EngMin = 0;
HwTqLrngSts.EngMax = 4;
HwTqLrngSts.ReadIn = {'SnsrOffsLrngPer2'};
HwTqLrngSts.WrittenIn = {'SnsrOffsLrngPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
SnsrOffsLrngFctEna = DataDict.Calibration;
SnsrOffsLrngFctEna.LongName = 'Learning Function Enable';
SnsrOffsLrngFctEna.Description = [...
  'Enables Offset Learning process for all the offset learnings.'];
SnsrOffsLrngFctEna.DocUnits = 'Cnt';
SnsrOffsLrngFctEna.EngDT = dt.lgc;
SnsrOffsLrngFctEna.EngVal = 0;
SnsrOffsLrngFctEna.EngMin = 0;
SnsrOffsLrngFctEna.EngMax = 1;
SnsrOffsLrngFctEna.Cardinality = 'Cmn';
SnsrOffsLrngFctEna.CustomerVisible = true;
SnsrOffsLrngFctEna.Online = true;
SnsrOffsLrngFctEna.Impact = 'L';
SnsrOffsLrngFctEna.TuningOwner = 'CSE';
SnsrOffsLrngFctEna.GraphLink = {''};
SnsrOffsLrngFctEna.Monotony = 'None';
SnsrOffsLrngFctEna.MaxGrad = 0;
SnsrOffsLrngFctEna.PortName = 'SnsrOffsLrngFctEna';


SnsrOffsLrngHwAgLrngDrvgDstThd = DataDict.Calibration;
SnsrOffsLrngHwAgLrngDrvgDstThd.LongName = 'Handwheel Angle Learning Driving Distance Threshold';
SnsrOffsLrngHwAgLrngDrvgDstThd.Description = [...
  'Distance that needs to be driven straight forward continuously before ' ...
  'enabling HwAg Offset Learning.'];
SnsrOffsLrngHwAgLrngDrvgDstThd.DocUnits = 'Mtr';
SnsrOffsLrngHwAgLrngDrvgDstThd.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngDrvgDstThd.EngVal = 30;
SnsrOffsLrngHwAgLrngDrvgDstThd.EngMin = 0;
SnsrOffsLrngHwAgLrngDrvgDstThd.EngMax = 255;
SnsrOffsLrngHwAgLrngDrvgDstThd.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngDrvgDstThd.CustomerVisible = true;
SnsrOffsLrngHwAgLrngDrvgDstThd.Online = true;
SnsrOffsLrngHwAgLrngDrvgDstThd.Impact = 'L';
SnsrOffsLrngHwAgLrngDrvgDstThd.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngDrvgDstThd.GraphLink = {''};
SnsrOffsLrngHwAgLrngDrvgDstThd.Monotony = 'None';
SnsrOffsLrngHwAgLrngDrvgDstThd.MaxGrad = 0;
SnsrOffsLrngHwAgLrngDrvgDstThd.PortName = 'SnsrOffsLrngHwAgLrngDrvgDstThd';


SnsrOffsLrngHwAgLrngEna = DataDict.Calibration;
SnsrOffsLrngHwAgLrngEna.LongName = 'Handwheel Angle Learning Enable';
SnsrOffsLrngHwAgLrngEna.Description = [...
  'Enables Handwheel Angle Offset Learning.'];
SnsrOffsLrngHwAgLrngEna.DocUnits = 'Cnt';
SnsrOffsLrngHwAgLrngEna.EngDT = dt.lgc;
SnsrOffsLrngHwAgLrngEna.EngVal = 0;
SnsrOffsLrngHwAgLrngEna.EngMin = 0;
SnsrOffsLrngHwAgLrngEna.EngMax = 1;
SnsrOffsLrngHwAgLrngEna.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngEna.CustomerVisible = true;
SnsrOffsLrngHwAgLrngEna.Online = true;
SnsrOffsLrngHwAgLrngEna.Impact = 'H';
SnsrOffsLrngHwAgLrngEna.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngEna.GraphLink = {''};
SnsrOffsLrngHwAgLrngEna.Monotony = 'None';
SnsrOffsLrngHwAgLrngEna.MaxGrad = 0;
SnsrOffsLrngHwAgLrngEna.PortName = 'SnsrOffsLrngHwAgLrngEna';


SnsrOffsLrngHwAgLrngHwVelThd = DataDict.Calibration;
SnsrOffsLrngHwAgLrngHwVelThd.LongName = 'Handwheel Angle Learning Handwheel Velocity Threshold';
SnsrOffsLrngHwAgLrngHwVelThd.Description = [...
  'Maximum Handwheel Velocity to detect driving straight condition.'];
SnsrOffsLrngHwAgLrngHwVelThd.DocUnits = 'HwRadPerSec';
SnsrOffsLrngHwAgLrngHwVelThd.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngHwVelThd.EngVal = 0.25;
SnsrOffsLrngHwAgLrngHwVelThd.EngMin = 0;
SnsrOffsLrngHwAgLrngHwVelThd.EngMax = 31;
SnsrOffsLrngHwAgLrngHwVelThd.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngHwVelThd.CustomerVisible = true;
SnsrOffsLrngHwAgLrngHwVelThd.Online = true;
SnsrOffsLrngHwAgLrngHwVelThd.Impact = 'M';
SnsrOffsLrngHwAgLrngHwVelThd.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngHwVelThd.GraphLink = {''};
SnsrOffsLrngHwAgLrngHwVelThd.Monotony = 'None';
SnsrOffsLrngHwAgLrngHwVelThd.MaxGrad = 0;
SnsrOffsLrngHwAgLrngHwVelThd.PortName = 'SnsrOffsLrngHwAgLrngHwVelThd';


SnsrOffsLrngHwAgLrngSysTqThd = DataDict.Calibration;
SnsrOffsLrngHwAgLrngSysTqThd.LongName = 'Handwheel Angle Learning System Torque Threshold';
SnsrOffsLrngHwAgLrngSysTqThd.Description = [...
  'Maximum System Torque to detect driving straight condition. NOTE: To b' ...
  'e calibrated wide. Tight threshold is applied as validity condition.'];
SnsrOffsLrngHwAgLrngSysTqThd.DocUnits = 'HwNwtMtr';
SnsrOffsLrngHwAgLrngSysTqThd.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngSysTqThd.EngVal = 30;
SnsrOffsLrngHwAgLrngSysTqThd.EngMin = 0;
SnsrOffsLrngHwAgLrngSysTqThd.EngMax = 255;
SnsrOffsLrngHwAgLrngSysTqThd.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngSysTqThd.CustomerVisible = true;
SnsrOffsLrngHwAgLrngSysTqThd.Online = true;
SnsrOffsLrngHwAgLrngSysTqThd.Impact = 'L';
SnsrOffsLrngHwAgLrngSysTqThd.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngSysTqThd.GraphLink = {''};
SnsrOffsLrngHwAgLrngSysTqThd.Monotony = 'None';
SnsrOffsLrngHwAgLrngSysTqThd.MaxGrad = 0;
SnsrOffsLrngHwAgLrngSysTqThd.PortName = 'SnsrOffsLrngHwAgLrngSysTqThd';


SnsrOffsLrngHwAgLrngSysTqThdMed = DataDict.Calibration;
SnsrOffsLrngHwAgLrngSysTqThdMed.LongName = 'Handwheel Angle Learning System Torque Threshold Medium';
SnsrOffsLrngHwAgLrngSysTqThdMed.Description = [...
  'Maximum System Torque (absolute value) to validate Handwheel Angle Off' ...
  'set estimations when the Handwheel Torque sensor offset is known to be' ...
  ' close to zero Nm.'];
SnsrOffsLrngHwAgLrngSysTqThdMed.DocUnits = 'HwNwtMtr';
SnsrOffsLrngHwAgLrngSysTqThdMed.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngSysTqThdMed.EngVal = 3;
SnsrOffsLrngHwAgLrngSysTqThdMed.EngMin = 0;
SnsrOffsLrngHwAgLrngSysTqThdMed.EngMax = 63;
SnsrOffsLrngHwAgLrngSysTqThdMed.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngSysTqThdMed.CustomerVisible = false;
SnsrOffsLrngHwAgLrngSysTqThdMed.Online = true;
SnsrOffsLrngHwAgLrngSysTqThdMed.Impact = 'L';
SnsrOffsLrngHwAgLrngSysTqThdMed.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngSysTqThdMed.GraphLink = {''};
SnsrOffsLrngHwAgLrngSysTqThdMed.Monotony = 'None';
SnsrOffsLrngHwAgLrngSysTqThdMed.MaxGrad = 0;
SnsrOffsLrngHwAgLrngSysTqThdMed.PortName = 'SnsrOffsLrngHwAgLrngSysTqThdMed';


SnsrOffsLrngHwAgLrngSysTqThdTrustd = DataDict.Calibration;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.LongName = 'Handwheel Angle Learning System Torque Threshold Trusted';
SnsrOffsLrngHwAgLrngSysTqThdTrustd.Description = [...
  'Maximum System Torque (absolute value) to validate Handwheel Angle Off' ...
  'set estimations when the Handwheel Torque sensor offset is learned.'];
SnsrOffsLrngHwAgLrngSysTqThdTrustd.DocUnits = 'HwNwtMtr';
SnsrOffsLrngHwAgLrngSysTqThdTrustd.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.EngVal = 1;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.EngMin = 0;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.EngMax = 4;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngSysTqThdTrustd.CustomerVisible = false;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.Online = true;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.Impact = 'H';
SnsrOffsLrngHwAgLrngSysTqThdTrustd.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngSysTqThdTrustd.GraphLink = {''};
SnsrOffsLrngHwAgLrngSysTqThdTrustd.Monotony = 'None';
SnsrOffsLrngHwAgLrngSysTqThdTrustd.MaxGrad = 0;
SnsrOffsLrngHwAgLrngSysTqThdTrustd.PortName = 'SnsrOffsLrngHwAgLrngSysTqThdTrustd';


SnsrOffsLrngHwAgLrngSysTqThdWide = DataDict.Calibration;
SnsrOffsLrngHwAgLrngSysTqThdWide.LongName = 'Handwheel Angle Learning System Torque Threshold Wide';
SnsrOffsLrngHwAgLrngSysTqThdWide.Description = [...
  'Maximum System Torque (absolute value) to validate Handwheel Angle Off' ...
  'set estimations when the Handwheel Torque sensor offset is unknown.'];
SnsrOffsLrngHwAgLrngSysTqThdWide.DocUnits = 'HwNwtMtr';
SnsrOffsLrngHwAgLrngSysTqThdWide.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngSysTqThdWide.EngVal = 20;
SnsrOffsLrngHwAgLrngSysTqThdWide.EngMin = 0;
SnsrOffsLrngHwAgLrngSysTqThdWide.EngMax = 255;
SnsrOffsLrngHwAgLrngSysTqThdWide.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngSysTqThdWide.CustomerVisible = false;
SnsrOffsLrngHwAgLrngSysTqThdWide.Online = true;
SnsrOffsLrngHwAgLrngSysTqThdWide.Impact = 'L';
SnsrOffsLrngHwAgLrngSysTqThdWide.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngSysTqThdWide.GraphLink = {''};
SnsrOffsLrngHwAgLrngSysTqThdWide.Monotony = 'None';
SnsrOffsLrngHwAgLrngSysTqThdWide.MaxGrad = 0;
SnsrOffsLrngHwAgLrngSysTqThdWide.PortName = 'SnsrOffsLrngHwAgLrngSysTqThdWide';


SnsrOffsLrngHwAgLrngTi = DataDict.Calibration;
SnsrOffsLrngHwAgLrngTi.LongName = 'Handwheel Angle Learning Time';
SnsrOffsLrngHwAgLrngTi.Description = [...
  'Amount of time that the algorithm takes to correctly estimate (learn) ' ...
  'the Handwheel Angle signal Offset. NOTE: The lower amount of time, the' ...
  ' faster the learning, the less accurate the estimation.  EngMin of 0.0' ...
  '3 approaches Nyquist of filter.  EngMax of 28800 = 8 hrs.'];
SnsrOffsLrngHwAgLrngTi.DocUnits = 'Sec';
SnsrOffsLrngHwAgLrngTi.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngTi.EngVal = 1000;
SnsrOffsLrngHwAgLrngTi.EngMin = 0.03;
SnsrOffsLrngHwAgLrngTi.EngMax = 28800;
SnsrOffsLrngHwAgLrngTi.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngTi.CustomerVisible = true;
SnsrOffsLrngHwAgLrngTi.Online = false;
SnsrOffsLrngHwAgLrngTi.Impact = 'H';
SnsrOffsLrngHwAgLrngTi.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngTi.GraphLink = {''};
SnsrOffsLrngHwAgLrngTi.Monotony = 'None';
SnsrOffsLrngHwAgLrngTi.MaxGrad = 0;
SnsrOffsLrngHwAgLrngTi.PortName = 'SnsrOffsLrngHwAgLrngTi';


SnsrOffsLrngHwAgLrngVehSpdThd = DataDict.Calibration;
SnsrOffsLrngHwAgLrngVehSpdThd.LongName = 'Handwheel Angle Learning Vehicle Speed Threshold';
SnsrOffsLrngHwAgLrngVehSpdThd.Description = [...
  'Minimum Vehicle Speed to detect the driving straight condition.'];
SnsrOffsLrngHwAgLrngVehSpdThd.DocUnits = 'Kph';
SnsrOffsLrngHwAgLrngVehSpdThd.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngVehSpdThd.EngVal = 60;
SnsrOffsLrngHwAgLrngVehSpdThd.EngMin = 10;
SnsrOffsLrngHwAgLrngVehSpdThd.EngMax = 511;
SnsrOffsLrngHwAgLrngVehSpdThd.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngVehSpdThd.CustomerVisible = true;
SnsrOffsLrngHwAgLrngVehSpdThd.Online = true;
SnsrOffsLrngHwAgLrngVehSpdThd.Impact = 'L';
SnsrOffsLrngHwAgLrngVehSpdThd.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngVehSpdThd.GraphLink = {''};
SnsrOffsLrngHwAgLrngVehSpdThd.Monotony = 'None';
SnsrOffsLrngHwAgLrngVehSpdThd.MaxGrad = 0;
SnsrOffsLrngHwAgLrngVehSpdThd.PortName = 'SnsrOffsLrngHwAgLrngVehSpdThd';


SnsrOffsLrngHwAgLrngYawOffsDbnd = DataDict.Calibration;
SnsrOffsLrngHwAgLrngYawOffsDbnd.LongName = 'Handwheel Angle Learning Yaw Rate Offset Deadband';
SnsrOffsLrngHwAgLrngYawOffsDbnd.Description = [...
  'Deadband allowed for the Learned Yaw rate Offset to change without res' ...
  'etting the Hand wheel Angle Learning.'];
SnsrOffsLrngHwAgLrngYawOffsDbnd.DocUnits = 'VehDegPerSec';
SnsrOffsLrngHwAgLrngYawOffsDbnd.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngYawOffsDbnd.EngVal = 0.1;
SnsrOffsLrngHwAgLrngYawOffsDbnd.EngMin = 0;
SnsrOffsLrngHwAgLrngYawOffsDbnd.EngMax = 20;
SnsrOffsLrngHwAgLrngYawOffsDbnd.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngYawOffsDbnd.CustomerVisible = true;
SnsrOffsLrngHwAgLrngYawOffsDbnd.Online = true;
SnsrOffsLrngHwAgLrngYawOffsDbnd.Impact = 'M';
SnsrOffsLrngHwAgLrngYawOffsDbnd.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngYawOffsDbnd.GraphLink = {''};
SnsrOffsLrngHwAgLrngYawOffsDbnd.Monotony = 'None';
SnsrOffsLrngHwAgLrngYawOffsDbnd.MaxGrad = 0;
SnsrOffsLrngHwAgLrngYawOffsDbnd.PortName = 'SnsrOffsLrngHwAgLrngYawOffsDbnd';


SnsrOffsLrngHwAgLrngYawRateThd = DataDict.Calibration;
SnsrOffsLrngHwAgLrngYawRateThd.LongName = 'Handwheel Angle Learning Yaw Rate Threshold';
SnsrOffsLrngHwAgLrngYawRateThd.Description = [...
  'HwAgLrng. Enabler. Maximum Yaw rate to detect driving straight conditi' ...
  'on.'];
SnsrOffsLrngHwAgLrngYawRateThd.DocUnits = 'VehDegPerSec';
SnsrOffsLrngHwAgLrngYawRateThd.EngDT = dt.float32;
SnsrOffsLrngHwAgLrngYawRateThd.EngVal = 0;
SnsrOffsLrngHwAgLrngYawRateThd.EngMin = 0;
SnsrOffsLrngHwAgLrngYawRateThd.EngMax = 120;
SnsrOffsLrngHwAgLrngYawRateThd.Cardinality = 'Cmn';
SnsrOffsLrngHwAgLrngYawRateThd.CustomerVisible = true;
SnsrOffsLrngHwAgLrngYawRateThd.Online = true;
SnsrOffsLrngHwAgLrngYawRateThd.Impact = 'M';
SnsrOffsLrngHwAgLrngYawRateThd.TuningOwner = 'CSE';
SnsrOffsLrngHwAgLrngYawRateThd.GraphLink = {''};
SnsrOffsLrngHwAgLrngYawRateThd.Monotony = 'None';
SnsrOffsLrngHwAgLrngYawRateThd.MaxGrad = 0;
SnsrOffsLrngHwAgLrngYawRateThd.PortName = 'SnsrOffsLrngHwAgLrngYawRateThd';


SnsrOffsLrngHwAgOffsLim = DataDict.Calibration;
SnsrOffsLrngHwAgOffsLim.LongName = 'Handwheel Angle Offset Limit';
SnsrOffsLrngHwAgOffsLim.Description = [...
  'Storing Limit. Maximum value that can be stored as Handwheel Angle Off' ...
  'set. NOTE: Safety limitation before correcting Handwheel Angle signal ' ...
  'is also applied on the Handwheel angle Offset. Storing Limit and Safet' ...
  'y Limit might differ'];
SnsrOffsLrngHwAgOffsLim.DocUnits = 'HwDeg';
SnsrOffsLrngHwAgOffsLim.EngDT = dt.float32;
SnsrOffsLrngHwAgOffsLim.EngVal = 5;
SnsrOffsLrngHwAgOffsLim.EngMin = 0;
SnsrOffsLrngHwAgOffsLim.EngMax = 30;
SnsrOffsLrngHwAgOffsLim.Cardinality = 'Cmn';
SnsrOffsLrngHwAgOffsLim.CustomerVisible = true;
SnsrOffsLrngHwAgOffsLim.Online = true;
SnsrOffsLrngHwAgOffsLim.Impact = 'M';
SnsrOffsLrngHwAgOffsLim.TuningOwner = 'CSE';
SnsrOffsLrngHwAgOffsLim.GraphLink = {''};
SnsrOffsLrngHwAgOffsLim.Monotony = 'None';
SnsrOffsLrngHwAgOffsLim.MaxGrad = 0;
SnsrOffsLrngHwAgOffsLim.PortName = 'SnsrOffsLrngHwAgOffsLim';


SnsrOffsLrngHwTqLrngEna = DataDict.Calibration;
SnsrOffsLrngHwTqLrngEna.LongName = 'Handwheel Torque Learning Enable';
SnsrOffsLrngHwTqLrngEna.Description = [...
  'Enables the Handwheel Torque Learning process'];
SnsrOffsLrngHwTqLrngEna.DocUnits = 'Cnt';
SnsrOffsLrngHwTqLrngEna.EngDT = dt.lgc;
SnsrOffsLrngHwTqLrngEna.EngVal = 0;
SnsrOffsLrngHwTqLrngEna.EngMin = 0;
SnsrOffsLrngHwTqLrngEna.EngMax = 1;
SnsrOffsLrngHwTqLrngEna.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngEna.CustomerVisible = true;
SnsrOffsLrngHwTqLrngEna.Online = true;
SnsrOffsLrngHwTqLrngEna.Impact = 'L';
SnsrOffsLrngHwTqLrngEna.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngEna.GraphLink = {''};
SnsrOffsLrngHwTqLrngEna.Monotony = 'None';
SnsrOffsLrngHwTqLrngEna.MaxGrad = 0;
SnsrOffsLrngHwTqLrngEna.PortName = 'SnsrOffsLrngHwTqLrngEna';


SnsrOffsLrngHwTqLrngEnaTiThd = DataDict.Calibration;
SnsrOffsLrngHwTqLrngEnaTiThd.LongName = 'Handwheel Torque Learning Enable Time Threshold';
SnsrOffsLrngHwTqLrngEnaTiThd.Description = [...
  'Minimum amount of time that the Hanwheel Torque Learning conditions ne' ...
  'ed to be true uninterruptedly to actually enable HwTq Offset Learning ' ...
  'process.'];
SnsrOffsLrngHwTqLrngEnaTiThd.DocUnits = 'MilliSec';
SnsrOffsLrngHwTqLrngEnaTiThd.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngEnaTiThd.EngVal = 500;
SnsrOffsLrngHwTqLrngEnaTiThd.EngMin = 0;
SnsrOffsLrngHwTqLrngEnaTiThd.EngMax = 65535;
SnsrOffsLrngHwTqLrngEnaTiThd.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngEnaTiThd.CustomerVisible = false;
SnsrOffsLrngHwTqLrngEnaTiThd.Online = true;
SnsrOffsLrngHwTqLrngEnaTiThd.Impact = 'L';
SnsrOffsLrngHwTqLrngEnaTiThd.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngEnaTiThd.GraphLink = {''};
SnsrOffsLrngHwTqLrngEnaTiThd.Monotony = 'None';
SnsrOffsLrngHwTqLrngEnaTiThd.MaxGrad = 0;
SnsrOffsLrngHwTqLrngEnaTiThd.PortName = 'SnsrOffsLrngHwTqLrngEnaTiThd';


SnsrOffsLrngHwTqLrngHwAgDbnd = DataDict.Calibration;
SnsrOffsLrngHwTqLrngHwAgDbnd.LongName = 'Handwheel Torque Learning Handwheel Angle Deadband';
SnsrOffsLrngHwTqLrngHwAgDbnd.Description = [...
  'Minimum amount of Handhwheel degrees that the handwheel needs to move ' ...
  'in order to enable again the HwTq Offset Learning process.'];
SnsrOffsLrngHwTqLrngHwAgDbnd.DocUnits = 'HwDeg';
SnsrOffsLrngHwTqLrngHwAgDbnd.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngHwAgDbnd.EngVal = 0.3;
SnsrOffsLrngHwTqLrngHwAgDbnd.EngMin = 0.3;
SnsrOffsLrngHwTqLrngHwAgDbnd.EngMax = 1440;
SnsrOffsLrngHwTqLrngHwAgDbnd.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngHwAgDbnd.CustomerVisible = false;
SnsrOffsLrngHwTqLrngHwAgDbnd.Online = true;
SnsrOffsLrngHwTqLrngHwAgDbnd.Impact = 'H';
SnsrOffsLrngHwTqLrngHwAgDbnd.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngHwAgDbnd.GraphLink = {''};
SnsrOffsLrngHwTqLrngHwAgDbnd.Monotony = 'None';
SnsrOffsLrngHwTqLrngHwAgDbnd.MaxGrad = 0;
SnsrOffsLrngHwTqLrngHwAgDbnd.PortName = 'SnsrOffsLrngHwTqLrngHwAgDbnd';


SnsrOffsLrngHwTqLrngHwAgThd = DataDict.Calibration;
SnsrOffsLrngHwTqLrngHwAgThd.LongName = 'Hanwheel Torque Learning Handwheel Angle Threshold';
SnsrOffsLrngHwTqLrngHwAgThd.Description = [...
  'Maximum Handhwheel Angle (absolute value) to enable HwTq Offset Learni' ...
  'ng process. NOTE: Changing this threshold might affect the Learning er' ...
  'ror of the HwTq Offset. It is recommended to consult the function owne' ...
  'r for guidance.'];
SnsrOffsLrngHwTqLrngHwAgThd.DocUnits = 'HwDeg';
SnsrOffsLrngHwTqLrngHwAgThd.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngHwAgThd.EngVal = 45;
SnsrOffsLrngHwTqLrngHwAgThd.EngMin = 0;
SnsrOffsLrngHwTqLrngHwAgThd.EngMax = 180;
SnsrOffsLrngHwTqLrngHwAgThd.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngHwAgThd.CustomerVisible = false;
SnsrOffsLrngHwTqLrngHwAgThd.Online = true;
SnsrOffsLrngHwTqLrngHwAgThd.Impact = 'H';
SnsrOffsLrngHwTqLrngHwAgThd.TuningOwner = 'FDD';
SnsrOffsLrngHwTqLrngHwAgThd.GraphLink = {''};
SnsrOffsLrngHwTqLrngHwAgThd.Monotony = 'None';
SnsrOffsLrngHwTqLrngHwAgThd.MaxGrad = 0;
SnsrOffsLrngHwTqLrngHwAgThd.PortName = 'SnsrOffsLrngHwTqLrngHwAgThd';


SnsrOffsLrngHwTqLrngHwTqThd = DataDict.Calibration;
SnsrOffsLrngHwTqLrngHwTqThd.LongName = 'Hanwheel Torque Learning Handwheel Torque Threshold';
SnsrOffsLrngHwTqLrngHwTqThd.Description = [...
  'Maximum Handwheel Torque (absolute value) to enable HwTq Offset Learni' ...
  'ng process. NOTE: This threshold needs to be much greater than the Lea' ...
  'rned HwTq Offset Limit.'];
SnsrOffsLrngHwTqLrngHwTqThd.DocUnits = 'HwNwtMtr';
SnsrOffsLrngHwTqLrngHwTqThd.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngHwTqThd.EngVal = 1.5;
SnsrOffsLrngHwTqLrngHwTqThd.EngMin = 0;
SnsrOffsLrngHwTqLrngHwTqThd.EngMax = 4;
SnsrOffsLrngHwTqLrngHwTqThd.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngHwTqThd.CustomerVisible = false;
SnsrOffsLrngHwTqLrngHwTqThd.Online = true;
SnsrOffsLrngHwTqLrngHwTqThd.Impact = 'L';
SnsrOffsLrngHwTqLrngHwTqThd.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngHwTqThd.GraphLink = {''};
SnsrOffsLrngHwTqLrngHwTqThd.Monotony = 'None';
SnsrOffsLrngHwTqLrngHwTqThd.MaxGrad = 0;
SnsrOffsLrngHwTqLrngHwTqThd.PortName = 'SnsrOffsLrngHwTqLrngHwTqThd';


SnsrOffsLrngHwTqLrngHwTqZeroOffsThd = DataDict.Calibration;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.LongName = 'Handwheel Torque Learning Handwheel Torque Zero Offset Threshold';
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.Description = [...
  'When handwheel torque offset is somewhat learned (low number of sample' ...
  's), the offset is compared against this threshold to categorize it as ' ...
  'being definately positive, definately negtative, or zero-ish.'];
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.DocUnits = 'HwNwtMtr';
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.EngVal = 0.15;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.EngMin = 0;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.EngMax = 4;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.CustomerVisible = false;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.Online = false;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.Impact = 'L';
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.GraphLink = {''};
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.Monotony = 'None';
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.MaxGrad = 0;
SnsrOffsLrngHwTqLrngHwTqZeroOffsThd.PortName = 'SnsrOffsLrngHwTqLrngHwTqZeroOffsThd';


SnsrOffsLrngHwTqLrngHwVelThd = DataDict.Calibration;
SnsrOffsLrngHwTqLrngHwVelThd.LongName = 'Handwheel Torque Learning Handwheel Velocity Threshold';
SnsrOffsLrngHwTqLrngHwVelThd.Description = [...
  'Maximum Handwheel Velocity (absolute value) to enable HwTq Offset Lear' ...
  'ning process. NOTE: It is recommended to adjust this threshold to the ' ...
  'HwVel reading when the handwheel remains stopped.'];
SnsrOffsLrngHwTqLrngHwVelThd.DocUnits = 'HwRadPerSec';
SnsrOffsLrngHwTqLrngHwVelThd.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngHwVelThd.EngVal = 0.15;
SnsrOffsLrngHwTqLrngHwVelThd.EngMin = 0;
SnsrOffsLrngHwTqLrngHwVelThd.EngMax = 31;
SnsrOffsLrngHwTqLrngHwVelThd.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngHwVelThd.CustomerVisible = true;
SnsrOffsLrngHwTqLrngHwVelThd.Online = true;
SnsrOffsLrngHwTqLrngHwVelThd.Impact = 'L';
SnsrOffsLrngHwTqLrngHwVelThd.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngHwVelThd.GraphLink = {''};
SnsrOffsLrngHwTqLrngHwVelThd.Monotony = 'None';
SnsrOffsLrngHwTqLrngHwVelThd.MaxGrad = 0;
SnsrOffsLrngHwTqLrngHwVelThd.PortName = 'SnsrOffsLrngHwTqLrngHwVelThd';


SnsrOffsLrngHwTqLrngMeasTi = DataDict.Calibration;
SnsrOffsLrngHwTqLrngMeasTi.LongName = 'Handwheel Torque Learning Measure Time';
SnsrOffsLrngHwTqLrngMeasTi.Description = [...
  'Defines the duration of what it is consider as Hands Off event for the' ...
  ' Handwheel Torque Offset learning algotrithm. NOTE: The shorter the ti' ...
  'me, the less accurate the HwTq Offset estimation.'];
SnsrOffsLrngHwTqLrngMeasTi.DocUnits = 'Sec';
SnsrOffsLrngHwTqLrngMeasTi.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngMeasTi.EngVal = 3;
SnsrOffsLrngHwTqLrngMeasTi.EngMin = 0.01;
SnsrOffsLrngHwTqLrngMeasTi.EngMax = 127;
SnsrOffsLrngHwTqLrngMeasTi.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngMeasTi.CustomerVisible = true;
SnsrOffsLrngHwTqLrngMeasTi.Online = false;
SnsrOffsLrngHwTqLrngMeasTi.Impact = 'M';
SnsrOffsLrngHwTqLrngMeasTi.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngMeasTi.GraphLink = {''};
SnsrOffsLrngHwTqLrngMeasTi.Monotony = 'None';
SnsrOffsLrngHwTqLrngMeasTi.MaxGrad = 0;
SnsrOffsLrngHwTqLrngMeasTi.PortName = 'SnsrOffsLrngHwTqLrngMeasTi';


SnsrOffsLrngHwTqLrngMeasTiScar = DataDict.Calibration;
SnsrOffsLrngHwTqLrngMeasTiScar.LongName = 'Handwheel Torque Learning Measure Time Scalar';
SnsrOffsLrngHwTqLrngMeasTiScar.Description = [...
  'Factor to modify the duration of what it is consider as Hands Off even' ...
  't for the Handwheel Torque Offset learning algotrithm. NOTE: The short' ...
  'er the time, the less accurate HwTq Offset estimation.'];
SnsrOffsLrngHwTqLrngMeasTiScar.DocUnits = 'Uls';
SnsrOffsLrngHwTqLrngMeasTiScar.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngMeasTiScar.EngVal = 1;
SnsrOffsLrngHwTqLrngMeasTiScar.EngMin = 1;
SnsrOffsLrngHwTqLrngMeasTiScar.EngMax = 1023;
SnsrOffsLrngHwTqLrngMeasTiScar.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngMeasTiScar.CustomerVisible = true;
SnsrOffsLrngHwTqLrngMeasTiScar.Online = true;
SnsrOffsLrngHwTqLrngMeasTiScar.Impact = 'L';
SnsrOffsLrngHwTqLrngMeasTiScar.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngMeasTiScar.GraphLink = {''};
SnsrOffsLrngHwTqLrngMeasTiScar.Monotony = 'None';
SnsrOffsLrngHwTqLrngMeasTiScar.MaxGrad = 0;
SnsrOffsLrngHwTqLrngMeasTiScar.PortName = 'SnsrOffsLrngHwTqLrngMeasTiScar';


SnsrOffsLrngHwTqLrngSampleImbThd1 = DataDict.Calibration;
SnsrOffsLrngHwTqLrngSampleImbThd1.LongName = 'Handwheel Torque Learning Sample Imbalance Threshold 1';
SnsrOffsLrngHwTqLrngSampleImbThd1.Description = [...
  'If number of collected samples positive vs negative is imbalanced grea' ...
  'ter than Thd1, then HwTqLrng Status is Not Learned.  Between Thd1 and ' ...
  'Thd2 with other criteria met, status is Pos/Neg/Zero.  Below Thd2 with' ...
  ' other criteria met, status is Learned.'];
SnsrOffsLrngHwTqLrngSampleImbThd1.DocUnits = 'Uls';
SnsrOffsLrngHwTqLrngSampleImbThd1.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngSampleImbThd1.EngVal = 0.6667;
SnsrOffsLrngHwTqLrngSampleImbThd1.EngMin = 0;
SnsrOffsLrngHwTqLrngSampleImbThd1.EngMax = 1;
SnsrOffsLrngHwTqLrngSampleImbThd1.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngSampleImbThd1.CustomerVisible = false;
SnsrOffsLrngHwTqLrngSampleImbThd1.Online = false;
SnsrOffsLrngHwTqLrngSampleImbThd1.Impact = 'L';
SnsrOffsLrngHwTqLrngSampleImbThd1.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngSampleImbThd1.GraphLink = {''};
SnsrOffsLrngHwTqLrngSampleImbThd1.Monotony = 'None';
SnsrOffsLrngHwTqLrngSampleImbThd1.MaxGrad = 0;
SnsrOffsLrngHwTqLrngSampleImbThd1.PortName = 'SnsrOffsLrngHwTqLrngSampleImbThd1';


SnsrOffsLrngHwTqLrngSampleImbThd2 = DataDict.Calibration;
SnsrOffsLrngHwTqLrngSampleImbThd2.LongName = 'Handwheel Torque Learning Sample Imbalance Threshold 2';
SnsrOffsLrngHwTqLrngSampleImbThd2.Description = [...
  'If number of collected samples positive vs negative is imbalanced grea' ...
  'ter than Thd1, then HwTqLrng Status is Not Learned.  Between Thd1 and ' ...
  'Thd2 and other criteria are met, status is Pos/Neg/Zero.  Below Thd2 w' ...
  'ith other criteria met, status is Learned.'];
SnsrOffsLrngHwTqLrngSampleImbThd2.DocUnits = 'Uls';
SnsrOffsLrngHwTqLrngSampleImbThd2.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngSampleImbThd2.EngVal = 0.3334;
SnsrOffsLrngHwTqLrngSampleImbThd2.EngMin = 0;
SnsrOffsLrngHwTqLrngSampleImbThd2.EngMax = 1;
SnsrOffsLrngHwTqLrngSampleImbThd2.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngSampleImbThd2.CustomerVisible = false;
SnsrOffsLrngHwTqLrngSampleImbThd2.Online = false;
SnsrOffsLrngHwTqLrngSampleImbThd2.Impact = 'L';
SnsrOffsLrngHwTqLrngSampleImbThd2.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngSampleImbThd2.GraphLink = {''};
SnsrOffsLrngHwTqLrngSampleImbThd2.Monotony = 'None';
SnsrOffsLrngHwTqLrngSampleImbThd2.MaxGrad = 0;
SnsrOffsLrngHwTqLrngSampleImbThd2.PortName = 'SnsrOffsLrngHwTqLrngSampleImbThd2';


SnsrOffsLrngHwTqLrngSampleThd1 = DataDict.Calibration;
SnsrOffsLrngHwTqLrngSampleThd1.LongName = 'Handwheel Torque Learning Sample Threshold 1';
SnsrOffsLrngHwTqLrngSampleThd1.Description = [...
  'If number of samples is less Thd1 then HwTqLrng Status is Not Learned.' ...
  '  Between Thd1 and Thd2 and other criteria are met, status is Pos/Neg/' ...
  'Zero.  Above Thd2 with other criteria met, status is Learned.'];
SnsrOffsLrngHwTqLrngSampleThd1.DocUnits = 'Cnt';
SnsrOffsLrngHwTqLrngSampleThd1.EngDT = dt.u16;
SnsrOffsLrngHwTqLrngSampleThd1.EngVal = 20;
SnsrOffsLrngHwTqLrngSampleThd1.EngMin = 1;
SnsrOffsLrngHwTqLrngSampleThd1.EngMax = 65535;
SnsrOffsLrngHwTqLrngSampleThd1.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngSampleThd1.CustomerVisible = false;
SnsrOffsLrngHwTqLrngSampleThd1.Online = false;
SnsrOffsLrngHwTqLrngSampleThd1.Impact = 'L';
SnsrOffsLrngHwTqLrngSampleThd1.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngSampleThd1.GraphLink = {''};
SnsrOffsLrngHwTqLrngSampleThd1.Monotony = 'None';
SnsrOffsLrngHwTqLrngSampleThd1.MaxGrad = 0;
SnsrOffsLrngHwTqLrngSampleThd1.PortName = 'SnsrOffsLrngHwTqLrngSampleThd1';


SnsrOffsLrngHwTqLrngSampleThd2 = DataDict.Calibration;
SnsrOffsLrngHwTqLrngSampleThd2.LongName = 'Handwheel Torque Learning Sample Threshold 2';
SnsrOffsLrngHwTqLrngSampleThd2.Description = [...
  'If number of samples is less Thd1 then HwTqLrng Status is Not Learned.' ...
  '  Between Thd1 and Thd2 and other criteria are met, status is Pos/Neg/' ...
  'Zero.  Above Thd2 with other criteria met, status is Learned.'];
SnsrOffsLrngHwTqLrngSampleThd2.DocUnits = 'Cnt';
SnsrOffsLrngHwTqLrngSampleThd2.EngDT = dt.u16;
SnsrOffsLrngHwTqLrngSampleThd2.EngVal = 50;
SnsrOffsLrngHwTqLrngSampleThd2.EngMin = 1;
SnsrOffsLrngHwTqLrngSampleThd2.EngMax = 65535;
SnsrOffsLrngHwTqLrngSampleThd2.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngSampleThd2.CustomerVisible = false;
SnsrOffsLrngHwTqLrngSampleThd2.Online = false;
SnsrOffsLrngHwTqLrngSampleThd2.Impact = 'L';
SnsrOffsLrngHwTqLrngSampleThd2.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngSampleThd2.GraphLink = {''};
SnsrOffsLrngHwTqLrngSampleThd2.Monotony = 'None';
SnsrOffsLrngHwTqLrngSampleThd2.MaxGrad = 0;
SnsrOffsLrngHwTqLrngSampleThd2.PortName = 'SnsrOffsLrngHwTqLrngSampleThd2';


SnsrOffsLrngHwTqLrngTiWghtCoeff = DataDict.Calibration;
SnsrOffsLrngHwTqLrngTiWghtCoeff.LongName = 'Handwheel Torque Learning Time Weight Coefficient';
SnsrOffsLrngHwTqLrngTiWghtCoeff.Description = [...
  'Constant value used in by the hand wheel torque learning algorithm whi' ...
  'ch refers to the noise variance of the input samples 32 during develop' ...
  'ment.Must be > zero to avoid divide-by-zero error.'];
SnsrOffsLrngHwTqLrngTiWghtCoeff.DocUnits = 'Uls';
SnsrOffsLrngHwTqLrngTiWghtCoeff.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngTiWghtCoeff.EngVal = 1;
SnsrOffsLrngHwTqLrngTiWghtCoeff.EngMin = 0.1;
SnsrOffsLrngHwTqLrngTiWghtCoeff.EngMax = 1;
SnsrOffsLrngHwTqLrngTiWghtCoeff.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngTiWghtCoeff.CustomerVisible = false;
SnsrOffsLrngHwTqLrngTiWghtCoeff.Online = false;
SnsrOffsLrngHwTqLrngTiWghtCoeff.Impact = 'L';
SnsrOffsLrngHwTqLrngTiWghtCoeff.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngTiWghtCoeff.GraphLink = {''};
SnsrOffsLrngHwTqLrngTiWghtCoeff.Monotony = 'None';
SnsrOffsLrngHwTqLrngTiWghtCoeff.MaxGrad = 0;
SnsrOffsLrngHwTqLrngTiWghtCoeff.PortName = 'SnsrOffsLrngHwTqLrngTiWghtCoeff';


SnsrOffsLrngHwTqLrngVehSpdThd = DataDict.Calibration;
SnsrOffsLrngHwTqLrngVehSpdThd.LongName = 'Hanwheel Torque Learning Vehicle Speed Threshold';
SnsrOffsLrngHwTqLrngVehSpdThd.Description = [...
  'Maximum Vehicle Speed to detect a Hands off event for the Handwheel To' ...
  'rque Offset learning algotrithm.'];
SnsrOffsLrngHwTqLrngVehSpdThd.DocUnits = 'Kph';
SnsrOffsLrngHwTqLrngVehSpdThd.EngDT = dt.float32;
SnsrOffsLrngHwTqLrngVehSpdThd.EngVal = 0;
SnsrOffsLrngHwTqLrngVehSpdThd.EngMin = 0;
SnsrOffsLrngHwTqLrngVehSpdThd.EngMax = 511;
SnsrOffsLrngHwTqLrngVehSpdThd.Cardinality = 'Cmn';
SnsrOffsLrngHwTqLrngVehSpdThd.CustomerVisible = true;
SnsrOffsLrngHwTqLrngVehSpdThd.Online = true;
SnsrOffsLrngHwTqLrngVehSpdThd.Impact = 'M';
SnsrOffsLrngHwTqLrngVehSpdThd.TuningOwner = 'CSE';
SnsrOffsLrngHwTqLrngVehSpdThd.GraphLink = {''};
SnsrOffsLrngHwTqLrngVehSpdThd.Monotony = 'None';
SnsrOffsLrngHwTqLrngVehSpdThd.MaxGrad = 0;
SnsrOffsLrngHwTqLrngVehSpdThd.PortName = 'SnsrOffsLrngHwTqLrngVehSpdThd';


SnsrOffsLrngHwTqOffsLim = DataDict.Calibration;
SnsrOffsLrngHwTqOffsLim.LongName = 'Handwheel Torque Offset Limit';
SnsrOffsLrngHwTqOffsLim.Description = [...
  'Storing Limit. Maximum value that can be stored as Handwheel Torque Of' ...
  'fset. NOTE: Safety limitation before correcting Handwheel Torque signa' ...
  'l is also applied on the Handwheel Torque Offset. Storing Limit and Sa' ...
  'fety Limit might differ.'];
SnsrOffsLrngHwTqOffsLim.DocUnits = 'HwNwtMtr';
SnsrOffsLrngHwTqOffsLim.EngDT = dt.float32;
SnsrOffsLrngHwTqOffsLim.EngVal = 1.5;
SnsrOffsLrngHwTqOffsLim.EngMin = 0;
SnsrOffsLrngHwTqOffsLim.EngMax = 4;
SnsrOffsLrngHwTqOffsLim.Cardinality = 'Cmn';
SnsrOffsLrngHwTqOffsLim.CustomerVisible = true;
SnsrOffsLrngHwTqOffsLim.Online = true;
SnsrOffsLrngHwTqOffsLim.Impact = 'H';
SnsrOffsLrngHwTqOffsLim.TuningOwner = 'CSE';
SnsrOffsLrngHwTqOffsLim.GraphLink = {''};
SnsrOffsLrngHwTqOffsLim.Monotony = 'None';
SnsrOffsLrngHwTqOffsLim.MaxGrad = 0;
SnsrOffsLrngHwTqOffsLim.PortName = 'SnsrOffsLrngHwTqOffsLim';


SnsrOffsLrngHwVelFilFrq = DataDict.Calibration;
SnsrOffsLrngHwVelFilFrq.LongName = 'Handwheel Velocity Filter Frequency';
SnsrOffsLrngHwVelFilFrq.Description = [...
  'Signal Conditioner. Cutoff frequency of the LPF for the Handwheel Velo' ...
  'city signal'];
SnsrOffsLrngHwVelFilFrq.DocUnits = 'Hz';
SnsrOffsLrngHwVelFilFrq.EngDT = dt.float32;
SnsrOffsLrngHwVelFilFrq.EngVal = 250;
SnsrOffsLrngHwVelFilFrq.EngMin = 0;
SnsrOffsLrngHwVelFilFrq.EngMax = 250;
SnsrOffsLrngHwVelFilFrq.Cardinality = 'Cmn';
SnsrOffsLrngHwVelFilFrq.CustomerVisible = true;
SnsrOffsLrngHwVelFilFrq.Online = false;
SnsrOffsLrngHwVelFilFrq.Impact = 'L';
SnsrOffsLrngHwVelFilFrq.TuningOwner = 'CSE';
SnsrOffsLrngHwVelFilFrq.GraphLink = {''};
SnsrOffsLrngHwVelFilFrq.Monotony = 'None';
SnsrOffsLrngHwVelFilFrq.MaxGrad = 0;
SnsrOffsLrngHwVelFilFrq.PortName = 'SnsrOffsLrngHwVelFilFrq';


SnsrOffsLrngSampleCntForHwTqLrngRst = DataDict.Calibration;
SnsrOffsLrngSampleCntForHwTqLrngRst.LongName = 'Sample Count For Handwheel Torque Learning Reset';
SnsrOffsLrngSampleCntForHwTqLrngRst.Description = [...
  'When measured Handwheel Angle total sample count exceeds this calibrat' ...
  'ion value, then Handwheel Torque Offset Learned values are reset to de' ...
  'fault values'];
SnsrOffsLrngSampleCntForHwTqLrngRst.DocUnits = 'Cnt';
SnsrOffsLrngSampleCntForHwTqLrngRst.EngDT = dt.u16;
SnsrOffsLrngSampleCntForHwTqLrngRst.EngVal = 2000;
SnsrOffsLrngSampleCntForHwTqLrngRst.EngMin = 0;
SnsrOffsLrngSampleCntForHwTqLrngRst.EngMax = 65535;
SnsrOffsLrngSampleCntForHwTqLrngRst.Cardinality = 'Cmn';
SnsrOffsLrngSampleCntForHwTqLrngRst.CustomerVisible = false;
SnsrOffsLrngSampleCntForHwTqLrngRst.Online = false;
SnsrOffsLrngSampleCntForHwTqLrngRst.Impact = 'L';
SnsrOffsLrngSampleCntForHwTqLrngRst.TuningOwner = 'CSE';
SnsrOffsLrngSampleCntForHwTqLrngRst.GraphLink = {''};
SnsrOffsLrngSampleCntForHwTqLrngRst.Monotony = 'None';
SnsrOffsLrngSampleCntForHwTqLrngRst.MaxGrad = 0;
SnsrOffsLrngSampleCntForHwTqLrngRst.PortName = 'SnsrOffsLrngSampleCntForHwTqLrngRst';


SnsrOffsLrngTqAndAgFilFrq = DataDict.Calibration;
SnsrOffsLrngTqAndAgFilFrq.LongName = 'Torque and Angle Filter Frequency';
SnsrOffsLrngTqAndAgFilFrq.Description = [...
  'Signal Conditioner. Cutoff frequency of the LPF for Handwheel Torque a' ...
  'nd  Handwheel Position signals'];
SnsrOffsLrngTqAndAgFilFrq.DocUnits = 'Hz';
SnsrOffsLrngTqAndAgFilFrq.EngDT = dt.float32;
SnsrOffsLrngTqAndAgFilFrq.EngVal = 250;
SnsrOffsLrngTqAndAgFilFrq.EngMin = 0;
SnsrOffsLrngTqAndAgFilFrq.EngMax = 250;
SnsrOffsLrngTqAndAgFilFrq.Cardinality = 'Cmn';
SnsrOffsLrngTqAndAgFilFrq.CustomerVisible = true;
SnsrOffsLrngTqAndAgFilFrq.Online = false;
SnsrOffsLrngTqAndAgFilFrq.Impact = 'L';
SnsrOffsLrngTqAndAgFilFrq.TuningOwner = 'CSE';
SnsrOffsLrngTqAndAgFilFrq.GraphLink = {''};
SnsrOffsLrngTqAndAgFilFrq.Monotony = 'None';
SnsrOffsLrngTqAndAgFilFrq.MaxGrad = 0;
SnsrOffsLrngTqAndAgFilFrq.PortName = 'SnsrOffsLrngTqAndAgFilFrq';


SnsrOffsLrngTqInpDetnHwTqFilFrq = DataDict.Calibration;
SnsrOffsLrngTqInpDetnHwTqFilFrq.LongName = 'Torque Input Detection Handwheel Torque Filter Frequency';
SnsrOffsLrngTqInpDetnHwTqFilFrq.Description = [...
  'TID. Cutoff frequency to limit the bandwidth of the input Handwheel To' ...
  'rque signal.'];
SnsrOffsLrngTqInpDetnHwTqFilFrq.DocUnits = 'Hz';
SnsrOffsLrngTqInpDetnHwTqFilFrq.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnHwTqFilFrq.EngVal = 4;
SnsrOffsLrngTqInpDetnHwTqFilFrq.EngMin = 0;
SnsrOffsLrngTqInpDetnHwTqFilFrq.EngMax = 250;
SnsrOffsLrngTqInpDetnHwTqFilFrq.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnHwTqFilFrq.CustomerVisible = false;
SnsrOffsLrngTqInpDetnHwTqFilFrq.Online = false;
SnsrOffsLrngTqInpDetnHwTqFilFrq.Impact = 'H';
SnsrOffsLrngTqInpDetnHwTqFilFrq.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnHwTqFilFrq.GraphLink = {''};
SnsrOffsLrngTqInpDetnHwTqFilFrq.Monotony = 'None';
SnsrOffsLrngTqInpDetnHwTqFilFrq.MaxGrad = 0;
SnsrOffsLrngTqInpDetnHwTqFilFrq.PortName = 'SnsrOffsLrngTqInpDetnHwTqFilFrq';


SnsrOffsLrngTqInpDetnPwrEstimnThd = DataDict.Calibration;
SnsrOffsLrngTqInpDetnPwrEstimnThd.LongName = 'Torque Input Detection Power Estimation Threshold';
SnsrOffsLrngTqInpDetnPwrEstimnThd.Description = [...
  'Power threshold to determine whether there is a handwheel torque input' ...
  ' or not. NOTE: Vehicle testing is needed to determine the appropiate t' ...
  'hreshold. It is recommended to contact the FDD owner for guidance.'];
SnsrOffsLrngTqInpDetnPwrEstimnThd.DocUnits = 'Db';
SnsrOffsLrngTqInpDetnPwrEstimnThd.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnPwrEstimnThd.EngVal = 0;
SnsrOffsLrngTqInpDetnPwrEstimnThd.EngMin = -250;
SnsrOffsLrngTqInpDetnPwrEstimnThd.EngMax = 50;
SnsrOffsLrngTqInpDetnPwrEstimnThd.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnPwrEstimnThd.CustomerVisible = false;
SnsrOffsLrngTqInpDetnPwrEstimnThd.Online = true;
SnsrOffsLrngTqInpDetnPwrEstimnThd.Impact = 'H';
SnsrOffsLrngTqInpDetnPwrEstimnThd.TuningOwner = 'CSE';
SnsrOffsLrngTqInpDetnPwrEstimnThd.GraphLink = {''};
SnsrOffsLrngTqInpDetnPwrEstimnThd.Monotony = 'None';
SnsrOffsLrngTqInpDetnPwrEstimnThd.MaxGrad = 0;
SnsrOffsLrngTqInpDetnPwrEstimnThd.PortName = 'SnsrOffsLrngTqInpDetnPwrEstimnThd';


SnsrOffsLrngTqInpDetnSinGenrAmp = DataDict.Calibration;
SnsrOffsLrngTqInpDetnSinGenrAmp.LongName = 'Torque Input Detection Sine Generator Amplitude';
SnsrOffsLrngTqInpDetnSinGenrAmp.Description = [...
  'TID. Sine amplitude used in the Stage1 of the preprocessing.'];
SnsrOffsLrngTqInpDetnSinGenrAmp.DocUnits = 'HwNwtMtr';
SnsrOffsLrngTqInpDetnSinGenrAmp.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnSinGenrAmp.EngVal = 0.1;
SnsrOffsLrngTqInpDetnSinGenrAmp.EngMin = 0;
SnsrOffsLrngTqInpDetnSinGenrAmp.EngMax = 1;
SnsrOffsLrngTqInpDetnSinGenrAmp.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnSinGenrAmp.CustomerVisible = false;
SnsrOffsLrngTqInpDetnSinGenrAmp.Online = true;
SnsrOffsLrngTqInpDetnSinGenrAmp.Impact = 'L';
SnsrOffsLrngTqInpDetnSinGenrAmp.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnSinGenrAmp.GraphLink = {''};
SnsrOffsLrngTqInpDetnSinGenrAmp.Monotony = 'None';
SnsrOffsLrngTqInpDetnSinGenrAmp.MaxGrad = 0;
SnsrOffsLrngTqInpDetnSinGenrAmp.PortName = 'SnsrOffsLrngTqInpDetnSinGenrAmp';


SnsrOffsLrngTqInpDetnSinGenrFrq = DataDict.Calibration;
SnsrOffsLrngTqInpDetnSinGenrFrq.LongName = 'Torque Input Detection Sine Generator Frequency';
SnsrOffsLrngTqInpDetnSinGenrFrq.Description = [...
  'TID. Sine frequency used in the Stage1 of the preprocessing.'];
SnsrOffsLrngTqInpDetnSinGenrFrq.DocUnits = 'Hz';
SnsrOffsLrngTqInpDetnSinGenrFrq.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnSinGenrFrq.EngVal = 27.78;
SnsrOffsLrngTqInpDetnSinGenrFrq.EngMin = 6.95;
SnsrOffsLrngTqInpDetnSinGenrFrq.EngMax = 104.17;
SnsrOffsLrngTqInpDetnSinGenrFrq.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnSinGenrFrq.CustomerVisible = false;
SnsrOffsLrngTqInpDetnSinGenrFrq.Online = true;
SnsrOffsLrngTqInpDetnSinGenrFrq.Impact = 'M';
SnsrOffsLrngTqInpDetnSinGenrFrq.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnSinGenrFrq.GraphLink = {''};
SnsrOffsLrngTqInpDetnSinGenrFrq.Monotony = 'None';
SnsrOffsLrngTqInpDetnSinGenrFrq.MaxGrad = 0;
SnsrOffsLrngTqInpDetnSinGenrFrq.PortName = 'SnsrOffsLrngTqInpDetnSinGenrFrq';


SnsrOffsLrngTqInpDetnStg1FilGain = DataDict.Calibration;
SnsrOffsLrngTqInpDetnStg1FilGain.LongName = 'Torque Input Detection Stage 1 Filter Gain';
SnsrOffsLrngTqInpDetnStg1FilGain.Description = [...
  'TID. Satge 1 Sliding Goertzel custom filter gain. NOTE: It is not a LP' ...
  'F, DO NOT modify unless you know what you are doing.'];
SnsrOffsLrngTqInpDetnStg1FilGain.DocUnits = 'Uls';
SnsrOffsLrngTqInpDetnStg1FilGain.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnStg1FilGain.EngVal = 1.879385242;
SnsrOffsLrngTqInpDetnStg1FilGain.EngMin = 0.517;
SnsrOffsLrngTqInpDetnStg1FilGain.EngMax = 1.993;
SnsrOffsLrngTqInpDetnStg1FilGain.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnStg1FilGain.CustomerVisible = false;
SnsrOffsLrngTqInpDetnStg1FilGain.Online = true;
SnsrOffsLrngTqInpDetnStg1FilGain.Impact = 'M';
SnsrOffsLrngTqInpDetnStg1FilGain.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnStg1FilGain.GraphLink = {''};
SnsrOffsLrngTqInpDetnStg1FilGain.Monotony = 'None';
SnsrOffsLrngTqInpDetnStg1FilGain.MaxGrad = 0;
SnsrOffsLrngTqInpDetnStg1FilGain.PortName = 'SnsrOffsLrngTqInpDetnStg1FilGain';


SnsrOffsLrngTqInpDetnStg1WinSize = DataDict.Calibration;
SnsrOffsLrngTqInpDetnStg1WinSize.LongName = 'Torque Input Detection Stage 1 Window Size';
SnsrOffsLrngTqInpDetnStg1WinSize.Description = [...
  'TID. Window size of the Stage 1 Goertzel filter, measured in amount of' ...
  ' samples. Multiply this value by the execution rate to obtain the wind' ...
  'ow size in time units. NOTE: Changing this value affects the Goertzel ' ...
  'filter gain.'];
SnsrOffsLrngTqInpDetnStg1WinSize.DocUnits = 'Cnt';
SnsrOffsLrngTqInpDetnStg1WinSize.EngDT = dt.u08;
SnsrOffsLrngTqInpDetnStg1WinSize.EngVal = 18;
SnsrOffsLrngTqInpDetnStg1WinSize.EngMin = 1;
SnsrOffsLrngTqInpDetnStg1WinSize.EngMax = 72;
SnsrOffsLrngTqInpDetnStg1WinSize.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnStg1WinSize.CustomerVisible = false;
SnsrOffsLrngTqInpDetnStg1WinSize.Online = true;
SnsrOffsLrngTqInpDetnStg1WinSize.Impact = 'M';
SnsrOffsLrngTqInpDetnStg1WinSize.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnStg1WinSize.GraphLink = {''};
SnsrOffsLrngTqInpDetnStg1WinSize.Monotony = 'None';
SnsrOffsLrngTqInpDetnStg1WinSize.MaxGrad = 0;
SnsrOffsLrngTqInpDetnStg1WinSize.PortName = 'SnsrOffsLrngTqInpDetnStg1WinSize';


SnsrOffsLrngTqInpDetnStg2FilGainCen = DataDict.Calibration;
SnsrOffsLrngTqInpDetnStg2FilGainCen.LongName = 'Torque Input Detection Stage 2 Filter Gain Central';
SnsrOffsLrngTqInpDetnStg2FilGainCen.Description = [...
  'TID. Satge 2 Goertzel custom filter gain for the central frequency. NO' ...
  'TE: It is not a LPF, DO NOT modify unless you know what you are doing.' ...
  ''];
SnsrOffsLrngTqInpDetnStg2FilGainCen.DocUnits = 'Uls';
SnsrOffsLrngTqInpDetnStg2FilGainCen.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnStg2FilGainCen.EngVal = 1.879385242;
SnsrOffsLrngTqInpDetnStg2FilGainCen.EngMin = 0.617;
SnsrOffsLrngTqInpDetnStg2FilGainCen.EngMax = 1.993;
SnsrOffsLrngTqInpDetnStg2FilGainCen.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnStg2FilGainCen.CustomerVisible = false;
SnsrOffsLrngTqInpDetnStg2FilGainCen.Online = true;
SnsrOffsLrngTqInpDetnStg2FilGainCen.Impact = 'M';
SnsrOffsLrngTqInpDetnStg2FilGainCen.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnStg2FilGainCen.GraphLink = {''};
SnsrOffsLrngTqInpDetnStg2FilGainCen.Monotony = 'None';
SnsrOffsLrngTqInpDetnStg2FilGainCen.MaxGrad = 0;
SnsrOffsLrngTqInpDetnStg2FilGainCen.PortName = 'SnsrOffsLrngTqInpDetnStg2FilGainCen';


SnsrOffsLrngTqInpDetnStg2FilGainDwn = DataDict.Calibration;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.LongName = 'Torque Input Detection Stage 2 Filter Gain Down';
SnsrOffsLrngTqInpDetnStg2FilGainDwn.Description = [...
  'TID. Satge 2 Goertzel custom filter gain for the down frequency. NOTE:' ...
  ' It is not a LPF, DO NOT modify unless you know what you are doing.'];
SnsrOffsLrngTqInpDetnStg2FilGainDwn.DocUnits = 'Uls';
SnsrOffsLrngTqInpDetnStg2FilGainDwn.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.EngVal = 1.891037151;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.EngMin = 0.617;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.EngMax = 1.993;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnStg2FilGainDwn.CustomerVisible = false;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.Online = true;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.Impact = 'M';
SnsrOffsLrngTqInpDetnStg2FilGainDwn.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnStg2FilGainDwn.GraphLink = {''};
SnsrOffsLrngTqInpDetnStg2FilGainDwn.Monotony = 'None';
SnsrOffsLrngTqInpDetnStg2FilGainDwn.MaxGrad = 0;
SnsrOffsLrngTqInpDetnStg2FilGainDwn.PortName = 'SnsrOffsLrngTqInpDetnStg2FilGainDwn';


SnsrOffsLrngTqInpDetnStg2FilGainUp = DataDict.Calibration;
SnsrOffsLrngTqInpDetnStg2FilGainUp.LongName = 'Torque Input Detection Stage 2 Filter Gain Up';
SnsrOffsLrngTqInpDetnStg2FilGainUp.Description = [...
  'TID. Satge 2 Goertzel custom filter gain for the up frequency. NOTE: I' ...
  't is not a LPF, DO NOT modify unless you know what you are doing.'];
SnsrOffsLrngTqInpDetnStg2FilGainUp.DocUnits = 'Uls';
SnsrOffsLrngTqInpDetnStg2FilGainUp.EngDT = dt.float32;
SnsrOffsLrngTqInpDetnStg2FilGainUp.EngVal = 1.867160853;
SnsrOffsLrngTqInpDetnStg2FilGainUp.EngMin = 0.617;
SnsrOffsLrngTqInpDetnStg2FilGainUp.EngMax = 1.993;
SnsrOffsLrngTqInpDetnStg2FilGainUp.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnStg2FilGainUp.CustomerVisible = false;
SnsrOffsLrngTqInpDetnStg2FilGainUp.Online = true;
SnsrOffsLrngTqInpDetnStg2FilGainUp.Impact = 'M';
SnsrOffsLrngTqInpDetnStg2FilGainUp.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnStg2FilGainUp.GraphLink = {''};
SnsrOffsLrngTqInpDetnStg2FilGainUp.Monotony = 'None';
SnsrOffsLrngTqInpDetnStg2FilGainUp.MaxGrad = 0;
SnsrOffsLrngTqInpDetnStg2FilGainUp.PortName = 'SnsrOffsLrngTqInpDetnStg2FilGainUp';


SnsrOffsLrngTqInpDetnStg2WinSize = DataDict.Calibration;
SnsrOffsLrngTqInpDetnStg2WinSize.LongName = 'Torque Input Detection Satge 2 Window Size';
SnsrOffsLrngTqInpDetnStg2WinSize.Description = [...
  'TID. Window size of the  measured in amount of samples. Multiply this ' ...
  'value by the execution rate to obtain the window size in time units. N' ...
  'OTE: Changing this value affects the Goertzel filter gain.'];
SnsrOffsLrngTqInpDetnStg2WinSize.DocUnits = 'Cnt';
SnsrOffsLrngTqInpDetnStg2WinSize.EngDT = dt.u16;
SnsrOffsLrngTqInpDetnStg2WinSize.EngVal = 360;
SnsrOffsLrngTqInpDetnStg2WinSize.EngMin = 1;
SnsrOffsLrngTqInpDetnStg2WinSize.EngMax = 5004;
SnsrOffsLrngTqInpDetnStg2WinSize.Cardinality = 'Cmn';
SnsrOffsLrngTqInpDetnStg2WinSize.CustomerVisible = false;
SnsrOffsLrngTqInpDetnStg2WinSize.Online = true;
SnsrOffsLrngTqInpDetnStg2WinSize.Impact = 'M';
SnsrOffsLrngTqInpDetnStg2WinSize.TuningOwner = 'FDD';
SnsrOffsLrngTqInpDetnStg2WinSize.GraphLink = {''};
SnsrOffsLrngTqInpDetnStg2WinSize.Monotony = 'None';
SnsrOffsLrngTqInpDetnStg2WinSize.MaxGrad = 0;
SnsrOffsLrngTqInpDetnStg2WinSize.PortName = 'SnsrOffsLrngTqInpDetnStg2WinSize';


SnsrOffsLrngYawACdngFilFrq = DataDict.Calibration;
SnsrOffsLrngYawACdngFilFrq.LongName = 'Yaw Acceleration Conditioning Filter Frequency';
SnsrOffsLrngYawACdngFilFrq.Description = [...
  'Signal Conditioner. Cutoff frequency of the pre-LPF to calculate the Y' ...
  'aw Acceleration signal.'];
SnsrOffsLrngYawACdngFilFrq.DocUnits = 'Hz';
SnsrOffsLrngYawACdngFilFrq.EngDT = dt.float32;
SnsrOffsLrngYawACdngFilFrq.EngVal = 250;
SnsrOffsLrngYawACdngFilFrq.EngMin = 0;
SnsrOffsLrngYawACdngFilFrq.EngMax = 250;
SnsrOffsLrngYawACdngFilFrq.Cardinality = 'Cmn';
SnsrOffsLrngYawACdngFilFrq.CustomerVisible = true;
SnsrOffsLrngYawACdngFilFrq.Online = false;
SnsrOffsLrngYawACdngFilFrq.Impact = 'L';
SnsrOffsLrngYawACdngFilFrq.TuningOwner = 'CSE';
SnsrOffsLrngYawACdngFilFrq.GraphLink = {''};
SnsrOffsLrngYawACdngFilFrq.Monotony = 'None';
SnsrOffsLrngYawACdngFilFrq.MaxGrad = 0;
SnsrOffsLrngYawACdngFilFrq.PortName = 'SnsrOffsLrngYawACdngFilFrq';


SnsrOffsLrngYawLrngEna = DataDict.Calibration;
SnsrOffsLrngYawLrngEna.LongName = 'Yaw Learning Enable';
SnsrOffsLrngYawLrngEna.Description = [...
  'Enables Yaw rate Offset Learning process.'];
SnsrOffsLrngYawLrngEna.DocUnits = 'Cnt';
SnsrOffsLrngYawLrngEna.EngDT = dt.lgc;
SnsrOffsLrngYawLrngEna.EngVal = 0;
SnsrOffsLrngYawLrngEna.EngMin = 0;
SnsrOffsLrngYawLrngEna.EngMax = 1;
SnsrOffsLrngYawLrngEna.Cardinality = 'Cmn';
SnsrOffsLrngYawLrngEna.CustomerVisible = true;
SnsrOffsLrngYawLrngEna.Online = true;
SnsrOffsLrngYawLrngEna.Impact = 'M';
SnsrOffsLrngYawLrngEna.TuningOwner = 'CSE';
SnsrOffsLrngYawLrngEna.GraphLink = {''};
SnsrOffsLrngYawLrngEna.Monotony = 'None';
SnsrOffsLrngYawLrngEna.MaxGrad = 0;
SnsrOffsLrngYawLrngEna.PortName = 'SnsrOffsLrngYawLrngEna';


SnsrOffsLrngYawLrngHwAgThd = DataDict.Calibration;
SnsrOffsLrngYawLrngHwAgThd.LongName = 'Yaw Rate Learning Handwheel Angle Threshold';
SnsrOffsLrngYawLrngHwAgThd.Description = [...
  'YawLrng. Maximum Handwheel Angle (absolute value) to enable Yaw rate O' ...
  'ffset learning.'];
SnsrOffsLrngYawLrngHwAgThd.DocUnits = 'HwDeg';
SnsrOffsLrngYawLrngHwAgThd.EngDT = dt.float32;
SnsrOffsLrngYawLrngHwAgThd.EngVal = 15;
SnsrOffsLrngYawLrngHwAgThd.EngMin = 0;
SnsrOffsLrngYawLrngHwAgThd.EngMax = 1440;
SnsrOffsLrngYawLrngHwAgThd.Cardinality = 'Cmn';
SnsrOffsLrngYawLrngHwAgThd.CustomerVisible = true;
SnsrOffsLrngYawLrngHwAgThd.Online = true;
SnsrOffsLrngYawLrngHwAgThd.Impact = 'L';
SnsrOffsLrngYawLrngHwAgThd.TuningOwner = 'CSE';
SnsrOffsLrngYawLrngHwAgThd.GraphLink = {''};
SnsrOffsLrngYawLrngHwAgThd.Monotony = 'None';
SnsrOffsLrngYawLrngHwAgThd.MaxGrad = 0;
SnsrOffsLrngYawLrngHwAgThd.PortName = 'SnsrOffsLrngYawLrngHwAgThd';


SnsrOffsLrngYawLrngTi = DataDict.Calibration;
SnsrOffsLrngYawLrngTi.LongName = 'Yaw Learning Time';
SnsrOffsLrngYawLrngTi.Description = [...
  'YawLrng. Amount of time that the algorithm takes to correctly estimate' ...
  ' (learn) the Yaw Rate signal Offset. NOTE: The lower amount of time,th' ...
  'e faster the learning, the less accurate the estimation.  EngMin of 0.' ...
  '03 approaches Nyquist of filter.  EngMax of 28800 = 8 hrs.'];
SnsrOffsLrngYawLrngTi.DocUnits = 'Sec';
SnsrOffsLrngYawLrngTi.EngDT = dt.float32;
SnsrOffsLrngYawLrngTi.EngVal = 100;
SnsrOffsLrngYawLrngTi.EngMin = 0.03;
SnsrOffsLrngYawLrngTi.EngMax = 28800;
SnsrOffsLrngYawLrngTi.Cardinality = 'Cmn';
SnsrOffsLrngYawLrngTi.CustomerVisible = true;
SnsrOffsLrngYawLrngTi.Online = false;
SnsrOffsLrngYawLrngTi.Impact = 'M';
SnsrOffsLrngYawLrngTi.TuningOwner = 'FDD';
SnsrOffsLrngYawLrngTi.GraphLink = {''};
SnsrOffsLrngYawLrngTi.Monotony = 'None';
SnsrOffsLrngYawLrngTi.MaxGrad = 0;
SnsrOffsLrngYawLrngTi.PortName = 'SnsrOffsLrngYawLrngTi';


SnsrOffsLrngYawLrngYawAThd = DataDict.Calibration;
SnsrOffsLrngYawLrngYawAThd.LongName = 'Yaw Rate Learning Yaw Acceleration Threshold';
SnsrOffsLrngYawLrngYawAThd.Description = [...
  'YawLrng. Maximum Yaw Acceleration (absolute value) to detect vehicle s' ...
  'topped condition.'];
SnsrOffsLrngYawLrngYawAThd.DocUnits = 'VehDegPerSecSqd';
SnsrOffsLrngYawLrngYawAThd.EngDT = dt.float32;
SnsrOffsLrngYawLrngYawAThd.EngVal = 2;
SnsrOffsLrngYawLrngYawAThd.EngMin = 0;
SnsrOffsLrngYawLrngYawAThd.EngMax = 1000;
SnsrOffsLrngYawLrngYawAThd.Cardinality = 'Cmn';
SnsrOffsLrngYawLrngYawAThd.CustomerVisible = true;
SnsrOffsLrngYawLrngYawAThd.Online = true;
SnsrOffsLrngYawLrngYawAThd.Impact = 'L';
SnsrOffsLrngYawLrngYawAThd.TuningOwner = 'CSE';
SnsrOffsLrngYawLrngYawAThd.GraphLink = {''};
SnsrOffsLrngYawLrngYawAThd.Monotony = 'None';
SnsrOffsLrngYawLrngYawAThd.MaxGrad = 0;
SnsrOffsLrngYawLrngYawAThd.PortName = 'SnsrOffsLrngYawLrngYawAThd';


SnsrOffsLrngYawOffsFrshTiThd = DataDict.Calibration;
SnsrOffsLrngYawOffsFrshTiThd.LongName = 'Yaw Rate Offset Freshness Time Threshold';
SnsrOffsLrngYawOffsFrshTiThd.Description = [...
  'Minimum elapsed time (EPS running) to consider the last Yaw Rate Offse' ...
  't estimation as not fresh.'];
SnsrOffsLrngYawOffsFrshTiThd.DocUnits = 'Mins';
SnsrOffsLrngYawOffsFrshTiThd.EngDT = dt.float32;
SnsrOffsLrngYawOffsFrshTiThd.EngVal = 720;
SnsrOffsLrngYawOffsFrshTiThd.EngMin = 0;
SnsrOffsLrngYawOffsFrshTiThd.EngMax = 1440;
SnsrOffsLrngYawOffsFrshTiThd.Cardinality = 'Cmn';
SnsrOffsLrngYawOffsFrshTiThd.CustomerVisible = true;
SnsrOffsLrngYawOffsFrshTiThd.Online = true;
SnsrOffsLrngYawOffsFrshTiThd.Impact = 'L';
SnsrOffsLrngYawOffsFrshTiThd.TuningOwner = 'CSE';
SnsrOffsLrngYawOffsFrshTiThd.GraphLink = {''};
SnsrOffsLrngYawOffsFrshTiThd.Monotony = 'None';
SnsrOffsLrngYawOffsFrshTiThd.MaxGrad = 0;
SnsrOffsLrngYawOffsFrshTiThd.PortName = 'SnsrOffsLrngYawOffsFrshTiThd';


SnsrOffsLrngYawRateCdngFilFrq = DataDict.Calibration;
SnsrOffsLrngYawRateCdngFilFrq.LongName = 'Yaw Rate Conditioning Filter Frequency';
SnsrOffsLrngYawRateCdngFilFrq.Description = [...
  'Signal Conditioner. Cutoff frequency of the LPF for Yaw Rate signal'];
SnsrOffsLrngYawRateCdngFilFrq.DocUnits = 'Hz';
SnsrOffsLrngYawRateCdngFilFrq.EngDT = dt.float32;
SnsrOffsLrngYawRateCdngFilFrq.EngVal = 250;
SnsrOffsLrngYawRateCdngFilFrq.EngMin = 0;
SnsrOffsLrngYawRateCdngFilFrq.EngMax = 250;
SnsrOffsLrngYawRateCdngFilFrq.Cardinality = 'Cmn';
SnsrOffsLrngYawRateCdngFilFrq.CustomerVisible = true;
SnsrOffsLrngYawRateCdngFilFrq.Online = false;
SnsrOffsLrngYawRateCdngFilFrq.Impact = 'L';
SnsrOffsLrngYawRateCdngFilFrq.TuningOwner = 'CSE';
SnsrOffsLrngYawRateCdngFilFrq.GraphLink = {''};
SnsrOffsLrngYawRateCdngFilFrq.Monotony = 'None';
SnsrOffsLrngYawRateCdngFilFrq.MaxGrad = 0;
SnsrOffsLrngYawRateCdngFilFrq.PortName = 'SnsrOffsLrngYawRateCdngFilFrq';


SnsrOffsLrngYawRateOffsLim = DataDict.Calibration;
SnsrOffsLrngYawRateOffsLim.LongName = 'Yaw Rate Offset Limit';
SnsrOffsLrngYawRateOffsLim.Description = [...
  'Storing Limit. Maximum value that can be stored as Yaw Rate Offset. NO' ...
  'TE: Safety limitation before correcting Yaw Rate signal is also applie' ...
  'd on the Yaw Rate Offset. Storing Limit and Safety Limit might differ.' ...
  ''];
SnsrOffsLrngYawRateOffsLim.DocUnits = 'VehDegPerSec';
SnsrOffsLrngYawRateOffsLim.EngDT = dt.float32;
SnsrOffsLrngYawRateOffsLim.EngVal = 5;
SnsrOffsLrngYawRateOffsLim.EngMin = 0;
SnsrOffsLrngYawRateOffsLim.EngMax = 20;
SnsrOffsLrngYawRateOffsLim.Cardinality = 'Cmn';
SnsrOffsLrngYawRateOffsLim.CustomerVisible = true;
SnsrOffsLrngYawRateOffsLim.Online = true;
SnsrOffsLrngYawRateOffsLim.Impact = 'M';
SnsrOffsLrngYawRateOffsLim.TuningOwner = 'CSE';
SnsrOffsLrngYawRateOffsLim.GraphLink = {''};
SnsrOffsLrngYawRateOffsLim.Monotony = 'None';
SnsrOffsLrngYawRateOffsLim.MaxGrad = 0;
SnsrOffsLrngYawRateOffsLim.PortName = 'SnsrOffsLrngYawRateOffsLim';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmSysTqRat = DataDict.ImprtdCal;
SysGlbPrmSysTqRat.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTqRat.EngDT = dt.float32;
SysGlbPrmSysTqRat.EngVal = 20;
SysGlbPrmSysTqRat.EngMin = 10;
SysGlbPrmSysTqRat.EngMax = 40;
SysGlbPrmSysTqRat.PortName = 'SysGlbPrmSysTqRat';
SysGlbPrmSysTqRat.Description = [...
  'Conversion from Motor Nm to Handwheel Nm'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
SnsrOffsLrnd = DataDict.NVM;
SnsrOffsLrnd.LongName = 'Sensor Learned Offset';
SnsrOffsLrnd.Description = [...
  'Structure that contains all the parameters that need to be stored in N' ...
  'VM.'];
SnsrOffsLrnd.DocUnits = 'Uls';
SnsrOffsLrnd.EngDT = struct.SnsrLrndOffsRec2;
SnsrOffsLrnd.EngInit = [];
SnsrOffsLrnd.EngMin = [struct('YawRateOffs',-20,'HwAgOffs',-20,'HwTqOffs',-4,'HwAgLrndTi',0,'HwAgLrngYawOffsRef',-20,'YawRateElpdTi',0,'HwAgLrngHwAgFilSt',-1440,'HwAgLrngSysTqFilSt',-255,'HwTqLrngHwAgRef',-1440,'HwTqLrngCovariMtrx',-4000,'HwTqLrngEstimnVect',-511,'HwTqLrngSampleCntNeg',0,'HwTqLrngSampleCntPos',0,'HwTqLrngSts',0,'YawRateOffsVld',0)];
SnsrOffsLrnd.EngMax = [struct('YawRateOffs',20,'HwAgOffs',20,'HwTqOffs',4,'HwAgLrndTi',1440,'HwAgLrngYawOffsRef',20,'YawRateElpdTi',1440,'HwAgLrngHwAgFilSt',1440,'HwAgLrngSysTqFilSt',255,'HwTqLrngHwAgRef',1440,'HwTqLrngCovariMtrx',4000,'HwTqLrngEstimnVect',511,'HwTqLrngSampleCntNeg',65535,'HwTqLrngSampleCntPos',65535,'HwTqLrngSts',4,'YawRateOffsVld',1)];
SnsrOffsLrnd.CustomerVisible = false;
SnsrOffsLrnd.Impact = 'M';
SnsrOffsLrnd.TuningOwner = 'CSE';
SnsrOffsLrnd.CoderInfo.Alias = 'SnsrLrndOffs';
SnsrOffsLrnd.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dSnsrOffsLrngHwAgFild = DataDict.Display;
dSnsrOffsLrngHwAgFild.LongName = 'Handwheel Angle Filtered';
dSnsrOffsLrngHwAgFild.Description = 'Handwheel Angle Filtered';
dSnsrOffsLrngHwAgFild.DocUnits = 'HwDeg';
dSnsrOffsLrngHwAgFild.EngDT = dt.float32;
dSnsrOffsLrngHwAgFild.EngMin = -1440;
dSnsrOffsLrngHwAgFild.EngMax = 1440;
dSnsrOffsLrngHwAgFild.InitRowCol = [1  1];


dSnsrOffsLrngHwAgLrngCdnVld = DataDict.Display;
dSnsrOffsLrngHwAgLrngCdnVld.LongName = 'Handwheel Angle Learning Conditions Valid';
dSnsrOffsLrngHwAgLrngCdnVld.Description = [...
  'Handwheel Angle Learning Learning Conditions Valid'];
dSnsrOffsLrngHwAgLrngCdnVld.DocUnits = 'Cnt';
dSnsrOffsLrngHwAgLrngCdnVld.EngDT = dt.lgc;
dSnsrOffsLrngHwAgLrngCdnVld.EngMin = 0;
dSnsrOffsLrngHwAgLrngCdnVld.EngMax = 1;
dSnsrOffsLrngHwAgLrngCdnVld.InitRowCol = [1  1];


dSnsrOffsLrngHwAgLrngEna = DataDict.Display;
dSnsrOffsLrngHwAgLrngEna.LongName = 'Handwheel Angle Learning Enable';
dSnsrOffsLrngHwAgLrngEna.Description = 'Handwheel Angle Learning Enable';
dSnsrOffsLrngHwAgLrngEna.DocUnits = 'Cnt';
dSnsrOffsLrngHwAgLrngEna.EngDT = dt.lgc;
dSnsrOffsLrngHwAgLrngEna.EngMin = 0;
dSnsrOffsLrngHwAgLrngEna.EngMax = 1;
dSnsrOffsLrngHwAgLrngEna.InitRowCol = [1  1];


dSnsrOffsLrngHwAgLrngRst = DataDict.Display;
dSnsrOffsLrngHwAgLrngRst.LongName = 'Handwheel Angle Learning Reset';
dSnsrOffsLrngHwAgLrngRst.Description = 'Handwheel Angle Learning Reset';
dSnsrOffsLrngHwAgLrngRst.DocUnits = 'Cnt';
dSnsrOffsLrngHwAgLrngRst.EngDT = dt.lgc;
dSnsrOffsLrngHwAgLrngRst.EngMin = 0;
dSnsrOffsLrngHwAgLrngRst.EngMax = 1;
dSnsrOffsLrngHwAgLrngRst.InitRowCol = [1  1];


dSnsrOffsLrngHwAgLrngSysTqLoThd = DataDict.Display;
dSnsrOffsLrngHwAgLrngSysTqLoThd.LongName = 'Handwheel Angle Learning System Torque Low Threshold';
dSnsrOffsLrngHwAgLrngSysTqLoThd.Description = [...
  'Low Threshold for the System Torque average.'];
dSnsrOffsLrngHwAgLrngSysTqLoThd.DocUnits = 'HwNwtMtr';
dSnsrOffsLrngHwAgLrngSysTqLoThd.EngDT = dt.float32;
dSnsrOffsLrngHwAgLrngSysTqLoThd.EngMin = -255;
dSnsrOffsLrngHwAgLrngSysTqLoThd.EngMax = 0;
dSnsrOffsLrngHwAgLrngSysTqLoThd.InitRowCol = [1  1];


dSnsrOffsLrngHwAgLrngSysTqUpThd = DataDict.Display;
dSnsrOffsLrngHwAgLrngSysTqUpThd.LongName = 'Handwheel Angle Learning System Torque Up Threshold';
dSnsrOffsLrngHwAgLrngSysTqUpThd.Description = [...
  'High Threshold for the System Torque average'];
dSnsrOffsLrngHwAgLrngSysTqUpThd.DocUnits = 'HwNwtMtr';
dSnsrOffsLrngHwAgLrngSysTqUpThd.EngDT = dt.float32;
dSnsrOffsLrngHwAgLrngSysTqUpThd.EngMin = 0;
dSnsrOffsLrngHwAgLrngSysTqUpThd.EngMax = 255;
dSnsrOffsLrngHwAgLrngSysTqUpThd.InitRowCol = [1  1];


dSnsrOffsLrngHwAgLrngSysTqVldt = DataDict.Display;
dSnsrOffsLrngHwAgLrngSysTqVldt.LongName = 'Handwheel Angle Learning System Torque Valid';
dSnsrOffsLrngHwAgLrngSysTqVldt.Description = [...
  'This signal becomes true when the System Torque average is within the ' ...
  'define threshold.'];
dSnsrOffsLrngHwAgLrngSysTqVldt.DocUnits = 'Cnt';
dSnsrOffsLrngHwAgLrngSysTqVldt.EngDT = dt.lgc;
dSnsrOffsLrngHwAgLrngSysTqVldt.EngMin = 0;
dSnsrOffsLrngHwAgLrngSysTqVldt.EngMax = 1;
dSnsrOffsLrngHwAgLrngSysTqVldt.InitRowCol = [1  1];


dSnsrOffsLrngHwAgLrngTiVldt = DataDict.Display;
dSnsrOffsLrngHwAgLrngTiVldt.LongName = 'Handwheel Angle Learning Time Valid';
dSnsrOffsLrngHwAgLrngTiVldt.Description = [...
  'Within the Handwheel Angle Offset Learning, this signal becomes true w' ...
  'hen the elapsed learning time reaches the define learning time'];
dSnsrOffsLrngHwAgLrngTiVldt.DocUnits = 'Cnt';
dSnsrOffsLrngHwAgLrngTiVldt.EngDT = dt.lgc;
dSnsrOffsLrngHwAgLrngTiVldt.EngMin = 0;
dSnsrOffsLrngHwAgLrngTiVldt.EngMax = 1;
dSnsrOffsLrngHwAgLrngTiVldt.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngEna = DataDict.Display;
dSnsrOffsLrngHwTqLrngEna.LongName = 'Handwheel Torque Learning Enable';
dSnsrOffsLrngHwTqLrngEna.Description = [...
  'Handwheel Torque Learning Learning Enable'];
dSnsrOffsLrngHwTqLrngEna.DocUnits = 'Cnt';
dSnsrOffsLrngHwTqLrngEna.EngDT = dt.lgc;
dSnsrOffsLrngHwTqLrngEna.EngMin = 0;
dSnsrOffsLrngHwTqLrngEna.EngMax = 1;
dSnsrOffsLrngHwTqLrngEna.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngEstimnVldt = DataDict.Display;
dSnsrOffsLrngHwTqLrngEstimnVldt.LongName = 'Handwheel Torque Learning Estimation Valid';
dSnsrOffsLrngHwTqLrngEstimnVldt.Description = [...
  'Validity of the last estimation of the HwTq Offset. When true, NVM is ' ...
  'updated with the new estimation.'];
dSnsrOffsLrngHwTqLrngEstimnVldt.DocUnits = 'Cnt';
dSnsrOffsLrngHwTqLrngEstimnVldt.EngDT = dt.lgc;
dSnsrOffsLrngHwTqLrngEstimnVldt.EngMin = 0;
dSnsrOffsLrngHwTqLrngEstimnVldt.EngMax = 1;
dSnsrOffsLrngHwTqLrngEstimnVldt.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngHwAgMeas = DataDict.Display;
dSnsrOffsLrngHwTqLrngHwAgMeas.LongName = 'Handwheel Torque Learning Handwheel Angle Measure';
dSnsrOffsLrngHwTqLrngHwAgMeas.Description = [...
  'Value of the Handwheel Angle signal which is used by the Learning algo' ...
  'rihtm.'];
dSnsrOffsLrngHwTqLrngHwAgMeas.DocUnits = 'HwDeg';
dSnsrOffsLrngHwTqLrngHwAgMeas.EngDT = dt.float32;
dSnsrOffsLrngHwTqLrngHwAgMeas.EngMin = -180;
dSnsrOffsLrngHwTqLrngHwAgMeas.EngMax = 180;
dSnsrOffsLrngHwTqLrngHwAgMeas.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngHwTqMeas = DataDict.Display;
dSnsrOffsLrngHwTqLrngHwTqMeas.LongName = 'Handwheel Torque Learning Handwheel Torque Measure';
dSnsrOffsLrngHwTqLrngHwTqMeas.Description = [...
  'Value of the Handwheel Torque signal which is used by the Learning alg' ...
  'orihtm.'];
dSnsrOffsLrngHwTqLrngHwTqMeas.DocUnits = 'HwNwtMtr';
dSnsrOffsLrngHwTqLrngHwTqMeas.EngDT = dt.float32;
dSnsrOffsLrngHwTqLrngHwTqMeas.EngMin = -4;
dSnsrOffsLrngHwTqLrngHwTqMeas.EngMax = 4;
dSnsrOffsLrngHwTqLrngHwTqMeas.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngHwTqOffsRaw = DataDict.Display;
dSnsrOffsLrngHwTqLrngHwTqOffsRaw.LongName = 'Handwheel Torque Learning Handwheel Torque Offset Raw';
dSnsrOffsLrngHwTqLrngHwTqOffsRaw.Description = [...
  'NON validated estimation of the Handwheel Torque Offset.'];
dSnsrOffsLrngHwTqLrngHwTqOffsRaw.DocUnits = 'HwNwtMtr';
dSnsrOffsLrngHwTqLrngHwTqOffsRaw.EngDT = dt.float32;
dSnsrOffsLrngHwTqLrngHwTqOffsRaw.EngMin = -1022;
dSnsrOffsLrngHwTqLrngHwTqOffsRaw.EngMax = 1022;
dSnsrOffsLrngHwTqLrngHwTqOffsRaw.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngMeasEna = DataDict.Display;
dSnsrOffsLrngHwTqLrngMeasEna.LongName = 'Handwheel Torque Learning Measure Enable';
dSnsrOffsLrngHwTqLrngMeasEna.Description = [...
  'Handwheel Torque Learning Measure Enable'];
dSnsrOffsLrngHwTqLrngMeasEna.DocUnits = 'Cnt';
dSnsrOffsLrngHwTqLrngMeasEna.EngDT = dt.lgc;
dSnsrOffsLrngHwTqLrngMeasEna.EngMin = 0;
dSnsrOffsLrngHwTqLrngMeasEna.EngMax = 1;
dSnsrOffsLrngHwTqLrngMeasEna.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngSampleCntTot = DataDict.Display;
dSnsrOffsLrngHwTqLrngSampleCntTot.LongName = 'Handwheel Torque Learning Sample Count Total';
dSnsrOffsLrngHwTqLrngSampleCntTot.Description = [...
  'Total amount of samples used by the Handwheel Torque Offset Learning a' ...
  'lgorithm.'];
dSnsrOffsLrngHwTqLrngSampleCntTot.DocUnits = 'Cnt';
dSnsrOffsLrngHwTqLrngSampleCntTot.EngDT = dt.float32;
dSnsrOffsLrngHwTqLrngSampleCntTot.EngMin = 0;
dSnsrOffsLrngHwTqLrngSampleCntTot.EngMax = 65535;
dSnsrOffsLrngHwTqLrngSampleCntTot.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngSampleImb = DataDict.Display;
dSnsrOffsLrngHwTqLrngSampleImb.LongName = 'Handwheel Torque Learning Sample Imbalance';
dSnsrOffsLrngHwTqLrngSampleImb.Description = [...
  'Difference (imbalance) between amount of HwAg positive and HwAg negati' ...
  've samples, referered to the total amount of samples (Pos+Neg).'];
dSnsrOffsLrngHwTqLrngSampleImb.DocUnits = 'Uls';
dSnsrOffsLrngHwTqLrngSampleImb.EngDT = dt.float32;
dSnsrOffsLrngHwTqLrngSampleImb.EngMin = 0;
dSnsrOffsLrngHwTqLrngSampleImb.EngMax = 1;
dSnsrOffsLrngHwTqLrngSampleImb.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngTqInpPrsnt = DataDict.Display;
dSnsrOffsLrngHwTqLrngTqInpPrsnt.LongName = 'Handwheel Torque Learning Torque Input Present';
dSnsrOffsLrngHwTqLrngTqInpPrsnt.Description = [...
  'Indicates the presence of Torque Input. True = "Torque Input Present",' ...
  ' False = "Torque Input NOT Present".'];
dSnsrOffsLrngHwTqLrngTqInpPrsnt.DocUnits = 'Cnt';
dSnsrOffsLrngHwTqLrngTqInpPrsnt.EngDT = dt.lgc;
dSnsrOffsLrngHwTqLrngTqInpPrsnt.EngMin = 0;
dSnsrOffsLrngHwTqLrngTqInpPrsnt.EngMax = 1;
dSnsrOffsLrngHwTqLrngTqInpPrsnt.InitRowCol = [1  1];


dSnsrOffsLrngHwTqLrngTqInpPrsntVld = DataDict.Display;
dSnsrOffsLrngHwTqLrngTqInpPrsntVld.LongName = 'Handwheel Torque Learning Torque Input Present Valid';
dSnsrOffsLrngHwTqLrngTqInpPrsntVld.Description = [...
  'Indicates the validity of the presence of Torque Input. True = "Signal' ...
  ' Valid", False = "Signal Not Valid".'];
dSnsrOffsLrngHwTqLrngTqInpPrsntVld.DocUnits = 'Cnt';
dSnsrOffsLrngHwTqLrngTqInpPrsntVld.EngDT = dt.lgc;
dSnsrOffsLrngHwTqLrngTqInpPrsntVld.EngMin = 0;
dSnsrOffsLrngHwTqLrngTqInpPrsntVld.EngMax = 1;
dSnsrOffsLrngHwTqLrngTqInpPrsntVld.InitRowCol = [1  1];


dSnsrOffsLrngHwVelFild = DataDict.Display;
dSnsrOffsLrngHwVelFild.LongName = 'Handwheel Velocity Filtered';
dSnsrOffsLrngHwVelFild.Description = 'Handwheel Velocity Filtered';
dSnsrOffsLrngHwVelFild.DocUnits = 'HwRadPerSec';
dSnsrOffsLrngHwVelFild.EngDT = dt.float32;
dSnsrOffsLrngHwVelFild.EngMin = -42;
dSnsrOffsLrngHwVelFild.EngMax = 42;
dSnsrOffsLrngHwVelFild.InitRowCol = [1  1];


dSnsrOffsLrngSysTqFild = DataDict.Display;
dSnsrOffsLrngSysTqFild.LongName = 'System Torque Filtered';
dSnsrOffsLrngSysTqFild.Description = 'System Torque Filtered';
dSnsrOffsLrngSysTqFild.DocUnits = 'HwNwtMtr';
dSnsrOffsLrngSysTqFild.EngDT = dt.float32;
dSnsrOffsLrngSysTqFild.EngMin = -895;
dSnsrOffsLrngSysTqFild.EngMax = 895;
dSnsrOffsLrngSysTqFild.InitRowCol = [1  1];


dSnsrOffsLrngTqInpDetnHwTqFild = DataDict.Display;
dSnsrOffsLrngTqInpDetnHwTqFild.LongName = 'Torque Input Detection Handwheel Torque Filtered';
dSnsrOffsLrngTqInpDetnHwTqFild.Description = [...
  'Handwheel torque signal filtered for the Torque Input Detection algori' ...
  'htm.'];
dSnsrOffsLrngTqInpDetnHwTqFild.DocUnits = 'HwNwtMtr';
dSnsrOffsLrngTqInpDetnHwTqFild.EngDT = dt.float32;
dSnsrOffsLrngTqInpDetnHwTqFild.EngMin = -10;
dSnsrOffsLrngTqInpDetnHwTqFild.EngMax = 10;
dSnsrOffsLrngTqInpDetnHwTqFild.InitRowCol = [1  1];


dSnsrOffsLrngTqInpDetnStg1Outp = DataDict.Display;
dSnsrOffsLrngTqInpDetnStg1Outp.LongName = 'Torque Input Detection Stage 1 Output';
dSnsrOffsLrngTqInpDetnStg1Outp.Description = [...
  'Stage 1 Output of the Torque Input Detection algorithm.'];
dSnsrOffsLrngTqInpDetnStg1Outp.DocUnits = 'Db';
dSnsrOffsLrngTqInpDetnStg1Outp.EngDT = dt.float32;
dSnsrOffsLrngTqInpDetnStg1Outp.EngMin = -97;
dSnsrOffsLrngTqInpDetnStg1Outp.EngMax = 30;
dSnsrOffsLrngTqInpDetnStg1Outp.InitRowCol = [1  1];


dSnsrOffsLrngTqInpPrsntRaw = DataDict.Display;
dSnsrOffsLrngTqInpPrsntRaw.LongName = 'Torque Input Present Raw';
dSnsrOffsLrngTqInpPrsntRaw.Description = 'Torque Input Present Raw';
dSnsrOffsLrngTqInpPrsntRaw.DocUnits = 'Cnt';
dSnsrOffsLrngTqInpPrsntRaw.EngDT = dt.lgc;
dSnsrOffsLrngTqInpPrsntRaw.EngMin = 0;
dSnsrOffsLrngTqInpPrsntRaw.EngMax = 1;
dSnsrOffsLrngTqInpPrsntRaw.InitRowCol = [1  1];


dSnsrOffsLrngYawA = DataDict.Display;
dSnsrOffsLrngYawA.LongName = 'Yaw Acceleration';
dSnsrOffsLrngYawA.Description = 'Yaw Acceleration';
dSnsrOffsLrngYawA.DocUnits = 'VehDegPerSecSqd';
dSnsrOffsLrngYawA.EngDT = dt.float32;
dSnsrOffsLrngYawA.EngMin = -24000;
dSnsrOffsLrngYawA.EngMax = 24000;
dSnsrOffsLrngYawA.InitRowCol = [1  1];


dSnsrOffsLrngYawLrngBiasEstimnRaw = DataDict.Display;
dSnsrOffsLrngYawLrngBiasEstimnRaw.LongName = 'Yaw Learning Bias Estimation Raw';
dSnsrOffsLrngYawLrngBiasEstimnRaw.Description = [...
  'Yaw rate Learning Bias Estimation Raw.'];
dSnsrOffsLrngYawLrngBiasEstimnRaw.DocUnits = 'VehDegPerSec';
dSnsrOffsLrngYawLrngBiasEstimnRaw.EngDT = dt.float32;
dSnsrOffsLrngYawLrngBiasEstimnRaw.EngMin = -20;
dSnsrOffsLrngYawLrngBiasEstimnRaw.EngMax = 20;
dSnsrOffsLrngYawLrngBiasEstimnRaw.InitRowCol = [1  1];


dSnsrOffsLrngYawLrngCdnVld = DataDict.Display;
dSnsrOffsLrngYawLrngCdnVld.LongName = 'Yaw Learning Conditions Valid';
dSnsrOffsLrngYawLrngCdnVld.Description = [...
  'Yaw Learning Learning Conditions Valid'];
dSnsrOffsLrngYawLrngCdnVld.DocUnits = 'Cnt';
dSnsrOffsLrngYawLrngCdnVld.EngDT = dt.lgc;
dSnsrOffsLrngYawLrngCdnVld.EngMin = 0;
dSnsrOffsLrngYawLrngCdnVld.EngMax = 1;
dSnsrOffsLrngYawLrngCdnVld.InitRowCol = [1  1];


dSnsrOffsLrngYawLrngEna = DataDict.Display;
dSnsrOffsLrngYawLrngEna.LongName = 'Yaw Learning Enable';
dSnsrOffsLrngYawLrngEna.Description = 'Yaw Learning Enable';
dSnsrOffsLrngYawLrngEna.DocUnits = 'Cnt';
dSnsrOffsLrngYawLrngEna.EngDT = dt.lgc;
dSnsrOffsLrngYawLrngEna.EngMin = 0;
dSnsrOffsLrngYawLrngEna.EngMax = 1;
dSnsrOffsLrngYawLrngEna.InitRowCol = [1  1];


dSnsrOffsLrngYawRateFild = DataDict.Display;
dSnsrOffsLrngYawRateFild.LongName = 'Yaw Rate Filtered';
dSnsrOffsLrngYawRateFild.Description = 'Yaw Rate Filtered';
dSnsrOffsLrngYawRateFild.DocUnits = 'VehDegPerSec';
dSnsrOffsLrngYawRateFild.EngDT = dt.float32;
dSnsrOffsLrngYawRateFild.EngMin = -120;
dSnsrOffsLrngYawRateFild.EngMax = 120;
dSnsrOffsLrngYawRateFild.InitRowCol = [1  1];


dSnsrOffsLrngYawRateFildCorrd = DataDict.Display;
dSnsrOffsLrngYawRateFildCorrd.LongName = 'Yaw Rate Filtered Corrected';
dSnsrOffsLrngYawRateFildCorrd.Description = 'Yaw Rate Filtered Corrected';
dSnsrOffsLrngYawRateFildCorrd.DocUnits = 'VehDegPerSec';
dSnsrOffsLrngYawRateFildCorrd.EngDT = dt.float32;
dSnsrOffsLrngYawRateFildCorrd.EngMin = -140;
dSnsrOffsLrngYawRateFildCorrd.EngMax = 140;
dSnsrOffsLrngYawRateFildCorrd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAgCdngFil = DataDict.PIM;
HwAgCdngFil.LongName = 'Handwheel Angle Conditioning Filter';
HwAgCdngFil.Description = [...
  'State variable for Handwheel Angle Conditioning Low Pass Filter'];
HwAgCdngFil.DocUnits = 'Uls';
HwAgCdngFil.EngDT = struct.FilLpRec1;
HwAgCdngFil.EngMin = [struct('FilSt',-1440,'FilGain',0)];
HwAgCdngFil.EngMax = [struct('FilSt',1440,'FilGain',0.9999998493)];
HwAgCdngFil.InitRowCol = [1  1];


HwAgLrngDrvgDstPrev = DataDict.PIM;
HwAgLrngDrvgDstPrev.LongName = 'Handwheel Angle Learning Driving Distance Previous';
HwAgLrngDrvgDstPrev.Description = [...
  'Previous value of Handwheel Angle Learning Driving Distance'];
HwAgLrngDrvgDstPrev.DocUnits = 'Mtr';
HwAgLrngDrvgDstPrev.EngDT = dt.float32;
HwAgLrngDrvgDstPrev.EngMin = 0;
HwAgLrngDrvgDstPrev.EngMax = 255;
HwAgLrngDrvgDstPrev.InitRowCol = [1  1];


HwAgLrngFil1 = DataDict.PIM;
HwAgLrngFil1.LongName = 'Handwheel Angle Learning Filter 1';
HwAgLrngFil1.Description = [...
  'State variable for Handwheel Angle Learning Low Pass Filter 1'];
HwAgLrngFil1.DocUnits = 'Uls';
HwAgLrngFil1.EngDT = struct.FilLpRec1;
HwAgLrngFil1.EngMin = [struct('FilSt',-1440,'FilGain',2.398522393e-06)];
HwAgLrngFil1.EngMax = [struct('FilSt',1440,'FilGain',0.8999999166)];
HwAgLrngFil1.InitRowCol = [1  1];


HwAgLrngFil2 = DataDict.PIM;
HwAgLrngFil2.LongName = 'Handwheel Angle Learning Filter 2';
HwAgLrngFil2.Description = [...
  'State variable for Handwheel Angle Learning Low Pass Filter 2'];
HwAgLrngFil2.DocUnits = 'Uls';
HwAgLrngFil2.EngDT = struct.FilLpRec1;
HwAgLrngFil2.EngMin = [struct('FilSt',-1440,'FilGain',2.398522393e-06)];
HwAgLrngFil2.EngMax = [struct('FilSt',1440,'FilGain',0.8999999166)];
HwAgLrngFil2.InitRowCol = [1  1];


HwAgLrngStRst = DataDict.PIM;
HwAgLrngStRst.LongName = 'Handwheel Angle Learning State Reset';
HwAgLrngStRst.Description = [...
  'Indicates Handwheel Angle Learning State Reset as True or False'];
HwAgLrngStRst.DocUnits = 'Cnt';
HwAgLrngStRst.EngDT = dt.lgc;
HwAgLrngStRst.EngMin = 0;
HwAgLrngStRst.EngMax = 1;
HwAgLrngStRst.InitRowCol = [1  1];


HwAgLrngSysTqFil1 = DataDict.PIM;
HwAgLrngSysTqFil1.LongName = 'Handwheel Angle Learning System Torque Filter 1';
HwAgLrngSysTqFil1.Description = [...
  'State variable for Handwheel Angle Learning System Torque Filter Low P' ...
  'ass Filter 1'];
HwAgLrngSysTqFil1.DocUnits = 'Uls';
HwAgLrngSysTqFil1.EngDT = struct.FilLpRec1;
HwAgLrngSysTqFil1.EngMin = [struct('FilSt',-255,'FilGain',2.398522393e-06)];
HwAgLrngSysTqFil1.EngMax = [struct('FilSt',255,'FilGain',0.8999999166)];
HwAgLrngSysTqFil1.InitRowCol = [1  1];


HwAgLrngSysTqFil2 = DataDict.PIM;
HwAgLrngSysTqFil2.LongName = 'Handwheel Angle Learning System Torque Filter 2';
HwAgLrngSysTqFil2.Description = [...
  'State variable for Handwheel Angle Learning System Torque Filter Low P' ...
  'ass Filter 2'];
HwAgLrngSysTqFil2.DocUnits = 'Uls';
HwAgLrngSysTqFil2.EngDT = struct.FilLpRec1;
HwAgLrngSysTqFil2.EngMin = [struct('FilSt',-255,'FilGain',2.398522393e-06)];
HwAgLrngSysTqFil2.EngMax = [struct('FilSt',255,'FilGain',0.8999999166)];
HwAgLrngSysTqFil2.InitRowCol = [1  1];


HwAgMeasFil1 = DataDict.PIM;
HwAgMeasFil1.LongName = 'Handwheel Angle Measure Filter 1 State Variable';
HwAgMeasFil1.Description = [...
  'State variable for Handwheel Angle Measure Low Pass Filter 1'];
HwAgMeasFil1.DocUnits = 'Uls';
HwAgMeasFil1.EngDT = struct.FilLpRec1;
HwAgMeasFil1.EngMin = [struct('FilSt',-180,'FilGain',0)];
HwAgMeasFil1.EngMax = [struct('FilSt',180,'FilGain',0.7488112311)];
HwAgMeasFil1.InitRowCol = [1  1];


HwAgMeasFil2 = DataDict.PIM;
HwAgMeasFil2.LongName = 'Handwheel Angle Measure Filter 2 State Variable';
HwAgMeasFil2.Description = [...
  'State vaiable for Handwheel Angle Measure Low Pass Filter 2'];
HwAgMeasFil2.DocUnits = 'Uls';
HwAgMeasFil2.EngDT = struct.FilLpRec1;
HwAgMeasFil2.EngMin = [struct('FilSt',-180,'FilGain',0)];
HwAgMeasFil2.EngMax = [struct('FilSt',180,'FilGain',0.7488112311)];
HwAgMeasFil2.InitRowCol = [1  1];


HwTqLrngEnaTmrRef = DataDict.PIM;
HwTqLrngEnaTmrRef.LongName = 'Handwheel Torque Learning Enable Timer Reference';
HwTqLrngEnaTmrRef.Description = [...
  'Enable the learning HandWheel Torque Timer Reference'];
HwTqLrngEnaTmrRef.DocUnits = 'Cnt';
HwTqLrngEnaTmrRef.EngDT = dt.u32;
HwTqLrngEnaTmrRef.EngMin = 0;
HwTqLrngEnaTmrRef.EngMax = 4294967295;
HwTqLrngEnaTmrRef.InitRowCol = [1  1];


HwTqLrngMeasTmrRef = DataDict.PIM;
HwTqLrngMeasTmrRef.LongName = 'Handwheel Torque Learning Measure Timer Reference';
HwTqLrngMeasTmrRef.Description = [...
  'Measure the learning HandWheel Torque Timer Reference'];
HwTqLrngMeasTmrRef.DocUnits = 'Cnt';
HwTqLrngMeasTmrRef.EngDT = dt.u32;
HwTqLrngMeasTmrRef.EngMin = 0;
HwTqLrngMeasTmrRef.EngMax = 4294967295;
HwTqLrngMeasTmrRef.InitRowCol = [1  1];


HwTqLrngStRst = DataDict.PIM;
HwTqLrngStRst.LongName = 'Handwheel Torque Learning State Reset';
HwTqLrngStRst.Description = [...
  'Indicates Handwheel Torque Learning State Reset as True or False'];
HwTqLrngStRst.DocUnits = 'Cnt';
HwTqLrngStRst.EngDT = dt.lgc;
HwTqLrngStRst.EngMin = 0;
HwTqLrngStRst.EngMax = 1;
HwTqLrngStRst.InitRowCol = [1  1];


HwTqLrngTqInpDetnEnaPrev = DataDict.PIM;
HwTqLrngTqInpDetnEnaPrev.LongName = 'Handwheel Torque Learning Torque Input Detection Enable Previous';
HwTqLrngTqInpDetnEnaPrev.Description = [...
  'Previous Value of Torque Input Detection Enable'];
HwTqLrngTqInpDetnEnaPrev.DocUnits = 'Cnt';
HwTqLrngTqInpDetnEnaPrev.EngDT = dt.lgc;
HwTqLrngTqInpDetnEnaPrev.EngMin = 0;
HwTqLrngTqInpDetnEnaPrev.EngMax = 1;
HwTqLrngTqInpDetnEnaPrev.InitRowCol = [1  1];


HwTqLrngTqInpPrsnt = DataDict.PIM;
HwTqLrngTqInpPrsnt.LongName = 'Handwheel Torque Learning Torque Input present';
HwTqLrngTqInpPrsnt.Description = [...
  'Handwheel Torque Learning Torque Input present is used for the preproc' ...
  'essing'];
HwTqLrngTqInpPrsnt.DocUnits = 'Cnt';
HwTqLrngTqInpPrsnt.EngDT = dt.lgc;
HwTqLrngTqInpPrsnt.EngMin = 0;
HwTqLrngTqInpPrsnt.EngMax = 1;
HwTqLrngTqInpPrsnt.InitRowCol = [1  1];


HwTqMeasFil1 = DataDict.PIM;
HwTqMeasFil1.LongName = 'Handwheel Torque Measure Filter 1';
HwTqMeasFil1.Description = [...
  'State variable for Handwheel Torque Measure Low Pass Filter 1'];
HwTqMeasFil1.DocUnits = 'Uls';
HwTqMeasFil1.EngDT = struct.FilLpRec1;
HwTqMeasFil1.EngMin = [struct('FilSt',-4,'FilGain',0.0001087775916)];
HwTqMeasFil1.EngMax = [struct('FilSt',4,'FilGain',0.7488112311)];
HwTqMeasFil1.InitRowCol = [1  1];


HwTqMeasFil2 = DataDict.PIM;
HwTqMeasFil2.LongName = 'Handwheel Torque Measure Filter 2';
HwTqMeasFil2.Description = [...
  'State variable for Handwheel Torque Measure Low Pass Filter 2'];
HwTqMeasFil2.DocUnits = 'Uls';
HwTqMeasFil2.EngDT = struct.FilLpRec1;
HwTqMeasFil2.EngMin = [struct('FilSt',-4,'FilGain',0.0001087775916)];
HwTqMeasFil2.EngMax = [struct('FilSt',4,'FilGain',0.7488112311)];
HwTqMeasFil2.InitRowCol = [1  1];


HwVelCdngFil = DataDict.PIM;
HwVelCdngFil.LongName = 'Handwheel Velocity Conditioning Filter';
HwVelCdngFil.Description = [...
  'State variable for Handwheel Velocity Conditioning Low Pass Filter'];
HwVelCdngFil.DocUnits = 'Uls';
HwVelCdngFil.EngDT = struct.FilLpRec1;
HwVelCdngFil.EngMin = [struct('FilSt',-42,'FilGain',0)];
HwVelCdngFil.EngMax = [struct('FilSt',42,'FilGain',0.9999998493)];
HwVelCdngFil.InitRowCol = [1  1];


SysTqCdngFil = DataDict.PIM;
SysTqCdngFil.LongName = 'System Torque Conditioning Filter';
SysTqCdngFil.Description = [...
  'State variable for System Torque Conditioning Low Pass Filter'];
SysTqCdngFil.DocUnits = 'Uls';
SysTqCdngFil.EngDT = struct.FilLpRec1;
SysTqCdngFil.EngMin = [struct('FilSt',-895,'FilGain',0)];
SysTqCdngFil.EngMax = [struct('FilSt',895,'FilGain',0.9999998493)];
SysTqCdngFil.InitRowCol = [1  1];


TqInpDetnEnaTi = DataDict.PIM;
TqInpDetnEnaTi.LongName = 'Torque Input Detection Enable Time';
TqInpDetnEnaTi.Description = [...
  'Torque Input Detection Enable Time in Seconds'];
TqInpDetnEnaTi.DocUnits = 'Sec';
TqInpDetnEnaTi.EngDT = dt.float32;
TqInpDetnEnaTi.EngMin = 0;
TqInpDetnEnaTi.EngMax = 1023;
TqInpDetnEnaTi.InitRowCol = [1  1];


TqInpDetnHwTqFil = DataDict.PIM;
TqInpDetnHwTqFil.LongName = 'Torque Input Detection Handwheel Torque Filter State Variable';
TqInpDetnHwTqFil.Description = [...
  'State variable for Torque Input Detection Handwheel Torque Low Pass Fi' ...
  'lter'];
TqInpDetnHwTqFil.DocUnits = 'Uls';
TqInpDetnHwTqFil.EngDT = struct.FilLpRec1;
TqInpDetnHwTqFil.EngMin = [struct('FilSt',-10,'FilGain',0)];
TqInpDetnHwTqFil.EngMax = [struct('FilSt',10,'FilGain',0.9567860817)];
TqInpDetnHwTqFil.InitRowCol = [1  1];


TqInpDetnHwTqPreProc = DataDict.PIM;
TqInpDetnHwTqPreProc.LongName = 'Torque Input Detection Handwheel Torque Preprocessing';
TqInpDetnHwTqPreProc.Description = [...
  'Used to Preprocess the Torque Input Detection Handwheel Torque'];
TqInpDetnHwTqPreProc.DocUnits = 'Db';
TqInpDetnHwTqPreProc.EngDT = dt.float32;
TqInpDetnHwTqPreProc.EngMin = -100;
TqInpDetnHwTqPreProc.EngMax = 30;
TqInpDetnHwTqPreProc.InitRowCol = [1  1];


TqInpDetnPreProcEnaLoop = DataDict.PIM;
TqInpDetnPreProcEnaLoop.LongName = 'Torque Input Detection Preprocess Enable Loop';
TqInpDetnPreProcEnaLoop.Description = [...
  'Used to Enable the Torque Input Detection Preprocssing Loop'];
TqInpDetnPreProcEnaLoop.DocUnits = 'Cnt';
TqInpDetnPreProcEnaLoop.EngDT = dt.u16;
TqInpDetnPreProcEnaLoop.EngMin = 0;
TqInpDetnPreProcEnaLoop.EngMax = 5077;
TqInpDetnPreProcEnaLoop.InitRowCol = [1  1];


TqInpDetnSinGenrAg = DataDict.PIM;
TqInpDetnSinGenrAg.LongName = 'Torque Input Detection Sine Generator Angle';
TqInpDetnSinGenrAg.Description = [...
  'Used to detect the Sine Generators Angle'];
TqInpDetnSinGenrAg.DocUnits = 'MatRad';
TqInpDetnSinGenrAg.EngDT = dt.float32;
TqInpDetnSinGenrAg.EngMin = 0;
TqInpDetnSinGenrAg.EngMax = 6.283185307;
TqInpDetnSinGenrAg.InitRowCol = [1  1];


TqInpDetnStg1Buf = DataDict.PIM;
TqInpDetnStg1Buf.LongName = 'Torque Input Detection Stage 1 Buffer';
TqInpDetnStg1Buf.Description = [...
  'Used to obtain the length of the Array Signal'];
TqInpDetnStg1Buf.DocUnits = 'HwNwtMtr';
TqInpDetnStg1Buf.EngDT = dt.float32;
TqInpDetnStg1Buf.EngMin = -10;
TqInpDetnStg1Buf.EngMax = 10;
TqInpDetnStg1Buf.InitRowCol = [1  72];


TqInpDetnStg1FilSt1 = DataDict.PIM;
TqInpDetnStg1FilSt1.LongName = 'Torque Input Detection Stage 1 Filter State 1';
TqInpDetnStg1FilSt1.Description = [...
  'Torque Input Detection Stage Filter State 1'];
TqInpDetnStg1FilSt1.DocUnits = 'Uls';
TqInpDetnStg1FilSt1.EngDT = dt.float32;
TqInpDetnStg1FilSt1.EngMin = -1000000000;
TqInpDetnStg1FilSt1.EngMax = 1000000000;
TqInpDetnStg1FilSt1.InitRowCol = [1  1];


TqInpDetnStg1FilSt2 = DataDict.PIM;
TqInpDetnStg1FilSt2.LongName = 'Torque Input Detection Stage 1 Filter State 2';
TqInpDetnStg1FilSt2.Description = [...
  'Torque Input Detection Stage Filter State 2'];
TqInpDetnStg1FilSt2.DocUnits = 'Uls';
TqInpDetnStg1FilSt2.EngDT = dt.float32;
TqInpDetnStg1FilSt2.EngMin = -1000000000;
TqInpDetnStg1FilSt2.EngMax = 1000000000;
TqInpDetnStg1FilSt2.InitRowCol = [1  1];


TqInpDetnStg1Idx = DataDict.PIM;
TqInpDetnStg1Idx.LongName = 'Torque Input Detection Stage 1 Index';
TqInpDetnStg1Idx.Description = [...
  'Index of the Torque Input Detection Stage 1'];
TqInpDetnStg1Idx.DocUnits = 'Cnt';
TqInpDetnStg1Idx.EngDT = dt.u08;
TqInpDetnStg1Idx.EngMin = 0;
TqInpDetnStg1Idx.EngMax = 71;
TqInpDetnStg1Idx.InitRowCol = [1  1];


TqInpDetnStg2CenFilSt1 = DataDict.PIM;
TqInpDetnStg2CenFilSt1.LongName = 'Torque Input Detection Stage 2 Central Filter State 1';
TqInpDetnStg2CenFilSt1.Description = [...
  'State Variable for Torque Input Detection Stage 2 Central Filter State' ...
  ' 1'];
TqInpDetnStg2CenFilSt1.DocUnits = 'Uls';
TqInpDetnStg2CenFilSt1.EngDT = dt.float32;
TqInpDetnStg2CenFilSt1.EngMin = -1000000000;
TqInpDetnStg2CenFilSt1.EngMax = 1000000000;
TqInpDetnStg2CenFilSt1.InitRowCol = [1  1];


TqInpDetnStg2CenFilSt2 = DataDict.PIM;
TqInpDetnStg2CenFilSt2.LongName = 'Torque Input Detection Stage 2 Central Filter State 2';
TqInpDetnStg2CenFilSt2.Description = [...
  'State Variable for Torque Input Detection Stage 2 Central Filter State' ...
  ' 2'];
TqInpDetnStg2CenFilSt2.DocUnits = 'Uls';
TqInpDetnStg2CenFilSt2.EngDT = dt.float32;
TqInpDetnStg2CenFilSt2.EngMin = -1000000000;
TqInpDetnStg2CenFilSt2.EngMax = 1000000000;
TqInpDetnStg2CenFilSt2.InitRowCol = [1  1];


TqInpDetnStg2DwnFilSt1 = DataDict.PIM;
TqInpDetnStg2DwnFilSt1.LongName = 'Torque Input Detection Stage 2 Down Filter State 1';
TqInpDetnStg2DwnFilSt1.Description = [...
  'State Variable for Torque Input Detection Stage 2 Down Filter State 1'];
TqInpDetnStg2DwnFilSt1.DocUnits = 'Uls';
TqInpDetnStg2DwnFilSt1.EngDT = dt.float32;
TqInpDetnStg2DwnFilSt1.EngMin = -1000000000;
TqInpDetnStg2DwnFilSt1.EngMax = 1000000000;
TqInpDetnStg2DwnFilSt1.InitRowCol = [1  1];


TqInpDetnStg2DwnFilSt2 = DataDict.PIM;
TqInpDetnStg2DwnFilSt2.LongName = 'Torque Input Detection Stage 2 Down Filter State 2';
TqInpDetnStg2DwnFilSt2.Description = [...
  'Torque Input Detection Stage 2 Down Filter State 2'];
TqInpDetnStg2DwnFilSt2.DocUnits = 'Uls';
TqInpDetnStg2DwnFilSt2.EngDT = dt.float32;
TqInpDetnStg2DwnFilSt2.EngMin = -1000000000;
TqInpDetnStg2DwnFilSt2.EngMax = 1000000000;
TqInpDetnStg2DwnFilSt2.InitRowCol = [1  1];


TqInpDetnStg2UpFilSt1 = DataDict.PIM;
TqInpDetnStg2UpFilSt1.LongName = 'Torque Input Detection Stage 2 Up Filter State 1';
TqInpDetnStg2UpFilSt1.Description = [...
  'Torque Input Detection Stage 2 Up Filter State 1'];
TqInpDetnStg2UpFilSt1.DocUnits = 'Uls';
TqInpDetnStg2UpFilSt1.EngDT = dt.float32;
TqInpDetnStg2UpFilSt1.EngMin = -1000000000;
TqInpDetnStg2UpFilSt1.EngMax = 1000000000;
TqInpDetnStg2UpFilSt1.InitRowCol = [1  1];


TqInpDetnStg2UpFilSt2 = DataDict.PIM;
TqInpDetnStg2UpFilSt2.LongName = 'Torque Input Detection Stage 2 Up Filter State 2';
TqInpDetnStg2UpFilSt2.Description = [...
  'Torque Input Detection Stage 2 Up Filter State 2'];
TqInpDetnStg2UpFilSt2.DocUnits = 'Uls';
TqInpDetnStg2UpFilSt2.EngDT = dt.float32;
TqInpDetnStg2UpFilSt2.EngMin = -1000000000;
TqInpDetnStg2UpFilSt2.EngMax = 1000000000;
TqInpDetnStg2UpFilSt2.InitRowCol = [1  1];


VehYawRateLrngStRst = DataDict.PIM;
VehYawRateLrngStRst.LongName = 'Vehicle Yaw Rate Learning State Reset';
VehYawRateLrngStRst.Description = [...
  'Indicates Vehicle Yaw Rate Learning State Reset as True or False'];
VehYawRateLrngStRst.DocUnits = 'Cnt';
VehYawRateLrngStRst.EngDT = dt.lgc;
VehYawRateLrngStRst.EngMin = 0;
VehYawRateLrngStRst.EngMax = 1;
VehYawRateLrngStRst.InitRowCol = [1  1];


VehYawRateOffsFrsh = DataDict.PIM;
VehYawRateOffsFrsh.LongName = 'Vehicle Yaw Rate offset Fresh';
VehYawRateOffsFrsh.Description = [...
  'Set status of Vehicle Yaw Rate offset Fresh as True or False'];
VehYawRateOffsFrsh.DocUnits = 'Cnt';
VehYawRateOffsFrsh.EngDT = dt.lgc;
VehYawRateOffsFrsh.EngMin = 0;
VehYawRateOffsFrsh.EngMax = 1;
VehYawRateOffsFrsh.InitRowCol = [1  1];


YawACdngFil = DataDict.PIM;
YawACdngFil.LongName = 'Yaw Accleration Conditioning Filter';
YawACdngFil.Description = [...
  'State Variable for Yaw Accleration Conditioning Low Pass Filter'];
YawACdngFil.DocUnits = 'Uls';
YawACdngFil.EngDT = struct.FilLpRec1;
YawACdngFil.EngMin = [struct('FilSt',-120,'FilGain',0)];
YawACdngFil.EngMax = [struct('FilSt',120,'FilGain',0.9999998493)];
YawACdngFil.InitRowCol = [1  1];


YawCdngFil1 = DataDict.PIM;
YawCdngFil1.LongName = 'Yaw Conditioning Filter 1';
YawCdngFil1.Description = [...
  'State Variable for Yaw Conditioning Low Pass Filter 1'];
YawCdngFil1.DocUnits = 'Uls';
YawCdngFil1.EngDT = struct.FilLpRec1;
YawCdngFil1.EngMin = [struct('FilSt',-120,'FilGain',0)];
YawCdngFil1.EngMax = [struct('FilSt',120,'FilGain',0.9999998493)];
YawCdngFil1.InitRowCol = [1  1];


YawCdngFil2 = DataDict.PIM;
YawCdngFil2.LongName = 'Yaw Conditioning Filter 2';
YawCdngFil2.Description = [...
  'State Variable for Yaw Conditioning Low Pass Filter 2'];
YawCdngFil2.DocUnits = 'Uls';
YawCdngFil2.EngDT = struct.FilLpRec1;
YawCdngFil2.EngMin = [struct('FilSt',-120,'FilGain',0)];
YawCdngFil2.EngMax = [struct('FilSt',120,'FilGain',0.9999998493)];
YawCdngFil2.InitRowCol = [1  1];


YawLrngElpdLrngTi = DataDict.PIM;
YawLrngElpdLrngTi.LongName = 'Yaw Learning Elapsed Learning Time';
YawLrngElpdLrngTi.Description = [...
  'Value of Yaw Learning Elapsed Learning Time'];
YawLrngElpdLrngTi.DocUnits = 'Sec';
YawLrngElpdLrngTi.EngDT = dt.float32;
YawLrngElpdLrngTi.EngMin = 0;
YawLrngElpdLrngTi.EngMax = 28800;
YawLrngElpdLrngTi.InitRowCol = [1  1];


YawLrngFil1 = DataDict.PIM;
YawLrngFil1.LongName = 'Yaw Learning Filter 1';
YawLrngFil1.Description = [...
  'State variable for Yaw Learning Low Pass Filter 1'];
YawLrngFil1.DocUnits = 'Uls';
YawLrngFil1.EngDT = struct.FilLpRec1;
YawLrngFil1.EngMin = [struct('FilSt',-20,'FilGain',2.398522393e-06)];
YawLrngFil1.EngMax = [struct('FilSt',20,'FilGain',0.8999999166)];
YawLrngFil1.InitRowCol = [1  1];


YawLrngFil2 = DataDict.PIM;
YawLrngFil2.LongName = 'Yaw Learning Filter 2';
YawLrngFil2.Description = [...
  'State variable for Yaw Learning Low Pass Filter 2'];
YawLrngFil2.DocUnits = 'Uls';
YawLrngFil2.EngDT = struct.FilLpRec1;
YawLrngFil2.EngMin = [struct('FilSt',-20,'FilGain',2.398522393e-06)];
YawLrngFil2.EngMax = [struct('FilSt',20,'FilGain',0.8999999166)];
YawLrngFil2.InitRowCol = [1  1];


YawRatePrev = DataDict.PIM;
YawRatePrev.LongName = 'Yaw Rate Previous';
YawRatePrev.Description = 'Previous Value of Yaw Rate';
YawRatePrev.DocUnits = 'VehDegPerSec';
YawRatePrev.EngDT = dt.float32;
YawRatePrev.EngMin = -120;
YawRatePrev.EngMax = 120;
YawRatePrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_10MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_10MILLISEC_SEC_F32.LongName = 'Time Step 10 Milisecons';
ARCHGLBPRM_10MILLISEC_SEC_F32.Description = '10 milliseconds in Seconds';
ARCHGLBPRM_10MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_10MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_10MILLISEC_SEC_F32.EngVal = 0.01;
ARCHGLBPRM_10MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = 'Two Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = 'Two Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = 'Two Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.283185307;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Epsilon';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Nearly zero.  Value pasted from EA3 code: float.h'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.192092896e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Degrees to Radians';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = [...
  'Conversion from degrees to radians.'];
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.01745329252;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32 = DataDict.Constant;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.LongName = 'Convert 100 MicroSeconds to MilliSeconds';
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.Description = 'Unit conversion.';
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.DocUnits = 'MilliSecPerCnt';
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.EngDT = dt.float32;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.EngVal = 0.1;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.Define = 'Local';


CNV100MICROSECTOSEC_SECPERCNT_F32 = DataDict.Constant;
CNV100MICROSECTOSEC_SECPERCNT_F32.LongName = 'Convert 100 MicroSeconds to Seconds';
CNV100MICROSECTOSEC_SECPERCNT_F32.Description = 'Unit conversion.';
CNV100MICROSECTOSEC_SECPERCNT_F32.DocUnits = 'SecPerCnt';
CNV100MICROSECTOSEC_SECPERCNT_F32.EngDT = dt.float32;
CNV100MICROSECTOSEC_SECPERCNT_F32.EngVal = 0.0001;
CNV100MICROSECTOSEC_SECPERCNT_F32.Define = 'Local';


COVRAMTRXNIT_ULS_F32 = DataDict.Constant;
COVRAMTRXNIT_ULS_F32.LongName = 'Covariance Matrix Initialization';
COVRAMTRXNIT_ULS_F32.Description = 'Covariance Matrix Initialization';
COVRAMTRXNIT_ULS_F32.DocUnits = 'Uls';
COVRAMTRXNIT_ULS_F32.EngDT = dt.float32;
COVRAMTRXNIT_ULS_F32.EngVal = 2000;
COVRAMTRXNIT_ULS_F32.Define = 'Local';


HWAUTHYTHD_ULS_F32 = DataDict.Constant;
HWAUTHYTHD_ULS_F32.LongName = 'Handwheel Authority Threshold';
HWAUTHYTHD_ULS_F32.Description = 'Handwheel Authority Threshold';
HWAUTHYTHD_ULS_F32.DocUnits = 'Uls';
HWAUTHYTHD_ULS_F32.EngDT = dt.float32;
HWAUTHYTHD_ULS_F32.EngVal = 0.99;
HWAUTHYTHD_ULS_F32.Define = 'Local';


HWTQLRNGSTSLRND_CNT_U08 = DataDict.Constant;
HWTQLRNGSTSLRND_CNT_U08.LongName = 'Handwheel Torque Learning Status Learned';
HWTQLRNGSTSLRND_CNT_U08.Description = 'Learning state 4 of 0-4.';
HWTQLRNGSTSLRND_CNT_U08.DocUnits = 'Cnt';
HWTQLRNGSTSLRND_CNT_U08.EngDT = dt.u08;
HWTQLRNGSTSLRND_CNT_U08.EngVal = 4;
HWTQLRNGSTSLRND_CNT_U08.Define = 'Local';


HWTQLRNGSTSNEGOFFS_CNT_U08 = DataDict.Constant;
HWTQLRNGSTSNEGOFFS_CNT_U08.LongName = 'Handwheel Torque Learning Status Negative Offset';
HWTQLRNGSTSNEGOFFS_CNT_U08.Description = 'Learning state 2 of 0-4.';
HWTQLRNGSTSNEGOFFS_CNT_U08.DocUnits = 'Cnt';
HWTQLRNGSTSNEGOFFS_CNT_U08.EngDT = dt.u08;
HWTQLRNGSTSNEGOFFS_CNT_U08.EngVal = 2;
HWTQLRNGSTSNEGOFFS_CNT_U08.Define = 'Local';


HWTQLRNGSTSNOTLRND_CNT_U08 = DataDict.Constant;
HWTQLRNGSTSNOTLRND_CNT_U08.LongName = 'Handwheel Torque Learning Status Not Learned';
HWTQLRNGSTSNOTLRND_CNT_U08.Description = 'Learning state 0 of 0-4.';
HWTQLRNGSTSNOTLRND_CNT_U08.DocUnits = 'Cnt';
HWTQLRNGSTSNOTLRND_CNT_U08.EngDT = dt.u08;
HWTQLRNGSTSNOTLRND_CNT_U08.EngVal = 0;
HWTQLRNGSTSNOTLRND_CNT_U08.Define = 'Local';


HWTQLRNGSTSPOSOFFS_CNT_U08 = DataDict.Constant;
HWTQLRNGSTSPOSOFFS_CNT_U08.LongName = 'Handwheel Torque Learning Status Positive Offset';
HWTQLRNGSTSPOSOFFS_CNT_U08.Description = 'Learning state 1 of 0-4.';
HWTQLRNGSTSPOSOFFS_CNT_U08.DocUnits = 'Cnt';
HWTQLRNGSTSPOSOFFS_CNT_U08.EngDT = dt.u08;
HWTQLRNGSTSPOSOFFS_CNT_U08.EngVal = 1;
HWTQLRNGSTSPOSOFFS_CNT_U08.Define = 'Local';


HWTQLRNGSTSZEROOFFS_CNT_U08 = DataDict.Constant;
HWTQLRNGSTSZEROOFFS_CNT_U08.LongName = 'Handwheel Torque Learning Status Zero Offset';
HWTQLRNGSTSZEROOFFS_CNT_U08.Description = 'Learning state 3 of 0-4.';
HWTQLRNGSTSZEROOFFS_CNT_U08.DocUnits = 'Cnt';
HWTQLRNGSTSZEROOFFS_CNT_U08.EngDT = dt.u08;
HWTQLRNGSTSZEROOFFS_CNT_U08.EngVal = 3;
HWTQLRNGSTSZEROOFFS_CNT_U08.Define = 'Local';


HWTQLRNGTMRHILIM_SEC_F32 = DataDict.Constant;
HWTQLRNGTMRHILIM_SEC_F32.LongName = 'Handwheel Torque Learning Timer High Limit';
HWTQLRNGTMRHILIM_SEC_F32.Description = [...
  'Handwheel Torque Learning Timer High Limit'];
HWTQLRNGTMRHILIM_SEC_F32.DocUnits = 'Sec';
HWTQLRNGTMRHILIM_SEC_F32.EngDT = dt.float32;
HWTQLRNGTMRHILIM_SEC_F32.EngVal = 1023;
HWTQLRNGTMRHILIM_SEC_F32.Define = 'Local';


IDYMTRX_ULS_F32 = DataDict.Constant;
IDYMTRX_ULS_F32.LongName = 'Identity Matrix';
IDYMTRX_ULS_F32.Description = 'Identity Matrix 3x3';
IDYMTRX_ULS_F32.DocUnits = 'Uls';
IDYMTRX_ULS_F32.EngDT = dt.float32;
IDYMTRX_ULS_F32.EngVal =  ...
   [1                0                0
    0                1                0
    0                0                1];
IDYMTRX_ULS_F32.Define = 'Local';


IVS10MS_ULSPERSEC_F32 = DataDict.Constant;
IVS10MS_ULSPERSEC_F32.LongName = 'Inverse 10 Miliseconds';
IVS10MS_ULSPERSEC_F32.Description = [...
  'Not a slew rate.  Value = 1/TimeStep.  Created so design can multiply ' ...
  'rather than divide.'];
IVS10MS_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
IVS10MS_ULSPERSEC_F32.EngDT = dt.float32;
IVS10MS_ULSPERSEC_F32.EngVal = 100;
IVS10MS_ULSPERSEC_F32.Define = 'Local';


LRNGFILTICON_ULS_F32 = DataDict.Constant;
LRNGFILTICON_ULS_F32.LongName = 'Learning Filter Time Constant';
LRNGFILTICON_ULS_F32.Description = [...
  'ThisValue/LearningTime = FilterFreq'];
LRNGFILTICON_ULS_F32.DocUnits = 'Uls';
LRNGFILTICON_ULS_F32.EngDT = dt.float32;
LRNGFILTICON_ULS_F32.EngVal = 1.099403;
LRNGFILTICON_ULS_F32.Define = 'Local';


ONE_ULS_F32 = DataDict.Constant;
ONE_ULS_F32.LongName = 'One';
ONE_ULS_F32.Description = 'Constant float value of 1';
ONE_ULS_F32.DocUnits = 'Uls';
ONE_ULS_F32.EngDT = dt.float32;
ONE_ULS_F32.EngVal = 1;
ONE_ULS_F32.Define = 'Local';


SPDCNVN_MTRPERSECPERKPH_F32 = DataDict.Constant;
SPDCNVN_MTRPERSECPERKPH_F32.LongName = 'Speed Conversion';
SPDCNVN_MTRPERSECPERKPH_F32.Description = 'Conversion from Kph to meters/sec';
SPDCNVN_MTRPERSECPERKPH_F32.DocUnits = 'MtrPerSecPerKph';
SPDCNVN_MTRPERSECPERKPH_F32.EngDT = dt.float32;
SPDCNVN_MTRPERSECPERKPH_F32.EngVal = 0.2778;
SPDCNVN_MTRPERSECPERKPH_F32.Define = 'Local';


SYSGLBPRM_HWAGHILIM_HWDEG_F32 = DataDict.Constant;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.LongName = 'Handwheel Angle High Limit';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Description = [...
  'Limit on the maximum value allowed for Handwheel Angle.'];
SYSGLBPRM_HWAGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngDT = dt.float32;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngVal = 1440;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Define = 'Global';


TISTEP10MS_MINS_F32 = DataDict.Constant;
TISTEP10MS_MINS_F32.LongName = 'Time Step 10 Miliseconds';
TISTEP10MS_MINS_F32.Description = '10 milliseconds in Minutes';
TISTEP10MS_MINS_F32.DocUnits = 'Mins';
TISTEP10MS_MINS_F32.EngDT = dt.float32;
TISTEP10MS_MINS_F32.EngVal = 0.00016667;
TISTEP10MS_MINS_F32.Define = 'Local';


TQINPDETNLOGGAIN_ULS_F32 = DataDict.Constant;
TQINPDETNLOGGAIN_ULS_F32.LongName = 'Torque Input Detection Logarithm Gain';
TQINPDETNLOGGAIN_ULS_F32.Description = [...
  'Conversion factor from Bells to deciBells.'];
TQINPDETNLOGGAIN_ULS_F32.DocUnits = 'Uls';
TQINPDETNLOGGAIN_ULS_F32.EngDT = dt.float32;
TQINPDETNLOGGAIN_ULS_F32.EngVal = 10;
TQINPDETNLOGGAIN_ULS_F32.Define = 'Local';


TQINPDETNLOGINPHILIM_ULS_F32 = DataDict.Constant;
TQINPDETNLOGINPHILIM_ULS_F32.LongName = 'Torque Input Detection Logarithm Input High Limit';
TQINPDETNLOGINPHILIM_ULS_F32.Description = [...
  'Upper limit of input to log10 operation.  1000 input = +30dB output.'];
TQINPDETNLOGINPHILIM_ULS_F32.DocUnits = 'Uls';
TQINPDETNLOGINPHILIM_ULS_F32.EngDT = dt.float32;
TQINPDETNLOGINPHILIM_ULS_F32.EngVal = 1000;
TQINPDETNLOGINPHILIM_ULS_F32.Define = 'Local';


TQINPDETNLOGINPLOLIM_ULS_F32 = DataDict.Constant;
TQINPDETNLOGINPLOLIM_ULS_F32.LongName = 'Torque Input Detection Logarithm Input Low Limit';
TQINPDETNLOGINPLOLIM_ULS_F32.Description = [...
  'Lower limit of input to log10 operation.  2.32831e-10 input = -96.32dB' ...
  ' output.'];
TQINPDETNLOGINPLOLIM_ULS_F32.DocUnits = 'Uls';
TQINPDETNLOGINPLOLIM_ULS_F32.EngDT = dt.float32;
TQINPDETNLOGINPLOLIM_ULS_F32.EngVal = 2.32831e-10;
TQINPDETNLOGINPLOLIM_ULS_F32.Define = 'Local';


YAWELPDTIHILIM_MINS_F32 = DataDict.Constant;
YAWELPDTIHILIM_MINS_F32.LongName = 'Yaw Elapsed Time High Limit';
YAWELPDTIHILIM_MINS_F32.Description = 'Yaw Elapsed Time High Limit';
YAWELPDTIHILIM_MINS_F32.DocUnits = 'Mins';
YAWELPDTIHILIM_MINS_F32.EngDT = dt.float32;
YAWELPDTIHILIM_MINS_F32.EngVal = 1440;
YAWELPDTIHILIM_MINS_F32.Define = 'Local';


YAWRATENOISE_VEHDEGPERSEC_F32 = DataDict.Constant;
YAWRATENOISE_VEHDEGPERSEC_F32.LongName = 'Yaw Rate Noise';
YAWRATENOISE_VEHDEGPERSEC_F32.Description = [...
  'Estimated variation of yaw rate signal even after filtering.'];
YAWRATENOISE_VEHDEGPERSEC_F32.DocUnits = 'VehDegPerSec';
YAWRATENOISE_VEHDEGPERSEC_F32.EngDT = dt.float32;
YAWRATENOISE_VEHDEGPERSEC_F32.EngVal = 0.2;
YAWRATENOISE_VEHDEGPERSEC_F32.Define = 'Local';


ZEROVECT_ULS_F32 = DataDict.Constant;
ZEROVECT_ULS_F32.LongName = 'Zero Vector';
ZEROVECT_ULS_F32.Description = [...
  'Zeros Vector [3x1] (3 rows x 1 column)'];
ZEROVECT_ULS_F32.DocUnits = 'Uls';
ZEROVECT_ULS_F32.EngDT = dt.float32;
ZEROVECT_ULS_F32.EngVal =  ...
   [0
    0
    0];
ZEROVECT_ULS_F32.Define = 'Local';


ZERO_ULS_F32 = DataDict.Constant;
ZERO_ULS_F32.LongName = 'Zero';
ZERO_ULS_F32.Description = 'Constant float value of 0.0';
ZERO_ULS_F32.DocUnits = 'Uls';
ZERO_ULS_F32.EngDT = dt.float32;
ZERO_ULS_F32.EngVal = 0;
ZERO_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
