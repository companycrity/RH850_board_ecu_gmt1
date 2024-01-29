%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 13-Jan-2016 09:07:36       %
%                                  Created with tool release: 2.28.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM800A = DataDict.FDD;
CM800A.Version = '1.0.X';
CM800A.LongName = 'Synchronous Cyclic Redundancy Check';
CM800A.ShoName  = 'SyncCrc';
CM800A.DesignASIL = 'D';
CM800A.Description = [...
  'CM800A provides an API for software components to run synchronous CRC ' ...
  'calculations with the hardware CRC units on the EA4 micro controller'];
CM800A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SyncCrcInit0 = DataDict.Runnable;
SyncCrcInit0.Context = 'Non-Rte';
SyncCrcInit0.TimeStep = 0;

SyncCrcInit1 = DataDict.Runnable;
SyncCrcInit1.Context = 'Rte';
SyncCrcInit1.TimeStep = 0;

Calc16BitCrc_u08 = DataDict.SrvRunnable;
Calc16BitCrc_u08.Context = 'Rte';
Calc16BitCrc_u08.Return = DataDict.CSReturn;
Calc16BitCrc_u08.Return.Type = 'Standard';
Calc16BitCrc_u08.Return.Min = 0;
Calc16BitCrc_u08.Return.Max = 1;
Calc16BitCrc_u08.Return.TestTolerance = 1;
Calc16BitCrc_u08.Arguments(1) = DataDict.CSArguments;
Calc16BitCrc_u08.Arguments(1).Name = 'DataPtr';
Calc16BitCrc_u08.Arguments(1).EngMin = 0;
Calc16BitCrc_u08.Arguments(1).EngMax = 255;
Calc16BitCrc_u08.Arguments(1).EngDT = dt.u08;
Calc16BitCrc_u08.Arguments(1).Units = 'Cnt';
Calc16BitCrc_u08.Arguments(1).Direction = 'InPtr';
Calc16BitCrc_u08.Arguments(1).InitRowCol = [1  1];
Calc16BitCrc_u08.Arguments(2) = DataDict.CSArguments;
Calc16BitCrc_u08.Arguments(2).Name = 'Len';
Calc16BitCrc_u08.Arguments(2).EngMin = 0;
Calc16BitCrc_u08.Arguments(2).EngMax = 4294967295;
Calc16BitCrc_u08.Arguments(2).EngDT = dt.u32;
Calc16BitCrc_u08.Arguments(2).Units = 'Cnt';
Calc16BitCrc_u08.Arguments(2).Direction = 'In';
Calc16BitCrc_u08.Arguments(2).InitRowCol = [1  1];
Calc16BitCrc_u08.Arguments(3) = DataDict.CSArguments;
Calc16BitCrc_u08.Arguments(3).Name = 'StrtVal';
Calc16BitCrc_u08.Arguments(3).EngMin = 0;
Calc16BitCrc_u08.Arguments(3).EngMax = 65535;
Calc16BitCrc_u08.Arguments(3).EngDT = dt.u16;
Calc16BitCrc_u08.Arguments(3).Units = 'Cnt';
Calc16BitCrc_u08.Arguments(3).Direction = 'In';
Calc16BitCrc_u08.Arguments(3).InitRowCol = [1  1];
Calc16BitCrc_u08.Arguments(4) = DataDict.CSArguments;
Calc16BitCrc_u08.Arguments(4).Name = 'FirstCall';
Calc16BitCrc_u08.Arguments(4).EngMin = 0;
Calc16BitCrc_u08.Arguments(4).EngMax = 1;
Calc16BitCrc_u08.Arguments(4).EngDT = dt.lgc;
Calc16BitCrc_u08.Arguments(4).Units = 'Cnt';
Calc16BitCrc_u08.Arguments(4).Direction = 'In';
Calc16BitCrc_u08.Arguments(4).InitRowCol = [1  1];
Calc16BitCrc_u08.Arguments(5) = DataDict.CSArguments;
Calc16BitCrc_u08.Arguments(5).Name = 'CalcCrcRes';
Calc16BitCrc_u08.Arguments(5).EngMin = 0;
Calc16BitCrc_u08.Arguments(5).EngMax = 65535;
Calc16BitCrc_u08.Arguments(5).EngDT = dt.u16;
Calc16BitCrc_u08.Arguments(5).Units = 'Cnt';
Calc16BitCrc_u08.Arguments(5).Direction = 'Out';
Calc16BitCrc_u08.Arguments(5).InitRowCol = [1  1];

