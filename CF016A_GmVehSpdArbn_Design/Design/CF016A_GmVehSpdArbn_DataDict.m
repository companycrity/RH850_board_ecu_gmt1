%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 26-Apr-2016 16:30:11       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 5 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: sz7vy6 %          %
%%-----------------------------------------------------------------------%

CF016A = DataDict.FDD;
CF016A.Version = '3.0.X';
CF016A.LongName = 'GM Vehicle Speed Arbitration';
CF016A.ShoName  = 'GmVehSpdArbn';
CF016A.DesignASIL = 'D';
CF016A.Description = [...
  'Vehicle speed calculating and arbitrating. Uses requirements from DOOR' ...
  'S Baseline 1.0.0. Located at:/GM T1XX/SubSystem Specifications/Custome' ...
  'r Functions within DOORS'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmVehSpdArbnInit1 = DataDict.Runnable;
GmVehSpdArbnInit1.Context = 'Rte';
GmVehSpdArbnInit1.TimeStep = 0;
GmVehSpdArbnInit1.Description = [...
  'In GM vehicle speed arbitration initialization, the diagnostic referen' ...
  'ce timer gets updated'];

GmVehSpdArbnPer1 = DataDict.Runnable;
GmVehSpdArbnPer1.Context = 'Rte';
GmVehSpdArbnPer1.TimeStep = 0.01;
GmVehSpdArbnPer1.Description = [...
  'The main logics exits in in GM vehicle speed arbitration periodic'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'GmVehSpdArbnInit1'};
GetRefTmr100MicroSec32bit.Description = [...
  'Get system reference time for span time calculation'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Return.Description = '';
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = '';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'GmVehSpdArbnPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Calculate Span time using reference system time'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Return.Description = '';
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
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'GmVehSpdArbnPer1'};
SetNtcSts.Description = 'Set Ntc Status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = '';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = '';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
VehPwrModDftVehSpdEna = DataDict.IpSignal;
VehPwrModDftVehSpdEna.LongName = 'Vehicle Power Mode Default Vehicle Speed Enable';
VehPwrModDftVehSpdEna.Description = [...
  'The input is used to determine vehicle speed arbitration validity and ' ...
  'vehicle speed sensor validity.'];
VehPwrModDftVehSpdEna.DocUnits = 'Cnt';
VehPwrModDftVehSpdEna.EngDT = dt.lgc;
VehPwrModDftVehSpdEna.EngInit = 0;
VehPwrModDftVehSpdEna.EngMin = 0;
VehPwrModDftVehSpdEna.EngMax = 1;
VehPwrModDftVehSpdEna.ReadIn = {'GmVehSpdArbnPer1'};
VehPwrModDftVehSpdEna.ReadType = 'Rte';


WhlGndVelLeDrvnBusChassisExp = DataDict.IpSignal;
WhlGndVelLeDrvnBusChassisExp.LongName = 'Wheel Ground Velocity Left Driven Bus Chassis Expansion';
WhlGndVelLeDrvnBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure.'];
WhlGndVelLeDrvnBusChassisExp.DocUnits = 'Kph';
WhlGndVelLeDrvnBusChassisExp.EngDT = dt.float32;
WhlGndVelLeDrvnBusChassisExp.EngInit = 0;
WhlGndVelLeDrvnBusChassisExp.EngMin = 0;
WhlGndVelLeDrvnBusChassisExp.EngMax = 511;
WhlGndVelLeDrvnBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeDrvnBusChassisExp.ReadType = 'Rte';


WhlGndVelLeDrvnBusHiSpd = DataDict.IpSignal;
WhlGndVelLeDrvnBusHiSpd.LongName = 'Wheel Ground Velocity Left Driven Bus High Speed';
WhlGndVelLeDrvnBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure'];
WhlGndVelLeDrvnBusHiSpd.DocUnits = 'Kph';
WhlGndVelLeDrvnBusHiSpd.EngDT = dt.float32;
WhlGndVelLeDrvnBusHiSpd.EngInit = 0;
WhlGndVelLeDrvnBusHiSpd.EngMin = 0;
WhlGndVelLeDrvnBusHiSpd.EngMax = 511;
WhlGndVelLeDrvnBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeDrvnBusHiSpd.ReadType = 'Rte';


WhlGndVelLeDrvnStuckBusChassisExp = DataDict.IpSignal;
WhlGndVelLeDrvnStuckBusChassisExp.LongName = 'Wheel Ground Velocity Left Driven Stuck Bus Chassis Expansion';
WhlGndVelLeDrvnStuckBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure validity'];
WhlGndVelLeDrvnStuckBusChassisExp.DocUnits = 'Cnt';
WhlGndVelLeDrvnStuckBusChassisExp.EngDT = dt.lgc;
WhlGndVelLeDrvnStuckBusChassisExp.EngInit = 0;
WhlGndVelLeDrvnStuckBusChassisExp.EngMin = 0;
WhlGndVelLeDrvnStuckBusChassisExp.EngMax = 1;
WhlGndVelLeDrvnStuckBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeDrvnStuckBusChassisExp.ReadType = 'Rte';


WhlGndVelLeDrvnStuckBusHiSpd = DataDict.IpSignal;
WhlGndVelLeDrvnStuckBusHiSpd.LongName = 'Wheel Ground Velocity Left Driven Stuck Bus High Speed';
WhlGndVelLeDrvnStuckBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure validity'];
WhlGndVelLeDrvnStuckBusHiSpd.DocUnits = 'Cnt';
WhlGndVelLeDrvnStuckBusHiSpd.EngDT = dt.lgc;
WhlGndVelLeDrvnStuckBusHiSpd.EngInit = 0;
WhlGndVelLeDrvnStuckBusHiSpd.EngMin = 0;
WhlGndVelLeDrvnStuckBusHiSpd.EngMax = 1;
WhlGndVelLeDrvnStuckBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeDrvnStuckBusHiSpd.ReadType = 'Rte';


WhlGndVelLeDrvnVldBusChassisExp = DataDict.IpSignal;
WhlGndVelLeDrvnVldBusChassisExp.LongName = 'Wheel Ground Velocity Left Driven Valid Bus Chassis Expansion';
WhlGndVelLeDrvnVldBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure validity'];
WhlGndVelLeDrvnVldBusChassisExp.DocUnits = 'Cnt';
WhlGndVelLeDrvnVldBusChassisExp.EngDT = dt.lgc;
WhlGndVelLeDrvnVldBusChassisExp.EngInit = 0;
WhlGndVelLeDrvnVldBusChassisExp.EngMin = 0;
WhlGndVelLeDrvnVldBusChassisExp.EngMax = 1;
WhlGndVelLeDrvnVldBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeDrvnVldBusChassisExp.ReadType = 'Rte';


WhlGndVelLeDrvnVldBusHiSpd = DataDict.IpSignal;
WhlGndVelLeDrvnVldBusHiSpd.LongName = 'Wheel Ground Velocity Left Driven Valid Bus High Speed';
WhlGndVelLeDrvnVldBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure validity a' ...
  'nd vehicle speed arbitration.'];
