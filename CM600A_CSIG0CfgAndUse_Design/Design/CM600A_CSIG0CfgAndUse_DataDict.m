%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 1-Jul-2015 11:15:46       %
%                                  Created with tool release: 2.6.0      %
%%-----------------------------------------------------------------------%

CM600A = DataDict.FDD;
CM600A.Version = '1.0.X';
CM600A.LongName = 'CSIG0 Configuration and Use';
CM600A.ShoName  = 'CSIG0CfgAndUse';
CM600A.DesignASIL = 'D';
CM600A.Description = [...
  'Control module for Autosar SPI driver. Contains the SPI driver configu' ...
  'rations for CSIG0 used for communicating with PowerSuppy/TemporalMonitor IC'];
CM600A.Ntc = ...
	{};
CM600A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------

Call_Spi_AsyncTransmit = DataDict.SrvRunnable;
Call_Spi_AsyncTransmit.Context = 'Non-Rte';
Call_Spi_AsyncTransmit.Return = DataDict.CSReturn;
Call_Spi_AsyncTransmit.Return.Type = 'Standard';
Call_Spi_AsyncTransmit.Return.Min = 0;
Call_Spi_AsyncTransmit.Return.Max = 1;
Call_Spi_AsyncTransmit.Return.TestTolerance = 0;
Call_Spi_AsyncTransmit.Arguments(1) = DataDict.CSArguments;
Call_Spi_AsyncTransmit.Arguments(1).Name = 'Sequence';
Call_Spi_AsyncTransmit.Arguments(1).EngMin = 0;
Call_Spi_AsyncTransmit.Arguments(1).EngMax = 255;
Call_Spi_AsyncTransmit.Arguments(1).EngDT = dt.u08;
Call_Spi_AsyncTransmit.Arguments(1).Units = 'Cnt';
Call_Spi_AsyncTransmit.Arguments(1).Direction = 'In';

Spi_GetSequenceResult = DataDict.SrvRunnable;
Spi_GetSequenceResult.Context = 'Non-Rte';
Spi_GetSequenceResult.Return = DataDict.CSReturn;
Spi_GetSequenceResult.Return.Type = 'Spi_SeqResultType';
Spi_GetSequenceResult.Return.Min = 0;
Spi_GetSequenceResult.Return.Max = 3;
Spi_GetSequenceResult.Return.TestTolerance = 0;
Spi_GetSequenceResult.Arguments(1) = DataDict.CSArguments;
Spi_GetSequenceResult.Arguments(1).Name = 'Sequence';
Spi_GetSequenceResult.Arguments(1).EngMin = 0;
Spi_GetSequenceResult.Arguments(1).EngMax = 255;
Spi_GetSequenceResult.Arguments(1).EngDT = dt.u08;
Spi_GetSequenceResult.Arguments(1).Units = 'Cnt';
Spi_GetSequenceResult.Arguments(1).Direction = 'In';

Spi_ReadIB = DataDict.SrvRunnable;
Spi_ReadIB.Context = 'Non-Rte';
Spi_ReadIB.Return = DataDict.CSReturn;
Spi_ReadIB.Return.Type = 'Standard';
Spi_ReadIB.Return.Min = 0;
Spi_ReadIB.Return.Max = 1;
Spi_ReadIB.Return.TestTolerance = 0;
Spi_ReadIB.Arguments(1) = DataDict.CSArguments;
Spi_ReadIB.Arguments(1).Name = 'Channel';
Spi_ReadIB.Arguments(1).EngMin = 0;
Spi_ReadIB.Arguments(1).EngMax = 255;
Spi_ReadIB.Arguments(1).EngDT = dt.u08;
Spi_ReadIB.Arguments(1).Units = 'Cnt';
Spi_ReadIB.Arguments(1).Direction = 'In';
Spi_ReadIB.Arguments(2) = DataDict.CSArguments;
Spi_ReadIB.Arguments(2).Name = 'DataBufferPointer';
Spi_ReadIB.Arguments(2).EngMin = 0;
Spi_ReadIB.Arguments(2).EngMax = 65535;
Spi_ReadIB.Arguments(2).EngDT = dt.u16;
Spi_ReadIB.Arguments(2).Units = 'Cnt';
Spi_ReadIB.Arguments(2).Direction = 'Out';

