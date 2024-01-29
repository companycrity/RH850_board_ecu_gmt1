%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 08-Mar-2016 18:21:47       %
%                                  Created with tool release: 2.34.0     %
%                                  Synergy file: %version: 12 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: Praveen(KPIT)             %
%%-----------------------------------------------------------------------%

CM620A = DataDict.FDD;
CM620A.Version = '3.6.X';
CM620A.LongName = 'Motor Angle 0 Measurement';
CM620A.ShoName  = 'MotAg0Meas';
CM620A.DesignASIL = 'D';
CM620A.Description = [...
  'Measurement function of Motor Angle 0.  This function includes configu' ...
  'ration and use of the CSIH1 peripheral'];
CM620A.Dependencies = ...
	{'ARCHGLBPRM', 'FLTINJ'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAg0MeasInit1 = DataDict.Runnable;
MotAg0MeasInit1.Context = 'Rte';
MotAg0MeasInit1.TimeStep = 0;

MotAg0MeasPer1 = DataDict.Runnable;
MotAg0MeasPer1.Context = 'Rte';
MotAg0MeasPer1.TimeStep = 'MotorControl';

MotAg0MeasPer2 = DataDict.Runnable;
MotAg0MeasPer2.Context = 'Rte';
MotAg0MeasPer2.TimeStep = 0.002;

MotAg0MeasMotAg0CoeffTblRead = DataDict.SrvRunnable;
MotAg0MeasMotAg0CoeffTblRead.Context = 'Rte';
MotAg0MeasMotAg0CoeffTblRead.Return = DataDict.CSReturn;
MotAg0MeasMotAg0CoeffTblRead.Return.Type = 'None';
MotAg0MeasMotAg0CoeffTblRead.Return.Min = [];
MotAg0MeasMotAg0CoeffTblRead.Return.Max = [];
MotAg0MeasMotAg0CoeffTblRead.Return.TestTolerance = [];
MotAg0MeasMotAg0CoeffTblRead.Arguments(1) = DataDict.CSArguments;
MotAg0MeasMotAg0CoeffTblRead.Arguments(1).Name = 'MotAgCoeffTbl';
MotAg0MeasMotAg0CoeffTblRead.Arguments(1).EngMin = -0.03100585937;
MotAg0MeasMotAg0CoeffTblRead.Arguments(1).EngMax = 0.03100585937;
MotAg0MeasMotAg0CoeffTblRead.Arguments(1).EngDT = dt.float32;
MotAg0MeasMotAg0CoeffTblRead.Arguments(1).Units = 'Uls';
MotAg0MeasMotAg0CoeffTblRead.Arguments(1).Direction = 'Out';
MotAg0MeasMotAg0CoeffTblRead.Arguments(1).InitRowCol = [26   1];

MotAg0MeasMotAg0CoeffTblWr = DataDict.SrvRunnable;
MotAg0MeasMotAg0CoeffTblWr.Context = 'Rte';
MotAg0MeasMotAg0CoeffTblWr.Return = DataDict.CSReturn;
MotAg0MeasMotAg0CoeffTblWr.Return.Type = 'None';
MotAg0MeasMotAg0CoeffTblWr.Return.Min = [];
MotAg0MeasMotAg0CoeffTblWr.Return.Max = [];
MotAg0MeasMotAg0CoeffTblWr.Return.TestTolerance = [];
MotAg0MeasMotAg0CoeffTblWr.Arguments(1) = DataDict.CSArguments;
MotAg0MeasMotAg0CoeffTblWr.Arguments(1).Name = 'MotAgCoeffTbl';
MotAg0MeasMotAg0CoeffTblWr.Arguments(1).EngMin = -0.03100585937;
MotAg0MeasMotAg0CoeffTblWr.Arguments(1).EngMax = 0.03100585937;
MotAg0MeasMotAg0CoeffTblWr.Arguments(1).EngDT = dt.float32;
MotAg0MeasMotAg0CoeffTblWr.Arguments(1).Units = 'Uls';
MotAg0MeasMotAg0CoeffTblWr.Arguments(1).Direction = 'In';
MotAg0MeasMotAg0CoeffTblWr.Arguments(1).InitRowCol = [26   1];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'MotAg0MeasPer1'};
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).Units = 'Uls';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];


