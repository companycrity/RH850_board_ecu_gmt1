%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 13-Jul-2016 09:04:38       %
%                                  Created with tool release: 2.43.0     %
%                                  Synergy file: %version: 11 %           %
%                                  Derived by: %derived_by: wzvp6q %          %
%%-----------------------------------------------------------------------%

ES312A = DataDict.FDD;
ES312A.Version = '1.8.X';
ES312A.LongName = 'Gate Drive 1 Control';
ES312A.ShoName  = 'GateDrv1Ctrl';
ES312A.DesignASIL = 'D';
ES312A.Description = [...
  'Function responsible for configuration, deactivation and determination' ...
  ' of fault status of the Gate Drive 1'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GateDrv1CtrlInit1 = DataDict.Runnable;
GateDrv1CtrlInit1.Context = 'Rte';
GateDrv1CtrlInit1.TimeStep = 0;
GateDrv1CtrlInit1.Description = 'Initialization';

GateDrv1CtrlPer1 = DataDict.Runnable;
GateDrv1CtrlPer1.Context = 'Rte';
GateDrv1CtrlPer1.TimeStep = 0.002;
GateDrv1CtrlPer1.Description = 'Periodic 1';

GateDrv1CtrlPer2 = DataDict.Runnable;
GateDrv1CtrlPer2.Context = 'Rte';
GateDrv1CtrlPer2.TimeStep = 0.002;
GateDrv1CtrlPer2.Description = 'Periodic 2';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Call_Spi_AsyncTransmit = DataDict.Client;
Call_Spi_AsyncTransmit.CallLocation = {'GateDrv1CtrlPer1','GateDrv1CtrlPer2'};
Call_Spi_AsyncTransmit.Description = 'Clent Call for writing registers';
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


IoHwAb_GetGpioMotDrvr1Diag = DataDict.Client;
IoHwAb_GetGpioMotDrvr1Diag.CallLocation = {'GateDrv1CtrlPer1','GateDrv1CtrlPer2'};
IoHwAb_GetGpioMotDrvr1Diag.Description = [...
  'Motor Driver 1 Diagnostic Client Call'];
IoHwAb_GetGpioMotDrvr1Diag.Return = DataDict.CSReturn;
IoHwAb_GetGpioMotDrvr1Diag.Return.Type = 'Standard';
IoHwAb_GetGpioMotDrvr1Diag.Return.Min = 0;
IoHwAb_GetGpioMotDrvr1Diag.Return.Max = 1;
IoHwAb_GetGpioMotDrvr1Diag.Return.TestTolerance = 0;
IoHwAb_GetGpioMotDrvr1Diag.Return.Description = '';
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1) = DataDict.CSArguments;
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).Name = 'PinSt';
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).EngDT = dt.lgc;
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).EngMin = 0;
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).EngMax = 1;
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).TestTolerance = 999;
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).Units = 'Cnt';
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).Direction = 'Out';
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).InitRowCol = [1  1];
IoHwAb_GetGpioMotDrvr1Diag.Arguments(1).Description = 'Pin State';


IoHwAb_SetGpioGateDrv1Rst = DataDict.Client;
IoHwAb_SetGpioGateDrv1Rst.CallLocation = {'GateDrv1CtrlPer2'};
IoHwAb_SetGpioGateDrv1Rst.Description = 'Gate Drive Reset Client Call';
IoHwAb_SetGpioGateDrv1Rst.Return = DataDict.CSReturn;
IoHwAb_SetGpioGateDrv1Rst.Return.Type = 'None';
IoHwAb_SetGpioGateDrv1Rst.Return.Min = [];
IoHwAb_SetGpioGateDrv1Rst.Return.Max = [];
IoHwAb_SetGpioGateDrv1Rst.Return.TestTolerance = [];
IoHwAb_SetGpioGateDrv1Rst.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).EngMin = 0;
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).EngMax = 1;
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).Direction = 'In';
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioGateDrv1Rst.Arguments(1).Description = 'Pin State';


