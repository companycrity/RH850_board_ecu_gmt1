%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Nov-2016 09:26:03       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: tzbsjd %          %
%%-----------------------------------------------------------------------%

CM410A = DataDict.FDD;
CM410A.Version = '1.2.x';
CM410A.LongName = 'Sensor Measurement Start';
CM410A.ShoName  = 'SnsrMeasStrt';
CM410A.DesignASIL = 'D';
CM410A.Description = 'Sensor Measurement Start Trigger';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SnsrMeasStrtInit1 = DataDict.Runnable;
SnsrMeasStrtInit1.Context = 'Rte';
SnsrMeasStrtInit1.TimeStep = 0;
SnsrMeasStrtInit1.Description = 'Timer Peripheral Initialization';

SnsrMeasStrtIrq = DataDict.Runnable;
SnsrMeasStrtIrq.Context = 'NonRte';
SnsrMeasStrtIrq.TimeStep = 'ISR';
SnsrMeasStrtIrq.Description = [...
  'Service Torque Measurement Trigger Start'];

SnsrMeasStrtPer1 = DataDict.Runnable;
SnsrMeasStrtPer1.Context = 'Rte';
SnsrMeasStrtPer1.TimeStep = 0.002;
SnsrMeasStrtPer1.Description = [...
  'Calculate the Timer Value for Trigger'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
HwTq0MeasTrigStrt = DataDict.Client;
HwTq0MeasTrigStrt.CallLocation = {'SnsrMeasStrtIrq'};
HwTq0MeasTrigStrt.Description = 'HwTq0 Trigger Start Request';
HwTq0MeasTrigStrt.Return = DataDict.CSReturn;
HwTq0MeasTrigStrt.Return.Type = 'None';
HwTq0MeasTrigStrt.Return.Min = [];
HwTq0MeasTrigStrt.Return.Max = [];
HwTq0MeasTrigStrt.Return.TestTolerance = [];


HwTq1MeasTrigStrt = DataDict.Client;
HwTq1MeasTrigStrt.CallLocation = {'SnsrMeasStrtIrq'};
HwTq1MeasTrigStrt.Description = 'HwTq1 Trigger Start Request';
HwTq1MeasTrigStrt.Return = DataDict.CSReturn;
HwTq1MeasTrigStrt.Return.Type = 'None';
HwTq1MeasTrigStrt.Return.Min = [];
HwTq1MeasTrigStrt.Return.Max = [];
HwTq1MeasTrigStrt.Return.TestTolerance = [];


HwTq2MeasTrigStrt = DataDict.Client;
HwTq2MeasTrigStrt.CallLocation = {'SnsrMeasStrtIrq'};
HwTq2MeasTrigStrt.Description = 'HwTq2 Trigger Start Request';
HwTq2MeasTrigStrt.Return = DataDict.CSReturn;
HwTq2MeasTrigStrt.Return.Type = 'None';
HwTq2MeasTrigStrt.Return.Min = [];
HwTq2MeasTrigStrt.Return.Max = [];
HwTq2MeasTrigStrt.Return.TestTolerance = [];


HwTq3MeasTrigStrt = DataDict.Client;
HwTq3MeasTrigStrt.CallLocation = {'SnsrMeasStrtIrq'};
HwTq3MeasTrigStrt.Description = 'HwTq3 Trigger Start Request';
HwTq3MeasTrigStrt.Return = DataDict.CSReturn;
HwTq3MeasTrigStrt.Return.Type = 'None';
HwTq3MeasTrigStrt.Return.Min = [];
HwTq3MeasTrigStrt.Return.Max = [];
HwTq3MeasTrigStrt.Return.TestTolerance = [];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
SnsrMeasStrtTrigDly = DataDict.Calibration;
SnsrMeasStrtTrigDly.LongName = 'Sensor Measurement Start Trigger Delay';
SnsrMeasStrtTrigDly.Description = 'Trigger Delay - 2ms Jitter control';
SnsrMeasStrtTrigDly.DocUnits = 'MicroSec';
SnsrMeasStrtTrigDly.EngDT = dt.u16;
SnsrMeasStrtTrigDly.EngVal = 356;
SnsrMeasStrtTrigDly.EngMin = 0;
SnsrMeasStrtTrigDly.EngMax = 2000;
SnsrMeasStrtTrigDly.Cardinality = 'Inin';
SnsrMeasStrtTrigDly.CustomerVisible = false;
SnsrMeasStrtTrigDly.Online = false;
SnsrMeasStrtTrigDly.Impact = 'H';
SnsrMeasStrtTrigDly.TuningOwner = 'FDD';
SnsrMeasStrtTrigDly.GraphLink = {''};
SnsrMeasStrtTrigDly.Monotony = 'None';
SnsrMeasStrtTrigDly.MaxGrad = 0;
SnsrMeasStrtTrigDly.PortName = 'SnsrMeasStrtTrigDly';



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
TqMsgTrigCnt = DataDict.PIM;
TqMsgTrigCnt.LongName = 'Torque Message Trigger Count';
TqMsgTrigCnt.Description = [...
  'Captures how many timer trigger happen'];
TqMsgTrigCnt.DocUnits = 'Cnt';
TqMsgTrigCnt.EngDT = dt.u32;
TqMsgTrigCnt.EngMin = 0;
TqMsgTrigCnt.EngMax = 4294967295;
TqMsgTrigCnt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ONEMICROSECCNT_CNT_U16 = DataDict.Constant;
ONEMICROSECCNT_CNT_U16.LongName = 'One Micro Second Count';
ONEMICROSECCNT_CNT_U16.Description = '80MHz clock, 1us counts';
ONEMICROSECCNT_CNT_U16.DocUnits = 'Cnt';
ONEMICROSECCNT_CNT_U16.EngDT = dt.u16;
ONEMICROSECCNT_CNT_U16.EngVal = 80;
ONEMICROSECCNT_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
