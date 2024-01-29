%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Jul-2016 14:44:17       %
%                                  Created with tool release: 2.43.0     %
%                                  Synergy file: %version: 10 %           %
%                                  Derived by: %derived_by: wzvp6q %          %
%%-----------------------------------------------------------------------%

ES311A = DataDict.FDD;
ES311A.Version = '1.8.X';
ES311A.LongName = 'Gate Drive 0 Control';
ES311A.ShoName  = 'GateDrv0Ctrl';
ES311A.DesignASIL = 'D';
ES311A.Description = [...
  'Function responsible for configuration, deactivation and determination' ...
  ' of fault status of the Gate Drive 0'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GateDrv0CtrlInit1 = DataDict.Runnable;
GateDrv0CtrlInit1.Context = 'Rte';
GateDrv0CtrlInit1.TimeStep = 0;
GateDrv0CtrlInit1.Description = 'Initialization';

GateDrv0CtrlPer1 = DataDict.Runnable;
GateDrv0CtrlPer1.Context = 'Rte';
GateDrv0CtrlPer1.TimeStep = 0.002;
GateDrv0CtrlPer1.Description = 'Periodic 1';

GateDrv0CtrlPer2 = DataDict.Runnable;
GateDrv0CtrlPer2.Context = 'Rte';
GateDrv0CtrlPer2.TimeStep = 0.002;
GateDrv0CtrlPer2.Description = 'Periodic 2';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Call_Spi_AsyncTransmit = DataDict.Client;
Call_Spi_AsyncTransmit.CallLocation = {'GateDrv0CtrlPer1','GateDrv0CtrlPer2'};
Call_Spi_AsyncTransmit.Description = [...
  'Client Call for writing to registers'];
Call_Spi_AsyncTransmit.Return = DataDict.CSReturn;
Call_Spi_AsyncTransmit.Return.Type = 'Standard';
Call_Spi_AsyncTransmit.Return.Min = 0;
Call_Spi_AsyncTransmit.Return.Max = 1;
Call_Spi_AsyncTransmit.Return.TestTolerance = [];
Call_Spi_AsyncTransmit.Return.Description = '';
Call_Spi_AsyncTransmit.Arguments(1) = DataDict.CSArguments;
Call_Spi_AsyncTransmit.Arguments(1).Name = 'Sequence';
Call_Spi_AsyncTransmit.Arguments(1).EngDT = dt.u08;
Call_Spi_AsyncTransmit.Arguments(1).EngMin = 0;
Call_Spi_AsyncTransmit.Arguments(1).EngMax = 255;
Call_Spi_AsyncTransmit.Arguments(1).Units = 'Cnt';
Call_Spi_AsyncTransmit.Arguments(1).Direction = 'In';
Call_Spi_AsyncTransmit.Arguments(1).InitRowCol = [1  1];
Call_Spi_AsyncTransmit.Arguments(1).Description = 'Sequence';


IoHwAb_GetGpioMotDrvr0Diag = DataDict.Client;
IoHwAb_GetGpioMotDrvr0Diag.CallLocation = {'GateDrv0CtrlPer1','GateDrv0CtrlPer2'};
IoHwAb_GetGpioMotDrvr0Diag.Description = [...
  'Motor Driver 0 Diagnostic Client Call'];
IoHwAb_GetGpioMotDrvr0Diag.Return = DataDict.CSReturn;
IoHwAb_GetGpioMotDrvr0Diag.Return.Type = 'Standard';
IoHwAb_GetGpioMotDrvr0Diag.Return.Min = 0;
IoHwAb_GetGpioMotDrvr0Diag.Return.Max = 1;
IoHwAb_GetGpioMotDrvr0Diag.Return.TestTolerance = 0;
IoHwAb_GetGpioMotDrvr0Diag.Return.Description = '';
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1) = DataDict.CSArguments;
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).Name = 'PinSt';
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).EngDT = dt.lgc;
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).EngMin = 0;
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).EngMax = 1;
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).TestTolerance = 999;
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).Units = 'Cnt';
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).Direction = 'Out';
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).InitRowCol = [1  1];
IoHwAb_GetGpioMotDrvr0Diag.Arguments(1).Description = 'Pin State';


IoHwAb_SetGpioGateDrv0Rst = DataDict.Client;
IoHwAb_SetGpioGateDrv0Rst.CallLocation = {'GateDrv0CtrlPer2'};
IoHwAb_SetGpioGateDrv0Rst.Description = 'Gate Drive Reset Client Call';
IoHwAb_SetGpioGateDrv0Rst.Return = DataDict.CSReturn;
IoHwAb_SetGpioGateDrv0Rst.Return.Type = 'None';
IoHwAb_SetGpioGateDrv0Rst.Return.Min = [];
IoHwAb_SetGpioGateDrv0Rst.Return.Max = [];
IoHwAb_SetGpioGateDrv0Rst.Return.TestTolerance = [];
IoHwAb_SetGpioGateDrv0Rst.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).EngMin = 0;
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).EngMax = 1;
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).Direction = 'In';
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioGateDrv0Rst.Arguments(1).Description = 'Pin State';


IoHwAb_SetGpioSysFlt2A = DataDict.Client;
IoHwAb_SetGpioSysFlt2A.CallLocation = {'GateDrv0CtrlPer2'};
IoHwAb_SetGpioSysFlt2A.Description = 'Set system Fault 2A Client Call';
IoHwAb_SetGpioSysFlt2A.Return = DataDict.CSReturn;
IoHwAb_SetGpioSysFlt2A.Return.Type = 'Standard';
IoHwAb_SetGpioSysFlt2A.Return.Min = 0;
IoHwAb_SetGpioSysFlt2A.Return.Max = 1;
IoHwAb_SetGpioSysFlt2A.Return.TestTolerance = 0;
IoHwAb_SetGpioSysFlt2A.Return.Description = '';
IoHwAb_SetGpioSysFlt2A.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioSysFlt2A.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngMin = 0;
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngMax = 1;
IoHwAb_SetGpioSysFlt2A.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioSysFlt2A.Arguments(1).Direction = 'In';
IoHwAb_SetGpioSysFlt2A.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioSysFlt2A.Arguments(1).Description = 'Pin State';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'GateDrv0CtrlPer2'};
SetNtcSts.Description = 'Set NTC Status Client Call';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Set NTC Status';
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
SetNtcSts.Arguments(2).Description = 'NTC State Information';
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
SetNtcSts.Arguments(4).Description = 'NTC Status';


Spi_ReadIB = DataDict.Client;
Spi_ReadIB.CallLocation = {'GateDrv0CtrlPer2'};
Spi_ReadIB.Description = 'Read Registers Client Call';
Spi_ReadIB.Return = DataDict.CSReturn;
Spi_ReadIB.Return.Type = 'Standard';
Spi_ReadIB.Return.Min = 0;
Spi_ReadIB.Return.Max = 1;
Spi_ReadIB.Return.TestTolerance = [];
Spi_ReadIB.Return.Description = '';
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
Spi_ReadIB.Arguments(2).TestTolerance = 999;
Spi_ReadIB.Arguments(2).Units = 'Cnt';
Spi_ReadIB.Arguments(2).Direction = 'Out';
Spi_ReadIB.Arguments(2).InitRowCol = [1  1];
Spi_ReadIB.Arguments(2).Description = 'Data Buffer Pointer';