IoHwAb_SetGpioSysFlt2B = DataDict.Client;
IoHwAb_SetGpioSysFlt2B.CallLocation = {'GateDrv1CtrlPer2'};
IoHwAb_SetGpioSysFlt2B.Description = 'Set system Fault 2A Client Call';
IoHwAb_SetGpioSysFlt2B.Return = DataDict.CSReturn;
IoHwAb_SetGpioSysFlt2B.Return.Type = 'Standard';
IoHwAb_SetGpioSysFlt2B.Return.Min = 0;
IoHwAb_SetGpioSysFlt2B.Return.Max = 1;
IoHwAb_SetGpioSysFlt2B.Return.TestTolerance = 0;
IoHwAb_SetGpioSysFlt2B.Return.Description = '';
IoHwAb_SetGpioSysFlt2B.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioSysFlt2B.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioSysFlt2B.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioSysFlt2B.Arguments(1).EngMin = 0;
IoHwAb_SetGpioSysFlt2B.Arguments(1).EngMax = 1;
IoHwAb_SetGpioSysFlt2B.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioSysFlt2B.Arguments(1).Direction = 'In';
IoHwAb_SetGpioSysFlt2B.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioSysFlt2B.Arguments(1).Description = 'Pin State';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'GateDrv1CtrlPer2'};
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
Spi_ReadIB.CallLocation = {'GateDrv1CtrlPer2'};
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
Spi_WriteIB.CallLocation = {'GateDrv1CtrlPer1','GateDrv1CtrlPer2'};
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
DiagcStsIvtr2Inactv = DataDict.IpSignal;
DiagcStsIvtr2Inactv.LongName = 'Diagnostic Status Inverter 2 Inactive';
DiagcStsIvtr2Inactv.Description = [...
  'Signal indicating the status of Inverter 2'];
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.ReadIn = {'GateDrv1CtrlPer1','GateDrv1CtrlPer2'};
DiagcStsIvtr2Inactv.ReadType = 'Rte';


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
StrtUpSt.ReadIn = {'GateDrv1CtrlPer1'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'Signal describing the System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'GateDrv1CtrlPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
GateDrv1RstPhy = DataDict.OpSignal;
GateDrv1RstPhy.LongName = 'Physical Gate Drive 1 Reset';
GateDrv1RstPhy.Description = 'Gate Drive 1 Reset physical output';
GateDrv1RstPhy.DocUnits = 'Cnt';
GateDrv1RstPhy.SwcShoName = 'GateDrv1Ctrl';
GateDrv1RstPhy.EngDT = dt.Phy;
GateDrv1RstPhy.EngInit = 0;
GateDrv1RstPhy.EngMin = 0;
GateDrv1RstPhy.EngMax = 1;
GateDrv1RstPhy.TestTolerance = 0;
GateDrv1RstPhy.WrittenIn = {'GateDrv1CtrlPer2'};
GateDrv1RstPhy.WriteType = 'Phy';


MotDrvr1IninTestCmpl = DataDict.OpSignal;
MotDrvr1IninTestCmpl.LongName = 'Motor Driver 1 Initialization Test Complete';
MotDrvr1IninTestCmpl.Description = [...
  'Warm Init configuration and verification test complete flag'];
MotDrvr1IninTestCmpl.DocUnits = 'Cnt';
MotDrvr1IninTestCmpl.SwcShoName = 'GateDrv1Ctrl';
MotDrvr1IninTestCmpl.EngDT = dt.lgc;
MotDrvr1IninTestCmpl.EngInit = 0;
MotDrvr1IninTestCmpl.EngMin = 0;
MotDrvr1IninTestCmpl.EngMax = 1;
MotDrvr1IninTestCmpl.TestTolerance = 0;
MotDrvr1IninTestCmpl.WrittenIn = {'GateDrv1CtrlPer2'};
MotDrvr1IninTestCmpl.WriteType = 'Rte';


PhaDFb = DataDict.OpSignal;
PhaDFb.LongName = 'Phase D Feedback ';
PhaDFb.Description = [...
  'Physical Feedback voltage for Phase D'];
PhaDFb.DocUnits = 'Volt';
PhaDFb.SwcShoName = 'GateDrv1Ctrl';
PhaDFb.EngDT = dt.Phy;
PhaDFb.EngInit = 0;
PhaDFb.EngMin = 0;
PhaDFb.EngMax = 50;
PhaDFb.TestTolerance = 0;
PhaDFb.WrittenIn = {};
PhaDFb.WriteType = 'Phy';


PhaDLowrGatePhy = DataDict.OpSignal;
PhaDLowrGatePhy.LongName = 'Phase D Lower Gate Drive Physical';
PhaDLowrGatePhy.Description = [...
  'Physical Low-side gate drive output for Phase D'];
PhaDLowrGatePhy.DocUnits = 'Volt';
PhaDLowrGatePhy.SwcShoName = 'GateDrv1Ctrl';
PhaDLowrGatePhy.EngDT = dt.Phy;
PhaDLowrGatePhy.EngInit = 0;
PhaDLowrGatePhy.EngMin = 0;
PhaDLowrGatePhy.EngMax = 50;
PhaDLowrGatePhy.TestTolerance = 0;
PhaDLowrGatePhy.WrittenIn = {};
PhaDLowrGatePhy.WriteType = 'Phy';


PhaDUpprGatePhy = DataDict.OpSignal;
PhaDUpprGatePhy.LongName = 'Phase D Upper Gate Physical';
PhaDUpprGatePhy.Description = [...
  'Physical High-side gate drive output for Phase D'];
PhaDUpprGatePhy.DocUnits = 'Volt';
PhaDUpprGatePhy.SwcShoName = 'GateDrv1Ctrl';
PhaDUpprGatePhy.EngDT = dt.Phy;
PhaDUpprGatePhy.EngInit = 0;
PhaDUpprGatePhy.EngMin = 0;
PhaDUpprGatePhy.EngMax = 50;
PhaDUpprGatePhy.TestTolerance = 0;
PhaDUpprGatePhy.WrittenIn = {};
PhaDUpprGatePhy.WriteType = 'Phy';


PhaEFb = DataDict.OpSignal;
PhaEFb.LongName = 'Phase E Feedback ';
PhaEFb.Description = [...
  'Physical Feedback voltage for Phase E'];
PhaEFb.DocUnits = 'Volt';
PhaEFb.SwcShoName = 'GateDrv1Ctrl';
PhaEFb.EngDT = dt.Phy;
PhaEFb.EngInit = 0;
PhaEFb.EngMin = 0;
PhaEFb.EngMax = 50;
PhaEFb.TestTolerance = 0;
PhaEFb.WrittenIn = {};
PhaEFb.WriteType = 'Phy';


PhaELowrGatePhy = DataDict.OpSignal;
PhaELowrGatePhy.LongName = 'Phase E Lower Gate Physical';
PhaELowrGatePhy.Description = [...
  'Physical Low-side gate drive output for Phase E'];
PhaELowrGatePhy.DocUnits = 'Volt';
PhaELowrGatePhy.SwcShoName = 'GateDrv1Ctrl';
PhaELowrGatePhy.EngDT = dt.Phy;
PhaELowrGatePhy.EngInit = 0;
PhaELowrGatePhy.EngMin = 0;
PhaELowrGatePhy.EngMax = 50;
PhaELowrGatePhy.TestTolerance = 0;
PhaELowrGatePhy.WrittenIn = {};
PhaELowrGatePhy.WriteType = 'Phy';


PhaEUpprGatePhy = DataDict.OpSignal;
PhaEUpprGatePhy.LongName = 'Phase E Upper Gate Physical';
PhaEUpprGatePhy.Description = [...
  'Physical High-side gate drive output for Phase E'];
PhaEUpprGatePhy.DocUnits = 'Volt';
PhaEUpprGatePhy.SwcShoName = 'GateDrv1Ctrl';
PhaEUpprGatePhy.EngDT = dt.Phy;
PhaEUpprGatePhy.EngInit = 0;
PhaEUpprGatePhy.EngMin = 0;
PhaEUpprGatePhy.EngMax = 50;
PhaEUpprGatePhy.TestTolerance = 0;
PhaEUpprGatePhy.WrittenIn = {};
PhaEUpprGatePhy.WriteType = 'Phy';


PhaFFb = DataDict.OpSignal;
PhaFFb.LongName = 'Phase F Feedback ';
PhaFFb.Description = [...
  'Physical Feedback voltage for Phase F'];
PhaFFb.DocUnits = 'Volt';
PhaFFb.SwcShoName = 'GateDrv1Ctrl';
PhaFFb.EngDT = dt.Phy;
PhaFFb.EngInit = 0;
PhaFFb.EngMin = 0;
PhaFFb.EngMax = 50;
PhaFFb.TestTolerance = 0;
PhaFFb.WrittenIn = {};
PhaFFb.WriteType = 'Phy';


PhaFLowrGatePhy = DataDict.OpSignal;
PhaFLowrGatePhy.LongName = 'Phase F Lower Gate Physical';
PhaFLowrGatePhy.Description = [...
  'Physical Low-side gate drive output for Phase F'];
PhaFLowrGatePhy.DocUnits = 'Volt';
PhaFLowrGatePhy.SwcShoName = 'GateDrv1Ctrl';
PhaFLowrGatePhy.EngDT = dt.Phy;
PhaFLowrGatePhy.EngInit = 0;
PhaFLowrGatePhy.EngMin = 0;
PhaFLowrGatePhy.EngMax = 50;
PhaFLowrGatePhy.TestTolerance = 0;
PhaFLowrGatePhy.WrittenIn = {};
PhaFLowrGatePhy.WriteType = 'Phy';


PhaFUpprGatePhy = DataDict.OpSignal;
PhaFUpprGatePhy.LongName = 'Phase F Upper Gate Physical';
PhaFUpprGatePhy.Description = [...
  'Physical High-side gate drive output for Phase F'];
PhaFUpprGatePhy.DocUnits = 'Volt';
PhaFUpprGatePhy.SwcShoName = 'GateDrv1Ctrl';
PhaFUpprGatePhy.EngDT = dt.Phy;
PhaFUpprGatePhy.EngInit = 0;
PhaFUpprGatePhy.EngMin = 0;
PhaFUpprGatePhy.EngMax = 50;
PhaFUpprGatePhy.TestTolerance = 0;
PhaFUpprGatePhy.WrittenIn = {};
PhaFUpprGatePhy.WriteType = 'Phy';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
GateDrv1Ena = DataDict.IRV;
GateDrv1Ena.LongName = 'Gate Drive 1 Enable';
GateDrv1Ena.Description = 'Gate Drive 1 Enable';
GateDrv1Ena.DocUnits = 'Cnt';
GateDrv1Ena.EngDT = dt.lgc;
GateDrv1Ena.EngInit = 0;
GateDrv1Ena.EngMin = 0;
GateDrv1Ena.EngMax = 1;
GateDrv1Ena.ReadIn = {'GateDrv1CtrlPer2'};
GateDrv1Ena.WrittenIn = {'GateDrv1CtrlPer1'};


Ivtr1PhyFltInpActv = DataDict.IRV;
Ivtr1PhyFltInpActv.LongName = 'Inverter 1 Physical Fault Input Active';
Ivtr1PhyFltInpActv.Description = [...
  'Inverter 1 Physical Fault Input Active'];
Ivtr1PhyFltInpActv.DocUnits = 'Cnt';
Ivtr1PhyFltInpActv.EngDT = dt.lgc;
Ivtr1PhyFltInpActv.EngInit = 0;
Ivtr1PhyFltInpActv.EngMin = 0;
Ivtr1PhyFltInpActv.EngMax = 1;
Ivtr1PhyFltInpActv.ReadIn = {'GateDrv1CtrlPer2'};
Ivtr1PhyFltInpActv.WrittenIn = {'GateDrv1CtrlPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GateDrv1CtrlNtcNr0x060FailStep = DataDict.Calibration;
GateDrv1CtrlNtcNr0x060FailStep.LongName = 'Gate Drive 1 Control NtcNr0X060 Fail Step';
GateDrv1CtrlNtcNr0x060FailStep.Description = [...
  'Fail Step for the runtime General Gate Drive 1 Fault associated with G' ...
  'ate Drv 1'];
GateDrv1CtrlNtcNr0x060FailStep.DocUnits = 'Cnt';
GateDrv1CtrlNtcNr0x060FailStep.EngDT = dt.u16;
GateDrv1CtrlNtcNr0x060FailStep.EngVal = 4096;
GateDrv1CtrlNtcNr0x060FailStep.EngMin = 0;
GateDrv1CtrlNtcNr0x060FailStep.EngMax = 65535;
GateDrv1CtrlNtcNr0x060FailStep.Cardinality = 'Cmn';
GateDrv1CtrlNtcNr0x060FailStep.CustomerVisible = false;
GateDrv1CtrlNtcNr0x060FailStep.Online = false;
GateDrv1CtrlNtcNr0x060FailStep.Impact = 'H';
GateDrv1CtrlNtcNr0x060FailStep.TuningOwner = 'FDD';
GateDrv1CtrlNtcNr0x060FailStep.GraphLink = {''};
GateDrv1CtrlNtcNr0x060FailStep.Monotony = 'None';
GateDrv1CtrlNtcNr0x060FailStep.MaxGrad = 0;
GateDrv1CtrlNtcNr0x060FailStep.PortName = 'GateDrv1CtrlNtcNr0x060FailStep';


GateDrv1CtrlNtcNr0x060PassStep = DataDict.Calibration;
GateDrv1CtrlNtcNr0x060PassStep.LongName = 'Gate Drive 1 Control NtcNr0X060 Pass Step';
GateDrv1CtrlNtcNr0x060PassStep.Description = [...
  'Pass Step for the runtime General Gate Drive Fault associated with Gat' ...
  'e Drv 1'];
GateDrv1CtrlNtcNr0x060PassStep.DocUnits = 'Cnt';
GateDrv1CtrlNtcNr0x060PassStep.EngDT = dt.u16;
GateDrv1CtrlNtcNr0x060PassStep.EngVal = 4096;
GateDrv1CtrlNtcNr0x060PassStep.EngMin = 0;
GateDrv1CtrlNtcNr0x060PassStep.EngMax = 65535;
GateDrv1CtrlNtcNr0x060PassStep.Cardinality = 'Cmn';
GateDrv1CtrlNtcNr0x060PassStep.CustomerVisible = false;
GateDrv1CtrlNtcNr0x060PassStep.Online = false;
GateDrv1CtrlNtcNr0x060PassStep.Impact = 'H';
GateDrv1CtrlNtcNr0x060PassStep.TuningOwner = 'FDD';
GateDrv1CtrlNtcNr0x060PassStep.GraphLink = {''};
GateDrv1CtrlNtcNr0x060PassStep.Monotony = 'None';
GateDrv1CtrlNtcNr0x060PassStep.MaxGrad = 0;
GateDrv1CtrlNtcNr0x060PassStep.PortName = 'GateDrv1CtrlNtcNr0x060PassStep';


GateDrv1CtrlNtcNr0x061FailStep = DataDict.Calibration;
GateDrv1CtrlNtcNr0x061FailStep.LongName = 'Gate Drive 1 Control NtcNr0X061 Fail Step';
GateDrv1CtrlNtcNr0x061FailStep.Description = [...
  'Fail Step for the Gate Drive 1 On State Single FET Fault'];
GateDrv1CtrlNtcNr0x061FailStep.DocUnits = 'Cnt';
GateDrv1CtrlNtcNr0x061FailStep.EngDT = dt.u16;
GateDrv1CtrlNtcNr0x061FailStep.EngVal = 4096;
GateDrv1CtrlNtcNr0x061FailStep.EngMin = 0;
GateDrv1CtrlNtcNr0x061FailStep.EngMax = 65535;
GateDrv1CtrlNtcNr0x061FailStep.Cardinality = 'Cmn';
GateDrv1CtrlNtcNr0x061FailStep.CustomerVisible = false;
GateDrv1CtrlNtcNr0x061FailStep.Online = false;
GateDrv1CtrlNtcNr0x061FailStep.Impact = 'H';
GateDrv1CtrlNtcNr0x061FailStep.TuningOwner = 'FDD';
GateDrv1CtrlNtcNr0x061FailStep.GraphLink = {''};
GateDrv1CtrlNtcNr0x061FailStep.Monotony = 'None';
GateDrv1CtrlNtcNr0x061FailStep.MaxGrad = 0;
GateDrv1CtrlNtcNr0x061FailStep.PortName = 'GateDrv1CtrlNtcNr0x061FailStep';


GateDrv1CtrlNtcNr0x061PassStep = DataDict.Calibration;
GateDrv1CtrlNtcNr0x061PassStep.LongName = 'Gate Drive 1 Control NtcNr0X061 Pass Step';
GateDrv1CtrlNtcNr0x061PassStep.Description = [...
  'Pass Step for the Gate Drive 1 On State Single FET Fault'];
GateDrv1CtrlNtcNr0x061PassStep.DocUnits = 'Cnt';
GateDrv1CtrlNtcNr0x061PassStep.EngDT = dt.u16;
GateDrv1CtrlNtcNr0x061PassStep.EngVal = 4096;
GateDrv1CtrlNtcNr0x061PassStep.EngMin = 0;
GateDrv1CtrlNtcNr0x061PassStep.EngMax = 65535;
GateDrv1CtrlNtcNr0x061PassStep.Cardinality = 'Cmn';
GateDrv1CtrlNtcNr0x061PassStep.CustomerVisible = false;
GateDrv1CtrlNtcNr0x061PassStep.Online = false;
GateDrv1CtrlNtcNr0x061PassStep.Impact = 'H';
GateDrv1CtrlNtcNr0x061PassStep.TuningOwner = 'FDD';
GateDrv1CtrlNtcNr0x061PassStep.GraphLink = {''};
GateDrv1CtrlNtcNr0x061PassStep.Monotony = 'None';
GateDrv1CtrlNtcNr0x061PassStep.MaxGrad = 0;
GateDrv1CtrlNtcNr0x061PassStep.PortName = 'GateDrv1CtrlNtcNr0x061PassStep';


GateDrv1CtrlNtcNr0x065FailStep = DataDict.Calibration;
GateDrv1CtrlNtcNr0x065FailStep.LongName = 'Gate Drive Control NtcNr0X065 Fail Step';
GateDrv1CtrlNtcNr0x065FailStep.Description = [...
  'Fail Step for the On-State VREG / Bootstrap Voltage Fault associated w' ...
  'ith Gate Drv 1'];
GateDrv1CtrlNtcNr0x065FailStep.DocUnits = 'Cnt';
GateDrv1CtrlNtcNr0x065FailStep.EngDT = dt.u16;
GateDrv1CtrlNtcNr0x065FailStep.EngVal = 4096;
GateDrv1CtrlNtcNr0x065FailStep.EngMin = 0;
GateDrv1CtrlNtcNr0x065FailStep.EngMax = 65535;
GateDrv1CtrlNtcNr0x065FailStep.Cardinality = 'Cmn';
GateDrv1CtrlNtcNr0x065FailStep.CustomerVisible = false;
GateDrv1CtrlNtcNr0x065FailStep.Online = false;
GateDrv1CtrlNtcNr0x065FailStep.Impact = 'H';
GateDrv1CtrlNtcNr0x065FailStep.TuningOwner = 'FDD';
GateDrv1CtrlNtcNr0x065FailStep.GraphLink = {''};
GateDrv1CtrlNtcNr0x065FailStep.Monotony = 'None';
GateDrv1CtrlNtcNr0x065FailStep.MaxGrad = 0;
GateDrv1CtrlNtcNr0x065FailStep.PortName = 'GateDrv1CtrlNtcNr0x065FailStep';


GateDrv1CtrlNtcNr0x065PassStep = DataDict.Calibration;
GateDrv1CtrlNtcNr0x065PassStep.LongName = 'Gate Drive 1 Control NtcNr0X065 Pass Step';
GateDrv1CtrlNtcNr0x065PassStep.Description = [...
  'Pass Step for the On-State VREG / Bootstrap Voltage Fault associated w' ...
  'ith Gate Drv 1'];
GateDrv1CtrlNtcNr0x065PassStep.DocUnits = 'Cnt';
GateDrv1CtrlNtcNr0x065PassStep.EngDT = dt.u16;
GateDrv1CtrlNtcNr0x065PassStep.EngVal = 4096;
GateDrv1CtrlNtcNr0x065PassStep.EngMin = 0;
GateDrv1CtrlNtcNr0x065PassStep.EngMax = 65535;
GateDrv1CtrlNtcNr0x065PassStep.Cardinality = 'Cmn';
GateDrv1CtrlNtcNr0x065PassStep.CustomerVisible = false;
GateDrv1CtrlNtcNr0x065PassStep.Online = false;
GateDrv1CtrlNtcNr0x065PassStep.Impact = 'H';
GateDrv1CtrlNtcNr0x065PassStep.TuningOwner = 'FDD';
GateDrv1CtrlNtcNr0x065PassStep.GraphLink = {''};
GateDrv1CtrlNtcNr0x065PassStep.Monotony = 'None';
GateDrv1CtrlNtcNr0x065PassStep.MaxGrad = 0;
GateDrv1CtrlNtcNr0x065PassStep.PortName = 'GateDrv1CtrlNtcNr0x065PassStep';


GateDrv1CtrlUnit1Cfg2WrVal = DataDict.Calibration;
GateDrv1CtrlUnit1Cfg2WrVal.LongName = 'Gate Drive 1 Control Unit 1 Config Register 2 Write Value';
GateDrv1CtrlUnit1Cfg2WrVal.Description = [...
  'Configuration value to be written to Cfg2 register for Gate Drive IC 1' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv1CtrlUnit1Cfg2WrVal.DocUnits = 'Cnt';
GateDrv1CtrlUnit1Cfg2WrVal.EngDT = dt.u16;
GateDrv1CtrlUnit1Cfg2WrVal.EngVal = 2832;
GateDrv1CtrlUnit1Cfg2WrVal.EngMin = 0;
GateDrv1CtrlUnit1Cfg2WrVal.EngMax = 65535;
GateDrv1CtrlUnit1Cfg2WrVal.Cardinality = 'Cmn';
GateDrv1CtrlUnit1Cfg2WrVal.CustomerVisible = false;
GateDrv1CtrlUnit1Cfg2WrVal.Online = false;
GateDrv1CtrlUnit1Cfg2WrVal.Impact = 'H';
GateDrv1CtrlUnit1Cfg2WrVal.TuningOwner = 'FDD';
GateDrv1CtrlUnit1Cfg2WrVal.GraphLink = {''};
GateDrv1CtrlUnit1Cfg2WrVal.Monotony = 'None';
GateDrv1CtrlUnit1Cfg2WrVal.MaxGrad = 0;
GateDrv1CtrlUnit1Cfg2WrVal.PortName = 'GateDrv1CtrlUnit1Cfg2WrVal';


GateDrv1CtrlUnit1Cfg3WrVal = DataDict.Calibration;
GateDrv1CtrlUnit1Cfg3WrVal.LongName = 'Gate Drive 1  Control Unit 1 Config Register 3 Write Value';
GateDrv1CtrlUnit1Cfg3WrVal.Description = [...
  'Configuration value to be written to Cfg3 register for Gate Drive IC 1' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv1CtrlUnit1Cfg3WrVal.DocUnits = 'Cnt';
GateDrv1CtrlUnit1Cfg3WrVal.EngDT = dt.u16;
GateDrv1CtrlUnit1Cfg3WrVal.EngVal = 3598;
GateDrv1CtrlUnit1Cfg3WrVal.EngMin = 0;
GateDrv1CtrlUnit1Cfg3WrVal.EngMax = 65535;
GateDrv1CtrlUnit1Cfg3WrVal.Cardinality = 'Cmn';
GateDrv1CtrlUnit1Cfg3WrVal.CustomerVisible = false;
GateDrv1CtrlUnit1Cfg3WrVal.Online = false;
GateDrv1CtrlUnit1Cfg3WrVal.Impact = 'H';
GateDrv1CtrlUnit1Cfg3WrVal.TuningOwner = 'FDD';
GateDrv1CtrlUnit1Cfg3WrVal.GraphLink = {''};
GateDrv1CtrlUnit1Cfg3WrVal.Monotony = 'None';
GateDrv1CtrlUnit1Cfg3WrVal.MaxGrad = 0;
GateDrv1CtrlUnit1Cfg3WrVal.PortName = 'GateDrv1CtrlUnit1Cfg3WrVal';


GateDrv1CtrlUnit1Cfg4WrVal = DataDict.Calibration;
GateDrv1CtrlUnit1Cfg4WrVal.LongName = 'Gate Drive 1 Control Unit 0 Config Register 4 Write Value';
GateDrv1CtrlUnit1Cfg4WrVal.Description = [...
  'Configuration value to be written to Cfg4 register for Gate Drive IC 1' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv1CtrlUnit1Cfg4WrVal.DocUnits = 'Cnt';
GateDrv1CtrlUnit1Cfg4WrVal.EngDT = dt.u16;
GateDrv1CtrlUnit1Cfg4WrVal.EngVal = 4622;
GateDrv1CtrlUnit1Cfg4WrVal.EngMin = 0;
GateDrv1CtrlUnit1Cfg4WrVal.EngMax = 65535;
GateDrv1CtrlUnit1Cfg4WrVal.Cardinality = 'Cmn';
GateDrv1CtrlUnit1Cfg4WrVal.CustomerVisible = false;
GateDrv1CtrlUnit1Cfg4WrVal.Online = false;
GateDrv1CtrlUnit1Cfg4WrVal.Impact = 'H';
GateDrv1CtrlUnit1Cfg4WrVal.TuningOwner = 'FDD';
GateDrv1CtrlUnit1Cfg4WrVal.GraphLink = {''};
GateDrv1CtrlUnit1Cfg4WrVal.Monotony = 'None';
GateDrv1CtrlUnit1Cfg4WrVal.MaxGrad = 0;
GateDrv1CtrlUnit1Cfg4WrVal.PortName = 'GateDrv1CtrlUnit1Cfg4WrVal';


GateDrv1CtrlUnit1Cfg7WrVal = DataDict.Calibration;
GateDrv1CtrlUnit1Cfg7WrVal.LongName = 'Gate Drive 1 Control Unit 1 Config Register 7 Write Value';
GateDrv1CtrlUnit1Cfg7WrVal.Description = [...
  'Configuration value to be written to Cfg7 register for Gate Drive IC 1' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GateDrv1CtrlUnit1Cfg7WrVal.DocUnits = 'Cnt';
GateDrv1CtrlUnit1Cfg7WrVal.EngDT = dt.u16;
GateDrv1CtrlUnit1Cfg7WrVal.EngVal = 7924;
GateDrv1CtrlUnit1Cfg7WrVal.EngMin = 0;
GateDrv1CtrlUnit1Cfg7WrVal.EngMax = 65535;
GateDrv1CtrlUnit1Cfg7WrVal.Cardinality = 'Cmn';
GateDrv1CtrlUnit1Cfg7WrVal.CustomerVisible = false;
GateDrv1CtrlUnit1Cfg7WrVal.Online = false;
GateDrv1CtrlUnit1Cfg7WrVal.Impact = 'H';
GateDrv1CtrlUnit1Cfg7WrVal.TuningOwner = 'FDD';
GateDrv1CtrlUnit1Cfg7WrVal.GraphLink = {''};
GateDrv1CtrlUnit1Cfg7WrVal.Monotony = 'None';
GateDrv1CtrlUnit1Cfg7WrVal.MaxGrad = 0;
GateDrv1CtrlUnit1Cfg7WrVal.PortName = 'GateDrv1CtrlUnit1Cfg7WrVal';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dGateDrv1CtrlGateDrv1Diag0Val = DataDict.Display;
dGateDrv1CtrlGateDrv1Diag0Val.LongName = 'Display Gate Drive Control Gate Drive 1 Diagnostic 0 Value';
dGateDrv1CtrlGateDrv1Diag0Val.Description = [...
  'Gate Drive 1 Diagnostic Register 0 Value'];
dGateDrv1CtrlGateDrv1Diag0Val.DocUnits = 'Cnt';
dGateDrv1CtrlGateDrv1Diag0Val.EngDT = dt.u16;
dGateDrv1CtrlGateDrv1Diag0Val.EngMin = 0;
dGateDrv1CtrlGateDrv1Diag0Val.EngMax = 65535;
dGateDrv1CtrlGateDrv1Diag0Val.InitRowCol = [1  1];


dGateDrv1CtrlGateDrv1Diag1Val = DataDict.Display;
dGateDrv1CtrlGateDrv1Diag1Val.LongName = 'Display Gate Drive Control Gate Drive 1 Diagnostic 1 Value';
dGateDrv1CtrlGateDrv1Diag1Val.Description = [...
  'Gate Drive 1 Diagnostic Register 1 Value'];
dGateDrv1CtrlGateDrv1Diag1Val.DocUnits = 'Cnt';
dGateDrv1CtrlGateDrv1Diag1Val.EngDT = dt.u16;
dGateDrv1CtrlGateDrv1Diag1Val.EngMin = 0;
dGateDrv1CtrlGateDrv1Diag1Val.EngMax = 65535;
dGateDrv1CtrlGateDrv1Diag1Val.InitRowCol = [1  1];


dGateDrv1CtrlGateDrv1Diag2Val = DataDict.Display;
dGateDrv1CtrlGateDrv1Diag2Val.LongName = 'Display Gate Drive Control Gate Drive 1 Diagnostic 1 Value';
dGateDrv1CtrlGateDrv1Diag2Val.Description = [...
  'Gate Drive 1 Diagnostic Register 2 Value'];
dGateDrv1CtrlGateDrv1Diag2Val.DocUnits = 'Cnt';
dGateDrv1CtrlGateDrv1Diag2Val.EngDT = dt.u16;
dGateDrv1CtrlGateDrv1Diag2Val.EngMin = 0;
dGateDrv1CtrlGateDrv1Diag2Val.EngMax = 65535;
dGateDrv1CtrlGateDrv1Diag2Val.InitRowCol = [1  1];


dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx = DataDict.Display;
dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx.LongName = 'Display Gate Drive Control Gate Drive 1 Off State Verify Parameter Bit Index';
dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx.Description = [...
  'Gate Drive 1 Verify Result 1 Register Value'];
dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx.DocUnits = 'Cnt';
dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx.EngDT = dt.u08;
dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx.EngMin = 0;
dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx.EngMax = 255;
dGateDrv1CtrlGateDrv1OffsStVrfyPrmBitIdx.InitRowCol = [1  1];


dGateDrv1CtrlGateDrv1StsVal = DataDict.Display;
dGateDrv1CtrlGateDrv1StsVal.LongName = 'Display Gate Drive Control Gate Drive 1 Status Value';
dGateDrv1CtrlGateDrv1StsVal.Description = 'Gate Drive 1 Status Register Value';
dGateDrv1CtrlGateDrv1StsVal.DocUnits = 'Cnt';
dGateDrv1CtrlGateDrv1StsVal.EngDT = dt.u16;
dGateDrv1CtrlGateDrv1StsVal.EngMin = 0;
dGateDrv1CtrlGateDrv1StsVal.EngMax = 65535;
dGateDrv1CtrlGateDrv1StsVal.InitRowCol = [1  1];


dGateDrv1CtrlGateDrv1VrfyRes0Val = DataDict.Display;
dGateDrv1CtrlGateDrv1VrfyRes0Val.LongName = 'Display Gate Drive 1 Control Gate Drive 1 Verify Result 0 Value';
dGateDrv1CtrlGateDrv1VrfyRes0Val.Description = [...
  'Gate Drive 1 Verify Result 0 Register Value'];
dGateDrv1CtrlGateDrv1VrfyRes0Val.DocUnits = 'Cnt';
dGateDrv1CtrlGateDrv1VrfyRes0Val.EngDT = dt.u16;
dGateDrv1CtrlGateDrv1VrfyRes0Val.EngMin = 0;
dGateDrv1CtrlGateDrv1VrfyRes0Val.EngMax = 65535;
dGateDrv1CtrlGateDrv1VrfyRes0Val.InitRowCol = [1  1];


dGateDrv1CtrlGateDrv1VrfyRes1Val = DataDict.Display;
dGateDrv1CtrlGateDrv1VrfyRes1Val.LongName = 'Display Gate Drive 1 Control Gate Drive 1 Verify Result 1 Value';
dGateDrv1CtrlGateDrv1VrfyRes1Val.Description = [...
  'Gate Drive 1 Verify Result 1 Register Value'];
dGateDrv1CtrlGateDrv1VrfyRes1Val.DocUnits = 'Cnt';
dGateDrv1CtrlGateDrv1VrfyRes1Val.EngDT = dt.u16;
dGateDrv1CtrlGateDrv1VrfyRes1Val.EngMin = 0;
dGateDrv1CtrlGateDrv1VrfyRes1Val.EngMax = 65535;
dGateDrv1CtrlGateDrv1VrfyRes1Val.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
GateDrv1CfgCnt = DataDict.PIM;
GateDrv1CfgCnt.LongName = 'Gate Drive 1 Configuration Count';
GateDrv1CfgCnt.Description = [...
  'Configuration Step or Count Number associated with Gate Drive 1initial' ...
  'ization '];
GateDrv1CfgCnt.DocUnits = 'Cnt';
GateDrv1CfgCnt.EngDT = dt.u08;
GateDrv1CfgCnt.EngMin = 0;
GateDrv1CfgCnt.EngMax = 255;
GateDrv1CfgCnt.InitRowCol = [1  1];


GateDrv1CfgSecAtmpt = DataDict.PIM;
GateDrv1CfgSecAtmpt.LongName = 'Gate Drive 1 Off State Check Second Attempt';
GateDrv1CfgSecAtmpt.Description = [...
  'Gate Drive 1 Off State Verification Check Second Attempt'];
GateDrv1CfgSecAtmpt.DocUnits = 'Cnt';
GateDrv1CfgSecAtmpt.EngDT = dt.lgc;
GateDrv1CfgSecAtmpt.EngMin = 0;
GateDrv1CfgSecAtmpt.EngMax = 1;
GateDrv1CfgSecAtmpt.InitRowCol = [1  1];


GateDrv1Diag0Val = DataDict.PIM;
GateDrv1Diag0Val.LongName = 'Gate Drive 1 Diagnosis 0 Value';
GateDrv1Diag0Val.Description = [...
  'Gate Drive 1 Diagnostic Register 0 Value'];
GateDrv1Diag0Val.DocUnits = 'Cnt';
GateDrv1Diag0Val.EngDT = dt.u16;
GateDrv1Diag0Val.EngMin = 0;
GateDrv1Diag0Val.EngMax = 65535;
GateDrv1Diag0Val.InitRowCol = [1  1];


GateDrv1Diag1Val = DataDict.PIM;
GateDrv1Diag1Val.LongName = 'Gate Drive 1 Diagnosis 1 Value';
GateDrv1Diag1Val.Description = [...
  'Gate Drive 1 Diagnostic Register 1 Value'];
GateDrv1Diag1Val.DocUnits = 'Cnt';
GateDrv1Diag1Val.EngDT = dt.u16;
GateDrv1Diag1Val.EngMin = 0;
GateDrv1Diag1Val.EngMax = 65535;
GateDrv1Diag1Val.InitRowCol = [1  1];


GateDrv1Diag2Val = DataDict.PIM;
GateDrv1Diag2Val.LongName = 'Gate Drive 1 Diagnosis 2 Value';
GateDrv1Diag2Val.Description = [...
  'Gate Drive 1 Diagnostic Register 2 Value'];
GateDrv1Diag2Val.DocUnits = 'Cnt';
GateDrv1Diag2Val.EngDT = dt.u16;
GateDrv1Diag2Val.EngMin = 0;
GateDrv1Diag2Val.EngMax = 65535;
GateDrv1Diag2Val.InitRowCol = [1  1];


GateDrv1OffStChkIdx = DataDict.PIM;
GateDrv1OffStChkIdx.LongName = 'Gate Drive 1 Off State Check Index';
GateDrv1OffStChkIdx.Description = [...
  'Gate Drive 1 Off State Verification Check Index'];
GateDrv1OffStChkIdx.DocUnits = 'Cnt';
GateDrv1OffStChkIdx.EngDT = dt.u08;
GateDrv1OffStChkIdx.EngMin = 0;
GateDrv1OffStChkIdx.EngMax = 255;
GateDrv1OffStChkIdx.InitRowCol = [1  1];


GateDrv1OffStChkSecAtmpt = DataDict.PIM;
GateDrv1OffStChkSecAtmpt.LongName = 'Gate Drive 1 Off State Check Second Attempt';
GateDrv1OffStChkSecAtmpt.Description = [...
  'Gate Drive 1 Off State Verification Check Second Attempt'];
GateDrv1OffStChkSecAtmpt.DocUnits = 'Cnt';
GateDrv1OffStChkSecAtmpt.EngDT = dt.lgc;
GateDrv1OffStChkSecAtmpt.EngMin = 0;
GateDrv1OffStChkSecAtmpt.EngMax = 1;
GateDrv1OffStChkSecAtmpt.InitRowCol = [1  1];


GateDrv1OffStCnt = DataDict.PIM;
GateDrv1OffStCnt.LongName = 'Gate Drive 1 OffState Count';
GateDrv1OffStCnt.Description = [...
  'Offstate Verification Step or Count Number associated with Gate Drive ' ...
  '1 initialization '];
GateDrv1OffStCnt.DocUnits = 'Cnt';
GateDrv1OffStCnt.EngDT = dt.u08;
GateDrv1OffStCnt.EngMin = 0;
GateDrv1OffStCnt.EngMax = 255;
GateDrv1OffStCnt.InitRowCol = [1  1];


GateDrv1St = DataDict.PIM;
GateDrv1St.LongName = 'Gate Drive State';
GateDrv1St.Description = [...
  'Operating State of the Gate Drive function when System State is in WAR' ...
  'M INIT / ENABLE, 1 - Off state Verification, 2 -Configuration state, 3' ...
  ' - Operate/Fault monitoring '];
GateDrv1St.DocUnits = 'Cnt';
GateDrv1St.EngDT = dt.u08;
GateDrv1St.EngMin = 0;
GateDrv1St.EngMax = 255;
GateDrv1St.InitRowCol = [1  1];


GateDrv1StsVal = DataDict.PIM;
GateDrv1StsVal.LongName = 'Gate Drive 1 Status Value';
GateDrv1StsVal.Description = 'Gate Drive 1 Status Register Value';
GateDrv1StsVal.DocUnits = 'Cnt';
GateDrv1StsVal.EngDT = dt.u16;
GateDrv1StsVal.EngMin = 0;
GateDrv1StsVal.EngMax = 65535;
GateDrv1StsVal.InitRowCol = [1  1];


GateDrv1VrfyRes0Val = DataDict.PIM;
GateDrv1VrfyRes0Val.LongName = 'Gate Drive 1 Verify Result 0 Value';
GateDrv1VrfyRes0Val.Description = 'Gate Drive 1 Verify Result 0 Value';
GateDrv1VrfyRes0Val.DocUnits = 'Cnt';
GateDrv1VrfyRes0Val.EngDT = dt.u16;
GateDrv1VrfyRes0Val.EngMin = 0;
GateDrv1VrfyRes0Val.EngMax = 65535;
GateDrv1VrfyRes0Val.InitRowCol = [1  1];


GateDrv1VrfyRes1Val = DataDict.PIM;
GateDrv1VrfyRes1Val.LongName = 'Gate Drive 1 Verify Result 1 Value';
GateDrv1VrfyRes1Val.Description = 'Gate Drive 1 Verify Result 1 Value';
GateDrv1VrfyRes1Val.DocUnits = 'Cnt';
GateDrv1VrfyRes1Val.EngDT = dt.u16;
GateDrv1VrfyRes1Val.EngMin = 0;
GateDrv1VrfyRes1Val.EngMax = 65535;
GateDrv1VrfyRes1Val.InitRowCol = [1  1];


Ivtr1BootstrpSplyFltPrmVal = DataDict.PIM;
Ivtr1BootstrpSplyFltPrmVal.LongName = 'Inverter 1 NTC Number 0x65 Parameter Value';
Ivtr1BootstrpSplyFltPrmVal.Description = [...
  'Inverter 0 NTC Number 0x65 Parameter Value'];
Ivtr1BootstrpSplyFltPrmVal.DocUnits = 'Cnt';
Ivtr1BootstrpSplyFltPrmVal.EngDT = dt.u08;
Ivtr1BootstrpSplyFltPrmVal.EngMin = 0;
Ivtr1BootstrpSplyFltPrmVal.EngMax = 255;
Ivtr1BootstrpSplyFltPrmVal.InitRowCol = [1  1];


Ivtr1GenericFltPrmVal = DataDict.PIM;
Ivtr1GenericFltPrmVal.LongName = 'Inverter 1 NTC Number 0x60 Parameter Value';
Ivtr1GenericFltPrmVal.Description = [...
  'Inverter 0 NTC Number 0x60 Parameter Value'];
Ivtr1GenericFltPrmVal.DocUnits = 'Cnt';
Ivtr1GenericFltPrmVal.EngDT = dt.u08;
Ivtr1GenericFltPrmVal.EngMin = 0;
Ivtr1GenericFltPrmVal.EngMax = 255;
Ivtr1GenericFltPrmVal.InitRowCol = [1  1];


Ivtr1OffStChkCmpl = DataDict.PIM;
Ivtr1OffStChkCmpl.LongName = 'Inverter 1 Offstate Check Complete';
Ivtr1OffStChkCmpl.Description = [...
  'Flag indicating completion of the off state verification checks for Ga' ...
  'te Drive 1'];
Ivtr1OffStChkCmpl.DocUnits = 'Cnt';
Ivtr1OffStChkCmpl.EngDT = dt.lgc;
Ivtr1OffStChkCmpl.EngMin = 0;
Ivtr1OffStChkCmpl.EngMax = 1;
Ivtr1OffStChkCmpl.InitRowCol = [1  1];



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


GATEDRV1CFG0READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG0READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 0 Read Value';
GATEDRV1CFG0READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of Status register 5 most MS' ...
  'B bits for fault determination, Value is 15 bits shifted right, with p' ...
  'arity bit added in SPI driver.'];
GATEDRV1CFG0READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG0READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG0READVAL_CNT_U16.EngVal = 0;
GATEDRV1CFG0READVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG0WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG0WRVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 0 Write Value';
GATEDRV1CFG0WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg0 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV1CFG0WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG0WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG0WRVAL_CNT_U16.EngVal = 512;
GATEDRV1CFG0WRVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG1READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 1 Read Value';
GATEDRV1CFG1READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 1 Confi' ...
  'g 1 register.'];
GATEDRV1CFG1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG1READVAL_CNT_U16.EngVal = 1279;
GATEDRV1CFG1READVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG1WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG1WRVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 1 Write Value';
GATEDRV1CFG1WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg1 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV1CFG1WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG1WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG1WRVAL_CNT_U16.EngVal = 1791;
GATEDRV1CFG1WRVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG2READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG2READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 2 Read Value';
GATEDRV1CFG2READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 1 Confi' ...
  'g 2 register.'];
GATEDRV1CFG2READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG2READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG2READVAL_CNT_U16.EngVal = 2320;
GATEDRV1CFG2READVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG3READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG3READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 3 Read Value';
GATEDRV1CFG3READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 1 Confi' ...
  'g 3 register.'];
GATEDRV1CFG3READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG3READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG3READVAL_CNT_U16.EngVal = 3086;
GATEDRV1CFG3READVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG4READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG4READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 4 Read Value';
GATEDRV1CFG4READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 1 Confi' ...
  'g 4 register.'];
GATEDRV1CFG4READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG4READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG4READVAL_CNT_U16.EngVal = 4110;
GATEDRV1CFG4READVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG5READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG5READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 5 Read Value';
GATEDRV1CFG5READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 1 Confi' ...
  'g 5 register.'];
