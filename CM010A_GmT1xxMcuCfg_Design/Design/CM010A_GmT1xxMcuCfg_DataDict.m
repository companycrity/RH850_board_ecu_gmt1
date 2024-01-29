%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-Dec-2016 16:56:22       %
%                                  Created with tool release: 2.49.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM010A = DataDict.FDD;
CM010A.Version = '3.5.X';
CM010A.LongName = 'GM T1xx MCU Configuration';
CM010A.ShoName  = 'GmT1xxMcuCfg';
CM010A.DesignASIL = 'D';
CM010A.Description = [...
  'Program specific I/O and Constant settings for the GM T1xx Program'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GmT1xxMcuCfgInit1 = DataDict.Runnable;
GmT1xxMcuCfgInit1.Context = 'Rte';
GmT1xxMcuCfgInit1.TimeStep = 0;
GmT1xxMcuCfgInit1.Description = 'None';

GmT1xxMcuCfgInit2 = DataDict.Runnable;
GmT1xxMcuCfgInit2.Context = 'Rte';
GmT1xxMcuCfgInit2.TimeStep = 0;
GmT1xxMcuCfgInit2.Description = 'None';

GmT1xxMcuCfgInit3 = DataDict.Runnable;
GmT1xxMcuCfgInit3.Context = 'Rte';
GmT1xxMcuCfgInit3.TimeStep = 0;
GmT1xxMcuCfgInit3.Description = 'None';

GmT1xxMcuCfgPer1 = DataDict.Runnable;
GmT1xxMcuCfgPer1.Context = 'NonRte';
GmT1xxMcuCfgPer1.TimeStep = 'MotorControl';
GmT1xxMcuCfgPer1.Description = 'None';

GmT1xxMcuCfgPer2 = DataDict.Runnable;
GmT1xxMcuCfgPer2.Context = 'Rte';
GmT1xxMcuCfgPer2.TimeStep = 0.002;
GmT1xxMcuCfgPer2.Description = 'None';

GmT1xxMcuCfgPer3 = DataDict.Runnable;
GmT1xxMcuCfgPer3.Context = 'Rte';
GmT1xxMcuCfgPer3.TimeStep = 0.002;
GmT1xxMcuCfgPer3.Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'GmT1xxMcuCfgInit2'};
GetRefTmr1MicroSec32bit.Description = 'None';
GetRefTmr1MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr1MicroSec32bit.Return.Type = 'None';
GetRefTmr1MicroSec32bit.Return.Min = [];
GetRefTmr1MicroSec32bit.Return.Max = [];
GetRefTmr1MicroSec32bit.Return.TestTolerance = [];
GetRefTmr1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr1MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr1MicroSec32bit.Arguments(1).TestTolerance = 10;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr1MicroSec32bit.Arguments(1).Description = '';


GetTiSpan1MicroSec32bit = DataDict.Client;
GetTiSpan1MicroSec32bit.CallLocation = {'GmT1xxMcuCfgInit2'};
GetTiSpan1MicroSec32bit.Description = 'None';
GetTiSpan1MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan1MicroSec32bit.Return.Type = 'None';
GetTiSpan1MicroSec32bit.Return.Min = [];
GetTiSpan1MicroSec32bit.Return.Max = [];
GetTiSpan1MicroSec32bit.Return.TestTolerance = [];
GetTiSpan1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(1).Description = '';
GetTiSpan1MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan1MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(2).TestTolerance = 10;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan1MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(2).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
Adc0Faild = DataDict.IpSignal;
Adc0Faild.LongName = 'ADC 0 Failed';
Adc0Faild.Description = 'None';
Adc0Faild.DocUnits = 'Cnt';
Adc0Faild.EngDT = dt.lgc;
Adc0Faild.EngInit = 0;
Adc0Faild.EngMin = 0;
Adc0Faild.EngMax = 1;
Adc0Faild.ReadIn = {'GmT1xxMcuCfgPer3'};
Adc0Faild.ReadType = 'Rte';


Adc1Faild = DataDict.IpSignal;
Adc1Faild.LongName = 'ADC 1 Failed';
Adc1Faild.Description = 'None';
Adc1Faild.DocUnits = 'Cnt';
Adc1Faild.EngDT = dt.lgc;
Adc1Faild.EngInit = 0;
Adc1Faild.EngMin = 0;
Adc1Faild.EngMax = 1;
Adc1Faild.ReadIn = {'GmT1xxMcuCfgPer3'};
Adc1Faild.ReadType = 'Rte';


Adc1RawRes = DataDict.IpSignal;
Adc1RawRes.LongName = 'Adc1 Raw Results';
Adc1RawRes.Description = 'None';
Adc1RawRes.DocUnits = 'Cnt';
Adc1RawRes.EngDT = dt.u32;
Adc1RawRes.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
Adc1RawRes.EngMin = 0;
Adc1RawRes.EngMax = 4095;
Adc1RawRes.ReadIn = {'GmT1xxMcuCfgPer2'};
Adc1RawRes.ReadType = 'NonRte';


MotCtrlAdc0RawRes = DataDict.IpSignal;
MotCtrlAdc0RawRes.LongName = 'Adc0 Raw Results';
MotCtrlAdc0RawRes.Description = 'None';
MotCtrlAdc0RawRes.DocUnits = 'Cnt';
MotCtrlAdc0RawRes.EngDT = dt.u16;
MotCtrlAdc0RawRes.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
MotCtrlAdc0RawRes.EngMin = 0;
MotCtrlAdc0RawRes.EngMax = 4095;
MotCtrlAdc0RawRes.ReadIn = {'GmT1xxMcuCfgPer1'};
MotCtrlAdc0RawRes.ReadType = 'NonRte';


RegInpADCD0DR00 = DataDict.IpSignal;
RegInpADCD0DR00.LongName = 'Register ADCD0DR00';
RegInpADCD0DR00.Description = 'None';
RegInpADCD0DR00.DocUnits = 'Cnt';
RegInpADCD0DR00.EngDT = dt.u32;
RegInpADCD0DR00.EngInit = 0;
RegInpADCD0DR00.EngMin = 0;
RegInpADCD0DR00.EngMax = 536805376;
RegInpADCD0DR00.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR00.ReadType = 'Phy';


RegInpADCD0DR02 = DataDict.IpSignal;
RegInpADCD0DR02.LongName = 'Register ADCD0DR02';
RegInpADCD0DR02.Description = 'None';
RegInpADCD0DR02.DocUnits = 'Cnt';
RegInpADCD0DR02.EngDT = dt.u32;
RegInpADCD0DR02.EngInit = 0;
RegInpADCD0DR02.EngMin = 0;
RegInpADCD0DR02.EngMax = 536805376;
RegInpADCD0DR02.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR02.ReadType = 'Phy';


RegInpADCD0DR04 = DataDict.IpSignal;
RegInpADCD0DR04.LongName = 'Register ADCD0DR04';
RegInpADCD0DR04.Description = 'None';
RegInpADCD0DR04.DocUnits = 'Cnt';
RegInpADCD0DR04.EngDT = dt.u32;
RegInpADCD0DR04.EngInit = 0;
RegInpADCD0DR04.EngMin = 0;
RegInpADCD0DR04.EngMax = 536805376;
RegInpADCD0DR04.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR04.ReadType = 'Phy';


RegInpADCD0DR06 = DataDict.IpSignal;
RegInpADCD0DR06.LongName = 'Register ADCD0DR06';
RegInpADCD0DR06.Description = 'None';
RegInpADCD0DR06.DocUnits = 'Cnt';
RegInpADCD0DR06.EngDT = dt.u32;
RegInpADCD0DR06.EngInit = 0;
RegInpADCD0DR06.EngMin = 0;
RegInpADCD0DR06.EngMax = 536805376;
RegInpADCD0DR06.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR06.ReadType = 'Phy';


RegInpADCD0DR08 = DataDict.IpSignal;
RegInpADCD0DR08.LongName = 'Register ADCD0DR08';
RegInpADCD0DR08.Description = 'None';
RegInpADCD0DR08.DocUnits = 'Cnt';
RegInpADCD0DR08.EngDT = dt.u32;
RegInpADCD0DR08.EngInit = 0;
RegInpADCD0DR08.EngMin = 0;
RegInpADCD0DR08.EngMax = 536805376;
RegInpADCD0DR08.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR08.ReadType = 'Phy';


RegInpADCD0DR10 = DataDict.IpSignal;
RegInpADCD0DR10.LongName = 'Register ADCD0DR10';
RegInpADCD0DR10.Description = 'None';
RegInpADCD0DR10.DocUnits = 'Cnt';
RegInpADCD0DR10.EngDT = dt.u32;
RegInpADCD0DR10.EngInit = 0;
RegInpADCD0DR10.EngMin = 0;
RegInpADCD0DR10.EngMax = 536805376;
RegInpADCD0DR10.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR10.ReadType = 'Phy';


