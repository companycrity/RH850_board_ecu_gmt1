%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Nov-2016 09:35:51       %
%                                  Created with tool release: 2.48.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

ES005A = DataDict.FDD;
ES005A.Version = '2.6.X';
ES005A.LongName = 'TemporalMonitor';
ES005A.ShoName  = 'TmplMonr';
ES005A.DesignASIL = 'D';
ES005A.Description = 'Temporal Monitor Function';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TmplMonrInit1 = DataDict.Runnable;
TmplMonrInit1.Context = 'Rte';
TmplMonrInit1.TimeStep = 0;
TmplMonrInit1.Description = 'Init';

TmplMonrPer1 = DataDict.Runnable;
TmplMonrPer1.Context = 'Rte';
TmplMonrPer1.TimeStep = 0.002;
TmplMonrPer1.Description = [...
  'Normal processing, also turns on Temporal Monitor Pin'];

TmplMonrPer2 = DataDict.Runnable;
TmplMonrPer2.Context = 'Rte';
TmplMonrPer2.TimeStep = 0.002;
TmplMonrPer2.Description = 'Turns off Temporal Monitor Pin';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Call_Spi_AsyncTransmit = DataDict.Client;
Call_Spi_AsyncTransmit.CallLocation = {'TmplMonrPer1'};
Call_Spi_AsyncTransmit.Description = 'Transmit SPI';
Call_Spi_AsyncTransmit.Return = DataDict.CSReturn;
Call_Spi_AsyncTransmit.Return.Type = 'Standard';
Call_Spi_AsyncTransmit.Return.Min = 0;
Call_Spi_AsyncTransmit.Return.Max = 1;
Call_Spi_AsyncTransmit.Return.TestTolerance = 0;
Call_Spi_AsyncTransmit.Return.Description = 'Transmit SPI';
Call_Spi_AsyncTransmit.Arguments(1) = DataDict.CSArguments;
Call_Spi_AsyncTransmit.Arguments(1).Name = 'Sequence';
Call_Spi_AsyncTransmit.Arguments(1).EngDT = dt.u08;
Call_Spi_AsyncTransmit.Arguments(1).EngMin = 0;
Call_Spi_AsyncTransmit.Arguments(1).EngMax = 255;
Call_Spi_AsyncTransmit.Arguments(1).Units = 'Cnt';
Call_Spi_AsyncTransmit.Arguments(1).Direction = 'In';
Call_Spi_AsyncTransmit.Arguments(1).InitRowCol = [1  1];
Call_Spi_AsyncTransmit.Arguments(1).Description = 'Sequence';


CtrlErrOut = DataDict.Client;
CtrlErrOut.CallLocation = {'TmplMonrPer1'};
CtrlErrOut.Description = 'CtrlErrOut Client Call';
CtrlErrOut.Return = DataDict.CSReturn;
CtrlErrOut.Return.Type = 'None';
CtrlErrOut.Return.Min = [];
CtrlErrOut.Return.Max = [];
CtrlErrOut.Return.TestTolerance = [];
CtrlErrOut.Arguments(1) = DataDict.CSArguments;
CtrlErrOut.Arguments(1).Name = 'PinSt';
CtrlErrOut.Arguments(1).EngDT = dt.lgc;
CtrlErrOut.Arguments(1).EngMin = 0;
CtrlErrOut.Arguments(1).EngMax = 1;
CtrlErrOut.Arguments(1).Units = 'Cnt';
CtrlErrOut.Arguments(1).Direction = 'In';
CtrlErrOut.Arguments(1).InitRowCol = [1  1];
CtrlErrOut.Arguments(1).Description = 'PinSt';
CtrlErrOut.Arguments(2) = DataDict.CSArguments;
CtrlErrOut.Arguments(2).Name = 'TrigReg';
CtrlErrOut.Arguments(2).EngDT = enum.TrigReg1;
CtrlErrOut.Arguments(2).EngMin = 0;
CtrlErrOut.Arguments(2).EngMax = 255;
CtrlErrOut.Arguments(2).Units = 'Cnt';
CtrlErrOut.Arguments(2).Direction = 'In';
CtrlErrOut.Arguments(2).InitRowCol = [1  1];
CtrlErrOut.Arguments(2).Description = 'TrigReg';


