%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 27-Sep-2016 13:43:56       %
%                                  Created with tool release: 2.47.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM475A = DataDict.FDD;
CM475A.Version = '1.6.X';
CM475A.LongName = 'Peripheral TSG31 Configuration and Use';
CM475A.ShoName  = 'TSG31CfgAndUse';
CM475A.DesignASIL = 'D';
CM475A.Description = [...
  'Peripheral TSG31 Configuration and Use'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TSG31CfgAndUseInit1 = DataDict.Runnable;
TSG31CfgAndUseInit1.Context = 'Rte';
TSG31CfgAndUseInit1.TimeStep = 0;
TSG31CfgAndUseInit1.Description = 'None';

TSG31CfgAndUsePer1 = DataDict.Runnable;
TSG31CfgAndUsePer1.Context = 'NonRte';
TSG31CfgAndUsePer1.TimeStep = 'MotorControl';
TSG31CfgAndUsePer1.Description = 'None';

TSG31CfgAndUsePer2 = DataDict.Runnable;
TSG31CfgAndUsePer2.Context = 'Rte';
TSG31CfgAndUsePer2.TimeStep = 0.002;
TSG31CfgAndUsePer2.Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
IoHwAb_SetFctGpioPhaALowrCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaALowrCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetFctGpioPhaALowrCmd.Description = 'None';
IoHwAb_SetFctGpioPhaALowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaALowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaALowrCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaALowrCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaALowrCmd.Return.TestTolerance = [];
IoHwAb_SetFctGpioPhaALowrCmd.Return.Description = '';


IoHwAb_SetFctGpioPhaAUpprCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaAUpprCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetFctGpioPhaAUpprCmd.Description = 'None';
IoHwAb_SetFctGpioPhaAUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaAUpprCmd.Return.TestTolerance = [];
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Description = '';


IoHwAb_SetFctGpioPhaBLowrCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaBLowrCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetFctGpioPhaBLowrCmd.Description = 'None';
IoHwAb_SetFctGpioPhaBLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaBLowrCmd.Return.TestTolerance = [];
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Description = '';


IoHwAb_SetFctGpioPhaBUpprCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaBUpprCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetFctGpioPhaBUpprCmd.Description = 'None';
IoHwAb_SetFctGpioPhaBUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaBUpprCmd.Return.TestTolerance = [];
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Description = '';


IoHwAb_SetFctGpioPhaCLowrCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaCLowrCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetFctGpioPhaCLowrCmd.Description = 'None';
IoHwAb_SetFctGpioPhaCLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaCLowrCmd.Return.TestTolerance = [];
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Description = '';


IoHwAb_SetFctGpioPhaCUpprCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaCUpprCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetFctGpioPhaCUpprCmd.Description = 'None';
IoHwAb_SetFctGpioPhaCUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaCUpprCmd.Return.TestTolerance = [];
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Description = '';


IoHwAb_SetFctPeriphPhaALowrCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaALowrCmd.CallLocation = {'TSG31CfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaALowrCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaALowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaALowrCmd.Return.TestTolerance = [];
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Description = '';


IoHwAb_SetFctPeriphPhaAUpprCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaAUpprCmd.CallLocation = {'TSG31CfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaAUpprCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaAUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.TestTolerance = [];
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Description = '';


IoHwAb_SetFctPeriphPhaBLowrCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaBLowrCmd.CallLocation = {'TSG31CfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaBLowrCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaBLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.TestTolerance = [];
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Description = '';


IoHwAb_SetFctPeriphPhaBUpprCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaBUpprCmd.CallLocation = {'TSG31CfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaBUpprCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaBUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.TestTolerance = [];
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Description = '';


IoHwAb_SetFctPeriphPhaCLowrCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaCLowrCmd.CallLocation = {'TSG31CfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaCLowrCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaCLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.TestTolerance = [];
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Description = '';


IoHwAb_SetFctPeriphPhaCUpprCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaCUpprCmd.CallLocation = {'TSG31CfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaCUpprCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaCUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.TestTolerance = [];
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Description = '';


IoHwAb_SetGpioPhaALowrCmd = DataDict.Client;
IoHwAb_SetGpioPhaALowrCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetGpioPhaALowrCmd.Description = 'None';
IoHwAb_SetGpioPhaALowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaALowrCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaALowrCmd.Return.Min = 0;
IoHwAb_SetGpioPhaALowrCmd.Return.Max = 1;
IoHwAb_SetGpioPhaALowrCmd.Return.TestTolerance = [];
IoHwAb_SetGpioPhaALowrCmd.Return.Description = '';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Description = '';


IoHwAb_SetGpioPhaAUpprCmd = DataDict.Client;
IoHwAb_SetGpioPhaAUpprCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetGpioPhaAUpprCmd.Description = 'None';
IoHwAb_SetGpioPhaAUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaAUpprCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaAUpprCmd.Return.Min = 0;
IoHwAb_SetGpioPhaAUpprCmd.Return.Max = 1;
IoHwAb_SetGpioPhaAUpprCmd.Return.TestTolerance = [];
IoHwAb_SetGpioPhaAUpprCmd.Return.Description = '';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Description = '';


IoHwAb_SetGpioPhaBLowrCmd = DataDict.Client;
IoHwAb_SetGpioPhaBLowrCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetGpioPhaBLowrCmd.Description = 'None';
IoHwAb_SetGpioPhaBLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaBLowrCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaBLowrCmd.Return.Min = 0;
IoHwAb_SetGpioPhaBLowrCmd.Return.Max = 1;
IoHwAb_SetGpioPhaBLowrCmd.Return.TestTolerance = [];
IoHwAb_SetGpioPhaBLowrCmd.Return.Description = '';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Description = '';


IoHwAb_SetGpioPhaBUpprCmd = DataDict.Client;
IoHwAb_SetGpioPhaBUpprCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetGpioPhaBUpprCmd.Description = 'None';
IoHwAb_SetGpioPhaBUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaBUpprCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaBUpprCmd.Return.Min = 0;
IoHwAb_SetGpioPhaBUpprCmd.Return.Max = 1;
IoHwAb_SetGpioPhaBUpprCmd.Return.TestTolerance = [];
IoHwAb_SetGpioPhaBUpprCmd.Return.Description = '';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Description = '';


IoHwAb_SetGpioPhaCLowrCmd = DataDict.Client;
IoHwAb_SetGpioPhaCLowrCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetGpioPhaCLowrCmd.Description = 'None';
IoHwAb_SetGpioPhaCLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaCLowrCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaCLowrCmd.Return.Min = 0;
IoHwAb_SetGpioPhaCLowrCmd.Return.Max = 1;
IoHwAb_SetGpioPhaCLowrCmd.Return.TestTolerance = [];
IoHwAb_SetGpioPhaCLowrCmd.Return.Description = '';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Description = '';


IoHwAb_SetGpioPhaCUpprCmd = DataDict.Client;
IoHwAb_SetGpioPhaCUpprCmd.CallLocation = {'TSG31CfgAndUseInit1','TSG31CfgAndUsePer2'};
IoHwAb_SetGpioPhaCUpprCmd.Description = 'None';
IoHwAb_SetGpioPhaCUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaCUpprCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaCUpprCmd.Return.Min = 0;
IoHwAb_SetGpioPhaCUpprCmd.Return.Max = 1;
IoHwAb_SetGpioPhaCUpprCmd.Return.TestTolerance = [];
IoHwAb_SetGpioPhaCUpprCmd.Return.Description = '';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlMotCurrEolCalSt = DataDict.IpSignal;
MotCtrlMotCurrEolCalSt.LongName = 'Motor Current EOL Calibration State';
MotCtrlMotCurrEolCalSt.Description = 'None';
MotCtrlMotCurrEolCalSt.DocUnits = 'Cnt';
MotCtrlMotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCtrlMotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCtrlMotCurrEolCalSt.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCtrlMotCurrEolCalSt.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCtrlMotCurrEolCalSt.ReadIn = {'TSG31CfgAndUsePer1'};
MotCtrlMotCurrEolCalSt.ReadType = 'NonRte';


MotCtrlPhaOnTiA = DataDict.IpSignal;
MotCtrlPhaOnTiA.LongName = 'Phase A on Time';
MotCtrlPhaOnTiA.Description = 'None';
MotCtrlPhaOnTiA.DocUnits = 'NanoSec';
MotCtrlPhaOnTiA.EngDT = dt.u32;
MotCtrlPhaOnTiA.EngInit = 0;
MotCtrlPhaOnTiA.EngMin = 0;
MotCtrlPhaOnTiA.EngMax = 71429;
MotCtrlPhaOnTiA.ReadIn = {'TSG31CfgAndUsePer1'};
MotCtrlPhaOnTiA.ReadType = 'NonRte';


MotCtrlPhaOnTiB = DataDict.IpSignal;
MotCtrlPhaOnTiB.LongName = 'Phase B on Time';
MotCtrlPhaOnTiB.Description = 'None';
MotCtrlPhaOnTiB.DocUnits = 'NanoSec';
MotCtrlPhaOnTiB.EngDT = dt.u32;
MotCtrlPhaOnTiB.EngInit = 0;
MotCtrlPhaOnTiB.EngMin = 0;
MotCtrlPhaOnTiB.EngMax = 71429;
MotCtrlPhaOnTiB.ReadIn = {'TSG31CfgAndUsePer1'};
MotCtrlPhaOnTiB.ReadType = 'NonRte';


MotCtrlPhaOnTiC = DataDict.IpSignal;
MotCtrlPhaOnTiC.LongName = 'Phase C on Time';
MotCtrlPhaOnTiC.Description = 'None';
MotCtrlPhaOnTiC.DocUnits = 'NanoSec';
MotCtrlPhaOnTiC.EngDT = dt.u32;
MotCtrlPhaOnTiC.EngInit = 0;
MotCtrlPhaOnTiC.EngMin = 0;
MotCtrlPhaOnTiC.EngMax = 71429;
MotCtrlPhaOnTiC.ReadIn = {'TSG31CfgAndUsePer1'};
MotCtrlPhaOnTiC.ReadType = 'NonRte';


MotCtrlPwmPerd = DataDict.IpSignal;
MotCtrlPwmPerd.LongName = 'PWM Period';
MotCtrlPwmPerd.Description = 'None';
MotCtrlPwmPerd.DocUnits = 'NanoSec';
MotCtrlPwmPerd.EngDT = dt.u32;
MotCtrlPwmPerd.EngInit = 62500;
MotCtrlPwmPerd.EngMin = 55555;
MotCtrlPwmPerd.EngMax = 71429;
MotCtrlPwmPerd.ReadIn = {'TSG31CfgAndUsePer1'};
MotCtrlPwmPerd.ReadType = 'NonRte';


MotCurrEolCalSt = DataDict.IpSignal;
MotCurrEolCalSt.LongName = 'Motor Current EOL Calibration State';
MotCurrEolCalSt.Description = 'None';
MotCurrEolCalSt.DocUnits = 'Cnt';
MotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCurrEolCalSt.ReadIn = {'TSG31CfgAndUsePer2'};
MotCurrEolCalSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'SystemState';
SysSt.Description = 'None';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'TSG31CfgAndUsePer2'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlTSG31CMP0E = DataDict.OpSignal;
MotCtrlTSG31CMP0E.LongName = 'Register TSG31CMP0E';
MotCtrlTSG31CMP0E.Description = [...
  'Register TSG31CMP0E. This register specifies the PWM period.  For the ' ...
  'init value of 4444, a PWM period of 18KHz was chosen, with an assumed ' ...
  'clock freq of 80MHz.'];
MotCtrlTSG31CMP0E.DocUnits = 'Cnt';
MotCtrlTSG31CMP0E.SwcShoName = 'TSG31CfgAndUse';
MotCtrlTSG31CMP0E.EngDT = dt.u32;
MotCtrlTSG31CMP0E.EngInit = 4444;
MotCtrlTSG31CMP0E.EngMin = 0;
MotCtrlTSG31CMP0E.EngMax = 65535;
MotCtrlTSG31CMP0E.TestTolerance = 0;
MotCtrlTSG31CMP0E.WrittenIn = {'TSG31CfgAndUsePer1'};
MotCtrlTSG31CMP0E.WriteType = 'NonRte';


MotCtrlTSG31CMP12E = DataDict.OpSignal;
MotCtrlTSG31CMP12E.LongName = 'Register TSG31CMP12E';
MotCtrlTSG31CMP12E.Description = [...
  'Register TSG31CMP12E. The init value = PWM period peak count value - T' ...
  'SG31CfgAndUseMtrAg0SPIStart.EngVal.  More specifically, (1/PWM Period)' ...
  ' * clock frequency - (TSG31CfgAndUseMtrAg0SPIStart.EngVal converted to' ...
  ' counts).  In the case of MotCtrlTSG31CMP12E.EngInit = 4364, 18KHz PWM' ...
  ' period, clock frequency of 80MHz and TSG31CfgAndUseMtrAg0SPIStart.Eng' ...
  'Val = 1000 were chosen.'];
MotCtrlTSG31CMP12E.DocUnits = 'Cnt';
MotCtrlTSG31CMP12E.SwcShoName = 'TSG31CfgAndUse';
MotCtrlTSG31CMP12E.EngDT = dt.u32;
MotCtrlTSG31CMP12E.EngInit = 4364;
MotCtrlTSG31CMP12E.EngMin = 0;
MotCtrlTSG31CMP12E.EngMax = 262143;
MotCtrlTSG31CMP12E.TestTolerance = 0;
MotCtrlTSG31CMP12E.WrittenIn = {'TSG31CfgAndUsePer1'};
MotCtrlTSG31CMP12E.WriteType = 'NonRte';


MotCtrlTSG31CMPUE = DataDict.OpSignal;
MotCtrlTSG31CMPUE.LongName = 'Register TSG31CMPUE';
MotCtrlTSG31CMPUE.Description = [...
  'Register TSG31CMPUE. For the init value of 4444, a PWM period of 18KHz' ...
  ' was chosen, with an assumed clock freq of 80MHz.'];
MotCtrlTSG31CMPUE.DocUnits = 'Cnt';
MotCtrlTSG31CMPUE.SwcShoName = 'TSG31CfgAndUse';
MotCtrlTSG31CMPUE.EngDT = dt.u32;
MotCtrlTSG31CMPUE.EngInit = 4444;
MotCtrlTSG31CMPUE.EngMin = 0;
MotCtrlTSG31CMPUE.EngMax = 262143;
MotCtrlTSG31CMPUE.TestTolerance = 0;
MotCtrlTSG31CMPUE.WrittenIn = {'TSG31CfgAndUsePer1'};
MotCtrlTSG31CMPUE.WriteType = 'NonRte';


MotCtrlTSG31CMPVE = DataDict.OpSignal;
MotCtrlTSG31CMPVE.LongName = 'Register TSG31CMPUE';
MotCtrlTSG31CMPVE.Description = [...
  'Register TSG31CMPUE. For the init value of 4444, a PWM period of 18KHz' ...
  ' was chosen, with an assumed clock freq of 80MHz.'];
MotCtrlTSG31CMPVE.DocUnits = 'Cnt';
MotCtrlTSG31CMPVE.SwcShoName = 'TSG31CfgAndUse';
MotCtrlTSG31CMPVE.EngDT = dt.u32;
MotCtrlTSG31CMPVE.EngInit = 4444;
MotCtrlTSG31CMPVE.EngMin = 0;
MotCtrlTSG31CMPVE.EngMax = 262143;
MotCtrlTSG31CMPVE.TestTolerance = 0;
MotCtrlTSG31CMPVE.WrittenIn = {'TSG31CfgAndUsePer1'};
MotCtrlTSG31CMPVE.WriteType = 'NonRte';


MotCtrlTSG31CMPWE = DataDict.OpSignal;
MotCtrlTSG31CMPWE.LongName = 'Register TSG31CMPUE';
MotCtrlTSG31CMPWE.Description = [...
  'Register TSG31CMPUE. For the init value of 4444, a PWM period of 18KHz' ...
  ' was chosen, with an assumed clock freq of 80MHz.'];
MotCtrlTSG31CMPWE.DocUnits = 'Cnt';
MotCtrlTSG31CMPWE.SwcShoName = 'TSG31CfgAndUse';
MotCtrlTSG31CMPWE.EngDT = dt.u32;
MotCtrlTSG31CMPWE.EngInit = 4444;
MotCtrlTSG31CMPWE.EngMin = 0;
MotCtrlTSG31CMPWE.EngMax = 262143;
MotCtrlTSG31CMPWE.TestTolerance = 0;
MotCtrlTSG31CMPWE.WrittenIn = {'TSG31CfgAndUsePer1'};
MotCtrlTSG31CMPWE.WriteType = 'NonRte';


MotCtrlTSG31DCMP0E = DataDict.OpSignal;
MotCtrlTSG31DCMP0E.LongName = 'Register TSG31DCMP0E';
MotCtrlTSG31DCMP0E.Description = [...
  'Register TSG31DCMP0E.  The init value = PWM period peak count value - ' ...
  'TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.EngVal.  More specifically,' ...
  ' (1/PWM Period) * clock frequency - (TSG31CfgAndUseAdcStrtOfCnvnMotCtr' ...
  'lPeakOffs.EngVal converted to counts).  In the case of MotCtrlTSG31DCM' ...
  'P0E.EngInit = 3964, 18KHz PWM period, clock frequency of 80MHz and TSG' ...
  '31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.EngVal = 6000 were chosen.'];
MotCtrlTSG31DCMP0E.DocUnits = 'Cnt';
MotCtrlTSG31DCMP0E.SwcShoName = 'TSG31CfgAndUse';
MotCtrlTSG31DCMP0E.EngDT = dt.u32;
MotCtrlTSG31DCMP0E.EngInit = 3964;
MotCtrlTSG31DCMP0E.EngMin = 0;
MotCtrlTSG31DCMP0E.EngMax = 262143;
MotCtrlTSG31DCMP0E.TestTolerance = 0;
MotCtrlTSG31DCMP0E.WrittenIn = {'TSG31CfgAndUsePer1'};
MotCtrlTSG31DCMP0E.WriteType = 'NonRte';


RegOutpTSG31CMP0E = DataDict.OpSignal;
RegOutpTSG31CMP0E.LongName = 'Register TSG31CMP0E';
RegOutpTSG31CMP0E.Description = 'Register TSG31CMP0E';
RegOutpTSG31CMP0E.DocUnits = 'Cnt';
RegOutpTSG31CMP0E.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31CMP0E.EngDT = dt.u32;
RegOutpTSG31CMP0E.EngInit = 0;
RegOutpTSG31CMP0E.EngMin = 0;
RegOutpTSG31CMP0E.EngMax = 65535;
RegOutpTSG31CMP0E.TestTolerance = 0;
RegOutpTSG31CMP0E.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31CMP0E.WriteType = 'Phy';


RegOutpTSG31CMP11E = DataDict.OpSignal;
RegOutpTSG31CMP11E.LongName = 'Register TSG31CMP11E';
RegOutpTSG31CMP11E.Description = 'Register TSG31CMP11E';
RegOutpTSG31CMP11E.DocUnits = 'Cnt';
RegOutpTSG31CMP11E.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31CMP11E.EngDT = dt.u32;
RegOutpTSG31CMP11E.EngInit = 0;
RegOutpTSG31CMP11E.EngMin = 0;
RegOutpTSG31CMP11E.EngMax = 262143;
RegOutpTSG31CMP11E.TestTolerance = 0;
RegOutpTSG31CMP11E.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31CMP11E.WriteType = 'Phy';


RegOutpTSG31CMP12E = DataDict.OpSignal;
RegOutpTSG31CMP12E.LongName = 'Register TSG31CMP12E';
RegOutpTSG31CMP12E.Description = 'Register TSG31CMP12E';
RegOutpTSG31CMP12E.DocUnits = 'Cnt';
RegOutpTSG31CMP12E.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31CMP12E.EngDT = dt.u32;
RegOutpTSG31CMP12E.EngInit = 0;
RegOutpTSG31CMP12E.EngMin = 0;
RegOutpTSG31CMP12E.EngMax = 262143;
RegOutpTSG31CMP12E.TestTolerance = 0;
RegOutpTSG31CMP12E.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31CMP12E.WriteType = 'Phy';


RegOutpTSG31CMP7E = DataDict.OpSignal;
RegOutpTSG31CMP7E.LongName = 'Register TSG31CMP7E';
RegOutpTSG31CMP7E.Description = 'Register TSG31CMP7E';
RegOutpTSG31CMP7E.DocUnits = 'Cnt';
RegOutpTSG31CMP7E.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31CMP7E.EngDT = dt.u32;
RegOutpTSG31CMP7E.EngInit = 0;
RegOutpTSG31CMP7E.EngMin = 0;
RegOutpTSG31CMP7E.EngMax = 262143;
RegOutpTSG31CMP7E.TestTolerance = 0;
RegOutpTSG31CMP7E.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31CMP7E.WriteType = 'Phy';


RegOutpTSG31CMPUE = DataDict.OpSignal;
RegOutpTSG31CMPUE.LongName = 'Register TSG31CMPUE';
RegOutpTSG31CMPUE.Description = 'Register TSG31CMPUE';
RegOutpTSG31CMPUE.DocUnits = 'Cnt';
RegOutpTSG31CMPUE.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31CMPUE.EngDT = dt.u32;
RegOutpTSG31CMPUE.EngInit = 0;
RegOutpTSG31CMPUE.EngMin = 0;
RegOutpTSG31CMPUE.EngMax = 262143;
RegOutpTSG31CMPUE.TestTolerance = 0;
RegOutpTSG31CMPUE.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31CMPUE.WriteType = 'Phy';


RegOutpTSG31CMPVE = DataDict.OpSignal;
RegOutpTSG31CMPVE.LongName = 'Register TSG31CMPVE';
RegOutpTSG31CMPVE.Description = 'Register TSG31CMPVE';
RegOutpTSG31CMPVE.DocUnits = 'Cnt';
RegOutpTSG31CMPVE.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31CMPVE.EngDT = dt.u32;
RegOutpTSG31CMPVE.EngInit = 0;
RegOutpTSG31CMPVE.EngMin = 0;
RegOutpTSG31CMPVE.EngMax = 262143;
RegOutpTSG31CMPVE.TestTolerance = 0;
RegOutpTSG31CMPVE.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31CMPVE.WriteType = 'Phy';


RegOutpTSG31CMPWE = DataDict.OpSignal;
RegOutpTSG31CMPWE.LongName = 'Register TSG31CMPWE';
RegOutpTSG31CMPWE.Description = 'Register TSG31CMPWE';
RegOutpTSG31CMPWE.DocUnits = 'Cnt';
RegOutpTSG31CMPWE.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31CMPWE.EngDT = dt.u32;
RegOutpTSG31CMPWE.EngInit = 0;
RegOutpTSG31CMPWE.EngMin = 0;
RegOutpTSG31CMPWE.EngMax = 262143;
RegOutpTSG31CMPWE.TestTolerance = 0;
RegOutpTSG31CMPWE.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31CMPWE.WriteType = 'Phy';


RegOutpTSG31DCMP0E = DataDict.OpSignal;
RegOutpTSG31DCMP0E.LongName = 'Register TSG31DCMP0E';
RegOutpTSG31DCMP0E.Description = 'Register TSG31DCMP0E';
RegOutpTSG31DCMP0E.DocUnits = 'Cnt';
RegOutpTSG31DCMP0E.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31DCMP0E.EngDT = dt.u32;
RegOutpTSG31DCMP0E.EngInit = 0;
RegOutpTSG31DCMP0E.EngMin = 0;
RegOutpTSG31DCMP0E.EngMax = 262143;
RegOutpTSG31DCMP0E.TestTolerance = 0;
RegOutpTSG31DCMP0E.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31DCMP0E.WriteType = 'Phy';


RegOutpTSG31DCMP1E = DataDict.OpSignal;
RegOutpTSG31DCMP1E.LongName = 'Register TSG31DCMP1E';
RegOutpTSG31DCMP1E.Description = 'Register TSG31DCMP1E';
RegOutpTSG31DCMP1E.DocUnits = 'Cnt';
RegOutpTSG31DCMP1E.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31DCMP1E.EngDT = dt.u32;
RegOutpTSG31DCMP1E.EngInit = 0;
RegOutpTSG31DCMP1E.EngMin = 0;
RegOutpTSG31DCMP1E.EngMax = 262143;
RegOutpTSG31DCMP1E.TestTolerance = 0;
RegOutpTSG31DCMP1E.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31DCMP1E.WriteType = 'Phy';


RegOutpTSG31DTC0 = DataDict.OpSignal;
RegOutpTSG31DTC0.LongName = 'Register TSG31DTC0';
RegOutpTSG31DTC0.Description = 'Field DTC0 of Register TSG31DTC0W';
RegOutpTSG31DTC0.DocUnits = 'Cnt';
RegOutpTSG31DTC0.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31DTC0.EngDT = dt.u16;
RegOutpTSG31DTC0.EngInit = 0;
RegOutpTSG31DTC0.EngMin = 0;
RegOutpTSG31DTC0.EngMax = 1023;
RegOutpTSG31DTC0.TestTolerance = 0;
RegOutpTSG31DTC0.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31DTC0.WriteType = 'Phy';


RegOutpTSG31DTC1 = DataDict.OpSignal;
RegOutpTSG31DTC1.LongName = 'Register TSG31DTC1';
RegOutpTSG31DTC1.Description = 'Field DTC1 of Register TSG31DTC1W';
RegOutpTSG31DTC1.DocUnits = 'Cnt';
RegOutpTSG31DTC1.SwcShoName = 'TSG31CfgAndUse';
RegOutpTSG31DTC1.EngDT = dt.u16;
RegOutpTSG31DTC1.EngInit = 0;
RegOutpTSG31DTC1.EngMin = 0;
RegOutpTSG31DTC1.EngMax = 1023;
RegOutpTSG31DTC1.TestTolerance = 0;
RegOutpTSG31DTC1.WrittenIn = {'TSG31CfgAndUseInit1'};
RegOutpTSG31DTC1.WriteType = 'Phy';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
TSG31CfgAndUseAdcStrtOfCnvn2Offs = DataDict.Calibration;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.LongName = 'Two Millisec ADC Start of Conversion Offset';
TSG31CfgAndUseAdcStrtOfCnvn2Offs.Description = [...
  'Two Millisec ADC Start of Conversion Offset.  EngMax = floor(45455/2)-' ...
  '1, where 45455 represents the time for a 22 Khz PWM period'];
TSG31CfgAndUseAdcStrtOfCnvn2Offs.DocUnits = 'NanoSec';
TSG31CfgAndUseAdcStrtOfCnvn2Offs.EngDT = dt.u32;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.EngVal = 5000;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.EngMin = 0;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.EngMax = 22726;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.Cardinality = 'Cmn';
TSG31CfgAndUseAdcStrtOfCnvn2Offs.CustomerVisible = false;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.Online = false;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.Impact = 'H';
TSG31CfgAndUseAdcStrtOfCnvn2Offs.TuningOwner = 'FDD';
TSG31CfgAndUseAdcStrtOfCnvn2Offs.GraphLink = {''};
TSG31CfgAndUseAdcStrtOfCnvn2Offs.Monotony = 'None';
TSG31CfgAndUseAdcStrtOfCnvn2Offs.MaxGrad = 0;
TSG31CfgAndUseAdcStrtOfCnvn2Offs.PortName = 'TSG31CfgAndUseAdcStrtOfCnvn2Offs';


TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs = DataDict.Calibration;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.LongName = 'Peak MtrCtrl ADC Offset';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.Description = [...
  'Peak MtrCtrl ADC Offset. EngMax = floor(45455/2)-1, where 45455 repres' ...
  'ents the time for a 22 Khz PWM period'];
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.DocUnits = 'NanoSec';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.EngDT = dt.u32;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.EngVal = 6000;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.EngMin = 0;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.EngMax = 22726;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.Cardinality = 'Cmn';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.CustomerVisible = false;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.Online = false;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.Impact = 'H';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.TuningOwner = 'FDD';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.GraphLink = {''};
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.Monotony = 'None';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.MaxGrad = 0;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs.PortName = 'TSG31CfgAndUseAdcStrtOfCnvnMotCtrlPeakOffs';


TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs = DataDict.Calibration;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.LongName = 'Vly MtrCtrl ADC Offset';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.Description = [...
  'Vly MtrCtrl ADC Offset. EngMax = floor(45455/2)-1, where 45455 represe' ...
  'nts the time for a 22 Khz PWM period'];
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.DocUnits = 'NanoSec';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.EngDT = dt.u32;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.EngVal = 7000;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.EngMin = 0;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.EngMax = 22726;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.Cardinality = 'Cmn';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.CustomerVisible = false;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.Online = false;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.Impact = 'H';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.TuningOwner = 'FDD';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.GraphLink = {''};
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.Monotony = 'None';
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.MaxGrad = 0;
TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs.PortName = 'TSG31CfgAndUseAdcStrtOfCnvnMotCtrlVlyOffs';


TSG31CfgAndUseMtrAg0SPIStart = DataDict.Calibration;
TSG31CfgAndUseMtrAg0SPIStart.LongName = 'Motor Angle 0 SPI Start';
TSG31CfgAndUseMtrAg0SPIStart.Description = [...
  'Motor Angle 0 SPI Start. EngMax = floor(45455/2)-1, where 45455 repres' ...
  'ents the time for a 22 Khz PWM period'];
TSG31CfgAndUseMtrAg0SPIStart.DocUnits = 'NanoSec';
TSG31CfgAndUseMtrAg0SPIStart.EngDT = dt.u32;
TSG31CfgAndUseMtrAg0SPIStart.EngVal = 1000;
TSG31CfgAndUseMtrAg0SPIStart.EngMin = 0;
TSG31CfgAndUseMtrAg0SPIStart.EngMax = 22726;
TSG31CfgAndUseMtrAg0SPIStart.Cardinality = 'Cmn';
TSG31CfgAndUseMtrAg0SPIStart.CustomerVisible = false;
TSG31CfgAndUseMtrAg0SPIStart.Online = false;
TSG31CfgAndUseMtrAg0SPIStart.Impact = 'H';
TSG31CfgAndUseMtrAg0SPIStart.TuningOwner = 'FDD';
TSG31CfgAndUseMtrAg0SPIStart.GraphLink = {''};
TSG31CfgAndUseMtrAg0SPIStart.Monotony = 'None';
TSG31CfgAndUseMtrAg0SPIStart.MaxGrad = 0;
TSG31CfgAndUseMtrAg0SPIStart.PortName = 'TSG31CfgAndUseMtrAg0SPIStart';


TSG31CfgAndUsePwmDbnd = DataDict.Calibration;
TSG31CfgAndUsePwmDbnd.LongName = 'PWM Deadband';
TSG31CfgAndUsePwmDbnd.Description = 'PWM Deadband';
TSG31CfgAndUsePwmDbnd.DocUnits = 'NanoSec';
TSG31CfgAndUsePwmDbnd.EngDT = dt.u32;
TSG31CfgAndUsePwmDbnd.EngVal = 200;
TSG31CfgAndUsePwmDbnd.EngMin = 1;
TSG31CfgAndUsePwmDbnd.EngMax = 1000;
TSG31CfgAndUsePwmDbnd.Cardinality = 'Cmn';
TSG31CfgAndUsePwmDbnd.CustomerVisible = false;
TSG31CfgAndUsePwmDbnd.Online = false;
TSG31CfgAndUsePwmDbnd.Impact = 'H';
TSG31CfgAndUsePwmDbnd.TuningOwner = 'FDD';
TSG31CfgAndUsePwmDbnd.GraphLink = {''};
TSG31CfgAndUsePwmDbnd.Monotony = 'None';
TSG31CfgAndUsePwmDbnd.MaxGrad = 0;
TSG31CfgAndUsePwmDbnd.PortName = 'TSG31CfgAndUsePwmDbnd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
CurrMeasEolFixdPwmPerd = DataDict.ImprtdCal;
CurrMeasEolFixdPwmPerd.DocUnits = 'NanoSec';
CurrMeasEolFixdPwmPerd.EngDT = dt.u32;
CurrMeasEolFixdPwmPerd.EngVal = 62500;
CurrMeasEolFixdPwmPerd.EngMin = 55555;
CurrMeasEolFixdPwmPerd.EngMax = 71429;
CurrMeasEolFixdPwmPerd.PortName = 'CurrMeasEolFixdPwmPerd';
CurrMeasEolFixdPwmPerd.Description = 'Motor Current EOL Fixed PWM Period';


CurrMeasEolOffsHiCmuOffs = DataDict.ImprtdCal;
CurrMeasEolOffsHiCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsHiCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsHiCmuOffs.EngVal = 50000;
CurrMeasEolOffsHiCmuOffs.EngMin = 35715;
CurrMeasEolOffsHiCmuOffs.EngMax = 71429;
CurrMeasEolOffsHiCmuOffs.PortName = 'CurrMeasEolOffsHiCmuOffs';
CurrMeasEolOffsHiCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];


CurrMeasEolOffsLoCmuOffs = DataDict.ImprtdCal;
CurrMeasEolOffsLoCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsLoCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsLoCmuOffs.EngVal = 6250;
CurrMeasEolOffsLoCmuOffs.EngMin = 0;
CurrMeasEolOffsLoCmuOffs.EngMax = 35714;
CurrMeasEolOffsLoCmuOffs.PortName = 'CurrMeasEolOffsLoCmuOffs';
CurrMeasEolOffsLoCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
TSG31CfgAndUseAdcStrtOfCnvnPeak = DataDict.PIM;
TSG31CfgAndUseAdcStrtOfCnvnPeak.LongName = 'ADC0 Peak Start of Conversion';
TSG31CfgAndUseAdcStrtOfCnvnPeak.Description = [...
  'Time in motor control timer units, relative to the PWM middle, the ADC' ...
  '0 peak start of conversion fires'];
TSG31CfgAndUseAdcStrtOfCnvnPeak.DocUnits = 'Cnt';
TSG31CfgAndUseAdcStrtOfCnvnPeak.EngDT = dt.u32;
TSG31CfgAndUseAdcStrtOfCnvnPeak.EngMin = 0;
TSG31CfgAndUseAdcStrtOfCnvnPeak.EngMax = 2001;
TSG31CfgAndUseAdcStrtOfCnvnPeak.InitRowCol = [1  1];


TSG31CfgAndUseMotAg0SPIStart = DataDict.PIM;
TSG31CfgAndUseMotAg0SPIStart.LongName = 'Motor Angle 0 SPI Start';
TSG31CfgAndUseMotAg0SPIStart.Description = [...
  'Time in motor control timer units, relative to the PWM middle, the Mot' ...
  'Ag0 transmission start DMA fires'];
TSG31CfgAndUseMotAg0SPIStart.DocUnits = 'Cnt';
TSG31CfgAndUseMotAg0SPIStart.EngDT = dt.u32;
TSG31CfgAndUseMotAg0SPIStart.EngMin = 0;
TSG31CfgAndUseMotAg0SPIStart.EngMax = 2001;
TSG31CfgAndUseMotAg0SPIStart.InitRowCol = [1  1];


TSG31CfgAndUseSysStEnaPrev = DataDict.PIM;
TSG31CfgAndUseSysStEnaPrev.LongName = 'System State in Enable Previous';
TSG31CfgAndUseSysStEnaPrev.Description = 'System State in Enable Previous';
TSG31CfgAndUseSysStEnaPrev.DocUnits = 'Cnt';
TSG31CfgAndUseSysStEnaPrev.EngDT = dt.lgc;
TSG31CfgAndUseSysStEnaPrev.EngMin = 0;
TSG31CfgAndUseSysStEnaPrev.EngMax = 1;
TSG31CfgAndUseSysStEnaPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.LongName = 'Minimum PWM Period';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Description = [...
  'Minimum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMIN_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngVal = 55555;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMin = 45455;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMax = 71429;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19 = DataDict.Constant;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.LongName = 'Inverse Motor Control Period';
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.Description = [...
  'Inverse of MOTCTRLTIMFRQ in units of NanoSec. ELECGLBPRM_PWMTMRPERDIVS' ...
  '_CNTPERNANOSEC_U13P19.EngVal = ELECGLBPRM_PWMTMRFRQ_HZ_U32.EngVal/1e9'];
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.DocUnits = 'CntPerNanoSec';
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.EngDT = dt.u13p19;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.EngVal = 0.08;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.Define = 'Global';


MOTAG2SPISTRT_NANOSEC_U32 = DataDict.Constant;
MOTAG2SPISTRT_NANOSEC_U32.LongName = 'Motor Angle 2 SPI Start';
MOTAG2SPISTRT_NANOSEC_U32.Description = [...
  'Start Of Motor Angle 2 SPI Transmission'];
MOTAG2SPISTRT_NANOSEC_U32.DocUnits = 'NanoSec';
MOTAG2SPISTRT_NANOSEC_U32.EngDT = dt.u32;
MOTAG2SPISTRT_NANOSEC_U32.EngVal = 10000;
MOTAG2SPISTRT_NANOSEC_U32.Define = 'Local';


TSG31UPD_NANOSEC_U32 = DataDict.Constant;
TSG31UPD_NANOSEC_U32.LongName = 'TSGxx Update';
TSG31UPD_NANOSEC_U32.Description = 'Time needed to update TSG31 by DMA';
TSG31UPD_NANOSEC_U32.DocUnits = 'NanoSec';
TSG31UPD_NANOSEC_U32.EngDT = dt.u32;
TSG31UPD_NANOSEC_U32.EngVal = 5000;
TSG31UPD_NANOSEC_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
