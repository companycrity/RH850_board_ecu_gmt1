%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 24-Mar-2015 17:51:43       %
%                                  Created with tool release: 2.5.0      %
%%-----------------------------------------------------------------------%

ES101A = DataDict.FDD;
ES101A.Version = '1.2.X';
ES101A.LongName = 'Diagnostic Manager';
ES101A.ShoName  = 'DiagcMgr';
ES101A.DesignASIL = 'D';
ES101A.Description = [...
  'This function is responsible for handling all the NTCs that are used b' ...
  'y different FDDs. The Diagnostic Manager sets the NTC called by any co' ...
  'mponent and requests the system to either ramp down to Disable or take' ...
  ' no action'];
ES101A.Ntc = {};
ES101A.Dependencies = ...
            {'AR200A',{'E_OK','E_NOT_OK'}};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DiagcMgrInit1 = DataDict.Runnable;
DiagcMgrInit1.TimeStep = 0;

DiagcMgrPer1 = DataDict.Runnable;
DiagcMgrPer1.TimeStep = 0.002;

GetNtcActv = DataDict.SrvRunnable;
GetNtcActv.Context = 'Both';
GetNtcActv.Return = 'Standard';
GetNtcActv.Arguments(1) = DataDict.CSArguments;
GetNtcActv.Arguments(1).Name = 'NtcNr';
GetNtcActv.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcActv.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcActv.Arguments(1).EngDT = enum.NtcNr1;
GetNtcActv.Arguments(1).Units = 'Cnt';
GetNtcActv.Arguments(1).Direction = 'In';
GetNtcActv.Arguments(2) = DataDict.CSArguments;
GetNtcActv.Arguments(2).Name = 'NtcActv';
GetNtcActv.Arguments(2).EngMin = 0;
GetNtcActv.Arguments(2).EngMax = 1;
GetNtcActv.Arguments(2).EngDT = dt.lgc;
GetNtcActv.Arguments(2).Units = 'Cnt';
GetNtcActv.Arguments(2).Direction = 'Out';

GetNtcQlfrSts = DataDict.SrvRunnable;
GetNtcQlfrSts.Context = 'Both';
GetNtcQlfrSts.Return = 'Standard';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';


GetNtcSts = DataDict.SrvRunnable;
GetNtcSts.Context = 'Both';
GetNtcSts.Return = 'Standard';
GetNtcSts.Arguments(1) = DataDict.CSArguments;
GetNtcSts.Arguments(1).Name = 'NtcNr';
GetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcSts.Arguments(1).Units = 'Cnt';
GetNtcSts.Arguments(1).Direction = 'In';
GetNtcSts.Arguments(2) = DataDict.CSArguments;
GetNtcSts.Arguments(2).Name = 'NtcInfoSts';
GetNtcSts.Arguments(2).EngMin = 0;
GetNtcSts.Arguments(2).EngMax = 255;
GetNtcSts.Arguments(2).EngDT = dt.b08;
GetNtcSts.Arguments(2).Units = 'Cnt';
GetNtcSts.Arguments(2).Direction = 'Out';

% This server runnable has to be updated to assign the argument as as array
% of structures. Structure: NtcFltInfoRec1
ReadNtcFltAry = DataDict.SrvRunnable;
ReadNtcFltAry.Context = 'Rte';
ReadNtcFltAry.Return = 'Standard';
ReadNtcFltAry.Arguments(1) = DataDict.CSArguments;
ReadNtcFltAry.Arguments(1).Name = 'DiagcMgrNtcFltAry';
ReadNtcFltAry.Arguments(1).EngMin = -3.402823466e+38;
ReadNtcFltAry.Arguments(1).EngMax = 3.402823466e+38;
ReadNtcFltAry.Arguments(1).EngDT = dt.float32;
ReadNtcFltAry.Arguments(1).Units = 'Cnt';
ReadNtcFltAry.Arguments(1).Direction = 'Out';