IoHwAb_GetGpioPwrOutpEnaFb = DataDict.Client;
IoHwAb_GetGpioPwrOutpEnaFb.CallLocation = {'TmplMonrPer1'};
IoHwAb_GetGpioPwrOutpEnaFb.Description = 'PwrOutpEnaFb GPIO Read';
IoHwAb_GetGpioPwrOutpEnaFb.Return = DataDict.CSReturn;
IoHwAb_GetGpioPwrOutpEnaFb.Return.Type = 'Standard';
IoHwAb_GetGpioPwrOutpEnaFb.Return.Min = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Return.Max = 1;
IoHwAb_GetGpioPwrOutpEnaFb.Return.TestTolerance = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Return.Description = 'PwrOutpEnaFb GPIO Read';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1) = DataDict.CSArguments;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Name = 'PinSt';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).EngDT = dt.lgc;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).EngMin = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).EngMax = 1;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).TestTolerance = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Units = 'Cnt';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Direction = 'Out';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).InitRowCol = [1  1];
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Description = 'PinSt';


IoHwAb_SetGpioSysFlt2A = DataDict.Client;
IoHwAb_SetGpioSysFlt2A.CallLocation = {'TmplMonrPer2'};
IoHwAb_SetGpioSysFlt2A.Description = 'SetGpioSysFlt2A GPIO Write';
IoHwAb_SetGpioSysFlt2A.Return = DataDict.CSReturn;
IoHwAb_SetGpioSysFlt2A.Return.Type = 'Standard';
IoHwAb_SetGpioSysFlt2A.Return.Min = 0;
IoHwAb_SetGpioSysFlt2A.Return.Max = 1;
IoHwAb_SetGpioSysFlt2A.Return.TestTolerance = 0;
IoHwAb_SetGpioSysFlt2A.Return.Description = 'SetGpioSysFlt2A GPIO Write';
IoHwAb_SetGpioSysFlt2A.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioSysFlt2A.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngMin = 0;
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngMax = 1;
IoHwAb_SetGpioSysFlt2A.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioSysFlt2A.Arguments(1).Direction = 'In';
IoHwAb_SetGpioSysFlt2A.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioSysFlt2A.Arguments(1).Description = 'PinSt';


IoHwAb_SetGpioSysFlt2B = DataDict.Client;
IoHwAb_SetGpioSysFlt2B.CallLocation = {'TmplMonrPer2'};
IoHwAb_SetGpioSysFlt2B.Description = 'SetGpioSysFlt2B GPIO Write';
IoHwAb_SetGpioSysFlt2B.Return = DataDict.CSReturn;
IoHwAb_SetGpioSysFlt2B.Return.Type = 'Standard';
IoHwAb_SetGpioSysFlt2B.Return.Min = 0;
IoHwAb_SetGpioSysFlt2B.Return.Max = 1;
IoHwAb_SetGpioSysFlt2B.Return.TestTolerance = 0;
IoHwAb_SetGpioSysFlt2B.Return.Description = 'SetGpioSysFlt2B GPIO Write';
IoHwAb_SetGpioSysFlt2B.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioSysFlt2B.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioSysFlt2B.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioSysFlt2B.Arguments(1).EngMin = 0;
IoHwAb_SetGpioSysFlt2B.Arguments(1).EngMax = 1;
IoHwAb_SetGpioSysFlt2B.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioSysFlt2B.Arguments(1).Direction = 'In';
IoHwAb_SetGpioSysFlt2B.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioSysFlt2B.Arguments(1).Description = 'PinSt';


IoHwAb_SetGpioTmplMonrWdg = DataDict.Client;
IoHwAb_SetGpioTmplMonrWdg.CallLocation = {'TmplMonrPer1','TmplMonrPer2'};
IoHwAb_SetGpioTmplMonrWdg.Description = 'Read Wdg Monitor Function';
IoHwAb_SetGpioTmplMonrWdg.Return = DataDict.CSReturn;
IoHwAb_SetGpioTmplMonrWdg.Return.Type = 'Standard';
IoHwAb_SetGpioTmplMonrWdg.Return.Min = 0;
IoHwAb_SetGpioTmplMonrWdg.Return.Max = 1;
IoHwAb_SetGpioTmplMonrWdg.Return.TestTolerance = 0;
IoHwAb_SetGpioTmplMonrWdg.Return.Description = [...
  'Read Wdg Monitor Function Arguments'];