FltInj_u0p16 = DataDict.Client;
FltInj_u0p16.CallLocation = {'MotAg0MeasPer1'};
FltInj_u0p16.Return = DataDict.CSReturn;
FltInj_u0p16.Return.Type = 'None';
FltInj_u0p16.Return.Min = [];
FltInj_u0p16.Return.Max = [];
FltInj_u0p16.Return.TestTolerance = [];
FltInj_u0p16.Arguments(1) = DataDict.CSArguments;
FltInj_u0p16.Arguments(1).Name = 'SigPah';
FltInj_u0p16.Arguments(1).EngMin = 0;
FltInj_u0p16.Arguments(1).EngMax = 0.9999847412;
FltInj_u0p16.Arguments(1).EngDT = dt.u0p16;
FltInj_u0p16.Arguments(1).Units = 'Uls';
FltInj_u0p16.Arguments(1).Direction = 'InOut';
FltInj_u0p16.Arguments(1).InitRowCol = [1  1];
FltInj_u0p16.Arguments(2) = DataDict.CSArguments;
FltInj_u0p16.Arguments(2).Name = 'LocnKey';
FltInj_u0p16.Arguments(2).EngMin = 0;
FltInj_u0p16.Arguments(2).EngMax = 65535;
FltInj_u0p16.Arguments(2).EngDT = dt.u16;
FltInj_u0p16.Arguments(2).Units = 'Cnt';
FltInj_u0p16.Arguments(2).Direction = 'In';
FltInj_u0p16.Arguments(2).InitRowCol = [1  1];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'MotAg0MeasPer2'};
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


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'MotAg0MeasPer1'};
GetRefTmr1MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr1MicroSec32bit.Return.Type = 'None';
GetRefTmr1MicroSec32bit.Return.Min = [];
GetRefTmr1MicroSec32bit.Return.Max = [];
GetRefTmr1MicroSec32bit.Return.TestTolerance = [];
GetRefTmr1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr1MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr1MicroSec32bit.Arguments(1).InitRowCol = [1  1];


MotAg0CoeffTbl_GetErrorStatus = DataDict.Client;
MotAg0CoeffTbl_GetErrorStatus.CallLocation = {'MotAg0MeasInit1'};
MotAg0CoeffTbl_GetErrorStatus.Return = DataDict.CSReturn;
MotAg0CoeffTbl_GetErrorStatus.Return.Type = 'Standard';
MotAg0CoeffTbl_GetErrorStatus.Return.Min = 0;
MotAg0CoeffTbl_GetErrorStatus.Return.Max = 1;
MotAg0CoeffTbl_GetErrorStatus.Return.TestTolerance = [];
MotAg0CoeffTbl_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotAg0CoeffTbl_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MotAg0CoeffTbl_GetErrorStatus.Arguments(1).EngMin = 0;
MotAg0CoeffTbl_GetErrorStatus.Arguments(1).EngMax = 255;
MotAg0CoeffTbl_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotAg0CoeffTbl_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotAg0CoeffTbl_GetErrorStatus.Arguments(1).Direction = 'Out';
MotAg0CoeffTbl_GetErrorStatus.Arguments(1).InitRowCol = [1  1];


MotAg0CoeffTbl_SetRamBlockStatus = DataDict.Client;
MotAg0CoeffTbl_SetRamBlockStatus.CallLocation = {'MotAg0MeasMotAg0CoeffTblWr'};
MotAg0CoeffTbl_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAg0CoeffTbl_SetRamBlockStatus.Return.Type = 'Standard';
MotAg0CoeffTbl_SetRamBlockStatus.Return.Min = 0;
MotAg0CoeffTbl_SetRamBlockStatus.Return.Max = 1;
MotAg0CoeffTbl_SetRamBlockStatus.Return.TestTolerance = 0;
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAg0CoeffTbl_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'MotAg0MeasPer2'};
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
MotAg0ErrReg = DataDict.IpSignal;
MotAg0ErrReg.LongName = 'Motor Angle 0 Error Register';
MotAg0ErrReg.DocUnits = 'Cnt';
MotAg0ErrReg.EngDT = dt.u32;
MotAg0ErrReg.EngInit = 0;
MotAg0ErrReg.EngMin = 0;
MotAg0ErrReg.EngMax = 67108863;
MotAg0ErrReg.ReadIn = {'MotAg0MeasPer2'};
MotAg0ErrReg.ReadType = 'Rte';