Spi_WriteIB = DataDict.Client;
Spi_WriteIB.CallLocation = {'GateDrv0CtrlPer1','GateDrv0CtrlPer2'};
Spi_WriteIB.Description = 'SPI Write';
Spi_WriteIB.Return = DataDict.CSReturn;
Spi_WriteIB.Return.Type = 'Standard';
Spi_WriteIB.Return.Min = 0;
Spi_WriteIB.Return.Max = 1;
Spi_WriteIB.Return.TestTolerance = [];
Spi_WriteIB.Return.Description = '';
Spi_WriteIB.Arguments(1) = DataDict.CSArguments;
Spi_WriteIB.Arguments(1).Name = 'Channel';
Spi_WriteIB.Arguments(1).EngDT = dt.u08;
Spi_WriteIB.Arguments(1).EngMin = 0;
Spi_WriteIB.Arguments(1).EngMax = 255;
Spi_WriteIB.Arguments(1).Units = 'Cnt';
Spi_WriteIB.Arguments(1).Direction = 'In';
Spi_WriteIB.Arguments(1).InitRowCol = [1  1];
Spi_WriteIB.Arguments(1).Description = '';
Spi_WriteIB.Arguments(2) = DataDict.CSArguments;
Spi_WriteIB.Arguments(2).Name = 'DataBufferPtr';
Spi_WriteIB.Arguments(2).EngDT = dt.u16;
Spi_WriteIB.Arguments(2).EngMin = 0;
Spi_WriteIB.Arguments(2).EngMax = 65535;
Spi_WriteIB.Arguments(2).Units = 'Cnt';
Spi_WriteIB.Arguments(2).Direction = 'InPtr';
Spi_WriteIB.Arguments(2).InitRowCol = [1  1];
Spi_WriteIB.Arguments(2).Description = '';



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
DiagcStsIvtr1Inactv.ReadIn = {'GateDrv0CtrlPer1','GateDrv0CtrlPer2'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


PhaALowrCmd = DataDict.IpSignal;
PhaALowrCmd.LongName = 'Phase A Lower Command';
PhaALowrCmd.Description = [...
  'Command Signal for the Phase A lower FET'];
PhaALowrCmd.DocUnits = 'Volt';
PhaALowrCmd.EngDT = dt.Phy;
PhaALowrCmd.EngInit = 0;
PhaALowrCmd.EngMin = 0;
PhaALowrCmd.EngMax = 5;
PhaALowrCmd.ReadIn = {};
PhaALowrCmd.ReadType = 'Phy';


PhaAUpprCmd = DataDict.IpSignal;
PhaAUpprCmd.LongName = 'Phase A Upper Command';
PhaAUpprCmd.Description = [...
  'Command Signal for the Phase A upper FET'];
PhaAUpprCmd.DocUnits = 'Volt';
PhaAUpprCmd.EngDT = dt.Phy;
PhaAUpprCmd.EngInit = 0;
PhaAUpprCmd.EngMin = 0;
PhaAUpprCmd.EngMax = 5;
PhaAUpprCmd.ReadIn = {};
PhaAUpprCmd.ReadType = 'Phy';


PhaBLowrCmd = DataDict.IpSignal;
PhaBLowrCmd.LongName = 'Phase B Lower Command';
PhaBLowrCmd.Description = [...
  'Command Signal for the Phase B lower FET'];
PhaBLowrCmd.DocUnits = 'Volt';
PhaBLowrCmd.EngDT = dt.Phy;
PhaBLowrCmd.EngInit = 0;
PhaBLowrCmd.EngMin = 0;
PhaBLowrCmd.EngMax = 5;
PhaBLowrCmd.ReadIn = {};
PhaBLowrCmd.ReadType = 'Phy';


PhaBUpprCmd = DataDict.IpSignal;
PhaBUpprCmd.LongName = 'Phase B Upper Command';
PhaBUpprCmd.Description = [...
  'Command Signal for the Phase B upper FET'];
PhaBUpprCmd.DocUnits = 'Volt';
PhaBUpprCmd.EngDT = dt.Phy;
PhaBUpprCmd.EngInit = 0;
PhaBUpprCmd.EngMin = 0;
PhaBUpprCmd.EngMax = 5;
PhaBUpprCmd.ReadIn = {};
PhaBUpprCmd.ReadType = 'Phy';


PhaCLowrCmd = DataDict.IpSignal;
PhaCLowrCmd.LongName = 'Phase C Lower Command';
PhaCLowrCmd.Description = [...
  'Command Signal for the Phase C lower FET'];
PhaCLowrCmd.DocUnits = 'Volt';
PhaCLowrCmd.EngDT = dt.Phy;
PhaCLowrCmd.EngInit = 0;
PhaCLowrCmd.EngMin = 0;
PhaCLowrCmd.EngMax = 5;
PhaCLowrCmd.ReadIn = {};
PhaCLowrCmd.ReadType = 'Phy';


PhaCUpprCmd = DataDict.IpSignal;
PhaCUpprCmd.LongName = 'Phase C Upper Command';
PhaCUpprCmd.Description = [...
  'Command Signal for the Phase C upper FET'];
PhaCUpprCmd.DocUnits = 'Volt';
PhaCUpprCmd.EngDT = dt.Phy;
PhaCUpprCmd.EngInit = 0;
PhaCUpprCmd.EngMin = 0;
PhaCUpprCmd.EngMax = 5;
PhaCUpprCmd.ReadIn = {};
PhaCUpprCmd.ReadType = 'Phy';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = [...
  'Signal describing the Start up State'];
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 160;
StrtUpSt.ReadIn = {'GateDrv0CtrlPer1'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'Signal describing the System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'GateDrv0CtrlPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
GateDrv0RstPhy = DataDict.OpSignal;
GateDrv0RstPhy.LongName = 'Physical Gate Drive 0 Reset';
GateDrv0RstPhy.Description = 'Gate Drive 0 Reset physical output';
GateDrv0RstPhy.DocUnits = 'Cnt';
GateDrv0RstPhy.SwcShoName = 'GateDrv0Ctrl';
GateDrv0RstPhy.EngDT = dt.Phy;
GateDrv0RstPhy.EngInit = 0;
GateDrv0RstPhy.EngMin = 0;
GateDrv0RstPhy.EngMax = 1;
GateDrv0RstPhy.TestTolerance = 0;
GateDrv0RstPhy.WrittenIn = {'GateDrv0CtrlPer2'};
GateDrv0RstPhy.WriteType = 'Phy';


MotDrvr0IninTestCmpl = DataDict.OpSignal;
MotDrvr0IninTestCmpl.LongName = 'Motor Driver 0 Initialization Test Complete';
MotDrvr0IninTestCmpl.Description = [...
  'Warm Init configuration and verification test complete flag'];
MotDrvr0IninTestCmpl.DocUnits = 'Cnt';
MotDrvr0IninTestCmpl.SwcShoName = 'GateDrv0Ctrl';
MotDrvr0IninTestCmpl.EngDT = dt.lgc;
MotDrvr0IninTestCmpl.EngInit = 0;
MotDrvr0IninTestCmpl.EngMin = 0;
MotDrvr0IninTestCmpl.EngMax = 1;
MotDrvr0IninTestCmpl.TestTolerance = 0;
MotDrvr0IninTestCmpl.WrittenIn = {'GateDrv0CtrlPer2'};
MotDrvr0IninTestCmpl.WriteType = 'Rte';


PhaAFb = DataDict.OpSignal;
PhaAFb.LongName = 'Phase A Feedback ';
PhaAFb.Description = [...
  'Physical Feedback voltage for Phase A'];
PhaAFb.DocUnits = 'Volt';
PhaAFb.SwcShoName = 'GateDrv0Ctrl';
PhaAFb.EngDT = dt.Phy;
PhaAFb.EngInit = 0;
PhaAFb.EngMin = 0;
PhaAFb.EngMax = 50;
PhaAFb.TestTolerance = 0;
PhaAFb.WrittenIn = {};
PhaAFb.WriteType = 'Phy';


PhaALowrGatePhy = DataDict.OpSignal;
PhaALowrGatePhy.LongName = 'Phase A Lower Gate Drive Physical';
PhaALowrGatePhy.Description = [...
  'Physical Low-side gate drive output for Phase A'];
PhaALowrGatePhy.DocUnits = 'Volt';
PhaALowrGatePhy.SwcShoName = 'GateDrv0Ctrl';
PhaALowrGatePhy.EngDT = dt.Phy;
PhaALowrGatePhy.EngInit = 0;
PhaALowrGatePhy.EngMin = 0;
PhaALowrGatePhy.EngMax = 50;
PhaALowrGatePhy.TestTolerance = 0;
PhaALowrGatePhy.WrittenIn = {};
PhaALowrGatePhy.WriteType = 'Phy';


PhaAUpprGatePhy = DataDict.OpSignal;
PhaAUpprGatePhy.LongName = 'Phase A Upper Gate Physical';
PhaAUpprGatePhy.Description = [...
  'Physical High-side gate drive output for Phase A'];
PhaAUpprGatePhy.DocUnits = 'Volt';
PhaAUpprGatePhy.SwcShoName = 'GateDrv0Ctrl';
PhaAUpprGatePhy.EngDT = dt.Phy;
PhaAUpprGatePhy.EngInit = 0;
PhaAUpprGatePhy.EngMin = 0;
PhaAUpprGatePhy.EngMax = 50;
PhaAUpprGatePhy.TestTolerance = 0;
PhaAUpprGatePhy.WrittenIn = {};
PhaAUpprGatePhy.WriteType = 'Phy';


PhaBFb = DataDict.OpSignal;
PhaBFb.LongName = 'Phase B Feedback ';
PhaBFb.Description = [...
  'Physical Feedback voltage for Phase B'];
PhaBFb.DocUnits = 'Volt';
PhaBFb.SwcShoName = 'GateDrv0Ctrl';
PhaBFb.EngDT = dt.Phy;
PhaBFb.EngInit = 0;
PhaBFb.EngMin = 0;
PhaBFb.EngMax = 50;
PhaBFb.TestTolerance = 0;
PhaBFb.WrittenIn = {};
PhaBFb.WriteType = 'Phy';


PhaBLowrGatePhy = DataDict.OpSignal;
PhaBLowrGatePhy.LongName = 'Phase B Lower Gate Physical';
PhaBLowrGatePhy.Description = [...
  'Physical Low-side gate drive output for Phase B'];
PhaBLowrGatePhy.DocUnits = 'Volt';
PhaBLowrGatePhy.SwcShoName = 'GateDrv0Ctrl';
PhaBLowrGatePhy.EngDT = dt.Phy;
PhaBLowrGatePhy.EngInit = 0;
PhaBLowrGatePhy.EngMin = 0;
PhaBLowrGatePhy.EngMax = 50;
PhaBLowrGatePhy.TestTolerance = 0;
PhaBLowrGatePhy.WrittenIn = {};
PhaBLowrGatePhy.WriteType = 'Phy';


PhaBUpprGatePhy = DataDict.OpSignal;
PhaBUpprGatePhy.LongName = 'Phase B Upper Gate Physical';
PhaBUpprGatePhy.Description = [...
  'Physical High-side gate drive output for Phase B'];
PhaBUpprGatePhy.DocUnits = 'Volt';
PhaBUpprGatePhy.SwcShoName = 'GateDrv0Ctrl';
PhaBUpprGatePhy.EngDT = dt.Phy;
PhaBUpprGatePhy.EngInit = 0;
PhaBUpprGatePhy.EngMin = 0;
PhaBUpprGatePhy.EngMax = 50;
PhaBUpprGatePhy.TestTolerance = 0;
PhaBUpprGatePhy.WrittenIn = {};
PhaBUpprGatePhy.WriteType = 'Phy';


PhaCFb = DataDict.OpSignal;
PhaCFb.LongName = 'Phase C Feedback ';
PhaCFb.Description = [...
  'Physical Feedback voltage for Phase B'];
PhaCFb.DocUnits = 'Volt';
PhaCFb.SwcShoName = 'GateDrv0Ctrl';
PhaCFb.EngDT = dt.Phy;
PhaCFb.EngInit = 0;
PhaCFb.EngMin = 0;
PhaCFb.EngMax = 50;
PhaCFb.TestTolerance = 0;
PhaCFb.WrittenIn = {};
PhaCFb.WriteType = 'Phy';


PhaCLowrGatePhy = DataDict.OpSignal;
PhaCLowrGatePhy.LongName = 'Phase C Lower Gate Physical';
PhaCLowrGatePhy.Description = [...
  'Physical Low-side gate drive output for Phase C'];
PhaCLowrGatePhy.DocUnits = 'Volt';
PhaCLowrGatePhy.SwcShoName = 'GateDrv0Ctrl';
PhaCLowrGatePhy.EngDT = dt.Phy;
PhaCLowrGatePhy.EngInit = 0;
PhaCLowrGatePhy.EngMin = 0;
PhaCLowrGatePhy.EngMax = 50;
PhaCLowrGatePhy.TestTolerance = 0;
PhaCLowrGatePhy.WrittenIn = {};
PhaCLowrGatePhy.WriteType = 'Phy';


PhaCUpprGatePhy = DataDict.OpSignal;
PhaCUpprGatePhy.LongName = 'Phase C Upper Gate Physical';
PhaCUpprGatePhy.Description = [...
  'Physical High-side gate drive output for Phase C'];
PhaCUpprGatePhy.DocUnits = 'Volt';
PhaCUpprGatePhy.SwcShoName = 'GateDrv0Ctrl';
PhaCUpprGatePhy.EngDT = dt.Phy;
PhaCUpprGatePhy.EngInit = 0;
PhaCUpprGatePhy.EngMin = 0;
PhaCUpprGatePhy.EngMax = 50;
PhaCUpprGatePhy.TestTolerance = 0;
PhaCUpprGatePhy.WrittenIn = {};
PhaCUpprGatePhy.WriteType = 'Phy';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
GateDrv0Ena = DataDict.IRV;
GateDrv0Ena.LongName = 'Gate Drive 0 Enable';
GateDrv0Ena.Description = 'Gate Drive 0 Enable';
GateDrv0Ena.DocUnits = 'Cnt';
GateDrv0Ena.EngDT = dt.lgc;
GateDrv0Ena.EngInit = 0;
GateDrv0Ena.EngMin = 0;
GateDrv0Ena.EngMax = 1;
GateDrv0Ena.ReadIn = {'GateDrv0CtrlPer2'};
GateDrv0Ena.WrittenIn = {'GateDrv0CtrlPer1'};


Ivtr0PhyFltInpActv = DataDict.IRV;
Ivtr0PhyFltInpActv.LongName = 'Inverter 0 Physical Fault Input Active';
Ivtr0PhyFltInpActv.Description = 'Inverter 0 Physical Fault Input Active';
Ivtr0PhyFltInpActv.DocUnits = 'Cnt';
Ivtr0PhyFltInpActv.EngDT = dt.lgc;
Ivtr0PhyFltInpActv.EngInit = 0;
Ivtr0PhyFltInpActv.EngMin = 0;
Ivtr0PhyFltInpActv.EngMax = 1;
Ivtr0PhyFltInpActv.ReadIn = {'GateDrv0CtrlPer2'};
Ivtr0PhyFltInpActv.WrittenIn = {'GateDrv0CtrlPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GateDrv0CtrlNtcNr0x050FailStep = DataDict.Calibration;
GateDrv0CtrlNtcNr0x050FailStep.LongName = 'Gate Drive Control NtcNr0X050 Fail Step';
GateDrv0CtrlNtcNr0x050FailStep.Description = [...
  'Fail Step for the runtime General Gate Drive Fault associated with Gat' ...
  'e Drv0'];
GateDrv0CtrlNtcNr0x050FailStep.DocUnits = 'Cnt';
GateDrv0CtrlNtcNr0x050FailStep.EngDT = dt.u16;
GateDrv0CtrlNtcNr0x050FailStep.EngVal = 4096;
GateDrv0CtrlNtcNr0x050FailStep.EngMin = 0;
GateDrv0CtrlNtcNr0x050FailStep.EngMax = 65535;
GateDrv0CtrlNtcNr0x050FailStep.Cardinality = 'Cmn';
GateDrv0CtrlNtcNr0x050FailStep.CustomerVisible = false;
GateDrv0CtrlNtcNr0x050FailStep.Online = false;
GateDrv0CtrlNtcNr0x050FailStep.Impact = 'H';
GateDrv0CtrlNtcNr0x050FailStep.TuningOwner = 'FDD';
GateDrv0CtrlNtcNr0x050FailStep.GraphLink = {''};
GateDrv0CtrlNtcNr0x050FailStep.Monotony = 'None';
GateDrv0CtrlNtcNr0x050FailStep.MaxGrad = 0;
GateDrv0CtrlNtcNr0x050FailStep.PortName = 'GateDrv0CtrlNtcNr0x050FailStep';


GateDrv0CtrlNtcNr0x050PassStep = DataDict.Calibration;
GateDrv0CtrlNtcNr0x050PassStep.LongName = 'Gate Drive Control NtcNr0X050 Pass Step';
GateDrv0CtrlNtcNr0x050PassStep.Description = [...
  'Pass Step for the runtime General Gate Drive Fault associated with Gat' ...
  'e Drv0'];
GateDrv0CtrlNtcNr0x050PassStep.DocUnits = 'Cnt';
GateDrv0CtrlNtcNr0x050PassStep.EngDT = dt.u16;
GateDrv0CtrlNtcNr0x050PassStep.EngVal = 4096;
GateDrv0CtrlNtcNr0x050PassStep.EngMin = 0;
GateDrv0CtrlNtcNr0x050PassStep.EngMax = 65535;
GateDrv0CtrlNtcNr0x050PassStep.Cardinality = 'Cmn';
GateDrv0CtrlNtcNr0x050PassStep.CustomerVisible = false;
GateDrv0CtrlNtcNr0x050PassStep.Online = false;
GateDrv0CtrlNtcNr0x050PassStep.Impact = 'H';
GateDrv0CtrlNtcNr0x050PassStep.TuningOwner = 'FDD';
GateDrv0CtrlNtcNr0x050PassStep.GraphLink = {''};
GateDrv0CtrlNtcNr0x050PassStep.Monotony = 'None';
GateDrv0CtrlNtcNr0x050PassStep.MaxGrad = 0;
GateDrv0CtrlNtcNr0x050PassStep.PortName = 'GateDrv0CtrlNtcNr0x050PassStep';


GateDrv0CtrlNtcNr0x051FailStep = DataDict.Calibration;
GateDrv0CtrlNtcNr0x051FailStep.LongName = 'Gate Drive Control NtcNr0X051 Fail Step';
GateDrv0CtrlNtcNr0x051FailStep.Description = [...
  'Fail Step for the Gate Drive 0 On State Single FET Fault'];
GateDrv0CtrlNtcNr0x051FailStep.DocUnits = 'Cnt';
GateDrv0CtrlNtcNr0x051FailStep.EngDT = dt.u16;
GateDrv0CtrlNtcNr0x051FailStep.EngVal = 4096;
GateDrv0CtrlNtcNr0x051FailStep.EngMin = 0;
GateDrv0CtrlNtcNr0x051FailStep.EngMax = 65535;
GateDrv0CtrlNtcNr0x051FailStep.Cardinality = 'Cmn';
GateDrv0CtrlNtcNr0x051FailStep.CustomerVisible = false;
GateDrv0CtrlNtcNr0x051FailStep.Online = false;
GateDrv0CtrlNtcNr0x051FailStep.Impact = 'H';
GateDrv0CtrlNtcNr0x051FailStep.TuningOwner = 'FDD';
GateDrv0CtrlNtcNr0x051FailStep.GraphLink = {''};
GateDrv0CtrlNtcNr0x051FailStep.Monotony = 'None';
GateDrv0CtrlNtcNr0x051FailStep.MaxGrad = 0;
GateDrv0CtrlNtcNr0x051FailStep.PortName = 'GateDrv0CtrlNtcNr0x051FailStep';


GateDrv0CtrlNtcNr0x051PassStep = DataDict.Calibration;
GateDrv0CtrlNtcNr0x051PassStep.LongName = 'Gate Drive Control NtcNr0X051 Pass Step';
GateDrv0CtrlNtcNr0x051PassStep.Description = [...
  'Pass Step for the Gate Drive 0 On State Single FET Fault'];
GateDrv0CtrlNtcNr0x051PassStep.DocUnits = 'Cnt';
GateDrv0CtrlNtcNr0x051PassStep.EngDT = dt.u16;
GateDrv0CtrlNtcNr0x051PassStep.EngVal = 4096;
GateDrv0CtrlNtcNr0x051PassStep.EngMin = 0;
GateDrv0CtrlNtcNr0x051PassStep.EngMax = 65535;
GateDrv0CtrlNtcNr0x051PassStep.Cardinality = 'Cmn';
GateDrv0CtrlNtcNr0x051PassStep.CustomerVisible = false;
GateDrv0CtrlNtcNr0x051PassStep.Online = false;
GateDrv0CtrlNtcNr0x051PassStep.Impact = 'H';
GateDrv0CtrlNtcNr0x051PassStep.TuningOwner = 'FDD';
GateDrv0CtrlNtcNr0x051PassStep.GraphLink = {''};
GateDrv0CtrlNtcNr0x051PassStep.Monotony = 'None';
GateDrv0CtrlNtcNr0x051PassStep.MaxGrad = 0;
GateDrv0CtrlNtcNr0x051PassStep.PortName = 'GateDrv0CtrlNtcNr0x051PassStep';


GateDrv0CtrlNtcNr0x055FailStep = DataDict.Calibration;
GateDrv0CtrlNtcNr0x055FailStep.LongName = 'Gate Drive Control NtcNr0X055 Fail Step';
GateDrv0CtrlNtcNr0x055FailStep.Description = [...
  'Fail Step for the On-State VREG / Bootstrap Voltage Fault associated w' ...
  'ith Gate Drv 0'];
GateDrv0CtrlNtcNr0x055FailStep.DocUnits = 'Cnt';
GateDrv0CtrlNtcNr0x055FailStep.EngDT = dt.u16;
GateDrv0CtrlNtcNr0x055FailStep.EngVal = 4096;
GateDrv0CtrlNtcNr0x055FailStep.EngMin = 0;
GateDrv0CtrlNtcNr0x055FailStep.EngMax = 65535;
GateDrv0CtrlNtcNr0x055FailStep.Cardinality = 'Cmn';
GateDrv0CtrlNtcNr0x055FailStep.CustomerVisible = false;
GateDrv0CtrlNtcNr0x055FailStep.Online = false;
GateDrv0CtrlNtcNr0x055FailStep.Impact = 'H';
GateDrv0CtrlNtcNr0x055FailStep.TuningOwner = 'FDD';
GateDrv0CtrlNtcNr0x055FailStep.GraphLink = {''};
GateDrv0CtrlNtcNr0x055FailStep.Monotony = 'None';
GateDrv0CtrlNtcNr0x055FailStep.MaxGrad = 0;
GateDrv0CtrlNtcNr0x055FailStep.PortName = 'GateDrv0CtrlNtcNr0x055FailStep';


GateDrv0CtrlNtcNr0x055PassStep = DataDict.Calibration;
GateDrv0CtrlNtcNr0x055PassStep.LongName = 'Gate Drive Control NtcNr0X055 Pass Step';
GateDrv0CtrlNtcNr0x055PassStep.Description = [...
  'Pass Step for the On-State VREG / Bootstrap Voltage Fault associated w' ...
  'ith Gate Drv 0'];
GateDrv0CtrlNtcNr0x055PassStep.DocUnits = 'Cnt';
GateDrv0CtrlNtcNr0x055PassStep.EngDT = dt.u16;
GateDrv0CtrlNtcNr0x055PassStep.EngVal = 4096;
GateDrv0CtrlNtcNr0x055PassStep.EngMin = 0;
GateDrv0CtrlNtcNr0x055PassStep.EngMax = 65535;
GateDrv0CtrlNtcNr0x055PassStep.Cardinality = 'Cmn';
GateDrv0CtrlNtcNr0x055PassStep.CustomerVisible = false;
GateDrv0CtrlNtcNr0x055PassStep.Online = false;
GateDrv0CtrlNtcNr0x055PassStep.Impact = 'H';
GateDrv0CtrlNtcNr0x055PassStep.TuningOwner = 'FDD';
GateDrv0CtrlNtcNr0x055PassStep.GraphLink = {''};
GateDrv0CtrlNtcNr0x055PassStep.Monotony = 'None';
GateDrv0CtrlNtcNr0x055PassStep.MaxGrad = 0;
GateDrv0CtrlNtcNr0x055PassStep.PortName = 'GateDrv0CtrlNtcNr0x055PassStep';


GateDrv0CtrlUnit0Cfg2WrVal = DataDict.Calibration;
GateDrv0CtrlUnit0Cfg2WrVal.LongName = 'Gate Drive Control Unit 0 Config Register 2 Write Value';
GateDrv0CtrlUnit0Cfg2WrVal.Description = [...
  'Configuration value to be written to Cfg2 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv0CtrlUnit0Cfg2WrVal.DocUnits = 'Cnt';
GateDrv0CtrlUnit0Cfg2WrVal.EngDT = dt.u16;
GateDrv0CtrlUnit0Cfg2WrVal.EngVal = 2832;
GateDrv0CtrlUnit0Cfg2WrVal.EngMin = 0;
GateDrv0CtrlUnit0Cfg2WrVal.EngMax = 65535;
GateDrv0CtrlUnit0Cfg2WrVal.Cardinality = 'Cmn';
GateDrv0CtrlUnit0Cfg2WrVal.CustomerVisible = false;
GateDrv0CtrlUnit0Cfg2WrVal.Online = false;
GateDrv0CtrlUnit0Cfg2WrVal.Impact = 'H';
GateDrv0CtrlUnit0Cfg2WrVal.TuningOwner = 'FDD';
GateDrv0CtrlUnit0Cfg2WrVal.GraphLink = {''};
GateDrv0CtrlUnit0Cfg2WrVal.Monotony = 'None';
GateDrv0CtrlUnit0Cfg2WrVal.MaxGrad = 0;
GateDrv0CtrlUnit0Cfg2WrVal.PortName = 'GateDrv0CtrlUnit0Cfg2WrVal';


GateDrv0CtrlUnit0Cfg3WrVal = DataDict.Calibration;
GateDrv0CtrlUnit0Cfg3WrVal.LongName = 'Gate Drive Control Unit 0 Config Register 3 Write Value';
GateDrv0CtrlUnit0Cfg3WrVal.Description = [...
  'Configuration value to be written to Cfg3 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv0CtrlUnit0Cfg3WrVal.DocUnits = 'Cnt';
GateDrv0CtrlUnit0Cfg3WrVal.EngDT = dt.u16;
GateDrv0CtrlUnit0Cfg3WrVal.EngVal = 3598;
GateDrv0CtrlUnit0Cfg3WrVal.EngMin = 0;
GateDrv0CtrlUnit0Cfg3WrVal.EngMax = 65535;
GateDrv0CtrlUnit0Cfg3WrVal.Cardinality = 'Cmn';
GateDrv0CtrlUnit0Cfg3WrVal.CustomerVisible = false;
GateDrv0CtrlUnit0Cfg3WrVal.Online = false;
GateDrv0CtrlUnit0Cfg3WrVal.Impact = 'H';
GateDrv0CtrlUnit0Cfg3WrVal.TuningOwner = 'FDD';
GateDrv0CtrlUnit0Cfg3WrVal.GraphLink = {''};
GateDrv0CtrlUnit0Cfg3WrVal.Monotony = 'None';
GateDrv0CtrlUnit0Cfg3WrVal.MaxGrad = 0;
GateDrv0CtrlUnit0Cfg3WrVal.PortName = 'GateDrv0CtrlUnit0Cfg3WrVal';


GateDrv0CtrlUnit0Cfg4WrVal = DataDict.Calibration;
GateDrv0CtrlUnit0Cfg4WrVal.LongName = 'Gate Drive Control Unit 0 Config Register 4 Write Value';
GateDrv0CtrlUnit0Cfg4WrVal.Description = [...
  'Configuration value to be written to Cfg4 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv0CtrlUnit0Cfg4WrVal.DocUnits = 'Cnt';
GateDrv0CtrlUnit0Cfg4WrVal.EngDT = dt.u16;
GateDrv0CtrlUnit0Cfg4WrVal.EngVal = 4622;
GateDrv0CtrlUnit0Cfg4WrVal.EngMin = 0;
GateDrv0CtrlUnit0Cfg4WrVal.EngMax = 65535;
GateDrv0CtrlUnit0Cfg4WrVal.Cardinality = 'Cmn';
GateDrv0CtrlUnit0Cfg4WrVal.CustomerVisible = false;
GateDrv0CtrlUnit0Cfg4WrVal.Online = false;
GateDrv0CtrlUnit0Cfg4WrVal.Impact = 'H';
GateDrv0CtrlUnit0Cfg4WrVal.TuningOwner = 'FDD';
GateDrv0CtrlUnit0Cfg4WrVal.GraphLink = {''};
GateDrv0CtrlUnit0Cfg4WrVal.Monotony = 'None';
GateDrv0CtrlUnit0Cfg4WrVal.MaxGrad = 0;
GateDrv0CtrlUnit0Cfg4WrVal.PortName = 'GateDrv0CtrlUnit0Cfg4WrVal';


GateDrv0CtrlUnit0Cfg7WrVal = DataDict.Calibration;
GateDrv0CtrlUnit0Cfg7WrVal.LongName = 'Gate Drive Control Unit 0 Config Register 7 Write Value';
GateDrv0CtrlUnit0Cfg7WrVal.Description = [...
  'Configuration value to be written to Cfg7 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv0CtrlUnit0Cfg7WrVal.DocUnits = 'Cnt';
GateDrv0CtrlUnit0Cfg7WrVal.EngDT = dt.u16;
GateDrv0CtrlUnit0Cfg7WrVal.EngVal = 7924;
GateDrv0CtrlUnit0Cfg7WrVal.EngMin = 0;
GateDrv0CtrlUnit0Cfg7WrVal.EngMax = 65535;
GateDrv0CtrlUnit0Cfg7WrVal.Cardinality = 'Cmn';
GateDrv0CtrlUnit0Cfg7WrVal.CustomerVisible = false;
GateDrv0CtrlUnit0Cfg7WrVal.Online = false;
GateDrv0CtrlUnit0Cfg7WrVal.Impact = 'H';
GateDrv0CtrlUnit0Cfg7WrVal.TuningOwner = 'FDD';
GateDrv0CtrlUnit0Cfg7WrVal.GraphLink = {''};
GateDrv0CtrlUnit0Cfg7WrVal.Monotony = 'None';
GateDrv0CtrlUnit0Cfg7WrVal.MaxGrad = 0;
GateDrv0CtrlUnit0Cfg7WrVal.PortName = 'GateDrv0CtrlUnit0Cfg7WrVal';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dGateDrv0CtrlGateDrv0Diag0Val = DataDict.Display;
dGateDrv0CtrlGateDrv0Diag0Val.LongName = 'Display Gate Drive Control Gate Drive 0 Diagnostic 0 Value';
dGateDrv0CtrlGateDrv0Diag0Val.Description = [...
  'Gate Drive 0 Diagnostic Register 0 Value'];
dGateDrv0CtrlGateDrv0Diag0Val.DocUnits = 'Cnt';
dGateDrv0CtrlGateDrv0Diag0Val.EngDT = dt.u16;
dGateDrv0CtrlGateDrv0Diag0Val.EngMin = 0;
dGateDrv0CtrlGateDrv0Diag0Val.EngMax = 65535;
dGateDrv0CtrlGateDrv0Diag0Val.InitRowCol = [1  1];


dGateDrv0CtrlGateDrv0Diag1Val = DataDict.Display;
dGateDrv0CtrlGateDrv0Diag1Val.LongName = 'Display Gate Drive Control Gate Drive 0 Diagnostic 1 Value';
dGateDrv0CtrlGateDrv0Diag1Val.Description = [...
  'Gate Drive 0 Diagnostic Register 1 Value'];
dGateDrv0CtrlGateDrv0Diag1Val.DocUnits = 'Cnt';
dGateDrv0CtrlGateDrv0Diag1Val.EngDT = dt.u16;
dGateDrv0CtrlGateDrv0Diag1Val.EngMin = 0;
dGateDrv0CtrlGateDrv0Diag1Val.EngMax = 65535;
dGateDrv0CtrlGateDrv0Diag1Val.InitRowCol = [1  1];


dGateDrv0CtrlGateDrv0Diag2Val = DataDict.Display;
dGateDrv0CtrlGateDrv0Diag2Val.LongName = 'Display Gate Drive Control Gate Drive 0 Diagnostic 1 Value';
dGateDrv0CtrlGateDrv0Diag2Val.Description = [...
  'Gate Drive 0 Diagnostic Register 2 Value'];
dGateDrv0CtrlGateDrv0Diag2Val.DocUnits = 'Cnt';
dGateDrv0CtrlGateDrv0Diag2Val.EngDT = dt.u16;
dGateDrv0CtrlGateDrv0Diag2Val.EngMin = 0;
dGateDrv0CtrlGateDrv0Diag2Val.EngMax = 65535;
dGateDrv0CtrlGateDrv0Diag2Val.InitRowCol = [1  1];


dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx = DataDict.Display;
dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx.LongName = 'Display Gate Drive Control Gate Drive 0 Off State Verify Parameter Bit Index';
dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx.Description = [...
  'Gate Drive 0 Verify Result 1 Register Value'];
dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx.DocUnits = 'Cnt';
dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx.EngDT = dt.u08;
dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx.EngMin = 0;
dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx.EngMax = 255;
dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx.InitRowCol = [1  1];


dGateDrv0CtrlGateDrv0StsVal = DataDict.Display;
dGateDrv0CtrlGateDrv0StsVal.LongName = 'Display Gate Drive Control Gate Drive 0 Status Value';
dGateDrv0CtrlGateDrv0StsVal.Description = 'Gate Drive 0 Status Register Value';
dGateDrv0CtrlGateDrv0StsVal.DocUnits = 'Cnt';
dGateDrv0CtrlGateDrv0StsVal.EngDT = dt.u16;
dGateDrv0CtrlGateDrv0StsVal.EngMin = 0;
dGateDrv0CtrlGateDrv0StsVal.EngMax = 65535;
dGateDrv0CtrlGateDrv0StsVal.InitRowCol = [1  1];


dGateDrv0CtrlGateDrv0VrfyRes0Val = DataDict.Display;
dGateDrv0CtrlGateDrv0VrfyRes0Val.LongName = 'Display Gate Drive 0 Control Gate Drive 0 Verify Result 0 Value';
dGateDrv0CtrlGateDrv0VrfyRes0Val.Description = [...
  'Gate Drive 0 Verify Result 0 Register Value'];
dGateDrv0CtrlGateDrv0VrfyRes0Val.DocUnits = 'Cnt';
dGateDrv0CtrlGateDrv0VrfyRes0Val.EngDT = dt.u16;
dGateDrv0CtrlGateDrv0VrfyRes0Val.EngMin = 0;
dGateDrv0CtrlGateDrv0VrfyRes0Val.EngMax = 65535;
dGateDrv0CtrlGateDrv0VrfyRes0Val.InitRowCol = [1  1];


dGateDrv0CtrlGateDrv0VrfyRes1Val = DataDict.Display;
dGateDrv0CtrlGateDrv0VrfyRes1Val.LongName = 'Display Gate Drive 0 Control Gate Drive 0 Verify Result 1 Value';
dGateDrv0CtrlGateDrv0VrfyRes1Val.Description = [...
  'Gate Drive 0 Verify Result 1 Register Value'];
dGateDrv0CtrlGateDrv0VrfyRes1Val.DocUnits = 'Cnt';
dGateDrv0CtrlGateDrv0VrfyRes1Val.EngDT = dt.u16;
dGateDrv0CtrlGateDrv0VrfyRes1Val.EngMin = 0;
dGateDrv0CtrlGateDrv0VrfyRes1Val.EngMax = 65535;
dGateDrv0CtrlGateDrv0VrfyRes1Val.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
GateDrv0CfgCnt = DataDict.PIM;
GateDrv0CfgCnt.LongName = 'Gate Drive 0 Configuration Count';
GateDrv0CfgCnt.Description = [...
  'Configuration Step or Count Number associated with Gate Drive 0 initia' ...
  'lization '];
GateDrv0CfgCnt.DocUnits = 'Cnt';
GateDrv0CfgCnt.EngDT = dt.u08;
GateDrv0CfgCnt.EngMin = 0;
GateDrv0CfgCnt.EngMax = 255;
GateDrv0CfgCnt.InitRowCol = [1  1];


GateDrv0CfgSecAtmpt = DataDict.PIM;
GateDrv0CfgSecAtmpt.LongName = 'Gate Drive 0 Off State Check Second Attempt';
GateDrv0CfgSecAtmpt.Description = [...
  'Gate Drive 0 Off State Verification Check Second Attempt'];
GateDrv0CfgSecAtmpt.DocUnits = 'Cnt';
GateDrv0CfgSecAtmpt.EngDT = dt.lgc;
GateDrv0CfgSecAtmpt.EngMin = 0;
GateDrv0CfgSecAtmpt.EngMax = 1;
GateDrv0CfgSecAtmpt.InitRowCol = [1  1];


GateDrv0Diag0Val = DataDict.PIM;
GateDrv0Diag0Val.LongName = 'Gate Drive 0 Diagnosis 0 Value';
GateDrv0Diag0Val.Description = [...
  'Gate Drive 0 Diagnostic Register 0 Value'];
GateDrv0Diag0Val.DocUnits = 'Cnt';
GateDrv0Diag0Val.EngDT = dt.u16;
GateDrv0Diag0Val.EngMin = 0;
GateDrv0Diag0Val.EngMax = 65535;
GateDrv0Diag0Val.InitRowCol = [1  1];


GateDrv0Diag1Val = DataDict.PIM;
GateDrv0Diag1Val.LongName = 'Gate Drive 0 Diagnosis 1 Value';
GateDrv0Diag1Val.Description = [...
  'Gate Drive 0 Diagnostic Register 1 Value'];
GateDrv0Diag1Val.DocUnits = 'Cnt';
GateDrv0Diag1Val.EngDT = dt.u16;
GateDrv0Diag1Val.EngMin = 0;
GateDrv0Diag1Val.EngMax = 65535;
GateDrv0Diag1Val.InitRowCol = [1  1];


GateDrv0Diag2Val = DataDict.PIM;
GateDrv0Diag2Val.LongName = 'Gate Drive 0 Diagnosis 2 Value';
GateDrv0Diag2Val.Description = [...
  'Gate Drive 0 Diagnostic Register 2 Value'];
GateDrv0Diag2Val.DocUnits = 'Cnt';
GateDrv0Diag2Val.EngDT = dt.u16;
GateDrv0Diag2Val.EngMin = 0;
GateDrv0Diag2Val.EngMax = 65535;
GateDrv0Diag2Val.InitRowCol = [1  1];


GateDrv0OffStChkIdx = DataDict.PIM;
GateDrv0OffStChkIdx.LongName = 'Gate Drive 0 Off State Check Index';
GateDrv0OffStChkIdx.Description = [...
  'Gate Drive 0 Off State Verification Check Index'];
GateDrv0OffStChkIdx.DocUnits = 'Cnt';
GateDrv0OffStChkIdx.EngDT = dt.u08;
GateDrv0OffStChkIdx.EngMin = 0;
GateDrv0OffStChkIdx.EngMax = 255;
GateDrv0OffStChkIdx.InitRowCol = [1  1];


GateDrv0OffStChkSecAtmpt = DataDict.PIM;
GateDrv0OffStChkSecAtmpt.LongName = 'Gate Drive 0 Off State Check Second Attempt';
GateDrv0OffStChkSecAtmpt.Description = [...
  'Gate Drive 0 Off State Verification Check Second Attempt'];
GateDrv0OffStChkSecAtmpt.DocUnits = 'Cnt';
GateDrv0OffStChkSecAtmpt.EngDT = dt.lgc;
GateDrv0OffStChkSecAtmpt.EngMin = 0;
GateDrv0OffStChkSecAtmpt.EngMax = 1;
GateDrv0OffStChkSecAtmpt.InitRowCol = [1  1];


GateDrv0OffStCnt = DataDict.PIM;
GateDrv0OffStCnt.LongName = 'Gate Drive OffState Count';
GateDrv0OffStCnt.Description = [...
  'Offstate Verification Step or Count Number associated with Gate Drive ' ...
  '0 initialization '];
GateDrv0OffStCnt.DocUnits = 'Cnt';
GateDrv0OffStCnt.EngDT = dt.u08;
GateDrv0OffStCnt.EngMin = 0;
GateDrv0OffStCnt.EngMax = 255;
GateDrv0OffStCnt.InitRowCol = [1  1];


GateDrv0St = DataDict.PIM;
GateDrv0St.LongName = 'Gate Drive State';
GateDrv0St.Description = [...
  'Operating State of the Gate Drive function when System State is in WAR' ...
  'M INIT / ENABLE, 1 - Off state Verification, 2 -Configuration state, 3' ...
  ' - Operate/Fault monitoring '];
GateDrv0St.DocUnits = 'Cnt';
GateDrv0St.EngDT = dt.u08;
GateDrv0St.EngMin = 0;
GateDrv0St.EngMax = 255;
GateDrv0St.InitRowCol = [1  1];


GateDrv0StsVal = DataDict.PIM;
GateDrv0StsVal.LongName = 'Gate Drive 0 Status Value';
GateDrv0StsVal.Description = 'Gate Drive 0 Status Register Value';
GateDrv0StsVal.DocUnits = 'Cnt';
GateDrv0StsVal.EngDT = dt.u16;
GateDrv0StsVal.EngMin = 0;
GateDrv0StsVal.EngMax = 65535;
GateDrv0StsVal.InitRowCol = [1  1];


GateDrv0VrfyRes0Val = DataDict.PIM;
GateDrv0VrfyRes0Val.LongName = 'Gate Drive 0 Verify Result 0 Value';
GateDrv0VrfyRes0Val.Description = 'Gate Drive 0 Verify Result 0 Value';
GateDrv0VrfyRes0Val.DocUnits = 'Cnt';
GateDrv0VrfyRes0Val.EngDT = dt.u16;
GateDrv0VrfyRes0Val.EngMin = 0;
GateDrv0VrfyRes0Val.EngMax = 65535;
GateDrv0VrfyRes0Val.InitRowCol = [1  1];


GateDrv0VrfyRes1Val = DataDict.PIM;
GateDrv0VrfyRes1Val.LongName = 'Gate Drive 0 Verify Result 1 Value';
GateDrv0VrfyRes1Val.Description = 'Gate Drive 0 Verify Result 1 Value';
GateDrv0VrfyRes1Val.DocUnits = 'Cnt';
GateDrv0VrfyRes1Val.EngDT = dt.u16;
GateDrv0VrfyRes1Val.EngMin = 0;
GateDrv0VrfyRes1Val.EngMax = 65535;
GateDrv0VrfyRes1Val.InitRowCol = [1  1];


Ivtr0BootstrpSplyFltPrmVal = DataDict.PIM;
Ivtr0BootstrpSplyFltPrmVal.LongName = 'Inverter 0 NTC Number 0x55 Parameter Value';
Ivtr0BootstrpSplyFltPrmVal.Description = [...
  'Inverter 0 NTC Number 0x55 Parameter Value'];
Ivtr0BootstrpSplyFltPrmVal.DocUnits = 'Cnt';
Ivtr0BootstrpSplyFltPrmVal.EngDT = dt.u08;
Ivtr0BootstrpSplyFltPrmVal.EngMin = 0;
Ivtr0BootstrpSplyFltPrmVal.EngMax = 255;
Ivtr0BootstrpSplyFltPrmVal.InitRowCol = [1  1];


Ivtr0GenericFltPrmVal = DataDict.PIM;
Ivtr0GenericFltPrmVal.LongName = 'Inverter 0 NTC Number 0x50 Parameter Value';
Ivtr0GenericFltPrmVal.Description = [...
  'Inverter 0 NTC Number 0x50 Parameter Value'];
Ivtr0GenericFltPrmVal.DocUnits = 'Cnt';
Ivtr0GenericFltPrmVal.EngDT = dt.u08;
Ivtr0GenericFltPrmVal.EngMin = 0;
Ivtr0GenericFltPrmVal.EngMax = 255;
Ivtr0GenericFltPrmVal.InitRowCol = [1  1];


Ivtr0OffStChkCmpl = DataDict.PIM;
Ivtr0OffStChkCmpl.LongName = 'Inverter 0 Offstate Check Complete';
Ivtr0OffStChkCmpl.Description = [...
  'Flag indicating completion of the off state verification checks for Ga' ...
  'te Drive 0'];
Ivtr0OffStChkCmpl.DocUnits = 'Cnt';
Ivtr0OffStChkCmpl.EngDT = dt.lgc;
Ivtr0OffStChkCmpl.EngMin = 0;
Ivtr0OffStChkCmpl.EngMax = 1;
Ivtr0OffStChkCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.LongName = 'Gate Drive Configuration  State Parameter Bit Starting Index';
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.Description = [...
  'Gate Drive Configuration  State Parameter Bit Starting Index'];
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.EngVal = 127;
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVCFGST_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVCFGST_CNT_U08.LongName = 'Gate Drive Configuration  State';
ELECGLBPRM_GATEDRVCFGST_CNT_U08.Description = [...
  'Gate Drive Transition to Configuration  State'];
ELECGLBPRM_GATEDRVCFGST_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVCFGST_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVCFGST_CNT_U08.EngVal = 2;
ELECGLBPRM_GATEDRVCFGST_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.LongName = 'Gate Drive Offstate Check Data';
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.Description = 'Offstate Verification Array Data';
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.EngDT = dt.u16;
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.EngVal =  ...
   [21030            32320                1                0                0                0                0               64
    20992                0                1                0                0                0                0                0
    22275                0                1            16672              128               48                0                0
        0                0                1                0                0                0                0                0
        0                0                1                0                0                0                0                0
        0                0                1                0                0                0                0                0
    22019                0                1                0                0                0                0                0
    22147                0                0                0                0                0              112                0
        0                0                0                0                0                0                0                0
        0                0                0                0                0                0                0                0
        0                0                0                0                0                0                0                0
    22019                0                0                0                0                0                0                0
    32362                0                0                0                0                0              112                0
    21008                0                0                0                0                0                0                0
    20992                0                0                0                0                0                0                0
    32362            21120                0            16388                0              448                0                0
    32320            20992                0                0                0                0                0                0
    32341            21120                0            16385               42                0                0                0
    32320            20992                0                0                0                0                0                0
        0                0                1            16385               21                0                0                0];
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Diagnostic 1 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Diagnostic 1 Register Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.EngVal = 4;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Diagnostic 2 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Diagnostic 2 Register Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.EngVal = 5;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Digital Pin Verify Column';
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Digital Pin Check Enable Column Index' ...
  ''];
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.EngVal = 2;
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.LongName = 'Gate Drive Offstate Check Register Write 1 Column 1';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Register Data Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.EngVal = 0;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.LongName = 'Gate Drive Offstate Check Register Write 2 Column';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Register Data Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.EngVal = 1;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Status Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Status Register Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.EngVal = 3;
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.LongName = 'Gate Drive Offstate Check Verify Result 0 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Verify Result 0 Register Column Index' ...
  ''];
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.EngVal = 6;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.LongName = 'Gate Drive Offstate Check Verify Result 1 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Verify Result 1 Register Column Index' ...
  ''];
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.EngVal = 7;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.LongName = 'Gate Drive OffState Verify State';
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.Description = [...
  'Gate Drive Transition to Offstate Verification State'];
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.EngVal = 1;
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.LongName = 'Gate Drive Operate Fault Monitor State';
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.Description = [...
  'Gate Drive Transition to Operate Fault Monitor State'];
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.EngVal = 3;
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.LongName = 'StartUp State - Motor Driver Initialization Start';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.Description = [...
  'Indication to start Motor Driver Initialization '];
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngVal = 80;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.Define = 'Global';


GATEDRV0CFG0READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG0READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 0 Read Value';
GATEDRV0CFG0READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of Status register 5 most MS' ...
  'B bits for fault determination, Value is 15 bits shifted right, with p' ...
  'arity bit added in SPI driver.'];
GATEDRV0CFG0READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG0READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG0READVAL_CNT_U16.EngVal = 0;
GATEDRV0CFG0READVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG0WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG0WRVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 0 Write Value';
GATEDRV0CFG0WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg0 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV0CFG0WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG0WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG0WRVAL_CNT_U16.EngVal = 512;
GATEDRV0CFG0WRVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG1READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 1 Read Value';
GATEDRV0CFG1READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 0 Confi' ...
  'g 1 register.'];
GATEDRV0CFG1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG1READVAL_CNT_U16.EngVal = 1279;
GATEDRV0CFG1READVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG1WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG1WRVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 1 Write Value';
GATEDRV0CFG1WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg1 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV0CFG1WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG1WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG1WRVAL_CNT_U16.EngVal = 1791;
GATEDRV0CFG1WRVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG2READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG2READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 2 Read Value';
GATEDRV0CFG2READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 0 Confi' ...
  'g 2 register.'];
GATEDRV0CFG2READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG2READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG2READVAL_CNT_U16.EngVal = 2320;
GATEDRV0CFG2READVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG3READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG3READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 3 Read Value';
GATEDRV0CFG3READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 0 Confi' ...
  'g 3 register.'];