IoHwAb_SetGpioTmplMonrWdg.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).EngMin = 0;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).EngMax = 1;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Direction = 'In';
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Description = 'PinSt';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'TmplMonrPer1'};
SetNtcSts.Description = 'Set NTC Status Main';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Set NTC Status Main';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NtcNr';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NtcStInfo';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NtcSts';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'DebStep';


Spi_ReadIB = DataDict.Client;
Spi_ReadIB.CallLocation = {'TmplMonrPer1'};
Spi_ReadIB.Description = 'SPI Read Main';
Spi_ReadIB.Return = DataDict.CSReturn;
Spi_ReadIB.Return.Type = 'Standard';
Spi_ReadIB.Return.Min = 0;
Spi_ReadIB.Return.Max = 1;
Spi_ReadIB.Return.TestTolerance = 0;
Spi_ReadIB.Return.Description = 'SPI Read Arguments Main';
Spi_ReadIB.Arguments(1) = DataDict.CSArguments;
Spi_ReadIB.Arguments(1).Name = 'Channel';
Spi_ReadIB.Arguments(1).EngDT = dt.u08;
Spi_ReadIB.Arguments(1).EngMin = 0;
Spi_ReadIB.Arguments(1).EngMax = 255;
Spi_ReadIB.Arguments(1).Units = 'Cnt';
Spi_ReadIB.Arguments(1).Direction = 'In';
Spi_ReadIB.Arguments(1).InitRowCol = [1  1];
Spi_ReadIB.Arguments(1).Description = 'Channel';
Spi_ReadIB.Arguments(2) = DataDict.CSArguments;
Spi_ReadIB.Arguments(2).Name = 'DataBufferPointer';
Spi_ReadIB.Arguments(2).EngDT = dt.u16;
Spi_ReadIB.Arguments(2).EngMin = 0;
Spi_ReadIB.Arguments(2).EngMax = 65535;
Spi_ReadIB.Arguments(2).TestTolerance = 0;
Spi_ReadIB.Arguments(2).Units = 'Cnt';
Spi_ReadIB.Arguments(2).Direction = 'Out';
Spi_ReadIB.Arguments(2).InitRowCol = [1  1];
Spi_ReadIB.Arguments(2).Description = 'DataBufferPointer';


Spi_WriteIB = DataDict.Client;
Spi_WriteIB.CallLocation = {'TmplMonrPer1'};
Spi_WriteIB.Description = 'SPI Main';
Spi_WriteIB.Return = DataDict.CSReturn;
Spi_WriteIB.Return.Type = 'Standard';
Spi_WriteIB.Return.Min = 0;
Spi_WriteIB.Return.Max = 1;
Spi_WriteIB.Return.TestTolerance = 0;
Spi_WriteIB.Return.Description = 'SPI Return Arguments';
Spi_WriteIB.Arguments(1) = DataDict.CSArguments;
Spi_WriteIB.Arguments(1).Name = 'Channel';
Spi_WriteIB.Arguments(1).EngDT = dt.u08;
Spi_WriteIB.Arguments(1).EngMin = 0;
Spi_WriteIB.Arguments(1).EngMax = 255;
Spi_WriteIB.Arguments(1).Units = 'Cnt';
Spi_WriteIB.Arguments(1).Direction = 'In';
Spi_WriteIB.Arguments(1).InitRowCol = [1  1];
Spi_WriteIB.Arguments(1).Description = 'Channel';
Spi_WriteIB.Arguments(2) = DataDict.CSArguments;
Spi_WriteIB.Arguments(2).Name = 'DataBufferPtr';
Spi_WriteIB.Arguments(2).EngDT = dt.u16;
Spi_WriteIB.Arguments(2).EngMin = 0;
Spi_WriteIB.Arguments(2).EngMax = 65535;
Spi_WriteIB.Arguments(2).Units = 'Cnt';
Spi_WriteIB.Arguments(2).Direction = 'InPtr';
Spi_WriteIB.Arguments(2).InitRowCol = [1  1];
Spi_WriteIB.Arguments(2).Description = 'DataBufferPtr';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = [...
  'Signal indicating the status of Inverter 1'];
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'TmplMonrPer2'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.IpSignal;
DiagcStsIvtr2Inactv.LongName = 'Diagnostic Status Inverter 2 Inactive';
DiagcStsIvtr2Inactv.Description = [...
  'Signal indicating the status of Inverter 2'];
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.ReadIn = {'TmplMonrPer2'};
DiagcStsIvtr2Inactv.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = 'Start Up State';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 255;
StrtUpSt.ReadIn = {'TmplMonrPer1','TmplMonrPer2'};
StrtUpSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
TmplMonrIninTestCmpl = DataDict.OpSignal;
TmplMonrIninTestCmpl.LongName = 'Temporal Monitor Initialization Test Complete';
TmplMonrIninTestCmpl.Description = [...
  'Output flag to indicate Temporal Monitor Initialization Test Status'];
