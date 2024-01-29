%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 08-Mar-2016 18:27:00       %
%                                  Created with tool release: 2.34.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: Praveen(KPIT)             %
%%-----------------------------------------------------------------------%

CM640A = DataDict.FDD;
CM640A.Version = '2.5.X';
CM640A.LongName = 'Motor Angle 1 Measurement';
CM640A.ShoName  = 'MotAg1Meas';
CM640A.DesignASIL = 'D';
CM640A.Description = [...
  'Measurement function of Motor Angle 1.  This function includes configu' ...
  'ration and use of the CSIH1 peripheral'];
CM640A.Dependencies = ...
	{'ARCHGLBPRM'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAg1MeasInit1 = DataDict.Runnable;
MotAg1MeasInit1.Context = 'Rte';
MotAg1MeasInit1.TimeStep = 0;

MotAg1MeasPer1 = DataDict.Runnable;
MotAg1MeasPer1.Context = 'Rte';
MotAg1MeasPer1.TimeStep = 'MotorControl';

MotAg1MeasPer2 = DataDict.Runnable;
MotAg1MeasPer2.Context = 'Rte';
MotAg1MeasPer2.TimeStep = 0.002;

MotAg1MeasMotAg1CoeffTblRead = DataDict.SrvRunnable;
MotAg1MeasMotAg1CoeffTblRead.Context = 'Rte';
MotAg1MeasMotAg1CoeffTblRead.Return = DataDict.CSReturn;
MotAg1MeasMotAg1CoeffTblRead.Return.Type = 'None';
MotAg1MeasMotAg1CoeffTblRead.Return.Min = [];
MotAg1MeasMotAg1CoeffTblRead.Return.Max = [];
MotAg1MeasMotAg1CoeffTblRead.Return.TestTolerance = [];
MotAg1MeasMotAg1CoeffTblRead.Arguments(1) = DataDict.CSArguments;
MotAg1MeasMotAg1CoeffTblRead.Arguments(1).Name = 'MotAgCoeffTbl';
MotAg1MeasMotAg1CoeffTblRead.Arguments(1).EngMin = -0.03100585937;
MotAg1MeasMotAg1CoeffTblRead.Arguments(1).EngMax = 0.03100585937;
MotAg1MeasMotAg1CoeffTblRead.Arguments(1).EngDT = dt.float32;
MotAg1MeasMotAg1CoeffTblRead.Arguments(1).Units = 'Uls';
MotAg1MeasMotAg1CoeffTblRead.Arguments(1).Direction = 'Out';
MotAg1MeasMotAg1CoeffTblRead.Arguments(1).InitRowCol = [26   1];

MotAg1MeasMotAg1CoeffTblWr = DataDict.SrvRunnable;
MotAg1MeasMotAg1CoeffTblWr.Context = 'Rte';
MotAg1MeasMotAg1CoeffTblWr.Return = DataDict.CSReturn;
MotAg1MeasMotAg1CoeffTblWr.Return.Type = 'None';
MotAg1MeasMotAg1CoeffTblWr.Return.Min = [];
MotAg1MeasMotAg1CoeffTblWr.Return.Max = [];
MotAg1MeasMotAg1CoeffTblWr.Return.TestTolerance = [];
MotAg1MeasMotAg1CoeffTblWr.Arguments(1) = DataDict.CSArguments;
MotAg1MeasMotAg1CoeffTblWr.Arguments(1).Name = 'MotAgCoeffTbl';
MotAg1MeasMotAg1CoeffTblWr.Arguments(1).EngMin = -0.03100585937;
MotAg1MeasMotAg1CoeffTblWr.Arguments(1).EngMax = 0.03100585937;
MotAg1MeasMotAg1CoeffTblWr.Arguments(1).EngDT = dt.float32;
MotAg1MeasMotAg1CoeffTblWr.Arguments(1).Units = 'Uls';
MotAg1MeasMotAg1CoeffTblWr.Arguments(1).Direction = 'In';
MotAg1MeasMotAg1CoeffTblWr.Arguments(1).InitRowCol = [26   1];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'MotAg1MeasPer2'};
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
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


MotAg1CoeffTbl_GetErrorStatus = DataDict.Client;
MotAg1CoeffTbl_GetErrorStatus.CallLocation = {'MotAg1MeasInit1'};
MotAg1CoeffTbl_GetErrorStatus.Return = DataDict.CSReturn;
MotAg1CoeffTbl_GetErrorStatus.Return.Type = 'Standard';
MotAg1CoeffTbl_GetErrorStatus.Return.Min = 0;
MotAg1CoeffTbl_GetErrorStatus.Return.Max = 1;
MotAg1CoeffTbl_GetErrorStatus.Return.TestTolerance = [];
MotAg1CoeffTbl_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotAg1CoeffTbl_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MotAg1CoeffTbl_GetErrorStatus.Arguments(1).EngMin = 0;
MotAg1CoeffTbl_GetErrorStatus.Arguments(1).EngMax = 255;
MotAg1CoeffTbl_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotAg1CoeffTbl_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotAg1CoeffTbl_GetErrorStatus.Arguments(1).Direction = 'Out';
MotAg1CoeffTbl_GetErrorStatus.Arguments(1).InitRowCol = [1  1];