Spi_WriteIB = DataDict.SrvRunnable;
Spi_WriteIB.Context = 'Non-Rte';
Spi_WriteIB.Return = DataDict.CSReturn;
Spi_WriteIB.Return.Type = 'Standard';
Spi_WriteIB.Return.Min = 0;
Spi_WriteIB.Return.Max = 1;
Spi_WriteIB.Return.TestTolerance = 0;
Spi_WriteIB.Arguments(1) = DataDict.CSArguments;
Spi_WriteIB.Arguments(1).Name = 'Channel';
Spi_WriteIB.Arguments(1).EngMin = 0;
Spi_WriteIB.Arguments(1).EngMax = 255;
Spi_WriteIB.Arguments(1).EngDT = dt.u08;
Spi_WriteIB.Arguments(1).Units = 'Cnt';
Spi_WriteIB.Arguments(1).Direction = 'In';
Spi_WriteIB.Arguments(2) = DataDict.CSArguments;
Spi_WriteIB.Arguments(2).Name = 'DataBufferPtr';
Spi_WriteIB.Arguments(2).EngMin = 0;
Spi_WriteIB.Arguments(2).EngMax = 65535;
Spi_WriteIB.Arguments(2).EngDT = dt.u16;
Spi_WriteIB.Arguments(2).Units = 'Cnt';
Spi_WriteIB.Arguments(2).Direction = 'InPtr';


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
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

SpiConf_SpiChannel_TmplMonrCh1 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh1.LongName = 'Temporal Monitor Channel 1';
SpiConf_SpiChannel_TmplMonrCh1.Description = 'Temporal Monitor Channel 1. Can be used for any register';
SpiConf_SpiChannel_TmplMonrCh1.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh1.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh1.EngVal = 52;
SpiConf_SpiChannel_TmplMonrCh1.Header = '';
SpiConf_SpiChannel_TmplMonrCh1.Define = 'Global';

SpiConf_SpiChannel_TmplMonrCh2 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh2.LongName = 'Temporal Monitor Channel 2';
SpiConf_SpiChannel_TmplMonrCh2.Description = 'Temporal Monitor Channel 2. Can be used for any register';
SpiConf_SpiChannel_TmplMonrCh2.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh2.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh2.EngVal = 53;
SpiConf_SpiChannel_TmplMonrCh2.Header = '';
SpiConf_SpiChannel_TmplMonrCh2.Define = 'Global';

SpiConf_SpiChannel_TmplMonrCh3 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh3.LongName = 'Temporal Monitor Channel 3';
SpiConf_SpiChannel_TmplMonrCh3.Description = 'Temporal Monitor Channel 3. Can be used for any register';
SpiConf_SpiChannel_TmplMonrCh3.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh3.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh3.EngVal = 54;
SpiConf_SpiChannel_TmplMonrCh3.Header = '';
SpiConf_SpiChannel_TmplMonrCh3.Define = 'Global';

SpiConf_SpiChannel_TmplMonrCh4 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh4.LongName = 'Temporal Monitor Channel 4';
SpiConf_SpiChannel_TmplMonrCh4.Description = 'Temporal Monitor Channel 4. Can be used for any register';
SpiConf_SpiChannel_TmplMonrCh4.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh4.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh4.EngVal = 55;
SpiConf_SpiChannel_TmplMonrCh4.Header = '';
SpiConf_SpiChannel_TmplMonrCh4.Define = 'Global';