GATEDRV1CFG5READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG5READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG5READVAL_CNT_U16.EngVal = 5312;
GATEDRV1CFG5READVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG5WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG5WRVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 5 Write Value';
GATEDRV1CFG5WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg5 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV1CFG5WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG5WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG5WRVAL_CNT_U16.EngVal = 5824;
GATEDRV1CFG5WRVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG6READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG6READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 6 Read Value';
GATEDRV1CFG6READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 1 Confi' ...
  'g 6 register.'];
GATEDRV1CFG6READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG6READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG6READVAL_CNT_U16.EngVal = 6304;
GATEDRV1CFG6READVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG6WRVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG6WRVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 6 Write Value';
GATEDRV1CFG6WRVAL_CNT_U16.Description = [...
  'Configuration value to be written to Cfg6 register for Gate Drive IC 0' ...
  ', Value is 15 bits shifted right, with parity bit added in SPI driver.' ...
  ''];
GATEDRV1CFG6WRVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG6WRVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG6WRVAL_CNT_U16.EngVal = 6816;
GATEDRV1CFG6WRVAL_CNT_U16.Define = 'Local';


GATEDRV1CFG7READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CFG7READVAL_CNT_U16.LongName = 'Gate Drive 1 Config Register 7 Read Value';
GATEDRV1CFG7READVAL_CNT_U16.Description = [...
  'Config value to be written to enable read of entire Gate Drive 1 Confi' ...
  'g 7 register.'];
