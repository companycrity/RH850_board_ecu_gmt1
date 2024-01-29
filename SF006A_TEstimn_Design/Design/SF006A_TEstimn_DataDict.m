%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Sep-2015 14:08:58       %
%                                  Created with tool release: 2.19.0     %
%                                  Synergy file: %version: 2 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: fzg88y %          %
%%-----------------------------------------------------------------------%

SF006A = DataDict.FDD;
SF006A.Version = '1.1.X';
SF006A.LongName = 'Temperature Estimation';
SF006A.ShoName  = 'TEstimn';
SF006A.DesignASIL = 'B';
SF006A.Description = [...
  'This function provides the estimates of temperature of key motor circu' ...
  'it parameters, namely the power transistor Silicon resistance, motor C' ...
  'opper winding resistance and the motor BEMF coefficient, and if requir' ...
  'ed, for the Assist Mechanism. The temperature estimation is achieved b' ...
  'y measuring the controller temperature and using it as an input to a s' ...
  'imple lumped parameter system model to estimate the temperatures of th' ...
  'e physical parameters which affect the motor circuit parameter values.' ...
  ' Additional inputs, namely the Engine and Ambient Temperatures and the' ...
  ' Handwheel Velocity, are required to obtain the Assist Mechanism tempe' ...
  'rature estimate.'];
SF006A.Dependencies = ...
	{'ArchGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TEstimnInit1 = DataDict.Runnable;
TEstimnInit1.TimeStep = 0;

TEstimnPer1 = DataDict.Runnable;
TEstimnPer1.TimeStep = 0.1;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AmbT = DataDict.IpSignal;
AmbT.LongName = 'Ambient Temperature';
AmbT.DocUnits = 'DegCgrd';
AmbT.EngDT = dt.float32;
AmbT.EngInit = 0;
AmbT.EngMin = -50;
AmbT.EngMax = 150;
AmbT.ReadIn = {'TEstimnInit1','TEstimnPer1'};
AmbT.ReadType = 'Rte';


AmbTVld = DataDict.IpSignal;
AmbTVld.LongName = 'Ambient Temperature Valid';
AmbTVld.DocUnits = 'Cnt';
AmbTVld.EngDT = dt.lgc;
AmbTVld.EngInit = 0;
AmbTVld.EngMin = 0;
AmbTVld.EngMax = 1;
AmbTVld.ReadIn = {'TEstimnInit1','TEstimnPer1'};
AmbTVld.ReadType = 'Rte';


AssiMechTEstimnDi = DataDict.IpSignal;
AssiMechTEstimnDi.LongName = 'Assist Mechanism Temperature Estimatation Disable';
AssiMechTEstimnDi.DocUnits = 'Cnt';
AssiMechTEstimnDi.EngDT = dt.lgc;
AssiMechTEstimnDi.EngInit = 0;
AssiMechTEstimnDi.EngMin = 0;
AssiMechTEstimnDi.EngMax = 1;
AssiMechTEstimnDi.ReadIn = {'TEstimnPer1'};
AssiMechTEstimnDi.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'Ecu Temperature Filtered';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'TEstimnInit1','TEstimnPer1'};
EcuTFild.ReadType = 'Rte';


EngOilT = DataDict.IpSignal;
EngOilT.LongName = 'Engine Oil Temperature';
EngOilT.DocUnits = 'DegCgrd';
EngOilT.EngDT = dt.float32;
EngOilT.EngInit = 0;
EngOilT.EngMin = -50;
EngOilT.EngMax = 150;
EngOilT.ReadIn = {'TEstimnInit1','TEstimnPer1'};
EngOilT.ReadType = 'Rte';


EngOilTVld = DataDict.IpSignal;
EngOilTVld.LongName = 'Engine Oil Temperature Valid';
EngOilTVld.DocUnits = 'Cnt';
EngOilTVld.EngDT = dt.lgc;
EngOilTVld.EngInit = 0;
EngOilTVld.EngMin = 0;
EngOilTVld.EngMax = 1;
EngOilTVld.ReadIn = {'TEstimnInit1','TEstimnPer1'};
EngOilTVld.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'TEstimnPer1'};
HwVel.ReadType = 'Rte';


MotCurrPeakEstimd = DataDict.IpSignal;
MotCurrPeakEstimd.LongName = 'Motor Current Peak Estimated';
MotCurrPeakEstimd.DocUnits = 'AmprSqd';
MotCurrPeakEstimd.EngDT = dt.float32;
MotCurrPeakEstimd.EngInit = 0;
MotCurrPeakEstimd.EngMin = 0;
MotCurrPeakEstimd.EngMax = 62500;
MotCurrPeakEstimd.ReadIn = {'TEstimnPer1'};
MotCurrPeakEstimd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiMechT = DataDict.OpSignal;
AssiMechT.LongName = 'Assist Mechanism Temperature';
AssiMechT.Description = [...
  'Assist Mechanism Temperature Estimate'];
AssiMechT.DocUnits = 'DegCgrd';
AssiMechT.SwcShoName = 'TEstimn';
AssiMechT.EngDT = dt.float32;
AssiMechT.EngInit = 25;
AssiMechT.EngMin = -50;
AssiMechT.EngMax = 150;
AssiMechT.TestTolerance = 0.03125;
AssiMechT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
AssiMechT.WriteType = 'Rte';


MotFetT = DataDict.OpSignal;
MotFetT.LongName = 'Motor Silicon Temperature';
MotFetT.Description = [...
  'Estimated temperature of FETs (power transistors)'];
MotFetT.DocUnits = 'DegCgrd';
MotFetT.SwcShoName = 'TEstimn';
MotFetT.EngDT = dt.float32;
MotFetT.EngInit = 25;
MotFetT.EngMin = -50;
MotFetT.EngMax = 200;
MotFetT.TestTolerance = 0.03125;
MotFetT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
MotFetT.WriteType = 'Rte';


MotMagT = DataDict.OpSignal;
MotMagT.LongName = 'Motor Magnet Temperature';
MotMagT.Description = [...
  'Estimated Temperature of Motor Magnet'];
MotMagT.DocUnits = 'DegCgrd';
MotMagT.SwcShoName = 'TEstimn';
MotMagT.EngDT = dt.float32;
MotMagT.EngInit = 25;
MotMagT.EngMin = -50;
MotMagT.EngMax = 150;
MotMagT.TestTolerance = 0.03125;
MotMagT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
MotMagT.WriteType = 'Rte';


MotWidgT = DataDict.OpSignal;
MotWidgT.LongName = 'Motor Winding Temperature';
MotWidgT.Description = [...
  'Estimated Temperature of Motor Winding'];
MotWidgT.DocUnits = 'DegCgrd';
MotWidgT.SwcShoName = 'TEstimn';
MotWidgT.EngDT = dt.float32;
MotWidgT.EngInit = 25;
MotWidgT.EngMin = -50;
MotWidgT.EngMax = 300;
MotWidgT.TestTolerance = 0.03125;
MotWidgT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
MotWidgT.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
TEstimnAmbPwrMplr = DataDict.Calibration;
TEstimnAmbPwrMplr.LongName = 'Temperature Estimation Ambient Power Multiplier';
TEstimnAmbPwrMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert motor peak curren' ...
  't squared to Watts'];
TEstimnAmbPwrMplr.DocUnits = 'WattPerAmprSqd';
TEstimnAmbPwrMplr.EngDT = dt.float32;
TEstimnAmbPwrMplr.EngVal = 0.01;
TEstimnAmbPwrMplr.EngMin = 0;
TEstimnAmbPwrMplr.EngMax = 1;
TEstimnAmbPwrMplr.ProgrammedBy = 'Nexteer';
TEstimnAmbPwrMplr.Cardinality = 'I';
TEstimnAmbPwrMplr.CustomerVisible = false;
TEstimnAmbPwrMplr.Online = false;
TEstimnAmbPwrMplr.Impact = 'H';
TEstimnAmbPwrMplr.TuningOwner = 'ThermMngt';
TEstimnAmbPwrMplr.GraphLink = '';
TEstimnAmbPwrMplr.Monotony = 'None';
TEstimnAmbPwrMplr.MaxGrad = 998;
TEstimnAmbPwrMplr.PortName = 'TEstimnAmbPwrMplr';


TEstimnAmbTSca = DataDict.Calibration;
TEstimnAmbTSca.LongName = 'Temperature Estimation Ambient Temperature Scale';
TEstimnAmbTSca.Description = [...
  'Scale factor which scales the ambient temperature to estimate the temp' ...
  'erature of the Assist Mechanism housing'];