MotAg1CoeffTbl_SetRamBlockStatus = DataDict.Client;
MotAg1CoeffTbl_SetRamBlockStatus.CallLocation = {'MotAg1MeasMotAg1CoeffTblWr'};
MotAg1CoeffTbl_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAg1CoeffTbl_SetRamBlockStatus.Return.Type = 'Standard';
MotAg1CoeffTbl_SetRamBlockStatus.Return.Min = 0;
MotAg1CoeffTbl_SetRamBlockStatus.Return.Max = 1;
MotAg1CoeffTbl_SetRamBlockStatus.Return.TestTolerance = 0;
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAg1CoeffTbl_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'MotAg1MeasPer2'};
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
MotAg1ErrReg = DataDict.IpSignal;
MotAg1ErrReg.LongName = 'Motor Angle 1 Error Register';
MotAg1ErrReg.DocUnits = 'Cnt';
MotAg1ErrReg.EngDT = dt.u32;
MotAg1ErrReg.EngInit = 0;
MotAg1ErrReg.EngMin = 0;
MotAg1ErrReg.EngMax = 67108863;
MotAg1ErrReg.ReadIn = {'MotAg1MeasPer2'};
MotAg1ErrReg.ReadType = 'Rte';


MotAg1ParFltCnt = DataDict.IpSignal;
MotAg1ParFltCnt.LongName = 'Motor Angle 1 Parity Fault Count';
MotAg1ParFltCnt.DocUnits = 'Cnt';
MotAg1ParFltCnt.EngDT = dt.u16;
MotAg1ParFltCnt.EngInit = 0;
MotAg1ParFltCnt.EngMin = 0;
MotAg1ParFltCnt.EngMax = 65535;
MotAg1ParFltCnt.ReadIn = {'MotAg1MeasPer2'};
MotAg1ParFltCnt.ReadType = 'Rte';


MotAg1VltgFltCnt = DataDict.IpSignal;
MotAg1VltgFltCnt.LongName = 'Motor Angle 1 Voltage Fault Count';
MotAg1VltgFltCnt.DocUnits = 'Cnt';
MotAg1VltgFltCnt.EngDT = dt.u16;
MotAg1VltgFltCnt.EngInit = 0;
MotAg1VltgFltCnt.EngMin = 0;
MotAg1VltgFltCnt.EngMax = 65535;
MotAg1VltgFltCnt.ReadIn = {'MotAg1MeasPer2'};
MotAg1VltgFltCnt.ReadType = 'Rte';


MotCtrlMotAg1RawRes = DataDict.IpSignal;
MotCtrlMotAg1RawRes.LongName = 'Motor Angle Sensor 0 Raw Results';
MotCtrlMotAg1RawRes.DocUnits = 'Cnt';
MotCtrlMotAg1RawRes.EngDT = dt.u32;
MotCtrlMotAg1RawRes.EngInit =  ...
   [0                0                0];
MotCtrlMotAg1RawRes.EngMin = 0;
MotCtrlMotAg1RawRes.EngMax = 67108863;
MotCtrlMotAg1RawRes.ReadIn = {'MotAg1MeasPer1'};
MotCtrlMotAg1RawRes.ReadType = 'NonRte';


MotCtrlMotAgMecl1Polarity = DataDict.IpSignal;
MotCtrlMotAgMecl1Polarity.LongName = 'Motor Position Sensor 1 Measurement Polarity Configuration';
MotCtrlMotAgMecl1Polarity.DocUnits = 'Uls';
MotCtrlMotAgMecl1Polarity.EngDT = dt.s08;
MotCtrlMotAgMecl1Polarity.EngInit = 1;
MotCtrlMotAgMecl1Polarity.EngMin = -1;
MotCtrlMotAgMecl1Polarity.EngMax = 1;
MotCtrlMotAgMecl1Polarity.ReadIn = {'MotAg1MeasPer1'};
MotCtrlMotAgMecl1Polarity.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DmaMotAg1RawData = DataDict.OpSignal;
DmaMotAg1RawData.LongName = 'DMA Motor Angle 1 Raw Data';
DmaMotAg1RawData.Description = [...
  'Signal used to fire DMA to read SPI data'];
DmaMotAg1RawData.DocUnits = 'Volt';
DmaMotAg1RawData.SwcShoName = 'MotAg1Meas';
DmaMotAg1RawData.EngDT = dt.u08;
DmaMotAg1RawData.EngInit = 0;
DmaMotAg1RawData.EngMin = 0;
DmaMotAg1RawData.EngMax = 3;
DmaMotAg1RawData.TestTolerance = 0;
DmaMotAg1RawData.WrittenIn = {'MotAg1MeasPer1'};
DmaMotAg1RawData.WriteType = 'Phy';