TmplMonrIninTestCmpl.DocUnits = 'Cnt';
TmplMonrIninTestCmpl.SwcShoName = 'TmplMonr';
TmplMonrIninTestCmpl.EngDT = dt.lgc;
TmplMonrIninTestCmpl.EngInit = 0;
TmplMonrIninTestCmpl.EngMin = 0;
TmplMonrIninTestCmpl.EngMax = 1;
TmplMonrIninTestCmpl.TestTolerance = 0;
TmplMonrIninTestCmpl.WrittenIn = {'TmplMonrInit1','TmplMonrPer1'};
TmplMonrIninTestCmpl.WriteType = 'Rte';



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

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
TmplMonrIninCntr = DataDict.PIM;
TmplMonrIninCntr.LongName = 'Temporal Monitor Intialization Counter';
TmplMonrIninCntr.Description = [...
  'Counter for Temporal Monitor Initialization Signal Generation'];
TmplMonrIninCntr.DocUnits = 'Cnt';
TmplMonrIninCntr.EngDT = dt.u08;
TmplMonrIninCntr.EngMin = 0;
TmplMonrIninCntr.EngMax = 255;
TmplMonrIninCntr.InitRowCol = [1  1];


TmplMonrIninTestCmplFlg = DataDict.PIM;
TmplMonrIninTestCmplFlg.LongName = 'Temporal Monitor Initialization Test Complete Flag';
TmplMonrIninTestCmplFlg.Description = [...
  'Temporal Monitor Initialization Test Complete Flag'];
TmplMonrIninTestCmplFlg.DocUnits = 'Cnt';
TmplMonrIninTestCmplFlg.EngDT = dt.lgc;
TmplMonrIninTestCmplFlg.EngMin = 0;
TmplMonrIninTestCmplFlg.EngMax = 1;
TmplMonrIninTestCmplFlg.InitRowCol = [1  1];


TmplMonrNtc40PrmByte = DataDict.PIM;
TmplMonrNtc40PrmByte.LongName = 'Temporal Monitor Ntc 40 Parameter Bytes';
TmplMonrNtc40PrmByte.Description = [...
  'Temporal Monitor Ntc 40 Parameter Bytes'];
TmplMonrNtc40PrmByte.DocUnits = 'Cnt';
TmplMonrNtc40PrmByte.EngDT = dt.u08;
TmplMonrNtc40PrmByte.EngMin = 0;
TmplMonrNtc40PrmByte.EngMax = 255;
TmplMonrNtc40PrmByte.InitRowCol = [1  1];


TmplMonrSpiReadWrOrderFlg1 = DataDict.PIM;
TmplMonrSpiReadWrOrderFlg1.LongName = 'Temporal Monitor SPI Read Write Order Flag 1';
TmplMonrSpiReadWrOrderFlg1.Description = [...
  'Temporal Monitor SPI Read Write Order Flag 2'];
TmplMonrSpiReadWrOrderFlg1.DocUnits = 'Cnt';
TmplMonrSpiReadWrOrderFlg1.EngDT = dt.lgc;
TmplMonrSpiReadWrOrderFlg1.EngMin = 0;
TmplMonrSpiReadWrOrderFlg1.EngMax = 1;
TmplMonrSpiReadWrOrderFlg1.InitRowCol = [1  1];


