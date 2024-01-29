%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 26-Jul-2016 15:29:09       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: X %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CM102A = DataDict.FDD;
CM102A.Version = '5.1.X';
CM102A.LongName = 'Flash Memory';
CM102A.ShoName  = 'FlsMem';
CM102A.DesignASIL = 'D';
CM102A.Description = [...
  'Diagnostics related to flash memory'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FlsMemInit1 = DataDict.Runnable;
FlsMemInit1.Context = 'Rte';
FlsMemInit1.TimeStep = 0;
FlsMemInit1.Description = 'None';

FlsMemInit2 = DataDict.Runnable;
FlsMemInit2.Context = 'NonRte';
FlsMemInit2.TimeStep = 0;
FlsMemInit2.Description = 'None';

FlsMemPer2 = DataDict.Runnable;
FlsMemPer2.Context = 'Rte';
FlsMemPer2.TimeStep = 0.1;
FlsMemPer2.Description = 'None';

CodFlsSngBitEcc = DataDict.Runnable;
CodFlsSngBitEcc.Context = 'NonRte';
CodFlsSngBitEcc.TimeStep = 'ISR';
CodFlsSngBitEcc.Description = 'ISR for Single Bit ECC';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ChkForStrtUpTest = DataDict.Client;
ChkForStrtUpTest.CallLocation = {'FlsMemInit2'};
ChkForStrtUpTest.Description = 'None';
ChkForStrtUpTest.Return = DataDict.CSReturn;
ChkForStrtUpTest.Return.Type = 'None';
ChkForStrtUpTest.Return.Min = [];
ChkForStrtUpTest.Return.Max = [];
ChkForStrtUpTest.Return.TestTolerance = [];
ChkForStrtUpTest.Arguments(1) = DataDict.CSArguments;
ChkForStrtUpTest.Arguments(1).Name = 'ExecStrtUpTest';
ChkForStrtUpTest.Arguments(1).EngDT = dt.lgc;
ChkForStrtUpTest.Arguments(1).EngMin = 0;
ChkForStrtUpTest.Arguments(1).EngMax = 1;
ChkForStrtUpTest.Arguments(1).TestTolerance = 0;
ChkForStrtUpTest.Arguments(1).Units = 'Cnt';
ChkForStrtUpTest.Arguments(1).Direction = 'Out';
ChkForStrtUpTest.Arguments(1).InitRowCol = [1  1];
ChkForStrtUpTest.Arguments(1).Description = 'None';


GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FlsMemInit2'};
GetRefTmr100MicroSec32bit.Description = 'None';
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
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 0;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'None';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'FlsMemPer2'};
GetTiSpan100MicroSec32bit.Description = 'None';
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'None';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'None';