GATEDRV1CFG7READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CFG7READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CFG7READVAL_CNT_U16.EngVal = 7413;
GATEDRV1CFG7READVAL_CNT_U16.Define = 'Local';


GATEDRV1CHKVALMASK_CNT_U16 = DataDict.Constant;
GATEDRV1CHKVALMASK_CNT_U16.LongName = 'Gate Drive Check Value Mask';
GATEDRV1CHKVALMASK_CNT_U16.Description = [...
  'Gate Drive 1 and 1 Register Mask Value for Read back of Register'];
GATEDRV1CHKVALMASK_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CHKVALMASK_CNT_U16.EngDT = dt.u16;
GATEDRV1CHKVALMASK_CNT_U16.EngVal = 511;
GATEDRV1CHKVALMASK_CNT_U16.Define = 'Local';


GATEDRV1CTRLREADVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CTRLREADVAL_CNT_U16.LongName = 'Gate Drive 1 Control Register Read Value';
GATEDRV1CTRLREADVAL_CNT_U16.Description = [...
  'Configuration value to be written to enable read of Control register f' ...
  'or Gate Drive 1'];
GATEDRV1CTRLREADVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CTRLREADVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CTRLREADVAL_CNT_U16.EngVal = 31808;
GATEDRV1CTRLREADVAL_CNT_U16.Define = 'Local';