WhlGndVelLeDrvnVldBusHiSpd.DocUnits = 'Cnt';
WhlGndVelLeDrvnVldBusHiSpd.EngDT = dt.lgc;
WhlGndVelLeDrvnVldBusHiSpd.EngInit = 0;
WhlGndVelLeDrvnVldBusHiSpd.EngMin = 0;
WhlGndVelLeDrvnVldBusHiSpd.EngMax = 1;
WhlGndVelLeDrvnVldBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeDrvnVldBusHiSpd.ReadType = 'Rte';


WhlGndVelLeNonDrvnBusChassisExp = DataDict.IpSignal;
WhlGndVelLeNonDrvnBusChassisExp.LongName = 'Wheel Ground Velocity Left Non-Driven Bus Chassis Expansion';
WhlGndVelLeNonDrvnBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure and vehicl' ...
  'e speed minimum secure.'];
WhlGndVelLeNonDrvnBusChassisExp.DocUnits = 'Kph';
WhlGndVelLeNonDrvnBusChassisExp.EngDT = dt.float32;
WhlGndVelLeNonDrvnBusChassisExp.EngInit = 0;
WhlGndVelLeNonDrvnBusChassisExp.EngMin = 0;
WhlGndVelLeNonDrvnBusChassisExp.EngMax = 511;
WhlGndVelLeNonDrvnBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeNonDrvnBusChassisExp.ReadType = 'Rte';


WhlGndVelLeNonDrvnBusHiSpd = DataDict.IpSignal;
WhlGndVelLeNonDrvnBusHiSpd.LongName = 'Wheel Ground Velocity Left Non-Driven Bus High Speed';
WhlGndVelLeNonDrvnBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure and vehicl' ...
  'e speed arbitration.'];