MotAg1MeclQlfr = DataDict.OpSignal;
MotAg1MeclQlfr.LongName = 'Motor Angle 1 Mechanical Qualifier';
MotAg1MeclQlfr.Description = 'Qualifer output of motor Angle 1';
MotAg1MeclQlfr.DocUnits = 'Cnt';
MotAg1MeclQlfr.SwcShoName = 'MotAg1Meas';
MotAg1MeclQlfr.EngDT = enum.SigQlfr1;
MotAg1MeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotAg1MeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotAg1MeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotAg1MeclQlfr.TestTolerance = 0;
MotAg1MeclQlfr.WrittenIn = {'MotAg1MeasPer2'};
MotAg1MeclQlfr.WriteType = 'Rte';


MotCtrlMotAg1ErrReg = DataDict.OpSignal;
MotCtrlMotAg1ErrReg.LongName = 'Motor Angle 1 Error Register';
MotCtrlMotAg1ErrReg.Description = [...
  'Motor Angle 1 Error Register reading'];
MotCtrlMotAg1ErrReg.DocUnits = 'Cnt';
MotCtrlMotAg1ErrReg.SwcShoName = 'MotAg1Meas';
MotCtrlMotAg1ErrReg.EngDT = dt.u32;
MotCtrlMotAg1ErrReg.EngInit = 0;
MotCtrlMotAg1ErrReg.EngMin = 0;
MotCtrlMotAg1ErrReg.EngMax = 67108863;
MotCtrlMotAg1ErrReg.TestTolerance = 0;
MotCtrlMotAg1ErrReg.WrittenIn = {'MotAg1MeasPer1'};
MotCtrlMotAg1ErrReg.WriteType = 'NonRte';


MotCtrlMotAg1Mecl = DataDict.OpSignal;
MotCtrlMotAg1Mecl.LongName = 'Motor Angle 1 Mechanical';
MotCtrlMotAg1Mecl.Description = 'Motor Angle 1, in mechanical units';
MotCtrlMotAg1Mecl.DocUnits = 'MotRev';
MotCtrlMotAg1Mecl.SwcShoName = 'MotAg1Meas';
MotCtrlMotAg1Mecl.EngDT = dt.u0p16;
MotCtrlMotAg1Mecl.EngInit = 0;
MotCtrlMotAg1Mecl.EngMin = 0;
MotCtrlMotAg1Mecl.EngMax = 0.9999847412;
MotCtrlMotAg1Mecl.TestTolerance = 1.525878906e-05;
MotCtrlMotAg1Mecl.WrittenIn = {'MotAg1MeasPer1'};
MotCtrlMotAg1Mecl.WriteType = 'NonRte';


MotCtrlMotAg1MeclRollgCntr = DataDict.OpSignal;
MotCtrlMotAg1MeclRollgCntr.LongName = 'Motor Angle 1 Rolling Counter';
MotCtrlMotAg1MeclRollgCntr.Description = [...
  'Rolling counter of Motor Angle 1, indicating protocol status of angle ' ...
  'measurement.'];
MotCtrlMotAg1MeclRollgCntr.DocUnits = 'Cnt';
MotCtrlMotAg1MeclRollgCntr.SwcShoName = 'MotAg1Meas';
MotCtrlMotAg1MeclRollgCntr.EngDT = dt.u08;
MotCtrlMotAg1MeclRollgCntr.EngInit = 0;
MotCtrlMotAg1MeclRollgCntr.EngMin = 0;
MotCtrlMotAg1MeclRollgCntr.EngMax = 255;
MotCtrlMotAg1MeclRollgCntr.TestTolerance = 0;
MotCtrlMotAg1MeclRollgCntr.WrittenIn = {'MotAg1MeasPer1'};
MotCtrlMotAg1MeclRollgCntr.WriteType = 'NonRte';


MotCtrlMotAg1ParFltCnt = DataDict.OpSignal;
MotCtrlMotAg1ParFltCnt.LongName = 'Motor Angle 1 Parity Fault Count';
MotCtrlMotAg1ParFltCnt.Description = [...
  'A running count of the number of parity faults on the motor angle read' ...
  ''];
MotCtrlMotAg1ParFltCnt.DocUnits = 'Cnt';
MotCtrlMotAg1ParFltCnt.SwcShoName = 'MotAg1Meas';
MotCtrlMotAg1ParFltCnt.EngDT = dt.u16;
MotCtrlMotAg1ParFltCnt.EngInit = 0;
MotCtrlMotAg1ParFltCnt.EngMin = 0;
MotCtrlMotAg1ParFltCnt.EngMax = 65535;
MotCtrlMotAg1ParFltCnt.TestTolerance = 0;
MotCtrlMotAg1ParFltCnt.WrittenIn = {'MotAg1MeasPer1'};
MotCtrlMotAg1ParFltCnt.WriteType = 'NonRte';


