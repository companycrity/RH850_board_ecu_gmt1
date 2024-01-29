%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 03-Feb-2016 14:16:28       %
%                                  Created with tool release: 2.30.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

SF052A = DataDict.FDD;
SF052A.Version = '1.1.X';
SF052A.LongName = 'Sensor Offset Correction';
SF052A.ShoName  = 'SnsrOffsCorrn';
SF052A.DesignASIL = 'D';
SF052A.Description = [...
  'SnsrOffsCorrn corrects the Yaw rate, Hand wheel Position and Hand whee' ...
  'l Torque signals using their corresponding offset learnt values.  Each' ...
  ' ofset value is learnt by the SF051A Sensor Offset Learning.'];
SF052A.Dependencies = ...
	{'ElecGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SnsrOffsCorrnInit1 = DataDict.Runnable;
SnsrOffsCorrnInit1.Context = 'Rte';
SnsrOffsCorrnInit1.TimeStep = 0;

SnsrOffsCorrnPer1 = DataDict.Runnable;
SnsrOffsCorrnPer1.Context = 'Rte';
SnsrOffsCorrnPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'SnsrOffsCorrnPer1'};
HwAg.ReadType = 'Rte';


HwAgOffs = DataDict.IpSignal;
HwAgOffs.LongName = 'Handwheel Angle Offset';
HwAgOffs.DocUnits = 'HwDeg';
HwAgOffs.EngDT = dt.float32;
HwAgOffs.EngInit = 0;
HwAgOffs.EngMin = -30;
HwAgOffs.EngMax = 30;
HwAgOffs.ReadIn = {'SnsrOffsCorrnPer1'};
HwAgOffs.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'SnsrOffsCorrnPer1'};
HwTq.ReadType = 'Rte';


HwTqOffs = DataDict.IpSignal;
HwTqOffs.LongName = 'Handwheel Torque Offset';
HwTqOffs.DocUnits = 'HwNwtMtr';
HwTqOffs.EngDT = dt.float32;
HwTqOffs.EngInit = 0;
HwTqOffs.EngMin = -4;
HwTqOffs.EngMax = 4;
HwTqOffs.ReadIn = {'SnsrOffsCorrnPer1'};
HwTqOffs.ReadType = 'Rte';


VehYawRate = DataDict.IpSignal;
VehYawRate.LongName = 'Vehicle Yaw Rate';
VehYawRate.DocUnits = 'VehDegPerSec';
VehYawRate.EngDT = dt.float32;
VehYawRate.EngInit = 0;
VehYawRate.EngMin = -120;
VehYawRate.EngMax = 120;
VehYawRate.ReadIn = {'SnsrOffsCorrnPer1'};
VehYawRate.ReadType = 'Rte';


VehYawRateOffs = DataDict.IpSignal;
VehYawRateOffs.LongName = 'Vehicle Yaw Rate Offset';
VehYawRateOffs.DocUnits = 'VehDegPerSec';
VehYawRateOffs.EngDT = dt.float32;
VehYawRateOffs.EngInit = 0;
VehYawRateOffs.EngMin = -20;
VehYawRateOffs.EngMax = 20;
VehYawRateOffs.ReadIn = {'SnsrOffsCorrnPer1'};
VehYawRateOffs.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgCorrd = DataDict.OpSignal;
HwAgCorrd.LongName = 'Handwheel Angle Corrected';
HwAgCorrd.Description = [...
  'Handwheel angle, after subtracting learned bias and limiting the resul' ...
  't.'];
HwAgCorrd.DocUnits = 'HwDeg';
HwAgCorrd.SwcShoName = 'SnsrOffsCorrn';
HwAgCorrd.EngDT = dt.float32;
HwAgCorrd.EngInit = 0;
HwAgCorrd.EngMin = -1440;
HwAgCorrd.EngMax = 1440;
HwAgCorrd.TestTolerance = 0.05;
HwAgCorrd.WrittenIn = {'SnsrOffsCorrnPer1'};
HwAgCorrd.WriteType = 'Rte';


HwTqCorrd = DataDict.OpSignal;
HwTqCorrd.LongName = 'Handwheel Torque Corrected';
HwTqCorrd.Description = [...
  'Handwheel torque, after subtracting learned bias and limiting the resu' ...
  'lt.'];
HwTqCorrd.DocUnits = 'HwNwtMtr';
HwTqCorrd.SwcShoName = 'SnsrOffsCorrn';
HwTqCorrd.EngDT = dt.float32;
HwTqCorrd.EngInit = 0;
HwTqCorrd.EngMin = -10;
HwTqCorrd.EngMax = 10;
HwTqCorrd.TestTolerance = 0.004;
HwTqCorrd.WrittenIn = {'SnsrOffsCorrnPer1'};
HwTqCorrd.WriteType = 'Rte';


VehYawRateCorrd = DataDict.OpSignal;
VehYawRateCorrd.LongName = 'Vehicle Yaw Rate Corrected';
VehYawRateCorrd.Description = [...
  'Vehicle yaw rate, after subtracting learned bias and limiting the resu' ...
  'lt.'];
