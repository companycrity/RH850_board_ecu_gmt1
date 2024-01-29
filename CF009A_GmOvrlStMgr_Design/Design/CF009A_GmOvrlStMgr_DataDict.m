%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Dec-2016 14:30:11       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF009A = DataDict.FDD;
CF009A.Version = '4.1.X';
CF009A.LongName = 'GM Overlay State Manager';
CF009A.ShoName  = 'GmOvrlStMgr';
CF009A.DesignASIL = 'D';
CF009A.Description = [...
  'This module uses inputs from serial communication and from other FDDs ' ...
  'to determine the operating state'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmOvrlStMgrInit1 = DataDict.Runnable;
GmOvrlStMgrInit1.Context = 'Rte';
GmOvrlStMgrInit1.TimeStep = 0;
GmOvrlStMgrInit1.Description = 'Function initialization';

GmOvrlStMgrPer1 = DataDict.Runnable;
GmOvrlStMgrPer1.Context = 'Rte';
GmOvrlStMgrPer1.TimeStep = 0.002;
GmOvrlStMgrPer1.Description = 'Periodic functionality ';

GetGmLoaIgnCntr = DataDict.SrvRunnable;
GetGmLoaIgnCntr.Context = 'Rte';
GetGmLoaIgnCntr.Description = [...
  'Get the current value of GmLoaIgnCntr from NvM.'];
GetGmLoaIgnCntr.Return = DataDict.CSReturn;
GetGmLoaIgnCntr.Return.Type = 'None';
GetGmLoaIgnCntr.Return.Min = [];
GetGmLoaIgnCntr.Return.Max = [];
GetGmLoaIgnCntr.Return.TestTolerance = [];
GetGmLoaIgnCntr.Arguments(1) = DataDict.CSArguments;
GetGmLoaIgnCntr.Arguments(1).Name = 'GmLoaIgnCntr';
GetGmLoaIgnCntr.Arguments(1).EngDT = dt.u16;
GetGmLoaIgnCntr.Arguments(1).EngMin = 0;
GetGmLoaIgnCntr.Arguments(1).EngMax = 65535;
GetGmLoaIgnCntr.Arguments(1).TestTolerance = 0;
GetGmLoaIgnCntr.Arguments(1).Units = 'Cnt';
GetGmLoaIgnCntr.Arguments(1).Direction = 'Out';
GetGmLoaIgnCntr.Arguments(1).InitRowCol = [1  1];
GetGmLoaIgnCntr.Arguments(1).Description = 'Desired value from NvM.';

SetGmLoaIgnCntr = DataDict.SrvRunnable;
SetGmLoaIgnCntr.Context = 'Rte';
SetGmLoaIgnCntr.Description = [...
  'Set the current value of GmLoaIgnCntr from NvM.'];
SetGmLoaIgnCntr.Return = DataDict.CSReturn;
SetGmLoaIgnCntr.Return.Type = 'None';
SetGmLoaIgnCntr.Return.Min = [];
SetGmLoaIgnCntr.Return.Max = [];
SetGmLoaIgnCntr.Return.TestTolerance = [];
SetGmLoaIgnCntr.Arguments(1) = DataDict.CSArguments;
SetGmLoaIgnCntr.Arguments(1).Name = 'GmLoaIgnCntr';
SetGmLoaIgnCntr.Arguments(1).EngDT = dt.u16;
SetGmLoaIgnCntr.Arguments(1).EngMin = 0;
SetGmLoaIgnCntr.Arguments(1).EngMax = 65535;
SetGmLoaIgnCntr.Arguments(1).Units = 'Cnt';
SetGmLoaIgnCntr.Arguments(1).Direction = 'In';
SetGmLoaIgnCntr.Arguments(1).InitRowCol = [1  1];
SetGmLoaIgnCntr.Arguments(1).Description = 'Desired value to set NvM to.';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'GmOvrlStMgrInit1','GmOvrlStMgrPer1'};
GetRefTmr100MicroSec32bit.Description = 'Get the current system time.';
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
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'System time.';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'GmOvrlStMgrPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Find the difference in time from the preivously captured system time.'];
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Previously captured system time.';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = [...
  'Time elapsed since the previously captured system time.'];


GmLoaIgnCntr_GetErrorStatus = DataDict.Client;
GmLoaIgnCntr_GetErrorStatus.CallLocation = {'GmOvrlStMgrInit1'};
GmLoaIgnCntr_GetErrorStatus.Description = [...
  'Client call to GetErrorStatus for GmLoaIgnCntr.'];
GmLoaIgnCntr_GetErrorStatus.Return = DataDict.CSReturn;
GmLoaIgnCntr_GetErrorStatus.Return.Type = 'Standard';
GmLoaIgnCntr_GetErrorStatus.Return.Min = 0;
GmLoaIgnCntr_GetErrorStatus.Return.Max = 1;
GmLoaIgnCntr_GetErrorStatus.Return.TestTolerance = 0;
GmLoaIgnCntr_GetErrorStatus.Return.Description = 'Standard function return info.';
GmLoaIgnCntr_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
GmLoaIgnCntr_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
GmLoaIgnCntr_GetErrorStatus.Arguments(1).EngDT = dt.u08;
GmLoaIgnCntr_GetErrorStatus.Arguments(1).EngMin = 0;
GmLoaIgnCntr_GetErrorStatus.Arguments(1).EngMax = 8;
GmLoaIgnCntr_GetErrorStatus.Arguments(1).TestTolerance = 999;
GmLoaIgnCntr_GetErrorStatus.Arguments(1).Units = 'Cnt';
GmLoaIgnCntr_GetErrorStatus.Arguments(1).Direction = 'Out';
GmLoaIgnCntr_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
GmLoaIgnCntr_GetErrorStatus.Arguments(1).Description = 'Status of NvM value.';


GmLoaIgnCntr_SetRamBlockStatus = DataDict.Client;
GmLoaIgnCntr_SetRamBlockStatus.CallLocation = {'GmOvrlStMgrInit1','GmOvrlStMgrPer1'};
GmLoaIgnCntr_SetRamBlockStatus.Description = [...
  'Client call to SetRamBlockStatus to show GmLoaIgnCntr has been changed' ...
  '.'];
GmLoaIgnCntr_SetRamBlockStatus.Return = DataDict.CSReturn;
GmLoaIgnCntr_SetRamBlockStatus.Return.Type = 'Standard';
GmLoaIgnCntr_SetRamBlockStatus.Return.Min = 0;
GmLoaIgnCntr_SetRamBlockStatus.Return.Max = 1;
GmLoaIgnCntr_SetRamBlockStatus.Return.TestTolerance = 0;
GmLoaIgnCntr_SetRamBlockStatus.Return.Description = 'Standard function return info.';
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).EngMin = 0;
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).EngMax = 1;
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).Direction = 'In';
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
GmLoaIgnCntr_SetRamBlockStatus.Arguments(1).Description = [...
  'Input to say what value the SetRamBlockStatus should have.'];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'GmOvrlStMgrInit1'};
SetNtcSts.Description = [...
  'Client call to the DiagcMgr to set a status for an NTC.'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Standard function return info.';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = [...
  'Ntc number that the status is being set for.'];
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'Parameter byte';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'Status of the NTC';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Desired debounce step size.';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AbsActvProtd = DataDict.IpSignal;
AbsActvProtd.LongName = 'ABS Active Protected';
AbsActvProtd.Description = 'Signal for ABS Active Protected';
AbsActvProtd.DocUnits = 'Cnt';
AbsActvProtd.EngDT = dt.lgc;
AbsActvProtd.EngInit = 0;
AbsActvProtd.EngMin = 0;
AbsActvProtd.EngMax = 1;
AbsActvProtd.ReadIn = {'GmOvrlStMgrPer1'};
AbsActvProtd.ReadType = 'Rte';


ApaEna = DataDict.IpSignal;
ApaEna.LongName = 'APA Enable';
ApaEna.Description = 'Signal for APA Enable';
ApaEna.DocUnits = 'Cnt';
ApaEna.EngDT = dt.lgc;
ApaEna.EngInit = 0;
ApaEna.EngMin = 0;
ApaEna.EngMax = 1;
ApaEna.ReadIn = {'GmOvrlStMgrPer1'};
ApaEna.ReadType = 'Rte';


EscEna = DataDict.IpSignal;
EscEna.LongName = 'ESC Enable';
EscEna.Description = 'Signal for ESC Enable';
EscEna.DocUnits = 'Cnt';
EscEna.EngDT = dt.lgc;
EscEna.EngInit = 0;
EscEna.EngMin = 0;
EscEna.EngMax = 1;
EscEna.ReadIn = {'GmOvrlStMgrPer1'};
EscEna.ReadType = 'Rte';


EscLimdActv = DataDict.IpSignal;
EscLimdActv.LongName = 'ESC Limited Active';
EscLimdActv.Description = 'Signal for ESC Limited Active';
EscLimdActv.DocUnits = 'Cnt';
EscLimdActv.EngDT = dt.lgc;
EscLimdActv.EngInit = 0;
EscLimdActv.EngMin = 0;
EscLimdActv.EngMax = 1;
EscLimdActv.ReadIn = {'GmOvrlStMgrPer1'};
EscLimdActv.ReadType = 'Rte';


HwAgEotCcw = DataDict.IpSignal;
HwAgEotCcw.LongName = 'Handwheel Angle EOT Counter Clockwise';
HwAgEotCcw.Description = 'Signal for ';
HwAgEotCcw.DocUnits = 'HwDeg';
HwAgEotCcw.EngDT = dt.float32;
HwAgEotCcw.EngInit = -360;
HwAgEotCcw.EngMin = -1440;
HwAgEotCcw.EngMax = -360;
HwAgEotCcw.ReadIn = {'GmOvrlStMgrPer1'};
HwAgEotCcw.ReadType = 'Rte';


HwAgEotCw = DataDict.IpSignal;
HwAgEotCw.LongName = 'Handwheel Angle EOT Clockwise';
HwAgEotCw.Description = 'Signal for ';
HwAgEotCw.DocUnits = 'HwDeg';
HwAgEotCw.EngDT = dt.float32;
HwAgEotCw.EngInit = 360;
HwAgEotCw.EngMin = 360;
HwAgEotCw.EngMax = 1440;
HwAgEotCw.ReadIn = {'GmOvrlStMgrPer1'};
HwAgEotCw.ReadType = 'Rte';


HwAgTar = DataDict.IpSignal;
HwAgTar.LongName = 'Handwheel Angle Target';
HwAgTar.Description = 'Signal for ';
HwAgTar.DocUnits = 'HwDeg';
HwAgTar.EngDT = dt.float32;
HwAgTar.EngInit = 0;
HwAgTar.EngMin = -1440;
HwAgTar.EngMax = 1440;
HwAgTar.ReadIn = {'GmOvrlStMgrPer1'};
HwAgTar.ReadType = 'Rte';


HwAgTraj = DataDict.IpSignal;
HwAgTraj.LongName = 'Handwheel Angle Trajectory';
HwAgTraj.Description = 'Signal for ';
HwAgTraj.DocUnits = 'HwDeg';
HwAgTraj.EngDT = dt.float32;
HwAgTraj.EngInit = 0;
HwAgTraj.EngMin = -1440;
HwAgTraj.EngMax = 1440;
HwAgTraj.ReadIn = {'GmOvrlStMgrPer1'};
HwAgTraj.ReadType = 'Rte';


HwAgTrajEna = DataDict.IpSignal;
HwAgTrajEna.LongName = 'Handwheel Angle Trajectory Enable';
HwAgTrajEna.Description = 'Signal for ';
HwAgTrajEna.DocUnits = 'Cnt';
HwAgTrajEna.EngDT = dt.lgc;
HwAgTrajEna.EngInit = 0;
HwAgTrajEna.EngMin = 0;
HwAgTrajEna.EngMax = 1;
HwAgTrajEna.ReadIn = {'GmOvrlStMgrPer1'};
HwAgTrajEna.ReadType = 'Rte';


HwHaptcEna = DataDict.IpSignal;
HwHaptcEna.LongName = 'Handwheel Haptic Enable';
HwHaptcEna.Description = 'Signal for ';
HwHaptcEna.DocUnits = 'Cnt';
HwHaptcEna.EngDT = dt.lgc;
HwHaptcEna.EngInit = 0;
HwHaptcEna.EngMin = 0;
HwHaptcEna.EngMax = 1;
HwHaptcEna.ReadIn = {'GmOvrlStMgrPer1'};
HwHaptcEna.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Signal for ';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'GmOvrlStMgrPer1'};
HwTq.ReadType = 'Rte';


LkaEna = DataDict.IpSignal;
LkaEna.LongName = 'LKA Enable';
LkaEna.Description = 'Signal for ';
LkaEna.DocUnits = 'Cnt';
LkaEna.EngDT = dt.lgc;
LkaEna.EngInit = 0;
LkaEna.EngMin = 0;
LkaEna.EngMax = 1;
LkaEna.ReadIn = {'GmOvrlStMgrPer1'};
LkaEna.ReadType = 'Rte';


LkaTqCmdCdnd = DataDict.IpSignal;
LkaTqCmdCdnd.LongName = 'LKA Torque Command Conditioned';
LkaTqCmdCdnd.Description = 'Lane Keep Assist Torque Command';
LkaTqCmdCdnd.DocUnits = 'HwNwtMtr';
LkaTqCmdCdnd.EngDT = dt.float32;
LkaTqCmdCdnd.EngInit = 0;
LkaTqCmdCdnd.EngMin = -3;
LkaTqCmdCdnd.EngMax = 3;
LkaTqCmdCdnd.ReadIn = {'GmOvrlStMgrPer1'};
LkaTqCmdCdnd.ReadType = 'Rte';


LoaSt = DataDict.IpSignal;
LoaSt.LongName = 'LOA State';
LoaSt.Description = 'Signal for ';
LoaSt.DocUnits = 'Cnt';
LoaSt.EngDT = enum.LoaSt1;
LoaSt.EngInit = LoaSt1.LOAST_NORM;
LoaSt.EngMin = LoaSt1.LOAST_NORM;
LoaSt.EngMax = LoaSt1.LOAST_IMDTSHTDWNREQD;
LoaSt.ReadIn = {'GmOvrlStMgrPer1'};
LoaSt.ReadType = 'Rte';


Msg17DBusHiSpdInvld = DataDict.IpSignal;
Msg17DBusHiSpdInvld.LongName = 'Invalid Message 17D High Speed Bus';
Msg17DBusHiSpdInvld.Description = 'Signal for ';
Msg17DBusHiSpdInvld.DocUnits = 'Cnt';
Msg17DBusHiSpdInvld.EngDT = dt.lgc;
Msg17DBusHiSpdInvld.EngInit = 0;
Msg17DBusHiSpdInvld.EngMin = 0;
Msg17DBusHiSpdInvld.EngMax = 1;
Msg17DBusHiSpdInvld.ReadIn = {'GmOvrlStMgrPer1'};
Msg17DBusHiSpdInvld.ReadType = 'Rte';


