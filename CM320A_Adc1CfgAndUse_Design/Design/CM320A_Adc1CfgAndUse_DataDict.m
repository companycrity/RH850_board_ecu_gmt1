%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Jun-2016 19:03:37       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM320A = DataDict.FDD;
CM320A.Version = '2.3.X';
CM320A.LongName = 'Adc1 Configuration and Use';
CM320A.ShoName  = 'Adc1CfgAndUse';
CM320A.DesignASIL = 'D';
CM320A.Description = [...
  'This FDD is responsible for configuring and use of the ADC1.  This is ' ...
  'the ADC sampled at the 2mSec rate.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
Adc1CfgAndUseInit1 = DataDict.Runnable;
Adc1CfgAndUseInit1.Context = 'Rte';
Adc1CfgAndUseInit1.TimeStep = 0;
Adc1CfgAndUseInit1.Description = 'Init runnable';

Adc1CfgAndUsePer1 = DataDict.Runnable;
Adc1CfgAndUsePer1.Context = 'Rte';
Adc1CfgAndUsePer1.TimeStep = 0.002;
Adc1CfgAndUsePer1.Description = 'Periodic runnable 1';

Adc1CfgAndUsePer2 = DataDict.Runnable;
Adc1CfgAndUsePer2.Context = 'Rte';
Adc1CfgAndUsePer2.TimeStep = 0.002;
Adc1CfgAndUsePer2.Description = 'Periodic runnable 2';

Adc1CfgAndUseAdc1EnaCnvn = DataDict.SrvRunnable;
Adc1CfgAndUseAdc1EnaCnvn.Context = 'Rte';
Adc1CfgAndUseAdc1EnaCnvn.Description = 'Conversion enable runnable';
Adc1CfgAndUseAdc1EnaCnvn.Return = DataDict.CSReturn;
Adc1CfgAndUseAdc1EnaCnvn.Return.Type = 'None';
Adc1CfgAndUseAdc1EnaCnvn.Return.Min = [];
Adc1CfgAndUseAdc1EnaCnvn.Return.Max = [];
Adc1CfgAndUseAdc1EnaCnvn.Return.TestTolerance = [];
Adc1CfgAndUseAdc1EnaCnvn.Return.Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AdcDiagcEndPtrOutp = DataDict.IpSignal;
AdcDiagcEndPtrOutp.LongName = 'ADC 1 Diagnostic End Pointer Output';
AdcDiagcEndPtrOutp.Description = [...
  'Input defining Scan Group 1 end pointer for self diagnostic'];
AdcDiagcEndPtrOutp.DocUnits = 'Cnt';
AdcDiagcEndPtrOutp.EngDT = dt.u08;
AdcDiagcEndPtrOutp.EngInit = 23;
AdcDiagcEndPtrOutp.EngMin = 21;
AdcDiagcEndPtrOutp.EngMax = 23;
AdcDiagcEndPtrOutp.ReadIn = {'Adc1CfgAndUsePer2'};
AdcDiagcEndPtrOutp.ReadType = 'Rte';


AdcDiagcStrtPtrOutp = DataDict.IpSignal;
AdcDiagcStrtPtrOutp.LongName = 'ADC 1 Diagnostic Start Pointer Output';
AdcDiagcStrtPtrOutp.Description = [...
  'Input defining Scan Group 1 start pointer for self diagnostic'];
AdcDiagcStrtPtrOutp.DocUnits = 'Cnt';
AdcDiagcStrtPtrOutp.EngDT = dt.u08;
AdcDiagcStrtPtrOutp.EngInit = 21;
AdcDiagcStrtPtrOutp.EngMin = 21;
AdcDiagcStrtPtrOutp.EngMax = 23;
AdcDiagcStrtPtrOutp.ReadIn = {'Adc1CfgAndUsePer2'};
AdcDiagcStrtPtrOutp.ReadType = 'Rte';


AdcStrtOfCnvn2 = DataDict.IpSignal;
AdcStrtOfCnvn2.LongName = 'ADC 2mSec Start of Conversion';
AdcStrtOfCnvn2.Description = 'ADC 2mSec Start of Conversion';
AdcStrtOfCnvn2.DocUnits = 'Volt';
AdcStrtOfCnvn2.EngDT = dt.Phy;
AdcStrtOfCnvn2.EngInit = 0;
AdcStrtOfCnvn2.EngMin = 0;
AdcStrtOfCnvn2.EngMax = 3;
AdcStrtOfCnvn2.ReadIn = {'Adc1CfgAndUse'};
AdcStrtOfCnvn2.ReadType = 'Phy';


RegInpADCD1SGSR1 = DataDict.IpSignal;
RegInpADCD1SGSR1.LongName = 'Register RegInpADCD1SGSR1';
RegInpADCD1SGSR1.Description = [...
  'Register used to verify converter for conversion of Scan Group 1 is in' ...
  ' idle state'];
RegInpADCD1SGSR1.DocUnits = 'Cnt';
RegInpADCD1SGSR1.EngDT = dt.u08;
RegInpADCD1SGSR1.EngInit = 0;
RegInpADCD1SGSR1.EngMin = 0;
RegInpADCD1SGSR1.EngMax = 255;
RegInpADCD1SGSR1.ReadIn = {'Adc1CfgAndUsePer2'};
RegInpADCD1SGSR1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DmaAdc1ResTrig = DataDict.OpSignal;
DmaAdc1ResTrig.LongName = 'ADC1 Results DMA Trigger';
DmaAdc1ResTrig.Description = [...
  'Signal used to trigger DMA transfer of Adc results from peripheral to ' ...
  'local RAM - INTADCD1I1'];
DmaAdc1ResTrig.DocUnits = 'Volt';
DmaAdc1ResTrig.SwcShoName = 'Adc1CfgAndUse';
DmaAdc1ResTrig.EngDT = dt.Phy;
DmaAdc1ResTrig.EngInit = 0;
DmaAdc1ResTrig.EngMin = 0;
DmaAdc1ResTrig.EngMax = 255;
DmaAdc1ResTrig.TestTolerance = 0.1;
DmaAdc1ResTrig.WrittenIn = {'Adc1CfgAndUse'};
DmaAdc1ResTrig.WriteType = 'Phy';


RegOutpADCD1SGCR1 = DataDict.OpSignal;
RegOutpADCD1SGCR1.LongName = 'Register ADCD1SGCR3';
RegOutpADCD1SGCR1.Description = [...
  'Register ADCD1SGCR3 - used to enable SG3'];
RegOutpADCD1SGCR1.DocUnits = 'Cnt';
RegOutpADCD1SGCR1.SwcShoName = 'Adc1CfgAndUse';
RegOutpADCD1SGCR1.EngDT = dt.u08;
RegOutpADCD1SGCR1.EngInit = 0;
RegOutpADCD1SGCR1.EngMin = 0;
RegOutpADCD1SGCR1.EngMax = 255;
RegOutpADCD1SGCR1.TestTolerance = 0;
RegOutpADCD1SGCR1.WrittenIn = {'Adc1CfgAndUseAdc1EnaCnvn','Adc1CfgAndUsePer1'};
RegOutpADCD1SGCR1.WriteType = 'Phy';


RegOutpADCD1SGCR2 = DataDict.OpSignal;
RegOutpADCD1SGCR2.LongName = 'Register ADCD1SGCR3';
RegOutpADCD1SGCR2.Description = [...
  'Register AdcD1SGCR3 - used to enable SG3'];
RegOutpADCD1SGCR2.DocUnits = 'Cnt';
RegOutpADCD1SGCR2.SwcShoName = 'Adc1CfgAndUse';
RegOutpADCD1SGCR2.EngDT = dt.u08;
RegOutpADCD1SGCR2.EngInit = 0;
RegOutpADCD1SGCR2.EngMin = 0;
RegOutpADCD1SGCR2.EngMax = 255;
RegOutpADCD1SGCR2.TestTolerance = 0;
RegOutpADCD1SGCR2.WrittenIn = {'Adc1CfgAndUseAdc1EnaCnvn','Adc1CfgAndUsePer1'};
RegOutpADCD1SGCR2.WriteType = 'Phy';


RegOutpADCD1SGCR3 = DataDict.OpSignal;
RegOutpADCD1SGCR3.LongName = 'Register ADCD1SGCR3';
RegOutpADCD1SGCR3.Description = [...
  'Register ADCD1SGCR3 - used to enable SG3'];
RegOutpADCD1SGCR3.DocUnits = 'Cnt';
RegOutpADCD1SGCR3.SwcShoName = 'Adc1CfgAndUse';
RegOutpADCD1SGCR3.EngDT = dt.u08;
RegOutpADCD1SGCR3.EngInit = 0;
RegOutpADCD1SGCR3.EngMin = 0;
RegOutpADCD1SGCR3.EngMax = 255;
RegOutpADCD1SGCR3.TestTolerance = 0;
RegOutpADCD1SGCR3.WrittenIn = {'Adc1CfgAndUseAdc1EnaCnvn','Adc1CfgAndUsePer1'};
RegOutpADCD1SGCR3.WriteType = 'Phy';


RegOutpADCD1SGSTCR0 = DataDict.OpSignal;
RegOutpADCD1SGSTCR0.LongName = 'Register ADCD1SGSTCR0';
RegOutpADCD1SGSTCR0.Description = [...
  'Register ADCD1SGSTCR0 - used to perform SW trigger of Scan Group 0, al' ...
  'l channels'];
RegOutpADCD1SGSTCR0.DocUnits = 'Cnt';
RegOutpADCD1SGSTCR0.SwcShoName = 'Adc1CfgAndUse';
RegOutpADCD1SGSTCR0.EngDT = dt.u08;
RegOutpADCD1SGSTCR0.EngInit = 0;
RegOutpADCD1SGSTCR0.EngMin = 0;
RegOutpADCD1SGSTCR0.EngMax = 255;
RegOutpADCD1SGSTCR0.TestTolerance = 0;
RegOutpADCD1SGSTCR0.WrittenIn = {'Adc1CfgAndUseInit1'};
RegOutpADCD1SGSTCR0.WriteType = 'Phy';


RegOutpADCD1SGVCEP1 = DataDict.OpSignal;
RegOutpADCD1SGVCEP1.LongName = 'Register ADCD1SGVCEP1';
RegOutpADCD1SGVCEP1.Description = [...
  'Register ADCD1SGVCEP1 - used as end pointer for Scan Group 1'];
RegOutpADCD1SGVCEP1.DocUnits = 'Cnt';
RegOutpADCD1SGVCEP1.SwcShoName = 'Adc1CfgAndUse';
RegOutpADCD1SGVCEP1.EngDT = dt.u08;
RegOutpADCD1SGVCEP1.EngInit = 23;
RegOutpADCD1SGVCEP1.EngMin = 21;
RegOutpADCD1SGVCEP1.EngMax = 23;
RegOutpADCD1SGVCEP1.TestTolerance = 0;
RegOutpADCD1SGVCEP1.WrittenIn = {'Adc1CfgAndUsePer2'};
RegOutpADCD1SGVCEP1.WriteType = 'Phy';


RegOutpADCD1SGVCSP1 = DataDict.OpSignal;
RegOutpADCD1SGVCSP1.LongName = 'Register ADCD1SGVCSP1';
RegOutpADCD1SGVCSP1.Description = [...
  'Register ADCD1SGVCSP1 - used as start pointer for Scan Group 1'];
RegOutpADCD1SGVCSP1.DocUnits = 'Cnt';
RegOutpADCD1SGVCSP1.SwcShoName = 'Adc1CfgAndUse';
RegOutpADCD1SGVCSP1.EngDT = dt.u08;
RegOutpADCD1SGVCSP1.EngInit = 21;
RegOutpADCD1SGVCSP1.EngMin = 21;
RegOutpADCD1SGVCSP1.EngMax = 23;
RegOutpADCD1SGVCSP1.TestTolerance = 0;
RegOutpADCD1SGVCSP1.WrittenIn = {'Adc1CfgAndUsePer2'};
RegOutpADCD1SGVCSP1.WriteType = 'Phy';



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
Adc1DiagcEndPtr = DataDict.PIM;
Adc1DiagcEndPtr.LongName = 'ADC 1 Diagnostic End Pointer';
Adc1DiagcEndPtr.Description = [...
  'End pointer for Adc Diagnostic Scan Group'];
Adc1DiagcEndPtr.DocUnits = 'Cnt';
Adc1DiagcEndPtr.EngDT = dt.u08;
Adc1DiagcEndPtr.EngMin = 0;
Adc1DiagcEndPtr.EngMax = 255;
Adc1DiagcEndPtr.InitRowCol = [1  1];


Adc1DiagcStrtPtr = DataDict.PIM;
Adc1DiagcStrtPtr.LongName = 'ADC 1 Diagnostic Start Pointer';
Adc1DiagcStrtPtr.Description = [...
  'Start pointer for Adc Diagnostic Scan Group'];
Adc1DiagcStrtPtr.DocUnits = 'Cnt';
Adc1DiagcStrtPtr.EngDT = dt.u08;
Adc1DiagcStrtPtr.EngMin = 0;
Adc1DiagcStrtPtr.EngMax = 255;
Adc1DiagcStrtPtr.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.LongName = 'Diagnostic Scan Group Max';
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.Description = 'Scan Group Maximum';
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.EngVal = 23;
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.Define = 'Global';


ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.LongName = 'Diagnostic Scan Group Min';
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.Description = 'Scan Group Minimum';
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.EngVal = 21;
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.Define = 'Global';


ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.LongName = 'ADCD1SGVCEP2 Register';
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.Description = 'ADC1 Scan Group 2 end pointer';
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.EngVal = 0;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.EngMin = 0;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.EngMax = 63;
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.Header = 'None';
ADC1CFGANDUSE_ADCD1SGVCEP2_CNT_U08.Define = 'Global';


ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.LongName = 'ADCD1SGVCEP3 Register';
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.Description = 'ADC1 Scan Group 3 end pointer';
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.EngVal = 0;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.EngMin = 0;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.EngMax = 63;
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.Header = 'None';
ADC1CFGANDUSE_ADCD1SGVCEP3_CNT_U08.Define = 'Global';


ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.LongName = 'ADCD1SGVCSP2 Register';
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.Description = 'ADC1 Scan Group 2 start pointer';
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.EngVal = 0;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.EngMin = 0;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.EngMax = 63;
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.Header = 'None';
ADC1CFGANDUSE_ADCD1SGVCSP2_CNT_U08.Define = 'Global';


ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.LongName = 'ADCD1SGVCSP3 Register';
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.Description = 'ADC1 Scan Group 3 start pointer';
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.EngDT = dt.u08;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.EngVal = 0;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.EngMin = 0;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.EngMax = 63;
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.Header = 'None';
ADC1CFGANDUSE_ADCD1SGVCSP3_CNT_U08.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR00_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.LongName = 'ADCD1VCR00 Register';
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.Description = 'Value of the VCR00 Register';
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR00_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR01_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.LongName = 'ADCD1VCR00 Register';
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.Description = 'Value of the VCR01 Register';
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR01_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR02_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.LongName = 'ADCD1VCR02 Register';
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.Description = 'Value of the VCR00 Register';
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR02_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR03_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.LongName = 'ADCD1VCR03 Register';
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.Description = 'Value of the VCR03 Register';
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR03_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR04_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.LongName = 'ADCD1VCR04 Register';
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.Description = 'Value of the VCR04 Register';
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR04_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR05_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.LongName = 'ADCD1VCR05 Register';
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.Description = 'Value of the VCR05 Register';
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR05_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR06_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.LongName = 'ADCD1VCR06 Register';
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.Description = 'Value of the VCR06 Register';
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR06_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR07_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.LongName = 'ADCD1VCR07 Register';
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.Description = 'Value of the VCR07 Register';
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR07_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR08_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.LongName = 'ADCD1VCR08 Register';
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.Description = 'Value of the VCR08 Register';
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR08_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR09_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.LongName = 'ADCD1VCR09 Register';
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.Description = 'Value of the VCR09 Register';
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR09_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR10_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.LongName = 'ADCD1VCR10 Register';
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.Description = 'Value of the VCR10 Register';
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR10_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR11_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.LongName = 'ADCD1VCR11 Register';
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.Description = 'Value of the VCR11 Register';
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR11_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR12_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.LongName = 'ADCD1VCR12 Register';
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.Description = 'Value of the VCR12 Register';
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR12_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR13_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.LongName = 'ADCD1VCR13 Register';
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.Description = 'Value of the VCR13 Register';
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR13_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR14_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.LongName = 'ADCD1VCR14 Register';
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.Description = 'Value of the VCR14 Register';
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR14_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR15_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.LongName = 'ADCD1VCR15 Register';
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.Description = 'Value of the VCR15 Register';
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR15_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR16_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.LongName = 'ADCD1VCR16 Register';
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.Description = 'Value of the VCR16 Register';
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR16_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR17_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.LongName = 'ADCD1VCR17 Register';
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.Description = 'Value of the VCR17 Register';
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR17_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR18_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.LongName = 'ADCD1VCR18 Register';
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.Description = 'Value of the VCR18 Register';
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR18_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR19_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.LongName = 'ADCD1VCR19 Register';
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.Description = 'Value of the VCR19 Register';
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR19_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR20_CNT_U32 = DataDict.ConfigParam;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.LongName = 'ADCD1VCR20 Register';
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.Description = 'Value of the VCR20 Register';
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.IsBuildPrm = false;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.EngVal = 0;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.EngMin = 0;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.EngMax = 262143;
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.Header = 'None';
ADC1CFGANDUSE_ADCD1VCR20_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR21_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR21_CNT_U32.LongName = 'ADCD1VCR21 Register';
ADC1CFGANDUSE_ADCD1VCR21_CNT_U32.Description = 'Value of the VCR21 Register';
ADC1CFGANDUSE_ADCD1VCR21_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR21_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR21_CNT_U32.EngVal = 24584;
ADC1CFGANDUSE_ADCD1VCR21_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR22_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR22_CNT_U32.LongName = 'ADCD1VCR22 Register';
ADC1CFGANDUSE_ADCD1VCR22_CNT_U32.Description = 'Value of the VCR22 Register';
ADC1CFGANDUSE_ADCD1VCR22_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR22_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR22_CNT_U32.EngVal = 24592;
ADC1CFGANDUSE_ADCD1VCR22_CNT_U32.Define = 'Global';


ADC1CFGANDUSE_ADCD1VCR23_CNT_U32 = DataDict.Constant;
ADC1CFGANDUSE_ADCD1VCR23_CNT_U32.LongName = 'ADCD1VCR23 Register';
ADC1CFGANDUSE_ADCD1VCR23_CNT_U32.Description = 'Value of the VCR23 Register';
ADC1CFGANDUSE_ADCD1VCR23_CNT_U32.DocUnits = 'Cnt';
ADC1CFGANDUSE_ADCD1VCR23_CNT_U32.EngDT = dt.u32;
ADC1CFGANDUSE_ADCD1VCR23_CNT_U32.EngVal = 24576;
ADC1CFGANDUSE_ADCD1VCR23_CNT_U32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
