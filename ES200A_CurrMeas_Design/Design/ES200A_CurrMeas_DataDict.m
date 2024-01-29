%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jul-2016 09:58:15       %
%                                  Created with tool release: 2.43.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

ES200A = DataDict.FDD;
ES200A.Version = '4.6.X';
ES200A.LongName = 'Current Measurement';
ES200A.ShoName  = 'CurrMeas';
ES200A.DesignASIL = 'D';
ES200A.Description = [...
  'The Current Measurement function is responsible for measuring the moto' ...
  'r phase currents used as feedback by the Motor Control FDD. Three moto' ...
  'r phase currents are measured using three low-side shunt resistors and' ...
  ' three integrated differential amplifier circuitry for each motor. The' ...
  'n measured currents are transformed into direct (D) and quadrature (Q)' ...
  ' axes currents using the combined Clarke/Park transform.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CurrMeasInit1 = DataDict.Runnable;
CurrMeasInit1.Context = 'Rte';
CurrMeasInit1.TimeStep = 0;
CurrMeasInit1.Description = 'None';

CurrMeasPer1 = DataDict.Runnable;
CurrMeasPer1.Context = 'Rte';
CurrMeasPer1.TimeStep = 0.002;
CurrMeasPer1.Description = 'None';

CurrMeasPer2 = DataDict.Runnable;
CurrMeasPer2.Context = 'NonRte';
CurrMeasPer2.TimeStep = 'MotorControlx2';
CurrMeasPer2.Description = 'None';

CurrMeasPer3 = DataDict.Runnable;
CurrMeasPer3.Context = 'Rte';
CurrMeasPer3.TimeStep = 0.002;
CurrMeasPer3.Description = 'None';

CurrMeasEolGainReq = DataDict.SrvRunnable;
CurrMeasEolGainReq.Context = 'Rte';
CurrMeasEolGainReq.Description = 'None';
CurrMeasEolGainReq.Return = DataDict.CSReturn;
CurrMeasEolGainReq.Return.Type = 'None';
CurrMeasEolGainReq.Return.Min = [];
CurrMeasEolGainReq.Return.Max = [];
CurrMeasEolGainReq.Return.TestTolerance = [];

CurrMeasEolGainStsReq = DataDict.SrvRunnable;
CurrMeasEolGainStsReq.Context = 'Rte';
CurrMeasEolGainStsReq.Description = 'None';
CurrMeasEolGainStsReq.Return = DataDict.CSReturn;
CurrMeasEolGainStsReq.Return.Type = 'None';
CurrMeasEolGainStsReq.Return.Min = [];
CurrMeasEolGainStsReq.Return.Max = [];
CurrMeasEolGainStsReq.Return.TestTolerance = [];
CurrMeasEolGainStsReq.Arguments(1) = DataDict.CSArguments;
CurrMeasEolGainStsReq.Arguments(1).Name = 'CurrMeasEolGainSt';
CurrMeasEolGainStsReq.Arguments(1).EngDT = dt.u08;
CurrMeasEolGainStsReq.Arguments(1).EngMin = 0;
CurrMeasEolGainStsReq.Arguments(1).EngMax = 64;
CurrMeasEolGainStsReq.Arguments(1).TestTolerance = 0;
CurrMeasEolGainStsReq.Arguments(1).Units = 'Cnt';
CurrMeasEolGainStsReq.Arguments(1).Direction = 'Out';
CurrMeasEolGainStsReq.Arguments(1).InitRowCol = [1  1];
CurrMeasEolGainStsReq.Arguments(1).Description = 'None';

CurrMeasEolOffsReq = DataDict.SrvRunnable;
CurrMeasEolOffsReq.Context = 'Rte';
CurrMeasEolOffsReq.Description = 'None';
CurrMeasEolOffsReq.Return = DataDict.CSReturn;
CurrMeasEolOffsReq.Return.Type = 'None';
CurrMeasEolOffsReq.Return.Min = [];
CurrMeasEolOffsReq.Return.Max = [];
CurrMeasEolOffsReq.Return.TestTolerance = [];

CurrMeasEolOffsStsReq = DataDict.SrvRunnable;
CurrMeasEolOffsStsReq.Context = 'Rte';
CurrMeasEolOffsStsReq.Description = 'None';
CurrMeasEolOffsStsReq.Return = DataDict.CSReturn;
CurrMeasEolOffsStsReq.Return.Type = 'None';
CurrMeasEolOffsStsReq.Return.Min = [];
CurrMeasEolOffsStsReq.Return.Max = [];
CurrMeasEolOffsStsReq.Return.TestTolerance = [];
CurrMeasEolOffsStsReq.Arguments(1) = DataDict.CSArguments;
CurrMeasEolOffsStsReq.Arguments(1).Name = 'CurrMeasEolOffsSt';
CurrMeasEolOffsStsReq.Arguments(1).EngDT = dt.u08;
CurrMeasEolOffsStsReq.Arguments(1).EngMin = 0;
CurrMeasEolOffsStsReq.Arguments(1).EngMax = 64;
CurrMeasEolOffsStsReq.Arguments(1).TestTolerance = 0;
CurrMeasEolOffsStsReq.Arguments(1).Units = 'Cnt';
CurrMeasEolOffsStsReq.Arguments(1).Direction = 'Out';
CurrMeasEolOffsStsReq.Arguments(1).InitRowCol = [1  1];
CurrMeasEolOffsStsReq.Arguments(1).Description = 'None';

CurrMeasGainReadReq = DataDict.SrvRunnable;
CurrMeasGainReadReq.Context = 'Rte';
CurrMeasGainReadReq.Description = 'None';
CurrMeasGainReadReq.Return = DataDict.CSReturn;
CurrMeasGainReadReq.Return.Type = 'None';
CurrMeasGainReadReq.Return.Min = [];
CurrMeasGainReadReq.Return.Max = [];
CurrMeasGainReadReq.Return.TestTolerance = [];
CurrMeasGainReadReq.Arguments(1) = DataDict.CSArguments;
CurrMeasGainReadReq.Arguments(1).Name = 'CurrMeasMotCurrGainA';
CurrMeasGainReadReq.Arguments(1).EngDT = dt.float32;
CurrMeasGainReadReq.Arguments(1).EngMin = 0;
CurrMeasGainReadReq.Arguments(1).EngMax = 120;
CurrMeasGainReadReq.Arguments(1).TestTolerance = 1;
CurrMeasGainReadReq.Arguments(1).Units = 'AmprPerVolt';
CurrMeasGainReadReq.Arguments(1).Direction = 'Out';
CurrMeasGainReadReq.Arguments(1).InitRowCol = [1  1];
CurrMeasGainReadReq.Arguments(1).Description = 'None';
CurrMeasGainReadReq.Arguments(2) = DataDict.CSArguments;
CurrMeasGainReadReq.Arguments(2).Name = 'CurrMeasMotCurrGainB';
CurrMeasGainReadReq.Arguments(2).EngDT = dt.float32;
CurrMeasGainReadReq.Arguments(2).EngMin = 0;
CurrMeasGainReadReq.Arguments(2).EngMax = 120;
CurrMeasGainReadReq.Arguments(2).TestTolerance = 1;
CurrMeasGainReadReq.Arguments(2).Units = 'AmprPerVolt';
CurrMeasGainReadReq.Arguments(2).Direction = 'Out';
CurrMeasGainReadReq.Arguments(2).InitRowCol = [1  1];
CurrMeasGainReadReq.Arguments(2).Description = 'None';
CurrMeasGainReadReq.Arguments(3) = DataDict.CSArguments;
CurrMeasGainReadReq.Arguments(3).Name = 'CurrMeasMotCurrGainC';
CurrMeasGainReadReq.Arguments(3).EngDT = dt.float32;
CurrMeasGainReadReq.Arguments(3).EngMin = 0;
CurrMeasGainReadReq.Arguments(3).EngMax = 120;
CurrMeasGainReadReq.Arguments(3).TestTolerance = 1;
CurrMeasGainReadReq.Arguments(3).Units = 'AmprPerVolt';
CurrMeasGainReadReq.Arguments(3).Direction = 'Out';
CurrMeasGainReadReq.Arguments(3).InitRowCol = [1  1];
CurrMeasGainReadReq.Arguments(3).Description = 'None';
CurrMeasGainReadReq.Arguments(4) = DataDict.CSArguments;
CurrMeasGainReadReq.Arguments(4).Name = 'CurrMeasMotCurrGainD';
CurrMeasGainReadReq.Arguments(4).EngDT = dt.float32;
CurrMeasGainReadReq.Arguments(4).EngMin = 0;
CurrMeasGainReadReq.Arguments(4).EngMax = 120;
CurrMeasGainReadReq.Arguments(4).TestTolerance = 1;
CurrMeasGainReadReq.Arguments(4).Units = 'AmprPerVolt';
CurrMeasGainReadReq.Arguments(4).Direction = 'Out';
CurrMeasGainReadReq.Arguments(4).InitRowCol = [1  1];
CurrMeasGainReadReq.Arguments(4).Description = 'None';
CurrMeasGainReadReq.Arguments(5) = DataDict.CSArguments;
CurrMeasGainReadReq.Arguments(5).Name = 'CurrMeasMotCurrGainE';
CurrMeasGainReadReq.Arguments(5).EngDT = dt.float32;
CurrMeasGainReadReq.Arguments(5).EngMin = 0;
CurrMeasGainReadReq.Arguments(5).EngMax = 120;
CurrMeasGainReadReq.Arguments(5).TestTolerance = 1;
CurrMeasGainReadReq.Arguments(5).Units = 'AmprPerVolt';
CurrMeasGainReadReq.Arguments(5).Direction = 'Out';
CurrMeasGainReadReq.Arguments(5).InitRowCol = [1  1];
CurrMeasGainReadReq.Arguments(5).Description = 'None';
CurrMeasGainReadReq.Arguments(6) = DataDict.CSArguments;
CurrMeasGainReadReq.Arguments(6).Name = 'CurrMeasMotCurrGainF';
CurrMeasGainReadReq.Arguments(6).EngDT = dt.float32;
CurrMeasGainReadReq.Arguments(6).EngMin = 0;
CurrMeasGainReadReq.Arguments(6).EngMax = 120;
CurrMeasGainReadReq.Arguments(6).TestTolerance = 1;
CurrMeasGainReadReq.Arguments(6).Units = 'AmprPerVolt';
CurrMeasGainReadReq.Arguments(6).Direction = 'Out';
CurrMeasGainReadReq.Arguments(6).InitRowCol = [1  1];
CurrMeasGainReadReq.Arguments(6).Description = 'None';

CurrMeasGainWrReq = DataDict.SrvRunnable;
CurrMeasGainWrReq.Context = 'Rte';
CurrMeasGainWrReq.Description = 'None';
CurrMeasGainWrReq.Return = DataDict.CSReturn;
CurrMeasGainWrReq.Return.Type = 'None';
CurrMeasGainWrReq.Return.Min = [];
CurrMeasGainWrReq.Return.Max = [];
CurrMeasGainWrReq.Return.TestTolerance = [];
CurrMeasGainWrReq.Arguments(1) = DataDict.CSArguments;
CurrMeasGainWrReq.Arguments(1).Name = 'CurrMeasMotCurrGainA';
CurrMeasGainWrReq.Arguments(1).EngDT = dt.float32;
CurrMeasGainWrReq.Arguments(1).EngMin = 0;
CurrMeasGainWrReq.Arguments(1).EngMax = 120;
CurrMeasGainWrReq.Arguments(1).Units = 'AmprPerVolt';
CurrMeasGainWrReq.Arguments(1).Direction = 'In';
CurrMeasGainWrReq.Arguments(1).InitRowCol = [1  1];
CurrMeasGainWrReq.Arguments(1).Description = 'None';
CurrMeasGainWrReq.Arguments(2) = DataDict.CSArguments;
CurrMeasGainWrReq.Arguments(2).Name = 'CurrMeasMotCurrGainB';
CurrMeasGainWrReq.Arguments(2).EngDT = dt.float32;
CurrMeasGainWrReq.Arguments(2).EngMin = 0;
CurrMeasGainWrReq.Arguments(2).EngMax = 120;
CurrMeasGainWrReq.Arguments(2).Units = 'AmprPerVolt';
CurrMeasGainWrReq.Arguments(2).Direction = 'In';
CurrMeasGainWrReq.Arguments(2).InitRowCol = [1  1];
CurrMeasGainWrReq.Arguments(2).Description = 'None';
CurrMeasGainWrReq.Arguments(3) = DataDict.CSArguments;
CurrMeasGainWrReq.Arguments(3).Name = 'CurrMeasMotCurrGainC';
CurrMeasGainWrReq.Arguments(3).EngDT = dt.float32;
CurrMeasGainWrReq.Arguments(3).EngMin = 0;
CurrMeasGainWrReq.Arguments(3).EngMax = 120;
CurrMeasGainWrReq.Arguments(3).Units = 'AmprPerVolt';
CurrMeasGainWrReq.Arguments(3).Direction = 'In';
CurrMeasGainWrReq.Arguments(3).InitRowCol = [1  1];
CurrMeasGainWrReq.Arguments(3).Description = 'None';
CurrMeasGainWrReq.Arguments(4) = DataDict.CSArguments;
CurrMeasGainWrReq.Arguments(4).Name = 'CurrMeasMotCurrGainD';
CurrMeasGainWrReq.Arguments(4).EngDT = dt.float32;
CurrMeasGainWrReq.Arguments(4).EngMin = 0;
CurrMeasGainWrReq.Arguments(4).EngMax = 120;
CurrMeasGainWrReq.Arguments(4).Units = 'AmprPerVolt';
CurrMeasGainWrReq.Arguments(4).Direction = 'In';
CurrMeasGainWrReq.Arguments(4).InitRowCol = [1  1];
CurrMeasGainWrReq.Arguments(4).Description = 'None';
CurrMeasGainWrReq.Arguments(5) = DataDict.CSArguments;
CurrMeasGainWrReq.Arguments(5).Name = 'CurrMeasMotCurrGainE';
CurrMeasGainWrReq.Arguments(5).EngDT = dt.float32;
CurrMeasGainWrReq.Arguments(5).EngMin = 0;
CurrMeasGainWrReq.Arguments(5).EngMax = 120;
CurrMeasGainWrReq.Arguments(5).Units = 'AmprPerVolt';
CurrMeasGainWrReq.Arguments(5).Direction = 'In';
CurrMeasGainWrReq.Arguments(5).InitRowCol = [1  1];
CurrMeasGainWrReq.Arguments(5).Description = 'None';
CurrMeasGainWrReq.Arguments(6) = DataDict.CSArguments;
CurrMeasGainWrReq.Arguments(6).Name = 'CurrMeasMotCurrGainF';
CurrMeasGainWrReq.Arguments(6).EngDT = dt.float32;
CurrMeasGainWrReq.Arguments(6).EngMin = 0;
CurrMeasGainWrReq.Arguments(6).EngMax = 120;
CurrMeasGainWrReq.Arguments(6).Units = 'AmprPerVolt';
CurrMeasGainWrReq.Arguments(6).Direction = 'In';
CurrMeasGainWrReq.Arguments(6).InitRowCol = [1  1];
CurrMeasGainWrReq.Arguments(6).Description = 'None';
CurrMeasGainWrReq.Arguments(7) = DataDict.CSArguments;
CurrMeasGainWrReq.Arguments(7).Name = 'CurrMeasGainWrReqSts';
CurrMeasGainWrReq.Arguments(7).EngDT = dt.u08;
CurrMeasGainWrReq.Arguments(7).EngMin = 0;
CurrMeasGainWrReq.Arguments(7).EngMax = 1;
CurrMeasGainWrReq.Arguments(7).TestTolerance = 0;
CurrMeasGainWrReq.Arguments(7).Units = 'Cnt';
CurrMeasGainWrReq.Arguments(7).Direction = 'Out';
CurrMeasGainWrReq.Arguments(7).InitRowCol = [1  1];
CurrMeasGainWrReq.Arguments(7).Description = 'None';

CurrMeasOffsReadReq = DataDict.SrvRunnable;
CurrMeasOffsReadReq.Context = 'Rte';
CurrMeasOffsReadReq.Description = 'None';
CurrMeasOffsReadReq.Return = DataDict.CSReturn;
CurrMeasOffsReadReq.Return.Type = 'None';
CurrMeasOffsReadReq.Return.Min = [];
CurrMeasOffsReadReq.Return.Max = [];
CurrMeasOffsReadReq.Return.TestTolerance = [];
CurrMeasOffsReadReq.Arguments(1) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(1).Name = 'CurrMeasEolOffsHiBrdgVltg';
CurrMeasOffsReadReq.Arguments(1).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(1).EngMin = 262500;
CurrMeasOffsReadReq.Arguments(1).EngMax = 1325008;
CurrMeasOffsReadReq.Arguments(1).TestTolerance = 1000;
CurrMeasOffsReadReq.Arguments(1).Units = 'VoltNanoSec';
CurrMeasOffsReadReq.Arguments(1).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(1).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(1).Description = 'None';
CurrMeasOffsReadReq.Arguments(2) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(2).Name = 'CurrMeasMotCurrOffsDifA';
CurrMeasOffsReadReq.Arguments(2).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(2).EngMin = -1;
CurrMeasOffsReadReq.Arguments(2).EngMax = 1;
CurrMeasOffsReadReq.Arguments(2).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(2).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(2).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(2).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(2).Description = 'None';
CurrMeasOffsReadReq.Arguments(3) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(3).Name = 'CurrMeasMotCurrOffsDifB';
CurrMeasOffsReadReq.Arguments(3).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(3).EngMin = -1;
CurrMeasOffsReadReq.Arguments(3).EngMax = 1;
CurrMeasOffsReadReq.Arguments(3).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(3).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(3).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(3).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(3).Description = 'None';
CurrMeasOffsReadReq.Arguments(4) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(4).Name = 'CurrMeasMotCurrOffsDifC';
CurrMeasOffsReadReq.Arguments(4).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(4).EngMin = -1;
CurrMeasOffsReadReq.Arguments(4).EngMax = 1;
CurrMeasOffsReadReq.Arguments(4).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(4).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(4).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(4).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(4).Description = 'None';
CurrMeasOffsReadReq.Arguments(5) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(5).Name = 'CurrMeasMotCurrOffsDifD';
CurrMeasOffsReadReq.Arguments(5).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(5).EngMin = -1;
CurrMeasOffsReadReq.Arguments(5).EngMax = 1;
CurrMeasOffsReadReq.Arguments(5).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(5).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(5).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(5).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(5).Description = 'None';
CurrMeasOffsReadReq.Arguments(6) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(6).Name = 'CurrMeasMotCurrOffsDifE';
CurrMeasOffsReadReq.Arguments(6).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(6).EngMin = -1;
CurrMeasOffsReadReq.Arguments(6).EngMax = 1;
CurrMeasOffsReadReq.Arguments(6).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(6).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(6).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(6).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(6).Description = 'None';
CurrMeasOffsReadReq.Arguments(7) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(7).Name = 'CurrMeasMotCurrOffsDifF';
CurrMeasOffsReadReq.Arguments(7).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(7).EngMin = -1;
CurrMeasOffsReadReq.Arguments(7).EngMax = 1;
CurrMeasOffsReadReq.Arguments(7).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(7).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(7).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(7).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(7).Description = 'None';
CurrMeasOffsReadReq.Arguments(8) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(8).Name = 'CurrMeasMotCurrOffsLoAvrgA';
CurrMeasOffsReadReq.Arguments(8).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(8).EngMin = 0;
CurrMeasOffsReadReq.Arguments(8).EngMax = 2.8;
CurrMeasOffsReadReq.Arguments(8).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(8).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(8).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(8).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(8).Description = 'None';
CurrMeasOffsReadReq.Arguments(9) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(9).Name = 'CurrMeasMotCurrOffsLoAvrgB';
CurrMeasOffsReadReq.Arguments(9).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(9).EngMin = 0;
CurrMeasOffsReadReq.Arguments(9).EngMax = 2.8;
CurrMeasOffsReadReq.Arguments(9).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(9).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(9).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(9).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(9).Description = 'None';
CurrMeasOffsReadReq.Arguments(10) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(10).Name = 'CurrMeasMotCurrOffsLoAvrgC';
CurrMeasOffsReadReq.Arguments(10).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(10).EngMin = 0;
CurrMeasOffsReadReq.Arguments(10).EngMax = 2.8;
CurrMeasOffsReadReq.Arguments(10).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(10).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(10).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(10).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(10).Description = 'None';
CurrMeasOffsReadReq.Arguments(11) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(11).Name = 'CurrMeasMotCurrOffsLoAvrgD';
CurrMeasOffsReadReq.Arguments(11).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(11).EngMin = 0;
CurrMeasOffsReadReq.Arguments(11).EngMax = 2.8;
CurrMeasOffsReadReq.Arguments(11).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(11).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(11).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(11).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(11).Description = 'None';
CurrMeasOffsReadReq.Arguments(12) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(12).Name = 'CurrMeasMotCurrOffsLoAvrgE';
CurrMeasOffsReadReq.Arguments(12).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(12).EngMin = 0;
CurrMeasOffsReadReq.Arguments(12).EngMax = 2.8;
CurrMeasOffsReadReq.Arguments(12).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(12).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(12).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(12).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(12).Description = 'None';
CurrMeasOffsReadReq.Arguments(13) = DataDict.CSArguments;
CurrMeasOffsReadReq.Arguments(13).Name = 'CurrMeasMotCurrOffsLoAvrgF';
CurrMeasOffsReadReq.Arguments(13).EngDT = dt.float32;
CurrMeasOffsReadReq.Arguments(13).EngMin = 0;
CurrMeasOffsReadReq.Arguments(13).EngMax = 2.8;
CurrMeasOffsReadReq.Arguments(13).TestTolerance = 0.1;
CurrMeasOffsReadReq.Arguments(13).Units = 'Volt';
CurrMeasOffsReadReq.Arguments(13).Direction = 'Out';
CurrMeasOffsReadReq.Arguments(13).InitRowCol = [1  1];
CurrMeasOffsReadReq.Arguments(13).Description = 'None';

CurrMeasOffsWrReq = DataDict.SrvRunnable;
CurrMeasOffsWrReq.Context = 'Rte';
CurrMeasOffsWrReq.Description = 'None';
CurrMeasOffsWrReq.Return = DataDict.CSReturn;
CurrMeasOffsWrReq.Return.Type = 'None';
CurrMeasOffsWrReq.Return.Min = [];
CurrMeasOffsWrReq.Return.Max = [];
CurrMeasOffsWrReq.Return.TestTolerance = [];
CurrMeasOffsWrReq.Arguments(1) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(1).Name = 'CurrMeasEolOffsHiBrdgVltg';
CurrMeasOffsWrReq.Arguments(1).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(1).EngMin = 262500;
CurrMeasOffsWrReq.Arguments(1).EngMax = 1325008;
CurrMeasOffsWrReq.Arguments(1).Units = 'VoltNanoSec';
CurrMeasOffsWrReq.Arguments(1).Direction = 'In';
CurrMeasOffsWrReq.Arguments(1).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(1).Description = 'None';
CurrMeasOffsWrReq.Arguments(2) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(2).Name = 'CurrMeasMotCurrOffsDifA';
CurrMeasOffsWrReq.Arguments(2).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(2).EngMin = -1;
CurrMeasOffsWrReq.Arguments(2).EngMax = 1;
CurrMeasOffsWrReq.Arguments(2).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(2).Direction = 'In';
CurrMeasOffsWrReq.Arguments(2).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(2).Description = 'None';
CurrMeasOffsWrReq.Arguments(3) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(3).Name = 'CurrMeasMotCurrOffsDifB';
CurrMeasOffsWrReq.Arguments(3).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(3).EngMin = -1;
CurrMeasOffsWrReq.Arguments(3).EngMax = 1;
CurrMeasOffsWrReq.Arguments(3).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(3).Direction = 'In';
CurrMeasOffsWrReq.Arguments(3).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(3).Description = 'None';
CurrMeasOffsWrReq.Arguments(4) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(4).Name = 'CurrMeasMotCurrOffsDifC';
CurrMeasOffsWrReq.Arguments(4).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(4).EngMin = -1;
CurrMeasOffsWrReq.Arguments(4).EngMax = 1;
CurrMeasOffsWrReq.Arguments(4).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(4).Direction = 'In';
CurrMeasOffsWrReq.Arguments(4).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(4).Description = 'None';
CurrMeasOffsWrReq.Arguments(5) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(5).Name = 'CurrMeasMotCurrOffsDifD';
CurrMeasOffsWrReq.Arguments(5).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(5).EngMin = -1;
CurrMeasOffsWrReq.Arguments(5).EngMax = 1;
CurrMeasOffsWrReq.Arguments(5).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(5).Direction = 'In';
CurrMeasOffsWrReq.Arguments(5).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(5).Description = 'None';
CurrMeasOffsWrReq.Arguments(6) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(6).Name = 'CurrMeasMotCurrOffsDifE';
CurrMeasOffsWrReq.Arguments(6).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(6).EngMin = -1;
CurrMeasOffsWrReq.Arguments(6).EngMax = 1;
CurrMeasOffsWrReq.Arguments(6).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(6).Direction = 'In';
CurrMeasOffsWrReq.Arguments(6).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(6).Description = 'None';
CurrMeasOffsWrReq.Arguments(7) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(7).Name = 'CurrMeasMotCurrOffsDifF';
CurrMeasOffsWrReq.Arguments(7).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(7).EngMin = -1;
CurrMeasOffsWrReq.Arguments(7).EngMax = 1;
CurrMeasOffsWrReq.Arguments(7).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(7).Direction = 'In';
CurrMeasOffsWrReq.Arguments(7).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(7).Description = 'None';
CurrMeasOffsWrReq.Arguments(8) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(8).Name = 'CurrMeasMotCurrOffsLoAvrgA';
CurrMeasOffsWrReq.Arguments(8).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(8).EngMin = 0;
CurrMeasOffsWrReq.Arguments(8).EngMax = 2.8;
CurrMeasOffsWrReq.Arguments(8).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(8).Direction = 'In';
CurrMeasOffsWrReq.Arguments(8).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(8).Description = 'None';
CurrMeasOffsWrReq.Arguments(9) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(9).Name = 'CurrMeasMotCurrOffsLoAvrgB';
CurrMeasOffsWrReq.Arguments(9).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(9).EngMin = 0;
CurrMeasOffsWrReq.Arguments(9).EngMax = 2.8;
CurrMeasOffsWrReq.Arguments(9).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(9).Direction = 'In';
CurrMeasOffsWrReq.Arguments(9).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(9).Description = 'None';
CurrMeasOffsWrReq.Arguments(10) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(10).Name = 'CurrMeasMotCurrOffsLoAvrgC';
CurrMeasOffsWrReq.Arguments(10).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(10).EngMin = 0;
CurrMeasOffsWrReq.Arguments(10).EngMax = 2.8;
CurrMeasOffsWrReq.Arguments(10).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(10).Direction = 'In';
CurrMeasOffsWrReq.Arguments(10).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(10).Description = 'None';
CurrMeasOffsWrReq.Arguments(11) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(11).Name = 'CurrMeasMotCurrOffsLoAvrgD';
CurrMeasOffsWrReq.Arguments(11).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(11).EngMin = 0;
CurrMeasOffsWrReq.Arguments(11).EngMax = 2.8;
CurrMeasOffsWrReq.Arguments(11).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(11).Direction = 'In';
CurrMeasOffsWrReq.Arguments(11).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(11).Description = 'None';
CurrMeasOffsWrReq.Arguments(12) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(12).Name = 'CurrMeasMotCurrOffsLoAvrgE';
CurrMeasOffsWrReq.Arguments(12).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(12).EngMin = 0;
CurrMeasOffsWrReq.Arguments(12).EngMax = 2.8;
CurrMeasOffsWrReq.Arguments(12).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(12).Direction = 'In';
CurrMeasOffsWrReq.Arguments(12).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(12).Description = 'None';
CurrMeasOffsWrReq.Arguments(13) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(13).Name = 'CurrMeasMotCurrOffsLoAvrgF';
CurrMeasOffsWrReq.Arguments(13).EngDT = dt.float32;
CurrMeasOffsWrReq.Arguments(13).EngMin = 0;
CurrMeasOffsWrReq.Arguments(13).EngMax = 2.8;
CurrMeasOffsWrReq.Arguments(13).Units = 'Volt';
CurrMeasOffsWrReq.Arguments(13).Direction = 'In';
CurrMeasOffsWrReq.Arguments(13).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(13).Description = 'None';
CurrMeasOffsWrReq.Arguments(14) = DataDict.CSArguments;
CurrMeasOffsWrReq.Arguments(14).Name = 'CurrMeasOffsWrReqSts';
CurrMeasOffsWrReq.Arguments(14).EngDT = dt.u08;
CurrMeasOffsWrReq.Arguments(14).EngMin = 0;
CurrMeasOffsWrReq.Arguments(14).EngMax = 1;
CurrMeasOffsWrReq.Arguments(14).TestTolerance = 0;
CurrMeasOffsWrReq.Arguments(14).Units = 'Cnt';
CurrMeasOffsWrReq.Arguments(14).Direction = 'Out';
CurrMeasOffsWrReq.Arguments(14).InitRowCol = [1  1];
CurrMeasOffsWrReq.Arguments(14).Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
CurrMeasEolGainCalSet_SetRamBlockStatus = DataDict.Client;
CurrMeasEolGainCalSet_SetRamBlockStatus.CallLocation = {'CurrMeasPer1','CurrMeasGainWrReq'};
CurrMeasEolGainCalSet_SetRamBlockStatus.Description = 'None';
CurrMeasEolGainCalSet_SetRamBlockStatus.Return = DataDict.CSReturn;
CurrMeasEolGainCalSet_SetRamBlockStatus.Return.Type = 'Standard';
CurrMeasEolGainCalSet_SetRamBlockStatus.Return.Min = 0;
CurrMeasEolGainCalSet_SetRamBlockStatus.Return.Max = 1;
CurrMeasEolGainCalSet_SetRamBlockStatus.Return.TestTolerance = 0;
CurrMeasEolGainCalSet_SetRamBlockStatus.Return.Description = 'None';
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).EngMin = 0;
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).EngMax = 1;
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).Direction = 'In';
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
CurrMeasEolGainCalSet_SetRamBlockStatus.Arguments(1).Description = 'None';