Msg17DBusHiSpdMiss = DataDict.IpSignal;
Msg17DBusHiSpdMiss.LongName = 'Missing Message 17D High Speed Bus';
Msg17DBusHiSpdMiss.Description = 'Signal for ';
Msg17DBusHiSpdMiss.DocUnits = 'Cnt';
Msg17DBusHiSpdMiss.EngDT = dt.lgc;
Msg17DBusHiSpdMiss.EngInit = 0;
Msg17DBusHiSpdMiss.EngMin = 0;
Msg17DBusHiSpdMiss.EngMax = 1;
Msg17DBusHiSpdMiss.ReadIn = {'GmOvrlStMgrPer1'};
Msg17DBusHiSpdMiss.ReadType = 'Rte';


Msg180BusChassisExpInvld = DataDict.IpSignal;
Msg180BusChassisExpInvld.LongName = 'Invalid Message 180 Chassis Expansion Bus';
Msg180BusChassisExpInvld.Description = 'Signal for ';
Msg180BusChassisExpInvld.DocUnits = 'Cnt';
Msg180BusChassisExpInvld.EngDT = dt.lgc;
Msg180BusChassisExpInvld.EngInit = 0;
Msg180BusChassisExpInvld.EngMin = 0;
Msg180BusChassisExpInvld.EngMax = 1;
Msg180BusChassisExpInvld.ReadIn = {'GmOvrlStMgrPer1'};
Msg180BusChassisExpInvld.ReadType = 'Rte';


Msg180BusChassisExpMiss = DataDict.IpSignal;
Msg180BusChassisExpMiss.LongName = 'Missing Message 180 Chassis Expansion Bus';
Msg180BusChassisExpMiss.Description = 'Signal for ';
Msg180BusChassisExpMiss.DocUnits = 'Cnt';
Msg180BusChassisExpMiss.EngDT = dt.lgc;
Msg180BusChassisExpMiss.EngInit = 0;
Msg180BusChassisExpMiss.EngMin = 0;
Msg180BusChassisExpMiss.EngMax = 1;
Msg180BusChassisExpMiss.ReadIn = {'GmOvrlStMgrPer1'};
Msg180BusChassisExpMiss.ReadType = 'Rte';


Msg180BusHiSpdInvld = DataDict.IpSignal;
Msg180BusHiSpdInvld.LongName = 'Invalid Message 180 High Speed Bus';
Msg180BusHiSpdInvld.Description = 'Signal for ';
Msg180BusHiSpdInvld.DocUnits = 'Cnt';
Msg180BusHiSpdInvld.EngDT = dt.lgc;
Msg180BusHiSpdInvld.EngInit = 0;
Msg180BusHiSpdInvld.EngMin = 0;
Msg180BusHiSpdInvld.EngMax = 1;
Msg180BusHiSpdInvld.ReadIn = {'GmOvrlStMgrPer1'};
Msg180BusHiSpdInvld.ReadType = 'Rte';


Msg180BusHiSpdMiss = DataDict.IpSignal;
Msg180BusHiSpdMiss.LongName = 'Missing Message 180 High Speed Bus';
Msg180BusHiSpdMiss.Description = 'Signal for ';
Msg180BusHiSpdMiss.DocUnits = 'Cnt';
Msg180BusHiSpdMiss.EngDT = dt.lgc;
Msg180BusHiSpdMiss.EngInit = 0;
Msg180BusHiSpdMiss.EngMin = 0;
Msg180BusHiSpdMiss.EngMax = 1;
Msg180BusHiSpdMiss.ReadIn = {'GmOvrlStMgrPer1'};
Msg180BusHiSpdMiss.ReadType = 'Rte';


Msg1E9BusHiSpdInvld = DataDict.IpSignal;
Msg1E9BusHiSpdInvld.LongName = 'Invalid Message 1E9 High Speed Bus';
Msg1E9BusHiSpdInvld.Description = 'Signal for ';
Msg1E9BusHiSpdInvld.DocUnits = 'Cnt';
Msg1E9BusHiSpdInvld.EngDT = dt.lgc;
Msg1E9BusHiSpdInvld.EngInit = 0;
Msg1E9BusHiSpdInvld.EngMin = 0;
Msg1E9BusHiSpdInvld.EngMax = 1;
Msg1E9BusHiSpdInvld.ReadIn = {'GmOvrlStMgrPer1'};
Msg1E9BusHiSpdInvld.ReadType = 'Rte';


Msg1E9BusHiSpdMiss = DataDict.IpSignal;
Msg1E9BusHiSpdMiss.LongName = 'Missing Message 1E9 High Speed Bus';
Msg1E9BusHiSpdMiss.Description = 'Signal for ';
Msg1E9BusHiSpdMiss.DocUnits = 'Cnt';
Msg1E9BusHiSpdMiss.EngDT = dt.lgc;
Msg1E9BusHiSpdMiss.EngInit = 0;
Msg1E9BusHiSpdMiss.EngMin = 0;
Msg1E9BusHiSpdMiss.EngMax = 1;
Msg1E9BusHiSpdMiss.ReadIn = {'GmOvrlStMgrPer1'};
Msg1E9BusHiSpdMiss.ReadType = 'Rte';


Msg1F5BusHiSpdInvld = DataDict.IpSignal;
Msg1F5BusHiSpdInvld.LongName = 'Invalid Message 1F5 High Speed Bus';
Msg1F5BusHiSpdInvld.Description = 'Signal for ';
Msg1F5BusHiSpdInvld.DocUnits = 'Cnt';
Msg1F5BusHiSpdInvld.EngDT = dt.lgc;
Msg1F5BusHiSpdInvld.EngInit = 0;
Msg1F5BusHiSpdInvld.EngMin = 0;
Msg1F5BusHiSpdInvld.EngMax = 1;
Msg1F5BusHiSpdInvld.ReadIn = {'GmOvrlStMgrPer1'};
Msg1F5BusHiSpdInvld.ReadType = 'Rte';


Msg214BusHiSpdInvld = DataDict.IpSignal;
Msg214BusHiSpdInvld.LongName = 'Invalid Message 214 High Speed Bus';
Msg214BusHiSpdInvld.Description = 'Signal for ';
Msg214BusHiSpdInvld.DocUnits = 'Cnt';
Msg214BusHiSpdInvld.EngDT = dt.lgc;
Msg214BusHiSpdInvld.EngInit = 0;
Msg214BusHiSpdInvld.EngMin = 0;
Msg214BusHiSpdInvld.EngMax = 1;
Msg214BusHiSpdInvld.ReadIn = {'GmOvrlStMgrPer1'};
Msg214BusHiSpdInvld.ReadType = 'Rte';


Msg214BusHiSpdMiss = DataDict.IpSignal;
Msg214BusHiSpdMiss.LongName = 'Missing Message 214 High Speed Bus';
Msg214BusHiSpdMiss.Description = 'Signal for ';
Msg214BusHiSpdMiss.DocUnits = 'Cnt';
Msg214BusHiSpdMiss.EngDT = dt.lgc;
Msg214BusHiSpdMiss.EngInit = 0;
Msg214BusHiSpdMiss.EngMin = 0;
Msg214BusHiSpdMiss.EngMax = 1;
Msg214BusHiSpdMiss.ReadIn = {'GmOvrlStMgrPer1'};
Msg214BusHiSpdMiss.ReadType = 'Rte';


Msg337BusChassisExpInvld = DataDict.IpSignal;
Msg337BusChassisExpInvld.LongName = 'Invalid Message 337 Chassis Expansion Bus';
Msg337BusChassisExpInvld.Description = 'Signal for ';
Msg337BusChassisExpInvld.DocUnits = 'Cnt';
Msg337BusChassisExpInvld.EngDT = dt.lgc;
Msg337BusChassisExpInvld.EngInit = 0;
Msg337BusChassisExpInvld.EngMin = 0;
Msg337BusChassisExpInvld.EngMax = 1;
Msg337BusChassisExpInvld.ReadIn = {'GmOvrlStMgrPer1'};
Msg337BusChassisExpInvld.ReadType = 'Rte';


Msg337BusChassisExpMiss = DataDict.IpSignal;
Msg337BusChassisExpMiss.LongName = 'Missing Message 337 Chassis Expansion Bus';
Msg337BusChassisExpMiss.Description = 'Signal for ';
Msg337BusChassisExpMiss.DocUnits = 'Cnt';
Msg337BusChassisExpMiss.EngDT = dt.lgc;
Msg337BusChassisExpMiss.EngInit = 0;
Msg337BusChassisExpMiss.EngMin = 0;
Msg337BusChassisExpMiss.EngMax = 1;
Msg337BusChassisExpMiss.ReadIn = {'GmOvrlStMgrPer1'};
Msg337BusChassisExpMiss.ReadType = 'Rte';


ShiftLvrRvs = DataDict.IpSignal;
ShiftLvrRvs.LongName = 'Shift Lever Reverse';
ShiftLvrRvs.Description = 'Signal for ';
ShiftLvrRvs.DocUnits = 'Cnt';
ShiftLvrRvs.EngDT = dt.lgc;
ShiftLvrRvs.EngInit = 0;
ShiftLvrRvs.EngMin = 0;
ShiftLvrRvs.EngMax = 1;
ShiftLvrRvs.ReadIn = {'GmOvrlStMgrPer1'};
ShiftLvrRvs.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'Signal for ';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'GmOvrlStMgrPer1'};
SysSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Signal for ';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'GmOvrlStMgrPer1'};
VehSpd.ReadType = 'Rte';


VehSpdSecurMax = DataDict.IpSignal;
VehSpdSecurMax.LongName = 'Maximum Secure Vehicle Speed';
VehSpdSecurMax.Description = 'Signal for ';
VehSpdSecurMax.DocUnits = 'Kph';
VehSpdSecurMax.EngDT = dt.float32;
VehSpdSecurMax.EngInit = 0;
VehSpdSecurMax.EngMin = 0;
VehSpdSecurMax.EngMax = 511;
VehSpdSecurMax.ReadIn = {'GmOvrlStMgrPer1'};
VehSpdSecurMax.ReadType = 'Rte';


VehSpdSecurMaxVld = DataDict.IpSignal;
VehSpdSecurMaxVld.LongName = 'Vehicle Speed Secure Maximum Valid';
VehSpdSecurMaxVld.Description = [...
  'Validitity signal for Maximum Secure Vehicle Speed'];
VehSpdSecurMaxVld.DocUnits = 'Cnt';
VehSpdSecurMaxVld.EngDT = dt.lgc;
VehSpdSecurMaxVld.EngInit = 0;
VehSpdSecurMaxVld.EngMin = 0;
VehSpdSecurMaxVld.EngMax = 1;
VehSpdSecurMaxVld.ReadIn = {'GmOvrlStMgrPer1'};
VehSpdSecurMaxVld.ReadType = 'Rte';


VehSpdSecurMin = DataDict.IpSignal;
VehSpdSecurMin.LongName = 'Minimum Secure Vehicle Speed';
VehSpdSecurMin.Description = 'Signal for ';
VehSpdSecurMin.DocUnits = 'Kph';
VehSpdSecurMin.EngDT = dt.float32;
VehSpdSecurMin.EngInit = 0;
VehSpdSecurMin.EngMin = 0;
VehSpdSecurMin.EngMax = 511;
VehSpdSecurMin.ReadIn = {'GmOvrlStMgrPer1'};
VehSpdSecurMin.ReadType = 'Rte';


VehSpdSecurMinVld = DataDict.IpSignal;
VehSpdSecurMinVld.LongName = 'Vehicle Speed Secure Minimum Valid';
VehSpdSecurMinVld.Description = [...
  'Validitity signal for Minimum Secure Vehicle Speed'];
VehSpdSecurMinVld.DocUnits = 'Cnt';
VehSpdSecurMinVld.EngDT = dt.lgc;
VehSpdSecurMinVld.EngInit = 0;
VehSpdSecurMinVld.EngMin = 0;
VehSpdSecurMinVld.EngMax = 1;
VehSpdSecurMinVld.ReadIn = {'GmOvrlStMgrPer1'};
VehSpdSecurMinVld.ReadType = 'Rte';


VehStabyEnhmtActv = DataDict.IpSignal;
VehStabyEnhmtActv.LongName = 'Vehicle Stability Enhancement Active';
VehStabyEnhmtActv.Description = 'Signal for ';
VehStabyEnhmtActv.DocUnits = 'Cnt';
VehStabyEnhmtActv.EngDT = dt.lgc;
VehStabyEnhmtActv.EngInit = 0;
VehStabyEnhmtActv.EngMin = 0;
VehStabyEnhmtActv.EngMax = 1;
VehStabyEnhmtActv.ReadIn = {'GmOvrlStMgrPer1'};
VehStabyEnhmtActv.ReadType = 'Rte';

MfgOvrlDi = DataDict.IpSignal;
MfgOvrlDi.LongName = 'Manufacturing Overlay Disable';
MfgOvrlDi.Description = 'Signal for ';
MfgOvrlDi.DocUnits = 'Cnt';
MfgOvrlDi.EngDT = dt.lgc;
MfgOvrlDi.EngInit = 0;
MfgOvrlDi.EngMin = 0;
MfgOvrlDi.EngMax = 1;
MfgOvrlDi.ReadIn = {'GmOvrlStMgrPer1'};
MfgOvrlDi.ReadType = 'Rte';

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
ApaDrvrIntvDetd = DataDict.OpSignal;
ApaDrvrIntvDetd.LongName = 'APA Driver Intervention Detected';
ApaDrvrIntvDetd.Description = [...
  'The flag show that Automatic Park Assist Driver Intervention is Detect' ...
  'ed'];
ApaDrvrIntvDetd.DocUnits = 'Cnt';
ApaDrvrIntvDetd.SwcShoName = 'GmOvrlStMgr';
ApaDrvrIntvDetd.EngDT = dt.lgc;
ApaDrvrIntvDetd.EngInit = 0;
ApaDrvrIntvDetd.EngMin = 0;
ApaDrvrIntvDetd.EngMax = 1;
ApaDrvrIntvDetd.TestTolerance = 0;
ApaDrvrIntvDetd.WrittenIn = {'GmOvrlStMgrPer1'};
ApaDrvrIntvDetd.WriteType = 'Rte';


ApaSt = DataDict.OpSignal;
ApaSt.LongName = 'APA State';
ApaSt.Description = [...
  'Automatic Park Assist Operating State'];
ApaSt.DocUnits = 'Cnt';
ApaSt.SwcShoName = 'GmOvrlStMgr';
ApaSt.EngDT = dt.u08;
ApaSt.EngInit = 0;
ApaSt.EngMin = 0;
ApaSt.EngMax = 4;
ApaSt.TestTolerance = 0;
ApaSt.WrittenIn = {'GmOvrlStMgrPer1'};
ApaSt.WriteType = 'Rte';


EscSt = DataDict.OpSignal;
EscSt.LongName = 'ESC State';
EscSt.Description = 'ESC Operating State';
EscSt.DocUnits = 'Cnt';
EscSt.SwcShoName = 'GmOvrlStMgr';
EscSt.EngDT = dt.u08;
EscSt.EngInit = 0;
EscSt.EngMin = 0;
EscSt.EngMax = 4;
EscSt.TestTolerance = 0;
EscSt.WrittenIn = {'GmOvrlStMgrPer1'};
EscSt.WriteType = 'Rte';