Calc16BitCrc_u16 = DataDict.SrvRunnable;
Calc16BitCrc_u16.Context = 'Rte';
Calc16BitCrc_u16.Return = DataDict.CSReturn;
Calc16BitCrc_u16.Return.Type = 'Standard';
Calc16BitCrc_u16.Return.Min = 0;
Calc16BitCrc_u16.Return.Max = 1;
Calc16BitCrc_u16.Return.TestTolerance = 1;
Calc16BitCrc_u16.Arguments(1) = DataDict.CSArguments;
Calc16BitCrc_u16.Arguments(1).Name = 'DataPtr';
Calc16BitCrc_u16.Arguments(1).EngMin = 0;
Calc16BitCrc_u16.Arguments(1).EngMax = 65535;
Calc16BitCrc_u16.Arguments(1).EngDT = dt.u16;
Calc16BitCrc_u16.Arguments(1).Units = 'Cnt';
Calc16BitCrc_u16.Arguments(1).Direction = 'InPtr';
Calc16BitCrc_u16.Arguments(1).InitRowCol = [1  1];
Calc16BitCrc_u16.Arguments(2) = DataDict.CSArguments;
Calc16BitCrc_u16.Arguments(2).Name = 'Len';
Calc16BitCrc_u16.Arguments(2).EngMin = 0;
Calc16BitCrc_u16.Arguments(2).EngMax = 4294967295;
Calc16BitCrc_u16.Arguments(2).EngDT = dt.u32;
Calc16BitCrc_u16.Arguments(2).Units = 'Cnt';
Calc16BitCrc_u16.Arguments(2).Direction = 'In';
Calc16BitCrc_u16.Arguments(2).InitRowCol = [1  1];
Calc16BitCrc_u16.Arguments(3) = DataDict.CSArguments;
Calc16BitCrc_u16.Arguments(3).Name = 'StrtVal';
Calc16BitCrc_u16.Arguments(3).EngMin = 0;
Calc16BitCrc_u16.Arguments(3).EngMax = 65535;
Calc16BitCrc_u16.Arguments(3).EngDT = dt.u16;
Calc16BitCrc_u16.Arguments(3).Units = 'Cnt';
Calc16BitCrc_u16.Arguments(3).Direction = 'In';
Calc16BitCrc_u16.Arguments(3).InitRowCol = [1  1];
Calc16BitCrc_u16.Arguments(4) = DataDict.CSArguments;
Calc16BitCrc_u16.Arguments(4).Name = 'FirstCall';
Calc16BitCrc_u16.Arguments(4).EngMin = 0;
Calc16BitCrc_u16.Arguments(4).EngMax = 1;
Calc16BitCrc_u16.Arguments(4).EngDT = dt.lgc;
Calc16BitCrc_u16.Arguments(4).Units = 'Cnt';
Calc16BitCrc_u16.Arguments(4).Direction = 'In';
Calc16BitCrc_u16.Arguments(4).InitRowCol = [1  1];
Calc16BitCrc_u16.Arguments(5) = DataDict.CSArguments;
Calc16BitCrc_u16.Arguments(5).Name = 'CalcCrcRes';
Calc16BitCrc_u16.Arguments(5).EngMin = 0;
Calc16BitCrc_u16.Arguments(5).EngMax = 65535;
Calc16BitCrc_u16.Arguments(5).EngDT = dt.u16;
Calc16BitCrc_u16.Arguments(5).Units = 'Cnt';
Calc16BitCrc_u16.Arguments(5).Direction = 'Out';
Calc16BitCrc_u16.Arguments(5).InitRowCol = [1  1];