GATEDRV0CFG3READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG3READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG3READVAL_CNT_U16.EngVal = 3086;
GATEDRV0CFG3READVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG4READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG4READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 4 Read Value';
GATEDRV0CFG4READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 0 Confi' ...
  'g 4 register.'];
GATEDRV0CFG4READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG4READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG4READVAL_CNT_U16.EngVal = 4110;
GATEDRV0CFG4READVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG5READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG5READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 5 Read Value';
GATEDRV0CFG5READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 0 Confi' ...
  'g 5 register.'];
GATEDRV0CFG5READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG5READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG5READVAL_CNT_U16.EngVal = 5312;
GATEDRV0CFG5READVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG5WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG5WRVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 5 Write Value';
GATEDRV0CFG5WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg5 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV0CFG5WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG5WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG5WRVAL_CNT_U16.EngVal = 5824;
GATEDRV0CFG5WRVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG6READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG6READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 6 Read Value';
GATEDRV0CFG6READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 0 Confi' ...
  'g 6 register.'];
GATEDRV0CFG6READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG6READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG6READVAL_CNT_U16.EngVal = 6304;
GATEDRV0CFG6READVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG6WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG6WRVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 6 Write Value';
GATEDRV0CFG6WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg6 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV0CFG6WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG6WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG6WRVAL_CNT_U16.EngVal = 6816;
GATEDRV0CFG6WRVAL_CNT_U16.Define = 'Local';


