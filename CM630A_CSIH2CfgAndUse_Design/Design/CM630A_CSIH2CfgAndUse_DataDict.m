%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Mar-2015 11:15:46       %
%                                  Created with tool release: 2.6.0      %
%%-----------------------------------------------------------------------%

CM630A = DataDict.FDD;
CM630A.Version = '1.0.X';
CM630A.LongName = 'CSIH2 Configuration and Use';
CM630A.ShoName  = 'CSIH2CfgAndUse';
CM630A.DesignASIL = 'D';
CM630A.Description = [...
  'Control module for Autosar SPI driver. Contains the SPI driver configu' ...
  'rations for CSIH2 used by Gate drive 0'];
CM630A.Ntc = ...
	{};
CM630A.Dependencies = ...
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
SpiConf_SpiChannel_GateDrv0Cfg0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg0Ch.LongName = 'Gate Drive 0 Config 0 Channel';
SpiConf_SpiChannel_GateDrv0Cfg0Ch.Description = 'Channel Id for Config 0 register';
SpiConf_SpiChannel_GateDrv0Cfg0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg0Ch.EngVal = 0;
SpiConf_SpiChannel_GateDrv0Cfg0Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg1Ch.LongName = 'Gate Drive 0 Config 1 Channel';
SpiConf_SpiChannel_GateDrv0Cfg1Ch.Description = 'Channel Id for Config 1 register';
SpiConf_SpiChannel_GateDrv0Cfg1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg1Ch.EngVal = 1;
SpiConf_SpiChannel_GateDrv0Cfg1Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg2Ch.LongName = 'Gate Drive 0 Config 2 Channel';
SpiConf_SpiChannel_GateDrv0Cfg2Ch.Description = 'Channel Id for Config 2 register';
SpiConf_SpiChannel_GateDrv0Cfg2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg2Ch.EngVal = 2;
SpiConf_SpiChannel_GateDrv0Cfg2Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg3Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg3Ch.LongName = 'Gate Drive 0 Config 3 Channel';
SpiConf_SpiChannel_GateDrv0Cfg3Ch.Description = 'Channel Id for Config 3 register';
SpiConf_SpiChannel_GateDrv0Cfg3Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg3Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg3Ch.EngVal = 3;
SpiConf_SpiChannel_GateDrv0Cfg3Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg3Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg4Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg4Ch.LongName = 'Gate Drive 0 Config 4 Channel';
SpiConf_SpiChannel_GateDrv0Cfg4Ch.Description = 'Channel Id for Config 4 register';
SpiConf_SpiChannel_GateDrv0Cfg4Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg4Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg4Ch.EngVal = 4;
SpiConf_SpiChannel_GateDrv0Cfg4Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg4Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg5Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg5Ch.LongName = 'Gate Drive 0 Config 5 Channel';
SpiConf_SpiChannel_GateDrv0Cfg5Ch.Description = 'Channel Id for Config 5 register';
SpiConf_SpiChannel_GateDrv0Cfg5Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg5Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg5Ch.EngVal = 5;
SpiConf_SpiChannel_GateDrv0Cfg5Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg5Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg6Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg6Ch.LongName = 'Gate Drive 0 Config 6 Channel';
SpiConf_SpiChannel_GateDrv0Cfg6Ch.Description = 'Channel Id for Config 6 register';
SpiConf_SpiChannel_GateDrv0Cfg6Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg6Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg6Ch.EngVal = 6;
SpiConf_SpiChannel_GateDrv0Cfg6Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg6Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg7Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg7Ch.LongName = 'Gate Drive 0 Config 7 Channel';
SpiConf_SpiChannel_GateDrv0Cfg7Ch.Description = 'Channel Id for Config 7 register';
SpiConf_SpiChannel_GateDrv0Cfg7Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg7Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg7Ch.EngVal = 7;
SpiConf_SpiChannel_GateDrv0Cfg7Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg7Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg8Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg8Ch.LongName = 'Gate Drive 0 Config 8 Channel';
SpiConf_SpiChannel_GateDrv0Cfg8Ch.Description = 'Channel Id for Config 8 register';
SpiConf_SpiChannel_GateDrv0Cfg8Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg8Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg8Ch.EngVal = 8;
SpiConf_SpiChannel_GateDrv0Cfg8Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg8Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg9Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg9Ch.LongName = 'Gate Drive 0 Config 9 Channel';
SpiConf_SpiChannel_GateDrv0Cfg9Ch.Description = 'Channel Id for Config 9 register';
SpiConf_SpiChannel_GateDrv0Cfg9Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg9Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg9Ch.EngVal = 9;
SpiConf_SpiChannel_GateDrv0Cfg9Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg9Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg10Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg10Ch.LongName = 'Gate Drive 0 Config 10 Channel';
SpiConf_SpiChannel_GateDrv0Cfg10Ch.Description = 'Channel Id for Config 10 register';
SpiConf_SpiChannel_GateDrv0Cfg10Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg10Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg10Ch.EngVal = 10;
SpiConf_SpiChannel_GateDrv0Cfg10Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg10Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg11Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg11Ch.LongName = 'Gate Drive 0 Config 11 Channel';
SpiConf_SpiChannel_GateDrv0Cfg11Ch.Description = 'Channel Id for Config 11 register';
SpiConf_SpiChannel_GateDrv0Cfg11Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg11Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg11Ch.EngVal = 11;
SpiConf_SpiChannel_GateDrv0Cfg11Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg11Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg12Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg12Ch.LongName = 'Gate Drive 0 Config 12 Channel';
SpiConf_SpiChannel_GateDrv0Cfg12Ch.Description = 'Channel Id for Config 12 register';
SpiConf_SpiChannel_GateDrv0Cfg12Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg12Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg12Ch.EngVal = 12;
SpiConf_SpiChannel_GateDrv0Cfg12Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg12Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Cfg13Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Cfg13Ch.LongName = 'Gate Drive 0 Config 13 Channel';
SpiConf_SpiChannel_GateDrv0Cfg13Ch.Description = 'Channel Id for Config 13 register';
SpiConf_SpiChannel_GateDrv0Cfg13Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Cfg13Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Cfg13Ch.EngVal = 13;
SpiConf_SpiChannel_GateDrv0Cfg13Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Cfg13Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.LongName = 'Gate Drive 0 Verify Command 0 Channel';
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.Description = 'Channel Id for Verify Command 0 register';
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.EngVal = 14;
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.Header = '';
SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.LongName = 'Gate Drive 0 Verify Command 1 Channel';
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.Description = 'Channel Id for Verify Command 1 register';
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.EngVal = 15;
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.Header = '';
SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch.LongName = 'Gate Drive 0 Verify Command 2 Channel';
SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch.Description = 'Channel Id for Verify Command 2 register';
SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch.EngVal = 16;
SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch.Header = '';
SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0VrfyRes0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.LongName = 'Gate Drive 0 Verify Result 0 Channel';
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.Description = 'Channel Id for Verify Result 0 register';
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.EngVal = 17;
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.Header = '';
SpiConf_SpiChannel_GateDrv0VrfyRes0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0VrfyRes1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.LongName = 'Gate Drive 0 Verify Result 1 Channel';
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.Description = 'Channel Id for Verify Result 1 register';
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.EngVal = 18;
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.Header = '';
SpiConf_SpiChannel_GateDrv0VrfyRes1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Mask0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Mask0Ch.LongName = 'Gate Drive 0 Mask 0 Channel';
SpiConf_SpiChannel_GateDrv0Mask0Ch.Description = 'Channel Id for Mask 0 register';
SpiConf_SpiChannel_GateDrv0Mask0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Mask0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Mask0Ch.EngVal = 19;
SpiConf_SpiChannel_GateDrv0Mask0Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Mask0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Mask1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Mask1Ch.LongName = 'Gate Drive 0 Mask 1 Channel';
SpiConf_SpiChannel_GateDrv0Mask1Ch.Description = 'Channel Id for Mask 1 register';
SpiConf_SpiChannel_GateDrv0Mask1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Mask1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Mask1Ch.EngVal = 20;
SpiConf_SpiChannel_GateDrv0Mask1Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Mask1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Mask2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Mask2Ch.LongName = 'Gate Drive 0 Mask 2 Channel';
SpiConf_SpiChannel_GateDrv0Mask2Ch.Description = 'Channel Id for Mask 2 register';
SpiConf_SpiChannel_GateDrv0Mask2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Mask2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Mask2Ch.EngVal = 21;
SpiConf_SpiChannel_GateDrv0Mask2Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Mask2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Diag0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Diag0Ch.LongName = 'Gate Drive 0 Diag 0 Channel';
SpiConf_SpiChannel_GateDrv0Diag0Ch.Description = 'Channel Id for Diag 0 register';
SpiConf_SpiChannel_GateDrv0Diag0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Diag0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Diag0Ch.EngVal = 22;
SpiConf_SpiChannel_GateDrv0Diag0Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Diag0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Diag1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Diag1Ch.LongName = 'Gate Drive 0 Diag 1 Channel';
SpiConf_SpiChannel_GateDrv0Diag1Ch.Description = 'Channel Id for Diag 1 register';
SpiConf_SpiChannel_GateDrv0Diag1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Diag1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Diag1Ch.EngVal = 23;
SpiConf_SpiChannel_GateDrv0Diag1Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Diag1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0Diag2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0Diag2Ch.LongName = 'Gate Drive 0 Diag 2 Channel';
SpiConf_SpiChannel_GateDrv0Diag2Ch.Description = 'Channel Id for Diag 2 register';
SpiConf_SpiChannel_GateDrv0Diag2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0Diag2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0Diag2Ch.EngVal = 24;
SpiConf_SpiChannel_GateDrv0Diag2Ch.Header = '';
SpiConf_SpiChannel_GateDrv0Diag2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv0CtrlCh = DataDict.Constant;
SpiConf_SpiChannel_GateDrv0CtrlCh.LongName = 'Gate Drive 0 Control Channel';
SpiConf_SpiChannel_GateDrv0CtrlCh.Description = 'Channel Id for Control register';
SpiConf_SpiChannel_GateDrv0CtrlCh.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv0CtrlCh.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv0CtrlCh.EngVal = 25;
SpiConf_SpiChannel_GateDrv0CtrlCh.Header = '';
SpiConf_SpiChannel_GateDrv0CtrlCh.Define = 'Global';




