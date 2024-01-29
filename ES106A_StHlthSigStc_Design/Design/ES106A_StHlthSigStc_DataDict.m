%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Nov-2016 09:50:36       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 6 %           %
%                                  Derived by: %derived_by: DZ1YRM %          %
%%-----------------------------------------------------------------------%

ES106A = DataDict.FDD;
ES106A.Version = '2.4.X';
ES106A.LongName = 'State Of Health Signal Statistics';
ES106A.ShoName  = 'StHlthSigStc';
ES106A.DesignASIL = 'QM';
ES106A.Description = [...
  'This component shall collect State of Health data signals from otherco' ...
  'mponent(s) and shall compute following statistical values for eachsign' ...
  'al: Minimum, Maximum, Average and Life Cycle Sample counter.This compo' ...
  'nent shall provide statistical data for ignition cycle andfor life cyc' ...
  'le for each signal upon request.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
StHlthSigStcInit1 = DataDict.Runnable;
StHlthSigStcInit1.Context = 'Rte';
StHlthSigStcInit1.TimeStep = 0;
StHlthSigStcInit1.Description = [...
  'Initialize the minimum value for all State of Health signals, and prep' ...
  'are a buffer for CRC calculation.'];

ClrSigStcHlthData = DataDict.SrvRunnable;
ClrSigStcHlthData.Context = 'Rte';
ClrSigStcHlthData.Description = [...
  'Clear the PIMs IgnCycSampleCntrAry and RamBuf.'];
ClrSigStcHlthData.Return = DataDict.CSReturn;
ClrSigStcHlthData.Return.Type = 'None';
ClrSigStcHlthData.Return.Min = [];
ClrSigStcHlthData.Return.Max = [];
ClrSigStcHlthData.Return.TestTolerance = [];
ClrSigStcHlthData.Arguments(1) = DataDict.CSArguments;
ClrSigStcHlthData.Arguments(1).Name = 'TarSel';
ClrSigStcHlthData.Arguments(1).EngDT = dt.lgc;
ClrSigStcHlthData.Arguments(1).EngMin = 0;
ClrSigStcHlthData.Arguments(1).EngMax = 1;
ClrSigStcHlthData.Arguments(1).Units = 'Cnt';
ClrSigStcHlthData.Arguments(1).Direction = 'In';
ClrSigStcHlthData.Arguments(1).InitRowCol = [1  1];
ClrSigStcHlthData.Arguments(1).Description = '';

GetSigStcHlthData = DataDict.SrvRunnable;
GetSigStcHlthData.Context = 'Rte';
GetSigStcHlthData.Description = 'Get the RamBuf return ID.';
GetSigStcHlthData.Return = DataDict.CSReturn;
GetSigStcHlthData.Return.Type = 'Standard';
GetSigStcHlthData.Return.Min = 0;
GetSigStcHlthData.Return.Max = 1;
GetSigStcHlthData.Return.TestTolerance = 0;
GetSigStcHlthData.Return.Description = '';
GetSigStcHlthData.Arguments(1) = DataDict.CSArguments;
GetSigStcHlthData.Arguments(1).Name = 'SigId';
GetSigStcHlthData.Arguments(1).EngDT = enum.StHlthMonSig3;
GetSigStcHlthData.Arguments(1).EngMin = StHlthMonSig3.STHLTHMONSIG_ECUTFILTD;
GetSigStcHlthData.Arguments(1).EngMax = StHlthMonSig3.STHLTHMONSIG_WHLIMBREJCTN;
GetSigStcHlthData.Arguments(1).Units = 'Cnt';
GetSigStcHlthData.Arguments(1).Direction = 'In';
GetSigStcHlthData.Arguments(1).InitRowCol = [1  1];
GetSigStcHlthData.Arguments(1).Description = '';
GetSigStcHlthData.Arguments(2) = DataDict.CSArguments;
GetSigStcHlthData.Arguments(2).Name = 'BufPtr';
GetSigStcHlthData.Arguments(2).EngDT = dt.u32;
GetSigStcHlthData.Arguments(2).EngMin = 0;
GetSigStcHlthData.Arguments(2).EngMax = 4294967295;
GetSigStcHlthData.Arguments(2).TestTolerance = 1;
GetSigStcHlthData.Arguments(2).Units = 'Uls';
GetSigStcHlthData.Arguments(2).Direction = 'Out';
GetSigStcHlthData.Arguments(2).InitRowCol = [1  11];
GetSigStcHlthData.Arguments(2).Description = '';

StHlthStcPwrDwn = DataDict.SrvRunnable;
StHlthStcPwrDwn.Context = 'Rte';
StHlthStcPwrDwn.Description = 'Update the NVM during Power Down.';
StHlthStcPwrDwn.Return = DataDict.CSReturn;
StHlthStcPwrDwn.Return.Type = 'None';
StHlthStcPwrDwn.Return.Min = [];
StHlthStcPwrDwn.Return.Max = [];
StHlthStcPwrDwn.Return.TestTolerance = [];

UpdStHlthStcData = DataDict.SrvRunnable;
UpdStHlthStcData.Context = 'Rte';
UpdStHlthStcData.Description = 'Update the data with Task ID.';
UpdStHlthStcData.Return = DataDict.CSReturn;
UpdStHlthStcData.Return.Type = 'None';
UpdStHlthStcData.Return.Min = [];
UpdStHlthStcData.Return.Max = [];
UpdStHlthStcData.Return.TestTolerance = [];
UpdStHlthStcData.Arguments(1) = DataDict.CSArguments;
UpdStHlthStcData.Arguments(1).Name = 'TaskId';
UpdStHlthStcData.Arguments(1).EngDT = dt.u08;
UpdStHlthStcData.Arguments(1).EngMin = 0;
UpdStHlthStcData.Arguments(1).EngMax = 255;
UpdStHlthStcData.Arguments(1).Units = 'Uls';
UpdStHlthStcData.Arguments(1).Direction = 'In';
UpdStHlthStcData.Arguments(1).InitRowCol = [1  1];
UpdStHlthStcData.Arguments(1).Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SigStcHistDataAry_GetErrorStatus = DataDict.Client;
SigStcHistDataAry_GetErrorStatus.CallLocation = {'StHlthSigStcInit1'};
SigStcHistDataAry_GetErrorStatus.Description = [...
  'Client defintion to determine the validity of NVM'];
SigStcHistDataAry_GetErrorStatus.Return = DataDict.CSReturn;
SigStcHistDataAry_GetErrorStatus.Return.Type = 'Standard';
SigStcHistDataAry_GetErrorStatus.Return.Min = 0;
SigStcHistDataAry_GetErrorStatus.Return.Max = 1;
SigStcHistDataAry_GetErrorStatus.Return.TestTolerance = [];
SigStcHistDataAry_GetErrorStatus.Return.Description = '';
SigStcHistDataAry_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
SigStcHistDataAry_GetErrorStatus.Arguments(1).Name = 'ReqResPtr ';
SigStcHistDataAry_GetErrorStatus.Arguments(1).EngDT = dt.u08;
SigStcHistDataAry_GetErrorStatus.Arguments(1).EngMin = 0;
SigStcHistDataAry_GetErrorStatus.Arguments(1).EngMax = 8;
SigStcHistDataAry_GetErrorStatus.Arguments(1).TestTolerance = 999;
SigStcHistDataAry_GetErrorStatus.Arguments(1).Units = 'Cnt';
SigStcHistDataAry_GetErrorStatus.Arguments(1).Direction = 'Out';
SigStcHistDataAry_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
SigStcHistDataAry_GetErrorStatus.Arguments(1).Description = '';


SigStcHistDataAry_SetRamBlockStatus = DataDict.Client;
SigStcHistDataAry_SetRamBlockStatus.CallLocation = {'StHlthStcPwrDwn','ClrSigStcHlthData'};
SigStcHistDataAry_SetRamBlockStatus.Description = [...
  'Client definition to update the NVM during ignition off'];
SigStcHistDataAry_SetRamBlockStatus.Return = DataDict.CSReturn;
SigStcHistDataAry_SetRamBlockStatus.Return.Type = 'Standard';
SigStcHistDataAry_SetRamBlockStatus.Return.Min = 0;
SigStcHistDataAry_SetRamBlockStatus.Return.Max = 1;
SigStcHistDataAry_SetRamBlockStatus.Return.TestTolerance = 0;
SigStcHistDataAry_SetRamBlockStatus.Return.Description = '';
SigStcHistDataAry_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).EngMin = 0;
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).EngMax = 1;
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).Direction = 'In';
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
SigStcHistDataAry_SetRamBlockStatus.Arguments(1).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
StHlthSig = DataDict.IpSignal;
StHlthSig.LongName = 'State of Health Signal';
StHlthSig.Description = [...
  'An arrary of signals comes from other function.'];
