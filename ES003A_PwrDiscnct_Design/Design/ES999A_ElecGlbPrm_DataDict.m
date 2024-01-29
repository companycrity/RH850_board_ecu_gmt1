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
ELECGLBPRM_ADCSCAGFAC_VOLTPERCNT_F32 = DataDict.Constant;
ELECGLBPRM_ADCSCAGFAC_VOLTPERCNT_F32.LongName = 'ADC Scaling Factor';
ELECGLBPRM_ADCSCAGFAC_VOLTPERCNT_F32.Description = [...
  'ADC scaling factor to convert converted counts to volts'];
ELECGLBPRM_ADCSCAGFAC_VOLTPERCNT_F32.DocUnits = 'VoltPerCnt';
ELECGLBPRM_ADCSCAGFAC_VOLTPERCNT_F32.EngDT = dt.float32;
ELECGLBPRM_ADCSCAGFAC_VOLTPERCNT_F32.EngVal = 0.001221001221001221;


ELECGLBPRM_MOTCTRLPERDIVS_CNTPERNANOSEC_U13P19 = DataDict.Constant;
ELECGLBPRM_MOTCTRLPERDIVS_CNTPERNANOSEC_U13P19.LongName = 'Inverse Motor Control Period';
ELECGLBPRM_MOTCTRLPERDIVS_CNTPERNANOSEC_U13P19.Description = [...
  'Inverse of MOTCTRLTIMFRQ in units of NanoSec. MOTCTRLPERDIVS = MOTCTRL' ...
  'TIMFRQ.EngVal/1e9'];
ELECGLBPRM_MOTCTRLPERDIVS_CNTPERNANOSEC_U13P19.DocUnits = 'CntPerNanoSec';
ELECGLBPRM_MOTCTRLPERDIVS_CNTPERNANOSEC_U13P19.EngDT = dt.u21p19; %Needs to be fixed with new tool set
ELECGLBPRM_MOTCTRLPERDIVS_CNTPERNANOSEC_U13P19.EngVal = 0.08;


ELECGLBPRM_MOTCTRLTIMFRQ_HZ_U32 = DataDict.Constant;
ELECGLBPRM_MOTCTRLTIMFRQ_HZ_U32.LongName = 'Motor Control Timer Unit Frequency';
ELECGLBPRM_MOTCTRLTIMFRQ_HZ_U32.Description = 'Frequency of the timer unit.';
ELECGLBPRM_MOTCTRLTIMFRQ_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_MOTCTRLTIMFRQ_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_MOTCTRLTIMFRQ_HZ_U32.EngVal = 80000000;


ELECGLBPRM_PWMFRQMAX_HZ_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMFRQMAX_HZ_U32.LongName = 'Maximum PWM Frequency';
ELECGLBPRM_PWMFRQMAX_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMAX_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal = 18000;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngMin = 14000;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngMax = 22000;


ELECGLBPRM_PWMFRQMIN_HZ_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMFRQMIN_HZ_U32.LongName = 'Minimum PWM Frequency';
ELECGLBPRM_PWMFRQMIN_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMIN_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal = 14000;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngMin = 14000;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngMax = 22000;