MotAg0ParFltCnt = DataDict.IpSignal;
MotAg0ParFltCnt.LongName = 'Motor Angle 0 Parity Fault Count';
MotAg0ParFltCnt.DocUnits = 'Cnt';
MotAg0ParFltCnt.EngDT = dt.u16;
MotAg0ParFltCnt.EngInit = 0;
MotAg0ParFltCnt.EngMin = 0;
MotAg0ParFltCnt.EngMax = 65535;
MotAg0ParFltCnt.ReadIn = {'MotAg0MeasPer2'};
MotAg0ParFltCnt.ReadType = 'Rte';


MotAg0VltgFltCnt = DataDict.IpSignal;
MotAg0VltgFltCnt.LongName = 'Motor Angle 0 Voltage Fault Count';
MotAg0VltgFltCnt.DocUnits = 'Cnt';
MotAg0VltgFltCnt.EngDT = dt.u16;
MotAg0VltgFltCnt.EngInit = 0;
MotAg0VltgFltCnt.EngMin = 0;
MotAg0VltgFltCnt.EngMax = 65535;
MotAg0VltgFltCnt.ReadIn = {'MotAg0MeasPer2'};
MotAg0VltgFltCnt.ReadType = 'Rte';


MotCtrlMotAg0RawRes = DataDict.IpSignal;
MotCtrlMotAg0RawRes.LongName = 'Motor Angle Sensor 0 Raw Results';
MotCtrlMotAg0RawRes.DocUnits = 'Cnt';
MotCtrlMotAg0RawRes.EngDT = dt.u32;
MotCtrlMotAg0RawRes.EngInit =  ...
   [0                0                0];
MotCtrlMotAg0RawRes.EngMin = 0;
MotCtrlMotAg0RawRes.EngMax = 67108863;
MotCtrlMotAg0RawRes.ReadIn = {'MotAg0MeasPer1'};
MotCtrlMotAg0RawRes.ReadType = 'NonRte';


MotCtrlMotAgMecl0Polarity = DataDict.IpSignal;
MotCtrlMotAgMecl0Polarity.LongName = 'Motor Position Sensor 0 Measurement Polarity Configuration';
MotCtrlMotAgMecl0Polarity.DocUnits = 'Uls';
MotCtrlMotAgMecl0Polarity.EngDT = dt.s08;
MotCtrlMotAgMecl0Polarity.EngInit = 1;
MotCtrlMotAgMecl0Polarity.EngMin = -1;
MotCtrlMotAgMecl0Polarity.EngMax = 1;
MotCtrlMotAgMecl0Polarity.ReadIn = {'MotAg0MeasPer1'};
MotCtrlMotAgMecl0Polarity.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DmaMotAg0RawData = DataDict.OpSignal;
DmaMotAg0RawData.LongName = 'DMA Motor Angle 0 Raw Data';
DmaMotAg0RawData.Description = [...
  'Signal used to fire DMA to read SPI data'];
DmaMotAg0RawData.DocUnits = 'Volt';
DmaMotAg0RawData.SwcShoName = 'MotAg0Meas';
DmaMotAg0RawData.EngDT = dt.u08;
DmaMotAg0RawData.EngInit = 0;
DmaMotAg0RawData.EngMin = 0;
DmaMotAg0RawData.EngMax = 3;
DmaMotAg0RawData.TestTolerance = 0;
DmaMotAg0RawData.WrittenIn = {'MotAg0MeasPer1'};
DmaMotAg0RawData.WriteType = 'Phy';


MotAg0MeclQlfr = DataDict.OpSignal;
MotAg0MeclQlfr.LongName = 'Motor Angle 0 Mechanical Qualifier';
MotAg0MeclQlfr.Description = 'Qualifer output of motor angle 0';
MotAg0MeclQlfr.DocUnits = 'Cnt';
MotAg0MeclQlfr.SwcShoName = 'MotAg0Meas';
MotAg0MeclQlfr.EngDT = enum.SigQlfr1;
MotAg0MeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotAg0MeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotAg0MeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotAg0MeclQlfr.TestTolerance = 0;
MotAg0MeclQlfr.WrittenIn = {'MotAg0MeasPer2'};
MotAg0MeclQlfr.WriteType = 'Rte';