Calc32BitCrc_u08 = DataDict.SrvRunnable;
Calc32BitCrc_u08.Context = 'Rte';
Calc32BitCrc_u08.Return = DataDict.CSReturn;
Calc32BitCrc_u08.Return.Type = 'Standard';
Calc32BitCrc_u08.Return.Min = 0;
Calc32BitCrc_u08.Return.Max = 1;
Calc32BitCrc_u08.Return.TestTolerance = 1;
Calc32BitCrc_u08.Arguments(1) = DataDict.CSArguments;
Calc32BitCrc_u08.Arguments(1).Name = 'DataPtr';
Calc32BitCrc_u08.Arguments(1).EngMin = 0;
Calc32BitCrc_u08.Arguments(1).EngMax = 255;
Calc32BitCrc_u08.Arguments(1).EngDT = dt.u08;
Calc32BitCrc_u08.Arguments(1).Units = 'Cnt';
Calc32BitCrc_u08.Arguments(1).Direction = 'InPtr';
Calc32BitCrc_u08.Arguments(1).InitRowCol = [1  1];
Calc32BitCrc_u08.Arguments(2) = DataDict.CSArguments;
Calc32BitCrc_u08.Arguments(2).Name = 'Len';
Calc32BitCrc_u08.Arguments(2).EngMin = 0;
Calc32BitCrc_u08.Arguments(2).EngMax = 4294967295;
Calc32BitCrc_u08.Arguments(2).EngDT = dt.u32;
Calc32BitCrc_u08.Arguments(2).Units = 'Cnt';
Calc32BitCrc_u08.Arguments(2).Direction = 'In';
Calc32BitCrc_u08.Arguments(2).InitRowCol = [1  1];
Calc32BitCrc_u08.Arguments(3) = DataDict.CSArguments;
Calc32BitCrc_u08.Arguments(3).Name = 'StrtVal';
Calc32BitCrc_u08.Arguments(3).EngMin = 0;
Calc32BitCrc_u08.Arguments(3).EngMax = 4294967295;
Calc32BitCrc_u08.Arguments(3).EngDT = dt.u32;
Calc32BitCrc_u08.Arguments(3).Units = 'Cnt';
Calc32BitCrc_u08.Arguments(3).Direction = 'In';
Calc32BitCrc_u08.Arguments(3).InitRowCol = [1  1];
Calc32BitCrc_u08.Arguments(4) = DataDict.CSArguments;
Calc32BitCrc_u08.Arguments(4).Name = 'FirstCall';
Calc32BitCrc_u08.Arguments(4).EngMin = 0;
Calc32BitCrc_u08.Arguments(4).EngMax = 1;
Calc32BitCrc_u08.Arguments(4).EngDT = dt.lgc;
Calc32BitCrc_u08.Arguments(4).Units = 'Cnt';
Calc32BitCrc_u08.Arguments(4).Direction = 'In';
Calc32BitCrc_u08.Arguments(4).InitRowCol = [1  1];
Calc32BitCrc_u08.Arguments(5) = DataDict.CSArguments;
Calc32BitCrc_u08.Arguments(5).Name = 'CalcCrcRes';
Calc32BitCrc_u08.Arguments(5).EngMin = 0;
Calc32BitCrc_u08.Arguments(5).EngMax = 4294967295;
Calc32BitCrc_u08.Arguments(5).EngDT = dt.u32;
Calc32BitCrc_u08.Arguments(5).Units = 'Cnt';
Calc32BitCrc_u08.Arguments(5).Direction = 'Out';
Calc32BitCrc_u08.Arguments(5).InitRowCol = [1  1];