HwAgServoCmd = DataDict.OpSignal;
HwAgServoCmd.LongName = 'Handwheel Angle Servo Command';
HwAgServoCmd.Description = [...
  'Handwheel Angle Servo Command used for position servo.'];
HwAgServoCmd.DocUnits = 'HwDeg';
HwAgServoCmd.SwcShoName = 'GmOvrlStMgr';
HwAgServoCmd.EngDT = dt.float32;
HwAgServoCmd.EngInit = 0;
HwAgServoCmd.EngMin = -1440;
HwAgServoCmd.EngMax = 1440;
HwAgServoCmd.TestTolerance = 0;
HwAgServoCmd.WrittenIn = {'GmOvrlStMgrPer1'};
HwAgServoCmd.WriteType = 'Rte';


HwAgServoEna = DataDict.OpSignal;
HwAgServoEna.LongName = 'Handwheel Angle Servo Enable';
HwAgServoEna.Description = [...
  'Handwheel Angle Servo Enable used for position servo.'];
HwAgServoEna.DocUnits = 'Cnt';
HwAgServoEna.SwcShoName = 'GmOvrlStMgr';
HwAgServoEna.EngDT = dt.lgc;
HwAgServoEna.EngInit = 0;
HwAgServoEna.EngMin = 0;
HwAgServoEna.EngMax = 1;
HwAgServoEna.TestTolerance = 0;
HwAgServoEna.WrittenIn = {'GmOvrlStMgrPer1'};
HwAgServoEna.WriteType = 'Rte';


HwOscnEna = DataDict.OpSignal;
HwOscnEna.LongName = 'Torque Oscillation Enable';
HwOscnEna.Description = [...
  'Torque oscillation flag for APA haptic feedback and LoA mitigation hap' ...
  'tic pulse.'];
HwOscnEna.DocUnits = 'Cnt';
HwOscnEna.SwcShoName = 'GmOvrlStMgr';
HwOscnEna.EngDT = dt.lgc;
HwOscnEna.EngInit = 0;
HwOscnEna.EngMin = 0;
HwOscnEna.EngMax = 1;
HwOscnEna.TestTolerance = 0;
HwOscnEna.WrittenIn = {'GmOvrlStMgrPer1'};
HwOscnEna.WriteType = 'Rte';


HwOscnFrq = DataDict.OpSignal;
HwOscnFrq.LongName = 'Torque Oscillation Frequency';
HwOscnFrq.Description = [...
  'Torque oscillate frequency for APA haptic feedback and LoA mitigation ' ...
  'haptic pulse'];
HwOscnFrq.DocUnits = 'Hz';
HwOscnFrq.SwcShoName = 'GmOvrlStMgr';
HwOscnFrq.EngDT = dt.float32;
HwOscnFrq.EngInit = 10;
HwOscnFrq.EngMin = 10;
HwOscnFrq.EngMax = 50;
HwOscnFrq.TestTolerance = 0;
HwOscnFrq.WrittenIn = {'GmOvrlStMgrPer1'};
HwOscnFrq.WriteType = 'Rte';


HwOscnMotAmp = DataDict.OpSignal;
HwOscnMotAmp.LongName = 'Torque Oscillation Amplitude';
HwOscnMotAmp.Description = [...
  'Torque oscillation amplitude for APA haptic feedback and LoA mitigatio' ...
  'n haptic pulse.'];
HwOscnMotAmp.DocUnits = 'MotNwtMtr';
HwOscnMotAmp.SwcShoName = 'GmOvrlStMgr';
HwOscnMotAmp.EngDT = dt.float32;
HwOscnMotAmp.EngInit = 0;
HwOscnMotAmp.EngMin = 0;
HwOscnMotAmp.EngMax = 1.2;
HwOscnMotAmp.TestTolerance = 0;
HwOscnMotAmp.WrittenIn = {'GmOvrlStMgrPer1'};
HwOscnMotAmp.WriteType = 'Rte';


HwTqOscSt = DataDict.OpSignal;
HwTqOscSt.LongName = 'Handwheel Torque Oscillate State';
HwTqOscSt.Description = [...
  'Oscillate State, used for CF-10 to provide some oscillation'];
HwTqOscSt.DocUnits = 'Cnt';
HwTqOscSt.SwcShoName = 'GmOvrlStMgr';
HwTqOscSt.EngDT = dt.u08;
HwTqOscSt.EngInit = 0;
HwTqOscSt.EngMin = 0;
HwTqOscSt.EngMax = 2;
HwTqOscSt.TestTolerance = 0;
HwTqOscSt.WrittenIn = {'GmOvrlStMgrPer1'};
HwTqOscSt.WriteType = 'Rte';


LkaSt = DataDict.OpSignal;
LkaSt.LongName = 'LKA State';
LkaSt.Description = 'Lane Keep Assist Operating State';
LkaSt.DocUnits = 'Cnt';
LkaSt.SwcShoName = 'GmOvrlStMgr';
LkaSt.EngDT = dt.u08;
LkaSt.EngInit = 0;
LkaSt.EngMin = 0;
LkaSt.EngMax = 4;
LkaSt.TestTolerance = 0;
LkaSt.WrittenIn = {'GmOvrlStMgrPer1'};
LkaSt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
IgnCntrLcl = DataDict.IRV;
IgnCntrLcl.LongName = 'Ignition Counter Local';
IgnCntrLcl.Description = [...
  'The ignition counter stored locally for math operation.'];
