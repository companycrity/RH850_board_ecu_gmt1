%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 31-Mar-2016 10:14:12       %
%                                  Created with tool release: 2.35.0     %
%                                  Synergy file: %version: 7 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: wzvp6q %          %
%%-----------------------------------------------------------------------%

CM101A = DataDict.FDD;
CM101A.Version = '3.0.X';
CM101A.LongName = 'Exception Handling';
CM101A.ShoName  = 'ExcpnHndlg';
CM101A.DesignASIL = 'D';
CM101A.Description = [...
  'Handles exceptions, FE server functions and sets pre OS start up fault' ...
  's'];
CM101A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AlgnErrIrq = DataDict.Runnable;
AlgnErrIrq.Context = 'Non-Rte';
AlgnErrIrq.TimeStep = 'ISR';

ExcpnHndlgInit1 = DataDict.Runnable;
ExcpnHndlgInit1.Context = 'Non-Rte';
ExcpnHndlgInit1.TimeStep = 0;

ExcpnHndlgInit2 = DataDict.Runnable;
ExcpnHndlgInit2.Context = 'Rte';
ExcpnHndlgInit2.TimeStep = 0;

ExcpnHndlgPer1 = DataDict.Runnable;
ExcpnHndlgPer1.Context = 'Rte';
ExcpnHndlgPer1.TimeStep = 0.002;

FpuErrIrq = DataDict.Runnable;
FpuErrIrq.Context = 'Non-Rte';
FpuErrIrq.TimeStep = 'ISR';

ResdOperIrq = DataDict.Runnable;
ResdOperIrq.Context = 'Non-Rte';
ResdOperIrq.TimeStep = 'ISR';

SysErrIrq = DataDict.Runnable;
SysErrIrq.Context = 'Non-Rte';
SysErrIrq.TimeStep = 'ISR';

ChkForStrtUpTest = DataDict.SrvRunnable;
ChkForStrtUpTest.Context = 'Both';
ChkForStrtUpTest.Return = DataDict.CSReturn;
ChkForStrtUpTest.Return.Type = 'None';
ChkForStrtUpTest.Return.Min = [];
ChkForStrtUpTest.Return.Max = [];
ChkForStrtUpTest.Return.TestTolerance = [];
ChkForStrtUpTest.Arguments(1) = DataDict.CSArguments;
ChkForStrtUpTest.Arguments(1).Name = 'ExecStrtUpTest';
ChkForStrtUpTest.Arguments(1).EngMin = 0;
ChkForStrtUpTest.Arguments(1).EngMax = 1;
ChkForStrtUpTest.Arguments(1).EngDT = dt.lgc;
ChkForStrtUpTest.Arguments(1).Units = 'Cnt';
ChkForStrtUpTest.Arguments(1).Direction = 'Out';
ChkForStrtUpTest.Arguments(1).InitRowCol = [1  1];

FeNmiClkMonr0RtLowrLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr0RtLowrLimFlt.Context = 'Non-Rte';
FeNmiClkMonr0RtLowrLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr0RtLowrLimFlt.Return.Type = 'None';
FeNmiClkMonr0RtLowrLimFlt.Return.Min = [];
FeNmiClkMonr0RtLowrLimFlt.Return.Max = [];
FeNmiClkMonr0RtLowrLimFlt.Return.TestTolerance = [];

FeNmiClkMonr0RtUpprLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr0RtUpprLimFlt.Context = 'Non-Rte';
FeNmiClkMonr0RtUpprLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr0RtUpprLimFlt.Return.Type = 'None';
FeNmiClkMonr0RtUpprLimFlt.Return.Min = [];
FeNmiClkMonr0RtUpprLimFlt.Return.Max = [];
FeNmiClkMonr0RtUpprLimFlt.Return.TestTolerance = [];

FeNmiClkMonr1RtLowrLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr1RtLowrLimFlt.Context = 'Non-Rte';
FeNmiClkMonr1RtLowrLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr1RtLowrLimFlt.Return.Type = 'None';
FeNmiClkMonr1RtLowrLimFlt.Return.Min = [];
FeNmiClkMonr1RtLowrLimFlt.Return.Max = [];
FeNmiClkMonr1RtLowrLimFlt.Return.TestTolerance = [];

FeNmiClkMonr1RtUpprLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr1RtUpprLimFlt.Context = 'Non-Rte';
FeNmiClkMonr1RtUpprLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr1RtUpprLimFlt.Return.Type = 'None';
FeNmiClkMonr1RtUpprLimFlt.Return.Min = [];
FeNmiClkMonr1RtUpprLimFlt.Return.Max = [];
FeNmiClkMonr1RtUpprLimFlt.Return.TestTolerance = [];

FeNmiClkMonr2RtLowrLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr2RtLowrLimFlt.Context = 'Non-Rte';
FeNmiClkMonr2RtLowrLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr2RtLowrLimFlt.Return.Type = 'None';
FeNmiClkMonr2RtLowrLimFlt.Return.Min = [];
FeNmiClkMonr2RtLowrLimFlt.Return.Max = [];
FeNmiClkMonr2RtLowrLimFlt.Return.TestTolerance = [];

FeNmiClkMonr2RtUpprLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr2RtUpprLimFlt.Context = 'Non-Rte';
FeNmiClkMonr2RtUpprLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr2RtUpprLimFlt.Return.Type = 'None';
FeNmiClkMonr2RtUpprLimFlt.Return.Min = [];
FeNmiClkMonr2RtUpprLimFlt.Return.Max = [];
FeNmiClkMonr2RtUpprLimFlt.Return.TestTolerance = [];