RegInpADCD0DR12 = DataDict.IpSignal;
RegInpADCD0DR12.LongName = 'Register ADCD0DR12';
RegInpADCD0DR12.Description = 'None';
RegInpADCD0DR12.DocUnits = 'Cnt';
RegInpADCD0DR12.EngDT = dt.u32;
RegInpADCD0DR12.EngInit = 0;
RegInpADCD0DR12.EngMin = 0;
RegInpADCD0DR12.EngMax = 536805376;
RegInpADCD0DR12.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR12.ReadType = 'Phy';


RegInpADCD0DR14 = DataDict.IpSignal;
RegInpADCD0DR14.LongName = 'Register ADCD0DR14';
RegInpADCD0DR14.Description = 'None';
RegInpADCD0DR14.DocUnits = 'Cnt';
RegInpADCD0DR14.EngDT = dt.u32;
RegInpADCD0DR14.EngInit = 0;
RegInpADCD0DR14.EngMin = 0;
RegInpADCD0DR14.EngMax = 536805376;
RegInpADCD0DR14.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR14.ReadType = 'Phy';


RegInpADCD0DR16 = DataDict.IpSignal;
RegInpADCD0DR16.LongName = 'Register ADCD0DR16';
RegInpADCD0DR16.Description = 'None';
RegInpADCD0DR16.DocUnits = 'Cnt';
RegInpADCD0DR16.EngDT = dt.u32;
RegInpADCD0DR16.EngInit = 0;
RegInpADCD0DR16.EngMin = 0;
RegInpADCD0DR16.EngMax = 536805376;
RegInpADCD0DR16.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR16.ReadType = 'Phy';


RegInpADCD0DR18 = DataDict.IpSignal;
RegInpADCD0DR18.LongName = 'Register ADCD0DR18';
RegInpADCD0DR18.Description = 'None';
RegInpADCD0DR18.DocUnits = 'Cnt';
RegInpADCD0DR18.EngDT = dt.u32;
RegInpADCD0DR18.EngInit = 0;
RegInpADCD0DR18.EngMin = 0;
RegInpADCD0DR18.EngMax = 536805376;
RegInpADCD0DR18.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR18.ReadType = 'Phy';


RegInpADCD0DR20 = DataDict.IpSignal;
RegInpADCD0DR20.LongName = 'Register ADCD0DR20';
RegInpADCD0DR20.Description = 'None';
RegInpADCD0DR20.DocUnits = 'Cnt';
RegInpADCD0DR20.EngDT = dt.u32;
RegInpADCD0DR20.EngInit = 0;
RegInpADCD0DR20.EngMin = 0;
RegInpADCD0DR20.EngMax = 536805376;
RegInpADCD0DR20.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR20.ReadType = 'Phy';


RegInpADCD0DR22 = DataDict.IpSignal;
RegInpADCD0DR22.LongName = 'Register ADCD0DR22';
RegInpADCD0DR22.Description = 'None';
RegInpADCD0DR22.DocUnits = 'Cnt';
RegInpADCD0DR22.EngDT = dt.u32;
RegInpADCD0DR22.EngInit = 0;
RegInpADCD0DR22.EngMin = 0;
RegInpADCD0DR22.EngMax = 536805376;
RegInpADCD0DR22.ReadIn = {'GmT1xxMcuCfgInit2'};
RegInpADCD0DR22.ReadType = 'Phy';


RegInpADCD1DR00 = DataDict.IpSignal;
RegInpADCD1DR00.LongName = 'Register ADCD1DR00';
RegInpADCD1DR00.Description = 'None';
RegInpADCD1DR00.DocUnits = 'Cnt';
RegInpADCD1DR00.EngDT = dt.u32;
RegInpADCD1DR00.EngInit = 0;
RegInpADCD1DR00.EngMin = 0;
RegInpADCD1DR00.EngMax = 536805376;
RegInpADCD1DR00.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR00.ReadType = 'Phy';


RegInpADCD1DR02 = DataDict.IpSignal;
RegInpADCD1DR02.LongName = 'Register ADCD1DR02';
RegInpADCD1DR02.Description = 'None';
RegInpADCD1DR02.DocUnits = 'Cnt';
RegInpADCD1DR02.EngDT = dt.u32;
RegInpADCD1DR02.EngInit = 0;
RegInpADCD1DR02.EngMin = 0;
RegInpADCD1DR02.EngMax = 536805376;
RegInpADCD1DR02.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR02.ReadType = 'Phy';


RegInpADCD1DR04 = DataDict.IpSignal;
RegInpADCD1DR04.LongName = 'Register ADCD1DR04';
RegInpADCD1DR04.Description = 'None';
RegInpADCD1DR04.DocUnits = 'Cnt';
RegInpADCD1DR04.EngDT = dt.u32;
RegInpADCD1DR04.EngInit = 0;
RegInpADCD1DR04.EngMin = 0;
RegInpADCD1DR04.EngMax = 536805376;
RegInpADCD1DR04.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR04.ReadType = 'Phy';


RegInpADCD1DR06 = DataDict.IpSignal;
RegInpADCD1DR06.LongName = 'Register ADCD1DR06';
RegInpADCD1DR06.Description = 'None';
RegInpADCD1DR06.DocUnits = 'Cnt';
RegInpADCD1DR06.EngDT = dt.u32;
RegInpADCD1DR06.EngInit = 0;
RegInpADCD1DR06.EngMin = 0;
RegInpADCD1DR06.EngMax = 536805376;
RegInpADCD1DR06.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR06.ReadType = 'Phy';


RegInpADCD1DR08 = DataDict.IpSignal;
RegInpADCD1DR08.LongName = 'Register ADCD1DR08';
RegInpADCD1DR08.Description = 'None';
RegInpADCD1DR08.DocUnits = 'Cnt';
RegInpADCD1DR08.EngDT = dt.u32;
RegInpADCD1DR08.EngInit = 0;
RegInpADCD1DR08.EngMin = 0;
RegInpADCD1DR08.EngMax = 536805376;
RegInpADCD1DR08.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR08.ReadType = 'Phy';


RegInpADCD1DR10 = DataDict.IpSignal;
RegInpADCD1DR10.LongName = 'Register ADCD1DR10';
RegInpADCD1DR10.Description = 'None';
RegInpADCD1DR10.DocUnits = 'Cnt';
RegInpADCD1DR10.EngDT = dt.u32;
RegInpADCD1DR10.EngInit = 0;
RegInpADCD1DR10.EngMin = 0;
RegInpADCD1DR10.EngMax = 536805376;
RegInpADCD1DR10.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR10.ReadType = 'Phy';


RegInpADCD1DR12 = DataDict.IpSignal;
RegInpADCD1DR12.LongName = 'Register ADCD1DR12';
RegInpADCD1DR12.Description = 'None';
RegInpADCD1DR12.DocUnits = 'Cnt';
RegInpADCD1DR12.EngDT = dt.u32;
RegInpADCD1DR12.EngInit = 0;
RegInpADCD1DR12.EngMin = 0;
RegInpADCD1DR12.EngMax = 536805376;
RegInpADCD1DR12.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR12.ReadType = 'Phy';


RegInpADCD1DR14 = DataDict.IpSignal;
RegInpADCD1DR14.LongName = 'Register ADCD1DR14';
RegInpADCD1DR14.Description = 'None';
RegInpADCD1DR14.DocUnits = 'Cnt';
RegInpADCD1DR14.EngDT = dt.u32;
RegInpADCD1DR14.EngInit = 0;
RegInpADCD1DR14.EngMin = 0;
RegInpADCD1DR14.EngMax = 536805376;
RegInpADCD1DR14.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR14.ReadType = 'Phy';


RegInpADCD1DR16 = DataDict.IpSignal;
RegInpADCD1DR16.LongName = 'Register ADCD1DR16';
RegInpADCD1DR16.Description = 'None';
RegInpADCD1DR16.DocUnits = 'Cnt';
RegInpADCD1DR16.EngDT = dt.u32;
RegInpADCD1DR16.EngInit = 0;
RegInpADCD1DR16.EngMin = 0;
RegInpADCD1DR16.EngMax = 536805376;
RegInpADCD1DR16.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR16.ReadType = 'Phy';


RegInpADCD1DR18 = DataDict.IpSignal;
RegInpADCD1DR18.LongName = 'Register ADCD1DR18';
RegInpADCD1DR18.Description = 'None';
RegInpADCD1DR18.DocUnits = 'Cnt';
RegInpADCD1DR18.EngDT = dt.u32;
RegInpADCD1DR18.EngInit = 0;
RegInpADCD1DR18.EngMin = 0;
RegInpADCD1DR18.EngMax = 536805376;
RegInpADCD1DR18.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR18.ReadType = 'Phy';


RegInpADCD1DR20 = DataDict.IpSignal;
RegInpADCD1DR20.LongName = 'Register ADCD1DR20';
RegInpADCD1DR20.Description = 'None';
RegInpADCD1DR20.DocUnits = 'Cnt';
RegInpADCD1DR20.EngDT = dt.u32;
RegInpADCD1DR20.EngInit = 0;
RegInpADCD1DR20.EngMin = 0;
RegInpADCD1DR20.EngMax = 536805376;
RegInpADCD1DR20.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR20.ReadType = 'Phy';