GATEDRV0CFG7READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CFG7READVAL_CNT_U16.LongName = 'Gate Drive 0 Config Register 7 Read Value';
GATEDRV0CFG7READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 0 Confi' ...
  'g 7 register.'];
GATEDRV0CFG7READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CFG7READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CFG7READVAL_CNT_U16.EngVal = 7413;
GATEDRV0CFG7READVAL_CNT_U16.Define = 'Local';


GATEDRV0CHKVALMASK_CNT_U16 = DataDict.Constant;
GATEDRV0CHKVALMASK_CNT_U16.LongName = 'Gate Drive Check Value Mask';
GATEDRV0CHKVALMASK_CNT_U16.Description = [...
  'Gate Drive 0 and 1 Register Mask Value for Read back of Register'];
GATEDRV0CHKVALMASK_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CHKVALMASK_CNT_U16.EngDT = dt.u16;
GATEDRV0CHKVALMASK_CNT_U16.EngVal = 511;
GATEDRV0CHKVALMASK_CNT_U16.Define = 'Local';


GATEDRV0CTRLREADVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CTRLREADVAL_CNT_U16.LongName = 'Gate Drive 0 Control Register Read Value';
GATEDRV0CTRLREADVAL_CNT_U16.Description = [...
  'Configuration value to be written to enable read of Control register f' ...
  'or Gate Drive 0'];