MotCtrlMotAg0ErrReg = DataDict.OpSignal;
MotCtrlMotAg0ErrReg.LongName = 'Motor Angle 0 Error Register';
MotCtrlMotAg0ErrReg.Description = [...
  'Motor Angle 0 Error Register reading'];
MotCtrlMotAg0ErrReg.DocUnits = 'Cnt';
MotCtrlMotAg0ErrReg.SwcShoName = 'MotAg0Meas';
MotCtrlMotAg0ErrReg.EngDT = dt.u32;
MotCtrlMotAg0ErrReg.EngInit = 0;
MotCtrlMotAg0ErrReg.EngMin = 0;
MotCtrlMotAg0ErrReg.EngMax = 67108863;
MotCtrlMotAg0ErrReg.TestTolerance = 0;
MotCtrlMotAg0ErrReg.WrittenIn = {'MotAg0MeasPer1'};
MotCtrlMotAg0ErrReg.WriteType = 'NonRte';


MotCtrlMotAg0Mecl = DataDict.OpSignal;
MotCtrlMotAg0Mecl.LongName = 'Motor Angle 0 Mechanical';
MotCtrlMotAg0Mecl.Description = 'Motor Angle 0, in mechanical units';
MotCtrlMotAg0Mecl.DocUnits = 'MotRev';
MotCtrlMotAg0Mecl.SwcShoName = 'MotAg0Meas';
MotCtrlMotAg0Mecl.EngDT = dt.u0p16;
MotCtrlMotAg0Mecl.EngInit = 0;
MotCtrlMotAg0Mecl.EngMin = 0;
MotCtrlMotAg0Mecl.EngMax = 0.9999847412;
MotCtrlMotAg0Mecl.TestTolerance = 1.525878906e-05;
MotCtrlMotAg0Mecl.WrittenIn = {'MotAg0MeasPer1'};
MotCtrlMotAg0Mecl.WriteType = 'NonRte';


MotCtrlMotAg0MeclRollgCntr = DataDict.OpSignal;
MotCtrlMotAg0MeclRollgCntr.LongName = 'Motor Angle 0 Rolling Counter';
MotCtrlMotAg0MeclRollgCntr.Description = [...
  'Rolling counter of Motor Angle 0, indicating protocol status of angle ' ...
  'measurement.'];
MotCtrlMotAg0MeclRollgCntr.DocUnits = 'Cnt';
MotCtrlMotAg0MeclRollgCntr.SwcShoName = 'MotAg0Meas';
MotCtrlMotAg0MeclRollgCntr.EngDT = dt.u08;
MotCtrlMotAg0MeclRollgCntr.EngInit = 0;
MotCtrlMotAg0MeclRollgCntr.EngMin = 0;
MotCtrlMotAg0MeclRollgCntr.EngMax = 255;
MotCtrlMotAg0MeclRollgCntr.TestTolerance = 0;
MotCtrlMotAg0MeclRollgCntr.WrittenIn = {'MotAg0MeasPer1'};
MotCtrlMotAg0MeclRollgCntr.WriteType = 'NonRte';


MotCtrlMotAg0ParFltCnt = DataDict.OpSignal;
MotCtrlMotAg0ParFltCnt.LongName = 'Motor Angle 0 Parity Fault Count';
MotCtrlMotAg0ParFltCnt.Description = [...
  'A running count of the number of parity faults on the motor angle read' ...
  ''];
MotCtrlMotAg0ParFltCnt.DocUnits = 'Cnt';
MotCtrlMotAg0ParFltCnt.SwcShoName = 'MotAg0Meas';
MotCtrlMotAg0ParFltCnt.EngDT = dt.u16;
MotCtrlMotAg0ParFltCnt.EngInit = 0;
MotCtrlMotAg0ParFltCnt.EngMin = 0;
MotCtrlMotAg0ParFltCnt.EngMax = 65535;
MotCtrlMotAg0ParFltCnt.TestTolerance = 0;
MotCtrlMotAg0ParFltCnt.WrittenIn = {'MotAg0MeasPer1'};
MotCtrlMotAg0ParFltCnt.WriteType = 'NonRte';