TEstimnAmbTSca.DocUnits = 'Uls';
TEstimnAmbTSca.EngDT = dt.float32;
TEstimnAmbTSca.EngVal = 0.9;
TEstimnAmbTSca.EngMin = 0;
TEstimnAmbTSca.EngMax = 1;
TEstimnAmbTSca.ProgrammedBy = 'Nexteer';
TEstimnAmbTSca.Cardinality = 'I';
TEstimnAmbTSca.CustomerVisible = false;
TEstimnAmbTSca.Online = false;
TEstimnAmbTSca.Impact = 'H';
TEstimnAmbTSca.TuningOwner = 'ThermMngt';
TEstimnAmbTSca.GraphLink = '';
TEstimnAmbTSca.Monotony = 'None';
TEstimnAmbTSca.MaxGrad = 998;
TEstimnAmbTSca.PortName = 'TEstimnAmbTSca';


TEstimnAssiMechAmbLpFilFrq = DataDict.Calibration;
TEstimnAssiMechAmbLpFilFrq.LongName = 'Temperature Estimation Assist Mechanism Ambient Low Pass Filter Frequency';
TEstimnAssiMechAmbLpFilFrq.Description = [...
  'Calibration to set pole of Delta Temperature Compensation function low' ...
  ' pass filter for the Assist Mechanism correction factor'];
TEstimnAssiMechAmbLpFilFrq.DocUnits = 'Hz';
TEstimnAssiMechAmbLpFilFrq.EngDT = dt.float32;
TEstimnAssiMechAmbLpFilFrq.EngVal = 0.024;
TEstimnAssiMechAmbLpFilFrq.EngMin = 1e-05;
TEstimnAssiMechAmbLpFilFrq.EngMax = 0.1;
TEstimnAssiMechAmbLpFilFrq.ProgrammedBy = 'Nexteer';
TEstimnAssiMechAmbLpFilFrq.Cardinality = 'I';
TEstimnAssiMechAmbLpFilFrq.CustomerVisible = false;
TEstimnAssiMechAmbLpFilFrq.Online = false;
TEstimnAssiMechAmbLpFilFrq.Impact = 'H';
TEstimnAssiMechAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnAssiMechAmbLpFilFrq.GraphLink = '';
TEstimnAssiMechAmbLpFilFrq.Monotony = 'None';
TEstimnAssiMechAmbLpFilFrq.MaxGrad = 998;
TEstimnAssiMechAmbLpFilFrq.PortName = 'TEstimnAssiMechAmbLpFilFrq';


TEstimnAssiMechAmbMplr = DataDict.Calibration;
TEstimnAssiMechAmbMplr.LongName = 'Temperature Estimation Assist Mechanism Ambient Multiplier';
TEstimnAssiMechAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for the Assist M' ...
  'echanism'];
TEstimnAssiMechAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnAssiMechAmbMplr.EngDT = dt.float32;
TEstimnAssiMechAmbMplr.EngVal = 0.01;
TEstimnAssiMechAmbMplr.EngMin = -1;
TEstimnAssiMechAmbMplr.EngMax = 1;
TEstimnAssiMechAmbMplr.ProgrammedBy = 'Nexteer';
TEstimnAssiMechAmbMplr.Cardinality = 'I';
TEstimnAssiMechAmbMplr.CustomerVisible = false;
TEstimnAssiMechAmbMplr.Online = false;
TEstimnAssiMechAmbMplr.Impact = 'H';
TEstimnAssiMechAmbMplr.TuningOwner = 'ThermMngt';
TEstimnAssiMechAmbMplr.GraphLink = '';
TEstimnAssiMechAmbMplr.Monotony = 'None';
TEstimnAssiMechAmbMplr.MaxGrad = 998;
TEstimnAssiMechAmbMplr.PortName = 'TEstimnAssiMechAmbMplr';


TEstimnAssiMechCorrLim = DataDict.Calibration;
TEstimnAssiMechCorrLim.LongName = 'Temperature Estimation Assist Mechanism Correction Limit';
TEstimnAssiMechCorrLim.Description = [...
  'Limit for the Assist Mechanismcorrection variable'];
TEstimnAssiMechCorrLim.DocUnits = 'DegCgrd';
TEstimnAssiMechCorrLim.EngDT = dt.float32;
TEstimnAssiMechCorrLim.EngVal = 60;
TEstimnAssiMechCorrLim.EngMin = -70;
TEstimnAssiMechCorrLim.EngMax = 70;
TEstimnAssiMechCorrLim.ProgrammedBy = 'Nexteer';
TEstimnAssiMechCorrLim.Cardinality = 'I';
TEstimnAssiMechCorrLim.CustomerVisible = false;
TEstimnAssiMechCorrLim.Online = false;
TEstimnAssiMechCorrLim.Impact = 'H';
TEstimnAssiMechCorrLim.TuningOwner = 'ThermMngt';
TEstimnAssiMechCorrLim.GraphLink = '';
TEstimnAssiMechCorrLim.Monotony = 'None';
TEstimnAssiMechCorrLim.MaxGrad = 998;
TEstimnAssiMechCorrLim.PortName = 'TEstimnAssiMechCorrLim';


TEstimnAssiMechDampgSca = DataDict.Calibration;
TEstimnAssiMechDampgSca.LongName = 'Temperature Estimation Assist Mechanism Damping Scale';
TEstimnAssiMechDampgSca.Description = [...
  'Delta Temperature Compensation multiplier to convert handwheel velocit' ...
  'y to units of Nm representing mechanical friction generated by damping' ...
  ' in Assist Mechanism'];
TEstimnAssiMechDampgSca.DocUnits = 'MotNwtMtrPerMotRadPerSec';
TEstimnAssiMechDampgSca.EngDT = dt.float32;
TEstimnAssiMechDampgSca.EngVal = 0.0001;
TEstimnAssiMechDampgSca.EngMin = 0;
TEstimnAssiMechDampgSca.EngMax = 1;
TEstimnAssiMechDampgSca.ProgrammedBy = 'Nexteer';
TEstimnAssiMechDampgSca.Cardinality = 'I';
TEstimnAssiMechDampgSca.CustomerVisible = false;
TEstimnAssiMechDampgSca.Online = false;
TEstimnAssiMechDampgSca.Impact = 'H';
TEstimnAssiMechDampgSca.TuningOwner = 'ThermMngt';
TEstimnAssiMechDampgSca.GraphLink = '';
TEstimnAssiMechDampgSca.Monotony = 'None';
TEstimnAssiMechDampgSca.MaxGrad = 998;
TEstimnAssiMechDampgSca.PortName = 'TEstimnAssiMechDampgSca';


TEstimnAssiMechDftT = DataDict.Calibration;
TEstimnAssiMechDftT.LongName = 'Temperature Estimation Assist Mechanism Default Temperature';
TEstimnAssiMechDftT.Description = [...
  'Default value for Assist Mechanism temperature used when a OEM serial ' ...
  'commumination message is sent to defeat '];
TEstimnAssiMechDftT.DocUnits = 'DegCgrd';
TEstimnAssiMechDftT.EngDT = dt.float32;
TEstimnAssiMechDftT.EngVal = 50;
TEstimnAssiMechDftT.EngMin = 0;
TEstimnAssiMechDftT.EngMax = 100;
TEstimnAssiMechDftT.ProgrammedBy = 'Nexteer';
TEstimnAssiMechDftT.Cardinality = 'I';
TEstimnAssiMechDftT.CustomerVisible = false;
TEstimnAssiMechDftT.Online = false;
TEstimnAssiMechDftT.Impact = 'H';
TEstimnAssiMechDftT.TuningOwner = 'ThermMngt';
TEstimnAssiMechDftT.GraphLink = '';
TEstimnAssiMechDftT.Monotony = 'None';
TEstimnAssiMechDftT.MaxGrad = 998;
TEstimnAssiMechDftT.PortName = 'TEstimnAssiMechDftT';


TEstimnAssiMechLLFilCoeffA1 = DataDict.Calibration;
TEstimnAssiMechLLFilCoeffA1.LongName = 'Temperature Estimation Assist Mechanism Lead Lag Filter Coefficent A1';
TEstimnAssiMechLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for theAs' ...
  'sist Mechanism temperature estimate'];
TEstimnAssiMechLLFilCoeffA1.DocUnits = 'Uls';
TEstimnAssiMechLLFilCoeffA1.EngDT = dt.float32;
TEstimnAssiMechLLFilCoeffA1.EngVal = 0.99996858;
TEstimnAssiMechLLFilCoeffA1.EngMin = -150;
TEstimnAssiMechLLFilCoeffA1.EngMax = 150;
TEstimnAssiMechLLFilCoeffA1.ProgrammedBy = 'Nexteer';
TEstimnAssiMechLLFilCoeffA1.Cardinality = 'I';
TEstimnAssiMechLLFilCoeffA1.CustomerVisible = false;
TEstimnAssiMechLLFilCoeffA1.Online = false;
TEstimnAssiMechLLFilCoeffA1.Impact = 'H';
TEstimnAssiMechLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnAssiMechLLFilCoeffA1.GraphLink = '';
TEstimnAssiMechLLFilCoeffA1.Monotony = 'None';
TEstimnAssiMechLLFilCoeffA1.MaxGrad = 998;
TEstimnAssiMechLLFilCoeffA1.PortName = 'TEstimnAssiMechLLFilCoeffA1';