CurrMeasEolOffsCalSet_SetRamBlockStatus = DataDict.Client;
CurrMeasEolOffsCalSet_SetRamBlockStatus.CallLocation = {'CurrMeasPer1','CurrMeasOffsWrReq'};
CurrMeasEolOffsCalSet_SetRamBlockStatus.Description = 'None';
CurrMeasEolOffsCalSet_SetRamBlockStatus.Return = DataDict.CSReturn;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Return.Type = 'Standard';
CurrMeasEolOffsCalSet_SetRamBlockStatus.Return.Min = 0;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Return.Max = 1;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Return.TestTolerance = 0;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Return.Description = 'None';
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).EngMin = 0;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).EngMax = 1;
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).Direction = 'In';
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
CurrMeasEolOffsCalSet_SetRamBlockStatus.Arguments(1).Description = 'None';


FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'CurrMeasPer2'};
FltInj_f32.Description = [...
  'FltInj_f32 runnable determines whether to overwrite the SigPah signal ' ...
  'with a new value calculated from path gain and path offset calculation' ...
  '.(The SigPah_Arg signal of the FltInj_f32 server runnable has a specia' ...
  'l unit test consideration (MIL, SIL, PIL) that the range called out in' ...
  ' the data dictionary should only be used for defining "input" vectors,' ...
  ' and the range check that is normally done on the "output" is skipped ' ...
  'in this special instance.)'];
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).TestTolerance = 63;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_f32 runnable is trigger' ...
  'ed.'];
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = [...
  'It determines whether FltInj_f32 runnable is triggered.'];


FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'CurrMeasPer2'};
FltInj_u08.Description = [...
  'FltInj_u08 runnable determines whether to overwrite the SigPah signal ' ...
  'with a new value calculated from path gain and path offset calculation' ...
  '.'];
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).TestTolerance = 0;
FltInj_u08.Arguments(1).Units = 'Uls';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_u08 runnable is trigger' ...
  'ed.'];
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];
FltInj_u08.Arguments(2).Description = [...
  'It determines whether FltInj_u08 runnable is triggered.'];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'CurrMeasPer2'};
GetNtcQlfrSts.Description = 'None';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Return.Description = 'None';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'None';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'None';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'CurrMeasPer1','CurrMeasPer3'};
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
BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = 'None';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'CurrMeasPer1'};
BrdgVltg.ReadType = 'Rte';


DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = 'None';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.IpSignal;
DiagcStsIvtr2Inactv.LongName = 'Diagnostic Status Inverter 2 Inactive';
DiagcStsIvtr2Inactv.Description = 'None';
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
DiagcStsIvtr2Inactv.ReadType = 'Rte';


MotCtrlBrdgVltg = DataDict.IpSignal;
MotCtrlBrdgVltg.LongName = 'Bridge Voltage';
MotCtrlBrdgVltg.Description = 'None';
MotCtrlBrdgVltg.DocUnits = 'Volt';
MotCtrlBrdgVltg.EngDT = dt.float32;
MotCtrlBrdgVltg.EngInit = 6;
MotCtrlBrdgVltg.EngMin = 6;
MotCtrlBrdgVltg.EngMax = 26.5;
MotCtrlBrdgVltg.ReadIn = {'CurrMeasPer2'};
MotCtrlBrdgVltg.ReadType = 'NonRte';