SpiConf_SpiChannel_TmplMonrCh5 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh5.LongName = 'Temporal Monitor Channel 5';
SpiConf_SpiChannel_TmplMonrCh5.Description = 'Temporal Monitor Channel 5. Can be used for any register';
SpiConf_SpiChannel_TmplMonrCh5.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh5.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh5.EngVal = 56;
SpiConf_SpiChannel_TmplMonrCh5.Header = '';
SpiConf_SpiChannel_TmplMonrCh5.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh1 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh1.LongName = 'Power Supply Diagnostics Channel 1';
SpiConf_SpiChannel_PwrSplyCh1.Description = 'Power Supply Diagnostics Channel 1. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh1.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh1.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh1.EngVal = 57;
SpiConf_SpiChannel_PwrSplyCh1.Header = '';
SpiConf_SpiChannel_PwrSplyCh1.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh2 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh2.LongName = 'Power Supply Diagnostics Channel 2';
SpiConf_SpiChannel_PwrSplyCh2.Description = 'Power Supply Diagnostics Channel 2. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh2.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh2.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh2.EngVal = 58;
SpiConf_SpiChannel_PwrSplyCh2.Header = '';
SpiConf_SpiChannel_PwrSplyCh2.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh3 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh3.LongName = 'Power Supply Diagnostics Channel 3';
SpiConf_SpiChannel_PwrSplyCh3.Description = 'Power Supply Diagnostics Channel 3. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh3.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh3.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh3.EngVal = 59;
SpiConf_SpiChannel_PwrSplyCh3.Header = '';
SpiConf_SpiChannel_PwrSplyCh3.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh4 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh4.LongName = 'Power Supply Diagnostics Channel 4';
SpiConf_SpiChannel_PwrSplyCh4.Description = 'Power Supply Diagnostics Channel 4. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh4.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh4.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh4.EngVal = 60;
SpiConf_SpiChannel_PwrSplyCh4.Header = '';
SpiConf_SpiChannel_PwrSplyCh4.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh5 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh5.LongName = 'Power Supply Diagnostics Channel 5';
SpiConf_SpiChannel_PwrSplyCh5.Description = 'Power Supply Diagnostics Channel 5. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh5.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh5.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh5.EngVal = 61;
SpiConf_SpiChannel_PwrSplyCh5.Header = '';
SpiConf_SpiChannel_PwrSplyCh5.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh6 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh6.LongName = 'Power Supply Diagnostics Channel 6';
SpiConf_SpiChannel_PwrSplyCh6.Description = 'Power Supply Diagnostics Channel 6. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh6.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh6.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh6.EngVal = 62;
SpiConf_SpiChannel_PwrSplyCh6.Header = '';
SpiConf_SpiChannel_PwrSplyCh6.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh7 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh7.LongName = 'Power Supply Diagnostics Channel 7';
SpiConf_SpiChannel_PwrSplyCh7.Description = 'Power Supply Diagnostics Channel 7. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh7.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh7.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh7.EngVal = 63;
SpiConf_SpiChannel_PwrSplyCh7.Header = '';
SpiConf_SpiChannel_PwrSplyCh7.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh8 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh8.LongName = 'Power Supply Diagnostics Channel 8';
SpiConf_SpiChannel_PwrSplyCh8.Description = 'Power Supply Diagnostics Channel 8. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh8.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh8.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh8.EngVal = 64;
SpiConf_SpiChannel_PwrSplyCh8.Header = '';
SpiConf_SpiChannel_PwrSplyCh8.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh9 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh9.LongName = 'Power Supply Diagnostics Channel 9';
SpiConf_SpiChannel_PwrSplyCh9.Description = 'Power Supply Diagnostics Channel 9. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh9.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh9.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh9.EngVal = 65;
SpiConf_SpiChannel_PwrSplyCh9.Header = '';
SpiConf_SpiChannel_PwrSplyCh9.Define = 'Global';