WhlGndVelLeNonDrvnBusHiSpd.DocUnits = 'Kph';
WhlGndVelLeNonDrvnBusHiSpd.EngDT = dt.float32;
WhlGndVelLeNonDrvnBusHiSpd.EngInit = 0;
WhlGndVelLeNonDrvnBusHiSpd.EngMin = 0;
WhlGndVelLeNonDrvnBusHiSpd.EngMax = 511;
WhlGndVelLeNonDrvnBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeNonDrvnBusHiSpd.ReadType = 'Rte';


WhlGndVelLeNonDrvnStuckBusChassisExp = DataDict.IpSignal;
WhlGndVelLeNonDrvnStuckBusChassisExp.LongName = 'Wheel Ground Velocity Left Non-Driven Stuck Bus Chassis Expansion';
WhlGndVelLeNonDrvnStuckBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure va' ...
  'lidity.'];
WhlGndVelLeNonDrvnStuckBusChassisExp.DocUnits = 'Cnt';
WhlGndVelLeNonDrvnStuckBusChassisExp.EngDT = dt.lgc;
WhlGndVelLeNonDrvnStuckBusChassisExp.EngInit = 0;
WhlGndVelLeNonDrvnStuckBusChassisExp.EngMin = 0;
WhlGndVelLeNonDrvnStuckBusChassisExp.EngMax = 1;
WhlGndVelLeNonDrvnStuckBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeNonDrvnStuckBusChassisExp.ReadType = 'Rte';


WhlGndVelLeNonDrvnStuckBusHiSpd = DataDict.IpSignal;
WhlGndVelLeNonDrvnStuckBusHiSpd.LongName = 'Wheel Ground Velocity Left Non-Driven Stuck Bus High Speed';
WhlGndVelLeNonDrvnStuckBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure va' ...
  'lidity'];
WhlGndVelLeNonDrvnStuckBusHiSpd.DocUnits = 'Cnt';
WhlGndVelLeNonDrvnStuckBusHiSpd.EngDT = dt.lgc;
WhlGndVelLeNonDrvnStuckBusHiSpd.EngInit = 0;
WhlGndVelLeNonDrvnStuckBusHiSpd.EngMin = 0;
WhlGndVelLeNonDrvnStuckBusHiSpd.EngMax = 1;
WhlGndVelLeNonDrvnStuckBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeNonDrvnStuckBusHiSpd.ReadType = 'Rte';


WhlGndVelLeNonDrvnVldBusChassisExp = DataDict.IpSignal;
WhlGndVelLeNonDrvnVldBusChassisExp.LongName = 'Wheel Ground Velocity Left Non-Driven Valid Bus Chassis Expansion';
WhlGndVelLeNonDrvnVldBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure va' ...
  'lidity'];
WhlGndVelLeNonDrvnVldBusChassisExp.DocUnits = 'Cnt';
WhlGndVelLeNonDrvnVldBusChassisExp.EngDT = dt.lgc;
WhlGndVelLeNonDrvnVldBusChassisExp.EngInit = 0;
WhlGndVelLeNonDrvnVldBusChassisExp.EngMin = 0;
WhlGndVelLeNonDrvnVldBusChassisExp.EngMax = 1;
WhlGndVelLeNonDrvnVldBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeNonDrvnVldBusChassisExp.ReadType = 'Rte';


WhlGndVelLeNonDrvnVldBusHiSpd = DataDict.IpSignal;
WhlGndVelLeNonDrvnVldBusHiSpd.LongName = 'Wheel Ground Velocity Left Non-Driven Valid Bus High Speed';
WhlGndVelLeNonDrvnVldBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure va' ...
  'lidity and vehicle speed arbitration.'];
WhlGndVelLeNonDrvnVldBusHiSpd.DocUnits = 'Cnt';
WhlGndVelLeNonDrvnVldBusHiSpd.EngDT = dt.lgc;
WhlGndVelLeNonDrvnVldBusHiSpd.EngInit = 0;
WhlGndVelLeNonDrvnVldBusHiSpd.EngMin = 0;
WhlGndVelLeNonDrvnVldBusHiSpd.EngMax = 1;
WhlGndVelLeNonDrvnVldBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelLeNonDrvnVldBusHiSpd.ReadType = 'Rte';