MotCtrlMotAg0VltgFltCnt = DataDict.OpSignal;
MotCtrlMotAg0VltgFltCnt.LongName = 'Motor Angle 0 Voltage Fault Count';
MotCtrlMotAg0VltgFltCnt.Description = [...
  'A running count of the number of voltage faults'];
MotCtrlMotAg0VltgFltCnt.DocUnits = 'Cnt';
MotCtrlMotAg0VltgFltCnt.SwcShoName = 'MotAg0Meas';
MotCtrlMotAg0VltgFltCnt.EngDT = dt.u16;
MotCtrlMotAg0VltgFltCnt.EngInit = 0;
MotCtrlMotAg0VltgFltCnt.EngMin = 0;
MotCtrlMotAg0VltgFltCnt.EngMax = 65535;
MotCtrlMotAg0VltgFltCnt.TestTolerance = 0;
MotCtrlMotAg0VltgFltCnt.WrittenIn = {'MotAg0MeasPer1'};
MotCtrlMotAg0VltgFltCnt.WriteType = 'NonRte';


MotCtrlMotAgMeasTi = DataDict.OpSignal;
MotCtrlMotAgMeasTi.LongName = 'Motor Angle 0 Measurement Time';
MotCtrlMotAgMeasTi.Description = [...
  'Measurement time of Motor Angle 0 in counts representing uSec.'];
MotCtrlMotAgMeasTi.DocUnits = 'Cnt';
MotCtrlMotAgMeasTi.SwcShoName = 'MotAg0Meas';
MotCtrlMotAgMeasTi.EngDT = dt.u32;
MotCtrlMotAgMeasTi.EngInit = 0;
MotCtrlMotAgMeasTi.EngMin = 0;
MotCtrlMotAgMeasTi.EngMax = 4294967295;
MotCtrlMotAgMeasTi.TestTolerance = 0;
MotCtrlMotAgMeasTi.WrittenIn = {'MotAg0MeasPer1'};
MotCtrlMotAgMeasTi.WriteType = 'NonRte';



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
MotAg0CoeffTbl = DataDict.NVM;
MotAg0CoeffTbl.LongName = 'Motor Angle 0 Coefficient Table';
MotAg0CoeffTbl.Description = [...
  'Coefficient table for Motor Angle 0.'];
MotAg0CoeffTbl.DocUnits = 'MotRev';
MotAg0CoeffTbl.EngDT = dt.float32;
MotAg0CoeffTbl.EngInit = [];
MotAg0CoeffTbl.EngMin = -0.03100585937;
MotAg0CoeffTbl.EngMax = 0.03100585937;
MotAg0CoeffTbl.CustomerVisible = false;
MotAg0CoeffTbl.Impact = 'H';
MotAg0CoeffTbl.TuningOwner = '?';
MotAg0CoeffTbl.CoderInfo.Alias = '';
MotAg0CoeffTbl.InitRowCol = [1   26];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotAg0MeasMotAg0RawAgReg = DataDict.Display;
dMotAg0MeasMotAg0RawAgReg.LongName = 'Motor Angle 0 Raw Angle Register';
dMotAg0MeasMotAg0RawAgReg.Description = [...
  'Display variable for Motor Angle 0 Raw Angle Register'];
dMotAg0MeasMotAg0RawAgReg.DocUnits = 'Cnt';
dMotAg0MeasMotAg0RawAgReg.EngDT = dt.u32;
dMotAg0MeasMotAg0RawAgReg.EngMin = 0;
dMotAg0MeasMotAg0RawAgReg.EngMax = 67108863;
dMotAg0MeasMotAg0RawAgReg.InitRowCol = [1  1];


dMotAg0MeasMotAg0RawErrReg = DataDict.Display;
dMotAg0MeasMotAg0RawErrReg.LongName = 'Motor Angle 0 Raw Error Register';
dMotAg0MeasMotAg0RawErrReg.Description = [...
  'Display variable for Motor Angle 0 Raw Error Register'];
dMotAg0MeasMotAg0RawErrReg.DocUnits = 'Cnt';
dMotAg0MeasMotAg0RawErrReg.EngDT = dt.u32;
dMotAg0MeasMotAg0RawErrReg.EngMin = 0;
dMotAg0MeasMotAg0RawErrReg.EngMax = 67108863;
dMotAg0MeasMotAg0RawErrReg.InitRowCol = [1  1];