StHlthSig.DocUnits = 'Cnt';
StHlthSig.EngDT = dt.u08;
StHlthSig.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
StHlthSig.EngMin = 0;
StHlthSig.EngMax = 100;
StHlthSig.ReadIn = {'UpdStHlthStcData'};
StHlthSig.ReadType = 'Rte';



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
SigStcHistDataAry = DataDict.NVM;
SigStcHistDataAry.LongName = 'Signal Statistic History Data Array';
SigStcHistDataAry.Description = [...
  'Array containing Min, Max, Avg and counter values  for all the State o' ...
  'f Health Signals that need to be stored in NVM.'];
SigStcHistDataAry.DocUnits = 'Uls';
SigStcHistDataAry.EngDT = dt.u08;
SigStcHistDataAry.EngInit = [];
SigStcHistDataAry.EngMin = 0;
SigStcHistDataAry.EngMax = 255;
SigStcHistDataAry.CustomerVisible = false;
SigStcHistDataAry.Impact = 'M';
SigStcHistDataAry.TuningOwner = 'FDD';
SigStcHistDataAry.CoderInfo.Alias = '';
SigStcHistDataAry.InitRowCol = [1  225];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
CrcInst = DataDict.PIM;
CrcInst.LongName = 'CRC Instance';
CrcInst.Description = [...
  'This a Software configurable generated out of DaVinci Configurator. As' ...
  ' an example for simulation purpose, PIM is used with 2 elements which ' ...
  'contain detials about EcuT and Voltage signals.'];