RegInpADCD1DR22 = DataDict.IpSignal;
RegInpADCD1DR22.LongName = 'Register ADCD1DR22';
RegInpADCD1DR22.Description = 'None';
RegInpADCD1DR22.DocUnits = 'Cnt';
RegInpADCD1DR22.EngDT = dt.u32;
RegInpADCD1DR22.EngInit = 0;
RegInpADCD1DR22.EngMin = 0;
RegInpADCD1DR22.EngMax = 536805376;
RegInpADCD1DR22.ReadIn = {'GmT1xxMcuCfgInit3'};
RegInpADCD1DR22.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Adc1ScanGroup2Ref0 = DataDict.OpSignal;
Adc1ScanGroup2Ref0.LongName = 'ADC 1 Scan Group 2 Reference 0';
Adc1ScanGroup2Ref0.Description = [...
  'ADC 1 reference voltage read at start of Scan Group 2'];
Adc1ScanGroup2Ref0.DocUnits = 'Volt';
Adc1ScanGroup2Ref0.SwcShoName = 'GmT1xxMcuCfg';
Adc1ScanGroup2Ref0.EngDT = dt.float32;
Adc1ScanGroup2Ref0.EngInit = 0;
Adc1ScanGroup2Ref0.EngMin = 0;
Adc1ScanGroup2Ref0.EngMax = 5;
Adc1ScanGroup2Ref0.TestTolerance = 0.001221001221;
Adc1ScanGroup2Ref0.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
Adc1ScanGroup2Ref0.WriteType = 'Rte';


Adc1ScanGroup2Ref1 = DataDict.OpSignal;
Adc1ScanGroup2Ref1.LongName = 'ADC 1 Scan Group 2 Reference 1';
Adc1ScanGroup2Ref1.Description = [...
  'ADC 1 reference voltage read at end of Scan Group 2'];
Adc1ScanGroup2Ref1.DocUnits = 'Volt';
Adc1ScanGroup2Ref1.SwcShoName = 'GmT1xxMcuCfg';
Adc1ScanGroup2Ref1.EngDT = dt.float32;
Adc1ScanGroup2Ref1.EngInit = 0;
Adc1ScanGroup2Ref1.EngMin = 0;
Adc1ScanGroup2Ref1.EngMax = 5;
Adc1ScanGroup2Ref1.TestTolerance = 0.001221001221;
Adc1ScanGroup2Ref1.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
Adc1ScanGroup2Ref1.WriteType = 'Rte';


Adc1ScanGroup3Ref0 = DataDict.OpSignal;
Adc1ScanGroup3Ref0.LongName = 'ADC 1 Scan Group 3 Reference 0';
Adc1ScanGroup3Ref0.Description = [...
  'ADC 1 reference voltage read at start of Scan Group 3'];
Adc1ScanGroup3Ref0.DocUnits = 'Volt';
Adc1ScanGroup3Ref0.SwcShoName = 'GmT1xxMcuCfg';
Adc1ScanGroup3Ref0.EngDT = dt.float32;
Adc1ScanGroup3Ref0.EngInit = 0;
Adc1ScanGroup3Ref0.EngMin = 0;
Adc1ScanGroup3Ref0.EngMax = 5;
Adc1ScanGroup3Ref0.TestTolerance = 0.001221001221;
Adc1ScanGroup3Ref0.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
Adc1ScanGroup3Ref0.WriteType = 'Rte';


Adc1ScanGroup3Ref1 = DataDict.OpSignal;
Adc1ScanGroup3Ref1.LongName = 'ADC 1 Scan Group 3 Reference 1';
Adc1ScanGroup3Ref1.Description = [...
  'ADC 1 reference voltage read at end of Scan Group 3'];
Adc1ScanGroup3Ref1.DocUnits = 'Volt';
Adc1ScanGroup3Ref1.SwcShoName = 'GmT1xxMcuCfg';
Adc1ScanGroup3Ref1.EngDT = dt.float32;
Adc1ScanGroup3Ref1.EngInit = 0;
Adc1ScanGroup3Ref1.EngMin = 0;
Adc1ScanGroup3Ref1.EngMax = 5;
Adc1ScanGroup3Ref1.TestTolerance = 0.001221001221;
Adc1ScanGroup3Ref1.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
Adc1ScanGroup3Ref1.WriteType = 'Rte';


Adc1SelfDiag0 = DataDict.OpSignal;
Adc1SelfDiag0.LongName = 'Adc1 Self Diagnosis 0';
Adc1SelfDiag0.Description = 'Adc1 Self Diagnosis 0';
Adc1SelfDiag0.DocUnits = 'Volt';
Adc1SelfDiag0.SwcShoName = 'GmT1xxMcuCfg';
Adc1SelfDiag0.EngDT = dt.float32;
Adc1SelfDiag0.EngInit = 0;
Adc1SelfDiag0.EngMin = 0;
Adc1SelfDiag0.EngMax = 5;
Adc1SelfDiag0.TestTolerance = 0.001221001221;
Adc1SelfDiag0.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
Adc1SelfDiag0.WriteType = 'Rte';


Adc1SelfDiag2 = DataDict.OpSignal;
Adc1SelfDiag2.LongName = 'Adc1 Self Diagnosis 2';
Adc1SelfDiag2.Description = 'Adc1 Self Diagnosis 2';
Adc1SelfDiag2.DocUnits = 'Volt';
Adc1SelfDiag2.SwcShoName = 'GmT1xxMcuCfg';
Adc1SelfDiag2.EngDT = dt.float32;
Adc1SelfDiag2.EngInit = 0;
Adc1SelfDiag2.EngMin = 0;
Adc1SelfDiag2.EngMax = 5;
Adc1SelfDiag2.TestTolerance = 0.001221001221;
Adc1SelfDiag2.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
Adc1SelfDiag2.WriteType = 'Rte';


Adc1SelfDiag4 = DataDict.OpSignal;
Adc1SelfDiag4.LongName = 'Adc1 Self Diagnosis 4';
Adc1SelfDiag4.Description = 'Adc1 Self Diagnosis 4';
Adc1SelfDiag4.DocUnits = 'Volt';
Adc1SelfDiag4.SwcShoName = 'GmT1xxMcuCfg';
Adc1SelfDiag4.EngDT = dt.float32;
Adc1SelfDiag4.EngInit = 0;
Adc1SelfDiag4.EngMin = 0;
Adc1SelfDiag4.EngMax = 5;
Adc1SelfDiag4.TestTolerance = 0.001221001221;
Adc1SelfDiag4.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
Adc1SelfDiag4.WriteType = 'Rte';


BattVltg = DataDict.OpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.Description = 'Filtered Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.SwcShoName = 'GmT1xxMcuCfg';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 0;
BattVltg.EngMin = 0;
BattVltg.EngMax = 40;
BattVltg.TestTolerance = 0.001221001221;
BattVltg.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
BattVltg.WriteType = 'Rte';


BattVltgAdcFaild = DataDict.OpSignal;
BattVltgAdcFaild.LongName = 'Battery Voltage  ADC Failed';
BattVltgAdcFaild.Description = [...
  'The Adc that converts BattVltg has failed'];
BattVltgAdcFaild.DocUnits = 'Cnt';
BattVltgAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
BattVltgAdcFaild.EngDT = dt.lgc;
BattVltgAdcFaild.EngInit = 0;
BattVltgAdcFaild.EngMin = 0;
BattVltgAdcFaild.EngMax = 1;
BattVltgAdcFaild.TestTolerance = 0;
BattVltgAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
BattVltgAdcFaild.WriteType = 'Rte';


BattVltgSwd1 = DataDict.OpSignal;
BattVltgSwd1.LongName = 'Switched Battery Voltage 1';
BattVltgSwd1.Description = 'Switched Battery Voltage 1';
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.SwcShoName = 'GmT1xxMcuCfg';
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.EngInit = 0;
BattVltgSwd1.EngMin = 0;
BattVltgSwd1.EngMax = 40;
BattVltgSwd1.TestTolerance = 0.001221001221;
BattVltgSwd1.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
BattVltgSwd1.WriteType = 'Rte';


BattVltgSwd1AdcFaild = DataDict.OpSignal;
BattVltgSwd1AdcFaild.LongName = 'Battery Voltage  Switched 1 ADC Failed';
BattVltgSwd1AdcFaild.Description = [...
  'The Adc that converts BattVltgSwd1 has failed'];
BattVltgSwd1AdcFaild.DocUnits = 'Cnt';
BattVltgSwd1AdcFaild.SwcShoName = 'GmT1xxMcuCfg';
BattVltgSwd1AdcFaild.EngDT = dt.lgc;
BattVltgSwd1AdcFaild.EngInit = 0;
BattVltgSwd1AdcFaild.EngMin = 0;
BattVltgSwd1AdcFaild.EngMax = 1;
BattVltgSwd1AdcFaild.TestTolerance = 0;
BattVltgSwd1AdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
BattVltgSwd1AdcFaild.WriteType = 'Rte';