MotCtrlMotAg1VltgFltCnt = DataDict.OpSignal;
MotCtrlMotAg1VltgFltCnt.LongName = 'Motor Angle 1 Voltage Fault Count';
MotCtrlMotAg1VltgFltCnt.Description = [...
  'A running count of the number of voltage faults'];
MotCtrlMotAg1VltgFltCnt.DocUnits = 'Cnt';
MotCtrlMotAg1VltgFltCnt.SwcShoName = 'MotAg1Meas';
MotCtrlMotAg1VltgFltCnt.EngDT = dt.u16;
MotCtrlMotAg1VltgFltCnt.EngInit = 0;
MotCtrlMotAg1VltgFltCnt.EngMin = 0;
MotCtrlMotAg1VltgFltCnt.EngMax = 65535;
MotCtrlMotAg1VltgFltCnt.TestTolerance = 0;
MotCtrlMotAg1VltgFltCnt.WrittenIn = {'MotAg1MeasPer1'};
MotCtrlMotAg1VltgFltCnt.WriteType = 'NonRte';



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
MotAg1CoeffTbl = DataDict.NVM;
MotAg1CoeffTbl.LongName = 'Motor Angle 1 Coefficient Table';
MotAg1CoeffTbl.Description = [...
  'Coefficient table for Motor Angle 0.'];
MotAg1CoeffTbl.DocUnits = 'MotRev';
MotAg1CoeffTbl.EngDT = dt.float32;
MotAg1CoeffTbl.EngInit = [];
MotAg1CoeffTbl.EngMin = -0.03100585937;
MotAg1CoeffTbl.EngMax = 0.03100585937;
MotAg1CoeffTbl.CustomerVisible = false;
MotAg1CoeffTbl.Impact = 'H';
MotAg1CoeffTbl.TuningOwner = 'EPDT';
MotAg1CoeffTbl.CoderInfo.Alias = '';
MotAg1CoeffTbl.InitRowCol = [1   26];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotAg1MeasMotAg1RawAgReg = DataDict.Display;
dMotAg1MeasMotAg1RawAgReg.LongName = 'Motor Angle 1 Raw Angle Register';
dMotAg1MeasMotAg1RawAgReg.Description = [...
  'Display variable for Motor Angle 1 Raw Angle Register'];
dMotAg1MeasMotAg1RawAgReg.DocUnits = 'Cnt';
dMotAg1MeasMotAg1RawAgReg.EngDT = dt.u32;
dMotAg1MeasMotAg1RawAgReg.EngMin = 0;
dMotAg1MeasMotAg1RawAgReg.EngMax = 67108863;
dMotAg1MeasMotAg1RawAgReg.InitRowCol = [1  1];


dMotAg1MeasMotAg1RawErrReg = DataDict.Display;
dMotAg1MeasMotAg1RawErrReg.LongName = 'Motor Angle 1 Raw Error Register';
dMotAg1MeasMotAg1RawErrReg.Description = [...
  'Display variable for Motor Angle 1 Raw Error Register'];
dMotAg1MeasMotAg1RawErrReg.DocUnits = 'Cnt';
dMotAg1MeasMotAg1RawErrReg.EngDT = dt.u32;
dMotAg1MeasMotAg1RawErrReg.EngMin = 0;
dMotAg1MeasMotAg1RawErrReg.EngMax = 67108863;
dMotAg1MeasMotAg1RawErrReg.InitRowCol = [1  1];


dMotAg1MeasMotAg1RawTurnCntrReg = DataDict.Display;
dMotAg1MeasMotAg1RawTurnCntrReg.LongName = 'Motor Angle 1 Raw Turn Counter Register';
dMotAg1MeasMotAg1RawTurnCntrReg.Description = [...
  'Display variable Motor Angle 1 Raw Turn Counter Register'];
dMotAg1MeasMotAg1RawTurnCntrReg.DocUnits = 'Cnt';
dMotAg1MeasMotAg1RawTurnCntrReg.EngDT = dt.u32;
dMotAg1MeasMotAg1RawTurnCntrReg.EngMin = 0;
dMotAg1MeasMotAg1RawTurnCntrReg.EngMax = 67108863;
dMotAg1MeasMotAg1RawTurnCntrReg.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAg1CorrnTbl = DataDict.PIM;
MotAg1CorrnTbl.LongName = 'Motor Angle 1 Correction Table';
MotAg1CorrnTbl.Description = [...
  'Correction table for Motor Angle 1.'];
MotAg1CorrnTbl.DocUnits = 'MotRev';
MotAg1CorrnTbl.EngDT = dt.sm5p12;
MotAg1CorrnTbl.EngMin = -0.03100585937;
MotAg1CorrnTbl.EngMax = 0.03100585937;
MotAg1CorrnTbl.InitRowCol = [128    1];


MotAg1ErrParFltCntPrev = DataDict.PIM;
MotAg1ErrParFltCntPrev.LongName = 'Motor Angle 1 Parity Fault Count Previous';
MotAg1ErrParFltCntPrev.Description = [...
  'Previous Motor Angle 1 Parity Fault Count'];
