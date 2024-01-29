%------------------------------------------------------------------%
% Component Data Dictionary - Created on 26-Jan-2015 15:55:13      %
%                             Created with tool release: X.X.X     %
%------------------------------------------------------------------%

ES250A = DataDict.FDD;
ES250A.Version = '0.0.X';
ES250A.Owner = 'Kushion';
ES250A.LongName = 'Battery or Switched Battery Voltage Measurement and Arbitration';
ES250A.ShoName  = 'BattVltg';
ES250A.DesignASIL = 'B';
ES250A.Description = [...
  'Function produces an output voltage that is used by the software appli' ...
  'cation'];
ES250A.Ntc = {};
ES250A.Dependencies = ...
	{};


%-------------------------------------
% Runnable Definitions
%-------------------------------------
BattVltgPer1 = DataDict.Runnable;
BattVltgPer1.TimeStep = 0.002;


%-------------------------------------
% Client Definitions
%-------------------------------------

%------------------------------------
% Input Signal Definition Begins Here
%------------------------------------
BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.EngInit = 6;
BattVltg.EngMin = 6;
BattVltg.EngMax = 26.5;
BattVltg.EngDT = dt.float32;
BattVltg.MinReqdASIL = 'B';
BattVltg.ReadIn = {'BattVltgPer1'};
BattVltg.ReadType = 'Rte';


BattVltgSwd1 = DataDict.IpSignal;
BattVltgSwd1.LongName = 'Switched Battery Voltage 1';
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.EngInit = 6;
BattVltgSwd1.EngMin = 6;
BattVltgSwd1.EngMax = 16;
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.MinReqdASIL = 'B';
BattVltgSwd1.ReadIn = {'BattVltgPer1'};
BattVltgSwd1.ReadType = 'Rte';


BattVltgSwd2 = DataDict.IpSignal;
BattVltgSwd2.LongName = 'Switched Battery Voltage 2';
BattVltgSwd2.DocUnits = 'Volt';
BattVltgSwd2.EngInit = 6;
BattVltgSwd2.EngMin = 6;
BattVltgSwd2.EngMax = 16;
BattVltgSwd2.EngDT = dt.float32;
BattVltgSwd2.MinReqdASIL = 'B';
BattVltgSwd2.ReadIn = {'BattVltgPer1'};
BattVltgSwd2.ReadType = 'Rte';


BattSwdVltgCorrlnSts = DataDict.IpSignal;
BattSwdVltgCorrlnSts.LongName = 'Battery Switched Voltage Correlation Status';
BattSwdVltgCorrlnSts.DocUnits = 'Cnt';
BattSwdVltgCorrlnSts.EngInit = BattSwdVltgCorrlnSts1.BSVCS_NOFLT;
BattSwdVltgCorrlnSts.EngMin = BattSwdVltgCorrlnSts1.BSVCS_NOFLT;
BattSwdVltgCorrlnSts.EngMax = BattSwdVltgCorrlnSts1.BSVCS_NOCORRLN;
BattSwdVltgCorrlnSts.EngDT = enum.BattSwdVltgCorrlnSts1;
BattSwdVltgCorrlnSts.MinReqdASIL = 'B';
BattSwdVltgCorrlnSts.ReadIn = {'BattVltgPer1'};
BattSwdVltgCorrlnSts.ReadType = 'Rte';



%-------------------------------------
% Output Signal Definition Begins Here
%-------------------------------------
BrdgVltg = DataDict.OpSignal;
BrdgVltg.LongName = 'Bridged Voltage';
BrdgVltg.Description = 'Output Bridged Voltage';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.SwcShoName = 'BattVltg';
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.EngDT = dt.float32;
BrdgVltg.TestTolerance = 999;
BrdgVltg.WrittenIn = {'BattVltgPer1'};
BrdgVltg.WriteType = 'Rte';



%-----------------------------------------------
% Inter-Runnable Variable Definition Begins Here
%-----------------------------------------------

%------------------------------------
% Calibrations Definition Begins Here
%------------------------------------
BattVltgSwdMax = DataDict.Calibration;
BattVltgSwdMax.LongName = 'Switched Maximum Voltage';
BattVltgSwdMax.Description = [...
  'Maximum voltage at which switched voltage saturates'];
BattVltgSwdMax.DocUnits = 'Volt';
BattVltgSwdMax.EngVal = 16;
BattVltgSwdMax.EngMin = 6;
BattVltgSwdMax.EngMax = 26.5;
BattVltgSwdMax.EngDT = dt.float32;
BattVltgSwdMax.ProgrammedBy = 'Nexteer';
BattVltgSwdMax.Cardinality = 'N';
BattVltgSwdMax.CustomerVisible = false;
BattVltgSwdMax.Online = false;
BattVltgSwdMax.Impact = 'L';
BattVltgSwdMax.SafetyRating = 'B';
BattVltgSwdMax.TuningOwner = 'FDD';
BattVltgSwdMax.GraphLink = '';
BattVltgSwdMax.Monotony = 'None';
BattVltgSwdMax.MaxGrad = 999;



%-------------------------------------------
% Non-Volatile Memory Definition Begins Here
%-------------------------------------------

%----------------------------------------
% Display Variable Definition Begins Here
%----------------------------------------

%-------------------------------------------
% Per-Instance Memory Definition Begins Here
%-------------------------------------------

%--------------------------------
% Constant Definition Begins Here
%--------------------------------
BRDGFLTVLTG_VOLT_FLOAT32 = DataDict.Constant;
BRDGFLTVLTG_VOLT_FLOAT32.LongName = 'Bridge Fault Voltage';
BRDGFLTVLTG_VOLT_FLOAT32.Description = [...
  'Value that is output by this FDD if BattVltg signal is at fault'];
BRDGFLTVLTG_VOLT_FLOAT32.DocUnits = 'Volt';
BRDGFLTVLTG_VOLT_FLOAT32.EngVal = 18.0;
BRDGFLTVLTG_VOLT_FLOAT32.EngDT = dt.float32;


BRDGVLTGMAX_VOLT_FLOAT32 = DataDict.Constant;
BRDGVLTGMAX_VOLT_FLOAT32.LongName = 'Maximum Bridge Voltage';
BRDGVLTGMAX_VOLT_FLOAT32.Description = 'The maximum value the Bridge Voltage can acheive before it saturates';
BRDGVLTGMAX_VOLT_FLOAT32.DocUnits = 'Volt';
BRDGVLTGMAX_VOLT_FLOAT32.EngVal = 26.5;
BRDGVLTGMAX_VOLT_FLOAT32.EngDT = dt.float32;


BRDGVLTGMIN_VOLT_FLOAT32 = DataDict.Constant;
BRDGVLTGMIN_VOLT_FLOAT32.LongName = 'Minimum Bridge Voltage';
BRDGVLTGMIN_VOLT_FLOAT32.Description = 'The maximum value the Bridge Voltage can acheive';
BRDGVLTGMIN_VOLT_FLOAT32.DocUnits = 'Volt';
BRDGVLTGMIN_VOLT_FLOAT32.EngVal = 6.0;
BRDGVLTGMIN_VOLT_FLOAT32.EngDT = dt.float32;

%end of Data Dictionary