CrcInst.DocUnits = 'Uls';
CrcInst.EngDT = dt.u32;
CrcInst.EngMin = 0;
CrcInst.EngMax = 0;
CrcInst.InitRowCol = [1  8];


IgnCycSampleCntrAry = DataDict.PIM;
IgnCycSampleCntrAry.LongName = 'Ignition Cycle Sample Counter Array';
IgnCycSampleCntrAry.Description = [...
  'Maintains number of samples monitored in the present ignition cycle fo' ...
  'r every signal. This keep track of number of samples collected in the ' ...
  'present ignition cycle for each signal to be monitored'];
IgnCycSampleCntrAry.DocUnits = 'Cnt';
IgnCycSampleCntrAry.EngDT = dt.u32;
IgnCycSampleCntrAry.EngMin = 0;
IgnCycSampleCntrAry.EngMax = 4294967295;
IgnCycSampleCntrAry.InitRowCol = [1  22];


RamBuf = DataDict.PIM;
RamBuf.LongName = 'Ram buffer';
RamBuf.Description = [...
  'Maintains current sample and statistical data for current ignition cyc' ...
  'le for every signal'];
RamBuf.DocUnits = 'Cnt';
RamBuf.EngDT = dt.u08;
RamBuf.EngMin = 0;
RamBuf.EngMax = 255;
RamBuf.InitRowCol = [1  66];