TEstimnAssiMechLLFilCoeffB0 = DataDict.Calibration;
TEstimnAssiMechLLFilCoeffB0.LongName = 'Temperature Estimation Assist Mechanism Lead Lag Filter Coefficent B0';
TEstimnAssiMechLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ')for the Assist Mechanism temperature estimate'];
TEstimnAssiMechLLFilCoeffB0.DocUnits = 'Uls';
TEstimnAssiMechLLFilCoeffB0.EngDT = dt.float32;
TEstimnAssiMechLLFilCoeffB0.EngVal = 0.4761987;
TEstimnAssiMechLLFilCoeffB0.EngMin = -150;
TEstimnAssiMechLLFilCoeffB0.EngMax = 150;
TEstimnAssiMechLLFilCoeffB0.ProgrammedBy = 'Nexteer';
TEstimnAssiMechLLFilCoeffB0.Cardinality = 'I';
TEstimnAssiMechLLFilCoeffB0.CustomerVisible = false;
TEstimnAssiMechLLFilCoeffB0.Online = false;
TEstimnAssiMechLLFilCoeffB0.Impact = 'H';
TEstimnAssiMechLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnAssiMechLLFilCoeffB0.GraphLink = '';
TEstimnAssiMechLLFilCoeffB0.Monotony = 'None';
TEstimnAssiMechLLFilCoeffB0.MaxGrad = 998;
TEstimnAssiMechLLFilCoeffB0.PortName = 'TEstimnAssiMechLLFilCoeffB0';


TEstimnAssiMechLLFilCoeffB1 = DataDict.Calibration;
TEstimnAssiMechLLFilCoeffB1.LongName = 'Temperature Estimation Assist Mechanism Lead Lag Filter Coefficent B1';
TEstimnAssiMechLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ')for the Assist Mechanism temperature estimate'];
TEstimnAssiMechLLFilCoeffB1.DocUnits = 'Uls';
TEstimnAssiMechLLFilCoeffB1.EngDT = dt.float32;
TEstimnAssiMechLLFilCoeffB1.EngVal = -0.4761673;
TEstimnAssiMechLLFilCoeffB1.EngMin = -150;
TEstimnAssiMechLLFilCoeffB1.EngMax = 150;
TEstimnAssiMechLLFilCoeffB1.ProgrammedBy = 'Nexteer';
TEstimnAssiMechLLFilCoeffB1.Cardinality = 'I';
TEstimnAssiMechLLFilCoeffB1.CustomerVisible = false;
TEstimnAssiMechLLFilCoeffB1.Online = false;
TEstimnAssiMechLLFilCoeffB1.Impact = 'H';
TEstimnAssiMechLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnAssiMechLLFilCoeffB1.GraphLink = '';
TEstimnAssiMechLLFilCoeffB1.Monotony = 'None';
TEstimnAssiMechLLFilCoeffB1.MaxGrad = 998;
TEstimnAssiMechLLFilCoeffB1.PortName = 'TEstimnAssiMechLLFilCoeffB1';


TEstimnAssiMechSlew = DataDict.Calibration;
TEstimnAssiMechSlew.LongName = 'Temperature Estimation Assist Mechanism Slew';
TEstimnAssiMechSlew.Description = [...
  'Slew rate calibration to regulate the reset of the Assist Mechanism le' ...
  'ad-lag filter'];
TEstimnAssiMechSlew.DocUnits = 'DegCgrdPerSec';
TEstimnAssiMechSlew.EngDT = dt.float32;
TEstimnAssiMechSlew.EngVal = 1;
TEstimnAssiMechSlew.EngMin = 0;
TEstimnAssiMechSlew.EngMax = 100;
TEstimnAssiMechSlew.ProgrammedBy = 'Nexteer';
TEstimnAssiMechSlew.Cardinality = 'I';
TEstimnAssiMechSlew.CustomerVisible = false;
TEstimnAssiMechSlew.Online = false;
TEstimnAssiMechSlew.Impact = 'H';
TEstimnAssiMechSlew.TuningOwner = 'ThermMngt';
TEstimnAssiMechSlew.GraphLink = '';
TEstimnAssiMechSlew.Monotony = 'None';
TEstimnAssiMechSlew.MaxGrad = 998;
TEstimnAssiMechSlew.PortName = 'TEstimnAssiMechSlew';


TEstimnCorrnTAssiMech = DataDict.Calibration;
TEstimnCorrnTAssiMech.LongName = 'Temperature Estimation Correction Temperature Assist Mechanism';
TEstimnCorrnTAssiMech.Description = [...
  'Small correction temperature to reflect  expected temperature offset b' ...
  'etween temperature measurement device location and assist mechanism'];
TEstimnCorrnTAssiMech.DocUnits = 'DegCgrd';
TEstimnCorrnTAssiMech.EngDT = dt.float32;
TEstimnCorrnTAssiMech.EngVal = 0;
TEstimnCorrnTAssiMech.EngMin = -20;
TEstimnCorrnTAssiMech.EngMax = 20;
TEstimnCorrnTAssiMech.ProgrammedBy = 'Nexteer';
TEstimnCorrnTAssiMech.Cardinality = 'I';
TEstimnCorrnTAssiMech.CustomerVisible = false;
TEstimnCorrnTAssiMech.Online = false;
TEstimnCorrnTAssiMech.Impact = 'H';
TEstimnCorrnTAssiMech.TuningOwner = 'ThermMngt';
TEstimnCorrnTAssiMech.GraphLink = '';
TEstimnCorrnTAssiMech.Monotony = 'None';
TEstimnCorrnTAssiMech.MaxGrad = 998;
TEstimnCorrnTAssiMech.PortName = 'TEstimnCorrnTAssiMech';


TEstimnCorrnTCu = DataDict.Calibration;
TEstimnCorrnTCu.LongName = 'Temperature Estimation Correction Temperature Copper';
TEstimnCorrnTCu.Description = [...
  'Small correction temperature to reflect  expected temperature offset b' ...
  'etween temperature measurement device location and motor copper windin' ...
  'gs'];
TEstimnCorrnTCu.DocUnits = 'DegCgrd';
TEstimnCorrnTCu.EngDT = dt.float32;
TEstimnCorrnTCu.EngVal = 0;
TEstimnCorrnTCu.EngMin = -20;
TEstimnCorrnTCu.EngMax = 20;
TEstimnCorrnTCu.ProgrammedBy = 'Nexteer';
TEstimnCorrnTCu.Cardinality = 'I';
TEstimnCorrnTCu.CustomerVisible = false;
TEstimnCorrnTCu.Online = false;
TEstimnCorrnTCu.Impact = 'H';
TEstimnCorrnTCu.TuningOwner = 'ThermMngt';
TEstimnCorrnTCu.GraphLink = '';
TEstimnCorrnTCu.Monotony = 'None';
TEstimnCorrnTCu.MaxGrad = 998;
TEstimnCorrnTCu.PortName = 'TEstimnCorrnTCu';


TEstimnCorrnTMag = DataDict.Calibration;
TEstimnCorrnTMag.LongName = 'Temperature Estimation Correction Temperature Magnet';
TEstimnCorrnTMag.Description = [...
  'Small correction temperature to reflect  expected temperature offset b' ...
  'etween temperature measurement device location and rotor magnets'];
TEstimnCorrnTMag.DocUnits = 'DegCgrd';
TEstimnCorrnTMag.EngDT = dt.float32;
TEstimnCorrnTMag.EngVal = 0;
TEstimnCorrnTMag.EngMin = -20;
TEstimnCorrnTMag.EngMax = 20;
TEstimnCorrnTMag.ProgrammedBy = 'Nexteer';
TEstimnCorrnTMag.Cardinality = 'I';
TEstimnCorrnTMag.CustomerVisible = false;
TEstimnCorrnTMag.Online = false;
TEstimnCorrnTMag.Impact = 'H';
TEstimnCorrnTMag.TuningOwner = 'ThermMngt';
TEstimnCorrnTMag.GraphLink = '';
TEstimnCorrnTMag.Monotony = 'None';
TEstimnCorrnTMag.MaxGrad = 998;
TEstimnCorrnTMag.PortName = 'TEstimnCorrnTMag';


