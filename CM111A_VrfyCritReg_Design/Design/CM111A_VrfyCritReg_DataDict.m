%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Apr-2016 15:33:41       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM111A = DataDict.FDD;
CM111A.Version = '2.2.X';
CM111A.LongName = 'Critical Register Verification';
CM111A.ShoName  = 'VrfyCritReg';
CM111A.DesignASIL = 'D';
CM111A.Description = [...
  'This component describes the functions which verify critical registers' ...
  '.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
VrfyCritRegInit1 = DataDict.Runnable;
VrfyCritRegInit1.Context = 'Rte';
VrfyCritRegInit1.TimeStep = 0;
VrfyCritRegInit1.Description = 'Sub-function verifies critical registers once at initialization';

VrfyCritRegPer1 = DataDict.Runnable;
VrfyCritRegPer1.Context = 'Rte';
VrfyCritRegPer1.TimeStep = 0.01;
VrfyCritRegPer1.Description = 'Sub-function verifies critical registers periodically';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'VrfyCritRegInit1','VrfyCritRegPer1'};
SetNtcSts.Description = '';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
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
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



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

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dVrfyCritRegCritRegActVal = DataDict.Display;
dVrfyCritRegCritRegActVal.LongName = 'Critical Register Verification Critical Register Actual Value';
dVrfyCritRegCritRegActVal.Description = 'Value of the non-system critical register that was read';
dVrfyCritRegCritRegActVal.DocUnits = 'Cnt';
dVrfyCritRegCritRegActVal.EngDT = dt.u32;
dVrfyCritRegCritRegActVal.EngMin = 0;
dVrfyCritRegCritRegActVal.EngMax = 65535;
dVrfyCritRegCritRegActVal.InitRowCol = [1  1];


dVrfyCritRegCritRegAdr = DataDict.Display;
dVrfyCritRegCritRegAdr.LongName = 'Critical Register Verification Critical Register Address';
dVrfyCritRegCritRegAdr.Description = 'Address of the non-system critical register to be read';
dVrfyCritRegCritRegAdr.DocUnits = 'Cnt';
dVrfyCritRegCritRegAdr.EngDT = dt.u32;
dVrfyCritRegCritRegAdr.EngMin = 0;
dVrfyCritRegCritRegAdr.EngMax = 4294967295;
dVrfyCritRegCritRegAdr.InitRowCol = [1  1];


dVrfyCritRegCritRegDesVal = DataDict.Display;
dVrfyCritRegCritRegDesVal.LongName = 'Critical Register Verification Critical Register Desired Value';
dVrfyCritRegCritRegDesVal.Description = 'Expected value of the non-system critical register to be compared against the actual value';
dVrfyCritRegCritRegDesVal.DocUnits = 'Cnt';
dVrfyCritRegCritRegDesVal.EngDT = dt.u32;
dVrfyCritRegCritRegDesVal.EngMin = 0;
dVrfyCritRegCritRegDesVal.EngMax = 4294967295;
dVrfyCritRegCritRegDesVal.InitRowCol = [1  1];


dVrfyCritRegSysCritRegActVal = DataDict.Display;
dVrfyCritRegSysCritRegActVal.LongName = 'Critical Register Verification System Critical Register Actual Value';
dVrfyCritRegSysCritRegActVal.Description = 'Value of the system critical register that was read';
dVrfyCritRegSysCritRegActVal.DocUnits = 'Cnt';
dVrfyCritRegSysCritRegActVal.EngDT = dt.u32;
dVrfyCritRegSysCritRegActVal.EngMin = 0;
dVrfyCritRegSysCritRegActVal.EngMax = 4294967295;
dVrfyCritRegSysCritRegActVal.InitRowCol = [1  1];


dVrfyCritRegSysCritRegAdr = DataDict.Display;
dVrfyCritRegSysCritRegAdr.LongName = 'Critical Register Verification System Critical Register Address';
dVrfyCritRegSysCritRegAdr.Description = 'Address of the system critical register to be read';
dVrfyCritRegSysCritRegAdr.DocUnits = 'Cnt';
dVrfyCritRegSysCritRegAdr.EngDT = dt.u32;
dVrfyCritRegSysCritRegAdr.EngMin = 0;
dVrfyCritRegSysCritRegAdr.EngMax = 4294967295;
dVrfyCritRegSysCritRegAdr.InitRowCol = [1  1];