SigAvrgBuf = DataDict.PIM;
SigAvrgBuf.LongName = 'Signal Average buffer';
SigAvrgBuf.Description = [...
  'Maintains current sample and statistical data for Signal Average for e' ...
  'very signal'];
SigAvrgBuf.DocUnits = 'Cnt';
SigAvrgBuf.EngDT = dt.float32;
SigAvrgBuf.EngMin = 0;
SigAvrgBuf.EngMax = 100;
SigAvrgBuf.InitRowCol = [1  22];


SigStcPrmInst = DataDict.PIM;
SigStcPrmInst.LongName = 'Signal Statstic Parameter Instance';
SigStcPrmInst.Description = [...
  'This a Software configurable generated out of DaVinci Configurator. As' ...
  ' an example for simulation purpose, PIM is used with 2 elements which ' ...
  'contain detials about EcuT and Voltage signals.'];
SigStcPrmInst.DocUnits = 'Uls';
SigStcPrmInst.EngDT = struct.StHlthSigStcPrmRec1;
SigStcPrmInst.EngMin = [struct('GetStHlthDataOper',0,'SamplePerSec',0,'TaskRef',0,'RamStorgOffs',0,'NvmStorgOffs',0)];
SigStcPrmInst.EngMax = [struct('GetStHlthDataOper',255,'SamplePerSec',65535,'TaskRef',0,'RamStorgOffs',255,'NvmStorgOffs',255)];
SigStcPrmInst.InitRowCol = [1  22];


VldNvm = DataDict.PIM;
VldNvm.LongName = 'Validity NVM';
VldNvm.Description = [...
  'Maintains validity / applicablility of NVM block'];
VldNvm.DocUnits = 'Cnt';
VldNvm.EngDT = dt.lgc;
VldNvm.EngMin = 0;
VldNvm.EngMax = 1;
VldNvm.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
APPL10_CNT_U08 = DataDict.Constant;
APPL10_CNT_U08.LongName = 'OS Application id 10';
APPL10_CNT_U08.Description = 'OS Application id 10';
APPL10_CNT_U08.DocUnits = 'Cnt';
APPL10_CNT_U08.EngDT = dt.u08;
APPL10_CNT_U08.EngVal = 1;
APPL10_CNT_U08.Define = 'Local';


BITSPERBYTE_CNT_U08 = DataDict.Constant;
BITSPERBYTE_CNT_U08.LongName = 'Bits per Byte';
BITSPERBYTE_CNT_U08.Description = [...
  'State Helath Signal Constant Value 8'];
BITSPERBYTE_CNT_U08.DocUnits = 'Cnt';
BITSPERBYTE_CNT_U08.EngDT = dt.u08;
BITSPERBYTE_CNT_U08.EngVal = 8;
BITSPERBYTE_CNT_U08.Define = 'Local';


DUMMYAPPLCRC_CNT_U32 = DataDict.Constant;
DUMMYAPPLCRC_CNT_U32.LongName = 'CRC application Dummy Constant';
DUMMYAPPLCRC_CNT_U32.Description = 'CRC application Dummy Constant';
DUMMYAPPLCRC_CNT_U32.DocUnits = 'Cnt';
DUMMYAPPLCRC_CNT_U32.EngDT = dt.u32;
DUMMYAPPLCRC_CNT_U32.EngVal = 100;
DUMMYAPPLCRC_CNT_U32.Define = 'Local';


DUMMYCAL2CRC_CNT_U32 = DataDict.Constant;
DUMMYCAL2CRC_CNT_U32.LongName = 'CRC Dummy Callibration 2 Constant';
DUMMYCAL2CRC_CNT_U32.Description = 'CRC Dmmy Constant';
DUMMYCAL2CRC_CNT_U32.DocUnits = 'Cnt';
DUMMYCAL2CRC_CNT_U32.EngDT = dt.u32;
DUMMYCAL2CRC_CNT_U32.EngVal = 0;
DUMMYCAL2CRC_CNT_U32.Define = 'Local';


