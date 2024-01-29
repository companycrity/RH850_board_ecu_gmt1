%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Oct-2016 14:04:21       %
%                                  Created with tool release: 2.48.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

ES105A = DataDict.FDD;
ES105A.Version = '3.2.X';
ES105A.LongName = 'State Of Health Signal Normalization';
ES105A.ShoName  = 'StHlthSigNormn';
ES105A.DesignASIL = 'D';
ES105A.Description = [...
  'This component acts as an interface component between ES106A(State of ' ...
  'Health Signal Statistics)and rest of the components from which signals' ...
  ' need to be monitored.It reads data or status valuesfrom different com' ...
  'ponents, applies normalization algorithm to convert it as State of Hea' ...
  'lthinformation which will be in the scale of 0 to 100.  It also provid' ...
  'es auxiliary output for some signalsto indicate the additional informa' ...
  'tion about monitored signals'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
StHlthSigNormnInit1 = DataDict.Runnable;
StHlthSigNormnInit1.Context = 'Rte';
StHlthSigNormnInit1.TimeStep = 0;
StHlthSigNormnInit1.Description = [...
  'Initialization Runnable for State of Health Signal Normalization compo' ...
  'nent.'];

UpdRawSig = DataDict.SrvRunnable;
UpdRawSig.Context = 'Rte';
UpdRawSig.Description = 'Update Raw Signal';
UpdRawSig.Return = DataDict.CSReturn;
UpdRawSig.Return.Type = 'None';
UpdRawSig.Return.Min = [];
UpdRawSig.Return.Max = [];
UpdRawSig.Return.TestTolerance = [];
UpdRawSig.Arguments(1) = DataDict.CSArguments;
UpdRawSig.Arguments(1).Name = 'SigId';
UpdRawSig.Arguments(1).EngDT = enum.StHlthMonSig3;
UpdRawSig.Arguments(1).EngMin = StHlthMonSig3.STHLTHMONSIG_ECUTFILTD;
UpdRawSig.Arguments(1).EngMax = StHlthMonSig3.STHLTHMONSIG_WHLIMBREJCTN;
UpdRawSig.Arguments(1).Units = 'Cnt';
UpdRawSig.Arguments(1).Direction = 'In';
UpdRawSig.Arguments(1).InitRowCol = [1  1];
UpdRawSig.Arguments(1).Description = [...
  'Signal Identifier Argument for Update Raw Signal'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetFricLrngData = DataDict.Client;
GetFricLrngData.CallLocation = {'StHlthSigNormnInit1'};
GetFricLrngData.Description = 'Get Friction Learning Data Client';
GetFricLrngData.Return = DataDict.CSReturn;
GetFricLrngData.Return.Type = 'None';
GetFricLrngData.Return.Min = [];
GetFricLrngData.Return.Max = [];
GetFricLrngData.Return.TestTolerance = [];
GetFricLrngData.Arguments(1) = DataDict.CSArguments;
GetFricLrngData.Arguments(1).Name = 'FricLrngEna';
GetFricLrngData.Arguments(1).EngDT = dt.lgc;
GetFricLrngData.Arguments(1).EngMin = 0;
GetFricLrngData.Arguments(1).EngMax = 1;
GetFricLrngData.Arguments(1).TestTolerance = 0;
GetFricLrngData.Arguments(1).Units = 'Uls';
GetFricLrngData.Arguments(1).Direction = 'Out';
GetFricLrngData.Arguments(1).InitRowCol = [1  1];
GetFricLrngData.Arguments(1).Description = 'Friction Learning Enable';
GetFricLrngData.Arguments(2) = DataDict.CSArguments;
GetFricLrngData.Arguments(2).Name = 'FricLrngOffsOutpEna';
GetFricLrngData.Arguments(2).EngDT = dt.lgc;
GetFricLrngData.Arguments(2).EngMin = 0;
GetFricLrngData.Arguments(2).EngMax = 1;
GetFricLrngData.Arguments(2).TestTolerance = 0;
GetFricLrngData.Arguments(2).Units = 'Uls';
GetFricLrngData.Arguments(2).Direction = 'Out';
GetFricLrngData.Arguments(2).InitRowCol = [1  1];
GetFricLrngData.Arguments(2).Description = [...
  'Friction Learning Offset Output Enable'];
GetFricLrngData.Arguments(3) = DataDict.CSArguments;
GetFricLrngData.Arguments(3).Name = 'FricLrngOperMod';
GetFricLrngData.Arguments(3).EngDT = enum.SysFricLrngOperMod1;
GetFricLrngData.Arguments(3).EngMin = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_CALIBRATION;
GetFricLrngData.Arguments(3).EngMax = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_BASELINE;
GetFricLrngData.Arguments(3).TestTolerance = 998;
GetFricLrngData.Arguments(3).Units = 'Cnt';
GetFricLrngData.Arguments(3).Direction = 'Out';
GetFricLrngData.Arguments(3).InitRowCol = [1  1];
GetFricLrngData.Arguments(3).Description = 'Friction Learning Operating Mode';
GetFricLrngData.Arguments(4) = DataDict.CSArguments;
GetFricLrngData.Arguments(4).Name = 'EolFric';
GetFricLrngData.Arguments(4).EngDT = dt.float32;
GetFricLrngData.Arguments(4).EngMin = 0;
GetFricLrngData.Arguments(4).EngMax = 127;
GetFricLrngData.Arguments(4).TestTolerance = 127;
GetFricLrngData.Arguments(4).Units = 'HwNwtMtr';
GetFricLrngData.Arguments(4).Direction = 'Out';
GetFricLrngData.Arguments(4).InitRowCol = [1  1];
GetFricLrngData.Arguments(4).Description = 'End of Line Friction';


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'UpdRawSig'};
GetNtcQlfrSts.Description = 'Get NTC Qualifier status Runnable';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = '';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'NTC Number Argument';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'NTC Qualifier Argument';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'UpdRawSig'};
SetNtcSts.Description = 'Set NTC Status Client Service';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC Number Argument';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NTC Status Info Argument';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC Status Argument';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce Step Argument';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
CurrMotSumABC = DataDict.IpSignal;
CurrMotSumABC.LongName = 'Current Motor Sum ABC';
CurrMotSumABC.Description = 'Current Motor Sum ABC';
CurrMotSumABC.DocUnits = 'Ampr';
CurrMotSumABC.EngDT = dt.float32;
CurrMotSumABC.EngInit = 0;
CurrMotSumABC.EngMin = 0;
CurrMotSumABC.EngMax = 600;
CurrMotSumABC.ReadIn = {'UpdRawSig'};
CurrMotSumABC.ReadType = 'Rte';


CurrMotSumDEF = DataDict.IpSignal;
CurrMotSumDEF.LongName = 'Current Motor Sum DEF';
CurrMotSumDEF.Description = 'Current Motor Sum DEF';
CurrMotSumDEF.DocUnits = 'Ampr';
CurrMotSumDEF.EngDT = dt.float32;
CurrMotSumDEF.EngInit = 0;
CurrMotSumDEF.EngMin = 0;
CurrMotSumDEF.EngMax = 600;
CurrMotSumDEF.ReadIn = {'UpdRawSig'};
CurrMotSumDEF.ReadType = 'Rte';


DutyCycThermProtnMaxOutp = DataDict.IpSignal;
DutyCycThermProtnMaxOutp.LongName = 'Thermal Protection Maximum Output';
DutyCycThermProtnMaxOutp.Description = 'Thermal Protection Maximum Output';
DutyCycThermProtnMaxOutp.DocUnits = 'Uls';
DutyCycThermProtnMaxOutp.EngDT = dt.u16p0;
DutyCycThermProtnMaxOutp.EngInit = 0;
DutyCycThermProtnMaxOutp.EngMin = 0;
DutyCycThermProtnMaxOutp.EngMax = 200;
DutyCycThermProtnMaxOutp.ReadIn = {'UpdRawSig'};
DutyCycThermProtnMaxOutp.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'ECU Temperature Filtered';
EcuTFild.Description = 'ECU Temperature Filtered';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 0;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'UpdRawSig'};
EcuTFild.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1600;
HwAg.EngMax = 1600;
HwAg.ReadIn = {'UpdRawSig'};
HwAg.ReadType = 'Rte';


HwAgEotCcw = DataDict.IpSignal;
HwAgEotCcw.LongName = 'Handwheel Angle End of Travel Counter Clockwise';
HwAgEotCcw.Description = [...
  'Handwheel Angle End of Travel Counter Clockwise'];
HwAgEotCcw.DocUnits = 'HwDeg';
HwAgEotCcw.EngDT = dt.float32;
HwAgEotCcw.EngInit = -360;
HwAgEotCcw.EngMin = -900;
HwAgEotCcw.EngMax = -360;
HwAgEotCcw.ReadIn = {'UpdRawSig'};
HwAgEotCcw.ReadType = 'Rte';


HwAgEotCw = DataDict.IpSignal;
HwAgEotCw.LongName = 'Handwheel Angle End of Travel Clockwise';
HwAgEotCw.Description = [...
  'Handwheel Angle End of Travel Clockwise'];
HwAgEotCw.DocUnits = 'HwDeg';
HwAgEotCw.EngDT = dt.float32;
HwAgEotCw.EngInit = 360;
HwAgEotCw.EngMin = 360;
HwAgEotCw.EngMax = 900;
HwAgEotCw.ReadIn = {'UpdRawSig'};
HwAgEotCw.ReadType = 'Rte';


HwAuthy = DataDict.IpSignal;
HwAuthy.LongName = 'Handwheel Authority';
HwAuthy.Description = 'Handwheel Authority';
HwAuthy.DocUnits = 'Uls';
HwAuthy.EngDT = dt.float32;
HwAuthy.EngInit = 0;
HwAuthy.EngMin = 0;
HwAuthy.EngMax = 1;
HwAuthy.ReadIn = {'UpdRawSig'};
HwAuthy.ReadType = 'Rte';


HwTqChACorrlnTraErr = DataDict.IpSignal;
HwTqChACorrlnTraErr.LongName = 'Handwheel Torque Channel A  Correlation Transient Error';
HwTqChACorrlnTraErr.Description = [...
  'Handwheel Torque Channel A  Correlation Transient Error'];
HwTqChACorrlnTraErr.DocUnits = 'HwNwtMtr';
HwTqChACorrlnTraErr.EngDT = dt.float32;
HwTqChACorrlnTraErr.EngInit = 0;
HwTqChACorrlnTraErr.EngMin = -10;
HwTqChACorrlnTraErr.EngMax = 10;
HwTqChACorrlnTraErr.ReadIn = {'UpdRawSig'};
HwTqChACorrlnTraErr.ReadType = 'Rte';


HwTqChBCorrlnTraErr = DataDict.IpSignal;
HwTqChBCorrlnTraErr.LongName = 'Handwheel Torque Channel B  Correlation Transient Error';
HwTqChBCorrlnTraErr.Description = [...
  'Handwheel Torque Channel B  Correlation Transient Error'];
HwTqChBCorrlnTraErr.DocUnits = 'HwNwtMtr';
HwTqChBCorrlnTraErr.EngDT = dt.float32;
HwTqChBCorrlnTraErr.EngInit = 0;
HwTqChBCorrlnTraErr.EngMin = -10;
HwTqChBCorrlnTraErr.EngMax = 10;
HwTqChBCorrlnTraErr.ReadIn = {'UpdRawSig'};
HwTqChBCorrlnTraErr.ReadType = 'Rte';


HwTqIdptSig = DataDict.IpSignal;
HwTqIdptSig.LongName = 'Handwheel Torque Independent Signals';
HwTqIdptSig.Description = [...
  'Handwheel Torque Independent Signals'];
HwTqIdptSig.DocUnits = 'Cnt';
HwTqIdptSig.EngDT = dt.u08;
HwTqIdptSig.EngInit = 4;
HwTqIdptSig.EngMin = 0;
HwTqIdptSig.EngMax = 4;
HwTqIdptSig.ReadIn = {'UpdRawSig'};
HwTqIdptSig.ReadType = 'Rte';


LclRamEccSngBitCntrOutp = DataDict.IpSignal;
LclRamEccSngBitCntrOutp.LongName = 'Local RAM ECC Single Bit Counter Output';
LclRamEccSngBitCntrOutp.Description = [...
  'Local RAM ECC Single Bit Counter Output'];
LclRamEccSngBitCntrOutp.DocUnits = 'Cnt';
LclRamEccSngBitCntrOutp.EngDT = dt.u08;
LclRamEccSngBitCntrOutp.EngInit = 0;
LclRamEccSngBitCntrOutp.EngMin = 0;
LclRamEccSngBitCntrOutp.EngMax = 100;
LclRamEccSngBitCntrOutp.ReadIn = {'UpdRawSig'};
LclRamEccSngBitCntrOutp.ReadType = 'Rte';


MaxLrndFric = DataDict.IpSignal;
MaxLrndFric.LongName = 'Maximum Learned Friction';
MaxLrndFric.Description = [...
  'Maximum Learned Friction which is based on the maximum of average of f' ...
  'our quadrants of friction calculated by System Friction Learning funct' ...
  'ion.'];
MaxLrndFric.DocUnits = 'HwNwtMtr';
MaxLrndFric.EngDT = dt.float32;
MaxLrndFric.EngInit = 0;
MaxLrndFric.EngMin = 0;
MaxLrndFric.EngMax = 254;
MaxLrndFric.ReadIn = {'UpdRawSig'};
MaxLrndFric.ReadType = 'Rte';


MotAg2VltgSqd = DataDict.IpSignal;
MotAg2VltgSqd.LongName = 'Motor Angle 2 Voltage Squared';
MotAg2VltgSqd.Description = 'Motor Angle 2 Voltage Squared';
MotAg2VltgSqd.DocUnits = 'VoltSqd';
MotAg2VltgSqd.EngDT = dt.float32;
MotAg2VltgSqd.EngInit = 1.755625;
MotAg2VltgSqd.EngMin = 0;
MotAg2VltgSqd.EngMax = 25;
MotAg2VltgSqd.ReadIn = {'UpdRawSig'};
MotAg2VltgSqd.ReadType = 'Rte';


