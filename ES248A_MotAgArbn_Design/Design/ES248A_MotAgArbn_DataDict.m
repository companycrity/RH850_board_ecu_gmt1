%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Apr-2016 09:47:44       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 3 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: tzbsjd %          %
%%-----------------------------------------------------------------------%

ES248A = DataDict.FDD;
ES248A.Version = '1.1.X';
ES248A.LongName = 'Motor Angle Arbitration';
ES248A.ShoName  = 'MotAgArbn';
ES248A.DesignASIL = 'D';
ES248A.Description = [...
  'This function will arbitrate between to motor angle measurements in th' ...
  'e motor control loop.  This design assumes that motor angle A is the p' ...
  'rimary sensor and will use it when possible.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAgArbnInit1 = DataDict.Runnable;
MotAgArbnInit1.Context = 'Rte';
MotAgArbnInit1.TimeStep = 0;
MotAgArbnInit1.Description = 'Intialization';

MotAgArbnPer1 = DataDict.Runnable;
MotAgArbnPer1.Context = 'NonRte';
MotAgArbnPer1.TimeStep = 'MotorControl';
MotAgArbnPer1.Description = 'Periodic 1';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlMotAgAMecl = DataDict.IpSignal;
MotCtrlMotAgAMecl.LongName = 'Motor Angle A';
MotCtrlMotAgAMecl.Description = 'Motor angle A in mechanical degrees.';
MotCtrlMotAgAMecl.DocUnits = 'MotRev';
MotCtrlMotAgAMecl.EngDT = dt.u0p16;
MotCtrlMotAgAMecl.EngInit = 0;
MotCtrlMotAgAMecl.EngMin = 0;
MotCtrlMotAgAMecl.EngMax = 0.9999847412;
MotCtrlMotAgAMecl.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgAMecl.ReadType = 'NonRte';


MotCtrlMotAgAMeclQlfr = DataDict.IpSignal;
MotCtrlMotAgAMeclQlfr.LongName = 'Motor Angle a Qualifier';
MotCtrlMotAgAMeclQlfr.Description = 'Motor angle A qualifier. ';
MotCtrlMotAgAMeclQlfr.DocUnits = 'Cnt';
MotCtrlMotAgAMeclQlfr.EngDT = enum.SigQlfr1;
MotCtrlMotAgAMeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgAMeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgAMeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCtrlMotAgAMeclQlfr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgAMeclQlfr.ReadType = 'NonRte';


MotCtrlMotAgAMeclRollgCntr = DataDict.IpSignal;
MotCtrlMotAgAMeclRollgCntr.LongName = 'Motor Angle a Rolling Counter';
MotCtrlMotAgAMeclRollgCntr.Description = 'Motor angle A rolling counter';
MotCtrlMotAgAMeclRollgCntr.DocUnits = 'Cnt';
MotCtrlMotAgAMeclRollgCntr.EngDT = dt.u08;
MotCtrlMotAgAMeclRollgCntr.EngInit = 0;
MotCtrlMotAgAMeclRollgCntr.EngMin = 0;
MotCtrlMotAgAMeclRollgCntr.EngMax = 255;
MotCtrlMotAgAMeclRollgCntr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgAMeclRollgCntr.ReadType = 'NonRte';


MotCtrlMotAgBMecl = DataDict.IpSignal;
MotCtrlMotAgBMecl.LongName = ' Motor angle B in mechanical degrees.';
MotCtrlMotAgBMecl.Description = 'Motor angle B in mechanical degrees.';
MotCtrlMotAgBMecl.DocUnits = 'MotRev';
MotCtrlMotAgBMecl.EngDT = dt.u0p16;
MotCtrlMotAgBMecl.EngInit = 0;
MotCtrlMotAgBMecl.EngMin = 0;
MotCtrlMotAgBMecl.EngMax = 0.9999847412;
MotCtrlMotAgBMecl.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgBMecl.ReadType = 'NonRte';


MotCtrlMotAgBMeclQlfr = DataDict.IpSignal;
MotCtrlMotAgBMeclQlfr.LongName = 'Motor Angle B Qualifier';
MotCtrlMotAgBMeclQlfr.Description = 'Motor angle B qualifier.';
MotCtrlMotAgBMeclQlfr.DocUnits = 'Cnt';
MotCtrlMotAgBMeclQlfr.EngDT = enum.SigQlfr1;
MotCtrlMotAgBMeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgBMeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgBMeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCtrlMotAgBMeclQlfr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgBMeclQlfr.ReadType = 'NonRte';


MotCtrlMotAgBMeclRollgCntr = DataDict.IpSignal;
MotCtrlMotAgBMeclRollgCntr.LongName = 'Motor Angle B Rolling Counter';
MotCtrlMotAgBMeclRollgCntr.Description = 'Motor angle B rolling counter';
MotCtrlMotAgBMeclRollgCntr.DocUnits = 'Cnt';
MotCtrlMotAgBMeclRollgCntr.EngDT = dt.u08;
MotCtrlMotAgBMeclRollgCntr.EngInit = 0;
MotCtrlMotAgBMeclRollgCntr.EngMin = 0;
MotCtrlMotAgBMeclRollgCntr.EngMax = 255;
MotCtrlMotAgBMeclRollgCntr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgBMeclRollgCntr.ReadType = 'NonRte';


MotCtrlMotAgMeclCorrlnSt = DataDict.IpSignal;
MotCtrlMotAgMeclCorrlnSt.LongName = 'Motor Angle Correlation Status';
MotCtrlMotAgMeclCorrlnSt.Description = 'Motor angle correlation status';
MotCtrlMotAgMeclCorrlnSt.DocUnits = 'Cnt';
MotCtrlMotAgMeclCorrlnSt.EngDT = dt.b08;
MotCtrlMotAgMeclCorrlnSt.EngInit = 7;
MotCtrlMotAgMeclCorrlnSt.EngMin = 0;
MotCtrlMotAgMeclCorrlnSt.EngMax = 7;
MotCtrlMotAgMeclCorrlnSt.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgMeclCorrlnSt.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlMotAgMecl = DataDict.OpSignal;
MotCtrlMotAgMecl.LongName = 'Motor Control Motor Angle Mechanical';
MotCtrlMotAgMecl.Description = [...
  'Arbitrated motor angle in mechanical degrees'];
MotCtrlMotAgMecl.DocUnits = 'MotRev';
MotCtrlMotAgMecl.SwcShoName = 'MotAgArbn';
MotCtrlMotAgMecl.EngDT = dt.u0p16;
MotCtrlMotAgMecl.EngInit = 0;
MotCtrlMotAgMecl.EngMin = 0;
MotCtrlMotAgMecl.EngMax = 0.9999847412;
MotCtrlMotAgMecl.TestTolerance = 0.0001220703125;
MotCtrlMotAgMecl.WrittenIn = {'MotAgArbnPer1'};
MotCtrlMotAgMecl.WriteType = 'NonRte';



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
MotAgARollgCntPrev = DataDict.PIM;
MotAgARollgCntPrev.LongName = 'Motor Angle A Rolling Counter Previous';
MotAgARollgCntPrev.Description = [...
  'Previous instance of motor angle A rolling count'];
MotAgARollgCntPrev.DocUnits = 'Cnt';
MotAgARollgCntPrev.EngDT = dt.u08;
MotAgARollgCntPrev.EngMin = 0;
MotAgARollgCntPrev.EngMax = 255;
MotAgARollgCntPrev.InitRowCol = [1  1];


MotAgAStallCntPrev = DataDict.PIM;
MotAgAStallCntPrev.LongName = 'Motor Angle A Stall Counter Previous';
MotAgAStallCntPrev.Description = [...
  'Previous instance of motor angle A stall count'];
MotAgAStallCntPrev.DocUnits = 'Cnt';
MotAgAStallCntPrev.EngDT = dt.u08;
MotAgAStallCntPrev.EngMin = 0;
MotAgAStallCntPrev.EngMax = 255;
MotAgAStallCntPrev.InitRowCol = [1  1];


MotAgBRollgCntPrev = DataDict.PIM;
MotAgBRollgCntPrev.LongName = 'Motor Angle B Rolling Counter Previous';
MotAgBRollgCntPrev.Description = [...
  'Previous instance of motor angle B rolling count'];
MotAgBRollgCntPrev.DocUnits = 'Cnt';
MotAgBRollgCntPrev.EngDT = dt.u08;
MotAgBRollgCntPrev.EngMin = 0;
MotAgBRollgCntPrev.EngMax = 255;
MotAgBRollgCntPrev.InitRowCol = [1  1];


MotAgBStallCntPrev = DataDict.PIM;
MotAgBStallCntPrev.LongName = 'Motor Angle B Stall Counter Previous';
MotAgBStallCntPrev.Description = [...
  'Previous instance of motor angle B stall count'];
MotAgBStallCntPrev.DocUnits = 'Cnt';
MotAgBStallCntPrev.EngDT = dt.u08;
MotAgBStallCntPrev.EngMin = 0;
MotAgBStallCntPrev.EngMax = 255;
MotAgBStallCntPrev.InitRowCol = [1  1];


MotAgMeclPrev = DataDict.PIM;
MotAgMeclPrev.LongName = 'Motor Angle Mechanical Previous';
MotAgMeclPrev.Description = [...
  'Previous instance of motor angle mechanical'];
MotAgMeclPrev.DocUnits = 'Cnt';
MotAgMeclPrev.EngDT = dt.u0p16;
MotAgMeclPrev.EngMin = 0;
MotAgMeclPrev.EngMax = 0.9999847412;
MotAgMeclPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
MAXSTALL_CNT_U08 = DataDict.Constant;
MAXSTALL_CNT_U08.LongName = 'Maximum Stall Count';
MAXSTALL_CNT_U08.Description = [...
  'Maximum stall count before deemed not available'];
MAXSTALL_CNT_U08.DocUnits = 'Cnt';
MAXSTALL_CNT_U08.EngDT = dt.u08;
MAXSTALL_CNT_U08.EngVal = 10;
MAXSTALL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