DUMMYCALL1CRC_CNT_U32 = DataDict.Constant;
DUMMYCALL1CRC_CNT_U32.LongName = 'CRC Dummy Callibration 1 Constant';
DUMMYCALL1CRC_CNT_U32.Description = 'CRC Dummy Constant';
DUMMYCALL1CRC_CNT_U32.DocUnits = 'Cnt';
DUMMYCALL1CRC_CNT_U32.EngDT = dt.u32;
DUMMYCALL1CRC_CNT_U32.EngVal = 10;
DUMMYCALL1CRC_CNT_U32.Define = 'Local';


ENOTOK_CNT_U08 = DataDict.Constant;
ENOTOK_CNT_U08.LongName = 'E Not Ok';
ENOTOK_CNT_U08.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
ENOTOK_CNT_U08.DocUnits = 'Cnt';
ENOTOK_CNT_U08.EngDT = dt.u08;
ENOTOK_CNT_U08.EngVal = 1;
ENOTOK_CNT_U08.Define = 'Local';


EOK_CNT_U08 = DataDict.Constant;
EOK_CNT_U08.LongName = 'E Ok';
EOK_CNT_U08.Description = [...
  'AUTOSAR Standard Return Type OK value'];
EOK_CNT_U08.DocUnits = 'Cnt';
EOK_CNT_U08.EngDT = dt.u08;
EOK_CNT_U08.EngVal = 0;
EOK_CNT_U08.Define = 'Local';


IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32 = DataDict.Constant;
IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32.LongName = 'Ignition Cycle Sample Counter Array Maximum Limit';
IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32.Description = [...
  'Maximum value of Ignition cycle Sample Counter Array'];
IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32.DocUnits = 'Cnt';
IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32.EngDT = dt.u32;
IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32.EngVal = 4294967295;
IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32.Define = 'Local';


IGNCYCSAMPLECNTRARYMINLIM_CNT_U32 = DataDict.Constant;
IGNCYCSAMPLECNTRARYMINLIM_CNT_U32.LongName = 'Ignition Cycle Sample Counter Array Minimum Limit';
IGNCYCSAMPLECNTRARYMINLIM_CNT_U32.Description = [...
  'Minimum value of Ignition cycle Sample Counter Array'];
IGNCYCSAMPLECNTRARYMINLIM_CNT_U32.DocUnits = 'Cnt';
IGNCYCSAMPLECNTRARYMINLIM_CNT_U32.EngDT = dt.u32;
IGNCYCSAMPLECNTRARYMINLIM_CNT_U32.EngVal = 0;
IGNCYCSAMPLECNTRARYMINLIM_CNT_U32.Define = 'Local';


LOWRMASKVAL_CNT_U32 = DataDict.Constant;
LOWRMASKVAL_CNT_U32.LongName = 'Lower Mask Value';
LOWRMASKVAL_CNT_U32.Description = [...
  'State Helath Signal Constant Value 0x000000FF'];
LOWRMASKVAL_CNT_U32.DocUnits = 'Cnt';
LOWRMASKVAL_CNT_U32.EngDT = dt.u32;
LOWRMASKVAL_CNT_U32.EngVal = 255;
LOWRMASKVAL_CNT_U32.Define = 'Local';


MOTISRREF_CNT_U16 = DataDict.ConfigParam;
MOTISRREF_CNT_U16.LongName = 'Motor ISR Reference';
MOTISRREF_CNT_U16.Description = 'Motor ISR Reference ';
MOTISRREF_CNT_U16.IsBuildPrm = false;
MOTISRREF_CNT_U16.DocUnits = 'Cnt';
MOTISRREF_CNT_U16.EngDT = dt.u16;
MOTISRREF_CNT_U16.EngVal = 13;
MOTISRREF_CNT_U16.EngMin = 0;
MOTISRREF_CNT_U16.EngMax = 65535;
MOTISRREF_CNT_U16.Define = 'Local';