MotAg1ErrParFltCntPrev.DocUnits = 'Cnt';
MotAg1ErrParFltCntPrev.EngDT = dt.u16;
MotAg1ErrParFltCntPrev.EngMin = 0;
MotAg1ErrParFltCntPrev.EngMax = 65535;
MotAg1ErrParFltCntPrev.InitRowCol = [1  1];


MotAg1ErrParFltNtcStInfoCntPrev = DataDict.PIM;
MotAg1ErrParFltNtcStInfoCntPrev.LongName = 'Motor Angle 1 Parity Fault Count Previous';
MotAg1ErrParFltNtcStInfoCntPrev.Description = [...
  'Previous Motor Angle 1 Parity Fault Count'];
MotAg1ErrParFltNtcStInfoCntPrev.DocUnits = 'Cnt';
MotAg1ErrParFltNtcStInfoCntPrev.EngDT = dt.u16;
MotAg1ErrParFltNtcStInfoCntPrev.EngMin = 0;
MotAg1ErrParFltNtcStInfoCntPrev.EngMax = 65535;
MotAg1ErrParFltNtcStInfoCntPrev.InitRowCol = [1  1];


MotAg1ErrPrev = DataDict.PIM;
MotAg1ErrPrev.LongName = 'Motor Angle 1 Raw Mechanical Angle Previous';
MotAg1ErrPrev.Description = [...
  'Previous Motor Angle 1 Raw Mechanical Angle'];
MotAg1ErrPrev.DocUnits = 'Cnt';
MotAg1ErrPrev.EngDT = dt.u08;
MotAg1ErrPrev.EngMin = 0;
MotAg1ErrPrev.EngMax = 31;
MotAg1ErrPrev.InitRowCol = [1  1];


MotAg1MeclRollgCntrPrev = DataDict.PIM;
MotAg1MeclRollgCntrPrev.LongName = 'Motor Angle 1 Rolling Count Previous';
MotAg1MeclRollgCntrPrev.Description = 'Previous version of rolling count';
MotAg1MeclRollgCntrPrev.DocUnits = 'Cnt';
MotAg1MeclRollgCntrPrev.EngDT = dt.u08;
MotAg1MeclRollgCntrPrev.EngMin = 0;
MotAg1MeclRollgCntrPrev.EngMax = 255;
MotAg1MeclRollgCntrPrev.InitRowCol = [1  1];


MotAg1ParFltCntPrev = DataDict.PIM;
MotAg1ParFltCntPrev.LongName = 'Motor Angle 1 Parity Fault Count Previous';
MotAg1ParFltCntPrev.Description = [...
  'Previous Motor Angle 1 Parity Fault Count'];
MotAg1ParFltCntPrev.DocUnits = 'Cnt';
MotAg1ParFltCntPrev.EngDT = dt.u16;
MotAg1ParFltCntPrev.EngMin = 0;
MotAg1ParFltCntPrev.EngMax = 65535;
MotAg1ParFltCntPrev.InitRowCol = [1  1];


MotAg1ParFltNtcStInfoCntPrev = DataDict.PIM;
MotAg1ParFltNtcStInfoCntPrev.LongName = 'Motor Angle 1 Parity Fault Count Previous';
MotAg1ParFltNtcStInfoCntPrev.Description = [...
  'Previous Motor Angle 1 Parity Fault Count'];
MotAg1ParFltNtcStInfoCntPrev.DocUnits = 'Cnt';
MotAg1ParFltNtcStInfoCntPrev.EngDT = dt.u16;
MotAg1ParFltNtcStInfoCntPrev.EngMin = 0;
MotAg1ParFltNtcStInfoCntPrev.EngMax = 65535;
MotAg1ParFltNtcStInfoCntPrev.InitRowCol = [1  1];


MotAg1RawMeclPrev = DataDict.PIM;
MotAg1RawMeclPrev.LongName = 'Motor Angle 1 Raw Mechanical Angle Previous';
MotAg1RawMeclPrev.Description = [...
  'Previous Motor Angle 1 Raw Mechanical Angle'];
MotAg1RawMeclPrev.DocUnits = 'MotRev';
MotAg1RawMeclPrev.EngDT = dt.u0p16;
MotAg1RawMeclPrev.EngMin = 0;
MotAg1RawMeclPrev.EngMax = 0.9999847412;
MotAg1RawMeclPrev.InitRowCol = [1  1];


MotAg1VltgFltCntPrev = DataDict.PIM;
MotAg1VltgFltCntPrev.LongName = 'Motor Angle 1 Voltage Fault Count Previous';
MotAg1VltgFltCntPrev.Description = [...
  'PIM designed to track presence of voltage faults at NTC level'];
MotAg1VltgFltCntPrev.DocUnits = 'Cnt';
MotAg1VltgFltCntPrev.EngDT = dt.u16;
MotAg1VltgFltCntPrev.EngMin = 0;
MotAg1VltgFltCntPrev.EngMax = 65535;
MotAg1VltgFltCntPrev.InitRowCol = [1  1];