SpiConf_SpiChannel_PwrSplyCh10 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh10.LongName = 'Power Supply Diagnostics Channel 10';
SpiConf_SpiChannel_PwrSplyCh10.Description = 'Power Supply Diagnostics Channel 10. Can be used for any register';
SpiConf_SpiChannel_PwrSplyCh10.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh10.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh10.EngVal = 66;
SpiConf_SpiChannel_PwrSplyCh10.Header = '';
SpiConf_SpiChannel_PwrSplyCh10.Define = 'Global';



SpiConf_SpiSequence_TmplMonrSeq1 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq1.LongName = 'Temporal Monitor Sequence 1';
SpiConf_SpiSequence_TmplMonrSeq1.Description = 'Temporal Monitor Sequence 1. Tied with Temporal Monitor Channel 1';
SpiConf_SpiSequence_TmplMonrSeq1.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq1.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq1.EngVal = 52;
SpiConf_SpiSequence_TmplMonrSeq1.Header = '';
SpiConf_SpiSequence_TmplMonrSeq1.Define = 'Global';

SpiConf_SpiSequence_TmplMonrSeq2 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq2.LongName = 'Temporal Monitor Sequence 2';
SpiConf_SpiSequence_TmplMonrSeq2.Description = 'Temporal Monitor Sequence 2. Tied with Temporal Monitor Channel 2';
SpiConf_SpiSequence_TmplMonrSeq2.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq2.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq2.EngVal = 53;
SpiConf_SpiSequence_TmplMonrSeq2.Header = '';
SpiConf_SpiSequence_TmplMonrSeq2.Define = 'Global';

SpiConf_SpiSequence_TmplMonrSeq3 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq3.LongName = 'Temporal Monitor Sequence 3';
SpiConf_SpiSequence_TmplMonrSeq3.Description = 'Temporal Monitor Sequence 3. Tied with Temporal Monitor Channel 3';
SpiConf_SpiSequence_TmplMonrSeq3.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq3.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq3.EngVal = 54;
SpiConf_SpiSequence_TmplMonrSeq3.Header = '';
SpiConf_SpiSequence_TmplMonrSeq3.Define = 'Global';

SpiConf_SpiSequence_TmplMonrSeq4 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq4.LongName = 'Temporal Monitor Sequence 4';
SpiConf_SpiSequence_TmplMonrSeq4.Description = 'Temporal Monitor Sequence 4. Tied with Temporal Monitor Channel 4';
SpiConf_SpiSequence_TmplMonrSeq4.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq4.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq4.EngVal = 55;
SpiConf_SpiSequence_TmplMonrSeq4.Header = '';
SpiConf_SpiSequence_TmplMonrSeq4.Define = 'Global';