Calc32BitCrc_u16 = DataDict.SrvRunnable;
Calc32BitCrc_u16.Context = 'Rte';
Calc32BitCrc_u16.Return = DataDict.CSReturn;
Calc32BitCrc_u16.Return.Type = 'Standard';
Calc32BitCrc_u16.Return.Min = 0;
Calc32BitCrc_u16.Return.Max = 1;
Calc32BitCrc_u16.Return.TestTolerance = 1;
Calc32BitCrc_u16.Arguments(1) = DataDict.CSArguments;
Calc32BitCrc_u16.Arguments(1).Name = 'DataPtr';
Calc32BitCrc_u16.Arguments(1).EngMin = 0;
Calc32BitCrc_u16.Arguments(1).EngMax = 65535;
Calc32BitCrc_u16.Arguments(1).EngDT = dt.u16;
Calc32BitCrc_u16.Arguments(1).Units = 'Cnt';
Calc32BitCrc_u16.Arguments(1).Direction = 'InPtr';
Calc32BitCrc_u16.Arguments(1).InitRowCol = [1  1];
Calc32BitCrc_u16.Arguments(2) = DataDict.CSArguments;
Calc32BitCrc_u16.Arguments(2).Name = 'Len';
Calc32BitCrc_u16.Arguments(2).EngMin = 0;
Calc32BitCrc_u16.Arguments(2).EngMax = 4294967295;
Calc32BitCrc_u16.Arguments(2).EngDT = dt.u32;
Calc32BitCrc_u16.Arguments(2).Units = 'Cnt';
Calc32BitCrc_u16.Arguments(2).Direction = 'In';
Calc32BitCrc_u16.Arguments(2).InitRowCol = [1  1];
Calc32BitCrc_u16.Arguments(3) = DataDict.CSArguments;
Calc32BitCrc_u16.Arguments(3).Name = 'StrtVal';
Calc32BitCrc_u16.Arguments(3).EngMin = 0;
Calc32BitCrc_u16.Arguments(3).EngMax = 4294967295;
Calc32BitCrc_u16.Arguments(3).EngDT = dt.u32;
Calc32BitCrc_u16.Arguments(3).Units = 'Cnt';
Calc32BitCrc_u16.Arguments(3).Direction = 'In';
Calc32BitCrc_u16.Arguments(3).InitRowCol = [1  1];
Calc32BitCrc_u16.Arguments(4) = DataDict.CSArguments;
Calc32BitCrc_u16.Arguments(4).Name = 'FirstCall';
Calc32BitCrc_u16.Arguments(4).EngMin = 0;
Calc32BitCrc_u16.Arguments(4).EngMax = 1;
Calc32BitCrc_u16.Arguments(4).EngDT = dt.lgc;
Calc32BitCrc_u16.Arguments(4).Units = 'Cnt';
Calc32BitCrc_u16.Arguments(4).Direction = 'In';
Calc32BitCrc_u16.Arguments(4).InitRowCol = [1  1];
Calc32BitCrc_u16.Arguments(5) = DataDict.CSArguments;
Calc32BitCrc_u16.Arguments(5).Name = 'CalcCrcRes';
Calc32BitCrc_u16.Arguments(5).EngMin = 0;
Calc32BitCrc_u16.Arguments(5).EngMax = 4294967295;
Calc32BitCrc_u16.Arguments(5).EngDT = dt.u32;
Calc32BitCrc_u16.Arguments(5).Units = 'Cnt';
Calc32BitCrc_u16.Arguments(5).Direction = 'Out';
Calc32BitCrc_u16.Arguments(5).InitRowCol = [1  1];