FeNmiClkMonr3RtLowrLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr3RtLowrLimFlt.Context = 'Non-Rte';
FeNmiClkMonr3RtLowrLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr3RtLowrLimFlt.Return.Type = 'None';
FeNmiClkMonr3RtLowrLimFlt.Return.Min = [];
FeNmiClkMonr3RtLowrLimFlt.Return.Max = [];
FeNmiClkMonr3RtLowrLimFlt.Return.TestTolerance = [];

FeNmiClkMonr3RtUpprLimFlt = DataDict.SrvRunnable;
FeNmiClkMonr3RtUpprLimFlt.Context = 'Non-Rte';
FeNmiClkMonr3RtUpprLimFlt.Return = DataDict.CSReturn;
FeNmiClkMonr3RtUpprLimFlt.Return.Type = 'None';
FeNmiClkMonr3RtUpprLimFlt.Return.Min = [];
FeNmiClkMonr3RtUpprLimFlt.Return.Max = [];
FeNmiClkMonr3RtUpprLimFlt.Return.TestTolerance = [];

FeNmiDmaRegAcsProtnErr = DataDict.SrvRunnable;
FeNmiDmaRegAcsProtnErr.Context = 'Non-Rte';
FeNmiDmaRegAcsProtnErr.Return = DataDict.CSReturn;
FeNmiDmaRegAcsProtnErr.Return.Type = 'None';
FeNmiDmaRegAcsProtnErr.Return.Min = [];
FeNmiDmaRegAcsProtnErr.Return.Max = [];
FeNmiDmaRegAcsProtnErr.Return.TestTolerance = [];

FeNmiDmaTrf = DataDict.SrvRunnable;
FeNmiDmaTrf.Context = 'Non-Rte';
FeNmiDmaTrf.Return = DataDict.CSReturn;
FeNmiDmaTrf.Return.Type = 'None';
FeNmiDmaTrf.Return.Min = [];
FeNmiDmaTrf.Return.Max = [];
FeNmiDmaTrf.Return.TestTolerance = [];

FeNmiEcmMstChkrCmp = DataDict.SrvRunnable;
FeNmiEcmMstChkrCmp.Context = 'Non-Rte';
FeNmiEcmMstChkrCmp.Return = DataDict.CSReturn;
FeNmiEcmMstChkrCmp.Return.Type = 'None';
FeNmiEcmMstChkrCmp.Return.Min = [];
FeNmiEcmMstChkrCmp.Return.Max = [];
FeNmiEcmMstChkrCmp.Return.TestTolerance = [];

FeNmiOperModErrFlsProgmModStrtd = DataDict.SrvRunnable;
FeNmiOperModErrFlsProgmModStrtd.Context = 'Non-Rte';
FeNmiOperModErrFlsProgmModStrtd.Return = DataDict.CSReturn;
FeNmiOperModErrFlsProgmModStrtd.Return.Type = 'None';
FeNmiOperModErrFlsProgmModStrtd.Return.Min = [];
FeNmiOperModErrFlsProgmModStrtd.Return.Max = [];
FeNmiOperModErrFlsProgmModStrtd.Return.TestTolerance = [];

FeNmiOperModErrSngChipInactv = DataDict.SrvRunnable;
FeNmiOperModErrSngChipInactv.Context = 'Non-Rte';
FeNmiOperModErrSngChipInactv.Return = DataDict.CSReturn;
FeNmiOperModErrSngChipInactv.Return.Type = 'None';
FeNmiOperModErrSngChipInactv.Return.Min = [];
FeNmiOperModErrSngChipInactv.Return.Max = [];
FeNmiOperModErrSngChipInactv.Return.TestTolerance = [];

FeNmiOperModErrTestModStrtd = DataDict.SrvRunnable;
FeNmiOperModErrTestModStrtd.Context = 'Non-Rte';
FeNmiOperModErrTestModStrtd.Return = DataDict.CSReturn;
FeNmiOperModErrTestModStrtd.Return.Type = 'None';
FeNmiOperModErrTestModStrtd.Return.Min = [];
FeNmiOperModErrTestModStrtd.Return.Max = [];
FeNmiOperModErrTestModStrtd.Return.TestTolerance = [];

FeNmiPeg = DataDict.SrvRunnable;
FeNmiPeg.Context = 'Non-Rte';
FeNmiPeg.Return = DataDict.CSReturn;
FeNmiPeg.Return.Type = 'None';
FeNmiPeg.Return.Min = [];
FeNmiPeg.Return.Max = [];
FeNmiPeg.Return.TestTolerance = [];

FeNmiWdg = DataDict.SrvRunnable;
FeNmiWdg.Context = 'Non-Rte';
FeNmiWdg.Return = DataDict.CSReturn;
FeNmiWdg.Return.Type = 'None';
FeNmiWdg.Return.Min = [];
FeNmiWdg.Return.Max = [];
FeNmiWdg.Return.TestTolerance = [];