NROFCRCAREA_CNT_U08 = DataDict.ConfigParam;
NROFCRCAREA_CNT_U08.LongName = 'Number of CRC Area';
NROFCRCAREA_CNT_U08.Description = 'CRC Area';
NROFCRCAREA_CNT_U08.IsBuildPrm = false;
NROFCRCAREA_CNT_U08.DocUnits = 'Cnt';
NROFCRCAREA_CNT_U08.EngDT = dt.u08;
NROFCRCAREA_CNT_U08.EngVal = 3;
NROFCRCAREA_CNT_U08.EngMin = 0;
NROFCRCAREA_CNT_U08.EngMax = 255;
NROFCRCAREA_CNT_U08.Define = 'Local';


NVMAVRGPOSN_CNT_U08 = DataDict.Constant;
NVMAVRGPOSN_CNT_U08.LongName = 'NVM Average Position';
NVMAVRGPOSN_CNT_U08.Description = [...
  'Position of state health signal average value in a NVM memory block. E' ...
  'ach state health signal has buffer size of 4 and average value of sign' ...
  'al resides in 2nd postion'];
NVMAVRGPOSN_CNT_U08.DocUnits = 'Cnt';
NVMAVRGPOSN_CNT_U08.EngDT = dt.u08;
NVMAVRGPOSN_CNT_U08.EngVal = 2;
NVMAVRGPOSN_CNT_U08.Define = 'Local';


NVMMAXPOSN_CNT_U08 = DataDict.Constant;
NVMMAXPOSN_CNT_U08.LongName = 'NVM Maximum Position';
NVMMAXPOSN_CNT_U08.Description = [...
  'Position of state health signal max value in a NVM memory block. Each ' ...
  'state health signal has buffer size of 4 and max value of signal resid' ...
  'es in 0th postion'];
NVMMAXPOSN_CNT_U08.DocUnits = 'Cnt';
NVMMAXPOSN_CNT_U08.EngDT = dt.u08;
NVMMAXPOSN_CNT_U08.EngVal = 0;
NVMMAXPOSN_CNT_U08.Define = 'Local';


NVMMINPOSN_CNT_U08 = DataDict.Constant;
NVMMINPOSN_CNT_U08.LongName = 'NVM Minimum Position';
NVMMINPOSN_CNT_U08.Description = [...
  'Position of state health signal min value in a NVM memory block. Each ' ...
  'state health signal has buffer size of 4 and min value of signal resid' ...
  'es in 1st postion'];
NVMMINPOSN_CNT_U08.DocUnits = 'Cnt';
NVMMINPOSN_CNT_U08.EngDT = dt.u08;
NVMMINPOSN_CNT_U08.EngVal = 1;
NVMMINPOSN_CNT_U08.Define = 'Local';


NVMSAMPLECNTRPOSN_CNT_U08 = DataDict.Constant;
NVMSAMPLECNTRPOSN_CNT_U08.LongName = 'NVM Sample Counter Position';
NVMSAMPLECNTRPOSN_CNT_U08.Description = [...
  'Position of state health signal sample counter value in a NVM memory b' ...
  'lock. Each state health signal has buffer size of 4 and sample counter' ...
  ' value of signal resides in 3rd postion'];
NVMSAMPLECNTRPOSN_CNT_U08.DocUnits = 'Cnt';
NVMSAMPLECNTRPOSN_CNT_U08.EngDT = dt.u08;
NVMSAMPLECNTRPOSN_CNT_U08.EngVal = 4;
NVMSAMPLECNTRPOSN_CNT_U08.Define = 'Local';