MotCtrlCurrMeasWrmIninTestCmpl = DataDict.IpSignal;
MotCtrlCurrMeasWrmIninTestCmpl.LongName = 'Motor Control Current/I Measure Warm Initialization Test Complete';
MotCtrlCurrMeasWrmIninTestCmpl.Description = 'None';
MotCtrlCurrMeasWrmIninTestCmpl.DocUnits = 'Cnt';
MotCtrlCurrMeasWrmIninTestCmpl.EngDT = dt.lgc;
MotCtrlCurrMeasWrmIninTestCmpl.EngInit = 0;
MotCtrlCurrMeasWrmIninTestCmpl.EngMin = 0;
MotCtrlCurrMeasWrmIninTestCmpl.EngMax = 1;
MotCtrlCurrMeasWrmIninTestCmpl.ReadIn = {'CurrMeasPer2'};
MotCtrlCurrMeasWrmIninTestCmpl.ReadType = 'NonRte';


MotCtrlDiagcStsIvtr1Inactv = DataDict.IpSignal;
MotCtrlDiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
MotCtrlDiagcStsIvtr1Inactv.Description = 'None';
MotCtrlDiagcStsIvtr1Inactv.DocUnits = 'Cnt';
MotCtrlDiagcStsIvtr1Inactv.EngDT = dt.lgc;
MotCtrlDiagcStsIvtr1Inactv.EngInit = 0;
MotCtrlDiagcStsIvtr1Inactv.EngMin = 0;
MotCtrlDiagcStsIvtr1Inactv.EngMax = 1;
MotCtrlDiagcStsIvtr1Inactv.ReadIn = {'CurrMeasPer2'};
MotCtrlDiagcStsIvtr1Inactv.ReadType = 'NonRte';


MotCtrlDiagcStsIvtr2Inactv = DataDict.IpSignal;
MotCtrlDiagcStsIvtr2Inactv.LongName = 'Diagnostic Status Inverter 2 Inactive';
MotCtrlDiagcStsIvtr2Inactv.Description = 'None';
MotCtrlDiagcStsIvtr2Inactv.DocUnits = 'Cnt';
MotCtrlDiagcStsIvtr2Inactv.EngDT = dt.lgc;
MotCtrlDiagcStsIvtr2Inactv.EngInit = 0;
MotCtrlDiagcStsIvtr2Inactv.EngMin = 0;
MotCtrlDiagcStsIvtr2Inactv.EngMax = 1;
MotCtrlDiagcStsIvtr2Inactv.ReadIn = {'CurrMeasPer2'};
MotCtrlDiagcStsIvtr2Inactv.ReadType = 'NonRte';


MotCtrlEcuTFild = DataDict.IpSignal;
MotCtrlEcuTFild.LongName = 'Controller Temperature Filtered';
MotCtrlEcuTFild.Description = 'None';
MotCtrlEcuTFild.DocUnits = 'DegCgrd';
MotCtrlEcuTFild.EngDT = dt.float32;
MotCtrlEcuTFild.EngInit = 25;
MotCtrlEcuTFild.EngMin = -50;
MotCtrlEcuTFild.EngMax = 150;
MotCtrlEcuTFild.ReadIn = {'CurrMeasPer2'};
MotCtrlEcuTFild.ReadType = 'NonRte';


MotCtrlMotAgElec = DataDict.IpSignal;
MotCtrlMotAgElec.LongName = 'Motor Angle Electrical Corrected';
MotCtrlMotAgElec.Description = 'None';
MotCtrlMotAgElec.DocUnits = 'MotRevElec';
MotCtrlMotAgElec.EngDT = dt.u0p16;
MotCtrlMotAgElec.EngInit = 0;
MotCtrlMotAgElec.EngMin = 0;
MotCtrlMotAgElec.EngMax = 0.9999847412;
MotCtrlMotAgElec.ReadIn = {'CurrMeasPer2'};
MotCtrlMotAgElec.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyA = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyA.LongName = 'Motor Current Adc Valley A';
MotCtrlMotCurrAdcVlyA.Description = 'None';
MotCtrlMotCurrAdcVlyA.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyA.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyA.EngInit = 0;
MotCtrlMotCurrAdcVlyA.EngMin = 0;
MotCtrlMotCurrAdcVlyA.EngMax = 5;
MotCtrlMotCurrAdcVlyA.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyA.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyAAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyAAdcFaild.LongName = 'Motor Current Adc Valley A Adc Failed';
MotCtrlMotCurrAdcVlyAAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyAAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyAAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyAAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyAAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyAAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyAAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyAAdcFaild.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyB = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyB.LongName = 'Motor Current Adc Valley B';
MotCtrlMotCurrAdcVlyB.Description = 'None';
MotCtrlMotCurrAdcVlyB.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyB.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyB.EngInit = 0;
MotCtrlMotCurrAdcVlyB.EngMin = 0;
MotCtrlMotCurrAdcVlyB.EngMax = 5;
MotCtrlMotCurrAdcVlyB.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyB.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyBAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyBAdcFaild.LongName = 'Motor Current Adc Valley B Adc Failed';
MotCtrlMotCurrAdcVlyBAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyBAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyBAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyBAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyBAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyBAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyBAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyBAdcFaild.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyC = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyC.LongName = 'Motor Current Adc Valley C';
MotCtrlMotCurrAdcVlyC.Description = 'None';
MotCtrlMotCurrAdcVlyC.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyC.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyC.EngInit = 0;
MotCtrlMotCurrAdcVlyC.EngMin = 0;
MotCtrlMotCurrAdcVlyC.EngMax = 5;
MotCtrlMotCurrAdcVlyC.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyC.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyCAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyCAdcFaild.LongName = 'Motor Current Adc Valley C Adc Failed';
MotCtrlMotCurrAdcVlyCAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyCAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyCAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyCAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyCAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyCAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyCAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyCAdcFaild.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyD = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyD.LongName = 'Motor Current Adc Valley D';
MotCtrlMotCurrAdcVlyD.Description = 'None';
MotCtrlMotCurrAdcVlyD.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyD.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyD.EngInit = 0;
MotCtrlMotCurrAdcVlyD.EngMin = 0;
MotCtrlMotCurrAdcVlyD.EngMax = 5;
MotCtrlMotCurrAdcVlyD.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyD.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyDAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyDAdcFaild.LongName = 'Motor Current Adc Valley D Adc Failed';
MotCtrlMotCurrAdcVlyDAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyDAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyDAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyDAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyDAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyDAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyDAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyDAdcFaild.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyE = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyE.LongName = 'Motor Current Adc Valley E';
MotCtrlMotCurrAdcVlyE.Description = 'None';
MotCtrlMotCurrAdcVlyE.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyE.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyE.EngInit = 0;
MotCtrlMotCurrAdcVlyE.EngMin = 0;
MotCtrlMotCurrAdcVlyE.EngMax = 5;
MotCtrlMotCurrAdcVlyE.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyE.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyEAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyEAdcFaild.LongName = 'Motor Current Adc Valley E Adc Failed';
MotCtrlMotCurrAdcVlyEAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyEAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyEAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyEAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyEAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyEAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyEAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyEAdcFaild.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyF = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyF.LongName = 'Motor Current Adc Valley F';
MotCtrlMotCurrAdcVlyF.Description = 'None';
MotCtrlMotCurrAdcVlyF.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyF.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyF.EngInit = 0;
MotCtrlMotCurrAdcVlyF.EngMin = 0;
MotCtrlMotCurrAdcVlyF.EngMax = 5;
MotCtrlMotCurrAdcVlyF.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyF.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyFAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyFAdcFaild.LongName = 'Motor Current Adc Valley F Adc Failed';
MotCtrlMotCurrAdcVlyFAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyFAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyFAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyFAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyFAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyFAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyFAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyFAdcFaild.ReadType = 'NonRte';


MotCtrlMotElecMeclPolarity = DataDict.IpSignal;
MotCtrlMotElecMeclPolarity.LongName = 'Motor Electro-Mechanical Polarity';
MotCtrlMotElecMeclPolarity.Description = 'None';
MotCtrlMotElecMeclPolarity.DocUnits = 'Uls';
MotCtrlMotElecMeclPolarity.EngDT = dt.s08;
MotCtrlMotElecMeclPolarity.EngInit = 1;
MotCtrlMotElecMeclPolarity.EngMin = -1;
MotCtrlMotElecMeclPolarity.EngMax = 1;
MotCtrlMotElecMeclPolarity.ReadIn = {'CurrMeasPer2'};
MotCtrlMotElecMeclPolarity.ReadType = 'NonRte';


MotCtrlMotVelMrf = DataDict.IpSignal;
MotCtrlMotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotCtrlMotVelMrf.Description = 'None';
MotCtrlMotVelMrf.DocUnits = 'MotRadPerSec';
MotCtrlMotVelMrf.EngDT = dt.float32;
MotCtrlMotVelMrf.EngInit = 0;
MotCtrlMotVelMrf.EngMin = -1350;
MotCtrlMotVelMrf.EngMax = 1350;
MotCtrlMotVelMrf.ReadIn = {'CurrMeasPer2'};
MotCtrlMotVelMrf.ReadType = 'NonRte';


MotCtrlPhaOnTiA = DataDict.IpSignal;
MotCtrlPhaOnTiA.LongName = 'Phase a on Time';
MotCtrlPhaOnTiA.Description = 'None';
MotCtrlPhaOnTiA.DocUnits = 'NanoSec';
MotCtrlPhaOnTiA.EngDT = dt.u32;
MotCtrlPhaOnTiA.EngInit = 0;
MotCtrlPhaOnTiA.EngMin = 0;
MotCtrlPhaOnTiA.EngMax = 71429;
MotCtrlPhaOnTiA.ReadIn = {'CurrMeasPer2'};
MotCtrlPhaOnTiA.ReadType = 'NonRte';


MotCtrlPhaOnTiB = DataDict.IpSignal;
MotCtrlPhaOnTiB.LongName = 'Phase B on Time';
MotCtrlPhaOnTiB.Description = 'None';
MotCtrlPhaOnTiB.DocUnits = 'NanoSec';
MotCtrlPhaOnTiB.EngDT = dt.u32;
MotCtrlPhaOnTiB.EngInit = 0;
MotCtrlPhaOnTiB.EngMin = 0;
MotCtrlPhaOnTiB.EngMax = 71429;
MotCtrlPhaOnTiB.ReadIn = {'CurrMeasPer2'};
MotCtrlPhaOnTiB.ReadType = 'NonRte';


MotCtrlPhaOnTiC = DataDict.IpSignal;
MotCtrlPhaOnTiC.LongName = 'Phase C on Time';
MotCtrlPhaOnTiC.Description = 'None';
MotCtrlPhaOnTiC.DocUnits = 'NanoSec';
MotCtrlPhaOnTiC.EngDT = dt.u32;
MotCtrlPhaOnTiC.EngInit = 0;
MotCtrlPhaOnTiC.EngMin = 0;
MotCtrlPhaOnTiC.EngMax = 71429;
MotCtrlPhaOnTiC.ReadIn = {'CurrMeasPer2'};
MotCtrlPhaOnTiC.ReadType = 'NonRte';


MotCtrlPwmPerd = DataDict.IpSignal;
MotCtrlPwmPerd.LongName = 'PWM Period';
MotCtrlPwmPerd.Description = 'None';
MotCtrlPwmPerd.DocUnits = 'NanoSec';
MotCtrlPwmPerd.EngDT = dt.u32;
MotCtrlPwmPerd.EngInit = 62500;
MotCtrlPwmPerd.EngMin = 55555;
MotCtrlPwmPerd.EngMax = 71429;
MotCtrlPwmPerd.ReadIn = {'CurrMeasPer2'};
MotCtrlPwmPerd.ReadType = 'NonRte';


MotCtrlSysSt = DataDict.IpSignal;
MotCtrlSysSt.LongName = 'System State';
MotCtrlSysSt.Description = 'None';
MotCtrlSysSt.DocUnits = 'Cnt';
MotCtrlSysSt.EngDT = enum.SysSt1;
MotCtrlSysSt.EngInit = SysSt1.SYSST_WRMININ;
MotCtrlSysSt.EngMin = SysSt1.SYSST_DI;
MotCtrlSysSt.EngMax = SysSt1.SYSST_WRMININ;
MotCtrlSysSt.ReadIn = {'CurrMeasPer2'};
MotCtrlSysSt.ReadType = 'NonRte';


MotCurrAdcVlyA = DataDict.IpSignal;
MotCurrAdcVlyA.LongName = 'Motor Current Adc Valley A';
MotCurrAdcVlyA.Description = 'None';
MotCurrAdcVlyA.DocUnits = 'Volt';
MotCurrAdcVlyA.EngDT = dt.float32;
MotCurrAdcVlyA.EngInit = 0;
MotCurrAdcVlyA.EngMin = 0;
MotCurrAdcVlyA.EngMax = 5;
MotCurrAdcVlyA.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyA.ReadType = 'Rte';


MotCurrAdcVlyB = DataDict.IpSignal;
MotCurrAdcVlyB.LongName = 'Motor Current Adc Valley B';
MotCurrAdcVlyB.Description = 'None';
MotCurrAdcVlyB.DocUnits = 'Volt';
MotCurrAdcVlyB.EngDT = dt.float32;
MotCurrAdcVlyB.EngInit = 0;
MotCurrAdcVlyB.EngMin = 0;
MotCurrAdcVlyB.EngMax = 5;
MotCurrAdcVlyB.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyB.ReadType = 'Rte';


MotCurrAdcVlyC = DataDict.IpSignal;
MotCurrAdcVlyC.LongName = 'Motor Current Adc Valley C';
MotCurrAdcVlyC.Description = 'None';
MotCurrAdcVlyC.DocUnits = 'Volt';
MotCurrAdcVlyC.EngDT = dt.float32;
MotCurrAdcVlyC.EngInit = 0;
MotCurrAdcVlyC.EngMin = 0;
MotCurrAdcVlyC.EngMax = 5;
MotCurrAdcVlyC.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyC.ReadType = 'Rte';


MotCurrAdcVlyD = DataDict.IpSignal;
MotCurrAdcVlyD.LongName = 'Motor Current Adc Valley D';
MotCurrAdcVlyD.Description = 'None';
MotCurrAdcVlyD.DocUnits = 'Volt';
MotCurrAdcVlyD.EngDT = dt.float32;
MotCurrAdcVlyD.EngInit = 0;
MotCurrAdcVlyD.EngMin = 0;
MotCurrAdcVlyD.EngMax = 5;
MotCurrAdcVlyD.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyD.ReadType = 'Rte';


MotCurrAdcVlyE = DataDict.IpSignal;
MotCurrAdcVlyE.LongName = 'Motor Current Adc Valley E';
MotCurrAdcVlyE.Description = 'None';
MotCurrAdcVlyE.DocUnits = 'Volt';
MotCurrAdcVlyE.EngDT = dt.float32;
MotCurrAdcVlyE.EngInit = 0;
MotCurrAdcVlyE.EngMin = 0;
MotCurrAdcVlyE.EngMax = 5;
MotCurrAdcVlyE.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyE.ReadType = 'Rte';


MotCurrAdcVlyF = DataDict.IpSignal;
MotCurrAdcVlyF.LongName = 'Motor Current Adc Valley F';
MotCurrAdcVlyF.Description = 'None';
MotCurrAdcVlyF.DocUnits = 'Volt';
MotCurrAdcVlyF.EngDT = dt.float32;
MotCurrAdcVlyF.EngInit = 0;
MotCurrAdcVlyF.EngMin = 0;
MotCurrAdcVlyF.EngMax = 5;
MotCurrAdcVlyF.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyF.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotVelMrf.Description = 'None';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'CurrMeasPer1'};
MotVelMrf.ReadType = 'Rte';


Ntc5DErrCnt = DataDict.IpSignal;
Ntc5DErrCnt.LongName = 'NTC 5D Error Count';
Ntc5DErrCnt.Description = 'None';
Ntc5DErrCnt.DocUnits = 'Cnt';
Ntc5DErrCnt.EngDT = dt.u16;
Ntc5DErrCnt.EngInit = 0;
Ntc5DErrCnt.EngMin = 0;
Ntc5DErrCnt.EngMax = 65535;
Ntc5DErrCnt.ReadIn = {'CurrMeasPer3'};
Ntc5DErrCnt.ReadType = 'Rte';