GATEDRV0CTRLREADVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CTRLREADVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CTRLREADVAL_CNT_U16.EngVal = 31808;
GATEDRV0CTRLREADVAL_CNT_U16.Define = 'Local';


GATEDRV0CTRLVAL_CNT_U16 = DataDict.Constant;
GATEDRV0CTRLVAL_CNT_U16.LongName = 'Gate Drive 0 Control Register Value';
GATEDRV0CTRLVAL_CNT_U16.Description = [...
  'Configuration value to be written to Control register for Gate Drive I' ...
  'C 0, Value is 15 bits shifted right, with parity bit added in SPI driv' ...
  'er.'];
GATEDRV0CTRLVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0CTRLVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0CTRLVAL_CNT_U16.EngVal = 32320;
GATEDRV0CTRLVAL_CNT_U16.Define = 'Local';


GATEDRV0DIAG0READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0DIAG0READVAL_CNT_U16.LongName = 'Gate Drive 0 Diagnostic 0 Register Read Value';
GATEDRV0DIAG0READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of Gate Drv 0 Diag 0 Register'];
GATEDRV0DIAG0READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0DIAG0READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0DIAG0READVAL_CNT_U16.EngVal = 28672;
GATEDRV0DIAG0READVAL_CNT_U16.Define = 'Local';