WhlGndVelRiDrvnBusChassisExp = DataDict.IpSignal;
WhlGndVelRiDrvnBusChassisExp.LongName = 'Wheel Ground Velocity Right Driven Bus Chassis Expansion';
WhlGndVelRiDrvnBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure.'];
WhlGndVelRiDrvnBusChassisExp.DocUnits = 'Kph';
WhlGndVelRiDrvnBusChassisExp.EngDT = dt.float32;
WhlGndVelRiDrvnBusChassisExp.EngInit = 0;
WhlGndVelRiDrvnBusChassisExp.EngMin = 0;
WhlGndVelRiDrvnBusChassisExp.EngMax = 511;
WhlGndVelRiDrvnBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiDrvnBusChassisExp.ReadType = 'Rte';


WhlGndVelRiDrvnBusHiSpd = DataDict.IpSignal;
WhlGndVelRiDrvnBusHiSpd.LongName = 'Wheel Ground Velocity Right Driven Bus High Speed';
WhlGndVelRiDrvnBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure and vehicl' ...
  'e speed arbitration.'];
WhlGndVelRiDrvnBusHiSpd.DocUnits = 'Kph';
WhlGndVelRiDrvnBusHiSpd.EngDT = dt.float32;
WhlGndVelRiDrvnBusHiSpd.EngInit = 0;
WhlGndVelRiDrvnBusHiSpd.EngMin = 0;
WhlGndVelRiDrvnBusHiSpd.EngMax = 511;
WhlGndVelRiDrvnBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiDrvnBusHiSpd.ReadType = 'Rte';


WhlGndVelRiDrvnStuckBusChassisExp = DataDict.IpSignal;
WhlGndVelRiDrvnStuckBusChassisExp.LongName = 'Wheel Ground Velocity Right Driven Stuck Bus Chassis Expansion';
WhlGndVelRiDrvnStuckBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure validity'];
WhlGndVelRiDrvnStuckBusChassisExp.DocUnits = 'Cnt';
WhlGndVelRiDrvnStuckBusChassisExp.EngDT = dt.lgc;
WhlGndVelRiDrvnStuckBusChassisExp.EngInit = 0;
WhlGndVelRiDrvnStuckBusChassisExp.EngMin = 0;
WhlGndVelRiDrvnStuckBusChassisExp.EngMax = 1;
WhlGndVelRiDrvnStuckBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiDrvnStuckBusChassisExp.ReadType = 'Rte';


WhlGndVelRiDrvnStuckBusHiSpd = DataDict.IpSignal;
WhlGndVelRiDrvnStuckBusHiSpd.LongName = 'Wheel Ground Velocity Right Driven Stuck Bus High Speed';
WhlGndVelRiDrvnStuckBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure.'];
WhlGndVelRiDrvnStuckBusHiSpd.DocUnits = 'Cnt';
WhlGndVelRiDrvnStuckBusHiSpd.EngDT = dt.lgc;
WhlGndVelRiDrvnStuckBusHiSpd.EngInit = 0;
WhlGndVelRiDrvnStuckBusHiSpd.EngMin = 0;
WhlGndVelRiDrvnStuckBusHiSpd.EngMax = 1;
WhlGndVelRiDrvnStuckBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiDrvnStuckBusHiSpd.ReadType = 'Rte';


WhlGndVelRiDrvnVldBusChassisExp = DataDict.IpSignal;
WhlGndVelRiDrvnVldBusChassisExp.LongName = 'Wheel Ground Velocity Right Driven Valid Bus Chassis Expansion';
WhlGndVelRiDrvnVldBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure.'];
WhlGndVelRiDrvnVldBusChassisExp.DocUnits = 'Cnt';
WhlGndVelRiDrvnVldBusChassisExp.EngDT = dt.lgc;
WhlGndVelRiDrvnVldBusChassisExp.EngInit = 0;
WhlGndVelRiDrvnVldBusChassisExp.EngMin = 0;
WhlGndVelRiDrvnVldBusChassisExp.EngMax = 1;
WhlGndVelRiDrvnVldBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiDrvnVldBusChassisExp.ReadType = 'Rte';


WhlGndVelRiDrvnVldBusHiSpd = DataDict.IpSignal;
WhlGndVelRiDrvnVldBusHiSpd.LongName = 'Wheel Ground Velocity Right Driven Valid Bus High Speed';
WhlGndVelRiDrvnVldBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure validity a' ...
  'nd vehicle speed arbitration.'];
WhlGndVelRiDrvnVldBusHiSpd.DocUnits = 'Cnt';
WhlGndVelRiDrvnVldBusHiSpd.EngDT = dt.lgc;
WhlGndVelRiDrvnVldBusHiSpd.EngInit = 0;
WhlGndVelRiDrvnVldBusHiSpd.EngMin = 0;
WhlGndVelRiDrvnVldBusHiSpd.EngMax = 1;
WhlGndVelRiDrvnVldBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiDrvnVldBusHiSpd.ReadType = 'Rte';