MotAg1VltgFltNtcStInfoCntPrev = DataDict.PIM;
MotAg1VltgFltNtcStInfoCntPrev.LongName = 'Motor Angle 1 Voltage Fault Count Previous for Ntc State Information';
MotAg1VltgFltNtcStInfoCntPrev.Description = [...
  'PIM designed to track presence of voltage faults at NTC level'];
MotAg1VltgFltNtcStInfoCntPrev.DocUnits = 'Cnt';
MotAg1VltgFltNtcStInfoCntPrev.EngDT = dt.u16;
MotAg1VltgFltNtcStInfoCntPrev.EngMin = 0;
MotAg1VltgFltNtcStInfoCntPrev.EngMax = 65535;
MotAg1VltgFltNtcStInfoCntPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


COEFFTBLELMSIZE_CNT_U08 = DataDict.Constant;
COEFFTBLELMSIZE_CNT_U08.LongName = 'Coeffecient Table Element Size';
COEFFTBLELMSIZE_CNT_U08.Description = [...
  'Number of elements in a coefficient row'];
COEFFTBLELMSIZE_CNT_U08.DocUnits = 'Cnt';
COEFFTBLELMSIZE_CNT_U08.EngDT = dt.u08;
COEFFTBLELMSIZE_CNT_U08.EngVal = 2;
COEFFTBLELMSIZE_CNT_U08.Header = '';
COEFFTBLELMSIZE_CNT_U08.Define = 'Local';


COEFFTBLSIZE_CNT_U08 = DataDict.Constant;
COEFFTBLSIZE_CNT_U08.LongName = 'Coefficient Table Size';
COEFFTBLSIZE_CNT_U08.Description = [...
  'Number of rows in the coefficient table'];
COEFFTBLSIZE_CNT_U08.DocUnits = 'Cnt';
COEFFTBLSIZE_CNT_U08.EngDT = dt.u08;
COEFFTBLSIZE_CNT_U08.EngVal = 13;
COEFFTBLSIZE_CNT_U08.Header = '';
COEFFTBLSIZE_CNT_U08.Define = 'Local';


CORRNTBLAGSTEPSIZE_MATRAD_F32 = DataDict.Constant;
CORRNTBLAGSTEPSIZE_MATRAD_F32.LongName = 'Correction Table Angle Step Size';
CORRNTBLAGSTEPSIZE_MATRAD_F32.Description = [...
  'Correction Table Angle Step Size.  .EngVal = 2 * pi / CORRNTBLSIZE_CNT' ...
  '_U16 '];
CORRNTBLAGSTEPSIZE_MATRAD_F32.DocUnits = 'MatRad';
CORRNTBLAGSTEPSIZE_MATRAD_F32.EngDT = dt.float32;
CORRNTBLAGSTEPSIZE_MATRAD_F32.EngVal = 0.04908738521;
CORRNTBLAGSTEPSIZE_MATRAD_F32.Header = 'None';
CORRNTBLAGSTEPSIZE_MATRAD_F32.Define = 'Local';


CORRNTBLSIDXOFFS_CNT_U16 = DataDict.Constant;
CORRNTBLSIDXOFFS_CNT_U16.LongName = 'Correction Table Index Offset';
CORRNTBLSIDXOFFS_CNT_U16.Description = 'Correction Table Index Offset';
CORRNTBLSIDXOFFS_CNT_U16.DocUnits = 'Cnt';
CORRNTBLSIDXOFFS_CNT_U16.EngDT = dt.u16;
CORRNTBLSIDXOFFS_CNT_U16.EngVal = 7;
CORRNTBLSIDXOFFS_CNT_U16.Header = 'None';
CORRNTBLSIDXOFFS_CNT_U16.Define = 'Local';


CORRNTBLSIZEMASK_CNT_U08 = DataDict.Constant;
CORRNTBLSIZEMASK_CNT_U08.LongName = 'Correction Table Size Mask';
CORRNTBLSIZEMASK_CNT_U08.Description = [...
  'Mask used to prevent indexing out of range'];
CORRNTBLSIZEMASK_CNT_U08.DocUnits = 'Cnt';
CORRNTBLSIZEMASK_CNT_U08.EngDT = dt.u08;
CORRNTBLSIZEMASK_CNT_U08.EngVal = 127;
CORRNTBLSIZEMASK_CNT_U08.Header = '';
CORRNTBLSIZEMASK_CNT_U08.Define = 'Local';


CORRNTBLSIZE_CNT_U16 = DataDict.Constant;
CORRNTBLSIZE_CNT_U16.LongName = 'Motor Angle 0 Correction Table Size';
CORRNTBLSIZE_CNT_U16.Description = [...
  'Motor Angle 0 Correction Table Size'];