TEstimnCorrnTSi = DataDict.Calibration;
TEstimnCorrnTSi.LongName = 'Temperature Estimation Correction Temperature Silicon';
TEstimnCorrnTSi.Description = [...
  'Small correction temperature to reflect expected temperature offset be' ...
  'tween temperature measurement device location and power transistors'];
TEstimnCorrnTSi.DocUnits = 'DegCgrd';
TEstimnCorrnTSi.EngDT = dt.float32;
TEstimnCorrnTSi.EngVal = 0;
TEstimnCorrnTSi.EngMin = -20;
TEstimnCorrnTSi.EngMax = 20;
TEstimnCorrnTSi.ProgrammedBy = 'Nexteer';
TEstimnCorrnTSi.Cardinality = 'I';
TEstimnCorrnTSi.CustomerVisible = false;
TEstimnCorrnTSi.Online = false;
TEstimnCorrnTSi.Impact = 'H';
TEstimnCorrnTSi.TuningOwner = 'ThermMngt';
TEstimnCorrnTSi.GraphLink = '';
TEstimnCorrnTSi.Monotony = 'None';
TEstimnCorrnTSi.MaxGrad = 998;
TEstimnCorrnTSi.PortName = 'TEstimnCorrnTSi';


TEstimnCuAmbLpFilFrq = DataDict.Calibration;
TEstimnCuAmbLpFilFrq.LongName = 'Temperature Estimation Copper Ambient Low Pass Filter Frequency';
TEstimnCuAmbLpFilFrq.Description = [...
  'Calibration to set pole of Delta Temperature Compensation function low' ...
  ' pass filter for the Copper correction factor'];
TEstimnCuAmbLpFilFrq.DocUnits = 'Hz';
TEstimnCuAmbLpFilFrq.EngDT = dt.float32;
TEstimnCuAmbLpFilFrq.EngVal = 0.024;
TEstimnCuAmbLpFilFrq.EngMin = 1e-05;
TEstimnCuAmbLpFilFrq.EngMax = 0.1;
TEstimnCuAmbLpFilFrq.ProgrammedBy = 'Nexteer';
TEstimnCuAmbLpFilFrq.Cardinality = 'I';
TEstimnCuAmbLpFilFrq.CustomerVisible = false;
TEstimnCuAmbLpFilFrq.Online = false;
TEstimnCuAmbLpFilFrq.Impact = 'H';
TEstimnCuAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnCuAmbLpFilFrq.GraphLink = '';
TEstimnCuAmbLpFilFrq.Monotony = 'None';
TEstimnCuAmbLpFilFrq.MaxGrad = 998;
TEstimnCuAmbLpFilFrq.PortName = 'TEstimnCuAmbLpFilFrq';


TEstimnCuAmbMplr = DataDict.Calibration;
TEstimnCuAmbMplr.LongName = 'Temperature Estimation Copper Ambient Multiplier';
TEstimnCuAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for the motor Co' ...
  'pper windings'];
TEstimnCuAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnCuAmbMplr.EngDT = dt.float32;
TEstimnCuAmbMplr.EngVal = 0.75;
TEstimnCuAmbMplr.EngMin = -1;
TEstimnCuAmbMplr.EngMax = 1;
TEstimnCuAmbMplr.ProgrammedBy = 'Nexteer';
TEstimnCuAmbMplr.Cardinality = 'I';
TEstimnCuAmbMplr.CustomerVisible = false;
TEstimnCuAmbMplr.Online = false;
TEstimnCuAmbMplr.Impact = 'H';
TEstimnCuAmbMplr.TuningOwner = 'ThermMngt';
TEstimnCuAmbMplr.GraphLink = '';
TEstimnCuAmbMplr.Monotony = 'None';
TEstimnCuAmbMplr.MaxGrad = 998;
TEstimnCuAmbMplr.PortName = 'TEstimnCuAmbMplr';


TEstimnCuCorrnLim = DataDict.Calibration;
TEstimnCuCorrnLim.LongName = 'Temperature Estimation Copper Correction Limit';
TEstimnCuCorrnLim.Description = [...
  'Limit for the Copper correction variable'];
TEstimnCuCorrnLim.DocUnits = 'DegCgrd';
TEstimnCuCorrnLim.EngDT = dt.float32;
TEstimnCuCorrnLim.EngVal = 80;
TEstimnCuCorrnLim.EngMin = -100;
TEstimnCuCorrnLim.EngMax = 100;
TEstimnCuCorrnLim.ProgrammedBy = 'Nexteer';
TEstimnCuCorrnLim.Cardinality = 'I';
TEstimnCuCorrnLim.CustomerVisible = false;
TEstimnCuCorrnLim.Online = false;
TEstimnCuCorrnLim.Impact = 'H';
TEstimnCuCorrnLim.TuningOwner = 'ThermMngt';
TEstimnCuCorrnLim.GraphLink = '';
TEstimnCuCorrnLim.Monotony = 'None';
TEstimnCuCorrnLim.MaxGrad = 998;
TEstimnCuCorrnLim.PortName = 'TEstimnCuCorrnLim';


TEstimnCuLLFilCoeffA1 = DataDict.Calibration;
TEstimnCuLLFilCoeffA1.LongName = 'Temperature Estimation Copper Lead Lag Filter Coefficient A1';
TEstimnCuLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for Coppe' ...
  'r'];
TEstimnCuLLFilCoeffA1.DocUnits = 'Uls';
TEstimnCuLLFilCoeffA1.EngDT = dt.float32;
TEstimnCuLLFilCoeffA1.EngVal = 0.999943;
TEstimnCuLLFilCoeffA1.EngMin = -150;
TEstimnCuLLFilCoeffA1.EngMax = 150;
TEstimnCuLLFilCoeffA1.ProgrammedBy = 'Nexteer';
TEstimnCuLLFilCoeffA1.Cardinality = 'I';
TEstimnCuLLFilCoeffA1.CustomerVisible = false;
TEstimnCuLLFilCoeffA1.Online = false;
TEstimnCuLLFilCoeffA1.Impact = 'H';
TEstimnCuLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnCuLLFilCoeffA1.GraphLink = '';
TEstimnCuLLFilCoeffA1.Monotony = 'None';
TEstimnCuLLFilCoeffA1.MaxGrad = 998;
TEstimnCuLLFilCoeffA1.PortName = 'TEstimnCuLLFilCoeffA1';


TEstimnCuLLFilCoeffB0 = DataDict.Calibration;
TEstimnCuLLFilCoeffB0.LongName = 'Temperature Estimation Copper Lead Lag Filter Coefficient B0';
TEstimnCuLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Copper'];
TEstimnCuLLFilCoeffB0.DocUnits = 'Uls';
TEstimnCuLLFilCoeffB0.EngDT = dt.float32;
TEstimnCuLLFilCoeffB0.EngVal = 0.86667;
TEstimnCuLLFilCoeffB0.EngMin = -150;
TEstimnCuLLFilCoeffB0.EngMax = 150;
TEstimnCuLLFilCoeffB0.ProgrammedBy = 'Nexteer';
TEstimnCuLLFilCoeffB0.Cardinality = 'I';
TEstimnCuLLFilCoeffB0.CustomerVisible = false;
TEstimnCuLLFilCoeffB0.Online = false;
TEstimnCuLLFilCoeffB0.Impact = 'H';
TEstimnCuLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnCuLLFilCoeffB0.GraphLink = '';
TEstimnCuLLFilCoeffB0.Monotony = 'None';
TEstimnCuLLFilCoeffB0.MaxGrad = 998;
TEstimnCuLLFilCoeffB0.PortName = 'TEstimnCuLLFilCoeffB0';


TEstimnCuLLFilCoeffB1 = DataDict.Calibration;
TEstimnCuLLFilCoeffB1.LongName = 'Temperature Estimation Copper Lead Lag Filter Coefficient B1';
TEstimnCuLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Copper'];
TEstimnCuLLFilCoeffB1.DocUnits = 'Uls';
TEstimnCuLLFilCoeffB1.EngDT = dt.float32;
TEstimnCuLLFilCoeffB1.EngVal = -0.866613;
TEstimnCuLLFilCoeffB1.EngMin = -150;
TEstimnCuLLFilCoeffB1.EngMax = 150;
TEstimnCuLLFilCoeffB1.ProgrammedBy = 'Nexteer';
TEstimnCuLLFilCoeffB1.Cardinality = 'I';
TEstimnCuLLFilCoeffB1.CustomerVisible = false;
TEstimnCuLLFilCoeffB1.Online = false;
TEstimnCuLLFilCoeffB1.Impact = 'H';
TEstimnCuLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnCuLLFilCoeffB1.GraphLink = '';
TEstimnCuLLFilCoeffB1.Monotony = 'None';
TEstimnCuLLFilCoeffB1.MaxGrad = 998;
TEstimnCuLLFilCoeffB1.PortName = 'TEstimnCuLLFilCoeffB1';


