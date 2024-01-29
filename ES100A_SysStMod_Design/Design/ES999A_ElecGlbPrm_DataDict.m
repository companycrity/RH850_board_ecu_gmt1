%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 22-Mar-2015 10:51:51       %
%                                  Created with tool release: 2.5.0      %
%%-----------------------------------------------------------------------%

ES999A = DataDict.FDD;
ES999A.Version = '0.0.X';
ES999A.LongName = 'Electrical Global Parameters';
ES999A.ShoName  = 'ElecGlbPrm';
ES999A.DesignASIL = '';
ES999A.Description = 'Electrical Global Parameters';
ES999A.Ntc = {};
ES999A.Dependencies = ...
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


ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Complete';
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.Description = [...
  'Indication Temporal Monitor Initialization  Completed'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.EngVal = 60;


%end of Data Dictionary