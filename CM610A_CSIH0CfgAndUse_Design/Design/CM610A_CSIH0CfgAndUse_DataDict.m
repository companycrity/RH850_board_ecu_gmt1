%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Mar-2015 11:15:46       %
%                                  Created with tool release: 2.6.0      %
%%-----------------------------------------------------------------------%

CM610A = DataDict.FDD;
CM610A.Version = '1.0.X';
CM610A.LongName = 'CSIH0 Configuration and Use';
CM610A.ShoName  = 'CSIH0CfgAndUse';
CM610A.DesignASIL = 'D';
CM610A.Description = [...
  'Control module for Autosar SPI driver. Contains the SPI driver configu' ...
  'rations for CSIH0 used by Gate drive 1'];
CM610A.Ntc = ...
	{};
CM610A.Dependencies = ...
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
SpiConf_SpiChannel_GateDrv1Cfg0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg0Ch.LongName = 'Gate Drive 1 Config 0 Channel';
SpiConf_SpiChannel_GateDrv1Cfg0Ch.Description = 'Channel Id for Config 0 register';
SpiConf_SpiChannel_GateDrv1Cfg0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg0Ch.EngVal = 26;
SpiConf_SpiChannel_GateDrv1Cfg0Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg1Ch.LongName = 'Gate Drive 1 Config 1 Channel';
SpiConf_SpiChannel_GateDrv1Cfg1Ch.Description = 'Channel Id for Config 1 register';
SpiConf_SpiChannel_GateDrv1Cfg1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg1Ch.EngVal = 27;
SpiConf_SpiChannel_GateDrv1Cfg1Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg2Ch.LongName = 'Gate Drive 1 Config 2 Channel';
SpiConf_SpiChannel_GateDrv1Cfg2Ch.Description = 'Channel Id for Config 2 register';
SpiConf_SpiChannel_GateDrv1Cfg2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg2Ch.EngVal = 28;
SpiConf_SpiChannel_GateDrv1Cfg2Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg3Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg3Ch.LongName = 'Gate Drive 1 Config 3 Channel';
SpiConf_SpiChannel_GateDrv1Cfg3Ch.Description = 'Channel Id for Config 3 register';
SpiConf_SpiChannel_GateDrv1Cfg3Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg3Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg3Ch.EngVal = 29;
SpiConf_SpiChannel_GateDrv1Cfg3Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg3Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg4Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg4Ch.LongName = 'Gate Drive 1 Config 4 Channel';
SpiConf_SpiChannel_GateDrv1Cfg4Ch.Description = 'Channel Id for Config 4 register';
SpiConf_SpiChannel_GateDrv1Cfg4Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg4Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg4Ch.EngVal = 30;
SpiConf_SpiChannel_GateDrv1Cfg4Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg4Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg5Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg5Ch.LongName = 'Gate Drive 1 Config 5 Channel';
SpiConf_SpiChannel_GateDrv1Cfg5Ch.Description = 'Channel Id for Config 5 register';
SpiConf_SpiChannel_GateDrv1Cfg5Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg5Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg5Ch.EngVal = 31;
SpiConf_SpiChannel_GateDrv1Cfg5Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg5Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg6Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg6Ch.LongName = 'Gate Drive 1 Config 6 Channel';
SpiConf_SpiChannel_GateDrv1Cfg6Ch.Description = 'Channel Id for Config 6 register';
SpiConf_SpiChannel_GateDrv1Cfg6Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg6Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg6Ch.EngVal = 32;
SpiConf_SpiChannel_GateDrv1Cfg6Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg6Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg7Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg7Ch.LongName = 'Gate Drive 1 Config 7 Channel';
SpiConf_SpiChannel_GateDrv1Cfg7Ch.Description = 'Channel Id for Config 7 register';
SpiConf_SpiChannel_GateDrv1Cfg7Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg7Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg7Ch.EngVal = 33;
SpiConf_SpiChannel_GateDrv1Cfg7Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg7Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg8Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg8Ch.LongName = 'Gate Drive 1 Config 8 Channel';
SpiConf_SpiChannel_GateDrv1Cfg8Ch.Description = 'Channel Id for Config 8 register';
SpiConf_SpiChannel_GateDrv1Cfg8Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg8Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg8Ch.EngVal = 34;
SpiConf_SpiChannel_GateDrv1Cfg8Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg8Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg9Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg9Ch.LongName = 'Gate Drive 1 Config 9 Channel';
SpiConf_SpiChannel_GateDrv1Cfg9Ch.Description = 'Channel Id for Config 9 register';
SpiConf_SpiChannel_GateDrv1Cfg9Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg9Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg9Ch.EngVal = 35;
SpiConf_SpiChannel_GateDrv1Cfg9Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg9Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg10Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg10Ch.LongName = 'Gate Drive 1 Config 10 Channel';
SpiConf_SpiChannel_GateDrv1Cfg10Ch.Description = 'Channel Id for Config 10 register';
SpiConf_SpiChannel_GateDrv1Cfg10Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg10Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg10Ch.EngVal = 36;
SpiConf_SpiChannel_GateDrv1Cfg10Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg10Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg11Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg11Ch.LongName = 'Gate Drive 1 Config 11 Channel';
SpiConf_SpiChannel_GateDrv1Cfg11Ch.Description = 'Channel Id for Config 11 register';
SpiConf_SpiChannel_GateDrv1Cfg11Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg11Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg11Ch.EngVal = 37;
SpiConf_SpiChannel_GateDrv1Cfg11Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg11Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg12Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg12Ch.LongName = 'Gate Drive 1 Config 12 Channel';
SpiConf_SpiChannel_GateDrv1Cfg12Ch.Description = 'Channel Id for Config 12 register';
SpiConf_SpiChannel_GateDrv1Cfg12Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg12Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg12Ch.EngVal = 38;
SpiConf_SpiChannel_GateDrv1Cfg12Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg12Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Cfg13Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Cfg13Ch.LongName = 'Gate Drive 1 Config 13 Channel';
SpiConf_SpiChannel_GateDrv1Cfg13Ch.Description = 'Channel Id for Config 13 register';
SpiConf_SpiChannel_GateDrv1Cfg13Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Cfg13Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Cfg13Ch.EngVal = 39;
SpiConf_SpiChannel_GateDrv1Cfg13Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Cfg13Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.LongName = 'Gate Drive 1 Verify Command 0 Channel';
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.Description = 'Channel Id for Verify Command 0 register';
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.EngVal = 40;
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.Header = '';
SpiConf_SpiChannel_GateDrv1VrfyCmd0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.LongName = 'Gate Drive 1 Verify Command 1 Channel';
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.Description = 'Channel Id for Verify Command 1 register';
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.EngVal = 41;
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.Header = '';
SpiConf_SpiChannel_GateDrv1VrfyCmd1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch.LongName = 'Gate Drive 1 Verify Command 2 Channel';
SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch.Description = 'Channel Id for Verify Command 2 register';
SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch.EngVal = 42;
SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch.Header = '';
SpiConf_SpiChannel_GateDrv1VrfyCmd2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1VrfyRes0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.LongName = 'Gate Drive 1 Verify Result 0 Channel';
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.Description = 'Channel Id for Verify Result 0 register';
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.EngVal = 43;
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.Header = '';
SpiConf_SpiChannel_GateDrv1VrfyRes0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1VrfyRes1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.LongName = 'Gate Drive 1 Verify Result 1 Channel';
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.Description = 'Channel Id for Verify Result 1 register';
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.EngVal = 44;
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.Header = '';
SpiConf_SpiChannel_GateDrv1VrfyRes1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Mask0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Mask0Ch.LongName = 'Gate Drive 1 Mask 0 Channel';
SpiConf_SpiChannel_GateDrv1Mask0Ch.Description = 'Channel Id for Mask 0 register';
SpiConf_SpiChannel_GateDrv1Mask0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Mask0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Mask0Ch.EngVal = 45;
SpiConf_SpiChannel_GateDrv1Mask0Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Mask0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Mask1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Mask1Ch.LongName = 'Gate Drive 1 Mask 1 Channel';
SpiConf_SpiChannel_GateDrv1Mask1Ch.Description = 'Channel Id for Mask 1 register';
SpiConf_SpiChannel_GateDrv1Mask1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Mask1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Mask1Ch.EngVal = 46;
SpiConf_SpiChannel_GateDrv1Mask1Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Mask1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Mask2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Mask2Ch.LongName = 'Gate Drive 1 Mask 2 Channel';
SpiConf_SpiChannel_GateDrv1Mask2Ch.Description = 'Channel Id for Mask 2 register';
SpiConf_SpiChannel_GateDrv1Mask2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Mask2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Mask2Ch.EngVal = 47;
SpiConf_SpiChannel_GateDrv1Mask2Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Mask2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Diag0Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Diag0Ch.LongName = 'Gate Drive 1 Diag 0 Channel';
SpiConf_SpiChannel_GateDrv1Diag0Ch.Description = 'Channel Id for Diag 0 register';
SpiConf_SpiChannel_GateDrv1Diag0Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Diag0Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Diag0Ch.EngVal = 48;
SpiConf_SpiChannel_GateDrv1Diag0Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Diag0Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Diag1Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Diag1Ch.LongName = 'Gate Drive 1 Diag 1 Channel';
SpiConf_SpiChannel_GateDrv1Diag1Ch.Description = 'Channel Id for Diag 1 register';
SpiConf_SpiChannel_GateDrv1Diag1Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Diag1Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Diag1Ch.EngVal = 49;
SpiConf_SpiChannel_GateDrv1Diag1Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Diag1Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1Diag2Ch = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1Diag2Ch.LongName = 'Gate Drive 1 Diag 2 Channel';
SpiConf_SpiChannel_GateDrv1Diag2Ch.Description = 'Channel Id for Diag 2 register';
SpiConf_SpiChannel_GateDrv1Diag2Ch.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1Diag2Ch.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1Diag2Ch.EngVal = 50;
SpiConf_SpiChannel_GateDrv1Diag2Ch.Header = '';
SpiConf_SpiChannel_GateDrv1Diag2Ch.Define = 'Global';