WhlGndVelRiNonDrvnBusChassisExp = DataDict.IpSignal;
WhlGndVelRiNonDrvnBusChassisExp.LongName = 'Wheel Ground Velocity Right Non-Driven Bus Chassis Expansion';
WhlGndVelRiNonDrvnBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum secure'];
WhlGndVelRiNonDrvnBusChassisExp.DocUnits = 'Kph';
WhlGndVelRiNonDrvnBusChassisExp.EngDT = dt.float32;
WhlGndVelRiNonDrvnBusChassisExp.EngInit = 0;
WhlGndVelRiNonDrvnBusChassisExp.EngMin = 0;
WhlGndVelRiNonDrvnBusChassisExp.EngMax = 511;
WhlGndVelRiNonDrvnBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiNonDrvnBusChassisExp.ReadType = 'Rte';


WhlGndVelRiNonDrvnBusHiSpd = DataDict.IpSignal;
WhlGndVelRiNonDrvnBusHiSpd.LongName = 'Wheel Ground Velocity Right Non-Driven Bus High Speed';
WhlGndVelRiNonDrvnBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum secure and vehicl' ...
  'e speed arbitration'];
WhlGndVelRiNonDrvnBusHiSpd.DocUnits = 'Kph';
WhlGndVelRiNonDrvnBusHiSpd.EngDT = dt.float32;
WhlGndVelRiNonDrvnBusHiSpd.EngInit = 0;
WhlGndVelRiNonDrvnBusHiSpd.EngMin = 0;
WhlGndVelRiNonDrvnBusHiSpd.EngMax = 511;
WhlGndVelRiNonDrvnBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiNonDrvnBusHiSpd.ReadType = 'Rte';


WhlGndVelRiNonDrvnStuckBusChassisExp = DataDict.IpSignal;
WhlGndVelRiNonDrvnStuckBusChassisExp.LongName = 'Wheel Ground Velocity Right Non-Driven Stuck Bus Chassis Expansion';
WhlGndVelRiNonDrvnStuckBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure va' ...
  'lidity'];
WhlGndVelRiNonDrvnStuckBusChassisExp.DocUnits = 'Cnt';
WhlGndVelRiNonDrvnStuckBusChassisExp.EngDT = dt.lgc;
WhlGndVelRiNonDrvnStuckBusChassisExp.EngInit = 0;
WhlGndVelRiNonDrvnStuckBusChassisExp.EngMin = 0;
WhlGndVelRiNonDrvnStuckBusChassisExp.EngMax = 1;
WhlGndVelRiNonDrvnStuckBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiNonDrvnStuckBusChassisExp.ReadType = 'Rte';


WhlGndVelRiNonDrvnStuckBusHiSpd = DataDict.IpSignal;
WhlGndVelRiNonDrvnStuckBusHiSpd.LongName = 'Wheel Ground Velocity Right Non-Driven Stuck Bus High Speed';
WhlGndVelRiNonDrvnStuckBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure va' ...
  'lidity'];
WhlGndVelRiNonDrvnStuckBusHiSpd.DocUnits = 'Cnt';
WhlGndVelRiNonDrvnStuckBusHiSpd.EngDT = dt.lgc;
WhlGndVelRiNonDrvnStuckBusHiSpd.EngInit = 0;
WhlGndVelRiNonDrvnStuckBusHiSpd.EngMin = 0;
WhlGndVelRiNonDrvnStuckBusHiSpd.EngMax = 1;
WhlGndVelRiNonDrvnStuckBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiNonDrvnStuckBusHiSpd.ReadType = 'Rte';


WhlGndVelRiNonDrvnVldBusChassisExp = DataDict.IpSignal;
WhlGndVelRiNonDrvnVldBusChassisExp.LongName = 'Wheel Ground Velocity Right Non-Driven Valid Bus Chassis Expansion';
WhlGndVelRiNonDrvnVldBusChassisExp.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure va' ...
  'lidity'];
WhlGndVelRiNonDrvnVldBusChassisExp.DocUnits = 'Cnt';
WhlGndVelRiNonDrvnVldBusChassisExp.EngDT = dt.lgc;
WhlGndVelRiNonDrvnVldBusChassisExp.EngInit = 0;
WhlGndVelRiNonDrvnVldBusChassisExp.EngMin = 0;
WhlGndVelRiNonDrvnVldBusChassisExp.EngMax = 1;
WhlGndVelRiNonDrvnVldBusChassisExp.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiNonDrvnVldBusChassisExp.ReadType = 'Rte';