GATEDRV1CTRLVAL_CNT_U16 = DataDict.Constant;
GATEDRV1CTRLVAL_CNT_U16.LongName = 'Gate Drive 1 Control Register Value';
GATEDRV1CTRLVAL_CNT_U16.Description = [...
  'Configuration value to be written to Control register for Gate Drive I' ...
  'C 0, Value is 15 bits shifted right, with parity bit added in SPI driv' ...
  'er.'];
GATEDRV1CTRLVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1CTRLVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1CTRLVAL_CNT_U16.EngVal = 32320;
GATEDRV1CTRLVAL_CNT_U16.Define = 'Local';


GATEDRV1DIAG0READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1DIAG0READVAL_CNT_U16.LongName = 'Gate Drive 1 Diagnostic 0 Register Read Value';
GATEDRV1DIAG0READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of Gate Drv 0 Diag 0 Register'];
GATEDRV1DIAG0READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1DIAG0READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1DIAG0READVAL_CNT_U16.EngVal = 28672;
GATEDRV1DIAG0READVAL_CNT_U16.Define = 'Local';


GATEDRV1DIAG1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1DIAG1READVAL_CNT_U16.LongName = 'Gate Drive 1 Diagnostic 1 Register Read Value';
GATEDRV1DIAG1READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of Gate Drv 0 Diag 1 Register'];
GATEDRV1DIAG1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1DIAG1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1DIAG1READVAL_CNT_U16.EngVal = 29696;
GATEDRV1DIAG1READVAL_CNT_U16.Define = 'Local';