SetNtcSts = DataDict.SrvRunnable;
SetNtcSts.Context = 'Both';
SetNtcSts.Return = 'Standard';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DiagcStsIvtr1Inactv = DataDict.OpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = 'Inverter 1 inactive flag';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.SwcShoName = 'DiagcMgr';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.TestTolerance = 0;
DiagcStsIvtr1Inactv.WrittenIn = {'DiagcMgrPer1'};
DiagcStsIvtr1Inactv.WriteType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.OpSignal;
DiagcStsIvtr2Inactv.LongName = 'Diagnostic Status Inverter 2 Inactive';
DiagcStsIvtr2Inactv.Description = 'Inverter 2 Inactive flag';
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.SwcShoName = 'DiagcMgr';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.TestTolerance = 0;
DiagcStsIvtr2Inactv.WrittenIn = {'DiagcMgrPer1'};
DiagcStsIvtr2Inactv.WriteType = 'Rte';


DiagcStsLimtdTPrfmnc = DataDict.OpSignal;
DiagcStsLimtdTPrfmnc.LongName = 'Diagnostic Status Limited Temperature Performance';
DiagcStsLimtdTPrfmnc.Description = [...
  'Flag that indicates the connected components to use the Default Temper' ...
  'ature value'];
DiagcStsLimtdTPrfmnc.DocUnits = 'Cnt';
DiagcStsLimtdTPrfmnc.SwcShoName = 'DiagcMgr';
DiagcStsLimtdTPrfmnc.EngDT = dt.lgc;
DiagcStsLimtdTPrfmnc.EngInit = 0;
DiagcStsLimtdTPrfmnc.EngMin = 0;
DiagcStsLimtdTPrfmnc.EngMax = 1;
DiagcStsLimtdTPrfmnc.TestTolerance = 0;
DiagcStsLimtdTPrfmnc.WrittenIn = {'DiagcMgrPer1'};
DiagcStsLimtdTPrfmnc.WriteType = 'Rte';


SysDiMotTqCmdRampRate = DataDict.OpSignal;
SysDiMotTqCmdRampRate.LongName = 'System Disable Motor Torque Command Ramp Rate';
SysDiMotTqCmdRampRate.Description = ...
  'Rate at which the system ramps down to Zero';
SysDiMotTqCmdRampRate.DocUnits = 'UlsPerSec';
SysDiMotTqCmdRampRate.SwcShoName = 'DiagcMgr';
SysDiMotTqCmdRampRate.EngDT = dt.float32;
SysDiMotTqCmdRampRate.EngInit = 0.1;
SysDiMotTqCmdRampRate.EngMin = 0.1;
SysDiMotTqCmdRampRate.EngMax = 500;
SysDiMotTqCmdRampRate.TestTolerance = 0.002;
SysDiMotTqCmdRampRate.WrittenIn = {'DiagcMgrPer1'};
SysDiMotTqCmdRampRate.WriteType = 'Rte';


SysDiMotTqCmdSca = DataDict.OpSignal;
SysDiMotTqCmdSca.LongName = 'System Disable Motor Torque Command Scale';
SysDiMotTqCmdSca.Description = [...
  'Ramp down value to which the System shall be scaled down to after an N' ...
  'TC has been set'];
SysDiMotTqCmdSca.DocUnits = 'Uls';
SysDiMotTqCmdSca.SwcShoName = 'DiagcMgr';
SysDiMotTqCmdSca.EngDT = dt.float32;
SysDiMotTqCmdSca.EngInit = 1;
SysDiMotTqCmdSca.EngMin = 0;
SysDiMotTqCmdSca.EngMax = 1;
SysDiMotTqCmdSca.TestTolerance = 0.001;
SysDiMotTqCmdSca.WrittenIn = {'DiagcMgrPer1'};
SysDiMotTqCmdSca.WriteType = 'Rte';


SysStFltOutpReqDi = DataDict.OpSignal;
SysStFltOutpReqDi.LongName = 'System State Fault Output Request Disable';
SysStFltOutpReqDi.Description = [...
  'Logical output which indicates that a fault has occured that is rampin' ...
  'g the system dowm to Zero (or Disable)'];
SysStFltOutpReqDi.DocUnits = 'Cnt';
SysStFltOutpReqDi.SwcShoName = 'DiagcMgr';
SysStFltOutpReqDi.EngDT = dt.lgc;
SysStFltOutpReqDi.EngInit = 0;
SysStFltOutpReqDi.EngMin = 0;
SysStFltOutpReqDi.EngMax = 1;
SysStFltOutpReqDi.TestTolerance = 0;
SysStFltOutpReqDi.WrittenIn = {'DiagcMgrPer1'};
SysStFltOutpReqDi.WriteType = 'Rte';


