%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-May-2015 11:22:07       %
%                                  Created with tool release: 2.9.0      %
%%-----------------------------------------------------------------------%

ES228A = DataDict.FDD;
ES228A.Version = '1.0.x';
ES228A.LongName = 'Handwheel Torque Arbitration';
ES228A.ShoName  = 'HwTqArbn';
ES228A.DesignASIL = 'D';
ES228A.Description = [...
  'Arbitration between multiple trq sensors and calculation of handwheel ' ...
  'torque'];
ES228A.Ntc = ...
	{};
ES228A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTqArbnPer1 = DataDict.Runnable;
HwTqArbnPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTqA = DataDict.IpSignal;
HwTqA.LongName = 'Handwheel Torque Sensor A Value';
HwTqA.DocUnits = 'HwNwtMtr';
HwTqA.EngDT = dt.float32;
HwTqA.EngInit = 0;
HwTqA.EngMin = -10;
HwTqA.EngMax = 10;
HwTqA.MinReqdASIL = 'D';
HwTqA.ReadIn = {'HwTqArbnPer1'};
HwTqA.ReadType = 'Rte';


HwTqAQlfr = DataDict.IpSignal;
HwTqAQlfr.LongName = 'Handwheel Torque Sensor A Qualifier';
HwTqAQlfr.DocUnits = 'Cnt';
HwTqAQlfr.EngDT = enum.SigQlfr1;
HwTqAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqAQlfr.MinReqdASIL = 'D';
HwTqAQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqAQlfr.ReadType = 'Rte';


HwTqARollgCntr = DataDict.IpSignal;
HwTqARollgCntr.LongName = 'Handwheel Torque Sensor A Rolling Counter';
HwTqARollgCntr.DocUnits = 'Cnt';
HwTqARollgCntr.EngDT = dt.u08;
HwTqARollgCntr.EngInit = 0;
HwTqARollgCntr.EngMin = 0;
HwTqARollgCntr.EngMax = 255;
HwTqARollgCntr.MinReqdASIL = 'D';
HwTqARollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqARollgCntr.ReadType = 'Rte';


HwTqB = DataDict.IpSignal;
HwTqB.LongName = 'Handwheel Torque Sensor B Value';
HwTqB.DocUnits = 'HwNwtMtr';
HwTqB.EngDT = dt.float32;
HwTqB.EngInit = 0;
HwTqB.EngMin = -10;
HwTqB.EngMax = 10;
HwTqB.MinReqdASIL = 'D';
HwTqB.ReadIn = {'HwTqArbnPer1'};
HwTqB.ReadType = 'Rte';


HwTqBQlfr = DataDict.IpSignal;
HwTqBQlfr.LongName = 'Handwheel Torque Sensor B Qualifier';
HwTqBQlfr.DocUnits = 'Cnt';
HwTqBQlfr.EngDT = enum.SigQlfr1;
HwTqBQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqBQlfr.MinReqdASIL = 'D';
HwTqBQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqBQlfr.ReadType = 'Rte';


HwTqBRollgCntr = DataDict.IpSignal;
HwTqBRollgCntr.LongName = 'Handwheel Torque Sensor 2 Rolling Counter';
HwTqBRollgCntr.DocUnits = 'Cnt';
HwTqBRollgCntr.EngDT = dt.u08;
HwTqBRollgCntr.EngInit = 0;
HwTqBRollgCntr.EngMin = 0;
HwTqBRollgCntr.EngMax = 255;
HwTqBRollgCntr.MinReqdASIL = 'D';
HwTqBRollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqBRollgCntr.ReadType = 'Rte';


HwTqC = DataDict.IpSignal;
HwTqC.LongName = 'Handwheel Torque Sensor C Value';
HwTqC.DocUnits = 'HwNwtMtr';
HwTqC.EngDT = dt.float32;
HwTqC.EngInit = 0;
HwTqC.EngMin = -10;
HwTqC.EngMax = 10;
HwTqC.MinReqdASIL = 'D';
HwTqC.ReadIn = {'HwTqArbnPer1'};
HwTqC.ReadType = 'Rte';


HwTqCQlfr = DataDict.IpSignal;
HwTqCQlfr.LongName = 'Handwheel Torque Sensor C Qualifier';
HwTqCQlfr.DocUnits = 'Cnt';
HwTqCQlfr.EngDT = enum.SigQlfr1;
HwTqCQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqCQlfr.MinReqdASIL = 'D';
HwTqCQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqCQlfr.ReadType = 'Rte';