Ntc6DErrCnt = DataDict.IpSignal;
Ntc6DErrCnt.LongName = 'NTC 6D Error Count';
Ntc6DErrCnt.Description = 'None';
Ntc6DErrCnt.DocUnits = 'Cnt';
Ntc6DErrCnt.EngDT = dt.u16;
Ntc6DErrCnt.EngInit = 0;
Ntc6DErrCnt.EngMin = 0;
Ntc6DErrCnt.EngMax = 65535;
Ntc6DErrCnt.ReadIn = {'CurrMeasPer3'};
Ntc6DErrCnt.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = 'None';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 255;
StrtUpSt.ReadIn = {'CurrMeasPer3'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'None';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'CurrMeasPer3'};
SysSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'None';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'CurrMeasPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Validity';
VehSpdVld.Description = 'None';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'CurrMeasPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
CurrMeasWrmIninTestCmpl = DataDict.OpSignal;
CurrMeasWrmIninTestCmpl.LongName = 'Current Measurement Warm Init Test Complete';
CurrMeasWrmIninTestCmpl.Description = 'Warm Init Test Complete Flag';
CurrMeasWrmIninTestCmpl.DocUnits = 'Cnt';
CurrMeasWrmIninTestCmpl.SwcShoName = 'CurrMeas';
CurrMeasWrmIninTestCmpl.EngDT = dt.lgc;
CurrMeasWrmIninTestCmpl.EngInit = 0;
CurrMeasWrmIninTestCmpl.EngMin = 0;
CurrMeasWrmIninTestCmpl.EngMax = 1;
CurrMeasWrmIninTestCmpl.TestTolerance = 0;
CurrMeasWrmIninTestCmpl.WrittenIn = {'CurrMeasPer3'};
CurrMeasWrmIninTestCmpl.WriteType = 'Rte';


MotCtrlCurrMeasMotAgCorrd = DataDict.OpSignal;
MotCtrlCurrMeasMotAgCorrd.LongName = 'Motor Current Motor Angle Corrected';
MotCtrlCurrMeasMotAgCorrd.Description = [...
  'Corrected motor position in radian ranging from -2pi to +2pi to conver' ...
  't from phase to phase signal to phase to neutral signal after compensa' ...
  'ting the motor position sensor delay.'];
MotCtrlCurrMeasMotAgCorrd.DocUnits = 'MotRad';
MotCtrlCurrMeasMotAgCorrd.SwcShoName = 'CurrMeas';
MotCtrlCurrMeasMotAgCorrd.EngDT = dt.float32;
MotCtrlCurrMeasMotAgCorrd.EngInit = 0;
MotCtrlCurrMeasMotAgCorrd.EngMin = -6.2832;
MotCtrlCurrMeasMotAgCorrd.EngMax = 6.2832;
MotCtrlCurrMeasMotAgCorrd.TestTolerance = 1e-07;
MotCtrlCurrMeasMotAgCorrd.WrittenIn = {'CurrMeasPer2'};
MotCtrlCurrMeasMotAgCorrd.WriteType = 'NonRte';


MotCtrlMotCurrCorrdA = DataDict.OpSignal;
MotCtrlMotCurrCorrdA.LongName = 'Current Measurement Motor Current Corrected A';
MotCtrlMotCurrCorrdA.Description = 'Corrected Motor Current A';
MotCtrlMotCurrCorrdA.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdA.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdA.EngDT = dt.float32;
MotCtrlMotCurrCorrdA.EngInit = 0;
MotCtrlMotCurrCorrdA.EngMin = -200;
MotCtrlMotCurrCorrdA.EngMax = 200;
MotCtrlMotCurrCorrdA.TestTolerance = 0.01;
MotCtrlMotCurrCorrdA.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdA.WriteType = 'NonRte';


MotCtrlMotCurrCorrdB = DataDict.OpSignal;
MotCtrlMotCurrCorrdB.LongName = 'Corrected Motor Current B';
MotCtrlMotCurrCorrdB.Description = 'Corrected Motor Current B';
MotCtrlMotCurrCorrdB.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdB.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdB.EngDT = dt.float32;
MotCtrlMotCurrCorrdB.EngInit = 0;
MotCtrlMotCurrCorrdB.EngMin = -200;
MotCtrlMotCurrCorrdB.EngMax = 200;
MotCtrlMotCurrCorrdB.TestTolerance = 0.01;
MotCtrlMotCurrCorrdB.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdB.WriteType = 'NonRte';


MotCtrlMotCurrCorrdC = DataDict.OpSignal;
MotCtrlMotCurrCorrdC.LongName = 'Corrected Motor Current C';
MotCtrlMotCurrCorrdC.Description = 'Corrected Motor Current C';
MotCtrlMotCurrCorrdC.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdC.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdC.EngDT = dt.float32;
MotCtrlMotCurrCorrdC.EngInit = 0;
MotCtrlMotCurrCorrdC.EngMin = -200;
MotCtrlMotCurrCorrdC.EngMax = 200;
MotCtrlMotCurrCorrdC.TestTolerance = 0.01;
MotCtrlMotCurrCorrdC.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdC.WriteType = 'NonRte';


MotCtrlMotCurrCorrdD = DataDict.OpSignal;
MotCtrlMotCurrCorrdD.LongName = 'Corrected Motor Current D';
MotCtrlMotCurrCorrdD.Description = 'Corrected Motor Current D';
MotCtrlMotCurrCorrdD.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdD.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdD.EngDT = dt.float32;
MotCtrlMotCurrCorrdD.EngInit = 0;
MotCtrlMotCurrCorrdD.EngMin = -200;
MotCtrlMotCurrCorrdD.EngMax = 200;
MotCtrlMotCurrCorrdD.TestTolerance = 0.01;
MotCtrlMotCurrCorrdD.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdD.WriteType = 'NonRte';


MotCtrlMotCurrCorrdE = DataDict.OpSignal;
MotCtrlMotCurrCorrdE.LongName = 'Corrected Motor Current E';
MotCtrlMotCurrCorrdE.Description = 'Corrected Motor Current E';
MotCtrlMotCurrCorrdE.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdE.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdE.EngDT = dt.float32;
MotCtrlMotCurrCorrdE.EngInit = 0;
MotCtrlMotCurrCorrdE.EngMin = -200;
MotCtrlMotCurrCorrdE.EngMax = 200;
MotCtrlMotCurrCorrdE.TestTolerance = 0.01;
MotCtrlMotCurrCorrdE.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdE.WriteType = 'NonRte';


MotCtrlMotCurrCorrdF = DataDict.OpSignal;
MotCtrlMotCurrCorrdF.LongName = 'Corrected Motor Current F';
MotCtrlMotCurrCorrdF.Description = 'Corrected Motor Current F';
MotCtrlMotCurrCorrdF.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdF.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdF.EngDT = dt.float32;
MotCtrlMotCurrCorrdF.EngInit = 0;
MotCtrlMotCurrCorrdF.EngMin = -200;
MotCtrlMotCurrCorrdF.EngMax = 200;
MotCtrlMotCurrCorrdF.TestTolerance = 0.01;
MotCtrlMotCurrCorrdF.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdF.WriteType = 'NonRte';


MotCtrlMotCurrRollgCntr1 = DataDict.OpSignal;
MotCtrlMotCurrRollgCntr1.LongName = 'Motor Current Rolling Counter 1';
MotCtrlMotCurrRollgCntr1.Description = 'Motor Current Rolling Counter 1';
MotCtrlMotCurrRollgCntr1.DocUnits = 'Cnt';
MotCtrlMotCurrRollgCntr1.SwcShoName = 'CurrMeas';
MotCtrlMotCurrRollgCntr1.EngDT = dt.u08;
MotCtrlMotCurrRollgCntr1.EngInit = 0;
MotCtrlMotCurrRollgCntr1.EngMin = 0;
MotCtrlMotCurrRollgCntr1.EngMax = 255;
MotCtrlMotCurrRollgCntr1.TestTolerance = 0;
MotCtrlMotCurrRollgCntr1.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrRollgCntr1.WriteType = 'NonRte';


MotCtrlMotCurrRollgCntr2 = DataDict.OpSignal;
MotCtrlMotCurrRollgCntr2.LongName = 'Motor Current Rolling Counter 2';
MotCtrlMotCurrRollgCntr2.Description = 'Motor Current Rolling Counter 2';
MotCtrlMotCurrRollgCntr2.DocUnits = 'Cnt';
MotCtrlMotCurrRollgCntr2.SwcShoName = 'CurrMeas';
MotCtrlMotCurrRollgCntr2.EngDT = dt.u08;
MotCtrlMotCurrRollgCntr2.EngInit = 0;
MotCtrlMotCurrRollgCntr2.EngMin = 0;
MotCtrlMotCurrRollgCntr2.EngMax = 255;
MotCtrlMotCurrRollgCntr2.TestTolerance = 0;
MotCtrlMotCurrRollgCntr2.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrRollgCntr2.WriteType = 'NonRte';


MotCtrlNtc5DErrCnt = DataDict.OpSignal;
MotCtrlNtc5DErrCnt.LongName = 'Motor Control NTC 5D Error Count';
MotCtrlNtc5DErrCnt.Description = 'Motor Control NTC 5D Error Count';
MotCtrlNtc5DErrCnt.DocUnits = 'Cnt';
MotCtrlNtc5DErrCnt.SwcShoName = 'CurrMeas';
MotCtrlNtc5DErrCnt.EngDT = dt.u16;
MotCtrlNtc5DErrCnt.EngInit = 0;
MotCtrlNtc5DErrCnt.EngMin = 0;
MotCtrlNtc5DErrCnt.EngMax = 65535;
MotCtrlNtc5DErrCnt.TestTolerance = 1;
MotCtrlNtc5DErrCnt.WrittenIn = {'CurrMeasPer2'};
MotCtrlNtc5DErrCnt.WriteType = 'NonRte';


MotCtrlNtc6DErrCnt = DataDict.OpSignal;
MotCtrlNtc6DErrCnt.LongName = 'Motor Control NTC 6D Error Count';
MotCtrlNtc6DErrCnt.Description = 'Motor Control NTC 6D Error Count';
MotCtrlNtc6DErrCnt.DocUnits = 'Cnt';
MotCtrlNtc6DErrCnt.SwcShoName = 'CurrMeas';
MotCtrlNtc6DErrCnt.EngDT = dt.u16;
MotCtrlNtc6DErrCnt.EngInit = 0;
MotCtrlNtc6DErrCnt.EngMin = 0;
MotCtrlNtc6DErrCnt.EngMax = 65535;
MotCtrlNtc6DErrCnt.TestTolerance = 1;
MotCtrlNtc6DErrCnt.WrittenIn = {'CurrMeasPer2'};
MotCtrlNtc6DErrCnt.WriteType = 'NonRte';


MotCurrEolCalSt = DataDict.OpSignal;
MotCurrEolCalSt.LongName = 'Motor Current EOL Calibration State';
MotCurrEolCalSt.Description = [...
  'Motor Current EOL Cal states which are input to the Timer system sub-f' ...
  'unction'];
MotCurrEolCalSt.DocUnits = 'Cnt';
MotCurrEolCalSt.SwcShoName = 'CurrMeas';
MotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCurrEolCalSt.TestTolerance = 0;
MotCurrEolCalSt.WrittenIn = {'CurrMeasPer1'};
MotCurrEolCalSt.WriteType = 'Rte';


MotCurrQlfr1 = DataDict.OpSignal;
MotCurrQlfr1.LongName = 'Motor Current Qualifier 1';
MotCurrQlfr1.Description = 'Motor Current Qualifier 1';
MotCurrQlfr1.DocUnits = 'Cnt';
MotCurrQlfr1.SwcShoName = 'CurrMeas';
MotCurrQlfr1.EngDT = enum.SigQlfr1;
MotCurrQlfr1.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr1.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr1.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCurrQlfr1.TestTolerance = 0;
MotCurrQlfr1.WrittenIn = {'CurrMeasPer3'};
MotCurrQlfr1.WriteType = 'Rte';


MotCurrQlfr2 = DataDict.OpSignal;
MotCurrQlfr2.LongName = 'Motor Current Qualifier 2';
MotCurrQlfr2.Description = 'Motor Current Qualifier 2';
MotCurrQlfr2.DocUnits = 'Cnt';
MotCurrQlfr2.SwcShoName = 'CurrMeas';
MotCurrQlfr2.EngDT = enum.SigQlfr1;
MotCurrQlfr2.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr2.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr2.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCurrQlfr2.TestTolerance = 0;
MotCurrQlfr2.WrittenIn = {'CurrMeasPer3'};
MotCurrQlfr2.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
CurrMeasEolFixdPwmPerd = DataDict.Calibration;
CurrMeasEolFixdPwmPerd.LongName = 'MotCurrEolFixdPwmPerd';
CurrMeasEolFixdPwmPerd.Description = 'Motor Current EOL Fixed PWM Period';
CurrMeasEolFixdPwmPerd.DocUnits = 'NanoSec';
CurrMeasEolFixdPwmPerd.EngDT = dt.u32;
CurrMeasEolFixdPwmPerd.EngVal = 62500;
CurrMeasEolFixdPwmPerd.EngMin = 55555;
CurrMeasEolFixdPwmPerd.EngMax = 71429;
CurrMeasEolFixdPwmPerd.Cardinality = 'Cmn';
CurrMeasEolFixdPwmPerd.CustomerVisible = false;
CurrMeasEolFixdPwmPerd.Online = false;
CurrMeasEolFixdPwmPerd.Impact = 'M';
CurrMeasEolFixdPwmPerd.TuningOwner = 'FDD';
CurrMeasEolFixdPwmPerd.GraphLink = {''};
CurrMeasEolFixdPwmPerd.Monotony = 'None';
CurrMeasEolFixdPwmPerd.MaxGrad = 0;
CurrMeasEolFixdPwmPerd.PortName = 'CurrMeasEolFixdPwmPerd';


CurrMeasEolGainMax = DataDict.Calibration;
CurrMeasEolGainMax.LongName = 'MotCurrEolGainMax';
CurrMeasEolGainMax.Description = 'Motor Current EOL Gain Max';
CurrMeasEolGainMax.DocUnits = 'AmprPerVolt';
CurrMeasEolGainMax.EngDT = dt.float32;
CurrMeasEolGainMax.EngVal = 76;
CurrMeasEolGainMax.EngMin = 0;
CurrMeasEolGainMax.EngMax = 100;
CurrMeasEolGainMax.Cardinality = 'Cmn';
CurrMeasEolGainMax.CustomerVisible = false;
CurrMeasEolGainMax.Online = false;
CurrMeasEolGainMax.Impact = 'H';
CurrMeasEolGainMax.TuningOwner = 'FDD';
CurrMeasEolGainMax.GraphLink = {''};
CurrMeasEolGainMax.Monotony = 'None';
CurrMeasEolGainMax.MaxGrad = 0;
CurrMeasEolGainMax.PortName = 'CurrMeasEolGainMax';


CurrMeasEolGainMin = DataDict.Calibration;
CurrMeasEolGainMin.LongName = 'MotCurrEolGainMin';
CurrMeasEolGainMin.Description = 'Motor Current EOL Gain Min';
CurrMeasEolGainMin.DocUnits = 'AmprPerVolt';
CurrMeasEolGainMin.EngDT = dt.float32;
CurrMeasEolGainMin.EngVal = 56;
CurrMeasEolGainMin.EngMin = 0;
CurrMeasEolGainMin.EngMax = 100;
CurrMeasEolGainMin.Cardinality = 'Cmn';
CurrMeasEolGainMin.CustomerVisible = false;
CurrMeasEolGainMin.Online = false;
CurrMeasEolGainMin.Impact = 'H';
CurrMeasEolGainMin.TuningOwner = 'FDD';
CurrMeasEolGainMin.GraphLink = {''};
CurrMeasEolGainMin.Monotony = 'None';
CurrMeasEolGainMin.MaxGrad = 0;
CurrMeasEolGainMin.PortName = 'CurrMeasEolGainMin';


CurrMeasEolGainNrOfSample = DataDict.Calibration;
CurrMeasEolGainNrOfSample.LongName = 'Curr Gain Number of Sample';
CurrMeasEolGainNrOfSample.Description = 'Curr Gain Number of Sample';
CurrMeasEolGainNrOfSample.DocUnits = 'Cnt';
CurrMeasEolGainNrOfSample.EngDT = dt.u16;
CurrMeasEolGainNrOfSample.EngVal = 5;
CurrMeasEolGainNrOfSample.EngMin = 1;
CurrMeasEolGainNrOfSample.EngMax = 1000;
CurrMeasEolGainNrOfSample.Cardinality = 'Cmn';
CurrMeasEolGainNrOfSample.CustomerVisible = false;
CurrMeasEolGainNrOfSample.Online = false;
CurrMeasEolGainNrOfSample.Impact = 'L';
CurrMeasEolGainNrOfSample.TuningOwner = 'FDD';
CurrMeasEolGainNrOfSample.GraphLink = {''};
CurrMeasEolGainNrOfSample.Monotony = 'None';
CurrMeasEolGainNrOfSample.MaxGrad = 0;
CurrMeasEolGainNrOfSample.PortName = 'CurrMeasEolGainNrOfSample';


CurrMeasEolGainNumer = DataDict.Calibration;
CurrMeasEolGainNumer.LongName = 'MotCurrEolGainNumer';
CurrMeasEolGainNumer.Description = 'Motor Current EOL Gain Numerator';
CurrMeasEolGainNumer.DocUnits = 'Ampr';
CurrMeasEolGainNumer.EngDT = dt.float32;
CurrMeasEolGainNumer.EngVal = 45;
CurrMeasEolGainNumer.EngMin = 10;
CurrMeasEolGainNumer.EngMax = 100;
CurrMeasEolGainNumer.Cardinality = 'Cmn';
CurrMeasEolGainNumer.CustomerVisible = false;
CurrMeasEolGainNumer.Online = false;
CurrMeasEolGainNumer.Impact = 'H';
CurrMeasEolGainNumer.TuningOwner = 'FDD';
CurrMeasEolGainNumer.GraphLink = {''};
CurrMeasEolGainNumer.Monotony = 'None';
CurrMeasEolGainNumer.MaxGrad = 0;
CurrMeasEolGainNumer.PortName = 'CurrMeasEolGainNumer';