MotAgABErrTerm = DataDict.IpSignal;
MotAgABErrTerm.LongName = 'Motor Angle A B Error Term';
MotAgABErrTerm.Description = 'Motor Angle A B Error Term';
MotAgABErrTerm.DocUnits = 'MotRev';
MotAgABErrTerm.EngDT = dt.u0p16;
MotAgABErrTerm.EngInit = 0;
MotAgABErrTerm.EngMin = 0;
MotAgABErrTerm.EngMax = 0.9999847412;
MotAgABErrTerm.ReadIn = {'UpdRawSig'};
MotAgABErrTerm.ReadType = 'Rte';


MotAgACErrTerm = DataDict.IpSignal;
MotAgACErrTerm.LongName = 'Motor Angle A C Error Term';
MotAgACErrTerm.Description = 'Motor Angle A C Error Term';
MotAgACErrTerm.DocUnits = 'MotRev';
MotAgACErrTerm.EngDT = dt.u0p16;
MotAgACErrTerm.EngInit = 0;
MotAgACErrTerm.EngMin = 0;
MotAgACErrTerm.EngMax = 0.9999847412;
MotAgACErrTerm.ReadIn = {'UpdRawSig'};
MotAgACErrTerm.ReadType = 'Rte';


MotAgBCErrTerm = DataDict.IpSignal;
MotAgBCErrTerm.LongName = 'Motor Angle B C Error Term';
MotAgBCErrTerm.Description = 'Motor Angle B C Error Term';
MotAgBCErrTerm.DocUnits = 'MotRev';
MotAgBCErrTerm.EngDT = dt.u0p16;
MotAgBCErrTerm.EngInit = 0;
MotAgBCErrTerm.EngMin = 0;
MotAgBCErrTerm.EngMax = 0.9999847412;
MotAgBCErrTerm.ReadIn = {'UpdRawSig'};
MotAgBCErrTerm.ReadType = 'Rte';


MotDrvErrA = DataDict.IpSignal;
MotDrvErrA.LongName = 'Motor Drive Error A';
MotDrvErrA.Description = 'Motor Drive Error A';
MotDrvErrA.DocUnits = 'NanoSec';
MotDrvErrA.EngDT = dt.float32;
MotDrvErrA.EngInit = 0;
MotDrvErrA.EngMin = 0;
MotDrvErrA.EngMax = 40000000;
MotDrvErrA.ReadIn = {'UpdRawSig'};
MotDrvErrA.ReadType = 'Rte';


MotDrvErrB = DataDict.IpSignal;
MotDrvErrB.LongName = 'Motor Drive Error B';
MotDrvErrB.Description = 'Motor Drive Error B';
MotDrvErrB.DocUnits = 'NanoSec';
MotDrvErrB.EngDT = dt.float32;
MotDrvErrB.EngInit = 0;
MotDrvErrB.EngMin = 0;
MotDrvErrB.EngMax = 40000000;
MotDrvErrB.ReadIn = {'UpdRawSig'};
MotDrvErrB.ReadType = 'Rte';


MotDrvErrC = DataDict.IpSignal;
MotDrvErrC.LongName = 'Motor Drive Error C';
MotDrvErrC.Description = 'Motor Drive Error C';
MotDrvErrC.DocUnits = 'NanoSec';
MotDrvErrC.EngDT = dt.float32;
MotDrvErrC.EngInit = 0;
MotDrvErrC.EngMin = 0;
MotDrvErrC.EngMax = 40000000;
MotDrvErrC.ReadIn = {'UpdRawSig'};
MotDrvErrC.ReadType = 'Rte';


MotDrvErrD = DataDict.IpSignal;
MotDrvErrD.LongName = 'Motor Drive Error D';
MotDrvErrD.Description = 'Motor Drive Error D';
MotDrvErrD.DocUnits = 'NanoSec';
MotDrvErrD.EngDT = dt.float32;
MotDrvErrD.EngInit = 0;
MotDrvErrD.EngMin = 0;
MotDrvErrD.EngMax = 40000000;
MotDrvErrD.ReadIn = {'UpdRawSig'};
MotDrvErrD.ReadType = 'Rte';


MotDrvErrE = DataDict.IpSignal;
MotDrvErrE.LongName = 'Motor Drive Error E';
MotDrvErrE.Description = 'Motor Drive Error E';
MotDrvErrE.DocUnits = 'NanoSec';
MotDrvErrE.EngDT = dt.float32;
MotDrvErrE.EngInit = 0;
MotDrvErrE.EngMin = 0;
MotDrvErrE.EngMax = 40000000;
MotDrvErrE.ReadIn = {'UpdRawSig'};
MotDrvErrE.ReadType = 'Rte';