BattVltgSwd2 = DataDict.OpSignal;
BattVltgSwd2.LongName = 'Switched Battery Voltage 2';
BattVltgSwd2.Description = 'Switched Battery Voltage 2';
BattVltgSwd2.DocUnits = 'Volt';
BattVltgSwd2.SwcShoName = 'GmT1xxMcuCfg';
BattVltgSwd2.EngDT = dt.float32;
BattVltgSwd2.EngInit = 0;
BattVltgSwd2.EngMin = 0;
BattVltgSwd2.EngMax = 40;
BattVltgSwd2.TestTolerance = 0.001221001221;
BattVltgSwd2.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
BattVltgSwd2.WriteType = 'Rte';


BattVltgSwd2AdcFaild = DataDict.OpSignal;
BattVltgSwd2AdcFaild.LongName = 'Battery Voltage  Switched 2 ADC Failed';
BattVltgSwd2AdcFaild.Description = [...
  'The Adc that converts BattVltgSwd2 has failed'];
BattVltgSwd2AdcFaild.DocUnits = 'Cnt';
BattVltgSwd2AdcFaild.SwcShoName = 'GmT1xxMcuCfg';
BattVltgSwd2AdcFaild.EngDT = dt.lgc;
BattVltgSwd2AdcFaild.EngInit = 0;
BattVltgSwd2AdcFaild.EngMin = 0;
BattVltgSwd2AdcFaild.EngMax = 1;
BattVltgSwd2AdcFaild.TestTolerance = 0;
BattVltgSwd2AdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
BattVltgSwd2AdcFaild.WriteType = 'Rte';


EcuT = DataDict.OpSignal;
EcuT.LongName = 'Ecu Temperature';
EcuT.Description = [...
  'Voltage representation of Ecu Temperature, convertered to degC in a di' ...
  'fferent module'];
EcuT.DocUnits = 'Volt';
EcuT.SwcShoName = 'GmT1xxMcuCfg';
EcuT.EngDT = dt.float32;
EcuT.EngInit = 0;
EcuT.EngMin = 0;
EcuT.EngMax = 5;
EcuT.TestTolerance = 0.001221001221;
EcuT.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
EcuT.WriteType = 'Rte';


EcuTAdcFaild = DataDict.OpSignal;
EcuTAdcFaild.LongName = 'ECU Temperature ADC Failed';
EcuTAdcFaild.Description = [...
  'The Adc that converts EcuT has failed'];
EcuTAdcFaild.DocUnits = 'Cnt';
EcuTAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
EcuTAdcFaild.EngDT = dt.lgc;
EcuTAdcFaild.EngInit = 0;
EcuTAdcFaild.EngMin = 0;
EcuTAdcFaild.EngMax = 1;
EcuTAdcFaild.TestTolerance = 0;
EcuTAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
EcuTAdcFaild.WriteType = 'Rte';


MotAg2Cos = DataDict.OpSignal;
MotAg2Cos.LongName = 'Motor Angle 2 Cosine';
MotAg2Cos.Description = 'Motor Angle 2 Cosine';
MotAg2Cos.DocUnits = 'Volt';
MotAg2Cos.SwcShoName = 'GmT1xxMcuCfg';
MotAg2Cos.EngDT = dt.float32;
MotAg2Cos.EngInit = 0;
MotAg2Cos.EngMin = 0;
MotAg2Cos.EngMax = 5;
MotAg2Cos.TestTolerance = 0.001221001221;
MotAg2Cos.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
MotAg2Cos.WriteType = 'Rte';


MotAg2CosAdcFaild = DataDict.OpSignal;
MotAg2CosAdcFaild.LongName = 'Motor Angle 2 Cosine ADC Failed';
MotAg2CosAdcFaild.Description = [...
  'The Adc that converts MotAg2Cos has failed'];
MotAg2CosAdcFaild.DocUnits = 'Cnt';
MotAg2CosAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotAg2CosAdcFaild.EngDT = dt.lgc;
MotAg2CosAdcFaild.EngInit = 0;
MotAg2CosAdcFaild.EngMin = 0;
MotAg2CosAdcFaild.EngMax = 1;
MotAg2CosAdcFaild.TestTolerance = 0;
MotAg2CosAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotAg2CosAdcFaild.WriteType = 'Rte';


MotAg2Sin = DataDict.OpSignal;
MotAg2Sin.LongName = 'Motor Angle 2 Sine';
MotAg2Sin.Description = 'Motor Angle 2 Sine';
MotAg2Sin.DocUnits = 'Volt';
MotAg2Sin.SwcShoName = 'GmT1xxMcuCfg';
MotAg2Sin.EngDT = dt.float32;
MotAg2Sin.EngInit = 0;
MotAg2Sin.EngMin = 0;
MotAg2Sin.EngMax = 5;
MotAg2Sin.TestTolerance = 0.001221001221;
MotAg2Sin.WrittenIn = {'GmT1xxMcuCfgInit3','GmT1xxMcuCfgPer2'};
MotAg2Sin.WriteType = 'Rte';


MotAg2SinAdcFaild = DataDict.OpSignal;
MotAg2SinAdcFaild.LongName = 'Motor Angle 2 Sine/Sinus ADC Failed';
MotAg2SinAdcFaild.Description = [...
  'The Adc that converts MotAg2Sin has failed'];
MotAg2SinAdcFaild.DocUnits = 'Cnt';
MotAg2SinAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotAg2SinAdcFaild.EngDT = dt.lgc;
MotAg2SinAdcFaild.EngInit = 0;
MotAg2SinAdcFaild.EngMin = 0;
MotAg2SinAdcFaild.EngMax = 1;
MotAg2SinAdcFaild.TestTolerance = 0;
MotAg2SinAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotAg2SinAdcFaild.WriteType = 'Rte';


MotCtrlAdc0ScanGroup2Ref0 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup2Ref0.LongName = 'ADC 0 Scan Group 2 Reference 0';
MotCtrlAdc0ScanGroup2Ref0.Description = [...
  'ADC 0 reference voltage read at start of Scan Group 2'];
MotCtrlAdc0ScanGroup2Ref0.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup2Ref0.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlAdc0ScanGroup2Ref0.EngDT = dt.float32;
MotCtrlAdc0ScanGroup2Ref0.EngInit = 0;
MotCtrlAdc0ScanGroup2Ref0.EngMin = 0;
MotCtrlAdc0ScanGroup2Ref0.EngMax = 5;
MotCtrlAdc0ScanGroup2Ref0.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup2Ref0.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlAdc0ScanGroup2Ref0.WriteType = 'NonRte';


MotCtrlAdc0ScanGroup2Ref1 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup2Ref1.LongName = 'ADC 0 Scan Group 2 Reference 1';
MotCtrlAdc0ScanGroup2Ref1.Description = [...
  'ADC 0 reference voltage read at end of Scan Group 2'];
MotCtrlAdc0ScanGroup2Ref1.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup2Ref1.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlAdc0ScanGroup2Ref1.EngDT = dt.float32;
MotCtrlAdc0ScanGroup2Ref1.EngInit = 0;
MotCtrlAdc0ScanGroup2Ref1.EngMin = 0;
MotCtrlAdc0ScanGroup2Ref1.EngMax = 5;
MotCtrlAdc0ScanGroup2Ref1.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup2Ref1.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlAdc0ScanGroup2Ref1.WriteType = 'NonRte';


MotCtrlAdc0ScanGroup3Ref0 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup3Ref0.LongName = 'ADC 0 Scan Group 3 Reference 0';
MotCtrlAdc0ScanGroup3Ref0.Description = [...
  'ADC 0 reference voltage read at start of Scan Group 3'];
MotCtrlAdc0ScanGroup3Ref0.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup3Ref0.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlAdc0ScanGroup3Ref0.EngDT = dt.float32;
MotCtrlAdc0ScanGroup3Ref0.EngInit = 0;
MotCtrlAdc0ScanGroup3Ref0.EngMin = 0;
MotCtrlAdc0ScanGroup3Ref0.EngMax = 5;
MotCtrlAdc0ScanGroup3Ref0.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup3Ref0.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlAdc0ScanGroup3Ref0.WriteType = 'NonRte';


MotCtrlAdc0ScanGroup3Ref1 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup3Ref1.LongName = 'ADC 0 Scan Group 3 Reference 1';
MotCtrlAdc0ScanGroup3Ref1.Description = [...
  'ADC 0 reference voltage read at end of Scan Group 3'];
MotCtrlAdc0ScanGroup3Ref1.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup3Ref1.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlAdc0ScanGroup3Ref1.EngDT = dt.float32;
MotCtrlAdc0ScanGroup3Ref1.EngInit = 0;
MotCtrlAdc0ScanGroup3Ref1.EngMin = 0;
MotCtrlAdc0ScanGroup3Ref1.EngMax = 5;
MotCtrlAdc0ScanGroup3Ref1.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup3Ref1.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlAdc0ScanGroup3Ref1.WriteType = 'NonRte';