GetMcuDiagcIdnData = DataDict.SrvRunnable;
GetMcuDiagcIdnData.Context = 'Non-Rte';
GetMcuDiagcIdnData.Return = DataDict.CSReturn;
GetMcuDiagcIdnData.Return.Type = 'None';
GetMcuDiagcIdnData.Return.Min = [];
GetMcuDiagcIdnData.Return.Max = [];
GetMcuDiagcIdnData.Return.TestTolerance = [];
GetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
GetMcuDiagcIdnData.Arguments(1).EngMin = 0;
GetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
GetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
GetMcuDiagcIdnData.Arguments(1).Direction = 'Out';
GetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];

ProcMpuExcpnErr = DataDict.SrvRunnable;
ProcMpuExcpnErr.Context = 'Non-Rte';
ProcMpuExcpnErr.Return = DataDict.CSReturn;
ProcMpuExcpnErr.Return.Type = 'None';
ProcMpuExcpnErr.Return.Min = [];
ProcMpuExcpnErr.Return.Max = [];
ProcMpuExcpnErr.Return.TestTolerance = [];
ProcMpuExcpnErr.Arguments(1) = DataDict.CSArguments;
ProcMpuExcpnErr.Arguments(1).Name = 'McuDiagcData1_Arg';
ProcMpuExcpnErr.Arguments(1).EngMin = 0;
ProcMpuExcpnErr.Arguments(1).EngMax = 4294967295;
ProcMpuExcpnErr.Arguments(1).EngDT = dt.u32;
ProcMpuExcpnErr.Arguments(1).Units = 'Cnt';
ProcMpuExcpnErr.Arguments(1).Direction = 'In';
ProcMpuExcpnErr.Arguments(1).InitRowCol = [1  1];

ProcNonCritOsErr = DataDict.SrvRunnable;
ProcNonCritOsErr.Context = 'Non-Rte';
ProcNonCritOsErr.Return = DataDict.CSReturn;
ProcNonCritOsErr.Return.Type = 'None';
ProcNonCritOsErr.Return.Min = [];
ProcNonCritOsErr.Return.Max = [];
ProcNonCritOsErr.Return.TestTolerance = [];
ProcNonCritOsErr.Arguments(1) = DataDict.CSArguments;
ProcNonCritOsErr.Arguments(1).Name = 'McuDiagcData1_Arg';
ProcNonCritOsErr.Arguments(1).EngMin = 0;
ProcNonCritOsErr.Arguments(1).EngMax = 4294967295;
ProcNonCritOsErr.Arguments(1).EngDT = dt.u32;
ProcNonCritOsErr.Arguments(1).Units = 'Cnt';
ProcNonCritOsErr.Arguments(1).Direction = 'In';
ProcNonCritOsErr.Arguments(1).InitRowCol = [1  1];

ProcPrmntOsErr = DataDict.SrvRunnable;
ProcPrmntOsErr.Context = 'Non-Rte';
ProcPrmntOsErr.Return = DataDict.CSReturn;
ProcPrmntOsErr.Return.Type = 'None';
ProcPrmntOsErr.Return.Min = [];
ProcPrmntOsErr.Return.Max = [];
ProcPrmntOsErr.Return.TestTolerance = [];
ProcPrmntOsErr.Arguments(1) = DataDict.CSArguments;
ProcPrmntOsErr.Arguments(1).Name = 'McuDiagcData1_Arg';
ProcPrmntOsErr.Arguments(1).EngMin = 0;
ProcPrmntOsErr.Arguments(1).EngMax = 4294967295;
ProcPrmntOsErr.Arguments(1).EngDT = dt.u32;
ProcPrmntOsErr.Arguments(1).Units = 'Cnt';
ProcPrmntOsErr.Arguments(1).Direction = 'In';
ProcPrmntOsErr.Arguments(1).InitRowCol = [1  1];

ProcPrvlgdInstrExcpnErr = DataDict.SrvRunnable;
ProcPrvlgdInstrExcpnErr.Context = 'Non-Rte';
ProcPrvlgdInstrExcpnErr.Return = DataDict.CSReturn;
ProcPrvlgdInstrExcpnErr.Return.Type = 'None';
ProcPrvlgdInstrExcpnErr.Return.Min = [];
ProcPrvlgdInstrExcpnErr.Return.Max = [];
ProcPrvlgdInstrExcpnErr.Return.TestTolerance = [];
ProcPrvlgdInstrExcpnErr.Arguments(1) = DataDict.CSArguments;
ProcPrvlgdInstrExcpnErr.Arguments(1).Name = 'McuDiagcData1_Arg';
ProcPrvlgdInstrExcpnErr.Arguments(1).EngMin = 0;
ProcPrvlgdInstrExcpnErr.Arguments(1).EngMax = 4294967295;
ProcPrvlgdInstrExcpnErr.Arguments(1).EngDT = dt.u32;
ProcPrvlgdInstrExcpnErr.Arguments(1).Units = 'Cnt';
ProcPrvlgdInstrExcpnErr.Arguments(1).Direction = 'In';
ProcPrvlgdInstrExcpnErr.Arguments(1).InitRowCol = [1  1];