MotDrvErrF = DataDict.IpSignal;
MotDrvErrF.LongName = 'Motor Drive Error F';
MotDrvErrF.Description = 'Motor Drive Error F';
MotDrvErrF.DocUnits = 'NanoSec';
MotDrvErrF.EngDT = dt.float32;
MotDrvErrF.EngInit = 0;
MotDrvErrF.EngMin = 0;
MotDrvErrF.EngMax = 40000000;
MotDrvErrF.ReadIn = {'UpdRawSig'};
MotDrvErrF.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity in Column Reference Frame';
MotVelCrf.Description = [...
  'Motor Velocity in Column Reference Frame'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1118;
MotVelCrf.EngMax = 1118;
MotVelCrf.ReadIn = {'UpdRawSig'};
MotVelCrf.ReadType = 'Rte';


RackLimrEotSig0Avl = DataDict.IpSignal;
RackLimrEotSig0Avl.LongName = 'Rack Limiter End of Travel Signal0 Available';
RackLimrEotSig0Avl.Description = [...
  'Rack Limiter End of Travel Signal0 Available'];
RackLimrEotSig0Avl.DocUnits = 'Uls';
RackLimrEotSig0Avl.EngDT = dt.lgc;
RackLimrEotSig0Avl.EngInit = 0;
RackLimrEotSig0Avl.EngMin = 0;
RackLimrEotSig0Avl.EngMax = 1;
RackLimrEotSig0Avl.ReadIn = {'UpdRawSig'};
RackLimrEotSig0Avl.ReadType = 'Rte';


RackLimrEotSig1Avl = DataDict.IpSignal;
RackLimrEotSig1Avl.LongName = 'Rack Limiter End of Travel Signal1 Available';
RackLimrEotSig1Avl.Description = [...
  'Rack Limiter End of Travel Signal1 Available'];
RackLimrEotSig1Avl.DocUnits = 'Uls';
RackLimrEotSig1Avl.EngDT = dt.lgc;
RackLimrEotSig1Avl.EngInit = 0;
RackLimrEotSig1Avl.EngMin = 0;
RackLimrEotSig1Avl.EngMax = 1;
RackLimrEotSig1Avl.ReadIn = {'UpdRawSig'};
RackLimrEotSig1Avl.ReadType = 'Rte';


WhlImbRejctnCmd = DataDict.IpSignal;
WhlImbRejctnCmd.LongName = 'Wheel Imbalance Rejection Command';
WhlImbRejctnCmd.Description = [...
  'Wheel Imbalance Rejection Command,  Output torque command to the Assis' ...
  't module.'];
WhlImbRejctnCmd.DocUnits = 'MotNwtMtr';
WhlImbRejctnCmd.EngDT = dt.float32;
WhlImbRejctnCmd.EngInit = 0;
WhlImbRejctnCmd.EngMin = -8.8;
WhlImbRejctnCmd.EngMax = 8.8;
WhlImbRejctnCmd.ReadIn = {'UpdRawSig'};
WhlImbRejctnCmd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AbsltMotPosABDifStHlth = DataDict.OpSignal;
AbsltMotPosABDifStHlth.LongName = 'Absolute Motor Position Phase AB difference State of Health';
AbsltMotPosABDifStHlth.Description = [...
  'Absolute Motor Position Phase AB difference State of Health'];
AbsltMotPosABDifStHlth.DocUnits = 'Cnt';
AbsltMotPosABDifStHlth.SwcShoName = 'StHlthSigNormn';
AbsltMotPosABDifStHlth.EngDT = dt.u08;
AbsltMotPosABDifStHlth.EngInit = 100;
AbsltMotPosABDifStHlth.EngMin = 0;
AbsltMotPosABDifStHlth.EngMax = 100;
AbsltMotPosABDifStHlth.TestTolerance = 0;
AbsltMotPosABDifStHlth.WrittenIn = {'UpdRawSig'};
AbsltMotPosABDifStHlth.WriteType = 'Rte';


AbsltMotPosACDifStHlth = DataDict.OpSignal;
AbsltMotPosACDifStHlth.LongName = 'Absolute System Motor Position Phase AC difference State of Health';
AbsltMotPosACDifStHlth.Description = [...
  'Absolute Motor Position Phase AC difference State of Health'];
AbsltMotPosACDifStHlth.DocUnits = 'Cnt';
AbsltMotPosACDifStHlth.SwcShoName = 'StHlthSigNormn';
AbsltMotPosACDifStHlth.EngDT = dt.u08;
AbsltMotPosACDifStHlth.EngInit = 100;
AbsltMotPosACDifStHlth.EngMin = 0;
AbsltMotPosACDifStHlth.EngMax = 100;
AbsltMotPosACDifStHlth.TestTolerance = 0;
AbsltMotPosACDifStHlth.WrittenIn = {'UpdRawSig'};
AbsltMotPosACDifStHlth.WriteType = 'Rte';


AbsltMotPosBCDifStHlth = DataDict.OpSignal;
AbsltMotPosBCDifStHlth.LongName = 'Absolute Motor Position Phase BC difference State of Health';
AbsltMotPosBCDifStHlth.Description = [...
  'Absolute Motor Position Phase BC difference State of Health'];
AbsltMotPosBCDifStHlth.DocUnits = 'Cnt';
AbsltMotPosBCDifStHlth.SwcShoName = 'StHlthSigNormn';
AbsltMotPosBCDifStHlth.EngDT = dt.u08;
AbsltMotPosBCDifStHlth.EngInit = 100;
AbsltMotPosBCDifStHlth.EngMin = 0;
AbsltMotPosBCDifStHlth.EngMax = 100;
AbsltMotPosBCDifStHlth.TestTolerance = 0;
AbsltMotPosBCDifStHlth.WrittenIn = {'UpdRawSig'};
AbsltMotPosBCDifStHlth.WriteType = 'Rte';


CtrlrTRng = DataDict.OpSignal;
CtrlrTRng.LongName = 'Controller Temperature Range';
CtrlrTRng.Description = [...
  'Controller temperature range update for present and ignition cycle'];
CtrlrTRng.DocUnits = 'Cnt';
CtrlrTRng.SwcShoName = 'StHlthSigNormn';
CtrlrTRng.EngDT = dt.u08;
CtrlrTRng.EngInit = 0;
CtrlrTRng.EngMin = 0;
CtrlrTRng.EngMax = 15;
CtrlrTRng.TestTolerance = 0;
CtrlrTRng.WrittenIn = {'UpdRawSig'};
CtrlrTRng.WriteType = 'Rte';


CtrlrTStHlth = DataDict.OpSignal;
CtrlrTStHlth.LongName = 'Controller Temperature State Health';
CtrlrTStHlth.Description = [...
  'Variable that indicates the Controller Temperature State Of Health'];
CtrlrTStHlth.DocUnits = 'Cnt';
CtrlrTStHlth.SwcShoName = 'StHlthSigNormn';
CtrlrTStHlth.EngDT = dt.u08;
CtrlrTStHlth.EngInit = 100;
CtrlrTStHlth.EngMin = 0;
CtrlrTStHlth.EngMax = 100;
CtrlrTStHlth.TestTolerance = 0;
CtrlrTStHlth.WrittenIn = {'UpdRawSig'};
CtrlrTStHlth.WriteType = 'Rte';


CurrMotSumABCStHlth = DataDict.OpSignal;
CurrMotSumABCStHlth.LongName = 'Current Motor Sum ABC State of health';
CurrMotSumABCStHlth.Description = [...
  'Current Motor Sum ABC State of health'];
CurrMotSumABCStHlth.DocUnits = 'Cnt';
CurrMotSumABCStHlth.SwcShoName = 'StHlthSigNormn';
CurrMotSumABCStHlth.EngDT = dt.u08;
CurrMotSumABCStHlth.EngInit = 100;
CurrMotSumABCStHlth.EngMin = 0;
CurrMotSumABCStHlth.EngMax = 100;
CurrMotSumABCStHlth.TestTolerance = 0;
CurrMotSumABCStHlth.WrittenIn = {'UpdRawSig'};
CurrMotSumABCStHlth.WriteType = 'Rte';


CurrMotSumDEFStHlth = DataDict.OpSignal;
CurrMotSumDEFStHlth.LongName = 'Current Motor Sum DEF State of healthh';
CurrMotSumDEFStHlth.Description = [...
  'Current Motor Sum DEF State of health'];
CurrMotSumDEFStHlth.DocUnits = 'Cnt';
CurrMotSumDEFStHlth.SwcShoName = 'StHlthSigNormn';
CurrMotSumDEFStHlth.EngDT = dt.u08;
CurrMotSumDEFStHlth.EngInit = 100;
CurrMotSumDEFStHlth.EngMin = 0;
CurrMotSumDEFStHlth.EngMax = 100;
CurrMotSumDEFStHlth.TestTolerance = 0;
CurrMotSumDEFStHlth.WrittenIn = {'UpdRawSig'};
CurrMotSumDEFStHlth.WriteType = 'Rte';


DigTqIdptSigStHlth = DataDict.OpSignal;
DigTqIdptSigStHlth.LongName = 'Digital Torque Independent Signal For State of Health';
DigTqIdptSigStHlth.Description = [...
  'Digital Torque Independent Signal For State of Health based upon indep' ...
  'endent signal'];
DigTqIdptSigStHlth.DocUnits = 'Cnt';
DigTqIdptSigStHlth.SwcShoName = 'StHlthSigNormn';
DigTqIdptSigStHlth.EngDT = dt.u08;
DigTqIdptSigStHlth.EngInit = 100;
DigTqIdptSigStHlth.EngMin = 0;
DigTqIdptSigStHlth.EngMax = 100;
DigTqIdptSigStHlth.TestTolerance = 0;
DigTqIdptSigStHlth.WrittenIn = {'UpdRawSig'};
DigTqIdptSigStHlth.WriteType = 'Rte';


DigTqSnsrAStHlth = DataDict.OpSignal;
DigTqSnsrAStHlth.LongName = 'Digital Torque Sensor A State of Health';
DigTqSnsrAStHlth.Description = [...
  'Digital Torque Sensor A State of Health.absolute value of this is veri' ...
  'fied with thresold value'];
DigTqSnsrAStHlth.DocUnits = 'Cnt';
DigTqSnsrAStHlth.SwcShoName = 'StHlthSigNormn';
DigTqSnsrAStHlth.EngDT = dt.u08;
DigTqSnsrAStHlth.EngInit = 100;
DigTqSnsrAStHlth.EngMin = 0;
DigTqSnsrAStHlth.EngMax = 100;
DigTqSnsrAStHlth.TestTolerance = 0;
DigTqSnsrAStHlth.WrittenIn = {'UpdRawSig'};
DigTqSnsrAStHlth.WriteType = 'Rte';


DigTqSnsrBStHlth = DataDict.OpSignal;
DigTqSnsrBStHlth.LongName = 'Digital Torque Sensor B State of Health';
DigTqSnsrBStHlth.Description = [...
  'Digital Torque Sensor B State of Health.absolute value of this is veri' ...
  'fied with thresold value'];
DigTqSnsrBStHlth.DocUnits = 'Cnt';
DigTqSnsrBStHlth.SwcShoName = 'StHlthSigNormn';
DigTqSnsrBStHlth.EngDT = dt.u08;
DigTqSnsrBStHlth.EngInit = 100;
DigTqSnsrBStHlth.EngMin = 0;
DigTqSnsrBStHlth.EngMax = 100;
DigTqSnsrBStHlth.TestTolerance = 0;
DigTqSnsrBStHlth.WrittenIn = {'UpdRawSig'};
DigTqSnsrBStHlth.WriteType = 'Rte';


DutyCycStHlth = DataDict.OpSignal;
DutyCycStHlth.LongName = 'Duty Cycle State of Health';
DutyCycStHlth.Description = [...
  'Thermal Protection Maximum input is checked with two thresold value an' ...
  'd based on that state of health signal is verified'];
DutyCycStHlth.DocUnits = 'Cnt';
DutyCycStHlth.SwcShoName = 'StHlthSigNormn';
DutyCycStHlth.EngDT = dt.u08;
DutyCycStHlth.EngInit = 100;
DutyCycStHlth.EngMin = 0;
DutyCycStHlth.EngMax = 100;
DutyCycStHlth.TestTolerance = 0;
DutyCycStHlth.WrittenIn = {'UpdRawSig'};
DutyCycStHlth.WriteType = 'Rte';


EotImpctStHlth = DataDict.OpSignal;
EotImpctStHlth.LongName = 'End of Travel Impact State of Health';
EotImpctStHlth.Description = [...
  'End of Travel Impact State of Health'];
EotImpctStHlth.DocUnits = 'Cnt';
EotImpctStHlth.SwcShoName = 'StHlthSigNormn';
EotImpctStHlth.EngDT = dt.u08;
EotImpctStHlth.EngInit = 100;
EotImpctStHlth.EngMin = 0;
EotImpctStHlth.EngMax = 100;
EotImpctStHlth.TestTolerance = 0;
EotImpctStHlth.WrittenIn = {'UpdRawSig'};
EotImpctStHlth.WriteType = 'Rte';


FricEstimnStHlth = DataDict.OpSignal;
FricEstimnStHlth.LongName = 'Friction Estimation State of Health';
FricEstimnStHlth.Description = [...
  'Based on Maximum Raw Average Friction value its State of Health is det' ...
  'ermined by verifying the value againest a Calibration.'];
FricEstimnStHlth.DocUnits = 'Cnt';
FricEstimnStHlth.SwcShoName = 'StHlthSigNormn';
FricEstimnStHlth.EngDT = dt.u08;
FricEstimnStHlth.EngInit = 100;
FricEstimnStHlth.EngMin = 0;
FricEstimnStHlth.EngMax = 100;
FricEstimnStHlth.TestTolerance = 0;
FricEstimnStHlth.WrittenIn = {'UpdRawSig'};
FricEstimnStHlth.WriteType = 'Rte';


MotPosStHlth = DataDict.OpSignal;
MotPosStHlth.LongName = 'Motor position State of health';
MotPosStHlth.Description = [...
  'Voltage Squared is verified to create Motor position state of health o' ...
  'utput'];
MotPosStHlth.DocUnits = 'Cnt';
MotPosStHlth.SwcShoName = 'StHlthSigNormn';
MotPosStHlth.EngDT = dt.u08;
MotPosStHlth.EngInit = 100;
MotPosStHlth.EngMin = 0;
MotPosStHlth.EngMax = 100;
MotPosStHlth.TestTolerance = 0;
MotPosStHlth.WrittenIn = {'UpdRawSig'};
MotPosStHlth.WriteType = 'Rte';


OutpAssiStHlth = DataDict.OpSignal;
OutpAssiStHlth.LongName = 'Output Assist State of Health';
OutpAssiStHlth.Description = 'Health of Assist Due To Voltage';
OutpAssiStHlth.DocUnits = 'Cnt';
OutpAssiStHlth.SwcShoName = 'StHlthSigNormn';
OutpAssiStHlth.EngDT = dt.u08;
OutpAssiStHlth.EngInit = 100;
OutpAssiStHlth.EngMin = 0;
OutpAssiStHlth.EngMax = 100;
OutpAssiStHlth.TestTolerance = 0;
OutpAssiStHlth.WrittenIn = {'UpdRawSig'};
OutpAssiStHlth.WriteType = 'Rte';


PhaAStHlth = DataDict.OpSignal;
PhaAStHlth.LongName = 'Phase A state of Health';
PhaAStHlth.Description = [...
  'Phase A state of Health calculated from motor drive diagnostic Error A' ...
  ''];
PhaAStHlth.DocUnits = 'Cnt';
PhaAStHlth.SwcShoName = 'StHlthSigNormn';
PhaAStHlth.EngDT = dt.u08;
PhaAStHlth.EngInit = 100;
PhaAStHlth.EngMin = 0;
PhaAStHlth.EngMax = 100;
PhaAStHlth.TestTolerance = 0;
PhaAStHlth.WrittenIn = {'UpdRawSig'};
PhaAStHlth.WriteType = 'Rte';


PhaBStHlth = DataDict.OpSignal;
PhaBStHlth.LongName = 'Phase B state of Health';
PhaBStHlth.Description = [...
  'Phase B state of Health calculated from motor drive diagnostic Error B' ...
  ''];
PhaBStHlth.DocUnits = 'Cnt';
PhaBStHlth.SwcShoName = 'StHlthSigNormn';
PhaBStHlth.EngDT = dt.u08;
PhaBStHlth.EngInit = 100;
PhaBStHlth.EngMin = 0;
PhaBStHlth.EngMax = 100;
PhaBStHlth.TestTolerance = 0;
PhaBStHlth.WrittenIn = {'UpdRawSig'};
PhaBStHlth.WriteType = 'Rte';


PhaCStHlth = DataDict.OpSignal;
PhaCStHlth.LongName = 'Phase C state of Health';
PhaCStHlth.Description = [...
  'Phase C state of Health calculated from motor drive diagnostic Error C' ...
  ''];
PhaCStHlth.DocUnits = 'Cnt';
PhaCStHlth.SwcShoName = 'StHlthSigNormn';
PhaCStHlth.EngDT = dt.u08;
PhaCStHlth.EngInit = 100;
PhaCStHlth.EngMin = 0;
PhaCStHlth.EngMax = 100;
PhaCStHlth.TestTolerance = 0;
PhaCStHlth.WrittenIn = {'UpdRawSig'};
PhaCStHlth.WriteType = 'Rte';


PhaDStHlth = DataDict.OpSignal;
PhaDStHlth.LongName = 'Phase D state of Health';
PhaDStHlth.Description = [...
  'Phase D state of Health calculated from motor drive diagnostic Error D' ...
  ''];
PhaDStHlth.DocUnits = 'Cnt';
PhaDStHlth.SwcShoName = 'StHlthSigNormn';
PhaDStHlth.EngDT = dt.u08;
PhaDStHlth.EngInit = 100;
PhaDStHlth.EngMin = 0;
PhaDStHlth.EngMax = 100;
PhaDStHlth.TestTolerance = 0;
PhaDStHlth.WrittenIn = {'UpdRawSig'};
PhaDStHlth.WriteType = 'Rte';


PhaEStHlth = DataDict.OpSignal;
PhaEStHlth.LongName = 'Phase E state of Health';
PhaEStHlth.Description = [...
  'Phase E state of Health calculated from motor drive diagnostic Error E' ...
  ''];
PhaEStHlth.DocUnits = 'Cnt';
PhaEStHlth.SwcShoName = 'StHlthSigNormn';
PhaEStHlth.EngDT = dt.u08;
PhaEStHlth.EngInit = 100;
PhaEStHlth.EngMin = 0;
PhaEStHlth.EngMax = 100;
PhaEStHlth.TestTolerance = 0;
PhaEStHlth.WrittenIn = {'UpdRawSig'};
PhaEStHlth.WriteType = 'Rte';


PhaFStHlth = DataDict.OpSignal;
PhaFStHlth.LongName = 'Phase F state of Health';
PhaFStHlth.Description = [...
  'Phase F state of Health calculated from motor drive diagnostic Error F' ...
  ''];
PhaFStHlth.DocUnits = 'Cnt';
PhaFStHlth.SwcShoName = 'StHlthSigNormn';
PhaFStHlth.EngDT = dt.u08;
PhaFStHlth.EngInit = 100;
PhaFStHlth.EngMin = 0;
PhaFStHlth.EngMax = 100;
PhaFStHlth.TestTolerance = 0;
PhaFStHlth.WrittenIn = {'UpdRawSig'};
PhaFStHlth.WriteType = 'Rte';


RamEccSngBitCorrnStHlth = DataDict.OpSignal;
RamEccSngBitCorrnStHlth.LongName = 'Local RAM ECC Single Bit Counter State of Health';
RamEccSngBitCorrnStHlth.Description = [...
  'Local RAM ECC Single Bit Counter State of Health'];
RamEccSngBitCorrnStHlth.DocUnits = 'Cnt';
RamEccSngBitCorrnStHlth.SwcShoName = 'StHlthSigNormn';
RamEccSngBitCorrnStHlth.EngDT = dt.u08;
RamEccSngBitCorrnStHlth.EngInit = 100;
RamEccSngBitCorrnStHlth.EngMin = 0;
RamEccSngBitCorrnStHlth.EngMax = 100;
RamEccSngBitCorrnStHlth.TestTolerance = 0;
RamEccSngBitCorrnStHlth.WrittenIn = {'UpdRawSig'};
RamEccSngBitCorrnStHlth.WriteType = 'Rte';


VltgRng = DataDict.OpSignal;
VltgRng.LongName = 'Voltage Range';
VltgRng.Description = [...
  'Voltage range update for present and ignition cycle'];
VltgRng.DocUnits = 'Cnt';
VltgRng.SwcShoName = 'StHlthSigNormn';
VltgRng.EngDT = dt.u08;
VltgRng.EngInit = 0;
VltgRng.EngMin = 0;
VltgRng.EngMax = 15;
VltgRng.TestTolerance = 0;
VltgRng.WrittenIn = {'UpdRawSig'};
VltgRng.WriteType = 'Rte';


WhlImbMaxCmpStHlth = DataDict.OpSignal;
WhlImbMaxCmpStHlth.LongName = 'Wheel Imbalance Maximum Compensation State of Health';
WhlImbMaxCmpStHlth.Description = [...
  'Based on Wheel Imbalance Rejection torque command its State of Health ' ...
  'is determined by verifying the value againest a Calibration.'];
WhlImbMaxCmpStHlth.DocUnits = 'Cnt';
WhlImbMaxCmpStHlth.SwcShoName = 'StHlthSigNormn';
WhlImbMaxCmpStHlth.EngDT = dt.u08;
WhlImbMaxCmpStHlth.EngInit = 100;
WhlImbMaxCmpStHlth.EngMin = 0;
WhlImbMaxCmpStHlth.EngMax = 100;
WhlImbMaxCmpStHlth.TestTolerance = 0;
WhlImbMaxCmpStHlth.WrittenIn = {'UpdRawSig'};
WhlImbMaxCmpStHlth.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
EolFric = DataDict.IRV;
EolFric.LongName = 'EOL Friction';
EolFric.Description = [...
  'EOL Friction from a client runnable "GetFricLrngData"'];
EolFric.DocUnits = 'HwNwtMtr';
EolFric.EngDT = dt.float32;
EolFric.EngInit = 0;
EolFric.EngMin = 0;
EolFric.EngMax = 127;
EolFric.ReadIn = {'UpdRawSig'};
EolFric.WrittenIn = {'StHlthSigNormnInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
StHlthSigNormnAbsltMotPosDifStHlthDiagThd = DataDict.Calibration;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.LongName = 'State Of Health Signal Normalization Absolute Difference State of Health Diagnosis Thresold';
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.Description = [...
  'Thresold Value Used to Determine the Ntc status for absolute Differenc' ...
  'e State of Health'];
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.DocUnits = 'Uls';
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.EngDT = dt.u08;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.EngVal = 67;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.EngMin = 0;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.EngMax = 100;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.Cardinality = 'Cmn';
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.CustomerVisible = false;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.Online = false;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.Impact = 'H';
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.TuningOwner = 'Safety';
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.GraphLink = {''};
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.Monotony = 'None';
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.MaxGrad = 100;
StHlthSigNormnAbsltMotPosDifStHlthDiagThd.PortName = 'StHlthSigNormnAbsltMotPosDifStHlthDiagThd';


StHlthSigNormnCurrMotSumStHlthDiagThd = DataDict.Calibration;
StHlthSigNormnCurrMotSumStHlthDiagThd.LongName = 'State Of Health Signal Normalization Current Motor Sum State of health Diagnostic Thresold';
StHlthSigNormnCurrMotSumStHlthDiagThd.Description = [...
  'Thresold Value Used to Determine the Ntc status for Current Motor Sum ' ...
  'State of health'];
StHlthSigNormnCurrMotSumStHlthDiagThd.DocUnits = 'Uls';
StHlthSigNormnCurrMotSumStHlthDiagThd.EngDT = dt.u08;
StHlthSigNormnCurrMotSumStHlthDiagThd.EngVal = 67;
StHlthSigNormnCurrMotSumStHlthDiagThd.EngMin = 0;
StHlthSigNormnCurrMotSumStHlthDiagThd.EngMax = 100;
StHlthSigNormnCurrMotSumStHlthDiagThd.Cardinality = 'Cmn';
StHlthSigNormnCurrMotSumStHlthDiagThd.CustomerVisible = false;
StHlthSigNormnCurrMotSumStHlthDiagThd.Online = false;
StHlthSigNormnCurrMotSumStHlthDiagThd.Impact = 'H';
StHlthSigNormnCurrMotSumStHlthDiagThd.TuningOwner = 'Safety';
StHlthSigNormnCurrMotSumStHlthDiagThd.GraphLink = {''};
StHlthSigNormnCurrMotSumStHlthDiagThd.Monotony = 'None';
StHlthSigNormnCurrMotSumStHlthDiagThd.MaxGrad = 100;
StHlthSigNormnCurrMotSumStHlthDiagThd.PortName = 'StHlthSigNormnCurrMotSumStHlthDiagThd';


StHlthSigNormnDigTqStHlthDiagThd = DataDict.Calibration;
StHlthSigNormnDigTqStHlthDiagThd.LongName = 'State Of Health Signal Normalization Digital Torque State of Heath Diagnosis Thresold';
StHlthSigNormnDigTqStHlthDiagThd.Description = [...
  'Thresold Value Used to Determine the Ntc status for Digital Torque Sta' ...
  'te of Heath Diagnostic Thresold'];
StHlthSigNormnDigTqStHlthDiagThd.DocUnits = 'Uls';
StHlthSigNormnDigTqStHlthDiagThd.EngDT = dt.u08;
StHlthSigNormnDigTqStHlthDiagThd.EngVal = 67;
StHlthSigNormnDigTqStHlthDiagThd.EngMin = 0;
StHlthSigNormnDigTqStHlthDiagThd.EngMax = 100;
StHlthSigNormnDigTqStHlthDiagThd.Cardinality = 'Cmn';
StHlthSigNormnDigTqStHlthDiagThd.CustomerVisible = false;
StHlthSigNormnDigTqStHlthDiagThd.Online = false;
StHlthSigNormnDigTqStHlthDiagThd.Impact = 'H';
StHlthSigNormnDigTqStHlthDiagThd.TuningOwner = 'Safety';
StHlthSigNormnDigTqStHlthDiagThd.GraphLink = {''};
StHlthSigNormnDigTqStHlthDiagThd.Monotony = 'None';
StHlthSigNormnDigTqStHlthDiagThd.MaxGrad = 100;
StHlthSigNormnDigTqStHlthDiagThd.PortName = 'StHlthSigNormnDigTqStHlthDiagThd';


StHlthSigNormnDutyCycFltLimThd = DataDict.Calibration;
StHlthSigNormnDutyCycFltLimThd.LongName = 'State Of Health Signal Normalization Duty Cycle Fault Limit Thresold';
StHlthSigNormnDutyCycFltLimThd.Description = [...
  'Thresold Value Used to Determine the Ntc status for Duty Cycle Fault L' ...
  'imit'];
StHlthSigNormnDutyCycFltLimThd.DocUnits = 'Uls';
StHlthSigNormnDutyCycFltLimThd.EngDT = dt.u16p0;
StHlthSigNormnDutyCycFltLimThd.EngVal = 84;
StHlthSigNormnDutyCycFltLimThd.EngMin = 0;
StHlthSigNormnDutyCycFltLimThd.EngMax = 100;
StHlthSigNormnDutyCycFltLimThd.Cardinality = 'Cmn';
StHlthSigNormnDutyCycFltLimThd.CustomerVisible = false;
StHlthSigNormnDutyCycFltLimThd.Online = false;
StHlthSigNormnDutyCycFltLimThd.Impact = 'H';
StHlthSigNormnDutyCycFltLimThd.TuningOwner = 'Safety';
StHlthSigNormnDutyCycFltLimThd.GraphLink = {''};
StHlthSigNormnDutyCycFltLimThd.Monotony = 'None';
StHlthSigNormnDutyCycFltLimThd.MaxGrad = 100;
StHlthSigNormnDutyCycFltLimThd.PortName = 'StHlthSigNormnDutyCycFltLimThd';


StHlthSigNormnHiCtrlrT = DataDict.Calibration;
StHlthSigNormnHiCtrlrT.LongName = 'State Of Health Signal Normalization High Controller Temperature';
StHlthSigNormnHiCtrlrT.Description = [...
  'Higher Temperature Limit of Controller State of Health Calculation. Va' ...
  'lue of this should always be less than value of calibration EcuTMeasRn' ...
  'gDiagcMax'];
StHlthSigNormnHiCtrlrT.DocUnits = 'DegCgrd';
StHlthSigNormnHiCtrlrT.EngDT = dt.float32;
StHlthSigNormnHiCtrlrT.EngVal = 140;
StHlthSigNormnHiCtrlrT.EngMin = -50;
StHlthSigNormnHiCtrlrT.EngMax = 200;
StHlthSigNormnHiCtrlrT.Cardinality = 'Inin';
StHlthSigNormnHiCtrlrT.CustomerVisible = true;
StHlthSigNormnHiCtrlrT.Online = false;
StHlthSigNormnHiCtrlrT.Impact = 'H';
StHlthSigNormnHiCtrlrT.TuningOwner = 'CSE';
StHlthSigNormnHiCtrlrT.GraphLink = {''};
StHlthSigNormnHiCtrlrT.Monotony = 'None';
StHlthSigNormnHiCtrlrT.MaxGrad = 250;
StHlthSigNormnHiCtrlrT.PortName = 'StHlthSigNormnHiCtrlrT';


StHlthSigNormnIdptSigStHlthSca = DataDict.Calibration;
StHlthSigNormnIdptSigStHlthSca.LongName = 'State Of Health Signal Normalization Independent Signal State of Health Scale';
StHlthSigNormnIdptSigStHlthSca.Description = [...
  'State Of Health Signal Normalization Independent Signal State of Healt' ...
  'h Scale'];
StHlthSigNormnIdptSigStHlthSca.DocUnits = 'Uls';
StHlthSigNormnIdptSigStHlthSca.EngDT = dt.u08;
StHlthSigNormnIdptSigStHlthSca.EngVal = 22;
StHlthSigNormnIdptSigStHlthSca.EngMin = 0;
StHlthSigNormnIdptSigStHlthSca.EngMax = 100;
StHlthSigNormnIdptSigStHlthSca.Cardinality = 'Cmn';
StHlthSigNormnIdptSigStHlthSca.CustomerVisible = false;
StHlthSigNormnIdptSigStHlthSca.Online = false;
StHlthSigNormnIdptSigStHlthSca.Impact = 'H';
StHlthSigNormnIdptSigStHlthSca.TuningOwner = 'Safety';
StHlthSigNormnIdptSigStHlthSca.GraphLink = {''};
StHlthSigNormnIdptSigStHlthSca.Monotony = 'None';
StHlthSigNormnIdptSigStHlthSca.MaxGrad = 100;
StHlthSigNormnIdptSigStHlthSca.PortName = 'StHlthSigNormnIdptSigStHlthSca';


StHlthSigNormnLoCtrlrT = DataDict.Calibration;
StHlthSigNormnLoCtrlrT.LongName = 'State Of Health Signal Normalization Low Controller Temperature.';
StHlthSigNormnLoCtrlrT.Description = [...
  'Lower Temperature Limit of Controller State of Health Calculation. Val' ...
  'ue of this should always be greater than value of calibration EcuTMeas' ...
  'RngDiagcMin'];
StHlthSigNormnLoCtrlrT.DocUnits = 'DegCgrd';
StHlthSigNormnLoCtrlrT.EngDT = dt.float32;
StHlthSigNormnLoCtrlrT.EngVal = -40;
StHlthSigNormnLoCtrlrT.EngMin = -50;
StHlthSigNormnLoCtrlrT.EngMax = 200;
StHlthSigNormnLoCtrlrT.Cardinality = 'Inin';
StHlthSigNormnLoCtrlrT.CustomerVisible = false;
StHlthSigNormnLoCtrlrT.Online = false;
StHlthSigNormnLoCtrlrT.Impact = 'H';
StHlthSigNormnLoCtrlrT.TuningOwner = 'CSE';
StHlthSigNormnLoCtrlrT.GraphLink = {''};
StHlthSigNormnLoCtrlrT.Monotony = 'None';
StHlthSigNormnLoCtrlrT.MaxGrad = 250;
StHlthSigNormnLoCtrlrT.PortName = 'StHlthSigNormnLoCtrlrT';


StHlthSigNormnMaxFricThd = DataDict.Calibration;
StHlthSigNormnMaxFricThd.LongName = 'Maximum Friction Threshold.';
StHlthSigNormnMaxFricThd.Description = [...
  'Maximum Friction Threshold Value used to compare with actual Maximum L' ...
  'earned Friction value.'];
StHlthSigNormnMaxFricThd.DocUnits = 'HwNwtMtr';
StHlthSigNormnMaxFricThd.EngDT = dt.float32;
StHlthSigNormnMaxFricThd.EngVal = 15;
StHlthSigNormnMaxFricThd.EngMin = 0;
StHlthSigNormnMaxFricThd.EngMax = 254;
StHlthSigNormnMaxFricThd.Cardinality = 'Cmn';
StHlthSigNormnMaxFricThd.CustomerVisible = false;
StHlthSigNormnMaxFricThd.Online = false;
StHlthSigNormnMaxFricThd.Impact = 'H';
StHlthSigNormnMaxFricThd.TuningOwner = 'Safety';
StHlthSigNormnMaxFricThd.GraphLink = {''};
StHlthSigNormnMaxFricThd.Monotony = 'None';
StHlthSigNormnMaxFricThd.MaxGrad = Inf;
StHlthSigNormnMaxFricThd.PortName = 'StHlthSigNormnMaxFricThd';


StHlthSigNormnMinRackTrvlLim = DataDict.Calibration;
StHlthSigNormnMinRackTrvlLim.LongName = 'State Of Health Signal Normalization Minimum Rack Travel Limit';
StHlthSigNormnMinRackTrvlLim.Description = [...
  'State Of Health Signal Normalization Minimum Rack Travel Limit used to' ...
  ' compare with HwAgEotCw'];
StHlthSigNormnMinRackTrvlLim.DocUnits = 'HwDeg';
StHlthSigNormnMinRackTrvlLim.EngDT = dt.float32;
StHlthSigNormnMinRackTrvlLim.EngVal = 5;
StHlthSigNormnMinRackTrvlLim.EngMin = 0;
StHlthSigNormnMinRackTrvlLim.EngMax = 500;
StHlthSigNormnMinRackTrvlLim.Cardinality = 'Cmn';
StHlthSigNormnMinRackTrvlLim.CustomerVisible = false;
StHlthSigNormnMinRackTrvlLim.Online = false;
StHlthSigNormnMinRackTrvlLim.Impact = 'H';
StHlthSigNormnMinRackTrvlLim.TuningOwner = 'Safety';
StHlthSigNormnMinRackTrvlLim.GraphLink = {''};
StHlthSigNormnMinRackTrvlLim.Monotony = 'None';
StHlthSigNormnMinRackTrvlLim.MaxGrad = 500;
StHlthSigNormnMinRackTrvlLim.PortName = 'StHlthSigNormnMinRackTrvlLim';


StHlthSigNormnMotPosStHlthDiagThd = DataDict.Calibration;
StHlthSigNormnMotPosStHlthDiagThd.LongName = 'State Of Health Signal Normalization Motor Position State of Health Diagnosis Thresold';
StHlthSigNormnMotPosStHlthDiagThd.Description = [...
  'Thresold Value Used to Determine the Ntc status for Motor Position Sta' ...
  'te of Health'];
StHlthSigNormnMotPosStHlthDiagThd.DocUnits = 'Uls';
StHlthSigNormnMotPosStHlthDiagThd.EngDT = dt.u08;
StHlthSigNormnMotPosStHlthDiagThd.EngVal = 67;
StHlthSigNormnMotPosStHlthDiagThd.EngMin = 0;
StHlthSigNormnMotPosStHlthDiagThd.EngMax = 100;
StHlthSigNormnMotPosStHlthDiagThd.Cardinality = 'Cmn';
StHlthSigNormnMotPosStHlthDiagThd.CustomerVisible = false;
StHlthSigNormnMotPosStHlthDiagThd.Online = false;
StHlthSigNormnMotPosStHlthDiagThd.Impact = 'H';
StHlthSigNormnMotPosStHlthDiagThd.TuningOwner = 'Safety';
StHlthSigNormnMotPosStHlthDiagThd.GraphLink = {''};
StHlthSigNormnMotPosStHlthDiagThd.Monotony = 'None';
StHlthSigNormnMotPosStHlthDiagThd.MaxGrad = 100;
StHlthSigNormnMotPosStHlthDiagThd.PortName = 'StHlthSigNormnMotPosStHlthDiagThd';


StHlthSigNormnMotVelCal = DataDict.Calibration;
StHlthSigNormnMotVelCal.LongName = 'State Of Health Signal Normalization Motor Velocity calculation';
StHlthSigNormnMotVelCal.Description = [...
  'State Of Health Signal Normalization Motor Velocity calculation used t' ...
  'o compare with MotVelCrf'];
StHlthSigNormnMotVelCal.DocUnits = 'HwDegPerSec';
StHlthSigNormnMotVelCal.EngDT = dt.float32;
StHlthSigNormnMotVelCal.EngVal = 20;
StHlthSigNormnMotVelCal.EngMin = 0;
StHlthSigNormnMotVelCal.EngMax = 200;
StHlthSigNormnMotVelCal.Cardinality = 'Cmn';
StHlthSigNormnMotVelCal.CustomerVisible = false;
StHlthSigNormnMotVelCal.Online = false;
StHlthSigNormnMotVelCal.Impact = 'H';
StHlthSigNormnMotVelCal.TuningOwner = 'Safety';
StHlthSigNormnMotVelCal.GraphLink = {''};
StHlthSigNormnMotVelCal.Monotony = 'None';
StHlthSigNormnMotVelCal.MaxGrad = 200;
StHlthSigNormnMotVelCal.PortName = 'StHlthSigNormnMotVelCal';


StHlthSigNormnPhaInfoStHlthDiagThd = DataDict.Calibration;
StHlthSigNormnPhaInfoStHlthDiagThd.LongName = 'State Of Health Signal Normalization Phase Information of State of Health Diagnostic Thresold Signal';
StHlthSigNormnPhaInfoStHlthDiagThd.Description = [...
  'Thresold Value Used to Determine the Ntc status for Phase Information ' ...
  'of State of Health Diagnostic Thresold Signal'];
StHlthSigNormnPhaInfoStHlthDiagThd.DocUnits = 'Uls';
StHlthSigNormnPhaInfoStHlthDiagThd.EngDT = dt.u08;
StHlthSigNormnPhaInfoStHlthDiagThd.EngVal = 67;
StHlthSigNormnPhaInfoStHlthDiagThd.EngMin = 0;
StHlthSigNormnPhaInfoStHlthDiagThd.EngMax = 100;
StHlthSigNormnPhaInfoStHlthDiagThd.Cardinality = 'Cmn';
StHlthSigNormnPhaInfoStHlthDiagThd.CustomerVisible = false;
StHlthSigNormnPhaInfoStHlthDiagThd.Online = false;
StHlthSigNormnPhaInfoStHlthDiagThd.Impact = 'H';
StHlthSigNormnPhaInfoStHlthDiagThd.TuningOwner = 'Safety';
StHlthSigNormnPhaInfoStHlthDiagThd.GraphLink = {''};
StHlthSigNormnPhaInfoStHlthDiagThd.Monotony = 'None';
StHlthSigNormnPhaInfoStHlthDiagThd.MaxGrad = 100;
StHlthSigNormnPhaInfoStHlthDiagThd.PortName = 'StHlthSigNormnPhaInfoStHlthDiagThd';


StHlthSigNormnStHlthCorrlnErr = DataDict.Calibration;
StHlthSigNormnStHlthCorrlnErr.LongName = 'State Of Health Signal NormalizationState of Health Correlation Error';
StHlthSigNormnStHlthCorrlnErr.Description = [...
  'State Of Health Signal NormalizationState of Health Correlation Error'];
StHlthSigNormnStHlthCorrlnErr.DocUnits = 'MotRev';
StHlthSigNormnStHlthCorrlnErr.EngDT = dt.u0p16;
StHlthSigNormnStHlthCorrlnErr.EngVal = 0;
StHlthSigNormnStHlthCorrlnErr.EngMin = 0;
StHlthSigNormnStHlthCorrlnErr.EngMax = 0.9999847412;
StHlthSigNormnStHlthCorrlnErr.Cardinality = 'Cmn';
StHlthSigNormnStHlthCorrlnErr.CustomerVisible = false;
StHlthSigNormnStHlthCorrlnErr.Online = false;
StHlthSigNormnStHlthCorrlnErr.Impact = 'H';
StHlthSigNormnStHlthCorrlnErr.TuningOwner = 'Safety';
StHlthSigNormnStHlthCorrlnErr.GraphLink = {''};
StHlthSigNormnStHlthCorrlnErr.Monotony = 'None';
StHlthSigNormnStHlthCorrlnErr.MaxGrad = 100;
StHlthSigNormnStHlthCorrlnErr.PortName = 'StHlthSigNormnStHlthCorrlnErr';


StHlthSigNormnStHlthCurrMotSum = DataDict.Calibration;
StHlthSigNormnStHlthCurrMotSum.LongName = 'State Of Health Signal Normalization Current Motor of Sum State of Health';
StHlthSigNormnStHlthCurrMotSum.Description = [...
  'State Of Health Signal Normalization Current Motor of Sum State of Hea' ...
  'lth'];
StHlthSigNormnStHlthCurrMotSum.DocUnits = 'Ampr';
StHlthSigNormnStHlthCurrMotSum.EngDT = dt.float32;
StHlthSigNormnStHlthCurrMotSum.EngVal = 0;
StHlthSigNormnStHlthCurrMotSum.EngMin = 0;
StHlthSigNormnStHlthCurrMotSum.EngMax = 100;
StHlthSigNormnStHlthCurrMotSum.Cardinality = 'Cmn';
StHlthSigNormnStHlthCurrMotSum.CustomerVisible = false;
StHlthSigNormnStHlthCurrMotSum.Online = false;
StHlthSigNormnStHlthCurrMotSum.Impact = 'H';
StHlthSigNormnStHlthCurrMotSum.TuningOwner = 'Safety';
StHlthSigNormnStHlthCurrMotSum.GraphLink = {''};
StHlthSigNormnStHlthCurrMotSum.Monotony = 'None';
StHlthSigNormnStHlthCurrMotSum.MaxGrad = 100;
StHlthSigNormnStHlthCurrMotSum.PortName = 'StHlthSigNormnStHlthCurrMotSum';


StHlthSigNormnStHlthPhaInfo = DataDict.Calibration;
StHlthSigNormnStHlthPhaInfo.LongName = 'State Of Health Signal Normalization Phase Information of State of Health';
StHlthSigNormnStHlthPhaInfo.Description = [...
  'Thresold Value Used to Determine the Ntc status for Phase Information ' ...
  'of State of Health'];
StHlthSigNormnStHlthPhaInfo.DocUnits = 'NanoSec';
StHlthSigNormnStHlthPhaInfo.EngDT = dt.float32;
StHlthSigNormnStHlthPhaInfo.EngVal = 0;
StHlthSigNormnStHlthPhaInfo.EngMin = 0;
StHlthSigNormnStHlthPhaInfo.EngMax = 40000000;
StHlthSigNormnStHlthPhaInfo.Cardinality = 'Cmn';
StHlthSigNormnStHlthPhaInfo.CustomerVisible = false;
StHlthSigNormnStHlthPhaInfo.Online = false;
StHlthSigNormnStHlthPhaInfo.Impact = 'H';
StHlthSigNormnStHlthPhaInfo.TuningOwner = 'Safety';
StHlthSigNormnStHlthPhaInfo.GraphLink = {''};
StHlthSigNormnStHlthPhaInfo.Monotony = 'None';
StHlthSigNormnStHlthPhaInfo.MaxGrad = 40000000;
StHlthSigNormnStHlthPhaInfo.PortName = 'StHlthSigNormnStHlthPhaInfo';


StHlthSigNormnValMaxStHlthErr = DataDict.Calibration;
StHlthSigNormnValMaxStHlthErr.LongName = 'State Of Health Signal Normalization Maximum State of Health Error Value';
StHlthSigNormnValMaxStHlthErr.Description = [...
  'State Of Health Signal Normalization Maximum State of Health Error Val' ...
  'ue'];
StHlthSigNormnValMaxStHlthErr.DocUnits = 'VoltSqd';
StHlthSigNormnValMaxStHlthErr.EngDT = dt.float32;
StHlthSigNormnValMaxStHlthErr.EngVal = 3.48;
StHlthSigNormnValMaxStHlthErr.EngMin = 0;
StHlthSigNormnValMaxStHlthErr.EngMax = 25;
StHlthSigNormnValMaxStHlthErr.Cardinality = 'Cmn';
StHlthSigNormnValMaxStHlthErr.CustomerVisible = false;
StHlthSigNormnValMaxStHlthErr.Online = false;
StHlthSigNormnValMaxStHlthErr.Impact = 'H';
StHlthSigNormnValMaxStHlthErr.TuningOwner = 'Safety';
StHlthSigNormnValMaxStHlthErr.GraphLink = {''};
StHlthSigNormnValMaxStHlthErr.Monotony = 'None';
StHlthSigNormnValMaxStHlthErr.MaxGrad = 25;
StHlthSigNormnValMaxStHlthErr.PortName = 'StHlthSigNormnValMaxStHlthErr';


StHlthSigNormnValMinStHlthErr = DataDict.Calibration;
StHlthSigNormnValMinStHlthErr.LongName = 'State Of Health Signal Normalization Minimum State of Health Error Value';
StHlthSigNormnValMinStHlthErr.Description = [...
  'State Of Health Signal Normalization Minimum State of Health Error Val' ...
  'ue'];
StHlthSigNormnValMinStHlthErr.DocUnits = 'VoltSqd';
StHlthSigNormnValMinStHlthErr.EngDT = dt.float32;
StHlthSigNormnValMinStHlthErr.EngVal = 0.62;
StHlthSigNormnValMinStHlthErr.EngMin = 0;
StHlthSigNormnValMinStHlthErr.EngMax = 25;
StHlthSigNormnValMinStHlthErr.Cardinality = 'Cmn';
StHlthSigNormnValMinStHlthErr.CustomerVisible = false;
StHlthSigNormnValMinStHlthErr.Online = false;
StHlthSigNormnValMinStHlthErr.Impact = 'H';
StHlthSigNormnValMinStHlthErr.TuningOwner = 'Safety';
StHlthSigNormnValMinStHlthErr.GraphLink = {''};
StHlthSigNormnValMinStHlthErr.Monotony = 'None';
StHlthSigNormnValMinStHlthErr.MaxGrad = 25;
StHlthSigNormnValMinStHlthErr.PortName = 'StHlthSigNormnValMinStHlthErr';


StHlthSigNormnWhlImbRejctnThd = DataDict.Calibration;
StHlthSigNormnWhlImbRejctnThd.LongName = 'State Of Health Signal Normalization Wheel Imbalance Rejection Threshold';
StHlthSigNormnWhlImbRejctnThd.Description = [...
  'State Of Health Signal Normalization Wheel Imbalance Rejection Thresho' ...
  'ld used to compare with Wheel Imbalance Rejection Command'];
StHlthSigNormnWhlImbRejctnThd.DocUnits = 'MotNwtMtr';
StHlthSigNormnWhlImbRejctnThd.EngDT = dt.float32;
StHlthSigNormnWhlImbRejctnThd.EngVal = 5;
StHlthSigNormnWhlImbRejctnThd.EngMin = 0;
StHlthSigNormnWhlImbRejctnThd.EngMax = 8.8;
StHlthSigNormnWhlImbRejctnThd.Cardinality = 'Cmn';
StHlthSigNormnWhlImbRejctnThd.CustomerVisible = false;
StHlthSigNormnWhlImbRejctnThd.Online = false;
StHlthSigNormnWhlImbRejctnThd.Impact = 'H';
StHlthSigNormnWhlImbRejctnThd.TuningOwner = 'Safety';
StHlthSigNormnWhlImbRejctnThd.GraphLink = {''};
StHlthSigNormnWhlImbRejctnThd.Monotony = 'None';
StHlthSigNormnWhlImbRejctnThd.MaxGrad = Inf;
StHlthSigNormnWhlImbRejctnThd.PortName = 'StHlthSigNormnWhlImbRejctnThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
CurrMeasCorrlnMaxErrCurr = DataDict.ImprtdCal;
CurrMeasCorrlnMaxErrCurr.DocUnits = 'Ampr';
CurrMeasCorrlnMaxErrCurr.EngDT = dt.float32;
CurrMeasCorrlnMaxErrCurr.EngVal = 12;
CurrMeasCorrlnMaxErrCurr.EngMin = 0;
CurrMeasCorrlnMaxErrCurr.EngMax = 50;
CurrMeasCorrlnMaxErrCurr.PortName = 'CurrMeasCorrlnMaxErrCurr';
CurrMeasCorrlnMaxErrCurr.Description = '';


DutyCycThermProtnDutyCycFildThd = DataDict.ImprtdCal;
DutyCycThermProtnDutyCycFildThd.DocUnits = 'Uls';
DutyCycThermProtnDutyCycFildThd.EngDT = dt.u16p0;
DutyCycThermProtnDutyCycFildThd.EngVal = 92;
DutyCycThermProtnDutyCycFildThd.EngMin = 0;
DutyCycThermProtnDutyCycFildThd.EngMax = 100;
DutyCycThermProtnDutyCycFildThd.PortName = 'DutyCycThermProtnDutyCycFildThd';
DutyCycThermProtnDutyCycFildThd.Description = '';


EcuTMeasRngDiagcMax = DataDict.ImprtdCal;
EcuTMeasRngDiagcMax.DocUnits = 'DegCgrd';
EcuTMeasRngDiagcMax.EngDT = dt.float32;
EcuTMeasRngDiagcMax.EngVal = 145;
EcuTMeasRngDiagcMax.EngMin = -50;
EcuTMeasRngDiagcMax.EngMax = 200;
EcuTMeasRngDiagcMax.PortName = 'EcuTMeasRngDiagcMax';
EcuTMeasRngDiagcMax.Description = '';


EcuTMeasRngDiagcMin = DataDict.ImprtdCal;
EcuTMeasRngDiagcMin.DocUnits = 'DegCgrd';
EcuTMeasRngDiagcMin.EngDT = dt.float32;
EcuTMeasRngDiagcMin.EngVal = -45;
EcuTMeasRngDiagcMin.EngMin = -50;
EcuTMeasRngDiagcMin.EngMax = 200;
EcuTMeasRngDiagcMin.PortName = 'EcuTMeasRngDiagcMin';
EcuTMeasRngDiagcMin.Description = '';


EotLrngAuthyStrtLrn = DataDict.ImprtdCal;
EotLrngAuthyStrtLrn.DocUnits = 'Uls';
EotLrngAuthyStrtLrn.EngDT = dt.float32;
EotLrngAuthyStrtLrn.EngVal = 1;
EotLrngAuthyStrtLrn.EngMin = 0;
EotLrngAuthyStrtLrn.EngMax = 1;
EotLrngAuthyStrtLrn.PortName = 'EotLrngAuthyStrtLrn';
EotLrngAuthyStrtLrn.Description = '';


HwTqCorrlnChATraSumSetFltThd = DataDict.ImprtdCal;
HwTqCorrlnChATraSumSetFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChATraSumSetFltThd.EngDT = dt.float32;
HwTqCorrlnChATraSumSetFltThd.EngVal = 2.85;
HwTqCorrlnChATraSumSetFltThd.EngMin = 0;
HwTqCorrlnChATraSumSetFltThd.EngMax = 20;
HwTqCorrlnChATraSumSetFltThd.PortName = 'HwTqCorrlnChATraSumSetFltThd';
HwTqCorrlnChATraSumSetFltThd.Description = '';


HwTqCorrlnChBTraSumSetFltThd = DataDict.ImprtdCal;
HwTqCorrlnChBTraSumSetFltThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnChBTraSumSetFltThd.EngDT = dt.float32;
HwTqCorrlnChBTraSumSetFltThd.EngVal = 2.85;
HwTqCorrlnChBTraSumSetFltThd.EngMin = 0;
HwTqCorrlnChBTraSumSetFltThd.EngMax = 20;
HwTqCorrlnChBTraSumSetFltThd.PortName = 'HwTqCorrlnChBTraSumSetFltThd';
HwTqCorrlnChBTraSumSetFltThd.Description = '';


MotDrvDiagcErrThd = DataDict.ImprtdCal;
MotDrvDiagcErrThd.DocUnits = 'NanoSec';
MotDrvDiagcErrThd.EngDT = dt.u32;
MotDrvDiagcErrThd.EngVal = 180000;
MotDrvDiagcErrThd.EngMin = 0;
MotDrvDiagcErrThd.EngMax = 40000000;
MotDrvDiagcErrThd.PortName = 'MotDrvDiagcErrThd';
MotDrvDiagcErrThd.Description = '';


SysGlbPrmMotPoleCnt = DataDict.ImprtdCal;
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.PortName = 'SysGlbPrmMotPoleCnt';
SysGlbPrmMotPoleCnt.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AbsltMotPosABDifStHlthSts = DataDict.PIM;
AbsltMotPosABDifStHlthSts.LongName = 'Absolute Motor Position Phase AB difference State of Health Status';
AbsltMotPosABDifStHlthSts.Description = [...
  'Status of Absolute Motor Position Phase AB difference State of Health'];
AbsltMotPosABDifStHlthSts.DocUnits = 'Cnt';
AbsltMotPosABDifStHlthSts.EngDT = dt.u08;
AbsltMotPosABDifStHlthSts.EngMin = 0;
AbsltMotPosABDifStHlthSts.EngMax = 100;
AbsltMotPosABDifStHlthSts.InitRowCol = [1  1];


AbsltMotPosACDifStHlthSts = DataDict.PIM;
AbsltMotPosACDifStHlthSts.LongName = 'Absolute Motor Position Phase AC difference State of Health Status';
AbsltMotPosACDifStHlthSts.Description = [...
  'Status of Absolute Motor Position Phase AC difference State of Health'];
AbsltMotPosACDifStHlthSts.DocUnits = 'Cnt';
AbsltMotPosACDifStHlthSts.EngDT = dt.u08;
AbsltMotPosACDifStHlthSts.EngMin = 0;
AbsltMotPosACDifStHlthSts.EngMax = 100;
AbsltMotPosACDifStHlthSts.InitRowCol = [1  1];


AbsltMotPosBCDifStHlthSts = DataDict.PIM;
AbsltMotPosBCDifStHlthSts.LongName = 'Absolute Motor Position Phase BC difference State of Health Status';
AbsltMotPosBCDifStHlthSts.Description = [...
  'Status of Absolute Motor Position Phase BC difference State of Health'];
AbsltMotPosBCDifStHlthSts.DocUnits = 'Cnt';
AbsltMotPosBCDifStHlthSts.EngDT = dt.u08;
AbsltMotPosBCDifStHlthSts.EngMin = 0;
AbsltMotPosBCDifStHlthSts.EngMax = 100;
AbsltMotPosBCDifStHlthSts.InitRowCol = [1  1];


CurrMotSumABCStHlthSts = DataDict.PIM;
CurrMotSumABCStHlthSts.LongName = 'Current Motor Sum ABC State of health Status';
CurrMotSumABCStHlthSts.Description = [...
  'Status of Current Motor Sum ABC State of health'];
CurrMotSumABCStHlthSts.DocUnits = 'Cnt';
CurrMotSumABCStHlthSts.EngDT = dt.u08;
CurrMotSumABCStHlthSts.EngMin = 0;
CurrMotSumABCStHlthSts.EngMax = 100;
CurrMotSumABCStHlthSts.InitRowCol = [1  1];


CurrMotSumDEFStHlthSts = DataDict.PIM;
CurrMotSumDEFStHlthSts.LongName = 'Current Motor Sum DEF State of health Status';
CurrMotSumDEFStHlthSts.Description = [...
  'Status of Current Motor Sum DEF State of health'];
CurrMotSumDEFStHlthSts.DocUnits = 'Cnt';
CurrMotSumDEFStHlthSts.EngDT = dt.u08;
CurrMotSumDEFStHlthSts.EngMin = 0;
CurrMotSumDEFStHlthSts.EngMax = 100;
CurrMotSumDEFStHlthSts.InitRowCol = [1  1];


DigTqIdptSigStHlthSts = DataDict.PIM;
DigTqIdptSigStHlthSts.LongName = 'Digital Torque Independent Signal For State of Health Status';
DigTqIdptSigStHlthSts.Description = [...
  'Status of Digital Torque Independent Signal For State of Health'];
DigTqIdptSigStHlthSts.DocUnits = 'Cnt';
DigTqIdptSigStHlthSts.EngDT = dt.u08;
DigTqIdptSigStHlthSts.EngMin = 0;
DigTqIdptSigStHlthSts.EngMax = 100;
DigTqIdptSigStHlthSts.InitRowCol = [1  1];


DigTqSnsrAStHlthSts = DataDict.PIM;
DigTqSnsrAStHlthSts.LongName = 'Digital Torque Sensor A State of Health Status';
DigTqSnsrAStHlthSts.Description = [...
  'Status of Digital Torque Sensor A State of Health'];
DigTqSnsrAStHlthSts.DocUnits = 'Cnt';
DigTqSnsrAStHlthSts.EngDT = dt.u08;
DigTqSnsrAStHlthSts.EngMin = 0;
DigTqSnsrAStHlthSts.EngMax = 100;
DigTqSnsrAStHlthSts.InitRowCol = [1  1];


DigTqSnsrBStHlthSts = DataDict.PIM;
DigTqSnsrBStHlthSts.LongName = 'Digital Torque Sensor B State of Health Status';
DigTqSnsrBStHlthSts.Description = [...
  'Status of Digital Torque Sensor B State of Health'];
DigTqSnsrBStHlthSts.DocUnits = 'Cnt';
DigTqSnsrBStHlthSts.EngDT = dt.u08;
DigTqSnsrBStHlthSts.EngMin = 0;
DigTqSnsrBStHlthSts.EngMax = 100;
DigTqSnsrBStHlthSts.InitRowCol = [1  1];


EcuTRngIgnCyc = DataDict.PIM;
EcuTRngIgnCyc.LongName = 'ECU Temperature Range Ignition Cycle';
EcuTRngIgnCyc.Description = [...
  'Used to Update the low and high temperature event during the Ignition ' ...
  'Cycle'];
EcuTRngIgnCyc.DocUnits = 'Cnt';
EcuTRngIgnCyc.EngDT = dt.u08;
EcuTRngIgnCyc.EngMin = 0;
EcuTRngIgnCyc.EngMax = 255;
EcuTRngIgnCyc.InitRowCol = [1  1];


EntrEot = DataDict.PIM;
EntrEot.LongName = 'Enter End of Travel';
EntrEot.Description = [...
  'Used as a boolean singal for conditional execution'];
EntrEot.DocUnits = 'Cnt';
EntrEot.EngDT = dt.lgc;
EntrEot.EngMin = 0;
EntrEot.EngMax = 1;
EntrEot.InitRowCol = [1  1];


EotImpctCntr = DataDict.PIM;
EotImpctCntr.LongName = 'End of Travel Impact Counter';
EotImpctCntr.Description = 'Used as a state of health counter';
EotImpctCntr.DocUnits = 'Cnt';
EotImpctCntr.EngDT = dt.u08;
EotImpctCntr.EngMin = 0;
EotImpctCntr.EngMax = 100;
EotImpctCntr.InitRowCol = [1  1];


MotAgCorrlnErrThd = DataDict.PIM;
MotAgCorrlnErrThd.LongName = 'Motor Angle Correlation Error Threshold';
MotAgCorrlnErrThd.Description = [...
  'Angle Difference Threshold Between Two Sensor Signals'];
MotAgCorrlnErrThd.DocUnits = 'MotRev';
MotAgCorrlnErrThd.EngDT = dt.u0p16;
MotAgCorrlnErrThd.EngMin = 0;
MotAgCorrlnErrThd.EngMax = 0.9999847412;
MotAgCorrlnErrThd.InitRowCol = [1  1];


PhaAStHlthSts = DataDict.PIM;
PhaAStHlthSts.LongName = 'Phase A state of Health Status';
PhaAStHlthSts.Description = 'Status of Phase A state of Health';
PhaAStHlthSts.DocUnits = 'Cnt';
PhaAStHlthSts.EngDT = dt.u08;
PhaAStHlthSts.EngMin = 0;
PhaAStHlthSts.EngMax = 100;
PhaAStHlthSts.InitRowCol = [1  1];


PhaBStHlthSts = DataDict.PIM;
PhaBStHlthSts.LongName = 'Phase B state of Health Status';
PhaBStHlthSts.Description = 'Status of Phase B state of Health';
PhaBStHlthSts.DocUnits = 'Cnt';
PhaBStHlthSts.EngDT = dt.u08;
PhaBStHlthSts.EngMin = 0;
PhaBStHlthSts.EngMax = 100;
PhaBStHlthSts.InitRowCol = [1  1];


PhaCStHlthSts = DataDict.PIM;
PhaCStHlthSts.LongName = 'Phase C state of Health Status';
PhaCStHlthSts.Description = 'Status of Phase C state of Health';
PhaCStHlthSts.DocUnits = 'Cnt';
PhaCStHlthSts.EngDT = dt.u08;
PhaCStHlthSts.EngMin = 0;
PhaCStHlthSts.EngMax = 100;
PhaCStHlthSts.InitRowCol = [1  1];


PhaDStHlthSts = DataDict.PIM;
PhaDStHlthSts.LongName = 'Phase D state of Health Status';
PhaDStHlthSts.Description = 'Status of Phase D state of Health';
PhaDStHlthSts.DocUnits = 'Cnt';
PhaDStHlthSts.EngDT = dt.u08;
PhaDStHlthSts.EngMin = 0;
PhaDStHlthSts.EngMax = 100;
PhaDStHlthSts.InitRowCol = [1  1];


PhaEStHlthSts = DataDict.PIM;
PhaEStHlthSts.LongName = 'Phase E state of Health Status';
PhaEStHlthSts.Description = 'Status of Phase E state of Health';
PhaEStHlthSts.DocUnits = 'Cnt';
PhaEStHlthSts.EngDT = dt.u08;
PhaEStHlthSts.EngMin = 0;
PhaEStHlthSts.EngMax = 100;
PhaEStHlthSts.InitRowCol = [1  1];


PhaFStHlthSts = DataDict.PIM;
PhaFStHlthSts.LongName = 'Phase F state of Health Status';
PhaFStHlthSts.Description = 'Status of Phase F state of Health';
PhaFStHlthSts.DocUnits = 'Cnt';
PhaFStHlthSts.EngDT = dt.u08;
PhaFStHlthSts.EngMin = 0;
PhaFStHlthSts.EngMax = 100;
PhaFStHlthSts.InitRowCol = [1  1];


VltgRngIgnCyc = DataDict.PIM;
VltgRngIgnCyc.LongName = 'Voltage Range Ignition Cycle';
VltgRngIgnCyc.Description = [...
  'Used to Update the low voltage,high voltage and undervoltage event dur' ...
  'ing the Ignition Cycle'];
VltgRngIgnCyc.DocUnits = 'Cnt';
VltgRngIgnCyc.EngDT = dt.u08;
VltgRngIgnCyc.EngMin = 0;
VltgRngIgnCyc.EngMax = 255;
VltgRngIgnCyc.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Epsilon';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Nearly zero.  Value pasted from EA3 code: float.h'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.192092896e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32 = DataDict.Constant;
CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32.LongName = 'Current Motor Sum Divide By Zero Protection Value';
CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32.Description = [...
  'Value used in case of divide by Zero scenario occurs'];
CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32.DocUnits = 'Ampr';
CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32.EngDT = dt.float32;
CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32.EngVal = 12;
CURRMOTSUMDIVBYZEROPROTNVAL_AMPR_F32.Define = 'Local';


DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32 = DataDict.Constant;
DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32.LongName = 'Digital Torque Divide By Zero Protection Value';
DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32.Description = [...
  'Value used in case of divide by Zero scenario occurs'];
DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32.EngDT = dt.float32;
DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32.EngVal = 3;
DIGTQDIVBYZEROPROTNVAL_HWNWTMTR_F32.Define = 'Local';


FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32 = DataDict.Constant;
FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32.LongName = 'Friction Estimation Divide By Zero Protection Value';
FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32.Description = [...
  'Value is used in case of divide by Zero scenario occurs for calculatin' ...
  'g a Friction Estimation State of Health Value. This value is based on ' ...
  'difference of the nominal values of "MaxFricThd" & "EolFric (Server Ru' ...
  'nnable data)" i.e. (15 - 3.15)'];
FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32.EngDT = dt.float32;
FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32.EngVal = 11.85;
FRICESTIMNDIVBYZEROPROTNVAL_HWNWTMTR_F32.Define = 'Local';


FRICESTSTHLTHHILI_CNT_F32 = DataDict.Constant;
FRICESTSTHLTHHILI_CNT_F32.LongName = 'Friction Estimation State of Health High Limit';
FRICESTSTHLTHHILI_CNT_F32.Description = [...
  'Used to limit Friction Estimation State of Health Value'];
FRICESTSTHLTHHILI_CNT_F32.DocUnits = 'Cnt';
FRICESTSTHLTHHILI_CNT_F32.EngDT = dt.float32;
FRICESTSTHLTHHILI_CNT_F32.EngVal = 100;
FRICESTSTHLTHHILI_CNT_F32.Define = 'Local';


FRICESTSTHLTHLOLI_CNT_F32 = DataDict.Constant;
FRICESTSTHLTHLOLI_CNT_F32.LongName = 'Friction Estimation State of Health Low Limit';
FRICESTSTHLTHLOLI_CNT_F32.Description = [...
  'Used to limit Friction Estimation State of Health Value'];
FRICESTSTHLTHLOLI_CNT_F32.DocUnits = 'Cnt';
FRICESTSTHLTHLOLI_CNT_F32.EngDT = dt.float32;
FRICESTSTHLTHLOLI_CNT_F32.EngVal = 0;
FRICESTSTHLTHLOLI_CNT_F32.Define = 'Local';


HITSTHLTH0PERC_CNT_U08 = DataDict.Constant;
HITSTHLTH0PERC_CNT_U08.LongName = 'High Temperature State Health 0 percent';
HITSTHLTH0PERC_CNT_U08.Description = [...
  '0 percent Temperature State of Health during calculation of controller' ...
  ' temperature'];
HITSTHLTH0PERC_CNT_U08.DocUnits = 'Cnt';
HITSTHLTH0PERC_CNT_U08.EngDT = dt.u08;
HITSTHLTH0PERC_CNT_U08.EngVal = 1;
HITSTHLTH0PERC_CNT_U08.Define = 'Local';


HITSTHLTH50PERC_CNT_U08 = DataDict.Constant;
HITSTHLTH50PERC_CNT_U08.LongName = 'High Temperature State Health 50 percent';
HITSTHLTH50PERC_CNT_U08.Description = [...
  '50 percent Temperature State of Health during calculation of controlle' ...
  'r temperature'];
HITSTHLTH50PERC_CNT_U08.DocUnits = 'Cnt';
HITSTHLTH50PERC_CNT_U08.EngDT = dt.u08;
HITSTHLTH50PERC_CNT_U08.EngVal = 3;
HITSTHLTH50PERC_CNT_U08.Define = 'Local';


HIVLTGSTHLTH0PERC_CNT_U08 = DataDict.Constant;
HIVLTGSTHLTH0PERC_CNT_U08.LongName = 'High Voltage State Health 0 percent';
HIVLTGSTHLTH0PERC_CNT_U08.Description = [...
  '0 percent Voltage State Of Health during calculation of state assit du' ...
  'e to voltage'];
HIVLTGSTHLTH0PERC_CNT_U08.DocUnits = 'Cnt';
HIVLTGSTHLTH0PERC_CNT_U08.EngDT = dt.u08;
HIVLTGSTHLTH0PERC_CNT_U08.EngVal = 1;
HIVLTGSTHLTH0PERC_CNT_U08.Define = 'Local';


HLTH0PERC_CNT_U08 = DataDict.Constant;
HLTH0PERC_CNT_U08.LongName = 'State Health 0 Percent';
HLTH0PERC_CNT_U08.Description = '0 percentState of Health';
HLTH0PERC_CNT_U08.DocUnits = 'Cnt';
HLTH0PERC_CNT_U08.EngDT = dt.u08;
HLTH0PERC_CNT_U08.EngVal = 0;
HLTH0PERC_CNT_U08.Define = 'Local';


HLTH100PERC_CNT_F32 = DataDict.Constant;
HLTH100PERC_CNT_F32.LongName = 'State Health 100 Percent';
HLTH100PERC_CNT_F32.Description = '100 percent State of Health';
HLTH100PERC_CNT_F32.DocUnits = 'Cnt';
HLTH100PERC_CNT_F32.EngDT = dt.float32;
HLTH100PERC_CNT_F32.EngVal = 100;
HLTH100PERC_CNT_F32.Define = 'Local';


HLTH100PERC_CNT_U08 = DataDict.Constant;
HLTH100PERC_CNT_U08.LongName = 'State Health 100 Percent';
HLTH100PERC_CNT_U08.Description = '100 percent State of Health';
HLTH100PERC_CNT_U08.DocUnits = 'Cnt';
HLTH100PERC_CNT_U08.EngDT = dt.u08;
HLTH100PERC_CNT_U08.EngVal = 100;
HLTH100PERC_CNT_U08.Define = 'Local';


HLTH50PERC_CNT_U08 = DataDict.Constant;
HLTH50PERC_CNT_U08.LongName = 'State Health 50 Percent';
HLTH50PERC_CNT_U08.Description = '50 percent State of Health';
HLTH50PERC_CNT_U08.DocUnits = 'Cnt';
HLTH50PERC_CNT_U08.EngDT = dt.u08;
HLTH50PERC_CNT_U08.EngVal = 50;
HLTH50PERC_CNT_U08.Define = 'Local';


HWTQIDPTSIG_CNT_U08 = DataDict.Constant;
HWTQIDPTSIG_CNT_U08.LongName = 'Handwheel Independent Signal';
HWTQIDPTSIG_CNT_U08.Description = [...
  'Constant Value to Validate the Independent Input Signal'];
HWTQIDPTSIG_CNT_U08.DocUnits = 'Cnt';
HWTQIDPTSIG_CNT_U08.EngDT = dt.u08;
HWTQIDPTSIG_CNT_U08.EngVal = 4;
HWTQIDPTSIG_CNT_U08.Define = 'Local';


LOTSTHLTH0PERC_CNT_U08 = DataDict.Constant;
LOTSTHLTH0PERC_CNT_U08.LongName = 'Low Temperature State Health 0 percent';
LOTSTHLTH0PERC_CNT_U08.Description = [...
  '0 percent Temperature State Of Health during calculation of controller' ...
  ' temperature'];
LOTSTHLTH0PERC_CNT_U08.DocUnits = 'Cnt';
LOTSTHLTH0PERC_CNT_U08.EngDT = dt.u08;
LOTSTHLTH0PERC_CNT_U08.EngVal = 0;
LOTSTHLTH0PERC_CNT_U08.Define = 'Local';


LOTSTHLTH50PERC_CNT_U08 = DataDict.Constant;
LOTSTHLTH50PERC_CNT_U08.LongName = 'Low Temperature State Health 50 percent';
LOTSTHLTH50PERC_CNT_U08.Description = [...
  '50 percent Temperature State Of Health during calculation of controlle' ...
  'r temperature'];
LOTSTHLTH50PERC_CNT_U08.DocUnits = 'Cnt';
LOTSTHLTH50PERC_CNT_U08.EngDT = dt.u08;
LOTSTHLTH50PERC_CNT_U08.EngVal = 2;
LOTSTHLTH50PERC_CNT_U08.Define = 'Local';


LOVLTGSTHLTH0PERC_CNT_U08 = DataDict.Constant;
LOVLTGSTHLTH0PERC_CNT_U08.LongName = 'Low Voltage State Health 0 percent';
LOVLTGSTHLTH0PERC_CNT_U08.Description = [...
  '0 percent Voltage State Of Health during calculation of state assit du' ...
  'e to voltage'];
LOVLTGSTHLTH0PERC_CNT_U08.DocUnits = 'Cnt';
LOVLTGSTHLTH0PERC_CNT_U08.EngDT = dt.u08;
LOVLTGSTHLTH0PERC_CNT_U08.EngVal = 0;
LOVLTGSTHLTH0PERC_CNT_U08.Define = 'Local';


LOVLTGSTHLTH50PERC_CNT_U08 = DataDict.Constant;
LOVLTGSTHLTH50PERC_CNT_U08.LongName = 'Low Voltage State Health 50 percent';
LOVLTGSTHLTH50PERC_CNT_U08.Description = [...
  '50 percent Voltage State Of Health during calculation of state assit d' ...
  'ue to voltage'];
LOVLTGSTHLTH50PERC_CNT_U08.DocUnits = 'Cnt';
LOVLTGSTHLTH50PERC_CNT_U08.EngDT = dt.u08;
LOVLTGSTHLTH50PERC_CNT_U08.EngVal = 2;
LOVLTGSTHLTH50PERC_CNT_U08.Define = 'Local';


MOTAG2MEAS_VALMAXERR_VOLTSQD_F32 = DataDict.Constant;
MOTAG2MEAS_VALMAXERR_VOLTSQD_F32.LongName = 'Value Maximum Error';
MOTAG2MEAS_VALMAXERR_VOLTSQD_F32.Description = [...
  'Analog MSB Protocol Diag Max Threshold'];
MOTAG2MEAS_VALMAXERR_VOLTSQD_F32.DocUnits = 'VoltSqd';
MOTAG2MEAS_VALMAXERR_VOLTSQD_F32.EngDT = dt.float32;
MOTAG2MEAS_VALMAXERR_VOLTSQD_F32.EngVal = 5.76;
MOTAG2MEAS_VALMAXERR_VOLTSQD_F32.Define = 'Global';


MOTAG2MEAS_VALMINERR_VOLTSQD_F32 = DataDict.Constant;
MOTAG2MEAS_VALMINERR_VOLTSQD_F32.LongName = 'Value Minimum Error';
MOTAG2MEAS_VALMINERR_VOLTSQD_F32.Description = [...
  'Analog MSB Protocol Diag Min Threshold'];
MOTAG2MEAS_VALMINERR_VOLTSQD_F32.DocUnits = 'VoltSqd';
MOTAG2MEAS_VALMINERR_VOLTSQD_F32.EngDT = dt.float32;
MOTAG2MEAS_VALMINERR_VOLTSQD_F32.EngVal = 0.0625;
MOTAG2MEAS_VALMINERR_VOLTSQD_F32.Define = 'Global';


MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16 = DataDict.Constant;
MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16.LongName = 'Motor Angle Correlation Error Threshold';
MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16.Description = [...
  'Angle Difference Threshold Between Two Sensor Signals In Electrical Un' ...
  'its'];
MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16.DocUnits = 'MotRevElec';
MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16.EngDT = dt.u0p16;
MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16.EngVal = 0.2222;
MOTAGCORRLN_MOTAGCORRLNERRTHD_MOTREVELEC_U0P16.Define = 'Global';


MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32 = DataDict.Constant;
MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32.LongName = 'Motor Position To Divide By Zero Protection value.';
MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32.Description = [...
  'Default values used for calculations when a divide by zero error occur' ...
  's when determining the Motor Position.'];
MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32.DocUnits = 'VoltSqd';
MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32.EngDT = dt.float32;
MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32.EngVal = 0.5575;
MOTPOS2DIVBYZEROPROTNVAL2_VOLTSQD_F32.Define = 'Local';


MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32 = DataDict.Constant;
MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32.LongName = 'Motor Position To Divide By Zero Protection Value';
MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32.Description = [...
  'Default values used for calculations when a divide by zero error occur' ...
  's when determining the Motor Position.'];
MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32.DocUnits = 'VoltSqd';
MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32.EngDT = dt.float32;
MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32.EngVal = 1.92;
MOTPOS2DIVBYZEROPROTNVAL_VOLTSQD_F32.Define = 'Local';


MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16 = DataDict.Constant;
MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16.LongName = 'Motor Position Error Divide By Zero Protection Value';
MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16.Description = [...
  'Value used in case of divide by Zero scenario occurs'];
MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16.DocUnits = 'MotRev';
MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16.EngDT = dt.u16;
MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16.EngVal = 1;
MOTPOSNERRDIVBYZEROPROTNVAL_MOTREV_U16.Define = 'Local';


MOTPOSNERRZEROTHD_MOTREV_U0P16 = DataDict.Constant;
MOTPOSNERRZEROTHD_MOTREV_U0P16.LongName = 'Motor Position Error Zero Threshold';
MOTPOSNERRZEROTHD_MOTREV_U0P16.Description = [...
  'Nearly unsigned 16bit zero. Value is (2/(2^16-1))'];
MOTPOSNERRZEROTHD_MOTREV_U0P16.DocUnits = 'Uls';
MOTPOSNERRZEROTHD_MOTREV_U0P16.EngDT = dt.u0p16;
MOTPOSNERRZEROTHD_MOTREV_U0P16.EngVal = 3.051804379e-05;
MOTPOSNERRZEROTHD_MOTREV_U0P16.Define = 'Local';


PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32 = DataDict.Constant;
PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32.LongName = 'Phase Voltage Divide By Zero Protection Value';
PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32.Description = [...
  'Value used in case of divide by Zero scenario occurs'];
PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32.DocUnits = 'NanoSec';
PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32.EngDT = dt.float32;
PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32.EngVal = 180000;
PHAVLTGDIVBYZEROPROTNVAL_NANOSEC_F32.Define = 'Local';


STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32 = DataDict.Constant;
STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32.LongName = 'Float Two Fifthy Five Value';
STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32.Description = [...
  'This constant is used to limit the float value to a maximum value i.e.' ...
  ' 255'];
STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32.DocUnits = 'Uls';
STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32.EngDT = dt.float32;
STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32.EngVal = 255;
STHLTHFLOATTWOFIFTYFIVEVAL_ULS_F32.Define = 'Local';


STHLTHFLOATZEROVAL_ULS_F32 = DataDict.Constant;
STHLTHFLOATZEROVAL_ULS_F32.LongName = 'Float Zero Value';
STHLTHFLOATZEROVAL_ULS_F32.Description = [...
  'This constant is used to limit the float value to a minimum value i.e.' ...
  ' 0'];
STHLTHFLOATZEROVAL_ULS_F32.DocUnits = 'Uls';
STHLTHFLOATZEROVAL_ULS_F32.EngDT = dt.float32;
STHLTHFLOATZEROVAL_ULS_F32.EngVal = 0;
STHLTHFLOATZEROVAL_ULS_F32.Define = 'Local';


STHLTHSCAGFAC_CNT_F32 = DataDict.Constant;
STHLTHSCAGFAC_CNT_F32.LongName = 'State of Health Scaling Factor';
STHLTHSCAGFAC_CNT_F32.Description = [...
  'State of Health Scaling Factor with value 100'];
STHLTHSCAGFAC_CNT_F32.DocUnits = 'Cnt';
STHLTHSCAGFAC_CNT_F32.EngDT = dt.float32;
STHLTHSCAGFAC_CNT_F32.EngVal = 100;
STHLTHSCAGFAC_CNT_F32.Define = 'Local';


TPRSNTCYCDATAPOSN_CNT_U08 = DataDict.Constant;
TPRSNTCYCDATAPOSN_CNT_U08.LongName = 'Temperature Present Cycle Data Position';
TPRSNTCYCDATAPOSN_CNT_U08.Description = [...
  'Used to shift the Controller Temperature Range during Ignition and Pre' ...
  'sent Cycle'];
TPRSNTCYCDATAPOSN_CNT_U08.DocUnits = 'Cnt';
TPRSNTCYCDATAPOSN_CNT_U08.EngDT = dt.u08;
TPRSNTCYCDATAPOSN_CNT_U08.EngVal = 2;
TPRSNTCYCDATAPOSN_CNT_U08.Define = 'Local';


TSTHLTH0PERC_CNT_U08 = DataDict.Constant;
TSTHLTH0PERC_CNT_U08.LongName = 'Temperature State Health 0 percent';
TSTHLTH0PERC_CNT_U08.Description = [...
  '0 percent Temperature State Of Health during calculation of controller' ...
  ' temperature'];
TSTHLTH0PERC_CNT_U08.DocUnits = 'Cnt';
TSTHLTH0PERC_CNT_U08.EngDT = dt.u08;
TSTHLTH0PERC_CNT_U08.EngVal = 3;
TSTHLTH0PERC_CNT_U08.Define = 'Local';


VLTGPRSNTCYCDATAPOSN_CNT_U08 = DataDict.Constant;
VLTGPRSNTCYCDATAPOSN_CNT_U08.LongName = 'Voltage Present Cycle Data Position';
VLTGPRSNTCYCDATAPOSN_CNT_U08.Description = [...
  'Used to shift the Voltage Range during Ignition and Present Cycle'];
VLTGPRSNTCYCDATAPOSN_CNT_U08.DocUnits = 'Cnt';
VLTGPRSNTCYCDATAPOSN_CNT_U08.EngDT = dt.u08;
VLTGPRSNTCYCDATAPOSN_CNT_U08.EngVal = 2;
VLTGPRSNTCYCDATAPOSN_CNT_U08.Define = 'Local';


VLTGSTHLTH0PERC_CNT_U08 = DataDict.Constant;
VLTGSTHLTH0PERC_CNT_U08.LongName = 'Voltage State Health 0 percent';
VLTGSTHLTH0PERC_CNT_U08.Description = [...
  '0 percent Voltage State Of Health during calculation of state assit du' ...
  'e to voltage'];
VLTGSTHLTH0PERC_CNT_U08.DocUnits = 'Cnt';
VLTGSTHLTH0PERC_CNT_U08.EngDT = dt.u08;
VLTGSTHLTH0PERC_CNT_U08.EngVal = 3;
VLTGSTHLTH0PERC_CNT_U08.Define = 'Local';


WHLIMBMAXCMPSTHLTHHILI_CNT_U08 = DataDict.Constant;
WHLIMBMAXCMPSTHLTHHILI_CNT_U08.LongName = 'Wheel Imbalance Maximum Compensation State of Health High Limit';
WHLIMBMAXCMPSTHLTHHILI_CNT_U08.Description = [...
  'Used to limit Wheel Imbalance Maximum Compensation State of Health Val' ...
  'ue'];
WHLIMBMAXCMPSTHLTHHILI_CNT_U08.DocUnits = 'Cnt';
WHLIMBMAXCMPSTHLTHHILI_CNT_U08.EngDT = dt.u08;
WHLIMBMAXCMPSTHLTHHILI_CNT_U08.EngVal = 100;
WHLIMBMAXCMPSTHLTHHILI_CNT_U08.Define = 'Local';


WHLIMBMAXCMPSTHLTHLOLI_CNT_U08 = DataDict.Constant;
WHLIMBMAXCMPSTHLTHLOLI_CNT_U08.LongName = 'Wheel Imbalance Maximum Compensation State of Health Low Limit';
WHLIMBMAXCMPSTHLTHLOLI_CNT_U08.Description = [...
  'Used to limit Wheel Imbalance Maximum Compensation State of Health Val' ...
  'ue'];
WHLIMBMAXCMPSTHLTHLOLI_CNT_U08.DocUnits = 'Cnt';
WHLIMBMAXCMPSTHLTHLOLI_CNT_U08.EngDT = dt.u08;
WHLIMBMAXCMPSTHLTHLOLI_CNT_U08.EngVal = 0;
WHLIMBMAXCMPSTHLTHLOLI_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
AbsltMotPosPhaDifStHlth = DataDict.NTC;
AbsltMotPosPhaDifStHlth.NtcNr = NtcNr1.NTCNR_0X1D2;
AbsltMotPosPhaDifStHlth.NtcTyp = 'None';
AbsltMotPosPhaDifStHlth.LongName = 'Absolute Motor Position Phase Difference State of Health';
AbsltMotPosPhaDifStHlth.Description = 'absolute Motor Position Phase Difference State of Health';
AbsltMotPosPhaDifStHlth.NtcStInfo = DataDict.NtcStInfoBitPacked;
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit0Descr = 'Unused';
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit1Descr = 'Unused';
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit2Descr = 'Unused';
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit3Descr = 'Unused';
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit4Descr = 'Unused';
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit5Descr = 'Unused';
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit6Descr = 'Unused';
AbsltMotPosPhaDifStHlth.NtcStInfo.Bit7Descr = 'Unused';


CurrMotSumPhaStHlth = DataDict.NTC;
CurrMotSumPhaStHlth.NtcNr = NtcNr1.NTCNR_0X1D3;
CurrMotSumPhaStHlth.NtcTyp = 'None';
CurrMotSumPhaStHlth.LongName = 'Current Motor Sum Phase State Health';
CurrMotSumPhaStHlth.Description = 'Current Motor Sum Phase State Health';
CurrMotSumPhaStHlth.NtcStInfo = DataDict.NtcStInfoBitPacked;
CurrMotSumPhaStHlth.NtcStInfo.Bit0Descr = 'Unused';
CurrMotSumPhaStHlth.NtcStInfo.Bit1Descr = 'Unused';
CurrMotSumPhaStHlth.NtcStInfo.Bit2Descr = 'Unused';
CurrMotSumPhaStHlth.NtcStInfo.Bit3Descr = 'Unused';
CurrMotSumPhaStHlth.NtcStInfo.Bit4Descr = 'Unused';
CurrMotSumPhaStHlth.NtcStInfo.Bit5Descr = 'Unused';
CurrMotSumPhaStHlth.NtcStInfo.Bit6Descr = 'Unused';
CurrMotSumPhaStHlth.NtcStInfo.Bit7Descr = 'Unused';


DigTqSnsrPhaStHlth = DataDict.NTC;
DigTqSnsrPhaStHlth.NtcNr = NtcNr1.NTCNR_0X1D0;
DigTqSnsrPhaStHlth.NtcTyp = 'None';
DigTqSnsrPhaStHlth.LongName = 'Diagnosis Torque Sensor Phase State of Health';
DigTqSnsrPhaStHlth.Description = 'Diagnosis Torque Sensor Phase State of Health';
DigTqSnsrPhaStHlth.NtcStInfo = DataDict.NtcStInfoBitPacked;
DigTqSnsrPhaStHlth.NtcStInfo.Bit0Descr = 'Unused';
DigTqSnsrPhaStHlth.NtcStInfo.Bit1Descr = 'Unused';
DigTqSnsrPhaStHlth.NtcStInfo.Bit2Descr = 'Unused';
DigTqSnsrPhaStHlth.NtcStInfo.Bit3Descr = 'Unused';
DigTqSnsrPhaStHlth.NtcStInfo.Bit4Descr = 'Unused';
DigTqSnsrPhaStHlth.NtcStInfo.Bit5Descr = 'Unused';
DigTqSnsrPhaStHlth.NtcStInfo.Bit6Descr = 'Unused';
DigTqSnsrPhaStHlth.NtcStInfo.Bit7Descr = 'Unused';


NtcLoVltgActvSts = DataDict.NTC;
NtcLoVltgActvSts.NtcNr = NtcNr1.NTCNR_0X0B1;
NtcLoVltgActvSts.NtcTyp = 'None';
NtcLoVltgActvSts.LongName = 'NTC Low Voltage Active Status';
NtcLoVltgActvSts.Description = 'Update Low Voltage Active Status to get AssiStHlth';
NtcLoVltgActvSts.NtcStInfo = DataDict.NtcStInfoBitPacked;
NtcLoVltgActvSts.NtcStInfo.Bit0Descr = 'Unused';
NtcLoVltgActvSts.NtcStInfo.Bit1Descr = 'Unused';
NtcLoVltgActvSts.NtcStInfo.Bit2Descr = 'Unused';
NtcLoVltgActvSts.NtcStInfo.Bit3Descr = 'Unused';
NtcLoVltgActvSts.NtcStInfo.Bit4Descr = 'Unused';
NtcLoVltgActvSts.NtcStInfo.Bit5Descr = 'Unused';
NtcLoVltgActvSts.NtcStInfo.Bit6Descr = 'Unused';
NtcLoVltgActvSts.NtcStInfo.Bit7Descr = 'Unused';


NtcMotPosStHlth = DataDict.NTC;
NtcMotPosStHlth.NtcNr = NtcNr1.NTCNR_0X1D1;
NtcMotPosStHlth.NtcTyp = 'None';
NtcMotPosStHlth.LongName = 'Motor Position State of Health';
NtcMotPosStHlth.Description = 'Motor Position State of Health';
NtcMotPosStHlth.NtcStInfo = DataDict.NtcStInfoBitPacked;
NtcMotPosStHlth.NtcStInfo.Bit0Descr = 'Unused';
NtcMotPosStHlth.NtcStInfo.Bit1Descr = 'Unused';
NtcMotPosStHlth.NtcStInfo.Bit2Descr = 'Unused';
NtcMotPosStHlth.NtcStInfo.Bit3Descr = 'Unused';
NtcMotPosStHlth.NtcStInfo.Bit4Descr = 'Unused';
NtcMotPosStHlth.NtcStInfo.Bit5Descr = 'Unused';
NtcMotPosStHlth.NtcStInfo.Bit6Descr = 'Unused';
NtcMotPosStHlth.NtcStInfo.Bit7Descr = 'Unused';


NtcOverVltgActvSts = DataDict.NTC;
NtcOverVltgActvSts.NtcNr = NtcNr1.NTCNR_0X0B5;
NtcOverVltgActvSts.NtcTyp = 'None';
NtcOverVltgActvSts.LongName = 'NTC Over Voltage Active Status';
NtcOverVltgActvSts.Description = 'Update Over Voltage Active Status to get AssiStHlth';
NtcOverVltgActvSts.NtcStInfo = DataDict.NtcStInfoBitPacked;
NtcOverVltgActvSts.NtcStInfo.Bit0Descr = 'Unused';
NtcOverVltgActvSts.NtcStInfo.Bit1Descr = 'Unused';
NtcOverVltgActvSts.NtcStInfo.Bit2Descr = 'Unused';
NtcOverVltgActvSts.NtcStInfo.Bit3Descr = 'Unused';
NtcOverVltgActvSts.NtcStInfo.Bit4Descr = 'Unused';
NtcOverVltgActvSts.NtcStInfo.Bit5Descr = 'Unused';
NtcOverVltgActvSts.NtcStInfo.Bit6Descr = 'Unused';
NtcOverVltgActvSts.NtcStInfo.Bit7Descr = 'Unused';


NtcUnderVltgActvSts = DataDict.NTC;
NtcUnderVltgActvSts.NtcNr = NtcNr1.NTCNR_0X0B0;
NtcUnderVltgActvSts.NtcTyp = 'None';
NtcUnderVltgActvSts.LongName = 'NTC Under Voltage Active Status';
NtcUnderVltgActvSts.Description = 'Update Under Voltage Active Status to get AssiStHlth';
NtcUnderVltgActvSts.NtcStInfo = DataDict.NtcStInfoBitPacked;
NtcUnderVltgActvSts.NtcStInfo.Bit0Descr = 'Unused';
NtcUnderVltgActvSts.NtcStInfo.Bit1Descr = 'Unused';
NtcUnderVltgActvSts.NtcStInfo.Bit2Descr = 'Unused';
NtcUnderVltgActvSts.NtcStInfo.Bit3Descr = 'Unused';
NtcUnderVltgActvSts.NtcStInfo.Bit4Descr = 'Unused';
NtcUnderVltgActvSts.NtcStInfo.Bit5Descr = 'Unused';
NtcUnderVltgActvSts.NtcStInfo.Bit6Descr = 'Unused';
NtcUnderVltgActvSts.NtcStInfo.Bit7Descr = 'Unused';


PhaStHlth = DataDict.NTC;
PhaStHlth.NtcNr = NtcNr1.NTCNR_0X1D4;
PhaStHlth.NtcTyp = 'None';
PhaStHlth.LongName = 'Phase State Health';
PhaStHlth.Description = 'Phase State Health';
PhaStHlth.NtcStInfo = DataDict.NtcStInfoBitPacked;
PhaStHlth.NtcStInfo.Bit0Descr = 'Unused';
PhaStHlth.NtcStInfo.Bit1Descr = 'Unused';
PhaStHlth.NtcStInfo.Bit2Descr = 'Unused';
PhaStHlth.NtcStInfo.Bit3Descr = 'Unused';
PhaStHlth.NtcStInfo.Bit4Descr = 'Unused';
PhaStHlth.NtcStInfo.Bit5Descr = 'Unused';
PhaStHlth.NtcStInfo.Bit6Descr = 'Unused';
PhaStHlth.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