TEstimnEngTSca = DataDict.Calibration;
TEstimnEngTSca.LongName = 'Temperature Estimation Engine Temperature Scale';
TEstimnEngTSca.Description = [...
  'Scale factor which scales engine temperature to estimate the temperatu' ...
  're of the Assist Mechanism housing'];
TEstimnEngTSca.DocUnits = 'Uls';
TEstimnEngTSca.EngDT = dt.float32;
TEstimnEngTSca.EngVal = 0.1;
TEstimnEngTSca.EngMin = 0;
TEstimnEngTSca.EngMax = 1;
TEstimnEngTSca.ProgrammedBy = 'Nexteer';
TEstimnEngTSca.Cardinality = 'I';
TEstimnEngTSca.CustomerVisible = false;
TEstimnEngTSca.Online = false;
TEstimnEngTSca.Impact = 'H';
TEstimnEngTSca.TuningOwner = 'ThermMngt';
TEstimnEngTSca.GraphLink = '';
TEstimnEngTSca.Monotony = 'None';
TEstimnEngTSca.MaxGrad = 998;
TEstimnEngTSca.PortName = 'TEstimnEngTSca';


TEstimnMagAmbLpFilFrq = DataDict.Calibration;
TEstimnMagAmbLpFilFrq.LongName = 'Temperature Estimation Magnet Ambient Low Pass Filter Frequency';
TEstimnMagAmbLpFilFrq.Description = [...
  'Calibration to set pole of Delta Temperature Compensation function low' ...
  ' pass filter for the Magnet correction factor'];
TEstimnMagAmbLpFilFrq.DocUnits = 'Hz';
TEstimnMagAmbLpFilFrq.EngDT = dt.float32;
TEstimnMagAmbLpFilFrq.EngVal = 0.024;
TEstimnMagAmbLpFilFrq.EngMin = 1e-05;
TEstimnMagAmbLpFilFrq.EngMax = 0.1;
TEstimnMagAmbLpFilFrq.ProgrammedBy = 'Nexteer';
TEstimnMagAmbLpFilFrq.Cardinality = 'I';
TEstimnMagAmbLpFilFrq.CustomerVisible = false;
TEstimnMagAmbLpFilFrq.Online = false;
TEstimnMagAmbLpFilFrq.Impact = 'H';
TEstimnMagAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnMagAmbLpFilFrq.GraphLink = '';
TEstimnMagAmbLpFilFrq.Monotony = 'None';
TEstimnMagAmbLpFilFrq.MaxGrad = 998;
TEstimnMagAmbLpFilFrq.PortName = 'TEstimnMagAmbLpFilFrq';


TEstimnMagAmbMplr = DataDict.Calibration;
TEstimnMagAmbMplr.LongName = 'Temperature Estimation Magnet Ambient Multiplier';
TEstimnMagAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for the rotor ma' ...
  'gnets'];
TEstimnMagAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnMagAmbMplr.EngDT = dt.float32;
TEstimnMagAmbMplr.EngVal = 0.01;
TEstimnMagAmbMplr.EngMin = -1;
TEstimnMagAmbMplr.EngMax = 1;
TEstimnMagAmbMplr.ProgrammedBy = 'Nexteer';
TEstimnMagAmbMplr.Cardinality = 'R';
TEstimnMagAmbMplr.CustomerVisible = false;
TEstimnMagAmbMplr.Online = false;
TEstimnMagAmbMplr.Impact = 'H';
TEstimnMagAmbMplr.TuningOwner = 'ThermMngt';
TEstimnMagAmbMplr.GraphLink = '';
TEstimnMagAmbMplr.Monotony = 'None';
TEstimnMagAmbMplr.MaxGrad = 998;
TEstimnMagAmbMplr.PortName = 'TEstimnMagAmbMplr';


TEstimnMagCorrnLim = DataDict.Calibration;
TEstimnMagCorrnLim.LongName = 'Temperature Estimation Magnet Correction Limit';
TEstimnMagCorrnLim.Description = [...
  'Limit for the Magnet correction variable'];
TEstimnMagCorrnLim.DocUnits = 'DegCgrd';
TEstimnMagCorrnLim.EngDT = dt.float32;
TEstimnMagCorrnLim.EngVal = 60;
TEstimnMagCorrnLim.EngMin = -100;
TEstimnMagCorrnLim.EngMax = 100;
TEstimnMagCorrnLim.ProgrammedBy = 'Nexteer';
TEstimnMagCorrnLim.Cardinality = 'I';
TEstimnMagCorrnLim.CustomerVisible = false;
TEstimnMagCorrnLim.Online = false;
TEstimnMagCorrnLim.Impact = 'H';
TEstimnMagCorrnLim.TuningOwner = 'ThermMngt';
TEstimnMagCorrnLim.GraphLink = '';
TEstimnMagCorrnLim.Monotony = 'None';
TEstimnMagCorrnLim.MaxGrad = 998;
TEstimnMagCorrnLim.PortName = 'TEstimnMagCorrnLim';


TEstimnMagLLFilCoeffA1 = DataDict.Calibration;
TEstimnMagLLFilCoeffA1.LongName = 'Temperature Estimation Magnet Lead Lag Filter Coefficient A1';
TEstimnMagLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for Magne' ...
  't'];
TEstimnMagLLFilCoeffA1.DocUnits = 'Uls';
TEstimnMagLLFilCoeffA1.EngDT = dt.float32;
TEstimnMagLLFilCoeffA1.EngVal = 0.999962;
TEstimnMagLLFilCoeffA1.EngMin = -150;
TEstimnMagLLFilCoeffA1.EngMax = 150;
TEstimnMagLLFilCoeffA1.ProgrammedBy = 'Nexteer';
TEstimnMagLLFilCoeffA1.Cardinality = 'I';
TEstimnMagLLFilCoeffA1.CustomerVisible = false;
TEstimnMagLLFilCoeffA1.Online = false;
TEstimnMagLLFilCoeffA1.Impact = 'H';
TEstimnMagLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnMagLLFilCoeffA1.GraphLink = '';
TEstimnMagLLFilCoeffA1.Monotony = 'None';
TEstimnMagLLFilCoeffA1.MaxGrad = 998;
TEstimnMagLLFilCoeffA1.PortName = 'TEstimnMagLLFilCoeffA1';


TEstimnMagLLFilCoeffB0 = DataDict.Calibration;
TEstimnMagLLFilCoeffB0.LongName = 'Temperature Estimation Magnet Lead Lag Filter Coefficient B0';
TEstimnMagLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Magnet'];
TEstimnMagLLFilCoeffB0.DocUnits = 'Uls';
TEstimnMagLLFilCoeffB0.EngDT = dt.float32;
TEstimnMagLLFilCoeffB0.EngVal = 0.571437;
TEstimnMagLLFilCoeffB0.EngMin = -150;
TEstimnMagLLFilCoeffB0.EngMax = 150;
TEstimnMagLLFilCoeffB0.ProgrammedBy = 'Nexteer';
TEstimnMagLLFilCoeffB0.Cardinality = 'I';
TEstimnMagLLFilCoeffB0.CustomerVisible = false;
TEstimnMagLLFilCoeffB0.Online = false;
TEstimnMagLLFilCoeffB0.Impact = 'H';
TEstimnMagLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnMagLLFilCoeffB0.GraphLink = '';
TEstimnMagLLFilCoeffB0.Monotony = 'None';
TEstimnMagLLFilCoeffB0.MaxGrad = 998;
TEstimnMagLLFilCoeffB0.PortName = 'TEstimnMagLLFilCoeffB0';


TEstimnMagLLFilCoeffB1 = DataDict.Calibration;
TEstimnMagLLFilCoeffB1.LongName = 'Temperature Estimation Magnet Lead Lag Filter Coefficient B1';
TEstimnMagLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Magnet'];
TEstimnMagLLFilCoeffB1.DocUnits = 'Uls';
TEstimnMagLLFilCoeffB1.EngDT = dt.float32;
TEstimnMagLLFilCoeffB1.EngVal = -0.571399;
TEstimnMagLLFilCoeffB1.EngMin = -150;
TEstimnMagLLFilCoeffB1.EngMax = 150;
TEstimnMagLLFilCoeffB1.ProgrammedBy = 'Nexteer';
TEstimnMagLLFilCoeffB1.Cardinality = 'I';
TEstimnMagLLFilCoeffB1.CustomerVisible = false;
TEstimnMagLLFilCoeffB1.Online = false;
TEstimnMagLLFilCoeffB1.Impact = 'H';
TEstimnMagLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnMagLLFilCoeffB1.GraphLink = '';
TEstimnMagLLFilCoeffB1.Monotony = 'None';
TEstimnMagLLFilCoeffB1.MaxGrad = 998;
TEstimnMagLLFilCoeffB1.PortName = 'TEstimnMagLLFilCoeffB1';


