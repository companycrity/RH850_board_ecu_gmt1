%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 24-Apr-2015 11:29:57       %
%                                  Created with tool release: 2.10.0     %
%%-----------------------------------------------------------------------%

ES238A = DataDict.FDD;
ES238A.Version = '1.2.X';
ES238A.LongName = 'Handwheel Angle Arbitration';
ES238A.ShoName  = 'HwAgArbn';
ES238A.DesignASIL = 'D';
ES238A.Description = 'Arbitrates handwheel angle channels and provides handwheel angle to the application';
ES238A.Ntc = ...
	{};
ES238A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgArbnPer1 = DataDict.Runnable;
HwAgArbnPer1.TimeStep = 0.004;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAgA = DataDict.IpSignal;
HwAgA.LongName = 'Handwheel Angle A';
HwAgA.DocUnits = 'HwDeg';
HwAgA.EngDT = dt.float32;
HwAgA.EngInit = 0;
HwAgA.EngMin = -900.0;
HwAgA.EngMax = 900.0;
HwAgA.ReadIn = {'HwAgArbnPer1'};
HwAgA.ReadType = 'Rte';

HwAgAQlfr = DataDict.IpSignal;
HwAgAQlfr.LongName = 'Handwheel Angle a Qualifier';
HwAgAQlfr.DocUnits = 'Cnt';
HwAgAQlfr.EngDT = enum.SigQlfr1;
HwAgAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAgAQlfr.ReadIn = {'HwAgArbnPer1'};
HwAgAQlfr.ReadType = 'Rte';

HwAgARollgCntr = DataDict.IpSignal;
HwAgARollgCntr.LongName = 'Handwheel Angle a Rolling Counter';
HwAgARollgCntr.DocUnits = 'Cnt';
HwAgARollgCntr.EngDT = dt.u08;
HwAgARollgCntr.EngInit = 0;
HwAgARollgCntr.EngMin = 0;
HwAgARollgCntr.EngMax = 255;
HwAgARollgCntr.ReadIn = {'HwAgArbnPer1'};
HwAgARollgCntr.ReadType = 'Rte';

HwAgB = DataDict.IpSignal;
HwAgB.LongName = 'Handwheel Angle B';
HwAgB.DocUnits = 'HwDeg';
HwAgB.EngDT = dt.float32;
HwAgB.EngInit = 0;
HwAgB.EngMin = -900.0;
HwAgB.EngMax = 900.0;
HwAgB.ReadIn = {'HwAgArbnPer1'};
HwAgB.ReadType = 'Rte';

HwAgBQlfr = DataDict.IpSignal;
HwAgBQlfr.LongName = 'Handwheel Angle B Qualifier';
HwAgBQlfr.DocUnits = 'Cnt';
HwAgBQlfr.EngDT = enum.SigQlfr1;
HwAgBQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAgBQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAgBQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAgBQlfr.ReadIn = {'HwAgArbnPer1'};
HwAgBQlfr.ReadType = 'Rte';


HwAgBRollgCntr = DataDict.IpSignal;
HwAgBRollgCntr.LongName = 'Handwheel Angle B Rolling Counter';
HwAgBRollgCntr.DocUnits = 'Cnt';
HwAgBRollgCntr.EngDT = dt.u08;
HwAgBRollgCntr.EngInit = 0;
HwAgBRollgCntr.EngMin = 0;
HwAgBRollgCntr.EngMax = 255;
HwAgBRollgCntr.ReadIn = {'HwAgArbnPer1'};
HwAgBRollgCntr.ReadType = 'Rte';


HwAgCorrlnSt = DataDict.IpSignal;
HwAgCorrlnSt.LongName = 'Handwheel Angle Correlation Status';
HwAgCorrlnSt.DocUnits = 'Cnt';
HwAgCorrlnSt.EngDT = dt.b08;
HwAgCorrlnSt.EngInit = 3;
HwAgCorrlnSt.EngMin = 0;
HwAgCorrlnSt.EngMax = 3;
HwAgCorrlnSt.ReadIn = {'HwAgArbnPer1'};
HwAgCorrlnSt.ReadType = 'Rte';

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAg = DataDict.OpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle for use by the application';
HwAg.DocUnits = 'HwDeg';
HwAg.SwcShoName = 'HwAgArbn';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -900;
HwAg.EngMax = 900;
HwAg.TestTolerance = 0.1;
HwAg.WrittenIn = {'HwAgArbnPer1'};
HwAg.WriteType = 'Rte';

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAgArbnHwAgMaxStall = DataDict.Calibration;
HwAgArbnHwAgMaxStall.LongName = 'Handwheel Angle Arbitration Handwheel Angle Max Stall';
HwAgArbnHwAgMaxStall.Description = 'Stall counter for handwheel angle arbitration';
HwAgArbnHwAgMaxStall.DocUnits = 'Cnt';
HwAgArbnHwAgMaxStall.EngDT = dt.u08;
HwAgArbnHwAgMaxStall.EngVal = 20;
HwAgArbnHwAgMaxStall.EngMin = 0;
HwAgArbnHwAgMaxStall.EngMax = 255;
HwAgArbnHwAgMaxStall.ProgrammedBy = 'Nexteer';
HwAgArbnHwAgMaxStall.Cardinality = 'N';
HwAgArbnHwAgMaxStall.CustomerVisible = false;
HwAgArbnHwAgMaxStall.Online = false;
HwAgArbnHwAgMaxStall.Impact = 'H';
HwAgArbnHwAgMaxStall.TuningOwner = 'Safety';
HwAgArbnHwAgMaxStall.GraphLink = '';
HwAgArbnHwAgMaxStall.Monotony = 'None';
HwAgArbnHwAgMaxStall.MaxGrad = 999;
HwAgArbnHwAgMaxStall.CoderInfo.CustomAttributes.PortName = 'UNDEFINED';

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwAgArbnAgAAvl = DataDict.Display;
dHwAgArbnAgAAvl.LongName = 'Handwheel Angle Arbitration Channel a Available';
dHwAgArbnAgAAvl.Description = ['Handwheel Angle Arbitration Channel A Available'];
dHwAgArbnAgAAvl.DocUnits = 'Cnt';
dHwAgArbnAgAAvl.EngDT = dt.lgc;
dHwAgArbnAgAAvl.EngMin = 0;
dHwAgArbnAgAAvl.EngMax = 1;
dHwAgArbnAgAAvl.InitRowCol = [1  1];