MotCtrlAdc0SelfDiag0 = DataDict.OpSignal;
MotCtrlAdc0SelfDiag0.LongName = 'Adc0 Self Diagnostic 0';
MotCtrlAdc0SelfDiag0.Description = 'Adc0 Self Diagnostic 0';
MotCtrlAdc0SelfDiag0.DocUnits = 'Volt';
MotCtrlAdc0SelfDiag0.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlAdc0SelfDiag0.EngDT = dt.float32;
MotCtrlAdc0SelfDiag0.EngInit = 0;
MotCtrlAdc0SelfDiag0.EngMin = 0;
MotCtrlAdc0SelfDiag0.EngMax = 5;
MotCtrlAdc0SelfDiag0.TestTolerance = 0.001221001221;
MotCtrlAdc0SelfDiag0.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlAdc0SelfDiag0.WriteType = 'NonRte';


MotCtrlAdc0SelfDiag2 = DataDict.OpSignal;
MotCtrlAdc0SelfDiag2.LongName = 'Adc0 Self Diagnostic 2';
MotCtrlAdc0SelfDiag2.Description = 'Adc0 Self Diagnostic 2';
MotCtrlAdc0SelfDiag2.DocUnits = 'Volt';
MotCtrlAdc0SelfDiag2.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlAdc0SelfDiag2.EngDT = dt.float32;
MotCtrlAdc0SelfDiag2.EngInit = 0;
MotCtrlAdc0SelfDiag2.EngMin = 0;
MotCtrlAdc0SelfDiag2.EngMax = 5;
MotCtrlAdc0SelfDiag2.TestTolerance = 0.001221001221;
MotCtrlAdc0SelfDiag2.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlAdc0SelfDiag2.WriteType = 'NonRte';


MotCtrlAdc0SelfDiag4 = DataDict.OpSignal;
MotCtrlAdc0SelfDiag4.LongName = 'Adc0 Self Diagnostic 4';
MotCtrlAdc0SelfDiag4.Description = 'Adc0 Self Diagnostic 4';
MotCtrlAdc0SelfDiag4.DocUnits = 'Volt';
MotCtrlAdc0SelfDiag4.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlAdc0SelfDiag4.EngDT = dt.float32;
MotCtrlAdc0SelfDiag4.EngInit = 0;
MotCtrlAdc0SelfDiag4.EngMin = 0;
MotCtrlAdc0SelfDiag4.EngMax = 5;
MotCtrlAdc0SelfDiag4.TestTolerance = 0.001221001221;
MotCtrlAdc0SelfDiag4.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlAdc0SelfDiag4.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakA = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakA.LongName = 'Motor Current A Sampled at Peak';
MotCtrlMotCurrAdcPeakA.Description = 'Motor Current A Sampled at Peak';
MotCtrlMotCurrAdcPeakA.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakA.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcPeakA.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakA.EngInit = 0;
MotCtrlMotCurrAdcPeakA.EngMin = 0;
MotCtrlMotCurrAdcPeakA.EngMax = 5;
MotCtrlMotCurrAdcPeakA.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakA.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcPeakA.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakB = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakB.LongName = 'Motor Current B Sampled at Peak';
MotCtrlMotCurrAdcPeakB.Description = 'Motor Current B Sampled at Peak';
MotCtrlMotCurrAdcPeakB.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakB.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcPeakB.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakB.EngInit = 0;
MotCtrlMotCurrAdcPeakB.EngMin = 0;
MotCtrlMotCurrAdcPeakB.EngMax = 5;
MotCtrlMotCurrAdcPeakB.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakB.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcPeakB.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakC = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakC.LongName = 'Motor Current C Sampled at Peak';
MotCtrlMotCurrAdcPeakC.Description = 'Motor Current C Sampled at Peak';
MotCtrlMotCurrAdcPeakC.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakC.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcPeakC.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakC.EngInit = 0;
MotCtrlMotCurrAdcPeakC.EngMin = 0;
MotCtrlMotCurrAdcPeakC.EngMax = 5;
MotCtrlMotCurrAdcPeakC.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakC.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcPeakC.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakD = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakD.LongName = 'Motor Current D Sampled at Peak';
MotCtrlMotCurrAdcPeakD.Description = 'Motor Current D Sampled at Peak';
MotCtrlMotCurrAdcPeakD.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakD.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcPeakD.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakD.EngInit = 0;
MotCtrlMotCurrAdcPeakD.EngMin = 0;
MotCtrlMotCurrAdcPeakD.EngMax = 5;
MotCtrlMotCurrAdcPeakD.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakD.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcPeakD.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakE = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakE.LongName = 'Motor Current E Sampled at Peak';
MotCtrlMotCurrAdcPeakE.Description = 'Motor Current E Sampled at Peak';
MotCtrlMotCurrAdcPeakE.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakE.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcPeakE.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakE.EngInit = 0;
MotCtrlMotCurrAdcPeakE.EngMin = 0;
MotCtrlMotCurrAdcPeakE.EngMax = 5;
MotCtrlMotCurrAdcPeakE.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakE.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcPeakE.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakF = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakF.LongName = 'Motor Current F Sampled at Peak';
MotCtrlMotCurrAdcPeakF.Description = 'Motor Current F Sampled at Peak';
MotCtrlMotCurrAdcPeakF.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakF.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcPeakF.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakF.EngInit = 0;
MotCtrlMotCurrAdcPeakF.EngMin = 0;
MotCtrlMotCurrAdcPeakF.EngMax = 5;
MotCtrlMotCurrAdcPeakF.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakF.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcPeakF.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyA = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyA.LongName = 'Motor Current A Sampled at Valley';
MotCtrlMotCurrAdcVlyA.Description = 'Motor Current A Sampled at Valley';
MotCtrlMotCurrAdcVlyA.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyA.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcVlyA.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyA.EngInit = 0;
MotCtrlMotCurrAdcVlyA.EngMin = 0;
MotCtrlMotCurrAdcVlyA.EngMax = 5;
MotCtrlMotCurrAdcVlyA.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyA.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcVlyA.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyB = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyB.LongName = 'Motor Current B Sampled at Valley';
MotCtrlMotCurrAdcVlyB.Description = 'Motor Current B Sampled at Valley';
MotCtrlMotCurrAdcVlyB.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyB.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcVlyB.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyB.EngInit = 0;
MotCtrlMotCurrAdcVlyB.EngMin = 0;
MotCtrlMotCurrAdcVlyB.EngMax = 5;
MotCtrlMotCurrAdcVlyB.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyB.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcVlyB.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyC = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyC.LongName = 'Motor Current C Sampled at Valley';
MotCtrlMotCurrAdcVlyC.Description = 'Motor Current C Sampled at Valley';
MotCtrlMotCurrAdcVlyC.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyC.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcVlyC.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyC.EngInit = 0;
MotCtrlMotCurrAdcVlyC.EngMin = 0;
MotCtrlMotCurrAdcVlyC.EngMax = 5;
MotCtrlMotCurrAdcVlyC.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyC.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcVlyC.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyD = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyD.LongName = 'Motor Current D Sampled at Valley';
MotCtrlMotCurrAdcVlyD.Description = 'Motor Current D Sampled at Valley';
MotCtrlMotCurrAdcVlyD.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyD.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcVlyD.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyD.EngInit = 0;
MotCtrlMotCurrAdcVlyD.EngMin = 0;
MotCtrlMotCurrAdcVlyD.EngMax = 5;
MotCtrlMotCurrAdcVlyD.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyD.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcVlyD.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyE = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyE.LongName = 'Motor Current E Sampled at Valley';
MotCtrlMotCurrAdcVlyE.Description = 'Motor Current E Sampled at Valley';
MotCtrlMotCurrAdcVlyE.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyE.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcVlyE.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyE.EngInit = 0;
MotCtrlMotCurrAdcVlyE.EngMin = 0;
MotCtrlMotCurrAdcVlyE.EngMax = 5;
MotCtrlMotCurrAdcVlyE.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyE.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcVlyE.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyF = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyF.LongName = 'Motor Current F Sampled at Valley';
MotCtrlMotCurrAdcVlyF.Description = 'Motor Current F Sampled at Valley';
MotCtrlMotCurrAdcVlyF.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyF.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrAdcVlyF.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyF.EngInit = 0;
MotCtrlMotCurrAdcVlyF.EngMin = 0;
MotCtrlMotCurrAdcVlyF.EngMax = 5;
MotCtrlMotCurrAdcVlyF.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyF.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrAdcVlyF.WriteType = 'NonRte';


MotCtrlMotCurrSnsrOffs1 = DataDict.OpSignal;
MotCtrlMotCurrSnsrOffs1.LongName = 'Motor Current 1 Offset';
MotCtrlMotCurrSnsrOffs1.Description = 'Motor Current 1 Offset';
MotCtrlMotCurrSnsrOffs1.DocUnits = 'Volt';
MotCtrlMotCurrSnsrOffs1.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrSnsrOffs1.EngDT = dt.float32;
MotCtrlMotCurrSnsrOffs1.EngInit = 0;
MotCtrlMotCurrSnsrOffs1.EngMin = 0;
MotCtrlMotCurrSnsrOffs1.EngMax = 5;
MotCtrlMotCurrSnsrOffs1.TestTolerance = 0.001221001221;
MotCtrlMotCurrSnsrOffs1.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrSnsrOffs1.WriteType = 'NonRte';