TEstimnSiAmbLpFilFrq = DataDict.Calibration;
TEstimnSiAmbLpFilFrq.LongName = 'Temperature Estimation Silicon Ambient Low Pass Filter Frequency';
TEstimnSiAmbLpFilFrq.Description = [...
  'Calibration to set pole of Delta Temperature Compensation Function low' ...
  ' pass filter for the Silicon correction factor'];
TEstimnSiAmbLpFilFrq.DocUnits = 'Hz';
TEstimnSiAmbLpFilFrq.EngDT = dt.float32;
TEstimnSiAmbLpFilFrq.EngVal = 0.024;
TEstimnSiAmbLpFilFrq.EngMin = 1e-05;
TEstimnSiAmbLpFilFrq.EngMax = 0.1;
TEstimnSiAmbLpFilFrq.ProgrammedBy = 'Nexteer';
TEstimnSiAmbLpFilFrq.Cardinality = 'I';
TEstimnSiAmbLpFilFrq.CustomerVisible = false;
TEstimnSiAmbLpFilFrq.Online = false;
TEstimnSiAmbLpFilFrq.Impact = 'H';
TEstimnSiAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnSiAmbLpFilFrq.GraphLink = '';
TEstimnSiAmbLpFilFrq.Monotony = 'None';
TEstimnSiAmbLpFilFrq.MaxGrad = 998;
TEstimnSiAmbLpFilFrq.PortName = 'TEstimnSiAmbLpFilFrq';


TEstimnSiAmbMplr = DataDict.Calibration;
TEstimnSiAmbMplr.LongName = 'Temperature Estimation Silicon Ambient Multiplier';
TEstimnSiAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for Silicon'];
TEstimnSiAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnSiAmbMplr.EngDT = dt.float32;
TEstimnSiAmbMplr.EngVal = 0;
TEstimnSiAmbMplr.EngMin = -1;
TEstimnSiAmbMplr.EngMax = 1;
TEstimnSiAmbMplr.ProgrammedBy = 'Nexteer';
TEstimnSiAmbMplr.Cardinality = 'I';
TEstimnSiAmbMplr.CustomerVisible = false;
TEstimnSiAmbMplr.Online = false;
TEstimnSiAmbMplr.Impact = 'H';
TEstimnSiAmbMplr.TuningOwner = 'ThermMngt';
TEstimnSiAmbMplr.GraphLink = '';
TEstimnSiAmbMplr.Monotony = 'None';
TEstimnSiAmbMplr.MaxGrad = 998;
TEstimnSiAmbMplr.PortName = 'TEstimnSiAmbMplr';


TEstimnSiCorrnLim = DataDict.Calibration;
TEstimnSiCorrnLim.LongName = 'Temperature Estimation Silicon Correction Limit';
TEstimnSiCorrnLim.Description = [...
  'Limit for the Silicon correction variable'];
TEstimnSiCorrnLim.DocUnits = 'DegCgrd';
TEstimnSiCorrnLim.EngDT = dt.float32;
TEstimnSiCorrnLim.EngVal = 60;
TEstimnSiCorrnLim.EngMin = -100;
TEstimnSiCorrnLim.EngMax = 100;
TEstimnSiCorrnLim.ProgrammedBy = 'Nexteer';
TEstimnSiCorrnLim.Cardinality = 'I';
TEstimnSiCorrnLim.CustomerVisible = false;
TEstimnSiCorrnLim.Online = false;
TEstimnSiCorrnLim.Impact = 'H';
TEstimnSiCorrnLim.TuningOwner = 'ThermMngt';
TEstimnSiCorrnLim.GraphLink = '';
TEstimnSiCorrnLim.Monotony = 'None';
TEstimnSiCorrnLim.MaxGrad = 998;
TEstimnSiCorrnLim.PortName = 'TEstimnSiCorrnLim';


TEstimnSiLLFilCoeffA1 = DataDict.Calibration;
TEstimnSiLLFilCoeffA1.LongName = 'Temperature Estimation Silicon Lead Lag Filter Coefficient A1';
TEstimnSiLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for Silic' ...
  'on'];
TEstimnSiLLFilCoeffA1.DocUnits = 'Uls';
TEstimnSiLLFilCoeffA1.EngDT = dt.float32;
TEstimnSiLLFilCoeffA1.EngVal = 0.999889;
TEstimnSiLLFilCoeffA1.EngMin = -150;
TEstimnSiLLFilCoeffA1.EngMax = 150;
TEstimnSiLLFilCoeffA1.ProgrammedBy = 'Nexteer';
TEstimnSiLLFilCoeffA1.Cardinality = 'I';
TEstimnSiLLFilCoeffA1.CustomerVisible = false;
TEstimnSiLLFilCoeffA1.Online = false;
TEstimnSiLLFilCoeffA1.Impact = 'H';
TEstimnSiLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnSiLLFilCoeffA1.GraphLink = '';
TEstimnSiLLFilCoeffA1.Monotony = 'None';
TEstimnSiLLFilCoeffA1.MaxGrad = 998;
TEstimnSiLLFilCoeffA1.PortName = 'TEstimnSiLLFilCoeffA1';


TEstimnSiLLFilCoeffB0 = DataDict.Calibration;
TEstimnSiLLFilCoeffB0.LongName = 'Temperature Estimation Silicon Lead Lag Filter Coefficient B0';
TEstimnSiLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Silicon.'];
TEstimnSiLLFilCoeffB0.DocUnits = 'Uls';
TEstimnSiLLFilCoeffB0.EngDT = dt.float32;
TEstimnSiLLFilCoeffB0.EngVal = 1.68568;
TEstimnSiLLFilCoeffB0.EngMin = -150;
TEstimnSiLLFilCoeffB0.EngMax = 150;
TEstimnSiLLFilCoeffB0.ProgrammedBy = 'Nexteer';
TEstimnSiLLFilCoeffB0.Cardinality = 'I';
TEstimnSiLLFilCoeffB0.CustomerVisible = false;
TEstimnSiLLFilCoeffB0.Online = false;
TEstimnSiLLFilCoeffB0.Impact = 'H';
TEstimnSiLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnSiLLFilCoeffB0.GraphLink = '';
TEstimnSiLLFilCoeffB0.Monotony = 'None';
TEstimnSiLLFilCoeffB0.MaxGrad = 998;
TEstimnSiLLFilCoeffB0.PortName = 'TEstimnSiLLFilCoeffB0';


TEstimnSiLLFilCoeffB1 = DataDict.Calibration;
TEstimnSiLLFilCoeffB1.LongName = 'Temperature Estimation Silicon Lead Lag Filter Coefficient B1';
TEstimnSiLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Silicon'];
TEstimnSiLLFilCoeffB1.DocUnits = 'Uls';
TEstimnSiLLFilCoeffB1.EngDT = dt.float32;
TEstimnSiLLFilCoeffB1.EngVal = -1.68556;
TEstimnSiLLFilCoeffB1.EngMin = -150;
TEstimnSiLLFilCoeffB1.EngMax = 150;
TEstimnSiLLFilCoeffB1.ProgrammedBy = 'Nexteer';
TEstimnSiLLFilCoeffB1.Cardinality = 'I';
TEstimnSiLLFilCoeffB1.CustomerVisible = false;
TEstimnSiLLFilCoeffB1.Online = false;
TEstimnSiLLFilCoeffB1.Impact = 'H';
TEstimnSiLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnSiLLFilCoeffB1.GraphLink = '';
TEstimnSiLLFilCoeffB1.Monotony = 'None';
TEstimnSiLLFilCoeffB1.MaxGrad = 998;
TEstimnSiLLFilCoeffB1.PortName = 'TEstimnSiLLFilCoeffB1';


TEstimnWghtAvrgTDi = DataDict.Calibration;
TEstimnWghtAvrgTDi.LongName = 'Temperature Estimation Weighted Average Temperature Disable';
TEstimnWghtAvrgTDi.Description = [...
  'Calibration to disable the use of Weighted Average Temperature for cal' ...
  'culating the Assist Mechanism lead-lag filter output'];