GATEDRV0DIAG1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0DIAG1READVAL_CNT_U16.LongName = 'Gate Drive 0 Diagnostic 1 Register Read Value';
GATEDRV0DIAG1READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of Gate Drv 0 Diag 1 Register'];
GATEDRV0DIAG1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0DIAG1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0DIAG1READVAL_CNT_U16.EngVal = 29696;
GATEDRV0DIAG1READVAL_CNT_U16.Define = 'Local';


GATEDRV0DIAG2READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0DIAG2READVAL_CNT_U16.LongName = 'Gate Drive 0 Diagnostic 2 Register Read Value';
GATEDRV0DIAG2READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of Gate Drv 0 Diag 2 Register'];
GATEDRV0DIAG2READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0DIAG2READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0DIAG2READVAL_CNT_U16.EngVal = 30720;
GATEDRV0DIAG2READVAL_CNT_U16.Define = 'Local';


GATEDRV0MASK0VAL_CNT_U16 = DataDict.Constant;
GATEDRV0MASK0VAL_CNT_U16.LongName = 'Gate Drive 0 Mask Register 0 Value';
GATEDRV0MASK0VAL_CNT_U16.Description = [...
  'Fault mask to be written to Mask 0 register for Gate Drive IC 0,Value ' ...
  'is 15 bits shifted right, with parity bit added in SPI driver.'];
GATEDRV0MASK0VAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0MASK0VAL_CNT_U16.EngDT = dt.u16;
GATEDRV0MASK0VAL_CNT_U16.EngVal = 26175;
GATEDRV0MASK0VAL_CNT_U16.Define = 'Local';


GATEDRV0MASK1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0MASK1READVAL_CNT_U16.LongName = 'Gate Drive 0 Mask Register 1 Read Value';
GATEDRV0MASK1READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of the Mask 1 register for Gate Dri' ...
  've IC 0, Value is 15 bits shifted right, with parity bit added in SPI ' ...
  'driver.'];