IgnCntrLcl.DocUnits = 'Cnt';
IgnCntrLcl.EngDT = dt.u16;
IgnCntrLcl.EngInit = 0;
IgnCntrLcl.EngMin = 0;
IgnCntrLcl.EngMax = 65535;
IgnCntrLcl.ReadIn = {'GmOvrlStMgrPer1'};
IgnCntrLcl.WrittenIn = {'GmOvrlStMgrInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GmOvrlStMgrApaHaptcEna = DataDict.Calibration;
GmOvrlStMgrApaHaptcEna.LongName = 'APA Haptic Enable';
GmOvrlStMgrApaHaptcEna.Description = [...
  'Logical to determin whether this application uses the haptic pulse pri' ...
  'or to transitioning from Available to Active (1== UseHapticPulse; 0==D' ...
  'oNotUseHapticPulse).'];
GmOvrlStMgrApaHaptcEna.DocUnits = 'Cnt';
GmOvrlStMgrApaHaptcEna.EngDT = dt.lgc;
GmOvrlStMgrApaHaptcEna.EngVal = 1;
GmOvrlStMgrApaHaptcEna.EngMin = 0;
GmOvrlStMgrApaHaptcEna.EngMax = 1;
GmOvrlStMgrApaHaptcEna.Cardinality = 'Cmn';
GmOvrlStMgrApaHaptcEna.CustomerVisible = false;
GmOvrlStMgrApaHaptcEna.Online = true;
GmOvrlStMgrApaHaptcEna.Impact = 'H';
GmOvrlStMgrApaHaptcEna.TuningOwner = 'CSE';
GmOvrlStMgrApaHaptcEna.GraphLink = {''};
GmOvrlStMgrApaHaptcEna.Monotony = 'None';
GmOvrlStMgrApaHaptcEna.MaxGrad = 998;
GmOvrlStMgrApaHaptcEna.PortName = 'GmOvrlStMgrApaHaptcEna';


GmOvrlStMgrApaHwTqFilFrq = DataDict.Calibration;
GmOvrlStMgrApaHwTqFilFrq.LongName = 'APA Handwheel Torque Filter Frequency';
GmOvrlStMgrApaHwTqFilFrq.Description = [...
  'Handwheel Torque Filter for the driver intervention detection.'];
GmOvrlStMgrApaHwTqFilFrq.DocUnits = 'Hz';
GmOvrlStMgrApaHwTqFilFrq.EngDT = dt.float32;
GmOvrlStMgrApaHwTqFilFrq.EngVal = 10;
GmOvrlStMgrApaHwTqFilFrq.EngMin = 0.1;
GmOvrlStMgrApaHwTqFilFrq.EngMax = 100;
GmOvrlStMgrApaHwTqFilFrq.Cardinality = 'Inin';
GmOvrlStMgrApaHwTqFilFrq.CustomerVisible = false;
GmOvrlStMgrApaHwTqFilFrq.Online = false;
GmOvrlStMgrApaHwTqFilFrq.Impact = 'M';
GmOvrlStMgrApaHwTqFilFrq.TuningOwner = 'CSE';
GmOvrlStMgrApaHwTqFilFrq.GraphLink = {''};
GmOvrlStMgrApaHwTqFilFrq.Monotony = 'None';
GmOvrlStMgrApaHwTqFilFrq.MaxGrad = 998;
GmOvrlStMgrApaHwTqFilFrq.PortName = 'GmOvrlStMgrApaHwTqFilFrq';


GmOvrlStMgrApaHwTqThd = DataDict.Calibration;
GmOvrlStMgrApaHwTqThd.LongName = 'APA Handwheel Torque Threshold';
GmOvrlStMgrApaHwTqThd.Description = [...
  'Threshold for filtered handwheel torque for APA active'];
GmOvrlStMgrApaHwTqThd.DocUnits = 'HwNwtMtr';
GmOvrlStMgrApaHwTqThd.EngDT = dt.float32;
GmOvrlStMgrApaHwTqThd.EngVal = 3;
GmOvrlStMgrApaHwTqThd.EngMin = 0;
GmOvrlStMgrApaHwTqThd.EngMax = 10;
GmOvrlStMgrApaHwTqThd.Cardinality = 'Cmn';
GmOvrlStMgrApaHwTqThd.CustomerVisible = false;
GmOvrlStMgrApaHwTqThd.Online = true;
GmOvrlStMgrApaHwTqThd.Impact = 'H';
GmOvrlStMgrApaHwTqThd.TuningOwner = 'CSE';
GmOvrlStMgrApaHwTqThd.GraphLink = {''};
GmOvrlStMgrApaHwTqThd.Monotony = 'None';
GmOvrlStMgrApaHwTqThd.MaxGrad = 998;
GmOvrlStMgrApaHwTqThd.PortName = 'GmOvrlStMgrApaHwTqThd';


GmOvrlStMgrApaHwTqTiThd = DataDict.Calibration;
GmOvrlStMgrApaHwTqTiThd.LongName = 'APA Handwheel Torque Time Threshold';
GmOvrlStMgrApaHwTqTiThd.Description = [...
  'Time that filtered handwheel torque must exceed max for APA to deactiv' ...
  'ate.'];
GmOvrlStMgrApaHwTqTiThd.DocUnits = 'MilliSec';
GmOvrlStMgrApaHwTqTiThd.EngDT = dt.u32;
GmOvrlStMgrApaHwTqTiThd.EngVal = 50;
GmOvrlStMgrApaHwTqTiThd.EngMin = 0;
GmOvrlStMgrApaHwTqTiThd.EngMax = 1000;
GmOvrlStMgrApaHwTqTiThd.Cardinality = 'Inin';
GmOvrlStMgrApaHwTqTiThd.CustomerVisible = false;
GmOvrlStMgrApaHwTqTiThd.Online = false;
GmOvrlStMgrApaHwTqTiThd.Impact = 'H';
GmOvrlStMgrApaHwTqTiThd.TuningOwner = 'CSE';
GmOvrlStMgrApaHwTqTiThd.GraphLink = {''};
GmOvrlStMgrApaHwTqTiThd.Monotony = 'None';
GmOvrlStMgrApaHwTqTiThd.MaxGrad = 998;
GmOvrlStMgrApaHwTqTiThd.PortName = 'GmOvrlStMgrApaHwTqTiThd';


GmOvrlStMgrApaMfgEna = DataDict.Calibration;
GmOvrlStMgrApaMfgEna.LongName = 'APA Manufacturing Enable';
GmOvrlStMgrApaMfgEna.Description = [...
  'Calibration to Enable or Disable Auto Park Assist'];
GmOvrlStMgrApaMfgEna.DocUnits = 'Cnt';
GmOvrlStMgrApaMfgEna.EngDT = dt.lgc;
GmOvrlStMgrApaMfgEna.EngVal = 0;
GmOvrlStMgrApaMfgEna.EngMin = 0;
GmOvrlStMgrApaMfgEna.EngMax = 1;
GmOvrlStMgrApaMfgEna.Cardinality = 'Rt';
GmOvrlStMgrApaMfgEna.CustomerVisible = false;
GmOvrlStMgrApaMfgEna.Online = true;
GmOvrlStMgrApaMfgEna.Impact = 'H';
GmOvrlStMgrApaMfgEna.TuningOwner = 'CSE';
GmOvrlStMgrApaMfgEna.GraphLink = {''};
GmOvrlStMgrApaMfgEna.Monotony = 'None';
GmOvrlStMgrApaMfgEna.MaxGrad = 998;
GmOvrlStMgrApaMfgEna.PortName = 'GmOvrlStMgrApaMfgEna';


GmOvrlStMgrApaVehSpdHiLim = DataDict.Calibration;
GmOvrlStMgrApaVehSpdHiLim.LongName = 'APA Vehicle Speed High Limit';
GmOvrlStMgrApaVehSpdHiLim.Description = [...
  'High vehicle speed limit for APA. No APA allowed when vehicle speed ex' ...
  'ceeds the value.'];
GmOvrlStMgrApaVehSpdHiLim.DocUnits = 'Kph';
GmOvrlStMgrApaVehSpdHiLim.EngDT = dt.float32;
GmOvrlStMgrApaVehSpdHiLim.EngVal = 10;
GmOvrlStMgrApaVehSpdHiLim.EngMin = 0;
GmOvrlStMgrApaVehSpdHiLim.EngMax = 220;
GmOvrlStMgrApaVehSpdHiLim.Cardinality = 'Cmn';
GmOvrlStMgrApaVehSpdHiLim.CustomerVisible = false;
GmOvrlStMgrApaVehSpdHiLim.Online = true;
GmOvrlStMgrApaVehSpdHiLim.Impact = 'H';
GmOvrlStMgrApaVehSpdHiLim.TuningOwner = 'CSE';
GmOvrlStMgrApaVehSpdHiLim.GraphLink = {''};
GmOvrlStMgrApaVehSpdHiLim.Monotony = 'None';
GmOvrlStMgrApaVehSpdHiLim.MaxGrad = 998;
GmOvrlStMgrApaVehSpdHiLim.PortName = 'GmOvrlStMgrApaVehSpdHiLim';


GmOvrlStMgrEscMfgEna = DataDict.Calibration;
GmOvrlStMgrEscMfgEna.LongName = 'ESC Manufacturing Enable';
GmOvrlStMgrEscMfgEna.Description = [...
  'Calibration to Enable or Disable Enhanced Stability Control'];
GmOvrlStMgrEscMfgEna.DocUnits = 'Cnt';
GmOvrlStMgrEscMfgEna.EngDT = dt.lgc;
GmOvrlStMgrEscMfgEna.EngVal = 0;
GmOvrlStMgrEscMfgEna.EngMin = 0;
GmOvrlStMgrEscMfgEna.EngMax = 1;
GmOvrlStMgrEscMfgEna.Cardinality = 'Rt';
GmOvrlStMgrEscMfgEna.CustomerVisible = false;
GmOvrlStMgrEscMfgEna.Online = true;
GmOvrlStMgrEscMfgEna.Impact = 'H';
GmOvrlStMgrEscMfgEna.TuningOwner = 'CSE';
GmOvrlStMgrEscMfgEna.GraphLink = {''};
GmOvrlStMgrEscMfgEna.Monotony = 'None';
GmOvrlStMgrEscMfgEna.MaxGrad = 998;
GmOvrlStMgrEscMfgEna.PortName = 'GmOvrlStMgrEscMfgEna';


GmOvrlStMgrEscVehSpdHiLim = DataDict.Calibration;
GmOvrlStMgrEscVehSpdHiLim.LongName = 'ESC Vehicle Speed High Limit';
GmOvrlStMgrEscVehSpdHiLim.Description = [...
  'High vehicle speed limit for ESC. No ESC allowed when Vehicle speed ex' ...
  'ceeds the value.'];
GmOvrlStMgrEscVehSpdHiLim.DocUnits = 'Kph';
GmOvrlStMgrEscVehSpdHiLim.EngDT = dt.float32;
GmOvrlStMgrEscVehSpdHiLim.EngVal = 180;
GmOvrlStMgrEscVehSpdHiLim.EngMin = 0;
GmOvrlStMgrEscVehSpdHiLim.EngMax = 220;
GmOvrlStMgrEscVehSpdHiLim.Cardinality = 'Cmn';
GmOvrlStMgrEscVehSpdHiLim.CustomerVisible = false;
GmOvrlStMgrEscVehSpdHiLim.Online = true;
GmOvrlStMgrEscVehSpdHiLim.Impact = 'M';
GmOvrlStMgrEscVehSpdHiLim.TuningOwner = 'CSE';
GmOvrlStMgrEscVehSpdHiLim.GraphLink = {''};
GmOvrlStMgrEscVehSpdHiLim.Monotony = 'None';
GmOvrlStMgrEscVehSpdHiLim.MaxGrad = 998;
GmOvrlStMgrEscVehSpdHiLim.PortName = 'GmOvrlStMgrEscVehSpdHiLim';


GmOvrlStMgrHaptcAmp = DataDict.Calibration;
GmOvrlStMgrHaptcAmp.LongName = 'Haptic Amplitude';
GmOvrlStMgrHaptcAmp.Description = [...
  'Maximum amplitude in motor Newton Meter for the haptic pulse for APA. ' ...
  ''];
GmOvrlStMgrHaptcAmp.DocUnits = 'MotNwtMtr';
GmOvrlStMgrHaptcAmp.EngDT = dt.float32;
GmOvrlStMgrHaptcAmp.EngVal = 0.5;
GmOvrlStMgrHaptcAmp.EngMin = 0;
GmOvrlStMgrHaptcAmp.EngMax = 1.2;
GmOvrlStMgrHaptcAmp.Cardinality = 'Cmn';
GmOvrlStMgrHaptcAmp.CustomerVisible = false;
GmOvrlStMgrHaptcAmp.Online = true;
GmOvrlStMgrHaptcAmp.Impact = 'L';
GmOvrlStMgrHaptcAmp.TuningOwner = 'CSE';
GmOvrlStMgrHaptcAmp.GraphLink = {''};
GmOvrlStMgrHaptcAmp.Monotony = 'None';
GmOvrlStMgrHaptcAmp.MaxGrad = 998;
GmOvrlStMgrHaptcAmp.PortName = 'GmOvrlStMgrHaptcAmp';


GmOvrlStMgrHaptcDurn = DataDict.Calibration;
GmOvrlStMgrHaptcDurn.LongName = 'Haptic Duration';
GmOvrlStMgrHaptcDurn.Description = [...
  'Duration of the haptic pulse for APA'];
GmOvrlStMgrHaptcDurn.DocUnits = 'MilliSec';
GmOvrlStMgrHaptcDurn.EngDT = dt.u32;
GmOvrlStMgrHaptcDurn.EngVal = 450;
GmOvrlStMgrHaptcDurn.EngMin = 0;
GmOvrlStMgrHaptcDurn.EngMax = 2000;
GmOvrlStMgrHaptcDurn.Cardinality = 'Cmn';
GmOvrlStMgrHaptcDurn.CustomerVisible = false;
GmOvrlStMgrHaptcDurn.Online = true;
GmOvrlStMgrHaptcDurn.Impact = 'L';
GmOvrlStMgrHaptcDurn.TuningOwner = 'CSE';
GmOvrlStMgrHaptcDurn.GraphLink = {''};
GmOvrlStMgrHaptcDurn.Monotony = 'None';
GmOvrlStMgrHaptcDurn.MaxGrad = 998;
GmOvrlStMgrHaptcDurn.PortName = 'GmOvrlStMgrHaptcDurn';


GmOvrlStMgrHaptcFrq = DataDict.Calibration;
GmOvrlStMgrHaptcFrq.LongName = 'Haptic Frequency';
GmOvrlStMgrHaptcFrq.Description = [...
  'Frequency of the haptic pulse for APA.'];
GmOvrlStMgrHaptcFrq.DocUnits = 'Hz';
GmOvrlStMgrHaptcFrq.EngDT = dt.float32;
GmOvrlStMgrHaptcFrq.EngVal = 10;
GmOvrlStMgrHaptcFrq.EngMin = 10;
GmOvrlStMgrHaptcFrq.EngMax = 50;
GmOvrlStMgrHaptcFrq.Cardinality = 'Inin';
GmOvrlStMgrHaptcFrq.CustomerVisible = false;
GmOvrlStMgrHaptcFrq.Online = false;
GmOvrlStMgrHaptcFrq.Impact = 'L';
GmOvrlStMgrHaptcFrq.TuningOwner = 'CSE';
GmOvrlStMgrHaptcFrq.GraphLink = {''};
GmOvrlStMgrHaptcFrq.Monotony = 'None';
GmOvrlStMgrHaptcFrq.MaxGrad = 998;
GmOvrlStMgrHaptcFrq.PortName = 'GmOvrlStMgrHaptcFrq';


GmOvrlStMgrHaptcReactnTi = DataDict.Calibration;
GmOvrlStMgrHaptcReactnTi.LongName = 'Haptic Reaction Time';
GmOvrlStMgrHaptcReactnTi.Description = [...
  'Time to wait after the haptic pulse finishes before entering APA Activ' ...
  'e to allow driver to remove hands.'];
GmOvrlStMgrHaptcReactnTi.DocUnits = 'MilliSec';
GmOvrlStMgrHaptcReactnTi.EngDT = dt.u32;
GmOvrlStMgrHaptcReactnTi.EngVal = 350;
GmOvrlStMgrHaptcReactnTi.EngMin = 0;
GmOvrlStMgrHaptcReactnTi.EngMax = 2000;
GmOvrlStMgrHaptcReactnTi.Cardinality = 'Inin';
GmOvrlStMgrHaptcReactnTi.CustomerVisible = false;
GmOvrlStMgrHaptcReactnTi.Online = false;
GmOvrlStMgrHaptcReactnTi.Impact = 'M';
GmOvrlStMgrHaptcReactnTi.TuningOwner = 'CSE';
GmOvrlStMgrHaptcReactnTi.GraphLink = {''};
GmOvrlStMgrHaptcReactnTi.Monotony = 'None';
GmOvrlStMgrHaptcReactnTi.MaxGrad = 998;
GmOvrlStMgrHaptcReactnTi.PortName = 'GmOvrlStMgrHaptcReactnTi';


GmOvrlStMgrHaptcReqTiThd = DataDict.Calibration;
GmOvrlStMgrHaptcReqTiThd.LongName = 'Haptic Request Time Threshold';
GmOvrlStMgrHaptcReqTiThd.Description = [...
  'Maximum time that the external haptic pulse request is allowed before ' ...
  'faulting APA.'];
GmOvrlStMgrHaptcReqTiThd.DocUnits = 'MilliSec';
GmOvrlStMgrHaptcReqTiThd.EngDT = dt.u32;
GmOvrlStMgrHaptcReqTiThd.EngVal = 500;
GmOvrlStMgrHaptcReqTiThd.EngMin = 0;
GmOvrlStMgrHaptcReqTiThd.EngMax = 1000;
GmOvrlStMgrHaptcReqTiThd.Cardinality = 'Inin';
GmOvrlStMgrHaptcReqTiThd.CustomerVisible = false;
GmOvrlStMgrHaptcReqTiThd.Online = false;
GmOvrlStMgrHaptcReqTiThd.Impact = 'H';
GmOvrlStMgrHaptcReqTiThd.TuningOwner = 'CSE';
GmOvrlStMgrHaptcReqTiThd.GraphLink = {''};
GmOvrlStMgrHaptcReqTiThd.Monotony = 'None';
GmOvrlStMgrHaptcReqTiThd.MaxGrad = 998;
GmOvrlStMgrHaptcReqTiThd.PortName = 'GmOvrlStMgrHaptcReqTiThd';


GmOvrlStMgrHwAgTarLimr = DataDict.Calibration;
GmOvrlStMgrHwAgTarLimr.LongName = 'Handwheel Angle Target Limiter';
GmOvrlStMgrHwAgTarLimr.Description = 'Used to increase the range of EOT';
GmOvrlStMgrHwAgTarLimr.DocUnits = 'HwDeg';
GmOvrlStMgrHwAgTarLimr.EngDT = dt.float32;
GmOvrlStMgrHwAgTarLimr.EngVal = 30;
GmOvrlStMgrHwAgTarLimr.EngMin = 0;
GmOvrlStMgrHwAgTarLimr.EngMax = 60;
GmOvrlStMgrHwAgTarLimr.Cardinality = 'Rt';
GmOvrlStMgrHwAgTarLimr.CustomerVisible = false;
GmOvrlStMgrHwAgTarLimr.Online = true;
GmOvrlStMgrHwAgTarLimr.Impact = 'M';
GmOvrlStMgrHwAgTarLimr.TuningOwner = 'CSE';
GmOvrlStMgrHwAgTarLimr.GraphLink = {''};
GmOvrlStMgrHwAgTarLimr.Monotony = 'None';
GmOvrlStMgrHwAgTarLimr.MaxGrad = 998;
GmOvrlStMgrHwAgTarLimr.PortName = 'GmOvrlStMgrHwAgTarLimr';


GmOvrlStMgrHwTqFilFrq = DataDict.Calibration;
GmOvrlStMgrHwTqFilFrq.LongName = 'Handwheel Torque Filter Frequency';
GmOvrlStMgrHwTqFilFrq.Description = [...
  'Cut-off frequency for the handwheel torque filter use for handwheel bu' ...
  'zz'];
GmOvrlStMgrHwTqFilFrq.DocUnits = 'Hz';
GmOvrlStMgrHwTqFilFrq.EngDT = dt.float32;
GmOvrlStMgrHwTqFilFrq.EngVal = 10;
GmOvrlStMgrHwTqFilFrq.EngMin = 0.1;
GmOvrlStMgrHwTqFilFrq.EngMax = 100;
GmOvrlStMgrHwTqFilFrq.Cardinality = 'Inin';
GmOvrlStMgrHwTqFilFrq.CustomerVisible = false;
GmOvrlStMgrHwTqFilFrq.Online = false;
GmOvrlStMgrHwTqFilFrq.Impact = 'H';
GmOvrlStMgrHwTqFilFrq.TuningOwner = 'CSE';
GmOvrlStMgrHwTqFilFrq.GraphLink = {''};
GmOvrlStMgrHwTqFilFrq.Monotony = 'None';
GmOvrlStMgrHwTqFilFrq.MaxGrad = 998;
GmOvrlStMgrHwTqFilFrq.PortName = 'GmOvrlStMgrHwTqFilFrq';


GmOvrlStMgrLkaHwTqFilFrq = DataDict.Calibration;
GmOvrlStMgrLkaHwTqFilFrq.LongName = 'LKA Handwheel Torque Filter Frequency';
GmOvrlStMgrLkaHwTqFilFrq.Description = [...
  'Handwheel Torque Filter for the LKA driver intervention detection.'];
GmOvrlStMgrLkaHwTqFilFrq.DocUnits = 'Hz';
GmOvrlStMgrLkaHwTqFilFrq.EngDT = dt.float32;
GmOvrlStMgrLkaHwTqFilFrq.EngVal = 10;
GmOvrlStMgrLkaHwTqFilFrq.EngMin = 0.1;
GmOvrlStMgrLkaHwTqFilFrq.EngMax = 100;
GmOvrlStMgrLkaHwTqFilFrq.Cardinality = 'Inin';
GmOvrlStMgrLkaHwTqFilFrq.CustomerVisible = false;
GmOvrlStMgrLkaHwTqFilFrq.Online = false;
GmOvrlStMgrLkaHwTqFilFrq.Impact = 'M';
GmOvrlStMgrLkaHwTqFilFrq.TuningOwner = 'CSE';
GmOvrlStMgrLkaHwTqFilFrq.GraphLink = {''};
GmOvrlStMgrLkaHwTqFilFrq.Monotony = 'None';
GmOvrlStMgrLkaHwTqFilFrq.MaxGrad = 998;
GmOvrlStMgrLkaHwTqFilFrq.PortName = 'GmOvrlStMgrLkaHwTqFilFrq';


GmOvrlStMgrLkaHwTqThd1 = DataDict.Calibration;
GmOvrlStMgrLkaHwTqThd1.LongName = 'LKA Handwheel Torque Threshold 1';
GmOvrlStMgrLkaHwTqThd1.Description = [...
  'Threshold 1 for filtered handwheel torque for LKA active.Note: GmOvrlS' ...
  'tMgrLkaHwTqThd1 must be set less than GmOvrlStMgrLkaHwTqThd2'];
GmOvrlStMgrLkaHwTqThd1.DocUnits = 'HwNwtMtr';
GmOvrlStMgrLkaHwTqThd1.EngDT = dt.float32;
GmOvrlStMgrLkaHwTqThd1.EngVal = 3;
GmOvrlStMgrLkaHwTqThd1.EngMin = 0;
GmOvrlStMgrLkaHwTqThd1.EngMax = 10;
GmOvrlStMgrLkaHwTqThd1.Cardinality = 'Cmn';
GmOvrlStMgrLkaHwTqThd1.CustomerVisible = false;
GmOvrlStMgrLkaHwTqThd1.Online = true;
GmOvrlStMgrLkaHwTqThd1.Impact = 'H';
GmOvrlStMgrLkaHwTqThd1.TuningOwner = 'CSE';
GmOvrlStMgrLkaHwTqThd1.GraphLink = {''};
GmOvrlStMgrLkaHwTqThd1.Monotony = 'None';
GmOvrlStMgrLkaHwTqThd1.MaxGrad = 998;
GmOvrlStMgrLkaHwTqThd1.PortName = 'GmOvrlStMgrLkaHwTqThd1';


GmOvrlStMgrLkaHwTqThd2 = DataDict.Calibration;
GmOvrlStMgrLkaHwTqThd2.LongName = 'LKA Handwheel Torque Threshold 1';
GmOvrlStMgrLkaHwTqThd2.Description = [...
  'Threshold 2 for filtered handwheel torque for LKA activeNote: GmOvrlSt' ...
  'MgrLkaHwTqThd2 must be set greater than GmOvrlStMgrLkaHwTqThd1'];
GmOvrlStMgrLkaHwTqThd2.DocUnits = 'HwNwtMtr';
GmOvrlStMgrLkaHwTqThd2.EngDT = dt.float32;
GmOvrlStMgrLkaHwTqThd2.EngVal = 5;
GmOvrlStMgrLkaHwTqThd2.EngMin = 0;
GmOvrlStMgrLkaHwTqThd2.EngMax = 10;
GmOvrlStMgrLkaHwTqThd2.Cardinality = 'Cmn';
GmOvrlStMgrLkaHwTqThd2.CustomerVisible = false;
GmOvrlStMgrLkaHwTqThd2.Online = true;
GmOvrlStMgrLkaHwTqThd2.Impact = 'H';
GmOvrlStMgrLkaHwTqThd2.TuningOwner = 'CSE';
GmOvrlStMgrLkaHwTqThd2.GraphLink = {''};
GmOvrlStMgrLkaHwTqThd2.Monotony = 'None';
GmOvrlStMgrLkaHwTqThd2.MaxGrad = 998;
GmOvrlStMgrLkaHwTqThd2.PortName = 'GmOvrlStMgrLkaHwTqThd2';


GmOvrlStMgrLkaHwTqTiThd1 = DataDict.Calibration;
GmOvrlStMgrLkaHwTqTiThd1.LongName = 'LKA Handwheel Torque Time Threshold 1';
GmOvrlStMgrLkaHwTqTiThd1.Description = [...
  'Time that filtered handwheel torque must exceed LKA Handwheel Torque T' ...
  'hreshold 1 for LKA to deactivate.'];
GmOvrlStMgrLkaHwTqTiThd1.DocUnits = 'MilliSec';
GmOvrlStMgrLkaHwTqTiThd1.EngDT = dt.u32;
GmOvrlStMgrLkaHwTqTiThd1.EngVal = 10000;
GmOvrlStMgrLkaHwTqTiThd1.EngMin = 0;
GmOvrlStMgrLkaHwTqTiThd1.EngMax = 60000;
GmOvrlStMgrLkaHwTqTiThd1.Cardinality = 'Inin';
GmOvrlStMgrLkaHwTqTiThd1.CustomerVisible = false;
GmOvrlStMgrLkaHwTqTiThd1.Online = true;
GmOvrlStMgrLkaHwTqTiThd1.Impact = 'M';
GmOvrlStMgrLkaHwTqTiThd1.TuningOwner = 'CSE';
GmOvrlStMgrLkaHwTqTiThd1.GraphLink = {''};
GmOvrlStMgrLkaHwTqTiThd1.Monotony = 'None';
GmOvrlStMgrLkaHwTqTiThd1.MaxGrad = 998;
GmOvrlStMgrLkaHwTqTiThd1.PortName = 'GmOvrlStMgrLkaHwTqTiThd1';


GmOvrlStMgrLkaHwTqTiThd2 = DataDict.Calibration;
GmOvrlStMgrLkaHwTqTiThd2.LongName = 'LKA Handwheel Torque Time Threshold 2';
GmOvrlStMgrLkaHwTqTiThd2.Description = [...
  'Time that filtered handwheel torque must exceed LKA Handwheel Torque T' ...
  'hreshold 2 for LKA to deactivate.'];
GmOvrlStMgrLkaHwTqTiThd2.DocUnits = 'MilliSec';
GmOvrlStMgrLkaHwTqTiThd2.EngDT = dt.u32;
GmOvrlStMgrLkaHwTqTiThd2.EngVal = 100;
GmOvrlStMgrLkaHwTqTiThd2.EngMin = 0;
GmOvrlStMgrLkaHwTqTiThd2.EngMax = 1000;
GmOvrlStMgrLkaHwTqTiThd2.Cardinality = 'Inin';
GmOvrlStMgrLkaHwTqTiThd2.CustomerVisible = false;
GmOvrlStMgrLkaHwTqTiThd2.Online = false;
GmOvrlStMgrLkaHwTqTiThd2.Impact = 'M';
GmOvrlStMgrLkaHwTqTiThd2.TuningOwner = 'CSE';
GmOvrlStMgrLkaHwTqTiThd2.GraphLink = {''};
GmOvrlStMgrLkaHwTqTiThd2.Monotony = 'None';
GmOvrlStMgrLkaHwTqTiThd2.MaxGrad = 998;
GmOvrlStMgrLkaHwTqTiThd2.PortName = 'GmOvrlStMgrLkaHwTqTiThd2';


GmOvrlStMgrLkaMfgEna = DataDict.Calibration;
GmOvrlStMgrLkaMfgEna.LongName = 'LKA Manufacturing Enable';
GmOvrlStMgrLkaMfgEna.Description = [...
  'Calibration to Enable or Disable Lane Keeping Assist'];
GmOvrlStMgrLkaMfgEna.DocUnits = 'Cnt';
GmOvrlStMgrLkaMfgEna.EngDT = dt.lgc;
GmOvrlStMgrLkaMfgEna.EngVal = 0;
GmOvrlStMgrLkaMfgEna.EngMin = 0;
GmOvrlStMgrLkaMfgEna.EngMax = 1;
GmOvrlStMgrLkaMfgEna.Cardinality = 'Rt';
GmOvrlStMgrLkaMfgEna.CustomerVisible = false;
GmOvrlStMgrLkaMfgEna.Online = true;
GmOvrlStMgrLkaMfgEna.Impact = 'H';
GmOvrlStMgrLkaMfgEna.TuningOwner = 'CSE';
GmOvrlStMgrLkaMfgEna.GraphLink = {''};
GmOvrlStMgrLkaMfgEna.Monotony = 'None';
GmOvrlStMgrLkaMfgEna.MaxGrad = 998;
GmOvrlStMgrLkaMfgEna.PortName = 'GmOvrlStMgrLkaMfgEna';


GmOvrlStMgrLkaVehSpdHiLim = DataDict.Calibration;
GmOvrlStMgrLkaVehSpdHiLim.LongName = 'LKA Vehicle Speed High Limit';
GmOvrlStMgrLkaVehSpdHiLim.Description = [...
  'LKA state would be set to inactive if the vehicle speed exceeds the va' ...
  'lue.'];
GmOvrlStMgrLkaVehSpdHiLim.DocUnits = 'Kph';
GmOvrlStMgrLkaVehSpdHiLim.EngDT = dt.float32;
GmOvrlStMgrLkaVehSpdHiLim.EngVal = 180;
GmOvrlStMgrLkaVehSpdHiLim.EngMin = 0;
GmOvrlStMgrLkaVehSpdHiLim.EngMax = 220;
GmOvrlStMgrLkaVehSpdHiLim.Cardinality = 'Cmn';
GmOvrlStMgrLkaVehSpdHiLim.CustomerVisible = false;
GmOvrlStMgrLkaVehSpdHiLim.Online = true;
GmOvrlStMgrLkaVehSpdHiLim.Impact = 'M';
GmOvrlStMgrLkaVehSpdHiLim.TuningOwner = 'CSE';
GmOvrlStMgrLkaVehSpdHiLim.GraphLink = {''};
GmOvrlStMgrLkaVehSpdHiLim.Monotony = 'None';
GmOvrlStMgrLkaVehSpdHiLim.MaxGrad = 998;
GmOvrlStMgrLkaVehSpdHiLim.PortName = 'GmOvrlStMgrLkaVehSpdHiLim';


GmOvrlStMgrLkaVehSpdLoLim = DataDict.Calibration;
GmOvrlStMgrLkaVehSpdLoLim.LongName = 'LKA Vehicle Speed Low Limit';
GmOvrlStMgrLkaVehSpdLoLim.Description = [...
  'LKAMinimum state would be set to inactive if the vehicle speed is less' ...
  ' than the value.'];
GmOvrlStMgrLkaVehSpdLoLim.DocUnits = 'Kph';
GmOvrlStMgrLkaVehSpdLoLim.EngDT = dt.float32;
GmOvrlStMgrLkaVehSpdLoLim.EngVal = 10;
GmOvrlStMgrLkaVehSpdLoLim.EngMin = 0;
GmOvrlStMgrLkaVehSpdLoLim.EngMax = 220;
GmOvrlStMgrLkaVehSpdLoLim.Cardinality = 'Cmn';
GmOvrlStMgrLkaVehSpdLoLim.CustomerVisible = false;
GmOvrlStMgrLkaVehSpdLoLim.Online = true;
GmOvrlStMgrLkaVehSpdLoLim.Impact = 'M';
GmOvrlStMgrLkaVehSpdLoLim.TuningOwner = 'CSE';
GmOvrlStMgrLkaVehSpdLoLim.GraphLink = {''};
GmOvrlStMgrLkaVehSpdLoLim.Monotony = 'None';
GmOvrlStMgrLkaVehSpdLoLim.MaxGrad = 998;
GmOvrlStMgrLkaVehSpdLoLim.PortName = 'GmOvrlStMgrLkaVehSpdLoLim';


GmOvrlStMgrLoaMtgtnHaptcFbOffTi = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.LongName = 'LOA Mitigation Haptic Feedback Off Time';
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.Description = [...
  'The amount of time in between haptic feedback torque pulses'];
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.DocUnits = 'MilliSec';
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.EngDT = dt.u32;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.EngVal = 5000;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.EngMin = 0;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.EngMax = 65535;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.Cardinality = 'Inin';
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.Online = false;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.Impact = 'H';
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFbOffTi.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFbOffTi';


GmOvrlStMgrLoaMtgtnHaptcFbOnTi = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.LongName = 'LOA Mitigation Haptic Feedback On Time';
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.Description = [...
  'The amount of time the haptic feedback torque pulse is active'];
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.DocUnits = 'MilliSec';
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.EngDT = dt.u32;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.EngVal = 800;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.EngMin = 0;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.EngMax = 10000;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.Cardinality = 'Inin';
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.Online = false;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.Impact = 'H';
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFbOnTi.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFbOnTi';


GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.LongName = 'Loa Mitigation Haptic Feedback Start On Time Threshold';
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.Description = [...
  'Time that haptc feedback will be enabled if Loa in Limited or software' ...
  ' based mitigation at the start up of Periodic '];
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.DocUnits = 'MilliSec';
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.EngDT = dt.u32;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.EngVal = 2000;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.EngMin = 0;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.EngMax = 10000;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.Cardinality = 'Inin';
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.Online = false;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.Impact = 'H';
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFbStrtOnTi';


GmOvrlStMgrLoaMtgtnHaptcFbTqMax = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.LongName = 'LOA Mitigation Haptic Feedback Torque Maximum';
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.Description = [...
  'The maximum input torque allowed before the LoA mitigation feedback to' ...
  'rque will turn off'];
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.DocUnits = 'HwNwtMtr';
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.EngDT = dt.float32;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.EngVal = 8;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.EngMin = 0;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.EngMax = 10;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.Cardinality = 'Cmn';
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.Online = true;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.Impact = 'M';
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFbTqMax.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFbTqMax';


GmOvrlStMgrLoaMtgtnHaptcFbTqMin = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.LongName = 'LOA Mitigation Haptic Feedback Torque Minimum';
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.Description = [...
  'The minimum input torque needed before the LoA mitigation feedback tor' ...
  'que will turn off'];
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.DocUnits = 'HwNwtMtr';
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.EngDT = dt.float32;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.EngVal = 0.5;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.EngMin = 0;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.EngMax = 10;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.Cardinality = 'Cmn';
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.Online = true;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.Impact = 'M';
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFbTqMin.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFbTqMin';


GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.LongName = 'LOA Mitigation Haptic Feedback Vehicle Speed Maximum';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.Description = [...
  'The maximum vehicle speed for the LoA mitigation feedback torque to tu' ...
  'rn on'];
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.DocUnits = 'Kph';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.EngDT = dt.float32;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.EngVal = 128;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.EngMin = 0;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.EngMax = 255;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.Cardinality = 'Cmn';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.Online = true;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.Impact = 'M';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMax';


GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.LongName = 'LOA Mitigation Haptic Feedback Vehicle Speed Minimum';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.Description = [...
  'The minimum vehicle speed needed for the LoA mitigation feedback torqu' ...
  'e to turn on'];
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.DocUnits = 'Kph';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.EngDT = dt.float32;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.EngVal = 2;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.EngMin = 0;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.EngMax = 255;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.Cardinality = 'Cmn';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.Online = true;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.Impact = 'M';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFbVehSpdMin';


GmOvrlStMgrLoaMtgtnHaptcFrq = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnHaptcFrq.LongName = 'Loa Mitigation Haptic Feedback Frequency';
GmOvrlStMgrLoaMtgtnHaptcFrq.Description = [...
  'Loa mitigation haptic feedback frequency'];
GmOvrlStMgrLoaMtgtnHaptcFrq.DocUnits = 'Hz';
GmOvrlStMgrLoaMtgtnHaptcFrq.EngDT = dt.float32;
GmOvrlStMgrLoaMtgtnHaptcFrq.EngVal = 10;
GmOvrlStMgrLoaMtgtnHaptcFrq.EngMin = 10;
GmOvrlStMgrLoaMtgtnHaptcFrq.EngMax = 50;
GmOvrlStMgrLoaMtgtnHaptcFrq.Cardinality = 'Cmn';
GmOvrlStMgrLoaMtgtnHaptcFrq.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnHaptcFrq.Online = true;
GmOvrlStMgrLoaMtgtnHaptcFrq.Impact = 'H';
GmOvrlStMgrLoaMtgtnHaptcFrq.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnHaptcFrq.GraphLink = {''};
GmOvrlStMgrLoaMtgtnHaptcFrq.Monotony = 'None';
GmOvrlStMgrLoaMtgtnHaptcFrq.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnHaptcFrq.PortName = 'GmOvrlStMgrLoaMtgtnHaptcFrq';


GmOvrlStMgrLoaMtgtnStrtHaptcAmp = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.LongName = 'Loa Mitigation Start Haptic Amplitude';
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.Description = [...
  'Amplitude in motor Newton Meter at start up for the haptic pulse. '];
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.DocUnits = 'MotNwtMtr';
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.EngDT = dt.float32;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.EngVal = 0.2;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.EngMin = 0;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.EngMax = 1.2;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.Cardinality = 'Inin';
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.Online = false;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.Impact = 'L';
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.GraphLink = {''};
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.Monotony = 'None';
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnStrtHaptcAmp.PortName = 'GmOvrlStMgrLoaMtgtnStrtHaptcAmp';


GmOvrlStMgrLoaMtgtnTqOscnAmpY = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnTqOscnAmpY.LongName = 'LOA Mitigation Torque Oscillation Amplitude Y';
GmOvrlStMgrLoaMtgtnTqOscnAmpY.Description = [...
  'The amplitude of the LoA Mitigation state based torque oscillation; Y ' ...
  'axis'];
GmOvrlStMgrLoaMtgtnTqOscnAmpY.DocUnits = 'MotNwtMtr';
GmOvrlStMgrLoaMtgtnTqOscnAmpY.EngDT = dt.u2p14;
GmOvrlStMgrLoaMtgtnTqOscnAmpY.EngVal =  ...
   [0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5];
GmOvrlStMgrLoaMtgtnTqOscnAmpY.EngMin = 0;
GmOvrlStMgrLoaMtgtnTqOscnAmpY.EngMax = 1.2;
GmOvrlStMgrLoaMtgtnTqOscnAmpY.Cardinality = 'Cmn';
GmOvrlStMgrLoaMtgtnTqOscnAmpY.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnTqOscnAmpY.Online = true;
GmOvrlStMgrLoaMtgtnTqOscnAmpY.Impact = 'H';
GmOvrlStMgrLoaMtgtnTqOscnAmpY.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnTqOscnAmpY.GraphLink = {'GmOvrlStMgrLoaMtgtnVehSpdX'};
GmOvrlStMgrLoaMtgtnTqOscnAmpY.Monotony = 'None';
GmOvrlStMgrLoaMtgtnTqOscnAmpY.MaxGrad = 998;
GmOvrlStMgrLoaMtgtnTqOscnAmpY.PortName = 'GmOvrlStMgrLoaMtgtnTqOscnAmpY';


GmOvrlStMgrLoaMtgtnVehSpdX = DataDict.Calibration;
GmOvrlStMgrLoaMtgtnVehSpdX.LongName = 'Loa Mitigation Vehicle Speed Vector X';
GmOvrlStMgrLoaMtgtnVehSpdX.Description = 'Vehicle speed vector; X axis';
GmOvrlStMgrLoaMtgtnVehSpdX.DocUnits = 'Kph';
GmOvrlStMgrLoaMtgtnVehSpdX.EngDT = dt.u10p6;
GmOvrlStMgrLoaMtgtnVehSpdX.EngVal =  ...
   [5               10               20               40               60               80              100              120];
GmOvrlStMgrLoaMtgtnVehSpdX.EngMin = 0;
GmOvrlStMgrLoaMtgtnVehSpdX.EngMax = 255;
GmOvrlStMgrLoaMtgtnVehSpdX.Cardinality = 'Cmn';
GmOvrlStMgrLoaMtgtnVehSpdX.CustomerVisible = false;
GmOvrlStMgrLoaMtgtnVehSpdX.Online = true;
GmOvrlStMgrLoaMtgtnVehSpdX.Impact = 'H';
GmOvrlStMgrLoaMtgtnVehSpdX.TuningOwner = 'CSE';
GmOvrlStMgrLoaMtgtnVehSpdX.GraphLink = {''};
GmOvrlStMgrLoaMtgtnVehSpdX.Monotony = 'None';
GmOvrlStMgrLoaMtgtnVehSpdX.MaxGrad = 400;
GmOvrlStMgrLoaMtgtnVehSpdX.PortName = 'GmOvrlStMgrLoaMtgtnVehSpdX';


GmOvrlStMgrLoaStIgnCntrThd = DataDict.Calibration;
GmOvrlStMgrLoaStIgnCntrThd.LongName = 'LOA State Ignition Counter Threshold';
GmOvrlStMgrLoaStIgnCntrThd.Description = [...
  'Ignition counter threshold for the amount of ingition cycles in an LoA' ...
  ' state of Limited or Software Based Mitigation'];
GmOvrlStMgrLoaStIgnCntrThd.DocUnits = 'Cnt';
GmOvrlStMgrLoaStIgnCntrThd.EngDT = dt.u16;
GmOvrlStMgrLoaStIgnCntrThd.EngVal = 20;
GmOvrlStMgrLoaStIgnCntrThd.EngMin = 0;
GmOvrlStMgrLoaStIgnCntrThd.EngMax = 65535;
GmOvrlStMgrLoaStIgnCntrThd.Cardinality = 'Inin';
GmOvrlStMgrLoaStIgnCntrThd.CustomerVisible = false;
GmOvrlStMgrLoaStIgnCntrThd.Online = false;
GmOvrlStMgrLoaStIgnCntrThd.Impact = 'M';
GmOvrlStMgrLoaStIgnCntrThd.TuningOwner = 'CSE';
GmOvrlStMgrLoaStIgnCntrThd.GraphLink = {''};
GmOvrlStMgrLoaStIgnCntrThd.Monotony = 'None';
GmOvrlStMgrLoaStIgnCntrThd.MaxGrad = 998;
GmOvrlStMgrLoaStIgnCntrThd.PortName = 'GmOvrlStMgrLoaStIgnCntrThd';


GmOvrlStMgrShiftLvrTiThd = DataDict.Calibration;
GmOvrlStMgrShiftLvrTiThd.LongName = 'Shift Lever Time Threshold';
GmOvrlStMgrShiftLvrTiThd.Description = [...
  'It is used in the timer. When the time span in the timer is over this ' ...
  'value, ShiftLvrRvsTiExcdd  would be true.'];
GmOvrlStMgrShiftLvrTiThd.DocUnits = 'MilliSec';
GmOvrlStMgrShiftLvrTiThd.EngDT = dt.u32;
GmOvrlStMgrShiftLvrTiThd.EngVal = 200;
GmOvrlStMgrShiftLvrTiThd.EngMin = 0;
GmOvrlStMgrShiftLvrTiThd.EngMax = 500;
GmOvrlStMgrShiftLvrTiThd.Cardinality = 'Rt';
GmOvrlStMgrShiftLvrTiThd.CustomerVisible = false;
GmOvrlStMgrShiftLvrTiThd.Online = true;
GmOvrlStMgrShiftLvrTiThd.Impact = 'H';
GmOvrlStMgrShiftLvrTiThd.TuningOwner = 'CSE';
GmOvrlStMgrShiftLvrTiThd.GraphLink = {''};
GmOvrlStMgrShiftLvrTiThd.Monotony = 'None';
GmOvrlStMgrShiftLvrTiThd.MaxGrad = 998;
GmOvrlStMgrShiftLvrTiThd.PortName = 'GmOvrlStMgrShiftLvrTiThd';


GmOvrlStMgrStandStillThd = DataDict.Calibration;
GmOvrlStMgrStandStillThd.LongName = 'Stand Still Threshold';
GmOvrlStMgrStandStillThd.Description = [...
  'Trigger the Stand Still timer when the maximum secure vehicle speed is' ...
  ' less than this value.'];
GmOvrlStMgrStandStillThd.DocUnits = 'Kph';
GmOvrlStMgrStandStillThd.EngDT = dt.float32;
GmOvrlStMgrStandStillThd.EngVal = 2.5;
GmOvrlStMgrStandStillThd.EngMin = 0;
GmOvrlStMgrStandStillThd.EngMax = 5;
GmOvrlStMgrStandStillThd.Cardinality = 'Rt';
GmOvrlStMgrStandStillThd.CustomerVisible = false;
GmOvrlStMgrStandStillThd.Online = true;
GmOvrlStMgrStandStillThd.Impact = 'H';
GmOvrlStMgrStandStillThd.TuningOwner = 'CSE';
GmOvrlStMgrStandStillThd.GraphLink = {''};
GmOvrlStMgrStandStillThd.Monotony = 'None';
GmOvrlStMgrStandStillThd.MaxGrad = 998;
GmOvrlStMgrStandStillThd.PortName = 'GmOvrlStMgrStandStillThd';


GmOvrlStMgrStandStillTiThd = DataDict.Calibration;
GmOvrlStMgrStandStillTiThd.LongName = 'Stand Still Time Threshold';
GmOvrlStMgrStandStillTiThd.Description = [...
  'It is used in the timer. When the time span in the timer is over this ' ...
  'value, VehStandStillTiExcdd would be true.'];
GmOvrlStMgrStandStillTiThd.DocUnits = 'MilliSec';
GmOvrlStMgrStandStillTiThd.EngDT = dt.u32;
GmOvrlStMgrStandStillTiThd.EngVal = 250;
GmOvrlStMgrStandStillTiThd.EngMin = 0;
GmOvrlStMgrStandStillTiThd.EngMax = 500;
GmOvrlStMgrStandStillTiThd.Cardinality = 'Rt';
GmOvrlStMgrStandStillTiThd.CustomerVisible = false;
GmOvrlStMgrStandStillTiThd.Online = true;
GmOvrlStMgrStandStillTiThd.Impact = 'H';
GmOvrlStMgrStandStillTiThd.TuningOwner = 'CSE';
GmOvrlStMgrStandStillTiThd.GraphLink = {''};
GmOvrlStMgrStandStillTiThd.Monotony = 'None';
GmOvrlStMgrStandStillTiThd.MaxGrad = 998;
GmOvrlStMgrStandStillTiThd.PortName = 'GmOvrlStMgrStandStillTiThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
GmLoaIgnCntr = DataDict.NVM;
GmLoaIgnCntr.LongName = 'GM Lost of assist Ignition Counter';
GmLoaIgnCntr.Description = [...
  'Ignition counter increment 1, when LOA State represents limited or sof' ...
  'tware based mitigation'];
GmLoaIgnCntr.DocUnits = 'Cnt';
GmLoaIgnCntr.EngDT = dt.u16;
GmLoaIgnCntr.EngInit = 0;
GmLoaIgnCntr.EngMin = 0;
GmLoaIgnCntr.EngMax = 65535;
GmLoaIgnCntr.CustomerVisible = false;
GmLoaIgnCntr.Impact = 'H';
GmLoaIgnCntr.TuningOwner = 'CSE';
GmLoaIgnCntr.CoderInfo.Alias = '';
GmLoaIgnCntr.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dGmOvrlStMgrApaShiftLvrRvs = DataDict.Display;
dGmOvrlStMgrApaShiftLvrRvs.LongName = 'GM Overlay State Manager APA Shift Lever Reverse';
dGmOvrlStMgrApaShiftLvrRvs.Description = [...
  'It indicates whether the shift lever is reversed or not.'];
dGmOvrlStMgrApaShiftLvrRvs.DocUnits = 'Cnt';
dGmOvrlStMgrApaShiftLvrRvs.EngDT = dt.lgc;
dGmOvrlStMgrApaShiftLvrRvs.EngMin = 0;
dGmOvrlStMgrApaShiftLvrRvs.EngMax = 1;
dGmOvrlStMgrApaShiftLvrRvs.InitRowCol = [1  1];


dGmOvrlStMgrApaStandStill = DataDict.Display;
dGmOvrlStMgrApaStandStill.LongName = 'GM Overlay State Manager APA Stand Still';
dGmOvrlStMgrApaStandStill.Description = [...
  'It indicates whether the vehicle enters APA Stand Still condition.'];
dGmOvrlStMgrApaStandStill.DocUnits = 'Cnt';
dGmOvrlStMgrApaStandStill.EngDT = dt.lgc;
dGmOvrlStMgrApaStandStill.EngMin = 0;
dGmOvrlStMgrApaStandStill.EngMax = 1;
dGmOvrlStMgrApaStandStill.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HaptcStTranActvToWaitRefTi = DataDict.PIM;
HaptcStTranActvToWaitRefTi.LongName = 'Haptic State Transition Active To Wait Reference Time';
HaptcStTranActvToWaitRefTi.Description = [...
  'It is used to calculate the idle time when haptic state transition fro' ...
  'm active to wait.'];
HaptcStTranActvToWaitRefTi.DocUnits = 'Cnt';
HaptcStTranActvToWaitRefTi.EngDT = dt.u32;
HaptcStTranActvToWaitRefTi.EngMin = 0;
HaptcStTranActvToWaitRefTi.EngMax = 4294967295;
HaptcStTranActvToWaitRefTi.InitRowCol = [1  1];


HwTqLkaLpFil = DataDict.PIM;
HwTqLkaLpFil.LongName = 'Handwheel Torque LKA Lowpass Filter';
HwTqLkaLpFil.Description = [...
  'It is a state variable used for filtered Handwheel Torque, which is th' ...
  'en used to determine LKA intervention.'];
HwTqLkaLpFil.DocUnits = 'Uls';
HwTqLkaLpFil.EngDT = struct.FilLpRec1;
HwTqLkaLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLkaLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLkaLpFil.InitRowCol = [1  1];


HwTqLpFil = DataDict.PIM;
HwTqLpFil.LongName = 'Handwheel Torque Lowpass Filter';
HwTqLpFil.Description = [...
  'It is a state variable used for filtered Handwheel Torque for APA.'];
HwTqLpFil.DocUnits = 'Uls';
HwTqLpFil.EngDT = struct.FilLpRec1;
HwTqLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLpFil.InitRowCol = [1  1];


HwTqOscnLpFil = DataDict.PIM;
HwTqOscnLpFil.LongName = 'Handwheel Torque Oscillation Lowpass Filter';
HwTqOscnLpFil.Description = [...
  'It is a state variable used for filtered Handwheel Torque, which is th' ...
  'en taken into torque oscillation lookup table.'];
HwTqOscnLpFil.DocUnits = 'Uls';
HwTqOscnLpFil.EngDT = struct.FilLpRec1;
HwTqOscnLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqOscnLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqOscnLpFil.InitRowCol = [1  1];


IgnCntrUpd = DataDict.PIM;
IgnCntrUpd.LongName = 'Ignition Counter Update';
IgnCntrUpd.Description = [...
  'It shows the ignition counter has been updated'];
IgnCntrUpd.DocUnits = 'Cnt';
IgnCntrUpd.EngDT = dt.lgc;
IgnCntrUpd.EngMin = 0;
IgnCntrUpd.EngMax = 1;
IgnCntrUpd.InitRowCol = [1  1];


LkaFltCntr = DataDict.PIM;
LkaFltCntr.LongName = 'LKA Fault Counter';
LkaFltCntr.Description = 'LKA Fault Counter.';
LkaFltCntr.DocUnits = 'Cnt';
LkaFltCntr.EngDT = dt.u08;
LkaFltCntr.EngMin = 0;
LkaFltCntr.EngMax = 255;
LkaFltCntr.InitRowCol = [1  1];


LkaFltPrev = DataDict.PIM;
LkaFltPrev.LongName = 'LKA Fault Previous';
LkaFltPrev.Description = [...
  'This PIM holds the previous value of LkaFlt and is used to know when t' ...
  'here is a transition from not having a fault to having a fault and vic' ...
  'e versa.'];
LkaFltPrev.DocUnits = 'Cnt';
LkaFltPrev.EngDT = dt.lgc;
LkaFltPrev.EngMin = 0;
LkaFltPrev.EngMax = 1;
LkaFltPrev.InitRowCol = [1  1];


LkaFltRefTmr = DataDict.PIM;
LkaFltRefTmr.LongName = 'Lka Fault Reference Timer';
LkaFltRefTmr.Description = [...
  'Reference time is used to calculate the time span(elasped time)  todel' ...
  'ay checking for missing/invalid messages for first 500 ms of periodicc' ...
  'ycle.'];
LkaFltRefTmr.DocUnits = 'Cnt';
LkaFltRefTmr.EngDT = dt.u32;
LkaFltRefTmr.EngMin = 0;
LkaFltRefTmr.EngMax = 4294967295;
LkaFltRefTmr.InitRowCol = [1  1];


LkaIntvPrev = DataDict.PIM;
LkaIntvPrev.LongName = 'LKA Intervention Previous';
LkaIntvPrev.Description = [...
  'This PIM holds the previous value of LkaIntv'];
LkaIntvPrev.DocUnits = 'Cnt';
LkaIntvPrev.EngDT = dt.lgc;
LkaIntvPrev.EngMin = 0;
LkaIntvPrev.EngMax = 1;
LkaIntvPrev.InitRowCol = [1  1];


LkaIntvRefTi1 = DataDict.PIM;
LkaIntvRefTi1.LongName = 'LKA Intervention Reference Time 1';
LkaIntvRefTi1.Description = [...
  'It is used to calculate the LKA intervention time. When the active tim' ...
  'eis over the threshold, a boolean true (1) will output from the timer.' ...
  ''];
LkaIntvRefTi1.DocUnits = 'Cnt';
LkaIntvRefTi1.EngDT = dt.u32;
LkaIntvRefTi1.EngMin = 0;
LkaIntvRefTi1.EngMax = 4294967295;
LkaIntvRefTi1.InitRowCol = [1  1];


LkaIntvRefTi2 = DataDict.PIM;
LkaIntvRefTi2.LongName = 'LKA Intervention Reference Time 2';
LkaIntvRefTi2.Description = [...
  'It is used to calculate the LKA intervention time. When the active tim' ...
  'eis over the threshold, a boolean true (1) will output from the timer.' ...
  ''];
LkaIntvRefTi2.DocUnits = 'Cnt';
LkaIntvRefTi2.EngDT = dt.u32;
LkaIntvRefTi2.EngMin = 0;
LkaIntvRefTi2.EngMax = 4294967295;
LkaIntvRefTi2.InitRowCol = [1  1];


LoaMtgtnHaptcFbStrtOnRefTi = DataDict.PIM;
LoaMtgtnHaptcFbStrtOnRefTi.LongName = 'Loa Mitigation Haptic Feedback Start On Reference Time';
LoaMtgtnHaptcFbStrtOnRefTi.Description = [...
  'It is used to calculate the Loa mitigation haptic feedback start on ti' ...
  'me. The time is in count (1 Cnt= 200 uSec). When the active time is ov' ...
  'er the threshold, a boolean true (1) will output from the timer.'];
LoaMtgtnHaptcFbStrtOnRefTi.DocUnits = 'Cnt';
LoaMtgtnHaptcFbStrtOnRefTi.EngDT = dt.u32;
LoaMtgtnHaptcFbStrtOnRefTi.EngMin = 0;
LoaMtgtnHaptcFbStrtOnRefTi.EngMax = 4294967295;
LoaMtgtnHaptcFbStrtOnRefTi.InitRowCol = [1  1];


LoaStChk = DataDict.PIM;
LoaStChk.LongName = 'Loa State Already Checked';
LoaStChk.Description = [...
  'It shows the Loa State has been checked'];
LoaStChk.DocUnits = 'Cnt';
LoaStChk.EngDT = dt.lgc;
LoaStChk.EngMin = 0;
LoaStChk.EngMax = 1;
LoaStChk.InitRowCol = [1  1];


PrevApaIntvEna = DataDict.PIM;
PrevApaIntvEna.LongName = 'Previous APA Intervention Enable';
PrevApaIntvEna.Description = [...
  'It shows the previous APA intervention enable is true (1) or false (0)' ...
  '.'];
PrevApaIntvEna.DocUnits = 'Cnt';
PrevApaIntvEna.EngDT = dt.lgc;
PrevApaIntvEna.EngMin = 0;
PrevApaIntvEna.EngMax = 1;
PrevApaIntvEna.InitRowCol = [1  1];


PrevApaIntvRefTi = DataDict.PIM;
PrevApaIntvRefTi.LongName = 'Previous APA Intervention Reference Time';
PrevApaIntvRefTi.Description = [...
  'It is used to calculate the APA intervention time(1 Cnt= 200 uSec). Wh' ...
  'en the intervention time is over the threshold, a boolean true (1) wil' ...
  'l output from the timer.'];
PrevApaIntvRefTi.DocUnits = 'Cnt';
PrevApaIntvRefTi.EngDT = dt.u32;
PrevApaIntvRefTi.EngMin = 0;
PrevApaIntvRefTi.EngMax = 4294967295;
PrevApaIntvRefTi.InitRowCol = [1  1];


PrevApaSt = DataDict.PIM;
PrevApaSt.LongName = 'Previous APA State';
PrevApaSt.Description = 'Previous APA State.';
PrevApaSt.DocUnits = 'Cnt';
PrevApaSt.EngDT = dt.u08;
PrevApaSt.EngMin = 0;
PrevApaSt.EngMax = 4;
PrevApaSt.InitRowCol = [1  1];


PrevEscSt = DataDict.PIM;
PrevEscSt.LongName = 'Previous ESC State';
PrevEscSt.Description = 'Previous ESC State.';
PrevEscSt.DocUnits = 'Cnt';
PrevEscSt.EngDT = dt.u08;
PrevEscSt.EngMin = 0;
PrevEscSt.EngMax = 4;
PrevEscSt.InitRowCol = [1  1];


PrevHaptcReqEna = DataDict.PIM;
PrevHaptcReqEna.LongName = 'Previous Haptic Request Enable';
PrevHaptcReqEna.Description = [...
  'It shows the previous haptic request enable is true(1) or false(0).'];
PrevHaptcReqEna.DocUnits = 'Cnt';
PrevHaptcReqEna.EngDT = dt.lgc;
PrevHaptcReqEna.EngMin = 0;
PrevHaptcReqEna.EngMax = 1;
PrevHaptcReqEna.InitRowCol = [1  1];


PrevHaptcReqRefTi = DataDict.PIM;
PrevHaptcReqRefTi.LongName = 'Previous Haptic Request Reference Time';
PrevHaptcReqRefTi.Description = [...
  'It is used to calculate the haptic request time(1 Cnt= 200 uSec). When' ...
  ' the intervention time is over the threshold, a boolean true (1) will ' ...
  'output from the timer.'];
PrevHaptcReqRefTi.DocUnits = 'Cnt';
PrevHaptcReqRefTi.EngDT = dt.u32;
PrevHaptcReqRefTi.EngMin = 0;
PrevHaptcReqRefTi.EngMax = 4294967295;
PrevHaptcReqRefTi.InitRowCol = [1  1];


PrevHaptcSt = DataDict.PIM;
PrevHaptcSt.LongName = 'Previous Haptic State';
PrevHaptcSt.Description = [...
  'It indicates the previous haptic state.'];
PrevHaptcSt.DocUnits = 'Cnt';
PrevHaptcSt.EngDT = dt.u08;
PrevHaptcSt.EngMin = 0;
PrevHaptcSt.EngMax = 2;
PrevHaptcSt.InitRowCol = [1  1];


PrevLkaSt = DataDict.PIM;
PrevLkaSt.LongName = 'Previous LKA State';
PrevLkaSt.Description = 'Previous LKA State.';
PrevLkaSt.DocUnits = 'Cnt';
PrevLkaSt.EngDT = dt.u08;
PrevLkaSt.EngMin = 0;
PrevLkaSt.EngMax = 4;
PrevLkaSt.InitRowCol = [1  1];


PrevShiftLvrRvsEna = DataDict.PIM;
PrevShiftLvrRvsEna.LongName = 'Previous Shift Lever Reverse Enable';
PrevShiftLvrRvsEna.Description = [...
  'It shows the previous shift lever reverse enable is true(1) or false(0' ...
  ').'];
PrevShiftLvrRvsEna.DocUnits = 'Cnt';
PrevShiftLvrRvsEna.EngDT = dt.lgc;
PrevShiftLvrRvsEna.EngMin = 0;
PrevShiftLvrRvsEna.EngMax = 1;
PrevShiftLvrRvsEna.InitRowCol = [1  1];


PrevShiftLvrRvsRefTi = DataDict.PIM;
PrevShiftLvrRvsRefTi.LongName = 'Previous Shift Lever Reverse Reference Time';
PrevShiftLvrRvsRefTi.Description = [...
  'It is used to calculate the shift lever reverse time. The time is in c' ...
  'ount (1 Cnt= 200 uSec). When the intervention time is over the thresho' ...
  'ld, a boolean true (1) will output from the timer.'];
PrevShiftLvrRvsRefTi.DocUnits = 'Cnt';
PrevShiftLvrRvsRefTi.EngDT = dt.u32;
PrevShiftLvrRvsRefTi.EngMin = 0;
PrevShiftLvrRvsRefTi.EngMax = 4294967295;
PrevShiftLvrRvsRefTi.InitRowCol = [1  1];


PrevVehStandStillEna = DataDict.PIM;
PrevVehStandStillEna.LongName = 'Previous Vehicle Stand Still Enable';
PrevVehStandStillEna.Description = [...
  'It shows the previous vehicle stand still enable is true(1) or false(0' ...
  ').'];
PrevVehStandStillEna.DocUnits = 'Cnt';
PrevVehStandStillEna.EngDT = dt.lgc;
PrevVehStandStillEna.EngMin = 0;
PrevVehStandStillEna.EngMax = 1;
PrevVehStandStillEna.InitRowCol = [1  1];


PrevVehStandStillRefTi = DataDict.PIM;
PrevVehStandStillRefTi.LongName = 'Previous Vehicle Stand Still Reference Time';
PrevVehStandStillRefTi.Description = [...
  'It is used to calculate the shift lever reverse time. The time is in c' ...
  'ount (1 Cnt= 200 uSec). When the intervention time is over the thresho' ...
  'ld, a boolean true (1) will output from the timer.'];
PrevVehStandStillRefTi.DocUnits = 'Cnt';
PrevVehStandStillRefTi.EngDT = dt.u32;
PrevVehStandStillRefTi.EngMin = 0;
PrevVehStandStillRefTi.EngMax = 4294967295;
PrevVehStandStillRefTi.InitRowCol = [1  1];


TqOscCycRefTi = DataDict.PIM;
TqOscCycRefTi.LongName = 'Torque Oscillation Reference Time';
TqOscCycRefTi.Description = [...
  'It is used to calculate the torque oscillation active time. The time i' ...
  's in count (1 Cnt= 200 uSec). When the active time is over the thresho' ...
  'ld, a boolean true (1) will output from the timer.'];
TqOscCycRefTi.DocUnits = 'Cnt';
TqOscCycRefTi.EngDT = dt.u32;
TqOscCycRefTi.EngMin = 0;
TqOscCycRefTi.EngMax = 4294967295;
TqOscCycRefTi.InitRowCol = [1  1];


TranHaptcWaitToApaStActvRefTi = DataDict.PIM;
TranHaptcWaitToApaStActvRefTi.LongName = 'Transition Haptic Wait To APA State Active Reference Time';
TranHaptcWaitToApaStActvRefTi.Description = [...
  'It is used to calculate the idle time when transit Haptic Wait To APA ' ...
  'State Active.'];
TranHaptcWaitToApaStActvRefTi.DocUnits = 'Cnt';
TranHaptcWaitToApaStActvRefTi.EngDT = dt.u32;
TranHaptcWaitToApaStActvRefTi.EngMin = 0;
TranHaptcWaitToApaStActvRefTi.EngMax = 4294967295;
TranHaptcWaitToApaStActvRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
APASTACTV_CNT_U08 = DataDict.Constant;
APASTACTV_CNT_U08.LongName = 'APA State Active';
APASTACTV_CNT_U08.Description = [...
  'It shows the APA is in active state.'];
APASTACTV_CNT_U08.DocUnits = 'Cnt';
APASTACTV_CNT_U08.EngDT = dt.u08;
APASTACTV_CNT_U08.EngVal = 2;
APASTACTV_CNT_U08.Define = 'Local';


APASTCTRLAVL_CNT_U08 = DataDict.Constant;
APASTCTRLAVL_CNT_U08.LongName = 'APA State Control Available';
APASTCTRLAVL_CNT_U08.Description = [...
  'It shows the APA is in control available state.'];
APASTCTRLAVL_CNT_U08.DocUnits = 'Cnt';
APASTCTRLAVL_CNT_U08.EngDT = dt.u08;
APASTCTRLAVL_CNT_U08.EngVal = 1;
APASTCTRLAVL_CNT_U08.Define = 'Local';


APASTMFGDI_CNT_U08 = DataDict.Constant;
APASTMFGDI_CNT_U08.LongName = 'APA State Manufacturing Disable';
APASTMFGDI_CNT_U08.Description = [...
  'It shows the APA is in manufacturing disable state.'];
APASTMFGDI_CNT_U08.DocUnits = 'Cnt';
APASTMFGDI_CNT_U08.EngDT = dt.u08;
APASTMFGDI_CNT_U08.EngVal = 4;
APASTMFGDI_CNT_U08.Define = 'Local';


APASTPRMNTFAILD_CNT_U08 = DataDict.Constant;
APASTPRMNTFAILD_CNT_U08.LongName = 'APA State Permanently Failed';
APASTPRMNTFAILD_CNT_U08.Description = [...
  'It shows the APA is in permanently failed state.'];
APASTPRMNTFAILD_CNT_U08.DocUnits = 'Cnt';
APASTPRMNTFAILD_CNT_U08.EngDT = dt.u08;
APASTPRMNTFAILD_CNT_U08.EngVal = 3;
APASTPRMNTFAILD_CNT_U08.Define = 'Local';


APASTTMPINHB_CNT_U08 = DataDict.Constant;
APASTTMPINHB_CNT_U08.LongName = 'APA State Temporarily Inhibited';
APASTTMPINHB_CNT_U08.Description = [...
  'It shows the APA is in the temporarily inhibited state.'];
APASTTMPINHB_CNT_U08.DocUnits = 'Cnt';
APASTTMPINHB_CNT_U08.EngDT = dt.u08;
APASTTMPINHB_CNT_U08.EngVal = 0;
APASTTMPINHB_CNT_U08.Define = 'Local';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ESCSTACTV_CNT_U08 = DataDict.Constant;
ESCSTACTV_CNT_U08.LongName = 'ESC State Active';
ESCSTACTV_CNT_U08.Description = [...
  'It shows the ESC state is in the active state.'];
ESCSTACTV_CNT_U08.DocUnits = 'Cnt';
ESCSTACTV_CNT_U08.EngDT = dt.u08;
ESCSTACTV_CNT_U08.EngVal = 1;
ESCSTACTV_CNT_U08.Define = 'Local';


ESCSTINACTV_CNT_U08 = DataDict.Constant;
ESCSTINACTV_CNT_U08.LongName = 'ESC State Inactive';
ESCSTINACTV_CNT_U08.Description = [...
  'It shows the ESC state is in the inactive state.'];
ESCSTINACTV_CNT_U08.DocUnits = 'Cnt';
ESCSTINACTV_CNT_U08.EngDT = dt.u08;
ESCSTINACTV_CNT_U08.EngVal = 0;
ESCSTINACTV_CNT_U08.Define = 'Local';


ESCSTMFGDI_CNT_U08 = DataDict.Constant;
ESCSTMFGDI_CNT_U08.LongName = 'ESC State Manufacturing Disable';
ESCSTMFGDI_CNT_U08.Description = [...
  'It shows the ESC state is in the manufacturing disable state.'];
ESCSTMFGDI_CNT_U08.DocUnits = 'Cnt';
ESCSTMFGDI_CNT_U08.EngDT = dt.u08;
ESCSTMFGDI_CNT_U08.EngVal = 4;
ESCSTMFGDI_CNT_U08.Define = 'Local';


ESCSTPRMNTFAILD_CNT_U08 = DataDict.Constant;
ESCSTPRMNTFAILD_CNT_U08.LongName = 'ESC State Permanently Failed';
ESCSTPRMNTFAILD_CNT_U08.Description = [...
  'It shows the ESC state is in the permanently failed state.'];
ESCSTPRMNTFAILD_CNT_U08.DocUnits = 'Cnt';
ESCSTPRMNTFAILD_CNT_U08.EngDT = dt.u08;
ESCSTPRMNTFAILD_CNT_U08.EngVal = 3;
ESCSTPRMNTFAILD_CNT_U08.Define = 'Local';


ESCSTTMPLIMD_CNT_U08 = DataDict.Constant;
ESCSTTMPLIMD_CNT_U08.LongName = 'ESC State Temporarily Limited';
ESCSTTMPLIMD_CNT_U08.Description = [...
  'It shows the ESC state is in the temporarily limited state.'];
ESCSTTMPLIMD_CNT_U08.DocUnits = 'Cnt';
ESCSTTMPLIMD_CNT_U08.EngDT = dt.u08;
ESCSTTMPLIMD_CNT_U08.EngVal = 2;
ESCSTTMPLIMD_CNT_U08.Define = 'Local';


HAPTCSTACTV_CNT_U08 = DataDict.Constant;
HAPTCSTACTV_CNT_U08.LongName = 'Haptic State Active';
HAPTCSTACTV_CNT_U08.Description = [...
  'It shows the haptic state is in active state.'];
HAPTCSTACTV_CNT_U08.DocUnits = 'Cnt';
HAPTCSTACTV_CNT_U08.EngDT = dt.u08;
HAPTCSTACTV_CNT_U08.EngVal = 1;
HAPTCSTACTV_CNT_U08.Define = 'Local';


HAPTCSTDI_CNT_U08 = DataDict.Constant;
HAPTCSTDI_CNT_U08.LongName = 'Haptic State Disable';
HAPTCSTDI_CNT_U08.Description = [...
  'It shows the haptic state is in disable state.'];
HAPTCSTDI_CNT_U08.DocUnits = 'Cnt';
HAPTCSTDI_CNT_U08.EngDT = dt.u08;
HAPTCSTDI_CNT_U08.EngVal = 4;
HAPTCSTDI_CNT_U08.Define = 'Local';


HAPTCSTINACTVNOTPLS_CNT_U08 = DataDict.Constant;
HAPTCSTINACTVNOTPLS_CNT_U08.LongName = 'Haptic State Inactive Not Pulse';
HAPTCSTINACTVNOTPLS_CNT_U08.Description = [...
  'It shows the haptic state is in inactive state not pulsing state.'];
HAPTCSTINACTVNOTPLS_CNT_U08.DocUnits = 'Cnt';
HAPTCSTINACTVNOTPLS_CNT_U08.EngDT = dt.u08;
HAPTCSTINACTVNOTPLS_CNT_U08.EngVal = 0;
HAPTCSTINACTVNOTPLS_CNT_U08.Define = 'Local';


HAPTCSTINACTVRDYTOPLS_CNT_U08 = DataDict.Constant;
HAPTCSTINACTVRDYTOPLS_CNT_U08.LongName = 'Haptic State Inactive Ready To Pulse';
HAPTCSTINACTVRDYTOPLS_CNT_U08.Description = [...
  'It shows the haptic state is in inactive ready to pulse state.'];
HAPTCSTINACTVRDYTOPLS_CNT_U08.DocUnits = 'Cnt';
HAPTCSTINACTVRDYTOPLS_CNT_U08.EngDT = dt.u08;
HAPTCSTINACTVRDYTOPLS_CNT_U08.EngVal = 3;
HAPTCSTINACTVRDYTOPLS_CNT_U08.Define = 'Local';


HAPTCSTWAIT_CNT_U08 = DataDict.Constant;
HAPTCSTWAIT_CNT_U08.LongName = 'Haptic State Waiting';
HAPTCSTWAIT_CNT_U08.Description = [...
  'It shows the haptic state is in waiting after pulse state.'];
HAPTCSTWAIT_CNT_U08.DocUnits = 'Cnt';
HAPTCSTWAIT_CNT_U08.EngDT = dt.u08;
HAPTCSTWAIT_CNT_U08.EngVal = 2;
HAPTCSTWAIT_CNT_U08.Define = 'Local';


HWAGSERVOCMDMAX_HWDEG_F32 = DataDict.Constant;
HWAGSERVOCMDMAX_HWDEG_F32.LongName = 'Maximum Handwheel Angle Servo Command';
HWAGSERVOCMDMAX_HWDEG_F32.Description = [...
  'Maximum Handwheel angle servo command for output limiter'];
HWAGSERVOCMDMAX_HWDEG_F32.DocUnits = 'HwDeg';
HWAGSERVOCMDMAX_HWDEG_F32.EngDT = dt.float32;
HWAGSERVOCMDMAX_HWDEG_F32.EngVal = 1440;
HWAGSERVOCMDMAX_HWDEG_F32.Define = 'Local';


HWAGSERVOCMDMIN_HWDEG_F32 = DataDict.Constant;
HWAGSERVOCMDMIN_HWDEG_F32.LongName = 'Minimum Handwheel Angle Servo Command';
HWAGSERVOCMDMIN_HWDEG_F32.Description = [...
  'Minimum Handwheel angle servo command for output limiter'];
HWAGSERVOCMDMIN_HWDEG_F32.DocUnits = 'HwDeg';
HWAGSERVOCMDMIN_HWDEG_F32.EngDT = dt.float32;
HWAGSERVOCMDMIN_HWDEG_F32.EngVal = -1440;
HWAGSERVOCMDMIN_HWDEG_F32.Define = 'Local';


HWOSCNFRQMAX_HZ_F32 = DataDict.Constant;
HWOSCNFRQMAX_HZ_F32.LongName = 'Maximum Handwheel Torque Oscillate Frequency';
HWOSCNFRQMAX_HZ_F32.Description = [...
  'Maximum handwheel torque oscillate frequency for output limiter'];
HWOSCNFRQMAX_HZ_F32.DocUnits = 'Hz';
HWOSCNFRQMAX_HZ_F32.EngDT = dt.float32;
HWOSCNFRQMAX_HZ_F32.EngVal = 50;
HWOSCNFRQMAX_HZ_F32.Define = 'Local';


HWOSCNFRQMIN_HZ_F32 = DataDict.Constant;
HWOSCNFRQMIN_HZ_F32.LongName = 'Minimum Handwheel Torque Oscillate Frequency';
HWOSCNFRQMIN_HZ_F32.Description = [...
  'Minimum handwheel torque oscillate frequency for output limiter'];
HWOSCNFRQMIN_HZ_F32.DocUnits = 'Hz';
HWOSCNFRQMIN_HZ_F32.EngDT = dt.float32;
HWOSCNFRQMIN_HZ_F32.EngVal = 10;
HWOSCNFRQMIN_HZ_F32.Define = 'Local';


HWOSCNMOTAMPMAX_MOTNWTMTR_F32 = DataDict.Constant;
HWOSCNMOTAMPMAX_MOTNWTMTR_F32.LongName = 'Maximum Handwheel Torque Oscillate Amplitude';
HWOSCNMOTAMPMAX_MOTNWTMTR_F32.Description = [...
  'Maximum handwheel torque oscillate amplitude for output limiter'];
HWOSCNMOTAMPMAX_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
HWOSCNMOTAMPMAX_MOTNWTMTR_F32.EngDT = dt.float32;
HWOSCNMOTAMPMAX_MOTNWTMTR_F32.EngVal = 1.2;
HWOSCNMOTAMPMAX_MOTNWTMTR_F32.Define = 'Local';


HWOSCNMOTAMPMIN_MOTNWTMTR_F32 = DataDict.Constant;
HWOSCNMOTAMPMIN_MOTNWTMTR_F32.LongName = 'Minimum Handwheel Torque Oscillate Amplitude';
HWOSCNMOTAMPMIN_MOTNWTMTR_F32.Description = [...
  'Minimum Handwheel Torque Oscillate Amplitude for output limiter'];
HWOSCNMOTAMPMIN_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
HWOSCNMOTAMPMIN_MOTNWTMTR_F32.EngDT = dt.float32;
HWOSCNMOTAMPMIN_MOTNWTMTR_F32.EngVal = 0;
HWOSCNMOTAMPMIN_MOTNWTMTR_F32.Define = 'Local';


LKAFLTCNTRTHD_CNT_U08 = DataDict.Constant;
LKAFLTCNTRTHD_CNT_U08.LongName = 'Lka Fault Counter Threshold';
LKAFLTCNTRTHD_CNT_U08.Description = 'Lka Fault Counter Max Count';
LKAFLTCNTRTHD_CNT_U08.DocUnits = 'Cnt';
LKAFLTCNTRTHD_CNT_U08.EngDT = dt.u08;
LKAFLTCNTRTHD_CNT_U08.EngVal = 255;
LKAFLTCNTRTHD_CNT_U08.Define = 'Local';


LKAFLTTMRTHD_MILLISEC_U32 = DataDict.Constant;
LKAFLTTMRTHD_MILLISEC_U32.LongName = 'LKA Fault Timer Threshold';
LKAFLTTMRTHD_MILLISEC_U32.Description = [...
  'Timer to the LKA fault logic to delay checking for missing/invalidmess' ...
  'ages for first 500 ms of periodic cycle'];
LKAFLTTMRTHD_MILLISEC_U32.DocUnits = 'MilliSec';
LKAFLTTMRTHD_MILLISEC_U32.EngDT = dt.u32;
LKAFLTTMRTHD_MILLISEC_U32.EngVal = 500;
LKAFLTTMRTHD_MILLISEC_U32.Define = 'Local';


LKASTACTV_CNT_U08 = DataDict.Constant;
LKASTACTV_CNT_U08.LongName = 'LKA State Active';
LKASTACTV_CNT_U08.Description = [...
  'It shows the LKA state is in the active state.'];
LKASTACTV_CNT_U08.DocUnits = 'Cnt';
LKASTACTV_CNT_U08.EngDT = dt.u08;
LKASTACTV_CNT_U08.EngVal = 1;
LKASTACTV_CNT_U08.Define = 'Local';


LKASTINACTV_CNT_U08 = DataDict.Constant;
LKASTINACTV_CNT_U08.LongName = 'LKA State Inactive';
LKASTINACTV_CNT_U08.Description = [...
  'It shows the LKA state is in the inactive state.'];
LKASTINACTV_CNT_U08.DocUnits = 'Cnt';
LKASTINACTV_CNT_U08.EngDT = dt.u08;
LKASTINACTV_CNT_U08.EngVal = 0;
LKASTINACTV_CNT_U08.Define = 'Local';


LKASTMFGDI_CNT_U08 = DataDict.Constant;
LKASTMFGDI_CNT_U08.LongName = 'LKA State Manufacturing Disable';
LKASTMFGDI_CNT_U08.Description = [...
  'It shows the LKA state is in the manufacturing disable state.'];
LKASTMFGDI_CNT_U08.DocUnits = 'Cnt';
LKASTMFGDI_CNT_U08.EngDT = dt.u08;
LKASTMFGDI_CNT_U08.EngVal = 4;
LKASTMFGDI_CNT_U08.Define = 'Local';


LKASTPRMNTFAILD_CNT_U08 = DataDict.Constant;
LKASTPRMNTFAILD_CNT_U08.LongName = 'LKA State Permenently Failed';
LKASTPRMNTFAILD_CNT_U08.Description = [...
  'It shows the LKA state is in the permenently failed state.'];
LKASTPRMNTFAILD_CNT_U08.DocUnits = 'Cnt';
LKASTPRMNTFAILD_CNT_U08.EngDT = dt.u08;
LKASTPRMNTFAILD_CNT_U08.EngVal = 3;
LKASTPRMNTFAILD_CNT_U08.Define = 'Local';


LKASTTMPLIMD_CNT_U08 = DataDict.Constant;
LKASTTMPLIMD_CNT_U08.LongName = 'LKA State Temporarily Limited';
LKASTTMPLIMD_CNT_U08.Description = [...
  'It shows the LKA state is in the temporarily limited state.'];
LKASTTMPLIMD_CNT_U08.DocUnits = 'Cnt';
LKASTTMPLIMD_CNT_U08.EngDT = dt.u08;
LKASTTMPLIMD_CNT_U08.EngVal = 2;
LKASTTMPLIMD_CNT_U08.Define = 'Local';


LOASTNORM_CNT_U08 = DataDict.Constant;
LOASTNORM_CNT_U08.LongName = 'LOA Normal State';
LOASTNORM_CNT_U08.Description = [...
  'It shows the LOA in normal operation state.'];
LOASTNORM_CNT_U08.DocUnits = 'Cnt';
LOASTNORM_CNT_U08.EngDT = dt.u08;
LOASTNORM_CNT_U08.EngVal = 0;
LOASTNORM_CNT_U08.Define = 'Local';


MILLISECTO100MICROSECCNVN_CNT_U32 = DataDict.Constant;
MILLISECTO100MICROSECCNVN_CNT_U32.LongName = 'Millisecond to Count Conversion';
MILLISECTO100MICROSECCNVN_CNT_U32.Description = [...
  'Convert millisecond to count used in the Timer. 1 Cnt= 100 uSec.'];
MILLISECTO100MICROSECCNVN_CNT_U32.DocUnits = 'Cnt';
MILLISECTO100MICROSECCNVN_CNT_U32.EngDT = dt.u32;
MILLISECTO100MICROSECCNVN_CNT_U32.EngVal = 10;
MILLISECTO100MICROSECCNVN_CNT_U32.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = 'Step used when NtcType is None';
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
LoaMtgtnThdExcdd = DataDict.NTC;
LoaMtgtnThdExcdd.NtcNr = NtcNr1.NTCNR_0X0E2;
LoaMtgtnThdExcdd.NtcTyp = 'None';
LoaMtgtnThdExcdd.LongName = 'Loa Mitigation Threshold Exceeded';
LoaMtgtnThdExcdd.Description = 'NTC to be invoked if ignition cycle count exceeds threshold';
LoaMtgtnThdExcdd.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoaMtgtnThdExcdd.NtcStInfo.Bit0Descr = 'Unused';
LoaMtgtnThdExcdd.NtcStInfo.Bit1Descr = 'Unused';
LoaMtgtnThdExcdd.NtcStInfo.Bit2Descr = 'Unused';
LoaMtgtnThdExcdd.NtcStInfo.Bit3Descr = 'Unused';
LoaMtgtnThdExcdd.NtcStInfo.Bit4Descr = 'Unused';
LoaMtgtnThdExcdd.NtcStInfo.Bit5Descr = 'Unused';
LoaMtgtnThdExcdd.NtcStInfo.Bit6Descr = 'Unused';
LoaMtgtnThdExcdd.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