ResvCrcHwUnit = DataDict.Client;
ResvCrcHwUnit.CallLocation = {'FlsMemInit2','FlsMemPer2'};
ResvCrcHwUnit.Description = 'None';
ResvCrcHwUnit.Return = DataDict.CSReturn;
ResvCrcHwUnit.Return.Type = 'Standard';
ResvCrcHwUnit.Return.Min = 0;
ResvCrcHwUnit.Return.Max = 1;
ResvCrcHwUnit.Return.TestTolerance = 1;
ResvCrcHwUnit.Return.Description = 'None';
ResvCrcHwUnit.Arguments(1) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(1).Name = 'Mod';
ResvCrcHwUnit.Arguments(1).EngDT = enum.CrcHwResvMod1;
ResvCrcHwUnit.Arguments(1).EngMin = CrcHwResvMod1.CRCHWRESVMOD_RELS;
ResvCrcHwUnit.Arguments(1).EngMax = CrcHwResvMod1.CRCHWRESVMOD_RESV;
ResvCrcHwUnit.Arguments(1).Units = 'Cnt';
ResvCrcHwUnit.Arguments(1).Direction = 'In';
ResvCrcHwUnit.Arguments(1).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(1).Description = 'None';
ResvCrcHwUnit.Arguments(2) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(2).Name = 'CrcCfg';
ResvCrcHwUnit.Arguments(2).EngDT = enum.CrcHwResvCfg1;
ResvCrcHwUnit.Arguments(2).EngMin = CrcHwResvCfg1.CRCHWRESVCFG_32BITCRC32BITWIDTH;
ResvCrcHwUnit.Arguments(2).EngMax = CrcHwResvCfg1.CRCHWRESVCFG_8BITCRCH2F;
ResvCrcHwUnit.Arguments(2).Units = 'Cnt';
ResvCrcHwUnit.Arguments(2).Direction = 'In';
ResvCrcHwUnit.Arguments(2).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(2).Description = 'None';
ResvCrcHwUnit.Arguments(3) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(3).Name = 'CrcHwInRegAdr';
ResvCrcHwUnit.Arguments(3).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(3).EngMin = 0;
ResvCrcHwUnit.Arguments(3).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(3).TestTolerance = 0;
ResvCrcHwUnit.Arguments(3).Units = 'Cnt';
ResvCrcHwUnit.Arguments(3).Direction = 'Out';
ResvCrcHwUnit.Arguments(3).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(3).Description = 'None';
ResvCrcHwUnit.Arguments(4) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(4).Name = 'CrcHwOutRegAdr';
ResvCrcHwUnit.Arguments(4).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(4).EngMin = 0;
ResvCrcHwUnit.Arguments(4).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(4).TestTolerance = 0;
ResvCrcHwUnit.Arguments(4).Units = 'Cnt';
ResvCrcHwUnit.Arguments(4).Direction = 'Out';
ResvCrcHwUnit.Arguments(4).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(4).Description = 'None';
ResvCrcHwUnit.Arguments(5) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(5).Name = 'StrtVal';
ResvCrcHwUnit.Arguments(5).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(5).EngMin = 0;
ResvCrcHwUnit.Arguments(5).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(5).Units = 'Cnt';
ResvCrcHwUnit.Arguments(5).Direction = 'In';
ResvCrcHwUnit.Arguments(5).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(5).Description = 'None';
ResvCrcHwUnit.Arguments(6) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(6).Name = 'ResvKey';
ResvCrcHwUnit.Arguments(6).EngDT = dt.u16;
ResvCrcHwUnit.Arguments(6).EngMin = 0;
ResvCrcHwUnit.Arguments(6).EngMax = 65535;
ResvCrcHwUnit.Arguments(6).TestTolerance = 0;
ResvCrcHwUnit.Arguments(6).Units = 'Cnt';
ResvCrcHwUnit.Arguments(6).Direction = 'InOut';
ResvCrcHwUnit.Arguments(6).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(6).Description = 'None';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'FlsMemPer2'};
SetNtcSts.Description = 'None';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'None';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'None';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'None';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'None';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'None';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
RegInpINTIFPINT0 = DataDict.IpSignal;
RegInpINTIFPINT0.LongName = 'Register INTIFPINT0';
RegInpINTIFPINT0.Description = 'None';
RegInpINTIFPINT0.DocUnits = 'Cnt';
RegInpINTIFPINT0.EngDT = dt.u32;
RegInpINTIFPINT0.EngInit = 0;
RegInpINTIFPINT0.EngMin = 0;
RegInpINTIFPINT0.EngMax = 4294967295;
RegInpINTIFPINT0.ReadIn = {'FlsMemPer2'};
RegInpINTIFPINT0.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
CodFlsCrcChkCmpl = DataDict.OpSignal;
CodFlsCrcChkCmpl.LongName = 'Code Flash Crc Check Complete';
CodFlsCrcChkCmpl.Description = 'Crc Check Operation Complete Flag';
CodFlsCrcChkCmpl.DocUnits = 'Cnt';
CodFlsCrcChkCmpl.SwcShoName = 'FlsMem';
CodFlsCrcChkCmpl.EngDT = dt.lgc;
CodFlsCrcChkCmpl.EngInit = 0;
CodFlsCrcChkCmpl.EngMin = 0;
CodFlsCrcChkCmpl.EngMax = 1;
CodFlsCrcChkCmpl.TestTolerance = 0;
CodFlsCrcChkCmpl.WrittenIn = {'FlsMemPer2'};
CodFlsCrcChkCmpl.WriteType = 'Rte';


RegOutINTIFPINTCLR0 = DataDict.OpSignal;
RegOutINTIFPINTCLR0.LongName = 'Register INTIFPINTCLR0';
RegOutINTIFPINTCLR0.Description = 'Register INTIFPINTCLR0';
RegOutINTIFPINTCLR0.DocUnits = 'Cnt';
RegOutINTIFPINTCLR0.SwcShoName = 'FlsMem';
RegOutINTIFPINTCLR0.EngDT = dt.u32;
RegOutINTIFPINTCLR0.EngInit = 0;
RegOutINTIFPINTCLR0.EngMin = 0;
RegOutINTIFPINTCLR0.EngMax = 4294967295;
RegOutINTIFPINTCLR0.TestTolerance = 0;
RegOutINTIFPINTCLR0.WrittenIn = {'FlsMemInit2'};
RegOutINTIFPINTCLR0.WriteType = 'Phy';



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
CodFlsCrcChkStrtTi = DataDict.PIM;
CodFlsCrcChkStrtTi.LongName = 'Code Flash Crc Check Start Time';
CodFlsCrcChkStrtTi.Description = 'used for check Timer Out';
CodFlsCrcChkStrtTi.DocUnits = 'Cnt';
CodFlsCrcChkStrtTi.EngDT = dt.u32;
CodFlsCrcChkStrtTi.EngMin = 0;
CodFlsCrcChkStrtTi.EngMax = 5000;
CodFlsCrcChkStrtTi.InitRowCol = [1  1];


CodFlsSngBitErr = DataDict.PIM;
CodFlsSngBitErr.LongName = 'Code Flash Single Bit Error';
CodFlsSngBitErr.Description = [...
  'Flag to indicate if Code Flash Single Bit Error occured'];