GATEDRV0MASK1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0MASK1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0MASK1READVAL_CNT_U16.EngVal = 26880;
GATEDRV0MASK1READVAL_CNT_U16.Define = 'Local';


GATEDRV0MASK1VAL_CNT_U16 = DataDict.Constant;
GATEDRV0MASK1VAL_CNT_U16.LongName = 'Gate Drive 0 Mask Register 1 Value';
GATEDRV0MASK1VAL_CNT_U16.Description = [...
  'Fault mask to be written to Mask 1 register for Gate Drive IC 0, Value' ...
  ' is 15 bits shifted right, with parity bit added in SPI driver.'];
GATEDRV0MASK1VAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0MASK1VAL_CNT_U16.EngDT = dt.u16;
GATEDRV0MASK1VAL_CNT_U16.EngVal = 27392;
GATEDRV0MASK1VAL_CNT_U16.Define = 'Local';


GATEDRV0MASK2READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0MASK2READVAL_CNT_U16.LongName = 'Gate Drive 0 Mask Register 2 Read Value';
GATEDRV0MASK2READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of the Mask 2 register for Gate Dri' ...
  've IC 0, Value is 15 bits shifted right, with parity bit added in SPI ' ...
  'driver.'];
GATEDRV0MASK2READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0MASK2READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0MASK2READVAL_CNT_U16.EngVal = 27776;
GATEDRV0MASK2READVAL_CNT_U16.Define = 'Local';


GATEDRV0MASK2VAL_CNT_U16 = DataDict.Constant;
GATEDRV0MASK2VAL_CNT_U16.LongName = 'Gate Drive 0 Mask Register 2 Value';
GATEDRV0MASK2VAL_CNT_U16.Description = [...
  'Fault mask to be written to Mask 2 register for Gate Drive IC 0, Value' ...
  ' is 15 bits shifted right, with parity bit added in SPI driver.'];
GATEDRV0MASK2VAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0MASK2VAL_CNT_U16.EngDT = dt.u16;
GATEDRV0MASK2VAL_CNT_U16.EngVal = 28320;
GATEDRV0MASK2VAL_CNT_U16.Define = 'Local';


GATEDRV0VRFYRES0READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0VRFYRES0READVAL_CNT_U16.LongName = 'Gate Drive 0 Verify Result 0 Read Value';
GATEDRV0VRFYRES0READVAL_CNT_U16.Description = [...
  'Value to be written to allow read of the Gate Drive 0 Verify Result 0 ' ...
  'Register'];
GATEDRV0VRFYRES0READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0VRFYRES0READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0VRFYRES0READVAL_CNT_U16.EngVal = 23552;
GATEDRV0VRFYRES0READVAL_CNT_U16.Define = 'Local';


GATEDRV0VRFYRES1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV0VRFYRES1READVAL_CNT_U16.LongName = 'Gate Drive 0 Verify Result 1 Read Value';
GATEDRV0VRFYRES1READVAL_CNT_U16.Description = [...
  'Value to be written to allow read of the Gate Drive 0 Verify Result 1 ' ...
  'Register'];
GATEDRV0VRFYRES1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV0VRFYRES1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV0VRFYRES1READVAL_CNT_U16.EngVal = 24576;
GATEDRV0VRFYRES1READVAL_CNT_U16.Define = 'Local';


SpiConf_SpiChannel_GateDrv0Cfg0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg0Ch.LongName = 'Gate Drive 0 Config 0 Channel';
SpiConf_SpiChannel_GateDrv0Cfg0Ch.Description = 'Channel Id for Config 0 register';
SpiConf_SpiChannel_GateDrv0Cfg0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg0Ch.EngVal = 0;
SpiConf_SpiChannel_GateDrv0Cfg0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Cfg1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg1Ch.LongName = 'Gate Drive 0 Config 1 Channel';
SpiConf_SpiChannel_GateDrv0Cfg1Ch.Description = 'Channel Id for Config 1 register';
SpiConf_SpiChannel_GateDrv0Cfg1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg1Ch.EngVal = 1;
SpiConf_SpiChannel_GateDrv0Cfg1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Cfg2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg2Ch.LongName = 'Gate Drive 0 Config 2 Channel';
SpiConf_SpiChannel_GateDrv0Cfg2Ch.Description = 'Channel Id for Config 2 register';
SpiConf_SpiChannel_GateDrv0Cfg2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg2Ch.EngVal = 2;
SpiConf_SpiChannel_GateDrv0Cfg2Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Cfg3Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg3Ch.LongName = 'Gate Drive 0 Config 3 Channel';
SpiConf_SpiChannel_GateDrv0Cfg3Ch.Description = 'Channel Id for Config 3 register';
SpiConf_SpiChannel_GateDrv0Cfg3Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg3Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg3Ch.EngVal = 3;
SpiConf_SpiChannel_GateDrv0Cfg3Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Cfg4Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg4Ch.LongName = 'Gate Drive 0 Config 4 Channel';
SpiConf_SpiChannel_GateDrv0Cfg4Ch.Description = 'Channel Id for Config 4 register';
SpiConf_SpiChannel_GateDrv0Cfg4Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg4Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg4Ch.EngVal = 4;
SpiConf_SpiChannel_GateDrv0Cfg4Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Cfg5Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg5Ch.LongName = 'Gate Drive 0 Config 5 Channel';
SpiConf_SpiChannel_GateDrv0Cfg5Ch.Description = 'Channel Id for Config 5 register';
SpiConf_SpiChannel_GateDrv0Cfg5Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg5Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg5Ch.EngVal = 5;
SpiConf_SpiChannel_GateDrv0Cfg5Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Cfg6Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg6Ch.LongName = 'Gate Drive 0 Config 6 Channel';
SpiConf_SpiChannel_GateDrv0Cfg6Ch.Description = 'Channel Id for Config 6 register';
SpiConf_SpiChannel_GateDrv0Cfg6Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg6Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg6Ch.EngVal = 6;
SpiConf_SpiChannel_GateDrv0Cfg6Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Cfg7Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg7Ch.LongName = 'Gate Drive 0 Config 7 Channel';
SpiConf_SpiChannel_GateDrv0Cfg7Ch.Description = 'Channel Id for Config 7 register';
SpiConf_SpiChannel_GateDrv0Cfg7Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg7Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg7Ch.EngVal = 7;
SpiConf_SpiChannel_GateDrv0Cfg7Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0CtrlCh = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0CtrlCh.LongName = 'Gate Drive 0 Control Channel';
SpiConf_SpiChannel_GateDrv0CtrlCh.Description = 'Channel Id for Control register';
SpiConf_SpiChannel_GateDrv0CtrlCh.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0CtrlCh.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0CtrlCh.EngVal = 25;
SpiConf_SpiChannel_GateDrv0CtrlCh.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Diag0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Diag0Ch.LongName = 'Gate Drive 0 Diag 0 Channel';
SpiConf_SpiChannel_GateDrv0Diag0Ch.Description = 'Channel Id for Diag 0 register';
SpiConf_SpiChannel_GateDrv0Diag0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Diag0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Diag0Ch.EngVal = 22;
SpiConf_SpiChannel_GateDrv0Diag0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Diag1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Diag1Ch.LongName = 'Gate Drive 0 Diag 1 Channel';
SpiConf_SpiChannel_GateDrv0Diag1Ch.Description = 'Channel Id for Diag 1 register';
SpiConf_SpiChannel_GateDrv0Diag1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Diag1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Diag1Ch.EngVal = 23;
SpiConf_SpiChannel_GateDrv0Diag1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Diag2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Diag2Ch.LongName = 'Gate Drive 0 Diag 2 Channel';
SpiConf_SpiChannel_GateDrv0Diag2Ch.Description = 'Channel Id for Diag 2 register';
SpiConf_SpiChannel_GateDrv0Diag2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Diag2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Diag2Ch.EngVal = 24;
SpiConf_SpiChannel_GateDrv0Diag2Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Mask0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Mask0Ch.LongName = 'Gate Drive 0 Mask 0 Channel';
SpiConf_SpiChannel_GateDrv0Mask0Ch.Description = 'Channel Id for Mask 0 register';
SpiConf_SpiChannel_GateDrv0Mask0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Mask0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Mask0Ch.EngVal = 19;
SpiConf_SpiChannel_GateDrv0Mask0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Mask1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Mask1Ch.LongName = 'Gate Drive 0 Mask 1 Channel';
SpiConf_SpiChannel_GateDrv0Mask1Ch.Description = 'Channel Id for Mask 1 register';
SpiConf_SpiChannel_GateDrv0Mask1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Mask1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Mask1Ch.EngVal = 20;
SpiConf_SpiChannel_GateDrv0Mask1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0Mask2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Mask2Ch.LongName = 'Gate Drive 0 Mask 2 Channel';
SpiConf_SpiChannel_GateDrv0Mask2Ch.Description = 'Channel Id for Mask 2 register';
SpiConf_SpiChannel_GateDrv0Mask2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Mask2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Mask2Ch.EngVal = 21;
SpiConf_SpiChannel_GateDrv0Mask2Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.LongName = 'Gate Drive 0 Verify Command 0 Channel';
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.Description = [...
  'Channel Id for Verify Command 0 register'];
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.EngVal = 14;
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.LongName = 'Gate Drive 0 Verify Command 1 Channel';
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.Description = [...
  'Channel Id for Verify Command 1 register'];
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.EngVal = 15;
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0VrfyRes0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.LongName = 'Gate Drive 0 Verify Result 0 Channel';
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.Description = [...
  'Channel Id for Verify Result 0 register'];
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.EngVal = 17;
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv0VrfyRes1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.LongName = 'Gate Drive 0 Verify Result 1 Channel';
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.Description = [...
  'Channel Id for Verify Result 1 register'];
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.EngVal = 18;
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg0Seq.LongName = 'Gate Drive 0 Config 0 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg0Seq.Description = 'Sequence Id for Config 0 register';
SpiConf_SpiSequence_GateDrv0Cfg0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg0Seq.EngVal = 0;
SpiConf_SpiSequence_GateDrv0Cfg0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg1Seq.LongName = 'Gate Drive 0 Config 1 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg1Seq.Description = 'Sequence Id for Config 1 register';
SpiConf_SpiSequence_GateDrv0Cfg1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg1Seq.EngVal = 1;
SpiConf_SpiSequence_GateDrv0Cfg1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg2Seq.LongName = 'Gate Drive 0 Config 2 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg2Seq.Description = 'Sequence Id for Config 2 register';
SpiConf_SpiSequence_GateDrv0Cfg2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg2Seq.EngVal = 2;
SpiConf_SpiSequence_GateDrv0Cfg2Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg3Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg3Seq.LongName = 'Gate Drive 0 Config 3 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg3Seq.Description = 'Sequence Id for Config 3 register';
SpiConf_SpiSequence_GateDrv0Cfg3Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg3Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg3Seq.EngVal = 3;
SpiConf_SpiSequence_GateDrv0Cfg3Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg4Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg4Seq.LongName = 'Gate Drive 0 Config 4 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg4Seq.Description = 'Sequence Id for Config 4 register';
SpiConf_SpiSequence_GateDrv0Cfg4Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg4Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg4Seq.EngVal = 4;
SpiConf_SpiSequence_GateDrv0Cfg4Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg5Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg5Seq.LongName = 'Gate Drive 0 Config 5 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg5Seq.Description = 'Sequence Id for Config 5 register';
SpiConf_SpiSequence_GateDrv0Cfg5Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg5Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg5Seq.EngVal = 5;
SpiConf_SpiSequence_GateDrv0Cfg5Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg6Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg6Seq.LongName = 'Gate Drive 0 Config 6 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg6Seq.Description = 'Sequence Id for Config 6 register';
SpiConf_SpiSequence_GateDrv0Cfg6Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg6Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg6Seq.EngVal = 6;
SpiConf_SpiSequence_GateDrv0Cfg6Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Cfg7Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg7Seq.LongName = 'Gate Drive 0 Config 7 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg7Seq.Description = 'Sequence Id for Config 7 register';
SpiConf_SpiSequence_GateDrv0Cfg7Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg7Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg7Seq.EngVal = 7;
SpiConf_SpiSequence_GateDrv0Cfg7Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0CtrlSeq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0CtrlSeq.LongName = 'Gate Drive 0 Control Sequence';
SpiConf_SpiSequence_GateDrv0CtrlSeq.Description = 'Sequence Id for Control register';
SpiConf_SpiSequence_GateDrv0CtrlSeq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0CtrlSeq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0CtrlSeq.EngVal = 25;
SpiConf_SpiSequence_GateDrv0CtrlSeq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Diag0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Diag0Seq.LongName = 'Gate Drive 0 Diag 0 Sequence';
SpiConf_SpiSequence_GateDrv0Diag0Seq.Description = 'Sequence Id for Diag 0 register';
SpiConf_SpiSequence_GateDrv0Diag0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Diag0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Diag0Seq.EngVal = 22;
SpiConf_SpiSequence_GateDrv0Diag0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Diag1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Diag1Seq.LongName = 'Gate Drive 0 Diag 1 Sequence';
SpiConf_SpiSequence_GateDrv0Diag1Seq.Description = 'Sequence Id for Diag 1 register';
SpiConf_SpiSequence_GateDrv0Diag1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Diag1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Diag1Seq.EngVal = 23;
SpiConf_SpiSequence_GateDrv0Diag1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Diag2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Diag2Seq.LongName = 'Gate Drive 0 Diag 2 Sequence';
SpiConf_SpiSequence_GateDrv0Diag2Seq.Description = 'Sequence Id for Diag 2 register';
SpiConf_SpiSequence_GateDrv0Diag2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Diag2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Diag2Seq.EngVal = 24;
SpiConf_SpiSequence_GateDrv0Diag2Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Mask0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Mask0Seq.LongName = 'Gate Drive 0 Mask 0 Sequence';
SpiConf_SpiSequence_GateDrv0Mask0Seq.Description = 'Sequence Id for Mask 0 register';
SpiConf_SpiSequence_GateDrv0Mask0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Mask0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Mask0Seq.EngVal = 19;
SpiConf_SpiSequence_GateDrv0Mask0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Mask1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Mask1Seq.LongName = 'Gate Drive 0 Mask 1 Sequence';
SpiConf_SpiSequence_GateDrv0Mask1Seq.Description = 'Sequence Id for Mask 1 register';
SpiConf_SpiSequence_GateDrv0Mask1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Mask1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Mask1Seq.EngVal = 20;
SpiConf_SpiSequence_GateDrv0Mask1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0Mask2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Mask2Seq.LongName = 'Gate Drive 0 Mask 2 Sequence';
SpiConf_SpiSequence_GateDrv0Mask2Seq.Description = 'Sequence Id for Mask 2 register';
SpiConf_SpiSequence_GateDrv0Mask2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Mask2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Mask2Seq.EngVal = 21;
SpiConf_SpiSequence_GateDrv0Mask2Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.LongName = 'Gate Drive 0 Verify Command 0 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.Description = [...
  'Sequence Id for Verify Command 0 register'];
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.EngVal = 14;
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.LongName = 'Gate Drive 0 Verify Command 1 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.Description = [...
  'Sequence Id for Verify Command 1 register'];
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.EngVal = 15;
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0VrfyRes0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.LongName = 'Gate Drive 0 Verify Result 0 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.Description = [...
  'Sequence Id for Verify Result 0 register'];
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.EngVal = 17;
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv0VrfyRes1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.LongName = 'Gate Drive 0 Verify Result 1 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.Description = [...
  'Sequence Id for Verify Result 1 register'];
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.EngVal = 18;
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
GateDrv0GenericFlt = DataDict.NTC;
GateDrv0GenericFlt.NtcNr = NtcNr1.NTCNR_0X050;
GateDrv0GenericFlt.NtcTyp = 'None';
GateDrv0GenericFlt.LongName = 'Gate Drive 0 Generic Fault';
GateDrv0GenericFlt.Description = 'Various general faults associated with Gate Drive 0';
GateDrv0GenericFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
GateDrv0GenericFlt.NtcStInfo.Bit0Descr = 'Over Temperature Fault';
GateDrv0GenericFlt.NtcStInfo.Bit1Descr = 'General Gate Drive Fault';
GateDrv0GenericFlt.NtcStInfo.Bit2Descr = 'Gate Drive Power Supply Fault';
GateDrv0GenericFlt.NtcStInfo.Bit3Descr = 'Gate Drive Serial Comm Fault';
GateDrv0GenericFlt.NtcStInfo.Bit4Descr = 'OverCurrent and Open Load Fault';
GateDrv0GenericFlt.NtcStInfo.Bit5Descr = 'Unused';
GateDrv0GenericFlt.NtcStInfo.Bit6Descr = 'Unused';
GateDrv0GenericFlt.NtcStInfo.Bit7Descr = 'Unused';