MotCtrlMotCurrSnsrOffs2 = DataDict.OpSignal;
MotCtrlMotCurrSnsrOffs2.LongName = 'Motor Current 1 Offset';
MotCtrlMotCurrSnsrOffs2.Description = 'Motor Current 1 Offset';
MotCtrlMotCurrSnsrOffs2.DocUnits = 'Volt';
MotCtrlMotCurrSnsrOffs2.SwcShoName = 'GmT1xxMcuCfg';
MotCtrlMotCurrSnsrOffs2.EngDT = dt.float32;
MotCtrlMotCurrSnsrOffs2.EngInit = 0;
MotCtrlMotCurrSnsrOffs2.EngMin = 0;
MotCtrlMotCurrSnsrOffs2.EngMax = 5;
MotCtrlMotCurrSnsrOffs2.TestTolerance = 0.001221001221;
MotCtrlMotCurrSnsrOffs2.WrittenIn = {'GmT1xxMcuCfgInit2','GmT1xxMcuCfgPer1'};
MotCtrlMotCurrSnsrOffs2.WriteType = 'NonRte';


MotCurrAdcPeakAAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakAAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak A/Acceleration ADC Failed';
MotCurrAdcPeakAAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakA has failed'];
MotCurrAdcPeakAAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakAAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcPeakAAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakAAdcFaild.EngInit = 0;
MotCurrAdcPeakAAdcFaild.EngMin = 0;
MotCurrAdcPeakAAdcFaild.EngMax = 1;
MotCurrAdcPeakAAdcFaild.TestTolerance = 0;
MotCurrAdcPeakAAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcPeakAAdcFaild.WriteType = 'Rte';


MotCurrAdcPeakBAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakBAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak B ADC Failed';
MotCurrAdcPeakBAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakB has failed'];
MotCurrAdcPeakBAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakBAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcPeakBAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakBAdcFaild.EngInit = 0;
MotCurrAdcPeakBAdcFaild.EngMin = 0;
MotCurrAdcPeakBAdcFaild.EngMax = 1;
MotCurrAdcPeakBAdcFaild.TestTolerance = 0;
MotCurrAdcPeakBAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcPeakBAdcFaild.WriteType = 'Rte';


MotCurrAdcPeakCAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakCAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak C ADC Failed';
MotCurrAdcPeakCAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakC has failed'];
MotCurrAdcPeakCAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakCAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcPeakCAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakCAdcFaild.EngInit = 0;
MotCurrAdcPeakCAdcFaild.EngMin = 0;
MotCurrAdcPeakCAdcFaild.EngMax = 1;
MotCurrAdcPeakCAdcFaild.TestTolerance = 0;
MotCurrAdcPeakCAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcPeakCAdcFaild.WriteType = 'Rte';


MotCurrAdcPeakDAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakDAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak D/D ADC Failed';
MotCurrAdcPeakDAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakD has failed'];
MotCurrAdcPeakDAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakDAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcPeakDAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakDAdcFaild.EngInit = 0;
MotCurrAdcPeakDAdcFaild.EngMin = 0;
MotCurrAdcPeakDAdcFaild.EngMax = 1;
MotCurrAdcPeakDAdcFaild.TestTolerance = 0;
MotCurrAdcPeakDAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcPeakDAdcFaild.WriteType = 'Rte';


MotCurrAdcPeakEAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakEAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak E ADC Failed';
MotCurrAdcPeakEAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakE has failed'];
MotCurrAdcPeakEAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakEAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcPeakEAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakEAdcFaild.EngInit = 0;
MotCurrAdcPeakEAdcFaild.EngMin = 0;
MotCurrAdcPeakEAdcFaild.EngMax = 1;
MotCurrAdcPeakEAdcFaild.TestTolerance = 0;
MotCurrAdcPeakEAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcPeakEAdcFaild.WriteType = 'Rte';


MotCurrAdcPeakFAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakFAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak F/Force ADC Failed';
MotCurrAdcPeakFAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakF has failed'];
MotCurrAdcPeakFAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakFAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcPeakFAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakFAdcFaild.EngInit = 0;
MotCurrAdcPeakFAdcFaild.EngMin = 0;
MotCurrAdcPeakFAdcFaild.EngMax = 1;
MotCurrAdcPeakFAdcFaild.TestTolerance = 0;
MotCurrAdcPeakFAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcPeakFAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyAAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyAAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley A/Acceleration ADC Failed';
MotCurrAdcVlyAAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyA has failed'];
MotCurrAdcVlyAAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyAAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcVlyAAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyAAdcFaild.EngInit = 0;
MotCurrAdcVlyAAdcFaild.EngMin = 0;
MotCurrAdcVlyAAdcFaild.EngMax = 1;
MotCurrAdcVlyAAdcFaild.TestTolerance = 0;
MotCurrAdcVlyAAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcVlyAAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyBAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyBAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley B ADC Failed';
MotCurrAdcVlyBAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyB has failed'];
MotCurrAdcVlyBAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyBAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcVlyBAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyBAdcFaild.EngInit = 0;
MotCurrAdcVlyBAdcFaild.EngMin = 0;
MotCurrAdcVlyBAdcFaild.EngMax = 1;
MotCurrAdcVlyBAdcFaild.TestTolerance = 0;
MotCurrAdcVlyBAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcVlyBAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyCAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyCAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley C ADC Failed';
MotCurrAdcVlyCAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyC has failed'];
MotCurrAdcVlyCAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyCAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcVlyCAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyCAdcFaild.EngInit = 0;
MotCurrAdcVlyCAdcFaild.EngMin = 0;
MotCurrAdcVlyCAdcFaild.EngMax = 1;
MotCurrAdcVlyCAdcFaild.TestTolerance = 0;
MotCurrAdcVlyCAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcVlyCAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyDAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyDAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley D/D ADC Failed';
MotCurrAdcVlyDAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyD has failed'];
MotCurrAdcVlyDAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyDAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcVlyDAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyDAdcFaild.EngInit = 0;
MotCurrAdcVlyDAdcFaild.EngMin = 0;
MotCurrAdcVlyDAdcFaild.EngMax = 1;
MotCurrAdcVlyDAdcFaild.TestTolerance = 0;
MotCurrAdcVlyDAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcVlyDAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyEAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyEAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley E ADC Failed';
MotCurrAdcVlyEAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyE has failed'];
MotCurrAdcVlyEAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyEAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcVlyEAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyEAdcFaild.EngInit = 0;
MotCurrAdcVlyEAdcFaild.EngMin = 0;
MotCurrAdcVlyEAdcFaild.EngMax = 1;
MotCurrAdcVlyEAdcFaild.TestTolerance = 0;
MotCurrAdcVlyEAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcVlyEAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyFAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyFAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley F/Force ADC Failed';
MotCurrAdcVlyFAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyF has failed'];
MotCurrAdcVlyFAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyFAdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrAdcVlyFAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyFAdcFaild.EngInit = 0;
MotCurrAdcVlyFAdcFaild.EngMin = 0;
MotCurrAdcVlyFAdcFaild.EngMax = 1;
MotCurrAdcVlyFAdcFaild.TestTolerance = 0;
MotCurrAdcVlyFAdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrAdcVlyFAdcFaild.WriteType = 'Rte';


MotCurrSnsrOffs1AdcFaild = DataDict.OpSignal;
MotCurrSnsrOffs1AdcFaild.LongName = 'Motor Control Motor Current/I Sensor Offset 1 ADC Failed';
MotCurrSnsrOffs1AdcFaild.Description = [...
  'The Adc that converts MotCurrSnsrOffs1 has failed'];
MotCurrSnsrOffs1AdcFaild.DocUnits = 'Cnt';
MotCurrSnsrOffs1AdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrSnsrOffs1AdcFaild.EngDT = dt.lgc;
MotCurrSnsrOffs1AdcFaild.EngInit = 0;
MotCurrSnsrOffs1AdcFaild.EngMin = 0;
MotCurrSnsrOffs1AdcFaild.EngMax = 1;
MotCurrSnsrOffs1AdcFaild.TestTolerance = 0;
MotCurrSnsrOffs1AdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrSnsrOffs1AdcFaild.WriteType = 'Rte';


MotCurrSnsrOffs2AdcFaild = DataDict.OpSignal;
MotCurrSnsrOffs2AdcFaild.LongName = 'Motor Control Motor Current Sensor Offset 2 ADC Failed';
MotCurrSnsrOffs2AdcFaild.Description = [...
  'The Adc that converts MotCurrSnsrOffs2 has failed'];
