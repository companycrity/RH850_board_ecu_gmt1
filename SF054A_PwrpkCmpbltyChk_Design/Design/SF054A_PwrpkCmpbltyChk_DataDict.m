%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Apr-2016 13:04:52       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 4 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: dzvc93 %          %
%%-----------------------------------------------------------------------%

SF054A = DataDict.FDD;
SF054A.Version = '1.3.X';
SF054A.LongName = 'Powerpack Compatibility Check';
SF054A.ShoName  = 'PwrpkCmpbltyChk';
SF054A.DesignASIL = 'D';
SF054A.Description = [...
  'This FDD ensures that a powerpack is compatible with its gear.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PwrpkCmpbltyChkInit1 = DataDict.Runnable;
PwrpkCmpbltyChkInit1.Context = 'Rte';
PwrpkCmpbltyChkInit1.TimeStep = 0;
PwrpkCmpbltyChkInit1.Description = 'Init Runnable';

PwrpkCmpbltyChkPer1 = DataDict.Runnable;
PwrpkCmpbltyChkPer1.Context = 'Rte';
PwrpkCmpbltyChkPer1.TimeStep = 0.1;
PwrpkCmpbltyChkPer1.Description = 'Periodic Runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'PwrpkCmpbltyChkPer1'};
GetNtcQlfrSts.Description = [...
  'Client definition to return NTC state'];
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'NTC Qualifier Status';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'NTC Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'Enum definition of NTC numbers';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'Enum to state the status of NTC';


GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'PwrpkCmpbltyChkInit1'};
GetRefTmr100MicroSec32bit.Description = [...
  'Client definition to return the reference time in counts'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Return.Description = 'None';
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = [...
  'Autosar Client to get the Reference time to calculate the elapsed time' ...
  ''];


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'PwrpkCmpbltyChkPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Autosar client to calculate the elapsed time'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Return.Description = '';
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Reference Timer';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Time Span';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'PwrpkCmpbltyChkPer1'};
SetNtcSts.Description = [...
  'Client definition to set the NTC status'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Standard return';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Enum to define the NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Info regarding the bits to be set in the NTC'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
GearIdn1 = DataDict.IpSignal;
GearIdn1.LongName = 'Gear Identification 1';
GearIdn1.Description = '';
GearIdn1.DocUnits = 'Cnt';
GearIdn1.EngDT = dt.u08;
GearIdn1.EngInit = 0;
GearIdn1.EngMin = 0;
GearIdn1.EngMax = 63;
GearIdn1.ReadIn = {'PwrpkCmpbltyChkPer1'};
GearIdn1.ReadType = 'Rte';


GearIdn1Vld = DataDict.IpSignal;
GearIdn1Vld.LongName = 'Gear Identification 1 Valid';
GearIdn1Vld.Description = '';
GearIdn1Vld.DocUnits = 'Cnt';
GearIdn1Vld.EngDT = dt.lgc;
GearIdn1Vld.EngInit = 0;
GearIdn1Vld.EngMin = 0;
GearIdn1Vld.EngMax = 1;
GearIdn1Vld.ReadIn = {'PwrpkCmpbltyChkPer1'};
GearIdn1Vld.ReadType = 'Rte';


GearIdn2 = DataDict.IpSignal;
GearIdn2.LongName = 'Gear Identification 2';
GearIdn2.Description = '';
GearIdn2.DocUnits = 'Cnt';
GearIdn2.EngDT = dt.u08;
GearIdn2.EngInit = 0;
GearIdn2.EngMin = 0;
GearIdn2.EngMax = 63;
GearIdn2.ReadIn = {'PwrpkCmpbltyChkPer1'};
GearIdn2.ReadType = 'Rte';


GearIdn2Vld = DataDict.IpSignal;
GearIdn2Vld.LongName = 'Gear Identification 2 Valid';
GearIdn2Vld.Description = '';
GearIdn2Vld.DocUnits = 'Cnt';
GearIdn2Vld.EngDT = dt.lgc;
GearIdn2Vld.EngInit = 0;
GearIdn2Vld.EngMin = 0;
GearIdn2Vld.EngMax = 1;
GearIdn2Vld.ReadIn = {'PwrpkCmpbltyChkPer1'};
GearIdn2Vld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PwrpkCmpbltyChkGearId = DataDict.Calibration;
PwrpkCmpbltyChkGearId.LongName = 'Gear Identifier';
PwrpkCmpbltyChkGearId.Description = [...
  'Identify your gear as a simple integer identifier.  Offline, create a ' ...
  'mapping of potential cal values to existing gear part numbers, c-facto' ...
  'r combinations, etc.'];
PwrpkCmpbltyChkGearId.DocUnits = 'Cnt';
PwrpkCmpbltyChkGearId.EngDT = dt.u08;
PwrpkCmpbltyChkGearId.EngVal = 0;
PwrpkCmpbltyChkGearId.EngMin = 0;
PwrpkCmpbltyChkGearId.EngMax = 63;
PwrpkCmpbltyChkGearId.Cardinality = 'Inin';
PwrpkCmpbltyChkGearId.CustomerVisible = false;
PwrpkCmpbltyChkGearId.Online = false;
PwrpkCmpbltyChkGearId.Impact = 'H';
PwrpkCmpbltyChkGearId.TuningOwner = 'CSE';
PwrpkCmpbltyChkGearId.GraphLink = {''};
PwrpkCmpbltyChkGearId.Monotony = 'None';
PwrpkCmpbltyChkGearId.MaxGrad = Inf;
PwrpkCmpbltyChkGearId.PortName = 'PwrpkCmpbltyChkGearId';



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
GearIdnRefTmr = DataDict.PIM;
GearIdnRefTmr.LongName = 'Gear Identification Reference Timer';
GearIdnRefTmr.Description = [...
  'Reference time is used to calculate the time span(elasped time)  to de' ...
  'tect the Gear Identification signal.'];
GearIdnRefTmr.DocUnits = 'Cnt';
GearIdnRefTmr.EngDT = dt.u32;
GearIdnRefTmr.EngMin = 0;
GearIdnRefTmr.EngMax = 4294967295;
GearIdnRefTmr.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CNVTOCNT_CNTPERMILLISEC_U32 = DataDict.Constant;
CNVTOCNT_CNTPERMILLISEC_U32.LongName = 'Convert to Counts';
CNVTOCNT_CNTPERMILLISEC_U32.Description = [...
  'Multiply by this constant to convert milliseconds to Counts'];
CNVTOCNT_CNTPERMILLISEC_U32.DocUnits = 'CntPerMilliSec';
CNVTOCNT_CNTPERMILLISEC_U32.EngDT = dt.u32;
CNVTOCNT_CNTPERMILLISEC_U32.EngVal = 10;
CNVTOCNT_CNTPERMILLISEC_U32.Define = 'Local';


CORRLNFLTBIT2_CNT_U08 = DataDict.Constant;
CORRLNFLTBIT2_CNT_U08.LongName = 'Correlation Fault';
CORRLNFLTBIT2_CNT_U08.Description = [...
  'NTC_0X1F1 (Bit2  Gear ID inputs do not correlate to each other'];
CORRLNFLTBIT2_CNT_U08.DocUnits = 'Cnt';
CORRLNFLTBIT2_CNT_U08.EngDT = dt.u08;
CORRLNFLTBIT2_CNT_U08.EngVal = 4;
CORRLNFLTBIT2_CNT_U08.Define = 'Local';


CORRLNGEARIDFLTBIT3_CNT_U08 = DataDict.Constant;
CORRLNGEARIDFLTBIT3_CNT_U08.LongName = 'Correlation GearId Fault';
CORRLNGEARIDFLTBIT3_CNT_U08.Description = [...
  'NTC_0X1F1 (Bit3  Gear ID inputs do not correlate with Gear ID calibrat' ...
  'ion value'];
CORRLNGEARIDFLTBIT3_CNT_U08.DocUnits = 'Cnt';
CORRLNGEARIDFLTBIT3_CNT_U08.EngDT = dt.u08;
CORRLNGEARIDFLTBIT3_CNT_U08.EngVal = 8;
CORRLNGEARIDFLTBIT3_CNT_U08.Define = 'Local';


GEARID1INVLBIT0_CNT_U08 = DataDict.Constant;
GEARID1INVLBIT0_CNT_U08.LongName = 'GearId1 Invalid Fault';
GEARID1INVLBIT0_CNT_U08.Description = [...
  'NTC_0X1F1 (Bit0  Gear ID input #1 timed out or was otherwise invalid'];
GEARID1INVLBIT0_CNT_U08.DocUnits = 'Cnt';
GEARID1INVLBIT0_CNT_U08.EngDT = dt.u08;
GEARID1INVLBIT0_CNT_U08.EngVal = 1;
GEARID1INVLBIT0_CNT_U08.Define = 'Local';


GEARID2INVLBIT1_CNT_U08 = DataDict.Constant;
GEARID2INVLBIT1_CNT_U08.LongName = 'GearId2 Invalid Fault';
GEARID2INVLBIT1_CNT_U08.Description = [...
  'NTC_0X1F1 (Bit1  Gear ID input #2 timed out or was otherwise invalid'];
GEARID2INVLBIT1_CNT_U08.DocUnits = 'Cnt';
GEARID2INVLBIT1_CNT_U08.EngDT = dt.u08;
GEARID2INVLBIT1_CNT_U08.EngVal = 2;
GEARID2INVLBIT1_CNT_U08.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


NOFAULT_CNT_U08 = DataDict.Constant;
NOFAULT_CNT_U08.LongName = ' No Fault';
NOFAULT_CNT_U08.Description = [...
  'NTC_0X1F1 (There is no Fault reported'];
NOFAULT_CNT_U08.DocUnits = 'Cnt';
NOFAULT_CNT_U08.EngDT = dt.u08;
NOFAULT_CNT_U08.EngVal = 0;
NOFAULT_CNT_U08.Define = 'Local';


TMRTHD_MILLISEC_U32 = DataDict.Constant;
TMRTHD_MILLISEC_U32.LongName = 'Timer Threshold';
TMRTHD_MILLISEC_U32.Description = [...
  'Elapsed time before the Gear Identification signal validity status can' ...
  ' be checked'];
TMRTHD_MILLISEC_U32.DocUnits = 'MilliSec';
TMRTHD_MILLISEC_U32.EngDT = dt.u32;
TMRTHD_MILLISEC_U32.EngVal = 500;
TMRTHD_MILLISEC_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
PwrpkCmpblty = DataDict.NTC;
PwrpkCmpblty.NtcNr = NtcNr2.NTCNR_0X1F1;
PwrpkCmpblty.NtcTyp = 'None';
PwrpkCmpblty.LongName = 'Powerpack Compatibility';
PwrpkCmpblty.Description = 'Fails due to insufficent evidence that the powerpack and gear are compatible.';
PwrpkCmpblty.NtcStInfo = DataDict.NtcStInfoBitPacked;
PwrpkCmpblty.NtcStInfo.Bit0Descr = 'Gear ID input #1 timed out or was otherwise invalid';
PwrpkCmpblty.NtcStInfo.Bit1Descr = 'Gear ID input #2 timed out or was otherwise invalid';
PwrpkCmpblty.NtcStInfo.Bit2Descr = 'Gear ID inputs do not correlate to each other';
PwrpkCmpblty.NtcStInfo.Bit3Descr = 'Gear ID inputs do not correlate with Gear ID calibration value.';
PwrpkCmpblty.NtcStInfo.Bit4Descr = 'Unused';
PwrpkCmpblty.NtcStInfo.Bit5Descr = 'Unused';
PwrpkCmpblty.NtcStInfo.Bit6Descr = 'Unused';
PwrpkCmpblty.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