GATEDRV1DIAG2READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1DIAG2READVAL_CNT_U16.LongName = 'Gate Drive 1 Diagnostic 2 Register Read Value';
GATEDRV1DIAG2READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of Gate Drv 0 Diag 2 Register'];
GATEDRV1DIAG2READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1DIAG2READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1DIAG2READVAL_CNT_U16.EngVal = 30720;
GATEDRV1DIAG2READVAL_CNT_U16.Define = 'Local';


GATEDRV1MASK0VAL_CNT_U16 = DataDict.Constant;
GATEDRV1MASK0VAL_CNT_U16.LongName = 'Gate Drive 1 Mask Register 0 Value';
GATEDRV1MASK0VAL_CNT_U16.Description = [...
  'Fault mask to be written to Mask 0 register for Gate Drive IC 0,Value ' ...
  'is 15 bits shifted right, with parity bit added in SPI driver.'];
GATEDRV1MASK0VAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1MASK0VAL_CNT_U16.EngDT = dt.u16;
GATEDRV1MASK0VAL_CNT_U16.EngVal = 26175;
GATEDRV1MASK0VAL_CNT_U16.Define = 'Local';


GATEDRV1MASK1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1MASK1READVAL_CNT_U16.LongName = 'Gate Drive 1 Mask Register 1 Read Value';
GATEDRV1MASK1READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of the Mask 1 register for Gate Dri' ...
  've IC 0, Value is 15 bits shifted right, with parity bit added in SPI ' ...
  'driver.'];
GATEDRV1MASK1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1MASK1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1MASK1READVAL_CNT_U16.EngVal = 26880;
GATEDRV1MASK1READVAL_CNT_U16.Define = 'Local';


GATEDRV1MASK1VAL_CNT_U16 = DataDict.Constant;
GATEDRV1MASK1VAL_CNT_U16.LongName = 'Gate Drive 1 Mask Register 1 Value';
GATEDRV1MASK1VAL_CNT_U16.Description = [...
  'Fault mask to be written to Mask 1 register for Gate Drive IC 0, Value' ...
  ' is 15 bits shifted right, with parity bit added in SPI driver.'];
GATEDRV1MASK1VAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1MASK1VAL_CNT_U16.EngDT = dt.u16;
GATEDRV1MASK1VAL_CNT_U16.EngVal = 27392;
GATEDRV1MASK1VAL_CNT_U16.Define = 'Local';


GATEDRV1MASK2READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1MASK2READVAL_CNT_U16.LongName = 'Gate Drive 1 Mask Register 2 Read Value';
GATEDRV1MASK2READVAL_CNT_U16.Description = [...
  'Value to be written to enable read of the Mask 2 register for Gate Dri' ...
  've IC 0, Value is 15 bits shifted right, with parity bit added in SPI ' ...
  'driver.'];
GATEDRV1MASK2READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1MASK2READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1MASK2READVAL_CNT_U16.EngVal = 27776;
GATEDRV1MASK2READVAL_CNT_U16.Define = 'Local';


GATEDRV1MASK2VAL_CNT_U16 = DataDict.Constant;
GATEDRV1MASK2VAL_CNT_U16.LongName = 'Gate Drive 1 Mask Register 2 Value';
GATEDRV1MASK2VAL_CNT_U16.Description = [...
  'Fault mask to be written to Mask 2 register for Gate Drive IC 0, Value' ...
  ' is 15 bits shifted right, with parity bit added in SPI driver.'];
GATEDRV1MASK2VAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1MASK2VAL_CNT_U16.EngDT = dt.u16;
GATEDRV1MASK2VAL_CNT_U16.EngVal = 28320;
GATEDRV1MASK2VAL_CNT_U16.Define = 'Local';


GATEDRV1VRFYRES0READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1VRFYRES0READVAL_CNT_U16.LongName = 'Gate Drive 1 Verify Result 0 Read Value';
GATEDRV1VRFYRES0READVAL_CNT_U16.Description = [...
  'Value to be written to allow read of the Gate Drive 1 Verify Result 0 ' ...
  'Register'];
GATEDRV1VRFYRES0READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1VRFYRES0READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1VRFYRES0READVAL_CNT_U16.EngVal = 23552;
GATEDRV1VRFYRES0READVAL_CNT_U16.Define = 'Local';