ELECGLBPRM_PWMPRDMAX_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPRDMAX_NANOSEC_U32.LongName = 'Maximum PWM Period';
ELECGLBPRM_PWMPRDMAX_NANOSEC_U32.Description = [...
  'Maximum PWM period in units of NanoSec.  PWMPRDMAX = 1e9/PWMFRQMIN.Eng' ...
  'Val.  EngMin = 1e9/22e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPRDMAX_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPRDMAX_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPRDMAX_NANOSEC_U32.EngVal = 71428.57142857144;
ELECGLBPRM_PWMPRDMAX_NANOSEC_U32.EngMin = 45454.54545;
ELECGLBPRM_PWMPRDMAX_NANOSEC_U32.EngMax = 71428.57143;


ELECGLBPRM_PWMPRDMIN_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPRDMIN_NANOSEC_U32.LongName = 'Minimum PWM Period';
ELECGLBPRM_PWMPRDMIN_NANOSEC_U32.Description = [...
  'Minimum PWM period in units of NanoSec.  PWMPRDMIN = 1e9/PWMFRQMAX.Eng' ...
  'Val.  EngMin = 1e9/22e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPRDMIN_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPRDMIN_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPRDMIN_NANOSEC_U32.EngVal = 55555.55555555556;
ELECGLBPRM_PWMPRDMIN_NANOSEC_U32.EngMin = 45454.54545;
ELECGLBPRM_PWMPRDMIN_NANOSEC_U32.EngMax = 71428.57143;

ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9 = DataDict.ConfigParam;
ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9.LongName = 'Nominal PWM Period';
ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9.Description = [...
  'Nominal PWM Period in units of MicroSec.  PWMPRDNOM = (2 * 1e6)/(PWMFR' ...
  'QMAX.EngVal + PWMFRQMIN.EngVal).  EngMin = 1e6/22e3, EngMax = 1e6/14e3' ...
  ''];
ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9.DocUnits = 'MicroSec';
ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9.EngDT = dt.u7p9;
ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9.EngVal = 62.5;
ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9.EngMin = 45.45454545;
ELECGLBPRM_PWMPRDNOM_MICROSEC_U7P9.EngMax = 71.42857143;


IVTRCNT_CNT_U08 = DataDict.ConfigParam;
IVTRCNT_CNT_U08.LongName = 'Inverter Count';
IVTRCNT_CNT_U08.Description = [...
  'Number of Inverters'];
IVTRCNT_CNT_U08.DocUnits = 'Cnt';
IVTRCNT_CNT_U08.EngDT = dt.u08;
IVTRCNT_CNT_U08.EngVal = 1;
IVTRCNT_CNT_U08.EngMin = 1;
IVTRCNT_CNT_U08.EngMax = 2;

ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = [...
  'Number of Inverters'];
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMax = 2;


ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.LongName = 'StartUp State - Current Measurement WarmInit Initialization Complete';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.Description = [...
  'Indication Current Measurement WarmInit Initialization Completed'];
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.EngVal = 120;


ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.LongName = 'StartUp State - Current Measurement WarmInit Initialization Start';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Current Measurement WarmInit Initialization '];
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngVal = 100;


ELECGLBPRM_STRTUPSTDI_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTDI_CNT_U08.LongName = 'StartUp State - Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.Description = 'StartUp State in Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngVal = 160;


ELECGLBPRM_STRTUPSTINIT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTINIT_CNT_U08.LongName = 'StartUp State - Initial';
ELECGLBPRM_STRTUPSTINIT_CNT_U08.Description = 'Initial StartUp State';
ELECGLBPRM_STRTUPSTINIT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTINIT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTINIT_CNT_U08.EngVal = 20;


ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.LongName = 'StartUp State - Motor Driver Initialization Complete';
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.Description = [...
  'Indication Motor Driver Initialization Completed'];
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.EngVal = 100;


ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.LongName = 'StartUp State - Motor Driver Initialization Start';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.Description = [...
  'Indication to start Motor Driver Initialization '];
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngVal = 80;


ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.LongName = 'StartUp State - Power Disconnect A Complete';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.Description = [...
  'Indication Power Disconnect A Sequence Completed'];
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.EngVal = 40;


ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect A Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect A Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngVal = 20;


ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.LongName = 'StartUp State - Power Disconnect B Complete';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.Description = [...
  'Indication Power Disconnect B Sequence Completed'];
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.EngVal = 80;


ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect B Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect B Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngVal = 60;


ELECGLBPRM_STRTUPSTRUN_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTRUN_CNT_U08.LongName = 'StartUp State - Run';
ELECGLBPRM_STRTUPSTRUN_CNT_U08.Description = 'StartUp State in Run';
ELECGLBPRM_STRTUPSTRUN_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTRUN_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTRUN_CNT_U08.EngVal = 140;


ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Complete';
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.Description = [...
  'Indication Temporal Monitor Initialization  Completed'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.EngVal = 60;


ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Start';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Temporal Monitor Initialization'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngVal = 40;


ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.LongName = 'StartUp State - Warm Initialization Complete';
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.Description = [...
  'Indication to start Warm Initialization Complete'];
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.EngVal = 120;


%end of Data Dictionary