ProcUkwnExcpnErr = DataDict.SrvRunnable;
ProcUkwnExcpnErr.Context = 'Non-Rte';
ProcUkwnExcpnErr.Return = DataDict.CSReturn;
ProcUkwnExcpnErr.Return.Type = 'None';
ProcUkwnExcpnErr.Return.Min = [];
ProcUkwnExcpnErr.Return.Max = [];
ProcUkwnExcpnErr.Return.TestTolerance = [];
ProcUkwnExcpnErr.Arguments(1) = DataDict.CSArguments;
ProcUkwnExcpnErr.Arguments(1).Name = 'McuDiagcData1_Arg';
ProcUkwnExcpnErr.Arguments(1).EngMin = 0;
ProcUkwnExcpnErr.Arguments(1).EngMax = 4294967295;
ProcUkwnExcpnErr.Arguments(1).EngDT = dt.u32;
ProcUkwnExcpnErr.Arguments(1).Units = 'Cnt';
ProcUkwnExcpnErr.Arguments(1).Direction = 'In';
ProcUkwnExcpnErr.Arguments(1).InitRowCol = [1  1];

SetMcuDiagcIdnData = DataDict.SrvRunnable;
SetMcuDiagcIdnData.Context = 'Non-Rte';
SetMcuDiagcIdnData.Return = DataDict.CSReturn;
SetMcuDiagcIdnData.Return.Type = 'None';
SetMcuDiagcIdnData.Return.Min = [];
SetMcuDiagcIdnData.Return.Max = [];
SetMcuDiagcIdnData.Return.TestTolerance = [];
SetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
SetMcuDiagcIdnData.Arguments(1).EngMin = 0;
SetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
SetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(1).Direction = 'In';
SetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(2) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(2).Name = 'McuDiagcData1';
SetMcuDiagcIdnData.Arguments(2).EngMin = 0;
SetMcuDiagcIdnData.Arguments(2).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(2).EngDT = dt.u32;
SetMcuDiagcIdnData.Arguments(2).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(2).Direction = 'In';
SetMcuDiagcIdnData.Arguments(2).InitRowCol = [1  1];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'ExcpnHndlgInit2'};
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
RegInpBRAMDAT0 = DataDict.IpSignal;
RegInpBRAMDAT0.LongName = 'Register BRAMDAT0';
RegInpBRAMDAT0.DocUnits = 'Cnt';
RegInpBRAMDAT0.EngDT = dt.u32;
RegInpBRAMDAT0.EngInit = 0;
RegInpBRAMDAT0.EngMin = 0;
RegInpBRAMDAT0.EngMax = 4294967295;
RegInpBRAMDAT0.ReadIn = {'ExcpnHndlgInit2'};
RegInpBRAMDAT0.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
RegOutpBRAMDAT0 = DataDict.OpSignal;
RegOutpBRAMDAT0.LongName = 'Register BRAMDAT0';
RegOutpBRAMDAT0.Description = 'Register BRAMDAT0';
RegOutpBRAMDAT0.DocUnits = 'Cnt';
RegOutpBRAMDAT0.SwcShoName = 'ExcpnHndlg';
RegOutpBRAMDAT0.EngDT = dt.u32;
RegOutpBRAMDAT0.EngInit = 0;
RegOutpBRAMDAT0.EngMin = 0;
RegOutpBRAMDAT0.EngMax = 4294967295;
RegOutpBRAMDAT0.TestTolerance = 1;
RegOutpBRAMDAT0.WrittenIn = {'SetMcuDiagcIdnData'};
RegOutpBRAMDAT0.WriteType = 'Phy';


RegOutpBRAMDAT1 = DataDict.OpSignal;
RegOutpBRAMDAT1.LongName = 'Register BRAMDAT1';
RegOutpBRAMDAT1.Description = 'Register BRAMDAT1';
RegOutpBRAMDAT1.DocUnits = 'Cnt';
RegOutpBRAMDAT1.SwcShoName = 'ExcpnHndlg';
RegOutpBRAMDAT1.EngDT = dt.u32;
RegOutpBRAMDAT1.EngInit = 0;
RegOutpBRAMDAT1.EngMin = 0;
RegOutpBRAMDAT1.EngMax = 4294967295;
RegOutpBRAMDAT1.TestTolerance = 1;
RegOutpBRAMDAT1.WrittenIn = {'SetMcuDiagcIdnData'};
RegOutpBRAMDAT1.WriteType = 'Phy';



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
ExcpnHndlgOsErrCod = DataDict.PIM;
ExcpnHndlgOsErrCod.LongName = 'Operating System Error Code';
ExcpnHndlgOsErrCod.Description = ...
  'Operating System Error Code - Must be placed in Global Shared Memory';
ExcpnHndlgOsErrCod.DocUnits = 'Cnt';
ExcpnHndlgOsErrCod.EngDT = dt.u16;
ExcpnHndlgOsErrCod.EngMin = 0;
ExcpnHndlgOsErrCod.EngMax = 65535;
ExcpnHndlgOsErrCod.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
ClkMonr0And2 = DataDict.NTC;
ClkMonr0And2.NtcNr = NtcNr2.NTCNR_0X023;
ClkMonr0And2.NtcTyp = 'None';
ClkMonr0And2.LongName = 'Clock Monitor 0 And 2';
ClkMonr0And2.Description = 'Clock Monitor CLMA0 And CLMA2';
ClkMonr0And2.NtcStInfo = DataDict.NtcStInfoBitPacked;
ClkMonr0And2.NtcStInfo.Bit0Descr = 'Unused';
ClkMonr0And2.NtcStInfo.Bit1Descr = 'Unused';
ClkMonr0And2.NtcStInfo.Bit2Descr = 'CLMA0 Runtime Lower Limit Fault (MainOSC vs. IntOSC/4)';
ClkMonr0And2.NtcStInfo.Bit3Descr = 'CLMA0 Runtime Upper Limit Fault (MainOSC vs. IntOSC/4)';
ClkMonr0And2.NtcStInfo.Bit4Descr = 'Unused';
ClkMonr0And2.NtcStInfo.Bit5Descr = 'Unused';
ClkMonr0And2.NtcStInfo.Bit6Descr = 'CLMA2 Runtime Lower Limit Fault (WDTCLKI vs. MainOSC/n)';
ClkMonr0And2.NtcStInfo.Bit7Descr = 'CLMA2 Runtime Upper Limit Fault (WDTCLKI vs. MainOSC/n)';