GATEDRV1VRFYRES1READVAL_CNT_U16 = DataDict.Constant;
GATEDRV1VRFYRES1READVAL_CNT_U16.LongName = 'Gate Drive 1 Verify Result 1 Read Value';
GATEDRV1VRFYRES1READVAL_CNT_U16.Description = [...
  'Value to be written to allow read of the Gate Drive 1 Verify Result 1 ' ...
  'Register'];
GATEDRV1VRFYRES1READVAL_CNT_U16.DocUnits = 'Cnt';
GATEDRV1VRFYRES1READVAL_CNT_U16.EngDT = dt.u16;
GATEDRV1VRFYRES1READVAL_CNT_U16.EngVal = 24576;
GATEDRV1VRFYRES1READVAL_CNT_U16.Define = 'Local';


SpiConf_SpiChannel_GateDrv1Cfg0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg0Ch.LongName = 'Gate Drive 1 Config 0 Channel';
SpiConf_SpiChannel_GateDrv1Cfg0Ch.Description = 'Channel Id for Config 0 register';
SpiConf_SpiChannel_GateDrv1Cfg0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg0Ch.EngVal = 0;
SpiConf_SpiChannel_GateDrv1Cfg0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Cfg1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg1Ch.LongName = 'Gate Drive 1 Config 1 Channel';
SpiConf_SpiChannel_GateDrv1Cfg1Ch.Description = 'Channel Id for Config 1 register';
SpiConf_SpiChannel_GateDrv1Cfg1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg1Ch.EngVal = 1;
SpiConf_SpiChannel_GateDrv1Cfg1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Cfg2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg2Ch.LongName = 'Gate Drive 1 Config 2 Channel';
SpiConf_SpiChannel_GateDrv1Cfg2Ch.Description = 'Channel Id for Config 2 register';
SpiConf_SpiChannel_GateDrv1Cfg2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg2Ch.EngVal = 2;
SpiConf_SpiChannel_GateDrv1Cfg2Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Cfg3Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg3Ch.LongName = 'Gate Drive 1 Config 3 Channel';
SpiConf_SpiChannel_GateDrv1Cfg3Ch.Description = 'Channel Id for Config 3 register';
SpiConf_SpiChannel_GateDrv1Cfg3Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg3Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg3Ch.EngVal = 3;
SpiConf_SpiChannel_GateDrv1Cfg3Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Cfg4Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg4Ch.LongName = 'Gate Drive 1 Config 4 Channel';
SpiConf_SpiChannel_GateDrv1Cfg4Ch.Description = 'Channel Id for Config 4 register';
SpiConf_SpiChannel_GateDrv1Cfg4Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg4Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg4Ch.EngVal = 4;
SpiConf_SpiChannel_GateDrv1Cfg4Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Cfg5Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg5Ch.LongName = 'Gate Drive 1 Config 5 Channel';
SpiConf_SpiChannel_GateDrv1Cfg5Ch.Description = 'Channel Id for Config 5 register';
SpiConf_SpiChannel_GateDrv1Cfg5Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg5Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg5Ch.EngVal = 5;
SpiConf_SpiChannel_GateDrv1Cfg5Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Cfg6Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg6Ch.LongName = 'Gate Drive 1 Config 6 Channel';
SpiConf_SpiChannel_GateDrv1Cfg6Ch.Description = 'Channel Id for Config 6 register';
SpiConf_SpiChannel_GateDrv1Cfg6Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg6Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg6Ch.EngVal = 6;
SpiConf_SpiChannel_GateDrv1Cfg6Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Cfg7Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg7Ch.LongName = 'Gate Drive 1 Config 7 Channel';
SpiConf_SpiChannel_GateDrv1Cfg7Ch.Description = 'Channel Id for Config 7 register';
SpiConf_SpiChannel_GateDrv1Cfg7Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg7Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg7Ch.EngVal = 7;
SpiConf_SpiChannel_GateDrv1Cfg7Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1CtrlCh = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1CtrlCh.LongName = 'Gate Drive 1 Control Channel';
SpiConf_SpiChannel_GateDrv1CtrlCh.Description = 'Channel Id for Control register';
SpiConf_SpiChannel_GateDrv1CtrlCh.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1CtrlCh.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1CtrlCh.EngVal = 25;
SpiConf_SpiChannel_GateDrv1CtrlCh.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Diag0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Diag0Ch.LongName = 'Gate Drive 1 Diag 0 Channel';
SpiConf_SpiChannel_GateDrv1Diag0Ch.Description = 'Channel Id for Diag 0 register';
SpiConf_SpiChannel_GateDrv1Diag0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Diag0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Diag0Ch.EngVal = 22;
SpiConf_SpiChannel_GateDrv1Diag0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Diag1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Diag1Ch.LongName = 'Gate Drive 1 Diag 1 Channel';
SpiConf_SpiChannel_GateDrv1Diag1Ch.Description = 'Channel Id for Diag 1 register';
SpiConf_SpiChannel_GateDrv1Diag1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Diag1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Diag1Ch.EngVal = 23;
SpiConf_SpiChannel_GateDrv1Diag1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Diag2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Diag2Ch.LongName = 'Gate Drive 1 Diag 2 Channel';
SpiConf_SpiChannel_GateDrv1Diag2Ch.Description = 'Channel Id for Diag 2 register';
SpiConf_SpiChannel_GateDrv1Diag2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Diag2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Diag2Ch.EngVal = 24;
SpiConf_SpiChannel_GateDrv1Diag2Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Mask0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Mask0Ch.LongName = 'Gate Drive 1 Mask 0 Channel';
SpiConf_SpiChannel_GateDrv1Mask0Ch.Description = 'Channel Id for Mask 0 register';
SpiConf_SpiChannel_GateDrv1Mask0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Mask0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Mask0Ch.EngVal = 19;
SpiConf_SpiChannel_GateDrv1Mask0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Mask1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Mask1Ch.LongName = 'Gate Drive 1 Mask 1 Channel';
SpiConf_SpiChannel_GateDrv1Mask1Ch.Description = 'Channel Id for Mask 1 register';
SpiConf_SpiChannel_GateDrv1Mask1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Mask1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Mask1Ch.EngVal = 20;
SpiConf_SpiChannel_GateDrv1Mask1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1Mask2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Mask2Ch.LongName = 'Gate Drive 1 Mask 2 Channel';
SpiConf_SpiChannel_GateDrv1Mask2Ch.Description = 'Channel Id for Mask 2 register';
SpiConf_SpiChannel_GateDrv1Mask2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Mask2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Mask2Ch.EngVal = 21;
SpiConf_SpiChannel_GateDrv1Mask2Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.LongName = 'Gate Drive 1 Verify Command 0 Channel';
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.Description = [...
  'Channel Id for Verify Command 0 register'];
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.EngVal = 14;
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.LongName = 'Gate Drive 1 Verify Command 1 Channel';
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.Description = [...
  'Channel Id for Verify Command 1 register'];
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.EngVal = 15;
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1VrfyRes0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.LongName = 'Gate Drive 1 Verify Result 0 Channel';
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.Description = [...
  'Channel Id for Verify Result 0 register'];
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.EngVal = 17;
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.Define = 'Global';