VehYawRateCorrd.DocUnits = 'VehDegPerSec';
VehYawRateCorrd.SwcShoName = 'SnsrOffsCorrn';
VehYawRateCorrd.EngDT = dt.float32;
VehYawRateCorrd.EngInit = 0;
VehYawRateCorrd.EngMin = -120;
VehYawRateCorrd.EngMax = 120;
VehYawRateCorrd.TestTolerance = 0.004;
VehYawRateCorrd.WrittenIn = {'SnsrOffsCorrnPer1'};
VehYawRateCorrd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
SnsrOffsCorrnHwAgLrndOffsLim = DataDict.Calibration;
SnsrOffsCorrnHwAgLrndOffsLim.LongName = 'Handwheel Angle Learned Offset Limit';
SnsrOffsCorrnHwAgLrndOffsLim.Description = [...
  'NOTE: The value of this calibration needs to be approved by the Safety' ...
  ' team. Correction magnitude is limited to this value.  EngMax = about ' ...
  '2 percent of HwAg signal range.'];
SnsrOffsCorrnHwAgLrndOffsLim.DocUnits = 'HwDeg';
SnsrOffsCorrnHwAgLrndOffsLim.EngDT = dt.float32;
SnsrOffsCorrnHwAgLrndOffsLim.EngVal = 5;
SnsrOffsCorrnHwAgLrndOffsLim.EngMin = 0;
SnsrOffsCorrnHwAgLrndOffsLim.EngMax = 30;
SnsrOffsCorrnHwAgLrndOffsLim.Cardinality = 'Cmn';
SnsrOffsCorrnHwAgLrndOffsLim.CustomerVisible = false;
SnsrOffsCorrnHwAgLrndOffsLim.Online = false;
SnsrOffsCorrnHwAgLrndOffsLim.Impact = 'H';
SnsrOffsCorrnHwAgLrndOffsLim.TuningOwner = 'Safety';
SnsrOffsCorrnHwAgLrndOffsLim.GraphLink = {''};
SnsrOffsCorrnHwAgLrndOffsLim.Monotony = 'None';
SnsrOffsCorrnHwAgLrndOffsLim.MaxGrad = 0;
SnsrOffsCorrnHwAgLrndOffsLim.PortName = 'SnsrOffsCorrnHwAgLrndOffsLim';


SnsrOffsCorrnHwTqLrndOffsLim = DataDict.Calibration;
SnsrOffsCorrnHwTqLrndOffsLim.LongName = 'Handwheel Torque Learned Offset Limit';
SnsrOffsCorrnHwTqLrndOffsLim.Description = [...
  'NOTE: The value of this calibration needs to be approved by the Safety' ...
  ' team. Correction magnitude is limited to this value.  EngMax = 40 per' ...
  'cent of HwTq signal range.'];
SnsrOffsCorrnHwTqLrndOffsLim.DocUnits = 'HwNwtMtr';
SnsrOffsCorrnHwTqLrndOffsLim.EngDT = dt.float32;
SnsrOffsCorrnHwTqLrndOffsLim.EngVal = 0.5;
SnsrOffsCorrnHwTqLrndOffsLim.EngMin = 0;
SnsrOffsCorrnHwTqLrndOffsLim.EngMax = 4;
SnsrOffsCorrnHwTqLrndOffsLim.Cardinality = 'Cmn';
SnsrOffsCorrnHwTqLrndOffsLim.CustomerVisible = false;
SnsrOffsCorrnHwTqLrndOffsLim.Online = false;
SnsrOffsCorrnHwTqLrndOffsLim.Impact = 'H';
SnsrOffsCorrnHwTqLrndOffsLim.TuningOwner = 'Safety';
SnsrOffsCorrnHwTqLrndOffsLim.GraphLink = {''};
SnsrOffsCorrnHwTqLrndOffsLim.Monotony = 'None';
SnsrOffsCorrnHwTqLrndOffsLim.MaxGrad = 0;
SnsrOffsCorrnHwTqLrndOffsLim.PortName = 'SnsrOffsCorrnHwTqLrndOffsLim';


SnsrOffsCorrnOffsEna = DataDict.Calibration;
SnsrOffsCorrnOffsEna.LongName = 'Offset Enable';
SnsrOffsCorrnOffsEna.Description = [...
  'When true, offset correction is applied.  When false, signals pass thr' ...
  'u unchanged.'];
SnsrOffsCorrnOffsEna.DocUnits = 'Cnt';
SnsrOffsCorrnOffsEna.EngDT = dt.lgc;
SnsrOffsCorrnOffsEna.EngVal = 0;
SnsrOffsCorrnOffsEna.EngMin = 0;
SnsrOffsCorrnOffsEna.EngMax = 1;
SnsrOffsCorrnOffsEna.Cardinality = 'Cmn';
SnsrOffsCorrnOffsEna.CustomerVisible = true;
SnsrOffsCorrnOffsEna.Online = false;
SnsrOffsCorrnOffsEna.Impact = 'H';
SnsrOffsCorrnOffsEna.TuningOwner = 'CSE';
SnsrOffsCorrnOffsEna.GraphLink = {''};
SnsrOffsCorrnOffsEna.Monotony = 'None';
SnsrOffsCorrnOffsEna.MaxGrad = 0;
SnsrOffsCorrnOffsEna.PortName = 'SnsrOffsCorrnOffsEna';


