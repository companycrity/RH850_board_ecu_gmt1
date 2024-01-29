%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-Apr-2015 10:42:27       %
%                                  Created with tool release: 2.8.0      %
%%-----------------------------------------------------------------------%

AR200A = DataDict.FDD;
AR200A.Version = '1.0.X';
AR200A.LongName = 'AUTOSAR Support';
AR200A.ShoName  = 'ArSuprt';
AR200A.DesignASIL = 'D';
AR200A.Description = [...
  'Component containing the AUTOSAR defined constants defined by Std_Type' ...
  's.h'];
AR200A.Ntc = ...
	{};
AR200A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------

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
E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Header = 'Std_Types.h';
E_NOT_OK.Define = 'Global';


E_OK = DataDict.Constant;
E_OK.LongName = 'E Ok';
E_OK.Description = [...
  'AUTOSAR Standard Return Type OK value'];
E_OK.DocUnits = 'Cnt';
E_OK.EngDT = dt.u08;
E_OK.EngVal = 0;
E_OK.Header = 'Std_Types.h';
E_OK.Define = 'Global';


STD_ACTIVE = DataDict.Constant;
STD_ACTIVE.LongName = 'Standard Active';
STD_ACTIVE.Description = [...
  'AUTOSAR value representing something in an active state'];
STD_ACTIVE.DocUnits = 'Cnt';
STD_ACTIVE.EngDT = dt.u08;
STD_ACTIVE.EngVal = 1;
STD_ACTIVE.Header = 'Std_Types.h';
STD_ACTIVE.Define = 'Global';


STD_HIGH = DataDict.Constant;
STD_HIGH.LongName = 'Standard High';
STD_HIGH.Description = [...
  'AUTOSAR value representing a physical high state.  To be used as a alt' ...
  'ernative to TRUE/FALSE as appropriate.'];
STD_HIGH.DocUnits = 'Cnt';
STD_HIGH.EngDT = dt.u08;
STD_HIGH.EngVal = 1;
STD_HIGH.Header = 'Std_Types.h';
STD_HIGH.Define = 'Global';


STD_IDLE = DataDict.Constant;
STD_IDLE.LongName = 'Standard Idle';
STD_IDLE.Description = [...
  'AUTOSAR value representing something in an idle state'];
STD_IDLE.DocUnits = 'Cnt';
STD_IDLE.EngDT = dt.u08;
STD_IDLE.EngVal = 0;
STD_IDLE.Header = 'Std_Types.h';
STD_IDLE.Define = 'Global';


STD_LOW = DataDict.Constant;
STD_LOW.LongName = 'Standard Low';
STD_LOW.Description = [...
  'AUTOSAR value representing a physical low state.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_LOW.DocUnits = 'Cnt';
STD_LOW.EngDT = dt.u08;
STD_LOW.EngVal = 0;
STD_LOW.Header = 'Std_Types.h';
STD_LOW.Define = 'Global';


STD_OFF = DataDict.Constant;
STD_OFF.LongName = 'Standard Off';
STD_OFF.Description = [...
  'AUTOSAR value representing something that is Off.  To be used as a alt' ...
  'ernative to TRUE/FALSE as appropriate.'];
STD_OFF.DocUnits = 'Cnt';
STD_OFF.EngDT = dt.u08;
STD_OFF.EngVal = 0;
STD_OFF.Header = 'Std_Types.h';
STD_OFF.Define = 'Global';


STD_ON = DataDict.Constant;
STD_ON.LongName = 'Standard On';
STD_ON.Description = [...
  'AUTOSAR value representing something that is On.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_ON.DocUnits = 'Cnt';
STD_ON.EngDT = dt.u08;
STD_ON.EngVal = 1;
STD_ON.Header = 'Std_Types.h';
STD_ON.Define = 'Global';


%end of Data Dictionary