SpiConf_SpiSequence_GateDrv0Cfg0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg0Seq.LongName = 'Gate Drive 0 Config 0 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg0Seq.Description = 'Sequence Id for Config 0 register';
SpiConf_SpiSequence_GateDrv0Cfg0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg0Seq.EngVal = 0;
SpiConf_SpiSequence_GateDrv0Cfg0Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg1Seq.LongName = 'Gate Drive 0 Config 1 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg1Seq.Description = 'Sequence Id for Config 1 register';
SpiConf_SpiSequence_GateDrv0Cfg1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg1Seq.EngVal = 1;
SpiConf_SpiSequence_GateDrv0Cfg1Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg2Seq.LongName = 'Gate Drive 0 Config 2 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg2Seq.Description = 'Sequence Id for Config 2 register';
SpiConf_SpiSequence_GateDrv0Cfg2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg2Seq.EngVal = 2;
SpiConf_SpiSequence_GateDrv0Cfg2Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg3Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg3Seq.LongName = 'Gate Drive 0 Config 3 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg3Seq.Description = 'Sequence Id for Config 3 register';
SpiConf_SpiSequence_GateDrv0Cfg3Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg3Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg3Seq.EngVal = 3;
SpiConf_SpiSequence_GateDrv0Cfg3Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg3Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg4Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg4Seq.LongName = 'Gate Drive 0 Config 4 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg4Seq.Description = 'Sequence Id for Config 4 register';
SpiConf_SpiSequence_GateDrv0Cfg4Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg4Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg4Seq.EngVal = 4;
SpiConf_SpiSequence_GateDrv0Cfg4Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg4Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg5Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg5Seq.LongName = 'Gate Drive 0 Config 5 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg5Seq.Description = 'Sequence Id for Config 5 register';
SpiConf_SpiSequence_GateDrv0Cfg5Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg5Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg5Seq.EngVal = 5;
SpiConf_SpiSequence_GateDrv0Cfg5Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg5Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg6Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg6Seq.LongName = 'Gate Drive 0 Config 6 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg6Seq.Description = 'Sequence Id for Config 6 register';
SpiConf_SpiSequence_GateDrv0Cfg6Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg6Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg6Seq.EngVal = 6;
SpiConf_SpiSequence_GateDrv0Cfg6Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg6Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg7Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg7Seq.LongName = 'Gate Drive 0 Config 7 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg7Seq.Description = 'Sequence Id for Config 7 register';
SpiConf_SpiSequence_GateDrv0Cfg7Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg7Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg7Seq.EngVal = 7;
SpiConf_SpiSequence_GateDrv0Cfg7Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg7Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg8Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg8Seq.LongName = 'Gate Drive 0 Config 8 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg8Seq.Description = 'Sequence Id for Config 8 register';
SpiConf_SpiSequence_GateDrv0Cfg8Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg8Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg8Seq.EngVal = 8;
SpiConf_SpiSequence_GateDrv0Cfg8Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg8Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg9Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg9Seq.LongName = 'Gate Drive 0 Config 9 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg9Seq.Description = 'Sequence Id for Config 9 register';
SpiConf_SpiSequence_GateDrv0Cfg9Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg9Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg9Seq.EngVal = 9;
SpiConf_SpiSequence_GateDrv0Cfg9Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg9Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg10Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg10Seq.LongName = 'Gate Drive 0 Config 10 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg10Seq.Description = 'Sequence Id for Config 10 register';
SpiConf_SpiSequence_GateDrv0Cfg10Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg10Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg10Seq.EngVal = 10;
SpiConf_SpiSequence_GateDrv0Cfg10Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg10Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg11Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg11Seq.LongName = 'Gate Drive 0 Config 11 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg11Seq.Description = 'Sequence Id for Config 11 register';
SpiConf_SpiSequence_GateDrv0Cfg11Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg11Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg11Seq.EngVal = 11;
SpiConf_SpiSequence_GateDrv0Cfg11Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg11Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg12Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg12Seq.LongName = 'Gate Drive 0 Config 12 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg12Seq.Description = 'Sequence Id for Config 12 register';
SpiConf_SpiSequence_GateDrv0Cfg12Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg12Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg12Seq.EngVal = 12;
SpiConf_SpiSequence_GateDrv0Cfg12Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg12Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Cfg13Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Cfg13Seq.LongName = 'Gate Drive 0 Config 13 Sequence';
SpiConf_SpiSequence_GateDrv0Cfg13Seq.Description = 'Sequence Id for Config 13 register';
SpiConf_SpiSequence_GateDrv0Cfg13Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Cfg13Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Cfg13Seq.EngVal = 13;
SpiConf_SpiSequence_GateDrv0Cfg13Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Cfg13Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.LongName = 'Gate Drive 0 Verify Command 0 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.Description = 'Sequence Id for Verify Command 0 register';
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.EngVal = 14;
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.Header = '';
SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.LongName = 'Gate Drive 0 Verify Command 1 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.Description = 'Sequence Id for Verify Command 1 register';
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.EngVal = 15;
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.Header = '';
SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq.LongName = 'Gate Drive 0 Verify Command 2 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq.Description = 'Sequence Id for Verify Command 2 register';
SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq.EngVal = 16;
SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq.Header = '';
SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0VrfyRes0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.LongName = 'Gate Drive 0 Verify Result 0 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.Description = 'Sequence Id for Verify Result 0 register';
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.EngVal = 17;
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.Header = '';
SpiConf_SpiSequence_GateDrv0VrfyRes0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0VrfyRes1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.LongName = 'Gate Drive 0 Verify Result 1 Sequence';
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.Description = 'Sequence Id for Verify Result 1 register';
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.EngVal = 18;
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.Header = '';
SpiConf_SpiSequence_GateDrv0VrfyRes1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Mask0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Mask0Seq.LongName = 'Gate Drive 0 Mask 0 Sequence';
SpiConf_SpiSequence_GateDrv0Mask0Seq.Description = 'Sequence Id for Mask 0 register';
SpiConf_SpiSequence_GateDrv0Mask0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Mask0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Mask0Seq.EngVal = 19;
SpiConf_SpiSequence_GateDrv0Mask0Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Mask0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Mask1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Mask1Seq.LongName = 'Gate Drive 0 Mask 1 Sequence';
SpiConf_SpiSequence_GateDrv0Mask1Seq.Description = 'Sequence Id for Mask 1 register';
SpiConf_SpiSequence_GateDrv0Mask1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Mask1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Mask1Seq.EngVal = 20;
SpiConf_SpiSequence_GateDrv0Mask1Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Mask1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Mask2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Mask2Seq.LongName = 'Gate Drive 0 Mask 2 Sequence';
SpiConf_SpiSequence_GateDrv0Mask2Seq.Description = 'Sequence Id for Mask 2 register';
SpiConf_SpiSequence_GateDrv0Mask2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Mask2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Mask2Seq.EngVal = 21;
SpiConf_SpiSequence_GateDrv0Mask2Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Mask2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Diag0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Diag0Seq.LongName = 'Gate Drive 0 Diag 0 Sequence';
SpiConf_SpiSequence_GateDrv0Diag0Seq.Description = 'Sequence Id for Diag 0 register';
SpiConf_SpiSequence_GateDrv0Diag0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Diag0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Diag0Seq.EngVal = 22;
SpiConf_SpiSequence_GateDrv0Diag0Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Diag0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Diag1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Diag1Seq.LongName = 'Gate Drive 0 Diag 1 Sequence';
SpiConf_SpiSequence_GateDrv0Diag1Seq.Description = 'Sequence Id for Diag 1 register';
SpiConf_SpiSequence_GateDrv0Diag1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Diag1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Diag1Seq.EngVal = 23;
SpiConf_SpiSequence_GateDrv0Diag1Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Diag1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0Diag2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0Diag2Seq.LongName = 'Gate Drive 0 Diag 2 Sequence';
SpiConf_SpiSequence_GateDrv0Diag2Seq.Description = 'Sequence Id for Diag 2 register';
SpiConf_SpiSequence_GateDrv0Diag2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0Diag2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0Diag2Seq.EngVal = 24;
SpiConf_SpiSequence_GateDrv0Diag2Seq.Header = '';
SpiConf_SpiSequence_GateDrv0Diag2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv0CtrlSeq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv0CtrlSeq.LongName = 'Gate Drive 0 Control Sequence';
SpiConf_SpiSequence_GateDrv0CtrlSeq.Description = 'Sequence Id for Control register';
SpiConf_SpiSequence_GateDrv0CtrlSeq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv0CtrlSeq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv0CtrlSeq.EngVal = 25;
SpiConf_SpiSequence_GateDrv0CtrlSeq.Header = '';
SpiConf_SpiSequence_GateDrv0CtrlSeq.Define = 'Global';

%end of Data Dictionary