CORRNTBLSIZE_CNT_U16.DocUnits = 'Cnt';
CORRNTBLSIZE_CNT_U16.EngDT = dt.u16;
CORRNTBLSIZE_CNT_U16.EngVal = 128;
CORRNTBLSIZE_CNT_U16.Header = 'None';
CORRNTBLSIZE_CNT_U16.Define = 'Local';


MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 1 Protocol Fault NTC Number';
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 1 Protocol Fault NTC Number'];
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr2;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr2.NTCNR_0X085;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.EngMin = NtcNr2.NTCNR_0X083;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.EngMax = NtcNr2.NTCNR_0X08A;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.Header = 'None';
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';

MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32 = DataDict.Constant;
MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32.LongName = 'Motor Angle 1 Read Pointer Reset';
MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32.Description = [...
  'Value made available for the DMA to transmit to the MWPR0 register to ' ...
  'reset the read pointer'];
MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32.DocUnits = 'Cnt';
MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32.EngDT = dt.u32;
MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32.EngVal = 0;
MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32.Header = 'None';
MOTAG1MEAS_MOTAG1READPTRRST_CNT_U32.Define = 'Global';

MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32 = DataDict.Constant;
MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32.LongName = 'Motor Angle 1 Transmission Start Initialization';
MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32.Description = [...
  'Value made available for the DMA to transmit to the MCTL2 register to ' ...
  'start data configuration'];
MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32.DocUnits = 'Cnt';
MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32.EngDT = dt.u32;
MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32.EngVal = 2147680256;
MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32.Header = 'None';
MOTAG1MEAS_MOTAG1TRSMSTRTININ_CNT_U32.Define = 'Global';

MOTAG1OFFS_MOTREV_U0P16 = DataDict.Constant;
MOTAG1OFFS_MOTREV_U0P16.LongName = 'Motor Angle 1 Offset';
MOTAG1OFFS_MOTREV_U0P16.Description = [...
  'Motor Angle 1 Offset relative to Motor Angle 0'];
MOTAG1OFFS_MOTREV_U0P16.DocUnits = 'MotRev';
MOTAG1OFFS_MOTREV_U0P16.EngDT = dt.u0p16;
MOTAG1OFFS_MOTREV_U0P16.EngVal = 0.5;
MOTAG1OFFS_MOTREV_U0P16.Header = 'None';
MOTAG1OFFS_MOTREV_U0P16.Define = 'Local';


MOTAG1PRTCLFLTFAILSTEP_CNT_U16 = DataDict.Constant;
MOTAG1PRTCLFLTFAILSTEP_CNT_U16.LongName = 'MotAg1PrtclFlt Fail Step';
MOTAG1PRTCLFLTFAILSTEP_CNT_U16.Description = '.EngVal = 32767/10;';
MOTAG1PRTCLFLTFAILSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG1PRTCLFLTFAILSTEP_CNT_U16.EngDT = dt.u16;
MOTAG1PRTCLFLTFAILSTEP_CNT_U16.EngVal = 3276;
MOTAG1PRTCLFLTFAILSTEP_CNT_U16.Header = 'None';
MOTAG1PRTCLFLTFAILSTEP_CNT_U16.Define = 'Local';


MOTAG1PRTCLFLTPASSSTEP_CNT_U16 = DataDict.Constant;
MOTAG1PRTCLFLTPASSSTEP_CNT_U16.LongName = 'MotAg1PrtclFlt Pass Step';
MOTAG1PRTCLFLTPASSSTEP_CNT_U16.Description = '.EngVal = 32767/50;';
MOTAG1PRTCLFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG1PRTCLFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
MOTAG1PRTCLFLTPASSSTEP_CNT_U16.EngVal = 655;
MOTAG1PRTCLFLTPASSSTEP_CNT_U16.Header = 'None';
MOTAG1PRTCLFLTPASSSTEP_CNT_U16.Define = 'Local';


MOTAGDELTAPERCORRNPT_CNT_U16 = DataDict.Constant;
MOTAGDELTAPERCORRNPT_CNT_U16.LongName = 'Motor Angle Delta per Correction Point';
MOTAGDELTAPERCORRNPT_CNT_U16.Description = [...
  'Amount of motor angle movement covered by 1 correction point table ent' ...
  'ry.  Number is based on a correction table size of 128 & p16 motor ang' ...
  'le: 65536/128 = 512'];
MOTAGDELTAPERCORRNPT_CNT_U16.DocUnits = 'Cnt';
MOTAGDELTAPERCORRNPT_CNT_U16.EngDT = dt.u16;
MOTAGDELTAPERCORRNPT_CNT_U16.EngVal = 512;
MOTAGDELTAPERCORRNPT_CNT_U16.Header = '';
MOTAGDELTAPERCORRNPT_CNT_U16.Define = 'Local';


MOTAGIDXMASK_CNT_U16 = DataDict.Constant;
MOTAGIDXMASK_CNT_U16.LongName = 'Motor Angle Index Mask';
MOTAGIDXMASK_CNT_U16.Description = [...
  'Mask used to round down motor angle to the nearest table index point. ' ...
  'MOTAGIDXMASK.EngVal = 65536 - 512'];