HwTqCRollgCntr = DataDict.IpSignal;
HwTqCRollgCntr.LongName = 'Handwheel Torque Sensor C Rolling Counter';
HwTqCRollgCntr.DocUnits = 'Cnt';
HwTqCRollgCntr.EngDT = dt.u08;
HwTqCRollgCntr.EngInit = 0;
HwTqCRollgCntr.EngMin = 0;
HwTqCRollgCntr.EngMax = 255;
HwTqCRollgCntr.MinReqdASIL = 'D';
HwTqCRollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqCRollgCntr.ReadType = 'Rte';


HwTqCorrlnSts = DataDict.IpSignal;
HwTqCorrlnSts.LongName = 'Handwheel Torque Correlation Status';
HwTqCorrlnSts.DocUnits = 'Cnt';
HwTqCorrlnSts.EngDT = dt.u08;
HwTqCorrlnSts.EngInit = 15;
HwTqCorrlnSts.EngMin = 0;
HwTqCorrlnSts.EngMax = 255;
HwTqCorrlnSts.MinReqdASIL = 'D';
HwTqCorrlnSts.ReadIn = {'HwTqArbnPer1'};
HwTqCorrlnSts.ReadType = 'Rte';


HwTqD = DataDict.IpSignal;
HwTqD.LongName = 'Handwheel Torque Sensor D Value';
HwTqD.DocUnits = 'HwNwtMtr';
HwTqD.EngDT = dt.float32;
HwTqD.EngInit = 0;
HwTqD.EngMin = -10;
HwTqD.EngMax = 10;
HwTqD.MinReqdASIL = 'D';
HwTqD.ReadIn = {'HwTqArbnPer1'};
HwTqD.ReadType = 'Rte';


HwTqDQlfr = DataDict.IpSignal;
HwTqDQlfr.LongName = 'Handwheel Torque Sensor D Qualifier';
HwTqDQlfr.DocUnits = 'Cnt';
HwTqDQlfr.EngDT = enum.SigQlfr1;
HwTqDQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqDQlfr.MinReqdASIL = 'D';
HwTqDQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqDQlfr.ReadType = 'Rte';


HwTqDRollgCntr = DataDict.IpSignal;
HwTqDRollgCntr.LongName = 'Handwheel Torque Sensor D Rolling Counter';
HwTqDRollgCntr.DocUnits = 'Cnt';
HwTqDRollgCntr.EngDT = dt.u08;
HwTqDRollgCntr.EngInit = 0;
HwTqDRollgCntr.EngMin = 0;
HwTqDRollgCntr.EngMax = 255;
HwTqDRollgCntr.MinReqdASIL = 'D';
HwTqDRollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqDRollgCntr.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTq = DataDict.OpSignal;
HwTq.LongName = 'Handwheel Torque Value';
HwTq.Description = [...
  'Value of the Handwheel Torque output '];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.SwcShoName = 'HwTqArbn';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.TestTolerance = 0.0024414;
HwTq.WrittenIn = {'HwTqArbnPer1'};
HwTq.WriteType = 'Rte';


HwTqChA = DataDict.OpSignal;
HwTqChA.LongName = 'Handwheel Torque Channel A Value';
HwTqChA.Description = [...
  'Value of the Handwheel Torque output calculated from ChA'];
HwTqChA.DocUnits = 'HwNwtMtr';
HwTqChA.SwcShoName = 'HwTqArbn';
HwTqChA.EngDT = dt.float32;
HwTqChA.EngInit = 0;
HwTqChA.EngMin = -10;
HwTqChA.EngMax = 10;
HwTqChA.TestTolerance = 0.0024414;
HwTqChA.WrittenIn = {'HwTqArbnPer1'};
HwTqChA.WriteType = 'Rte';


HwTqChB = DataDict.OpSignal;
HwTqChB.LongName = 'Handwheel Torque Channel B Value';
HwTqChB.Description = [...
  'Value of the Handwheel Torque output calculated from ChB'];
HwTqChB.DocUnits = 'HwNwtMtr';
HwTqChB.SwcShoName = 'HwTqArbn';
HwTqChB.EngDT = dt.float32;
HwTqChB.EngInit = 0;
HwTqChB.EngMin = -10;
HwTqChB.EngMax = 10;
HwTqChB.TestTolerance = 0.0024414;
HwTqChB.WrittenIn = {'HwTqArbnPer1'};
HwTqChB.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTqArbnMaxStallTqA = DataDict.Calibration;
HwTqArbnMaxStallTqA.LongName = 'Handwheel Torque Arbitration Signal A Stall Counter Maximum Threshold';
HwTqArbnMaxStallTqA.Description = [...
  'Maximum value reached by stall counter to indicate signal not availabl' ...
  'e for arbitration'];