SnsrOffsCorrnVehYawRateLrndOffsLim = DataDict.Calibration;
SnsrOffsCorrnVehYawRateLrndOffsLim.LongName = 'Vehicle Yaw Rate Learned Offset Limit';
SnsrOffsCorrnVehYawRateLrndOffsLim.Description = [...
  'NOTE: The value of this calibration needs to be approved by the Safety' ...
  ' team. Correction magnitude is limited to this value.  EngMax = 16 per' ...
  'cent of VehYawRate signal range.'];
SnsrOffsCorrnVehYawRateLrndOffsLim.DocUnits = 'VehDegPerSec';
SnsrOffsCorrnVehYawRateLrndOffsLim.EngDT = dt.float32;
SnsrOffsCorrnVehYawRateLrndOffsLim.EngVal = 5;
SnsrOffsCorrnVehYawRateLrndOffsLim.EngMin = 0;
SnsrOffsCorrnVehYawRateLrndOffsLim.EngMax = 20;
SnsrOffsCorrnVehYawRateLrndOffsLim.Cardinality = 'Cmn';
SnsrOffsCorrnVehYawRateLrndOffsLim.CustomerVisible = false;
SnsrOffsCorrnVehYawRateLrndOffsLim.Online = false;
SnsrOffsCorrnVehYawRateLrndOffsLim.Impact = 'H';
SnsrOffsCorrnVehYawRateLrndOffsLim.TuningOwner = 'Safety';
SnsrOffsCorrnVehYawRateLrndOffsLim.GraphLink = {''};
SnsrOffsCorrnVehYawRateLrndOffsLim.Monotony = 'None';
SnsrOffsCorrnVehYawRateLrndOffsLim.MaxGrad = 0;
SnsrOffsCorrnVehYawRateLrndOffsLim.PortName = 'SnsrOffsCorrnVehYawRateLrndOffsLim';



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
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Lower Limit';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value min limit to -10'];
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Header = 'ElecGlbPrm.h';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Upper Limit';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value max limit to 10'];
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Header = 'ElecGlbPrm.h';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Define = 'Global';


HWAGHILIM_HWDEG_F32 = DataDict.Constant;
HWAGHILIM_HWDEG_F32.LongName = 'Handwheel Angle High Limit';
HWAGHILIM_HWDEG_F32.Description = 'Output signal upper limit.';
HWAGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGHILIM_HWDEG_F32.EngDT = dt.float32;
HWAGHILIM_HWDEG_F32.EngVal = 1440;
HWAGHILIM_HWDEG_F32.Header = '';
HWAGHILIM_HWDEG_F32.Define = 'Local';


HWAGLOLIM_HWDEG_F32 = DataDict.Constant;
HWAGLOLIM_HWDEG_F32.LongName = 'Handwheel Angle Low Limit';
HWAGLOLIM_HWDEG_F32.Description = 'Output signal lower limit.';
HWAGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGLOLIM_HWDEG_F32.EngDT = dt.float32;
HWAGLOLIM_HWDEG_F32.EngVal = -1440;
HWAGLOLIM_HWDEG_F32.Header = '';
HWAGLOLIM_HWDEG_F32.Define = 'Local';


VEHYAWRATEHILIM_VEHDEGPERSEC_F32 = DataDict.Constant;
VEHYAWRATEHILIM_VEHDEGPERSEC_F32.LongName = 'Yaw Rate High Limit';
VEHYAWRATEHILIM_VEHDEGPERSEC_F32.Description = 'Output signal upper limit.';
VEHYAWRATEHILIM_VEHDEGPERSEC_F32.DocUnits = 'VehDegPerSec';
VEHYAWRATEHILIM_VEHDEGPERSEC_F32.EngDT = dt.float32;
VEHYAWRATEHILIM_VEHDEGPERSEC_F32.EngVal = 120;
VEHYAWRATEHILIM_VEHDEGPERSEC_F32.Header = '';
VEHYAWRATEHILIM_VEHDEGPERSEC_F32.Define = 'Local';


VEHYAWRATELOLIM_VEHDEGPERSEC_F32 = DataDict.Constant;
VEHYAWRATELOLIM_VEHDEGPERSEC_F32.LongName = 'Yaw Rate Low Limit';
VEHYAWRATELOLIM_VEHDEGPERSEC_F32.Description = 'Output signal lower limit.';
VEHYAWRATELOLIM_VEHDEGPERSEC_F32.DocUnits = 'VehDegPerSec';
VEHYAWRATELOLIM_VEHDEGPERSEC_F32.EngDT = dt.float32;
VEHYAWRATELOLIM_VEHDEGPERSEC_F32.EngVal = -120;
VEHYAWRATELOLIM_VEHDEGPERSEC_F32.Header = '';
VEHYAWRATELOLIM_VEHDEGPERSEC_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