dVrfyCritRegSysCritRegDesVal = DataDict.Display;
dVrfyCritRegSysCritRegDesVal.LongName = 'Critical Register Verification System Critical Register Desired Value';
dVrfyCritRegSysCritRegDesVal.Description = 'Expected value of the system critical register to be compared against the actual value';
dVrfyCritRegSysCritRegDesVal.DocUnits = 'Cnt';
dVrfyCritRegSysCritRegDesVal.EngDT = dt.u32;
dVrfyCritRegSysCritRegDesVal.EngMin = 0;
dVrfyCritRegSysCritRegDesVal.EngMax = 4294967295;
dVrfyCritRegSysCritRegDesVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
NROFININCRITREG16BIT_CNT_U16 = DataDict.ConfigParam;
NROFININCRITREG16BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 16 Bit';
NROFININCRITREG16BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 16bit access'];
NROFININCRITREG16BIT_CNT_U16.IsBuildPrm = false;
NROFININCRITREG16BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG16BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG16BIT_CNT_U16.EngVal = 0;
NROFININCRITREG16BIT_CNT_U16.EngMin = 0;
NROFININCRITREG16BIT_CNT_U16.EngMax = 65535;
NROFININCRITREG16BIT_CNT_U16.Header = 'none';
NROFININCRITREG16BIT_CNT_U16.Define = 'Local';


NROFININCRITREG32BIT_CNT_U16 = DataDict.ConfigParam;
NROFININCRITREG32BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 32 Bit';
NROFININCRITREG32BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 32 bit access'];
NROFININCRITREG32BIT_CNT_U16.IsBuildPrm = false;
NROFININCRITREG32BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG32BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG32BIT_CNT_U16.EngVal = 0;
NROFININCRITREG32BIT_CNT_U16.EngMin = 0;
NROFININCRITREG32BIT_CNT_U16.EngMax = 65535;
NROFININCRITREG32BIT_CNT_U16.Header = 'none';
NROFININCRITREG32BIT_CNT_U16.Define = 'Local';


NROFININCRITREG8BIT_CNT_U16 = DataDict.ConfigParam;
NROFININCRITREG8BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 8 Bit';
NROFININCRITREG8BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 8 bit access'];
NROFININCRITREG8BIT_CNT_U16.IsBuildPrm = false;
NROFININCRITREG8BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG8BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG8BIT_CNT_U16.EngVal = 0;
NROFININCRITREG8BIT_CNT_U16.EngMin = 0;
NROFININCRITREG8BIT_CNT_U16.EngMax = 65535;
NROFININCRITREG8BIT_CNT_U16.Header = 'none';
NROFININCRITREG8BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG16BIT_CNT_U16 = DataDict.ConfigParam;
NROFPERCRITREG16BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 16 Bit';
NROFPERCRITREG16BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 16 ' ...
  'bit access'];
NROFPERCRITREG16BIT_CNT_U16.IsBuildPrm = false;
NROFPERCRITREG16BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG16BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG16BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG16BIT_CNT_U16.EngMin = 0;
NROFPERCRITREG16BIT_CNT_U16.EngMax = 65535;
NROFPERCRITREG16BIT_CNT_U16.Header = 'none';
NROFPERCRITREG16BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG32BIT_CNT_U16 = DataDict.ConfigParam;
NROFPERCRITREG32BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 32 Bit';
NROFPERCRITREG32BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 32 ' ...
  'bit access'];
NROFPERCRITREG32BIT_CNT_U16.IsBuildPrm = false;
NROFPERCRITREG32BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG32BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG32BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG32BIT_CNT_U16.EngMin = 0;
NROFPERCRITREG32BIT_CNT_U16.EngMax = 65535;
NROFPERCRITREG32BIT_CNT_U16.Header = 'none';
NROFPERCRITREG32BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG8BIT_CNT_U16 = DataDict.ConfigParam;
NROFPERCRITREG8BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 8 Bit';
NROFPERCRITREG8BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 8 b' ...
  'it access'];
NROFPERCRITREG8BIT_CNT_U16.IsBuildPrm = false;
NROFPERCRITREG8BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG8BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG8BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG8BIT_CNT_U16.EngMin = 0;
NROFPERCRITREG8BIT_CNT_U16.EngMax = 65535;
NROFPERCRITREG8BIT_CNT_U16.Header = 'none';
NROFPERCRITREG8BIT_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
CritRegFailr = DataDict.NTC;
CritRegFailr.NtcNr = NtcNr1.NTCNR_0X020;
CritRegFailr.NtcTyp = 'None';
CritRegFailr.LongName = 'Critical Register Failure';
CritRegFailr.Description = 'Failure detected when the register value is different from expected value';
CritRegFailr.NtcStInfo = DataDict.NtcStInfoBitPacked;
CritRegFailr.NtcStInfo.Bit0Descr = 'Non-system Critical Register Fault';
CritRegFailr.NtcStInfo.Bit1Descr = 'System Critical Register Fault';
CritRegFailr.NtcStInfo.Bit2Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit3Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit4Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit5Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit6Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