TEstimnWghtAvrgTDi.DocUnits = 'Cnt';
TEstimnWghtAvrgTDi.EngDT = dt.lgc;
TEstimnWghtAvrgTDi.EngVal = 0;
TEstimnWghtAvrgTDi.EngMin = 0;
TEstimnWghtAvrgTDi.EngMax = 1;
TEstimnWghtAvrgTDi.ProgrammedBy = 'Nexteer';
TEstimnWghtAvrgTDi.Cardinality = 'I';
TEstimnWghtAvrgTDi.CustomerVisible = false;
TEstimnWghtAvrgTDi.Online = false;
TEstimnWghtAvrgTDi.Impact = 'H';
TEstimnWghtAvrgTDi.TuningOwner = 'ThermMngt';
TEstimnWghtAvrgTDi.GraphLink = '';
TEstimnWghtAvrgTDi.Monotony = 'None';
TEstimnWghtAvrgTDi.MaxGrad = 998;
TEstimnWghtAvrgTDi.PortName = 'TEstimnWghtAvrgTDi';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dTEstimnAmbPwr = DataDict.Display;
dTEstimnAmbPwr.LongName = 'Temperature Estimation Ambient Power';
dTEstimnAmbPwr.Description = 'Display variable for Ambient Power';
dTEstimnAmbPwr.DocUnits = 'WattPerAmprSqd';
dTEstimnAmbPwr.EngDT = dt.float32;
dTEstimnAmbPwr.EngMin = 0;
dTEstimnAmbPwr.EngMax = 62500;
dTEstimnAmbPwr.InitRowCol = [1  1];


dTEstimnAssiMechCorrn = DataDict.Display;
dTEstimnAssiMechCorrn.LongName = 'Temperature Estimation Assist Mechanical Correction';
dTEstimnAssiMechCorrn.Description = [...
  'Display variable for Assist Mechanical Correlation'];
dTEstimnAssiMechCorrn.DocUnits = 'DegCgrd';
dTEstimnAssiMechCorrn.EngDT = dt.float32;
dTEstimnAssiMechCorrn.EngMin = -70;
dTEstimnAssiMechCorrn.EngMax = 70;
dTEstimnAssiMechCorrn.InitRowCol = [1  1];


dTEstimnAssiMechDampgSca = DataDict.Display;
dTEstimnAssiMechDampgSca.LongName = 'Temperature Estimation Estimated Mechanism';
dTEstimnAssiMechDampgSca.Description = [...
  'Display variable for Assist Mechanism Damping Scale Multiplier'];
dTEstimnAssiMechDampgSca.DocUnits = 'MotNwtMtrPerMotRadPerSec';
dTEstimnAssiMechDampgSca.EngDT = dt.float32;
dTEstimnAssiMechDampgSca.EngMin = 0;
dTEstimnAssiMechDampgSca.EngMax = 1764;
dTEstimnAssiMechDampgSca.InitRowCol = [1  1];


dTEstimnAssiMechFil = DataDict.Display;
dTEstimnAssiMechFil.LongName = 'Temperature Estimation Assist Mechanism Filter';
dTEstimnAssiMechFil.Description = [...
  'Display variable for Assist Mechanism Filter'];
dTEstimnAssiMechFil.DocUnits = 'DegCgrd';
dTEstimnAssiMechFil.EngDT = dt.float32;
dTEstimnAssiMechFil.EngMin = -14496070;
dTEstimnAssiMechFil.EngMax = 14496070;
dTEstimnAssiMechFil.InitRowCol = [1  1];


dTEstimnAssiMechLLFil = DataDict.Display;
dTEstimnAssiMechLLFil.LongName = 'Temperature Estimation Assist Mechanism Lag Filter';
dTEstimnAssiMechLLFil.Description = [...
  'Display variable for Assist Mechanism Lead Lag Filter'];
dTEstimnAssiMechLLFil.DocUnits = 'DegCgrd';
dTEstimnAssiMechLLFil.EngDT = dt.float32;
dTEstimnAssiMechLLFil.EngMin = -18000;
dTEstimnAssiMechLLFil.EngMax = 48000;
dTEstimnAssiMechLLFil.InitRowCol = [1  1];


dTEstimnCuCorrn = DataDict.Display;
dTEstimnCuCorrn.LongName = 'Temperature Estimation Copper Correction';
dTEstimnCuCorrn.Description = [...
  'Display variable for Copper Correlation'];
dTEstimnCuCorrn.DocUnits = 'DegCgrd';
dTEstimnCuCorrn.EngDT = dt.float32;
dTEstimnCuCorrn.EngMin = -100;
dTEstimnCuCorrn.EngMax = 100;
dTEstimnCuCorrn.InitRowCol = [1  1];


dTEstimnCuLLFil = DataDict.Display;
dTEstimnCuLLFil.LongName = 'Temperature Estimation Copper Lead Lag Filter';
dTEstimnCuLLFil.Description = [...
  'Display variable for Copper Lead Lag Filter'];
dTEstimnCuLLFil.DocUnits = 'DegCgrd';
dTEstimnCuLLFil.EngDT = dt.float32;
dTEstimnCuLLFil.EngMin = -10500;
dTEstimnCuLLFil.EngMax = 25500;
dTEstimnCuLLFil.InitRowCol = [1  1];


dTEstimnMagCorrn = DataDict.Display;
dTEstimnMagCorrn.LongName = 'Temperature Estimation Magnet Correlation';
dTEstimnMagCorrn.Description = [...
  'Display variable for Magnet Correlation'];
dTEstimnMagCorrn.DocUnits = 'DegCgrd';
dTEstimnMagCorrn.EngDT = dt.float32;
dTEstimnMagCorrn.EngMin = -100;
dTEstimnMagCorrn.EngMax = 100;
dTEstimnMagCorrn.InitRowCol = [1  1];


dTEstimnMagLLFil = DataDict.Display;
dTEstimnMagLLFil.LongName = 'Temperature Estimation Magnet Lead Lag Filter';
dTEstimnMagLLFil.Description = [...
  'Display variable for Magnet Lead Lag Filter'];
dTEstimnMagLLFil.DocUnits = 'DegCgrd';
dTEstimnMagLLFil.EngDT = dt.float32;
dTEstimnMagLLFil.EngMin = -10500;
dTEstimnMagLLFil.EngMax = 25500;
dTEstimnMagLLFil.InitRowCol = [1  1];


dTEstimnScadAmbT = DataDict.Display;
dTEstimnScadAmbT.LongName = 'Temperature Estimation Scaled Ambient Temperature';
dTEstimnScadAmbT.Description = [...
  'Display variable for Scaled Ambient Temperature'];
dTEstimnScadAmbT.DocUnits = 'DegCgrd';
dTEstimnScadAmbT.EngDT = dt.float32;
dTEstimnScadAmbT.EngMin = -50;
dTEstimnScadAmbT.EngMax = 150;
dTEstimnScadAmbT.InitRowCol = [1  1];


dTEstimnScadEngT = DataDict.Display;
dTEstimnScadEngT.LongName = 'Temperature Estimation Scaled Engine Temperature';
dTEstimnScadEngT.Description = [...
  'Display variable for Scaled Engine Temperature'];
dTEstimnScadEngT.DocUnits = 'DegCgrd';
dTEstimnScadEngT.EngDT = dt.float32;
dTEstimnScadEngT.EngMin = -50;
dTEstimnScadEngT.EngMax = 150;
dTEstimnScadEngT.InitRowCol = [1  1];


dTEstimnSiCorrn = DataDict.Display;
dTEstimnSiCorrn.LongName = 'Temperature Estimation Silicon Correlation';
dTEstimnSiCorrn.Description = [...
  'Display variable for Silicon Correlation'];
dTEstimnSiCorrn.DocUnits = 'DegCgrd';
dTEstimnSiCorrn.EngDT = dt.float32;
dTEstimnSiCorrn.EngMin = -100;
dTEstimnSiCorrn.EngMax = 100;
dTEstimnSiCorrn.InitRowCol = [1  1];


dTEstimnSiLLFil = DataDict.Display;
dTEstimnSiLLFil.LongName = 'Temperature Estimation Silicon Lead Lag Filter';
dTEstimnSiLLFil.Description = [...
  'Display variable for Silicon Lead Lag Filter'];
dTEstimnSiLLFil.DocUnits = 'DegCgrd';
dTEstimnSiLLFil.EngDT = dt.float32;
dTEstimnSiLLFil.EngMin = -10500;
dTEstimnSiLLFil.EngMax = 25500;
dTEstimnSiLLFil.InitRowCol = [1  1];


dTEstimnWghtAvrgT = DataDict.Display;
dTEstimnWghtAvrgT.LongName = 'Temperature Estimation Weighted Average Temperature';
dTEstimnWghtAvrgT.Description = [...
  'Display variable for Weighted Average Temperature '];