MotCurrSnsrOffs2AdcFaild.DocUnits = 'Cnt';
MotCurrSnsrOffs2AdcFaild.SwcShoName = 'GmT1xxMcuCfg';
MotCurrSnsrOffs2AdcFaild.EngDT = dt.lgc;
MotCurrSnsrOffs2AdcFaild.EngInit = 0;
MotCurrSnsrOffs2AdcFaild.EngMin = 0;
MotCurrSnsrOffs2AdcFaild.EngMax = 1;
MotCurrSnsrOffs2AdcFaild.TestTolerance = 0;
MotCurrSnsrOffs2AdcFaild.WrittenIn = {'GmT1xxMcuCfgPer3'};
MotCurrSnsrOffs2AdcFaild.WriteType = 'Rte';



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

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.LongName = 'ADCD0SGVCEP2 Register';
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.Description = 'ADC0 Scan Group 2 end pointer';
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.EngVal = 18;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.LongName = 'ADCD0SGVCEP3 Register';
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.Description = 'ADC0 Scan Group 3 end pointer';
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.EngVal = 7;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.LongName = 'ADCD0SGVCSP2 Register';
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.Description = 'ADC0 Scan Group 2 start pointer';
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.EngVal = 8;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.LongName = 'ADCD0SGVCSP3 Register';
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.Description = 'ADC0 Scan Group 3 start pointer';
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.EngVal = 0;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR00_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.LongName = 'ADCD0VCR00 Register';
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.Description = 'Value of the VCR00 Register';
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.EngVal = 24580;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR01_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.LongName = 'ADCD0VCR01 Register';
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.Description = 'Value of the VCR01 Register';
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.EngVal = 2;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR02_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.LongName = 'ADCD0VCR02 Register';
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.Description = 'Value of the VCR00 Register';
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.EngVal = 3;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR03_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.LongName = 'ADCD0VCR03 Register';
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.Description = 'Value of the VCR03 Register';
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.EngVal = 4;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR04_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.LongName = 'ADCD0VCR04 Register';
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.Description = 'Value of the VCR04 Register';
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.EngVal = 9;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR05_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.LongName = 'ADCD0VCR05 Register';
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.Description = 'Value of the VCR05 Register';
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.EngVal = 10;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR06_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.LongName = 'ADCD0VCR06 Register';
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.Description = 'Value of the VCR06 Register';
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.EngVal = 11;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR07_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.LongName = 'ADCD0VCR07 Register';
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.Description = 'Value of the VCR07 Register';
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.EngVal = 24588;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR08_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.LongName = 'ADCD0VCR08 Register';
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.Description = 'Value of the VCR08 Register';
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.EngVal = 24580;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR09_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.LongName = 'ADCD0VCR09 Register';
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.Description = 'Value of the VCR09 Register';
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.EngVal = 2;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR10_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.LongName = 'ADCD0VCR10 Register';
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.Description = 'Value of the VCR10 Register';
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.EngVal = 3;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR11_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.LongName = 'ADCD0VCR11 Register';
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.Description = 'Value of the VCR11 Register';
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.EngVal = 4;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR12_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.LongName = 'ADCD0VCR12 Register';
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.Description = 'Value of the VCR12 Register';
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.EngVal = 9;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR13_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.LongName = 'ADCD0VCR13 Register';
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.Description = 'Value of the VCR13 Register';
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.EngVal = 10;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR14_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.LongName = 'ADCD0VCR14 Register';
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.Description = 'Value of the VCR14 Register';
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.EngVal = 11;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR15_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.LongName = 'ADCD0VCR15 Register';
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.Description = 'Value of the VCR15 Register';
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR16_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.LongName = 'ADCD0VCR16 Register';
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.Description = 'Value of the VCR16 Register';
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.EngVal = 1;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR17_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.LongName = 'ADCD0VCR17 Register';
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.Description = 'Value of the VCR17 Register';
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.EngVal = 8;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR18_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.LongName = 'ADCD0VCR18 Register';
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.Description = 'Value of the VCR18 Register';
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.EngVal = 24588;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR19_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.LongName = 'ADCD0VCR19 Register';
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.Description = 'Value of the VCR19 Register';
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.EngVal = 24584;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR20_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.LongName = 'ADCD0VCR20 Register';
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.Description = 'Value of the VCR20 Register';
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.EngVal = 24584;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32 = DataDict.Constant;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.LongName = 'ADC Scaling Factor';
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.Description = [...
  'ADC scaling factor to convert converted counts to volts'];
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.DocUnits = 'VoltPerCnt';
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngDT = dt.float32;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngVal = 0.001221001221;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.Define = 'Local';


ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.LongName = 'ADCD1SGVCEP2 Register';
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.Description = 'ADC1 Scan Group 2 end pointer';
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.EngVal = 10;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.Define = 'Local';


ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.LongName = 'ADCD1SGVCEP3 Register';
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.Description = 'ADC1 Scan Group 3 end pointer';
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.EngVal = 7;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.Define = 'Local';


ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.LongName = 'ADCD1SGVCSP2 Register';
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.Description = 'ADC1 Scan Group 2 start pointer';
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.EngVal = 8;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.Define = 'Local';


ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.LongName = 'ADCD1SGVCSP3 Register';
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.Description = 'ADC1 Scan Group 3 start pointer';
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.EngVal = 0;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR00_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.LongName = 'ADCD1VCR00 Register';
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.Description = 'Value of the VCR00 Register';
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.EngVal = 24580;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR01_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.LongName = 'ADCD1VCR01 Register';
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.Description = 'Value of the VCR01 Register';
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR02_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.LongName = 'ADCD1VCR02 Register';
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.Description = 'Value of the VCR02 Register';
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.EngVal = 2;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR03_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.LongName = 'ADCD1VCR03 Register';
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.Description = 'Value of the VCR03 Register';
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.EngVal = 4;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR04_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.LongName = 'ADCD1VCR04 Register';
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.Description = 'Value of the VCR04 Register';
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.EngVal = 5;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR05_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.LongName = 'ADCD1VCR05 Register';
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.Description = 'Value of the VCR05 Register';
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.EngVal = 9;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR06_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.LongName = 'ADCD1VCR06 Register';
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.Description = 'Value of the VCR06 Register';
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.EngVal = 11;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR07_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.LongName = 'ADCD1VCR07 Register';
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.Description = 'Value of the VCR07 Register';
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.EngVal = 24588;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR08_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.LongName = 'ADCD1VCR08 Register';
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.Description = 'Value of the VCR08 Register';
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.EngVal = 24580;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR09_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.LongName = 'ADCD1VCR09 Register';
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.Description = 'Value of the VCR09 Register';
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.EngVal = 1;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR10_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.LongName = 'ADCD1VCR10 Register';
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.Description = 'Value of the VCR10 Register';
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.EngVal = 24588;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR11_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.LongName = 'ADCD1VCR11 Register';
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.Description = 'Value of the VCR11 Register';
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR12_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.LongName = 'ADCD1VCR12 Register';
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.Description = 'Value of the VCR12 Register';
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR13_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.LongName = 'ADCD1VCR13 Register';
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.Description = 'Value of the VCR13 Register';
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR14_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.LongName = 'ADCD1VCR14 Register';
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.Description = 'Value of the VCR14 Register';
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR15_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.LongName = 'ADCD1VCR15 Register';
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.Description = 'Value of the VCR15 Register';
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR16_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.LongName = 'ADCD1VCR16 Register';
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.Description = 'Value of the VCR16 Register';
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR17_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.LongName = 'ADCD1VCR17 Register';
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.Description = 'Value of the VCR17 Register';
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR18_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.LongName = 'ADCD1VCR18 Register';
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.Description = 'Value of the VCR18 Register';
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR19_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.LongName = 'ADCD1VCR19 Register';
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.Description = 'Value of the VCR19 Register';
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.Define = 'Local';


ADC1CFGANDUSE_ADCD1VCR20_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.LongName = 'ADCD1VCR20 Register';
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.Description = 'Value of the VCR20 Register';
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.Define = 'Local';


ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16 = DataDict.Constant;
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.LongName = 'Dynamic Diagnostic Fail Step';
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.Description = 'Dynamic Diagnostic Fail Step';
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.DocUnits = 'Cnt';
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.EngDT = dt.u16;
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.EngVal = 3276;
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.Define = 'Local';


ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16 = DataDict.Constant;
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.LongName = 'Dynamic Diagnostic Pass Step';
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.Description = 'Dynamic Diagnostic Pass Step';
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.DocUnits = 'Cnt';
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.EngDT = dt.u16;
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.EngVal = 327;
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.Define = 'Local';


BATTVLTGSCAGFAC_ULS_F32 = DataDict.Constant;
BATTVLTGSCAGFAC_ULS_F32.LongName = 'Battery Voltage';
BATTVLTGSCAGFAC_ULS_F32.Description = [...
  'Inverse hardware scaling factor of battery voltage'];
BATTVLTGSCAGFAC_ULS_F32.DocUnits = 'Uls';
BATTVLTGSCAGFAC_ULS_F32.EngDT = dt.float32;
BATTVLTGSCAGFAC_ULS_F32.EngVal = 6.747126437;
BATTVLTGSCAGFAC_ULS_F32.Define = 'Local';