Calc32BitCrc_u32 = DataDict.SrvRunnable;
Calc32BitCrc_u32.Context = 'Rte';
Calc32BitCrc_u32.Return = DataDict.CSReturn;
Calc32BitCrc_u32.Return.Type = 'Standard';
Calc32BitCrc_u32.Return.Min = 0;
Calc32BitCrc_u32.Return.Max = 1;
Calc32BitCrc_u32.Return.TestTolerance = 1;
Calc32BitCrc_u32.Arguments(1) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(1).Name = 'DataPtr';
Calc32BitCrc_u32.Arguments(1).EngMin = 0;
Calc32BitCrc_u32.Arguments(1).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(1).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(1).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(1).Direction = 'InPtr';
Calc32BitCrc_u32.Arguments(1).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(2) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(2).Name = 'Len';
Calc32BitCrc_u32.Arguments(2).EngMin = 0;
Calc32BitCrc_u32.Arguments(2).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(2).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(2).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(2).Direction = 'In';
Calc32BitCrc_u32.Arguments(2).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(3) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(3).Name = 'StrtVal';
Calc32BitCrc_u32.Arguments(3).EngMin = 0;
Calc32BitCrc_u32.Arguments(3).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(3).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(3).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(3).Direction = 'In';
Calc32BitCrc_u32.Arguments(3).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(4) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(4).Name = 'FirstCall';
Calc32BitCrc_u32.Arguments(4).EngMin = 0;
Calc32BitCrc_u32.Arguments(4).EngMax = 1;
Calc32BitCrc_u32.Arguments(4).EngDT = dt.lgc;
Calc32BitCrc_u32.Arguments(4).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(4).Direction = 'In';
Calc32BitCrc_u32.Arguments(4).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(5) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(5).Name = 'CalcCrcRes';
Calc32BitCrc_u32.Arguments(5).EngMin = 0;
Calc32BitCrc_u32.Arguments(5).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(5).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(5).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(5).Direction = 'Out';
Calc32BitCrc_u32.Arguments(5).InitRowCol = [1  1];

Calc8BitCrc = DataDict.SrvRunnable;
Calc8BitCrc.Context = 'Rte';
Calc8BitCrc.Return = DataDict.CSReturn;
Calc8BitCrc.Return.Type = 'Standard';
Calc8BitCrc.Return.Min = 0;
Calc8BitCrc.Return.Max = 1;
Calc8BitCrc.Return.TestTolerance = 1;
Calc8BitCrc.Arguments(1) = DataDict.CSArguments;
Calc8BitCrc.Arguments(1).Name = 'DataPtr';
Calc8BitCrc.Arguments(1).EngMin = 0;
Calc8BitCrc.Arguments(1).EngMax = 255;
Calc8BitCrc.Arguments(1).EngDT = dt.u08;
Calc8BitCrc.Arguments(1).Units = 'Cnt';
Calc8BitCrc.Arguments(1).Direction = 'InPtr';
Calc8BitCrc.Arguments(1).InitRowCol = [1  1];
Calc8BitCrc.Arguments(2) = DataDict.CSArguments;
Calc8BitCrc.Arguments(2).Name = 'Len';
Calc8BitCrc.Arguments(2).EngMin = 0;
Calc8BitCrc.Arguments(2).EngMax = 4294967295;
Calc8BitCrc.Arguments(2).EngDT = dt.u32;
Calc8BitCrc.Arguments(2).Units = 'Cnt';
Calc8BitCrc.Arguments(2).Direction = 'In';
Calc8BitCrc.Arguments(2).InitRowCol = [1  1];
Calc8BitCrc.Arguments(3) = DataDict.CSArguments;
Calc8BitCrc.Arguments(3).Name = 'StrtVal';
Calc8BitCrc.Arguments(3).EngMin = 0;
Calc8BitCrc.Arguments(3).EngMax = 255;
Calc8BitCrc.Arguments(3).EngDT = dt.u08;
Calc8BitCrc.Arguments(3).Units = 'Cnt';
Calc8BitCrc.Arguments(3).Direction = 'In';
Calc8BitCrc.Arguments(3).InitRowCol = [1  1];
Calc8BitCrc.Arguments(4) = DataDict.CSArguments;
Calc8BitCrc.Arguments(4).Name = 'FirstCall';
Calc8BitCrc.Arguments(4).EngMin = 0;
Calc8BitCrc.Arguments(4).EngMax = 1;
Calc8BitCrc.Arguments(4).EngDT = dt.lgc;
Calc8BitCrc.Arguments(4).Units = 'Cnt';
Calc8BitCrc.Arguments(4).Direction = 'In';
Calc8BitCrc.Arguments(4).InitRowCol = [1  1];
Calc8BitCrc.Arguments(5) = DataDict.CSArguments;
Calc8BitCrc.Arguments(5).Name = 'CalcCrcRes';
Calc8BitCrc.Arguments(5).EngMin = 0;
Calc8BitCrc.Arguments(5).EngMax = 255;
Calc8BitCrc.Arguments(5).EngDT = dt.u08;
Calc8BitCrc.Arguments(5).Units = 'Cnt';
Calc8BitCrc.Arguments(5).Direction = 'Out';
Calc8BitCrc.Arguments(5).InitRowCol = [1  1];