SpiConf_SpiChannel_GateDrv1VrfyRes1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.LongName = 'Gate Drive 1 Verify Result 1 Channel';
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.Description = [...
  'Channel Id for Verify Result 1 register'];
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.EngVal = 18;
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg0Seq.LongName = 'Gate Drive 1 Config 0 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg0Seq.Description = 'Sequence Id for Config 0 register';
SpiConf_SpiSequence_GateDrv1Cfg0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg0Seq.EngVal = 0;
SpiConf_SpiSequence_GateDrv1Cfg0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg1Seq.LongName = 'Gate Drive 1 Config 1 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg1Seq.Description = 'Sequence Id for Config 1 register';
SpiConf_SpiSequence_GateDrv1Cfg1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg1Seq.EngVal = 1;
SpiConf_SpiSequence_GateDrv1Cfg1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg2Seq.LongName = 'Gate Drive 1 Config 2 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg2Seq.Description = 'Sequence Id for Config 2 register';
SpiConf_SpiSequence_GateDrv1Cfg2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg2Seq.EngVal = 2;
SpiConf_SpiSequence_GateDrv1Cfg2Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg3Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg3Seq.LongName = 'Gate Drive 1 Config 3 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg3Seq.Description = 'Sequence Id for Config 3 register';
SpiConf_SpiSequence_GateDrv1Cfg3Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg3Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg3Seq.EngVal = 3;
SpiConf_SpiSequence_GateDrv1Cfg3Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg4Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg4Seq.LongName = 'Gate Drive 1 Config 4 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg4Seq.Description = 'Sequence Id for Config 4 register';
SpiConf_SpiSequence_GateDrv1Cfg4Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg4Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg4Seq.EngVal = 4;
SpiConf_SpiSequence_GateDrv1Cfg4Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg5Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg5Seq.LongName = 'Gate Drive 1 Config 5 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg5Seq.Description = 'Sequence Id for Config 5 register';
SpiConf_SpiSequence_GateDrv1Cfg5Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg5Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg5Seq.EngVal = 5;
SpiConf_SpiSequence_GateDrv1Cfg5Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg6Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg6Seq.LongName = 'Gate Drive 1 Config 6 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg6Seq.Description = 'Sequence Id for Config 6 register';
SpiConf_SpiSequence_GateDrv1Cfg6Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg6Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg6Seq.EngVal = 6;
SpiConf_SpiSequence_GateDrv1Cfg6Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Cfg7Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg7Seq.LongName = 'Gate Drive 1 Config 7 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg7Seq.Description = 'Sequence Id for Config 7 register';
SpiConf_SpiSequence_GateDrv1Cfg7Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg7Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg7Seq.EngVal = 7;
SpiConf_SpiSequence_GateDrv1Cfg7Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1CtrlSeq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1CtrlSeq.LongName = 'Gate Drive 1 Control Sequence';
SpiConf_SpiSequence_GateDrv1CtrlSeq.Description = 'Sequence Id for Control register';
SpiConf_SpiSequence_GateDrv1CtrlSeq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1CtrlSeq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1CtrlSeq.EngVal = 25;
SpiConf_SpiSequence_GateDrv1CtrlSeq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Diag0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Diag0Seq.LongName = 'Gate Drive 1 Diag 0 Sequence';
SpiConf_SpiSequence_GateDrv1Diag0Seq.Description = 'Sequence Id for Diag 0 register';
SpiConf_SpiSequence_GateDrv1Diag0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Diag0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Diag0Seq.EngVal = 22;
SpiConf_SpiSequence_GateDrv1Diag0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Diag1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Diag1Seq.LongName = 'Gate Drive 1 Diag 1 Sequence';
SpiConf_SpiSequence_GateDrv1Diag1Seq.Description = 'Sequence Id for Diag 1 register';
SpiConf_SpiSequence_GateDrv1Diag1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Diag1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Diag1Seq.EngVal = 23;
SpiConf_SpiSequence_GateDrv1Diag1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Diag2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Diag2Seq.LongName = 'Gate Drive 1 Diag 2 Sequence';
SpiConf_SpiSequence_GateDrv1Diag2Seq.Description = 'Sequence Id for Diag 2 register';
SpiConf_SpiSequence_GateDrv1Diag2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Diag2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Diag2Seq.EngVal = 24;
SpiConf_SpiSequence_GateDrv1Diag2Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Mask0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Mask0Seq.LongName = 'Gate Drive 1 Mask 0 Sequence';
SpiConf_SpiSequence_GateDrv1Mask0Seq.Description = 'Sequence Id for Mask 0 register';
SpiConf_SpiSequence_GateDrv1Mask0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Mask0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Mask0Seq.EngVal = 19;
SpiConf_SpiSequence_GateDrv1Mask0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Mask1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Mask1Seq.LongName = 'Gate Drive 1 Mask 1 Sequence';
SpiConf_SpiSequence_GateDrv1Mask1Seq.Description = 'Sequence Id for Mask 1 register';
SpiConf_SpiSequence_GateDrv1Mask1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Mask1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Mask1Seq.EngVal = 20;
SpiConf_SpiSequence_GateDrv1Mask1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1Mask2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Mask2Seq.LongName = 'Gate Drive 1 Mask 2 Sequence';
SpiConf_SpiSequence_GateDrv1Mask2Seq.Description = 'Sequence Id for Mask 2 register';
SpiConf_SpiSequence_GateDrv1Mask2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Mask2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Mask2Seq.EngVal = 21;
SpiConf_SpiSequence_GateDrv1Mask2Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.LongName = 'Gate Drive 1 Verify Command 0 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.Description = [...
  'Sequence Id for Verify Command 0 register'];
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.EngVal = 14;
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.LongName = 'Gate Drive 1 Verify Command 1 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.Description = [...
  'Sequence Id for Verify Command 1 register'];
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.EngVal = 15;
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1VrfyRes0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.LongName = 'Gate Drive 1 Verify Result 0 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.Description = [...
  'Sequence Id for Verify Result 0 register'];
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.EngVal = 17;
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.Define = 'Global';


SpiConf_SpiSequence_GateDrv1VrfyRes1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.LongName = 'Gate Drive 1 Verify Result 1 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.Description = [...
  'Sequence Id for Verify Result 1 register'];
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.EngVal = 18;
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
GateDrv1GenericFlt = DataDict.NTC;
GateDrv1GenericFlt.NtcNr = NtcNr1.NTCNR_0X060;
GateDrv1GenericFlt.NtcTyp = 'None';
GateDrv1GenericFlt.LongName = 'Gate Drive 1 Generic Fault';
GateDrv1GenericFlt.Description = 'Various general faults associated with Gate Drive 1';
GateDrv1GenericFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
GateDrv1GenericFlt.NtcStInfo.Bit0Descr = 'Over Temperature Fault';
GateDrv1GenericFlt.NtcStInfo.Bit1Descr = 'General Gate Drive Fault';
GateDrv1GenericFlt.NtcStInfo.Bit2Descr = 'Gate Drive Power Supply Fault';
GateDrv1GenericFlt.NtcStInfo.Bit3Descr = 'Gate Drive Serial Comm Fault';
GateDrv1GenericFlt.NtcStInfo.Bit4Descr = 'OverCurrent and Open Load Fault';
GateDrv1GenericFlt.NtcStInfo.Bit5Descr = 'Unused';
GateDrv1GenericFlt.NtcStInfo.Bit6Descr = 'Unused';
GateDrv1GenericFlt.NtcStInfo.Bit7Descr = 'Unused';


GateDrv1OnStSngPhaFlt = DataDict.NTC;
GateDrv1OnStSngPhaFlt.NtcNr = NtcNr1.NTCNR_0X061;
GateDrv1OnStSngPhaFlt.NtcTyp = 'None';
GateDrv1OnStSngPhaFlt.LongName = 'Gate Drive 1 On State Single Phase Fault';
GateDrv1OnStSngPhaFlt.Description = 'On State Single FET Fault associated with Gate Drive 1';
GateDrv1OnStSngPhaFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit0Descr = 'Phase A Lower Fault';
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit1Descr = 'Phase A Upper Fault';
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit2Descr = 'Phase B Lower Fault';
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit3Descr = 'Phase B Upper Fault';
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit4Descr = 'Phase C Lower Fault';
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit5Descr = 'Phase C Upper Fault';
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit6Descr = 'Unused';
GateDrv1OnStSngPhaFlt.NtcStInfo.Bit7Descr = 'Unused';


GateDrv1StrtUpTestFlt = DataDict.NTC;
GateDrv1StrtUpTestFlt.NtcNr = NtcNr1.NTCNR_0X063;
GateDrv1StrtUpTestFlt.NtcTyp = 'None';
GateDrv1StrtUpTestFlt.LongName = 'Gate Drive 1 Inverter Start Up Test Fault';
GateDrv1StrtUpTestFlt.Description = 'Off State Verification and Configure State Faults associated with Gate Drive 1';
GateDrv1StrtUpTestFlt.NtcStInfo = DataDict.NtcStInfoIdx;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(1).EngVal = 0;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(1).Descr = 'Gate Drive not turned OFF';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(2).EngVal = 1;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(2).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(3).EngVal = 2;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(3).Descr = 'VREG UV, VBB OV, VBB UV Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(4).EngVal = 3;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(4).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(5).EngVal = 4;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(5).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(6).EngVal = 5;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(6).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(7).EngVal = 6;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(7).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(8).EngVal = 7;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(8).Descr = 'Phase Disconnect Low Side';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(9).EngVal = 8;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(9).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(10).EngVal = 9;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(10).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(11).EngVal = 10;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(11).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(12).EngVal = 11;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(12).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(13).EngVal = 12;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(13).Descr = 'Phase Disconnect High Side';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(14).EngVal = 13;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(14).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(15).EngVal = 14;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(15).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(16).EngVal = 15;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(16).Descr = 'Bootstrap Undervoltage Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(17).EngVal = 16;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(17).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(18).EngVal = 17;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(18).Descr = 'High Side - VDS Overvoltage  Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(19).EngVal = 18;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(19).Descr = 'Unused';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(20).EngVal = 19;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(20).Descr = 'Low Side - VDS Overvoltage  Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(21).EngVal = 128;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(21).Descr = 'Configure 0 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(22).EngVal = 129;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(22).Descr = 'Configure 1 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(23).EngVal = 130;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(23).Descr = 'Configure 2 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(24).EngVal = 131;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(24).Descr = 'Configure 3 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(25).EngVal = 132;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(25).Descr = 'Configure 4 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(26).EngVal = 133;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(26).Descr = 'Configure 5 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(27).EngVal = 134;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(27).Descr = 'Configure 6 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(28).EngVal = 135;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(28).Descr = 'Configure 7 Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(29).EngVal = 136;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(29).Descr = 'Control Register Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(30).EngVal = 137;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(30).Descr = 'Mask Register 1 Fault';
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(31).EngVal = 138;
GateDrv1StrtUpTestFlt.NtcStInfo.Idx(31).Descr = 'Mask Register 2 Fault';


GateDrv1VltgRgltrBootstrpSplyFlt = DataDict.NTC;
GateDrv1VltgRgltrBootstrpSplyFlt.NtcNr = NtcNr1.NTCNR_0X065;
GateDrv1VltgRgltrBootstrpSplyFlt.NtcTyp = 'None';
GateDrv1VltgRgltrBootstrpSplyFlt.LongName = 'Gate Drive 1 Boot Strap Supply Fault';
GateDrv1VltgRgltrBootstrpSplyFlt.Description = 'Onstate VREG and Bootstrap supply monitor fault associated with Gate Drive 1';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit0Descr = 'Charge Pump Under Voltage Fault';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit1Descr = 'Bootstrap undervoltage, Phase A Fault';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit2Descr = 'Bootstrap undervoltage, Phase B Fault';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit3Descr = 'Bootstrap undervoltage, Phase C Fault';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit4Descr = 'Unused';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit5Descr = 'Unused';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit6Descr = 'Unused';
GateDrv1VltgRgltrBootstrpSplyFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