WhlGndVelRiNonDrvnVldBusHiSpd = DataDict.IpSignal;
WhlGndVelRiNonDrvnVldBusHiSpd.LongName = 'Wheel Ground Velocity Right Non-Driven Valid Bus High Speed';
WhlGndVelRiNonDrvnVldBusHiSpd.Description = [...
  'The input is used to determine vehicle speed maximum/minimum secure an' ...
  'd vehicle speed arbitration'];
WhlGndVelRiNonDrvnVldBusHiSpd.DocUnits = 'Cnt';
WhlGndVelRiNonDrvnVldBusHiSpd.EngDT = dt.lgc;
WhlGndVelRiNonDrvnVldBusHiSpd.EngInit = 0;
WhlGndVelRiNonDrvnVldBusHiSpd.EngMin = 0;
WhlGndVelRiNonDrvnVldBusHiSpd.EngMax = 1;
WhlGndVelRiNonDrvnVldBusHiSpd.ReadIn = {'GmVehSpdArbnPer1'};
WhlGndVelRiNonDrvnVldBusHiSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
VehSpdArbd = DataDict.OpSignal;
VehSpdArbd.LongName = 'Vehicle Speed Arbitrated';
VehSpdArbd.Description = 'Non Secure Vehicle Speed';
VehSpdArbd.DocUnits = 'Kph';
VehSpdArbd.SwcShoName = 'GmVehSpdArbn';
VehSpdArbd.EngDT = dt.float32;
VehSpdArbd.EngInit = 0;
VehSpdArbd.EngMin = 0;
VehSpdArbd.EngMax = 511;
VehSpdArbd.TestTolerance = 0.001;
VehSpdArbd.WrittenIn = {'GmVehSpdArbnPer1'};
VehSpdArbd.WriteType = 'Rte';


VehSpdArbdVld = DataDict.OpSignal;
VehSpdArbdVld.LongName = 'Vehicle Speed Arbitrated Valid';
VehSpdArbdVld.Description = 'Non Secure Vehicle Speed valid';
VehSpdArbdVld.DocUnits = 'Cnt';
VehSpdArbdVld.SwcShoName = 'GmVehSpdArbn';
VehSpdArbdVld.EngDT = dt.lgc;
VehSpdArbdVld.EngInit = 0;
VehSpdArbdVld.EngMin = 0;
VehSpdArbdVld.EngMax = 1;
VehSpdArbdVld.TestTolerance = 0;
VehSpdArbdVld.WrittenIn = {'GmVehSpdArbnPer1'};
VehSpdArbdVld.WriteType = 'Rte';


VehSpdSecurMax = DataDict.OpSignal;
VehSpdSecurMax.LongName = 'Vehicle Speed Maximum Secure';
VehSpdSecurMax.Description = 'Max Secure Vehicle Speed';
VehSpdSecurMax.DocUnits = 'Kph';
VehSpdSecurMax.SwcShoName = 'GmVehSpdArbn';
VehSpdSecurMax.EngDT = dt.float32;
VehSpdSecurMax.EngInit = 0;
VehSpdSecurMax.EngMin = 0;
VehSpdSecurMax.EngMax = 511;
VehSpdSecurMax.TestTolerance = 0.001;
VehSpdSecurMax.WrittenIn = {'GmVehSpdArbnPer1'};
VehSpdSecurMax.WriteType = 'Rte';


VehSpdSecurMaxVld = DataDict.OpSignal;
VehSpdSecurMaxVld.LongName = 'Vehicle Speed Maximum Secure Valid';
VehSpdSecurMaxVld.Description = 'Maximum Secure Vehicle Speed Valid';
VehSpdSecurMaxVld.DocUnits = 'Cnt';
VehSpdSecurMaxVld.SwcShoName = 'GmVehSpdArbn';
VehSpdSecurMaxVld.EngDT = dt.lgc;
VehSpdSecurMaxVld.EngInit = 0;
VehSpdSecurMaxVld.EngMin = 0;
VehSpdSecurMaxVld.EngMax = 1;
VehSpdSecurMaxVld.TestTolerance = 0;
VehSpdSecurMaxVld.WrittenIn = {'GmVehSpdArbnPer1'};
VehSpdSecurMaxVld.WriteType = 'Rte';