HwTqArbnMaxStallTqA.DocUnits = 'Cnt';
HwTqArbnMaxStallTqA.EngDT = dt.u08;
HwTqArbnMaxStallTqA.EngVal = 10;
HwTqArbnMaxStallTqA.EngMin = 0;
HwTqArbnMaxStallTqA.EngMax = 255;
HwTqArbnMaxStallTqA.ProgrammedBy = 'Nexteer';
HwTqArbnMaxStallTqA.Cardinality = 'N';
HwTqArbnMaxStallTqA.CustomerVisible = false;
HwTqArbnMaxStallTqA.Online = false;
HwTqArbnMaxStallTqA.Impact = 'L';
HwTqArbnMaxStallTqA.SafetyRating = 'D';
HwTqArbnMaxStallTqA.TuningOwner = 'FDD';
HwTqArbnMaxStallTqA.GraphLink = '';
HwTqArbnMaxStallTqA.Monotony = 'None';
HwTqArbnMaxStallTqA.MaxGrad = 0;
HwTqArbnMaxStallTqA.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';


HwTqArbnMaxStallTqB = DataDict.Calibration;
HwTqArbnMaxStallTqB.LongName = 'Handwheel Torque Arbitration Signal B Stall Counter Maximum Threshold';
HwTqArbnMaxStallTqB.Description = [...
  'Maximum value reached by stall counter to indicate signal not availabl' ...
  'e for arbitration'];
HwTqArbnMaxStallTqB.DocUnits = 'Cnt';
HwTqArbnMaxStallTqB.EngDT = dt.u08;
HwTqArbnMaxStallTqB.EngVal = 10;
HwTqArbnMaxStallTqB.EngMin = 0;
HwTqArbnMaxStallTqB.EngMax = 255;
HwTqArbnMaxStallTqB.ProgrammedBy = 'Nexteer';
HwTqArbnMaxStallTqB.Cardinality = 'N';
HwTqArbnMaxStallTqB.CustomerVisible = false;
HwTqArbnMaxStallTqB.Online = false;
HwTqArbnMaxStallTqB.Impact = 'L';
HwTqArbnMaxStallTqB.SafetyRating = 'D';
HwTqArbnMaxStallTqB.TuningOwner = 'FDD';
HwTqArbnMaxStallTqB.GraphLink = '';
HwTqArbnMaxStallTqB.Monotony = 'None';
HwTqArbnMaxStallTqB.MaxGrad = 0;
HwTqArbnMaxStallTqB.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';


HwTqArbnMaxStallTqC = DataDict.Calibration;
HwTqArbnMaxStallTqC.LongName = 'Handwheel Torque Arbitration Signal C Stall Counter Maximum Threshold';
HwTqArbnMaxStallTqC.Description = [...
  'Maximum value reached by stall counter to indicate signal not availabl' ...
  'e for arbitration'];
HwTqArbnMaxStallTqC.DocUnits = 'Cnt';
HwTqArbnMaxStallTqC.EngDT = dt.u08;
HwTqArbnMaxStallTqC.EngVal = 10;
HwTqArbnMaxStallTqC.EngMin = 0;
HwTqArbnMaxStallTqC.EngMax = 255;
HwTqArbnMaxStallTqC.ProgrammedBy = 'Nexteer';
HwTqArbnMaxStallTqC.Cardinality = 'N';
HwTqArbnMaxStallTqC.CustomerVisible = false;
HwTqArbnMaxStallTqC.Online = false;
HwTqArbnMaxStallTqC.Impact = 'L';
HwTqArbnMaxStallTqC.SafetyRating = 'D';
HwTqArbnMaxStallTqC.TuningOwner = 'FDD';
HwTqArbnMaxStallTqC.GraphLink = '';
HwTqArbnMaxStallTqC.Monotony = 'None';
HwTqArbnMaxStallTqC.MaxGrad = 0;
HwTqArbnMaxStallTqC.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';


HwTqArbnMaxStallTqD = DataDict.Calibration;
HwTqArbnMaxStallTqD.LongName = 'Handwheel Torque Arbitration Signal D Stall Counter Maximum Threshold';
HwTqArbnMaxStallTqD.Description = [...
  'Maximum value reached by stall counter to indicate signal not availabl' ...
  'e for arbitration'];