CurrMeasEolMaxMotVel = DataDict.Calibration;
CurrMeasEolMaxMotVel.LongName = 'Max Allowed Mot Vel';
CurrMeasEolMaxMotVel.Description = [...
  'Maximum allowed motor velocity that produces a Bemf insufficient to ca' ...
  'use current flow during measurement'];
CurrMeasEolMaxMotVel.DocUnits = 'MotRadPerSec';
CurrMeasEolMaxMotVel.EngDT = dt.float32;
CurrMeasEolMaxMotVel.EngVal = 16;
CurrMeasEolMaxMotVel.EngMin = 0;
CurrMeasEolMaxMotVel.EngMax = 1350;
CurrMeasEolMaxMotVel.Cardinality = 'Cmn';
CurrMeasEolMaxMotVel.CustomerVisible = false;
CurrMeasEolMaxMotVel.Online = false;
CurrMeasEolMaxMotVel.Impact = 'M';
CurrMeasEolMaxMotVel.TuningOwner = 'FDD';
CurrMeasEolMaxMotVel.GraphLink = {''};
CurrMeasEolMaxMotVel.Monotony = 'None';
CurrMeasEolMaxMotVel.MaxGrad = 0;
CurrMeasEolMaxMotVel.PortName = 'CurrMeasEolMaxMotVel';


CurrMeasEolOffsHiBrdgVltgMin = DataDict.Calibration;
CurrMeasEolOffsHiBrdgVltgMin.LongName = 'Motor Current EOL Offset High Bridge Voltage Minimum';
CurrMeasEolOffsHiBrdgVltgMin.Description = [...
  'EOL Battery voltage times the difference between HiComOffset and LowCo' ...
  'mOffset; Min = 0 ; Max = 26.5V * 71429 (0.8-0.1); Default = 6V * 62500' ...
  ' (0.8-0.1)'];
CurrMeasEolOffsHiBrdgVltgMin.DocUnits = 'VoltNanoSec';
CurrMeasEolOffsHiBrdgVltgMin.EngDT = dt.float32;
CurrMeasEolOffsHiBrdgVltgMin.EngVal = 262500;
CurrMeasEolOffsHiBrdgVltgMin.EngMin = 233330;
CurrMeasEolOffsHiBrdgVltgMin.EngMax = 1325008;
CurrMeasEolOffsHiBrdgVltgMin.Cardinality = 'Cmn';
CurrMeasEolOffsHiBrdgVltgMin.CustomerVisible = false;
CurrMeasEolOffsHiBrdgVltgMin.Online = false;
CurrMeasEolOffsHiBrdgVltgMin.Impact = 'M';
CurrMeasEolOffsHiBrdgVltgMin.TuningOwner = 'FDD';
CurrMeasEolOffsHiBrdgVltgMin.GraphLink = {''};
CurrMeasEolOffsHiBrdgVltgMin.Monotony = 'None';
CurrMeasEolOffsHiBrdgVltgMin.MaxGrad = 999;
CurrMeasEolOffsHiBrdgVltgMin.PortName = 'CurrMeasEolOffsHiBrdgVltgMin';


CurrMeasEolOffsHiCmuOffs = DataDict.Calibration;
CurrMeasEolOffsHiCmuOffs.LongName = 'Current Measurement Eol Offset High Commutation Offset';
CurrMeasEolOffsHiCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];
CurrMeasEolOffsHiCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsHiCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsHiCmuOffs.EngVal = 50000;
CurrMeasEolOffsHiCmuOffs.EngMin = 35715;
CurrMeasEolOffsHiCmuOffs.EngMax = 71429;
CurrMeasEolOffsHiCmuOffs.Cardinality = 'Cmn';
CurrMeasEolOffsHiCmuOffs.CustomerVisible = false;
CurrMeasEolOffsHiCmuOffs.Online = false;
CurrMeasEolOffsHiCmuOffs.Impact = 'H';
CurrMeasEolOffsHiCmuOffs.TuningOwner = 'FDD';
CurrMeasEolOffsHiCmuOffs.GraphLink = {''};
CurrMeasEolOffsHiCmuOffs.Monotony = 'None';
CurrMeasEolOffsHiCmuOffs.MaxGrad = 0;
CurrMeasEolOffsHiCmuOffs.PortName = 'CurrMeasEolOffsHiCmuOffs';


CurrMeasEolOffsLoCmuOffs = DataDict.Calibration;
CurrMeasEolOffsLoCmuOffs.LongName = 'CurrMeasEolOffsLoCmuOffs';
CurrMeasEolOffsLoCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];
CurrMeasEolOffsLoCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsLoCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsLoCmuOffs.EngVal = 6250;
CurrMeasEolOffsLoCmuOffs.EngMin = 0;
CurrMeasEolOffsLoCmuOffs.EngMax = 35714;
CurrMeasEolOffsLoCmuOffs.Cardinality = 'Cmn';
CurrMeasEolOffsLoCmuOffs.CustomerVisible = false;
CurrMeasEolOffsLoCmuOffs.Online = false;
CurrMeasEolOffsLoCmuOffs.Impact = 'H';
CurrMeasEolOffsLoCmuOffs.TuningOwner = 'FDD';
CurrMeasEolOffsLoCmuOffs.GraphLink = {''};
CurrMeasEolOffsLoCmuOffs.Monotony = 'None';
CurrMeasEolOffsLoCmuOffs.MaxGrad = 0;
CurrMeasEolOffsLoCmuOffs.PortName = 'CurrMeasEolOffsLoCmuOffs';


CurrMeasEolOffsMax = DataDict.Calibration;
CurrMeasEolOffsMax.LongName = 'MotCurrEolOffsMax';
CurrMeasEolOffsMax.Description = 'Motor Current EOL Offset Max';
CurrMeasEolOffsMax.DocUnits = 'Volt';
CurrMeasEolOffsMax.EngDT = dt.float32;
CurrMeasEolOffsMax.EngVal = 2.8;
CurrMeasEolOffsMax.EngMin = 2.8;
CurrMeasEolOffsMax.EngMax = 3;
CurrMeasEolOffsMax.Cardinality = 'Cmn';
CurrMeasEolOffsMax.CustomerVisible = false;
CurrMeasEolOffsMax.Online = false;
CurrMeasEolOffsMax.Impact = 'H';
CurrMeasEolOffsMax.TuningOwner = 'FDD';
CurrMeasEolOffsMax.GraphLink = {''};
CurrMeasEolOffsMax.Monotony = 'None';
CurrMeasEolOffsMax.MaxGrad = 0;
CurrMeasEolOffsMax.PortName = 'CurrMeasEolOffsMax';


CurrMeasEolOffsMin = DataDict.Calibration;
CurrMeasEolOffsMin.LongName = 'MotCurrEolOffsMin';
CurrMeasEolOffsMin.Description = 'Motor Current EOL Offset Min';
CurrMeasEolOffsMin.DocUnits = 'Volt';
CurrMeasEolOffsMin.EngDT = dt.float32;
CurrMeasEolOffsMin.EngVal = 2.3;
CurrMeasEolOffsMin.EngMin = 2;
CurrMeasEolOffsMin.EngMax = 2.3;
CurrMeasEolOffsMin.Cardinality = 'Cmn';
CurrMeasEolOffsMin.CustomerVisible = false;
CurrMeasEolOffsMin.Online = false;
CurrMeasEolOffsMin.Impact = 'H';
CurrMeasEolOffsMin.TuningOwner = 'FDD';
CurrMeasEolOffsMin.GraphLink = {''};
CurrMeasEolOffsMin.Monotony = 'None';
CurrMeasEolOffsMin.MaxGrad = 0;
CurrMeasEolOffsMin.PortName = 'CurrMeasEolOffsMin';


CurrMeasEolOffsNrOfSample = DataDict.Calibration;
CurrMeasEolOffsNrOfSample.LongName = 'Curr Offset Number of Sample';
CurrMeasEolOffsNrOfSample.Description = 'Curr Offset Number of Sample';
CurrMeasEolOffsNrOfSample.DocUnits = 'Cnt';
CurrMeasEolOffsNrOfSample.EngDT = dt.u16;
CurrMeasEolOffsNrOfSample.EngVal = 20;
CurrMeasEolOffsNrOfSample.EngMin = 1;
CurrMeasEolOffsNrOfSample.EngMax = 10000;
CurrMeasEolOffsNrOfSample.Cardinality = 'Cmn';
CurrMeasEolOffsNrOfSample.CustomerVisible = false;
CurrMeasEolOffsNrOfSample.Online = false;
CurrMeasEolOffsNrOfSample.Impact = 'L';
CurrMeasEolOffsNrOfSample.TuningOwner = 'FDD';
CurrMeasEolOffsNrOfSample.GraphLink = {''};
CurrMeasEolOffsNrOfSample.Monotony = 'None';
CurrMeasEolOffsNrOfSample.MaxGrad = 0;
CurrMeasEolOffsNrOfSample.PortName = 'CurrMeasEolOffsNrOfSample';


CurrMeasEolTranCntrThd = DataDict.Calibration;
CurrMeasEolTranCntrThd.LongName = 'Current Measurement Eol Transition Counter Threshold';
CurrMeasEolTranCntrThd.Description = [...
  'Current Measurement Eol Transition Counter Threshold'];
CurrMeasEolTranCntrThd.DocUnits = 'Cnt';
CurrMeasEolTranCntrThd.EngDT = dt.u08;
CurrMeasEolTranCntrThd.EngVal = 5;
CurrMeasEolTranCntrThd.EngMin = 0;
CurrMeasEolTranCntrThd.EngMax = 255;
CurrMeasEolTranCntrThd.Cardinality = 'Cmn';
CurrMeasEolTranCntrThd.CustomerVisible = false;
CurrMeasEolTranCntrThd.Online = false;
CurrMeasEolTranCntrThd.Impact = 'M';
CurrMeasEolTranCntrThd.TuningOwner = 'FDD';
CurrMeasEolTranCntrThd.GraphLink = {''};
CurrMeasEolTranCntrThd.Monotony = 'None';
CurrMeasEolTranCntrThd.MaxGrad = 999;
CurrMeasEolTranCntrThd.PortName = 'CurrMeasEolTranCntrThd';


CurrMeasMinRqrdPhaOnTi = DataDict.Calibration;
CurrMeasMinRqrdPhaOnTi.LongName = 'Current Measurement Minimum Required Phase on Time';
CurrMeasMinRqrdPhaOnTi.Description = [...
  'Minimum time required to sample six phase'];
CurrMeasMinRqrdPhaOnTi.DocUnits = 'NanoSec';
CurrMeasMinRqrdPhaOnTi.EngDT = dt.u32;
CurrMeasMinRqrdPhaOnTi.EngVal = 11000;
CurrMeasMinRqrdPhaOnTi.EngMin = 10000;
CurrMeasMinRqrdPhaOnTi.EngMax = 65535;
CurrMeasMinRqrdPhaOnTi.Cardinality = 'Cmn';
CurrMeasMinRqrdPhaOnTi.CustomerVisible = false;
CurrMeasMinRqrdPhaOnTi.Online = false;
CurrMeasMinRqrdPhaOnTi.Impact = 'M';
CurrMeasMinRqrdPhaOnTi.TuningOwner = 'FDD';
CurrMeasMinRqrdPhaOnTi.GraphLink = {''};
CurrMeasMinRqrdPhaOnTi.Monotony = 'None';
CurrMeasMinRqrdPhaOnTi.MaxGrad = 999;
CurrMeasMinRqrdPhaOnTi.PortName = 'CurrMeasMinRqrdPhaOnTi';


CurrMeasMotAgCompuDly = DataDict.Calibration;
CurrMeasMotAgCompuDly.LongName = 'CurrMeasMotAgCompuDly';
CurrMeasMotAgCompuDly.Description = [...
  'Motor Current Motor Angle Computation Delay'];
CurrMeasMotAgCompuDly.DocUnits = 'NanoSec';
CurrMeasMotAgCompuDly.EngDT = dt.u32;
CurrMeasMotAgCompuDly.EngVal = 30000;
CurrMeasMotAgCompuDly.EngMin = 0;
CurrMeasMotAgCompuDly.EngMax = 30000;
CurrMeasMotAgCompuDly.Cardinality = 'Cmn';
CurrMeasMotAgCompuDly.CustomerVisible = false;
CurrMeasMotAgCompuDly.Online = false;
CurrMeasMotAgCompuDly.Impact = 'M';
CurrMeasMotAgCompuDly.TuningOwner = 'FDD';
CurrMeasMotAgCompuDly.GraphLink = {''};
CurrMeasMotAgCompuDly.Monotony = 'None';
CurrMeasMotAgCompuDly.MaxGrad = 0;
CurrMeasMotAgCompuDly.PortName = 'CurrMeasMotAgCompuDly';


CurrMeasMotCurrAdcVlyWrmIninMax = DataDict.Calibration;
CurrMeasMotCurrAdcVlyWrmIninMax.LongName = 'Current Measurement Motor Current Adc Valley Warm Init Max';
CurrMeasMotCurrAdcVlyWrmIninMax.Description = [...
  'Current Measurement Motor Current Adc Valley Warm Init Max'];
CurrMeasMotCurrAdcVlyWrmIninMax.DocUnits = 'Volt';
CurrMeasMotCurrAdcVlyWrmIninMax.EngDT = dt.float32;
CurrMeasMotCurrAdcVlyWrmIninMax.EngVal = 3;
CurrMeasMotCurrAdcVlyWrmIninMax.EngMin = 0.3;
CurrMeasMotCurrAdcVlyWrmIninMax.EngMax = 4.8;
CurrMeasMotCurrAdcVlyWrmIninMax.Cardinality = 'Cmn';
CurrMeasMotCurrAdcVlyWrmIninMax.CustomerVisible = false;
CurrMeasMotCurrAdcVlyWrmIninMax.Online = false;
CurrMeasMotCurrAdcVlyWrmIninMax.Impact = 'M';
CurrMeasMotCurrAdcVlyWrmIninMax.TuningOwner = 'FDD';
CurrMeasMotCurrAdcVlyWrmIninMax.GraphLink = {''};
CurrMeasMotCurrAdcVlyWrmIninMax.Monotony = 'None';
CurrMeasMotCurrAdcVlyWrmIninMax.MaxGrad = 999;
CurrMeasMotCurrAdcVlyWrmIninMax.PortName = 'CurrMeasMotCurrAdcVlyWrmIninMax';


CurrMeasMotCurrAdcVlyWrmIninMin = DataDict.Calibration;
CurrMeasMotCurrAdcVlyWrmIninMin.LongName = 'Current Measurement Motor Current Adc Valley Warm Init Min';
CurrMeasMotCurrAdcVlyWrmIninMin.Description = [...
  'Current Measurement Motor Current Adc Valley Warm Init Min'];
CurrMeasMotCurrAdcVlyWrmIninMin.DocUnits = 'Volt';
CurrMeasMotCurrAdcVlyWrmIninMin.EngDT = dt.float32;
CurrMeasMotCurrAdcVlyWrmIninMin.EngVal = 2;
CurrMeasMotCurrAdcVlyWrmIninMin.EngMin = 0.3;
CurrMeasMotCurrAdcVlyWrmIninMin.EngMax = 4.8;
CurrMeasMotCurrAdcVlyWrmIninMin.Cardinality = 'Cmn';
CurrMeasMotCurrAdcVlyWrmIninMin.CustomerVisible = false;
CurrMeasMotCurrAdcVlyWrmIninMin.Online = false;
CurrMeasMotCurrAdcVlyWrmIninMin.Impact = 'M';
CurrMeasMotCurrAdcVlyWrmIninMin.TuningOwner = 'FDD';
CurrMeasMotCurrAdcVlyWrmIninMin.GraphLink = {''};
CurrMeasMotCurrAdcVlyWrmIninMin.Monotony = 'None';
CurrMeasMotCurrAdcVlyWrmIninMin.MaxGrad = 999;
CurrMeasMotCurrAdcVlyWrmIninMin.PortName = 'CurrMeasMotCurrAdcVlyWrmIninMin';


CurrMeasNtc0x05DFailStep = DataDict.Calibration;
CurrMeasNtc0x05DFailStep.LongName = 'Current Measurement Ntc 5D Fail Step';
CurrMeasNtc0x05DFailStep.Description = [...
  'Current Measurement Ntc 5D Fail Step'];