Calc8BitCrc0X2F = DataDict.SrvRunnable;
Calc8BitCrc0X2F.Context = 'Rte';
Calc8BitCrc0X2F.Return = DataDict.CSReturn;
Calc8BitCrc0X2F.Return.Type = 'Standard';
Calc8BitCrc0X2F.Return.Min = 0;
Calc8BitCrc0X2F.Return.Max = 1;
Calc8BitCrc0X2F.Return.TestTolerance = 1;
Calc8BitCrc0X2F.Arguments(1) = DataDict.CSArguments;
Calc8BitCrc0X2F.Arguments(1).Name = 'DataPtr';
Calc8BitCrc0X2F.Arguments(1).EngMin = 0;
Calc8BitCrc0X2F.Arguments(1).EngMax = 255;
Calc8BitCrc0X2F.Arguments(1).EngDT = dt.u08;
Calc8BitCrc0X2F.Arguments(1).Units = 'Cnt';
Calc8BitCrc0X2F.Arguments(1).Direction = 'InPtr';
Calc8BitCrc0X2F.Arguments(1).InitRowCol = [1  1];
Calc8BitCrc0X2F.Arguments(2) = DataDict.CSArguments;
Calc8BitCrc0X2F.Arguments(2).Name = 'Len';
Calc8BitCrc0X2F.Arguments(2).EngMin = 0;
Calc8BitCrc0X2F.Arguments(2).EngMax = 4294967295;
Calc8BitCrc0X2F.Arguments(2).EngDT = dt.u32;
Calc8BitCrc0X2F.Arguments(2).Units = 'Cnt';
Calc8BitCrc0X2F.Arguments(2).Direction = 'In';
Calc8BitCrc0X2F.Arguments(2).InitRowCol = [1  1];
Calc8BitCrc0X2F.Arguments(3) = DataDict.CSArguments;
Calc8BitCrc0X2F.Arguments(3).Name = 'StrtVal';
Calc8BitCrc0X2F.Arguments(3).EngMin = 0;
Calc8BitCrc0X2F.Arguments(3).EngMax = 255;
Calc8BitCrc0X2F.Arguments(3).EngDT = dt.u08;
Calc8BitCrc0X2F.Arguments(3).Units = 'Cnt';
Calc8BitCrc0X2F.Arguments(3).Direction = 'In';
Calc8BitCrc0X2F.Arguments(3).InitRowCol = [1  1];
Calc8BitCrc0X2F.Arguments(4) = DataDict.CSArguments;
Calc8BitCrc0X2F.Arguments(4).Name = 'FirstCall';
Calc8BitCrc0X2F.Arguments(4).EngMin = 0;
Calc8BitCrc0X2F.Arguments(4).EngMax = 1;
Calc8BitCrc0X2F.Arguments(4).EngDT = dt.lgc;
Calc8BitCrc0X2F.Arguments(4).Units = 'Cnt';
Calc8BitCrc0X2F.Arguments(4).Direction = 'In';
Calc8BitCrc0X2F.Arguments(4).InitRowCol = [1  1];
Calc8BitCrc0X2F.Arguments(5) = DataDict.CSArguments;
Calc8BitCrc0X2F.Arguments(5).Name = 'CalcCrcRes';
Calc8BitCrc0X2F.Arguments(5).EngMin = 0;
Calc8BitCrc0X2F.Arguments(5).EngMax = 255;
Calc8BitCrc0X2F.Arguments(5).EngDT = dt.u08;
Calc8BitCrc0X2F.Arguments(5).Units = 'Cnt';
Calc8BitCrc0X2F.Arguments(5).Direction = 'Out';
Calc8BitCrc0X2F.Arguments(5).InitRowCol = [1  1];

