%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 13-Jun-2016 16:24:56       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: 8 %           %
%                                  Derived by: %derived_by: xzb1db %          %
%%-----------------------------------------------------------------------%

SF013A = DataDict.FDD;
SF013A.Version = '2.0.X';
SF013A.LongName = 'Active Pull Compensation';
SF013A.ShoName  = 'PullCmpActv';
SF013A.DesignASIL = 'QM';
SF013A.Description = [...
  'The Active Pull Compensation Function corrects vehicle pull issues by ' ...
  'compensating for HW torque offsets detected by the steering system.  T' ...
  'hese torque offsets are classified as short-term and long-term, each o' ...
  'f which is compensated for independently by the algorithm.  When the c' ...
  'ompensation is applied, the need for the driver to provide a constant ' ...
  'input torque to counter these offsets is greatly reduced.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PullCmpActvInit1 = DataDict.Runnable;
PullCmpActvInit1.Context = 'Rte';
PullCmpActvInit1.TimeStep = 0;
PullCmpActvInit1.Description = [...
  'Pull Compensation Active Init Runnable'];

PullCmpActvPer1 = DataDict.Runnable;
PullCmpActvPer1.Context = 'Rte';
PullCmpActvPer1.TimeStep = 0.002;
PullCmpActvPer1.Description = [...
  'Pull Compensation Active Periodic 1 Runnable'];

PullCmpActvPer2 = DataDict.Runnable;
PullCmpActvPer2.Context = 'Rte';
PullCmpActvPer2.TimeStep = 0.1;
PullCmpActvPer2.Description = [...
  'Pull Compensation Active Periodic 2 Runnable'];

GetPullCmpPrm = DataDict.SrvRunnable;
GetPullCmpPrm.Context = 'Rte';
GetPullCmpPrm.Description = [...
  'Get Pull Compensation Active Server Runnable'];
GetPullCmpPrm.Return = DataDict.CSReturn;
GetPullCmpPrm.Return.Type = 'None';
GetPullCmpPrm.Return.Min = [];
GetPullCmpPrm.Return.Max = [];
GetPullCmpPrm.Return.TestTolerance = [];
GetPullCmpPrm.Arguments(1) = DataDict.CSArguments;
GetPullCmpPrm.Arguments(1).Name = 'PullCmpCmdTot';
GetPullCmpPrm.Arguments(1).EngDT = dt.float32;
GetPullCmpPrm.Arguments(1).EngMin = -10;
GetPullCmpPrm.Arguments(1).EngMax = 10;
GetPullCmpPrm.Arguments(1).TestTolerance = 0.0005;
GetPullCmpPrm.Arguments(1).Units = 'HwNwtMtr';
GetPullCmpPrm.Arguments(1).Direction = 'Out';
GetPullCmpPrm.Arguments(1).InitRowCol = [1  1];
GetPullCmpPrm.Arguments(1).Description = [...
  'Get Pull Compensation Active Server Runnable'];
GetPullCmpPrm.Arguments(2) = DataDict.CSArguments;
GetPullCmpPrm.Arguments(2).Name = 'PullCmpShoTerm';
GetPullCmpPrm.Arguments(2).EngDT = dt.float32;
GetPullCmpPrm.Arguments(2).EngMin = -10;
GetPullCmpPrm.Arguments(2).EngMax = 10;
GetPullCmpPrm.Arguments(2).TestTolerance = 0.0005;
GetPullCmpPrm.Arguments(2).Units = 'HwNwtMtr';
GetPullCmpPrm.Arguments(2).Direction = 'Out';
GetPullCmpPrm.Arguments(2).InitRowCol = [1  1];
GetPullCmpPrm.Arguments(2).Description = '';
GetPullCmpPrm.Arguments(3) = DataDict.CSArguments;
GetPullCmpPrm.Arguments(3).Name = 'PullCmpLongTerm';
GetPullCmpPrm.Arguments(3).EngDT = dt.float32;
GetPullCmpPrm.Arguments(3).EngMin = -10;
GetPullCmpPrm.Arguments(3).EngMax = 10;
GetPullCmpPrm.Arguments(3).TestTolerance = 0.0005;
GetPullCmpPrm.Arguments(3).Units = 'HwNwtMtr';
GetPullCmpPrm.Arguments(3).Direction = 'Out';
GetPullCmpPrm.Arguments(3).InitRowCol = [1  1];
GetPullCmpPrm.Arguments(3).Description = '';
GetPullCmpPrm.Arguments(4) = DataDict.CSArguments;
GetPullCmpPrm.Arguments(4).Name = 'LrngEnad';
GetPullCmpPrm.Arguments(4).EngDT = dt.lgc;
GetPullCmpPrm.Arguments(4).EngMin = 0;
GetPullCmpPrm.Arguments(4).EngMax = 1;
GetPullCmpPrm.Arguments(4).TestTolerance = 0;
GetPullCmpPrm.Arguments(4).Units = 'Cnt';
GetPullCmpPrm.Arguments(4).Direction = 'Out';
GetPullCmpPrm.Arguments(4).InitRowCol = [1  1];
GetPullCmpPrm.Arguments(4).Description = '';

RstPullCmp = DataDict.SrvRunnable;
RstPullCmp.Context = 'Rte';
RstPullCmp.Description = [...
  'Reset Pull Compensation Active Server Runnable'];
RstPullCmp.Return = DataDict.CSReturn;
RstPullCmp.Return.Type = 'None';
RstPullCmp.Return.Min = [];
RstPullCmp.Return.Max = [];
RstPullCmp.Return.TestTolerance = [];

SetPullCmpLongTerm = DataDict.SrvRunnable;
SetPullCmpLongTerm.Context = 'Rte';
SetPullCmpLongTerm.Description = [...
  'Set Pull Compensation Active Server Runnable'];
SetPullCmpLongTerm.Return = DataDict.CSReturn;
SetPullCmpLongTerm.Return.Type = 'None';
SetPullCmpLongTerm.Return.Min = [];
SetPullCmpLongTerm.Return.Max = [];
SetPullCmpLongTerm.Return.TestTolerance = [];
SetPullCmpLongTerm.Arguments(1) = DataDict.CSArguments;
SetPullCmpLongTerm.Arguments(1).Name = 'PullCmpLongTerm';
SetPullCmpLongTerm.Arguments(1).EngDT = dt.float32;
SetPullCmpLongTerm.Arguments(1).EngMin = -10;
SetPullCmpLongTerm.Arguments(1).EngMax = 10;
SetPullCmpLongTerm.Arguments(1).Units = 'HwNwtMtr';
SetPullCmpLongTerm.Arguments(1).Direction = 'In';
SetPullCmpLongTerm.Arguments(1).InitRowCol = [1  1];
SetPullCmpLongTerm.Arguments(1).Description = [...
  'Set Pull Compensation Active Server Runnable'];

SetPullCmpShoTerm = DataDict.SrvRunnable;
SetPullCmpShoTerm.Context = 'Rte';
SetPullCmpShoTerm.Description = [...
  'Set Pull Compensation Short Term Server Runnable'];
SetPullCmpShoTerm.Return = DataDict.CSReturn;
SetPullCmpShoTerm.Return.Type = 'None';
SetPullCmpShoTerm.Return.Min = [];
SetPullCmpShoTerm.Return.Max = [];
SetPullCmpShoTerm.Return.TestTolerance = [];
SetPullCmpShoTerm.Arguments(1) = DataDict.CSArguments;
SetPullCmpShoTerm.Arguments(1).Name = 'PullCmpShoTerm';
SetPullCmpShoTerm.Arguments(1).EngDT = dt.float32;
SetPullCmpShoTerm.Arguments(1).EngMin = -10;
SetPullCmpShoTerm.Arguments(1).EngMax = 10;
SetPullCmpShoTerm.Arguments(1).Units = 'HwNwtMtr';
SetPullCmpShoTerm.Arguments(1).Direction = 'In';
SetPullCmpShoTerm.Arguments(1).InitRowCol = [1  1];
SetPullCmpShoTerm.Arguments(1).Description = [...
  'Set Pull Compensation Short Term Server Runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'PullCmpActvPer1'};
GetRefTmr100MicroSec32bit.Description = 'Reference Timer 100 MicroSec';
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 999;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = '';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'PullCmpActvPer1'};
GetTiSpan100MicroSec32bit.Description = 'Time Span 100 MicroSec';
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = '';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = '';


PullCmpLongTerm_SetRamBlockStatus = DataDict.Client;
PullCmpLongTerm_SetRamBlockStatus.CallLocation = {'PullCmpActvInit1'};
PullCmpLongTerm_SetRamBlockStatus.Description = 'Set RAM Block';
PullCmpLongTerm_SetRamBlockStatus.Return = DataDict.CSReturn;
PullCmpLongTerm_SetRamBlockStatus.Return.Type = 'None';
PullCmpLongTerm_SetRamBlockStatus.Return.Min = [];
PullCmpLongTerm_SetRamBlockStatus.Return.Max = [];
PullCmpLongTerm_SetRamBlockStatus.Return.TestTolerance = [];
PullCmpLongTerm_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).EngMin = 0;
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).EngMax = 1;
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).Direction = 'In';
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
PullCmpLongTerm_SetRamBlockStatus.Arguments(1).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'PullCmpActvPer1'};
HwAg.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'PullCmpActvPer1','PullCmpActvPer2'};
HwTq.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = 'Handwheel Velocity';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'PullCmpActvPer1'};
HwVel.ReadType = 'Rte';


PinionAgConf = DataDict.IpSignal;
PinionAgConf.LongName = 'Pinion Angle Confidence';
PinionAgConf.Description = 'Pinion Angle Confidence';
PinionAgConf.DocUnits = 'Uls';
PinionAgConf.EngDT = dt.float32;
PinionAgConf.EngInit = 0;
PinionAgConf.EngMin = 0;
PinionAgConf.EngMax = 1;
PinionAgConf.ReadIn = {'PullCmpActvPer1'};
PinionAgConf.ReadType = 'Rte';