SpiConf_SpiChannel_GateDrv1CtrlCh = DataDict.Constant;
SpiConf_SpiChannel_GateDrv1CtrlCh.LongName = 'Gate Drive 1 Control Channel';
SpiConf_SpiChannel_GateDrv1CtrlCh.Description = 'Channel Id for Control register';
SpiConf_SpiChannel_GateDrv1CtrlCh.DocUnits = 'Cnt';
SpiConf_SpiChannel_GateDrv1CtrlCh.EngDT = dt.u08;
SpiConf_SpiChannel_GateDrv1CtrlCh.EngVal = 51;
SpiConf_SpiChannel_GateDrv1CtrlCh.Header = '';
SpiConf_SpiChannel_GateDrv1CtrlCh.Define = 'Global';




SpiConf_SpiSequence_GateDrv1Cfg0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg0Seq.LongName = 'Gate Drive 1 Config 0 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg0Seq.Description = 'Sequence Id for Config 0 register';
SpiConf_SpiSequence_GateDrv1Cfg0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg0Seq.EngVal = 26;
SpiConf_SpiSequence_GateDrv1Cfg0Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg1Seq.LongName = 'Gate Drive 1 Config 1 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg1Seq.Description = 'Sequence Id for Config 1 register';
SpiConf_SpiSequence_GateDrv1Cfg1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg1Seq.EngVal = 27;
SpiConf_SpiSequence_GateDrv1Cfg1Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg2Seq.LongName = 'Gate Drive 1 Config 2 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg2Seq.Description = 'Sequence Id for Config 2 register';
SpiConf_SpiSequence_GateDrv1Cfg2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg2Seq.EngVal = 28;
SpiConf_SpiSequence_GateDrv1Cfg2Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg3Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg3Seq.LongName = 'Gate Drive 1 Config 3 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg3Seq.Description = 'Sequence Id for Config 3 register';
SpiConf_SpiSequence_GateDrv1Cfg3Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg3Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg3Seq.EngVal = 29;
SpiConf_SpiSequence_GateDrv1Cfg3Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg3Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg4Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg4Seq.LongName = 'Gate Drive 1 Config 4 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg4Seq.Description = 'Sequence Id for Config 4 register';
SpiConf_SpiSequence_GateDrv1Cfg4Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg4Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg4Seq.EngVal = 30;
SpiConf_SpiSequence_GateDrv1Cfg4Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg4Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg5Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg5Seq.LongName = 'Gate Drive 1 Config 5 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg5Seq.Description = 'Sequence Id for Config 5 register';
SpiConf_SpiSequence_GateDrv1Cfg5Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg5Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg5Seq.EngVal = 31;
SpiConf_SpiSequence_GateDrv1Cfg5Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg5Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg6Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg6Seq.LongName = 'Gate Drive 1 Config 6 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg6Seq.Description = 'Sequence Id for Config 6 register';
SpiConf_SpiSequence_GateDrv1Cfg6Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg6Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg6Seq.EngVal = 32;
SpiConf_SpiSequence_GateDrv1Cfg6Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg6Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg7Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg7Seq.LongName = 'Gate Drive 1 Config 7 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg7Seq.Description = 'Sequence Id for Config 7 register';
SpiConf_SpiSequence_GateDrv1Cfg7Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg7Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg7Seq.EngVal = 33;
SpiConf_SpiSequence_GateDrv1Cfg7Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg7Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg8Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg8Seq.LongName = 'Gate Drive 1 Config 8 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg8Seq.Description = 'Sequence Id for Config 8 register';
SpiConf_SpiSequence_GateDrv1Cfg8Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg8Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg8Seq.EngVal = 34;
SpiConf_SpiSequence_GateDrv1Cfg8Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg8Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg9Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg9Seq.LongName = 'Gate Drive 1 Config 9 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg9Seq.Description = 'Sequence Id for Config 9 register';
SpiConf_SpiSequence_GateDrv1Cfg9Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg9Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg9Seq.EngVal = 35;
SpiConf_SpiSequence_GateDrv1Cfg9Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg9Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg10Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg10Seq.LongName = 'Gate Drive 1 Config 10 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg10Seq.Description = 'Sequence Id for Config 10 register';
SpiConf_SpiSequence_GateDrv1Cfg10Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg10Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg10Seq.EngVal = 36;
SpiConf_SpiSequence_GateDrv1Cfg10Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg10Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg11Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg11Seq.LongName = 'Gate Drive 1 Config 11 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg11Seq.Description = 'Sequence Id for Config 11 register';
SpiConf_SpiSequence_GateDrv1Cfg11Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg11Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg11Seq.EngVal = 37;
SpiConf_SpiSequence_GateDrv1Cfg11Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg11Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg12Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg12Seq.LongName = 'Gate Drive 1 Config 12 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg12Seq.Description = 'Sequence Id for Config 12 register';
SpiConf_SpiSequence_GateDrv1Cfg12Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg12Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg12Seq.EngVal = 38;
SpiConf_SpiSequence_GateDrv1Cfg12Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg12Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Cfg13Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Cfg13Seq.LongName = 'Gate Drive 1 Config 13 Sequence';
SpiConf_SpiSequence_GateDrv1Cfg13Seq.Description = 'Sequence Id for Config 13 register';
SpiConf_SpiSequence_GateDrv1Cfg13Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Cfg13Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Cfg13Seq.EngVal = 39;
SpiConf_SpiSequence_GateDrv1Cfg13Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Cfg13Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.LongName = 'Gate Drive 1 Verify Command 0 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.Description = 'Sequence Id for Verify Command 0 register';
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.EngVal = 40;
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.Header = '';
SpiConf_SpiSequence_GateDrv1VrfyCmd0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.LongName = 'Gate Drive 1 Verify Command 1 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.Description = 'Sequence Id for Verify Command 1 register';
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.EngVal = 41;
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.Header = '';
SpiConf_SpiSequence_GateDrv1VrfyCmd1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq.LongName = 'Gate Drive 1 Verify Command 2 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq.Description = 'Sequence Id for Verify Command 2 register';
SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq.EngVal = 42;
SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq.Header = '';
SpiConf_SpiSequence_GateDrv1VrfyCmd2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1VrfyRes0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.LongName = 'Gate Drive 1 Verify Result 0 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.Description = 'Sequence Id for Verify Result 0 register';
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.EngVal = 43;
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.Header = '';
SpiConf_SpiSequence_GateDrv1VrfyRes0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1VrfyRes1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.LongName = 'Gate Drive 1 Verify Result 1 Sequence';
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.Description = 'Sequence Id for Verify Result 1 register';
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.EngVal = 44;
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.Header = '';
SpiConf_SpiSequence_GateDrv1VrfyRes1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Mask0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Mask0Seq.LongName = 'Gate Drive 1 Mask 0 Sequence';
SpiConf_SpiSequence_GateDrv1Mask0Seq.Description = 'Sequence Id for Mask 0 register';
SpiConf_SpiSequence_GateDrv1Mask0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Mask0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Mask0Seq.EngVal = 45;
SpiConf_SpiSequence_GateDrv1Mask0Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Mask0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Mask1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Mask1Seq.LongName = 'Gate Drive 1 Mask 1 Sequence';
SpiConf_SpiSequence_GateDrv1Mask1Seq.Description = 'Sequence Id for Mask 1 register';
SpiConf_SpiSequence_GateDrv1Mask1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Mask1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Mask1Seq.EngVal = 46;
SpiConf_SpiSequence_GateDrv1Mask1Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Mask1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Mask2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Mask2Seq.LongName = 'Gate Drive 1 Mask 2 Sequence';
SpiConf_SpiSequence_GateDrv1Mask2Seq.Description = 'Sequence Id for Mask 2 register';
SpiConf_SpiSequence_GateDrv1Mask2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Mask2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Mask2Seq.EngVal = 47;
SpiConf_SpiSequence_GateDrv1Mask2Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Mask2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Diag0Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Diag0Seq.LongName = 'Gate Drive 1 Diag 0 Sequence';
SpiConf_SpiSequence_GateDrv1Diag0Seq.Description = 'Sequence Id for Diag 0 register';
SpiConf_SpiSequence_GateDrv1Diag0Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Diag0Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Diag0Seq.EngVal = 48;
SpiConf_SpiSequence_GateDrv1Diag0Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Diag0Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Diag1Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Diag1Seq.LongName = 'Gate Drive 1 Diag 1 Sequence';
SpiConf_SpiSequence_GateDrv1Diag1Seq.Description = 'Sequence Id for Diag 1 register';
SpiConf_SpiSequence_GateDrv1Diag1Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Diag1Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Diag1Seq.EngVal = 49;
SpiConf_SpiSequence_GateDrv1Diag1Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Diag1Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1Diag2Seq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1Diag2Seq.LongName = 'Gate Drive 1 Diag 2 Sequence';
SpiConf_SpiSequence_GateDrv1Diag2Seq.Description = 'Sequence Id for Diag 2 register';
SpiConf_SpiSequence_GateDrv1Diag2Seq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1Diag2Seq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1Diag2Seq.EngVal = 50;
SpiConf_SpiSequence_GateDrv1Diag2Seq.Header = '';
SpiConf_SpiSequence_GateDrv1Diag2Seq.Define = 'Global';

SpiConf_SpiSequence_GateDrv1CtrlSeq = DataDict.Constant;
SpiConf_SpiSequence_GateDrv1CtrlSeq.LongName = 'Gate Drive 1 Control Sequence';
SpiConf_SpiSequence_GateDrv1CtrlSeq.Description = 'Sequence Id for Control register';
SpiConf_SpiSequence_GateDrv1CtrlSeq.DocUnits = 'Cnt';
SpiConf_SpiSequence_GateDrv1CtrlSeq.EngDT = dt.u08;
SpiConf_SpiSequence_GateDrv1CtrlSeq.EngVal = 51;
SpiConf_SpiSequence_GateDrv1CtrlSeq.Header = '';
SpiConf_SpiSequence_GateDrv1CtrlSeq.Define = 'Global';

%end of Data Dictionary