HwTqArbnMaxStallTqD.DocUnits = 'Cnt';
HwTqArbnMaxStallTqD.EngDT = dt.u08;
HwTqArbnMaxStallTqD.EngVal = 10;
HwTqArbnMaxStallTqD.EngMin = 0;
HwTqArbnMaxStallTqD.EngMax = 255;
HwTqArbnMaxStallTqD.ProgrammedBy = 'Nexteer';
HwTqArbnMaxStallTqD.Cardinality = 'N';
HwTqArbnMaxStallTqD.CustomerVisible = false;
HwTqArbnMaxStallTqD.Online = false;
HwTqArbnMaxStallTqD.Impact = 'L';
HwTqArbnMaxStallTqD.SafetyRating = 'D';
HwTqArbnMaxStallTqD.TuningOwner = 'FDD';
HwTqArbnMaxStallTqD.GraphLink = '';
HwTqArbnMaxStallTqD.Monotony = 'None';
HwTqArbnMaxStallTqD.MaxGrad = 0;
HwTqArbnMaxStallTqD.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwTqArbnChAAvl = DataDict.Display;
dHwTqArbnChAAvl.LongName = 'Handwheel Torque Channel A Available';
dHwTqArbnChAAvl.Description = [...
  'Availability status of hw trq from ChA'];
dHwTqArbnChAAvl.DocUnits = 'Cnt';
dHwTqArbnChAAvl.EngDT = dt.lgc;
dHwTqArbnChAAvl.EngMin = 0;
dHwTqArbnChAAvl.EngMax = 1;
dHwTqArbnChAAvl.InitRowCol = [1  1];


dHwTqArbnChBAvl = DataDict.Display;
dHwTqArbnChBAvl.LongName = 'Handwheel Torque Channel B Available';
dHwTqArbnChBAvl.Description = [...
  'Availability status of hw trq from ChB'];
dHwTqArbnChBAvl.DocUnits = 'Cnt';
dHwTqArbnChBAvl.EngDT = dt.lgc;
dHwTqArbnChBAvl.EngMin = 0;
dHwTqArbnChBAvl.EngMax = 1;
dHwTqArbnChBAvl.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTqArbnTqARollgCntrPrev = DataDict.PIM;
HwTqArbnTqARollgCntrPrev.LongName = 'Handwheel Torque A Rolling Counter Previous';
HwTqArbnTqARollgCntrPrev.Description = [...
  'Previous value of Hw trq A rolling counter'];
HwTqArbnTqARollgCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqARollgCntrPrev.EngDT = dt.u08;
HwTqArbnTqARollgCntrPrev.EngMin = 0;
HwTqArbnTqARollgCntrPrev.EngMax = 255;
HwTqArbnTqARollgCntrPrev.InitRowCol = [1  1];


HwTqArbnTqAStallCntrPrev = DataDict.PIM;
HwTqArbnTqAStallCntrPrev.LongName = 'Handwheel Torque A Stall Counter Previous';
HwTqArbnTqAStallCntrPrev.Description = [...
  'Previous value of Hw trq A Stall counter'];
HwTqArbnTqAStallCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqAStallCntrPrev.EngDT = dt.u08;
HwTqArbnTqAStallCntrPrev.EngMin = 0;
HwTqArbnTqAStallCntrPrev.EngMax = 255;
HwTqArbnTqAStallCntrPrev.InitRowCol = [1  1];


HwTqArbnTqBRollgCntrPrev = DataDict.PIM;
HwTqArbnTqBRollgCntrPrev.LongName = 'Handwheel Torque B Rolling Counter Previous';
HwTqArbnTqBRollgCntrPrev.Description = [...
  'Previous value of Hw trq B rolling counter'];
HwTqArbnTqBRollgCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqBRollgCntrPrev.EngDT = dt.u08;
HwTqArbnTqBRollgCntrPrev.EngMin = 0;
HwTqArbnTqBRollgCntrPrev.EngMax = 255;
HwTqArbnTqBRollgCntrPrev.InitRowCol = [1  1];


HwTqArbnTqBStallCntrPrev = DataDict.PIM;
HwTqArbnTqBStallCntrPrev.LongName = 'Handwheel Torque B Stall Counter Previous';
HwTqArbnTqBStallCntrPrev.Description = [...
  'Previous value of Hw trq B Stall counter'];
HwTqArbnTqBStallCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqBStallCntrPrev.EngDT = dt.u08;
HwTqArbnTqBStallCntrPrev.EngMin = 0;
HwTqArbnTqBStallCntrPrev.EngMax = 255;
HwTqArbnTqBStallCntrPrev.InitRowCol = [1  1];


HwTqArbnTqCRollgCntrPrev = DataDict.PIM;
HwTqArbnTqCRollgCntrPrev.LongName = 'Handwheel Torque C Rolling Counter Previous';
HwTqArbnTqCRollgCntrPrev.Description = [...
  'Previous value of Hw trq C rolling counter'];
HwTqArbnTqCRollgCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqCRollgCntrPrev.EngDT = dt.u08;
HwTqArbnTqCRollgCntrPrev.EngMin = 0;
HwTqArbnTqCRollgCntrPrev.EngMax = 255;
HwTqArbnTqCRollgCntrPrev.InitRowCol = [1  1];


HwTqArbnTqCStallCntrPrev = DataDict.PIM;
HwTqArbnTqCStallCntrPrev.LongName = 'Handwheel Torque C Stall Counter Previous';
HwTqArbnTqCStallCntrPrev.Description = [...
  'Previous value of Hw trq C stall counter'];
HwTqArbnTqCStallCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqCStallCntrPrev.EngDT = dt.u08;
HwTqArbnTqCStallCntrPrev.EngMin = 0;
HwTqArbnTqCStallCntrPrev.EngMax = 255;
HwTqArbnTqCStallCntrPrev.InitRowCol = [1  1];


HwTqArbnTqDRollgCntrPrev = DataDict.PIM;
HwTqArbnTqDRollgCntrPrev.LongName = 'Handwheel Torque D Rolling Counter Previous';
HwTqArbnTqDRollgCntrPrev.Description = [...
  'Previous value of Hw trq D rolling counter'];
HwTqArbnTqDRollgCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqDRollgCntrPrev.EngDT = dt.u08;
HwTqArbnTqDRollgCntrPrev.EngMin = 0;
HwTqArbnTqDRollgCntrPrev.EngMax = 255;
HwTqArbnTqDRollgCntrPrev.InitRowCol = [1  1];


HwTqArbnTqDStallCntrPrev = DataDict.PIM;
HwTqArbnTqDStallCntrPrev.LongName = 'Handwheel Torque D Stall Counter Previous';
HwTqArbnTqDStallCntrPrev.Description = [...
  'Previous value of Hw trq D stall counter'];
HwTqArbnTqDStallCntrPrev.DocUnits = 'Cnt';
HwTqArbnTqDStallCntrPrev.EngDT = dt.u08;
HwTqArbnTqDStallCntrPrev.EngMin = 0;
HwTqArbnTqDStallCntrPrev.EngMax = 255;
HwTqArbnTqDStallCntrPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
HWTQMAXLIM_HWNWTMTR_F32 = DataDict.Constant;
HWTQMAXLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Maximum Range';
HWTQMAXLIM_HWNWTMTR_F32.Description = [...
  'Max Range Limit for Hw Trq function output'];
HWTQMAXLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
HWTQMAXLIM_HWNWTMTR_F32.EngDT = dt.float32;
HWTQMAXLIM_HWNWTMTR_F32.EngVal = 10;
HWTQMAXLIM_HWNWTMTR_F32.Header = '';
HWTQMAXLIM_HWNWTMTR_F32.Define = 'Local';


HWTQMINLIM_HWNWTMTR_F32 = DataDict.Constant;
HWTQMINLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Minimum Range';
HWTQMINLIM_HWNWTMTR_F32.Description = [...
  'Min Range Limit for Hw Trq function output'];
HWTQMINLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
HWTQMINLIM_HWNWTMTR_F32.EngDT = dt.float32;
HWTQMINLIM_HWNWTMTR_F32.EngVal = -10;
HWTQMINLIM_HWNWTMTR_F32.Header = '';
HWTQMINLIM_HWNWTMTR_F32.Define = 'Local';


HWTQSCA_CNT_U08 = DataDict.Constant;
HWTQSCA_CNT_U08.LongName = 'Handwheel Torque Scale';
HWTQSCA_CNT_U08.Description = [...
  'Scaling used to generate hw diff trq'];
HWTQSCA_CNT_U08.DocUnits = 'Cnt';
HWTQSCA_CNT_U08.EngDT = dt.u08;
HWTQSCA_CNT_U08.EngVal = 2;
HWTQSCA_CNT_U08.Header = '';
HWTQSCA_CNT_U08.Define = 'Local';


%end of Data Dictionary