SpiConf_SpiSequence_TmplMonrSeq5 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq5.LongName = 'Temporal Monitor Sequence 5';
SpiConf_SpiSequence_TmplMonrSeq5.Description = 'Temporal Monitor Sequence 5. Tied with Temporal Monitor Channel 5';
SpiConf_SpiSequence_TmplMonrSeq5.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq5.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq5.EngVal = 56;
SpiConf_SpiSequence_TmplMonrSeq5.Header = '';
SpiConf_SpiSequence_TmplMonrSeq5.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq1 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq1.LongName = 'Power Supply Sequence 1';
SpiConf_SpiSequence_PwrSplySeq1.Description = 'Power Supply Sequence 1. Tied with Power Supply Channel 1';
SpiConf_SpiSequence_PwrSplySeq1.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq1.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq1.EngVal = 57;
SpiConf_SpiSequence_PwrSplySeq1.Header = '';
SpiConf_SpiSequence_PwrSplySeq1.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq2 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq2.LongName = 'Power Supply Sequence 2';
SpiConf_SpiSequence_PwrSplySeq2.Description = 'Power Supply Sequence 2. Tied with Power Supply Channel 2';
SpiConf_SpiSequence_PwrSplySeq2.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq2.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq2.EngVal = 58;
SpiConf_SpiSequence_PwrSplySeq2.Header = '';
SpiConf_SpiSequence_PwrSplySeq2.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq3 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq3.LongName = 'Power Supply Sequence 3';
SpiConf_SpiSequence_PwrSplySeq3.Description = 'Power Supply Sequence 3. Tied with Power Supply Channel 3';
SpiConf_SpiSequence_PwrSplySeq3.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq3.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq3.EngVal = 59;
SpiConf_SpiSequence_PwrSplySeq3.Header = '';
SpiConf_SpiSequence_PwrSplySeq3.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq4 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq4.LongName = 'Power Supply Sequence 4';
SpiConf_SpiSequence_PwrSplySeq4.Description = 'Power Supply Sequence 4. Tied with Power Supply Channel 4';
SpiConf_SpiSequence_PwrSplySeq4.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq4.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq4.EngVal = 60;
SpiConf_SpiSequence_PwrSplySeq4.Header = '';
SpiConf_SpiSequence_PwrSplySeq4.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq5 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq5.LongName = 'Power Supply Sequence 5';
SpiConf_SpiSequence_PwrSplySeq5.Description = 'Power Supply Sequence 5. Tied with Power Supply Channel 5';
SpiConf_SpiSequence_PwrSplySeq5.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq5.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq5.EngVal = 61;
SpiConf_SpiSequence_PwrSplySeq5.Header = '';
SpiConf_SpiSequence_PwrSplySeq5.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq6 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq6.LongName = 'Power Supply Sequence 6';
SpiConf_SpiSequence_PwrSplySeq6.Description = 'Power Supply Sequence 6. Tied with Power Supply Channel 6';
SpiConf_SpiSequence_PwrSplySeq6.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq6.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq6.EngVal = 62;
SpiConf_SpiSequence_PwrSplySeq6.Header = '';
SpiConf_SpiSequence_PwrSplySeq6.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq7 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq7.LongName = 'Power Supply Sequence 7';
SpiConf_SpiSequence_PwrSplySeq7.Description = 'Power Supply Sequence 7. Tied with Power Supply Channel 7';
SpiConf_SpiSequence_PwrSplySeq7.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq7.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq7.EngVal = 63;
SpiConf_SpiSequence_PwrSplySeq7.Header = '';
SpiConf_SpiSequence_PwrSplySeq7.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq8 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq8.LongName = 'Power Supply Sequence 8';
SpiConf_SpiSequence_PwrSplySeq8.Description = 'Power Supply Sequence 8. Tied with Power Supply Channel 8';
SpiConf_SpiSequence_PwrSplySeq8.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq8.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq8.EngVal = 64;
SpiConf_SpiSequence_PwrSplySeq8.Header = '';
SpiConf_SpiSequence_PwrSplySeq8.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq9 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq9.LongName = 'Power Supply Sequence 9';
SpiConf_SpiSequence_PwrSplySeq9.Description = 'Power Supply Sequence 9. Tied with Power Supply Channel 9';
SpiConf_SpiSequence_PwrSplySeq9.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq9.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq9.EngVal = 65;
SpiConf_SpiSequence_PwrSplySeq9.Header = '';
SpiConf_SpiSequence_PwrSplySeq9.Define = 'Global';

SpiConf_SpiSequence_PwrSplySeq10 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq10.LongName = 'Power Supply Sequence 10';
SpiConf_SpiSequence_PwrSplySeq10.Description = 'Power Supply Sequence 10. Tied with Power Supply Channel 10';
SpiConf_SpiSequence_PwrSplySeq10.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq10.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq10.EngVal = 66;
SpiConf_SpiSequence_PwrSplySeq10.Header = '';
SpiConf_SpiSequence_PwrSplySeq10.Define = 'Global';

%end of Data Dictionary