dMotAg0MeasMotAg0RawTurnCntrReg = DataDict.Display;
dMotAg0MeasMotAg0RawTurnCntrReg.LongName = 'Motor Angle 0 Raw Turn Counter Register';
dMotAg0MeasMotAg0RawTurnCntrReg.Description = [...
  'Display variable Motor Angle 0 Raw Turn Counter Register'];
dMotAg0MeasMotAg0RawTurnCntrReg.DocUnits = 'Cnt';
dMotAg0MeasMotAg0RawTurnCntrReg.EngDT = dt.u32;
dMotAg0MeasMotAg0RawTurnCntrReg.EngMin = 0;
dMotAg0MeasMotAg0RawTurnCntrReg.EngMax = 67108863;
dMotAg0MeasMotAg0RawTurnCntrReg.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAg0CorrnTbl = DataDict.PIM;
MotAg0CorrnTbl.LongName = 'Motor Angle 0 Correction Table';
MotAg0CorrnTbl.Description = [...
  'Correction table for Motor Angle 0.'];
MotAg0CorrnTbl.DocUnits = 'MotRev';
MotAg0CorrnTbl.EngDT = dt.sm5p12;
MotAg0CorrnTbl.EngMin = -0.03100585937;
MotAg0CorrnTbl.EngMax = 0.03100585937;
MotAg0CorrnTbl.InitRowCol = [128    1];


MotAg0ErrParFltCntPrev = DataDict.PIM;
MotAg0ErrParFltCntPrev.LongName = 'Motor Angle 0 Parity Fault Count Previous';
MotAg0ErrParFltCntPrev.Description = [...
  'Previous Motor Angle 0 Parity Fault Count'];
MotAg0ErrParFltCntPrev.DocUnits = 'Cnt';
MotAg0ErrParFltCntPrev.EngDT = dt.u16;
MotAg0ErrParFltCntPrev.EngMin = 0;
MotAg0ErrParFltCntPrev.EngMax = 65535;
MotAg0ErrParFltCntPrev.InitRowCol = [1  1];


MotAg0ErrParFltNtcStInfoCntPrev = DataDict.PIM;
MotAg0ErrParFltNtcStInfoCntPrev.LongName = 'Motor Angle 0 Parity Fault Count Previous';
MotAg0ErrParFltNtcStInfoCntPrev.Description = [...
  'Previous Motor Angle 0 Parity Fault Count'];
MotAg0ErrParFltNtcStInfoCntPrev.DocUnits = 'Cnt';
MotAg0ErrParFltNtcStInfoCntPrev.EngDT = dt.u16;
MotAg0ErrParFltNtcStInfoCntPrev.EngMin = 0;
MotAg0ErrParFltNtcStInfoCntPrev.EngMax = 65535;
MotAg0ErrParFltNtcStInfoCntPrev.InitRowCol = [1  1];


MotAg0ErrPrev = DataDict.PIM;
MotAg0ErrPrev.LongName = 'Motor Angle 0 Raw Mechanical Angle Previous';
MotAg0ErrPrev.Description = [...
  'Previous Motor Angle 0 Raw Mechanical Angle'];
MotAg0ErrPrev.DocUnits = 'Cnt';
MotAg0ErrPrev.EngDT = dt.u08;
MotAg0ErrPrev.EngMin = 0;
MotAg0ErrPrev.EngMax = 31;
MotAg0ErrPrev.InitRowCol = [1  1];


MotAg0MeclRollgCntrPrev = DataDict.PIM;
MotAg0MeclRollgCntrPrev.LongName = 'Motor Angle 0 Rolling Count Previous';
MotAg0MeclRollgCntrPrev.Description = 'Previous version of rolling count';
MotAg0MeclRollgCntrPrev.DocUnits = 'Cnt';
MotAg0MeclRollgCntrPrev.EngDT = dt.u08;
MotAg0MeclRollgCntrPrev.EngMin = 0;
MotAg0MeclRollgCntrPrev.EngMax = 255;
MotAg0MeclRollgCntrPrev.InitRowCol = [1  1];