MOTAGIDXMASK_CNT_U16.DocUnits = 'Cnt';
MOTAGIDXMASK_CNT_U16.EngDT = dt.u16;
MOTAGIDXMASK_CNT_U16.EngVal = 65024;
MOTAGIDXMASK_CNT_U16.Header = '';
MOTAGIDXMASK_CNT_U16.Define = 'Local';


SNSRAGMASK_CNT_U32 = DataDict.Constant;
SNSRAGMASK_CNT_U32.LongName = 'Sensor Angle Mask';
SNSRAGMASK_CNT_U32.Description = 'Mask for sensor angle';
SNSRAGMASK_CNT_U32.DocUnits = 'Cnt';
SNSRAGMASK_CNT_U32.EngDT = dt.u32;
SNSRAGMASK_CNT_U32.EngVal = 8191;
SNSRAGMASK_CNT_U32.Header = 'None';
SNSRAGMASK_CNT_U32.Define = 'Local';


SNSRERRMASK_CNT_U32 = DataDict.Constant;
SNSRERRMASK_CNT_U32.LongName = 'Sensor Error Register Mask';
SNSRERRMASK_CNT_U32.Description = [...
  'Mask for sensor error register.  Include first 5 bits, exclude EEPROM ' ...
  'bits (6 & 7)'];
SNSRERRMASK_CNT_U32.DocUnits = 'Cnt';
SNSRERRMASK_CNT_U32.EngDT = dt.u32;
SNSRERRMASK_CNT_U32.EngVal = 31;
SNSRERRMASK_CNT_U32.Header = 'None';
SNSRERRMASK_CNT_U32.Define = 'Local';


SNSRERRNTCMASK_CNT_U08 = DataDict.Constant;
SNSRERRNTCMASK_CNT_U08.LongName = 'Sensor Error NTC Mask';
SNSRERRNTCMASK_CNT_U08.Description = [...
  'Mask used on error register for setting fault.'];
SNSRERRNTCMASK_CNT_U08.DocUnits = 'Cnt';
SNSRERRNTCMASK_CNT_U08.EngDT = dt.u08;
SNSRERRNTCMASK_CNT_U08.EngVal = 22;
SNSRERRNTCMASK_CNT_U08.Header = 'None';
SNSRERRNTCMASK_CNT_U08.Define = 'Local';


SNSRVLTGFLTMASK_CNT_U32 = DataDict.Constant;
SNSRVLTGFLTMASK_CNT_U32.LongName = 'Sensor Voltage Fault Mask';
SNSRVLTGFLTMASK_CNT_U32.Description = 'Mask for sensor voltage fault';
SNSRVLTGFLTMASK_CNT_U32.DocUnits = 'Cnt';
SNSRVLTGFLTMASK_CNT_U32.EngDT = dt.u32;
SNSRVLTGFLTMASK_CNT_U32.EngVal = 8192;
SNSRVLTGFLTMASK_CNT_U32.Header = 'None';
SNSRVLTGFLTMASK_CNT_U32.Define = 'Local';


SPIPARMASK_CNT_U32 = DataDict.Constant;
SPIPARMASK_CNT_U32.LongName = 'SPI Parity Mask';
SPIPARMASK_CNT_U32.Description = 'Mask for parity fault';
SPIPARMASK_CNT_U32.DocUnits = 'Cnt';
SPIPARMASK_CNT_U32.EngDT = dt.u32;
SPIPARMASK_CNT_U32.EngVal = 33554432;
SPIPARMASK_CNT_U32.Header = 'None';
SPIPARMASK_CNT_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
MotAg1PrtclFlt = DataDict.NTC;
MotAg1PrtclFlt.NtcNr = 'MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM';
MotAg1PrtclFlt.NtcTyp = 'Deb';
MotAg1PrtclFlt.LongName = 'Motor Angle 1 Protocol Fault';
MotAg1PrtclFlt.Description = 'Motor Angle 1 Protocol Fault.  MotAg1PrtclFlt.NtcNr = MOTAG0PRTCLFLTNTCNR_CNT_ENUM;';
MotAg1PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MotAg1PrtclFlt.NtcStInfo.Bit0Descr = 'Unused';
MotAg1PrtclFlt.NtcStInfo.Bit1Descr = 'Target Magnet Loss';
MotAg1PrtclFlt.NtcStInfo.Bit2Descr = 'IC Internal Error';
MotAg1PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
MotAg1PrtclFlt.NtcStInfo.Bit4Descr = 'Temperature Out of Range';
MotAg1PrtclFlt.NtcStInfo.Bit5Descr = 'Sensor undervoltage';
MotAg1PrtclFlt.NtcStInfo.Bit6Descr = 'Motor Angle Message Parity';
MotAg1PrtclFlt.NtcStInfo.Bit7Descr = 'Error Message Parity';


%end of Data Dictionary
