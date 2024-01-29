%-----------------------------------------------------------------------%
% EA4 Component Data Dictionary - Created on 10-Feb-2015 17:22:09       %
%                                 Created with tool release: 2.1.0      %
%-----------------------------------------------------------------------%

AR102A = DataDict.FDD;
AR102A.Version = '1.0.X';
AR102A.LongName = 'Nexteer Time';
AR102A.ShoName  = 'NxtrTi';
AR102A.DesignASIL = 'D';
AR102A.Description = 'Nexteer Time Library';
AR102A.Ntc = {'NTCNR_0X039'};
AR102A.Dependencies = ...
	{};


%-------------------------------------
% Runnable Definitions
%-------------------------------------
NxtrTiInit1 = DataDict.Runnable;
NxtrTiInit1.TimeStep = 0.000;

NxtrTiPer1 = DataDict.Runnable;
NxtrTiPer1.TimeStep = 0.002;

NxtrTiInit0 = DataDict.SrvRunnable;
NxtrTiInit0.Context = 'Non-Rte';
NxtrTiInit0.Return = 'None';

GetRefTmr100MicroSec32bit = DataDict.SrvRunnable;
GetRefTmr100MicroSec32bit.Context = 'Both';
GetRefTmr100MicroSec32bit.Return = 'None';
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';

GetRefTmr1MicroSec32bit = DataDict.SrvRunnable;
GetRefTmr1MicroSec32bit.Context = 'Both';
GetRefTmr1MicroSec32bit.Return = 'None';
GetRefTmr1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr1MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';

GetTiSpan100MicroSec32bit = DataDict.SrvRunnable;
GetTiSpan100MicroSec32bit.Context = 'Both';
GetTiSpan100MicroSec32bit.Return = 'None';
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';

GetTiSpan1MicroSec32bit = DataDict.SrvRunnable;
GetTiSpan1MicroSec32bit.Context = 'Both';
GetTiSpan1MicroSec32bit.Return = 'None';
GetTiSpan1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan1MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan1MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan1MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';


%-------------------------------------
% Client Definitions
%-------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.Return = 'Standard';
SetNtcSts.CallLocation = {'NxtrTiPer1'};
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';



%------------------------------------
% Input Signal Definition Begins Here
%------------------------------------

%-------------------------------------
% Output Signal Definition Begins Here
%-------------------------------------

%-----------------------------------------------
% Inter-Runnable Variable Definition Begins Here
%-----------------------------------------------

%------------------------------------
% Calibrations Definition Begins Here
%------------------------------------

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
%end of Data Dictionary