ClkMonr1And3 = DataDict.NTC;
ClkMonr1And3.NtcNr = NtcNr2.NTCNR_0X027;
ClkMonr1And3.NtcTyp = 'None';
ClkMonr1And3.LongName = 'Clock Monitor 1 And 3';
ClkMonr1And3.Description = 'Clock Monitor CLMA1 And CLMA3';
ClkMonr1And3.NtcStInfo = DataDict.NtcStInfoBitPacked;
ClkMonr1And3.NtcStInfo.Bit0Descr = 'Unused';
ClkMonr1And3.NtcStInfo.Bit1Descr = 'Unused';
ClkMonr1And3.NtcStInfo.Bit2Descr = 'CLMA1 Runtime Lower Limit Fault (PerCLK vs. MainOSC)';
ClkMonr1And3.NtcStInfo.Bit3Descr = 'CLMA1 Runtime Upper Limit Fault (PerCLK vs. MainOSC)';
ClkMonr1And3.NtcStInfo.Bit4Descr = 'Unused';
ClkMonr1And3.NtcStInfo.Bit5Descr = 'Unused';
ClkMonr1And3.NtcStInfo.Bit6Descr = 'CLMA3 Runtime Lower Limit Fault (ClockCPU vs. MainOSC)';
ClkMonr1And3.NtcStInfo.Bit7Descr = 'CLMA3 Runtime Upper Limit Fault (ClockCPU vs. MainOSC)';


CodFlsHardFlt = DataDict.NTC;
CodFlsHardFlt.NtcNr = NtcNr1.NTCNR_0X003;
CodFlsHardFlt.NtcTyp = 'None';
CodFlsHardFlt.LongName = 'Flash Memory Code Flash Double Bit Fault';
CodFlsHardFlt.Description = 'Hard failure for code flash from ECC';
CodFlsHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
CodFlsHardFlt.NtcStInfo.Bit0Descr = 'Code Flash ECC Single Bit Hard Fault';
CodFlsHardFlt.NtcStInfo.Bit1Descr = 'Code Flash ECC Double Bit Detection (Hard Fault)';
CodFlsHardFlt.NtcStInfo.Bit2Descr = 'Code Flash Address Parity Fault';
CodFlsHardFlt.NtcStInfo.Bit3Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit4Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit5Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit6Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit7Descr = 'Unused';


CoreVltgMonrStrtUpFlt = DataDict.NTC;
CoreVltgMonrStrtUpFlt.NtcNr = NtcNr1.NTCNR_0X048;
CoreVltgMonrStrtUpFlt.NtcTyp = 'None';
CoreVltgMonrStrtUpFlt.LongName = 'Core Voltage Monitor Start Up Fault';
CoreVltgMonrStrtUpFlt.Description = 'Start up Fault for uC core voltage monitor';
CoreVltgMonrStrtUpFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit0Descr = 'CVM Over Voltage Startup Test Failure';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit1Descr = 'CVM Under Voltage Startup Test Failure';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit2Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit3Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit4Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit5Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit6Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit7Descr = 'Unused';


DbgRst = DataDict.NTC;
DbgRst.NtcNr = NtcNr1.NTCNR_0X02F;
DbgRst.NtcTyp = 'None';
DbgRst.LongName = 'Debug Reset';
DbgRst.Description = 'Debug Reset';
DbgRst.NtcStInfo = DataDict.NtcStInfoBitPacked;
DbgRst.NtcStInfo.Bit0Descr = 'Debug Reset';
DbgRst.NtcStInfo.Bit1Descr = 'Unused';
DbgRst.NtcStInfo.Bit2Descr = 'Unused';
DbgRst.NtcStInfo.Bit3Descr = 'Unused';
DbgRst.NtcStInfo.Bit4Descr = 'Unused';
DbgRst.NtcStInfo.Bit5Descr = 'Unused';
DbgRst.NtcStInfo.Bit6Descr = 'Unused';
DbgRst.NtcStInfo.Bit7Descr = 'Unused';


DmaFlt = DataDict.NTC;
DmaFlt.NtcNr = NtcNr1.NTCNR_0X036;
DmaFlt.NtcTyp = 'None';
DmaFlt.LongName = 'DMA Fault';
DmaFlt.Description = 'DMA Fault';
DmaFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
DmaFlt.NtcStInfo.Bit0Descr = 'DMA Transfer Error';
DmaFlt.NtcStInfo.Bit1Descr = 'DMA Register Access Protection Violation';
DmaFlt.NtcStInfo.Bit2Descr = 'Unused';
DmaFlt.NtcStInfo.Bit3Descr = 'Unused';
DmaFlt.NtcStInfo.Bit4Descr = 'Unused';
DmaFlt.NtcStInfo.Bit5Descr = 'Unused';
DmaFlt.NtcStInfo.Bit6Descr = 'Unused';
DmaFlt.NtcStInfo.Bit7Descr = 'Unused';