CurrMeasNtc0x05DFailStep.DocUnits = 'Cnt';
CurrMeasNtc0x05DFailStep.EngDT = dt.u16;
CurrMeasNtc0x05DFailStep.EngVal = 16384;
CurrMeasNtc0x05DFailStep.EngMin = 0;
CurrMeasNtc0x05DFailStep.EngMax = 65535;
CurrMeasNtc0x05DFailStep.Cardinality = 'Cmn';
CurrMeasNtc0x05DFailStep.CustomerVisible = false;
CurrMeasNtc0x05DFailStep.Online = false;
CurrMeasNtc0x05DFailStep.Impact = 'M';
CurrMeasNtc0x05DFailStep.TuningOwner = 'FDD';
CurrMeasNtc0x05DFailStep.GraphLink = {''};
CurrMeasNtc0x05DFailStep.Monotony = 'None';
CurrMeasNtc0x05DFailStep.MaxGrad = 0;
CurrMeasNtc0x05DFailStep.PortName = 'CurrMeasNtc0x05DFailStep';


CurrMeasNtc0x05DPassStep = DataDict.Calibration;
CurrMeasNtc0x05DPassStep.LongName = 'Current Measurement Ntc 5D Pass Step';
CurrMeasNtc0x05DPassStep.Description = [...
  'Current Measurement Ntc 5D Pass Step'];
CurrMeasNtc0x05DPassStep.DocUnits = 'Cnt';
CurrMeasNtc0x05DPassStep.EngDT = dt.u16;
CurrMeasNtc0x05DPassStep.EngVal = 16384;
CurrMeasNtc0x05DPassStep.EngMin = 0;
CurrMeasNtc0x05DPassStep.EngMax = 65535;
CurrMeasNtc0x05DPassStep.Cardinality = 'Cmn';
CurrMeasNtc0x05DPassStep.CustomerVisible = false;
CurrMeasNtc0x05DPassStep.Online = false;
CurrMeasNtc0x05DPassStep.Impact = 'M';
CurrMeasNtc0x05DPassStep.TuningOwner = 'FDD';
CurrMeasNtc0x05DPassStep.GraphLink = {''};
CurrMeasNtc0x05DPassStep.Monotony = 'None';
CurrMeasNtc0x05DPassStep.MaxGrad = 0;
CurrMeasNtc0x05DPassStep.PortName = 'CurrMeasNtc0x05DPassStep';


CurrMeasNtc0x06DFailStep = DataDict.Calibration;
CurrMeasNtc0x06DFailStep.LongName = 'Current Measurement Ntc 6D Fail Step';
CurrMeasNtc0x06DFailStep.Description = [...
  'Current Measurement Ntc 6D Fail Step'];
CurrMeasNtc0x06DFailStep.DocUnits = 'Cnt';
CurrMeasNtc0x06DFailStep.EngDT = dt.u16;
CurrMeasNtc0x06DFailStep.EngVal = 16384;
CurrMeasNtc0x06DFailStep.EngMin = 0;
CurrMeasNtc0x06DFailStep.EngMax = 65535;
CurrMeasNtc0x06DFailStep.Cardinality = 'Cmn';
CurrMeasNtc0x06DFailStep.CustomerVisible = false;
CurrMeasNtc0x06DFailStep.Online = false;
CurrMeasNtc0x06DFailStep.Impact = 'M';
CurrMeasNtc0x06DFailStep.TuningOwner = 'FDD';
CurrMeasNtc0x06DFailStep.GraphLink = {''};
CurrMeasNtc0x06DFailStep.Monotony = 'None';
CurrMeasNtc0x06DFailStep.MaxGrad = 0;
CurrMeasNtc0x06DFailStep.PortName = 'CurrMeasNtc0x06DFailStep';


CurrMeasNtc0x06DPassStep = DataDict.Calibration;
CurrMeasNtc0x06DPassStep.LongName = 'Current Measurement Ntc 6D Pass Step';
CurrMeasNtc0x06DPassStep.Description = [...
  'Current Measurement Ntc 6D Pass Step'];
CurrMeasNtc0x06DPassStep.DocUnits = 'Cnt';
CurrMeasNtc0x06DPassStep.EngDT = dt.u16;
CurrMeasNtc0x06DPassStep.EngVal = 16384;
CurrMeasNtc0x06DPassStep.EngMin = 0;
CurrMeasNtc0x06DPassStep.EngMax = 65535;
CurrMeasNtc0x06DPassStep.Cardinality = 'Cmn';
CurrMeasNtc0x06DPassStep.CustomerVisible = false;
CurrMeasNtc0x06DPassStep.Online = false;
CurrMeasNtc0x06DPassStep.Impact = 'M';
CurrMeasNtc0x06DPassStep.TuningOwner = 'FDD';
CurrMeasNtc0x06DPassStep.GraphLink = {''};
CurrMeasNtc0x06DPassStep.Monotony = 'None';
CurrMeasNtc0x06DPassStep.MaxGrad = 0;
CurrMeasNtc0x06DPassStep.PortName = 'CurrMeasNtc0x06DPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmMotPoleCnt = DataDict.ImprtdCal;
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.PortName = 'SysGlbPrmMotPoleCnt';
SysGlbPrmMotPoleCnt.Description = 'None';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
CurrMeasEolGainCalSet = DataDict.NVM;
CurrMeasEolGainCalSet.LongName = 'Current Measurement EOL Gain Calibration Set';
CurrMeasEolGainCalSet.Description = [...
  'Current Measurement EOL Gain Calibration Set'];
CurrMeasEolGainCalSet.DocUnits = 'Cnt';
CurrMeasEolGainCalSet.EngDT = struct.CurrMeasEolGainCalRec1;
CurrMeasEolGainCalSet.EngInit = [struct('CurrMeasMotCurrEolGainA',66.66,'CurrMeasMotCurrEolGainB',66.66,'CurrMeasMotCurrEolGainC',66.66,'CurrMeasMotCurrEolGainD',66.66,'CurrMeasMotCurrEolGainE',66.66,'CurrMeasMotCurrEolGainF',66.66)];
CurrMeasEolGainCalSet.EngMin = [struct('CurrMeasMotCurrEolGainA',0,'CurrMeasMotCurrEolGainB',0,'CurrMeasMotCurrEolGainC',0,'CurrMeasMotCurrEolGainD',0,'CurrMeasMotCurrEolGainE',0,'CurrMeasMotCurrEolGainF',0)];
CurrMeasEolGainCalSet.EngMax = [struct('CurrMeasMotCurrEolGainA',120,'CurrMeasMotCurrEolGainB',120,'CurrMeasMotCurrEolGainC',120,'CurrMeasMotCurrEolGainD',120,'CurrMeasMotCurrEolGainE',120,'CurrMeasMotCurrEolGainF',120)];
CurrMeasEolGainCalSet.CustomerVisible = false;
CurrMeasEolGainCalSet.Impact = 'H';
CurrMeasEolGainCalSet.TuningOwner = 'FDD';
CurrMeasEolGainCalSet.CoderInfo.Alias = 'CurrMeasEolGainCalRec1';
CurrMeasEolGainCalSet.InitRowCol = [1  1];


CurrMeasEolOffsCalSet = DataDict.NVM;
CurrMeasEolOffsCalSet.LongName = 'Current Measurement EOL Offset Calibration Set';
CurrMeasEolOffsCalSet.Description = [...
  'Current Measurement EOL Offset Calibration Set'];
CurrMeasEolOffsCalSet.DocUnits = 'Cnt';
CurrMeasEolOffsCalSet.EngDT = struct.CurrMeasEolOffsCalRec1;
CurrMeasEolOffsCalSet.EngInit = [struct('CurrMeasEolOffsHiBrdgVltg',700000,'CurrMeasMotCurrEolOffsDifA',0,'CurrMeasMotCurrEolOffsDifB',0,'CurrMeasMotCurrEolOffsDifC',0,'CurrMeasMotCurrEolOffsDifD',0,'CurrMeasMotCurrEolOffsDifE',0,'CurrMeasMotCurrEolOffsDifF',0,'CurrMeasMotCurrOffsLoAvrgA',2.5,'CurrMeasMotCurrOffsLoAvrgB',2.5,'CurrMeasMotCurrOffsLoAvrgC',2.5,'CurrMeasMotCurrOffsLoAvrgD',2.5,'CurrMeasMotCurrOffsLoAvrgE',2.5,'CurrMeasMotCurrOffsLoAvrgF',2.5)];
CurrMeasEolOffsCalSet.EngMin = [struct('CurrMeasEolOffsHiBrdgVltg',0,'CurrMeasMotCurrEolOffsDifA',-1,'CurrMeasMotCurrEolOffsDifB',-1,'CurrMeasMotCurrEolOffsDifC',-1,'CurrMeasMotCurrEolOffsDifD',-1,'CurrMeasMotCurrEolOffsDifE',-1,'CurrMeasMotCurrEolOffsDifF',-1,'CurrMeasMotCurrOffsLoAvrgA',0,'CurrMeasMotCurrOffsLoAvrgB',0,'CurrMeasMotCurrOffsLoAvrgC',0,'CurrMeasMotCurrOffsLoAvrgD',0,'CurrMeasMotCurrOffsLoAvrgE',0,'CurrMeasMotCurrOffsLoAvrgF',0)];
CurrMeasEolOffsCalSet.EngMax = [struct('CurrMeasEolOffsHiBrdgVltg',1325008,'CurrMeasMotCurrEolOffsDifA',1,'CurrMeasMotCurrEolOffsDifB',1,'CurrMeasMotCurrEolOffsDifC',1,'CurrMeasMotCurrEolOffsDifD',1,'CurrMeasMotCurrEolOffsDifE',1,'CurrMeasMotCurrEolOffsDifF',1,'CurrMeasMotCurrOffsLoAvrgA',2.8,'CurrMeasMotCurrOffsLoAvrgB',2.8,'CurrMeasMotCurrOffsLoAvrgC',2.8,'CurrMeasMotCurrOffsLoAvrgD',2.8,'CurrMeasMotCurrOffsLoAvrgE',2.8,'CurrMeasMotCurrOffsLoAvrgF',2.8)];
CurrMeasEolOffsCalSet.CustomerVisible = false;
CurrMeasEolOffsCalSet.Impact = 'H';
CurrMeasEolOffsCalSet.TuningOwner = 'FDD';
CurrMeasEolOffsCalSet.CoderInfo.Alias = 'CurrMeasEolOffsCalRec1';
CurrMeasEolOffsCalSet.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
BrdgVltgSumPrev = DataDict.PIM;
BrdgVltgSumPrev.LongName = 'Current Measurement Bridge Voltage Summation Previous';
BrdgVltgSumPrev.Description = [...
  'BrdgVltgSumPrev is a summation of N number of input signal BrdgVltg.  ' ...
  'In use it is expected that Rte_Pim_BrdgVltgSumPrev initializes to 0 an' ...
  'd then gets the value of BrdgVltg added to it over a number of iterati' ...
  'ons defined by the calibration CurrMeasEolOffsNrOfSample'];
BrdgVltgSumPrev.DocUnits = 'Volt';
BrdgVltgSumPrev.EngDT = dt.float32;
BrdgVltgSumPrev.EngMin = 0;
BrdgVltgSumPrev.EngMax = 265000;
BrdgVltgSumPrev.InitRowCol = [1  1];


EolGainSts = DataDict.PIM;
EolGainSts.LongName = 'Eol Gain Status';
EolGainSts.Description = 'Eol Gain Status';
EolGainSts.DocUnits = 'Cnt';
EolGainSts.EngDT = dt.u08;
EolGainSts.EngMin = 0;
EolGainSts.EngMax = 64;
EolGainSts.InitRowCol = [1  1];


EolOffsHiBrdgVltg = DataDict.PIM;
EolOffsHiBrdgVltg.LongName = 'EOL Offset High Commutation Bridge Voltage';
EolOffsHiBrdgVltg.Description = [...
  'EolOffsHiBrdgVltg is a function of BrdgVltgAvrg and calibrations CurrM' ...
  'easEolOffsHiCmuOffs and CurrMeasEolOffsLoCmuOffs Battery voltage multi' ...
  'plied by HiComOffset at EOL Offset routineMinimum value = 6 * (35715 â' ...
  '€“ 35714) = 6Maximum value = 26.5*(71429 â€“ 0) = 1,892,868.5'];
EolOffsHiBrdgVltg.DocUnits = 'VoltNanoSec';
EolOffsHiBrdgVltg.EngDT = dt.float32;
EolOffsHiBrdgVltg.EngMin = 0;
EolOffsHiBrdgVltg.EngMax = 1892865;
EolOffsHiBrdgVltg.InitRowCol = [1  1];


EolOffsSts = DataDict.PIM;
EolOffsSts.LongName = 'Eol Offset Status';
EolOffsSts.Description = 'Eol Offset Status';
EolOffsSts.DocUnits = 'Cnt';
EolOffsSts.EngDT = dt.u08;
EolOffsSts.EngMin = 0;
EolOffsSts.EngMax = 64;
EolOffsSts.InitRowCol = [1  1];


EolTranCntrPrev = DataDict.PIM;
EolTranCntrPrev.LongName = 'Current/I Measurement EOL Transition Counter Previous';
EolTranCntrPrev.Description = [...
  'Current/I Measurement EOL Transition Counter Previous'];
EolTranCntrPrev.DocUnits = 'Cnt';
EolTranCntrPrev.EngDT = dt.u08;
EolTranCntrPrev.EngMin = 0;
EolTranCntrPrev.EngMax = 255;
EolTranCntrPrev.InitRowCol = [1  1];


GainEolAvrgCntrPrev = DataDict.PIM;
GainEolAvrgCntrPrev.LongName = 'Current Measurement Eol Average Counter Previous';
GainEolAvrgCntrPrev.Description = [...
  'Current Measurement Eol Average Counter Previous'];
GainEolAvrgCntrPrev.DocUnits = 'Cnt';
GainEolAvrgCntrPrev.EngDT = dt.u16;
GainEolAvrgCntrPrev.EngMin = 0;
GainEolAvrgCntrPrev.EngMax = 10000;
GainEolAvrgCntrPrev.InitRowCol = [1  1];


MotCtrlNtc5DErrCntPrev = DataDict.PIM;
MotCtrlNtc5DErrCntPrev.LongName = 'Motor Control Ntc 5D Error Counter Previous';
MotCtrlNtc5DErrCntPrev.Description = [...
  'Motor Control Ntc 5D Error Counter Previous used at 125us'];
MotCtrlNtc5DErrCntPrev.DocUnits = 'Cnt';
MotCtrlNtc5DErrCntPrev.EngDT = dt.u16;
MotCtrlNtc5DErrCntPrev.EngMin = 0;
MotCtrlNtc5DErrCntPrev.EngMax = 65535;
MotCtrlNtc5DErrCntPrev.InitRowCol = [1  1];


MotCtrlNtc6DErrCntPrev = DataDict.PIM;
MotCtrlNtc6DErrCntPrev.LongName = 'Motor Control Ntc 6D Error Counter Previous';
MotCtrlNtc6DErrCntPrev.Description = [...
  'Motor Control Ntc 6D Error Counter Previous used at 125us'];
MotCtrlNtc6DErrCntPrev.DocUnits = 'Cnt';
MotCtrlNtc6DErrCntPrev.EngDT = dt.u16;
MotCtrlNtc6DErrCntPrev.EngMin = 0;
MotCtrlNtc6DErrCntPrev.EngMax = 65535;
MotCtrlNtc6DErrCntPrev.InitRowCol = [1  1];


MotCurrEolCalStPrev = DataDict.PIM;
MotCurrEolCalStPrev.LongName = 'Current Measurement Motor Current Eol Cal State Previous';
MotCurrEolCalStPrev.Description = [...
  'Current Measurement Motor Current Eol Cal State Previous'];
MotCurrEolCalStPrev.DocUnits = 'Cnt';
MotCurrEolCalStPrev.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalStPrev.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalStPrev.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCurrEolCalStPrev.InitRowCol = [1  1];


MotCurrEolGainA = DataDict.PIM;
MotCurrEolGainA.LongName = 'Motor Current EOL Gain A';
MotCurrEolGainA.Description = 'Motor Current EOL Gain A';
MotCurrEolGainA.DocUnits = 'AmprPerVolt';
MotCurrEolGainA.EngDT = dt.float32;
MotCurrEolGainA.EngMin = 0;
MotCurrEolGainA.EngMax = 840000000;
MotCurrEolGainA.InitRowCol = [1  1];


MotCurrEolGainB = DataDict.PIM;
MotCurrEolGainB.LongName = 'Motor Current EOL Gain B';
MotCurrEolGainB.Description = 'Motor Current EOL Gain B';
MotCurrEolGainB.DocUnits = 'AmprPerVolt';
MotCurrEolGainB.EngDT = dt.float32;
MotCurrEolGainB.EngMin = 0;
MotCurrEolGainB.EngMax = 840000000;
MotCurrEolGainB.InitRowCol = [1  1];


