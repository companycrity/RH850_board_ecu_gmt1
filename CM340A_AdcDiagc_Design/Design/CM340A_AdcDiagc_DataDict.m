%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Jul-2016 11:47:26       %
%                                  Created with tool release: 2.43.0     %
%                                  Synergy file: %version: 8 %           %
%                                  Derived by: %derived_by: wzvp6q %          %
%%-----------------------------------------------------------------------%

CM340A = DataDict.FDD;
CM340A.Version = '1.8.X';
CM340A.LongName = 'Adc Diagnostic';
CM340A.ShoName  = 'AdcDiagc';
CM340A.DesignASIL = 'D';
CM340A.Description = [...
  'This FDD performs diagnostics on the two Adcs in the Renesas part.  Th' ...
  'is diagnostic is for the whole EA4 platform and is not program specifi' ...
  'c.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AdcDiagcInit1 = DataDict.Runnable;
AdcDiagcInit1.Context = 'Rte';
AdcDiagcInit1.TimeStep = 0;
AdcDiagcInit1.Description = 'Initialization runnable';

AdcDiagcPer1 = DataDict.Runnable;
AdcDiagcPer1.Context = 'Rte';
AdcDiagcPer1.TimeStep = 0.002;
AdcDiagcPer1.Description = 'Periodic runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'AdcDiagcPer1'};
GetNtcQlfrSts.Description = 'NTC qualifier status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Return.Description = '';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = '';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 0;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'AdcDiagcPer1'};
SetNtcSts.Description = 'Set NTC status';
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
Adc0ScanGroup2Ref0 = DataDict.IpSignal;
Adc0ScanGroup2Ref0.LongName = 'Adc0 Scan Group 2 Reference 0';
Adc0ScanGroup2Ref0.Description = [...
  'Adc0 reference voltage read at start of Scan Group 2'];
Adc0ScanGroup2Ref0.DocUnits = 'Volt';
Adc0ScanGroup2Ref0.EngDT = dt.float32;
Adc0ScanGroup2Ref0.EngInit = 0;
Adc0ScanGroup2Ref0.EngMin = 0;
Adc0ScanGroup2Ref0.EngMax = 5;
Adc0ScanGroup2Ref0.ReadIn = {'AdcDiagcPer1'};
Adc0ScanGroup2Ref0.ReadType = 'Rte';


Adc0ScanGroup2Ref1 = DataDict.IpSignal;
Adc0ScanGroup2Ref1.LongName = 'Adc0 Scan Group 2 Reference 1';
Adc0ScanGroup2Ref1.Description = [...
  'Adc0 reference voltage read at end of Scan Group 2'];
Adc0ScanGroup2Ref1.DocUnits = 'Volt';
Adc0ScanGroup2Ref1.EngDT = dt.float32;
Adc0ScanGroup2Ref1.EngInit = 0;
Adc0ScanGroup2Ref1.EngMin = 0;
Adc0ScanGroup2Ref1.EngMax = 5;
Adc0ScanGroup2Ref1.ReadIn = {'AdcDiagcPer1'};
Adc0ScanGroup2Ref1.ReadType = 'Rte';


Adc0ScanGroup3Ref0 = DataDict.IpSignal;
Adc0ScanGroup3Ref0.LongName = 'Adc0 Scan Group 3 Reference 0';
Adc0ScanGroup3Ref0.Description = [...
  'Adc0 reference voltage read at start of Scan Group 3'];
Adc0ScanGroup3Ref0.DocUnits = 'Volt';
Adc0ScanGroup3Ref0.EngDT = dt.float32;
Adc0ScanGroup3Ref0.EngInit = 0;
Adc0ScanGroup3Ref0.EngMin = 0;
Adc0ScanGroup3Ref0.EngMax = 5;
Adc0ScanGroup3Ref0.ReadIn = {'AdcDiagcPer1'};
Adc0ScanGroup3Ref0.ReadType = 'Rte';


Adc0ScanGroup3Ref1 = DataDict.IpSignal;
Adc0ScanGroup3Ref1.LongName = 'Adc0 Scan Group 3 Reference 1';
Adc0ScanGroup3Ref1.Description = [...
  'Adc0 reference voltage read at end of Scan Group 3'];
Adc0ScanGroup3Ref1.DocUnits = 'Volt';
Adc0ScanGroup3Ref1.EngDT = dt.float32;
Adc0ScanGroup3Ref1.EngInit = 0;
Adc0ScanGroup3Ref1.EngMin = 0;
Adc0ScanGroup3Ref1.EngMax = 5;
Adc0ScanGroup3Ref1.ReadIn = {'AdcDiagcPer1'};
Adc0ScanGroup3Ref1.ReadType = 'Rte';


Adc0SelfDiag0 = DataDict.IpSignal;
Adc0SelfDiag0.LongName = 'Adc0 Self Diagnostic 0';
Adc0SelfDiag0.Description = [...
  'ADC conversion result compared to reference voltage for diagnostics'];
Adc0SelfDiag0.DocUnits = 'Volt';
Adc0SelfDiag0.EngDT = dt.float32;
Adc0SelfDiag0.EngInit = 0;
Adc0SelfDiag0.EngMin = 0;
Adc0SelfDiag0.EngMax = 5;
Adc0SelfDiag0.ReadIn = {'AdcDiagcPer1'};
Adc0SelfDiag0.ReadType = 'Rte';


Adc0SelfDiag2 = DataDict.IpSignal;
Adc0SelfDiag2.LongName = 'Adc0 Self Diagnostic 2';
Adc0SelfDiag2.Description = [...
  'ADC conversion result compared to reference voltage for diagnostics'];
Adc0SelfDiag2.DocUnits = 'Volt';
Adc0SelfDiag2.EngDT = dt.float32;
Adc0SelfDiag2.EngInit = 0;
Adc0SelfDiag2.EngMin = 0;
Adc0SelfDiag2.EngMax = 5;
Adc0SelfDiag2.ReadIn = {'AdcDiagcPer1'};
Adc0SelfDiag2.ReadType = 'Rte';


Adc0SelfDiag4 = DataDict.IpSignal;
Adc0SelfDiag4.LongName = 'Adc0 Self Diagnostic 4';
Adc0SelfDiag4.Description = [...
  'ADC conversion result compared to reference voltage for diagnostics'];
Adc0SelfDiag4.DocUnits = 'Volt';
Adc0SelfDiag4.EngDT = dt.float32;
Adc0SelfDiag4.EngInit = 0;
Adc0SelfDiag4.EngMin = 0;
Adc0SelfDiag4.EngMax = 5;
Adc0SelfDiag4.ReadIn = {'AdcDiagcPer1'};
Adc0SelfDiag4.ReadType = 'Rte';


Adc1ScanGroup2Ref0 = DataDict.IpSignal;
Adc1ScanGroup2Ref0.LongName = 'Adc1 Scan Group 2 Reference 0';
Adc1ScanGroup2Ref0.Description = [...
  'Adc1 reference voltage read at start of Scan Group 2'];
Adc1ScanGroup2Ref0.DocUnits = 'Volt';
Adc1ScanGroup2Ref0.EngDT = dt.float32;
Adc1ScanGroup2Ref0.EngInit = 0;
Adc1ScanGroup2Ref0.EngMin = 0;
Adc1ScanGroup2Ref0.EngMax = 5;
Adc1ScanGroup2Ref0.ReadIn = {'AdcDiagcPer1'};
Adc1ScanGroup2Ref0.ReadType = 'Rte';


Adc1ScanGroup2Ref1 = DataDict.IpSignal;
Adc1ScanGroup2Ref1.LongName = 'Adc1 Scan Group 2 Reference 1';
Adc1ScanGroup2Ref1.Description = [...
  'Adc1 reference voltage read at end of Scan Group 2'];
Adc1ScanGroup2Ref1.DocUnits = 'Volt';
Adc1ScanGroup2Ref1.EngDT = dt.float32;
Adc1ScanGroup2Ref1.EngInit = 0;
Adc1ScanGroup2Ref1.EngMin = 0;
Adc1ScanGroup2Ref1.EngMax = 5;
Adc1ScanGroup2Ref1.ReadIn = {'AdcDiagcPer1'};
Adc1ScanGroup2Ref1.ReadType = 'Rte';


Adc1ScanGroup3Ref0 = DataDict.IpSignal;
Adc1ScanGroup3Ref0.LongName = 'Adc1 Scan Group 3 Reference 0';
Adc1ScanGroup3Ref0.Description = [...
  'Adc1 reference voltage read at start of Scan Group 3'];
Adc1ScanGroup3Ref0.DocUnits = 'Volt';
Adc1ScanGroup3Ref0.EngDT = dt.float32;
Adc1ScanGroup3Ref0.EngInit = 0;
Adc1ScanGroup3Ref0.EngMin = 0;
Adc1ScanGroup3Ref0.EngMax = 5;
Adc1ScanGroup3Ref0.ReadIn = {'AdcDiagcPer1'};
Adc1ScanGroup3Ref0.ReadType = 'Rte';


Adc1ScanGroup3Ref1 = DataDict.IpSignal;
Adc1ScanGroup3Ref1.LongName = 'Adc1 Scan Group 3 Reference 1';
Adc1ScanGroup3Ref1.Description = [...
  'Adc1 reference voltage read at end of Scan Group 3'];
Adc1ScanGroup3Ref1.DocUnits = 'Volt';
Adc1ScanGroup3Ref1.EngDT = dt.float32;
Adc1ScanGroup3Ref1.EngInit = 0;
Adc1ScanGroup3Ref1.EngMin = 0;
Adc1ScanGroup3Ref1.EngMax = 5;
Adc1ScanGroup3Ref1.ReadIn = {'AdcDiagcPer1'};
Adc1ScanGroup3Ref1.ReadType = 'Rte';


Adc1SelfDiag0 = DataDict.IpSignal;
Adc1SelfDiag0.LongName = 'Adc1 Self Diagnosis 0';
Adc1SelfDiag0.Description = [...
  'ADC conversion result compared to reference voltage for diagnostics'];
Adc1SelfDiag0.DocUnits = 'Volt';
Adc1SelfDiag0.EngDT = dt.float32;
Adc1SelfDiag0.EngInit = 0;
Adc1SelfDiag0.EngMin = 0;
Adc1SelfDiag0.EngMax = 5;
Adc1SelfDiag0.ReadIn = {'AdcDiagcPer1'};
Adc1SelfDiag0.ReadType = 'Rte';


Adc1SelfDiag2 = DataDict.IpSignal;
Adc1SelfDiag2.LongName = 'Adc1 Self Diagnosis 2';
Adc1SelfDiag2.Description = [...
  'ADC conversion result compared to reference voltage for diagnostics'];
Adc1SelfDiag2.DocUnits = 'Volt';
Adc1SelfDiag2.EngDT = dt.float32;
Adc1SelfDiag2.EngInit = 0;
Adc1SelfDiag2.EngMin = 0;
Adc1SelfDiag2.EngMax = 5;
Adc1SelfDiag2.ReadIn = {'AdcDiagcPer1'};
Adc1SelfDiag2.ReadType = 'Rte';


Adc1SelfDiag4 = DataDict.IpSignal;
Adc1SelfDiag4.LongName = 'Adc1 Self Diagnosis 4';
Adc1SelfDiag4.Description = [...
  'ADC conversion result compared to reference voltage for diagnostics'];
Adc1SelfDiag4.DocUnits = 'Volt';
Adc1SelfDiag4.EngDT = dt.float32;
Adc1SelfDiag4.EngInit = 0;
Adc1SelfDiag4.EngMin = 0;
Adc1SelfDiag4.EngMax = 5;
Adc1SelfDiag4.ReadIn = {'AdcDiagcPer1'};
Adc1SelfDiag4.ReadType = 'Rte';


RegInpADCD0PER = DataDict.IpSignal;
RegInpADCD0PER.LongName = 'Register ADCD0PER';
RegInpADCD0PER.Description = 'Register used in parity check';
RegInpADCD0PER.DocUnits = 'Cnt';
RegInpADCD0PER.EngDT = dt.u08;
RegInpADCD0PER.EngInit = 0;
RegInpADCD0PER.EngMin = 0;
RegInpADCD0PER.EngMax = 255;
RegInpADCD0PER.ReadIn = {'AdcDiagcPer1'};
RegInpADCD0PER.ReadType = 'Phy';


RegInpADCD1PER = DataDict.IpSignal;
RegInpADCD1PER.LongName = 'Register RegInpADCD1PER';
RegInpADCD1PER.Description = 'Register used in parity check';
RegInpADCD1PER.DocUnits = 'Cnt';
RegInpADCD1PER.EngDT = dt.u08;
RegInpADCD1PER.EngInit = 0;
RegInpADCD1PER.EngMin = 0;
RegInpADCD1PER.EngMax = 255;
RegInpADCD1PER.ReadIn = {'AdcDiagcPer1'};
RegInpADCD1PER.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Adc0Faild = DataDict.OpSignal;
Adc0Faild.LongName = 'ADC 0 Failed';
Adc0Faild.Description = [...
  'Flag indicating failed status of Adc0'];
Adc0Faild.DocUnits = 'Cnt';
Adc0Faild.SwcShoName = 'AdcDiagc';
Adc0Faild.EngDT = dt.lgc;
Adc0Faild.EngInit = 0;
Adc0Faild.EngMin = 0;
Adc0Faild.EngMax = 1;
Adc0Faild.TestTolerance = 0;
Adc0Faild.WrittenIn = {'AdcDiagcPer1'};
Adc0Faild.WriteType = 'Rte';


Adc1Faild = DataDict.OpSignal;
Adc1Faild.LongName = 'ADC 1 Failed';
Adc1Faild.Description = [...
  'Flag indicating failed status of Adc1'];
Adc1Faild.DocUnits = 'Cnt';
Adc1Faild.SwcShoName = 'AdcDiagc';
Adc1Faild.EngDT = dt.lgc;
Adc1Faild.EngInit = 0;
Adc1Faild.EngMin = 0;
Adc1Faild.EngMax = 1;
Adc1Faild.TestTolerance = 0;
Adc1Faild.WrittenIn = {'AdcDiagcPer1'};
Adc1Faild.WriteType = 'Rte';


AdcDiagcEndPtrOutp = DataDict.OpSignal;
AdcDiagcEndPtrOutp.LongName = 'Adc Diagnostic End Pointer Output';
AdcDiagcEndPtrOutp.Description = [...
  'End pointer for Adc Diagnostic Scan Group'];
AdcDiagcEndPtrOutp.DocUnits = 'Cnt';
AdcDiagcEndPtrOutp.SwcShoName = 'AdcDiagc';
AdcDiagcEndPtrOutp.EngDT = dt.u08;
AdcDiagcEndPtrOutp.EngInit = 23;
AdcDiagcEndPtrOutp.EngMin = 21;
AdcDiagcEndPtrOutp.EngMax = 23;
AdcDiagcEndPtrOutp.TestTolerance = 0;
AdcDiagcEndPtrOutp.WrittenIn = {'AdcDiagcPer1'};
AdcDiagcEndPtrOutp.WriteType = 'Rte';


AdcDiagcStrtPtrOutp = DataDict.OpSignal;
AdcDiagcStrtPtrOutp.LongName = 'Adc Diagnostic Start Pointer Output';
AdcDiagcStrtPtrOutp.Description = [...
  'Start pointer for Adc Diagnostic Scan Group'];
AdcDiagcStrtPtrOutp.DocUnits = 'Cnt';
AdcDiagcStrtPtrOutp.SwcShoName = 'AdcDiagc';
AdcDiagcStrtPtrOutp.EngDT = dt.u08;
AdcDiagcStrtPtrOutp.EngInit = 21;
AdcDiagcStrtPtrOutp.EngMin = 21;
AdcDiagcStrtPtrOutp.EngMax = 23;
AdcDiagcStrtPtrOutp.TestTolerance = 0;
AdcDiagcStrtPtrOutp.WrittenIn = {'AdcDiagcPer1'};
AdcDiagcStrtPtrOutp.WriteType = 'Rte';


RegOutpADCD0ECR = DataDict.OpSignal;
RegOutpADCD0ECR.LongName = 'Register ADCD0ECR';
RegOutpADCD0ECR.Description = [...
  'Register ADCD0ECR used for clearing ADC 0 parity error'];
RegOutpADCD0ECR.DocUnits = 'Cnt';
RegOutpADCD0ECR.SwcShoName = 'AdcDiagc';
RegOutpADCD0ECR.EngDT = dt.u08;
RegOutpADCD0ECR.EngInit = 0;
RegOutpADCD0ECR.EngMin = 0;
RegOutpADCD0ECR.EngMax = 255;
RegOutpADCD0ECR.TestTolerance = 0;
RegOutpADCD0ECR.WrittenIn = {'AdcDiagcPer1'};
RegOutpADCD0ECR.WriteType = 'Phy';


RegOutpADCD1ECR = DataDict.OpSignal;
RegOutpADCD1ECR.LongName = 'Register ADCD1ECR';
RegOutpADCD1ECR.Description = [...
  'Register ADCD1ECR used for clearing ADC 1 parity error'];
RegOutpADCD1ECR.DocUnits = 'Cnt';
RegOutpADCD1ECR.SwcShoName = 'AdcDiagc';
RegOutpADCD1ECR.EngDT = dt.u08;
RegOutpADCD1ECR.EngInit = 0;
RegOutpADCD1ECR.EngMin = 0;
RegOutpADCD1ECR.EngMax = 255;
RegOutpADCD1ECR.TestTolerance = 0;
RegOutpADCD1ECR.WrittenIn = {'AdcDiagcPer1'};
RegOutpADCD1ECR.WriteType = 'Phy';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
AdcDiagcNtc0x032FailStep = DataDict.Calibration;
AdcDiagcNtc0x032FailStep.LongName = 'Adc Diagnostic Ntc 32 Fail Step';
AdcDiagcNtc0x032FailStep.Description = [...
  'Adc0 FailStep. The failstep should be set such that the NTC sets in a ' ...
  'timely fashion, for example: 10ms.  NTC will set in 10ms if failstep =' ...
  ' 32768 / 5 = 6554'];
AdcDiagcNtc0x032FailStep.DocUnits = 'Cnt';
AdcDiagcNtc0x032FailStep.EngDT = dt.u16;
AdcDiagcNtc0x032FailStep.EngVal = 6554;
AdcDiagcNtc0x032FailStep.EngMin = 1;
AdcDiagcNtc0x032FailStep.EngMax = 65535;
AdcDiagcNtc0x032FailStep.Cardinality = 'Cmn';
AdcDiagcNtc0x032FailStep.CustomerVisible = false;
AdcDiagcNtc0x032FailStep.Online = false;
AdcDiagcNtc0x032FailStep.Impact = 'H';
AdcDiagcNtc0x032FailStep.TuningOwner = 'FDD';
AdcDiagcNtc0x032FailStep.GraphLink = {''};
AdcDiagcNtc0x032FailStep.Monotony = 'None';
AdcDiagcNtc0x032FailStep.MaxGrad = 999;
AdcDiagcNtc0x032FailStep.PortName = 'AdcDiagcNtc0x032FailStep';


AdcDiagcNtc0x032PassStep = DataDict.Calibration;
AdcDiagcNtc0x032PassStep.LongName = 'Adc Diagnostic Ntc 32 Pass Step';
AdcDiagcNtc0x032PassStep.Description = [...
  'Adc0 PassStep. Due to the possibility that the pass step may be increm' ...
  'ented in 7 of the 8 states in the state handling (because it is possib' ...
  'le that only 1 state may be failing), the pass step may be incremented' ...
  ' many more times than the fail setp. Because of this, the pass step sh' ...
  'ould be set such that PassStep = FailStep/10'];
AdcDiagcNtc0x032PassStep.DocUnits = 'Cnt';
AdcDiagcNtc0x032PassStep.EngDT = dt.u16;
AdcDiagcNtc0x032PassStep.EngVal = 65;
AdcDiagcNtc0x032PassStep.EngMin = 1;
AdcDiagcNtc0x032PassStep.EngMax = 65535;
AdcDiagcNtc0x032PassStep.Cardinality = 'Cmn';
AdcDiagcNtc0x032PassStep.CustomerVisible = false;
AdcDiagcNtc0x032PassStep.Online = false;
AdcDiagcNtc0x032PassStep.Impact = 'H';
AdcDiagcNtc0x032PassStep.TuningOwner = 'FDD';
AdcDiagcNtc0x032PassStep.GraphLink = {''};
AdcDiagcNtc0x032PassStep.Monotony = 'None';
AdcDiagcNtc0x032PassStep.MaxGrad = 999;
AdcDiagcNtc0x032PassStep.PortName = 'AdcDiagcNtc0x032PassStep';


AdcDiagcNtc0x033FailStep = DataDict.Calibration;
AdcDiagcNtc0x033FailStep.LongName = 'Adc Diagnostic Ntc 33 Fail Step';
AdcDiagcNtc0x033FailStep.Description = [...
  'Adc1 FailStep. The failstep should be set such that the NTC sets in a ' ...
  'timely fashion, for example: 10ms.  NTC will set in 10ms if failstep =' ...
  ' 32768 / 5 = 6554'];
AdcDiagcNtc0x033FailStep.DocUnits = 'Cnt';
AdcDiagcNtc0x033FailStep.EngDT = dt.u16;
AdcDiagcNtc0x033FailStep.EngVal = 6554;
AdcDiagcNtc0x033FailStep.EngMin = 1;
AdcDiagcNtc0x033FailStep.EngMax = 65535;
AdcDiagcNtc0x033FailStep.Cardinality = 'Cmn';
AdcDiagcNtc0x033FailStep.CustomerVisible = false;
AdcDiagcNtc0x033FailStep.Online = false;
AdcDiagcNtc0x033FailStep.Impact = 'H';
AdcDiagcNtc0x033FailStep.TuningOwner = 'FDD';
AdcDiagcNtc0x033FailStep.GraphLink = {''};
AdcDiagcNtc0x033FailStep.Monotony = 'None';
AdcDiagcNtc0x033FailStep.MaxGrad = 999;
AdcDiagcNtc0x033FailStep.PortName = 'AdcDiagcNtc0x033FailStep';


AdcDiagcNtc0x033PassStep = DataDict.Calibration;
AdcDiagcNtc0x033PassStep.LongName = 'Adc Diagnostic Ntc 33 Pass Step';
AdcDiagcNtc0x033PassStep.Description = [...
  'Adc1 PassStep. Due to the possibility that the pass step may be increm' ...
  'ented in 7 of the 8 states in the state handling (because it is possib' ...
  'le that only 1 state may be failing), the pass step may be incremented' ...
  ' many more times than the fail setp. Because of this, the pass step sh' ...
  'ould be set such that PassStep = FailStep/10'];
AdcDiagcNtc0x033PassStep.DocUnits = 'Cnt';
AdcDiagcNtc0x033PassStep.EngDT = dt.u16;
AdcDiagcNtc0x033PassStep.EngVal = 65;
AdcDiagcNtc0x033PassStep.EngMin = 1;
AdcDiagcNtc0x033PassStep.EngMax = 65535;
AdcDiagcNtc0x033PassStep.Cardinality = 'Cmn';
AdcDiagcNtc0x033PassStep.CustomerVisible = false;
AdcDiagcNtc0x033PassStep.Online = false;
AdcDiagcNtc0x033PassStep.Impact = 'H';
AdcDiagcNtc0x033PassStep.TuningOwner = 'FDD';
AdcDiagcNtc0x033PassStep.GraphLink = {''};
AdcDiagcNtc0x033PassStep.Monotony = 'None';
AdcDiagcNtc0x033PassStep.MaxGrad = 999;
AdcDiagcNtc0x033PassStep.PortName = 'AdcDiagcNtc0x033PassStep';



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
Adc0FltCntSt0 = DataDict.PIM;
Adc0FltCntSt0.LongName = 'ADC 0 Fault Count  State 0';
Adc0FltCntSt0.Description = 'ADC 0 Fault accumulator in state 0';
Adc0FltCntSt0.DocUnits = 'Cnt';
Adc0FltCntSt0.EngDT = dt.u08;
Adc0FltCntSt0.EngMin = 0;
Adc0FltCntSt0.EngMax = 255;
Adc0FltCntSt0.InitRowCol = [1  1];


Adc0FltCntSt2 = DataDict.PIM;
Adc0FltCntSt2.LongName = 'ADC 0 Fault Count  State 2';
Adc0FltCntSt2.Description = 'ADC 0 Fault accumulator in state 2';
Adc0FltCntSt2.DocUnits = 'Cnt';
Adc0FltCntSt2.EngDT = dt.u08;
Adc0FltCntSt2.EngMin = 0;
Adc0FltCntSt2.EngMax = 255;
Adc0FltCntSt2.InitRowCol = [1  1];


Adc0FltCntSt4 = DataDict.PIM;
Adc0FltCntSt4.LongName = 'ADC 0 Fault Count  State 4';
Adc0FltCntSt4.Description = 'ADC 0 Fault accumulator in state 4';
Adc0FltCntSt4.DocUnits = 'Cnt';
Adc0FltCntSt4.EngDT = dt.u08;
Adc0FltCntSt4.EngMin = 0;
Adc0FltCntSt4.EngMax = 255;
Adc0FltCntSt4.InitRowCol = [1  1];


Adc0FltCntSt6 = DataDict.PIM;
Adc0FltCntSt6.LongName = 'ADC 0 Fault Count  State 6';
Adc0FltCntSt6.Description = 'ADC 0 Fault accumulator in state 6';
Adc0FltCntSt6.DocUnits = 'Cnt';
Adc0FltCntSt6.EngDT = dt.u08;
Adc0FltCntSt6.EngMin = 0;
Adc0FltCntSt6.EngMax = 255;
Adc0FltCntSt6.InitRowCol = [1  1];


Adc0ScanGroup2RefFltCntSt = DataDict.PIM;
Adc0ScanGroup2RefFltCntSt.LongName = 'ADC 0 Scan Group 2 Fault Count State';
Adc0ScanGroup2RefFltCntSt.Description = [...
  'ADC 0 Scan Group 2 Fault accumulator state'];
Adc0ScanGroup2RefFltCntSt.DocUnits = 'Cnt';
Adc0ScanGroup2RefFltCntSt.EngDT = dt.u08;
Adc0ScanGroup2RefFltCntSt.EngMin = 0;
Adc0ScanGroup2RefFltCntSt.EngMax = 255;
Adc0ScanGroup2RefFltCntSt.InitRowCol = [1  1];


Adc0ScanGroup3RefFltCntSt = DataDict.PIM;
Adc0ScanGroup3RefFltCntSt.LongName = 'ADC 0 Scan Group 3 Fault Count State';
Adc0ScanGroup3RefFltCntSt.Description = [...
  'ADC 0 Scan Group 3 Fault accumulator state'];
Adc0ScanGroup3RefFltCntSt.DocUnits = 'Cnt';
Adc0ScanGroup3RefFltCntSt.EngDT = dt.u08;
Adc0ScanGroup3RefFltCntSt.EngMin = 0;
Adc0ScanGroup3RefFltCntSt.EngMax = 255;
Adc0ScanGroup3RefFltCntSt.InitRowCol = [1  1];


Adc1FltCntSt0 = DataDict.PIM;
Adc1FltCntSt0.LongName = 'ADC 1 Fault Count  State 0';
Adc1FltCntSt0.Description = 'ADC 1 Fault accumulator in state 0';
Adc1FltCntSt0.DocUnits = 'Cnt';
Adc1FltCntSt0.EngDT = dt.u08;
Adc1FltCntSt0.EngMin = 0;
Adc1FltCntSt0.EngMax = 255;
Adc1FltCntSt0.InitRowCol = [1  1];


Adc1FltCntSt2 = DataDict.PIM;
Adc1FltCntSt2.LongName = 'ADC 1 Fault Count  State 2';
Adc1FltCntSt2.Description = 'ADC 1 Fault accumulator in state 2';
Adc1FltCntSt2.DocUnits = 'Cnt';
Adc1FltCntSt2.EngDT = dt.u08;
Adc1FltCntSt2.EngMin = 0;
Adc1FltCntSt2.EngMax = 255;
Adc1FltCntSt2.InitRowCol = [1  1];


Adc1FltCntSt4 = DataDict.PIM;
Adc1FltCntSt4.LongName = 'ADC 1 Fault Count  State 4';
Adc1FltCntSt4.Description = 'ADC 1 Fault accumulator in state 4';
Adc1FltCntSt4.DocUnits = 'Cnt';
Adc1FltCntSt4.EngDT = dt.u08;
Adc1FltCntSt4.EngMin = 0;
Adc1FltCntSt4.EngMax = 255;
Adc1FltCntSt4.InitRowCol = [1  1];


Adc1FltCntSt6 = DataDict.PIM;
Adc1FltCntSt6.LongName = 'ADC 1 Fault Count  State 6';
Adc1FltCntSt6.Description = 'ADC 1 Fault accumulator in state 6';
Adc1FltCntSt6.DocUnits = 'Cnt';
Adc1FltCntSt6.EngDT = dt.u08;
Adc1FltCntSt6.EngMin = 0;
Adc1FltCntSt6.EngMax = 255;
Adc1FltCntSt6.InitRowCol = [1  1];


Adc1ScanGroup2RefFltCntSt = DataDict.PIM;
Adc1ScanGroup2RefFltCntSt.LongName = 'ADC 1 Scan Group 2 Fault Count State';
Adc1ScanGroup2RefFltCntSt.Description = [...
  'ADC 1 Scan Group 2 Fault accumulator state'];
Adc1ScanGroup2RefFltCntSt.DocUnits = 'Cnt';
Adc1ScanGroup2RefFltCntSt.EngDT = dt.u08;
Adc1ScanGroup2RefFltCntSt.EngMin = 0;
Adc1ScanGroup2RefFltCntSt.EngMax = 255;
Adc1ScanGroup2RefFltCntSt.InitRowCol = [1  1];


Adc1ScanGroup3RefFltCntSt = DataDict.PIM;
Adc1ScanGroup3RefFltCntSt.LongName = 'ADC 1 Scan Group 3 Fault Count State';
Adc1ScanGroup3RefFltCntSt.Description = [...
  'ADC 1 Scan Group 3 Fault accumulator state'];
Adc1ScanGroup3RefFltCntSt.DocUnits = 'Cnt';
Adc1ScanGroup3RefFltCntSt.EngDT = dt.u08;
Adc1ScanGroup3RefFltCntSt.EngMin = 0;
Adc1ScanGroup3RefFltCntSt.EngMax = 255;
Adc1ScanGroup3RefFltCntSt.InitRowCol = [1  1];


AdcDiagcEndPtr = DataDict.PIM;
AdcDiagcEndPtr.LongName = 'ADC Diagnostic End Pointer';
AdcDiagcEndPtr.Description = [...
  'AdcDiagcEndPtr PIM used to pass value from state processing to output'];
AdcDiagcEndPtr.DocUnits = 'Cnt';
AdcDiagcEndPtr.EngDT = dt.u08;
AdcDiagcEndPtr.EngMin = 0;
AdcDiagcEndPtr.EngMax = 23;
AdcDiagcEndPtr.InitRowCol = [1  1];


AdcDiagcSt = DataDict.PIM;
AdcDiagcSt.LongName = 'ADC Diagnostic State';
AdcDiagcSt.Description = [...
  'Current state of the Adc Diagnostic'];
AdcDiagcSt.DocUnits = 'Cnt';
AdcDiagcSt.EngDT = dt.u08;
AdcDiagcSt.EngMin = 0;
AdcDiagcSt.EngMax = 7;
AdcDiagcSt.InitRowCol = [1  1];


AdcDiagcStrtPtr = DataDict.PIM;
AdcDiagcStrtPtr.LongName = 'ADC Diagnostic Start Pointer';
AdcDiagcStrtPtr.Description = [...
  'AdcDiagcStrtPtr PIM used to pass value from state processing to output' ...
  't'];
AdcDiagcStrtPtr.DocUnits = 'Cnt';
AdcDiagcStrtPtr.EngDT = dt.u08;
AdcDiagcStrtPtr.EngMin = 0;
AdcDiagcStrtPtr.EngMax = 23;
AdcDiagcStrtPtr.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ADCDIAG0REFVOLT_VOLT_F32 = DataDict.Constant;
ADCDIAG0REFVOLT_VOLT_F32.LongName = 'Adc Diagnostic 0 Reference Voltage';
ADCDIAG0REFVOLT_VOLT_F32.Description = 'Nominal voltage for AdcSelfDiag0';
ADCDIAG0REFVOLT_VOLT_F32.DocUnits = 'Volt';
ADCDIAG0REFVOLT_VOLT_F32.EngDT = dt.float32;
ADCDIAG0REFVOLT_VOLT_F32.EngVal = 2.5;
ADCDIAG0REFVOLT_VOLT_F32.Define = 'Local';


ADCDIAG2REFVOLT_VOLT_F32 = DataDict.Constant;
ADCDIAG2REFVOLT_VOLT_F32.LongName = 'Adc Diagnostic 2 Reference Voltage';
ADCDIAG2REFVOLT_VOLT_F32.Description = 'Nominal voltage for AdcSelfDiag2';
ADCDIAG2REFVOLT_VOLT_F32.DocUnits = 'Volt';
ADCDIAG2REFVOLT_VOLT_F32.EngDT = dt.float32;
ADCDIAG2REFVOLT_VOLT_F32.EngVal = 5;
ADCDIAG2REFVOLT_VOLT_F32.Define = 'Local';


ADCDIAG4REFVOLT_VOLT_F32 = DataDict.Constant;
ADCDIAG4REFVOLT_VOLT_F32.LongName = 'Adc Diagnostic 4 Reference Voltage';
ADCDIAG4REFVOLT_VOLT_F32.Description = 'Nominal voltage for AdcSelfDiag4';
ADCDIAG4REFVOLT_VOLT_F32.DocUnits = 'Volt';
ADCDIAG4REFVOLT_VOLT_F32.EngDT = dt.float32;
ADCDIAG4REFVOLT_VOLT_F32.EngVal = 0;
ADCDIAG4REFVOLT_VOLT_F32.Define = 'Local';


ADCDIAGACCRCYFLTPRM_CNT_U08 = DataDict.Constant;
ADCDIAGACCRCYFLTPRM_CNT_U08.LongName = 'Adc Diagnostic Accuracy Fault Parameter';
ADCDIAGACCRCYFLTPRM_CNT_U08.Description = [...
  'Parameter bit location for accuracy failure'];
ADCDIAGACCRCYFLTPRM_CNT_U08.DocUnits = 'Cnt';
ADCDIAGACCRCYFLTPRM_CNT_U08.EngDT = dt.u08;
ADCDIAGACCRCYFLTPRM_CNT_U08.EngVal = 8;
ADCDIAGACCRCYFLTPRM_CNT_U08.Define = 'Local';


ADCDIAGCVLTGTHD_VOLT_F32 = DataDict.Constant;
ADCDIAGCVLTGTHD_VOLT_F32.LongName = 'Adc Diagnostic Voltage Threshold';
ADCDIAGCVLTGTHD_VOLT_F32.Description = [...
  'Threshold used for accuracy check of the Adc Diagnostic.  Value = ((2^' ...
  '7 + 2^5)/2)/4095 * 5'];
ADCDIAGCVLTGTHD_VOLT_F32.DocUnits = 'Volt';
ADCDIAGCVLTGTHD_VOLT_F32.EngDT = dt.float32;
ADCDIAGCVLTGTHD_VOLT_F32.EngVal = 0.09768009768;
ADCDIAGCVLTGTHD_VOLT_F32.Define = 'Local';


ADCDIAGPARFLTPRM_CNT_U08 = DataDict.Constant;
ADCDIAGPARFLTPRM_CNT_U08.LongName = 'Adc Diagnostic Parity Fault Parameter';
ADCDIAGPARFLTPRM_CNT_U08.Description = [...
  'Parameter bit location for parity failure'];
ADCDIAGPARFLTPRM_CNT_U08.DocUnits = 'Cnt';
ADCDIAGPARFLTPRM_CNT_U08.EngDT = dt.u08;
ADCDIAGPARFLTPRM_CNT_U08.EngVal = 128;
ADCDIAGPARFLTPRM_CNT_U08.Define = 'Local';


ADCDIAGSCANGROUP2REFFLTPRM_CNT_U08 = DataDict.Constant;
ADCDIAGSCANGROUP2REFFLTPRM_CNT_U08.LongName = 'Adc Diagnostic Scan Group 2 Reference Fault Parameter';
ADCDIAGSCANGROUP2REFFLTPRM_CNT_U08.Description = [...
  'Parameter bit location for Scan Group 2 reference read'];
ADCDIAGSCANGROUP2REFFLTPRM_CNT_U08.DocUnits = 'Cnt';
ADCDIAGSCANGROUP2REFFLTPRM_CNT_U08.EngDT = dt.u08;
ADCDIAGSCANGROUP2REFFLTPRM_CNT_U08.EngVal = 32;
ADCDIAGSCANGROUP2REFFLTPRM_CNT_U08.Define = 'Local';


ADCDIAGSCANGROUP3REFFLTPRM_CNT_U08 = DataDict.Constant;
ADCDIAGSCANGROUP3REFFLTPRM_CNT_U08.LongName = 'Adc Diagnostic Scan Group 3 Reference Fault Parameter';
ADCDIAGSCANGROUP3REFFLTPRM_CNT_U08.Description = [...
  'Parameter bit location for Scan Group 3 reference read'];
ADCDIAGSCANGROUP3REFFLTPRM_CNT_U08.DocUnits = 'Cnt';
ADCDIAGSCANGROUP3REFFLTPRM_CNT_U08.EngDT = dt.u08;
ADCDIAGSCANGROUP3REFFLTPRM_CNT_U08.EngVal = 64;
ADCDIAGSCANGROUP3REFFLTPRM_CNT_U08.Define = 'Local';


ADCDIAGSCANGROUPENDREFVOLT_VOLT_F32 = DataDict.Constant;
ADCDIAGSCANGROUPENDREFVOLT_VOLT_F32.LongName = 'Adc Diagnostic Scan Group Start Reference Voltage';
ADCDIAGSCANGROUPENDREFVOLT_VOLT_F32.Description = [...
  'Nominal voltage for end of Adc Scan Group reference read'];
ADCDIAGSCANGROUPENDREFVOLT_VOLT_F32.DocUnits = 'Volt';
ADCDIAGSCANGROUPENDREFVOLT_VOLT_F32.EngDT = dt.float32;
ADCDIAGSCANGROUPENDREFVOLT_VOLT_F32.EngVal = 3.75;
ADCDIAGSCANGROUPENDREFVOLT_VOLT_F32.Define = 'Local';


ADCDIAGSCANGROUPSTRTREFVOLT_VOLT_F32 = DataDict.Constant;
ADCDIAGSCANGROUPSTRTREFVOLT_VOLT_F32.LongName = 'Adc Diagnostic Scan Group Start Reference Voltage';
ADCDIAGSCANGROUPSTRTREFVOLT_VOLT_F32.Description = [...
  'Nominal voltage for start of Adc Scan Group reference read'];
ADCDIAGSCANGROUPSTRTREFVOLT_VOLT_F32.DocUnits = 'Volt';
ADCDIAGSCANGROUPSTRTREFVOLT_VOLT_F32.EngDT = dt.float32;
ADCDIAGSCANGROUPSTRTREFVOLT_VOLT_F32.EngVal = 1.25;
ADCDIAGSCANGROUPSTRTREFVOLT_VOLT_F32.Define = 'Local';


ADCDIAGZEROFLTPRM_CNT_U08 = DataDict.Constant;
ADCDIAGZEROFLTPRM_CNT_U08.LongName = 'Adc Diagnostic Zero Fault Parameter';
ADCDIAGZEROFLTPRM_CNT_U08.Description = [...
  'Parameter bit location for zero failure'];
ADCDIAGZEROFLTPRM_CNT_U08.DocUnits = 'Cnt';
ADCDIAGZEROFLTPRM_CNT_U08.EngDT = dt.u08;
ADCDIAGZEROFLTPRM_CNT_U08.EngVal = 16;
ADCDIAGZEROFLTPRM_CNT_U08.Define = 'Local';


ADCDNECRPARERRCLR_CNT_U08 = DataDict.Constant;
ADCDNECRPARERRCLR_CNT_U08.LongName = 'ADCDnECR Parity Error Clear';
ADCDNECRPARERRCLR_CNT_U08.Description = [...
  'PEC bit of ADCDnECR register written to 1 to clear ADC parity error'];
ADCDNECRPARERRCLR_CNT_U08.DocUnits = 'Cnt';
ADCDNECRPARERRCLR_CNT_U08.EngDT = dt.u08;
ADCDNECRPARERRCLR_CNT_U08.EngVal = 2;
ADCDNECRPARERRCLR_CNT_U08.Define = 'Local';


ADCDNPERPARERRMASK_CNT_U08 = DataDict.Constant;
ADCDNPERPARERRMASK_CNT_U08.LongName = 'ADCDnPER Parity Error Mask';
ADCDNPERPARERRMASK_CNT_U08.Description = [...
  'Mask for the PE bit in the ADCnPER register which indicates an ADC par' ...
  'ity error is present'];
ADCDNPERPARERRMASK_CNT_U08.DocUnits = 'Cnt';
ADCDNPERPARERRMASK_CNT_U08.EngDT = dt.u08;
ADCDNPERPARERRMASK_CNT_U08.EngVal = 128;
ADCDNPERPARERRMASK_CNT_U08.Define = 'Local';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


VIRTCH21_CNT_U08 = DataDict.Constant;
VIRTCH21_CNT_U08.LongName = 'Virtual Channel 21';
VIRTCH21_CNT_U08.Description = 'Virtual Channel 21';
VIRTCH21_CNT_U08.DocUnits = 'Cnt';
VIRTCH21_CNT_U08.EngDT = dt.u08;
VIRTCH21_CNT_U08.EngVal = 21;
VIRTCH21_CNT_U08.Define = 'Local';


VIRTCH22_CNT_U08 = DataDict.Constant;
VIRTCH22_CNT_U08.LongName = 'Virtual Channel 22';
VIRTCH22_CNT_U08.Description = 'Virtual Channel 22';
VIRTCH22_CNT_U08.DocUnits = 'Cnt';
VIRTCH22_CNT_U08.EngDT = dt.u08;
VIRTCH22_CNT_U08.EngVal = 22;
VIRTCH22_CNT_U08.Define = 'Local';


VIRTCH23_CNT_U08 = DataDict.Constant;
VIRTCH23_CNT_U08.LongName = 'Virtual Channel 23';
VIRTCH23_CNT_U08.Description = 'Virtual Channel 23';
VIRTCH23_CNT_U08.DocUnits = 'Cnt';
VIRTCH23_CNT_U08.EngDT = dt.u08;
VIRTCH23_CNT_U08.EngVal = 23;
VIRTCH23_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
Adc0Diagc = DataDict.NTC;
Adc0Diagc.NtcNr = NtcNr1.NTCNR_0X032;
Adc0Diagc.NtcTyp = 'Deb';
Adc0Diagc.LongName = 'ADC 0 Dynamic Diagnostic';
Adc0Diagc.Description = 'This diagnostic verifies that Adc0 is actively converting signals with a level of accuracy.';
Adc0Diagc.NtcStInfo = DataDict.NtcStInfoBitPacked;
Adc0Diagc.NtcStInfo.Bit0Descr = 'Diagnostic state [0]';
Adc0Diagc.NtcStInfo.Bit1Descr = 'Diagnostic state [1]';
Adc0Diagc.NtcStInfo.Bit2Descr = 'Diagnostic state [2]';
Adc0Diagc.NtcStInfo.Bit3Descr = 'Accuracy Failure';
Adc0Diagc.NtcStInfo.Bit4Descr = 'Zero Failure';
Adc0Diagc.NtcStInfo.Bit5Descr = 'Adc Diagnostic Scan Group 2 Accuracy Fault';
Adc0Diagc.NtcStInfo.Bit6Descr = 'Adc Diagnostic Scan Group 3 Accuracy Fault';
Adc0Diagc.NtcStInfo.Bit7Descr = 'Parity Failure';


Adc1Diagc = DataDict.NTC;
Adc1Diagc.NtcNr = NtcNr1.NTCNR_0X033;
Adc1Diagc.NtcTyp = 'Deb';
Adc1Diagc.LongName = 'ADC 1 Dynamic Diagnostic';
Adc1Diagc.Description = 'This diagnostic verifies that Adc1 is actively converting signals with a level of accuracy.';
Adc1Diagc.NtcStInfo = DataDict.NtcStInfoBitPacked;
Adc1Diagc.NtcStInfo.Bit0Descr = 'Diagnostic state [0]';
Adc1Diagc.NtcStInfo.Bit1Descr = 'Diagnostic state [1]';
Adc1Diagc.NtcStInfo.Bit2Descr = 'Diagnostic state [2]';
Adc1Diagc.NtcStInfo.Bit3Descr = 'Accuracy Failure';
Adc1Diagc.NtcStInfo.Bit4Descr = 'Zero Failure';
Adc1Diagc.NtcStInfo.Bit5Descr = 'Adc Diagnostic Scan Group 2 Accuracy Fault';
Adc1Diagc.NtcStInfo.Bit6Descr = 'Adc Diagnostic Scan Group 3 Accuracy Fault';
Adc1Diagc.NtcStInfo.Bit7Descr = 'Parity Failure';


%end of Data Dictionary