MotAg0ParFltCntPrev = DataDict.PIM;
MotAg0ParFltCntPrev.LongName = 'Motor Angle 0 Parity Fault Count Previous';
MotAg0ParFltCntPrev.Description = [...
  'Previous Motor Angle 0 Parity Fault Count'];
MotAg0ParFltCntPrev.DocUnits = 'Cnt';
MotAg0ParFltCntPrev.EngDT = dt.u16;
MotAg0ParFltCntPrev.EngMin = 0;
MotAg0ParFltCntPrev.EngMax = 65535;
MotAg0ParFltCntPrev.InitRowCol = [1  1];


MotAg0ParFltNtcStInfoCntPrev = DataDict.PIM;
MotAg0ParFltNtcStInfoCntPrev.LongName = 'Motor Angle 0 Parity Fault Count Previous';
MotAg0ParFltNtcStInfoCntPrev.Description = [...
  'Previous Motor Angle 0 Parity Fault Count'];
MotAg0ParFltNtcStInfoCntPrev.DocUnits = 'Cnt';
MotAg0ParFltNtcStInfoCntPrev.EngDT = dt.u16;
MotAg0ParFltNtcStInfoCntPrev.EngMin = 0;
MotAg0ParFltNtcStInfoCntPrev.EngMax = 65535;
MotAg0ParFltNtcStInfoCntPrev.InitRowCol = [1  1];


MotAg0RawMeclPrev = DataDict.PIM;
MotAg0RawMeclPrev.LongName = 'Motor Angle 0 Raw Mechanical Angle Previous';
MotAg0RawMeclPrev.Description = [...
  'Previous Motor Angle 0 Raw Mechanical Angle'];
MotAg0RawMeclPrev.DocUnits = 'MotRev';
MotAg0RawMeclPrev.EngDT = dt.u0p16;
MotAg0RawMeclPrev.EngMin = 0;
MotAg0RawMeclPrev.EngMax = 0.9999847412;
MotAg0RawMeclPrev.InitRowCol = [1  1];


MotAg0VltgFltCntPrev = DataDict.PIM;
MotAg0VltgFltCntPrev.LongName = 'Motor Angle 0 Voltage Fault Count Previous';
MotAg0VltgFltCntPrev.Description = [...
  'PIM designed to track presence of voltage faults at NTC level'];
MotAg0VltgFltCntPrev.DocUnits = 'Cnt';
MotAg0VltgFltCntPrev.EngDT = dt.u16;
MotAg0VltgFltCntPrev.EngMin = 0;
MotAg0VltgFltCntPrev.EngMax = 65535;
MotAg0VltgFltCntPrev.InitRowCol = [1  1];


MotAg0VltgFltNtcStInfoCntPrev = DataDict.PIM;
MotAg0VltgFltNtcStInfoCntPrev.LongName = 'Motor Angle 0 Voltage Fault Count Previous for Ntc State Information';
MotAg0VltgFltNtcStInfoCntPrev.Description = [...
  'PIM designed to track presence of voltage faults at NTC level'];
MotAg0VltgFltNtcStInfoCntPrev.DocUnits = 'Cnt';
MotAg0VltgFltNtcStInfoCntPrev.EngDT = dt.u16;
MotAg0VltgFltNtcStInfoCntPrev.EngMin = 0;
MotAg0VltgFltNtcStInfoCntPrev.EngMax = 65535;
MotAg0VltgFltNtcStInfoCntPrev.InitRowCol = [1  1];



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


FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL = DataDict.Constant;
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.LongName = 'Mechanical Motor Angle 0';
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.Description = [...
  'Output signal from MotAg0Meas, digital motor position'];
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.DocUnits = 'Uls';
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.EngDT = dt.u16;
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.EngVal = 38;
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.Header = 'FltInj.h';
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.Define = 'Global';


FLTINJ_MOTAG0MEAS_TESTOK = DataDict.Constant;
FLTINJ_MOTAG0MEAS_TESTOK.LongName = 'Test OK';
FLTINJ_MOTAG0MEAS_TESTOK.Description = [...
  'Boolean decision point that decides whether to set NTC to PreFaild'];
FLTINJ_MOTAG0MEAS_TESTOK.DocUnits = 'Uls';
FLTINJ_MOTAG0MEAS_TESTOK.EngDT = dt.u16;
FLTINJ_MOTAG0MEAS_TESTOK.EngVal = 39;
FLTINJ_MOTAG0MEAS_TESTOK.Header = 'FltInj.h';
FLTINJ_MOTAG0MEAS_TESTOK.Define = 'Global';


MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 0 Protocol Fault NTC Number';
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 0 Protocol Fault NTC Number'];
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr2;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr2.NTCNR_0X083;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.EngMin = NtcNr2.NTCNR_0X083;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.EngMax = NtcNr2.NTCNR_0X08A;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.Header = 'None';
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';

MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32 = DataDict.Constant;
MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32.LongName = 'Motor Angle 0 Read Pointer Reset';
MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32.Description = [...
  'Value made available for the DMA to transmit to the MWPR0 register to ' ...
  'reset the read pointer'];
MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32.DocUnits = 'Cnt';
MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32.EngDT = dt.u32;
MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32.EngVal = 0;
MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32.Header = 'None';
MOTAG0MEAS_MOTAG0READPTRRST_CNT_U32.Define = 'Global';

MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32 = DataDict.Constant;
MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32.LongName = 'Motor Angle 0 Transmission Start Initialization';
MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32.Description = [...
  'Value made available for the DMA to transmit to the MCTL2 register to ' ...
  'start data configuration'];
MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32.DocUnits = 'Cnt';
MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32.EngDT = dt.u32;
MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32.EngVal = 2147680256;
MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32.Header = 'None';
MOTAG0MEAS_MOTAG0TRSMSTRTININ_CNT_U32.Define = 'Global';

MOTAG0PRTCLFLTFAILSTEP_CNT_U16 = DataDict.Constant;
MOTAG0PRTCLFLTFAILSTEP_CNT_U16.LongName = 'MotAg0PrtclFlt Fail Step';
MOTAG0PRTCLFLTFAILSTEP_CNT_U16.Description = '.EngVal = 32767/10;';
MOTAG0PRTCLFLTFAILSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG0PRTCLFLTFAILSTEP_CNT_U16.EngDT = dt.u16;
MOTAG0PRTCLFLTFAILSTEP_CNT_U16.EngVal = 3276;
MOTAG0PRTCLFLTFAILSTEP_CNT_U16.Header = 'None';
MOTAG0PRTCLFLTFAILSTEP_CNT_U16.Define = 'Local';

MOTAG0PRTCLFLTPASSSTEP_CNT_U16 = DataDict.Constant;
MOTAG0PRTCLFLTPASSSTEP_CNT_U16.LongName = 'MotAg0PrtclFlt Pass Step';
MOTAG0PRTCLFLTPASSSTEP_CNT_U16.Description = '.EngVal = 32767/50;';
MOTAG0PRTCLFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG0PRTCLFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
MOTAG0PRTCLFLTPASSSTEP_CNT_U16.EngVal = 655;
MOTAG0PRTCLFLTPASSSTEP_CNT_U16.Header = 'None';
MOTAG0PRTCLFLTPASSSTEP_CNT_U16.Define = 'Local';


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
MotAg0PrtclFlt = DataDict.NTC;
MotAg0PrtclFlt.NtcNr = 'MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM';
MotAg0PrtclFlt.NtcTyp = 'Deb';
MotAg0PrtclFlt.LongName = 'Motor Angle 0 Protocol Fault';
MotAg0PrtclFlt.Description = 'Motor Angle 0 Protocol Fault.  MotAg0PrtclFlt.NtcNr = MOTAG0PRTCLFLTNTCNR_CNT_ENUM;';
MotAg0PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MotAg0PrtclFlt.NtcStInfo.Bit0Descr = 'Unused';
MotAg0PrtclFlt.NtcStInfo.Bit1Descr = 'Target Magnet Loss';
MotAg0PrtclFlt.NtcStInfo.Bit2Descr = 'IC Internal Error';
MotAg0PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
MotAg0PrtclFlt.NtcStInfo.Bit4Descr = 'Temperature Out of Range';
MotAg0PrtclFlt.NtcStInfo.Bit5Descr = 'Sensor undervoltage';
MotAg0PrtclFlt.NtcStInfo.Bit6Descr = 'Motor Angle Message Parity';
MotAg0PrtclFlt.NtcStInfo.Bit7Descr = 'Error Message Parity';


%end of Data Dictionary
