%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Jun-2016 18:35:35       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 7 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: wzvp6q %          %
%%-----------------------------------------------------------------------%

CM300A = DataDict.FDD;
CM300A.Version = '2.2.x';
CM300A.LongName = 'Adc0 Configuration and Use';
CM300A.ShoName  = 'Adc0CfgAndUse';
CM300A.DesignASIL = 'B';
CM300A.Description = [...
  'This FDD is responsible for configuring and use of the Adc0.  This is ' ...
  'the Adc sampled at the motor control rate.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
Adc0CfgAndUseInit1 = DataDict.Runnable;
Adc0CfgAndUseInit1.Context = 'Rte';
Adc0CfgAndUseInit1.TimeStep = 0;
Adc0CfgAndUseInit1.Description = 'Init Runnable';

Adc0CfgAndUsePer1 = DataDict.Runnable;
Adc0CfgAndUsePer1.Context = 'NonRte';
Adc0CfgAndUsePer1.TimeStep = 'MotorControlx2';
Adc0CfgAndUsePer1.Description = 'Periodic runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AdcStrtOfCnvnMotCtrlPeak = DataDict.IpSignal;
AdcStrtOfCnvnMotCtrlPeak.LongName = 'Adc Motor Control Peak Start of Conversion';
AdcStrtOfCnvnMotCtrlPeak.Description = 'None';
AdcStrtOfCnvnMotCtrlPeak.DocUnits = 'Volt';
AdcStrtOfCnvnMotCtrlPeak.EngDT = dt.Phy;
AdcStrtOfCnvnMotCtrlPeak.EngInit = 0;
AdcStrtOfCnvnMotCtrlPeak.EngMin = 0;
AdcStrtOfCnvnMotCtrlPeak.EngMax = 3;
AdcStrtOfCnvnMotCtrlPeak.ReadIn = {'Adc0CfgAndUse'};
AdcStrtOfCnvnMotCtrlPeak.ReadType = 'Phy';


AdcStrtOfCnvnMotCtrlVly = DataDict.IpSignal;
AdcStrtOfCnvnMotCtrlVly.LongName = 'Adc Motor Control Valley Start of Conversion';
AdcStrtOfCnvnMotCtrlVly.Description = 'None';
AdcStrtOfCnvnMotCtrlVly.DocUnits = 'Volt';
AdcStrtOfCnvnMotCtrlVly.EngDT = dt.Phy;
AdcStrtOfCnvnMotCtrlVly.EngInit = 0;
AdcStrtOfCnvnMotCtrlVly.EngMin = 0;
AdcStrtOfCnvnMotCtrlVly.EngMax = 3;
AdcStrtOfCnvnMotCtrlVly.ReadIn = {'Adc0CfgAndUse'};
AdcStrtOfCnvnMotCtrlVly.ReadType = 'Phy';


MotCtrlAdcDiagcEndPtrOutp = DataDict.IpSignal;
MotCtrlAdcDiagcEndPtrOutp.LongName = 'ADC 0 Diagnostic End Pointer Output';
MotCtrlAdcDiagcEndPtrOutp.Description = [...
  'End pointer for Adc Diagnostic Scan Group'];
MotCtrlAdcDiagcEndPtrOutp.DocUnits = 'Cnt';
MotCtrlAdcDiagcEndPtrOutp.EngDT = dt.u08;
MotCtrlAdcDiagcEndPtrOutp.EngInit = 23;
MotCtrlAdcDiagcEndPtrOutp.EngMin = 21;
MotCtrlAdcDiagcEndPtrOutp.EngMax = 23;
MotCtrlAdcDiagcEndPtrOutp.ReadIn = {'Adc0CfgAndUsePer1'};
MotCtrlAdcDiagcEndPtrOutp.ReadType = 'NonRte';


MotCtrlAdcDiagcStrtPtrOutp = DataDict.IpSignal;
MotCtrlAdcDiagcStrtPtrOutp.LongName = 'ADC 0 Diagnostic Start Pointer Output';
MotCtrlAdcDiagcStrtPtrOutp.Description = [...
  'Start pointer for Adc Diagnostic Scan Group'];
MotCtrlAdcDiagcStrtPtrOutp.DocUnits = 'Cnt';
MotCtrlAdcDiagcStrtPtrOutp.EngDT = dt.u08;
MotCtrlAdcDiagcStrtPtrOutp.EngInit = 21;
MotCtrlAdcDiagcStrtPtrOutp.EngMin = 21;
MotCtrlAdcDiagcStrtPtrOutp.EngMax = 23;
MotCtrlAdcDiagcStrtPtrOutp.ReadIn = {'Adc0CfgAndUsePer1'};
MotCtrlAdcDiagcStrtPtrOutp.ReadType = 'NonRte';


RegInpADCD0SGSR1 = DataDict.IpSignal;
RegInpADCD0SGSR1.LongName = 'Register RegInpADCD0SGSR1';
RegInpADCD0SGSR1.Description = [...
  'Register used to verify converter for conversion of Scan Group 1 is in' ...
  ' idle state'];
RegInpADCD0SGSR1.DocUnits = 'Cnt';
RegInpADCD0SGSR1.EngDT = dt.u08;
RegInpADCD0SGSR1.EngInit = 0;
RegInpADCD0SGSR1.EngMin = 0;
RegInpADCD0SGSR1.EngMax = 255;
RegInpADCD0SGSR1.ReadIn = {'Adc0CfgAndUsePer1'};
RegInpADCD0SGSR1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DmaAdc0ResTrig = DataDict.OpSignal;
DmaAdc0ResTrig.LongName = 'DMA Adc0 Results Trigger';
DmaAdc0ResTrig.Description = [...
  'Signal used to trigger DMA transfer of Adc results from peripheral to ' ...
  'local RAM'];
DmaAdc0ResTrig.DocUnits = 'Cnt';
DmaAdc0ResTrig.SwcShoName = 'Adc0CfgAndUse';
DmaAdc0ResTrig.EngDT = dt.lgc;
DmaAdc0ResTrig.EngInit = 0;
DmaAdc0ResTrig.EngMin = 0;
DmaAdc0ResTrig.EngMax = 1;
DmaAdc0ResTrig.TestTolerance = 0;
DmaAdc0ResTrig.WrittenIn = {'Adc0CfgAndUse'};
DmaAdc0ResTrig.WriteType = 'Phy';


RegOutpADCD0SGSTCR0 = DataDict.OpSignal;
RegOutpADCD0SGSTCR0.LongName = 'Register ADCD0SGSTCR0';
RegOutpADCD0SGSTCR0.Description = [...
  'Register ADCD0SGCR0 - used to perform SW trigger of Scan Group 0, all ' ...
  'channels'];
RegOutpADCD0SGSTCR0.DocUnits = 'Cnt';
RegOutpADCD0SGSTCR0.SwcShoName = 'Adc0CfgAndUse';
RegOutpADCD0SGSTCR0.EngDT = dt.u08;
RegOutpADCD0SGSTCR0.EngInit = 0;
RegOutpADCD0SGSTCR0.EngMin = 0;
RegOutpADCD0SGSTCR0.EngMax = 255;
RegOutpADCD0SGSTCR0.TestTolerance = 0;
RegOutpADCD0SGSTCR0.WrittenIn = {'Adc0CfgAndUseInit1'};
RegOutpADCD0SGSTCR0.WriteType = 'Phy';


RegOutpADCD0SGVCEP1 = DataDict.OpSignal;
RegOutpADCD0SGVCEP1.LongName = 'Register ADCD0SGVCEP1';
RegOutpADCD0SGVCEP1.Description = [...
  'Register ADCD0SGVCEP1 - used as end pointer for Scan Group 1'];
RegOutpADCD0SGVCEP1.DocUnits = 'Cnt';
RegOutpADCD0SGVCEP1.SwcShoName = 'Adc0CfgAndUse';
RegOutpADCD0SGVCEP1.EngDT = dt.u08;
RegOutpADCD0SGVCEP1.EngInit = 23;
RegOutpADCD0SGVCEP1.EngMin = 21;
RegOutpADCD0SGVCEP1.EngMax = 23;
RegOutpADCD0SGVCEP1.TestTolerance = 0;
RegOutpADCD0SGVCEP1.WrittenIn = {'Adc0CfgAndUsePer1'};
RegOutpADCD0SGVCEP1.WriteType = 'Phy';


RegOutpADCD0SGVCSP1 = DataDict.OpSignal;
RegOutpADCD0SGVCSP1.LongName = 'Register ADCD0SGVCSP1';
RegOutpADCD0SGVCSP1.Description = [...
  'Register ADCD0SGVCSP1 - used as start pointer for Scan Group 1'];
RegOutpADCD0SGVCSP1.DocUnits = 'Cnt';
RegOutpADCD0SGVCSP1.SwcShoName = 'Adc0CfgAndUse';
RegOutpADCD0SGVCSP1.EngDT = dt.u08;
RegOutpADCD0SGVCSP1.EngInit = 21;
RegOutpADCD0SGVCSP1.EngMin = 21;
RegOutpADCD0SGVCSP1.EngMax = 23;
RegOutpADCD0SGVCSP1.TestTolerance = 0;
RegOutpADCD0SGVCSP1.WrittenIn = {'Adc0CfgAndUsePer1'};
RegOutpADCD0SGVCSP1.WriteType = 'Phy';



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
Adc0DiagcEndPtr = DataDict.PIM;
Adc0DiagcEndPtr.LongName = 'ADC 0 Diagnostic End Pointer';
Adc0DiagcEndPtr.Description = [...
  'End pointer for Adc Diagnostic Scan Group'];
Adc0DiagcEndPtr.DocUnits = 'Cnt';
Adc0DiagcEndPtr.EngDT = dt.u08;
Adc0DiagcEndPtr.EngMin = 0;
Adc0DiagcEndPtr.EngMax = 255;
Adc0DiagcEndPtr.InitRowCol = [1  1];


Adc0DiagcStrtPtr = DataDict.PIM;
Adc0DiagcStrtPtr.LongName = 'ADC 0 Diagnostic Start Pointer';
Adc0DiagcStrtPtr.Description = [...
  'Start pointer for Adc Diagnostic Scan Group'];
Adc0DiagcStrtPtr.DocUnits = 'Cnt';
Adc0DiagcStrtPtr.EngDT = dt.u08;
Adc0DiagcStrtPtr.EngMin = 0;
Adc0DiagcStrtPtr.EngMax = 255;
Adc0DiagcStrtPtr.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.LongName = 'ADCD0SGVCEP2 Register';
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.Description = 'Adc0 Scan Group 2 end pointer';
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.EngVal = 0;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.EngMin = 0;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.EngMax = 63;
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.Header = 'none';
ADC0CFGANDUSE_ADCD0SGVCEP2_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.LongName = 'ADCD0SGVCEP3 Register';
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.Description = 'Adc0 Scan Group 3 end pointer';
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.EngVal = 0;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.EngMin = 0;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.EngMax = 63;
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.Header = 'none';
ADC0CFGANDUSE_ADCD0SGVCEP3_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.LongName = 'ADCD0SGVCSP2 Register';
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.Description = 'Adc0 Scan Group 2 start pointer';
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.EngVal = 0;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.EngMin = 0;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.EngMax = 63;
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.Header = 'none';
ADC0CFGANDUSE_ADCD0SGVCSP2_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.LongName = 'ADCD0SGVCSP3 Register';
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.Description = 'Adc0 Scan Group 3 start pointer';
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.EngVal = 0;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.EngMin = 0;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.EngMax = 63;
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.Header = 'none';
ADC0CFGANDUSE_ADCD0SGVCSP3_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR00_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.LongName = 'ADCD0VCR00 Register';
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.Description = 'Value of the VCR00 Register';
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR00_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR01_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.LongName = 'ADCD0VCR00 Register';
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.Description = 'Value of the VCR01 Register';
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR01_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR02_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.LongName = 'ADCD0VCR02 Register';
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.Description = 'Value of the VCR00 Register';
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR02_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR03_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.LongName = 'ADCD0VCR03 Register';
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.Description = 'Value of the VCR03 Register';
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR03_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR04_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.LongName = 'ADCD0VCR04 Register';
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.Description = 'Value of the VCR04 Register';
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR04_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR05_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.LongName = 'ADCD0VCR05 Register';
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.Description = 'Value of the VCR05 Register';
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR05_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR06_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.LongName = 'ADCD0VCR06 Register';
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.Description = 'Value of the VCR06 Register';
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR06_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR07_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.LongName = 'ADCD0VCR07 Register';
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.Description = 'Value of the VCR07 Register';
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR07_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR08_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.LongName = 'ADCD0VCR08 Register';
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.Description = 'Value of the VCR08 Register';
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR08_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR09_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.LongName = 'ADCD0VCR09 Register';
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.Description = 'Value of the VCR09 Register';
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR09_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR10_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.LongName = 'ADCD0VCR10 Register';
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.Description = 'Value of the VCR10 Register';
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR10_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR11_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.LongName = 'ADCD0VCR11 Register';
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.Description = 'Value of the VCR11 Register';
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR11_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR12_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.LongName = 'ADCD0VCR12 Register';
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.Description = 'Value of the VCR12 Register';
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR12_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR13_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.LongName = 'ADCD0VCR13 Register';
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.Description = 'Value of the VCR13 Register';
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR13_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR14_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.LongName = 'ADCD0VCR14 Register';
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.Description = 'Value of the VCR14 Register';
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR14_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR15_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.LongName = 'ADCD0VCR15 Register';
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.Description = 'Value of the VCR15 Register';
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR15_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR16_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.LongName = 'ADCD0VCR16 Register';
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.Description = 'Value of the VCR16 Register';
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR16_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR17_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.LongName = 'ADCD0VCR17 Register';
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.Description = 'Value of the VCR17 Register';
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR17_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR18_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.LongName = 'ADCD0VCR18 Register';
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.Description = 'Value of the VCR18 Register';
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR18_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR19_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.LongName = 'ADCD0VCR19 Register';
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.Description = 'Value of the VCR19 Register';
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR19_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR20_CNT_U32 = DataDict.ConfigParam;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.LongName = 'ADCD0VCR20 Register';
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.Description = 'Value of the VCR20 Register';
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.IsBuildPrm = false;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.EngVal = 0;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.EngMin = 0;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.EngMax = 262143;
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.Header = 'none';
ADC0CFGANDUSE_ADCD0VCR20_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR21_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR21_CNT_U32.LongName = 'ADCD0VCR21 Register';
ADC0CFGANDUSE_ADCD0VCR21_CNT_U32.Description = 'Value of the VCR21 Register';
ADC0CFGANDUSE_ADCD0VCR21_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR21_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR21_CNT_U32.EngVal = 24584;
ADC0CFGANDUSE_ADCD0VCR21_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR22_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR22_CNT_U32.LongName = 'ADCD0VCR22 Register';
ADC0CFGANDUSE_ADCD0VCR22_CNT_U32.Description = 'Value of the VCR22 Register';
ADC0CFGANDUSE_ADCD0VCR22_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR22_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR22_CNT_U32.EngVal = 24592;
ADC0CFGANDUSE_ADCD0VCR22_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCD0VCR23_CNT_U32 = DataDict.Constant;
ADC0CFGANDUSE_ADCD0VCR23_CNT_U32.LongName = 'ADCD0VCR23 Register';
ADC0CFGANDUSE_ADCD0VCR23_CNT_U32.Description = 'Value of the VCR23 Register';
ADC0CFGANDUSE_ADCD0VCR23_CNT_U32.DocUnits = 'Cnt';
ADC0CFGANDUSE_ADCD0VCR23_CNT_U32.EngDT = dt.u32;
ADC0CFGANDUSE_ADCD0VCR23_CNT_U32.EngVal = 24576;
ADC0CFGANDUSE_ADCD0VCR23_CNT_U32.Define = 'Local';


ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32 = DataDict.Constant;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.LongName = 'ADC Scaling Factor';
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.Description = [...
  'ADC scaling factor to convert converted counts to volts'];
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.DocUnits = 'VoltPerCnt';
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngDT = dt.float32;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngVal = 0.001221001221;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.Define = 'Local';


ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.LongName = 'Diagnostic Scan Group Max';
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.Description = 'Scan Group Maximum';
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.EngVal = 23;
ADC0CFGANDUSE_DIAGCSCANGROUPMAX_CNT_U08.Define = 'Local';


ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08 = DataDict.Constant;
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.LongName = 'Diagnostic Scan Group Min';
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.Description = 'Scan Group Minimum';
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.DocUnits = 'Cnt';
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.EngDT = dt.u08;
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.EngVal = 21;
ADC0CFGANDUSE_DIAGCSCANGROUPMIN_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