%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
ActvMotTqCmdRampRate = DataDict.IRV;
ActvMotTqCmdRampRate.LongName = 'Active Ramp Rate';
ActvMotTqCmdRampRate.Description = ...
  'Rate at which the system ramps down to Zero';
ActvMotTqCmdRampRate.DocUnits = 'UlsPerSec';
ActvMotTqCmdRampRate.EngDT = dt.float32;
ActvMotTqCmdRampRate.EngInit = 0.1;
ActvMotTqCmdRampRate.EngMin = 0.1;
ActvMotTqCmdRampRate.EngMax = 500;
ActvMotTqCmdRampRate.ReadIn = {'DiagcMgrPer1'};
ActvMotTqCmdRampRate.WrittenIn = {'SetNtcSts'};


ActvMotTqCmdSca = DataDict.IRV;
ActvMotTqCmdSca.LongName = 'Active Motor Torque Command Scale';
ActvMotTqCmdSca.Description = [...
  'Ramp down value to which the System shall be scaled down to after an N' ...
  'TC has been set'];
ActvMotTqCmdSca.DocUnits = 'Uls';
ActvMotTqCmdSca.EngDT = dt.float32;
ActvMotTqCmdSca.EngInit = 1;
ActvMotTqCmdSca.EngMin = 0;
ActvMotTqCmdSca.EngMax = 1;
ActvMotTqCmdSca.ReadIn = {'DiagcMgrPer1'};
ActvMotTqCmdSca.WrittenIn = {'SetNtcSts'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DiagcMgrFltResp = DataDict.Calibration;
DiagcMgrFltResp.LongName = 'Fault Response';
DiagcMgrFltResp.Description = [...
  'Table of 512 elements that each NTC is mapped to which contains the bits that are resp' ...
  'onsible for driving the output response'];
DiagcMgrFltResp.DocUnits = 'Cnt';
DiagcMgrFltResp.EngDT = dt.b32;
DiagcMgrFltResp.EngVal =  ...
   [0                      2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488  ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488 ...
    2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488             2147487488];
DiagcMgrFltResp.EngMin = 0;
DiagcMgrFltResp.EngMax = 4294967295;
DiagcMgrFltResp.ProgrammedBy = 'Nexteer';
DiagcMgrFltResp.Cardinality = 'N';
DiagcMgrFltResp.CustomerVisible = false;
DiagcMgrFltResp.Online = false;
DiagcMgrFltResp.Impact = 'H';
DiagcMgrFltResp.SafetyRating = 'D';
DiagcMgrFltResp.TuningOwner = 'EPDT';
DiagcMgrFltResp.GraphLink = '';
DiagcMgrFltResp.Monotony = 'None';
DiagcMgrFltResp.MaxGrad = 4294967295;
DiagcMgrFltResp.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------


%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DiagcMgrDiagcSts = DataDict.PIM;
DiagcMgrDiagcSts.LongName = 'Diagnostic Manager Diagnostic Status';
DiagcMgrDiagcSts.Description = ...
  'Word that stores the Output Response';
DiagcMgrDiagcSts.DocUnits = 'Cnt';
DiagcMgrDiagcSts.EngDT = dt.b16;
DiagcMgrDiagcSts.EngInit = 0;
DiagcMgrDiagcSts.EngMin = 0;
DiagcMgrDiagcSts.EngMax = 65535;

% This PIM has to be updated to assign the Data Type as an array
% of structures with 20 array elements. Structure: NtcFltInfoRec1
DiagcMgrNtcFltAry = DataDict.PIM;
DiagcMgrNtcFltAry.LongName = 'Diagnostic Manager NTC Fault Array';
DiagcMgrNtcFltAry.Description = 'Contains information of 20 most recent NTCs that are set in an ignition cycle';
DiagcMgrNtcFltAry.DocUnits = 'Cnt';
DiagcMgrNtcFltAry.EngDT = dt.u08;
DiagcMgrNtcFltAry.EngInit = [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];
DiagcMgrNtcFltAry.EngMin = 0;
DiagcMgrNtcFltAry.EngMax = 255;

% This PIM has to be updated to assign the Data Type as an array
% of structures with 512 array elements. Structure: NtcInfoRec1
DiagcMgrNtcInfo = DataDict.PIM;
DiagcMgrNtcInfo.LongName = 'NTC Information';
DiagcMgrNtcInfo.Description = 'Array of Structure of NtcInfo';
DiagcMgrNtcInfo.DocUnits = 'Cnt';
DiagcMgrNtcInfo.EngDT = dt.u08;
DiagcMgrNtcInfo.EngInit =  ...
   [0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0 ...
    0             0             0             0             0             0             0             0];
DiagcMgrNtcInfo.EngMin = 0;
DiagcMgrNtcInfo.EngMax = 255;



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DFTAGICNTR_CNT_U08 = DataDict.Constant;
DFTAGICNTR_CNT_U08.LongName = 'Default Aging Counter';
DFTAGICNTR_CNT_U08.Description =  ...
  'Hex:0xFF. Default value of aging counter at initialization';
DFTAGICNTR_CNT_U08.DocUnits = 'Cnt';
DFTAGICNTR_CNT_U08.EngDT = dt.u08;
DFTAGICNTR_CNT_U08.EngVal = 255;


DIAGCSTSIVTR1INACTV_CNT_U16 = DataDict.Constant;
DIAGCSTSIVTR1INACTV_CNT_U16.LongName = 'Diagnostc Status Inverter 1 Inactive';
DIAGCSTSIVTR1INACTV_CNT_U16.Description = [...
  'Hex:0x1000. Bit Mask to access the "Inverter 1 Inactive" bit in Diagnostic Status ' ...
  'Word'];
DIAGCSTSIVTR1INACTV_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSIVTR1INACTV_CNT_U16.EngDT = dt.b16;
DIAGCSTSIVTR1INACTV_CNT_U16.EngVal = 4096;


DIAGCSTSIVTR2INACTV_CNT_U16 = DataDict.Constant;
DIAGCSTSIVTR2INACTV_CNT_U16.LongName = 'Diagnostc Status Inverter 2 Inactive';
DIAGCSTSIVTR2INACTV_CNT_U16.Description = [...
  'Hex:0x800. Bit Mask to access the "Inverter 2 Inactive" bit in Diagnostic Status ' ...
  'Word'];
DIAGCSTSIVTR2INACTV_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSIVTR2INACTV_CNT_U16.EngDT = dt.b16;
DIAGCSTSIVTR2INACTV_CNT_U16.EngVal = 2048;


DIAGCSTSLIMDTPRFMNC_CNT_U16 = DataDict.Constant;
DIAGCSTSLIMDTPRFMNC_CNT_U16.LongName = 'Diagnostic Status Limited Temperature Performance';
DIAGCSTSLIMDTPRFMNC_CNT_U16.Description = [...
  'Hex:0x8000. Bit Mask to access the "Limited Temperature Performance" bit in Diagno' ...
  'stic Status Word'];
DIAGCSTSLIMDTPRFMNC_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSLIMDTPRFMNC_CNT_U16.EngDT = dt.b16;
DIAGCSTSLIMDTPRFMNC_CNT_U16.EngVal = 32768;

DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16 = DataDict.Constant;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.LongName = 'Diagnostic Status Ramp to Zero Fault Present';
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.Description = [...
  'Hex:0x4000. Bit Mask to access the "Ramp to Zero Fault Present" bit in Diagno' ...
  'stic Status Word'];
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.DocUnits = 'Cnt';
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.EngDT = dt.b16;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16.EngVal = 16384;

FLTRESPIVTR1INACTV_CNT_U32 = DataDict.Constant;
FLTRESPIVTR1INACTV_CNT_U32.LongName = 'Fault Response Inverter 1 Inactive';
FLTRESPIVTR1INACTV_CNT_U32.Description = [...
  'Hex: 0x8000. Bit Mask to access the "Inverter 1 Inactive" bit in Fault Response Tab' ...
  'le'];
FLTRESPIVTR1INACTV_CNT_U32.DocUnits = 'Cnt';
FLTRESPIVTR1INACTV_CNT_U32.EngDT = dt.b32;
FLTRESPIVTR1INACTV_CNT_U32.EngVal = 32768;


FLTRESPIVTR2INACTV_CNT_U32 = DataDict.Constant;
FLTRESPIVTR2INACTV_CNT_U32.LongName = 'Fault Response Inverter 2 Inactive';
FLTRESPIVTR2INACTV_CNT_U32.Description = [...
  'Hex: 0x10000. Bit Mask to access the "Inverter 2 Inactive" bit in Fault Response Tab' ...
  'le'];
FLTRESPIVTR2INACTV_CNT_U32.DocUnits = 'Cnt';
FLTRESPIVTR2INACTV_CNT_U32.EngDT = dt.b32;
FLTRESPIVTR2INACTV_CNT_U32.EngVal = 65536;


FLTRESPLIMDTPRFMNC_CNT_U32 = DataDict.Constant;
FLTRESPLIMDTPRFMNC_CNT_U32.LongName = 'Fault Response Limited Temperature Performance';
FLTRESPLIMDTPRFMNC_CNT_U32.Description = [...
  'Hex: 0x8000000. Bit Mask to access the "Limited Temperature Performance" bit in Fault ' ...
  'Response Table'];
FLTRESPLIMDTPRFMNC_CNT_U32.DocUnits = 'Cnt';
FLTRESPLIMDTPRFMNC_CNT_U32.EngDT = dt.b32;
FLTRESPLIMDTPRFMNC_CNT_U32.EngVal = 134217728;


FLTRESPNTCENAD_CNT_U32 = DataDict.Constant;
FLTRESPNTCENAD_CNT_U32.LongName = 'Fault Response NTC Enabled';
FLTRESPNTCENAD_CNT_U32.Description = ...
  'Hex: 0x80000000. Bit Mask to access the "NTC Enabled" bit in Fault Response Table';
FLTRESPNTCENAD_CNT_U32.DocUnits = 'Cnt';
FLTRESPNTCENAD_CNT_U32.EngDT = dt.b32;
FLTRESPNTCENAD_CNT_U32.EngVal = 2147483648;


FLTRESPRAMPBITS_CNT_U32 = DataDict.Constant;
FLTRESPRAMPBITS_CNT_U32.LongName = 'Fault Response Ramp Bits';
FLTRESPRAMPBITS_CNT_U32.Description = ...
  'Hex: 0xF00. Bit Mask to access the "Ramp Bits" bit in Fault Response Table';
FLTRESPRAMPBITS_CNT_U32.DocUnits = 'Cnt';
FLTRESPRAMPBITS_CNT_U32.EngDT = dt.b32;
FLTRESPRAMPBITS_CNT_U32.EngVal = 3840;


MAXRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MAXRAMPRATE_ULSPERSEC_F32.LongName = 'Maximum Ramp Rate';
MAXRAMPRATE_ULSPERSEC_F32.Description = ...
  'Maximum Ramp Rate at which the system goes to shutdown';
MAXRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MAXRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MAXRAMPRATE_ULSPERSEC_F32.EngVal = 500;


DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.LongName = 'NTC Info Status Fault Set This Ignition Cycle';
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.Description = ...
  'Hex: 0x02. Bit Mask to access the "Recoverable Fault" bit in NTC Status Byte';
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.EngDT = dt.b08;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.EngVal = 2;


DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.LongName = 'NTC Info Status Fault Set';
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.Description = ...
  'Hex: 0x01. Bit Mask to access the "Recoverable Fault" bit in NTC Status Byte';
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.EngDT = dt.b08;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.EngVal = 1;


DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.LongName = 'NTC Info Status Test not Complete This Ignition Cycle';
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.Description = ...
  'Hex: 0x40. Bit Mask to access the "Recoverable Fault" bit in NTC Status Byte';
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.EngDT = dt.b08;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.EngVal = 64;


SCAMOTTQCMDTOZERO_CNT_F32 = DataDict.Constant;
SCAMOTTQCMDTOZERO_CNT_F32.LongName = 'Scale Motor Torque Command to Zero';
SCAMOTTQCMDTOZERO_CNT_F32.Description = 'Scale Motor Torque Command to Zero when an F1 fault is set';
SCAMOTTQCMDTOZERO_CNT_F32.DocUnits = 'Uls';
SCAMOTTQCMDTOZERO_CNT_F32.EngDT = dt.float32;
SCAMOTTQCMDTOZERO_CNT_F32.EngVal = 0;

%end of Data Dictionary