PullCmpCmdDi = DataDict.IpSignal;
PullCmpCmdDi.LongName = 'Pull Compensation Command Disable';
PullCmpCmdDi.Description = 'Pull Compensation Command Disable';
PullCmpCmdDi.DocUnits = 'Cnt';
PullCmpCmdDi.EngDT = dt.lgc;
PullCmpCmdDi.EngInit = 0;
PullCmpCmdDi.EngMin = 0;
PullCmpCmdDi.EngMax = 1;
PullCmpCmdDi.ReadIn = {'PullCmpActvPer1'};
PullCmpCmdDi.ReadType = 'Rte';

PullCmpCustLrngDi = DataDict.IpSignal;
PullCmpCustLrngDi.LongName = 'Pull Compensation Customer Learning Disable';
PullCmpCustLrngDi.Description = [...
  'Trigger used to disable Pull Compensation Learning when Torque overlay is active.'];
PullCmpCustLrngDi.DocUnits = 'Cnt';
PullCmpCustLrngDi.EngDT = dt.lgc;
PullCmpCustLrngDi.EngInit = 0;
PullCmpCustLrngDi.EngMin = 0;
PullCmpCustLrngDi.EngMax = 1;
PullCmpCustLrngDi.ReadIn = {'PullCmpActvPer1'};
PullCmpCustLrngDi.ReadType = 'Rte';


PullCmpLrngDi = DataDict.IpSignal;
PullCmpLrngDi.LongName = 'Pull Compensation Learning Disable';
PullCmpLrngDi.Description = 'Pull Compensation Learning Disable';
PullCmpLrngDi.DocUnits = 'Cnt';
PullCmpLrngDi.EngDT = dt.lgc;
PullCmpLrngDi.EngInit = 0;
PullCmpLrngDi.EngMin = 0;
PullCmpLrngDi.EngMax = 1;
PullCmpLrngDi.ReadIn = {'PullCmpActvPer1'};
PullCmpLrngDi.ReadType = 'Rte';


VehLatA = DataDict.IpSignal;
VehLatA.LongName = 'Vehicle Lateral Acceleration';
VehLatA.Description = 'Vehicle Lateral Acceleration';
VehLatA.DocUnits = 'MtrPerSecSqd';
VehLatA.EngDT = dt.float32;
VehLatA.EngInit = 0;
VehLatA.EngMin = -10;
VehLatA.EngMax = 10;
VehLatA.ReadIn = {'PullCmpActvPer1'};
VehLatA.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'PullCmpActvPer1','PullCmpActvPer2'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = 'Vehicle Speed Valid';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'PullCmpActvPer1'};
VehSpdVld.ReadType = 'Rte';


VehYawRate = DataDict.IpSignal;
VehYawRate.LongName = 'Vehicle Yaw Rate';
VehYawRate.Description = 'Vehicle Yaw Rate';
VehYawRate.DocUnits = 'VehDegPerSec';
VehYawRate.EngDT = dt.float32;
VehYawRate.EngInit = 0;
VehYawRate.EngMin = -128;
VehYawRate.EngMax = 128;
VehYawRate.ReadIn = {'PullCmpActvPer1'};
VehYawRate.ReadType = 'Rte';


VehYawRateVld = DataDict.IpSignal;
VehYawRateVld.LongName = 'Vehicle Yaw Rate Validity';
VehYawRateVld.Description = 'True When Yaw Rate is Trusted.';
VehYawRateVld.DocUnits = 'Cnt';
VehYawRateVld.EngDT = dt.lgc;
VehYawRateVld.EngInit = 0;
VehYawRateVld.EngMin = 0;
VehYawRateVld.EngMax = 1;
VehYawRateVld.ReadIn = {'PullCmpActvPer1'};
VehYawRateVld.ReadType = 'Rte';


PullCmpActvDi = DataDict.IpSignal;
PullCmpActvDi.LongName = 'Pull Compensation Active Disable';
PullCmpActvDi.Description = 'Pull Compensation Active Disable';
PullCmpActvDi.DocUnits = 'Cnt';
PullCmpActvDi.EngDT = dt.lgc;
PullCmpActvDi.EngInit = 0;
PullCmpActvDi.EngMin = 0;
PullCmpActvDi.EngMax = 1;
PullCmpActvDi.ReadIn = {'PullCmpActvPer1'};
PullCmpActvDi.ReadType = 'Rte';

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

PullCmpCmd = DataDict.OpSignal;
PullCmpCmd.LongName = 'Pull Compensation Command';
PullCmpCmd.Description = 'Compensation command in MtrNm.';
PullCmpCmd.DocUnits = 'MotNwtMtr';
PullCmpCmd.SwcShoName = 'PullCmpActv';
PullCmpCmd.EngDT = dt.float32;
PullCmpCmd.EngInit = 0;
PullCmpCmd.EngMin = -8.8;
PullCmpCmd.EngMax = 8.8;
PullCmpCmd.TestTolerance = 0.000488281;
PullCmpCmd.WrittenIn = {'PullCmpActvPer1'};
PullCmpCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
RampDwnStepSize = DataDict.IRV;
RampDwnStepSize.LongName = 'Ramp Down Step Size';
RampDwnStepSize.Description = [...
  'Integrator step size for when the short term learning is reset.'];