MotCurrEolGainC = DataDict.PIM;
MotCurrEolGainC.LongName = 'Motor Current EOL Gain C';
MotCurrEolGainC.Description = 'Motor Current EOL Gain C';
MotCurrEolGainC.DocUnits = 'AmprPerVolt';
MotCurrEolGainC.EngDT = dt.float32;
MotCurrEolGainC.EngMin = 0;
MotCurrEolGainC.EngMax = 840000000;
MotCurrEolGainC.InitRowCol = [1  1];


MotCurrEolGainD = DataDict.PIM;
MotCurrEolGainD.LongName = 'Motor Current EOL Gain D';
MotCurrEolGainD.Description = 'Motor Current EOL Gain D';
MotCurrEolGainD.DocUnits = 'AmprPerVolt';
MotCurrEolGainD.EngDT = dt.float32;
MotCurrEolGainD.EngMin = 0;
MotCurrEolGainD.EngMax = 840000000;
MotCurrEolGainD.InitRowCol = [1  1];


MotCurrEolGainE = DataDict.PIM;
MotCurrEolGainE.LongName = 'Motor Current EOL Gain E';
MotCurrEolGainE.Description = 'Motor Current EOL Gain E';
MotCurrEolGainE.DocUnits = 'AmprPerVolt';
MotCurrEolGainE.EngDT = dt.float32;
MotCurrEolGainE.EngMin = 0;
MotCurrEolGainE.EngMax = 840000000;
MotCurrEolGainE.InitRowCol = [1  1];


MotCurrEolGainF = DataDict.PIM;
MotCurrEolGainF.LongName = 'Motor Current EOL Gain F';
MotCurrEolGainF.Description = 'Motor Current EOL Gain F';
MotCurrEolGainF.DocUnits = 'AmprPerVolt';
MotCurrEolGainF.EngDT = dt.float32;
MotCurrEolGainF.EngMin = 0;
MotCurrEolGainF.EngMax = 840000000;
MotCurrEolGainF.InitRowCol = [1  1];


MotCurrEolOffsProcFlg = DataDict.PIM;
MotCurrEolOffsProcFlg.LongName = 'Motor Current Eol Offset Process Flag';
MotCurrEolOffsProcFlg.Description = [...
  'Motor Current Eol Offset Process Flag'];
MotCurrEolOffsProcFlg.DocUnits = 'Cnt';
MotCurrEolOffsProcFlg.EngDT = dt.lgc;
MotCurrEolOffsProcFlg.EngMin = 0;
MotCurrEolOffsProcFlg.EngMax = 1;
MotCurrEolOffsProcFlg.InitRowCol = [1  1];


MotCurrOffsDeltaA = DataDict.PIM;
MotCurrOffsDeltaA.LongName = 'Motor Current Offset Delta A';
MotCurrOffsDeltaA.Description = 'Motor Current Offset Delta A';
MotCurrOffsDeltaA.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaA.EngDT = dt.float32;
MotCurrOffsDeltaA.EngMin = -1;
MotCurrOffsDeltaA.EngMax = 1;
MotCurrOffsDeltaA.InitRowCol = [1  1];


MotCurrOffsDeltaB = DataDict.PIM;
MotCurrOffsDeltaB.LongName = 'Motor Current Offset Delta B';
MotCurrOffsDeltaB.Description = 'Motor Current Offset Delta B';
MotCurrOffsDeltaB.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaB.EngDT = dt.float32;
MotCurrOffsDeltaB.EngMin = -1;
MotCurrOffsDeltaB.EngMax = 1;
MotCurrOffsDeltaB.InitRowCol = [1  1];


MotCurrOffsDeltaC = DataDict.PIM;
MotCurrOffsDeltaC.LongName = 'Motor Current Offset Delta C';
MotCurrOffsDeltaC.Description = 'Motor Current Offset Delta C';
MotCurrOffsDeltaC.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaC.EngDT = dt.float32;
MotCurrOffsDeltaC.EngMin = -1;
MotCurrOffsDeltaC.EngMax = 1;
MotCurrOffsDeltaC.InitRowCol = [1  1];


MotCurrOffsDeltaD = DataDict.PIM;
MotCurrOffsDeltaD.LongName = 'Motor Current Offset Delta D';
MotCurrOffsDeltaD.Description = 'Motor Current Offset Delta D';
MotCurrOffsDeltaD.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaD.EngDT = dt.float32;
MotCurrOffsDeltaD.EngMin = -1;
MotCurrOffsDeltaD.EngMax = 1;
MotCurrOffsDeltaD.InitRowCol = [1  1];


MotCurrOffsDeltaE = DataDict.PIM;
MotCurrOffsDeltaE.LongName = 'Motor Current Offset Delta E';
MotCurrOffsDeltaE.Description = 'Motor Current Offset Delta E';
MotCurrOffsDeltaE.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaE.EngDT = dt.float32;
MotCurrOffsDeltaE.EngMin = -1;
MotCurrOffsDeltaE.EngMax = 1;
MotCurrOffsDeltaE.InitRowCol = [1  1];


MotCurrOffsDeltaF = DataDict.PIM;
MotCurrOffsDeltaF.LongName = 'Motor Current Offset Delta F';
MotCurrOffsDeltaF.Description = 'Motor Current Offset Delta F';
MotCurrOffsDeltaF.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaF.EngDT = dt.float32;
MotCurrOffsDeltaF.EngMin = -1;
MotCurrOffsDeltaF.EngMax = 1;
MotCurrOffsDeltaF.InitRowCol = [1  1];


MotCurrOffsHiAvrgA = DataDict.PIM;
MotCurrOffsHiAvrgA.LongName = 'Motor Current Offset Hi Average A';
MotCurrOffsHiAvrgA.Description = 'Motor Current Offset Hi Average A';
MotCurrOffsHiAvrgA.DocUnits = 'Volt';
MotCurrOffsHiAvrgA.EngDT = dt.float32;
MotCurrOffsHiAvrgA.EngMin = 0;
MotCurrOffsHiAvrgA.EngMax = 5;
MotCurrOffsHiAvrgA.InitRowCol = [1  1];


MotCurrOffsHiAvrgB = DataDict.PIM;
MotCurrOffsHiAvrgB.LongName = 'Motor Current Offset Hi Average B';
MotCurrOffsHiAvrgB.Description = 'Motor Current Offset Hi Average B';
MotCurrOffsHiAvrgB.DocUnits = 'Volt';
MotCurrOffsHiAvrgB.EngDT = dt.float32;
MotCurrOffsHiAvrgB.EngMin = 0;
MotCurrOffsHiAvrgB.EngMax = 5;
MotCurrOffsHiAvrgB.InitRowCol = [1  1];


MotCurrOffsHiAvrgC = DataDict.PIM;
MotCurrOffsHiAvrgC.LongName = 'Motor Current Offset Hi Average C';
MotCurrOffsHiAvrgC.Description = 'Motor Current Offset Hi Average C';
MotCurrOffsHiAvrgC.DocUnits = 'Volt';
MotCurrOffsHiAvrgC.EngDT = dt.float32;
MotCurrOffsHiAvrgC.EngMin = 0;
MotCurrOffsHiAvrgC.EngMax = 5;
MotCurrOffsHiAvrgC.InitRowCol = [1  1];


MotCurrOffsHiAvrgD = DataDict.PIM;
MotCurrOffsHiAvrgD.LongName = 'Motor Current Offset Hi Average D';
MotCurrOffsHiAvrgD.Description = 'Motor Current Offset Hi Average D';
MotCurrOffsHiAvrgD.DocUnits = 'Volt';
MotCurrOffsHiAvrgD.EngDT = dt.float32;
MotCurrOffsHiAvrgD.EngMin = 0;
MotCurrOffsHiAvrgD.EngMax = 5;
MotCurrOffsHiAvrgD.InitRowCol = [1  1];


MotCurrOffsHiAvrgE = DataDict.PIM;
MotCurrOffsHiAvrgE.LongName = 'Motor Current Offset Hi Average E';
MotCurrOffsHiAvrgE.Description = 'Motor Current Offset Hi Average E';
MotCurrOffsHiAvrgE.DocUnits = 'Volt';
MotCurrOffsHiAvrgE.EngDT = dt.float32;
MotCurrOffsHiAvrgE.EngMin = 0;
MotCurrOffsHiAvrgE.EngMax = 5;
MotCurrOffsHiAvrgE.InitRowCol = [1  1];


MotCurrOffsHiAvrgF = DataDict.PIM;
MotCurrOffsHiAvrgF.LongName = 'Motor Current Offset Hi Average F';
MotCurrOffsHiAvrgF.Description = 'Motor Current Offset Hi Average F';
MotCurrOffsHiAvrgF.DocUnits = 'Volt';
MotCurrOffsHiAvrgF.EngDT = dt.float32;
MotCurrOffsHiAvrgF.EngMin = 0;
MotCurrOffsHiAvrgF.EngMax = 5;
MotCurrOffsHiAvrgF.InitRowCol = [1  1];


MotCurrOffsLoAvrgA = DataDict.PIM;
MotCurrOffsLoAvrgA.LongName = 'Motor Current Offset Low Average A';
MotCurrOffsLoAvrgA.Description = 'Motor Current Offset Low Average A';
MotCurrOffsLoAvrgA.DocUnits = 'Volt';
MotCurrOffsLoAvrgA.EngDT = dt.float32;
MotCurrOffsLoAvrgA.EngMin = 0;
MotCurrOffsLoAvrgA.EngMax = 5;
MotCurrOffsLoAvrgA.InitRowCol = [1  1];


MotCurrOffsLoAvrgB = DataDict.PIM;
MotCurrOffsLoAvrgB.LongName = 'Motor Current Offset Low Average B';
MotCurrOffsLoAvrgB.Description = 'Motor Current Offset Low Average B';
MotCurrOffsLoAvrgB.DocUnits = 'Volt';
MotCurrOffsLoAvrgB.EngDT = dt.float32;
MotCurrOffsLoAvrgB.EngMin = 0;
MotCurrOffsLoAvrgB.EngMax = 5;
MotCurrOffsLoAvrgB.InitRowCol = [1  1];


MotCurrOffsLoAvrgC = DataDict.PIM;
MotCurrOffsLoAvrgC.LongName = 'Motor Current Offset Low Average C';
MotCurrOffsLoAvrgC.Description = 'Motor Current Offset Low Average C';
MotCurrOffsLoAvrgC.DocUnits = 'Volt';
MotCurrOffsLoAvrgC.EngDT = dt.float32;
MotCurrOffsLoAvrgC.EngMin = 0;
MotCurrOffsLoAvrgC.EngMax = 5;
MotCurrOffsLoAvrgC.InitRowCol = [1  1];


MotCurrOffsLoAvrgD = DataDict.PIM;
MotCurrOffsLoAvrgD.LongName = 'Motor Current Offset Low Average D';
MotCurrOffsLoAvrgD.Description = 'Motor Current Offset Low Average D';
MotCurrOffsLoAvrgD.DocUnits = 'Volt';
MotCurrOffsLoAvrgD.EngDT = dt.float32;
MotCurrOffsLoAvrgD.EngMin = 0;
MotCurrOffsLoAvrgD.EngMax = 5;
MotCurrOffsLoAvrgD.InitRowCol = [1  1];


MotCurrOffsLoAvrgE = DataDict.PIM;
MotCurrOffsLoAvrgE.LongName = 'Motor Current Offset Low Average E';
MotCurrOffsLoAvrgE.Description = 'Motor Current Offset Low Average E';
MotCurrOffsLoAvrgE.DocUnits = 'Volt';
MotCurrOffsLoAvrgE.EngDT = dt.float32;
MotCurrOffsLoAvrgE.EngMin = 0;
MotCurrOffsLoAvrgE.EngMax = 5;
MotCurrOffsLoAvrgE.InitRowCol = [1  1];


MotCurrOffsLoAvrgF = DataDict.PIM;
MotCurrOffsLoAvrgF.LongName = 'Motor Current Offset Low Average F';
MotCurrOffsLoAvrgF.Description = 'Motor Current Offset Low Average F';
MotCurrOffsLoAvrgF.DocUnits = 'Volt';
MotCurrOffsLoAvrgF.EngDT = dt.float32;
MotCurrOffsLoAvrgF.EngMin = 0;
MotCurrOffsLoAvrgF.EngMax = 5;
MotCurrOffsLoAvrgF.InitRowCol = [1  1];


MotCurrOffsZeroAvrgA = DataDict.PIM;
MotCurrOffsZeroAvrgA.LongName = 'Motor Current Offset Zero Average A';
MotCurrOffsZeroAvrgA.Description = [...
  'Motor Current Offset Zero Average A'];
MotCurrOffsZeroAvrgA.DocUnits = 'Volt';
MotCurrOffsZeroAvrgA.EngDT = dt.float32;
MotCurrOffsZeroAvrgA.EngMin = 0;
MotCurrOffsZeroAvrgA.EngMax = 5;
MotCurrOffsZeroAvrgA.InitRowCol = [1  1];


MotCurrOffsZeroAvrgB = DataDict.PIM;
MotCurrOffsZeroAvrgB.LongName = 'Motor Current Offset Zero Average B';
MotCurrOffsZeroAvrgB.Description = [...
  'Motor Current Offset Zero Average B'];
MotCurrOffsZeroAvrgB.DocUnits = 'Volt';
MotCurrOffsZeroAvrgB.EngDT = dt.float32;
MotCurrOffsZeroAvrgB.EngMin = 0;
MotCurrOffsZeroAvrgB.EngMax = 5;
MotCurrOffsZeroAvrgB.InitRowCol = [1  1];


MotCurrOffsZeroAvrgC = DataDict.PIM;
MotCurrOffsZeroAvrgC.LongName = 'Motor Current Offset Zero Average C';
MotCurrOffsZeroAvrgC.Description = [...
  'Motor Current Offset Zero Average C'];
MotCurrOffsZeroAvrgC.DocUnits = 'Volt';
MotCurrOffsZeroAvrgC.EngDT = dt.float32;
MotCurrOffsZeroAvrgC.EngMin = 0;
MotCurrOffsZeroAvrgC.EngMax = 5;
MotCurrOffsZeroAvrgC.InitRowCol = [1  1];


MotCurrOffsZeroAvrgD = DataDict.PIM;
MotCurrOffsZeroAvrgD.LongName = 'Motor Current Offset Zero Average D';
MotCurrOffsZeroAvrgD.Description = [...
  'Motor Current Offset Zero Average D'];
MotCurrOffsZeroAvrgD.DocUnits = 'Volt';
MotCurrOffsZeroAvrgD.EngDT = dt.float32;
MotCurrOffsZeroAvrgD.EngMin = 0;
MotCurrOffsZeroAvrgD.EngMax = 5;
MotCurrOffsZeroAvrgD.InitRowCol = [1  1];


MotCurrOffsZeroAvrgE = DataDict.PIM;
MotCurrOffsZeroAvrgE.LongName = 'Motor Current Offset Zero Average E';
MotCurrOffsZeroAvrgE.Description = [...
  'Motor Current Offset Zero Average E'];
MotCurrOffsZeroAvrgE.DocUnits = 'Volt';
MotCurrOffsZeroAvrgE.EngDT = dt.float32;
MotCurrOffsZeroAvrgE.EngMin = 0;
MotCurrOffsZeroAvrgE.EngMax = 5;
MotCurrOffsZeroAvrgE.InitRowCol = [1  1];


MotCurrOffsZeroAvrgF = DataDict.PIM;
MotCurrOffsZeroAvrgF.LongName = 'Motor Current Offset Zero Average F';
MotCurrOffsZeroAvrgF.Description = [...
  'Motor Current Offset Zero Average F'];
MotCurrOffsZeroAvrgF.DocUnits = 'Volt';
MotCurrOffsZeroAvrgF.EngDT = dt.float32;
MotCurrOffsZeroAvrgF.EngMin = 0;
MotCurrOffsZeroAvrgF.EngMax = 5;
MotCurrOffsZeroAvrgF.InitRowCol = [1  1];


MotCurrRollgCnt1Prev = DataDict.PIM;
MotCurrRollgCnt1Prev.LongName = 'Current Measurement Motor Current Rolling Counter 1 Prev';
MotCurrRollgCnt1Prev.Description = [...
  'Current Measurement Motor Current Rolling Counter 1 Prev'];
MotCurrRollgCnt1Prev.DocUnits = 'Cnt';
MotCurrRollgCnt1Prev.EngDT = dt.u08;
MotCurrRollgCnt1Prev.EngMin = 0;
MotCurrRollgCnt1Prev.EngMax = 255;
MotCurrRollgCnt1Prev.InitRowCol = [1  1];


MotCurrRollgCnt2Prev = DataDict.PIM;
MotCurrRollgCnt2Prev.LongName = 'Current Measurement Motor Current Rolling Counter 2 Prev';
MotCurrRollgCnt2Prev.Description = [...
  'Current Measurement Motor Current Rolling Counter 2 Prev'];
MotCurrRollgCnt2Prev.DocUnits = 'Cnt';
MotCurrRollgCnt2Prev.EngDT = dt.u08;
MotCurrRollgCnt2Prev.EngMin = 0;
MotCurrRollgCnt2Prev.EngMax = 255;
MotCurrRollgCnt2Prev.InitRowCol = [1  1];