DtsRamDblBitFlt = DataDict.NTC;
DtsRamDblBitFlt.NtcNr = NtcNr1.NTCNR_0X016;
DtsRamDblBitFlt.NtcTyp = 'None';
DtsRamDblBitFlt.LongName = 'DTS RAM Double Bit Fault';
DtsRamDblBitFlt.Description = 'DTS RAM Double Bit Fault';
DtsRamDblBitFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
DtsRamDblBitFlt.NtcStInfo.Bit0Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit1Descr = 'DTS ECC Double Bit (Hard Fault)';
DtsRamDblBitFlt.NtcStInfo.Bit2Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit3Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit4Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit5Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit6Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit7Descr = 'Unused';


EcmMstChkrFlt = DataDict.NTC;
EcmMstChkrFlt.NtcNr = NtcNr1.NTCNR_0X026;
EcmMstChkrFlt.NtcTyp = 'None';
EcmMstChkrFlt.LongName = 'ECM Master Checker Fault';
EcmMstChkrFlt.Description = 'ECM Fault';
EcmMstChkrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
EcmMstChkrFlt.NtcStInfo.Bit0Descr = 'ECM Status Bit Set Prior to ECM Init';
EcmMstChkrFlt.NtcStInfo.Bit1Descr = 'Unused';
EcmMstChkrFlt.NtcStInfo.Bit2Descr = 'ECM Startup Master nERROR Output Control Fault';
EcmMstChkrFlt.NtcStInfo.Bit3Descr = 'ECM Startup Checker nERROR Output Control Fault';
EcmMstChkrFlt.NtcStInfo.Bit4Descr = 'Unused';
EcmMstChkrFlt.NtcStInfo.Bit5Descr = 'Unused';
EcmMstChkrFlt.NtcStInfo.Bit6Descr = 'Unused';
EcmMstChkrFlt.NtcStInfo.Bit7Descr = 'ECM Runtime Master-Checker Compare Fault';


FpuFlt = DataDict.NTC;
FpuFlt.NtcNr = NtcNr1.NTCNR_0X028;
FpuFlt.NtcTyp = 'None';
FpuFlt.LongName = 'Floating Point Unit Faultt';
FpuFlt.Description = 'ECM Fault';
FpuFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
FpuFlt.NtcStInfo.Bit0Descr = 'Unused';
FpuFlt.NtcStInfo.Bit1Descr = 'FPU Invalid Operation (V Bit)';
FpuFlt.NtcStInfo.Bit2Descr = 'FPU Divide by Zero (Z Bit)';
FpuFlt.NtcStInfo.Bit3Descr = 'FPU Overflow (O Bit)';
FpuFlt.NtcStInfo.Bit4Descr = 'FPU Unknown Error';
FpuFlt.NtcStInfo.Bit5Descr = 'Unused';
FpuFlt.NtcStInfo.Bit6Descr = 'Unused';
FpuFlt.NtcStInfo.Bit7Descr = 'Unused';


LclRamHardFlt = DataDict.NTC;
LclRamHardFlt.NtcNr = NtcNr1.NTCNR_0X013;
LclRamHardFlt.NtcTyp = 'None';
LclRamHardFlt.LongName = 'Local RAM Memory Code Flash Double Bit Fault';
LclRamHardFlt.Description = 'ECC Hard Failure on Local RAM';
LclRamHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LclRamHardFlt.NtcStInfo.Bit0Descr = 'Local RAM ECC Single Bit (Hard Fault)';
LclRamHardFlt.NtcStInfo.Bit1Descr = 'Local RAM ECC Double Bit (Hard Fault)';
LclRamHardFlt.NtcStInfo.Bit2Descr = 'Invalid RAM Area';
LclRamHardFlt.NtcStInfo.Bit3Descr = 'Unused';
LclRamHardFlt.NtcStInfo.Bit4Descr = 'Unused';
LclRamHardFlt.NtcStInfo.Bit5Descr = 'Unused';
LclRamHardFlt.NtcStInfo.Bit6Descr = 'Unused';
LclRamHardFlt.NtcStInfo.Bit7Descr = 'Unused';


LoglBistStrtUpFlt = DataDict.NTC;
LoglBistStrtUpFlt.NtcNr = NtcNr1.NTCNR_0X021;
LoglBistStrtUpFlt.NtcTyp = 'None';
LoglBistStrtUpFlt.LongName = 'Logical Built In Self Test Startup Fault';
LoglBistStrtUpFlt.Description = 'Start-Up tests associated with Logic BIST';
LoglBistStrtUpFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoglBistStrtUpFlt.NtcStInfo.Bit0Descr = 'BIST Code ECC Failure';
LoglBistStrtUpFlt.NtcStInfo.Bit1Descr = 'Unused';
LoglBistStrtUpFlt.NtcStInfo.Bit2Descr = 'LBIST Startup Test Failure';
LoglBistStrtUpFlt.NtcStInfo.Bit3Descr = 'Unused';
LoglBistStrtUpFlt.NtcStInfo.Bit4Descr = 'BIST Not Complete';
LoglBistStrtUpFlt.NtcStInfo.Bit5Descr = 'CPU Lock Step Error Forcing Startup Test Failure';
LoglBistStrtUpFlt.NtcStInfo.Bit6Descr = 'DMA Lock Step Error Forcing Startup Test Failure';
LoglBistStrtUpFlt.NtcStInfo.Bit7Descr = 'Unused';