RAMMAXPOSN_CNT_U08 = DataDict.Constant;
RAMMAXPOSN_CNT_U08.LongName = 'Ram Max position';
RAMMAXPOSN_CNT_U08.Description = [...
  'Position of state health signal max value in a local ram buffer. Each ' ...
  'state health signal has buffer size of 4 and max value of signal resid' ...
  'es in 1st postion'];
RAMMAXPOSN_CNT_U08.DocUnits = 'Cnt';
RAMMAXPOSN_CNT_U08.EngDT = dt.u08;
RAMMAXPOSN_CNT_U08.EngVal = 1;
RAMMAXPOSN_CNT_U08.Define = 'Local';


RAMMINPOSN_CNT_U08 = DataDict.Constant;
RAMMINPOSN_CNT_U08.LongName = 'Ram Min position';
RAMMINPOSN_CNT_U08.Description = [...
  'Position of state health signal min value in a local ram buffer. Each ' ...
  'state health signal has buffer size of 4 and min value of signal resid' ...
  'es in 2nd postion'];
RAMMINPOSN_CNT_U08.DocUnits = 'Cnt';
RAMMINPOSN_CNT_U08.EngDT = dt.u08;
RAMMINPOSN_CNT_U08.EngVal = 2;
RAMMINPOSN_CNT_U08.Define = 'Local';


RAMRAWPOSN_CNT_U08 = DataDict.Constant;
RAMRAWPOSN_CNT_U08.LongName = 'Ram Raw Position';
RAMRAWPOSN_CNT_U08.Description = [...
  'Position of state health signal value in a local ram buffer. Each stat' ...
  'e health signal has buffer size of 4 and raw value of signal resides i' ...
  'n 0th postion'];
RAMRAWPOSN_CNT_U08.DocUnits = 'Cnt';
RAMRAWPOSN_CNT_U08.EngDT = dt.u08;
RAMRAWPOSN_CNT_U08.EngVal = 0;
RAMRAWPOSN_CNT_U08.Define = 'Local';


SHIFTFAC16_ULS_U08 = DataDict.Constant;
SHIFTFAC16_ULS_U08.LongName = 'Shift factor 16';
SHIFTFAC16_ULS_U08.Description = 'Shifting factor 16';
SHIFTFAC16_ULS_U08.DocUnits = 'Uls';
SHIFTFAC16_ULS_U08.EngDT = dt.u08;
SHIFTFAC16_ULS_U08.EngVal = 16;
SHIFTFAC16_ULS_U08.Define = 'Local';


SHIFTFAC24_ULS_U08 = DataDict.Constant;
SHIFTFAC24_ULS_U08.LongName = 'Shift factor 24';
SHIFTFAC24_ULS_U08.Description = 'Shifting factor 24';
SHIFTFAC24_ULS_U08.DocUnits = 'Uls';
SHIFTFAC24_ULS_U08.EngDT = dt.u08;
SHIFTFAC24_ULS_U08.EngVal = 24;
SHIFTFAC24_ULS_U08.Define = 'Local';


SHIFTFAC8_ULS_U08 = DataDict.Constant;
SHIFTFAC8_ULS_U08.LongName = 'Shift factor 8';
SHIFTFAC8_ULS_U08.Description = 'Shifting factor 8';
SHIFTFAC8_ULS_U08.DocUnits = 'Uls';
SHIFTFAC8_ULS_U08.EngDT = dt.u08;
SHIFTFAC8_ULS_U08.EngVal = 8;
SHIFTFAC8_ULS_U08.Define = 'Local';


SIGCNT_ULS_U08 = DataDict.ConfigParam;
SIGCNT_ULS_U08.LongName = 'Signal Count';
SIGCNT_ULS_U08.Description = [...
  'Maximum of signals available for which state of health signal statisti' ...
  'c data to be computed and stored'];