VehSpdSecurMin = DataDict.OpSignal;
VehSpdSecurMin.LongName = 'Vehicle Speed Minimum Secure';
VehSpdSecurMin.Description = 'Minimum Secure Vehicle Speed';
VehSpdSecurMin.DocUnits = 'Kph';
VehSpdSecurMin.SwcShoName = 'GmVehSpdArbn';
VehSpdSecurMin.EngDT = dt.float32;
VehSpdSecurMin.EngInit = 0;
VehSpdSecurMin.EngMin = 0;
VehSpdSecurMin.EngMax = 511;
VehSpdSecurMin.TestTolerance = 0.001;
VehSpdSecurMin.WrittenIn = {'GmVehSpdArbnPer1'};
VehSpdSecurMin.WriteType = 'Rte';


VehSpdSecurMinVld = DataDict.OpSignal;
VehSpdSecurMinVld.LongName = 'Vehicle Speed Minimum Secure Valid';
VehSpdSecurMinVld.Description = 'Minimum Secure Vehicle Speed Valid';
VehSpdSecurMinVld.DocUnits = 'Cnt';
VehSpdSecurMinVld.SwcShoName = 'GmVehSpdArbn';
VehSpdSecurMinVld.EngDT = dt.lgc;
VehSpdSecurMinVld.EngInit = 0;
VehSpdSecurMinVld.EngMin = 0;
VehSpdSecurMinVld.EngMax = 1;
VehSpdSecurMinVld.TestTolerance = 0;
VehSpdSecurMinVld.WrittenIn = {'GmVehSpdArbnPer1'};
VehSpdSecurMinVld.WriteType = 'Rte';


VehSpdSnsrVld = DataDict.OpSignal;
VehSpdSnsrVld.LongName = 'Vehicle Speed Sensor Valid';
VehSpdSnsrVld.Description = [...
  'A Non Secure Vehicle Speed valid flag used ONLY by the Customer Functi' ...
  'on Vehicle Power Modes to determine of the Serial Comm vehicle speed i' ...
  's valid or not'];
VehSpdSnsrVld.DocUnits = 'Cnt';
VehSpdSnsrVld.SwcShoName = 'GmVehSpdArbn';
VehSpdSnsrVld.EngDT = dt.lgc;
VehSpdSnsrVld.EngInit = 0;
VehSpdSnsrVld.EngMin = 0;
VehSpdSnsrVld.EngMax = 1;
VehSpdSnsrVld.TestTolerance = 0;
VehSpdSnsrVld.WrittenIn = {'GmVehSpdArbnPer1'};
VehSpdSnsrVld.WriteType = 'Rte';



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
dGmVehSpdArbnLeDrvnVld = DataDict.Display;
dGmVehSpdArbnLeDrvnVld.LongName = 'Left Driven Validity';
dGmVehSpdArbnLeDrvnVld.Description = [...
  'A global variable that evaluates HS and CE Driven Validities as well a' ...
  's Stuck status'];
dGmVehSpdArbnLeDrvnVld.DocUnits = 'Cnt';
dGmVehSpdArbnLeDrvnVld.EngDT = dt.lgc;
dGmVehSpdArbnLeDrvnVld.EngMin = 0;
dGmVehSpdArbnLeDrvnVld.EngMax = 1;
dGmVehSpdArbnLeDrvnVld.InitRowCol = [1  1];


dGmVehSpdArbnLeNonDrvnVld = DataDict.Display;
dGmVehSpdArbnLeNonDrvnVld.LongName = 'Left Non Driven Validity';
dGmVehSpdArbnLeNonDrvnVld.Description = [...
  'A global variable that evaluates HS and CE Non Driven Validities as we' ...
  'll as Stuck status'];
dGmVehSpdArbnLeNonDrvnVld.DocUnits = 'Cnt';
dGmVehSpdArbnLeNonDrvnVld.EngDT = dt.lgc;
dGmVehSpdArbnLeNonDrvnVld.EngMin = 0;
dGmVehSpdArbnLeNonDrvnVld.EngMax = 1;
dGmVehSpdArbnLeNonDrvnVld.InitRowCol = [1  1];


dGmVehSpdArbnRiDrvnVld = DataDict.Display;
dGmVehSpdArbnRiDrvnVld.LongName = 'Right Driven Validity';
dGmVehSpdArbnRiDrvnVld.Description = [...
  'A global variable that evaluates HS and CE Driven Validities as well a' ...
  's Stuck status'];