dTEstimnWghtAvrgT.DocUnits = 'DegCgrd';
dTEstimnWghtAvrgT.EngDT = dt.float32;
dTEstimnWghtAvrgT.EngMin = -100;
dTEstimnWghtAvrgT.EngMax = 300;
dTEstimnWghtAvrgT.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AmbTVldPrev = DataDict.PIM;
AmbTVldPrev.LongName = 'Ambient Temperature Valid Previous';
AmbTVldPrev.Description = [...
  'Previous value of Ambient Temperature Valid'];
AmbTVldPrev.DocUnits = 'Cnt';
AmbTVldPrev.EngDT = dt.lgc;
AmbTVldPrev.EngMin = 0;
AmbTVldPrev.EngMax = 1;
AmbTVldPrev.InitRowCol = [1  1];


AssiMechFilLp = DataDict.PIM;
AssiMechFilLp.LongName = 'Assist Mechanism Filter LowPass';
AssiMechFilLp.Description = [...
  'State variable for Assist Mechanism Temperature Lowpass filter'];
AssiMechFilLp.DocUnits = 'Uls';
AssiMechFilLp.EngDT = struct.FilLpRec1;
AssiMechFilLp.EngMin = [];
AssiMechFilLp.EngMax = [];
AssiMechFilLp.InitRowCol = [1  1];


AssiMechTEstimnPrev = DataDict.PIM;
AssiMechTEstimnPrev.LongName = 'Assist Mechanism Temperature Estimation Previous';
AssiMechTEstimnPrev.Description = [...
  'Previous value of Assist Mechanism Temperature Estimation'];
AssiMechTEstimnPrev.DocUnits = 'DegCgrd';
AssiMechTEstimnPrev.EngDT = dt.float32;
AssiMechTEstimnPrev.EngMin = -14496000;
AssiMechTEstimnPrev.EngMax = 14496000;
AssiMechTEstimnPrev.InitRowCol = [1  1];


AssiMechTInitEna = DataDict.PIM;
AssiMechTInitEna.LongName = 'Assist Mechanism Temperature Initialization Enable';
AssiMechTInitEna.Description = [...
  'Enables Assist Mechanism Temperature Initialization'];
AssiMechTInitEna.DocUnits = 'Cnt';
AssiMechTInitEna.EngDT = dt.lgc;
AssiMechTInitEna.EngMin = 0;
AssiMechTInitEna.EngMax = 1;
AssiMechTInitEna.InitRowCol = [1  1];


AssiMechTSlewLimPrev = DataDict.PIM;
AssiMechTSlewLimPrev.LongName = 'Assist Mechanism Temperature Slew Limit Previous';
AssiMechTSlewLimPrev.Description = [...
  'Previous value of Assist Mechanism Temperature after slew limit'];
AssiMechTSlewLimPrev.DocUnits = 'DegCgrd';
AssiMechTSlewLimPrev.EngDT = dt.float32;
AssiMechTSlewLimPrev.EngMin = -14496070;
AssiMechTSlewLimPrev.EngMax = 14496070;
AssiMechTSlewLimPrev.InitRowCol = [1  1];


CuFilLp = DataDict.PIM;
CuFilLp.LongName = 'Copper Filter Lowpass';
CuFilLp.Description = [...
  'State variable for copper Temperature Lowpass filter'];
CuFilLp.DocUnits = 'Uls';
CuFilLp.EngDT = struct.FilLpRec1;
CuFilLp.EngMin = [];
CuFilLp.EngMax = [];
CuFilLp.InitRowCol = [1  1];


CuTEstimnPrev = DataDict.PIM;
CuTEstimnPrev.LongName = 'Copper Temperature Estimation Previous';
CuTEstimnPrev.Description = [...
  'Previous value of Copper Temperature Estimation'];
CuTEstimnPrev.DocUnits = 'DegCgrd';
CuTEstimnPrev.EngDT = dt.float32;
CuTEstimnPrev.EngMin = -7701000;
CuTEstimnPrev.EngMax = 7701000;
CuTEstimnPrev.InitRowCol = [1  1];


EngOilTVldPrev = DataDict.PIM;
EngOilTVldPrev.LongName = 'Engine Oil Temperature Valid Previous';
EngOilTVldPrev.Description = [...
  'Previous value of Engine Oil Temperature Valid'];
EngOilTVldPrev.DocUnits = 'Cnt';
EngOilTVldPrev.EngDT = dt.lgc;
EngOilTVldPrev.EngMin = 0;
EngOilTVldPrev.EngMax = 1;
EngOilTVldPrev.InitRowCol = [1  1];


MagFilLp = DataDict.PIM;
MagFilLp.LongName = 'Magnet Filter Lowpass';
MagFilLp.Description = [...
  'State variable for Magnet Temperature Lowpass filter'];
MagFilLp.DocUnits = 'Uls';
MagFilLp.EngDT = struct.FilLpRec1;
MagFilLp.EngMin = [];
MagFilLp.EngMax = [];
MagFilLp.InitRowCol = [1  1];


MagTEstimnPrev = DataDict.PIM;
MagTEstimnPrev.LongName = 'Magnet Temperature Estimation Previous';
MagTEstimnPrev.Description = [...
  'Previous value of Magnet Temperature Estimation'];
MagTEstimnPrev.DocUnits = 'DegCgrd';
MagTEstimnPrev.EngDT = dt.float32;
MagTEstimnPrev.EngMin = -7701000;
MagTEstimnPrev.EngMax = 7701000;
MagTEstimnPrev.InitRowCol = [1  1];


SiFilLp = DataDict.PIM;
SiFilLp.LongName = 'Silicon Filter Lowpass';
SiFilLp.Description = [...
  'State variable for Silicon Temperature Lowpass filter'];
SiFilLp.DocUnits = 'Uls';
SiFilLp.EngDT = struct.FilLpRec1;
SiFilLp.EngMin = [];
SiFilLp.EngMax = [];
SiFilLp.InitRowCol = [1  1];


SiTEstimnPrev = DataDict.PIM;
SiTEstimnPrev.LongName = 'Silicon Temperature Estimation Previous';
SiTEstimnPrev.Description = [...
  'Previous value of Silicon Temperature Estimation'];
SiTEstimnPrev.DocUnits = 'DegCgrd';
SiTEstimnPrev.EngDT = dt.float32;
SiTEstimnPrev.EngMin = -7701000;
SiTEstimnPrev.EngMax = 7701000;
SiTEstimnPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_100MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_100MILLISEC_SEC_F32.LongName = '100 Milliseconds';
ARCHGLBPRM_100MILLISEC_SEC_F32.Description = '100ms periodic loop time step';
ARCHGLBPRM_100MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_100MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_100MILLISEC_SEC_F32.EngVal = 0.1;
ARCHGLBPRM_100MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_100MILLISEC_SEC_F32.Define = 'Global';

ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';

TESTIMNASSIMECHTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Assist Mechanism Temperature High Limit';
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.EngVal = 150;
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.Header = 'None';
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNASSIMECHTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Assist Mechanism Temperature Low Limit';
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.Header = 'None';
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.Define = 'Local';


TESTIMNFETTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNFETTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Silicon Temperature High Limit';
TESTIMNFETTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNFETTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNFETTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNFETTHILIM_DEGCGRD_F32.EngVal = 200;
TESTIMNFETTHILIM_DEGCGRD_F32.Header = 'None';
TESTIMNFETTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNFETTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNFETTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Silicon Temperature Low Limit';
TESTIMNFETTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNFETTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNFETTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNFETTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNFETTLOLIM_DEGCGRD_F32.Header = 'None';
TESTIMNFETTLOLIM_DEGCGRD_F32.Define = 'Local';


TESTIMNMAGTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNMAGTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Magnet Temperature High Limit';
TESTIMNMAGTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNMAGTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNMAGTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNMAGTHILIM_DEGCGRD_F32.EngVal = 150;
TESTIMNMAGTHILIM_DEGCGRD_F32.Header = 'None';
TESTIMNMAGTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNMAGTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNMAGTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Magnet Temperature Low Limit';
TESTIMNMAGTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNMAGTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNMAGTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNMAGTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNMAGTLOLIM_DEGCGRD_F32.Header = 'None';
TESTIMNMAGTLOLIM_DEGCGRD_F32.Define = 'Local';


TESTIMNWIDGTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNWIDGTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Winding Temperature High Limit';
TESTIMNWIDGTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNWIDGTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNWIDGTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNWIDGTHILIM_DEGCGRD_F32.EngVal = 300;
TESTIMNWIDGTHILIM_DEGCGRD_F32.Header = 'None';
TESTIMNWIDGTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNWIDGTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNWIDGTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Winding Temperature Low Limit';
TESTIMNWIDGTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNWIDGTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNWIDGTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNWIDGTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNWIDGTLOLIM_DEGCGRD_F32.Header = 'None';
TESTIMNWIDGTLOLIM_DEGCGRD_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