McuVltgMonrFlt = DataDict.NTC;
McuVltgMonrFlt.NtcNr = NtcNr1.NTCNR_0X049;
McuVltgMonrFlt.NtcTyp = 'None';
McuVltgMonrFlt.LongName = 'Microcontroller Voltage Monitor Fault';
McuVltgMonrFlt.Description = 'Core voltage monitor fault / reset';
McuVltgMonrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
McuVltgMonrFlt.NtcStInfo.Bit0Descr = 'Internal CVM Over Voltage Monitor Fault';
McuVltgMonrFlt.NtcStInfo.Bit1Descr = 'Internal CVM Under Voltage Monitor Fault';
McuVltgMonrFlt.NtcStInfo.Bit2Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit3Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit4Descr = 'Internal Monitor Low Vcc Detected Fault';
McuVltgMonrFlt.NtcStInfo.Bit5Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit6Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit7Descr = 'External Voltage Monitor Fault';


MemBistStrtUpFlt = DataDict.NTC;
MemBistStrtUpFlt.NtcNr = NtcNr1.NTCNR_0X010;
MemBistStrtUpFlt.NtcTyp = 'None';
MemBistStrtUpFlt.LongName = 'Memory Built In Self Test Startup Fault';
MemBistStrtUpFlt.Description = 'Start-Up tests associated with Memory BIST';
MemBistStrtUpFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MemBistStrtUpFlt.NtcStInfo.Bit0Descr = 'MBIST Startup Test Failure';
MemBistStrtUpFlt.NtcStInfo.Bit1Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit2Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit3Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit4Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit5Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit6Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit7Descr = 'Unused';


MemProtnFlt = DataDict.NTC;
MemProtnFlt.NtcNr = NtcNr1.NTCNR_0X025;
MemProtnFlt.NtcTyp = 'None';
MemProtnFlt.LongName = 'Memory Protection Fault';
MemProtnFlt.Description = 'Memory Protection Fault';
MemProtnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MemProtnFlt.NtcStInfo.Bit0Descr = 'MPU Violation (this convers MDP and MIP Exception)';
MemProtnFlt.NtcStInfo.Bit1Descr = 'Privilege Instruction Execution';
MemProtnFlt.NtcStInfo.Bit2Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit3Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit4Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit5Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit6Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit7Descr = 'Unused';


ModErr = DataDict.NTC;
ModErr.NtcNr = NtcNr1.NTCNR_0X024;
ModErr.NtcTyp = 'None';
ModErr.LongName = 'Mode Error';
ModErr.Description = 'Mode Error';
ModErr.NtcStInfo = DataDict.NtcStInfoBitPacked;
ModErr.NtcStInfo.Bit0Descr = 'Flash programming mode is started in single-chip mode';
ModErr.NtcStInfo.Bit1Descr = 'Test mode is started in single-chip mode';
ModErr.NtcStInfo.Bit2Descr = 'Single-chip mode is inactive in single-chip mode';
ModErr.NtcStInfo.Bit3Descr = 'Unused';
ModErr.NtcStInfo.Bit4Descr = 'Unused';
ModErr.NtcStInfo.Bit5Descr = 'Unused';
ModErr.NtcStInfo.Bit6Descr = 'Unused';
ModErr.NtcStInfo.Bit7Descr = 'Unused';


OsPrmntGenericFlt = DataDict.NTC;
OsPrmntGenericFlt.NtcNr = NtcNr1.NTCNR_0X030;
OsPrmntGenericFlt.NtcTyp = 'None';
OsPrmntGenericFlt.LongName = 'Operating System Permanent Generic Fault';
OsPrmntGenericFlt.Description = 'Fatal OS error';
OsPrmntGenericFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
OsPrmntGenericFlt.NtcStInfo.Bit0Descr = 'General OS fatal error';
OsPrmntGenericFlt.NtcStInfo.Bit1Descr = 'Unhandled Exception';
OsPrmntGenericFlt.NtcStInfo.Bit2Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit3Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit4Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit5Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit6Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit7Descr = 'Unused';


OsTmpGenericFlt = DataDict.NTC;
OsTmpGenericFlt.NtcNr = NtcNr1.NTCNR_0X031;
OsTmpGenericFlt.NtcTyp = 'None';
OsTmpGenericFlt.LongName = 'Operating System Temporary Generic Fault';
OsTmpGenericFlt.Description = 'General OS non-fatal error';
OsTmpGenericFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
OsTmpGenericFlt.NtcStInfo.Bit0Descr = 'General OS non-fatal (temporary) error';
OsTmpGenericFlt.NtcStInfo.Bit1Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit2Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit3Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit4Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit5Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit6Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit7Descr = 'Unused';


ProgSeqFlt = DataDict.NTC;
ProgSeqFlt.NtcNr = NtcNr1.NTCNR_0X02A;
ProgSeqFlt.NtcTyp = 'None';
ProgSeqFlt.LongName = 'Program Sequence Fault';
ProgSeqFlt.Description = 'Faults related to program sequencing and completion';
ProgSeqFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
ProgSeqFlt.NtcStInfo.Bit0Descr = 'Program Flow';
ProgSeqFlt.NtcStInfo.Bit1Descr = 'Deadline Monitor';
ProgSeqFlt.NtcStInfo.Bit2Descr = 'Alive Monitor';
ProgSeqFlt.NtcStInfo.Bit3Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit4Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit5Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit6Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit7Descr = 'Unused';