GateDrv0OnStSngPhaFlt = DataDict.NTC;
GateDrv0OnStSngPhaFlt.NtcNr = NtcNr1.NTCNR_0X051;
GateDrv0OnStSngPhaFlt.NtcTyp = 'None';
GateDrv0OnStSngPhaFlt.LongName = 'Gate Drive 0 On State Single Phase Fault';
GateDrv0OnStSngPhaFlt.Description = 'On State Single FET Fault associated with Gate Drive 0';
GateDrv0OnStSngPhaFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit0Descr = 'Phase A Lower Fault';
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit1Descr = 'Phase A Upper Fault';
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit2Descr = 'Phase B Lower Fault';
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit3Descr = 'Phase B Upper Fault';
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit4Descr = 'Phase C Lower Fault';
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit5Descr = 'Phase C Upper Fault';
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit6Descr = 'Unused';
GateDrv0OnStSngPhaFlt.NtcStInfo.Bit7Descr = 'Unused';


GateDrv0StrtUpTestFlt = DataDict.NTC;
GateDrv0StrtUpTestFlt.NtcNr = NtcNr1.NTCNR_0X053;
GateDrv0StrtUpTestFlt.NtcTyp = 'None';
GateDrv0StrtUpTestFlt.LongName = 'Gate Drive 0 Inverter Start Up Test Fault';
GateDrv0StrtUpTestFlt.Description = 'Off State Verification and Configure State Faults associated with Gate Drive 0';
GateDrv0StrtUpTestFlt.NtcStInfo = DataDict.NtcStInfoIdx;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(1).EngVal = 0;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(1).Descr = 'Gate Drive not turned OFF';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(2).EngVal = 1;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(2).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(3).EngVal = 2;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(3).Descr = 'VREG UV, VBB OV, VBB UV Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(4).EngVal = 3;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(4).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(5).EngVal = 4;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(5).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(6).EngVal = 5;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(6).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(7).EngVal = 6;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(7).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(8).EngVal = 7;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(8).Descr = 'Phase Disconnect Low Side';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(9).EngVal = 8;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(9).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(10).EngVal = 9;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(10).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(11).EngVal = 10;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(11).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(12).EngVal = 11;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(12).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(13).EngVal = 12;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(13).Descr = 'Phase Disconnect High Side';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(14).EngVal = 13;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(14).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(15).EngVal = 14;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(15).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(16).EngVal = 15;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(16).Descr = 'Bootstrap Undervoltage Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(17).EngVal = 16;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(17).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(18).EngVal = 17;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(18).Descr = 'High Side - VDS Overvoltage  Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(19).EngVal = 18;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(19).Descr = 'Unused';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(20).EngVal = 19;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(20).Descr = 'Low Side - VDS Overvoltage  Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(21).EngVal = 128;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(21).Descr = 'Configure 0 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(22).EngVal = 129;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(22).Descr = 'Configure 1 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(23).EngVal = 130;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(23).Descr = 'Configure 2 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(24).EngVal = 131;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(24).Descr = 'Configure 3 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(25).EngVal = 132;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(25).Descr = 'Configure 4 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(26).EngVal = 133;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(26).Descr = 'Configure 5 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(27).EngVal = 134;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(27).Descr = 'Configure 6 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(28).EngVal = 135;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(28).Descr = 'Configure 7 Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(29).EngVal = 136;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(29).Descr = 'Control Register Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(30).EngVal = 137;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(30).Descr = 'Mask Register 1 Fault';
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(31).EngVal = 138;
GateDrv0StrtUpTestFlt.NtcStInfo.Idx(31).Descr = 'Mask Register 2 Fault';


GateDrv0VltgRgltrBootstrpSplyFlt = DataDict.NTC;
GateDrv0VltgRgltrBootstrpSplyFlt.NtcNr = NtcNr1.NTCNR_0X055;
GateDrv0VltgRgltrBootstrpSplyFlt.NtcTyp = 'None';
GateDrv0VltgRgltrBootstrpSplyFlt.LongName = 'Gate Drive 0 Boot Strap Supply Fault';
GateDrv0VltgRgltrBootstrpSplyFlt.Description = 'Onstate VREG and Bootstrap supply monitor fault associated with Gate Drive 0';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit0Descr = 'Charge Pump Under Voltage Fault';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit1Descr = 'Bootstrap undervoltage, Phase A Fault';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit2Descr = 'Bootstrap undervoltage, Phase B Fault';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit3Descr = 'Bootstrap undervoltage, Phase C Fault';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit4Descr = 'Unused';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit5Descr = 'Unused';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit6Descr = 'Unused';
GateDrv0VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