RampDwnStepSize.DocUnits = 'HwNwtMtr';
RampDwnStepSize.EngDT = dt.float32;
RampDwnStepSize.EngInit = 0;
RampDwnStepSize.EngMin = 0;
RampDwnStepSize.EngMax = 0.6;
RampDwnStepSize.ReadIn = {'PullCmpActvPer1'};
RampDwnStepSize.WrittenIn = {'PullCmpActvInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PullCmpActvCmpLrnTiDecShoTerm = DataDict.Calibration;
PullCmpActvCmpLrnTiDecShoTerm.LongName = 'Pull Compensation Active Compensation Learn Time Decrease Short Term';
PullCmpActvCmpLrnTiDecShoTerm.Description = [...
  'Time to unlearn short term compensation, which will be converted to sh' ...
  'ort term integrator gain'];
PullCmpActvCmpLrnTiDecShoTerm.DocUnits = 'Sec';
PullCmpActvCmpLrnTiDecShoTerm.EngDT = dt.float32;
PullCmpActvCmpLrnTiDecShoTerm.EngVal = 45;
PullCmpActvCmpLrnTiDecShoTerm.EngMin = 5;
PullCmpActvCmpLrnTiDecShoTerm.EngMax = 200;
PullCmpActvCmpLrnTiDecShoTerm.Cardinality = 'Inin';
PullCmpActvCmpLrnTiDecShoTerm.CustomerVisible = false;
PullCmpActvCmpLrnTiDecShoTerm.Online = true;
PullCmpActvCmpLrnTiDecShoTerm.Impact = 'H';
PullCmpActvCmpLrnTiDecShoTerm.TuningOwner = 'CSE';
PullCmpActvCmpLrnTiDecShoTerm.GraphLink = {''};
PullCmpActvCmpLrnTiDecShoTerm.Monotony = 'None';
PullCmpActvCmpLrnTiDecShoTerm.MaxGrad = 0;
PullCmpActvCmpLrnTiDecShoTerm.PortName = 'PullCmpActvCmpLrnTiDecShoTerm';


PullCmpActvCmpLrnTiIncShoTerm = DataDict.Calibration;
PullCmpActvCmpLrnTiIncShoTerm.LongName = 'Pull Compensation Active Compensation Learn Time Increase Short Term';
PullCmpActvCmpLrnTiIncShoTerm.Description = [...
  'Time to learn short term compensation, which will be converted to shor' ...
  't term integrator gain'];
PullCmpActvCmpLrnTiIncShoTerm.DocUnits = 'Sec';
PullCmpActvCmpLrnTiIncShoTerm.EngDT = dt.float32;
PullCmpActvCmpLrnTiIncShoTerm.EngVal = 45;
PullCmpActvCmpLrnTiIncShoTerm.EngMin = 5;
PullCmpActvCmpLrnTiIncShoTerm.EngMax = 200;
PullCmpActvCmpLrnTiIncShoTerm.Cardinality = 'Inin';
PullCmpActvCmpLrnTiIncShoTerm.CustomerVisible = false;
PullCmpActvCmpLrnTiIncShoTerm.Online = true;
PullCmpActvCmpLrnTiIncShoTerm.Impact = 'H';
PullCmpActvCmpLrnTiIncShoTerm.TuningOwner = 'CSE';
PullCmpActvCmpLrnTiIncShoTerm.GraphLink = {''};
PullCmpActvCmpLrnTiIncShoTerm.Monotony = 'None';
PullCmpActvCmpLrnTiIncShoTerm.MaxGrad = 0;
PullCmpActvCmpLrnTiIncShoTerm.PortName = 'PullCmpActvCmpLrnTiIncShoTerm';


PullCmpActvCmpLrnTiLongTerm = DataDict.Calibration;
PullCmpActvCmpLrnTiLongTerm.LongName = 'Pull Compensation Active Compensation Learn Time Long Term';
PullCmpActvCmpLrnTiLongTerm.Description = [...
  'Time to learn long term compensation, which will be converted to longt' ...
  'erm integrator gain'];
PullCmpActvCmpLrnTiLongTerm.DocUnits = 'Mins';
PullCmpActvCmpLrnTiLongTerm.EngDT = dt.float32;
PullCmpActvCmpLrnTiLongTerm.EngVal = 45;
PullCmpActvCmpLrnTiLongTerm.EngMin = 5;
PullCmpActvCmpLrnTiLongTerm.EngMax = 120;
PullCmpActvCmpLrnTiLongTerm.Cardinality = 'Inin';
PullCmpActvCmpLrnTiLongTerm.CustomerVisible = false;
PullCmpActvCmpLrnTiLongTerm.Online = true;
PullCmpActvCmpLrnTiLongTerm.Impact = 'H';
PullCmpActvCmpLrnTiLongTerm.TuningOwner = 'CSE';
PullCmpActvCmpLrnTiLongTerm.GraphLink = {''};
PullCmpActvCmpLrnTiLongTerm.Monotony = 'None';
PullCmpActvCmpLrnTiLongTerm.MaxGrad = 0;
PullCmpActvCmpLrnTiLongTerm.PortName = 'PullCmpActvCmpLrnTiLongTerm';


PullCmpActvCmpShoTermRstHwAgThd = DataDict.Calibration;
PullCmpActvCmpShoTermRstHwAgThd.LongName = 'Pull Compensation Active Compensation Short Term Reset Handwheel Angle Threshold';
PullCmpActvCmpShoTermRstHwAgThd.Description = [...
  'Hw Position Limit at which the short term compensation will reset to z' ...
  'ero.'];
PullCmpActvCmpShoTermRstHwAgThd.DocUnits = 'HwDeg';
PullCmpActvCmpShoTermRstHwAgThd.EngDT = dt.float32;
PullCmpActvCmpShoTermRstHwAgThd.EngVal = 45;
PullCmpActvCmpShoTermRstHwAgThd.EngMin = 0;
PullCmpActvCmpShoTermRstHwAgThd.EngMax = 900;
PullCmpActvCmpShoTermRstHwAgThd.Cardinality = 'Inin';
PullCmpActvCmpShoTermRstHwAgThd.CustomerVisible = false;
PullCmpActvCmpShoTermRstHwAgThd.Online = true;
PullCmpActvCmpShoTermRstHwAgThd.Impact = 'H';
PullCmpActvCmpShoTermRstHwAgThd.TuningOwner = 'CSE';
PullCmpActvCmpShoTermRstHwAgThd.GraphLink = {''};
PullCmpActvCmpShoTermRstHwAgThd.Monotony = 'None';
PullCmpActvCmpShoTermRstHwAgThd.MaxGrad = 0;
PullCmpActvCmpShoTermRstHwAgThd.PortName = 'PullCmpActvCmpShoTermRstHwAgThd';


PullCmpActvCmpShoTermRstHwTqThd = DataDict.Calibration;
PullCmpActvCmpShoTermRstHwTqThd.LongName = 'Pull Compensation Active Compensation Short Term Reset Handwheel Torque Threshold';
PullCmpActvCmpShoTermRstHwTqThd.Description = [...
  'Hw Torque Limit at which the short term compensation will reset to zer' ...
  'o.'];
PullCmpActvCmpShoTermRstHwTqThd.DocUnits = 'HwNwtMtr';
PullCmpActvCmpShoTermRstHwTqThd.EngDT = dt.float32;
PullCmpActvCmpShoTermRstHwTqThd.EngVal = 3;
PullCmpActvCmpShoTermRstHwTqThd.EngMin = 0;
PullCmpActvCmpShoTermRstHwTqThd.EngMax = 10;
PullCmpActvCmpShoTermRstHwTqThd.Cardinality = 'Inin';
PullCmpActvCmpShoTermRstHwTqThd.CustomerVisible = false;
PullCmpActvCmpShoTermRstHwTqThd.Online = true;
PullCmpActvCmpShoTermRstHwTqThd.Impact = 'H';
PullCmpActvCmpShoTermRstHwTqThd.TuningOwner = 'CSE';
PullCmpActvCmpShoTermRstHwTqThd.GraphLink = {''};
PullCmpActvCmpShoTermRstHwTqThd.Monotony = 'None';
PullCmpActvCmpShoTermRstHwTqThd.MaxGrad = 0;
PullCmpActvCmpShoTermRstHwTqThd.PortName = 'PullCmpActvCmpShoTermRstHwTqThd';


PullCmpActvCmpShoTermRstLatAThd = DataDict.Calibration;
PullCmpActvCmpShoTermRstLatAThd.LongName = 'Pull Compensation Active Compensation Short Term Reset Lateral Acceleration Threshold';
PullCmpActvCmpShoTermRstLatAThd.Description = [...
  'Lateral Acceleration Limit at which the short term compensation will r' ...
  'eset to zero.'];
PullCmpActvCmpShoTermRstLatAThd.DocUnits = 'MtrPerSecSqd';
PullCmpActvCmpShoTermRstLatAThd.EngDT = dt.float32;
PullCmpActvCmpShoTermRstLatAThd.EngVal = 1;
PullCmpActvCmpShoTermRstLatAThd.EngMin = 0;
PullCmpActvCmpShoTermRstLatAThd.EngMax = 10;
PullCmpActvCmpShoTermRstLatAThd.Cardinality = 'Inin';
PullCmpActvCmpShoTermRstLatAThd.CustomerVisible = false;
PullCmpActvCmpShoTermRstLatAThd.Online = true;
PullCmpActvCmpShoTermRstLatAThd.Impact = 'H';
PullCmpActvCmpShoTermRstLatAThd.TuningOwner = 'CSE';
PullCmpActvCmpShoTermRstLatAThd.GraphLink = {''};
PullCmpActvCmpShoTermRstLatAThd.Monotony = 'None';
PullCmpActvCmpShoTermRstLatAThd.MaxGrad = 0;
PullCmpActvCmpShoTermRstLatAThd.PortName = 'PullCmpActvCmpShoTermRstLatAThd';


PullCmpActvCmpShoTermRstYawRateThd = DataDict.Calibration;
PullCmpActvCmpShoTermRstYawRateThd.LongName = 'Pull Compensation Active Compensation Short Term Reset Yaw Rate Threshold';
PullCmpActvCmpShoTermRstYawRateThd.Description = [...
  'Yaw Rate Limit at which the short term compensation will reset to zero' ...
  '.'];
PullCmpActvCmpShoTermRstYawRateThd.DocUnits = 'VehDegPerSec';
PullCmpActvCmpShoTermRstYawRateThd.EngDT = dt.float32;
PullCmpActvCmpShoTermRstYawRateThd.EngVal = 1;
PullCmpActvCmpShoTermRstYawRateThd.EngMin = 0;
PullCmpActvCmpShoTermRstYawRateThd.EngMax = 128;
PullCmpActvCmpShoTermRstYawRateThd.Cardinality = 'Inin';
PullCmpActvCmpShoTermRstYawRateThd.CustomerVisible = false;
PullCmpActvCmpShoTermRstYawRateThd.Online = true;
PullCmpActvCmpShoTermRstYawRateThd.Impact = 'H';
PullCmpActvCmpShoTermRstYawRateThd.TuningOwner = 'CSE';
PullCmpActvCmpShoTermRstYawRateThd.GraphLink = {''};
PullCmpActvCmpShoTermRstYawRateThd.Monotony = 'None';
PullCmpActvCmpShoTermRstYawRateThd.MaxGrad = 0;
PullCmpActvCmpShoTermRstYawRateThd.PortName = 'PullCmpActvCmpShoTermRstYawRateThd';


PullCmpActvEna = DataDict.Calibration;
PullCmpActvEna.LongName = 'Pull Compensation Active Enable';
PullCmpActvEna.Description = [...
  'Execute the function only when this flag is set to True'];
PullCmpActvEna.DocUnits = 'Cnt';
PullCmpActvEna.EngDT = dt.lgc;
PullCmpActvEna.EngVal = 1;
PullCmpActvEna.EngMin = 0;
PullCmpActvEna.EngMax = 1;
PullCmpActvEna.Cardinality = 'Inin';
PullCmpActvEna.CustomerVisible = false;
PullCmpActvEna.Online = true;
PullCmpActvEna.Impact = 'H';
PullCmpActvEna.TuningOwner = 'CSE';
PullCmpActvEna.GraphLink = {''};
PullCmpActvEna.Monotony = 'None';
PullCmpActvEna.MaxGrad = 0;
PullCmpActvEna.PortName = 'PullCmpActvEna';


PullCmpActvHwTqFilFrqLongTerm = DataDict.Calibration;
PullCmpActvHwTqFilFrqLongTerm.LongName = 'Pull Compensation Active Handwheel Torque Filter Frequency Long Term';
PullCmpActvHwTqFilFrqLongTerm.Description = [...
  'Filter frequency of lowpass filter on handwheel torque input to the Lo' ...
  'ng Term Integrator.'];
PullCmpActvHwTqFilFrqLongTerm.DocUnits = 'Hz';
PullCmpActvHwTqFilFrqLongTerm.EngDT = dt.float32;
PullCmpActvHwTqFilFrqLongTerm.EngVal = 0.5;
PullCmpActvHwTqFilFrqLongTerm.EngMin = 0.01;
PullCmpActvHwTqFilFrqLongTerm.EngMax = 100;
PullCmpActvHwTqFilFrqLongTerm.Cardinality = 'Inin';
PullCmpActvHwTqFilFrqLongTerm.CustomerVisible = false;
PullCmpActvHwTqFilFrqLongTerm.Online = true;
PullCmpActvHwTqFilFrqLongTerm.Impact = 'H';
PullCmpActvHwTqFilFrqLongTerm.TuningOwner = 'CSE';
PullCmpActvHwTqFilFrqLongTerm.GraphLink = {''};
PullCmpActvHwTqFilFrqLongTerm.Monotony = 'None';
PullCmpActvHwTqFilFrqLongTerm.MaxGrad = 0;
PullCmpActvHwTqFilFrqLongTerm.PortName = 'PullCmpActvHwTqFilFrqLongTerm';


PullCmpActvHwTqFilFrqLrngEna = DataDict.Calibration;
PullCmpActvHwTqFilFrqLrngEna.LongName = 'Pull Compensation Active Handwheel Torque Filter Frequency Learning Enable';
PullCmpActvHwTqFilFrqLrngEna.Description = [...
  'Filter Frequency for Handwheel Torque signal, used for enabling learni' ...
  'ng.'];
PullCmpActvHwTqFilFrqLrngEna.DocUnits = 'Hz';
PullCmpActvHwTqFilFrqLrngEna.EngDT = dt.float32;
PullCmpActvHwTqFilFrqLrngEna.EngVal = 20;
PullCmpActvHwTqFilFrqLrngEna.EngMin = 0.1;
PullCmpActvHwTqFilFrqLrngEna.EngMax = 100;
PullCmpActvHwTqFilFrqLrngEna.Cardinality = 'Inin';
PullCmpActvHwTqFilFrqLrngEna.CustomerVisible = false;
PullCmpActvHwTqFilFrqLrngEna.Online = false;
PullCmpActvHwTqFilFrqLrngEna.Impact = 'H';
PullCmpActvHwTqFilFrqLrngEna.TuningOwner = 'CSE';
PullCmpActvHwTqFilFrqLrngEna.GraphLink = {''};
PullCmpActvHwTqFilFrqLrngEna.Monotony = 'None';
PullCmpActvHwTqFilFrqLrngEna.MaxGrad = 0;
PullCmpActvHwTqFilFrqLrngEna.PortName = 'PullCmpActvHwTqFilFrqLrngEna';


PullCmpActvHwTqFilFrqShoTerm = DataDict.Calibration;
PullCmpActvHwTqFilFrqShoTerm.LongName = 'Pull Compensation Active Handwheel Torque Filter Frequency Short Term';
PullCmpActvHwTqFilFrqShoTerm.Description = [...
  'Filter frequency of lowpass filter on handwheel torque input to the Sh' ...
  'ort Term Integrator.'];
PullCmpActvHwTqFilFrqShoTerm.DocUnits = 'Hz';
PullCmpActvHwTqFilFrqShoTerm.EngDT = dt.float32;
PullCmpActvHwTqFilFrqShoTerm.EngVal = 0.5;
PullCmpActvHwTqFilFrqShoTerm.EngMin = 0.01;
PullCmpActvHwTqFilFrqShoTerm.EngMax = 100;
PullCmpActvHwTqFilFrqShoTerm.Cardinality = 'Inin';
PullCmpActvHwTqFilFrqShoTerm.CustomerVisible = false;
PullCmpActvHwTqFilFrqShoTerm.Online = true;
PullCmpActvHwTqFilFrqShoTerm.Impact = 'H';
PullCmpActvHwTqFilFrqShoTerm.TuningOwner = 'CSE';
PullCmpActvHwTqFilFrqShoTerm.GraphLink = {''};
PullCmpActvHwTqFilFrqShoTerm.Monotony = 'None';
PullCmpActvHwTqFilFrqShoTerm.MaxGrad = 0;
PullCmpActvHwTqFilFrqShoTerm.PortName = 'PullCmpActvHwTqFilFrqShoTerm';


PullCmpActvLongTermLim = DataDict.Calibration;
PullCmpActvLongTermLim.LongName = 'Pull Compensation Active Long Term Limit';
PullCmpActvLongTermLim.Description = [...
  'Value to limit the output of long term integrator.'];
PullCmpActvLongTermLim.DocUnits = 'HwNwtMtr';
PullCmpActvLongTermLim.EngDT = dt.float32;
PullCmpActvLongTermLim.EngVal = 0.5;
PullCmpActvLongTermLim.EngMin = 0;
PullCmpActvLongTermLim.EngMax = 10;
PullCmpActvLongTermLim.Cardinality = 'Inin';
PullCmpActvLongTermLim.CustomerVisible = false;
PullCmpActvLongTermLim.Online = true;
PullCmpActvLongTermLim.Impact = 'H';
PullCmpActvLongTermLim.TuningOwner = 'CSE';
PullCmpActvLongTermLim.GraphLink = {''};
PullCmpActvLongTermLim.Monotony = 'None';
PullCmpActvLongTermLim.MaxGrad = 0;
PullCmpActvLongTermLim.PortName = 'PullCmpActvLongTermLim';


PullCmpActvLrngEnaAgConfMinMgn = DataDict.Calibration;
PullCmpActvLrngEnaAgConfMinMgn.LongName = 'Pull Compensation Active Learning Enable Handwheel Authority Minimum Magnitude';
PullCmpActvLrngEnaAgConfMinMgn.Description = [...
  'Minimum Hw Authority allowed for learning to be enabled.'];
PullCmpActvLrngEnaAgConfMinMgn.DocUnits = 'Uls';
PullCmpActvLrngEnaAgConfMinMgn.EngDT = dt.float32;
PullCmpActvLrngEnaAgConfMinMgn.EngVal = 1;
PullCmpActvLrngEnaAgConfMinMgn.EngMin = 0;
PullCmpActvLrngEnaAgConfMinMgn.EngMax = 1;
PullCmpActvLrngEnaAgConfMinMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaAgConfMinMgn.CustomerVisible = false;
PullCmpActvLrngEnaAgConfMinMgn.Online = true;
PullCmpActvLrngEnaAgConfMinMgn.Impact = 'H';
PullCmpActvLrngEnaAgConfMinMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaAgConfMinMgn.GraphLink = {''};
PullCmpActvLrngEnaAgConfMinMgn.Monotony = 'None';
PullCmpActvLrngEnaAgConfMinMgn.MaxGrad = 0;
PullCmpActvLrngEnaAgConfMinMgn.PortName = 'PullCmpActvLrngEnaAgConfMinMgn';


PullCmpActvLrngEnaHwAgMaxMgn = DataDict.Calibration;
PullCmpActvLrngEnaHwAgMaxMgn.LongName = 'Pull Compensation Active Learning Enable Handwheel Angle Maximum Magnitude';
PullCmpActvLrngEnaHwAgMaxMgn.Description = [...
  'Maximum Hw Position allowed for learning to be enabled.'];
PullCmpActvLrngEnaHwAgMaxMgn.DocUnits = 'HwDeg';
PullCmpActvLrngEnaHwAgMaxMgn.EngDT = dt.float32;
PullCmpActvLrngEnaHwAgMaxMgn.EngVal = 45;
PullCmpActvLrngEnaHwAgMaxMgn.EngMin = 0;
PullCmpActvLrngEnaHwAgMaxMgn.EngMax = 900;
PullCmpActvLrngEnaHwAgMaxMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaHwAgMaxMgn.CustomerVisible = false;
PullCmpActvLrngEnaHwAgMaxMgn.Online = true;
PullCmpActvLrngEnaHwAgMaxMgn.Impact = 'H';
PullCmpActvLrngEnaHwAgMaxMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaHwAgMaxMgn.GraphLink = {''};
PullCmpActvLrngEnaHwAgMaxMgn.Monotony = 'None';
PullCmpActvLrngEnaHwAgMaxMgn.MaxGrad = 0;
PullCmpActvLrngEnaHwAgMaxMgn.PortName = 'PullCmpActvLrngEnaHwAgMaxMgn';


PullCmpActvLrngEnaHwTqMaxMgn = DataDict.Calibration;
PullCmpActvLrngEnaHwTqMaxMgn.LongName = 'Pull Compensation Active Learning Enable Handwheel Torque Maximum Magnitude';
PullCmpActvLrngEnaHwTqMaxMgn.Description = [...
  'Maximum Hw Torque allowed for learning to be enabled.'];
PullCmpActvLrngEnaHwTqMaxMgn.DocUnits = 'HwNwtMtr';
PullCmpActvLrngEnaHwTqMaxMgn.EngDT = dt.float32;
PullCmpActvLrngEnaHwTqMaxMgn.EngVal = 2.8;
PullCmpActvLrngEnaHwTqMaxMgn.EngMin = 0;
PullCmpActvLrngEnaHwTqMaxMgn.EngMax = 10;
PullCmpActvLrngEnaHwTqMaxMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaHwTqMaxMgn.CustomerVisible = false;
PullCmpActvLrngEnaHwTqMaxMgn.Online = true;
PullCmpActvLrngEnaHwTqMaxMgn.Impact = 'H';
PullCmpActvLrngEnaHwTqMaxMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaHwTqMaxMgn.GraphLink = {''};
PullCmpActvLrngEnaHwTqMaxMgn.Monotony = 'None';
PullCmpActvLrngEnaHwTqMaxMgn.MaxGrad = 0;
PullCmpActvLrngEnaHwTqMaxMgn.PortName = 'PullCmpActvLrngEnaHwTqMaxMgn';


PullCmpActvLrngEnaHwVelMaxMgn = DataDict.Calibration;
PullCmpActvLrngEnaHwVelMaxMgn.LongName = 'Pull Compensation Active Learning Enable Handwheel Velocity Maximum Magnitude';
PullCmpActvLrngEnaHwVelMaxMgn.Description = [...
  'Maximum Hw Velocity allowed for learning to be enabled.'];
PullCmpActvLrngEnaHwVelMaxMgn.DocUnits = 'HwDegPerSec';
PullCmpActvLrngEnaHwVelMaxMgn.EngDT = dt.float32;
PullCmpActvLrngEnaHwVelMaxMgn.EngVal = 10;
PullCmpActvLrngEnaHwVelMaxMgn.EngMin = 0;
PullCmpActvLrngEnaHwVelMaxMgn.EngMax = 1500;
PullCmpActvLrngEnaHwVelMaxMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaHwVelMaxMgn.CustomerVisible = false;
PullCmpActvLrngEnaHwVelMaxMgn.Online = true;
PullCmpActvLrngEnaHwVelMaxMgn.Impact = 'H';
PullCmpActvLrngEnaHwVelMaxMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaHwVelMaxMgn.GraphLink = {''};
PullCmpActvLrngEnaHwVelMaxMgn.Monotony = 'None';
PullCmpActvLrngEnaHwVelMaxMgn.MaxGrad = 0;
PullCmpActvLrngEnaHwVelMaxMgn.PortName = 'PullCmpActvLrngEnaHwVelMaxMgn';


PullCmpActvLrngEnaLatAMaxMgn = DataDict.Calibration;
PullCmpActvLrngEnaLatAMaxMgn.LongName = 'Pull Compensation Active Learning Enable Lateral Acceleration Maximum Magnitude';
PullCmpActvLrngEnaLatAMaxMgn.Description = [...
  'Maximum Lateral Acceleration allowed for learning to be enabled.'];
PullCmpActvLrngEnaLatAMaxMgn.DocUnits = 'MtrPerSecSqd';
PullCmpActvLrngEnaLatAMaxMgn.EngDT = dt.float32;
PullCmpActvLrngEnaLatAMaxMgn.EngVal = 0.5;
PullCmpActvLrngEnaLatAMaxMgn.EngMin = 0;
PullCmpActvLrngEnaLatAMaxMgn.EngMax = 10;
PullCmpActvLrngEnaLatAMaxMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaLatAMaxMgn.CustomerVisible = false;
PullCmpActvLrngEnaLatAMaxMgn.Online = true;
PullCmpActvLrngEnaLatAMaxMgn.Impact = 'H';
PullCmpActvLrngEnaLatAMaxMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaLatAMaxMgn.GraphLink = {''};
PullCmpActvLrngEnaLatAMaxMgn.Monotony = 'None';
PullCmpActvLrngEnaLatAMaxMgn.MaxGrad = 0;
PullCmpActvLrngEnaLatAMaxMgn.PortName = 'PullCmpActvLrngEnaLatAMaxMgn';


PullCmpActvLrngEnaTiThd = DataDict.Calibration;
PullCmpActvLrngEnaTiThd.LongName = 'Pull Compensation Active Enable Time';
PullCmpActvLrngEnaTiThd.Description = [...
  'Time for which all of the enable criteria must be valid before learnin' ...
  'g will be enabled.'];
PullCmpActvLrngEnaTiThd.DocUnits = 'Sec';
PullCmpActvLrngEnaTiThd.EngDT = dt.float32;
PullCmpActvLrngEnaTiThd.EngVal = 2;
PullCmpActvLrngEnaTiThd.EngMin = 0;
PullCmpActvLrngEnaTiThd.EngMax = 60;
PullCmpActvLrngEnaTiThd.Cardinality = 'Inin';
PullCmpActvLrngEnaTiThd.CustomerVisible = false;
PullCmpActvLrngEnaTiThd.Online = true;
PullCmpActvLrngEnaTiThd.Impact = 'H';
PullCmpActvLrngEnaTiThd.TuningOwner = 'CSE';
PullCmpActvLrngEnaTiThd.GraphLink = {''};
PullCmpActvLrngEnaTiThd.Monotony = 'None';
PullCmpActvLrngEnaTiThd.MaxGrad = 0;
PullCmpActvLrngEnaTiThd.PortName = 'PullCmpActvLrngEnaTiThd';


PullCmpActvLrngEnaVehSpdMaxMgn = DataDict.Calibration;
PullCmpActvLrngEnaVehSpdMaxMgn.LongName = 'Pull Compensation Active Learning Enable Vehicle Speed Maximum Magnitude';
PullCmpActvLrngEnaVehSpdMaxMgn.Description = [...
  'Maximum Vehicle Speed allowed for learning to be enabled.'];
PullCmpActvLrngEnaVehSpdMaxMgn.DocUnits = 'Kph';
PullCmpActvLrngEnaVehSpdMaxMgn.EngDT = dt.float32;
PullCmpActvLrngEnaVehSpdMaxMgn.EngVal = 160;
PullCmpActvLrngEnaVehSpdMaxMgn.EngMin = 0;
PullCmpActvLrngEnaVehSpdMaxMgn.EngMax = 511;
PullCmpActvLrngEnaVehSpdMaxMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaVehSpdMaxMgn.CustomerVisible = false;
PullCmpActvLrngEnaVehSpdMaxMgn.Online = true;
PullCmpActvLrngEnaVehSpdMaxMgn.Impact = 'H';
PullCmpActvLrngEnaVehSpdMaxMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaVehSpdMaxMgn.GraphLink = {''};
PullCmpActvLrngEnaVehSpdMaxMgn.Monotony = 'None';
PullCmpActvLrngEnaVehSpdMaxMgn.MaxGrad = 0;
PullCmpActvLrngEnaVehSpdMaxMgn.PortName = 'PullCmpActvLrngEnaVehSpdMaxMgn';


PullCmpActvLrngEnaVehSpdMinMgn = DataDict.Calibration;
PullCmpActvLrngEnaVehSpdMinMgn.LongName = 'Pull Compensation Active Learning Enable Vehicle Speed Minimum Magnitude';
PullCmpActvLrngEnaVehSpdMinMgn.Description = [...
  'Minimum Vehicle Speed allowed for learning to be enabled.'];
PullCmpActvLrngEnaVehSpdMinMgn.DocUnits = 'Kph';
PullCmpActvLrngEnaVehSpdMinMgn.EngDT = dt.float32;
PullCmpActvLrngEnaVehSpdMinMgn.EngVal = 60;
PullCmpActvLrngEnaVehSpdMinMgn.EngMin = 0;
PullCmpActvLrngEnaVehSpdMinMgn.EngMax = 511;
PullCmpActvLrngEnaVehSpdMinMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaVehSpdMinMgn.CustomerVisible = false;
PullCmpActvLrngEnaVehSpdMinMgn.Online = true;
PullCmpActvLrngEnaVehSpdMinMgn.Impact = 'H';
PullCmpActvLrngEnaVehSpdMinMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaVehSpdMinMgn.GraphLink = {''};
PullCmpActvLrngEnaVehSpdMinMgn.Monotony = 'None';
PullCmpActvLrngEnaVehSpdMinMgn.MaxGrad = 0;
PullCmpActvLrngEnaVehSpdMinMgn.PortName = 'PullCmpActvLrngEnaVehSpdMinMgn';


PullCmpActvLrngEnaVehSpdRateMaxMgn = DataDict.Calibration;
PullCmpActvLrngEnaVehSpdRateMaxMgn.LongName = 'Pull Compensation Active Learning Enable Vehicle Speed Rate Maximum Magnitude';
PullCmpActvLrngEnaVehSpdRateMaxMgn.Description = [...
  'Maximum Vehicle Speed rate of change allowed for learning to be enable' ...
  'd.'];
PullCmpActvLrngEnaVehSpdRateMaxMgn.DocUnits = 'KphPerSec';
PullCmpActvLrngEnaVehSpdRateMaxMgn.EngDT = dt.float32;
PullCmpActvLrngEnaVehSpdRateMaxMgn.EngVal = 1;
PullCmpActvLrngEnaVehSpdRateMaxMgn.EngMin = 0;
PullCmpActvLrngEnaVehSpdRateMaxMgn.EngMax = 100;
PullCmpActvLrngEnaVehSpdRateMaxMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaVehSpdRateMaxMgn.CustomerVisible = false;
PullCmpActvLrngEnaVehSpdRateMaxMgn.Online = true;
PullCmpActvLrngEnaVehSpdRateMaxMgn.Impact = 'H';
PullCmpActvLrngEnaVehSpdRateMaxMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaVehSpdRateMaxMgn.GraphLink = {''};
PullCmpActvLrngEnaVehSpdRateMaxMgn.Monotony = 'None';
PullCmpActvLrngEnaVehSpdRateMaxMgn.MaxGrad = 0;
PullCmpActvLrngEnaVehSpdRateMaxMgn.PortName = 'PullCmpActvLrngEnaVehSpdRateMaxMgn';


PullCmpActvLrngEnaYawRateMaxMgn = DataDict.Calibration;
PullCmpActvLrngEnaYawRateMaxMgn.LongName = 'Pull Compensation Active Learning Enable Yaw Rate Maximum Magnitude';
PullCmpActvLrngEnaYawRateMaxMgn.Description = [...
  'Maximum Yaw Rate allowed for learning to be enabled.'];
PullCmpActvLrngEnaYawRateMaxMgn.DocUnits = 'VehDegPerSec';
PullCmpActvLrngEnaYawRateMaxMgn.EngDT = dt.float32;
PullCmpActvLrngEnaYawRateMaxMgn.EngVal = 1;
PullCmpActvLrngEnaYawRateMaxMgn.EngMin = 0;
PullCmpActvLrngEnaYawRateMaxMgn.EngMax = 128;
PullCmpActvLrngEnaYawRateMaxMgn.Cardinality = 'Inin';
PullCmpActvLrngEnaYawRateMaxMgn.CustomerVisible = false;
PullCmpActvLrngEnaYawRateMaxMgn.Online = true;
PullCmpActvLrngEnaYawRateMaxMgn.Impact = 'H';
PullCmpActvLrngEnaYawRateMaxMgn.TuningOwner = 'CSE';
PullCmpActvLrngEnaYawRateMaxMgn.GraphLink = {''};
PullCmpActvLrngEnaYawRateMaxMgn.Monotony = 'None';
PullCmpActvLrngEnaYawRateMaxMgn.MaxGrad = 0;
PullCmpActvLrngEnaYawRateMaxMgn.PortName = 'PullCmpActvLrngEnaYawRateMaxMgn';


PullCmpActvOpstSignTiShoTerm = DataDict.Calibration;
PullCmpActvOpstSignTiShoTerm.LongName = 'Pull Compensation Active Opposite Sign Time Short Term';
PullCmpActvOpstSignTiShoTerm.Description = [...
  'Time the driver must be opposing the short term compensation before th' ...
  'e system will switch to the STLearnTimeDec learning rate.'];
PullCmpActvOpstSignTiShoTerm.DocUnits = 'Sec';
PullCmpActvOpstSignTiShoTerm.EngDT = dt.float32;
PullCmpActvOpstSignTiShoTerm.EngVal = 0.1;
PullCmpActvOpstSignTiShoTerm.EngMin = 0;
PullCmpActvOpstSignTiShoTerm.EngMax = 30;
PullCmpActvOpstSignTiShoTerm.Cardinality = 'Inin';
PullCmpActvOpstSignTiShoTerm.CustomerVisible = false;
PullCmpActvOpstSignTiShoTerm.Online = true;
PullCmpActvOpstSignTiShoTerm.Impact = 'H';
PullCmpActvOpstSignTiShoTerm.TuningOwner = 'CSE';
PullCmpActvOpstSignTiShoTerm.GraphLink = {''};
PullCmpActvOpstSignTiShoTerm.Monotony = 'None';
PullCmpActvOpstSignTiShoTerm.MaxGrad = 0;
PullCmpActvOpstSignTiShoTerm.PortName = 'PullCmpActvOpstSignTiShoTerm';


PullCmpActvOutpMaxRate = DataDict.Calibration;
PullCmpActvOutpMaxRate.LongName = 'Pull Compensation Active Output Maximum Rate';
PullCmpActvOutpMaxRate.Description = [...
  'Rate limiter on output of function, to eliminate sudden change in outp' ...
  'ut.'];
PullCmpActvOutpMaxRate.DocUnits = 'HwNwtMtrPerSec';
PullCmpActvOutpMaxRate.EngDT = dt.float32;
PullCmpActvOutpMaxRate.EngVal = 100;
PullCmpActvOutpMaxRate.EngMin = 0;
PullCmpActvOutpMaxRate.EngMax = 100;
PullCmpActvOutpMaxRate.Cardinality = 'Inin';
PullCmpActvOutpMaxRate.CustomerVisible = false;
PullCmpActvOutpMaxRate.Online = true;
PullCmpActvOutpMaxRate.Impact = 'H';
PullCmpActvOutpMaxRate.TuningOwner = 'CSE';
PullCmpActvOutpMaxRate.GraphLink = {''};
PullCmpActvOutpMaxRate.Monotony = 'None';
PullCmpActvOutpMaxRate.MaxGrad = 0;
PullCmpActvOutpMaxRate.PortName = 'PullCmpActvOutpMaxRate';


PullCmpActvPullCmpShoTermLim = DataDict.Calibration;
PullCmpActvPullCmpShoTermLim.LongName = 'Pull Compensation Active Pull Compensation Short Term Limit';
PullCmpActvPullCmpShoTermLim.Description = [...
  'Value to limit the output of short term integrator.'];
PullCmpActvPullCmpShoTermLim.DocUnits = 'HwNwtMtr';
PullCmpActvPullCmpShoTermLim.EngDT = dt.float32;
PullCmpActvPullCmpShoTermLim.EngVal = 1;
PullCmpActvPullCmpShoTermLim.EngMin = 0;
PullCmpActvPullCmpShoTermLim.EngMax = 10;
PullCmpActvPullCmpShoTermLim.Cardinality = 'Inin';
PullCmpActvPullCmpShoTermLim.CustomerVisible = false;
PullCmpActvPullCmpShoTermLim.Online = true;
PullCmpActvPullCmpShoTermLim.Impact = 'H';
PullCmpActvPullCmpShoTermLim.TuningOwner = 'CSE';
PullCmpActvPullCmpShoTermLim.GraphLink = {''};
PullCmpActvPullCmpShoTermLim.Monotony = 'None';
PullCmpActvPullCmpShoTermLim.MaxGrad = 0;
PullCmpActvPullCmpShoTermLim.PortName = 'PullCmpActvPullCmpShoTermLim';


PullCmpActvPullCmpTotLim = DataDict.Calibration;
PullCmpActvPullCmpTotLim.LongName = 'Pull Compensation Active Pull Compensation Total Limit';
PullCmpActvPullCmpTotLim.Description = [...
  'Value to limit the total output of pull comp.'];
PullCmpActvPullCmpTotLim.DocUnits = 'HwNwtMtr';
PullCmpActvPullCmpTotLim.EngDT = dt.float32;
PullCmpActvPullCmpTotLim.EngVal = 0;
PullCmpActvPullCmpTotLim.EngMin = 0;
PullCmpActvPullCmpTotLim.EngMax = 10;
PullCmpActvPullCmpTotLim.Cardinality = 'Inin';
PullCmpActvPullCmpTotLim.CustomerVisible = false;
PullCmpActvPullCmpTotLim.Online = true;
PullCmpActvPullCmpTotLim.Impact = 'H';
PullCmpActvPullCmpTotLim.TuningOwner = 'CSE';
PullCmpActvPullCmpTotLim.GraphLink = {''};
PullCmpActvPullCmpTotLim.Monotony = 'None';
PullCmpActvPullCmpTotLim.MaxGrad = 0;
PullCmpActvPullCmpTotLim.PortName = 'PullCmpActvPullCmpTotLim';


PullCmpActvPullErrLimLongTerm = DataDict.Calibration;
PullCmpActvPullErrLimLongTerm.LongName = 'Pull Compensation Active Pull Error Limit Long Term';
PullCmpActvPullErrLimLongTerm.Description = [...
  'Value to limit the input to the long term integrator. Reduces the lear' ...
  'ning rate for higher handwheel torque inputs.'];
PullCmpActvPullErrLimLongTerm.DocUnits = 'HwNwtMtr';
PullCmpActvPullErrLimLongTerm.EngDT = dt.float32;
PullCmpActvPullErrLimLongTerm.EngVal = 3;
PullCmpActvPullErrLimLongTerm.EngMin = 0;
PullCmpActvPullErrLimLongTerm.EngMax = 10;
PullCmpActvPullErrLimLongTerm.Cardinality = 'Inin';
PullCmpActvPullErrLimLongTerm.CustomerVisible = false;
PullCmpActvPullErrLimLongTerm.Online = true;
PullCmpActvPullErrLimLongTerm.Impact = 'H';
PullCmpActvPullErrLimLongTerm.TuningOwner = 'CSE';
PullCmpActvPullErrLimLongTerm.GraphLink = {''};
PullCmpActvPullErrLimLongTerm.Monotony = 'None';
PullCmpActvPullErrLimLongTerm.MaxGrad = 0;
PullCmpActvPullErrLimLongTerm.PortName = 'PullCmpActvPullErrLimLongTerm';


PullCmpActvPullErrMgnThd = DataDict.Calibration;
PullCmpActvPullErrMgnThd.LongName = 'Pull Compensation Active Pull Error Magnitude Threshold';
PullCmpActvPullErrMgnThd.Description = [...
  'When the magnitude of handwheel torque is below this value, the long a' ...
  'nd short term integrators will not learn any additional compensation.'];
PullCmpActvPullErrMgnThd.DocUnits = 'HwNwtMtr';
PullCmpActvPullErrMgnThd.EngDT = dt.float32;
PullCmpActvPullErrMgnThd.EngVal = 0.25;
PullCmpActvPullErrMgnThd.EngMin = 0;
PullCmpActvPullErrMgnThd.EngMax = 10;
PullCmpActvPullErrMgnThd.Cardinality = 'Inin';
PullCmpActvPullErrMgnThd.CustomerVisible = false;
PullCmpActvPullErrMgnThd.Online = true;
PullCmpActvPullErrMgnThd.Impact = 'H';
PullCmpActvPullErrMgnThd.TuningOwner = 'CSE';
PullCmpActvPullErrMgnThd.GraphLink = {''};
PullCmpActvPullErrMgnThd.Monotony = 'None';
PullCmpActvPullErrMgnThd.MaxGrad = 0;
PullCmpActvPullErrMgnThd.PortName = 'PullCmpActvPullErrMgnThd';


PullCmpActvPullErrShoTermLim = DataDict.Calibration;
PullCmpActvPullErrShoTermLim.LongName = 'Pull Compensation Active Pull Error Short Term Limit';
PullCmpActvPullErrShoTermLim.Description = [...
  'Value to limit the input to the short term integrator. Reduces the lea' ...
  'rning rate for higher handwheel torque inputs.'];
PullCmpActvPullErrShoTermLim.DocUnits = 'HwNwtMtr';
PullCmpActvPullErrShoTermLim.EngDT = dt.float32;
PullCmpActvPullErrShoTermLim.EngVal = 3;
PullCmpActvPullErrShoTermLim.EngMin = 0;
PullCmpActvPullErrShoTermLim.EngMax = 10;
PullCmpActvPullErrShoTermLim.Cardinality = 'Inin';
PullCmpActvPullErrShoTermLim.CustomerVisible = false;
PullCmpActvPullErrShoTermLim.Online = true;
PullCmpActvPullErrShoTermLim.Impact = 'H';
PullCmpActvPullErrShoTermLim.TuningOwner = 'CSE';
PullCmpActvPullErrShoTermLim.GraphLink = {''};
PullCmpActvPullErrShoTermLim.Monotony = 'None';
PullCmpActvPullErrShoTermLim.MaxGrad = 0;
PullCmpActvPullErrShoTermLim.PortName = 'PullCmpActvPullErrShoTermLim';


PullCmpActvShoTermRampTi = DataDict.Calibration;
PullCmpActvShoTermRampTi.LongName = 'Pull Compensation Active Short Term Ramp Time';
PullCmpActvShoTermRampTi.Description = [...
  'Time over which the short term compensation will ramp down to zero in ' ...
  'the event of a short term reset.'];
PullCmpActvShoTermRampTi.DocUnits = 'Sec';
PullCmpActvShoTermRampTi.EngDT = dt.float32;
PullCmpActvShoTermRampTi.EngVal = 1;
PullCmpActvShoTermRampTi.EngMin = 0.1;
PullCmpActvShoTermRampTi.EngMax = 30;
PullCmpActvShoTermRampTi.Cardinality = 'Inin';
PullCmpActvShoTermRampTi.CustomerVisible = false;
PullCmpActvShoTermRampTi.Online = true;
PullCmpActvShoTermRampTi.Impact = 'H';
PullCmpActvShoTermRampTi.TuningOwner = 'CSE';
PullCmpActvShoTermRampTi.GraphLink = {''};
PullCmpActvShoTermRampTi.Monotony = 'None';
PullCmpActvShoTermRampTi.MaxGrad = 0;
PullCmpActvShoTermRampTi.PortName = 'PullCmpActvShoTermRampTi';


PullCmpActvVehSpdScaTblX = DataDict.Calibration;
PullCmpActvVehSpdScaTblX.LongName = 'Pull Compensation Active Vehicle Speed Scale Table X';
PullCmpActvVehSpdScaTblX.Description = [...
  'X axis of a lookup table to scale Pull Comp command with vehicle speed' ...
  '.'];
PullCmpActvVehSpdScaTblX.DocUnits = 'Kph';
PullCmpActvVehSpdScaTblX.EngDT = dt.u9p7;
PullCmpActvVehSpdScaTblX.EngVal =  ...
   [0               30               60               90];
PullCmpActvVehSpdScaTblX.EngMin = 0;
PullCmpActvVehSpdScaTblX.EngMax = 511;
PullCmpActvVehSpdScaTblX.Cardinality = 'Inin';
PullCmpActvVehSpdScaTblX.CustomerVisible = false;
PullCmpActvVehSpdScaTblX.Online = true;
PullCmpActvVehSpdScaTblX.Impact = 'H';
PullCmpActvVehSpdScaTblX.TuningOwner = 'CSE';
PullCmpActvVehSpdScaTblX.GraphLink = {''};
PullCmpActvVehSpdScaTblX.Monotony = 'Strictly_Increasing';
PullCmpActvVehSpdScaTblX.MaxGrad = 511;
PullCmpActvVehSpdScaTblX.PortName = 'PullCmpActvVehSpdScaTblX';


PullCmpActvVehSpdScaTblY = DataDict.Calibration;
PullCmpActvVehSpdScaTblY.LongName = 'Pull Compensation Active Vehicle Speed Scale Table Y';
PullCmpActvVehSpdScaTblY.Description = [...
  'Y axis of a lookup table to scale Pull Comp command with vehicle speed' ...
  '.'];
PullCmpActvVehSpdScaTblY.DocUnits = 'Uls';
PullCmpActvVehSpdScaTblY.EngDT = dt.u2p14;
PullCmpActvVehSpdScaTblY.EngVal =  ...
   [0             0.25                1                1];
PullCmpActvVehSpdScaTblY.EngMin = 0;
PullCmpActvVehSpdScaTblY.EngMax = 1;
PullCmpActvVehSpdScaTblY.Cardinality = 'Inin';
PullCmpActvVehSpdScaTblY.CustomerVisible = true;
PullCmpActvVehSpdScaTblY.Online = true;
PullCmpActvVehSpdScaTblY.Impact = 'H';
PullCmpActvVehSpdScaTblY.TuningOwner = 'CSE';
PullCmpActvVehSpdScaTblY.GraphLink = {'PullCmpActvVehSpdScaTblX'};
PullCmpActvVehSpdScaTblY.Monotony = 'None';
PullCmpActvVehSpdScaTblY.MaxGrad = 1;
PullCmpActvVehSpdScaTblY.PortName = 'PullCmpActvVehSpdScaTblY';


PullCmpActvYawRateFilFrq = DataDict.Calibration;
PullCmpActvYawRateFilFrq.LongName = 'Pull Compensation Active Yaw Rate Filter Frequency';
PullCmpActvYawRateFilFrq.Description = [...
  'Filter Frequency for Yaw Rate signal.'];
PullCmpActvYawRateFilFrq.DocUnits = 'Hz';
PullCmpActvYawRateFilFrq.EngDT = dt.float32;
PullCmpActvYawRateFilFrq.EngVal = 3;
PullCmpActvYawRateFilFrq.EngMin = 0.1;
PullCmpActvYawRateFilFrq.EngMax = 100;
PullCmpActvYawRateFilFrq.Cardinality = 'Inin';
PullCmpActvYawRateFilFrq.CustomerVisible = false;
PullCmpActvYawRateFilFrq.Online = false;
PullCmpActvYawRateFilFrq.Impact = 'H';
PullCmpActvYawRateFilFrq.TuningOwner = 'CSE';
PullCmpActvYawRateFilFrq.GraphLink = {''};
PullCmpActvYawRateFilFrq.Monotony = 'None';
PullCmpActvYawRateFilFrq.MaxGrad = 0;
PullCmpActvYawRateFilFrq.PortName = 'PullCmpActvYawRateFilFrq';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmSysTqRat = DataDict.ImprtdCal;
SysGlbPrmSysTqRat.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTqRat.EngDT = dt.float32;
SysGlbPrmSysTqRat.EngVal = 20;
SysGlbPrmSysTqRat.EngMin = 10;
SysGlbPrmSysTqRat.EngMax = 40;
SysGlbPrmSysTqRat.PortName = 'SysGlbPrmSysTqRat';
SysGlbPrmSysTqRat.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
PullCmpLongTerm = DataDict.NVM;
PullCmpLongTerm.LongName = 'Pull Compensation Long Term';
PullCmpLongTerm.Description = [...
  'Stored long term compensation value.'];
PullCmpLongTerm.DocUnits = 'HwNwtMtr';
PullCmpLongTerm.EngDT = dt.float32;
PullCmpLongTerm.EngInit = 0;
PullCmpLongTerm.EngMin = -10;
PullCmpLongTerm.EngMax = 10;
PullCmpLongTerm.CustomerVisible = false;
PullCmpLongTerm.Impact = 'H';
PullCmpLongTerm.TuningOwner = 'CSE';
PullCmpLongTerm.CoderInfo.Alias = '';
PullCmpLongTerm.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dPullCmpActvIntgtrGainShoTerm = DataDict.Display;
dPullCmpActvIntgtrGainShoTerm.LongName = 'Short Term Integrator Gain';
dPullCmpActvIntgtrGainShoTerm.Description = [...
  'Rate of short-term pull cmp learning, converted from engineering units' ...
  ' (Sec) into unitless form of Integrator Gain.  At any given time, it m' ...
  'ay represent the "learning" gain or the "unlearning" gain.'];
dPullCmpActvIntgtrGainShoTerm.DocUnits = 'Uls';
dPullCmpActvIntgtrGainShoTerm.EngDT = dt.float32;
dPullCmpActvIntgtrGainShoTerm.EngMin = 0;
dPullCmpActvIntgtrGainShoTerm.EngMax = 1;
dPullCmpActvIntgtrGainShoTerm.InitRowCol = [1  1];


dPullCmpActvPullErrLongTerm = DataDict.Display;
dPullCmpActvPullErrLongTerm.LongName = 'Pull Compensation Active Pull Error Long Term';
dPullCmpActvPullErrLongTerm.Description = [...
  'Long-term error.  Difference between long-term vehicle pull and long-t' ...
  'erm compensation command.  Could be different due to saturated cals, g' ...
  'ain cals, etc.'];
dPullCmpActvPullErrLongTerm.DocUnits = 'HwNwtMtr';
dPullCmpActvPullErrLongTerm.EngDT = dt.float32;
dPullCmpActvPullErrLongTerm.EngMin = -10;
dPullCmpActvPullErrLongTerm.EngMax = 10;
dPullCmpActvPullErrLongTerm.InitRowCol = [1  1];


dPullCmpActvPullErrShoTerm = DataDict.Display;
dPullCmpActvPullErrShoTerm.LongName = 'Pull Compensation Active Pull Error Short Term';
dPullCmpActvPullErrShoTerm.Description = [...
  'Short-term error.  Basically, it is HwTorque signal filtered at short-' ...
  'term cal cutoff frequency.'];
dPullCmpActvPullErrShoTerm.DocUnits = 'HwNwtMtr';
dPullCmpActvPullErrShoTerm.EngDT = dt.float32;
dPullCmpActvPullErrShoTerm.EngMin = -10;
dPullCmpActvPullErrShoTerm.EngMax = 10;
dPullCmpActvPullErrShoTerm.InitRowCol = [1  1];


dPullCmpActvShoTermRst = DataDict.Display;
dPullCmpActvShoTermRst.LongName = 'Short Term Reset';
dPullCmpActvShoTermRst.Description = [...
  'True when handwheel torque, handwheel position, or vehicle yaw rate ar' ...
  'e large enough to trigger a short-term pull cmp reset.'];
dPullCmpActvShoTermRst.DocUnits = 'Cnt';
dPullCmpActvShoTermRst.EngDT = dt.lgc;
dPullCmpActvShoTermRst.EngMin = 0;
dPullCmpActvShoTermRst.EngMax = 1;
dPullCmpActvShoTermRst.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
CmpLrnTiDecShoTerm = DataDict.PIM;
CmpLrnTiDecShoTerm.LongName = 'Compensation Learn Time Decrease Short Term';
CmpLrnTiDecShoTerm.Description = [...
  'Learning time for decreasing short term compensation.'];
CmpLrnTiDecShoTerm.DocUnits = 'Sec';
CmpLrnTiDecShoTerm.EngDT = dt.float32;
CmpLrnTiDecShoTerm.EngMin = 5;
CmpLrnTiDecShoTerm.EngMax = 200;
CmpLrnTiDecShoTerm.InitRowCol = [1  1];


CmpLrnTiIncShoTerm = DataDict.PIM;
CmpLrnTiIncShoTerm.LongName = 'Compensation Learn Time Increase Short Term';
CmpLrnTiIncShoTerm.Description = [...
  'Learning time for increasing short term compensation.'];
CmpLrnTiIncShoTerm.DocUnits = 'Sec';
CmpLrnTiIncShoTerm.EngDT = dt.float32;
CmpLrnTiIncShoTerm.EngMin = 5;
CmpLrnTiIncShoTerm.EngMax = 200;
CmpLrnTiIncShoTerm.InitRowCol = [1  1];


CmpLrnTiLongTerm = DataDict.PIM;
CmpLrnTiLongTerm.LongName = 'Compensation Learn Time Long Term';
CmpLrnTiLongTerm.Description = [...
  'Previous long term compensation learn time'];
CmpLrnTiLongTerm.DocUnits = 'Mins';
CmpLrnTiLongTerm.EngDT = dt.float32;
CmpLrnTiLongTerm.EngMin = 5;
CmpLrnTiLongTerm.EngMax = 120;
CmpLrnTiLongTerm.InitRowCol = [1  1];


HwTqLpFilLongTerm = DataDict.PIM;
HwTqLpFilLongTerm.LongName = 'Long Term Handwheel Torque Lowpass Filter';
HwTqLpFilLongTerm.Description = [...
  'Handwheel torque lowpass filter state variable used to calculate long ' ...
  'term error.'];
HwTqLpFilLongTerm.DocUnits = 'Cnt';
HwTqLpFilLongTerm.EngDT = struct.FilLpRec1;
HwTqLpFilLongTerm.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLpFilLongTerm.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLpFilLongTerm.InitRowCol = [1  1];


HwTqLpFilLrngEna = DataDict.PIM;
HwTqLpFilLrngEna.LongName = 'Handwheel Torque Lowpass Filter Learning Enable';
HwTqLpFilLrngEna.Description = [...
  'Handwheel torque lowpass filter state variable used for enabling learn' ...
  'ing.'];
HwTqLpFilLrngEna.DocUnits = 'Cnt';
HwTqLpFilLrngEna.EngDT = struct.FilLpRec1;
HwTqLpFilLrngEna.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLpFilLrngEna.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLpFilLrngEna.InitRowCol = [1  1];


HwTqLpFilShoTerm = DataDict.PIM;
HwTqLpFilShoTerm.LongName = 'Handwheel Torque Lowpass Filter Short Term';
HwTqLpFilShoTerm.Description = [...
  'Handwheel torque lowpass filter state variable used to calculate short' ...
  ' term error.'];
HwTqLpFilShoTerm.DocUnits = 'Cnt';
HwTqLpFilShoTerm.EngDT = struct.FilLpRec1;
HwTqLpFilShoTerm.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLpFilShoTerm.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLpFilShoTerm.InitRowCol = [1  1];


IntgtrGainDecShoTerm = DataDict.PIM;
IntgtrGainDecShoTerm.LongName = 'Integrator Gain Decrease Short Term';
IntgtrGainDecShoTerm.Description = [...
  'Integral gain for decreasing short term compensation.'];
IntgtrGainDecShoTerm.DocUnits = 'Sec';
IntgtrGainDecShoTerm.EngDT = dt.float32;
IntgtrGainDecShoTerm.EngMin = 0;
IntgtrGainDecShoTerm.EngMax = 1;
IntgtrGainDecShoTerm.InitRowCol = [1  1];


IntgtrGainIncShoTerm = DataDict.PIM;
IntgtrGainIncShoTerm.LongName = 'Integrator Gain Increase Short Term';
IntgtrGainIncShoTerm.Description = [...
  'Integral gain for decreasing short term compensation.'];
IntgtrGainIncShoTerm.DocUnits = 'Sec';
IntgtrGainIncShoTerm.EngDT = dt.float32;
IntgtrGainIncShoTerm.EngMin = 0;
IntgtrGainIncShoTerm.EngMax = 1;
IntgtrGainIncShoTerm.InitRowCol = [1  1];


LrngEnaPrev = DataDict.PIM;
LrngEnaPrev.LongName = 'Learning Enable Previous';
LrngEnaPrev.Description = [...
  'Enable learning condition from previous step'];
LrngEnaPrev.DocUnits = 'Cnt';
LrngEnaPrev.EngDT = dt.lgc;
LrngEnaPrev.EngMin = 0;
LrngEnaPrev.EngMax = 1;
LrngEnaPrev.InitRowCol = [1  1];


LrngEnad = DataDict.PIM;
LrngEnad.LongName = 'Learning Enabled';
LrngEnad.Description = [...
  'Enable learning, determined by some logic conditions'];
LrngEnad.DocUnits = 'Cnt';
LrngEnad.EngDT = dt.lgc;
LrngEnad.EngMin = 0;
LrngEnad.EngMax = 1;
LrngEnad.InitRowCol = [1  1];


OpstSignPrev = DataDict.PIM;
OpstSignPrev.LongName = 'Opposite Sign Previous';
OpstSignPrev.Description = [...
  'Opposite sign condition from previous step'];
OpstSignPrev.DocUnits = 'Cnt';
OpstSignPrev.EngDT = dt.lgc;
OpstSignPrev.EngMin = 0;
OpstSignPrev.EngMax = 1;
OpstSignPrev.InitRowCol = [1  1];


PullCmpCmdRateLimPrev = DataDict.PIM;
PullCmpCmdRateLimPrev.LongName = 'Pull Compensation Command Rate Limit Previous';
PullCmpCmdRateLimPrev.Description = [...
  'State variable of pull compensation command'];
PullCmpCmdRateLimPrev.DocUnits = 'HwNwtMtr';
PullCmpCmdRateLimPrev.EngDT = dt.float32;
PullCmpCmdRateLimPrev.EngMin = -10;
PullCmpCmdRateLimPrev.EngMax = 10;
PullCmpCmdRateLimPrev.InitRowCol = [1  1];


PullCmpCmdTot = DataDict.PIM;
PullCmpCmdTot.LongName = 'Pull Compensation Command Total';
PullCmpCmdTot.Description = [...
  'Total amount of compensation to be applied to the motor.'];
PullCmpCmdTot.DocUnits = 'MotNwtMtr';
PullCmpCmdTot.EngDT = dt.float32;
PullCmpCmdTot.EngMin = -10;
PullCmpCmdTot.EngMax = 10;
PullCmpCmdTot.InitRowCol = [1  1];


PullCmpLongTermRst = DataDict.PIM;
PullCmpLongTermRst.LongName = 'Pull Compensation Long Term Reset';
PullCmpLongTermRst.Description = [...
  'State variable used to reset the long term compensation.'];
PullCmpLongTermRst.DocUnits = 'Cnt';
PullCmpLongTermRst.EngDT = dt.lgc;
PullCmpLongTermRst.EngMin = 0;
PullCmpLongTermRst.EngMax = 1;
PullCmpLongTermRst.InitRowCol = [1  1];


PullCmpShoTerm = DataDict.PIM;
PullCmpShoTerm.LongName = 'Pull Compensation Short Term';
PullCmpShoTerm.Description = [...
  'State variable of short term compensation, either the previous value o' ...
  'f short term compensation, or the value set through engineering interf' ...
  'ace tool '];
PullCmpShoTerm.DocUnits = 'HwNwtMtr';
PullCmpShoTerm.EngDT = dt.float32;
PullCmpShoTerm.EngMin = -10;
PullCmpShoTerm.EngMax = 10;
PullCmpShoTerm.InitRowCol = [1  1];


PullCmpShoTermRst = DataDict.PIM;
PullCmpShoTermRst.LongName = 'Pull Compensation Short Term Reset';
PullCmpShoTermRst.Description = [...
  'State variable used to reset the short term compensation.'];
PullCmpShoTermRst.DocUnits = 'Cnt';
PullCmpShoTermRst.EngDT = dt.lgc;
PullCmpShoTermRst.EngMin = 0;
PullCmpShoTermRst.EngMax = 1;
PullCmpShoTermRst.InitRowCol = [1  1];


RefTiEnaLrng = DataDict.PIM;
RefTiEnaLrng.LongName = 'Reference Time Enable Learning';
RefTiEnaLrng.Description = [...
  'Get system reference time when enable learning conditions are satisfie' ...
  'd for the first time'];
RefTiEnaLrng.DocUnits = 'MicroSec';
RefTiEnaLrng.EngDT = dt.u32;
RefTiEnaLrng.EngMin = 0;
RefTiEnaLrng.EngMax = 36000;
RefTiEnaLrng.InitRowCol = [1  1];


RefTiOpstSign = DataDict.PIM;
RefTiOpstSign.LongName = 'Reference Time Opposite Sign';
RefTiOpstSign.Description = [...
  'Get system reference time when handwheel torque and previous short ter' ...
  'm compensation have opposite sign for the first time'];
RefTiOpstSign.DocUnits = 'MicroSec';
RefTiOpstSign.EngDT = dt.u32;
RefTiOpstSign.EngMin = 0;
RefTiOpstSign.EngMax = 36000;
RefTiOpstSign.InitRowCol = [1  1];


VehSpdPrev = DataDict.PIM;
VehSpdPrev.LongName = 'Vehicle Speed Previous';
VehSpdPrev.Description = 'Previous value of vehicle speed';
VehSpdPrev.DocUnits = 'Kph';
VehSpdPrev.EngDT = dt.float32;
VehSpdPrev.EngMin = 0;
VehSpdPrev.EngMax = 511;
VehSpdPrev.InitRowCol = [1  1];


VehSpdRate = DataDict.PIM;
VehSpdRate.LongName = 'Vehicle Speed Rate';
VehSpdRate.Description = 'Vehicle speed rate';
VehSpdRate.DocUnits = 'KphPerSec';
VehSpdRate.EngDT = dt.float32;
VehSpdRate.EngMin = 0;
VehSpdRate.EngMax = 511;
VehSpdRate.InitRowCol = [1  1];


VehYawRateLpFil = DataDict.PIM;
VehYawRateLpFil.LongName = 'Vehicle Yaw Rate Lowpass Filter';
VehYawRateLpFil.Description = 'Vehicle yaw rate lowpass filter';
VehYawRateLpFil.DocUnits = 'Cnt';
VehYawRateLpFil.EngDT = struct.FilLpRec1;
VehYawRateLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
VehYawRateLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
VehYawRateLpFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_100MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_100MILLISEC_SEC_F32.LongName = '100 Milliseconds';
ARCHGLBPRM_100MILLISEC_SEC_F32.Description = '100ms periodic loop time step';
ARCHGLBPRM_100MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_100MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_100MILLISEC_SEC_F32.EngVal = 0.1;
ARCHGLBPRM_100MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


INTGTRSCARSHOTERM_ULS_F32 = DataDict.Constant;
INTGTRSCARSHOTERM_ULS_F32.LongName = 'Integrator Scaler Short Term';
INTGTRSCARSHOTERM_ULS_F32.Description = [...
  'Used in calculation of short-term integrator gain.'];
INTGTRSCARSHOTERM_ULS_F32.DocUnits = 'Uls';
INTGTRSCARSHOTERM_ULS_F32.EngDT = dt.float32;
INTGTRSCARSHOTERM_ULS_F32.EngVal = 1.35;
INTGTRSCARSHOTERM_ULS_F32.Define = 'Local';


LONGTERMINTGTRSCAR_ULS_F32 = DataDict.Constant;
LONGTERMINTGTRSCAR_ULS_F32.LongName = 'Long Term Integrator Scaler';
LONGTERMINTGTRSCAR_ULS_F32.Description = [...
  'Used in calculation of long-term integrator gain.'];
LONGTERMINTGTRSCAR_ULS_F32.DocUnits = 'Uls';
LONGTERMINTGTRSCAR_ULS_F32.EngDT = dt.float32;
LONGTERMINTGTRSCAR_ULS_F32.EngVal = 1.35;
LONGTERMINTGTRSCAR_ULS_F32.Define = 'Local';


MICROSECTOSEC_ULS_F32 = DataDict.Constant;
MICROSECTOSEC_ULS_F32.LongName = 'Microsecond to Second';
MICROSECTOSEC_ULS_F32.Description = [...
  'Number of 100 microseconds in one second'];
MICROSECTOSEC_ULS_F32.DocUnits = 'Uls';
MICROSECTOSEC_ULS_F32.EngDT = dt.float32;
MICROSECTOSEC_ULS_F32.EngVal = 0.0001;
MICROSECTOSEC_ULS_F32.Define = 'Local';


MINSTOSEC_SECPERMINS_F32 = DataDict.Constant;
MINSTOSEC_SECPERMINS_F32.LongName = 'Minute to Second';
MINSTOSEC_SECPERMINS_F32.Description = 'Number of seconds in one minute';
MINSTOSEC_SECPERMINS_F32.DocUnits = 'SecPerMins';
MINSTOSEC_SECPERMINS_F32.EngDT = dt.float32;
MINSTOSEC_SECPERMINS_F32.EngVal = 60;
MINSTOSEC_SECPERMINS_F32.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