CodFlsSngBitErr.DocUnits = 'Cnt';
CodFlsSngBitErr.EngDT = dt.lgc;
CodFlsSngBitErr.EngMin = 0;
CodFlsSngBitErr.EngMax = 1;
CodFlsSngBitErr.InitRowCol = [1  1];


CrcChkCmpl = DataDict.PIM;
CrcChkCmpl.LongName = 'Crc Check Complete';
CrcChkCmpl.Description = [...
  'Flag determine Crc Operation Complete or not'];
CrcChkCmpl.DocUnits = 'Cnt';
CrcChkCmpl.EngDT = dt.lgc;
CrcChkCmpl.EngMin = 0;
CrcChkCmpl.EngMax = 1;
CrcChkCmpl.InitRowCol = [1  1];


CrcHwIdxKey = DataDict.PIM;
CrcHwIdxKey.LongName = 'Crc Hardware Index Key';
CrcHwIdxKey.Description = [...
  'Index Key return Task ID for Crc Hw Release'];
CrcHwIdxKey.DocUnits = 'Cnt';
CrcHwIdxKey.EngDT = dt.u16;
CrcHwIdxKey.EngMin = 0;
CrcHwIdxKey.EngMax = 65535;
CrcHwIdxKey.InitRowCol = [1  1];


HwCrcCalcdRes = DataDict.PIM;
HwCrcCalcdRes.LongName = 'Hardware Crc Calculated Result';
HwCrcCalcdRes.Description = [...
  'used as structure which store "HwCrcCalcdRes" elements per sector'];
HwCrcCalcdRes.DocUnits = 'Uls';
HwCrcCalcdRes.EngDT = dt.u32;
HwCrcCalcdRes.EngMin = 0;
HwCrcCalcdRes.EngMax = 4294967295;
HwCrcCalcdRes.InitRowCol = [1  8];


PwrOnRstCrcChkCmpl = DataDict.PIM;
PwrOnRstCrcChkCmpl.LongName = 'Power On Reset Crc Check Complete';
PwrOnRstCrcChkCmpl.Description = [...
  'Flag determine Power On Reset Crc Operation Complete'];
PwrOnRstCrcChkCmpl.DocUnits = 'Cnt';
PwrOnRstCrcChkCmpl.EngDT = dt.lgc;
PwrOnRstCrcChkCmpl.EngMin = 0;
PwrOnRstCrcChkCmpl.EngMax = 1;
PwrOnRstCrcChkCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CRCCHKMAXALLWDTI_CNT_U32 = DataDict.Constant;
CRCCHKMAXALLWDTI_CNT_U32.LongName = 'Crc Check Maximum Allower Time';
CRCCHKMAXALLWDTI_CNT_U32.Description = [...
  'Number of Opportunity for check the flag'];
CRCCHKMAXALLWDTI_CNT_U32.DocUnits = 'Cnt';
CRCCHKMAXALLWDTI_CNT_U32.EngDT = dt.u32;
CRCCHKMAXALLWDTI_CNT_U32.EngVal = 2000;
CRCCHKMAXALLWDTI_CNT_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
CodFlsCrcFlt = DataDict.NTC;
CodFlsCrcFlt.NtcNr = NtcNr1.NTCNR_0X004;
CodFlsCrcFlt.NtcTyp = 'None';
CodFlsCrcFlt.LongName = 'Flash Memory Code Flash Crc Fault';
CodFlsCrcFlt.Description = 'Crc Check failure for code flash';
CodFlsCrcFlt.NtcStInfo = DataDict.NtcStInfoIdx;
CodFlsCrcFlt.NtcStInfo.Idx(1).EngVal = 1;
CodFlsCrcFlt.NtcStInfo.Idx(1).Descr = 'Crc Check Crc Region 1 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(2).EngVal = 2;
CodFlsCrcFlt.NtcStInfo.Idx(2).Descr = 'Crc Check Crc Region 2 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(3).EngVal = 4;
CodFlsCrcFlt.NtcStInfo.Idx(3).Descr = 'Crc Check Crc Region 3 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(4).EngVal = 8;
CodFlsCrcFlt.NtcStInfo.Idx(4).Descr = 'Crc Check Crc Region 4 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(5).EngVal = 16;
CodFlsCrcFlt.NtcStInfo.Idx(5).Descr = 'Crc Check Crc Region 5 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(6).EngVal = 32;
CodFlsCrcFlt.NtcStInfo.Idx(6).Descr = 'Crc Check Crc Region 6 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(7).EngVal = 64;
CodFlsCrcFlt.NtcStInfo.Idx(7).Descr = 'Crc Check Crc Region 7 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(8).EngVal = 128;
CodFlsCrcFlt.NtcStInfo.Idx(8).Descr = 'Crc Check Crc Region 8 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(9).EngVal = 255;
CodFlsCrcFlt.NtcStInfo.Idx(9).Descr = 'Crc Check Time Out Fail';


%end of Data Dictionary