ResvCrcHwUnit = DataDict.SrvRunnable;
ResvCrcHwUnit.Context = 'Rte';
ResvCrcHwUnit.Return = DataDict.CSReturn;
ResvCrcHwUnit.Return.Type = 'Standard';
ResvCrcHwUnit.Return.Min = 0;
ResvCrcHwUnit.Return.Max = 1;
ResvCrcHwUnit.Return.TestTolerance = 1;
ResvCrcHwUnit.Arguments(1) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(1).Name = 'Mod';
ResvCrcHwUnit.Arguments(1).EngMin = CrcHwResvMod1.CRCHWRESVMOD_RELS;
ResvCrcHwUnit.Arguments(1).EngMax = CrcHwResvMod1.CRCHWRESVMOD_RESV;
ResvCrcHwUnit.Arguments(1).EngDT = enum.CrcHwResvMod1;
ResvCrcHwUnit.Arguments(1).Units = 'Cnt';
ResvCrcHwUnit.Arguments(1).Direction = 'In';
ResvCrcHwUnit.Arguments(1).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(2) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(2).Name = 'CrcCfg';
ResvCrcHwUnit.Arguments(2).EngMin = CrcHwResvCfg1.CRCHWRESVCFG_32BITCRC32BITWIDTH;
ResvCrcHwUnit.Arguments(2).EngMax = CrcHwResvCfg1.CRCHWRESVCFG_8BITCRCH2F;
ResvCrcHwUnit.Arguments(2).EngDT = enum.CrcHwResvCfg1;
ResvCrcHwUnit.Arguments(2).Units = 'Cnt';
ResvCrcHwUnit.Arguments(2).Direction = 'In';
ResvCrcHwUnit.Arguments(2).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(3) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(3).Name = 'CrcHwInRegAdr';
ResvCrcHwUnit.Arguments(3).EngMin = 0;
ResvCrcHwUnit.Arguments(3).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(3).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(3).Units = 'Cnt';
ResvCrcHwUnit.Arguments(3).Direction = 'Out';
ResvCrcHwUnit.Arguments(3).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(4) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(4).Name = 'CrcHwOutRegAdr';
ResvCrcHwUnit.Arguments(4).EngMin = 0;
ResvCrcHwUnit.Arguments(4).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(4).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(4).Units = 'Cnt';
ResvCrcHwUnit.Arguments(4).Direction = 'Out';
ResvCrcHwUnit.Arguments(4).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(5) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(5).Name = 'StrtVal';
ResvCrcHwUnit.Arguments(5).EngMin = 0;
ResvCrcHwUnit.Arguments(5).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(5).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(5).Units = 'Cnt';
ResvCrcHwUnit.Arguments(5).Direction = 'In';
ResvCrcHwUnit.Arguments(5).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(6) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(6).Name = 'ResvKey';
ResvCrcHwUnit.Arguments(6).EngMin = 0;
ResvCrcHwUnit.Arguments(6).EngMax = 65535;
ResvCrcHwUnit.Arguments(6).EngDT = dt.u16;
ResvCrcHwUnit.Arguments(6).Units = 'Cnt';
ResvCrcHwUnit.Arguments(6).Direction = 'InOut';
ResvCrcHwUnit.Arguments(6).InitRowCol = [1  1];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

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
CrcHwSts = DataDict.PIM;
CrcHwSts.LongName = 'CRC Hardware Status';
CrcHwSts.Description = [...
  'Contains the status of the hardware units and the tasks that are calcu' ...
  'lating a CRC'];
CrcHwSts.DocUnits = 'Cnt';
CrcHwSts.EngDT = struct.CrcHwStsRec1;
CrcHwSts.EngMin = [struct('TaskId',0,'CrcHwSts',0)];
CrcHwSts.EngMax = [struct('TaskId',65535,'CrcHwSts',255)];
CrcHwSts.InitRowCol = [4  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