dHwAgArbnAgBAvl = DataDict.Display;
dHwAgArbnAgBAvl.LongName = 'Handwheel Angle Arbitration Channel B Available';
dHwAgArbnAgBAvl.Description = ['Handwheel Angle Arbitration Channel B Available'];
dHwAgArbnAgBAvl.DocUnits = 'Cnt';
dHwAgArbnAgBAvl.EngDT = dt.lgc;
dHwAgArbnAgBAvl.EngMin = 0;
dHwAgArbnAgBAvl.EngMax = 1;
dHwAgArbnAgBAvl.InitRowCol = [1  1];

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAgARollgCntrPrev = DataDict.PIM;
HwAgARollgCntrPrev.LongName = 'Handwheel Angle a Rolling Counter Previous';
HwAgARollgCntrPrev.Description = 'HwAgArbnHwAgARollgCntPrev';
HwAgARollgCntrPrev.DocUnits = 'Cnt';
HwAgARollgCntrPrev.EngDT = dt.u08;
HwAgARollgCntrPrev.EngMin = 0;
HwAgARollgCntrPrev.EngMax = 255;
HwAgARollgCntrPrev.InitRowCol = [1  1];

HwAgAStallCntrPrev = DataDict.PIM;
HwAgAStallCntrPrev.LongName = 'Handwheel Angle a Stall Counter Previous';
HwAgAStallCntrPrev.Description = 'HwAgArbnHwAgAStallCntPrev';
HwAgAStallCntrPrev.DocUnits = 'Cnt';
HwAgAStallCntrPrev.EngDT = dt.u08;
HwAgAStallCntrPrev.EngMin = 0;
HwAgAStallCntrPrev.EngMax = 255;
HwAgAStallCntrPrev.InitRowCol = [1  1];


HwAgBRollgCntrPrev = DataDict.PIM;
HwAgBRollgCntrPrev.LongName = 'Handwheel Angle B Rolling Counter Previous';
HwAgBRollgCntrPrev.Description = 'HwAgArbnHwAgBRollgCntPrev';
HwAgBRollgCntrPrev.DocUnits = 'Cnt';
HwAgBRollgCntrPrev.EngDT = dt.u08;
HwAgBRollgCntrPrev.EngMin = 0;
HwAgBRollgCntrPrev.EngMax = 255;
HwAgBRollgCntrPrev.InitRowCol = [1  1];

HwAgBStallCntrPrev = DataDict.PIM;
HwAgBStallCntrPrev.LongName = 'Handwheel Angle B Stall Counter Previous';
HwAgBStallCntrPrev.Description = 'HwAgArbnHwAgBStallCntPrev';
HwAgBStallCntrPrev.DocUnits = 'Cnt';
HwAgBStallCntrPrev.EngDT = dt.u08;
HwAgBStallCntrPrev.EngMin = 0;
HwAgBStallCntrPrev.EngMax = 255;
HwAgBStallCntrPrev.InitRowCol = [1  1];

HwAgPrev = DataDict.PIM;
HwAgPrev.LongName = 'Handwheel Angle Previous';
HwAgPrev.Description = 'HwAgArbnHwAgPrev';
HwAgPrev.DocUnits = 'Cnt';
HwAgPrev.EngDT = dt.float32;
HwAgPrev.EngMin = -900.0;
HwAgPrev.EngMax = 900.0;
HwAgPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
HWAGLIM_HWDEG_F32 = DataDict.Constant;
HWAGLIM_HWDEG_F32.LongName = 'Handwheel Angle Limit';
HWAGLIM_HWDEG_F32.Description = 'Limit on value of Handwheel Angle';
HWAGLIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGLIM_HWDEG_F32.EngDT = dt.float32;
HWAGLIM_HWDEG_F32.EngVal = 900;
HWAGLIM_HWDEG_F32.Header = '';
HWAGLIM_HWDEG_F32.Define = 'Local';
%end of Data Dictionary