PrphlBusDataParFlt = DataDict.NTC;
PrphlBusDataParFlt.NtcNr = NtcNr2.NTCNR_0X037;
PrphlBusDataParFlt.NtcTyp = 'None';
PrphlBusDataParFlt.LongName = 'Peripheral Bus Data Parity Fault';
PrphlBusDataParFlt.Description = 'P-Bus Data Parity Fault (Safety Peripheral)';
PrphlBusDataParFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
PrphlBusDataParFlt.NtcStInfo.Bit0Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit1Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit2Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit3Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit4Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit5Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit6Descr = 'P-Bus Data Parity Fault Startup Test Failure';
PrphlBusDataParFlt.NtcStInfo.Bit7Descr = 'P-Bus Data Parity Fault Runtime Fault';


PrphlGuardFlt = DataDict.NTC;
PrphlGuardFlt.NtcNr = NtcNr1.NTCNR_0X02D;
PrphlGuardFlt.NtcTyp = 'None';
PrphlGuardFlt.LongName = 'Peripheral Guard Fault';
PrphlGuardFlt.Description = 'Peripheral Guard Fault';
PrphlGuardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
PrphlGuardFlt.NtcStInfo.Bit0Descr = 'Unused';
PrphlGuardFlt.NtcStInfo.Bit1Descr = 'PEG RunTime Fault';
PrphlGuardFlt.NtcStInfo.Bit2Descr = 'Unused';
PrphlGuardFlt.NtcStInfo.Bit3Descr = 'IPG RunTime Fault';
PrphlGuardFlt.NtcStInfo.Bit4Descr = 'PBG (Peripheral Guard) Startup Test Failure';
PrphlGuardFlt.NtcStInfo.Bit5Descr = 'PBG Runtime Fault';
PrphlGuardFlt.NtcStInfo.Bit6Descr = 'Unused';
PrphlGuardFlt.NtcStInfo.Bit7Descr = 'Unused';


RtFlt = DataDict.NTC;
RtFlt.NtcNr = NtcNr1.NTCNR_0X022;
RtFlt.NtcTyp = 'None';
RtFlt.LongName = 'Runtime Fault';
RtFlt.Description = 'Runtime Fault - Includes lock step, alignment and reserved instruction';
RtFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
RtFlt.NtcStInfo.Bit0Descr = 'CPU Core Mis-compare';
RtFlt.NtcStInfo.Bit1Descr = 'System VCIE Bit Error';
RtFlt.NtcStInfo.Bit2Descr = 'Reserved Instruction (Illegal Op Code) Fault';
RtFlt.NtcStInfo.Bit3Descr = 'Memory Misalignment - Read';
RtFlt.NtcStInfo.Bit4Descr = 'Memory Misalignment - Write';
RtFlt.NtcStInfo.Bit5Descr = 'Instruction Fetch Error';
RtFlt.NtcStInfo.Bit6Descr = 'FACI Reset Transfer Error';
RtFlt.NtcStInfo.Bit7Descr = 'Unused';


UkwnStrtUpDetdFlt = DataDict.NTC;
UkwnStrtUpDetdFlt.NtcNr = NtcNr1.NTCNR_0X029;
UkwnStrtUpDetdFlt.NtcTyp = 'None';
UkwnStrtUpDetdFlt.LongName = 'Unknown Start Up Detected';
UkwnStrtUpDetdFlt.Description = 'Start up reason not identified';
UkwnStrtUpDetdFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
UkwnStrtUpDetdFlt.NtcStInfo.Bit0Descr = 'Unknown Reset Reason';
UkwnStrtUpDetdFlt.NtcStInfo.Bit1Descr = 'Unknown ECM Reset';
UkwnStrtUpDetdFlt.NtcStInfo.Bit2Descr = 'Unused';
UkwnStrtUpDetdFlt.NtcStInfo.Bit3Descr = 'Unused';
UkwnStrtUpDetdFlt.NtcStInfo.Bit4Descr = 'Unknown Software Reset';
UkwnStrtUpDetdFlt.NtcStInfo.Bit5Descr = 'Failed Backup RAM Read Write Test';
UkwnStrtUpDetdFlt.NtcStInfo.Bit6Descr = 'FBL Pre-OS Startup Exception';
UkwnStrtUpDetdFlt.NtcStInfo.Bit7Descr = 'Corrupt Start up / Reset Information';


WdgFlt = DataDict.NTC;
WdgFlt.NtcNr = NtcNr1.NTCNR_0X02C;
WdgFlt.NtcTyp = 'None';
WdgFlt.LongName = 'Watchdog Fault';
WdgFlt.Description = 'Internal microcontroller watchdog timeout';
WdgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
WdgFlt.NtcStInfo.Bit0Descr = 'Watchdog Timeout';
WdgFlt.NtcStInfo.Bit1Descr = 'Unused';
WdgFlt.NtcStInfo.Bit2Descr = 'Unused';
WdgFlt.NtcStInfo.Bit3Descr = 'Unused';
WdgFlt.NtcStInfo.Bit4Descr = 'Unused';
WdgFlt.NtcStInfo.Bit5Descr = 'Unused';
WdgFlt.NtcStInfo.Bit6Descr = 'Unused';
WdgFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