SIGCNT_ULS_U08.IsBuildPrm = false;
SIGCNT_ULS_U08.DocUnits = 'Uls';
SIGCNT_ULS_U08.EngDT = dt.u08;
SIGCNT_ULS_U08.EngVal = 22;
SIGCNT_ULS_U08.EngMin = 0;
SIGCNT_ULS_U08.EngMax = 31;
SIGCNT_ULS_U08.Define = 'Local';


STHLTHMAXVAL_CNT_U08 = DataDict.Constant;
STHLTHMAXVAL_CNT_U08.LongName = 'State health Maximum Value';
STHLTHMAXVAL_CNT_U08.Description = [...
  'State Helath Signal Constant Value 100'];
STHLTHMAXVAL_CNT_U08.DocUnits = 'Cnt';
STHLTHMAXVAL_CNT_U08.EngDT = dt.u08;
STHLTHMAXVAL_CNT_U08.EngVal = 100;
STHLTHMAXVAL_CNT_U08.Define = 'Local';


STHLTHOSAPPL_CNT_U16 = DataDict.ConfigParam;
STHLTHOSAPPL_CNT_U16.LongName = 'State health OS Application Count';
STHLTHOSAPPL_CNT_U16.Description = 'State health OS Application Count ';
STHLTHOSAPPL_CNT_U16.IsBuildPrm = false;
STHLTHOSAPPL_CNT_U16.DocUnits = 'Cnt';
STHLTHOSAPPL_CNT_U16.EngDT = dt.u16;
STHLTHOSAPPL_CNT_U16.EngVal = 0;
STHLTHOSAPPL_CNT_U16.EngMin = 0;
STHLTHOSAPPL_CNT_U16.EngMax = 65535;
STHLTHOSAPPL_CNT_U16.Define = 'Local';


TOTBUFSIZENVM_CNT_U16 = DataDict.ConfigParam;
TOTBUFSIZENVM_CNT_U16.LongName = 'Total NVM buffer Size';
TOTBUFSIZENVM_CNT_U16.Description = 'Total NVM buffer Size';
TOTBUFSIZENVM_CNT_U16.IsBuildPrm = false;
TOTBUFSIZENVM_CNT_U16.DocUnits = 'Cnt';
TOTBUFSIZENVM_CNT_U16.EngDT = dt.u16;
TOTBUFSIZENVM_CNT_U16.EngVal = 225;
TOTBUFSIZENVM_CNT_U16.EngMin = 0;
TOTBUFSIZENVM_CNT_U16.EngMax = 65535;
TOTBUFSIZENVM_CNT_U16.Define = 'Local';


TOTBUFSIZERAM_CNT_U08 = DataDict.ConfigParam;
TOTBUFSIZERAM_CNT_U08.LongName = 'Total Buffer Size Ram';
TOTBUFSIZERAM_CNT_U08.Description = [...
  'Total Number of bytes required for buffer per signal'];
TOTBUFSIZERAM_CNT_U08.IsBuildPrm = false;
TOTBUFSIZERAM_CNT_U08.DocUnits = 'Cnt';
TOTBUFSIZERAM_CNT_U08.EngDT = dt.u08;
TOTBUFSIZERAM_CNT_U08.EngVal = 80;
TOTBUFSIZERAM_CNT_U08.EngMin = 0;
TOTBUFSIZERAM_CNT_U08.EngMax = 255;
TOTBUFSIZERAM_CNT_U08.Define = 'Local';


WORDSIZE_CNT_U08 = DataDict.Constant;
WORDSIZE_CNT_U08.LongName = 'Word Size';
WORDSIZE_CNT_U08.Description = [...
  'State Helath Signal Constant Value 4'];
WORDSIZE_CNT_U08.DocUnits = 'Cnt';
WORDSIZE_CNT_U08.EngDT = dt.u08;
WORDSIZE_CNT_U08.EngVal = 4;
WORDSIZE_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