BATTVLTGSWD1SCAGFAC_ULS_F32 = DataDict.Constant;
BATTVLTGSWD1SCAGFAC_ULS_F32.LongName = 'Battery Voltage Switched 1 Scaling Factor';
BATTVLTGSWD1SCAGFAC_ULS_F32.Description = [...
  'Inverse hardware scaling factor of battery voltage switched 1'];
BATTVLTGSWD1SCAGFAC_ULS_F32.DocUnits = 'Uls';
BATTVLTGSWD1SCAGFAC_ULS_F32.EngDT = dt.float32;
BATTVLTGSWD1SCAGFAC_ULS_F32.EngVal = 3.369668246;
BATTVLTGSWD1SCAGFAC_ULS_F32.Define = 'Local';


BATTVLTGSWD2SCAGFAC_ULS_F32 = DataDict.Constant;
BATTVLTGSWD2SCAGFAC_ULS_F32.LongName = 'Battery Voltage Switched 2';
BATTVLTGSWD2SCAGFAC_ULS_F32.Description = [...
  'Inverse hardware scaling factor of battery voltage switched 2'];
BATTVLTGSWD2SCAGFAC_ULS_F32.DocUnits = 'Uls';
BATTVLTGSWD2SCAGFAC_ULS_F32.EngDT = dt.float32;
BATTVLTGSWD2SCAGFAC_ULS_F32.EngVal = 3.369668246;
BATTVLTGSWD2SCAGFAC_ULS_F32.Define = 'Local';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Global';


ELECGLBPRM_PWMFRQMAX_HZ_U32 = DataDict.Constant;
ELECGLBPRM_PWMFRQMAX_HZ_U32.LongName = 'Maximum PWM Frequency';
ELECGLBPRM_PWMFRQMAX_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMAX_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal = 18000;
ELECGLBPRM_PWMFRQMAX_HZ_U32.Define = 'Global';


ELECGLBPRM_PWMFRQMIN_HZ_U32 = DataDict.Constant;
ELECGLBPRM_PWMFRQMIN_HZ_U32.LongName = 'Minimum PWM Frequency';
ELECGLBPRM_PWMFRQMIN_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMIN_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal = 14000;
ELECGLBPRM_PWMFRQMIN_HZ_U32.Define = 'Global';


ELECGLBPRM_PWMPERDMAX_NANOSEC_U32 = DataDict.Constant;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.LongName = 'Maximum PWM Period';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Description = [...
  'Maximum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMAX_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngVal = 71429;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMPERDMIN_NANOSEC_U32 = DataDict.Constant;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.LongName = 'Minimum PWM Period';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Description = [...
  'Minimum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMIN_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngVal = 55555;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMPERDNOMX2_SEC_F32 = DataDict.Constant;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.LongName = 'PWM Period Nominal Times 2';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Description = [...
  'This constant is 2 times ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 in second' ...
  's.'];
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.DocUnits = 'Sec';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngDT = dt.float32;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngVal = 0.000125;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Define = 'Global';


ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 = DataDict.Constant;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.LongName = 'Nominal PWM Period';
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.Description = [...
  'Nominal PWM Period in units of MicroSec.  ELECGLBPRM_PWMPERDNOM_MICROS' ...
  'EC_U7P9 = (2 * 1e6)/(ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal + ELECGLBPRM_P' ...
  'WMFRQMIN_HZ_U32.EngVal).  EngMin = 1e6/22e3, EngMax = 1e6/14e3'];
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.DocUnits = 'MicroSec';
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngDT = dt.u7p9;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngVal = 62.5;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.Define = 'Global';


HWAG0IFNTCNR_ULS_U16 = DataDict.Constant;
HWAG0IFNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Interface Ntc Number';
HWAG0IFNTCNR_ULS_U16.Description = 'HwAg0 Interface Ntc Number';
HWAG0IFNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0IFNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0IFNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X094;
HWAG0IFNTCNR_ULS_U16.Define = 'Local';


HWAG0MFGNTCNR_ULS_U16 = DataDict.Constant;
HWAG0MFGNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Manufacturing Ntc Number';
HWAG0MFGNTCNR_ULS_U16.Description = 'HwAg0 Manufacturing Ntc Number';
HWAG0MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1F9;
HWAG0MFGNTCNR_ULS_U16.Define = 'Local';


HWAG0SNSR0PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Sensor 0 Ntc Number';
HWAG0SNSR0PRTCLNTCNR_ULS_U16.Description = 'HwAg0 Sensor 0 Ntc Number';
HWAG0SNSR0PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0SNSR0PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X093;
HWAG0SNSR0PRTCLNTCNR_ULS_U16.Define = 'Local';


HWAG0SNSR1PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Angle 0 Sensor 1 Ntc Number';
HWAG0SNSR1PRTCLNTCNR_ULS_U16.Description = 'HwAg0 Sensor 1 Ntc Number';
HWAG0SNSR1PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG0SNSR1PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X095;
HWAG0SNSR1PRTCLNTCNR_ULS_U16.Define = 'Local';


HWAG1IFNTCNR_ULS_U16 = DataDict.Constant;
HWAG1IFNTCNR_ULS_U16.LongName = 'Handwheel Angle 1 Interface Ntc Number';
HWAG1IFNTCNR_ULS_U16.Description = 'HwAg1 Interface Ntc Number';
HWAG1IFNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG1IFNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG1IFNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X098;
HWAG1IFNTCNR_ULS_U16.Define = 'Local';


HWAG1MFGNTCNR_ULS_U16 = DataDict.Constant;
HWAG1MFGNTCNR_ULS_U16.LongName = 'Handwheel Angle 1 Manufacturing Ntc Number';
HWAG1MFGNTCNR_ULS_U16.Description = 'HwAg1 Manufacturing Ntc Number';
HWAG1MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG1MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG1MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1FA;
HWAG1MFGNTCNR_ULS_U16.Define = 'Local';


HWAG1SNSR0PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWAG1SNSR0PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Angle 1 Sensor 0 Ntc Number';
HWAG1SNSR0PRTCLNTCNR_ULS_U16.Description = 'HwAg1 Sensor 0 Ntc Number';
HWAG1SNSR0PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG1SNSR0PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG1SNSR0PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X097;
HWAG1SNSR0PRTCLNTCNR_ULS_U16.Define = 'Local';


HWAG1SNSR1PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWAG1SNSR1PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Angle1 Sensor 1 Ntc Number';
HWAG1SNSR1PRTCLNTCNR_ULS_U16.Description = 'HwAg1 Sensor 1 Ntc Number';
HWAG1SNSR1PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWAG1SNSR1PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWAG1SNSR1PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X099;
HWAG1SNSR1PRTCLNTCNR_ULS_U16.Define = 'Local';


HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16 = DataDict.Constant;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 0 Manufacturing Ntc Number';
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.Description = 'HwTq0 Manufacturing Ntc Number';
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ0MEAS_HWTQ0MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 0 Ntc Number';
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.Description = 'HwTq0 Ntc Number';
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X073;
HWTQ0MEAS_HWTQ0PRTCLNTCNR_ULS_U16.Define = 'Global';


HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16 = DataDict.Constant;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 1 Manufacturing Ntc Number';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.Description = 'HwTq1 Manufacturing Ntc Number';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E1;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 1 Ntc Number';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.Description = 'HwTq1 Ntc Number';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X075;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.Define = 'Global';


HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16 = DataDict.Constant;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 2 Manufacturing Ntc Number';
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.Description = 'HwTq2 Manufacturing Ntc Number';
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E2;
HWTQ2MEAS_HWTQ2MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 2 Ntc Number';
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.Description = 'HwTq2 Ntc Number';
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X077;
HWTQ2MEAS_HWTQ2PRTCLNTCNR_ULS_U16.Define = 'Global';


HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16 = DataDict.Constant;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 3 Manufacturing Ntc Number';
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.Description = 'HwTq3 Manufacturing Ntc Number';
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E3;
HWTQ3MEAS_HWTQ3MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 3 Ntc Number';
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.Description = 'HwTq3 Ntc Number';
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X079;
HWTQ3MEAS_HWTQ3PRTCLNTCNR_ULS_U16.Define = 'Global';


MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM = DataDict.Constant;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 0 Protocol Fault NTC Number';
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 0 Protocol Fault NTC Number'];
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X083;
MOTAG0MEAS_MOTAG0PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM = DataDict.Constant;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 1 Protocol Fault NTC Number';
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 1 Protocol Fault NTC Number'];
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X085;
MOTAG1MEAS_MOTAG1PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM = DataDict.Constant;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 2 Analog Sin Cosine Fault Ntc Number';
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.Description = [...
  'MotAg2 Analog Sin Cosine Fault Ntc Number'];
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X087;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.Define = 'Local';


TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32 = DataDict.Constant;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.LongName = 'XCP Vehicle Speed Threshold';
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.Description = [...
  'Vehicle Speed is compared with XCP Vehicle speed threshold to determin' ...
  'e whether to grant or deny requested change in corresponding RAM value' ...
  's.'];
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.DocUnits = 'Kph';
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngDT = dt.float32;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngVal = 1;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