TmplMonrSpiReadWrOrderFlg2 = DataDict.PIM;
TmplMonrSpiReadWrOrderFlg2.LongName = 'Temporal Monitor SPI Read Write Order Flag 2';
TmplMonrSpiReadWrOrderFlg2.Description = [...
  'Temporal Monitor SPI Read Write Order Flag 2'];
TmplMonrSpiReadWrOrderFlg2.DocUnits = 'Cnt';
TmplMonrSpiReadWrOrderFlg2.EngDT = dt.lgc;
TmplMonrSpiReadWrOrderFlg2.EngMin = 0;
TmplMonrSpiReadWrOrderFlg2.EngMax = 1;
TmplMonrSpiReadWrOrderFlg2.InitRowCol = [1  1];


TmplMonrWdgRstrtCnt = DataDict.PIM;
TmplMonrWdgRstrtCnt.LongName = 'Temporal Monitor Watchdog Restart Count';
TmplMonrWdgRstrtCnt.Description = [...
  'Temporal Monitor Watchdog Restart Count'];
TmplMonrWdgRstrtCnt.DocUnits = 'Cnt';
TmplMonrWdgRstrtCnt.EngDT = dt.u08;
TmplMonrWdgRstrtCnt.EngMin = 0;
TmplMonrWdgRstrtCnt.EngMax = 255;
TmplMonrWdgRstrtCnt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_STRTUPSTDI_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTDI_CNT_U08.LongName = 'StartUp State - Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.Description = 'StartUp State in Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngVal = 160;
ELECGLBPRM_STRTUPSTDI_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Start';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Temporal Monitor Initialization'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngVal = 40;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Define = 'Global';


STD_HIGH = DataDict.Constant;
STD_HIGH.LongName = 'Standard High';
STD_HIGH.Description = [...
  'AUTOSAR value representing a physical high state.  To be used as a alt' ...
  'ernative to TRUE/FALSE as appropriate.'];
STD_HIGH.DocUnits = 'Cnt';
STD_HIGH.EngDT = dt.u08;
STD_HIGH.EngVal = 1;
STD_HIGH.Define = 'Global';