MotCurrSumAPrev = DataDict.PIM;
MotCurrSumAPrev.LongName = 'Current Measurement Motor Current Phase a Summation Previous';
MotCurrSumAPrev.Description = [...
  'MotCurrSumAPrev is a summation of N number of MotCtrlMotCurrAdcVly mea' ...
  'surements.  In use it is expected that Rte_Pim_MotCurrSumPrev initiali' ...
  'zes to 0 and then gets the value of MotCtrlMotCurrAdcVly added to it o' ...
  'ver a number of iterations defined by the calibration CurrMeasEolOffsN' ...
  'rOfSample'];
MotCurrSumAPrev.DocUnits = 'Volt';
MotCurrSumAPrev.EngDT = dt.float32;
MotCurrSumAPrev.EngMin = 0;
MotCurrSumAPrev.EngMax = 50000;
MotCurrSumAPrev.InitRowCol = [1  1];


MotCurrSumBPrev = DataDict.PIM;
MotCurrSumBPrev.LongName = 'Current Measurement Motor Current Phase B Summation Previous';
MotCurrSumBPrev.Description = [...
  'Current Measurement Motor Current Phase b Summation Previous'];
MotCurrSumBPrev.DocUnits = 'Volt';
MotCurrSumBPrev.EngDT = dt.float32;
MotCurrSumBPrev.EngMin = 0;
MotCurrSumBPrev.EngMax = 50000;
MotCurrSumBPrev.InitRowCol = [1  1];


MotCurrSumCPrev = DataDict.PIM;
MotCurrSumCPrev.LongName = 'Current Measurement Motor Current Phase C Summation Previous';
MotCurrSumCPrev.Description = [...
  'Current Measurement Motor Current Phase c Summation Previous'];
MotCurrSumCPrev.DocUnits = 'Volt';
MotCurrSumCPrev.EngDT = dt.float32;
MotCurrSumCPrev.EngMin = 0;
MotCurrSumCPrev.EngMax = 50000;
MotCurrSumCPrev.InitRowCol = [1  1];


MotCurrSumDPrev = DataDict.PIM;
MotCurrSumDPrev.LongName = 'Current Measurement Motor Current Phase D Summation Previous';
MotCurrSumDPrev.Description = [...
  'Current Measurement Motor Current Phase d Summation Previous'];
MotCurrSumDPrev.DocUnits = 'Volt';
MotCurrSumDPrev.EngDT = dt.float32;
MotCurrSumDPrev.EngMin = 0;
MotCurrSumDPrev.EngMax = 50000;
MotCurrSumDPrev.InitRowCol = [1  1];


MotCurrSumEPrev = DataDict.PIM;
MotCurrSumEPrev.LongName = 'Current Measurement Motor Current Phase E Summation Previous';
MotCurrSumEPrev.Description = [...
  'Current Measurement Motor Current Phase e Summation Previous'];
MotCurrSumEPrev.DocUnits = 'Volt';
MotCurrSumEPrev.EngDT = dt.float32;
MotCurrSumEPrev.EngMin = 0;
MotCurrSumEPrev.EngMax = 50000;
MotCurrSumEPrev.InitRowCol = [1  1];


MotCurrSumFPrev = DataDict.PIM;
MotCurrSumFPrev.LongName = 'Current Measurement Motor Current Phase F Summation Previous';
MotCurrSumFPrev.Description = [...
  'Current Measurement Motor Current Phase f Summation Previous'];
MotCurrSumFPrev.DocUnits = 'Volt';
MotCurrSumFPrev.EngDT = dt.float32;
MotCurrSumFPrev.EngMin = 0;
MotCurrSumFPrev.EngMax = 50000;
MotCurrSumFPrev.InitRowCol = [1  1];


Ntc5DErrCnt2MilliSecPrev = DataDict.PIM;
Ntc5DErrCnt2MilliSecPrev.LongName = 'Motor Control Ntc 5D Error Counter 2ms Previous';
Ntc5DErrCnt2MilliSecPrev.Description = [...
  'Motor Control Ntc 5D Error Counter 2ms Previous'];
Ntc5DErrCnt2MilliSecPrev.DocUnits = 'Cnt';
Ntc5DErrCnt2MilliSecPrev.EngDT = dt.u16;
Ntc5DErrCnt2MilliSecPrev.EngMin = 0;
Ntc5DErrCnt2MilliSecPrev.EngMax = 65535;
Ntc5DErrCnt2MilliSecPrev.InitRowCol = [1  1];


Ntc6DErrCnt2MilliSecPrev = DataDict.PIM;
Ntc6DErrCnt2MilliSecPrev.LongName = 'Motor Control Ntc 6D Error Counter 2ms Previous';
Ntc6DErrCnt2MilliSecPrev.Description = [...
  'Motor Control Ntc 6D Error Counter 2ms Previous'];
Ntc6DErrCnt2MilliSecPrev.DocUnits = 'Cnt';
Ntc6DErrCnt2MilliSecPrev.EngDT = dt.u16;
Ntc6DErrCnt2MilliSecPrev.EngMin = 0;
Ntc6DErrCnt2MilliSecPrev.EngMax = 65535;
Ntc6DErrCnt2MilliSecPrev.InitRowCol = [1  1];


OffsEolAvrgCntrPrev = DataDict.PIM;
OffsEolAvrgCntrPrev.LongName = 'Current Measurement Eol Average Counter Previous';
OffsEolAvrgCntrPrev.Description = [...
  'Current Measurement Eol Average Counter Previous'];
OffsEolAvrgCntrPrev.DocUnits = 'Cnt';
OffsEolAvrgCntrPrev.EngDT = dt.u16;
OffsEolAvrgCntrPrev.EngMin = 0;
OffsEolAvrgCntrPrev.EngMax = 10000;
OffsEolAvrgCntrPrev.InitRowCol = [1  1];


PhaOnTiErrCntPrev = DataDict.PIM;
PhaOnTiErrCntPrev.LongName = 'Current Measurement Phase on Time Error Count';
PhaOnTiErrCntPrev.Description = [...
  'Current Measurement Phase On Time Error Count'];
PhaOnTiErrCntPrev.DocUnits = 'Cnt';
PhaOnTiErrCntPrev.EngDT = dt.u16;
PhaOnTiErrCntPrev.EngMin = 0;
PhaOnTiErrCntPrev.EngMax = 65535;
PhaOnTiErrCntPrev.InitRowCol = [1  1];


TmpMotCurrAdcVlySum1Prev = DataDict.PIM;
TmpMotCurrAdcVlySum1Prev.LongName = 'Temporary Motor Current Phase 1 Adc Valley Summation Previous';
TmpMotCurrAdcVlySum1Prev.Description = [...
  'Temporary Motor Current Phase 1 Adc Valley Summation Previous'];
TmpMotCurrAdcVlySum1Prev.DocUnits = 'Volt';
TmpMotCurrAdcVlySum1Prev.EngDT = dt.float32;
TmpMotCurrAdcVlySum1Prev.EngMin = 0;
TmpMotCurrAdcVlySum1Prev.EngMax = 5000;
TmpMotCurrAdcVlySum1Prev.InitRowCol = [1  1];


TmpMotCurrAdcVlySum2Prev = DataDict.PIM;
TmpMotCurrAdcVlySum2Prev.LongName = 'Temporary Motor Current Phase 2 Adc Valley Summation Previous';
TmpMotCurrAdcVlySum2Prev.Description = [...
  'Temporary Motor Current Phase 2 Adc Valley Summation Previous'];
TmpMotCurrAdcVlySum2Prev.DocUnits = 'Volt';
TmpMotCurrAdcVlySum2Prev.EngDT = dt.float32;
TmpMotCurrAdcVlySum2Prev.EngMin = 0;
TmpMotCurrAdcVlySum2Prev.EngMax = 5000;
TmpMotCurrAdcVlySum2Prev.InitRowCol = [1  1];


WrmIninTestCmplPrev = DataDict.PIM;
WrmIninTestCmplPrev.LongName = 'Current Measurement Warm Init Test Complete Previous';
WrmIninTestCmplPrev.Description = [...
  'Current Measurement Warm Init Test Complete Previous'];
WrmIninTestCmplPrev.DocUnits = 'Cnt';
WrmIninTestCmplPrev.EngDT = dt.lgc;
WrmIninTestCmplPrev.EngMin = 0;
WrmIninTestCmplPrev.EngMax = 1;
WrmIninTestCmplPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = '2 times pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


DEGREES30_MOTRAD_F32 = DataDict.Constant;
DEGREES30_MOTRAD_F32.LongName = '30 Degree';
DEGREES30_MOTRAD_F32.Description = '30 Degree in Radian';
DEGREES30_MOTRAD_F32.DocUnits = 'MotRad';
DEGREES30_MOTRAD_F32.EngDT = dt.float32;
DEGREES30_MOTRAD_F32.EngVal = 0.5236;
DEGREES30_MOTRAD_F32.Define = 'Local';


DIFOFFSRNGCHKMAX_VOLT_F32 = DataDict.Constant;
DIFOFFSRNGCHKMAX_VOLT_F32.LongName = 'Offset Range Check Maximum';
DIFOFFSRNGCHKMAX_VOLT_F32.Description = 'Offset Range Check Maximum';
DIFOFFSRNGCHKMAX_VOLT_F32.DocUnits = 'Volt';
DIFOFFSRNGCHKMAX_VOLT_F32.EngDT = dt.float32;
DIFOFFSRNGCHKMAX_VOLT_F32.EngVal = 1;
DIFOFFSRNGCHKMAX_VOLT_F32.Define = 'Local';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMax = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.LongName = 'StartUp State - Current Measurement WarmInit Initialization Start';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Current Measurement WarmInit Initialization '];
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngVal = 100;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Define = 'Global';


FLTINJ_CURRMEAS_MOTCURRCORRDA = DataDict.Constant;
FLTINJ_CURRMEAS_MOTCURRCORRDA.LongName = 'Fault Injection Current Measure Motor Current a Corrected';
FLTINJ_CURRMEAS_MOTCURRCORRDA.Description = [...
  'Output signal of Current Measurement function'];
FLTINJ_CURRMEAS_MOTCURRCORRDA.DocUnits = 'Uls';
FLTINJ_CURRMEAS_MOTCURRCORRDA.EngDT = dt.u16;
FLTINJ_CURRMEAS_MOTCURRCORRDA.EngVal = 29;
FLTINJ_CURRMEAS_MOTCURRCORRDA.Define = 'Global';


FLTINJ_CURRMEAS_MOTCURRCORRDD = DataDict.Constant;
FLTINJ_CURRMEAS_MOTCURRCORRDD.LongName = 'Fault Injection Current Measure Motor Current D Corrected';
FLTINJ_CURRMEAS_MOTCURRCORRDD.Description = [...
  'Output signal of Current Measurement function'];
FLTINJ_CURRMEAS_MOTCURRCORRDD.DocUnits = 'Uls';
FLTINJ_CURRMEAS_MOTCURRCORRDD.EngDT = dt.u16;
FLTINJ_CURRMEAS_MOTCURRCORRDD.EngVal = 36;
FLTINJ_CURRMEAS_MOTCURRCORRDD.Define = 'Global';


FLTINJ_CURRMEAS_TESTOK = DataDict.Constant;
FLTINJ_CURRMEAS_TESTOK.LongName = 'Fault Injection Current Measure Test OK';
FLTINJ_CURRMEAS_TESTOK.Description = [...
  'Fault Injection Current Measure Test OK Constant'];
FLTINJ_CURRMEAS_TESTOK.DocUnits = 'Uls';
FLTINJ_CURRMEAS_TESTOK.EngDT = dt.u16;
FLTINJ_CURRMEAS_TESTOK.EngVal = 30;
FLTINJ_CURRMEAS_TESTOK.Define = 'Global';


MAXCURRCORRD_AMPR_F32 = DataDict.Constant;
MAXCURRCORRD_AMPR_F32.LongName = 'Max Current Corrected';
MAXCURRCORRD_AMPR_F32.Description = 'Max Current Corrected';
MAXCURRCORRD_AMPR_F32.DocUnits = 'Ampr';
MAXCURRCORRD_AMPR_F32.EngDT = dt.float32;
MAXCURRCORRD_AMPR_F32.EngVal = 200;
MAXCURRCORRD_AMPR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
EolGainOutOfRng = DataDict.NTC;
EolGainOutOfRng.NtcNr = NtcNr1.NTCNR_0X1ED;
EolGainOutOfRng.NtcTyp = 'None';
EolGainOutOfRng.LongName = 'Current/I Measurement EOL Gain Out Of Range';
EolGainOutOfRng.Description = 'Current/I Measurement EOL Gain Out Of Range';
EolGainOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
EolGainOutOfRng.NtcStInfo.Bit0Descr = 'Phase A, B, C EOL Calculated Gains are Out Of Range';
EolGainOutOfRng.NtcStInfo.Bit1Descr = 'Phase D, E, F EOL Calculated Gains are Out Of Range';
EolGainOutOfRng.NtcStInfo.Bit2Descr = 'VehSpd, VehSpdVld, condition not met';
EolGainOutOfRng.NtcStInfo.Bit3Descr = 'MotVelMrf condition not met';
EolGainOutOfRng.NtcStInfo.Bit4Descr = 'DiagcStsIvtr1Inactv and DiagcStsIvtr1Inactv both TRUE';
EolGainOutOfRng.NtcStInfo.Bit5Descr = 'Unused';
EolGainOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
EolGainOutOfRng.NtcStInfo.Bit7Descr = 'Unused';


EolOffsOutOfRng = DataDict.NTC;
EolOffsOutOfRng.NtcNr = NtcNr1.NTCNR_0X1EC;
EolOffsOutOfRng.NtcTyp = 'None';
EolOffsOutOfRng.LongName = 'Current/I Measurement EOL Offset Out Of Range';
EolOffsOutOfRng.Description = 'Current/I Measurement EOL Offset Out Of Range';
EolOffsOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
EolOffsOutOfRng.NtcStInfo.Bit0Descr = 'Phase A, B, C EOL Calculated Offsets are Out Of Range';
EolOffsOutOfRng.NtcStInfo.Bit1Descr = 'Phase D, E, F EOL Calculated Offsets are Out Of Range';
EolOffsOutOfRng.NtcStInfo.Bit2Descr = 'VehSpd, VehSpdVld, condition not met';
EolOffsOutOfRng.NtcStInfo.Bit3Descr = 'MotVelMrf condition not met';
EolOffsOutOfRng.NtcStInfo.Bit4Descr = 'DiagcStsIvtr1Inactv and DiagcStsIvtr1Inactv both TRUE';
EolOffsOutOfRng.NtcStInfo.Bit5Descr = 'Unused';
EolOffsOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
EolOffsOutOfRng.NtcStInfo.Bit7Descr = 'Unused';


PhaABCMeasdOutOfRng = DataDict.NTC;
PhaABCMeasdOutOfRng.NtcNr = NtcNr1.NTCNR_0X05D;
PhaABCMeasdOutOfRng.NtcTyp = 'Deb';
PhaABCMeasdOutOfRng.LongName = 'Current/I Measurement Phase A B C Measured Out Of Range';
PhaABCMeasdOutOfRng.Description = 'Current/I Measurement Phase A B C Measured Out Of Range';
PhaABCMeasdOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
PhaABCMeasdOutOfRng.NtcStInfo.Bit0Descr = 'Phase A B C Measured Out Of Range during start-up test';
PhaABCMeasdOutOfRng.NtcStInfo.Bit1Descr = 'Phase A B C Measured Out Of Range at WARMINIT';
PhaABCMeasdOutOfRng.NtcStInfo.Bit2Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit3Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit4Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit5Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit7Descr = 'Unused';


PhaDEFMeasOutOfRng = DataDict.NTC;
PhaDEFMeasOutOfRng.NtcNr = NtcNr1.NTCNR_0X06D;
PhaDEFMeasOutOfRng.NtcTyp = 'Deb';
PhaDEFMeasOutOfRng.LongName = 'Current/I Measurement Phase D E F Measured Out Of Range';
PhaDEFMeasOutOfRng.Description = 'Current/I Measurement Phase D E F Measured Out Of Range';
PhaDEFMeasOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
PhaDEFMeasOutOfRng.NtcStInfo.Bit0Descr = 'Phase D, E, F Measured Out Of Range during start-up test';
PhaDEFMeasOutOfRng.NtcStInfo.Bit1Descr = 'Phase D, E, F Measured Out Of Range at WARMINIT';
PhaDEFMeasOutOfRng.NtcStInfo.Bit2Descr = 'Unused';
PhaDEFMeasOutOfRng.NtcStInfo.Bit3Descr = 'Unused';
PhaDEFMeasOutOfRng.NtcStInfo.Bit4Descr = 'Unused';
PhaDEFMeasOutOfRng.NtcStInfo.Bit5Descr = 'Unused';
PhaDEFMeasOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
PhaDEFMeasOutOfRng.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
