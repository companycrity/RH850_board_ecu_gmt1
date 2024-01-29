%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 17-May-2016 09:42:33       %
%                                  Created with tool release: 2.39.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

SF043A = DataDict.FDD;
SF043A.Version = '1.1.x';
SF043A.LongName = 'Torque Oscillation';
SF043A.ShoName  = 'TqOscn';
SF043A.DesignASIL = 'D';
SF043A.Description = [...
  'This function lets motor generate a sinusoidal command for a given fre' ...
  'quency and fixed amplitude. This can be used to alert driver etc. Freq' ...
  'uency can only assume certain values and amplitude can be limited diff' ...
  'erently for each of those frequencies.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TqOscnInit1 = DataDict.Runnable;
TqOscnInit1.Context = 'Rte';
TqOscnInit1.TimeStep = 0;
TqOscnInit1.Description = [...
  'Torque Oscillation Initialization Runnable'];

TqOscnPer1 = DataDict.Runnable;
TqOscnPer1.Context = 'Rte';
TqOscnPer1.TimeStep = 0.002;
TqOscnPer1.Description = [...
  'Torque Oscillation Periodic Runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'TqOscnPer1'};
FltInj_f32.Description = 'Fault Injection Module';
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = '';
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwOscnEna = DataDict.IpSignal;
HwOscnEna.LongName = 'Handwheel Oscillation Enable';
HwOscnEna.Description = 'Handwheel Oscillation Enable';
HwOscnEna.DocUnits = 'Cnt';
HwOscnEna.EngDT = dt.lgc;
HwOscnEna.EngInit = 0;
HwOscnEna.EngMin = 0;
HwOscnEna.EngMax = 1;
HwOscnEna.ReadIn = {'TqOscnPer1'};
HwOscnEna.ReadType = 'Rte';


HwOscnFallRampRate = DataDict.IpSignal;
HwOscnFallRampRate.LongName = 'Handwheel Oscillation Falling Ramp Rate';
HwOscnFallRampRate.Description = [...
  'Handwheel Oscillation Falling Ramp Rate'];
HwOscnFallRampRate.DocUnits = 'MotNwtMtrPerSec';
HwOscnFallRampRate.EngDT = dt.float32;
HwOscnFallRampRate.EngInit = -4400;
HwOscnFallRampRate.EngMin = -4400;
HwOscnFallRampRate.EngMax = -0.1;
HwOscnFallRampRate.ReadIn = {'TqOscnPer1'};
HwOscnFallRampRate.ReadType = 'Rte';


HwOscnFrq = DataDict.IpSignal;
HwOscnFrq.LongName = 'Handwheel Oscillation Frequency';
HwOscnFrq.Description = 'Handwheel Oscillation Frequency';
HwOscnFrq.DocUnits = 'Hz';
HwOscnFrq.EngDT = dt.float32;
HwOscnFrq.EngInit = 50;
HwOscnFrq.EngMin = 10;
HwOscnFrq.EngMax = 50;
HwOscnFrq.ReadIn = {'TqOscnPer1'};
HwOscnFrq.ReadType = 'Rte';


HwOscnMotAmp = DataDict.IpSignal;
HwOscnMotAmp.LongName = 'Handwheel Oscillation Motor Amplitude';
HwOscnMotAmp.Description = [...
  'Handwheel Oscillation Motor Amplitude'];
HwOscnMotAmp.DocUnits = 'MotNwtMtr';
HwOscnMotAmp.EngDT = dt.float32;
HwOscnMotAmp.EngInit = 0;
HwOscnMotAmp.EngMin = 0;
HwOscnMotAmp.EngMax = 1.2;
HwOscnMotAmp.ReadIn = {'TqOscnPer1'};
HwOscnMotAmp.ReadType = 'Rte';


HwOscnRisngRampRate = DataDict.IpSignal;
HwOscnRisngRampRate.LongName = 'Handwheel Oscillation Rising Ramp Rate';
HwOscnRisngRampRate.Description = [...
  'Handwheel Oscillation Rising Ramp Rate'];
HwOscnRisngRampRate.DocUnits = 'MotNwtMtrPerSec';
HwOscnRisngRampRate.EngDT = dt.float32;
HwOscnRisngRampRate.EngInit = 4400;
HwOscnRisngRampRate.EngMin = 0.1;
HwOscnRisngRampRate.EngMax = 4400;
HwOscnRisngRampRate.ReadIn = {'TqOscnPer1'};
HwOscnRisngRampRate.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwOscnActv = DataDict.OpSignal;
HwOscnActv.LongName = 'Handwheel Oscillation Active';
HwOscnActv.Description = [...
  'Active signal that is TRUE when oscillation command is being produced'];
HwOscnActv.DocUnits = 'Cnt';
HwOscnActv.SwcShoName = 'TqOscn';
HwOscnActv.EngDT = dt.lgc;
HwOscnActv.EngInit = 0;
HwOscnActv.EngMin = 0;
HwOscnActv.EngMax = 1;
HwOscnActv.TestTolerance = 0;
HwOscnActv.WrittenIn = {'TqOscnPer1'};
HwOscnActv.WriteType = 'Rte';


HwOscnCmd = DataDict.OpSignal;
HwOscnCmd.LongName = 'Handwheel Oscillation Command';
HwOscnCmd.Description = 'Output motor command';
HwOscnCmd.DocUnits = 'MotNwtMtr';
HwOscnCmd.SwcShoName = 'TqOscn';
HwOscnCmd.EngDT = dt.float32;
HwOscnCmd.EngInit = 0;
HwOscnCmd.EngMin = -1.2;
HwOscnCmd.EngMax = 1.2;
HwOscnCmd.TestTolerance = 0.001;
HwOscnCmd.WrittenIn = {'TqOscnPer1'};
HwOscnCmd.WriteType = 'Rte';


HwOscnDcThdExcdd = DataDict.OpSignal;
HwOscnDcThdExcdd.LongName = 'Handwheel Oscillation DC Threshold Exceeded';
HwOscnDcThdExcdd.Description = [...
  'Flag to indicate if DC check was exceeded (logic/Boolean)'];
HwOscnDcThdExcdd.DocUnits = 'Cnt';
HwOscnDcThdExcdd.SwcShoName = 'TqOscn';
HwOscnDcThdExcdd.EngDT = dt.lgc;
HwOscnDcThdExcdd.EngInit = 0;
HwOscnDcThdExcdd.EngMin = 0;
HwOscnDcThdExcdd.EngMax = 1;
HwOscnDcThdExcdd.TestTolerance = 0;
HwOscnDcThdExcdd.WrittenIn = {'TqOscnPer1'};
HwOscnDcThdExcdd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
TqOscnAmpLimY = DataDict.Calibration;
TqOscnAmpLimY.LongName = 'Amplitude Limit Y';
TqOscnAmpLimY.Description = [...
  'Table to determine Y-axis (Oscillation Amplitude) of the lookup table ' ...
  'for amplitude limit'];
TqOscnAmpLimY.DocUnits = 'MotNwtMtr';
TqOscnAmpLimY.EngDT = dt.u5p11;
TqOscnAmpLimY.EngVal =  ...
   [0.4             0.45              0.5             0.55              0.6             0.65              0.7              0.7              0.7              0.7              0.7];
TqOscnAmpLimY.EngMin = 0;
TqOscnAmpLimY.EngMax = 1.2;
TqOscnAmpLimY.Cardinality = 'Cmn';
TqOscnAmpLimY.CustomerVisible = false;
TqOscnAmpLimY.Online = false;
TqOscnAmpLimY.Impact = 'H';
TqOscnAmpLimY.TuningOwner = 'CSE';
TqOscnAmpLimY.GraphLink = {'TqOscnFrqIn'};
TqOscnAmpLimY.Monotony = 'None';
TqOscnAmpLimY.MaxGrad = 998;
TqOscnAmpLimY.PortName = 'TqOscnAmpLimY';


TqOscnFallRampRateCal = DataDict.Calibration;
TqOscnFallRampRateCal.LongName = 'Falling Ramp Rate Calibration';
TqOscnFallRampRateCal.Description = [...
  'Falling ramp rate for amplitude of oscillation'];
TqOscnFallRampRateCal.DocUnits = 'MotNwtMtrPerSec';
TqOscnFallRampRateCal.EngDT = dt.float32;
TqOscnFallRampRateCal.EngVal = -4400;
TqOscnFallRampRateCal.EngMin = -4400;
TqOscnFallRampRateCal.EngMax = -0.1;
TqOscnFallRampRateCal.Cardinality = 'Cmn';
TqOscnFallRampRateCal.CustomerVisible = false;
TqOscnFallRampRateCal.Online = false;
TqOscnFallRampRateCal.Impact = 'H';
TqOscnFallRampRateCal.TuningOwner = 'CSE';
TqOscnFallRampRateCal.GraphLink = {''};
TqOscnFallRampRateCal.Monotony = 'None';
TqOscnFallRampRateCal.MaxGrad = 998;
TqOscnFallRampRateCal.PortName = 'TqOscnFallRampRateCal';


TqOscnFrqIn = DataDict.Calibration;
TqOscnFrqIn.LongName = 'Frequency In';
TqOscnFrqIn.Description = [...
  'Table to determine X-axis (Oscillation Frequency) for amplitude limit'];
TqOscnFrqIn.DocUnits = 'Hz';
TqOscnFrqIn.EngDT = dt.u8p8;
TqOscnFrqIn.EngVal =  ...
   [10             12.5               15             17.5               20               25               30               35               40               45               50];
TqOscnFrqIn.EngMin = 10;
TqOscnFrqIn.EngMax = 50;
TqOscnFrqIn.Cardinality = 'Cmn';
TqOscnFrqIn.CustomerVisible = false;
TqOscnFrqIn.Online = false;
TqOscnFrqIn.Impact = 'H';
TqOscnFrqIn.TuningOwner = 'CSE';
TqOscnFrqIn.GraphLink = {''};
TqOscnFrqIn.Monotony = 'Strictly_Increasing';
TqOscnFrqIn.MaxGrad = 998;
TqOscnFrqIn.PortName = 'TqOscnFrqIn';


TqOscnRisngRampRateCal = DataDict.Calibration;
TqOscnRisngRampRateCal.LongName = 'Rising Ramp Rate Calibration';
TqOscnRisngRampRateCal.Description = [...
  'Rising ramp rate for amplitude of oscillation'];
TqOscnRisngRampRateCal.DocUnits = 'MotNwtMtrPerSec';
TqOscnRisngRampRateCal.EngDT = dt.float32;
TqOscnRisngRampRateCal.EngVal = 4400;
TqOscnRisngRampRateCal.EngMin = 0.1;
TqOscnRisngRampRateCal.EngMax = 4400;
TqOscnRisngRampRateCal.Cardinality = 'Cmn';
TqOscnRisngRampRateCal.CustomerVisible = false;
TqOscnRisngRampRateCal.Online = false;
TqOscnRisngRampRateCal.Impact = 'H';
TqOscnRisngRampRateCal.TuningOwner = 'CSE';
TqOscnRisngRampRateCal.GraphLink = {''};
TqOscnRisngRampRateCal.Monotony = 'None';
TqOscnRisngRampRateCal.MaxGrad = 998;
TqOscnRisngRampRateCal.PortName = 'TqOscnRisngRampRateCal';


TqOscnUseRampRateCal = DataDict.Calibration;
TqOscnUseRampRateCal.LongName = 'Use Ramp Rate Calibration';
TqOscnUseRampRateCal.Description = [...
  'Allows choice between using ramp rate calibration vs. ramp rate input ' ...
  'signal. Value of 1 (TRUE) means calibration will be used.'];
TqOscnUseRampRateCal.DocUnits = 'Cnt';
TqOscnUseRampRateCal.EngDT = dt.lgc;
TqOscnUseRampRateCal.EngVal = 1;
TqOscnUseRampRateCal.EngMin = 0;
TqOscnUseRampRateCal.EngMax = 1;
TqOscnUseRampRateCal.Cardinality = 'Cmn';
TqOscnUseRampRateCal.CustomerVisible = false;
TqOscnUseRampRateCal.Online = false;
TqOscnUseRampRateCal.Impact = 'H';
TqOscnUseRampRateCal.TuningOwner = 'CSE';
TqOscnUseRampRateCal.GraphLink = {''};
TqOscnUseRampRateCal.Monotony = 'None';
TqOscnUseRampRateCal.MaxGrad = 999;
TqOscnUseRampRateCal.PortName = 'TqOscnUseRampRateCal';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dTqOscnNonZeroAmpFlg = DataDict.Display;
dTqOscnNonZeroAmpFlg.LongName = 'Non Zero Amplitude Flag';
dTqOscnNonZeroAmpFlg.Description = [...
  'Flag is true when amplitude is greater than zero'];
dTqOscnNonZeroAmpFlg.DocUnits = 'Cnt';
dTqOscnNonZeroAmpFlg.EngDT = dt.lgc;
dTqOscnNonZeroAmpFlg.EngMin = 0;
dTqOscnNonZeroAmpFlg.EngMax = 1;
dTqOscnNonZeroAmpFlg.InitRowCol = [1  1];


dTqOscnPreFinalCmd = DataDict.Display;
dTqOscnPreFinalCmd.LongName = 'Torque Oscillation pre Final Command';
dTqOscnPreFinalCmd.Description = [...
  'Calculated oscillation command before applying DC check'];
dTqOscnPreFinalCmd.DocUnits = 'MotNwtMtr';
dTqOscnPreFinalCmd.EngDT = dt.float32;
dTqOscnPreFinalCmd.EngMin = -1.2;
dTqOscnPreFinalCmd.EngMax = 1.2;
dTqOscnPreFinalCmd.InitRowCol = [1  1];


dTqOscnRateLimdAmp = DataDict.Display;
dTqOscnRateLimdAmp.LongName = 'Torque Oscillation Rate Limited Amplitude';
dTqOscnRateLimdAmp.Description = [...
  'Commanded amplitude after applying rate limiter'];
dTqOscnRateLimdAmp.DocUnits = 'MotNwtMtr';
dTqOscnRateLimdAmp.EngDT = dt.float32;
dTqOscnRateLimdAmp.EngMin = 0;
dTqOscnRateLimdAmp.EngMax = 1.2;
dTqOscnRateLimdAmp.InitRowCol = [1  1];


dTqOscnSinCmd = DataDict.Display;
dTqOscnSinCmd.LongName = 'Sine Command';
dTqOscnSinCmd.Description = 'Sine of phase angle.';
dTqOscnSinCmd.DocUnits = 'Uls';
dTqOscnSinCmd.EngDT = dt.float32;
dTqOscnSinCmd.EngMin = -1;
dTqOscnSinCmd.EngMax = 1;
dTqOscnSinCmd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AmpRampSt = DataDict.PIM;
AmpRampSt.LongName = 'Amplitude Ramp State';
AmpRampSt.Description = [...
  'The Amplitude Rate Limiter routine applies a slew rate to command ampl' ...
  'itude.  This is the PIM used by Rate Limiter block to perform slew.'];
AmpRampSt.DocUnits = 'MotNwtMtr';
AmpRampSt.EngDT = dt.float32;
AmpRampSt.EngMin = 0;
AmpRampSt.EngMax = 1.2;
AmpRampSt.InitRowCol = [1  1];


PreFinalCmdLpFil = DataDict.PIM;
PreFinalCmdLpFil.LongName = 'Pre Final Command Lowpass Filter';
PreFinalCmdLpFil.Description = [...
  'State variable for DC Exceed low-pass filter'];
PreFinalCmdLpFil.DocUnits = 'MotNwtMtr';
PreFinalCmdLpFil.EngDT = struct.FilLpRec1;
PreFinalCmdLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
PreFinalCmdLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
PreFinalCmdLpFil.InitRowCol = [1  1];


PrevActv = DataDict.PIM;
PrevActv.LongName = 'Previous Active';
PrevActv.Description = [...
  'Previous sample value of torque oscillation active flag'];
PrevActv.DocUnits = 'Cnt';
PrevActv.EngDT = dt.lgc;
PrevActv.EngMin = 0;
PrevActv.EngMax = 1;
PrevActv.InitRowCol = [1  1];


PrevDcThdExcdd = DataDict.PIM;
PrevDcThdExcdd.LongName = 'Previous DC Threshold Exceeded';
PrevDcThdExcdd.Description = [...
  'Previous sample value DC Threhosld Exceeded flag'];
PrevDcThdExcdd.DocUnits = 'Cnt';
PrevDcThdExcdd.EngDT = dt.lgc;
PrevDcThdExcdd.EngMin = 0;
PrevDcThdExcdd.EngMax = 1;
PrevDcThdExcdd.InitRowCol = [1  1];


PrevEna = DataDict.PIM;
PrevEna.LongName = 'Previous Enable';
PrevEna.Description = [...
  'Previous sample value Torque Oscillation Enable flag'];
PrevEna.DocUnits = 'Cnt';
PrevEna.EngDT = dt.lgc;
PrevEna.EngMin = 0;
PrevEna.EngMax = 1;
PrevEna.InitRowCol = [1  1];


PrevFallRampRate = DataDict.PIM;
PrevFallRampRate.LongName = 'Previous Falling Ramp Rate';
PrevFallRampRate.Description = [...
  'Previous sample value of falling ramp rate'];
PrevFallRampRate.DocUnits = 'MotNwtMtrPerSec';
PrevFallRampRate.EngDT = dt.float32;
PrevFallRampRate.EngMin = -4400;
PrevFallRampRate.EngMax = -0.1;
PrevFallRampRate.InitRowCol = [1  1];


PrevLimdAmp = DataDict.PIM;
PrevLimdAmp.LongName = 'Previous Limited Amplitude';
PrevLimdAmp.Description = [...
  'Previous sample value of saturation limited amplitude'];
PrevLimdAmp.DocUnits = 'MotNwtMtr';
PrevLimdAmp.EngDT = dt.float32;
PrevLimdAmp.EngMin = 0;
PrevLimdAmp.EngMax = 1.2;
PrevLimdAmp.InitRowCol = [1  1];


PrevPhaAg = DataDict.PIM;
PrevPhaAg.LongName = 'Previous Phase Angle';
PrevPhaAg.Description = [...
  'Previous sample value of phase angle'];
PrevPhaAg.DocUnits = 'MatRad';
PrevPhaAg.EngDT = dt.float32;
PrevPhaAg.EngMin = 0;
PrevPhaAg.EngMax = 6.2831853;
PrevPhaAg.InitRowCol = [1  1];


PrevPhaAgInc = DataDict.PIM;
PrevPhaAgInc.LongName = 'Previous Phase Angle Increase';
PrevPhaAgInc.Description = [...
  'Previous sample value of phase angle increase'];
PrevPhaAgInc.DocUnits = 'MatRad';
PrevPhaAgInc.EngDT = dt.float32;
PrevPhaAgInc.EngMin = 0;
PrevPhaAgInc.EngMax = 0.64;
PrevPhaAgInc.InitRowCol = [1  1];


PrevRisngRampRate = DataDict.PIM;
PrevRisngRampRate.LongName = 'Previous Rising Ramp Rate';
PrevRisngRampRate.Description = [...
  'Previous sample value of rising ramp rate'];
PrevRisngRampRate.DocUnits = 'MotNwtMtrPerSec';
PrevRisngRampRate.EngDT = dt.float32;
PrevRisngRampRate.EngMin = 0.1;
PrevRisngRampRate.EngMax = 4400;
PrevRisngRampRate.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


DCCALCNLPFILFRQ_HZ_F32 = DataDict.Constant;
DCCALCNLPFILFRQ_HZ_F32.LongName = 'DC Calculation Lowpass Filter Frequency';
DCCALCNLPFILFRQ_HZ_F32.Description = [...
  'Cutoff frequency for identifying safety-related DC content.'];
DCCALCNLPFILFRQ_HZ_F32.DocUnits = 'Hz';
DCCALCNLPFILFRQ_HZ_F32.EngDT = dt.float32;
DCCALCNLPFILFRQ_HZ_F32.EngVal = 0.32;
DCCALCNLPFILFRQ_HZ_F32.Define = 'Local';


DCTHD_MOTNWTMTR_F32 = DataDict.Constant;
DCTHD_MOTNWTMTR_F32.LongName = 'DC Threshold';
DCTHD_MOTNWTMTR_F32.Description = [...
  'Safety threshold of low-frequency content.  Compared against output of' ...
  ' DC filter.'];
DCTHD_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
DCTHD_MOTNWTMTR_F32.EngDT = dt.float32;
DCTHD_MOTNWTMTR_F32.EngVal = 0.1;
DCTHD_MOTNWTMTR_F32.Define = 'Local';


DFTFALLRAMPRATE_MOTNWTMTRPERSEC_F32 = DataDict.Constant;
DFTFALLRAMPRATE_MOTNWTMTRPERSEC_F32.LongName = 'Default Falling Ramp Rate';
DFTFALLRAMPRATE_MOTNWTMTRPERSEC_F32.Description = [...
  'Default value of falling ramp rate for PIM initialization'];
DFTFALLRAMPRATE_MOTNWTMTRPERSEC_F32.DocUnits = 'MotNwtMtrPerSec';
DFTFALLRAMPRATE_MOTNWTMTRPERSEC_F32.EngDT = dt.float32;
DFTFALLRAMPRATE_MOTNWTMTRPERSEC_F32.EngVal = -4400;
DFTFALLRAMPRATE_MOTNWTMTRPERSEC_F32.Define = 'Local';


DFTPHAAGINC_MATRAD_F32 = DataDict.Constant;
DFTPHAAGINC_MATRAD_F32.LongName = 'Default Phase Angle Increase';
DFTPHAAGINC_MATRAD_F32.Description = [...
  'Default value of phase anlge increase for PIM initialization'];
DFTPHAAGINC_MATRAD_F32.DocUnits = 'MatRad';
DFTPHAAGINC_MATRAD_F32.EngDT = dt.float32;
DFTPHAAGINC_MATRAD_F32.EngVal = 0.6283;
DFTPHAAGINC_MATRAD_F32.Define = 'Local';


DFTRISNGRAMPRATE_MOTNWTMTRPERSEC_F32 = DataDict.Constant;
DFTRISNGRAMPRATE_MOTNWTMTRPERSEC_F32.LongName = 'Default Rising Ramp Rate';
DFTRISNGRAMPRATE_MOTNWTMTRPERSEC_F32.Description = [...
  'Default value of rising ramp rate for PIM initialization'];
DFTRISNGRAMPRATE_MOTNWTMTRPERSEC_F32.DocUnits = 'MotNwtMtrPerSec';
DFTRISNGRAMPRATE_MOTNWTMTRPERSEC_F32.EngDT = dt.float32;
DFTRISNGRAMPRATE_MOTNWTMTRPERSEC_F32.EngVal = 4400;
DFTRISNGRAMPRATE_MOTNWTMTRPERSEC_F32.Define = 'Local';


FLTINJENA = DataDict.ConfigParam;
FLTINJENA.LongName = 'Fault Injection Enable';
FLTINJENA.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with fault injection active.'];
FLTINJENA.IsBuildPrm = false;
FLTINJENA.DocUnits = 'Cnt';
FLTINJENA.EngDT = dt.lgc;
FLTINJENA.EngVal = 0;
FLTINJENA.EngMin = 0;
FLTINJENA.EngMax = 1;
FLTINJENA.Define = 'Global';


FLTINJ_TQOSCN_PREFINALCMD = DataDict.Constant;
FLTINJ_TQOSCN_PREFINALCMD.LongName = 'Fault Injection Torque Oscillation pre Final Command';
FLTINJ_TQOSCN_PREFINALCMD.Description = [...
  'Internal temp signal of Torque Oscillation function.'];
FLTINJ_TQOSCN_PREFINALCMD.DocUnits = 'Cnt';
FLTINJ_TQOSCN_PREFINALCMD.EngDT = dt.u16;
FLTINJ_TQOSCN_PREFINALCMD.EngVal = 41;
FLTINJ_TQOSCN_PREFINALCMD.Define = 'Global';


MAXAMP_MOTNWTMTR_F32 = DataDict.Constant;
MAXAMP_MOTNWTMTR_F32.LongName = 'Maximum Amplitude';
MAXAMP_MOTNWTMTR_F32.Description = [...
  'Maximum allowable value of oscillation amplitude.'];
MAXAMP_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MAXAMP_MOTNWTMTR_F32.EngDT = dt.float32;
MAXAMP_MOTNWTMTR_F32.EngVal = 1.2;
MAXAMP_MOTNWTMTR_F32.Define = 'Local';


MAXFRQ_CNT_U16 = DataDict.Constant;
MAXFRQ_CNT_U16.LongName = 'Maximum Frequency';
MAXFRQ_CNT_U16.Description = [...
  'Maximum allowed value for requested frequency.  Because lookup tables ' ...
  'are u8p8, this constant is a u16 to reduce datatype casting operations' ...
  '. 12800 = 50Hz * 2^8 Cnt/Hz.'];
MAXFRQ_CNT_U16.DocUnits = 'Cnt';
MAXFRQ_CNT_U16.EngDT = dt.u16;
MAXFRQ_CNT_U16.EngVal = 12800;
MAXFRQ_CNT_U16.Define = 'Local';


MAXRAMPRATE_MOTNWTMTR_F32 = DataDict.Constant;
MAXRAMPRATE_MOTNWTMTR_F32.LongName = 'Maximum Rising Ramp Rate';
MAXRAMPRATE_MOTNWTMTR_F32.Description = [...
  'Maximum allowable value of rising ramp rate'];
MAXRAMPRATE_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MAXRAMPRATE_MOTNWTMTR_F32.EngDT = dt.float32;
MAXRAMPRATE_MOTNWTMTR_F32.EngVal = 4400;
MAXRAMPRATE_MOTNWTMTR_F32.Define = 'Local';


MINAMP_MOTNWTMTR_F32 = DataDict.Constant;
MINAMP_MOTNWTMTR_F32.LongName = 'Minimum Amplitude';
MINAMP_MOTNWTMTR_F32.Description = [...
  'Minimum allowable value of oscillation amplitude.'];
MINAMP_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MINAMP_MOTNWTMTR_F32.EngDT = dt.float32;
MINAMP_MOTNWTMTR_F32.EngVal = 0;
MINAMP_MOTNWTMTR_F32.Define = 'Local';


MINFRQ_CNT_U16 = DataDict.Constant;
MINFRQ_CNT_U16.LongName = 'Minimum Frequency';
MINFRQ_CNT_U16.Description = [...
  'Minimum allowed value for requested frequency.  Because lookup tables ' ...
  'are u8p8, this constant is a u16 to reduce datatype casting operations' ...
  '. 2560 = 10Hz * 2^8 Cnt/Hz.'];
MINFRQ_CNT_U16.DocUnits = 'Cnt';
MINFRQ_CNT_U16.EngDT = dt.u16;
MINFRQ_CNT_U16.EngVal = 2560;
MINFRQ_CNT_U16.Define = 'Local';


MINRAMPRATE_MOTNWTMTR_F32 = DataDict.Constant;
MINRAMPRATE_MOTNWTMTR_F32.LongName = 'Minimum Ramp Rate';
MINRAMPRATE_MOTNWTMTR_F32.Description = [...
  'Minimum allowable value of rising ramp rate'];
MINRAMPRATE_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MINRAMPRATE_MOTNWTMTR_F32.EngDT = dt.float32;
MINRAMPRATE_MOTNWTMTR_F32.EngVal = 0.1;
MINRAMPRATE_MOTNWTMTR_F32.Define = 'Local';


STD_ON = DataDict.Constant;
STD_ON.LongName = 'Standard On';
STD_ON.Description = [...
  'AUTOSAR value representing something that is On.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_ON.DocUnits = 'Cnt';
STD_ON.EngDT = dt.u08;
STD_ON.EngVal = 1;
STD_ON.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