STD_LOW = DataDict.Constant;
STD_LOW.LongName = 'Standard Low';
STD_LOW.Description = [...
  'AUTOSAR value representing a physical low state.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_LOW.DocUnits = 'Cnt';
STD_LOW.EngDT = dt.u08;
STD_LOW.EngVal = 0;
STD_LOW.Define = 'Global';


SpiConf_SpiChannel_TmplMonrCh1 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh1.LongName = 'Temporal Monitor Channel 1';
SpiConf_SpiChannel_TmplMonrCh1.Description = [...
  'Temporal Monitor Channel 1. Can be used for any register'];
SpiConf_SpiChannel_TmplMonrCh1.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh1.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh1.EngVal = 52;
SpiConf_SpiChannel_TmplMonrCh1.Define = 'Global';


SpiConf_SpiChannel_TmplMonrCh2 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh2.LongName = 'Temporal Monitor Channel 2';
SpiConf_SpiChannel_TmplMonrCh2.Description = [...
  'Temporal Monitor Channel 2. Can be used for any register'];
SpiConf_SpiChannel_TmplMonrCh2.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh2.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh2.EngVal = 53;
SpiConf_SpiChannel_TmplMonrCh2.Define = 'Global';


SpiConf_SpiChannel_TmplMonrCh3 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh3.LongName = 'Temporal Monitor Channel 3';
SpiConf_SpiChannel_TmplMonrCh3.Description = [...
  'Temporal Monitor Channel 3. Can be used for any register'];
SpiConf_SpiChannel_TmplMonrCh3.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh3.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh3.EngVal = 54;
SpiConf_SpiChannel_TmplMonrCh3.Define = 'Global';


SpiConf_SpiSequence_TmplMonrSeq1 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq1.LongName = 'Temporal Monitor Sequence 1';
SpiConf_SpiSequence_TmplMonrSeq1.Description = [...
  'Temporal Monitor Sequence 1. Tied with Temporal Monitor Channel 1'];
SpiConf_SpiSequence_TmplMonrSeq1.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq1.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq1.EngVal = 52;
SpiConf_SpiSequence_TmplMonrSeq1.Define = 'Global';


SpiConf_SpiSequence_TmplMonrSeq2 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq2.LongName = 'Temporal Monitor Sequence 2';
SpiConf_SpiSequence_TmplMonrSeq2.Description = [...
  'Temporal Monitor Sequence 2. Tied with Temporal Monitor Channel 2'];
SpiConf_SpiSequence_TmplMonrSeq2.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq2.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq2.EngVal = 53;
SpiConf_SpiSequence_TmplMonrSeq2.Define = 'Global';


SpiConf_SpiSequence_TmplMonrSeq3 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq3.LongName = 'Temporal Monitor Sequence 3';
SpiConf_SpiSequence_TmplMonrSeq3.Description = [...
  'Temporal Monitor Sequence 3. Tied with Temporal Monitor Channel 3'];
SpiConf_SpiSequence_TmplMonrSeq3.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq3.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq3.EngVal = 54;
SpiConf_SpiSequence_TmplMonrSeq3.Define = 'Global';


TMPLMONRCFGREG1READVAL_CNT_U16 = DataDict.Constant;
TMPLMONRCFGREG1READVAL_CNT_U16.LongName = 'Temporal Monitor Configuration Register 1 Read Value';
TMPLMONRCFGREG1READVAL_CNT_U16.Description = [...
  'Temporal Monitor Configuration Register 1 Read Value Dec = 9216, Bin =' ...
  ' 10010000000000'];
TMPLMONRCFGREG1READVAL_CNT_U16.DocUnits = 'Cnt';
TMPLMONRCFGREG1READVAL_CNT_U16.EngDT = dt.u16;
TMPLMONRCFGREG1READVAL_CNT_U16.EngVal = 9216;
TMPLMONRCFGREG1READVAL_CNT_U16.Define = 'Local';


TMPLMONRCFGREG1WRVAL_CNT_U16 = DataDict.Constant;
TMPLMONRCFGREG1WRVAL_CNT_U16.LongName = 'Temporal Monitor Configuration Register 1 Write Value';
TMPLMONRCFGREG1WRVAL_CNT_U16.Description = [...
  'Temporal Monitor Configuration Register 1 Write Value Dec = 9739, Bin ' ...
  '= 01001 1 0 00001011'];
TMPLMONRCFGREG1WRVAL_CNT_U16.DocUnits = 'Cnt';
TMPLMONRCFGREG1WRVAL_CNT_U16.EngDT = dt.u16;
TMPLMONRCFGREG1WRVAL_CNT_U16.EngVal = 9739;
TMPLMONRCFGREG1WRVAL_CNT_U16.Define = 'Local';


TMPLMONRSTSREG2READVAL_CNT_U16 = DataDict.Constant;
TMPLMONRSTSREG2READVAL_CNT_U16.LongName = 'Temporal Monitor Status Register 2 Read Value';
TMPLMONRSTSREG2READVAL_CNT_U16.Description = [...
  'Temporal Monitor Status Register 2 (to read WD State) Read Value Dec =' ...
  ' 2048,Bin = 000100000000000'];
TMPLMONRSTSREG2READVAL_CNT_U16.DocUnits = 'Cnt';
TMPLMONRSTSREG2READVAL_CNT_U16.EngDT = dt.u16;
TMPLMONRSTSREG2READVAL_CNT_U16.EngVal = 2048;
TMPLMONRSTSREG2READVAL_CNT_U16.Define = 'Local';


TMPLMONRWDGMODKEYWORD1_CNT_U16 = DataDict.Constant;
TMPLMONRWDGMODKEYWORD1_CNT_U16.LongName = 'Temporal Monitor Watchdog Mode Key Word 1';
TMPLMONRWDGMODKEYWORD1_CNT_U16.Description = [...
  'Temporal Monitor Watchdog Mode Key Word 1: DEC=7891, BIN = 11110110100' ...
  '11'];
TMPLMONRWDGMODKEYWORD1_CNT_U16.DocUnits = 'Cnt';
TMPLMONRWDGMODKEYWORD1_CNT_U16.EngDT = dt.u16;
TMPLMONRWDGMODKEYWORD1_CNT_U16.EngVal = 7891;
TMPLMONRWDGMODKEYWORD1_CNT_U16.Define = 'Local';


TMPLMONRWDGMODKEYWORD2_CNT_U16 = DataDict.Constant;
TMPLMONRWDGMODKEYWORD2_CNT_U16.LongName = 'Temporal Monitor Watchdog Mode Key Word 2';
TMPLMONRWDGMODKEYWORD2_CNT_U16.Description = [...
  'Temporal Monitor Watchdog Mode Key Word 2: DEC=7731, BIN = 11110001100' ...
  '11'];
TMPLMONRWDGMODKEYWORD2_CNT_U16.DocUnits = 'Cnt';
TMPLMONRWDGMODKEYWORD2_CNT_U16.EngDT = dt.u16;
TMPLMONRWDGMODKEYWORD2_CNT_U16.EngVal = 7731;
TMPLMONRWDGMODKEYWORD2_CNT_U16.Define = 'Local';


TMPLMONRWDGMODKEYWORD3_CNT_U16 = DataDict.Constant;
TMPLMONRWDGMODKEYWORD3_CNT_U16.LongName = 'Temporal Monitor Watchdog Mode Key Word 3';
TMPLMONRWDGMODKEYWORD3_CNT_U16.Description = [...
  'Temporal Monitor Watchdog Mode Key Word 3: DEC=7885, BIN = 11110110011' ...
  '01'];
TMPLMONRWDGMODKEYWORD3_CNT_U16.DocUnits = 'Cnt';
TMPLMONRWDGMODKEYWORD3_CNT_U16.EngDT = dt.u16;
TMPLMONRWDGMODKEYWORD3_CNT_U16.EngVal = 7885;
TMPLMONRWDGMODKEYWORD3_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
IninFlt = DataDict.NTC;
IninFlt.NtcNr = NtcNr2.NTCNR_0X040;
IninFlt.NtcTyp = 'None';
IninFlt.LongName = 'Initialization Fault';
IninFlt.Description = 'Temporal Monitor Initialization Fault';
IninFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
IninFlt.NtcStInfo.Bit0Descr = 'Fault Occured Between TmplMonrInitCntr =  10 ~ 11';
IninFlt.NtcStInfo.Bit1Descr = 'Fault Occured Between TmplMonrInitCntr = 13';
IninFlt.NtcStInfo.Bit2Descr = 'Fault Occured Between TmplMonrInitCntr = 15 ~ 16';
IninFlt.NtcStInfo.Bit3Descr = 'Fault Occured at TmplMonrInitCntr = 18  (POE Fault)';
IninFlt.NtcStInfo.Bit4Descr = 'Fault Occured at TmplMonrInitCntr = 19 (WD_STATE Fault)';
IninFlt.NtcStInfo.Bit5Descr = 'Fault Occured at TmplMonrInitCntr = 21 (Edge/Valid Write Fault)';
IninFlt.NtcStInfo.Bit6Descr = 'Fault Occured at TmplMonrInitCntr = 53 (POE + Non-WD Fault)';
IninFlt.NtcStInfo.Bit7Descr = 'Fault Occured at TmplMonrInitCntr = 53 (POE + WD Fault) ';


RtFlt = DataDict.NTC;
RtFlt.NtcNr = NtcNr2.NTCNR_0X041;
RtFlt.NtcTyp = 'None';
RtFlt.LongName = 'Runtime Fault';
RtFlt.Description = 'Temporal Monitor Runtime Fault';
RtFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
RtFlt.NtcStInfo.Bit0Descr = 'WD type Failure';
RtFlt.NtcStInfo.Bit1Descr = 'Non-WD type Failure';
RtFlt.NtcStInfo.Bit2Descr = 'Unused';
RtFlt.NtcStInfo.Bit3Descr = 'Unused';
RtFlt.NtcStInfo.Bit4Descr = 'Unused';
RtFlt.NtcStInfo.Bit5Descr = 'Unused';
RtFlt.NtcStInfo.Bit6Descr = 'Unused';
RtFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