dGmVehSpdArbnRiDrvnVld.DocUnits = 'Cnt';
dGmVehSpdArbnRiDrvnVld.EngDT = dt.lgc;
dGmVehSpdArbnRiDrvnVld.EngMin = 0;
dGmVehSpdArbnRiDrvnVld.EngMax = 1;
dGmVehSpdArbnRiDrvnVld.InitRowCol = [1  1];


dGmVehSpdArbnRiNonDrvnVld = DataDict.Display;
dGmVehSpdArbnRiNonDrvnVld.LongName = 'Right Non Driven Validity';
dGmVehSpdArbnRiNonDrvnVld.Description = [...
  'A global variable that evaluates HS and CE Non Driven Validities as we' ...
  'll as Stuck status'];
dGmVehSpdArbnRiNonDrvnVld.DocUnits = 'Cnt';
dGmVehSpdArbnRiNonDrvnVld.EngDT = dt.lgc;
dGmVehSpdArbnRiNonDrvnVld.EngMin = 0;
dGmVehSpdArbnRiNonDrvnVld.EngMax = 1;
dGmVehSpdArbnRiNonDrvnVld.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DiagcRefTi = DataDict.PIM;
DiagcRefTi.LongName = 'Diagnostic Reference Time';
DiagcRefTi.Description = [...
  'It is used as a timer at the start of theperiodic to determine if enou' ...
  'gh time haspassed before diagnosing missing signals'];
DiagcRefTi.DocUnits = 'Cnt';
DiagcRefTi.EngDT = dt.u32;
DiagcRefTi.EngMin = 0;
DiagcRefTi.EngMax = 4294967295;
DiagcRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DIAGCSTRTUPDLY_CNT_U32 = DataDict.Constant;
DIAGCSTRTUPDLY_CNT_U32.LongName = 'Diagnostic Start Up Delay';
DIAGCSTRTUPDLY_CNT_U32.Description = [...
  'Amount of time to delay before starting to diagnose missing signals'];
DIAGCSTRTUPDLY_CNT_U32.DocUnits = 'Cnt';
DIAGCSTRTUPDLY_CNT_U32.EngDT = dt.u32;
DIAGCSTRTUPDLY_CNT_U32.EngVal = 5000;
DIAGCSTRTUPDLY_CNT_U32.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = 'Step used when NtcType is None';
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


VEHSPDMAX_KPH_F32 = DataDict.Constant;
VEHSPDMAX_KPH_F32.LongName = 'Vehicle Speed Maximum';
VEHSPDMAX_KPH_F32.Description = [...
  'Maximum vehicle speed value used for output signals'];
VEHSPDMAX_KPH_F32.DocUnits = 'Kph';
VEHSPDMAX_KPH_F32.EngDT = dt.float32;
VEHSPDMAX_KPH_F32.EngVal = 511;
VEHSPDMAX_KPH_F32.Define = 'Local';


VEHSPDMIN_KPH_F32 = DataDict.Constant;
VEHSPDMIN_KPH_F32.LongName = 'Vehicle Speed Minimum';
VEHSPDMIN_KPH_F32.Description = [...
  'Minimum vehicle speed value used for output signals'];
VEHSPDMIN_KPH_F32.DocUnits = 'Kph';
VEHSPDMIN_KPH_F32.EngDT = dt.float32;
VEHSPDMIN_KPH_F32.EngVal = 0;
VEHSPDMIN_KPH_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
NTCNR_0X0E0 = DataDict.NTC;
NTCNR_0X0E0.NtcNr = NtcNr1.NTCNR_0X0E0;
NTCNR_0X0E0.NtcTyp = 'None';
NTCNR_0X0E0.LongName = 'Non Secure Vehicle Speed Invalid';
NTCNR_0X0E0.Description = 'Diagnostic will set if all High Speed bus wheel speed sensors are invalid and no Secure vehicle speed can not be calculated';
NTCNR_0X0E0.NtcStInfo = DataDict.NtcStInfoBitPacked;
NTCNR_0X0E0.NtcStInfo.Bit0Descr = 'Unused';
NTCNR_0X0E0.NtcStInfo.Bit1Descr = 'Unused';
NTCNR_0X0E0.NtcStInfo.Bit2Descr = 'Unused';
NTCNR_0X0E0.NtcStInfo.Bit3Descr = 'Unused';
NTCNR_0X0E0.NtcStInfo.Bit4Descr = 'Unused';
NTCNR_0X0E0.NtcStInfo.Bit5Descr = 'Unused';
NTCNR_0X0E0.NtcStInfo.Bit6Descr = 'Unused';
NTCNR_0X0E0.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
